#pragma once
#include "CoreMinimal.h"
#include "NamedValueLabelRow.h"
#include "NamedValueIntRow.generated.h"

USTRUCT(BlueprintType)
struct FNamedValueIntRow : public FNamedValueLabelRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    HALOUSERSETTINGS_API FNamedValueIntRow();
};

