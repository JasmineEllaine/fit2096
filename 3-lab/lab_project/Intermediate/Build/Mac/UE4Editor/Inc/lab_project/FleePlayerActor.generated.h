// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAB_PROJECT_FleePlayerActor_generated_h
#error "FleePlayerActor.generated.h already included, missing '#pragma once' in FleePlayerActor.h"
#endif
#define LAB_PROJECT_FleePlayerActor_generated_h

#define lab_project_Source_lab_project_FleePlayerActor_h_12_SPARSE_DATA
#define lab_project_Source_lab_project_FleePlayerActor_h_12_RPC_WRAPPERS
#define lab_project_Source_lab_project_FleePlayerActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define lab_project_Source_lab_project_FleePlayerActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFleePlayerActor(); \
	friend struct Z_Construct_UClass_AFleePlayerActor_Statics; \
public: \
	DECLARE_CLASS(AFleePlayerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab_project"), NO_API) \
	DECLARE_SERIALIZER(AFleePlayerActor)


#define lab_project_Source_lab_project_FleePlayerActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFleePlayerActor(); \
	friend struct Z_Construct_UClass_AFleePlayerActor_Statics; \
public: \
	DECLARE_CLASS(AFleePlayerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab_project"), NO_API) \
	DECLARE_SERIALIZER(AFleePlayerActor)


#define lab_project_Source_lab_project_FleePlayerActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFleePlayerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFleePlayerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFleePlayerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFleePlayerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFleePlayerActor(AFleePlayerActor&&); \
	NO_API AFleePlayerActor(const AFleePlayerActor&); \
public:


#define lab_project_Source_lab_project_FleePlayerActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFleePlayerActor(AFleePlayerActor&&); \
	NO_API AFleePlayerActor(const AFleePlayerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFleePlayerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFleePlayerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFleePlayerActor)


#define lab_project_Source_lab_project_FleePlayerActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VisibleComponent() { return STRUCT_OFFSET(AFleePlayerActor, VisibleComponent); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(AFleePlayerActor, Speed); } \
	FORCEINLINE static uint32 __PPO__MinimumDistance() { return STRUCT_OFFSET(AFleePlayerActor, MinimumDistance); } \
	FORCEINLINE static uint32 __PPO__FollowTarget() { return STRUCT_OFFSET(AFleePlayerActor, FollowTarget); }


#define lab_project_Source_lab_project_FleePlayerActor_h_9_PROLOG
#define lab_project_Source_lab_project_FleePlayerActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_project_Source_lab_project_FleePlayerActor_h_12_PRIVATE_PROPERTY_OFFSET \
	lab_project_Source_lab_project_FleePlayerActor_h_12_SPARSE_DATA \
	lab_project_Source_lab_project_FleePlayerActor_h_12_RPC_WRAPPERS \
	lab_project_Source_lab_project_FleePlayerActor_h_12_INCLASS \
	lab_project_Source_lab_project_FleePlayerActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define lab_project_Source_lab_project_FleePlayerActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_project_Source_lab_project_FleePlayerActor_h_12_PRIVATE_PROPERTY_OFFSET \
	lab_project_Source_lab_project_FleePlayerActor_h_12_SPARSE_DATA \
	lab_project_Source_lab_project_FleePlayerActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	lab_project_Source_lab_project_FleePlayerActor_h_12_INCLASS_NO_PURE_DECLS \
	lab_project_Source_lab_project_FleePlayerActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB_PROJECT_API UClass* StaticClass<class AFleePlayerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID lab_project_Source_lab_project_FleePlayerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
