#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScenarioUserInterfaceObjective.h"
#include "ScenarioUserInterfaceObjectiveAsset.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UScenarioUserInterfaceObjectiveAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScenarioUserInterfaceObjective> Objectives;
    
    UScenarioUserInterfaceObjectiveAsset();

};

