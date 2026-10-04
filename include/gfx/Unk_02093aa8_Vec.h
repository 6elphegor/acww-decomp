#ifndef GFX_UNK_02093AA8_VEC_H
#define GFX_UNK_02093AA8_VEC_H

#include "types.h"

// s32 vector used by the SPL effect callbacks (src/main/unk_02093f8c.cpp, unk_02093ff0.cpp). Kept apart from
// gfx/Unk_02093dc8_Obj.h: src/main/unk_02090268.cpp declares Unk_02093aa8_Vec as a typedef of Unk_0203389c_Vec.

struct Unk_02093aa8_Vec {
    s32 x, y, z;
};

#endif // GFX_UNK_02093AA8_VEC_H
