#include "HaloBlueprintUtilitiesBPLibrary.h"
#include "Templates/SubclassOf.h"

UHaloBlueprintUtilitiesBPLibrary::UHaloBlueprintUtilitiesBPLibrary() {
}

bool UHaloBlueprintUtilitiesBPLibrary::SetStaticMeshMinLODForAllPlatforms(UStaticMesh* StaticMesh, int32 MinLODValue) {
    return false;
}

void UHaloBlueprintUtilitiesBPLibrary::OpenUrl(const FString& URL) {
}

UObject* UHaloBlueprintUtilitiesBPLibrary::GetClassDefaultObject(UClass* ObjectClass) {
    return NULL;
}

void UHaloBlueprintUtilitiesBPLibrary::GetAllActorsOfClassFromLevelInstance(ALevelInstance* LevelInstance, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors) {
}

TArray<UActorComponent*> UHaloBlueprintUtilitiesBPLibrary::GetActorComponentsFromClassRef(const TSubclassOf<AActor> ActorClass) {
    return TArray<UActorComponent*>();
}

FName UHaloBlueprintUtilitiesBPLibrary::FindClosestSocket(const USceneComponent* SceneComponent, TEnumAsByte<EComponentSocketType::Type> SocketType, FVector TestLocation, FVector& SocketLocation) {
    return NAME_None;
}


