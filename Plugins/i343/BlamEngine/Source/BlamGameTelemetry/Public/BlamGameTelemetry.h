#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECreateEventResult.h"
#include "ETelemetryCategory.h"
#include "JsonObjectWrapper.h"
#include "BlamGameTelemetry.generated.h"

UCLASS(Blueprintable)
class UBlamGameTelemetry : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlamGameTelemetry();

    UFUNCTION(BlueprintCallable)
    static void SendBlamGameBlueprintTelemetryEvent(UPARAM(Ref) FJsonObjectWrapper& JsonObjectWrapper);
    
    UFUNCTION(BlueprintCallable)
    static FJsonObjectWrapper CreateRetailBlamTelemetrySample(const FString& EventName, const TEnumAsByte<ETelemetryCategory> TelemetryCategory, const float Odds, const FString& Description, const int32 Version, ECreateEventResult& TelemetryExecutableRoutes);
    
    UFUNCTION(BlueprintCallable)
    static FJsonObjectWrapper CreateRetailBlamBlueprintTelemetry(const FString& EventName, const TEnumAsByte<ETelemetryCategory> TelemetryCategory, const FString& Description, const int32 Version, ECreateEventResult& TelemetryExecutableRoutes);
    
    UFUNCTION(BlueprintCallable)
    static FJsonObjectWrapper CreateInternalBlamBlueprintTelemetrySample(const FString& EventName, const TEnumAsByte<ETelemetryCategory> TelemetryCategory, const float Odds, const FString& Description, const int32 Version, ECreateEventResult& TelemetryExecutableRoutes);
    
    UFUNCTION(BlueprintCallable)
    static FJsonObjectWrapper CreateInternalBlamBlueprintTelemetry(const FString& EventName, const TEnumAsByte<ETelemetryCategory> TelemetryCategory, const FString& Description, const int32 Version, ECreateEventResult& TelemetryExecutableRoutes);
    
};

