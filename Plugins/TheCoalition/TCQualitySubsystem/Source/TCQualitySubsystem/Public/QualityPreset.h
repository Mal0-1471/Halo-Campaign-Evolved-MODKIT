#pragma once
#include "CoreMinimal.h"
#include "QualityConstraint.h"
#include "QualityPreset.generated.h"

USTRUCT(BlueprintType)
struct FQualityPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQualityConstraint> Constraints;
    
    TCQUALITYSUBSYSTEM_API FQualityPreset();
};

