#include "BlamEnginePluginSettings.h"

UBlamEnginePluginSettings::UBlamEnginePluginSettings() {
    this->BuildConfiguration = EBlamEngineBuildConfiguration::TagTest;
    this->BuildConfigurationToolsDll = EBlamEngineBuildConfiguration::TagPlay;
    this->bDisableBlamEngine = false;
    this->bDesireClangHaloSimulationDll = false;
    this->bUseTagIoIHandler = true;
    this->bEditorEnableTagSystemShellSmokeTestsOnStartup = false;
    this->bEditorSynchronization = true;
    this->bShowSynchronizedObjectsInOutliner = false;
    this->NumSaveSlots = 5;
}


