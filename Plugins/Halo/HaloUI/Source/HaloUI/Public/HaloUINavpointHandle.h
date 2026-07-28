#pragma once
#include "CoreMinimal.h"
#include "HaloUINavpointHandle.generated.h"

USTRUCT(BlueprintType)
struct FHaloUINavpointHandle {
    GENERATED_BODY()
public:
    HALOUI_API FHaloUINavpointHandle();
};
FORCEINLINE uint32 GetTypeHash(const FHaloUINavpointHandle) { return 0; }

