#include "BlamCinematicSubsystem.h"

UBlamCinematicSubsystem::UBlamCinematicSubsystem() {
    this->LevelSequenceActor = NULL;
}

void UBlamCinematicSubsystem::OnSubtitleShown(FHaloUIShowSubtitle ShowSubtitleData) {
}

bool UBlamCinematicSubsystem::IsCinematicInProgress() const {
    return false;
}


