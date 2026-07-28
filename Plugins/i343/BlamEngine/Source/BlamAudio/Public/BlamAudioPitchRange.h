#pragma once
#include "CoreMinimal.h"
#include "BlamAudioPitchRange.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

USTRUCT(BlueprintType)
struct BLAMAUDIO_API FBlamAudioPitchRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* PitchSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> PermutationPlayEvents;
    
    FBlamAudioPitchRange();
};

