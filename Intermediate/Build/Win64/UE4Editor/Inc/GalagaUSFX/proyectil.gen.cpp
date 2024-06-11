// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/proyectil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeproyectil() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_Aproyectil_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_Aproyectil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void Aproyectil::StaticRegisterNativesAproyectil()
	{
	}
	UClass* Z_Construct_UClass_Aproyectil_NoRegister()
	{
		return Aproyectil::StaticClass();
	}
	struct Z_Construct_UClass_Aproyectil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProyecEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProyecEnemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aproyectil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aproyectil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "proyectil.h" },
		{ "ModuleRelativePath", "proyectil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aproyectil_Statics::NewProp_ProyecEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "proyectil.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aproyectil_Statics::NewProp_ProyecEnemy = { "ProyecEnemy", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aproyectil, ProyecEnemy), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aproyectil_Statics::NewProp_ProyecEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aproyectil_Statics::NewProp_ProyecEnemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aproyectil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aproyectil_Statics::NewProp_ProyecEnemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aproyectil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aproyectil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aproyectil_Statics::ClassParams = {
		&Aproyectil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Aproyectil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Aproyectil_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aproyectil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aproyectil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aproyectil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aproyectil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aproyectil, 2323714307);
	template<> GALAGAUSFX_API UClass* StaticClass<Aproyectil>()
	{
		return Aproyectil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aproyectil(Z_Construct_UClass_Aproyectil, &Aproyectil::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("Aproyectil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aproyectil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
