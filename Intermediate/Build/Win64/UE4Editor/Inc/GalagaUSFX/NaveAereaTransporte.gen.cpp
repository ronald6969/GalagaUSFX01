// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/NaveAereaTransporte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAereaTransporte() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_ANaveAereaTransporte_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_ANaveAereaTransporte();
	GALAGAUSFX_API UClass* Z_Construct_UClass_ANaveEnemigaAerea();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
// End Cross Module References
	void ANaveAereaTransporte::StaticRegisterNativesANaveAereaTransporte()
	{
	}
	UClass* Z_Construct_UClass_ANaveAereaTransporte_NoRegister()
	{
		return ANaveAereaTransporte::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAereaTransporte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAereaTransporte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaAerea,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAereaTransporte_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveAereaTransporte.h" },
		{ "ModuleRelativePath", "NaveAereaTransporte.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAereaTransporte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAereaTransporte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAereaTransporte_Statics::ClassParams = {
		&ANaveAereaTransporte::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveAereaTransporte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAereaTransporte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAereaTransporte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAereaTransporte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAereaTransporte, 65490743);
	template<> GALAGAUSFX_API UClass* StaticClass<ANaveAereaTransporte>()
	{
		return ANaveAereaTransporte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAereaTransporte(Z_Construct_UClass_ANaveAereaTransporte, &ANaveAereaTransporte::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("ANaveAereaTransporte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAereaTransporte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
