#include "BlamControllerHapticsSubsystem.h"

UBlamControllerHapticsSubsystem::UBlamControllerHapticsSubsystem() {
}

FBlamHapticsEventHandle UBlamControllerHapticsSubsystem::TriggerHapticsEvent(const UBlamHapticsEventBase* Event, const FBlamControllerHapticsEventParams& Params) {
    return FBlamHapticsEventHandle{};
}

bool UBlamControllerHapticsSubsystem::StopHapticsEvent(FBlamHapticsEventHandle HapticsEventHandle) {
    return false;
}

FBlamHapticsEventHandle UBlamControllerHapticsSubsystem::SetWeaponTriggerResistance(const UBlamHapticsEventTriggerBase* Event, const FBlamControllerHapticsEventParams& Params) {
    return FBlamHapticsEventHandle{};
}

bool UBlamControllerHapticsSubsystem::ResetWeaponTriggerResistance(FBlamHapticsEventHandle HapticsEventHandle) {
    return false;
}


