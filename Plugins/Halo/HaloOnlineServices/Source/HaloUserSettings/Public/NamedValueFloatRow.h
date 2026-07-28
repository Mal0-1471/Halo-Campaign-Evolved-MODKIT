#pragma once
#include "CoreMinimal.h"
#include "NamedValueLabelRow.h"
#include "NamedValueFloatRow.generated.h"

USTRUCT(BlueprintType)
struct FNamedValueFloatRow : public FNamedValueLabelRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    HALOUSERSETTINGS_API FNamedValueFloatRow();
};

