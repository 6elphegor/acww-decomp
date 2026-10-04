#ifndef GFX_UNK_OV068_0226647C_CAM_H
#define GFX_UNK_OV068_0226647C_CAM_H

#include "types.h"

// Partial view of the ov068 camera object (gCamera): the sway fields used by Camera_UpdateSway and friends,
// plus the 0xc-byte sway pattern (kCameraSwayPatterns). No defining TU (data views).
struct Unk_ov068_0226647c_Cam {
    /* 0x000 */ u8 pad_000[0x174];
    /* 0x174 */ s16 roll;
    /* 0x176 */ u8 pad_176[0x21c - 0x176];
    /* 0x21c */ s16 bobPhase;
    /* 0x21e */ s16 rollPhase;
    /* 0x220 */ u16 bobTimer;
    /* 0x222 */ u16 rollTimer;
    /* 0x224 */ u8 bobPattern;
    /* 0x225 */ u8 rollPattern;
};

struct CameraSwayPattern {
    /* 0x00 */ u16 duration;     // base timer
    /* 0x02 */ u16 durationRand; // random extra (Random_GlobalBelow)
    /* 0x04 */ s16 phaseStep;    // added to the sway phase each frame
    /* 0x06 */ s16 pad;
    /* 0x08 */ s32 amplitude;    // sin(phase) * amplitude
};

#endif
