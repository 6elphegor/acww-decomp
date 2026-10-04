#ifndef NPC_UNK_020C0538_OUT_H
#define NPC_UNK_020C0538_OUT_H

#include "types.h"

// Special-NPC talk request helpers: the message output record of SpNpcTalkRequest::start and the object
// referenced at 0x3c of SpNpcKatieTalk. Used by src/main/unk_020b8d9c.cpp, unk_020c00c0.cpp and unk_020c0324.cpp.

struct Unk_020c0538_Out {
    /* 0x0 */ u32 msgKey;
    /* 0x4 */ u8 msgIndex;
};

struct Unk_020c0408_Obj {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c[8];
    /* 0x14 */ s32 openMode;
};

#endif
