#include "types.h"

extern "C" {
void *func_02133ef8(void *ptr, u32 size);
extern u8 data_021c4910[];
}

// A nested aggregate: a flat struct { u32 a, b; } is copied with interleaved loads and stores instead
struct Unk_02050288_08 {
    u32 unk_00[2];
};

class Unk_02050288 {
public:
    Unk_02050288(s32 arg1, s32 arg2, s32 arg3);
    Unk_02050288(u32 arg1, s32 arg2, s32 arg3);
    virtual ~Unk_02050288();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_02050288_08 unk_08;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ u8 *unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ u32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 unk_39;
    /* 0x3a */ u8 unk_3a;
    /* 0x3b */ u8 unk_3b;
    /* 0x3c */ u8 unk_3c;
    /* 0x3d */ u8 unk_3d;
    /* 0x40 */ u32 unk_40;
    /* 0x44 */ u32 unk_44;
    /* 0x48 */ u32 unk_48;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u32 unk_50;
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ u32 unk_6c;
    /* 0x70 */ u32 unk_70;
    /* 0x74 */ u8 unk_74;
    /* 0x75 */ u8 unk_75;
    /* 0x78 */ u32 unk_78;
};

// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

Unk_02050288::Unk_02050288(u32 arg1, s32 arg2, s32 arg3) {
    Unk_02050288_08 zero;

    unk_04 = 0;
    unk_08 = *(Unk_02050288_08 *)func_02133ef8(&zero, sizeof(zero));
    unk_10 = 0;
    unk_18 = arg1;
    unk_1c = 0;
    unk_20 = arg2;
    unk_24 = arg3;
    unk_28 = data_021c4910;
    unk_2c = 2;
    unk_30 = 0;
    unk_34 = 1;
    unk_38 = 1;
    unk_39 = 0xf;
    unk_3a = 0;
    unk_3b = 0;
    unk_3c = 0;
    unk_3d = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 1;
    unk_54 = 0;
    unk_55 = 0;
    unk_56 = 0;
    unk_57 = 0;
    unk_58 = 0;
    unk_5c = -1;
    unk_60 = arg2 << 5;
    unk_64 = -1;
    unk_68 = 0;
    unk_6c = 0;
    unk_70 = 0;
    unk_74 = 1;
    unk_75 = 0;
    unk_78 = 0;
}

Unk_02050288::Unk_02050288(s32 arg1, s32 arg2, s32 arg3) {
    Unk_02050288_08 zero;

    unk_04 = 0;
    unk_08 = *(Unk_02050288_08 *)func_02133ef8(&zero, sizeof(zero));
    unk_10 = 0;
    unk_18 = -1;
    unk_1c = arg1;
    unk_20 = arg2;
    unk_24 = arg3;
    unk_28 = data_021c4910;
    unk_2c = 5;
    unk_30 = 0;
    unk_34 = 1;
    unk_38 = 1;
    unk_39 = 0xf;
    unk_3a = 0;
    unk_3b = 0;
    unk_3c = 0;
    unk_3d = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_54 = 0;
    unk_55 = 0;
    unk_56 = 0;
    unk_57 = 0;
    unk_58 = 0;
    unk_5c = -1;
    unk_60 = arg2 << 5;
    unk_64 = -1;
    unk_68 = 0;
    unk_6c = 0;
    unk_70 = 0;
    unk_74 = 1;
    unk_75 = 0;
    unk_78 = 0;
}

Unk_02050288::~Unk_02050288() {}
