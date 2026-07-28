#include "HaloUIBorder.h"
#include "Templates/SubclassOf.h"

UHaloUIBorder::UHaloUIBorder() {
}

void UHaloUIBorder::SetSelectedBorderStyle(TSubclassOf<UCommonBorderStyle> OverrideStyle, TSubclassOf<UCommonBorderStyle> BaseStyle) {
}

void UHaloUIBorder::SetBorderStyle(TSubclassOf<UCommonBorderStyle> NewStyle) {
}

TSubclassOf<UCommonBorderStyle> UHaloUIBorder::SelectBorderStyle(TSubclassOf<UCommonBorderStyle> OverrideStyle, TSubclassOf<UCommonBorderStyle> BaseStyle) {
    return NULL;
}


