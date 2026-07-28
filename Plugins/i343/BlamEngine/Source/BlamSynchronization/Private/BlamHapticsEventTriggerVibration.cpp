#include "BlamHapticsEventTriggerVibration.h"
#include "EBlamHapticsEventType.h"

UBlamHapticsEventTriggerVibration::UBlamHapticsEventTriggerVibration() {
    this->HapticsEventType = EBlamHapticsEventType::TriggerVibration;
    this->bIsLoopingVibration = false;
    this->ForceFeedbackEffect = NULL;
}


