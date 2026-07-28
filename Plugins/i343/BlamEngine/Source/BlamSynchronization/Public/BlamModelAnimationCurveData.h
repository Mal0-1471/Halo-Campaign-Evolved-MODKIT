#pragma once
#include "CoreMinimal.h"
#include "BlamModelAnimationFunctionEvent.h"
#include "BlamModelAnimationIkChainEvent.h"
#include "BlamModelAnimationCurveData.generated.h"

USTRUCT(BlueprintType)
struct FBlamModelAnimationCurveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FBlamModelAnimationFunctionEvent> FunctionEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FBlamModelAnimationIkChainEvent> IKChainEvent;
    
    BLAMSYNCHRONIZATION_API FBlamModelAnimationCurveData();
};

