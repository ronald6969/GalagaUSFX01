// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/ArmaLaser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaLaser() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_AArmaLaser_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_AArmaLaser();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AArmaLaser::StaticRegisterNativesAArmaLaser()
	{
	}
	UClass* Z_Construct_UClass_AArmaLaser_NoRegister()
	{
		return AArmaLaser::StaticClass();
	}
	struct Z_Construct_UClass_AArmaLaser_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProyecLaser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProyecLaser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaLaser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaLaser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmaLaser.h" },
		{ "ModuleRelativePath", "ArmaLaser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaLaser_Statics::NewProp_VelocidadDisparo_MetaData[] = {
		{ "Category", "ArmaLaser" },
		{ "ModuleRelativePath", "ArmaLaser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArmaLaser_Statics::NewProp_VelocidadDisparo = { "VelocidadDisparo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmaLaser, VelocidadDisparo), METADATA_PARAMS(Z_Construct_UClass_AArmaLaser_Statics::NewProp_VelocidadDisparo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaLaser_Statics::NewProp_VelocidadDisparo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaLaser_Statics::NewProp_ProyecLaser_MetaData[] = {
		{ "Category", "ArmaLaser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ArmaLaser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmaLaser_Statics::NewProp_ProyecLaser = { "ProyecLaser", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmaLaser, ProyecLaser), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmaLaser_Statics::NewProp_ProyecLaser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaLaser_Statics::NewProp_ProyecLaser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmaLaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmaLaser_Statics::NewProp_VelocidadDisparo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmaLaser_Statics::NewProp_ProyecLaser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaLaser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaLaser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaLaser_Statics::ClassParams = {
		&AArmaLaser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmaLaser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArmaLaser_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmaLaser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaLaser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaLaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaLaser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaLaser, 998614547);
	template<> GALAGAUSFX_API UClass* StaticClass<AArmaLaser>()
	{
		return AArmaLaser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaLaser(Z_Construct_UClass_AArmaLaser, &AArmaLaser::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("AArmaLaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaLaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
