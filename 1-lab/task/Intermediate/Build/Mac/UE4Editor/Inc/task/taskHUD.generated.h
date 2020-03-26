// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASK_taskHUD_generated_h
#error "taskHUD.generated.h already included, missing '#pragma once' in taskHUD.h"
#endif
#define TASK_taskHUD_generated_h

#define task_Source_task_taskHUD_h_12_SPARSE_DATA
#define task_Source_task_taskHUD_h_12_RPC_WRAPPERS
#define task_Source_task_taskHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define task_Source_task_taskHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtaskHUD(); \
	friend struct Z_Construct_UClass_AtaskHUD_Statics; \
public: \
	DECLARE_CLASS(AtaskHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/task"), NO_API) \
	DECLARE_SERIALIZER(AtaskHUD)


#define task_Source_task_taskHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAtaskHUD(); \
	friend struct Z_Construct_UClass_AtaskHUD_Statics; \
public: \
	DECLARE_CLASS(AtaskHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/task"), NO_API) \
	DECLARE_SERIALIZER(AtaskHUD)


#define task_Source_task_taskHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtaskHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtaskHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtaskHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtaskHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtaskHUD(AtaskHUD&&); \
	NO_API AtaskHUD(const AtaskHUD&); \
public:


#define task_Source_task_taskHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtaskHUD(AtaskHUD&&); \
	NO_API AtaskHUD(const AtaskHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtaskHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtaskHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtaskHUD)


#define task_Source_task_taskHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define task_Source_task_taskHUD_h_9_PROLOG
#define task_Source_task_taskHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	task_Source_task_taskHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	task_Source_task_taskHUD_h_12_SPARSE_DATA \
	task_Source_task_taskHUD_h_12_RPC_WRAPPERS \
	task_Source_task_taskHUD_h_12_INCLASS \
	task_Source_task_taskHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define task_Source_task_taskHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	task_Source_task_taskHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	task_Source_task_taskHUD_h_12_SPARSE_DATA \
	task_Source_task_taskHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	task_Source_task_taskHUD_h_12_INCLASS_NO_PURE_DECLS \
	task_Source_task_taskHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASK_API UClass* StaticClass<class AtaskHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID task_Source_task_taskHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
