#pragma once
#include "CoreMinimal.h"
#include "EAcousticMeshFilterType.generated.h"

UENUM(BlueprintType)
enum EAcousticMeshFilterType {
    CollisionIfAvailalbe,
    Render,
    Ignore,
};

