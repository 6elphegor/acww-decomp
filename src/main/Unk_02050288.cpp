#include "types.h"

class Unk_02050288;

typedef void (*Unk_02050288_LoadFunc)(void *src, u32 offset, u32 size);

extern "C" {
void *func_02133ef8(void *ptr, u32 size);
void *func_02100248(void *list, void *prev);
void func_02100260(void *list, void *obj);
void func_020e85fc(void *heap, void *ptr);
void func_021145cc(void *ptr, u32 size);
void func_02116048(void *src, u32 offset, u32 size);
void func_020509dc(s32 arg0);

extern u8 data_021c4910[];
extern u8 data_021c48c4[];
extern void *data_021c489c;
extern u8 data_021c494c[];
extern const Unk_02050288_LoadFunc data_020ca4ac[];
extern const Unk_02050288_LoadFunc data_020ca4c4[];

void func_02050428(void);
void func_0205046c(void);
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

    void func_02050510();
    BOOL func_020504f8();
    BOOL func_020504e0();
    u8 func_020504ac();
    u8 func_02050478();
    void func_02050a34();

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

void Unk_02050288::func_02050510() {
    u32 size;
    u32 offset;
    u32 i;

    func_02050a34();

    if (unk_5c == 0) {
        size = unk_60;
    } else {
        size = unk_5c << 5;
    }
    if (size > 0x400) {
        size = 0x400;
    }

    offset = 0;
    if (unk_18 != -1) {
        offset = unk_18 << 5;
    } else if (unk_1c != 0) {
        offset = 0;
    }

    for (i = 0; i < unk_24; i++) {
        func_021145cc(data_021c494c, size);
        if (unk_50 == 2 || unk_50 == 3) {
            data_020ca4ac[unk_2c](data_021c494c, offset, size);
        }
        if (unk_50 == 1 || unk_50 == 3) {
            data_020ca4c4[unk_2c](data_021c494c, offset, size);
        }
        if (unk_50 == 0) {
            func_02116048(data_021c494c, unk_1c + offset, size);
        }
        if (unk_55) {
            offset += 0x400;
        } else {
            offset += unk_60;
        }
    }
}

BOOL Unk_02050288::func_020504f8() {
    BOOL result = FALSE;
    if (unk_78 >= unk_40 && unk_78 < unk_40 + unk_44) {
        result = TRUE;
    }
    return result;
}

BOOL Unk_02050288::func_020504e0() {
    BOOL result = FALSE;
    if (unk_78 >= unk_48 && unk_78 < unk_48 + unk_4c) {
        result = TRUE;
    }
    return result;
}

u8 Unk_02050288::func_020504ac() {
    u8 result = unk_38;
    if (func_020504f8()) {
        result = unk_3a;
    } else if (func_020504e0()) {
        result = unk_3c;
    }
    return result;
}

u8 Unk_02050288::func_02050478() {
    u8 result = unk_39;
    if (func_020504f8()) {
        result = unk_3b;
    } else if (func_020504e0()) {
        result = unk_3d;
    }
    return result;
}

void func_0205046c(void) {
    func_020509dc(0);
}

void func_02050428(void) {
    Unk_02050288 *obj;
    for (;;) {
        obj = (Unk_02050288 *)func_02100248(data_021c48c4, NULL);
        if (obj == NULL) {
            break;
        }
        func_02100260(data_021c48c4, obj);
        obj->~Unk_02050288();
        func_020e85fc(data_021c489c, obj);
    }
}

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
