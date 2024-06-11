// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/IStrategiEscuadrones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIStrategiEscuadrones() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_UIStrategiEscuadrones_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_UIStrategiEscuadrones();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
// End Cross Module References
	void UIStrategiEscuadrones::StaticRegisterNativesUIStrategiEscuadrones()
	{
	}
	UClass* Z_Construct_UClass_UIStrategiEscuadrones_NoRegister()
	{
		return UIStrategiEscuadrones::StaticClass();
	}
	struct Z_Construct_UClass_UIStrategiEscuadrones_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIStrategiEscuadrones_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIStrategiEscuadrones_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IStrategiEscuadrones.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIStrategiEscuadrones_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIStrategiEscuadrones>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIStrategiEscuadrones_Statics::ClassParams = {
		&UIStrategiEscuadrones::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIStrategiEscuadrones_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIStrategiEscuadrones_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIStrategiEscuadrones()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIStrategiEscuadrones_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIStrategiEscuadrones, 1204167190);
	template<> GALAGAUSFX_API UClass* StaticClass<UIStrategiEscuadrones>()
	{
		return UIStrategiEscuadrones::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIStrategiEscuadrones(Z_Construct_UClass_UIStrategiEscuadrones, &UIStrategiEscuadrones::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("UIStrategiEscuadrones"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIStrategiEscuadrones);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
