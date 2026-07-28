#include "BlamMeshSynchronizationComponentBase.h"

UBlamMeshSynchronizationComponentBase::UBlamMeshSynchronizationComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshSynchronizationDataAsset = NULL;
    this->SynchronizedActorType = EBlamMeshSynchronizedActorType::WorldRepresentation;
    this->AnimationClass = NULL;
    this->bStaticMeshAttachmentsUseParentBound = true;
    this->bUseConstructionScriptSkeletalMeshAsLeader = true;
}

FName UBlamMeshSynchronizationComponentBase::GetVariantName() const {
    return NAME_None;
}

TArray<UStaticMeshComponent*> UBlamMeshSynchronizationComponentBase::GetStaticMeshComponents(FName RegionName) const {
    return TArray<UStaticMeshComponent*>();
}

TArray<USkeletalMeshComponent*> UBlamMeshSynchronizationComponentBase::GetSkeletalMeshComponents(FName RegionName) const {
    return TArray<USkeletalMeshComponent*>();
}

USkeletalMeshComponent* UBlamMeshSynchronizationComponentBase::GetSkeletalMeshComponent() const {
    return NULL;
}

TArray<UStaticMeshComponent*> UBlamMeshSynchronizationComponentBase::GetAllStaticMeshComponents() const {
    return TArray<UStaticMeshComponent*>();
}

TArray<USkeletalMeshComponent*> UBlamMeshSynchronizationComponentBase::GetAllSkeletalMeshComponents() const {
    return TArray<USkeletalMeshComponent*>();
}

TArray<UMeshComponent*> UBlamMeshSynchronizationComponentBase::GetAllMeshComponents() const {
    return TArray<UMeshComponent*>();
}


