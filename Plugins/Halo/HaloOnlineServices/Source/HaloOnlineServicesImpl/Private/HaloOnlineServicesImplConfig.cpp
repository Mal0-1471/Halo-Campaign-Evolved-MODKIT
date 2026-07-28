#include "HaloOnlineServicesImplConfig.h"

UHaloOnlineServicesImplConfig::UHaloOnlineServicesImplConfig() {
    this->XstsHaloRelyingPartyKey = TEXT("https://dummy-xsts-host.svc.halowaypoint.com/");
    this->XstsRelyingPartyConfigs.AddDefaulted(3);
    this->OfflineServiceRoutingEnabled = true;
    this->PrivilegeRetryDelay = 2.00f;
    this->PrivilegeRetryMaxRetries = 3;
}


