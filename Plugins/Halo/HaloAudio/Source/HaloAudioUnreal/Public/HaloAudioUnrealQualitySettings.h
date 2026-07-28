#pragma once
#include "CoreMinimal.h"
#include "HaloAudioUnrealQualitySettings.generated.h"

USTRUCT(BlueprintType)
struct FHaloAudioUnrealQualitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FloodFillUseSortedFrontier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FloodFillProcessDiagonals;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableVoxelObstuction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableGlobalDynamicObjectObstruction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumStringPullIterations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDynamicObjectsForLineOfSightRaycasts;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double StringPullIterationScale;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double VoxelBreakpointMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumParallelSourceUpdates;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRayCastRequestsPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrioritizerMaxActiveWeight;
    
    HALOAUDIOUNREAL_API FHaloAudioUnrealQualitySettings();
};

