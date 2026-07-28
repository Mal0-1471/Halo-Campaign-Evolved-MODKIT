#include "BlamHapticsEventDeviceVibration.h"
#include "EBlamHapticsEventType.h"

UBlamHapticsEventDeviceVibration::UBlamHapticsEventDeviceVibration() {
    this->HapticsEventType = EBlamHapticsEventType::DeviceVibration;
    this->bIs3DHaptic = false;
    this->bIsLoopingVibration = false;
    this->VibrationSound = NULL;
    this->ForceFeedbackEffect = NULL;
    this->ForceFeedbackAttenuation = NULL;
}


