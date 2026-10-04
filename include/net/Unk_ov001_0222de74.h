#ifndef NET_UNK_OV001_0222DE74_H
#define NET_UNK_OV001_0222DE74_H

#include "types.h"

// ov001 Wi-Fi setup access-point list screen (sWfcApList, heap block of 0x5c bytes), its 0x2a-byte AP entries and
// the icon OAM view. Built in unk_ov001_02211b2c.cpp and unk_ov001_022118a8.cpp.
struct Unk_ov001_02212f98_Reg {
    /* 0x0 */ u16 h0;
    /* 0x2 */ u16 h2;
    /* 0x4 */ u16 h4;
};

struct Unk_ov001_0222de74_Rec {
    /* 0x00 */ u8 pad_00[0x28];
    /* 0x28 */ u8 security;
    /* 0x29 */ u8 pad_29;
};

struct Unk_ov001_0222de74 {
    /* 0x00 */ Unk_ov001_0222de74_Rec *apEntries;
    /* 0x04 */ u32 *bgMapFile;
    /* 0x08 */ u32 *paletteFile;
    /* 0x0c */ void *textCanvas;
    /* 0x10 */ Unk_ov001_02212f98_Reg *securityIcons[5];
    /* 0x24 */ Unk_ov001_02212f98_Reg *signalIcons[5];
    /* 0x38 */ void *scrollTask;
    /* 0x3c */ void *bgScrollTask;
    /* 0x40 */ u16 maxScroll;
    /* 0x42 */ u16 securityIconTiles[3];
    /* 0x48 */ u16 signalIconTiles[4];
    /* 0x50 */ s8 touchRow;
    /* 0x51 */ u8 apCount;
    /* 0x52 */ u8 selectedAp;
    /* 0x53 */ u8 scrollBarRange;
    /* 0x54 */ u8 isConfirmed;
    /* 0x55 */ u8 dragRedrawDelay;
    /* 0x56 */ u8 bgScrollPending;
    /* 0x57 */ u8 isDragging;
    /* 0x58 */ u8 scrollEndSoundPlayed;
    /* 0x59 */ u8 errorSoundPlayed;
};

#endif
