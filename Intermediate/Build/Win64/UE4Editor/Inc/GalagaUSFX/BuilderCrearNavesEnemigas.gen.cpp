// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/BuilderCrearNavesEnemigas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderCrearNavesEnemigas() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_UBuilderCrearNavesEnemigas_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_UBuilderCrearNavesEnemigas();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
// End Cross Module References
	void UBuilderCrearNavesEnemigas::StaticRegisterNativesUBuilderCrearNavesEnemigas()
	{
	}
	UClass* Z_Construct_UClass_UBuilderCrearNavesEnemigas_NoRegister()
	{
		return UBuilderCrearNavesEnemigas::StaticClass();
	}
	struct Z_Construct_UClass_UBuilderCrearNavesEnemigas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuilderCrearNavesEnemigas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuilderCrearNavesEnemigas_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuilderCrearNavesEnemigas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuilderCrearNavesEnemigas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuilderCrearNavesEnemigas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuilderCrearNavesEnemigas_Statics::ClassParams = {
		&UBuilderCrearNavesEnemigas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBuilderCrearNavesEnemigas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuilderCrearNavesEnemigas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuilderCrearNavesEnemigas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuilderCrearNavesEnemigas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuilderCrearNavesEnemigas, 3061612636);
	template<> GALAGAUSFX_API UClass* StaticClass<UBuilderCrearNavesEnemigas>()
	{
		return UBuilderCrearNavesEnemigas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuilderCrearNavesEnemigas(Z_Construct_UClass_UBuilderCrearNavesEnemigas, &UBuilderCrearNavesEnemigas::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("UBuilderCrearNavesEnemigas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuilderCrearNavesEnemigas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
