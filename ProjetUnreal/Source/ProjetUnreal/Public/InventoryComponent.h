#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemData.h"
#include "InventoryComponent.generated.h"

// Structure représentant un emplacement (Slot) dans l'inventaire
USTRUCT(BlueprintType)
struct FInventorySlot
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TObjectPtr<UItemDataAsset> ItemDataAsset = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	int32 Quantity = 0;

	FInventorySlot() {}
	FInventorySlot(UItemDataAsset* InItemData, int32 InQuantity)
		: ItemDataAsset(InItemData), Quantity(InQuantity) {
	}
};

// Délégué pour prévenir l'UI (HUD / Widget Inventaire) dès que le contenu change
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJETUNREAL_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInventoryComponent();

	// Événement déclenché à chaque ajout / suppression d'objet
	UPROPERTY(BlueprintAssignable, Category = "Inventory|Events")
	FOnInventoryUpdated OnInventoryUpdated;

	// --- FONCTIONS PRINCIPALES --- //

	// Ajoute un objet dans l'inventaire (gestion de la capabilité et du stacking)
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool AddItem(UItemDataAsset* ItemData, int32 QuantityToAdd = 1);

	// Retire une quantité d'un objet
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool RemoveItem(UItemDataAsset* ItemData, int32 QuantityToRemove = 1);

	// Vérifie si l'inventaire possède au moins X exemplaires d'un objet
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool HasItem(UItemDataAsset* ItemData, int32 RequiredQuantity = 1) const;

	// Obtient le nombre total d'exemplaires d'un objet
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	int32 GetItemQuantity(UItemDataAsset* ItemData) const;

	// Renvoie la liste complète des slots de l'inventaire
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	const TArray<FInventorySlot>& GetSlots() const { return InventorySlots; }

protected:
	virtual void BeginPlay() override;

	// Nombre maximal d'emplacements dans l'inventaire
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	int32 Capacity = 20;

	// Tableau contenant les objets
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
	TArray<FInventorySlot> InventorySlots;
};