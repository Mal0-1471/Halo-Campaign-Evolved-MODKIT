#pragma once
#include "CoreMinimal.h"
#include "QualityConstraint.generated.h"

USTRUCT(BlueprintType)
struct FQualityConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    TCQUALITYSUBSYSTEM_API FQualityConstraint();
};

