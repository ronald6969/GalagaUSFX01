// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/NaveEnemigaTerrestre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaTerrestre() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_ANaveEnemigaTerrestre_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_ANaveEnemigaTerrestre();
	GALAGAUSFX_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
// End Cross Module References
	void ANaveEnemigaTerrestre::StaticRegisterNativesANaveEnemigaTerrestre()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaTerrestre_NoRegister()
	{
		return ANaveEnemigaTerrestre::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaTerrestre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaTerrestre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaTerrestre_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemigaTerrestre.h" },
		{ "ModuleRelativePath", "NaveEnemigaTerrestre.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaTerrestre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaTerrestre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaTerrestre_Statics::ClassParams = {
		&ANaveEnemigaTerrestre::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaTerrestre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaTerrestre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaTerrestre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaTerrestre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaTerrestre, 1705593872);
	template<> GALAGAUSFX_API UClass* StaticClass<ANaveEnemigaTerrestre>()
	{
		return ANaveEnemigaTerrestre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaTerrestre(Z_Construct_UClass_ANaveEnemigaTerrestre, &ANaveEnemigaTerrestre::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("ANaveEnemigaTerrestre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaTerrestre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif