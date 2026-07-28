#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HaloAudioSetSwitchAnimationEvent.generated.h"

class UAkSwitchValue;

UCLASS(Blueprintable, CollapseCategories)
class HALOAUDIOUNREAL_API UHaloAudioSetSwitchAnimationEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SWITCH;
    
    UHaloAudioSetSwitchAnimationEvent();

};

