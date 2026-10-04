#ifndef UI_WFCTEXTEDIT_H
#define UI_WFCTEXTEDIT_H

#include "types.h"
#include "nitro/gxoam.h"

// ov001 Wi-Fi setup single-line text editor (sWfcTextEdit, 0x2c bytes) with its caret OAM entry. Defined in
// unk_ov001_02213424.cpp.
struct WfcTextEdit {
    /* 0x00 */ void *textCanvas;
    /* 0x04 */ GXOamAttr *caretOam;
    /* 0x08 */ u8 text[0x20];
    /* 0x28 */ u8 unk_28;
    /* 0x29 */ u8 textLen;
    /* 0x2a */ u8 result;
};

#endif
