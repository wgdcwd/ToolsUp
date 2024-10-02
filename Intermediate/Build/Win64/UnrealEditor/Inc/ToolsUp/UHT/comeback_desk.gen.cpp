// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsUp/comeback_desk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecomeback_desk() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TOOLSUP_API UClass* Z_Construct_UClass_Acomeback_desk();
TOOLSUP_API UClass* Z_Construct_UClass_Acomeback_desk_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsUp();
// End Cross Module References

// Begin Class Acomeback_desk
void Acomeback_desk::StaticRegisterNativesAcomeback_desk()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Acomeback_desk);
UClass* Z_Construct_UClass_Acomeback_desk_NoRegister()
{
	return Acomeback_desk::StaticClass();
}
struct Z_Construct_UClass_Acomeback_desk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "comeback_desk.h" },
		{ "ModuleRelativePath", "comeback_desk.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acomeback_desk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Acomeback_desk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Acomeback_desk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Acomeback_desk_Statics::ClassParams = {
	&Acomeback_desk::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Acomeback_desk_Statics::Class_MetaDataParams), Z_Construct_UClass_Acomeback_desk_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Acomeback_desk()
{
	if (!Z_Registration_Info_UClass_Acomeback_desk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Acomeback_desk.OuterSingleton, Z_Construct_UClass_Acomeback_desk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Acomeback_desk.OuterSingleton;
}
template<> TOOLSUP_API UClass* StaticClass<Acomeback_desk>()
{
	return Acomeback_desk::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Acomeback_desk);
Acomeback_desk::~Acomeback_desk() {}
// End Class Acomeback_desk

// Begin Registration
struct Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_comeback_desk_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Acomeback_desk, Acomeback_desk::StaticClass, TEXT("Acomeback_desk"), &Z_Registration_Info_UClass_Acomeback_desk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Acomeback_desk), 1697955642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_comeback_desk_h_3995983061(TEXT("/Script/ToolsUp"),
	Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_comeback_desk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_comeback_desk_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
