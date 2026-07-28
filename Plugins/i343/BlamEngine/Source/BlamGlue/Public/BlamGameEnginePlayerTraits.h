#pragma once
#include "CoreMinimal.h"
#include "BlamPlayerTraitAppearance.h"
#include "BlamPlayerTraitMovement.h"
#include "BlamPlayerTraitVitality.h"
#include "BlamPlayerTraitWeapons.h"
#include "BlamGameEnginePlayerTraits.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamGameEnginePlayerTraits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamPlayerTraitVitality VitalityTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamPlayerTraitWeapons WeaponTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamPlayerTraitMovement MovementTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamPlayerTraitAppearance AppearanceTraits;
    
    FBlamGameEnginePlayerTraits();
};

