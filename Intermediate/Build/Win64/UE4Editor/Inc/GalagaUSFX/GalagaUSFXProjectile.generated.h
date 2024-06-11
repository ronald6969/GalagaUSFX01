// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef GALAGAUSFX_GalagaUSFXProjectile_generated_h
#error "GalagaUSFXProjectile.generated.h already included, missing '#pragma once' in GalagaUSFXProjectile.h"
#endif
#define GALAGAUSFX_GalagaUSFXProjectile_generated_h

#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_SPARSE_DATA
#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execOnHit);


#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execOnHit);


#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalagaUSFXProjectile(); \
	friend struct Z_Construct_UClass_AGalagaUSFXProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalagaUSFXProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GalagaUSFX"), NO_API) \
	DECLARE_SERIALIZER(AGalagaUSFXProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGalagaUSFXProjectile(); \
	friend struct Z_Construct_UClass_AGalagaUSFXProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalagaUSFXProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GalagaUSFX"), NO_API) \
	DECLARE_SERIALIZER(AGalagaUSFXProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalagaUSFXProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalagaUSFXProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalagaUSFXProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalagaUSFXProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalagaUSFXProjectile(AGalagaUSFXProjectile&&); \
	NO_API AGalagaUSFXProjectile(const AGalagaUSFXProjectile&); \
public:


#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalagaUSFXProjectile(AGalagaUSFXProjectile&&); \
	NO_API AGalagaUSFXProjectile(const AGalagaUSFXProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalagaUSFXProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalagaUSFXProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalagaUSFXProjectile)


#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGalagaUSFXProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGalagaUSFXProjectile, ProjectileMovement); }


#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_12_PROLOG
#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_SPARSE_DATA \
	galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_RPC_WRAPPERS \
	galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_INCLASS \
	galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_SPARSE_DATA \
	galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_INCLASS_NO_PURE_DECLS \
	galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGAUSFX_API UClass* StaticClass<class AGalagaUSFXProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID galaga_Source_GalagaUSFX_GalagaUSFXProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
