#ifndef GFX_SCREENTRANSITION_H
#define GFX_SCREENTRANSITION_H

#include "types.h"

// The screen transition state (fade / iris wipe / cut) of src/main/unk_020411dc.cpp: gScreenTransition.
// state: 0 idle, 1 -> 2 (ScreenTransition_StartFadeIn, done at VBlank), 3 -> 0 (ScreenTransition_StartFadeOut).
// (unk_020411dc.cpp still has its own identical definition; it should include this header instead.)
struct ScreenTransition {
    u8 state;
    u8 type;
    u8 unk_02[2];
    s32 progress;
    s32 step;
    s32 brightness;
    s32 unk_10;
};

#endif
