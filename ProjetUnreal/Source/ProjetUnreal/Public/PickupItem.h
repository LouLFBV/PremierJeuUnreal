#pragma once

#include "CoreMinimal.h"
#include "InteractableBase.h"
#include "ItemData.h"
#include "PickupItem.generated.h"

class UStaticMeshComponent;

UCLASS()
class PROJETUNREAL_API APickupItem : public AInteractableBase
{
	GENERATED_BODY()

public:
	APickupItem();

	virtual void OnInteract(class AMainCharacter* Player) override;

protected:
	// Appelée automatiquement quand on modifie une variable dans l'Éditeur
	virtual void OnConstruction(const FTransform& Transform) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> ItemMesh;

	// Le DataAsset contenant les infos de cet objet précis
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	TObjectPtr<UItemDataAsset> ItemDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	int32 Quantity = 1;
};