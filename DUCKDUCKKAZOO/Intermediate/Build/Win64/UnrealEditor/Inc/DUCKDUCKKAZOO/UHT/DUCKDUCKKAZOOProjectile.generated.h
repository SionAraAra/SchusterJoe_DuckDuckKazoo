// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DUCKDUCKKAZOOProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_generated_h
#error "DUCKDUCKKAZOOProjectile.generated.h already included, missing '#pragma once' in DUCKDUCKKAZOOProjectile.h"
#endif
#define DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_generated_h

#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADUCKDUCKKAZOOProjectile(); \
	friend struct Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics; \
public: \
	DECLARE_CLASS(ADUCKDUCKKAZOOProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DUCKDUCKKAZOO"), NO_API) \
	DECLARE_SERIALIZER(ADUCKDUCKKAZOOProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADUCKDUCKKAZOOProjectile(ADUCKDUCKKAZOOProjectile&&); \
	ADUCKDUCKKAZOOProjectile(const ADUCKDUCKKAZOOProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADUCKDUCKKAZOOProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADUCKDUCKKAZOOProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADUCKDUCKKAZOOProjectile) \
	NO_API virtual ~ADUCKDUCKKAZOOProjectile();


#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h_12_PROLOG
#define FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUCKDUCKKAZOO_API UClass* StaticClass<class ADUCKDUCKKAZOOProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
