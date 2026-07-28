#pragma once
#include "CoreMinimal.h"
#include "NamedValueLabelRow.h"
#include "NamedValueStringRow.generated.h"

USTRUCT(BlueprintType)
struct FNamedValueStringRow : public FNamedValueLabelRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    HALOUSERSETTINGS_API FNamedValueStringRow();
};

