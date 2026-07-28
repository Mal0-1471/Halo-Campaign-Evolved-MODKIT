#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "BlamAnimationObjectSpaceOffsetNodesDataAsset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBlamAnimationObjectSpaceOffsetNodesDataAsset : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BoneNames;
    
    UBlamAnimationObjectSpaceOffsetNodesDataAsset();

};

