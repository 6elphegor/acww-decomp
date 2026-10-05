#ifndef FIELD_UNK_OV003_02217B78_ENT_H
#define FIELD_UNK_OV003_02217B78_ENT_H

#include "types.h"

struct NNSG3dResMdl;

// Ground part descriptor with the model resource at +8 (ov003 0x02217b10 / 0x02217be8).
struct Unk_ov003_02217b78_Ent {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ NNSG3dResMdl *modelRes;
};

#endif
