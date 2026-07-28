#pragma once
#include "CoreMinimal.h"
#include "ESoftCeilingTypeEnum.h"
#include "ScenarioSoftCeilingFlagsDefinition.h"
#include "ScenarioSoftCeiling.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioSoftCeiling {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScenarioSoftCeilingFlagsDefinition Flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoftCeilingTypeEnum Type;
    
    FScenarioSoftCeiling();
};

