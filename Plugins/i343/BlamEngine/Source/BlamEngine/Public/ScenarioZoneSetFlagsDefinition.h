#pragma once
#include "CoreMinimal.h"
#include "ScenarioZoneSetFlagsDefinition.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioZoneSetFlagsDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBeginLoadingNextLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugPurposesOnly: 1;
    
    FScenarioZoneSetFlagsDefinition();
};

