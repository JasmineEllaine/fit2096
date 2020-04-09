// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "submission/submissionGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesubmissionGameModeBase() {}
// Cross Module References
	SUBMISSION_API UClass* Z_Construct_UClass_AsubmissionGameModeBase_NoRegister();
	SUBMISSION_API UClass* Z_Construct_UClass_AsubmissionGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_submission();
// End Cross Module References
	void AsubmissionGameModeBase::StaticRegisterNativesAsubmissionGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AsubmissionGameModeBase_NoRegister()
	{
		return AsubmissionGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AsubmissionGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AsubmissionGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_submission,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AsubmissionGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "submissionGameModeBase.h" },
		{ "ModuleRelativePath", "submissionGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AsubmissionGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AsubmissionGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AsubmissionGameModeBase_Statics::ClassParams = {
		&AsubmissionGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AsubmissionGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AsubmissionGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AsubmissionGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AsubmissionGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AsubmissionGameModeBase, 4045248893);
	template<> SUBMISSION_API UClass* StaticClass<AsubmissionGameModeBase>()
	{
		return AsubmissionGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AsubmissionGameModeBase(Z_Construct_UClass_AsubmissionGameModeBase, &AsubmissionGameModeBase::StaticClass, TEXT("/Script/submission"), TEXT("AsubmissionGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AsubmissionGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
