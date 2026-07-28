#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NamedValueLabelRow.generated.h"

USTRUCT(BlueprintType)
struct FNamedValueLabelRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    HALOUSERSETTINGS_API FNamedValueLabelRow();
};

