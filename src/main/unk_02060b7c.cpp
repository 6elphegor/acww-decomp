#include "types.h"
#include "game/Random.h"

// Second file after U096 (0x02060b7c-0x02060b9c): the global random-number object gRandom, its __sinit
// (.init 0x020c4648), the empty destructor 0x02060b98 and Random_SeedGlobal. Source: prep/U096/notes.txt.

extern "C" {
void *Clock_GetTimeSeed();
}


Random gRandom;

Random::~Random() {}

extern "C" void Random_SeedGlobal() {
    void *r = Clock_GetTimeSeed();
    Random_SetSeed(&gRandom, (u32)r);
}
