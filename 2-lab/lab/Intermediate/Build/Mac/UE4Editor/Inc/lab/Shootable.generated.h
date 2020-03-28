// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAB_Shootable_generated_h
#error "Shootable.generated.h already included, missing '#pragma once' in Shootable.h"
#endif
#define LAB_Shootable_generated_h

#define lab_Source_lab_Shootable_h_12_SPARSE_DATA
#define lab_Source_lab_Shootable_h_12_RPC_WRAPPERS
#define lab_Source_lab_Shootable_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define lab_Source_lab_Shootable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootable(); \
	friend struct Z_Construct_UClass_AShootable_Statics; \
public: \
	DECLARE_CLASS(AShootable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab"), NO_API) \
	DECLARE_SERIALIZER(AShootable)


#define lab_Source_lab_Shootable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShootable(); \
	friend struct Z_Construct_UClass_AShootable_Statics; \
public: \
	DECLARE_CLASS(AShootable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab"), NO_API) \
	DECLARE_SERIALIZER(AShootable)


#define lab_Source_lab_Shootable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootable(AShootable&&); \
	NO_API AShootable(const AShootable&); \
public:


#define lab_Source_lab_Shootable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootable(AShootable&&); \
	NO_API AShootable(const AShootable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootable)


#define lab_Source_lab_Shootable_h_12_PRIVATE_PROPERTY_OFFSET
#define lab_Source_lab_Shootable_h_9_PROLOG
#define lab_Source_lab_Shootable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_Source_lab_Shootable_h_12_PRIVATE_PROPERTY_OFFSET \
	lab_Source_lab_Shootable_h_12_SPARSE_DATA \
	lab_Source_lab_Shootable_h_12_RPC_WRAPPERS \
	lab_Source_lab_Shootable_h_12_INCLASS \
	lab_Source_lab_Shootable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define lab_Source_lab_Shootable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_Source_lab_Shootable_h_12_PRIVATE_PROPERTY_OFFSET \
	lab_Source_lab_Shootable_h_12_SPARSE_DATA \
	lab_Source_lab_Shootable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	lab_Source_lab_Shootable_h_12_INCLASS_NO_PURE_DECLS \
	lab_Source_lab_Shootable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB_API UClass* StaticClass<class AShootable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID lab_Source_lab_Shootable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
