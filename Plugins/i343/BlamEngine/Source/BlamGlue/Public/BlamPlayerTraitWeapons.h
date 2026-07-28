#pragma once
#include "CoreMinimal.h"
#include "EBlamBooleanTrait.h"
#include "EBlamDamageModifierPercentageSetting.h"
#include "EBlamInfiniteAmmoSetting.h"
#include "BlamPlayerTraitWeapons.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamPlayerTraitWeapons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamDamageModifierPercentageSetting DamageModifierPercentageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamDamageModifierPercentageSetting MeleeDamageModifierPercentageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamBooleanTrait RechargingGrenadesSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamBooleanTrait WeaponPickupSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamInfiniteAmmoSetting InfiniteAmmoSetting;
    
    FBlamPlayerTraitWeapons();
};

