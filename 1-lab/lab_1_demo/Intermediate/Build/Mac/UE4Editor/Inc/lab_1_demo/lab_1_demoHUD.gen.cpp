// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lab_1_demo/lab_1_demoHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelab_1_demoHUD() {}
// Cross Module References
	LAB_1_DEMO_API UClass* Z_Construct_UClass_Alab_1_demoHUD_NoRegister();
	LAB_1_DEMO_API UClass* Z_Construct_UClass_Alab_1_demoHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_lab_1_demo();
// End Cross Module References
	void Alab_1_demoHUD::StaticRegisterNativesAlab_1_demoHUD()
	{
	}
	UClass* Z_Construct_UClass_Alab_1_demoHUD_NoRegister()
	{
		return Alab_1_demoHUD::StaticClass();
	}
	struct Z_Construct_UClass_Alab_1_demoHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Alab_1_demoHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_lab_1_demo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alab_1_demoHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "lab_1_demoHUD.h" },
		{ "ModuleRelativePath", "lab_1_demoHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Alab_1_demoHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Alab_1_demoHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Alab_1_demoHUD_Statics::ClassParams = {
		&Alab_1_demoHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Alab_1_demoHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Alab_1_demoHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Alab_1_demoHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Alab_1_demoHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Alab_1_demoHUD, 2700286183);
	template<> LAB_1_DEMO_API UClass* StaticClass<Alab_1_demoHUD>()
	{
		return Alab_1_demoHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Alab_1_demoHUD(Z_Construct_UClass_Alab_1_demoHUD, &Alab_1_demoHUD::StaticClass, TEXT("/Script/lab_1_demo"), TEXT("Alab_1_demoHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Alab_1_demoHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
