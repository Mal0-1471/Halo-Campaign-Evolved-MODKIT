#pragma once
#include "CoreMinimal.h"
#include "BlamHapticsEventTriggerBase.h"
#include "BlamHapticsEventTriggerResistanceWeapon.generated.h"

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamHapticsEventTriggerResistanceWeapon : public UBlamHapticsEventTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Strength;
    
    UBlamHapticsEventTriggerResistanceWeapon();

};

