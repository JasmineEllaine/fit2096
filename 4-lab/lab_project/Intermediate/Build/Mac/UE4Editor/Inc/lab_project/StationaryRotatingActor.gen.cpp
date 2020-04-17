// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lab_project/StationaryRotatingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStationaryRotatingActor() {}
// Cross Module References
	LAB_PROJECT_API UClass* Z_Construct_UClass_AStationaryRotatingActor_NoRegister();
	LAB_PROJECT_API UClass* Z_Construct_UClass_AStationaryRotatingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_lab_project();
// End Cross Module References
	void AStationaryRotatingActor::StaticRegisterNativesAStationaryRotatingActor()
	{
	}
	UClass* Z_Construct_UClass_AStationaryRotatingActor_NoRegister()
	{
		return AStationaryRotatingActor::StaticClass();
	}
	struct Z_Construct_UClass_AStationaryRotatingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStationaryRotatingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_lab_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStationaryRotatingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StationaryRotatingActor.h" },
		{ "ModuleRelativePath", "StationaryRotatingActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStationaryRotatingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStationaryRotatingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStationaryRotatingActor_Statics::ClassParams = {
		&AStationaryRotatingActor::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AStationaryRotatingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStationaryRotatingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStationaryRotatingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStationaryRotatingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStationaryRotatingActor, 939342210);
	template<> LAB_PROJECT_API UClass* StaticClass<AStationaryRotatingActor>()
	{
		return AStationaryRotatingActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStationaryRotatingActor(Z_Construct_UClass_AStationaryRotatingActor, &AStationaryRotatingActor::StaticClass, TEXT("/Script/lab_project"), TEXT("AStationaryRotatingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStationaryRotatingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
