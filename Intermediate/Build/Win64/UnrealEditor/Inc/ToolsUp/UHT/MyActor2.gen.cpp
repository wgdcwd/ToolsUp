// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsUp/MyActor2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor2() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TOOLSUP_API UClass* Z_Construct_UClass_AMyActor2();
TOOLSUP_API UClass* Z_Construct_UClass_AMyActor2_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsUp();
// End Cross Module References

// Begin Class AMyActor2
void AMyActor2::StaticRegisterNativesAMyActor2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor2);
UClass* Z_Construct_UClass_AMyActor2_NoRegister()
{
	return AMyActor2::StaticClass();
}
struct Z_Construct_UClass_AMyActor2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor2.h" },
		{ "ModuleRelativePath", "MyActor2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActor2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor2_Statics::ClassParams = {
	&AMyActor2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor2()
{
	if (!Z_Registration_Info_UClass_AMyActor2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor2.OuterSingleton, Z_Construct_UClass_AMyActor2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor2.OuterSingleton;
}
template<> TOOLSUP_API UClass* StaticClass<AMyActor2>()
{
	return AMyActor2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor2);
AMyActor2::~AMyActor2() {}
// End Class AMyActor2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_MyActor2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor2, AMyActor2::StaticClass, TEXT("AMyActor2"), &Z_Registration_Info_UClass_AMyActor2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor2), 2127449140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_MyActor2_h_837562253(TEXT("/Script/ToolsUp"),
	Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_MyActor2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_MyActor2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
