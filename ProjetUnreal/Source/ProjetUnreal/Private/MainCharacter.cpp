#include "MainCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "WalletComponent.h"
#include "HealthComponent.h"
#include "Weapon.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "PlayerStateMachineComponent.h"

AMainCharacter::AMainCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// 1. Configuration de la rotation du personnage (TPS classique)
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Le personnage s'oriente automatiquement vers la direction où il marche
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);

	// 2. Création du SpringArm (bras de caméra)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // Distance derrière le personnage
	CameraBoom->bUsePawnControlRotation = true; // La caméra pivote selon la souris

	// 3. Création de la Caméra
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false; // Suit le bras de caméra

	// 4. State Machine
	StateMachineComponent = CreateDefaultSubobject<UPlayerStateMachineComponent>(TEXT("StateMachineComponent"));

	// 5. Création du composant Wallet et Health
	WalletComponent = CreateDefaultSubobject<UWalletComponent>(TEXT("WalletComponent"));
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Enregistrement du Mapping Context d'Input
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			if (DefaultMappingContext)
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
	if (WeaponClass)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		EquippedWeapon = GetWorld()->SpawnActor<AWeapon>(WeaponClass, SpawnParams);

		if (EquippedWeapon)
		{
			// Attache l'arme au socket du squelette de ton personnage (ex: "hand_r_socket")
			EquippedWeapon->AttachToComponent(
				GetMesh(),
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				TEXT("sword_bottom")
			);
		}
	}
}

void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Liaison de la fonction Move
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainCharacter::Move);
		}

		// Liaison de la fonction Look
		if (LookAction)
		{
			EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainCharacter::Look);
		}

		if (AttackAction)
		{
			EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Triggered, this, &AMainCharacter::Attack);
		}

		if (EnhancedInputComponent && PauseAction)
		{
			EnhancedInputComponent->BindAction(PauseAction, ETriggerEvent::Started, this, &AMainCharacter::TogglePause);
		}

		if (JumpAction)
		{
			// Quand on appuie sur Espace : lance le saut
			EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);

			// Quand on relâche Espace : stoppe la poussée du saut (permet les sauts courts/longs)
			EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
		}
	}
}

void AMainCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// Récupérer la direction actuelle de la caméra
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// Calculer les vecteurs avant/arrière et droite/gauche
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// Appliquer le mouvement
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AMainCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// Tourner la caméra avec la souris
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AMainCharacter::Jump()
{
	Super::Jump();

	// Optionnel : avertir ta State Machine qu'on passe en état "Jumping" ou "InAir"
	/*
	if (StateMachineComponent)
	{
		StateMachineComponent->SetState(EPlayerState::Jumping);
	}
	*/
}

void AMainCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	// Déclenché automatiquement quand le personnage touche le sol !
	// Optionnel : remettre la State Machine en état "Grounded" ou "Locomotion"
	/*
	if (StateMachineComponent)
	{
		StateMachineComponent->SetState(EPlayerState::Grounded);
	}
	*/
}

void AMainCharacter::Attack()
{
	// 1. Bloque l'exécution si une attaque est déjà en cours
	if (bIsAttacking)
	{
		return;
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Attack!"));
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && AttackMontage)
	{
		AnimInstance->Montage_Play(AttackMontage);
	}
}

void AMainCharacter::TogglePause()
{

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC || !PauseMenuClass) return;

	bool bIsPaused = UGameplayStatics::IsGamePaused(GetWorld());

	if (!bIsPaused)
	{
		// 1. Mettre le jeu en pause
		UGameplayStatics::SetGamePaused(GetWorld(), true);

		// 2. Instancier le widget s'il n'existe pas encore
		if (!PauseMenuInstance)
		{
			PauseMenuInstance = CreateWidget<UUserWidget>(PC, PauseMenuClass);
		}

		// 3. Afficher l'interface et libérer la souris
		if (PauseMenuInstance)
		{
			PauseMenuInstance->AddToViewport();

			FInputModeGameAndUI InputMode;
			InputMode.SetWidgetToFocus(PauseMenuInstance->TakeWidget());
			PC->SetInputMode(InputMode);
			PC->bShowMouseCursor = true;
		}
	}
	else
	{
		// 1. Retirer le widget du HUD
		if (PauseMenuInstance)
		{
			PauseMenuInstance->RemoveFromParent();
		}

		// 2. Enlever la pause du jeu
		UGameplayStatics::SetGamePaused(GetWorld(), false);

		// 3. Verrouiller à nouveau la souris dans le jeu
		FInputModeGameOnly InputMode;
		PC->SetInputMode(InputMode);
		PC->bShowMouseCursor = false;
	}
}