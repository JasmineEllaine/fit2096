// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "submission/CharacterPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPawn() {}
// Cross Module References
	SUBMISSION_API UClass* Z_Construct_UClass_ACharacterPawn_NoRegister();
	SUBMISSION_API UClass* Z_Construct_UClass_ACharacterPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_submission();
// End Cross Module References
	void ACharacterPawn::StaticRegisterNativesACharacterPawn()
	{
	}
	UClass* Z_Construct_UClass_ACharacterPawn_NoRegister()
	{
		return ACharacterPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_submission,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterPawn.h" },
		{ "ModuleRelativePath", "CharacterPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterPawn_Statics::ClassParams = {
		&ACharacterPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterPawn, 1531127123);
	template<> SUBMISSION_API UClass* StaticClass<ACharacterPawn>()
	{
		return ACharacterPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterPawn(Z_Construct_UClass_ACharacterPawn, &ACharacterPawn::StaticClass, TEXT("/Script/submission"), TEXT("ACharacterPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
