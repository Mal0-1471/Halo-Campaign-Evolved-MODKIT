#pragma once
#include "CoreMinimal.h"
#include "BlamAnimNotifyData.h"
#include "BlamAnimationNotifies.generated.h"

USTRUCT(BlueprintType)
struct FBlamAnimationNotifies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamAnimNotifyData> Entries;
    
    BLAMSYNCHRONIZATION_API FBlamAnimationNotifies();
};

