#include "BlamObjectActor.h"

ABlamObjectActor::ABlamObjectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->FirstPersonActorClass = NULL;
}

void ABlamObjectActor::BP_OnGameplayStart_Implementation(FName VariantName, int32 ObjectGameStateIdentifier) {
}

void ABlamObjectActor::BP_OnGameplayEnd_Implementation() {
}


