#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ImGuiColorRGBA.h"
#include "HaloImGuiUtilsBPLibrary.generated.h"

UCLASS(Blueprintable)
class UHaloImGuiUtilsBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHaloImGuiUtilsBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void BlueprintUnindent();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintSpacing();
    
    UFUNCTION(BlueprintCallable)
    static int32 BlueprintSliderInt(const FString& Label, int32 Current, int32 min, int32 max);
    
    UFUNCTION(BlueprintCallable)
    static float BlueprintSliderFloat(const FString& Label, float Current, float min, float max);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintSetNextWindowSize(float Width, float Height);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintSetNextItemWidth(float Width);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintSetColumnWidth(int32 Index, float Width);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintSeparator();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintSameLine();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintPushStyleColor(int32 Element, const FImGuiColorRGBA& Color);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintPushStringId(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintPushItemWidth(float Width);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintPushIntId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintProgressBar(const FString& Overlay, float Percentage);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintPopStyleColor();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintPopItemWidth();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintPopId();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintPlotLines(const FString& Label, const TArray<float>& Values);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintPlotHistogram(const FString& Label, const TArray<float>& Values);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintNextColumn();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintNewLine();
    
    UFUNCTION(BlueprintCallable)
    static FString BlueprintListBox(const FString& Label, FString& Current, const TArray<FString>& Entries);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintLabel(const FString& Label, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static FString BlueprintInputText(const FString& Label, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static int32 BlueprintInputInt(const FString& Label, int32 Current);
    
    UFUNCTION(BlueprintCallable)
    static float BlueprintInputFloat(const FString& Label, float Current);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintIndent();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintImGuiEnd();
    
    UFUNCTION(BlueprintCallable)
    static bool BlueprintImGuiBegin(const FString& WindowName);
    
    UFUNCTION(BlueprintCallable)
    static float BlueprintGetWindowWidth();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintEndTabItem();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintEndTabBar();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintEndChild();
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintDisplayInt(const FString& Label, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintDisplayFloat(const FString& Label, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintDisplayBool(const FString& Label, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintColumns(int32 NumColumns);
    
    UFUNCTION(BlueprintCallable)
    static bool BlueprintCollapsingHeader(const FString& HeaderText);
    
    UFUNCTION(BlueprintCallable)
    static bool BlueprintCheckbox(const FString& Label, bool bCurrent);
    
    UFUNCTION(BlueprintCallable)
    static bool BlueprintButton(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintBullet();
    
    UFUNCTION(BlueprintCallable)
    static bool BlueprintBeginTabItem(const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    static bool BlueprintBeginTabBar(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static bool BlueprintBeginChild(const FString& WindowName, float Width, float Height, bool bBorder);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintAddTooltip(const FString& ToolTip);
    
    UFUNCTION(BlueprintCallable)
    static FString BlueprintAddComboBox(const FString& Label, FString& Current, const TArray<FString>& Entries);
    
};

