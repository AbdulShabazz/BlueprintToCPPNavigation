// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintToCPPNavigation/Private/Tools/BlueprintToCPPNavigationSimpleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintToCPPNavigationSimpleTool() {}

// Begin Cross Module References
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_NoRegister();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder_NoRegister();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
UPackage* Z_Construct_UPackage__Script_BlueprintToCPPNavigation();
// End Cross Module References

// Begin Class UBlueprintToCPPNavigationSimpleToolBuilder
void UBlueprintToCPPNavigationSimpleToolBuilder::StaticRegisterNativesUBlueprintToCPPNavigationSimpleToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintToCPPNavigationSimpleToolBuilder);
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder_NoRegister()
{
	return UBlueprintToCPPNavigationSimpleToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for UBlueprintToCPPNavigationSimpleTool\n */" },
#endif
		{ "IncludePath", "Tools/BlueprintToCPPNavigationSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for UBlueprintToCPPNavigationSimpleTool" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintToCPPNavigationSimpleToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintToCPPNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder_Statics::ClassParams = {
	&UBlueprintToCPPNavigationSimpleToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder()
{
	if (!Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleToolBuilder.OuterSingleton, Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleToolBuilder.OuterSingleton;
}
template<> BLUEPRINTTOCPPNAVIGATION_API UClass* StaticClass<UBlueprintToCPPNavigationSimpleToolBuilder>()
{
	return UBlueprintToCPPNavigationSimpleToolBuilder::StaticClass();
}
UBlueprintToCPPNavigationSimpleToolBuilder::UBlueprintToCPPNavigationSimpleToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintToCPPNavigationSimpleToolBuilder);
UBlueprintToCPPNavigationSimpleToolBuilder::~UBlueprintToCPPNavigationSimpleToolBuilder() {}
// End Class UBlueprintToCPPNavigationSimpleToolBuilder

// Begin Class UBlueprintToCPPNavigationSimpleToolProperties
void UBlueprintToCPPNavigationSimpleToolProperties::StaticRegisterNativesUBlueprintToCPPNavigationSimpleToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintToCPPNavigationSimpleToolProperties);
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_NoRegister()
{
	return UBlueprintToCPPNavigationSimpleToolProperties::StaticClass();
}
struct Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings UObject for UBlueprintToCPPNavigationSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
#endif
		{ "IncludePath", "Tools/BlueprintToCPPNavigationSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings UObject for UBlueprintToCPPNavigationSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowExtendedInfo_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown. */" },
#endif
		{ "DisplayName", "Show Extended Info" },
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ShowExtendedInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExtendedInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintToCPPNavigationSimpleToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit(void* Obj)
{
	((UBlueprintToCPPNavigationSimpleToolProperties*)Obj)->ShowExtendedInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::NewProp_ShowExtendedInfo = { "ShowExtendedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlueprintToCPPNavigationSimpleToolProperties), &Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowExtendedInfo_MetaData), NewProp_ShowExtendedInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::NewProp_ShowExtendedInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintToCPPNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::ClassParams = {
	&UBlueprintToCPPNavigationSimpleToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties()
{
	if (!Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleToolProperties.OuterSingleton, Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleToolProperties.OuterSingleton;
}
template<> BLUEPRINTTOCPPNAVIGATION_API UClass* StaticClass<UBlueprintToCPPNavigationSimpleToolProperties>()
{
	return UBlueprintToCPPNavigationSimpleToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintToCPPNavigationSimpleToolProperties);
UBlueprintToCPPNavigationSimpleToolProperties::~UBlueprintToCPPNavigationSimpleToolProperties() {}
// End Class UBlueprintToCPPNavigationSimpleToolProperties

// Begin Class UBlueprintToCPPNavigationSimpleTool
void UBlueprintToCPPNavigationSimpleTool::StaticRegisterNativesUBlueprintToCPPNavigationSimpleTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintToCPPNavigationSimpleTool);
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_NoRegister()
{
	return UBlueprintToCPPNavigationSimpleTool::StaticClass();
}
struct Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UBlueprintToCPPNavigationSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\n * clicks left mouse button. All the action is in the ::OnClicked handler.\n */" },
#endif
		{ "IncludePath", "Tools/BlueprintToCPPNavigationSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UBlueprintToCPPNavigationSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\nclicks left mouse button. All the action is in the ::OnClicked handler." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationSimpleTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintToCPPNavigationSimpleTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintToCPPNavigationSimpleTool, Properties), Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleClickTool,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintToCPPNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::ClassParams = {
	&UBlueprintToCPPNavigationSimpleTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool()
{
	if (!Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleTool.OuterSingleton, Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleTool.OuterSingleton;
}
template<> BLUEPRINTTOCPPNAVIGATION_API UClass* StaticClass<UBlueprintToCPPNavigationSimpleTool>()
{
	return UBlueprintToCPPNavigationSimpleTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintToCPPNavigationSimpleTool);
UBlueprintToCPPNavigationSimpleTool::~UBlueprintToCPPNavigationSimpleTool() {}
// End Class UBlueprintToCPPNavigationSimpleTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Private_Tools_BlueprintToCPPNavigationSimpleTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolBuilder, UBlueprintToCPPNavigationSimpleToolBuilder::StaticClass, TEXT("UBlueprintToCPPNavigationSimpleToolBuilder"), &Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintToCPPNavigationSimpleToolBuilder), 706093933U) },
		{ Z_Construct_UClass_UBlueprintToCPPNavigationSimpleToolProperties, UBlueprintToCPPNavigationSimpleToolProperties::StaticClass, TEXT("UBlueprintToCPPNavigationSimpleToolProperties"), &Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintToCPPNavigationSimpleToolProperties), 1119238309U) },
		{ Z_Construct_UClass_UBlueprintToCPPNavigationSimpleTool, UBlueprintToCPPNavigationSimpleTool::StaticClass, TEXT("UBlueprintToCPPNavigationSimpleTool"), &Z_Registration_Info_UClass_UBlueprintToCPPNavigationSimpleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintToCPPNavigationSimpleTool), 1999960728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Private_Tools_BlueprintToCPPNavigationSimpleTool_h_2239806067(TEXT("/Script/BlueprintToCPPNavigation"),
	Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Private_Tools_BlueprintToCPPNavigationSimpleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Private_Tools_BlueprintToCPPNavigationSimpleTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
