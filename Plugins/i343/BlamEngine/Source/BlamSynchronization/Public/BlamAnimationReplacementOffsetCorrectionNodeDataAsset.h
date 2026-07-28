#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "BlamAnimationReplacementOffsetCorrectionNodeDataAsset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBlamAnimationReplacementOffsetCorrectionNodeDataAsset : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BoneNames;
    
    UBlamAnimationReplacementOffsetCorrectionNodeDataAsset();

};

