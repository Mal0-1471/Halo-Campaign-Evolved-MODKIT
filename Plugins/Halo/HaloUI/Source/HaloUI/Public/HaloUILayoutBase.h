#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "HaloUILayoutBase.generated.h"

class UCommonActivatableWidgetContainerBase;
class UHaloUILayoutBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HALOUI_API UHaloUILayoutBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLayoutDestroyed, UHaloUILayoutBase*, Layout);
    
    UHaloUILayoutBase();

    UFUNCTION(BlueprintCallable)
    void RegisterLayer(FGameplayTag LayerTag, UCommonActivatableWidgetContainerBase* LayerWidget);
    
};

