// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAB_PROJECT_MovingWorldActor_generated_h
#error "MovingWorldActor.generated.h already included, missing '#pragma once' in MovingWorldActor.h"
#endif
#define LAB_PROJECT_MovingWorldActor_generated_h

#define lab_project_Source_lab_project_MovingWorldActor_h_12_SPARSE_DATA
#define lab_project_Source_lab_project_MovingWorldActor_h_12_RPC_WRAPPERS
#define lab_project_Source_lab_project_MovingWorldActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define lab_project_Source_lab_project_MovingWorldActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingWorldActor(); \
	friend struct Z_Construct_UClass_AMovingWorldActor_Statics; \
public: \
	DECLARE_CLASS(AMovingWorldActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab_project"), NO_API) \
	DECLARE_SERIALIZER(AMovingWorldActor)


#define lab_project_Source_lab_project_MovingWorldActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMovingWorldActor(); \
	friend struct Z_Construct_UClass_AMovingWorldActor_Statics; \
public: \
	DECLARE_CLASS(AMovingWorldActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab_project"), NO_API) \
	DECLARE_SERIALIZER(AMovingWorldActor)


#define lab_project_Source_lab_project_MovingWorldActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingWorldActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingWorldActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingWorldActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingWorldActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingWorldActor(AMovingWorldActor&&); \
	NO_API AMovingWorldActor(const AMovingWorldActor&); \
public:


#define lab_project_Source_lab_project_MovingWorldActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingWorldActor(AMovingWorldActor&&); \
	NO_API AMovingWorldActor(const AMovingWorldActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingWorldActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingWorldActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingWorldActor)


#define lab_project_Source_lab_project_MovingWorldActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TravelDistance() { return STRUCT_OFFSET(AMovingWorldActor, TravelDistance); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(AMovingWorldActor, Speed); } \
	FORCEINLINE static uint32 __PPO__Tolerance() { return STRUCT_OFFSET(AMovingWorldActor, Tolerance); } \
	FORCEINLINE static uint32 __PPO__VisibleComponent() { return STRUCT_OFFSET(AMovingWorldActor, VisibleComponent); }


#define lab_project_Source_lab_project_MovingWorldActor_h_9_PROLOG
#define lab_project_Source_lab_project_MovingWorldActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_project_Source_lab_project_MovingWorldActor_h_12_PRIVATE_PROPERTY_OFFSET \
	lab_project_Source_lab_project_MovingWorldActor_h_12_SPARSE_DATA \
	lab_project_Source_lab_project_MovingWorldActor_h_12_RPC_WRAPPERS \
	lab_project_Source_lab_project_MovingWorldActor_h_12_INCLASS \
	lab_project_Source_lab_project_MovingWorldActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define lab_project_Source_lab_project_MovingWorldActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_project_Source_lab_project_MovingWorldActor_h_12_PRIVATE_PROPERTY_OFFSET \
	lab_project_Source_lab_project_MovingWorldActor_h_12_SPARSE_DATA \
	lab_project_Source_lab_project_MovingWorldActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	lab_project_Source_lab_project_MovingWorldActor_h_12_INCLASS_NO_PURE_DECLS \
	lab_project_Source_lab_project_MovingWorldActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB_PROJECT_API UClass* StaticClass<class AMovingWorldActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID lab_project_Source_lab_project_MovingWorldActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
