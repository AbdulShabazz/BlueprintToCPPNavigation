// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

// BlueprintToCppNavigationModule.cpp

#include "BlueprintToCppNavigationModule.h"

// Unreal Engine Includes
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "LevelEditor.h"
#include "BlueprintEditorModule.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "KismetCompilerModule.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraph.h"
#include "K2Node_VariableGet.h"
#include "K2Node_CallFunction.h"
#include "BlueprintActionDatabase.h"
#include "ToolMenus.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "SourceCodeNavigation.h"
#include "Editor.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "Misc/MessageDialog.h"

// Module Implementation
class FBlueprintToCPPNavigationModule : public IModuleInterface
{
public:
    virtual void StartupModule() override
    {
        // Register the plugin's menu extensions
        ExtendBlueprintContextMenu();
        RegisterAssetTypeActions();
    }

    virtual void ShutdownModule() override
    {
        // Cleanup
        UnregisterAssetTypeActions();
    }

private:
    // Map to store node GUIDs and corresponding C++ code locations
    TMap<FGuid, FString> NodeMappings;

    // Selected node in the Blueprint editor
    UEdGraphNode* SelectedNode = nullptr;

    // Extend the Blueprint editor's context menu
    void ExtendBlueprintContextMenu()
    {
        FBlueprintEditorModule& BlueprintEditorModule = FModuleManager::LoadModuleChecked<FBlueprintEditorModule>("Kismet");
        TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender);

        MenuExtender->AddMenuExtension(
            "EdGraphSchemaContextActions",
            EExtensionHook::After,
            nullptr,
            FMenuExtensionDelegate::CreateRaw(this, &FBlueprintToCPPNavigationModule::AddBlueprintContextMenuEntry)
        );

        BlueprintEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
    }

    // Add "Go to Definition" to the context menu
    void AddBlueprintContextMenuEntry(FMenuBuilder& MenuBuilder)
    {
        MenuBuilder.AddMenuEntry(
            FText::FromString("Go to Definition"),
            FText::FromString("Navigate to the corresponding C++ code"),
            FSlateIcon(),
            FUIAction(
                FExecuteAction::CreateRaw(this, &FBlueprintToCPPNavigationModule::ExecuteGoToDefinition),
                FCanExecuteAction::CreateRaw(this, &FBlueprintToCPPNavigationModule::CanExecuteGoToDefinition)
            )
        );
    }

    // Check if "Go to Definition" can be executed
    bool CanExecuteGoToDefinition() const
    {
        return SelectedNodeHasCppDefinition();
    }

    // Execute "Go to Definition"
    void ExecuteGoToDefinition()
    {
        if (SelectedNode)
        {
            FString* FilePath = NodeMappings.Find(SelectedNode->NodeGuid);
            if (FilePath)
            {
                FSourceCodeNavigation::OpenSourceFile(*FilePath);
            }
            else
            {
                FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("No corresponding C++ definition found."));
            }
        }
    }

    // Check if the selected node has a C++ definition
    bool SelectedNodeHasCppDefinition() const
    {
        return SelectedNode && NodeMappings.Contains(SelectedNode->NodeGuid);
    }

    // Get the currently selected node in the Blueprint editor
    UEdGraphNode* GetSelectedNode() const
    {
        return SelectedNode;
    }

    // Register asset type actions for the transpiler
    void RegisterAssetTypeActions()
    {
        // Implementation for adding "Transpile to C++" option in the Content Browser
        IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
        AssetTools.RegisterAssetTypeActions(MakeShareable(new FBlueprintAssetActions(this)));
    }

    // Unregister asset type actions
    void UnregisterAssetTypeActions()
    {
        // Implementation for cleanup
    }

    // Record node mapping between Blueprint nodes and C++ code
    void RecordNodeMapping(UEdGraphNode* Node, const FString& FilePath)
    {
        NodeMappings.Add(Node->NodeGuid, FilePath);
    }

    // Parse Blueprint and generate node mappings
    void ParseBlueprint(UBlueprint* Blueprint)
    {
        // Call the Python transpiler script
        FString PythonScriptPath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Scripts/BlueprintTranspiler.py"));
        FString Command = FString::Printf(TEXT("py \"%s\" \"%s\""), *PythonScriptPath, *Blueprint->GetPathName());

        // Execute the Python script
        int32 ReturnCode;
        FString StdOut;
        FString StdErr;
        FPlatformProcess::ExecProcess(*FPlatformProcess::ExecutablePath(), *Command, &ReturnCode, &StdOut, &StdErr);

        if (ReturnCode != 0)
        {
            UE_LOG(LogTemp, Error, TEXT("Transpilation failed: %s"), *StdErr);
            return;
        }

        // Load node mappings from a generated JSON file
        FString MappingFilePath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Intermediate/BlueprintMappings.json"));
        FString JsonContent;
        if (FFileHelper::LoadFileToString(JsonContent, *MappingFilePath))
        {
            // Parse JSON and populate NodeMappings
            // (Assuming the JSON is in the format: { "NodeGuid": "FilePath" })
            TSharedPtr<FJsonObject> JsonObject;
            TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonContent);
            if (FJsonSerializer::Deserialize(Reader, JsonObject))
            {
                for (const auto& Entry : JsonObject->Values)
                {
                    FGuid NodeGuid;
                    FGuid::Parse(Entry.Key, NodeGuid);
                    FString FilePath = Entry.Value->AsString();
                    NodeMappings.Add(NodeGuid, FilePath);
                }
            }
        }
    }

    // Asset type actions class for adding context menu in Content Browser
    class FBlueprintAssetActions : public FAssetTypeActions_Base
    {
    public:
        FBlueprintAssetActions(FBlueprintToCPPNavigationModule* InModule)
            : Module(InModule)
        {
        }

        virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "FBlueprintAssetActions", "Blueprint"); }
        virtual FColor GetTypeColor() const override { return FColor::Blue; }
        virtual UClass* GetSupportedClass() const override { return UBlueprint::StaticClass(); }
        virtual uint32 GetCategories() override { return EAssetTypeCategories::Blueprint; }

        virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override
        {
            auto Blueprints = GetTypedWeakObjectPtrs<UBlueprint>(InObjects);

            MenuBuilder.AddMenuEntry(
                FText::FromString("Transpile to C++"),
                FText::FromString("Generate C++ code from this Blueprint."),
                FSlateIcon(),
                FUIAction(
                    FExecuteAction::CreateSP(this, &FBlueprintAssetActions::ExecuteTranspile, Blueprints),
                    FCanExecuteAction()
                )
            );
        }

        void ExecuteTranspile(TArray<TWeakObjectPtr<UBlueprint>> Blueprints)
        {
            for (auto& BlueprintPtr : Blueprints)
            {
                if (UBlueprint* Blueprint = BlueprintPtr.Get())
                {
                    Module->ParseBlueprint(Blueprint);
                }
            }
        }

    private:
        FBlueprintToCPPNavigationModule* Module;
    };
};

IMPLEMENT_MODULE(FBlueprintToCPPNavigationModule, BlueprintToCppNavigation)