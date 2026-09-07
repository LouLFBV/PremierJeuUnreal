#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryTypes.h"
#include "InventoryComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJETUNREAL_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInventoryComponent();

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FOnInventoryUpdated OnInventoryUpdated;

	// Nombre total de cases dans l'inventaire (ex: 20 cases)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	int32 Capacity = 20;

	// Ajouter un objet
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool AddItem(UItemDataAsset* Item, int32 Quantity = 1);

	// Retirer un objet d'un emplacement précis
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool RemoveItemFromSlot(int32 SlotIndex, int32 Amount = 1);

	// Retirer une quantité d'un objet précis en cherchant dans l'inventaire
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool RemoveItem(UItemDataAsset* Item, int32 Quantity = 1);

	// Vérifier si un objet est présent (ex: une clé)
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool HasItem(UItemDataAsset* Item) const;

	// Getters pour l'UI
	const TArray<FInventorySlot>& GetSlots() const { return InventorySlots; }

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Inventory")
	TArray<FInventorySlot> InventorySlots;
};