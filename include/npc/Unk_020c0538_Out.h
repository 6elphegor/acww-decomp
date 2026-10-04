#ifndef NPC_UNK_020C0538_OUT_H
#define NPC_UNK_020C0538_OUT_H

#include "types.h"

// Message output record of SpNpcTalkRequest::start. Used by src/main/unk_020b8d9c.cpp, unk_020c00c0.cpp and
// unk_020c0324.cpp.

struct Unk_020c0538_Out {
    /* 0x0 */ u32 msgKey;
    /* 0x4 */ u8 msgIndex;
};

#endif
