#ifndef MENU_INVENTORYGRIDTYPES_H
#define MENU_INVENTORYGRIDTYPES_H

#include "types.h"

// Small records of the ov094 inventory screen code (InventoryBg / InventoryItemGrid / LetterGrid), shared by the three
// ov094 units (unk_ov094_02292360, 02292da8, 02293b90): OAM object templates (8 bytes: attr0|attr1 word, attr2, unused)
// with accessors, the affine matrix of Oam_DrawObj, slot bit sets. No defining TU.

struct InvItemStackPad {
    /* 0x00 */ s32 v[2];
    InvItemStackPad() {}
    ~InvItemStackPad() {}
};

// An OAM object of a sprite template (8 bytes: attr0|attr1, attr2, unused; the last object of a template has 0xffff
// in the unused half-word); the data is written as bytes.
struct OamObjTemplate {
    union {
        u8 b[8];
        struct {
            /* 0x00 */ u32 attr01;
            /* 0x04 */ u16 attr2;  // character name (bits 0..9), priority, palette (bits 12..15)
            /* 0x06 */ u16 attr3;
        } attr;
    };

    u32 charName() const { return attr.attr2 & 0x3ff; }
    void setCharName(u32 name) { attr.attr2 = (attr.attr2 & 0xfc00) | (name & 0x3ff); }
    void setPalette(u32 pal) { attr.attr2 = (attr.attr2 & 0x0fff) | ((pal & 0xf) << 12); }
};

struct Bitset64 {
    /* 0x00 */ u32 words[2];
};

struct OamAffineMtx {
    /* 0x00 */ s32 v[4];
};

#endif
