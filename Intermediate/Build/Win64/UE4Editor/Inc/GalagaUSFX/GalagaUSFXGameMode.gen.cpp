// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX/GalagaUSFXGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalagaUSFXGameMode() {}
// Cross Module References
	GALAGAUSFX_API UClass* Z_Construct_UClass_AGalagaUSFXGameMode_NoRegister();
	GALAGAUSFX_API UClass* Z_Construct_UClass_AGalagaUSFXGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX();
// End Cross Module References
	void AGalagaUSFXGameMode::StaticRegisterNativesAGalagaUSFXGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalagaUSFXGameMode_NoRegister()
	{
		return AGalagaUSFXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalagaUSFXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalagaUSFXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalagaUSFXGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class ACrearNavesTransporte;\n//class ACrearNaveAerea;\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GalagaUSFXGameMode.h" },
		{ "ModuleRelativePath", "GalagaUSFXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "class ACrearNavesTransporte;\nclass ACrearNaveAerea;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalagaUSFXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalagaUSFXGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalagaUSFXGameMode_Statics::ClassParams = {
		&AGalagaUSFXGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGalagaUSFXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalagaUSFXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalagaUSFXGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalagaUSFXGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalagaUSFXGameMode, 2655887388);
	template<> GALAGAUSFX_API UClass* StaticClass<AGalagaUSFXGameMode>()
	{
		return AGalagaUSFXGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalagaUSFXGameMode(Z_Construct_UClass_AGalagaUSFXGameMode, &AGalagaUSFXGameMode::StaticClass, TEXT("/Script/GalagaUSFX"), TEXT("AGalagaUSFXGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalagaUSFXGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
