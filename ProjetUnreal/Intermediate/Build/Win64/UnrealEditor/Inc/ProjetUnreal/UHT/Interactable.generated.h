// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable.h"

#ifdef PROJETUNREAL_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define PROJETUNREAL_Interactable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInteractable ********************************************************
PROJETUNREAL_API UClass* Z_Construct_UClass_UInteractable_NoRegister();

#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Interactable_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJETUNREAL_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractable(UInteractable&&) = delete; \
	UInteractable(const UInteractable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJETUNREAL_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	virtual ~UInteractable() = default;


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Interactable_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_UInteractable_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_UInteractable_NoRegister) \
	DECLARE_SERIALIZER(UInteractable)


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Interactable_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Interactable_h_11_GENERATED_UINTERFACE_BODY() \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Interactable_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Interactable_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Interactable_h_8_PROLOG
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Interactable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Interactable_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractable;

// ********** End Interface UInteractable **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Interactable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
