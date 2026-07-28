#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavpointEntry.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FNavpointEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    HALOUI_API FNavpointEntry();
};

