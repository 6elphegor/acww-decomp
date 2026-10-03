#include "types.h"

// Second file after U096 (0x02060b7c-0x02060b9c): the global random-number object gRandom, its __sinit
// (.init 0x020c4648), the empty destructor 0x02060b98 and Random_SeedGlobal. Source: prep/U096/notes.txt.

extern "C" {
void *Clock_GetTimeSeed();
s32 Random_SetSeed(void *a, void *b);
}

// 4-byte object seeded with Random_SetSeed(this, 1) (same class as in src/main/unk_0206d4a4.cpp, which only declares
// the destructor)
class Random {
public:
    Random() { Random_SetSeed(this, (void *)1); }
    ~Random();
    u32 unk_00;
};

Random gRandom;

Random::~Random() {}

extern "C" s32 Random_SeedGlobal() {
    void *r = Clock_GetTimeSeed();
    return Random_SetSeed(&gRandom, r);
}
