#pragma once
#include "CoreMinimal.h"
#include "BlamSkeletonBone.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_BlamSyncPoseBase.generated.h"

USTRUCT(BlueprintType)
struct BLAMANIMSYNC_API FAnimNode_BlamSyncPoseBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink InputPose;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBlamSkeletonBone> BlamSkeletonBones;
    
public:
    FAnimNode_BlamSyncPoseBase();
};

