#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "HaloUILoadingScreenBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HALOUI_API UHaloUILoadingScreenBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationLoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDefaultThrobber;
    
public:
    UHaloUILoadingScreenBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlateGetAnimationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_SlateTick(float InTime);
    
};

