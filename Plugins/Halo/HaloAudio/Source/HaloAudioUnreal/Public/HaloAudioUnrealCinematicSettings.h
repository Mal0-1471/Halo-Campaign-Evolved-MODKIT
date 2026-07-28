#pragma once
#include "CoreMinimal.h"
#include "HaloAudioUnrealCinematicSettings.generated.h"

USTRUCT(BlueprintType)
struct FHaloAudioUnrealCinematicSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeekThreshold;
    
    HALOAUDIOUNREAL_API FHaloAudioUnrealCinematicSettings();
};

