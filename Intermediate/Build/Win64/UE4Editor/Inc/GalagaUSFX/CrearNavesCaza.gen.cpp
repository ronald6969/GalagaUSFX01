// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/CrearNavesCaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrearNavesCaza() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_ACrearNavesCaza_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_ACrearNavesCaza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
	GALAGAUSFX_API UClass* Z_Construct_UClass_UBuilderCrearNavesEnemigas_NoRegister();
// End Cross Module References
	void ACrearNavesCaza::StaticRegisterNativesACrearNavesCaza()
	{
	}
	UClass* Z_Construct_UClass_ACrearNavesCaza_NoRegister()
	{
		return ACrearNavesCaza::StaticClass();
	}
	struct Z_Construct_UClass_ACrearNavesCaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrearNavesCaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrearNavesCaza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrearNavesCaza.h" },
		{ "ModuleRelativePath", "CrearNavesCaza.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACrearNavesCaza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderCrearNavesEnemigas_NoRegister, (int32)VTABLE_OFFSET(ACrearNavesCaza, IBuilderCrearNavesEnemigas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrearNavesCaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrearNavesCaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrearNavesCaza_Statics::ClassParams = {
		&ACrearNavesCaza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrearNavesCaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrearNavesCaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrearNavesCaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrearNavesCaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrearNavesCaza, 872090676);
	template<> GALAGAUSFX_API UClass* StaticClass<ACrearNavesCaza>()
	{
		return ACrearNavesCaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrearNavesCaza(Z_Construct_UClass_ACrearNavesCaza, &ACrearNavesCaza::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("ACrearNavesCaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrearNavesCaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
