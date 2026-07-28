#include "BlamGamepadEventHandlerSubsystem.h"

UBlamGamepadEventHandlerSubsystem::UBlamGamepadEventHandlerSubsystem() {
    this->LoadedLightEventsDataAsset = NULL;
}

void UBlamGamepadEventHandlerSubsystem::OnBlamIncident(const FBlamIncident& Incident) {
}

void UBlamGamepadEventHandlerSubsystem::AddGamepadLightEvent(const int32 LocalPlayerIndex, const FName EventName) {
}


