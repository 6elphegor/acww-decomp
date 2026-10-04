#ifndef NPC_NPCFOOTSTEPFX_H
#define NPC_NPCFOOTSTEPFX_H

#include "types.h"

// 8-byte NpcActor member (footstepFx: footstep effects and sounds; ctor 0x020135e4, dtor
// label 0x020135e0). Defined in src/main/unk_020119cc.cpp, where its methods carry the symbol class name Unk_02013474
// (a TU-local method-set view that also names the NpcTalkCtrl functions of talk states 1, 3 and 4).
struct NpcFootstepFx {
    /* 0x0 */ u8 footstepsEnabled;
    /* 0x1 */ u8 pad_01[3];
    /* 0x4 */ u32 prevMoveMode;
    NpcFootstepFx();
    ~NpcFootstepFx();
};

#endif
