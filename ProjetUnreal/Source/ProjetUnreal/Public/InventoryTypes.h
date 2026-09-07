#pragma once

#include "CoreMinimal.h"
#include "ItemData.h" // Contient UItemDataAsset et FItemData
#include "InventoryTypes.generated.h"

// Structure représentant le contenu d'une case d'inventaire
USTRUCT(BlueprintType)
struct FInventorySlot
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slot")
	TObjectPtr<UItemDataAsset> ItemData = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slot")
	int32 Quantity = 0;

	bool IsValid() const { return ItemData != nullptr && Quantity > 0; }
	void Clear() { ItemData = nullptr; Quantity = 0; }
};