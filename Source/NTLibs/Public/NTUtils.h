#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NTUtils.generated.h"

class AActor;

UCLASS(Blueprintable)
class NTLIBS_API UNTUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNTUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInPIE();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditorWorld(AActor* Target);
    
};

