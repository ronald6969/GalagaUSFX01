// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/ArmaNormal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaNormal() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_AArmaNormal_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_AArmaNormal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
// End Cross Module References
	void AArmaNormal::StaticRegisterNativesAArmaNormal()
	{
	}
	UClass* Z_Construct_UClass_AArmaNormal_NoRegister()
	{
		return AArmaNormal::StaticClass();
	}
	struct Z_Construct_UClass_AArmaNormal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadDisparo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadDisparo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaNormal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaNormal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmaNormal.h" },
		{ "ModuleRelativePath", "ArmaNormal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaNormal_Statics::NewProp_VelocidadDisparo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ArmaNormal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArmaNormal_Statics::NewProp_VelocidadDisparo = { "VelocidadDisparo", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmaNormal, VelocidadDisparo), METADATA_PARAMS(Z_Construct_UClass_AArmaNormal_Statics::NewProp_VelocidadDisparo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaNormal_Statics::NewProp_VelocidadDisparo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmaNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmaNormal_Statics::NewProp_VelocidadDisparo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaNormal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaNormal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaNormal_Statics::ClassParams = {
		&AArmaNormal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmaNormal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArmaNormal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmaNormal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaNormal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaNormal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaNormal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaNormal, 2213338823);
	template<> GALAGAUSFX_API UClass* StaticClass<AArmaNormal>()
	{
		return AArmaNormal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaNormal(Z_Construct_UClass_AArmaNormal, &AArmaNormal::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("AArmaNormal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaNormal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
