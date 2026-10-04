#ifndef GAME_BASIS_H
#define GAME_BASIS_H

// Three vectors filled by TouchPick_CalcRay (defined in src/main/unk_020b6b44.cpp, called from unk_020b60b0.cpp).
#include "types.h"
#include "game/Vec3.h"

struct Basis {
    /* 0x00 */ Vec3 a;
    /* 0x0c */ Vec3 b;
    /* 0x18 */ Vec3 c;
};

#endif
