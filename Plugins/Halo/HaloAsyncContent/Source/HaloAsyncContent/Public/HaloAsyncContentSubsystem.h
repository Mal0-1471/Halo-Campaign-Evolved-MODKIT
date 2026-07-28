#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "Subsystems/GameInstanceSubsystem.h"
#include "HaloAsyncLoadResult.h"
#include "HaloAsyncContentSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class HALOASYNCCONTENT_API UHaloAsyncContentSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FHaloAsyncLoadResult> LoadedSoftObjectPaths;
    
public:
    UHaloAsyncContentSubsystem();

    UFUNCTION(BlueprintCallable)
    UObject* GetLoadedObject_NullIfStillLoading(const FSoftObjectPath& SoftObjectPath);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetLoadedObject_BlockingLoadIfStillLoading(const FSoftObjectPath& SoftObjectPath);
    
};

