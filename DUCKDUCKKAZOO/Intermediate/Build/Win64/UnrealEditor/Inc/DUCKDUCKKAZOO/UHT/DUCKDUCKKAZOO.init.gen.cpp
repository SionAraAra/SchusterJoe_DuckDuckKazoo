// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDUCKDUCKKAZOO_init() {}
	DUCKDUCKKAZOO_API UFunction* Z_Construct_UDelegateFunction_DUCKDUCKKAZOO_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DUCKDUCKKAZOO;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DUCKDUCKKAZOO()
	{
		if (!Z_Registration_Info_UPackage__Script_DUCKDUCKKAZOO.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DUCKDUCKKAZOO_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DUCKDUCKKAZOO",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x46F35020,
				0x76ECA666,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DUCKDUCKKAZOO.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DUCKDUCKKAZOO.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DUCKDUCKKAZOO(Z_Construct_UPackage__Script_DUCKDUCKKAZOO, TEXT("/Script/DUCKDUCKKAZOO"), Z_Registration_Info_UPackage__Script_DUCKDUCKKAZOO, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x46F35020, 0x76ECA666));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
