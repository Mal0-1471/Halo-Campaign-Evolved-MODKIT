#pragma once
#include "CoreMinimal.h"
#include "EBlamHudCountdownState.h"
#include "BlamHudCountdown.generated.h"

USTRUCT(BlueprintType)
struct FBlamHudCountdown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamHudCountdownState CountdownState;
    
    BLAMGLUE_API FBlamHudCountdown();
};

