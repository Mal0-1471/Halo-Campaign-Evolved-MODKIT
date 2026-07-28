#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "Engine/DataTable.h"
#include "HaloAsyncLoadClassContentRow.generated.h"

USTRUCT(BlueprintType)
struct FHaloAsyncLoadClassContentRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath ClassReference;
    
    HALOASYNCCONTENT_API FHaloAsyncLoadClassContentRow();
};

