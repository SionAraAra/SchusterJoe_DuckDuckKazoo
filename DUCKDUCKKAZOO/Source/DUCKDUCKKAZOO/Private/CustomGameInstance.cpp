// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/CustomGameInstance.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "../MenuSystem/MainMenu.h"
#include "../MenuSystem/SplashScreenWidget.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"
#include "UObject\ConstructorHelpers.h"

const FName UCustomGameInstance::SESSION_NAME = FName("GAMENAME");

UCustomGameInstance::UCustomGameInstance(){
	UE_LOG(LogTemp, Warning, TEXT("UCustomGameInstance has been called."));
	ConstructorHelpers::FClassFinder<UUserWidget> MenuBPClass(TEXT("/Game/OwnContent/Player/UI/WBP_MainMenu.WBP_MainMenu_C"));
	if (MenuBPClass.Succeeded())
	{
		WidgetClass = MenuBPClass.Class;
		UE_LOG(LogTemp, Log, TEXT("Successfully loaded Widget class."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load Widget class."));
	}

}

void UCustomGameInstance::Init()
{
	Super::Init();

	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();

	if (Subsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("Online Subsystem: %s"), *Subsystem->GetSubsystemName().ToString());

		SessionInterface = Subsystem->GetSessionInterface();

		if (SessionInterface.IsValid())
		{
			UE_LOG(LogTemp, Warning, TEXT("Session interface is valid."));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Session interface is not valid."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No OnlineSubsystem was found."));
	}

	UE_LOG(LogTemp, Warning, TEXT("Initializating of UMyGameInstance."));

	if (WidgetClass && GetWorld())
	{
		MainMenuWidget = CreateWidget<UMainMenu>(GetWorld(), WidgetClass);
		if (MainMenuWidget)
		{
			MainMenuWidget->SetGameInstance(this);
			MainMenuWidget->AddToViewport();

			UE_LOG(LogTemp, Log, TEXT("Main menu widget created and added to viewport."));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to create main menu widget."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("WidgetClass is null or GetWorld() failed."));
	}
}
void UCustomGameInstance::CreateSession()
{
	if (!SessionInterface.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("SessionInterface is invalid in CreateSession."));
		return;
	}

	OnCreateSessionCompleteDelegate = FOnCreateSessionCompleteDelegate::CreateUObject(this, &UCustomGameInstance::OnCreateSessionComplete);
	OnCreateSessionCompleteDelegateHandle = SessionInterface->AddOnCreateSessionCompleteDelegate_Handle(OnCreateSessionCompleteDelegate);

	OnlineSessionSettings = MakeShareable(new FOnlineSessionSettings());
	
	OnlineSessionSettings->bIsLANMatch = true;
	OnlineSessionSettings->bUsesPresence = true;
	OnlineSessionSettings->bAllowJoinInProgress = true;
	OnlineSessionSettings->bAllowJoinInProgress = true;
	OnlineSessionSettings->bAllowJoinViaPresence = true;
	OnlineSessionSettings->NumPublicConnections = 4;
	OnlineSessionSettings->bShouldAdvertise = true;	

	UE_LOG(LogTemp, Warning, TEXT("Attempting to create session..."));
	SessionInterface->CreateSession(0, SESSION_NAME, *OnlineSessionSettings);
}

void UCustomGameInstance::setGameMode(int mode)
{
	GameMode = mode;
}

void UCustomGameInstance::Host()
{
	if (!SessionInterface.IsValid()) return;

	auto ExistingSession = SessionInterface->GetNamedSession(SESSION_NAME);
	if (ExistingSession != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Session already exists. Deleting session..."));
		OnDestroySessionCompleteDelegate = FOnDestroySessionCompleteDelegate::CreateUObject(this, &UCustomGameInstance::OnDestroySessionComplete);
		OnDestroySessionCompleteDelegateHandle = SessionInterface->AddOnDestroySessionCompleteDelegate_Handle(OnDestroySessionCompleteDelegate);

		SessionInterface->DestroySession(SESSION_NAME);
		return;
	}
	else
	{
		CreateSession();
	}
}




void UCustomGameInstance::OnCreateSessionComplete(FName SessionName, bool Success)
{
	SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(OnCreateSessionCompleteDelegateHandle);

	if (Success)
	{
		UE_LOG(LogTemp, Warning, TEXT("Session created successfully."));
		UWorld* World = GetWorld();
		if (World)
		{
			World->ServerTravel("/Game/OwnContent/Maps/Lobby?listen");
		}
		SearchAvailableSessions();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create session."));
	}
};


void UCustomGameInstance::OnDestroySessionComplete(FName SessionName, bool Success)
{
	SessionInterface->ClearOnDestroySessionCompleteDelegate_Handle(OnDestroySessionCompleteDelegateHandle);

	if (Success)
	{
		UE_LOG(LogTemp, Warning, TEXT("Previous session destroyed. Creating new one."));
		CreateSession();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to destroy existing session."));
	}
}

void UCustomGameInstance::SearchAvailableSessions()
{
	if (!SessionInterface.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("SessionInterface is invalid."));
		return;
	}
	SearchSession = MakeShareable(new FOnlineSessionSearch());
	SearchSession->bIsLanQuery = true;
	SearchSession->MaxSearchResults = 100;
	SearchSession->QuerySettings.Set(SESSION_NAME, true, EOnlineComparisonOp::Equals);

	OnFindSessionsCompleteDelegate = FOnFindSessionsCompleteDelegate::CreateUObject(this, &UCustomGameInstance::OnFindSessionsComplete);
	OnFindSessionsCompleteDelegateHandle = SessionInterface->AddOnFindSessionsCompleteDelegate_Handle(OnFindSessionsCompleteDelegate);

	
	UE_LOG(LogTemp, Log, TEXT("Searching for sessions..."));
	
	SessionInterface->FindSessions(0, SearchSession.ToSharedRef());
	
}

void UCustomGameInstance::OnFindSessionsComplete(bool Success)
{
	SessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(OnFindSessionsCompleteDelegateHandle);

	if (!Success)
	{
		UE_LOG(LogTemp, Warning, TEXT("FindSessions failed."));
		return;
	}
	
	if (!SearchSession.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("SessionSearch pointer is invalid."));
		return;
	}

	
	if (MainMenuWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("MainMenuWidget is valid."));
		for (int i = 0; i < SearchSession->SearchResults.Num(); ++i)
		{
			const FOnlineSessionSearchResult& Result = SearchSession->SearchResults[i];
			const FString& HostName = Result.Session.OwningUserName;
			MainMenuWidget->AddServerRow(HostName, i); 
		}
	}else
	{
		UE_LOG(LogTemp, Error, TEXT("MainMenuWidget is invalid."));
	}
}

void UCustomGameInstance::Join(int32 Index)
{
	
	if (!SearchSession.IsValid() )
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid searchSession"));
		return;
	}
	if (Index >= SearchSession->SearchResults.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid session index."));
		return;
	}

	OnJoinSessionCompleteDelegate = FOnJoinSessionCompleteDelegate::CreateUObject(this, &UCustomGameInstance::OnJoinSessionComplete);
	OnJoinSessionCompleteDelegateHandle = SessionInterface->AddOnJoinSessionCompleteDelegate_Handle(OnJoinSessionCompleteDelegate);

	UE_LOG(LogTemp, Log, TEXT("Attempting to join session at index %d..."), Index);
	SessionInterface->JoinSession(0, SESSION_NAME, SearchSession->SearchResults[Index]);
	
}

void UCustomGameInstance::LoadMainMenu()
{
	UWorld* World = GetWorld();
	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!PlayerController)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to get PlayerController."));
	}

	if (WidgetClass && World)
	{
		if (!MainMenuWidget)
		{
			MainMenuWidget = CreateWidget<UMainMenu>(World, WidgetClass);
		}

		if (MainMenuWidget)
		{
			MainMenuWidget->AddToViewport();
			MainMenuWidget->Setup();
			
			UE_LOG(LogTemp, Log, TEXT("Main menu loaded and added to viewport."));
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("Failed to load main menu widget."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("WidgetClass or GetWorld() is null."));
	}

	
}

void UCustomGameInstance::LoadSplashScreen()
{
	UWorld* World = GetWorld();
	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!PlayerController)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to get PlayerController."));
	}

	if (WidgetClass && World)
	{
		if (!SplashScreenWidget)
		{
			SplashScreenWidget = CreateWidget<USplashScreenWidget>(World, WidgetClass);
		}

		if (SplashScreenWidget)
		{
			SplashScreenWidget->AddToViewport();
			SplashScreenWidget->Setup();
			
			UE_LOG(LogTemp, Log, TEXT("Main menu loaded and added to viewport."));
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("Failed to load main menu widget."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("WidgetClass or GetWorld() is null."));
	}

}

void UCustomGameInstance::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(OnJoinSessionCompleteDelegateHandle);
	if (!SessionInterface.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("SessionInterface is invalid."));
		return;
	}

	FString ConnectString;
	if (!SessionInterface->GetResolvedConnectString(SessionName, ConnectString))
	{
		UE_LOG(LogTemp, Error, TEXT("Could not resolve connection string."));
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("Resolved connect string: %s"), *ConnectString);

	APlayerController* Controller = GetFirstLocalPlayerController();
	if (Controller)
	{
		Controller->ClientTravel(ConnectString, ETravelType::TRAVEL_Absolute);
	}
}
