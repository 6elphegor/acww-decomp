#include "types.h"
#include "game/Random.h"

// Second file after U096 (0x02060b7c-0x02060b9c): the global random-number object gRandom, its __sinit
// (.init 0x020c4648), the empty destructor 0x02060b98 and Random_SeedGlobal. Source: prep/U096/notes.txt.
// gVBlanksPerFrame (.data 0x020dc520, initially 1: the frame length in V-blanks that Main_VBlankCallback waits for,
// set by the main loop) lies between the .data of the files before and after this one in link order, so it belongs
// to this file or to the one before it (0x02060034, house rooms, which has no other .data); it is defined here.

extern "C" {
void *Clock_GetTimeSeed();
}


extern "C" s32 gVBlanksPerFrame;
s32 gVBlanksPerFrame = 1;

Random gRandom;

Random::~Random() {}

extern "C" void Random_SeedGlobal() {
    void *r = Clock_GetTimeSeed();
    Random_SetSeed(&gRandom, (u32)r);
}
