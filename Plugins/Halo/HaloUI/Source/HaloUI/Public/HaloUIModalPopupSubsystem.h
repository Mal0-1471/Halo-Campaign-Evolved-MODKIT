#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HaloUIModalPopupSubsystem.generated.h"

class UHaloUIModalAlertPopupWidget;
class UHaloUIModalDialogPopupWidget;
class UHaloUIModalInProgressWidget;

UCLASS(Blueprintable)
class HALOUI_API UHaloUIModalPopupSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUIModalAlertPopupWidget* CurrentAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUIModalDialogPopupWidget* CurrentDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUIModalInProgressWidget* CurrentInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHaloUIModalDialogPopupWidget*> DialogQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> SupportedPopupArchetypes;
    
public:
    UHaloUIModalPopupSubsystem();

};

