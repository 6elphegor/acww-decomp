#ifndef GAME_RANDOM_H
#define GAME_RANDOM_H

#include "types.h"

extern "C" void Random_SetSeed(void *st, u32 v); // defined in src/autoload_2/unk_020e7500.cpp

// 4-byte LCG random state seeded with Random_SetSeed(this, 1). Global instance gRandom and its empty destructor
// (Random_Destruct / _ZN6RandomD1Ev) are defined in src/main/unk_02060b7c.cpp; another instance is data_021cb3d4.
class Random {
public:
    Random() { Random_SetSeed(this, 1); }
    ~Random();

    /* 0x00 */ u32 seed;
};

#endif // GAME_RANDOM_H
