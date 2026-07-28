#pragma once
#include "CoreMinimal.h"
#include "EBlamBooleanTrait.h"
#include "EBlamDamageResistancePercentageSetting.h"
#include "EBlamRechargeRatePercentageSetting.h"
#include "BlamPlayerTraitVitality.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamPlayerTraitVitality {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamDamageResistancePercentageSetting DamageResistancePercentageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamRechargeRatePercentageSetting BodyRechargeRatePercentageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamRechargeRatePercentageSetting ShieldRechargeRatePercentageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamBooleanTrait DeathlessSetting;
    
    FBlamPlayerTraitVitality();
};

