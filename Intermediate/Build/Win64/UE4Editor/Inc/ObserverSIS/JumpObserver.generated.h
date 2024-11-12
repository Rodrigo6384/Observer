// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVERSIS_JumpObserver_generated_h
#error "JumpObserver.generated.h already included, missing '#pragma once' in JumpObserver.h"
#endif
#define OBSERVERSIS_JumpObserver_generated_h

#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_SPARSE_DATA
#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_RPC_WRAPPERS
#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVERSIS_API UJumpObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJumpObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVERSIS_API, UJumpObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJumpObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVERSIS_API UJumpObserver(UJumpObserver&&); \
	OBSERVERSIS_API UJumpObserver(const UJumpObserver&); \
public:


#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVERSIS_API UJumpObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVERSIS_API UJumpObserver(UJumpObserver&&); \
	OBSERVERSIS_API UJumpObserver(const UJumpObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVERSIS_API, UJumpObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJumpObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJumpObserver)


#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUJumpObserver(); \
	friend struct Z_Construct_UClass_UJumpObserver_Statics; \
public: \
	DECLARE_CLASS(UJumpObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ObserverSIS"), OBSERVERSIS_API) \
	DECLARE_SERIALIZER(UJumpObserver)


#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_GENERATED_UINTERFACE_BODY() \
	ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_GENERATED_UINTERFACE_BODY() \
	ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IJumpObserver() {} \
public: \
	typedef UJumpObserver UClassType; \
	typedef IJumpObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IJumpObserver() {} \
public: \
	typedef UJumpObserver UClassType; \
	typedef IJumpObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_10_PROLOG
#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_SPARSE_DATA \
	ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_RPC_WRAPPERS \
	ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObserverSIS_Source_ObserverSIS_JumpObserver_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_SPARSE_DATA \
	ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ObserverSIS_Source_ObserverSIS_JumpObserver_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVERSIS_API UClass* StaticClass<class UJumpObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObserverSIS_Source_ObserverSIS_JumpObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
