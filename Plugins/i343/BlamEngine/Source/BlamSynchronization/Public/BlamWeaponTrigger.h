#pragma once
#include "CoreMinimal.h"
#include "EBlamWeaponBarrel.h"
#include "EBlamWeaponTriggerState.h"
#include "BlamWeaponTrigger.generated.h"

USTRUCT(BlueprintType)
struct BLAMSYNCHRONIZATION_API FBlamWeaponTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamWeaponBarrel ActiveBarrelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamWeaponTriggerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargedFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpewFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerDown: 1;
    
    FBlamWeaponTrigger();
};

