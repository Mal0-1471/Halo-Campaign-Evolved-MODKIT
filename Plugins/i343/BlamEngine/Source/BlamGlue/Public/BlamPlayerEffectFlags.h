#pragma once
#include "CoreMinimal.h"
#include "BlamPlayerEffectFlags.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamPlayerEffectFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAnyDamageDealt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShielded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDirectionalDamageEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDamageHasDamageOwner: 1;
    
    FBlamPlayerEffectFlags();
};

