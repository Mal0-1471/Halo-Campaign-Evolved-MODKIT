#include "HaloColorBlindBPLibrary.h"

UHaloColorBlindBPLibrary::UHaloColorBlindBPLibrary() {
}

void UHaloColorBlindBPLibrary::UpdateColorBlindMode(EColorVisionDeficiency InMode, float InStrength, float InBrightness, float InContrast) {
}

void UHaloColorBlindBPLibrary::SetColorBlindStrength(float InStrength) {
}

void UHaloColorBlindBPLibrary::SetColorBlindMode(EColorVisionDeficiency InMode) {
}

void UHaloColorBlindBPLibrary::SetColorBlindContrast(float InContrast) {
}

void UHaloColorBlindBPLibrary::SetColorBlindBrightness(float InBrightness) {
}

void UHaloColorBlindBPLibrary::GetColorBlindParameters(float& OutStrength, float& OutBrightness, float& OutContrast) {
}

EColorVisionDeficiency UHaloColorBlindBPLibrary::GetColorBlindMode() {
    return EColorVisionDeficiency::NormalVision;
}


