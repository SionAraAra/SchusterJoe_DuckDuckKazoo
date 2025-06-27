// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"

#include "AssetTypeCategories.h"
#include "Components/Button.h"
#include "Components/Widget.h"
#include "Components/EditableTextBox.h"
#include "Components/ScrollBox.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/WidgetSwitcher.h"


UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UServerDisplayRow> ServerRowBPClass(TEXT("/Game/OwnContent/UI/WBP_ServerDisplayRow.WBP_ServerDisplayRow_C"));
 	if (ServerRowBPClass.Succeeded())
 	{
 		ServerRowClass = ServerRowBPClass.Class;
 	}else
 	{
 		UE_LOG(LogTemp, Error, TEXT("Failed to load WBP_ServerDisplayRow class."));
 	}
}

bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success)
	{
		UE_LOG(LogTemp, Error, TEXT("Super::Initialize failed"));
		return false;
	}else
	{
		UE_LOG(LogTemp, Display, TEXT("UMainMenu::Initialize was called"));
	}
	
	

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
							
		FInputModeUIOnly InputMode;
		InputMode.SetWidgetToFocus(this->TakeWidget());
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

		PlayerController->SetInputMode(InputMode);
		PlayerController->bShowMouseCursor = true;

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Mother Glados! THE INPUT MODE IS SET"));
	}
	
	if (HostButton)
	{
		HostButton->OnClicked.AddDynamic(this, &UMainMenu::Hosting);
		UE_LOG(LogTemp, Display, TEXT("HostButton is bound"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("HostButton is null"));
	}

	if (JoinButton)
	{
		JoinButton->OnClicked.AddDynamic(this, &UMainMenu::OpenJoinScreen);
		UE_LOG(LogTemp, Display, TEXT("JoinButton is bound"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("JoinButton is null"));
	}

	if (CancelButton)
	{
		CancelButton->OnClicked.AddDynamic(this, &UMainMenu::Canceling);
		UE_LOG(LogTemp, Display, TEXT("CancelButton is bound"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CancelButton is null"));
	}

	if (ConfirmButton)
	{
		ConfirmButton->OnClicked.AddDynamic(this, &UMainMenu::ConfirmJoin);
		UE_LOG(LogTemp, Display, TEXT("ConfirmButton is bound"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ConfirmButton is null"));
	}
	return true;
}

void UMainMenu::SetActiveWidget(int index)
{
	MainSwitcher->SetActiveWidgetIndex(index);
}

void UMainMenu::Hosting()
{
	UE_LOG(LogTemp, Warning, TEXT("Mother Glados! I host"));
	SetGameInstance(Cast<UCustomGameInstance>(GetWorld()->GetGameInstance()));
	if (GameInstance)
	{
		GameInstance->Host();
		
	}
	
}

void UMainMenu::OpenJoinScreen()
{
	UE_LOG(LogTemp, Warning, TEXT("Mother Glados! Open join screen requested"));
	
	if (MainSwitcher && JoinMenuWidget)
	{
		MainSwitcher->SetActiveWidget(JoinMenuWidget);
		if (GameInstance)
		{
			UE_LOG(LogTemp, Warning, TEXT("SearchingAvailableSessions in open joinscreen"))
			GameInstance->SearchAvailableSessions();
		}
		for (int Index = 0 ; Index < 4 ; Index++)
		{
			
			AddServerRow("Server "+ FString::FromInt(Index), Index);
		}
		UE_LOG(LogTemp, Warning, TEXT("Mother Glados! I switch to join options"));
	}else
	{
		UE_LOG(LogTemp, Warning, TEXT("Mother Glados! There was an error changing screens"))
	}
}

void UMainMenu::AddServerRow(const FString& ServerName, int Index)
{
	if (!ensure(ServerRowClass!=nullptr))
	{
		return;
	}
	if (!ensure(ServerList!=nullptr))
	{
		return;
	}
	UWorld* world = GetWorld();
	if (!ensure(world!=nullptr))
	{
		return;
	}
	UServerDisplayRow* Row = CreateWidget<UServerDisplayRow>(this, ServerRowClass);
	if (!ensure(Row!=nullptr))
	{
		return;
	}
	Row ->SetServerName(ServerName);
	Row ->Setup(this, Index);
	ServerList->AddChild(Row);
	ServerRowWidgets.Add(Row);
	UE_LOG(LogTemp, Display, TEXT("Added server row: %s"), *ServerName);
	
}




void UMainMenu::Canceling()
{
	if (MainSwitcher && MainMenuWidget)
	{
		ServerList->ClearChildren();
		ServerRowWidgets.Empty();
		MainSwitcher->SetActiveWidget(MainMenuWidget);
		UE_LOG(LogTemp, Warning, TEXT("Mother Glados! I switch back to mainmenu"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Mother Glados! Error switching back to mainmenu"));
	}
}

void UMainMenu::ConfirmJoin()
{
	UE_LOG(LogTemp, Warning, TEXT("Mother Glados! I join to the Server XX"));
	if (GameInstance)
	{
		GameInstance->Join(SelectedServerIndex);
	}
}

void UMainMenu::Setup()
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

void UMainMenu::SelectServer(uint32 Index)
{
	SelectedServerIndex = Index;
	for (int i = 0; i < ServerRowWidgets.Num(); ++i)
	{
		bool bSelected = (i == Index);
		ServerRowWidgets[i]->SetIsSelected(bSelected);
	}
}




void UMainMenu::SetGameInstance(class UCustomGameInstance* Instance)
	{
		GameInstance = Instance;
	}

void UMainMenu::NativeDestruct() {
	Super::NativeDestruct();

	UWorld* World = GetWorld();
	if (!World) 
	{
		UE_LOG(LogTemp, Warning, TEXT("World is null inside native."))
		return; 
	}

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!PlayerController) 
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is null inside native."));
		return;
	}

	FInputModeGameOnly InputMode;
	PlayerController->SetInputMode(InputMode);
	PlayerController->bShowMouseCursor = false;
	UE_LOG(LogTemp, Log, TEXT("Main Menu and cursor gone."))
}
