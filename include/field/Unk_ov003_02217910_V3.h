#ifndef FIELD_UNK_OV003_02217910_V3_H
#define FIELD_UNK_OV003_02217910_V3_H

#include "types.h"

// Plain s32 vector of the ov003 ground part classes (FieldGroundPiece::setup takes a pointer to it).
// unk_ov003_02217908.cpp has it as a typedef of Unk_02003a6c_Vec instead and does not include this header.
struct Unk_ov003_02217910_V3 {
    /* 0x00 */ s32 x, y, z;
};

#endif
