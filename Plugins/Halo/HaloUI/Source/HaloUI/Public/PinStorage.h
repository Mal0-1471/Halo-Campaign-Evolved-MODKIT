#pragma once
#include "CoreMinimal.h"
#include "PinStorage.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FPinStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* PinContainer;
    
    HALOUI_API FPinStorage();
};

