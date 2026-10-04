#ifndef MENU_INVENTORYGRIDTYPES_H
#define MENU_INVENTORYGRIDTYPES_H

#include "types.h"

// Small records of the ov094 inventory screen code (InventoryBg / InventoryItemGrid / LetterGrid), shared by the three
// ov094 units (unk_ov094_02292360, 02292da8, 02293b90): OAM object templates (8 bytes: attr0|attr1 word, attr2, unused)
// in the forms the code reads them, the affine matrix of Oam_DrawObj, slot bit sets. No defining TU.

struct InvItemStackPad {
    /* 0x00 */ s32 v[2];
    InvItemStackPad() {}
    ~InvItemStackPad() {}
};

struct OamObjTemplate {
    /* 0x00 */ u8 b[8];
};

struct OamObjTemplateBits {
    /* 0x00 */ u32 attr01;
    /* 0x04 */ u32 id : 10;
    u32 pad : 2;
    u32 c : 4;
    u32 hi : 16;
};

struct OamObjTemplateWords {
    /* 0x00 */ s32 attr01;
    /* 0x04 */ u32 attr2;
};

struct OamObjTemplateAttr2 {
    /* 0x00 */ u32 pad;
    /* 0x04 */ u16 v;
};

struct Bitset64 {
    /* 0x00 */ u32 words[2];
};

struct OamAffineMtx {
    /* 0x00 */ s32 v[4];
};

#endif
