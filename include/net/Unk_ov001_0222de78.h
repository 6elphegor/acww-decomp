#ifndef NET_UNK_OV001_0222DE78_H
#define NET_UNK_OV001_0222DE78_H

#include "types.h"

// ov001 Wi-Fi setup single-line text editor (sWfcTextEdit) and its caret OAM view. Defined in
// unk_ov001_02213424.cpp.
struct Unk_ov001_0222de78_Hw {
    /* 0x0 */ u32 flags;
    /* 0x4 */ u16 attr2;
};

struct Unk_ov001_0222de78 {
    /* 0x00 */ void *textCanvas;
    /* 0x04 */ Unk_ov001_0222de78_Hw *caretOam;
    /* 0x08 */ u8 text[0x20];
    /* 0x28 */ u8 unk_28;
    /* 0x29 */ u8 textLen;
    /* 0x2a */ u8 result;
};

#endif
