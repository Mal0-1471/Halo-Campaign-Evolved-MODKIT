#include "SandboxToServiceEnvironmentConfig.h"

USandboxToServiceEnvironmentConfig::USandboxToServiceEnvironmentConfig() {
    this->SandboxMappings.AddDefaulted(5);
    this->PlayFabTitleIDConfigs.AddDefaulted(3);
    this->DefaultServiceEnvironment = TEXT("RETAIL");
}


