#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentSocketType -FallbackName=EComponentSocketType
#include "Templates/SubclassOf.h"
#include "HaloBlueprintUtilitiesBPLibrary.generated.h"

class AActor;
class ALevelInstance;
class UActorComponent;
class UObject;
class USceneComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class HALOBLUEPRINTUTILITIES_API UHaloBlueprintUtilitiesBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHaloBlueprintUtilitiesBPLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetStaticMeshMinLODForAllPlatforms(UStaticMesh* StaticMesh, int32 MinLODValue);
    
    UFUNCTION(BlueprintCallable)
    static void OpenUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetClassDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllActorsOfClassFromLevelInstance(ALevelInstance* LevelInstance, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UActorComponent*> GetActorComponentsFromClassRef(const TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    static FName FindClosestSocket(const USceneComponent* SceneComponent, TEnumAsByte<EComponentSocketType::Type> SocketType, FVector TestLocation, FVector& SocketLocation);
    
};

