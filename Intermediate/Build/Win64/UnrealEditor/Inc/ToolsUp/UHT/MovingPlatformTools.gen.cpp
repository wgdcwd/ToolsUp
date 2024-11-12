// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsUp/MovingPlatformTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatformTools() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
TOOLSUP_API UClass* Z_Construct_UClass_AMovingPlatformTools();
TOOLSUP_API UClass* Z_Construct_UClass_AMovingPlatformTools_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsUp();
// End Cross Module References

// Begin Class AMovingPlatformTools
void AMovingPlatformTools::StaticRegisterNativesAMovingPlatformTools()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatformTools);
UClass* Z_Construct_UClass_AMovingPlatformTools_NoRegister()
{
	return AMovingPlatformTools::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatformTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatformTools.h" },
		{ "ModuleRelativePath", "MovingPlatformTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "MovingPlatformTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovedDistance_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "MovingPlatformTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotaionVelocity_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "MovingPlatformTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovedDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotaionVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatformTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatformTools_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatformTools, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformVelocity_MetaData), NewProp_PlatformVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatformTools_Statics::NewProp_MovedDistance = { "MovedDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatformTools, MovedDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovedDistance_MetaData), NewProp_MovedDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatformTools_Statics::NewProp_RotaionVelocity = { "RotaionVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatformTools, RotaionVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotaionVelocity_MetaData), NewProp_RotaionVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatformTools_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatformTools_Statics::NewProp_PlatformVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatformTools_Statics::NewProp_MovedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatformTools_Statics::NewProp_RotaionVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatformTools_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatformTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatformTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatformTools_Statics::ClassParams = {
	&AMovingPlatformTools::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingPlatformTools_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatformTools_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatformTools_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatformTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatformTools()
{
	if (!Z_Registration_Info_UClass_AMovingPlatformTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatformTools.OuterSingleton, Z_Construct_UClass_AMovingPlatformTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatformTools.OuterSingleton;
}
template<> TOOLSUP_API UClass* StaticClass<AMovingPlatformTools>()
{
	return AMovingPlatformTools::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatformTools);
AMovingPlatformTools::~AMovingPlatformTools() {}
// End Class AMovingPlatformTools

// Begin Registration
struct Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_MovingPlatformTools_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatformTools, AMovingPlatformTools::StaticClass, TEXT("AMovingPlatformTools"), &Z_Registration_Info_UClass_AMovingPlatformTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatformTools), 4140657705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_MovingPlatformTools_h_978153031(TEXT("/Script/ToolsUp"),
	Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_MovingPlatformTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_MovingPlatformTools_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
