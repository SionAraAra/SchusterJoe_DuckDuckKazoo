// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystem.h"
#include "interfaces/OnlineSessionInterface.h"
#include "Engine/GameInstance.h"
#include "CustomGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class DUCKDUCKKAZOO_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()
	UCustomGameInstance();
	virtual void Init() override;
	void AddOnScreenDebugMessage(
		int32 Key,
		float TimeToDisplay,
		FColor DisplayColor,
		const FString& Message,
		bool bNewerOnTop,
		const FVector2D& TextScale);
public:
	UFUNCTION(Exec, BlueprintCallable)
	void Host();

	UFUNCTION(Exec, BlueprintCallable)
	void Join(int32 index);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> WidgetClass;
	
	UFUNCTION(Exec, BlueprintCallable, Category = "Menu")
		void LoadMainMenu();

	UFUNCTION(Exec, BlueprintCallable, Category = "Menu")
		void LoadSplashScreen();

	int GameMode;
	void setGameMode(int mode);
UFUNCTION(Exec)
	void SearchAvailableSessions();
private:
	UPROPERTY()
	class UMainMenu* MainMenuWidget;

	UPROPERTY()
	class USplashScreenWidget* SplashScreenWidget;

	static const FName SESSION_NAME;
	
	TSharedPtr<FOnlineSessionSettings> OnlineSessionSettings;
	TSharedPtr<FOnlineSessionSearch> SearchSession;
	
	void CreateSession();
	
	IOnlineSessionPtr SessionInterface;

	

	
	FOnCreateSessionCompleteDelegate OnCreateSessionCompleteDelegate;
	FDelegateHandle OnCreateSessionCompleteDelegateHandle;
	
	void OnCreateSessionComplete(FName SessionName, bool Success);
	
	
	FOnDestroySessionCompleteDelegate OnDestroySessionCompleteDelegate;
	FDelegateHandle OnDestroySessionCompleteDelegateHandle;
	void OnDestroySessionComplete(FName SessionName, bool Success);


	
	FOnFindSessionsCompleteDelegate OnFindSessionsCompleteDelegate;
	FDelegateHandle OnFindSessionsCompleteDelegateHandle;
	void OnFindSessionsComplete(bool Success);
	


	
	FOnJoinSessionCompleteDelegate OnJoinSessionCompleteDelegate;
	FDelegateHandle OnJoinSessionCompleteDelegateHandle;
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	void joinSession(FName SESSION_NAME);
};
