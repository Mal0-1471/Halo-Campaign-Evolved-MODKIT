#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HaloAudioOneShotAnimationEvent.generated.h"

class UHaloAudioSoundBase;

UCLASS(Blueprintable, CollapseCategories)
class HALOAUDIOUNREAL_API UHaloAudioOneShotAnimationEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioSoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
    UHaloAudioOneShotAnimationEvent();

};

