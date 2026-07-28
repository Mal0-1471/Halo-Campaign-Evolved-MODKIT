#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int64Vector -FallbackName=Int64Vector
#include "HaloAudioZoneVoxelLod.generated.h"

USTRUCT(BlueprintType)
struct HALOAUDIOUNREAL_API FHaloAudioZoneVoxelLod {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt64Vector FullZoneSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt64Vector GridDimensions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt64Vector ParentStartOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint64> VoxelData;
    
    FHaloAudioZoneVoxelLod();
};

