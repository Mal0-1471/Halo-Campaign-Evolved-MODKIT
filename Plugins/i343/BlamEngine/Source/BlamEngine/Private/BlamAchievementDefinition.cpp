#include "BlamAchievementDefinition.h"

FBlamAchievementDefinition::FBlamAchievementDefinition() {
    this->bRequireIncidentCausePlayer = false;
    this->bRequireIncidentEffectPlayer = false;
    this->RepeatCount = 0;
    this->bAnyIncidentGeneratesProgress = false;
    this->bBlockedByDifficultyModifiers = false;
    this->bBlockedInRemix = false;
}

