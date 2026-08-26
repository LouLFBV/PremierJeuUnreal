#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	UE_LOG(LogTemp, Warning, TEXT("MainMenuWidget initialisé !"));

	if (PlayButton)
	{
		UE_LOG(LogTemp, Log, TEXT("PlayButton trouvé et lié avec succès !"));
		PlayButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnPlayClicked);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("PlayButton NON trouvé ! Vérifie le nom exact du bouton dans le Widget Blueprint."));
	}

	if (QuitButton)
	{
		UE_LOG(LogTemp, Log, TEXT("QuitButton trouvé et lié avec succès !"));
		QuitButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnQuitClicked);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("QuitButton NON trouvé ! Vérifie le nom exact du bouton dans le Widget Blueprint."));
	}
}

void UMainMenuWidget::OnPlayClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Clic sur PlayButton détecté ! Tentative d'ouverture de 'Niveau1'..."));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Chargement de Niveau1..."));
	}

	UGameplayStatics::OpenLevel(this, FName("Niveau1"));
}

void UMainMenuWidget::OnQuitClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Clic sur QuitButton détecté ! Fermeture..."));

	UKismetSystemLibrary::QuitGame(this, GetOwningPlayer(), EQuitPreference::Quit, false);
}