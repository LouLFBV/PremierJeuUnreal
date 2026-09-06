#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
}

bool UInventoryComponent::AddItem(UItemDataAsset* ItemData, int32 QuantityToAdd)
{
	if (!ItemData || QuantityToAdd <= 0) return false;

	const FItemData& Data = ItemData->ItemData;
	int32 AmountRemaining = QuantityToAdd;

	// 1. Si l'objet est empilable (Stackable), on cherche un slot existant
	if (Data.bIsStackable)
	{
		for (FInventorySlot& Slot : InventorySlots)
		{
			if (Slot.ItemDataAsset == ItemData && Slot.Quantity < Data.MaxStack)
			{
				int32 RoomInSlot = Data.MaxStack - Slot.Quantity;
				int32 AddToThisSlot = FMath::Min(AmountRemaining, RoomInSlot);

				Slot.Quantity += AddToThisSlot;
				AmountRemaining -= AddToThisSlot;

				if (AmountRemaining <= 0)
				{
					OnInventoryUpdated.Broadcast();
					return true;
				}
			}
		}
	}

	// 2. S'il reste de la quantité à ajouter et qu'il y a de la place disponible
	while (AmountRemaining > 0 && InventorySlots.Num() < Capacity)
	{
		int32 AddToNewSlot = Data.bIsStackable ? FMath::Min(AmountRemaining, Data.MaxStack) : 1;
		InventorySlots.Add(FInventorySlot(ItemData, AddToNewSlot));
		AmountRemaining -= AddToNewSlot;
	}

	// Prévenir l'UI que l'inventaire a changé
	OnInventoryUpdated.Broadcast();

	// Retourne vrai si TOUT le paquet a pu être ajouté
	return (AmountRemaining == 0);
}

bool UInventoryComponent::RemoveItem(UItemDataAsset* ItemData, int32 QuantityToRemove)
{
	if (!ItemData || QuantityToRemove <= 0) return false;
	if (!HasItem(ItemData, QuantityToRemove)) return false;

	int32 AmountRemaining = QuantityToRemove;

	for (int32 i = InventorySlots.Num() - 1; i >= 0; --i)
	{
		if (InventorySlots[i].ItemDataAsset == ItemData)
		{
			if (InventorySlots[i].Quantity > AmountRemaining)
			{
				InventorySlots[i].Quantity -= AmountRemaining;
				AmountRemaining = 0;
				break;
			}
			else
			{
				AmountRemaining -= InventorySlots[i].Quantity;
				InventorySlots.RemoveAt(i);
			}

			if (AmountRemaining <= 0) break;
		}
	}

	OnInventoryUpdated.Broadcast();
	return true;
}

bool UInventoryComponent::HasItem(UItemDataAsset* ItemData, int32 RequiredQuantity) const
{
	return GetItemQuantity(ItemData) >= RequiredQuantity;
}

int32 UInventoryComponent::GetItemQuantity(UItemDataAsset* ItemData) const
{
	if (!ItemData) return 0;

	int32 Total = 0;
	for (const FInventorySlot& Slot : InventorySlots)
	{
		if (Slot.ItemDataAsset == ItemData)
		{
			Total += Slot.Quantity;
		}
	}
	return Total;
}