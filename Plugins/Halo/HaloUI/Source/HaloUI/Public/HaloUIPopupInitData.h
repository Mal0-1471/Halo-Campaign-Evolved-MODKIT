#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHaloUIModalPopupType.h"
#include "HaloUIPopupInitData.generated.h"

class UHaloUIModalPopupWidgetBase;

UCLASS(Abstract, Blueprintable)
class HALOUI_API UHaloUIPopupInitData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHaloUIModalPopupWidgetBase> PopupClass;
    
public:
    UHaloUIPopupInitData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHaloUIModalPopupType GetPopupType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UHaloUIModalPopupWidgetBase> GetPopupClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMessage() const;
    
};

