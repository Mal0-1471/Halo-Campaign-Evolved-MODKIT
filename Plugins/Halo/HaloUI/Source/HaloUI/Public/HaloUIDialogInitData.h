#pragma once
#include "CoreMinimal.h"
#include "EHaloUIDialogButtonSelection.h"
#include "EHaloUIModalPopupResult.h"
#include "HaloUIPopupInitData.h"
#include "HaloUIDialogInitData.generated.h"

UCLASS(Blueprintable)
class HALOUI_API UHaloUIDialogInitData : public UHaloUIPopupInitData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Button1Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Button2Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Button3Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Button4Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultButtonIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHaloUIDialogButtonSelection BackoutButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHaloUIModalPopupResult> ResultsThatRestoreFocus;
    
public:
    UHaloUIDialogInitData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultButtonIdx() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetButtonTextList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHaloUIDialogButtonSelection GetBackoutButton() const;
    
};

