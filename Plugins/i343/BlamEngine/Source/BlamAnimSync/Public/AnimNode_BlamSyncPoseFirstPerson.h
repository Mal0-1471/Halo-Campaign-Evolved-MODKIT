#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlamSyncPoseBase.h"
#include "AnimNode_BlamSyncPoseFirstPerson.generated.h"

USTRUCT(BlueprintType)
struct BLAMANIMSYNC_API FAnimNode_BlamSyncPoseFirstPerson : public FAnimNode_BlamSyncPoseBase {
    GENERATED_BODY()
public:
    FAnimNode_BlamSyncPoseFirstPerson();
};

