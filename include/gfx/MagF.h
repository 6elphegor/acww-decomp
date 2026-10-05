#ifndef GFX_MAGF_H
#define GFX_MAGF_H

#include "types.h"

// Magnet field parameters of the SPL-style particle manager (autoload_2 unk_020fc984 field handlers).
struct MagF {
    /* 0x0 */ s32 x, y, z;
    /* 0xc */ s16 force;
};

#endif
