// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DUCKDUCKKAZOO/DUCKDUCKKAZOOProjectile.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDUCKDUCKKAZOOProjectile() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUCKDUCKKAZOO_API UClass* Z_Construct_UClass_ADUCKDUCKKAZOOProjectile();
DUCKDUCKKAZOO_API UClass* Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_DUCKDUCKKAZOO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADUCKDUCKKAZOOProjectile Function OnHit **********************************
struct Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics
{
	struct DUCKDUCKKAZOOProjectile_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when projectile hits something */" },
#endif
		{ "ModuleRelativePath", "DUCKDUCKKAZOOProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when projectile hits something" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DUCKDUCKKAZOOProjectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DUCKDUCKKAZOOProjectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DUCKDUCKKAZOOProjectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DUCKDUCKKAZOOProjectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DUCKDUCKKAZOOProjectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADUCKDUCKKAZOOProjectile, nullptr, "OnHit", Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::DUCKDUCKKAZOOProjectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::DUCKDUCKKAZOOProjectile_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADUCKDUCKKAZOOProjectile::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ADUCKDUCKKAZOOProjectile Function OnHit ************************************

// ********** Begin Class ADUCKDUCKKAZOOProjectile *************************************************
void ADUCKDUCKKAZOOProjectile::StaticRegisterNativesADUCKDUCKKAZOOProjectile()
{
	UClass* Class = ADUCKDUCKKAZOOProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHit", &ADUCKDUCKKAZOOProjectile::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADUCKDUCKKAZOOProjectile;
UClass* ADUCKDUCKKAZOOProjectile::GetPrivateStaticClass()
{
	using TClass = ADUCKDUCKKAZOOProjectile;
	if (!Z_Registration_Info_UClass_ADUCKDUCKKAZOOProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DUCKDUCKKAZOOProjectile"),
			Z_Registration_Info_UClass_ADUCKDUCKKAZOOProjectile.InnerSingleton,
			StaticRegisterNativesADUCKDUCKKAZOOProjectile,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ADUCKDUCKKAZOOProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_NoRegister()
{
	return ADUCKDUCKKAZOOProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DUCKDUCKKAZOOProjectile.h" },
		{ "ModuleRelativePath", "DUCKDUCKKAZOOProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sphere collision component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DUCKDUCKKAZOOProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere collision component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Projectile movement component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DUCKDUCKKAZOOProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile movement component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADUCKDUCKKAZOOProjectile_OnHit, "OnHit" }, // 3668564468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADUCKDUCKKAZOOProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADUCKDUCKKAZOOProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComp_MetaData), NewProp_CollisionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADUCKDUCKKAZOOProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::NewProp_CollisionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::NewProp_ProjectileMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DUCKDUCKKAZOO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::ClassParams = {
	&ADUCKDUCKKAZOOProjectile::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADUCKDUCKKAZOOProjectile()
{
	if (!Z_Registration_Info_UClass_ADUCKDUCKKAZOOProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADUCKDUCKKAZOOProjectile.OuterSingleton, Z_Construct_UClass_ADUCKDUCKKAZOOProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADUCKDUCKKAZOOProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADUCKDUCKKAZOOProjectile);
ADUCKDUCKKAZOOProjectile::~ADUCKDUCKKAZOOProjectile() {}
// ********** End Class ADUCKDUCKKAZOOProjectile ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h__Script_DUCKDUCKKAZOO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADUCKDUCKKAZOOProjectile, ADUCKDUCKKAZOOProjectile::StaticClass, TEXT("ADUCKDUCKKAZOOProjectile"), &Z_Registration_Info_UClass_ADUCKDUCKKAZOOProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADUCKDUCKKAZOOProjectile), 858439373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h__Script_DUCKDUCKKAZOO_1296575953(TEXT("/Script/DUCKDUCKKAZOO"),
	Z_CompiledInDeferFile_FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h__Script_DUCKDUCKKAZOO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joesc_Documents_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOProjectile_h__Script_DUCKDUCKKAZOO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
