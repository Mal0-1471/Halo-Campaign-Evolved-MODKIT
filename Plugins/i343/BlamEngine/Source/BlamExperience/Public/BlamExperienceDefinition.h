#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BlamExperienceDefinition.generated.h"

class UBlamExperienceActionSet;
class UGameFeatureAction;

UCLASS(Blueprintable, Const, MinimalAPI)
class UBlamExperienceDefinition : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GameFeaturesToEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameFeatureAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBlamExperienceActionSet*> ActionSets;
    
    UBlamExperienceDefinition();

};

