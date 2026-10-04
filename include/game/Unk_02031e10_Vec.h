#ifndef GAME_UNK_02031E10_VEC_H
#define GAME_UNK_02031E10_VEC_H

#include "types.h"

// Plain 12-byte vector of the collision triangle code (unk_0202fa70.cpp: TriangleTrigger::setupTrigger,
// Collision_CalcTriangleNormal); also used by ov009.
struct Unk_02031e10_Vec {
    /* 0x0 */ s32 x, y, z;
};

#endif
