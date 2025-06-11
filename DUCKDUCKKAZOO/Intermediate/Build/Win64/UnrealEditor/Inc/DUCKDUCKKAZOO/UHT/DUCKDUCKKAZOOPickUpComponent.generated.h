// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DUCKDUCKKAZOOPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADUCKDUCKKAZOOCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_generated_h
#error "DUCKDUCKKAZOOPickUpComponent.generated.h already included, missing '#pragma once' in DUCKDUCKKAZOOPickUpComponent.h"
#endif
#define DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_generated_h

#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_h_12_DELEGATE \
DUCKDUCKKAZOO_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ADUCKDUCKKAZOOCharacter* PickUpCharacter);


#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDUCKDUCKKAZOOPickUpComponent(); \
	friend struct Z_Construct_UClass_UDUCKDUCKKAZOOPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UDUCKDUCKKAZOOPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DUCKDUCKKAZOO"), NO_API) \
	DECLARE_SERIALIZER(UDUCKDUCKKAZOOPickUpComponent)


#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDUCKDUCKKAZOOPickUpComponent(UDUCKDUCKKAZOOPickUpComponent&&); \
	UDUCKDUCKKAZOOPickUpComponent(const UDUCKDUCKKAZOOPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDUCKDUCKKAZOOPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDUCKDUCKKAZOOPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDUCKDUCKKAZOOPickUpComponent) \
	NO_API virtual ~UDUCKDUCKKAZOOPickUpComponent();


#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_h_14_PROLOG
#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUCKDUCKKAZOO_API UClass* StaticClass<class UDUCKDUCKKAZOOPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
