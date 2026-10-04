#ifndef GFX_UNK_02093DC8_OBJ_H
#define GFX_UNK_02093DC8_OBJ_H

#include "types.h"

// SPL particle effect helpers: tracked effect entries, emitter object/resource, particle nodes and their owner
// (src/main/unk_02090268.cpp, unk_02093f8c.cpp, unk_02093ff0.cpp).

struct Unk_02093c28_Entry {
    /* 0x00 */ s32 x, y, z;
    /* 0x0c */ s16 angle;
    /* 0x0e */ s16 life;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 handle;
    /* 0x18 */ s32 unk_18;
};

struct Unk_02093bb4_Scratch {
    /* 0x00 */ Unk_02093c28_Entry e;
    /* 0x1c */ u16 nextHandle;
};

struct Unk_02093c28_Handle {
    u8 b[4];
};

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

struct Unk_02093aa8_Node {
    /* 0x00 */ Unk_02093aa8_Node *next;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ s32 x, y, z;
    /* 0x14 */ u8 pad_14[0x10];
    /* 0x24 */ u16 lifeTime;
    /* 0x26 */ u16 age;
    /* 0x28 */ u8 pad_28[0x10];
    /* 0x38 */ s32 ox, oy, oz;
};

struct Unk_02093aa8_Owner {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_02093aa8_Node *particles;
};

#endif // GFX_UNK_02093DC8_OBJ_H
