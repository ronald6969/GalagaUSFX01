// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/ArmaMetralleta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaMetralleta() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_AArmaMetralleta_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_AArmaMetralleta();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AArmaMetralleta::StaticRegisterNativesAArmaMetralleta()
	{
	}
	UClass* Z_Construct_UClass_AArmaMetralleta_NoRegister()
	{
		return AArmaMetralleta::StaticClass();
	}
	struct Z_Construct_UClass_AArmaMetralleta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadDisparo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadDisparo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProyecMetralleta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProyecMetralleta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaMetralleta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaMetralleta_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmaMetralleta.h" },
		{ "ModuleRelativePath", "ArmaMetralleta.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaMetralleta_Statics::NewProp_VelocidadDisparo_MetaData[] = {
		{ "Category", "ArmaMetralleta" },
		{ "ModuleRelativePath", "ArmaMetralleta.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArmaMetralleta_Statics::NewProp_VelocidadDisparo = { "VelocidadDisparo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmaMetralleta, VelocidadDisparo), METADATA_PARAMS(Z_Construct_UClass_AArmaMetralleta_Statics::NewProp_VelocidadDisparo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaMetralleta_Statics::NewProp_VelocidadDisparo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaMetralleta_Statics::NewProp_ProyecMetralleta_MetaData[] = {
		{ "Category", "ArmaMetralleta" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ArmaMetralleta.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmaMetralleta_Statics::NewProp_ProyecMetralleta = { "ProyecMetralleta", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmaMetralleta, ProyecMetralleta), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmaMetralleta_Statics::NewProp_ProyecMetralleta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaMetralleta_Statics::NewProp_ProyecMetralleta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmaMetralleta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmaMetralleta_Statics::NewProp_VelocidadDisparo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmaMetralleta_Statics::NewProp_ProyecMetralleta,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaMetralleta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaMetralleta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaMetralleta_Statics::ClassParams = {
		&AArmaMetralleta::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmaMetralleta_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArmaMetralleta_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmaMetralleta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaMetralleta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaMetralleta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaMetralleta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaMetralleta, 907523662);
	template<> GALAGAUSFX_API UClass* StaticClass<AArmaMetralleta>()
	{
		return AArmaMetralleta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaMetralleta(Z_Construct_UClass_AArmaMetralleta, &AArmaMetralleta::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("AArmaMetralleta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaMetralleta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
