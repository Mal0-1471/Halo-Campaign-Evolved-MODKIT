#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlamSyncPoseBase.h"
#include "AnimNode_BlamSyncPose.generated.h"

USTRUCT(BlueprintType)
struct BLAMANIMSYNC_API FAnimNode_BlamSyncPose : public FAnimNode_BlamSyncPoseBase {
    GENERATED_BODY()
public:
    FAnimNode_BlamSyncPose();
};

