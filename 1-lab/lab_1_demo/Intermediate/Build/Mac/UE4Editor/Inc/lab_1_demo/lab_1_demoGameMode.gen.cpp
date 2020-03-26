// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lab_1_demo/lab_1_demoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelab_1_demoGameMode() {}
// Cross Module References
	LAB_1_DEMO_API UClass* Z_Construct_UClass_Alab_1_demoGameMode_NoRegister();
	LAB_1_DEMO_API UClass* Z_Construct_UClass_Alab_1_demoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_lab_1_demo();
// End Cross Module References
	void Alab_1_demoGameMode::StaticRegisterNativesAlab_1_demoGameMode()
	{
	}
	UClass* Z_Construct_UClass_Alab_1_demoGameMode_NoRegister()
	{
		return Alab_1_demoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Alab_1_demoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Alab_1_demoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_lab_1_demo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alab_1_demoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "lab_1_demoGameMode.h" },
		{ "ModuleRelativePath", "lab_1_demoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Alab_1_demoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Alab_1_demoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Alab_1_demoGameMode_Statics::ClassParams = {
		&Alab_1_demoGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Alab_1_demoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Alab_1_demoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Alab_1_demoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Alab_1_demoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Alab_1_demoGameMode, 2827519156);
	template<> LAB_1_DEMO_API UClass* StaticClass<Alab_1_demoGameMode>()
	{
		return Alab_1_demoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Alab_1_demoGameMode(Z_Construct_UClass_Alab_1_demoGameMode, &Alab_1_demoGameMode::StaticClass, TEXT("/Script/lab_1_demo"), TEXT("Alab_1_demoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Alab_1_demoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
