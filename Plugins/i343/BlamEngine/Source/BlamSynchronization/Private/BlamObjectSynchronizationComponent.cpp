#include "BlamObjectSynchronizationComponent.h"

UBlamObjectSynchronizationComponent::UBlamObjectSynchronizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlamObjectIndex = -1;
    this->BlamTagDefinitionIndex = -1;
    this->ParentObjectIndex = -1;
    this->ParentBoneIndex = -1;
    this->BlamObjectGameStateIdentifier = -1;
}

AActor* UBlamObjectSynchronizationComponent::TryAndGetBlamUltimateParentActor() const {
    return NULL;
}

AActor* UBlamObjectSynchronizationComponent::TryAndGetBlamParentActor() const {
    return NULL;
}

bool UBlamObjectSynchronizationComponent::HasParentBlamObject() const {
    return false;
}


