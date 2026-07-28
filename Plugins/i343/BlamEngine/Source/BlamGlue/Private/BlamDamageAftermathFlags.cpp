#include "BlamDamageAftermathFlags.h"

FBlamDamageAftermathFlags::FBlamDamageAftermathFlags() {
    this->bBodyDepleted = false;
    this->bShieldDepleted = false;
    this->bAreaOfEffect = false;
    this->bAnyDamageDealt = false;
    this->bDamagedByFriendly = false;
    this->bKilledInstantly = false;
    this->bPrimaryRecipient = false;
    this->bEmp = false;
    this->bAssassination = false;
}

