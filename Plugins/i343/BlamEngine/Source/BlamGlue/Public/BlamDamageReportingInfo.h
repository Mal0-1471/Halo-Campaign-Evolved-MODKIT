#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EBlamDamageReportingModifier.h"
#include "BlamDamageReportingInfo.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamDamageReportingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamDamageReportingModifier Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Type;
    
    FBlamDamageReportingInfo();
};

