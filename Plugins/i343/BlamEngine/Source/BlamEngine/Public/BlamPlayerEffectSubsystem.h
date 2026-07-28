#pragma once
#include "CoreMinimal.h"
#include "BlamGameInstanceSubsystem.h"
#include "BlamPlayerEffect.h"
#include "BlamPlayerEffectSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamPlayerEffectSubsystem : public UBlamGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerEffect, const FBlamPlayerEffect&, PlayerEffect);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEffect OnPlayerEffect;
    
    UBlamPlayerEffectSubsystem();

};

