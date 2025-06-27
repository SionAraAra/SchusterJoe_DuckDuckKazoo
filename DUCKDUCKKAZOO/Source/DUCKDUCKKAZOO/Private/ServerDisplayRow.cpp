// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/ServerDisplayRow.h"

#include "LevelEditorMenuContext.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "../MenuSystem/MainMenu.h"

bool UServerDisplayRow::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	UE_LOG(LogTemp, Warning, TEXT("ServerDisplayRow Initialize called."));

	if (RowButton)
	{
		RowButton->OnClicked.AddDynamic(this, &UServerDisplayRow::OnClicked);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("SelectButton is NULLLLLLLLLLLLLL."));
	}

	return true;
}


void UServerDisplayRow::SetIsSelected(bool bSelected)
{
	isSelected = bSelected;
}


void UServerDisplayRow::SetServerName(const FString& Name)
{
	if (ServerNameText)
	{
		ServerNameText->SetText(FText::FromString(Name));
	}
	
}

void UServerDisplayRow::Setup(UMainMenu* InMainMenuParent, uint32 InIndex)
{
	MainMenuParent = InMainMenuParent;
	Index = InIndex;
	
	if (Index.IsSet())
	{
		UE_LOG(LogTemp, Log, TEXT("ServerDisplayRow Parent set with index: %d"), Index.GetValue());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Index is NOT SET"));
	}
}

void UServerDisplayRow::OnClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Server row can be clicked."));

	if (MainMenuParent && Index.IsSet())
	{
		
		MainMenuParent->SelectServer(Index.GetValue());

	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Parent or Index isn't set"));
	}
}