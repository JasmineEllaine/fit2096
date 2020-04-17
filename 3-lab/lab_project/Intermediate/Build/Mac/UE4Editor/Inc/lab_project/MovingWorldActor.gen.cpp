// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lab_project/MovingWorldActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingWorldActor() {}
// Cross Module References
	LAB_PROJECT_API UClass* Z_Construct_UClass_AMovingWorldActor_NoRegister();
	LAB_PROJECT_API UClass* Z_Construct_UClass_AMovingWorldActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_lab_project();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMovingWorldActor::StaticRegisterNativesAMovingWorldActor()
	{
	}
	UClass* Z_Construct_UClass_AMovingWorldActor_NoRegister()
	{
		return AMovingWorldActor::StaticClass();
	}
	struct Z_Construct_UClass_AMovingWorldActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisibleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravelDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TravelDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingWorldActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_lab_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingWorldActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingWorldActor.h" },
		{ "ModuleRelativePath", "MovingWorldActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_VisibleComponent_MetaData[] = {
		{ "Category", "MovingWorldActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingWorldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_VisibleComponent = { "VisibleComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingWorldActor, VisibleComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_VisibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_VisibleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "MovingWorldActor" },
		{ "ModuleRelativePath", "MovingWorldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingWorldActor, Tolerance), METADATA_PARAMS(Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_Tolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "MovingWorldActor" },
		{ "ModuleRelativePath", "MovingWorldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingWorldActor, Speed), METADATA_PARAMS(Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_TravelDistance_MetaData[] = {
		{ "Category", "MovingWorldActor" },
		{ "ModuleRelativePath", "MovingWorldActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_TravelDistance = { "TravelDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingWorldActor, TravelDistance), METADATA_PARAMS(Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_TravelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_TravelDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingWorldActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_VisibleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingWorldActor_Statics::NewProp_TravelDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingWorldActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingWorldActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingWorldActor_Statics::ClassParams = {
		&AMovingWorldActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingWorldActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingWorldActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingWorldActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingWorldActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingWorldActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingWorldActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingWorldActor, 1593897862);
	template<> LAB_PROJECT_API UClass* StaticClass<AMovingWorldActor>()
	{
		return AMovingWorldActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingWorldActor(Z_Construct_UClass_AMovingWorldActor, &AMovingWorldActor::StaticClass, TEXT("/Script/lab_project"), TEXT("AMovingWorldActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingWorldActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
