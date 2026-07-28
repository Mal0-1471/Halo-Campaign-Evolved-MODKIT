#pragma once
#include "CoreMinimal.h"
#include "ScenarioSoftCeilingFlagsDefinition.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioSoftCeilingFlagsDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreBipeds: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreVehicles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreCamera: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreHugeVehicles: 1;
    
    FScenarioSoftCeilingFlagsDefinition();
};

