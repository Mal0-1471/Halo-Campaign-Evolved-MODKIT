#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BlamLevelRichPresenceRow.generated.h"

USTRUCT(BlueprintType)
struct FBlamLevelRichPresenceRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RichPresenceKey;
    
    BLAMNETWORKSESSION_API FBlamLevelRichPresenceRow();
};

