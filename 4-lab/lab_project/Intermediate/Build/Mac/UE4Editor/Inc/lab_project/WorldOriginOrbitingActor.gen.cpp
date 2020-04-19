// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lab_project/WorldOriginOrbitingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldOriginOrbitingActor() {}
// Cross Module References
	LAB_PROJECT_API UClass* Z_Construct_UClass_AWorldOriginOrbitingActor_NoRegister();
	LAB_PROJECT_API UClass* Z_Construct_UClass_AWorldOriginOrbitingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_lab_project();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AWorldOriginOrbitingActor::StaticRegisterNativesAWorldOriginOrbitingActor()
	{
	}
	UClass* Z_Construct_UClass_AWorldOriginOrbitingActor_NoRegister()
	{
		return AWorldOriginOrbitingActor::StaticClass();
	}
	struct Z_Construct_UClass_AWorldOriginOrbitingActor_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrbitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_lab_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldOriginOrbitingActor.h" },
		{ "ModuleRelativePath", "WorldOriginOrbitingActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_VisibleComponent_MetaData[] = {
		{ "Category", "WorldOriginOrbitingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WorldOriginOrbitingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_VisibleComponent = { "VisibleComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldOriginOrbitingActor, VisibleComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_VisibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_VisibleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_OrbitLocation_MetaData[] = {
		{ "Category", "WorldOriginOrbitingActor" },
		{ "ModuleRelativePath", "WorldOriginOrbitingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_OrbitLocation = { "OrbitLocation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldOriginOrbitingActor, OrbitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_OrbitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_OrbitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "WorldOriginOrbitingActor" },
		{ "ModuleRelativePath", "WorldOriginOrbitingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldOriginOrbitingActor, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_RotationSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_VisibleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_OrbitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::NewProp_RotationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldOriginOrbitingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::ClassParams = {
		&AWorldOriginOrbitingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldOriginOrbitingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorldOriginOrbitingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldOriginOrbitingActor, 843907187);
	template<> LAB_PROJECT_API UClass* StaticClass<AWorldOriginOrbitingActor>()
	{
		return AWorldOriginOrbitingActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldOriginOrbitingActor(Z_Construct_UClass_AWorldOriginOrbitingActor, &AWorldOriginOrbitingActor::StaticClass, TEXT("/Script/lab_project"), TEXT("AWorldOriginOrbitingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldOriginOrbitingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
