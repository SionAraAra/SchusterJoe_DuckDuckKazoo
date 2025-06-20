// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DUCKDUCKKAZOO/DUCKDUCKKAZOOGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDUCKDUCKKAZOOGameMode() {}

// ********** Begin Cross Module References ********************************************************
DUCKDUCKKAZOO_API UClass* Z_Construct_UClass_ADUCKDUCKKAZOOGameMode();
DUCKDUCKKAZOO_API UClass* Z_Construct_UClass_ADUCKDUCKKAZOOGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DUCKDUCKKAZOO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADUCKDUCKKAZOOGameMode ***************************************************
void ADUCKDUCKKAZOOGameMode::StaticRegisterNativesADUCKDUCKKAZOOGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADUCKDUCKKAZOOGameMode;
UClass* ADUCKDUCKKAZOOGameMode::GetPrivateStaticClass()
{
	using TClass = ADUCKDUCKKAZOOGameMode;
	if (!Z_Registration_Info_UClass_ADUCKDUCKKAZOOGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DUCKDUCKKAZOOGameMode"),
			Z_Registration_Info_UClass_ADUCKDUCKKAZOOGameMode.InnerSingleton,
			StaticRegisterNativesADUCKDUCKKAZOOGameMode,
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
	return Z_Registration_Info_UClass_ADUCKDUCKKAZOOGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ADUCKDUCKKAZOOGameMode_NoRegister()
{
	return ADUCKDUCKKAZOOGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADUCKDUCKKAZOOGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DUCKDUCKKAZOOGameMode.h" },
		{ "ModuleRelativePath", "DUCKDUCKKAZOOGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADUCKDUCKKAZOOGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADUCKDUCKKAZOOGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DUCKDUCKKAZOO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADUCKDUCKKAZOOGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADUCKDUCKKAZOOGameMode_Statics::ClassParams = {
	&ADUCKDUCKKAZOOGameMode::StaticClass,
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
	0x008803ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADUCKDUCKKAZOOGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADUCKDUCKKAZOOGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADUCKDUCKKAZOOGameMode()
{
	if (!Z_Registration_Info_UClass_ADUCKDUCKKAZOOGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADUCKDUCKKAZOOGameMode.OuterSingleton, Z_Construct_UClass_ADUCKDUCKKAZOOGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADUCKDUCKKAZOOGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADUCKDUCKKAZOOGameMode);
ADUCKDUCKKAZOOGameMode::~ADUCKDUCKKAZOOGameMode() {}
// ********** End Class ADUCKDUCKKAZOOGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joesc_Documents_GitHub_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOGameMode_h__Script_DUCKDUCKKAZOO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADUCKDUCKKAZOOGameMode, ADUCKDUCKKAZOOGameMode::StaticClass, TEXT("ADUCKDUCKKAZOOGameMode"), &Z_Registration_Info_UClass_ADUCKDUCKKAZOOGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADUCKDUCKKAZOOGameMode), 1694762536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joesc_Documents_GitHub_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOGameMode_h__Script_DUCKDUCKKAZOO_234913683(TEXT("/Script/DUCKDUCKKAZOO"),
	Z_CompiledInDeferFile_FID_Users_joesc_Documents_GitHub_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOGameMode_h__Script_DUCKDUCKKAZOO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joesc_Documents_GitHub_DuckDuckKazoo_DUCKDUCKKAZOO_Source_DUCKDUCKKAZOO_DUCKDUCKKAZOOGameMode_h__Script_DUCKDUCKKAZOO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
