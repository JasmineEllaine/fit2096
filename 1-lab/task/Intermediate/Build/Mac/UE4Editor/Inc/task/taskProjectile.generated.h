// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TASK_taskProjectile_generated_h
#error "taskProjectile.generated.h already included, missing '#pragma once' in taskProjectile.h"
#endif
#define TASK_taskProjectile_generated_h

#define task_Source_task_taskProjectile_h_12_SPARSE_DATA
#define task_Source_task_taskProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define task_Source_task_taskProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define task_Source_task_taskProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtaskProjectile(); \
	friend struct Z_Construct_UClass_AtaskProjectile_Statics; \
public: \
	DECLARE_CLASS(AtaskProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/task"), NO_API) \
	DECLARE_SERIALIZER(AtaskProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define task_Source_task_taskProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAtaskProjectile(); \
	friend struct Z_Construct_UClass_AtaskProjectile_Statics; \
public: \
	DECLARE_CLASS(AtaskProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/task"), NO_API) \
	DECLARE_SERIALIZER(AtaskProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define task_Source_task_taskProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtaskProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtaskProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtaskProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtaskProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtaskProjectile(AtaskProjectile&&); \
	NO_API AtaskProjectile(const AtaskProjectile&); \
public:


#define task_Source_task_taskProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtaskProjectile(AtaskProjectile&&); \
	NO_API AtaskProjectile(const AtaskProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtaskProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtaskProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtaskProjectile)


#define task_Source_task_taskProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AtaskProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AtaskProjectile, ProjectileMovement); }


#define task_Source_task_taskProjectile_h_9_PROLOG
#define task_Source_task_taskProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	task_Source_task_taskProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	task_Source_task_taskProjectile_h_12_SPARSE_DATA \
	task_Source_task_taskProjectile_h_12_RPC_WRAPPERS \
	task_Source_task_taskProjectile_h_12_INCLASS \
	task_Source_task_taskProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define task_Source_task_taskProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	task_Source_task_taskProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	task_Source_task_taskProjectile_h_12_SPARSE_DATA \
	task_Source_task_taskProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	task_Source_task_taskProjectile_h_12_INCLASS_NO_PURE_DECLS \
	task_Source_task_taskProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASK_API UClass* StaticClass<class AtaskProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID task_Source_task_taskProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
