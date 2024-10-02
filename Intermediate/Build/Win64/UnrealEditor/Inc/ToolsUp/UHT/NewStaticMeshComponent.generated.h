// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NewStaticMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOOLSUP_NewStaticMeshComponent_generated_h
#error "NewStaticMeshComponent.generated.h already included, missing '#pragma once' in NewStaticMeshComponent.h"
#endif
#define TOOLSUP_NewStaticMeshComponent_generated_h

#define FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNewStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UNewStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UNewStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToolsUp"), NO_API) \
	DECLARE_SERIALIZER(UNewStaticMeshComponent)


#define FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNewStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNewStaticMeshComponent(UNewStaticMeshComponent&&); \
	UNewStaticMeshComponent(const UNewStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNewStaticMeshComponent) \
	NO_API virtual ~UNewStaticMeshComponent();


#define FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h_12_PROLOG
#define FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLSUP_API UClass* StaticClass<class UNewStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ToolsUp_Source_ToolsUp_NewStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
