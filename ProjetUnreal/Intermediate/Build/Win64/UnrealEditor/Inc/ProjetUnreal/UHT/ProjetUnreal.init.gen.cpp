// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjetUnreal_init() {}
	PROJETUNREAL_API UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature();
	PROJETUNREAL_API UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnDeathSignature__DelegateSignature();
	PROJETUNREAL_API UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnHealthChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjetUnreal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjetUnreal()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjetUnreal.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjetUnreal_OnDeathSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjetUnreal_OnHealthChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjetUnreal",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5C1A7E16,
				0x3C63CDBF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjetUnreal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjetUnreal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjetUnreal(Z_Construct_UPackage__Script_ProjetUnreal, TEXT("/Script/ProjetUnreal"), Z_Registration_Info_UPackage__Script_ProjetUnreal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5C1A7E16, 0x3C63CDBF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
