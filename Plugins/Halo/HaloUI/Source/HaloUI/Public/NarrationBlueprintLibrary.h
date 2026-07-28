#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHaloUINarrationReadOutPriority.h"
#include "NarrationBlueprintLibrary.generated.h"

class UWidget;

UCLASS(Blueprintable)
class HALOUI_API UNarrationBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNarrationBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void MakeAnnouncement(const FText& Text, EHaloUINarrationReadOutPriority Priority, int32 Identifier);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNarrationAnnouncement(const UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllNarrationAnnouncements();
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllChildNarratableNodes(const UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void AnnounceNarrationFocus(const UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void AnnounceNarrationChange(const UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void AnnounceAllChildNarratableNodes(const UWidget* Widget);
    
};

