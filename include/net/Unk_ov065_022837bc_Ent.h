#ifndef NET_UNK_OV065_022837BC_ENT_H
#define NET_UNK_OV065_022837BC_ENT_H

#include "types.h"

// GameSpy pending request entry (ov065_057); used by unk_ov065_02281a5c.cpp, unk_ov065_02283304.cpp and
// unk_ov065_02283720.cpp.

struct Unk_ov065_022837bc_Ent {
    /* 0x00 */ u32 requestType;
    /* 0x04 */ s32 localId;
    /* 0x08 */ s32 profileId;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 userData;
    /* 0x18 */ void *callback;
};

#endif
