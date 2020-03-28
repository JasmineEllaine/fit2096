// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAB_labGameModeBase_generated_h
#error "labGameModeBase.generated.h already included, missing '#pragma once' in labGameModeBase.h"
#endif
#define LAB_labGameModeBase_generated_h

#define lab_Source_lab_labGameModeBase_h_15_SPARSE_DATA
#define lab_Source_lab_labGameModeBase_h_15_RPC_WRAPPERS
#define lab_Source_lab_labGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define lab_Source_lab_labGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAlabGameModeBase(); \
	friend struct Z_Construct_UClass_AlabGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AlabGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab"), NO_API) \
	DECLARE_SERIALIZER(AlabGameModeBase)


#define lab_Source_lab_labGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAlabGameModeBase(); \
	friend struct Z_Construct_UClass_AlabGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AlabGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab"), NO_API) \
	DECLARE_SERIALIZER(AlabGameModeBase)


#define lab_Source_lab_labGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AlabGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AlabGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AlabGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AlabGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AlabGameModeBase(AlabGameModeBase&&); \
	NO_API AlabGameModeBase(const AlabGameModeBase&); \
public:


#define lab_Source_lab_labGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AlabGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AlabGameModeBase(AlabGameModeBase&&); \
	NO_API AlabGameModeBase(const AlabGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AlabGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AlabGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AlabGameModeBase)


#define lab_Source_lab_labGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define lab_Source_lab_labGameModeBase_h_12_PROLOG
#define lab_Source_lab_labGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_Source_lab_labGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	lab_Source_lab_labGameModeBase_h_15_SPARSE_DATA \
	lab_Source_lab_labGameModeBase_h_15_RPC_WRAPPERS \
	lab_Source_lab_labGameModeBase_h_15_INCLASS \
	lab_Source_lab_labGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define lab_Source_lab_labGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_Source_lab_labGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	lab_Source_lab_labGameModeBase_h_15_SPARSE_DATA \
	lab_Source_lab_labGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	lab_Source_lab_labGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	lab_Source_lab_labGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB_API UClass* StaticClass<class AlabGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID lab_Source_lab_labGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
