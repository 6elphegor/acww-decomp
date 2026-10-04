#ifndef SYS_UNK_02000FC0_COL_H
#define SYS_UNK_02000FC0_COL_H

#include "types.h"

// Debug-text cursor/colour record passed to DebugText_Print(f) by the crash screen.
// Defined in src/main/unk_02000c2c.cpp (crash screen); also used by src/main/unk_0200137c.cpp.

struct Unk_02000fc0_Col {
    /* 0x0 */ u16 unk_00;
    /* 0x2 */ u16 charBase;
};

#endif
