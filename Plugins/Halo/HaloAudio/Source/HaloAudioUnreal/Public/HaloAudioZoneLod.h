#pragma once
#include "CoreMinimal.h"
#include "HaloAudioZoneLod.generated.h"

USTRUCT(BlueprintType)
struct FHaloAudioZoneLod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Breakpoint;
    
    HALOAUDIOUNREAL_API FHaloAudioZoneLod();
};

