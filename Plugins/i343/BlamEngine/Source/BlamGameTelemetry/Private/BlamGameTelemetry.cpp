#include "BlamGameTelemetry.h"

UBlamGameTelemetry::UBlamGameTelemetry() {
}

void UBlamGameTelemetry::SendBlamGameBlueprintTelemetryEvent(FJsonObjectWrapper& JsonObjectWrapper) {
}

FJsonObjectWrapper UBlamGameTelemetry::CreateRetailBlamTelemetrySample(const FString& EventName, const TEnumAsByte<ETelemetryCategory> TelemetryCategory, const float Odds, const FString& Description, const int32 Version, ECreateEventResult& TelemetryExecutableRoutes) {
    return FJsonObjectWrapper{};
}

FJsonObjectWrapper UBlamGameTelemetry::CreateRetailBlamBlueprintTelemetry(const FString& EventName, const TEnumAsByte<ETelemetryCategory> TelemetryCategory, const FString& Description, const int32 Version, ECreateEventResult& TelemetryExecutableRoutes) {
    return FJsonObjectWrapper{};
}

FJsonObjectWrapper UBlamGameTelemetry::CreateInternalBlamBlueprintTelemetrySample(const FString& EventName, const TEnumAsByte<ETelemetryCategory> TelemetryCategory, const float Odds, const FString& Description, const int32 Version, ECreateEventResult& TelemetryExecutableRoutes) {
    return FJsonObjectWrapper{};
}

FJsonObjectWrapper UBlamGameTelemetry::CreateInternalBlamBlueprintTelemetry(const FString& EventName, const TEnumAsByte<ETelemetryCategory> TelemetryCategory, const FString& Description, const int32 Version, ECreateEventResult& TelemetryExecutableRoutes) {
    return FJsonObjectWrapper{};
}


