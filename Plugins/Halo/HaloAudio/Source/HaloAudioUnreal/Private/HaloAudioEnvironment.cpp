#include "HaloAudioEnvironment.h"

UHaloAudioEnvironment::UHaloAudioEnvironment() {
    this->Space = EHaloAudioSpaceType::InteriorNarrow;
    this->SpaceCategory = EHaloAudioSpaceCategoryType::Exterior;
    this->AuxBus = NULL;
    this->SwitchValue = NULL;
}


