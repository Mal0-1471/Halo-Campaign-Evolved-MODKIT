#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HaloAudioSetRtpcAnimationEvent.generated.h"

class UAkRtpc;

UCLASS(Blueprintable, CollapseCategories)
class HALOAUDIOUNREAL_API UHaloAudioSetRtpcAnimationEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* Rtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RtpcValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetGlobally;
    
    UHaloAudioSetRtpcAnimationEvent();

};

