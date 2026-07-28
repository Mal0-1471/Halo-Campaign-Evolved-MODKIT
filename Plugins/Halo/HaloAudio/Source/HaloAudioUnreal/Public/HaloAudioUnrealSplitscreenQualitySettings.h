#pragma once
#include "CoreMinimal.h"
#include "HaloAudioUnrealQualitySettings.h"
#include "HaloAudioUnrealSplitscreenQualitySettings.generated.h"

USTRUCT(BlueprintType)
struct FHaloAudioUnrealSplitscreenQualitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHaloAudioUnrealQualitySettings> SplistscreenQualitySettings;
    
    HALOAUDIOUNREAL_API FHaloAudioUnrealSplitscreenQualitySettings();
};

