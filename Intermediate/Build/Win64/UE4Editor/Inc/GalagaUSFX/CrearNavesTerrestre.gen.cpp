// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/CrearNavesTerrestre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrearNavesTerrestre() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_ACrearNavesTerrestre_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_ACrearNavesTerrestre();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
	GALAGAUSFX_API UClass* Z_Construct_UClass_UBuilderCrearNavesEnemigas_NoRegister();
// End Cross Module References
	void ACrearNavesTerrestre::StaticRegisterNativesACrearNavesTerrestre()
	{
	}
	UClass* Z_Construct_UClass_ACrearNavesTerrestre_NoRegister()
	{
		return ACrearNavesTerrestre::StaticClass();
	}
	struct Z_Construct_UClass_ACrearNavesTerrestre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrearNavesTerrestre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrearNavesTerrestre_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrearNavesTerrestre.h" },
		{ "ModuleRelativePath", "CrearNavesTerrestre.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACrearNavesTerrestre_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderCrearNavesEnemigas_NoRegister, (int32)VTABLE_OFFSET(ACrearNavesTerrestre, IBuilderCrearNavesEnemigas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrearNavesTerrestre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrearNavesTerrestre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrearNavesTerrestre_Statics::ClassParams = {
		&ACrearNavesTerrestre::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACrearNavesTerrestre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrearNavesTerrestre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrearNavesTerrestre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrearNavesTerrestre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrearNavesTerrestre, 3909232202);
	template<> GALAGAUSFX_API UClass* StaticClass<ACrearNavesTerrestre>()
	{
		return ACrearNavesTerrestre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrearNavesTerrestre(Z_Construct_UClass_ACrearNavesTerrestre, &ACrearNavesTerrestre::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("ACrearNavesTerrestre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrearNavesTerrestre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
