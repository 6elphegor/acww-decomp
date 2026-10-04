#ifndef GFX_UNK_02093C28_OBJ_H
#define GFX_UNK_02093C28_OBJ_H

#include "types.h"
#include "gfx/Unk_02093dc8_Obj.h"

// Particle object: tag and emitter of a tracked SPL effect (src/main/unk_02090268.cpp, unk_02093f8c.cpp,
// unk_02093ff0.cpp).

struct Unk_02093c28_Obj {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_02093c28_Handle tag;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ Unk_02093dc8_Obj *emitter;
};

#endif
