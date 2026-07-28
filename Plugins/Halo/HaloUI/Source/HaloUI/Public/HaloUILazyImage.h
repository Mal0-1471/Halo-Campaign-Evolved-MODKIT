#pragma once
#include "CoreMinimal.h"
#include "CommonLazyImage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GameplayTagContainer.h"
#include "HaloUILazyImage.generated.h"

UCLASS(Blueprintable)
class UHaloUILazyImage : public UCommonLazyImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bScaleWithText: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CachedScaledTextSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TextScalingCategory;
    
public:
    UHaloUILazyImage();

};

