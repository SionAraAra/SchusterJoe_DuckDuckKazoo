// Fill out your copyright notice in the Description page of Project Settings.


#include "SplashScreenWidget.h"

#include "UObject\ConstructorHelpers.h"


USplashScreenWidget::USplashScreenWidget(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	

	
}
void USplashScreenWidget::SetGameInstance(class UCustomGameInstance* Instance)
{
	GameInstance = Instance;
}
void USplashScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Set a timer for 5 seconds
	GetWorld()->GetTimerManager().SetTimer(SplashTimerHandle, this, &USplashScreenWidget::StartGameMenu, 5.0f, false);
}


void USplashScreenWidget::StartGameMenu()
{
	UE_LOG(LogTemp, Log, TEXT("Splash screen finished. Moving to next function..."));
    
	UWorld* World = GetWorld();
	if (World)
	{
		World->ServerTravel("/Game/OwnContent/Map/MainMenu?listen");
	}

	
}

void USplashScreenWidget::Setup()
{
	if (!GetWorld())
	{
		return;
	}
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController)
	{
		return;
	}

	FInputModeUIOnly InputMode;
	InputMode.SetWidgetToFocus(this->TakeWidget());
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	PlayerController->SetInputMode(InputMode);
	PlayerController->bShowMouseCursor = true;

	UE_LOG(LogTemp, Log, TEXT("Mother Glados! Menu input setup complete."));
}