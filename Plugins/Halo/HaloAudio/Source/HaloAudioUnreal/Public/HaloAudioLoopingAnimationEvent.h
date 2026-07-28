#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "HaloAudioLoopingAnimationEvent.generated.h"

class UHaloAudioSoundBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HALOAUDIOUNREAL_API UHaloAudioLoopingAnimationEvent : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioSoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
    UHaloAudioLoopingAnimationEvent();

};

