#pragma once
#include "CoreMinimal.h"
#include "HaloUIMaterialAnimator.generated.h"

USTRUCT(BlueprintType)
struct FHaloUIMaterialAnimator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReverseDuration;
    
public:
    HALOUI_API FHaloUIMaterialAnimator();
};

