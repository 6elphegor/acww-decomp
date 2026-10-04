#ifndef NET_UNK_OV001_0222DDDC_H
#define NET_UNK_OV001_0222DDDC_H

#include "types.h"
#include "net/Unk_ov001_0220a7f0_Reg.h"

// ov001 Wi-Fi setup on-screen text keyboard (sWfcTextKb, heap block of 0x128 bytes) and numeric pad (sWfcNumPad,
// 0x6c bytes). Built in unk_ov001_02208c2c.cpp and unk_ov001_0220aba4.cpp.
struct Unk_ov001_0222dddc {
    /* 0x000 */ void *rowCanvases[3][4];
    /* 0x030 */ Unk_ov001_0220a7f0_Reg *charKeyOams[0x2f];
    /* 0x0ec */ Unk_ov001_0220a7f0_Reg *funcKeyOams[4];
    /* 0x0fc */ void *bottomButtons[2];
    /* 0x104 */ void *rowTextObjs[4];
    /* 0x114 */ void *cursorObj;
    /* 0x118 */ void *task;
    /* 0x11c */ u8 inputKey;
    /* 0x11d */ u8 caseMode;
    /* 0x11e */ s8 touchKey;
    /* 0x11f */ u8 pad_11f;
    /* 0x120 */ s8 prevCursorKey;
    /* 0x121 */ s8 cursorKey;
    /* 0x122 */ u8 pad_122;
    /* 0x123 */ u8 deleteEnabled;
    /* 0x124 */ u8 insertEnabled;
};

struct Unk_ov001_0222dde0 {
    /* 0x00 */ void *rowCanvases[4];
    /* 0x10 */ Unk_ov001_0220a7f0_Reg *digitKeyOams[10];
    /* 0x38 */ Unk_ov001_0220a7f0_Reg *funcKeyOams[2];
    /* 0x40 */ void *bottomButtons[2];
    /* 0x48 */ void *rowTextObjs[4];
    /* 0x58 */ void *cursorObj;
    /* 0x5c */ void *task;
    /* 0x60 */ u8 inputKey;
    /* 0x61 */ s8 touchKey;
    /* 0x62 */ s8 highlightKey;
    /* 0x63 */ s8 cursorKey;
    /* 0x64 */ s8 prevCursorKey;
    /* 0x65 */ u8 deleteHoldTimer;
    /* 0x66 */ u8 deleteEnabled;
    /* 0x67 */ u8 insertEnabled;
    /* 0x68 */ u8 dotEnabled;
    /* 0x69 */ u8 errorSoundPlayed;
};

#endif
