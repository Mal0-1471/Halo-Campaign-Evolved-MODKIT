#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "NamedValueLabelRow.h"
#include "NamedValueColorRow.generated.h"

USTRUCT(BlueprintType)
struct FNamedValueColorRow : public FNamedValueLabelRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Value;
    
    HALOUSERSETTINGS_API FNamedValueColorRow();
};

