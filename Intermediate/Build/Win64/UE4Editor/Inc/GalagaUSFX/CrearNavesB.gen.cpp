// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/CrearNavesB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrearNavesB() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_ACrearNavesB_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_ACrearNavesB();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
// End Cross Module References
	void ACrearNavesB::StaticRegisterNativesACrearNavesB()
	{
	}
	UClass* Z_Construct_UClass_ACrearNavesB_NoRegister()
	{
		return ACrearNavesB::StaticClass();
	}
	struct Z_Construct_UClass_ACrearNavesB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrearNavesB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrearNavesB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrearNavesB.h" },
		{ "ModuleRelativePath", "CrearNavesB.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrearNavesB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrearNavesB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrearNavesB_Statics::ClassParams = {
		&ACrearNavesB::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ACrearNavesB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrearNavesB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrearNavesB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrearNavesB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrearNavesB, 3461826167);
	template<> GALAGAUSFX_API UClass* StaticClass<ACrearNavesB>()
	{
		return ACrearNavesB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrearNavesB(Z_Construct_UClass_ACrearNavesB, &ACrearNavesB::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("ACrearNavesB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrearNavesB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
