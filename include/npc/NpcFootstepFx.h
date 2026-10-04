#ifndef NPC_NPCFOOTSTEPFX_H
#define NPC_NPCFOOTSTEPFX_H

#include "types.h"

// 8-byte NpcActor member (footstepFx: footstep effects and sounds; ctor 0x020135e4, dtor label 0x020135e0, whose
// function symbol is still func_020135e0). Defined in src/main/unk_020119cc.cpp (0x02013474..0x020135ec).
class NpcActor;

struct NpcFootstepFx {
    /* 0x0 */ u8 footstepsEnabled;
    /* 0x1 */ u8 pad_01[3];
    /* 0x4 */ u32 prevMoveMode;
    NpcFootstepFx();
    ~NpcFootstepFx();
    void updateFootsteps(NpcActor* p);
    void playFootstepSe(NpcActor* p);
    void disableFootsteps();
    void enableFootsteps();
    void resetFootsteps();
    void func_020135e0();
};

#endif
