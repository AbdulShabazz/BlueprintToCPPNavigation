// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlueprintToCPPNavigationEditorModeToolkit.h"
#include "BlueprintToCPPNavigationEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "BlueprintToCPPNavigationEditorModeToolkit"

FBlueprintToCPPNavigationEditorModeToolkit::FBlueprintToCPPNavigationEditorModeToolkit()
{
}

void FBlueprintToCPPNavigationEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FBlueprintToCPPNavigationEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FBlueprintToCPPNavigationEditorModeToolkit::GetToolkitFName() const
{
	return FName("BlueprintToCPPNavigationEditorMode");
}

FText FBlueprintToCPPNavigationEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "BlueprintToCPPNavigationEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE
