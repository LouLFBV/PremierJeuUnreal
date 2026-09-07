#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryTypes.h"
#include "InventorySlotWidget.generated.h"

UCLASS()
class PROJETUNREAL_API UInventorySlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// Permet de mettre à jour la case en C++ ou de la surcharger en Blueprint
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Inventory UI")
	void UpdateSlot(const FInventorySlot& SlotData);
	virtual void UpdateSlot_Implementation(const FInventorySlot& SlotData);
};