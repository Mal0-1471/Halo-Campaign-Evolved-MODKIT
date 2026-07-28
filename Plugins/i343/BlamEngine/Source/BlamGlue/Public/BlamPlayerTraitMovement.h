#pragma once
#include "CoreMinimal.h"
#include "EBlamPlayerGravitySetting.h"
#include "EBlamPlayerSpeedSetting.h"
#include "BlamPlayerTraitMovement.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamPlayerTraitMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamPlayerSpeedSetting SpeedSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamPlayerGravitySetting GravitySetting;
    
    FBlamPlayerTraitMovement();
};

