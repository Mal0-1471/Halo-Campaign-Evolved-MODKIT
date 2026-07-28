#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHaloAudioPlayerRole.h"
#include "HaloAudioAttachedPlayingId.h"
#include "HaloAudioGlobalPlayingId.h"
#include "HaloAudioRtpc.h"
#include "HaloAudioTranscriptionLine.h"
#include "HaloAudioBlueprintFunctionLibrary.generated.h"

class AActor;
class UAkAudioEvent;
class UAkRtpc;
class UAkStateValue;
class UHaloAudioMusicControl;
class UHaloAudioSoundBase;
class UHaloAudioTrackingComponent;
class UHaloAudioTranscriptionSubsystem;
class UObject;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHaloAudioBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UHaloAudioTranscriptionSubsystem* TryGetHaloAudioTranscriptionSubsystem(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopTrackedSound(UPARAM(Ref) FHaloAudioAttachedPlayingId& PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContext"))
    static void StopGlobalSound(FHaloAudioGlobalPlayingId PlayingID, const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContext"))
    static void SetGlobalState(const UAkStateValue* State, const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContext"))
    static void SetGlobalRtpc(const UAkRtpc* RtpcId, float RtpcValue, const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContext"))
    static void SendMusicEvent_Local(const UHaloAudioMusicControl* MusicControlEvent, const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SendMusicEvent_Authority(const UHaloAudioMusicControl* MusicControlEvent, uint8 ChannelId, const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContext"))
    static void SendGlobalEvent(const UAkAudioEvent* Event, const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContext"))
    static FHaloAudioGlobalPlayingId PlaySoundVariantAtPosition(const UHaloAudioSoundBase* SoundVariant, const AActor* Instigator, FVector position, FRotator orientation, float StartOffset, const UObject* WorldContext, const TArray<FHaloAudioRtpc>& RtpcArray);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContext"))
    static FHaloAudioGlobalPlayingId PlaySoundNonPositionally(const UHaloAudioSoundBase* Sound, const AActor* Instigator, const float StartOffset, const UObject* WorldContext, const TArray<FHaloAudioRtpc>& RtpcArray);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContext"))
    static FHaloAudioGlobalPlayingId PlaySoundAtPosition(const UHaloAudioSoundBase* Sound, const AActor* Instigator, FVector position, FRotator orientation, float StartOffset, const UObject* WorldContext, const TArray<FHaloAudioRtpc>& RtpcArray);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool IsTrackedSoundIdValid(const FHaloAudioAttachedPlayingId& PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void InvalidateTrackedSoundId(UPARAM(Ref) FHaloAudioAttachedPlayingId& PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTranscriptionLine(const FHaloAudioTranscriptionLine& TranscriptionLine);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static EHaloAudioPlayerRole GetPlayerAudioRole(const AActor* Instigtor, UHaloAudioTrackingComponent* AudioTrackingComponent);
    
};

