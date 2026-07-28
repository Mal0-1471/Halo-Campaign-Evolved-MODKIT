#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "GameplayTagContainer.h"
#include "BlamGameInstanceSubsystem.h"
#include "EBlamEngineAudioState.h"
#include "BlamEngineAudioGameSubsystem.generated.h"

class BLAMENGINE_API ABlamGameState;
class BLAMENGINE_API UAkAudioEvent;
class BLAMENGINE_API UAkRtpc;
class BLAMENGINE_API UAkStateValue;
class BLAMENGINE_API UHaloAudioMusicControl;
class BLAMENGINE_API ULevelSequence;
class BLAMENGINE_API UWorld;

UCLASS(Abstract, Blueprintable)
class BLAMENGINE_API UBlamEngineAudioGameSubsystem : public UBlamGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostLoadingScreenDelayFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostPauseMenuDelayFrames;
    
public:
    UBlamEngineAudioGameSubsystem();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* TryGetWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath TryGetPlayingCinematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABlamGameState* TryGetBlamGameState() const;
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalState(const UAkStateValue* AkStateValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalRtpc(const UAkRtpc* AkRtpc, float RtpcValue);
    
    UFUNCTION(BlueprintCallable)
    void SendMusicEvent(const UHaloAudioMusicControl* MusicControl);
    
    UFUNCTION(BlueprintCallable)
    void SendGlobalEvent(const UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(EBlamEngineAudioState OldState, EBlamEngineAudioState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkullsRemoved(const FGameplayTagContainer& SkullsAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkullsAdded(const FGameplayTagContainer& SkullsAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnToMainMenuTriggered();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadLoadingManagerLoadFinishedOrFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingManagerLoadStarted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeinitialize();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCinematicSubsystemEndCinematic(bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicSubsystemBeginCinematic(ULevelSequence* LevelSequence);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCinematicEnd(const FSoftObjectPath& Cinematic, bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCinematicBegin(const FSoftObjectPath& Cinematic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetworkCoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamEngineAudioState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetActiveSkulls() const;
    
};

