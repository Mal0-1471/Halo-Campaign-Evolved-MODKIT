#include "HaloUIMenuItemFilter.h"

FHaloUIMenuItemFilter::FHaloUIMenuItemFilter() {
    this->AllowedForPrimaryUser = false;
    this->AllowedForSecondaryUsers = false;
    this->AllowedDuringSplitscreen = false;
    this->AllowedOnPS5 = false;
    this->AllowedOnWindows = false;
    this->AllowedOnWinGDK = false;
    this->AllowedOnXSX = false;
}

