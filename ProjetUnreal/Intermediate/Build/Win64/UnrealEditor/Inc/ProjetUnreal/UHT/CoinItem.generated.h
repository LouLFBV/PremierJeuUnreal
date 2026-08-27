// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoinItem.h"

#ifdef PROJETUNREAL_CoinItem_generated_h
#error "CoinItem.generated.h already included, missing '#pragma once' in CoinItem.h"
#endif
#define PROJETUNREAL_CoinItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACoinItem ****************************************************************
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_CoinItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


PROJETUNREAL_API UClass* Z_Construct_UClass_ACoinItem_NoRegister();

#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_CoinItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinItem(); \
	friend struct Z_Construct_UClass_ACoinItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_ACoinItem_NoRegister(); \
public: \
	DECLARE_CLASS2(ACoinItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_ACoinItem_NoRegister) \
	DECLARE_SERIALIZER(ACoinItem)


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_CoinItem_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoinItem(ACoinItem&&) = delete; \
	ACoinItem(const ACoinItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoinItem) \
	NO_API virtual ~ACoinItem();


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_CoinItem_h_11_PROLOG
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_CoinItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_CoinItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_CoinItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_CoinItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoinItem;

// ********** End Class ACoinItem ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_CoinItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
