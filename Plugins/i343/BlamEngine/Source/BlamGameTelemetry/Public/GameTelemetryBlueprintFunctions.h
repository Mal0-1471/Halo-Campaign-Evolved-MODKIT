#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameTelemetryBlueprintFunctions.generated.h"

UCLASS(Blueprintable)
class UGameTelemetryBlueprintFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameTelemetryBlueprintFunctions();

    UFUNCTION(BlueprintCallable)
    static FString GetGameplayId();
    
};

