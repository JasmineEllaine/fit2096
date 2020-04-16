// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMISSION_ShootableActor_generated_h
#error "ShootableActor.generated.h already included, missing '#pragma once' in ShootableActor.h"
#endif
#define SUBMISSION_ShootableActor_generated_h

#define submission_Source_submission_ShootableActor_h_12_SPARSE_DATA
#define submission_Source_submission_ShootableActor_h_12_RPC_WRAPPERS
#define submission_Source_submission_ShootableActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define submission_Source_submission_ShootableActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootableActor(); \
	friend struct Z_Construct_UClass_AShootableActor_Statics; \
public: \
	DECLARE_CLASS(AShootableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/submission"), NO_API) \
	DECLARE_SERIALIZER(AShootableActor)


#define submission_Source_submission_ShootableActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShootableActor(); \
	friend struct Z_Construct_UClass_AShootableActor_Statics; \
public: \
	DECLARE_CLASS(AShootableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/submission"), NO_API) \
	DECLARE_SERIALIZER(AShootableActor)


#define submission_Source_submission_ShootableActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootableActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootableActor(AShootableActor&&); \
	NO_API AShootableActor(const AShootableActor&); \
public:


#define submission_Source_submission_ShootableActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootableActor(AShootableActor&&); \
	NO_API AShootableActor(const AShootableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootableActor)


#define submission_Source_submission_ShootableActor_h_12_PRIVATE_PROPERTY_OFFSET
#define submission_Source_submission_ShootableActor_h_9_PROLOG
#define submission_Source_submission_ShootableActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	submission_Source_submission_ShootableActor_h_12_PRIVATE_PROPERTY_OFFSET \
	submission_Source_submission_ShootableActor_h_12_SPARSE_DATA \
	submission_Source_submission_ShootableActor_h_12_RPC_WRAPPERS \
	submission_Source_submission_ShootableActor_h_12_INCLASS \
	submission_Source_submission_ShootableActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define submission_Source_submission_ShootableActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	submission_Source_submission_ShootableActor_h_12_PRIVATE_PROPERTY_OFFSET \
	submission_Source_submission_ShootableActor_h_12_SPARSE_DATA \
	submission_Source_submission_ShootableActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	submission_Source_submission_ShootableActor_h_12_INCLASS_NO_PURE_DECLS \
	submission_Source_submission_ShootableActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMISSION_API UClass* StaticClass<class AShootableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID submission_Source_submission_ShootableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
