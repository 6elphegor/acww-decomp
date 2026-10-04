#ifndef TOWN_UNK_OV009_0225B880_H
#define TOWN_UNK_OV009_0225B880_H

#include "types.h"

// Helper records of the ov009 building actor unit (unk_ov009_0225b880.cpp and its _switch twin).
class BuildingActor;

struct Unk_ov009_0225da90_Vec3 {
    /* 0x0 */ s32 x, y, z;
    Unk_ov009_0225da90_Vec3() {}
};

struct Unk_ov009_0225b880_Target {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

struct Unk_ov009_0225bf3c_Flags {
    /* 0x0 */ u8 f0 : 1;
    /* 0x0 */ u8 f1 : 1;
    /* 0x0 */ u8 rest : 6;
};

struct Unk_ov009_0225c644_Msg {
    /* 0x00 */ u32 v[4];
    Unk_ov009_0225c644_Msg() {}
};

struct Unk_ov009_0225bb0c_Tmp {
    /* 0x00 */ u32 pad[4];
};

struct Unk_ov009_0225e4e0_Col {
    /* 0x0 */ u8 r, g, b, a;
    Unk_ov009_0225e4e0_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

struct Unk_ov009_0225bce0_Pad {
    /* 0x0 */ s32 v[2];
    Unk_ov009_0225bce0_Pad() {}
    ~Unk_ov009_0225bce0_Pad() {}
};

struct Unk_ov009_0225cc24_Obj {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ u16 profile;
    /* 0x0e */ u8 pad_0e[0x8e - 0xe];
    /* 0x8e */ s16 rotY;
    /* 0x90 */ u8 pad_90[0x98 - 0x90];
    /* 0x98 */ s32 speed;
};

struct Unk_ov009_0225cd48_Item {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 offsetX;
    /* 0x08 */ s32 offsetZ;
    /* 0x0c */ s32 size;
    /* 0x10 */ s32 shift;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_ov009_0225d2a4_Obj {
    /* 0x00 */ u32 pad[0x6c / 4];
};

struct Unk_ov009_0225bbdc_Target {
    /* 0x00 */ u8 pad_00[0x28];
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
};

struct Unk_ov009_0225df94_Target {
    /* 0x00 */ u8 pad_00[0x2c];
    /* 0x2c */ BuildingActor *ptrUser;
};

struct Unk_ov009_0225df94_Arg {
    /* 0x00 */ u8 *c;
    /* 0x04 */ Unk_ov009_0225df94_Target *pRenderObj;
};

struct Unk_ov009_0225df84_Obj {
    /* 0x00 */ u8 pad_00[0x24];
    /* 0x24 */ void *nodeDescCallback;
    /* 0x28 */ u8 pad_28[0x92 - 0x28];
    /* 0x92 */ u8 nodeDescCallbackTiming;
};

#endif
