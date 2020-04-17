// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "online_tutorial/online_tutorialGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeonline_tutorialGameMode() {}
// Cross Module References
	ONLINE_TUTORIAL_API UClass* Z_Construct_UClass_Aonline_tutorialGameMode_NoRegister();
	ONLINE_TUTORIAL_API UClass* Z_Construct_UClass_Aonline_tutorialGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_online_tutorial();
// End Cross Module References
	void Aonline_tutorialGameMode::StaticRegisterNativesAonline_tutorialGameMode()
	{
	}
	UClass* Z_Construct_UClass_Aonline_tutorialGameMode_NoRegister()
	{
		return Aonline_tutorialGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aonline_tutorialGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aonline_tutorialGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_online_tutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aonline_tutorialGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "online_tutorialGameMode.h" },
		{ "ModuleRelativePath", "online_tutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aonline_tutorialGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aonline_tutorialGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aonline_tutorialGameMode_Statics::ClassParams = {
		&Aonline_tutorialGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aonline_tutorialGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aonline_tutorialGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aonline_tutorialGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aonline_tutorialGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aonline_tutorialGameMode, 4014913769);
	template<> ONLINE_TUTORIAL_API UClass* StaticClass<Aonline_tutorialGameMode>()
	{
		return Aonline_tutorialGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aonline_tutorialGameMode(Z_Construct_UClass_Aonline_tutorialGameMode, &Aonline_tutorialGameMode::StaticClass, TEXT("/Script/online_tutorial"), TEXT("Aonline_tutorialGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aonline_tutorialGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
