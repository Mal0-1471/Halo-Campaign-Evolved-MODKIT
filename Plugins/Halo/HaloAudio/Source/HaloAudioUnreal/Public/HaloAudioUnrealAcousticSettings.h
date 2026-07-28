#pragma once
#include "CoreMinimal.h"
#include "HaloAudioUnrealAcousticSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHaloAudioUnrealAcousticSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> ClassesNotToVoxelize;
    
    HALOAUDIOUNREAL_API FHaloAudioUnrealAcousticSettings();
};

