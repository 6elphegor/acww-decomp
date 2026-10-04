#ifndef SYS_UNK_02000FC0_CTX_H
#define SYS_UNK_02000FC0_CTX_H

#include "types.h"

// Crash-screen view of the saved CPU context (sp at 0x38).
// Defined in src/main/unk_02000c2c.cpp (crash screen); also used by src/main/unk_0200137c.cpp.

struct Unk_02000fc0_Ctx {
    /* 0x00 */ u8 pad_00[0x38];
    /* 0x38 */ u32 sp;
};

#endif
