#pragma once
#include "CoreMinimal.h"
#include "NavpointEntry.h"
#include "NavpointInstance.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FNavpointInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavpointEntry CachedEntry;
    
    HALOUI_API FNavpointInstance();
};

