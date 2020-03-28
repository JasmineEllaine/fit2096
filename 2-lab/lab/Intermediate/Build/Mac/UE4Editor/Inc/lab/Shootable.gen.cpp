// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lab/Shootable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootable() {}
// Cross Module References
	LAB_API UClass* Z_Construct_UClass_AShootable_NoRegister();
	LAB_API UClass* Z_Construct_UClass_AShootable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_lab();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AShootable::StaticRegisterNativesAShootable()
	{
	}
	UClass* Z_Construct_UClass_AShootable_NoRegister()
	{
		return AShootable::StaticClass();
	}
	struct Z_Construct_UClass_AShootable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVisibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mVisibleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_lab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shootable.h" },
		{ "ModuleRelativePath", "Shootable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootable_Statics::NewProp_mVisibleComponent_MetaData[] = {
		{ "Category", "Shootable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Shootable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootable_Statics::NewProp_mVisibleComponent = { "mVisibleComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootable, mVisibleComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootable_Statics::NewProp_mVisibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootable_Statics::NewProp_mVisibleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootable_Statics::NewProp_mVisibleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootable_Statics::ClassParams = {
		&AShootable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShootable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootable, 3423579207);
	template<> LAB_API UClass* StaticClass<AShootable>()
	{
		return AShootable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootable(Z_Construct_UClass_AShootable, &AShootable::StaticClass, TEXT("/Script/lab"), TEXT("AShootable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
