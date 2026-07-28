#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnlinePresenceHaloRow.generated.h"

USTRUCT(BlueprintType)
struct FOnlinePresenceHaloRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RichPresenceKey;
    
    HALOONLINEUTILS_API FOnlinePresenceHaloRow();
};

