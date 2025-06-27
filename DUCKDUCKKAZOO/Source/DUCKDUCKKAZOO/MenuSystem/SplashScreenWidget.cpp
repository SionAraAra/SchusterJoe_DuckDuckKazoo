// Fill out your copyright notice in the Description page of Project Settings.


#include "SplashScreenWidget.h"
#include "UObject\ConstructorHelpers.h"


USplashScreenWidget::USplashScreenWidget(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UUserWidget> SplashScreenBPClass(TEXT("/Game/OwnContent/Player/UI/WBP_SplashScreen.WBP_SplashScreen_C"));
	if (SplashScreenBPClass.Succeeded())
	{
		WidgetClass = SplashScreenBPClass.Class;
		UE_LOG(LogTemp, Log, TEXT("Successfully loaded Widget class."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load Widget class."));
	}

	
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
		World->ServerTravel("/Game/OwnContent/Maps/MainMenu?listen");
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