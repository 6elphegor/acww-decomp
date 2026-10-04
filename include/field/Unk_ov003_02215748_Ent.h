#ifndef FIELD_UNK_OV003_02215748_ENT_H
#define FIELD_UNK_OV003_02215748_ENT_H

#include "types.h"

// Actor view with a counting flag at +0x2d4 (element of CountdownSign's child list, ov003 0x022150ec).
struct Unk_ov003_02215748_Ent {
    /* 0x000 */ u8 pad_00[0x2d4];
    /* 0x2d4 */ u8 isCounting;
};

#endif
