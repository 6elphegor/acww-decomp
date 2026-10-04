#ifndef PLAYER_UNK_0200BC08_OBJ_H
#define PLAYER_UNK_0200BC08_OBJ_H

#include "types.h"

// Plain data view of the talk target (TalkRequest_GetTalkTarget; the actor itself is a Character).
// Used by src/main/unk_02004558.cpp and src/main/unk_02004558_extra.cpp.

struct Unk_0200bc08_Obj {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ u32 unk_04;
    /* 0x8 */ u32 param;
};

#endif
