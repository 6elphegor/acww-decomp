#ifndef GAME_BASIS_H
#define GAME_BASIS_H

// Three vectors filled by TouchPick_CalcRay (defined in src/main/unk_020b6b44.cpp, called from unk_020b60b0.cpp).
#include "types.h"
#include "gfx/VecFx32.h"

struct Basis {
    /* 0x00 */ VecFx32 a;
    /* 0x0c */ VecFx32 b;
    /* 0x18 */ VecFx32 c;
};

#endif
