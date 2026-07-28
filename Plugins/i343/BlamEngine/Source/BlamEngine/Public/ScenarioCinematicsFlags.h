#pragma once
#include "CoreMinimal.h"
#include "ScenarioCinematicsFlags.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioCinematicsFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugOnly: 1;
    
    FScenarioCinematicsFlags();
};

