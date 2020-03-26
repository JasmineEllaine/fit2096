// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASK_taskCharacter_generated_h
#error "taskCharacter.generated.h already included, missing '#pragma once' in taskCharacter.h"
#endif
#define TASK_taskCharacter_generated_h

#define task_Source_task_taskCharacter_h_14_SPARSE_DATA
#define task_Source_task_taskCharacter_h_14_RPC_WRAPPERS
#define task_Source_task_taskCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define task_Source_task_taskCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtaskCharacter(); \
	friend struct Z_Construct_UClass_AtaskCharacter_Statics; \
public: \
	DECLARE_CLASS(AtaskCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/task"), NO_API) \
	DECLARE_SERIALIZER(AtaskCharacter)


#define task_Source_task_taskCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAtaskCharacter(); \
	friend struct Z_Construct_UClass_AtaskCharacter_Statics; \
public: \
	DECLARE_CLASS(AtaskCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/task"), NO_API) \
	DECLARE_SERIALIZER(AtaskCharacter)


#define task_Source_task_taskCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtaskCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtaskCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtaskCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtaskCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtaskCharacter(AtaskCharacter&&); \
	NO_API AtaskCharacter(const AtaskCharacter&); \
public:


#define task_Source_task_taskCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtaskCharacter(AtaskCharacter&&); \
	NO_API AtaskCharacter(const AtaskCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtaskCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtaskCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtaskCharacter)


#define task_Source_task_taskCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AtaskCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AtaskCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AtaskCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AtaskCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AtaskCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AtaskCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AtaskCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AtaskCharacter, L_MotionController); }


#define task_Source_task_taskCharacter_h_11_PROLOG
#define task_Source_task_taskCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	task_Source_task_taskCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	task_Source_task_taskCharacter_h_14_SPARSE_DATA \
	task_Source_task_taskCharacter_h_14_RPC_WRAPPERS \
	task_Source_task_taskCharacter_h_14_INCLASS \
	task_Source_task_taskCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define task_Source_task_taskCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	task_Source_task_taskCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	task_Source_task_taskCharacter_h_14_SPARSE_DATA \
	task_Source_task_taskCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	task_Source_task_taskCharacter_h_14_INCLASS_NO_PURE_DECLS \
	task_Source_task_taskCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASK_API UClass* StaticClass<class AtaskCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID task_Source_task_taskCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
