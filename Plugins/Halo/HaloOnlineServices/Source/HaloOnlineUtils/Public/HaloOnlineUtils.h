#pragma once
#include "CoreMinimal.h"
#include "Misc/CoreMiscDefines.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HaloOnlineUtils.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HALOONLINEUTILS_API UHaloOnlineUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RichPresenceKeys;
    
    UHaloOnlineUtils();

    UFUNCTION(BlueprintCallable)
    static void UpdateRichPresenceForUser(FPlatformUserId PlatformUserId, const FString& RichPresenceKey);
    
    UFUNCTION(BlueprintCallable)
    static TOptional<FString> TryGetPlayFabToken(FPlatformUserId PlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    static TOptional<FString> TryGetPlayFabTitleId(FPlatformUserId PlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    static TOptional<FString> TryGetPlayFabId(FPlatformUserId PlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    static TOptional<FString> TryGetPlayFabClientSessionTicket(FPlatformUserId PlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    static TOptional<FString> TryGetLinkedIdentity(FPlatformUserId PlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    static TOptional<FString> TryGetCanonicalHaloId(FPlatformUserId PlatformUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXsapiEnabled();
    
};

