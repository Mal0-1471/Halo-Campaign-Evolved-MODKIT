#include "BlamMeshSynchronizationComponent.h"

UBlamMeshSynchronizationComponent::UBlamMeshSynchronizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceSkeletalMeshUpdatesThisTick = false;
}


