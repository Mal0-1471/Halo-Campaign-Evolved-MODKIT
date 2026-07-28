#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "HaloUIViewItemInterface.generated.h"

class UCommonButtonStyle;
class UListView;
class UUserWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UHaloUIViewItemInterface : public UInterface {
    GENERATED_BODY()
};

class IHaloUIViewItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRemovedFromView(UListView* ListView);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAddedToView(UListView* ListView);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSelectableOrNavigable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UUserWidget> GetEntryWidgetClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UCommonButtonStyle> GetEntryWidgetButtonStyle() const;
    
};

