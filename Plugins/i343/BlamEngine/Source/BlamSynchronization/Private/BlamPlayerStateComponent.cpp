#include "BlamPlayerStateComponent.h"
#include "Net/UnrealNetwork.h"

UBlamPlayerStateComponent::UBlamPlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->BlamAbsolutePlayerIndex = -1;
}

void UBlamPlayerStateComponent::OnRep_BlamAbsolutePlayerIndex() const {
}

bool UBlamPlayerStateComponent::IsBlamAbsolutePlayerIndexUnset() const {
    return false;
}

bool UBlamPlayerStateComponent::HasModifiedPlayerTraits() const {
    return false;
}

int32 UBlamPlayerStateComponent::GetMachineInputUserIndex() const {
    return 0;
}

int32 UBlamPlayerStateComponent::GetControlledUnitDatumIndex() const {
    return 0;
}

int32 UBlamPlayerStateComponent::GetBlamAbsolutePlayerIndex() const {
    return 0;
}

void UBlamPlayerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlamPlayerStateComponent, BlamAbsolutePlayerIndex);
}


