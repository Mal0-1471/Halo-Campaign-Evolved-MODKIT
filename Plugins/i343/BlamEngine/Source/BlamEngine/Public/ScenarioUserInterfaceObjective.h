#pragma once
#include "CoreMinimal.h"
#include "ScenarioUserInterfaceObjective.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioUserInterfaceObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FScenarioUserInterfaceObjective();
};

