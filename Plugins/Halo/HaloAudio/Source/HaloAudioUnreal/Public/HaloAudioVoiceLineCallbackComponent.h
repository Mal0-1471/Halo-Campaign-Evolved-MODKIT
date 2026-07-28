#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HaloAudioVoiceLineCallbackComponent.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHaloAudioVoiceLineCallbackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceLineStopped, int32, SoundId, bool, bHasVoiceLinePlaying);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVoiceLineStarted, int32, SoundId, float, duration, const UAnimSequence*, LipSyncAnim);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceLineStarted OnVoiceLineStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceLineStopped OnVoiceLineStopped;
    
    UHaloAudioVoiceLineCallbackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVoiceLinePlaying() const;
    
};

