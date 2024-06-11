// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/NaveTerrestreTransporte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveTerrestreTransporte() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_ANaveTerrestreTransporte_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_ANaveTerrestreTransporte();
	GALAGAUSFX_API UClass* Z_Construct_UClass_ANaveEnemigaTerrestre();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
// End Cross Module References
	void ANaveTerrestreTransporte::StaticRegisterNativesANaveTerrestreTransporte()
	{
	}
	UClass* Z_Construct_UClass_ANaveTerrestreTransporte_NoRegister()
	{
		return ANaveTerrestreTransporte::StaticClass();
	}
	struct Z_Construct_UClass_ANaveTerrestreTransporte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveTerrestreTransporte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTerrestreTransporte_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveTerrestreTransporte.h" },
		{ "ModuleRelativePath", "NaveTerrestreTransporte.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveTerrestreTransporte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveTerrestreTransporte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveTerrestreTransporte_Statics::ClassParams = {
		&ANaveTerrestreTransporte::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveTerrestreTransporte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTerrestreTransporte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveTerrestreTransporte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveTerrestreTransporte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveTerrestreTransporte, 2911520641);
	template<> GALAGAUSFX_API UClass* StaticClass<ANaveTerrestreTransporte>()
	{
		return ANaveTerrestreTransporte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveTerrestreTransporte(Z_Construct_UClass_ANaveTerrestreTransporte, &ANaveTerrestreTransporte::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("ANaveTerrestreTransporte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveTerrestreTransporte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
