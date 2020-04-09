// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMISSION_submissionGameModeBase_generated_h
#error "submissionGameModeBase.generated.h already included, missing '#pragma once' in submissionGameModeBase.h"
#endif
#define SUBMISSION_submissionGameModeBase_generated_h

#define submission_Source_submission_submissionGameModeBase_h_15_SPARSE_DATA
#define submission_Source_submission_submissionGameModeBase_h_15_RPC_WRAPPERS
#define submission_Source_submission_submissionGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define submission_Source_submission_submissionGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAsubmissionGameModeBase(); \
	friend struct Z_Construct_UClass_AsubmissionGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AsubmissionGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/submission"), NO_API) \
	DECLARE_SERIALIZER(AsubmissionGameModeBase)


#define submission_Source_submission_submissionGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAsubmissionGameModeBase(); \
	friend struct Z_Construct_UClass_AsubmissionGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AsubmissionGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/submission"), NO_API) \
	DECLARE_SERIALIZER(AsubmissionGameModeBase)


#define submission_Source_submission_submissionGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AsubmissionGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AsubmissionGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AsubmissionGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AsubmissionGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AsubmissionGameModeBase(AsubmissionGameModeBase&&); \
	NO_API AsubmissionGameModeBase(const AsubmissionGameModeBase&); \
public:


#define submission_Source_submission_submissionGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AsubmissionGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AsubmissionGameModeBase(AsubmissionGameModeBase&&); \
	NO_API AsubmissionGameModeBase(const AsubmissionGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AsubmissionGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AsubmissionGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AsubmissionGameModeBase)


#define submission_Source_submission_submissionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define submission_Source_submission_submissionGameModeBase_h_12_PROLOG
#define submission_Source_submission_submissionGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	submission_Source_submission_submissionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	submission_Source_submission_submissionGameModeBase_h_15_SPARSE_DATA \
	submission_Source_submission_submissionGameModeBase_h_15_RPC_WRAPPERS \
	submission_Source_submission_submissionGameModeBase_h_15_INCLASS \
	submission_Source_submission_submissionGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define submission_Source_submission_submissionGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	submission_Source_submission_submissionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	submission_Source_submission_submissionGameModeBase_h_15_SPARSE_DATA \
	submission_Source_submission_submissionGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	submission_Source_submission_submissionGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	submission_Source_submission_submissionGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMISSION_API UClass* StaticClass<class AsubmissionGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID submission_Source_submission_submissionGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
