#pragma once

#include "CoreMinimal.h"
#include "InteractableBase.h"
#include "Components/TimelineComponent.h"
#include "ItemData.h"
#include "Door.generated.h"

class UStaticMeshComponent;
class USoundBase;
class UCurveFloat;

UCLASS()
class PROJETUNREAL_API ADoor : public AInteractableBase
{
	GENERATED_BODY()

public:
	ADoor();

	virtual void OnInteract(class AMainCharacter* Player) override;

protected:
	virtual void BeginPlay() override;

	// Fonction de bascule d'ouverture / fermeture
	void ToggleDoor();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> DoorMesh;

	// --- Animation ---
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	TObjectPtr<UTimelineComponent> DoorTimeline;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	TObjectPtr<UCurveFloat> DoorCurve;

	UPROPERTY(EditAnywhere, Category = "Animation")
	float OpenAngle = 90.0f;

	// --- Audio ---
	UPROPERTY(EditAnywhere, Category = "Audio")
	TObjectPtr<USoundBase> OpenDoorSound;

	UPROPERTY(EditAnywhere, Category = "Audio")
	TObjectPtr<USoundBase> LockedDoorSound;

	// --- États ---
	UPROPERTY(EditAnywhere, Category = "State")
	bool bIsLocked = false;

	bool bIsOpen = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Door")
	TObjectPtr<UItemDataAsset> RequiredKeyAsset;

private:
	UFUNCTION()
	void UpdateDoorRotation(float Value);
};