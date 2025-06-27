// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Public/CustomGameInstance.h"
#include "Blueprint/UserWidget.h"
#include "Components/WidgetSwitcher.h"
#include "../Public/ServerDisplayRow.h"

#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class DUCKDUCKKAZOO_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UMainMenu(const FObjectInitializer& ObjectInitializer);
protected:
	
	virtual bool Initialize();
	virtual void NativeDestruct() override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server Row")
	TSubclassOf<class UServerDisplayRow> ServerRowClass;

	
private:
	UPROPERTY(meta = (BindWidget))
	class UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* JoinButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* CancelButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* ConfirmButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* SinglePlayerButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* LocalButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* OnlineButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* QuitButton;

	
	UCustomGameInstance* GameInstance;

	UPROPERTY(meta = (BindWidget))
	class UWidgetSwitcher* MainSwitcher;

	UPROPERTY(meta = (BindWidget))
	class UWidget* MainMenuWidget;

	UPROPERTY(meta = (BindWidget))
	class UWidget* JoinMenuWidget;

	UPROPERTY(meta = (BindWidget))
	class UWidget* GameTypeWidget;


	

	TSubclassOf<UUserWidget> UserWidgetClass;
	
	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ServerList;

	UFUNCTION (BlueprintCallable, Category="Switcher")  
	void SetActiveWidget(int index);
	
	UFUNCTION()
	void Hosting();
	UFUNCTION()
	void OpenJoinScreen();

	UFUNCTION()
	void Canceling();
	UFUNCTION()
	void ConfirmJoin();

	UPROPERTY()
	TArray<UServerDisplayRow*> ServerRowWidgets;



	
public:
	void SetGameInstance(class UCustomGameInstance* GameInstance);

	UFUNCTION(BlueprintCallable)
	void AddServerRow(const FString& ServerName, int Index);
	void Setup();
	void SelectServer(uint32 Index);

	uint32 SelectedServerIndex = -1;
};


