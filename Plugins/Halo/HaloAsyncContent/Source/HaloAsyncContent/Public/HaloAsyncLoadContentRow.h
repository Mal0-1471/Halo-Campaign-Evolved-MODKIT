#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "Engine/DataTable.h"
#include "HaloAsyncLoadContentRow.generated.h"

USTRUCT(BlueprintType)
struct FHaloAsyncLoadContentRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ObjectReference;
    
    HALOASYNCCONTENT_API FHaloAsyncLoadContentRow();
};

