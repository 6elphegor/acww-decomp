#ifndef GFX_UNK_OV004_MTX_H
#define GFX_UNK_OV004_MTX_H

#include "types.h"

// 0x30-byte matrix block (8-byte aligned) of the ov004 furniture actors (FtrActor::modelMtx).
struct Unk_ov004_Mtx {
    /* 0x00 */ s64 v[6];
};

#endif
