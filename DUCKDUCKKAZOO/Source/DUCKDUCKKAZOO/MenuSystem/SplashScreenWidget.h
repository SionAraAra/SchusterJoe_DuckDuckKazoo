// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Public/CustomGameInstance.h"
#include "SplashScreenWidget.generated.h"

/**
 * 
 */
UCLASS()
class DUCKDUCKKAZOO_API USplashScreenWidget : public UUserWidget
{
	GENERATED_BODY()
	USplashScreenWidget(const FObjectInitializer& ObjectInitializer);
	protected:

	FTimerHandle SplashTimerHandle;

	UFUNCTION()
	void StartGameMenu();

	void NativeConstruct();
	UCustomGameInstance* GameInstance;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> WidgetClass;
	
	void SetGameInstance(class UCustomGameInstance* Instance);
	void Setup();
};
