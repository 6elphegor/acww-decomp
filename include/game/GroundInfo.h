#ifndef GAME_GROUNDINFO_H
#define GAME_GROUNDINFO_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "game/GroundInfoBase.h"

// 0x40-byte ground query at a unit or a position (GroundInfoBase plus its initialisers). Defined in main,
// unk_0202fa70.cpp: D1 label 0x02033988, initAtUnit 0x0203398c (= C1(u32, u32, u32, u32)), initAtPos 0x020339bc
// (= C1(VecFx32 *, s32, s32)).
class GroundInfo : public GroundInfoBase {
public:
    GroundInfo() {}
    GroundInfo(VecFx32 *v, s32 a, s32 b);
    GroundInfo(u32 x, u32 y, u32 z, u32 w);
    ~GroundInfo();
    GroundInfo *initAtUnit(s32 x, s32 z, s32 a, s32 b);
    GroundInfo *initAtPos(VecFx32 *v, s32 a, s32 b);
};

#endif
