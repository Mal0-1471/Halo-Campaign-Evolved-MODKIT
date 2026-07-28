#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "BlamModelAnimationCurveData.h"
#include "EBlamModelAnimationType.h"
#include "EModelAnimationMovementData.h"
#include "EModelAnimationOverlayBlending.h"
#include "EModelAnimationOverlayType.h"
#include "BlamAnimationAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBlamAnimationAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationExportName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamModelAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModelAnimationOverlayType OverlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModelAnimationOverlayBlending OverlayBlending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModelAnimationMovementData MovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NetworkReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AnimationRenames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationPedestalNodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlamModelAnimationCurveData> Curves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamModelAnimationCurveData> BlamCurvesToExport;
    
    UBlamAnimationAssetUserData();

};

