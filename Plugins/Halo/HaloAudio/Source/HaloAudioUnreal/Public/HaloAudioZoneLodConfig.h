#pragma once
#include "CoreMinimal.h"
#include "HaloAudioZoneLod.h"
#include "HaloAudioZoneLodConfig.generated.h"

USTRUCT(BlueprintType)
struct FHaloAudioZoneLodConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHaloAudioZoneLod> Lods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelLodZRatio;
    
    HALOAUDIOUNREAL_API FHaloAudioZoneLodConfig();
};

