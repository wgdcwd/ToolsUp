// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsUp/ComeBackActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComeBackActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TOOLSUP_API UClass* Z_Construct_UClass_AComeBackActor();
TOOLSUP_API UClass* Z_Construct_UClass_AComeBackActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsUp();
// End Cross Module References

// Begin Class AComeBackActor
void AComeBackActor::StaticRegisterNativesAComeBackActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AComeBackActor);
UClass* Z_Construct_UClass_AComeBackActor_NoRegister()
{
	return AComeBackActor::StaticClass();
}
struct Z_Construct_UClass_AComeBackActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ComeBackActor.h" },
		{ "ModuleRelativePath", "ComeBackActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComeBackActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AComeBackActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AComeBackActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AComeBackActor_Statics::ClassParams = {
	&AComeBackActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AComeBackActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AComeBackActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AComeBackActor()
{
	if (!Z_Registration_Info_UClass_AComeBackActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AComeBackActor.OuterSingleton, Z_Construct_UClass_AComeBackActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AComeBackActor.OuterSingleton;
}
template<> TOOLSUP_API UClass* StaticClass<AComeBackActor>()
{
	return AComeBackActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AComeBackActor);
AComeBackActor::~AComeBackActor() {}
// End Class AComeBackActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_ComeBackActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AComeBackActor, AComeBackActor::StaticClass, TEXT("AComeBackActor"), &Z_Registration_Info_UClass_AComeBackActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AComeBackActor), 790256054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_ComeBackActor_h_2221158400(TEXT("/Script/ToolsUp"),
	Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_ComeBackActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Up1_ToolsUp_Source_ToolsUp_ComeBackActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
