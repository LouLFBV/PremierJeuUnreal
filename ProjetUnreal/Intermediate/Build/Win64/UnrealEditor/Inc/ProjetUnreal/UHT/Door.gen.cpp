// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Door.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDoor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_ADoor();
PROJETUNREAL_API UClass* Z_Construct_UClass_ADoor_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_AInteractableBase();
PROJETUNREAL_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADoor Function UpdateDoorRotation ****************************************
struct Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics
{
	struct Door_eventUpdateDoorRotation_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Door_eventUpdateDoorRotation_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "UpdateDoorRotation", Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::Door_eventUpdateDoorRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::Door_eventUpdateDoorRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoor_UpdateDoorRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_UpdateDoorRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execUpdateDoorRotation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDoorRotation(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ADoor Function UpdateDoorRotation ******************************************

// ********** Begin Class ADoor ********************************************************************
void ADoor::StaticRegisterNativesADoor()
{
	UClass* Class = ADoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateDoorRotation", &ADoor::execUpdateDoorRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADoor;
UClass* ADoor::GetPrivateStaticClass()
{
	using TClass = ADoor;
	if (!Z_Registration_Info_UClass_ADoor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Door"),
			Z_Registration_Info_UClass_ADoor.InnerSingleton,
			StaticRegisterNativesADoor,
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
	return Z_Registration_Info_UClass_ADoor.InnerSingleton;
}
UClass* Z_Construct_UClass_ADoor_NoRegister()
{
	return ADoor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorTimeline_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Animation ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Animation ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorCurve_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenDoorSound_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Audio ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Audio ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedDoorSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xef\xbf\xbdtats ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xef\xbf\xbdtats ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredKeyAsset_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenAngle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenDoorSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockedDoorSound;
	static void NewProp_bIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequiredKeyAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_UpdateDoorRotation, "UpdateDoorRotation" }, // 1189736801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimeline = { "DoorTimeline", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorTimeline_MetaData), NewProp_DoorTimeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorCurve = { "DoorCurve", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorCurve_MetaData), NewProp_DoorCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_OpenAngle = { "OpenAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, OpenAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenAngle_MetaData), NewProp_OpenAngle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_OpenDoorSound = { "OpenDoorSound", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, OpenDoorSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenDoorSound_MetaData), NewProp_OpenDoorSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_LockedDoorSound = { "LockedDoorSound", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, LockedDoorSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedDoorSound_MetaData), NewProp_LockedDoorSound_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bIsLocked_SetBit(void* Obj)
{
	((ADoor*)Obj)->bIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocked_MetaData), NewProp_bIsLocked_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RequiredKeyAsset = { "RequiredKeyAsset", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RequiredKeyAsset), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredKeyAsset_MetaData), NewProp_RequiredKeyAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_OpenAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_OpenDoorSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_LockedDoorSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bIsLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RequiredKeyAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInteractableBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
	&ADoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoor()
{
	if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
ADoor::~ADoor() {}
// ********** End Class ADoor **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 2204285748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h__Script_ProjetUnreal_3597080418(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_Door_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
