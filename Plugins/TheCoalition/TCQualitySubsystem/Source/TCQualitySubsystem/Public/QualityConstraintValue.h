#pragma once
#include "CoreMinimal.h"
#include "QualityConstraintValue.generated.h"

USTRUCT(BlueprintType)
struct FQualityConstraintValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    TCQUALITYSUBSYSTEM_API FQualityConstraintValue();
};

