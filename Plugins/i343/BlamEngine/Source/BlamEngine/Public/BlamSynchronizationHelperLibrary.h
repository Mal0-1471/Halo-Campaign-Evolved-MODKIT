#pragma once
#include "CoreMinimal.h"
#include "EBlamWeaponBarrel.h"
#include "BlamEffectData.h"
#include "BlamEffectVector.h"
#include "EResolveBlamAbsolutePlayerIndexResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "GameplayTagContainer.h"
#include "EBlamHelperLibraryMaterialResolveOutcome.h"
#include "EBlamHelperLibrarySearchOutcome.h"
#include "HaloMaterialResponseData.h"
#include "BlamSynchronizationHelperLibrary.generated.h"

class BLAMENGINE_API AActor;
class BLAMENGINE_API APlayerState;
class BLAMENGINE_API UHaloMaterialResponseMapping;
class BLAMENGINE_API UObject;
class BLAMENGINE_API UPhysicalMaterial;
class BLAMENGINE_API USkeleton;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamSynchronizationHelperLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlamSynchronizationHelperLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SubmitMaterialResponseDataToResponseSubsystem(UObject* WorldContextObject, const FHaloMaterialResponseData& MaterialResponseData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EBlamHelperLibrarySearchOutcome ResolvePlayerStateUsingBlamInputUserIndex(const UObject* WorldContextObject, int32 RequestedBlamInputUserIndex, APlayerState*& OutPlayerState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EResolveBlamAbsolutePlayerIndexResult ResolvePlayerStateUsingBlamAbsolutePlayerIndex(const UObject* WorldContextObject, int32 RequestedBlamAbsolutePlayerIndex, APlayerState*& OutPlayerState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EResolveBlamAbsolutePlayerIndexResult ResolveInGameBlamPlayerLocality(const UObject* WorldContextObject, int32 RequestedPlayerDatumIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LocalPlayersStartCameraFade(const UObject* WorldContextObject, bool bInFadingIn, float InFadeTimeInSeconds, FLinearColor InFadeColor, bool bInFadeAudio, bool bInHoldWhenFinished);
    
    UFUNCTION(BlueprintCallable)
    static EBlamHelperLibrarySearchOutcome GetWeaponBarrelFromEffectData(const FBlamEffectData& EffectData, EBlamWeaponBarrel& OutBarrel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FHaloMaterialResponseData GetMaterialResponseForEffect(UObject* WorldContextObject, const FBlamEffectData& EffectData, const TEnumAsByte<ETraceTypeQuery> TraceChannel, EBlamHelperLibraryMaterialResolveOutcome& ResolveOutcome, const TArray<AActor*>& ActorsToIgnore, const float RayCastLength);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEffectSocketNamesFromMarkerGroup(USkeleton* Skeleton, const FName MarkerGroupName, TArray<FName>& OutSocketNames);
    
    UFUNCTION(BlueprintCallable)
    static FName GetEffectSocketNameFromMarker(const FBlamEffectData& EffectData, USkeleton* Skeleton, FName MarkerGroupName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FHaloMaterialResponseData GetAndSubmitMaterialResponseForEffect(UObject* WorldContextObject, const FBlamEffectData& EffectData, const TEnumAsByte<ETraceTypeQuery> TraceChannel, EBlamHelperLibraryMaterialResolveOutcome& ResolveOutcome, const TArray<AActor*>& ActorsToIgnore, const float RayCastLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EBlamHelperLibrarySearchOutcome FindSurfaceGameplayTagForPhysicalMaterial(UObject* WorldContextObject, UPhysicalMaterial* PhysicalMaterial, FGameplayTag& OutMaterialGameplayTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EBlamHelperLibrarySearchOutcome FindSurfaceFromEffectData(UObject* WorldContextObject, const FBlamEffectData& EffectData, FHitResult& HitResult, const TArray<AActor*>& ActorsToIgnore, const TEnumAsByte<ECollisionChannel> CollisionChannel, const float RayCastLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EBlamHelperLibrarySearchOutcome FindPlayerStateUsingBlamAbsolutePlayerIndex(const UObject* WorldContextObject, int32 RequestedBlamAbsolutePlayerIndex, APlayerState*& OutPlayerState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EBlamHelperLibrarySearchOutcome FindMaterialImpactResponseData(UObject* WorldContextObject, UClass* ResponseDataObjectClass, const FGameplayTag& MaterialGameplayTag, UHaloMaterialResponseMapping* PrimaryMapping, UHaloMaterialResponseMapping* OverrideMapping, TArray<UObject*>& OutResponses);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EBlamHelperLibrarySearchOutcome FindFirstMaterialImpactResponseData(UObject* WorldContextObject, UClass* ResponseDataObjectClass, const FGameplayTag& MaterialGameplayTag, UHaloMaterialResponseMapping* PrimaryMapping, UHaloMaterialResponseMapping* OverrideMapping, UObject*& OutResponse);
    
    UFUNCTION(BlueprintCallable)
    static EBlamHelperLibrarySearchOutcome FindEffectVectorByName(const FBlamEffectData& EffectData, FName Name, FBlamEffectVector& OutVector);
    
    UFUNCTION(BlueprintCallable)
    static bool ActorTeamIsTraitor(const AActor* Actor, const AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    static bool ActorTeamIsFriendly(const AActor* Actor, const AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    static bool ActorTeamIsEnemy(const AActor* Actor, const AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    static bool ActorTeamIsAlly(const AActor* Actor, const AActor* OtherActor);
    
};

