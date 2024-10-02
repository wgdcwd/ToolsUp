// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsUp/NewStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewStaticMeshComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
TOOLSUP_API UClass* Z_Construct_UClass_UNewStaticMeshComponent();
TOOLSUP_API UClass* Z_Construct_UClass_UNewStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsUp();
// End Cross Module References

// Begin Class UNewStaticMeshComponent
void UNewStaticMeshComponent::StaticRegisterNativesUNewStaticMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewStaticMeshComponent);
UClass* Z_Construct_UClass_UNewStaticMeshComponent_NoRegister()
{
	return UNewStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UNewStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "NewStaticMeshComponent.h" },
		{ "ModuleRelativePath", "NewStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNewStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewStaticMeshComponent_Statics::ClassParams = {
	&UNewStaticMeshComponent::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNewStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UNewStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UNewStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNewStaticMeshComponent.OuterSingleton;
}
template<> TOOLSUP_API UClass* StaticClass<UNewStaticMeshComponent>()
{
	return UNewStaticMeshComponent::StaticClass();
}
UNewStaticMeshComponent::UNewStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNewStaticMeshComponent);
UNewStaticMeshComponent::~UNewStaticMeshComponent() {}
// End Class UNewStaticMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewStaticMeshComponent, UNewStaticMeshComponent::StaticClass, TEXT("UNewStaticMeshComponent"), &Z_Registration_Info_UClass_UNewStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewStaticMeshComponent), 3830706796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h_1309933750(TEXT("/Script/ToolsUp"),
	Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
