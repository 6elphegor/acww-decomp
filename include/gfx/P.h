#ifndef GFX_P_H
#define GFX_P_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "gfx/SplParticleViews.h"

// SPL particle (doubly linked in the emitter's particle lists). Used by the particle manager,
// src/autoload_2/unk_020fc984.cpp, and its companion unk_020fe5c0.cpp.
struct P {
    /* 0x00 */ P *next;
    /* 0x04 */ P *prev;
    /* 0x08 */ VecFx32 pos;
    /* 0x14 */ VecFx32 vel;
    /* 0x20 */ u16 rot0;
    /* 0x22 */ u16 rot1;
    /* 0x24 */ u16 life;
    /* 0x26 */ u16 age;
    /* 0x28 */ u16 h28;
    /* 0x2a */ u16 h2a;
    /* 0x2c */ u8 b2c;
    /* 0x2d */ u8 b2d;
    /* 0x2e */ Fl2e fl;
    /* 0x30 */ s32 w30;
    /* 0x34 */ s16 s34;
    /* 0x36 */ u16 col;
    /* 0x38 */ VecFx32 epos;
};

#endif
