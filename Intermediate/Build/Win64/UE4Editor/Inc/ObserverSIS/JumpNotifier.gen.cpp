// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObserverSIS/JumpNotifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpNotifier() {}
// Cross Module References
	OBSERVERSIS_API UClass* Z_Construct_UClass_AJumpNotifier_NoRegister();
	OBSERVERSIS_API UClass* Z_Construct_UClass_AJumpNotifier();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ObserverSIS();
	OBSERVERSIS_API UClass* Z_Construct_UClass_UJumpObserver_NoRegister();
// End Cross Module References
	void AJumpNotifier::StaticRegisterNativesAJumpNotifier()
	{
	}
	UClass* Z_Construct_UClass_AJumpNotifier_NoRegister()
	{
		return AJumpNotifier::StaticClass();
	}
	struct Z_Construct_UClass_AJumpNotifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJumpNotifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObserverSIS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumpNotifier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JumpNotifier.h" },
		{ "ModuleRelativePath", "JumpNotifier.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AJumpNotifier_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UJumpObserver_NoRegister, (int32)VTABLE_OFFSET(AJumpNotifier, IJumpObserver), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJumpNotifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumpNotifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJumpNotifier_Statics::ClassParams = {
		&AJumpNotifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AJumpNotifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJumpNotifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJumpNotifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJumpNotifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJumpNotifier, 1963745908);
	template<> OBSERVERSIS_API UClass* StaticClass<AJumpNotifier>()
	{
		return AJumpNotifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJumpNotifier(Z_Construct_UClass_AJumpNotifier, &AJumpNotifier::StaticClass, TEXT("/Script/ObserverSIS"), TEXT("AJumpNotifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJumpNotifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
