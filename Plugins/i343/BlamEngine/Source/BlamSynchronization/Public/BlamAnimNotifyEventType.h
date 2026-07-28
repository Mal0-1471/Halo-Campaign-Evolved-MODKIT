#pragma once
#include "CoreMinimal.h"
#include "BlamAnimNotifyEventType.generated.h"

USTRUCT(BlueprintType)
struct BLAMSYNCHRONIZATION_API FBlamAnimNotifyEventType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventType;
    
    FBlamAnimNotifyEventType();
};

