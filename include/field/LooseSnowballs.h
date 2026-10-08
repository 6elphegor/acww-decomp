#ifndef FIELD_LOOSESNOWBALLS_H
#define FIELD_LOOSESNOWBALLS_H

#include "types.h"

// The two rollable loose snowballs of the town (gLooseSnowballs, LooseSnowballs_Get): where each was left and its
// size, kept while the snowball actors (field/Snowball.h, Snowball::param 0 / 1) are not spawned. Methods in
// src/main/unk_020af514.cpp.
class LooseSnowball {
public:
    LooseSnowball();
    ~LooseSnowball();

    /* 0x0 */ s32 posX;  // (posX == 0: none left; SnowballSpawner_SpawnLooseBalls picks a place)
    /* 0x4 */ s32 posY;
    /* 0x8 */ s32 posZ;
    /* 0xc */ s32 radius;
};

class LooseSnowballs {
public:
    ~LooseSnowballs();
    void reset();

    LooseSnowball items[2];
};

#endif
