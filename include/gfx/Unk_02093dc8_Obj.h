#ifndef GFX_UNK_02093DC8_OBJ_H
#define GFX_UNK_02093DC8_OBJ_H

#include "types.h"

// SPL particle effect views: emitter object (a view of EffectSplEmitter) and its resource (views of SPLResource /
// SPLResBase, gfx/SPLResource.h) (src/main/unk_02090268.cpp, unk_02093f8c.cpp, unk_02093ff0.cpp). Particles are P
// (gfx/P.h), effect slots EffectSlot (gfx/EffectSlot.h), emitter entries/tags EffectEmitterEntry/EffectEmitterTag
// (gfx/EffectSplEmitter.h).

struct Unk_02093dc8_Root {
    s32 unk_00;
    s32 posX, posY, posZ;
};

struct Unk_02093dc8_Ptr {
    Unk_02093dc8_Root *header;
};

struct Unk_02093dc8_Obj {
    /* 0x00 */ u8 pad_00[0x18];
    /* 0x18 */ Unk_02093dc8_Ptr *resource;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ s32 posX, posY, posZ;
    /* 0x2c */ u8 pad_2c[0x10];
    /* 0x3c */ s16 axisX;
    /* 0x3e */ s16 axisY;
    /* 0x40 */ s16 axisZ;
    /* 0x42 */ u8 pad_42[0x12];
    /* 0x54 */ s32 unk_54;
};

#endif // GFX_UNK_02093DC8_OBJ_H
