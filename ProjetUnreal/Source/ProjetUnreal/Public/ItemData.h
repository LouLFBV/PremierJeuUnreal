#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemData.generated.h"

// Types d'objets possibles
UENUM(BlueprintType)
enum class EItemType : uint8
{
	Consumable  UMETA(DisplayName = "Consommable"),
	Equipment   UMETA(DisplayName = "Équipement"),
	Key         UMETA(DisplayName = "Clé"),
	Quest       UMETA(DisplayName = "Quête")
};

// Les données brutes d'un objet
USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	FName ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	EItemType ItemType = EItemType::Consumable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World")
	TObjectPtr<UStaticMesh> WorldMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stacking")
	bool bIsStackable = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stacking")
	int32 MaxStack = 1;
};

// Le DataAsset : le conteneur qu'on va créer dans l'éditeur
UCLASS(BlueprintType)
class PROJETUNREAL_API UItemDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
	FItemData ItemData;
};