#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EBlamPresenceModeName.h"
#include "EBlamPresenceState.h"
#include "BlamPresenceManagerGameSubsystem.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class BLAMNETWORKSESSION_API UBlamPresenceManagerGameSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* MissionRichPresenceTableLoaded;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MissionRichPresenceTable;
    
public:
    UBlamPresenceManagerGameSubsystem();

    UFUNCTION(BlueprintCallable)
    void TickMenusPresence();
    
    UFUNCTION(BlueprintCallable)
    void SetTitleScreenPresence();
    
    UFUNCTION(BlueprintCallable)
    void SetMenusPresence();
    
    UFUNCTION(BlueprintCallable)
    void SetInGamePresence(EBlamPresenceModeName ModeName, const FString& MissionName);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleTimeout(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void SetIdlePresence();
    
    UFUNCTION(BlueprintCallable)
    void ResetIdleTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeUntilIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIdleTimeout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIdleProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamPresenceState GetCurrentPresenceState() const;
    
};

