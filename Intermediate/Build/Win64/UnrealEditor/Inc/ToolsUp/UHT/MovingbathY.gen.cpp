// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsUp/MovingbathY.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingbathY() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TOOLSUP_API UClass* Z_Construct_UClass_AMovingbathY();
TOOLSUP_API UClass* Z_Construct_UClass_AMovingbathY_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsUp();
// End Cross Module References

// Begin Class AMovingbathY
void AMovingbathY::StaticRegisterNativesAMovingbathY()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingbathY);
UClass* Z_Construct_UClass_AMovingbathY_NoRegister()
{
	return AMovingbathY::StaticClass();
}
struct Z_Construct_UClass_AMovingbathY_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingbathY.h" },
		{ "ModuleRelativePath", "MovingbathY.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingbathY>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMovingbathY_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingbathY_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingbathY_Statics::ClassParams = {
	&AMovingbathY::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingbathY_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingbathY_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingbathY()
{
	if (!Z_Registration_Info_UClass_AMovingbathY.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingbathY.OuterSingleton, Z_Construct_UClass_AMovingbathY_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingbathY.OuterSingleton;
}
template<> TOOLSUP_API UClass* StaticClass<AMovingbathY>()
{
	return AMovingbathY::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingbathY);
AMovingbathY::~AMovingbathY() {}
// End Class AMovingbathY

// Begin Registration
struct Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_MovingbathY_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingbathY, AMovingbathY::StaticClass, TEXT("AMovingbathY"), &Z_Registration_Info_UClass_AMovingbathY, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingbathY), 2216717522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_MovingbathY_h_2323910233(TEXT("/Script/ToolsUp"),
	Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_MovingbathY_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_MovingbathY_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
