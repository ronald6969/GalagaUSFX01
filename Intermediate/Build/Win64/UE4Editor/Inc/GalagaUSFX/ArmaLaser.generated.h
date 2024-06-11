// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGAUSFX_ArmaLaser_generated_h
#error "ArmaLaser.generated.h already included, missing '#pragma once' in ArmaLaser.h"
#endif
#define GALAGAUSFX_ArmaLaser_generated_h

#define galaga_Source_GalagaUSFX_ArmaLaser_h_10_SPARSE_DATA
#define galaga_Source_GalagaUSFX_ArmaLaser_h_10_RPC_WRAPPERS
#define galaga_Source_GalagaUSFX_ArmaLaser_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define galaga_Source_GalagaUSFX_ArmaLaser_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmaLaser(); \
	friend struct Z_Construct_UClass_AArmaLaser_Statics; \
public: \
	DECLARE_CLASS(AArmaLaser, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GalagaUSFX"), NO_API) \
	DECLARE_SERIALIZER(AArmaLaser)


#define galaga_Source_GalagaUSFX_ArmaLaser_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAArmaLaser(); \
	friend struct Z_Construct_UClass_AArmaLaser_Statics; \
public: \
	DECLARE_CLASS(AArmaLaser, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GalagaUSFX"), NO_API) \
	DECLARE_SERIALIZER(AArmaLaser)


#define galaga_Source_GalagaUSFX_ArmaLaser_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmaLaser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmaLaser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmaLaser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmaLaser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmaLaser(AArmaLaser&&); \
	NO_API AArmaLaser(const AArmaLaser&); \
public:


#define galaga_Source_GalagaUSFX_ArmaLaser_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmaLaser(AArmaLaser&&); \
	NO_API AArmaLaser(const AArmaLaser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmaLaser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmaLaser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArmaLaser)


#define galaga_Source_GalagaUSFX_ArmaLaser_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VelocidadDisparo() { return STRUCT_OFFSET(AArmaLaser, VelocidadDisparo); } \
	FORCEINLINE static uint32 __PPO__ProyecLaser() { return STRUCT_OFFSET(AArmaLaser, ProyecLaser); }


#define galaga_Source_GalagaUSFX_ArmaLaser_h_7_PROLOG
#define galaga_Source_GalagaUSFX_ArmaLaser_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	galaga_Source_GalagaUSFX_ArmaLaser_h_10_PRIVATE_PROPERTY_OFFSET \
	galaga_Source_GalagaUSFX_ArmaLaser_h_10_SPARSE_DATA \
	galaga_Source_GalagaUSFX_ArmaLaser_h_10_RPC_WRAPPERS \
	galaga_Source_GalagaUSFX_ArmaLaser_h_10_INCLASS \
	galaga_Source_GalagaUSFX_ArmaLaser_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define galaga_Source_GalagaUSFX_ArmaLaser_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	galaga_Source_GalagaUSFX_ArmaLaser_h_10_PRIVATE_PROPERTY_OFFSET \
	galaga_Source_GalagaUSFX_ArmaLaser_h_10_SPARSE_DATA \
	galaga_Source_GalagaUSFX_ArmaLaser_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	galaga_Source_GalagaUSFX_ArmaLaser_h_10_INCLASS_NO_PURE_DECLS \
	galaga_Source_GalagaUSFX_ArmaLaser_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGAUSFX_API UClass* StaticClass<class AArmaLaser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID galaga_Source_GalagaUSFX_ArmaLaser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
