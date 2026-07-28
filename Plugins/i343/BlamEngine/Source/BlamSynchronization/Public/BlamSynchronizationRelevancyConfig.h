#pragma once
#include "CoreMinimal.h"
#include "BlamSynchronizationRelevancyConfig.generated.h"

USTRUCT(BlueprintType)
struct FBlamSynchronizationRelevancyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceAtMinRelevancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacingLookThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacingLookBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacingNearLookThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearLookBonus;
    
    BLAMSYNCHRONIZATION_API FBlamSynchronizationRelevancyConfig();
};

