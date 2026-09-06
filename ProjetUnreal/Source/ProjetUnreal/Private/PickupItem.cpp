#include "PickupItem.h"
#include "InventoryComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "MainCharacter.h"


APickupItem::APickupItem()
{
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMesh->SetupAttachment(RootComponent);

	if (InteractWidget)
	{
		InteractWidget->SetupAttachment(ItemMesh);
	}
}

void APickupItem::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// Magie Unreal : le modèle 3D change en direct dans l'éditeur selon le DataAsset choisi !
	if (ItemDataAsset && ItemDataAsset->ItemData.WorldMesh)
	{
		ItemMesh->SetStaticMesh(ItemDataAsset->ItemData.WorldMesh);
	}
}


void APickupItem::OnInteract(AMainCharacter* Player)
{
	Super::OnInteract(Player);

	if (!ItemDataAsset || !Player) return;

	UInventoryComponent* Inventory = Player->GetInventoryComponent();
	if (Inventory)
	{
		// Si l'objet a été ajouté avec succès dans l'inventaire
		if (Inventory->AddItem(ItemDataAsset, Quantity))
		{
			UE_LOG(LogTemp, Log, TEXT("Ajouté à l'inventaire : %s x%d"), *ItemDataAsset->ItemData.Name.ToString(), Quantity);
			Destroy(); // L'objet disparaît de la scène
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Inventaire plein ! Impossible de ramasser %s"), *ItemDataAsset->ItemData.Name.ToString());
		}
	}
}