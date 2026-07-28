#pragma once
#include "CoreMinimal.h"
#include "BlamSynchronizationRelevancyConfig.h"
#include "BlamSynchronizationObjectThrottlingConfig.generated.h"

USTRUCT(BlueprintType)
struct FBlamSynchronizationObjectThrottlingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecutionBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FramesWithoutSyncBoostScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamSynchronizationRelevancyConfig Relevancy;
    
    BLAMSYNCHRONIZATION_API FBlamSynchronizationObjectThrottlingConfig();
};

