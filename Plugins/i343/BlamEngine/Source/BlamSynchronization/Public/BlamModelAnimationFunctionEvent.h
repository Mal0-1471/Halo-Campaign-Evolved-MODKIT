#pragma once
#include "CoreMinimal.h"
#include "BlamModelAnimationFunctionEvent.generated.h"

USTRUCT(BlueprintType)
struct FBlamModelAnimationFunctionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    BLAMSYNCHRONIZATION_API FBlamModelAnimationFunctionEvent();
};

