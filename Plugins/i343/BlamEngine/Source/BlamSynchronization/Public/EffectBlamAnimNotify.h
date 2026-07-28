#pragma once
#include "CoreMinimal.h"
#include "BlamAnimNotify.h"
#include "BlamAnimationEventEffectReference.h"
#include "BlamDamageEffectReportingType.h"
#include "EffectBlamAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class BLAMSYNCHRONIZATION_API UEffectBlamAnimNotify : public UBlamAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamAnimationEventEffectReference Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MarkerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamDamageEffectReportingType DamageEffectReportingType;
    
    UEffectBlamAnimNotify();

};

