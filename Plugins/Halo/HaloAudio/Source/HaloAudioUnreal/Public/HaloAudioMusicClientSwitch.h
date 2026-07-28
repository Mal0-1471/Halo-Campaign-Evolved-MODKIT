#pragma once
#include "CoreMinimal.h"
#include "HaloAudioMusicClientSwitch.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct FHaloAudioMusicClientSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* AkSwitchValue;
    
    HALOAUDIOUNREAL_API FHaloAudioMusicClientSwitch();
};

