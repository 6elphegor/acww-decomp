#ifndef SYS_UNK_02000FC0_PTR_H
#define SYS_UNK_02000FC0_PTR_H

#include "types.h"

// Crash-screen view of a task node (gTaskCurrentNode), owner at 0x8.
// Defined in src/main/unk_02000c2c.cpp (crash screen); also used by src/main/unk_0200137c.cpp.

struct Unk_02000fc0_Cfg;

struct Unk_02000fc0_Ptr {
    /* 0x0 */ u8 pad_00[8];
    /* 0x8 */ Unk_02000fc0_Cfg *owner;
};

#endif
