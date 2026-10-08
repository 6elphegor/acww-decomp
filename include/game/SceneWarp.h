#ifndef GAME_SCENEWARP_H
#define GAME_SCENEWARP_H

#include "types.h"
#include "gfx/VecFx32.h"

// 0x1c-byte scene warp / exit record: the pending scene change (sSceneWarpRequest) and the per-scene exit and object
// tables built by the scene overlays. Default constructor 0x020b4fc4 and the SceneWarp_* functions in
// src/main/unk_020b4828.cpp; the overlay tables use the by-value constructor, on the DS SceneWarp_Init (0x020b4f8c),
// run by each overlay's __sinit. Here it is constexpr (as SceneWarp_Init, `flag` is left 0) and the destructor
// (empty on the DS, 0x020b4fc0) trivial: the tables are constant data, nothing runs when an overlay is loaded.
struct SceneWarp {
    SceneWarp();
    constexpr SceneWarp(u8 id, VecFx32Copy v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t)
        : type(id), flag(0), angle(s), pos{v.x, v.y, v.z}, spawnParam(w), fadeOut(p), fadeIn(q), exitAngle(r),
          exitKind(t) {}

    /* 0x00 */ u8 type;
    /* 0x01 */ u8 flag;
    /* 0x02 */ s16 angle;
    /* 0x04 */ VecFx32 pos;
    /* 0x10 */ u32 spawnParam;
    /* 0x14 */ u8 fadeOut;
    /* 0x15 */ u8 fadeIn;
    /* 0x16 */ s16 exitAngle;
    /* 0x18 */ u8 exitKind;
};

#endif
