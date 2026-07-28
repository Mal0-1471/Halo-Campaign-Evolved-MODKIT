#include "BlamMarkerProperties.h"

FBlamMarkerProperties::FBlamMarkerProperties() {
    this->BlamMarkerType = EBlamMarkerType::None;
    this->PrimitiveSphereRadius = 0.00f;
    this->bVehicleOnlyPathfindingSphere = false;
    this->bPathfindingSphereRemainsWhenOpen = false;
    this->bPathfindingSphereWithSectors = false;
    this->bExistsInAllRegions = false;
    this->Socket = NULL;
}

