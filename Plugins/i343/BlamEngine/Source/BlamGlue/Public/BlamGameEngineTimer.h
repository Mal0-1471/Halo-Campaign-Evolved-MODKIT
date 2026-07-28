#pragma once
#include "CoreMinimal.h"
#include "BlamGameEngineTimer.generated.h"

USTRUCT(BlueprintType)
struct FBlamGameEngineTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondsLeft;
    
    BLAMGLUE_API FBlamGameEngineTimer();
};

