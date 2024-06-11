// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGAUSFX_IImplementacion_generated_h
#error "IImplementacion.generated.h already included, missing '#pragma once' in IImplementacion.h"
#endif
#define GALAGAUSFX_IImplementacion_generated_h

#define galaga_Source_GalagaUSFX_IImplementacion_h_13_SPARSE_DATA
#define galaga_Source_GalagaUSFX_IImplementacion_h_13_RPC_WRAPPERS
#define galaga_Source_GalagaUSFX_IImplementacion_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define galaga_Source_GalagaUSFX_IImplementacion_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGAUSFX_API UIImplementacion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIImplementacion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGAUSFX_API, UIImplementacion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIImplementacion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGAUSFX_API UIImplementacion(UIImplementacion&&); \
	GALAGAUSFX_API UIImplementacion(const UIImplementacion&); \
public:


#define galaga_Source_GalagaUSFX_IImplementacion_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGAUSFX_API UIImplementacion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGAUSFX_API UIImplementacion(UIImplementacion&&); \
	GALAGAUSFX_API UIImplementacion(const UIImplementacion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGAUSFX_API, UIImplementacion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIImplementacion); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIImplementacion)


#define galaga_Source_GalagaUSFX_IImplementacion_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIImplementacion(); \
	friend struct Z_Construct_UClass_UIImplementacion_Statics; \
public: \
	DECLARE_CLASS(UIImplementacion, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GalagaUSFX"), GALAGAUSFX_API) \
	DECLARE_SERIALIZER(UIImplementacion)


#define galaga_Source_GalagaUSFX_IImplementacion_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	galaga_Source_GalagaUSFX_IImplementacion_h_13_GENERATED_UINTERFACE_BODY() \
	galaga_Source_GalagaUSFX_IImplementacion_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define galaga_Source_GalagaUSFX_IImplementacion_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	galaga_Source_GalagaUSFX_IImplementacion_h_13_GENERATED_UINTERFACE_BODY() \
	galaga_Source_GalagaUSFX_IImplementacion_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define galaga_Source_GalagaUSFX_IImplementacion_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIImplementacion() {} \
public: \
	typedef UIImplementacion UClassType; \
	typedef IIImplementacion ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define galaga_Source_GalagaUSFX_IImplementacion_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIImplementacion() {} \
public: \
	typedef UIImplementacion UClassType; \
	typedef IIImplementacion ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define galaga_Source_GalagaUSFX_IImplementacion_h_10_PROLOG
#define galaga_Source_GalagaUSFX_IImplementacion_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	galaga_Source_GalagaUSFX_IImplementacion_h_13_SPARSE_DATA \
	galaga_Source_GalagaUSFX_IImplementacion_h_13_RPC_WRAPPERS \
	galaga_Source_GalagaUSFX_IImplementacion_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define galaga_Source_GalagaUSFX_IImplementacion_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	galaga_Source_GalagaUSFX_IImplementacion_h_13_SPARSE_DATA \
	galaga_Source_GalagaUSFX_IImplementacion_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	galaga_Source_GalagaUSFX_IImplementacion_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGAUSFX_API UClass* StaticClass<class UIImplementacion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID galaga_Source_GalagaUSFX_IImplementacion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
