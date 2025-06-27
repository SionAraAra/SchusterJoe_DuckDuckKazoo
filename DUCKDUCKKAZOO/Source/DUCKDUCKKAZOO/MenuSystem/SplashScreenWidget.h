// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
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
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> WidgetClass;

	void Setup();
};
