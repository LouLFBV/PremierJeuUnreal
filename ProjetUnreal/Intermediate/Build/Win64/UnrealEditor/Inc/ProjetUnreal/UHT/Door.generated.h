// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Door.h"

#ifdef PROJETUNREAL_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define PROJETUNREAL_Door_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADoor ********************************************************************
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateDoorRotation);


PROJETUNREAL_API UClass* Z_Construct_UClass_ADoor_NoRegister();

#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_ADoor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADoor, AInteractableBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_ADoor_NoRegister) \
	DECLARE_SERIALIZER(ADoor)


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADoor(ADoor&&) = delete; \
	ADoor(const ADoor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor) \
	NO_API virtual ~ADoor();


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h_13_PROLOG
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h_16_INCLASS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADoor;

// ********** End Class ADoor **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
