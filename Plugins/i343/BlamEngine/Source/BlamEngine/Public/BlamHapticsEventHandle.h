#pragma once
#include "CoreMinimal.h"
#include "BlamHapticsEventHandle.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamHapticsEventHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InternalId;
    
public:
    FBlamHapticsEventHandle();
};

