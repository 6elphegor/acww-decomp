#ifndef SYS_DEBUGTEXT_H
#define SYS_DEBUGTEXT_H

#include "types.h"

// Debug-text context passed to DebugText_Print(f) (src/main/unk_020b7f7c.cpp): charBase is added to each character
// code to form the BG tile entry. Used by the crash screen (src/main/unk_02000c2c.cpp, unk_0200137c.cpp).

struct DebugText {
    /* 0x0 */ u16 unk_00;
    /* 0x2 */ u16 charBase;
};

#endif
