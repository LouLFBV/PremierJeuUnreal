#include "InventorySlotWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "ItemData.h" 

void UInventorySlotWidget::UpdateSlot_Implementation(const FInventorySlot& SlotData)
{
	if (SlotData.IsValid() && SlotData.ItemData)
	{
		// 1. Affichage de l'icône
		if (ItemIcon)
		{
			UTexture2D* IconTexture = SlotData.ItemData->ItemData.Icon; // Adapte selon la variable de ton DataAsset
			if (IconTexture)
			{
				ItemIcon->SetBrushFromTexture(IconTexture);
				ItemIcon->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			}
			else
			{
				ItemIcon->SetVisibility(ESlateVisibility::Collapsed);
			}
		}

		// 2. Affichage de la quantité
		if (QuantityText)
		{
			if (SlotData.Quantity > 1)
			{
				QuantityText->SetText(FText::AsNumber(SlotData.Quantity));
				QuantityText->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			}
			else
			{
				QuantityText->SetVisibility(ESlateVisibility::Collapsed);
			}
		}
	}
	else
	{
		// Case vide
		if (ItemIcon)
		{
			ItemIcon->SetVisibility(ESlateVisibility::Collapsed);
		}
		if (QuantityText)
		{
			QuantityText->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}