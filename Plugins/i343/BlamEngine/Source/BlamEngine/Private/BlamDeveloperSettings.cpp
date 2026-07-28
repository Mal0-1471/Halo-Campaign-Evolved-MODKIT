#include "BlamDeveloperSettings.h"

UBlamDeveloperSettings::UBlamDeveloperSettings() {
    this->InitialInstalledScenarioNames.AddDefaulted(3);
}

bool UBlamDeveloperSettings::LevelIsReadyToAttemptLoading(const FName StartingScenarioName) const {
    return false;
}


