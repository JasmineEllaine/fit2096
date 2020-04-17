// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lab_project/lab_projectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelab_projectGameMode() {}
// Cross Module References
	LAB_PROJECT_API UClass* Z_Construct_UClass_Alab_projectGameMode_NoRegister();
	LAB_PROJECT_API UClass* Z_Construct_UClass_Alab_projectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_lab_project();
// End Cross Module References
	void Alab_projectGameMode::StaticRegisterNativesAlab_projectGameMode()
	{
	}
	UClass* Z_Construct_UClass_Alab_projectGameMode_NoRegister()
	{
		return Alab_projectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Alab_projectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Alab_projectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_lab_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alab_projectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "lab_projectGameMode.h" },
		{ "ModuleRelativePath", "lab_projectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Alab_projectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Alab_projectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Alab_projectGameMode_Statics::ClassParams = {
		&Alab_projectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Alab_projectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Alab_projectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Alab_projectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Alab_projectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Alab_projectGameMode, 3942698921);
	template<> LAB_PROJECT_API UClass* StaticClass<Alab_projectGameMode>()
	{
		return Alab_projectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Alab_projectGameMode(Z_Construct_UClass_Alab_projectGameMode, &Alab_projectGameMode::StaticClass, TEXT("/Script/lab_project"), TEXT("Alab_projectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Alab_projectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
