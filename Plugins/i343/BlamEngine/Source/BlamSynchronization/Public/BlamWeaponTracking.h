#pragma once
#include "CoreMinimal.h"
#include "BlamWeaponTracking.generated.h"

USTRUCT(BlueprintType)
struct BLAMSYNCHRONIZATION_API FBlamWeaponTracking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockingTheta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLocking: 1;
    
    FBlamWeaponTracking();
};

