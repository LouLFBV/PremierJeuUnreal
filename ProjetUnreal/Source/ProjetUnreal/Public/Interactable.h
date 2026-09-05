#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

// Classe générée par Unreal (Ne pas y toucher)
UINTERFACE(MinimalAPI)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

// C'est ici que l'on déclare nos fonctions (Équivalent de ton IInteractable)
class PROJETUNREAL_API IInteractable
{
	GENERATED_BODY()

public:

	// Appelé quand le joueur regarde l'objet (équivalent de ton SetTargeted)
	virtual void SetTargeted(bool bIsTargeted, class AMainCharacter* Player) = 0;

	// Appelé quand le joueur appuie sur la touche (équivalent de ton OnInteract)
	virtual void OnInteract(class AMainCharacter* Player) = 0;
};