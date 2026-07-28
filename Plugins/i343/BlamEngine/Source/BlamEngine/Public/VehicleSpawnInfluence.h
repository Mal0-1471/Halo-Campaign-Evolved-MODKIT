#pragma once
#include "CoreMinimal.h"
#include "VehicleSpawnInfluence.generated.h"

class BLAMENGINE_API UBlamVehicleTagDataAsset;

USTRUCT(BlueprintType)
struct BLAMENGINE_API FVehicleSpawnInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamVehicleTagDataAsset> Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PillRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FVehicleSpawnInfluence();
};

