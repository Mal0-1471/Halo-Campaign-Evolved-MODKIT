#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScenarioInsertionPoint.h"
#include "ScenarioInsertionPointAsset.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UScenarioInsertionPointAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScenarioInsertionPoint> InsertionPoints;
    
    UScenarioInsertionPointAsset();

};

