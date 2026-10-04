#ifndef GAME_UNK_OV009_0225B880_VEC3_H
#define GAME_UNK_OV009_0225B880_VEC3_H

#include "types.h"

// Plain s32 vector; appears in mangled symbols (BuildingActor::getDoorPos, BuildingCollider::*, BuildingSeEmitter::setPosition).
struct Unk_ov009_0225b880_Vec3 {
    /* 0x00 */ s32 x, y, z;
};

#endif
