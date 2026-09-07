#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// Remplit le tableau avec 20 emplacements vides par défaut
	InventorySlots.SetNum(Capacity);
}

bool UInventoryComponent::AddItem(UItemDataAsset* Item, int32 Quantity)
{
	if (!Item || Quantity <= 0) return false;

	int32 Remaining = Quantity;

	// Tentative d'empilement dans une case avec le même objet
	if (Item->ItemData.bIsStackable)
	{
		for (FInventorySlot& Slot : InventorySlots)
		{
			if (Slot.IsValid() && Slot.ItemData == Item && Slot.Quantity < Item->ItemData.MaxStack)
			{
				int32 SpaceLeft = Item->ItemData.MaxStack - Slot.Quantity;
				int32 AddAmount = FMath::Min(Remaining, SpaceLeft);

				Slot.Quantity += AddAmount;
				Remaining -= AddAmount;

				if (Remaining <= 0) break;
			}
		}
	}

	// Si du surplus reste, placement dans la première case vide
	if (Remaining > 0)
	{
		for (FInventorySlot& Slot : InventorySlots)
		{
			if (!Slot.IsValid())
			{
				Slot.ItemData = Item;
				int32 AddAmount = Item->ItemData.bIsStackable ? FMath::Min(Remaining, Item->ItemData.MaxStack) : 1;

				Slot.Quantity = AddAmount;
				Remaining -= AddAmount;

				if (Remaining <= 0) break;
			}
		}
	}

	// Notification à l'UI
	OnInventoryUpdated.Broadcast();

	return Remaining == 0;
}

bool UInventoryComponent::RemoveItemFromSlot(int32 SlotIndex, int32 Amount)
{
	if (InventorySlots.IsValidIndex(SlotIndex) && InventorySlots[SlotIndex].IsValid())
	{
		InventorySlots[SlotIndex].Quantity -= Amount;

		if (InventorySlots[SlotIndex].Quantity <= 0)
		{
			InventorySlots[SlotIndex].Clear();
		}

		OnInventoryUpdated.Broadcast();
		return true;
	}
	return false;
}

bool UInventoryComponent::RemoveItem(UItemDataAsset* Item, int32 Quantity)
{
	if (!Item || Quantity <= 0) return false;

	int32 RemainingToRemove = Quantity;

	for (int32 i = 0; i < InventorySlots.Num(); ++i)
	{
		if (InventorySlots[i].IsValid() && InventorySlots[i].ItemData == Item)
		{
			int32 AmountInSlot = InventorySlots[i].Quantity;
			int32 RemoveAmount = FMath::Min(RemainingToRemove, AmountInSlot);

			// Utilise la méthode par slot déjà existante
			RemoveItemFromSlot(i, RemoveAmount);
			RemainingToRemove -= RemoveAmount;

			if (RemainingToRemove <= 0) break;
		}
	}

	return RemainingToRemove == 0;
}

bool UInventoryComponent::HasItem(UItemDataAsset* Item) const
{
	if (!Item) return false;

	for (const FInventorySlot& Slot : InventorySlots)
	{
		if (Slot.IsValid() && Slot.ItemData == Item)
		{
			return true;
		}
	}
	return false;
}