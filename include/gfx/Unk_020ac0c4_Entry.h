#ifndef GFX_UNK_020AC0C4_ENTRY_H
#define GFX_UNK_020AC0C4_ENTRY_H

#include "types.h"

// Object-shadow texture entry (sObjShadowTextures), used by src/main/unk_020abea8.cpp and unk_020ac750.cpp.
struct Unk_020ac0c4_Entry {
    /* 0x00 */ u8 *texRes;
    /* 0x04 */ u32 texImageParam;
    /* 0x08 */ u32 plttBase;
    /* 0x0c */ u16 width;
    /* 0x0e */ u16 height;
    /* 0x10 */ u32 texFormat;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15[3];
};

#endif
