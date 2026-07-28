#pragma once
#include "CoreMinimal.h"
#include "EModelAnimationIkChainEventUsage.h"
#include "BlamModelAnimationIkChainEvent.generated.h"

USTRUCT(BlueprintType)
struct FBlamModelAnimationIkChainEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IKChainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModelAnimationIkChainEventUsage Usage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetMarker;
    
    BLAMSYNCHRONIZATION_API FBlamModelAnimationIkChainEvent();
};

