#pragma once
#include "CoreMinimal.h"
#include "BlamDamageEffectReportingType.generated.h"

USTRUCT(BlueprintType)
struct BLAMSYNCHRONIZATION_API FBlamDamageEffectReportingType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    FBlamDamageEffectReportingType();
};

