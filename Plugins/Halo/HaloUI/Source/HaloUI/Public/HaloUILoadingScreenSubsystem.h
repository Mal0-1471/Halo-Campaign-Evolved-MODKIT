#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HaloUILoadingScreenSubsystem.generated.h"

class UHaloUILoadingScreenBase;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable)
class HALOUI_API UHaloUILoadingScreenSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowNonBlockingLoadScreenAfterBlockingLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonBlockingLoadMinimumDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentSlateLoadingImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultSlateLoadingImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHaloUILoadingScreenBase> LoadingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DefaultNonBlockingLoadScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> CurrentNonBlockingLoadScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NonBlockingLoadImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* NonBlockingLoadScreenUWidget;
    
public:
    UHaloUILoadingScreenSubsystem();

    UFUNCTION(BlueprintCallable)
    void ShowNonBlockingLoadScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetUseLoadingScreen(const bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowNonBlockingLoadScreenAfterBlockingLoad(const bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNonBlockingLoadScreenImageIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetNonBlockingLoadScreenHintText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetNonBlockingLoadScreenHintSubText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetNonBlockingLoadMinimumDisplayTime(const float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNonBlockingLoadImageTexture(const TSoftObjectPtr<UTexture2D>& Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingScreenClass(TSoftClassPtr<UHaloUILoadingScreenBase> InScreen);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSlateLoadingImagePath(const FName& InImagePath);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultNonBlockingLoadScreenClass(TSoftClassPtr<UUserWidget> InScreen);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSlateLoadingImagePath(const FName& InImagePath);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentNonBlockingLoadScreenClass(TSoftClassPtr<UUserWidget> InScreen);
    
    UFUNCTION(BlueprintCallable)
    void HideNonBlockingLoadScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowNonBlockingLoadScreenAfterBlockingLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNonBlockingLoadScreenRefCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNonBlockingLoadScreenImageIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNonBlockingLoadScreenHintText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNonBlockingLoadScreenHintSubText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNonBlockingLoadMinimumDisplayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetNonBlockingLoadImageTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UHaloUILoadingScreenBase> GetLoadingScreenClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDefaultSlateLoadingImagePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UUserWidget> GetDefaultNonBlockingLoadScreenClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentSlateLoadingImagePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UUserWidget> GetCurrentNonBlockingLoadScreenClass() const;
    
};

