#include "TCQualitySubsystemSettings.h"

UTCQualitySubsystemSettings::UTCQualitySubsystemSettings() {
    this->XboxQualityDefinitionFiles.AddDefaulted(2);
    this->PS5QualityDefinitionFiles.AddDefaulted(2);
    this->PCQualityDefinitionFiles.AddDefaulted(2);
    this->QualityDefaults.AddDefaulted(5);
    this->AllowedKeys.AddDefaulted(14);
    this->EnforceTemplateUse = true;
}


