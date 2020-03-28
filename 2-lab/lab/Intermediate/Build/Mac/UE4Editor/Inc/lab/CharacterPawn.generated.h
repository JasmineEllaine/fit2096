// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAB_CharacterPawn_generated_h
#error "CharacterPawn.generated.h already included, missing '#pragma once' in CharacterPawn.h"
#endif
#define LAB_CharacterPawn_generated_h

#define lab_Source_lab_CharacterPawn_h_16_SPARSE_DATA
#define lab_Source_lab_CharacterPawn_h_16_RPC_WRAPPERS
#define lab_Source_lab_CharacterPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define lab_Source_lab_CharacterPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterPawn(); \
	friend struct Z_Construct_UClass_ACharacterPawn_Statics; \
public: \
	DECLARE_CLASS(ACharacterPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab"), NO_API) \
	DECLARE_SERIALIZER(ACharacterPawn)


#define lab_Source_lab_CharacterPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACharacterPawn(); \
	friend struct Z_Construct_UClass_ACharacterPawn_Statics; \
public: \
	DECLARE_CLASS(ACharacterPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lab"), NO_API) \
	DECLARE_SERIALIZER(ACharacterPawn)


#define lab_Source_lab_CharacterPawn_h_16_STANDARD_CONSTRUCTORS \
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


#define lab_Source_lab_CharacterPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterPawn(ACharacterPawn&&); \
	NO_API ACharacterPawn(const ACharacterPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterPawn)


#define lab_Source_lab_CharacterPawn_h_16_PRIVATE_PROPERTY_OFFSET
#define lab_Source_lab_CharacterPawn_h_13_PROLOG
#define lab_Source_lab_CharacterPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_Source_lab_CharacterPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	lab_Source_lab_CharacterPawn_h_16_SPARSE_DATA \
	lab_Source_lab_CharacterPawn_h_16_RPC_WRAPPERS \
	lab_Source_lab_CharacterPawn_h_16_INCLASS \
	lab_Source_lab_CharacterPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define lab_Source_lab_CharacterPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	lab_Source_lab_CharacterPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	lab_Source_lab_CharacterPawn_h_16_SPARSE_DATA \
	lab_Source_lab_CharacterPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	lab_Source_lab_CharacterPawn_h_16_INCLASS_NO_PURE_DECLS \
	lab_Source_lab_CharacterPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB_API UClass* StaticClass<class ACharacterPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID lab_Source_lab_CharacterPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
