#ifndef GAME_SCENEWARP_H
#define GAME_SCENEWARP_H

#include "types.h"
#include "game/Vec3.h"
#include "game/Unk_020b4f8c_Vec.h"

// 0x1c-byte scene warp / exit record: the pending scene change (sSceneWarpRequest) and the per-scene exit and object
// tables built by the scene overlays. Default constructor 0x020b4fc4, destructor 0x020b4fc0 and the SceneWarp_*
// functions in src/main/unk_020b4828.cpp; the overlay tables use the by-value constructor, which is SceneWarp_Init
// (0x020b4f8c).
struct SceneWarp {
    SceneWarp();
    SceneWarp(u8 id, Unk_020b4f8c_Vec v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t);
    ~SceneWarp();

    /* 0x00 */ u8 type;
    /* 0x01 */ u8 flag;
    /* 0x02 */ s16 angle;
    /* 0x04 */ Vec3 pos;
    /* 0x10 */ u32 spawnParam;
    /* 0x14 */ u8 fadeOut;
    /* 0x15 */ u8 fadeIn;
    /* 0x16 */ s16 exitAngle;
    /* 0x18 */ u8 exitKind;
};

#endif
