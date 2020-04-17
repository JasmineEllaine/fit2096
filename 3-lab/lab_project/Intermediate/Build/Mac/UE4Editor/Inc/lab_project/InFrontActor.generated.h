// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAB_PROJECT_InFrontActor_generated_h
#error "InFrontActor.generated.h already included, missing '#pragma once' in InFrontActor.h"
#endif
#define LAB_PROJECT_InFrontActor_generated_h

#define lab_project_Source_lab_project_InFrontActor_h_13_SPARSE_DATA
#define lab_project_Source_lab_project_InFrontActor_h_13_RPC_WRAPPERS
#define lab_project_Source_lab_project_InFrontActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define lab_project_Source_lab_project_InFrontActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInFrontActor(); \
	friend struct Z_Construct_UClass_AInFrontActor_Statics; \
public: \
	DECLARE_CLASS(AInFrontActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab_project"), NO_API) \
	DECLARE_SERIALIZER(AInFrontActor)


#define lab_project_Source_lab_project_InFrontActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAInFrontActor(); \
	friend struct Z_Construct_UClass_AInFrontActor_Statics; \
public: \
	DECLARE_CLASS(AInFrontActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab_project"), NO_API) \
	DECLARE_SERIALIZER(AInFrontActor)


#define lab_project_Source_lab_project_InFrontActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInFrontActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInFrontActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInFrontActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInFrontActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInFrontActor(AInFrontActor&&); \
	NO_API AInFrontActor(const AInFrontActor&); \
public:


#define lab_project_Source_lab_project_InFrontActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInFrontActor(AInFrontActor&&); \
	NO_API AInFrontActor(const AInFrontActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInFrontActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInFrontActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInFrontActor)


#define lab_project_Source_lab_project_InFrontActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VisibleComponent() { return STRUCT_OFFSET(AInFrontActor, VisibleComponent); } \
	FORCEINLINE static uint32 __PPO__OnMaterial() { return STRUCT_OFFSET(AInFrontActor, OnMaterial); } \
	FORCEINLINE static uint32 __PPO__OffMaterial() { return STRUCT_OFFSET(AInFrontActor, OffMaterial); } \
	FORCEINLINE static uint32 __PPO__Target() { return STRUCT_OFFSET(AInFrontActor, Target); } \
	FORCEINLINE static uint32 __PPO__MaxDistance() { return STRUCT_OFFSET(AInFrontActor, MaxDistance); }


#define lab_project_Source_lab_project_InFrontActor_h_10_PROLOG
#define lab_project_Source_lab_project_InFrontActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_project_Source_lab_project_InFrontActor_h_13_PRIVATE_PROPERTY_OFFSET \
	lab_project_Source_lab_project_InFrontActor_h_13_SPARSE_DATA \
	lab_project_Source_lab_project_InFrontActor_h_13_RPC_WRAPPERS \
	lab_project_Source_lab_project_InFrontActor_h_13_INCLASS \
	lab_project_Source_lab_project_InFrontActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define lab_project_Source_lab_project_InFrontActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_project_Source_lab_project_InFrontActor_h_13_PRIVATE_PROPERTY_OFFSET \
	lab_project_Source_lab_project_InFrontActor_h_13_SPARSE_DATA \
	lab_project_Source_lab_project_InFrontActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	lab_project_Source_lab_project_InFrontActor_h_13_INCLASS_NO_PURE_DECLS \
	lab_project_Source_lab_project_InFrontActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB_PROJECT_API UClass* StaticClass<class AInFrontActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID lab_project_Source_lab_project_InFrontActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
