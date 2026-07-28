#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlamHapticsEventHandle.h"
#include "BlamEngineHelperLibrary.generated.h"

class BLAMENGINE_API AActor;
class BLAMENGINE_API UBlamInputMapper;
class BLAMENGINE_API UMaterialInstanceDynamic;
class BLAMENGINE_API UMaterialInterface;
class BLAMENGINE_API UObject;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamEngineHelperLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlamEngineHelperLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WithEditorOnlyData();
    
    UFUNCTION(BlueprintCallable)
    static bool SetActorTransientFlag(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDevicePropertyHandleValid(const FBlamHapticsEventHandle& InHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetWorldNorth(const UObject* WorldContextObject, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    static UBlamInputMapper* GetBlamInputMapper();
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* CreateMIDEditorOnly(UMaterialInterface* Parent, UObject* Outer, FName OptionalName);
    
};

