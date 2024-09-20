// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintToCPPNavigation/Private/Tools/BlueprintToCPPNavigationInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintToCPPNavigationInteractiveTool() {}

// Begin Cross Module References
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_NoRegister();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder_NoRegister();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties();
BLUEPRINTTOCPPNAVIGATION_API UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
UPackage* Z_Construct_UPackage__Script_BlueprintToCPPNavigation();
// End Cross Module References

// Begin Class UBlueprintToCPPNavigationInteractiveToolBuilder
void UBlueprintToCPPNavigationInteractiveToolBuilder::StaticRegisterNativesUBlueprintToCPPNavigationInteractiveToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintToCPPNavigationInteractiveToolBuilder);
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder_NoRegister()
{
	return UBlueprintToCPPNavigationInteractiveToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for UBlueprintToCPPNavigationInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/BlueprintToCPPNavigationInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for UBlueprintToCPPNavigationInteractiveTool" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintToCPPNavigationInteractiveToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintToCPPNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder_Statics::ClassParams = {
	&UBlueprintToCPPNavigationInteractiveToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder()
{
	if (!Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder.OuterSingleton;
}
template<> BLUEPRINTTOCPPNAVIGATION_API UClass* StaticClass<UBlueprintToCPPNavigationInteractiveToolBuilder>()
{
	return UBlueprintToCPPNavigationInteractiveToolBuilder::StaticClass();
}
UBlueprintToCPPNavigationInteractiveToolBuilder::UBlueprintToCPPNavigationInteractiveToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintToCPPNavigationInteractiveToolBuilder);
UBlueprintToCPPNavigationInteractiveToolBuilder::~UBlueprintToCPPNavigationInteractiveToolBuilder() {}
// End Class UBlueprintToCPPNavigationInteractiveToolBuilder

// Begin Class UBlueprintToCPPNavigationInteractiveToolProperties
void UBlueprintToCPPNavigationInteractiveToolProperties::StaticRegisterNativesUBlueprintToCPPNavigationInteractiveToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintToCPPNavigationInteractiveToolProperties);
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_NoRegister()
{
	return UBlueprintToCPPNavigationInteractiveToolProperties::StaticClass();
}
struct Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Property set for the UBlueprintToCPPNavigationInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/BlueprintToCPPNavigationInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property set for the UBlueprintToCPPNavigationInteractiveTool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First point of measurement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Second point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Second point of measurement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current distance measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current distance measurement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintToCPPNavigationInteractiveToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintToCPPNavigationInteractiveToolProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintToCPPNavigationInteractiveToolProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintToCPPNavigationInteractiveToolProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintToCPPNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::ClassParams = {
	&UBlueprintToCPPNavigationInteractiveToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties()
{
	if (!Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveToolProperties.OuterSingleton, Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveToolProperties.OuterSingleton;
}
template<> BLUEPRINTTOCPPNAVIGATION_API UClass* StaticClass<UBlueprintToCPPNavigationInteractiveToolProperties>()
{
	return UBlueprintToCPPNavigationInteractiveToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintToCPPNavigationInteractiveToolProperties);
UBlueprintToCPPNavigationInteractiveToolProperties::~UBlueprintToCPPNavigationInteractiveToolProperties() {}
// End Class UBlueprintToCPPNavigationInteractiveToolProperties

// Begin Class UBlueprintToCPPNavigationInteractiveTool
void UBlueprintToCPPNavigationInteractiveTool::StaticRegisterNativesUBlueprintToCPPNavigationInteractiveTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintToCPPNavigationInteractiveTool);
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_NoRegister()
{
	return UBlueprintToCPPNavigationInteractiveTool::StaticClass();
}
struct Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UBlueprintToCPPNavigationInteractiveTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
#endif
		{ "IncludePath", "Tools/BlueprintToCPPNavigationInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UBlueprintToCPPNavigationInteractiveTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Properties of the tool are stored here */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/BlueprintToCPPNavigationInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Properties of the tool are stored here" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintToCPPNavigationInteractiveTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintToCPPNavigationInteractiveTool, Properties), Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintToCPPNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::ClassParams = {
	&UBlueprintToCPPNavigationInteractiveTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool()
{
	if (!Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveTool.OuterSingleton, Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveTool.OuterSingleton;
}
template<> BLUEPRINTTOCPPNAVIGATION_API UClass* StaticClass<UBlueprintToCPPNavigationInteractiveTool>()
{
	return UBlueprintToCPPNavigationInteractiveTool::StaticClass();
}
UBlueprintToCPPNavigationInteractiveTool::UBlueprintToCPPNavigationInteractiveTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintToCPPNavigationInteractiveTool);
UBlueprintToCPPNavigationInteractiveTool::~UBlueprintToCPPNavigationInteractiveTool() {}
// End Class UBlueprintToCPPNavigationInteractiveTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Private_Tools_BlueprintToCPPNavigationInteractiveTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder, UBlueprintToCPPNavigationInteractiveToolBuilder::StaticClass, TEXT("UBlueprintToCPPNavigationInteractiveToolBuilder"), &Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintToCPPNavigationInteractiveToolBuilder), 867376231U) },
		{ Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveToolProperties, UBlueprintToCPPNavigationInteractiveToolProperties::StaticClass, TEXT("UBlueprintToCPPNavigationInteractiveToolProperties"), &Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintToCPPNavigationInteractiveToolProperties), 3160659683U) },
		{ Z_Construct_UClass_UBlueprintToCPPNavigationInteractiveTool, UBlueprintToCPPNavigationInteractiveTool::StaticClass, TEXT("UBlueprintToCPPNavigationInteractiveTool"), &Z_Registration_Info_UClass_UBlueprintToCPPNavigationInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintToCPPNavigationInteractiveTool), 2790140655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Private_Tools_BlueprintToCPPNavigationInteractiveTool_h_2193066026(TEXT("/Script/BlueprintToCPPNavigation"),
	Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Private_Tools_BlueprintToCPPNavigationInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_5_4_Projects_bp_to_cpp_Plugins_BlueprintToCPPNavigation_Source_BlueprintToCPPNavigation_Private_Tools_BlueprintToCPPNavigationInteractiveTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
