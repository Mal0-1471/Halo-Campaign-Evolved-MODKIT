#pragma once
#include "CoreMinimal.h"
#include "EBlamMeshSynchronizedActorType.generated.h"

UENUM(BlueprintType)
enum class EBlamMeshSynchronizedActorType : uint8 {
    WorldRepresentation,
    FirstPersonRepresentation,
    Num,
};

