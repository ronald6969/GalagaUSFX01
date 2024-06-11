// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGAUSFX_GalagaUSFXPawn_generated_h
#error "GalagaUSFXPawn.generated.h already included, missing '#pragma once' in GalagaUSFXPawn.h"
#endif
#define GALAGAUSFX_GalagaUSFXPawn_generated_h

#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_SPARSE_DATA
#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_RPC_WRAPPERS
#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalagaUSFXPawn(); \
	friend struct Z_Construct_UClass_AGalagaUSFXPawn_Statics; \
public: \
	DECLARE_CLASS(AGalagaUSFXPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GalagaUSFX"), NO_API) \
	DECLARE_SERIALIZER(AGalagaUSFXPawn)


#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGalagaUSFXPawn(); \
	friend struct Z_Construct_UClass_AGalagaUSFXPawn_Statics; \
public: \
	DECLARE_CLASS(AGalagaUSFXPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GalagaUSFX"), NO_API) \
	DECLARE_SERIALIZER(AGalagaUSFXPawn)


#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalagaUSFXPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalagaUSFXPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalagaUSFXPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalagaUSFXPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalagaUSFXPawn(AGalagaUSFXPawn&&); \
	NO_API AGalagaUSFXPawn(const AGalagaUSFXPawn&); \
public:


#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalagaUSFXPawn(AGalagaUSFXPawn&&); \
	NO_API AGalagaUSFXPawn(const AGalagaUSFXPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalagaUSFXPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalagaUSFXPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalagaUSFXPawn)


#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AGalagaUSFXPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AGalagaUSFXPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGalagaUSFXPawn, CameraBoom); }


#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_9_PROLOG
#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_SPARSE_DATA \
	galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_RPC_WRAPPERS \
	galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_INCLASS \
	galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_SPARSE_DATA \
	galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_INCLASS_NO_PURE_DECLS \
	galaga_Source_GalagaUSFX_GalagaUSFXPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGAUSFX_API UClass* StaticClass<class AGalagaUSFXPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID galaga_Source_GalagaUSFX_GalagaUSFXPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
