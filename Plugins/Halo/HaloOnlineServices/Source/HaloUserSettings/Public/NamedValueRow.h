#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NamedValueRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FNamedValueRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NamedValuesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultValueName;
    
    HALOUSERSETTINGS_API FNamedValueRow();
};

