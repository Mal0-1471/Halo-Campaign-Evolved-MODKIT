#pragma once
#include "CoreMinimal.h"
#include "HaloUIPopupInitData.h"
#include "HaloUIAlertInitData.generated.h"

UCLASS(Blueprintable)
class HALOUI_API UHaloUIAlertInitData : public UHaloUIPopupInitData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCritical;
    
public:
    UHaloUIAlertInitData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCritical() const;
    
};

