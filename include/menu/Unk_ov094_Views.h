#ifndef MENU_UNK_OV094_VIEWS_H
#define MENU_UNK_OV094_VIEWS_H

#include "types.h"

// Partial views and small records of the ov094 inventory screen (InventoryBg / InventoryItemGrid / LetterGrid),
// shared by the three ov094 units (unk_ov094_02292360, 02292da8, 02293b90). No defining TU (data views).

struct Unk_ov094_02292360_Obj {
    /* 0x00 */ s32 shownBells;
    /* 0x04 */ s32 bellStep;
    /* 0x08 */ u16 dirtyFlags;
    /* 0x0a */ u16 bellsColorA;
    /* 0x0c */ u16 bellsColorB;
    /* 0x0e */ u8 bgId;
    /* 0x0f */ u8 paintedHighlight;
    /* 0x10 */ u8 highlight;
    /* 0x11 */ u8 blinkHighlight;
    /* 0x12 */ u8 blinkTimer;
    /* 0x13 */ u8 bellRollTimer;
    /* 0x14 */ u8 pictureIndex;
    /* 0x15 */ u8 unk_15;
    /* 0x16 */ u8 palette[0x1c];
    /* 0x32 */ u16 bellsColor;
};

struct Unk_ov094_022923a4_Pad {
    /* 0x00 */ s32 v[2];
    Unk_ov094_022923a4_Pad() {}
    ~Unk_ov094_022923a4_Pad() {}
};

struct Unk_ov094_02292d6c_Ent8 {
    /* 0x00 */ u8 b[8];
};

struct Unk_ov094_02292d6c_Obj38 {
    /* 0x00 */ u8 b[0x38];
};

struct Unk_ov094_02292d6c_Rec {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 id : 10;
    u32 pad : 2;
    u32 c : 4;
    u32 hi : 16;
};

struct Unk_ov094_02293c04_Rec {
    /* 0x00 */ u8 unk_00[0x26];
    /* 0x26 */ volatile u8 popTimer;
    /* 0x27 */ u8 heldScale;
};

struct Unk_ov094_02293ca0_Obj {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u8 *volatile letterArray;
    /* 0x08 */ u32 occupiedBits[2];
};

struct Unk_ov094_022937e4_Ent {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u32 attr2;
};

struct Unk_ov094_02294bb4_Bits {
    /* 0x00 */ u32 pad;
    /* 0x04 */ u16 v;
};

struct Unk_ov094_Bits8 {
    /* 0x00 */ u32 words[2];
};

struct Unk_ov094_0229313c_L {
    /* 0x00 */ s32 v[4];
};

struct Unk_ov094_0229334c_Blk {
    /* 0x00 */ u8 a[0x40];
    /* 0x40 */ u8 b[0x40];
};

#endif
