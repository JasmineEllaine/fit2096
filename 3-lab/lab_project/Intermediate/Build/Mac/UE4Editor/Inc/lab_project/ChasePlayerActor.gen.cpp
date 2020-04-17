// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lab_project/ChasePlayerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChasePlayerActor() {}
// Cross Module References
	LAB_PROJECT_API UClass* Z_Construct_UClass_AChasePlayerActor_NoRegister();
	LAB_PROJECT_API UClass* Z_Construct_UClass_AChasePlayerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_lab_project();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AChasePlayerActor::StaticRegisterNativesAChasePlayerActor()
	{
	}
	UClass* Z_Construct_UClass_AChasePlayerActor_NoRegister()
	{
		return AChasePlayerActor::StaticClass();
	}
	struct Z_Construct_UClass_AChasePlayerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisibleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChasePlayerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_lab_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChasePlayerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChasePlayerActor.h" },
		{ "ModuleRelativePath", "ChasePlayerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_FollowTarget_MetaData[] = {
		{ "Category", "ChasePlayerActor" },
		{ "ModuleRelativePath", "ChasePlayerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_FollowTarget = { "FollowTarget", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChasePlayerActor, FollowTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_FollowTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_FollowTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_MinimumDistance_MetaData[] = {
		{ "Category", "ChasePlayerActor" },
		{ "ModuleRelativePath", "ChasePlayerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_MinimumDistance = { "MinimumDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChasePlayerActor, MinimumDistance), METADATA_PARAMS(Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_MinimumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_MinimumDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "ChasePlayerActor" },
		{ "ModuleRelativePath", "ChasePlayerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChasePlayerActor, Speed), METADATA_PARAMS(Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_VisibleComponent_MetaData[] = {
		{ "Category", "ChasePlayerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChasePlayerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_VisibleComponent = { "VisibleComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChasePlayerActor, VisibleComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_VisibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_VisibleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChasePlayerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_FollowTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_MinimumDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChasePlayerActor_Statics::NewProp_VisibleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChasePlayerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChasePlayerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChasePlayerActor_Statics::ClassParams = {
		&AChasePlayerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChasePlayerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChasePlayerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChasePlayerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChasePlayerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChasePlayerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChasePlayerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChasePlayerActor, 2083955593);
	template<> LAB_PROJECT_API UClass* StaticClass<AChasePlayerActor>()
	{
		return AChasePlayerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChasePlayerActor(Z_Construct_UClass_AChasePlayerActor, &AChasePlayerActor::StaticClass, TEXT("/Script/lab_project"), TEXT("AChasePlayerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChasePlayerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
