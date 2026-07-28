#pragma once
#include "CoreMinimal.h"
#include "QualityConstraintValue.h"
#include "QualityConstraintKey.generated.h"

USTRUCT(BlueprintType)
struct FQualityConstraintKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQualityConstraintValue> AllowedValues;
    
    TCQUALITYSUBSYSTEM_API FQualityConstraintKey();
};

