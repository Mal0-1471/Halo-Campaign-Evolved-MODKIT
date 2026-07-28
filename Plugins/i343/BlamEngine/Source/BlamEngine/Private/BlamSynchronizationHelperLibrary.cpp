#include "BlamSynchronizationHelperLibrary.h"

UBlamSynchronizationHelperLibrary::UBlamSynchronizationHelperLibrary() {
}

void UBlamSynchronizationHelperLibrary::SubmitMaterialResponseDataToResponseSubsystem(UObject* WorldContextObject, const FHaloMaterialResponseData& MaterialResponseData) {
}

EBlamHelperLibrarySearchOutcome UBlamSynchronizationHelperLibrary::ResolvePlayerStateUsingBlamInputUserIndex(const UObject* WorldContextObject, int32 RequestedBlamInputUserIndex, APlayerState*& OutPlayerState) {
    return EBlamHelperLibrarySearchOutcome::Found;
}

EResolveBlamAbsolutePlayerIndexResult UBlamSynchronizationHelperLibrary::ResolvePlayerStateUsingBlamAbsolutePlayerIndex(const UObject* WorldContextObject, int32 RequestedBlamAbsolutePlayerIndex, APlayerState*& OutPlayerState) {
    return EResolveBlamAbsolutePlayerIndexResult::Unresolved;
}

EResolveBlamAbsolutePlayerIndexResult UBlamSynchronizationHelperLibrary::ResolveInGameBlamPlayerLocality(const UObject* WorldContextObject, int32 RequestedPlayerDatumIndex) {
    return EResolveBlamAbsolutePlayerIndexResult::Unresolved;
}

bool UBlamSynchronizationHelperLibrary::LocalPlayersStartCameraFade(const UObject* WorldContextObject, bool bInFadingIn, float InFadeTimeInSeconds, FLinearColor InFadeColor, bool bInFadeAudio, bool bInHoldWhenFinished) {
    return false;
}

EBlamHelperLibrarySearchOutcome UBlamSynchronizationHelperLibrary::GetWeaponBarrelFromEffectData(const FBlamEffectData& EffectData, EBlamWeaponBarrel& OutBarrel) {
    return EBlamHelperLibrarySearchOutcome::Found;
}

FHaloMaterialResponseData UBlamSynchronizationHelperLibrary::GetMaterialResponseForEffect(UObject* WorldContextObject, const FBlamEffectData& EffectData, const TEnumAsByte<ETraceTypeQuery> TraceChannel, EBlamHelperLibraryMaterialResolveOutcome& ResolveOutcome, const TArray<AActor*>& ActorsToIgnore, const float RayCastLength) {
    return FHaloMaterialResponseData{};
}

bool UBlamSynchronizationHelperLibrary::GetEffectSocketNamesFromMarkerGroup(USkeleton* Skeleton, const FName MarkerGroupName, TArray<FName>& OutSocketNames) {
    return false;
}

FName UBlamSynchronizationHelperLibrary::GetEffectSocketNameFromMarker(const FBlamEffectData& EffectData, USkeleton* Skeleton, FName MarkerGroupName) {
    return NAME_None;
}

FHaloMaterialResponseData UBlamSynchronizationHelperLibrary::GetAndSubmitMaterialResponseForEffect(UObject* WorldContextObject, const FBlamEffectData& EffectData, const TEnumAsByte<ETraceTypeQuery> TraceChannel, EBlamHelperLibraryMaterialResolveOutcome& ResolveOutcome, const TArray<AActor*>& ActorsToIgnore, const float RayCastLength) {
    return FHaloMaterialResponseData{};
}

EBlamHelperLibrarySearchOutcome UBlamSynchronizationHelperLibrary::FindSurfaceGameplayTagForPhysicalMaterial(UObject* WorldContextObject, UPhysicalMaterial* PhysicalMaterial, FGameplayTag& OutMaterialGameplayTag) {
    return EBlamHelperLibrarySearchOutcome::Found;
}

EBlamHelperLibrarySearchOutcome UBlamSynchronizationHelperLibrary::FindSurfaceFromEffectData(UObject* WorldContextObject, const FBlamEffectData& EffectData, FHitResult& HitResult, const TArray<AActor*>& ActorsToIgnore, const TEnumAsByte<ECollisionChannel> CollisionChannel, const float RayCastLength) {
    return EBlamHelperLibrarySearchOutcome::Found;
}

EBlamHelperLibrarySearchOutcome UBlamSynchronizationHelperLibrary::FindPlayerStateUsingBlamAbsolutePlayerIndex(const UObject* WorldContextObject, int32 RequestedBlamAbsolutePlayerIndex, APlayerState*& OutPlayerState) {
    return EBlamHelperLibrarySearchOutcome::Found;
}

EBlamHelperLibrarySearchOutcome UBlamSynchronizationHelperLibrary::FindMaterialImpactResponseData(UObject* WorldContextObject, UClass* ResponseDataObjectClass, const FGameplayTag& MaterialGameplayTag, UHaloMaterialResponseMapping* PrimaryMapping, UHaloMaterialResponseMapping* OverrideMapping, TArray<UObject*>& OutResponses) {
    return EBlamHelperLibrarySearchOutcome::Found;
}

EBlamHelperLibrarySearchOutcome UBlamSynchronizationHelperLibrary::FindFirstMaterialImpactResponseData(UObject* WorldContextObject, UClass* ResponseDataObjectClass, const FGameplayTag& MaterialGameplayTag, UHaloMaterialResponseMapping* PrimaryMapping, UHaloMaterialResponseMapping* OverrideMapping, UObject*& OutResponse) {
    return EBlamHelperLibrarySearchOutcome::Found;
}

EBlamHelperLibrarySearchOutcome UBlamSynchronizationHelperLibrary::FindEffectVectorByName(const FBlamEffectData& EffectData, FName Name, FBlamEffectVector& OutVector) {
    return EBlamHelperLibrarySearchOutcome::Found;
}

bool UBlamSynchronizationHelperLibrary::ActorTeamIsTraitor(const AActor* Actor, const AActor* OtherActor) {
    return false;
}

bool UBlamSynchronizationHelperLibrary::ActorTeamIsFriendly(const AActor* Actor, const AActor* OtherActor) {
    return false;
}

bool UBlamSynchronizationHelperLibrary::ActorTeamIsEnemy(const AActor* Actor, const AActor* OtherActor) {
    return false;
}

bool UBlamSynchronizationHelperLibrary::ActorTeamIsAlly(const AActor* Actor, const AActor* OtherActor) {
    return false;
}


