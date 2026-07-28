#include "BlamPlayerState.h"
#include "BlamExperiencePlayerStateComponent.h"
#include "BlamNetworkPlayerStateComponent.h"
#include "BlamPlayerStateComponent.h"
#include "HaloPrivilegePlayerStateComponent.h"

ABlamPlayerState::ABlamPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlamExperiencePlayerStateComponent = CreateDefaultSubobject<UBlamExperiencePlayerStateComponent>(TEXT("BlamExperiencePlayerStateComponent"));
    this->BlamNetworkPlayerStateComponent = CreateDefaultSubobject<UBlamNetworkPlayerStateComponent>(TEXT("BlamNetworkPlayerStateComponent"));
    this->BlamPlayerStateComponent = CreateDefaultSubobject<UBlamPlayerStateComponent>(TEXT("BlamPlayerStateComponent"));
    this->HaloPrivilegePlayerStateComponent = CreateDefaultSubobject<UHaloPrivilegePlayerStateComponent>(TEXT("HaloPrivilegePlayerStateComponent"));
}


