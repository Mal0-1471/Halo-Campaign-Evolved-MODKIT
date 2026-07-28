#pragma once
#include "CoreMinimal.h"
#include "BlamPermutationWrapper.generated.h"

USTRUCT(BlueprintType)
struct FBlamPermutationWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    BLAMSYNCHRONIZATION_API FBlamPermutationWrapper();
};

