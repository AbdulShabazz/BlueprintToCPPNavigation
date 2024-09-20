// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlueprintToCPPNavigationEditorMode.h"
#include "BlueprintToCPPNavigationEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "BlueprintToCPPNavigationEditorModeCommands.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/BlueprintToCPPNavigationSimpleTool.h"
#include "Tools/BlueprintToCPPNavigationInteractiveTool.h"

// step 2: register a ToolBuilder in FBlueprintToCPPNavigationEditorMode::Enter() below


#define LOCTEXT_NAMESPACE "BlueprintToCPPNavigationEditorMode"

const FEditorModeID UBlueprintToCPPNavigationEditorMode::EM_BlueprintToCPPNavigationEditorModeId = TEXT("EM_BlueprintToCPPNavigationEditorMode");

FString UBlueprintToCPPNavigationEditorMode::SimpleToolName = TEXT("BlueprintToCPPNavigation_ActorInfoTool");
FString UBlueprintToCPPNavigationEditorMode::InteractiveToolName = TEXT("BlueprintToCPPNavigation_MeasureDistanceTool");


UBlueprintToCPPNavigationEditorMode::UBlueprintToCPPNavigationEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(UBlueprintToCPPNavigationEditorMode::EM_BlueprintToCPPNavigationEditorModeId,
		LOCTEXT("ModeName", "BlueprintToCPPNavigation"),
		FSlateIcon(),
		true);
}


UBlueprintToCPPNavigationEditorMode::~UBlueprintToCPPNavigationEditorMode()
{
}


void UBlueprintToCPPNavigationEditorMode::ActorSelectionChangeNotify()
{
}

void UBlueprintToCPPNavigationEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// The string name you pass to the ToolManager is used to select/activate your ToolBuilder later.
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FBlueprintToCPPNavigationEditorModeCommands& SampleToolCommands = FBlueprintToCPPNavigationEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<UBlueprintToCPPNavigationSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<UBlueprintToCPPNavigationInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void UBlueprintToCPPNavigationEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FBlueprintToCPPNavigationEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> UBlueprintToCPPNavigationEditorMode::GetModeCommands() const
{
	return FBlueprintToCPPNavigationEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE
