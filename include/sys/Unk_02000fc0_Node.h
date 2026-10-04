#ifndef SYS_UNK_02000FC0_NODE_H
#define SYS_UNK_02000FC0_NODE_H

#include "types.h"

// Crash-screen view of a thread list node (next at 0x68, id at 0x6c).
// Defined in src/main/unk_02000c2c.cpp (crash screen); also used by src/main/unk_0200137c.cpp.

struct Unk_02000fc0_Node {
    /* 0x00 */ u8 pad_00[0x68];
    /* 0x68 */ Unk_02000fc0_Node *next;
    /* 0x6c */ u32 id;
};

#endif
