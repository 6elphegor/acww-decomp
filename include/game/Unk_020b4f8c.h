#ifndef GAME_UNK_020B4F8C_H
#define GAME_UNK_020B4F8C_H

#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"

// 0x1c-byte scene map object / warp entry: constructor 0x020b4f8c (SceneWarp_Init), destructor 0x020b4fc0 (both in
// main, see aliases.txt); built in static tables by the scene overlays.
struct Unk_020b4f8c {
    /* 0x00 */ u8 pad[0x1c];
    Unk_020b4f8c(u8 id, Unk_020b4f8c_Vec v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t);
    ~Unk_020b4f8c();
};

#endif
