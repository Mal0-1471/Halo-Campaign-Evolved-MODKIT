#pragma once
#include "CoreMinimal.h"
#include "ProjectileSpawnInfluence.generated.h"

class BLAMENGINE_API UBlamProjectileTagDataAsset;

USTRUCT(BlueprintType)
struct BLAMENGINE_API FProjectileSpawnInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamProjectileTagDataAsset> Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionCylinderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FProjectileSpawnInfluence();
};

