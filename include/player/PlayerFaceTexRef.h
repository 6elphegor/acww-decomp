#ifndef PLAYER_PLAYERFACETEXREF_H
#define PLAYER_PLAYERFACETEXREF_H

#include "types.h"

// One-byte slot handle into the player face-texture pool (PlayerFaceTexPool). Defined in src/main/unk_0205d340.cpp.
struct PlayerFaceTexRef {
    /* 0x00 */ u8 v;
    PlayerFaceTexRef();
    ~PlayerFaceTexRef();
    void *getBuffer();
    s32 load(u32 idx);
    void setSlot(u32 x);
    void assign(u32 x);
};

#endif
