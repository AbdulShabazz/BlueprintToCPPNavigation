// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintToCPPNavigation/Public/BlueprintToCPPNavigationEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintToCPPNavigationEditorMode() {}

// Begin Cross Module References
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UEdMode();
UPackage* Z_Construct_UPackage__Script_BlueprintToCPPNavigation();
// End Cross Module References

// Begin Class UBlueprintToCPPNavigationEditorMode
void UBlueprintToCPPNavigationEditorMode::StaticRegisterNativesUBlueprintToCPPNavigationEditorMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintToCPPNavigationEditorMode);
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode_NoRegister()
{
	return UBlueprintToCPPNavigationEditorMode::StaticClass();
}
struct Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which\n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
#endif
		{ "IncludePath", "BlueprintToCPPNavigationEditorMode.h" },
		{ "ModuleRelativePath", "Public/BlueprintToCPPNavigationEditorMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintToCPPNavigationEditorMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdMode,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintToCPPNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode_Statics::ClassParams = {
	&UBlueprintToCPPNavigationEditorMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode()
{
	if (!Z_Registration_Info_UClass_UBlueprintToCPPNavigationEditorMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintToCPPNavigationEditorMode.OuterSingleton, Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintToCPPNavigationEditorMode.OuterSingleton;
}
template<> BLUEPRINTTOCPPNAVIGATION_API UClass* StaticClass<UBlueprintToCPPNavigationEditorMode>()
{
	return UBlueprintToCPPNavigationEditorMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintToCPPNavigationEditorMode);
// End Class UBlueprintToCPPNavigationEditorMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Public_BlueprintToCPPNavigationEditorMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintToCPPNavigationEditorMode, UBlueprintToCPPNavigationEditorMode::StaticClass, TEXT("UBlueprintToCPPNavigationEditorMode"), &Z_Registration_Info_UClass_UBlueprintToCPPNavigationEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintToCPPNavigationEditorMode), 3484416333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Public_BlueprintToCPPNavigationEditorMode_h_1898571822(TEXT("/Script/BlueprintToCPPNavigation"),
	Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Public_BlueprintToCPPNavigationEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Public_BlueprintToCPPNavigationEditorMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
