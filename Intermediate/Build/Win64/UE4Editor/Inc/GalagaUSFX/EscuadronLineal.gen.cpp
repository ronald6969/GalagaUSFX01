// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/EscuadronLineal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscuadronLineal() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_AEscuadronLineal_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_AEscuadronLineal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
// End Cross Module References
	void AEscuadronLineal::StaticRegisterNativesAEscuadronLineal()
	{
	}
	UClass* Z_Construct_UClass_AEscuadronLineal_NoRegister()
	{
		return AEscuadronLineal::StaticClass();
	}
	struct Z_Construct_UClass_AEscuadronLineal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscuadronLineal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscuadronLineal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscuadronLineal.h" },
		{ "ModuleRelativePath", "EscuadronLineal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscuadronLineal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscuadronLineal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscuadronLineal_Statics::ClassParams = {
		&AEscuadronLineal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscuadronLineal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscuadronLineal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscuadronLineal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscuadronLineal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscuadronLineal, 4177758330);
	template<> GALAGAUSFX_API UClass* StaticClass<AEscuadronLineal>()
	{
		return AEscuadronLineal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscuadronLineal(Z_Construct_UClass_AEscuadronLineal, &AEscuadronLineal::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("AEscuadronLineal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscuadronLineal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
