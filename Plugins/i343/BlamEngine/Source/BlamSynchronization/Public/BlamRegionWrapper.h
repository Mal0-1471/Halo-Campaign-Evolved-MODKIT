#pragma once
#include "CoreMinimal.h"
#include "BlamRegionWrapper.generated.h"

USTRUCT(BlueprintType)
struct FBlamRegionWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    BLAMSYNCHRONIZATION_API FBlamRegionWrapper();
};

