#include "BlamMeshSynchronizationMeshData.h"

FBlamMeshSynchronizationMeshData::FBlamMeshSynchronizationMeshData() {
    this->Asset = NULL;
    this->SkeletalMeshClass = NULL;
    this->SkeletalMeshClassFirstPersonOverride = NULL;
    this->StaticMeshClass = NULL;
    this->StaticMeshClassFirstPersonOverride = NULL;
    this->bIncludeInWorldActors = false;
    this->bIncludeInFirstPersonActors = false;
}

