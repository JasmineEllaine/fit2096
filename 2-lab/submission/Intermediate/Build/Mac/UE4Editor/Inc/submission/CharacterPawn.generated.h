// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMISSION_CharacterPawn_generated_h
#error "CharacterPawn.generated.h already included, missing '#pragma once' in CharacterPawn.h"
#endif
#define SUBMISSION_CharacterPawn_generated_h

#define submission_Source_submission_CharacterPawn_h_19_SPARSE_DATA
#define submission_Source_submission_CharacterPawn_h_19_RPC_WRAPPERS
#define submission_Source_submission_CharacterPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define submission_Source_submission_CharacterPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterPawn(); \
	friend struct Z_Construct_UClass_ACharacterPawn_Statics; \
public: \
	DECLARE_CLASS(ACharacterPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/submission"), NO_API) \
	DECLARE_SERIALIZER(ACharacterPawn)


#define submission_Source_submission_CharacterPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACharacterPawn(); \
	friend struct Z_Construct_UClass_ACharacterPawn_Statics; \
public: \
	DECLARE_CLASS(ACharacterPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/submission"), NO_API) \
	DECLARE_SERIALIZER(ACharacterPawn)


#define submission_Source_submission_CharacterPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterPawn(ACharacterPawn&&); \
	NO_API ACharacterPawn(const ACharacterPawn&); \
public:


#define submission_Source_submission_CharacterPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterPawn(ACharacterPawn&&); \
	NO_API ACharacterPawn(const ACharacterPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterPawn)


#define submission_Source_submission_CharacterPawn_h_19_PRIVATE_PROPERTY_OFFSET
#define submission_Source_submission_CharacterPawn_h_16_PROLOG
#define submission_Source_submission_CharacterPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	submission_Source_submission_CharacterPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	submission_Source_submission_CharacterPawn_h_19_SPARSE_DATA \
	submission_Source_submission_CharacterPawn_h_19_RPC_WRAPPERS \
	submission_Source_submission_CharacterPawn_h_19_INCLASS \
	submission_Source_submission_CharacterPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define submission_Source_submission_CharacterPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	submission_Source_submission_CharacterPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	submission_Source_submission_CharacterPawn_h_19_SPARSE_DATA \
	submission_Source_submission_CharacterPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	submission_Source_submission_CharacterPawn_h_19_INCLASS_NO_PURE_DECLS \
	submission_Source_submission_CharacterPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMISSION_API UClass* StaticClass<class ACharacterPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID submission_Source_submission_CharacterPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
