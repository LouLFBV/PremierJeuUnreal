// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemData.h"

#ifdef PROJETUNREAL_ItemData_generated_h
#error "ItemData.generated.h already included, missing '#pragma once' in ItemData.h"
#endif
#define PROJETUNREAL_ItemData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FItemData *********************************************************
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	PROJETUNREAL_API static class UScriptStruct* StaticStruct();


struct FItemData;
// ********** End ScriptStruct FItemData ***********************************************************

// ********** Begin Class UItemDataAsset ***********************************************************
PROJETUNREAL_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();

#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemDataAsset(); \
	friend struct Z_Construct_UClass_UItemDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_UItemDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UItemDataAsset)


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemDataAsset(UItemDataAsset&&) = delete; \
	UItemDataAsset(const UItemDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemDataAsset) \
	NO_API virtual ~UItemDataAsset();


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h_49_PROLOG
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h_52_INCLASS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemDataAsset;

// ********** End Class UItemDataAsset *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h

// ********** Begin Enum EItemType *****************************************************************
#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Consumable) \
	op(EItemType::Equipment) \
	op(EItemType::Key) \
	op(EItemType::Quest) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> PROJETUNREAL_API UEnum* StaticEnum<EItemType>();
// ********** End Enum EItemType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
