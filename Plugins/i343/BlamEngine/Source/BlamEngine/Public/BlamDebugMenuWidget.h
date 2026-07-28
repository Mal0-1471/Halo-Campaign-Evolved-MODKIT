#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BlamDebugMenuWidget.generated.h"

class UBlamGameStateObjectDebugMenuWidget;

UCLASS(Blueprintable, EditInlineNew)
class BLAMENGINE_API UBlamDebugMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlamGameStateObjectDebugMenuWidget* GameStateObjectDebugMenuWidget;
    
    UBlamDebugMenuWidget();

    UFUNCTION(BlueprintCallable)
    void SetShowTagDebugNames(bool bShow, TArray<bool> EnabledTypes);
    
};

