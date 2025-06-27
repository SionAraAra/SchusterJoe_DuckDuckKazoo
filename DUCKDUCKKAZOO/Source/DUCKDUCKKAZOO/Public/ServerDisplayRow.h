// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerDisplayRow.generated.h"

/**
 * 
 */
UCLASS()
class DUCKDUCKKAZOO_API UServerDisplayRow : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual bool Initialize() override;
public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ServerNameText;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* HostName;
	
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* PlayerCountText;

	UPROPERTY(meta = (BindWidget))
	class UButton* RowButton;

	class UMainMenu* MainMenuParent;
	TOptional<uint32> Index;

	UPROPERTY(BlueprintReadWrite, Category = "Server Row")
	bool isSelected = false;

	UFUNCTION(BlueprintCallable)
	void SetIsSelected(bool bSelected);

	UFUNCTION(BlueprintCallable)
	bool GetIsSelected();
	
	void SetServerName(const FString& Name);
	void Setup(class UMainMenu* InMainMenuParent, uint32 InSelectedIndex);

private:
	UFUNCTION()
	void OnClicked();
	
	
	 
	
};
