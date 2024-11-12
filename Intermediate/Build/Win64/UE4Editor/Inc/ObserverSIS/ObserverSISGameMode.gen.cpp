// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObserverSIS/ObserverSISGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserverSISGameMode() {}
// Cross Module References
	OBSERVERSIS_API UClass* Z_Construct_UClass_AObserverSISGameMode_NoRegister();
	OBSERVERSIS_API UClass* Z_Construct_UClass_AObserverSISGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ObserverSIS();
// End Cross Module References
	void AObserverSISGameMode::StaticRegisterNativesAObserverSISGameMode()
	{
	}
	UClass* Z_Construct_UClass_AObserverSISGameMode_NoRegister()
	{
		return AObserverSISGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AObserverSISGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObserverSISGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ObserverSIS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserverSISGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ObserverSISGameMode.h" },
		{ "ModuleRelativePath", "ObserverSISGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObserverSISGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObserverSISGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObserverSISGameMode_Statics::ClassParams = {
		&AObserverSISGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObserverSISGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObserverSISGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObserverSISGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObserverSISGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObserverSISGameMode, 1324192135);
	template<> OBSERVERSIS_API UClass* StaticClass<AObserverSISGameMode>()
	{
		return AObserverSISGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObserverSISGameMode(Z_Construct_UClass_AObserverSISGameMode, &AObserverSISGameMode::StaticClass, TEXT("/Script/ObserverSIS"), TEXT("AObserverSISGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObserverSISGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
