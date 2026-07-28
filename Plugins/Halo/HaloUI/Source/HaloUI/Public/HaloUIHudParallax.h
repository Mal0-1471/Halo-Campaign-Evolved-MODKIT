#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Engine/DataTable.h"
#include "ParallaxInstance.h"
#include "ParallaxResult.h"
#include "HaloUIHudParallax.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class HALOUI_API UHaloUIHudParallax : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParallaxHistoryCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* LocalPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParallaxInstance> ParallaxInstances;
    
public:
    UHaloUIHudParallax();

    UFUNCTION(BlueprintCallable)
    void SetPlayerController(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void RemoveParallaxByName(FName RowName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveParallaxByHandle(FDataTableRowHandle ParallaxParamsRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FParallaxResult GetParallaxResultByName(FName RowName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FParallaxResult GetParallaxResultByHandle(FDataTableRowHandle ParallaxParamsRow) const;
    
    UFUNCTION(BlueprintCallable)
    void AddParallax(FDataTableRowHandle ParallaxParamsRow);
    
};

