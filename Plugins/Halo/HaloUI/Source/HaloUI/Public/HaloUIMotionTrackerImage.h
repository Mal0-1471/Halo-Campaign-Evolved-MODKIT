#pragma once
#include "CoreMinimal.h"
#include "HaloUIImage.h"
#include "HaloUIMotionTrackerImage.generated.h"

class UHaloUIMotionTrackerDataWrapper;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UHaloUIMotionTrackerImage : public UHaloUIImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> HackToForceEditorLifetime;
    
public:
    UHaloUIMotionTrackerImage();

private:
    UFUNCTION(BlueprintCallable)
    void SetMotionTrackerData(UHaloUIMotionTrackerDataWrapper* InMotionTrackerData);
    
};

