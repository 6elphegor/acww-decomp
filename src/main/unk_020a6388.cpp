#include "types.h"

struct CommManager {
    u8 pad_00[0x104];
    u8 *unk_104;
    u8 pad_108[8];
    u8 *unk_110;

    void flushDeferred();
};

extern CommManager *gCommManager;

struct Unk_020a66f8 {
    u32 unk_00;
    void func_020a6708(u32 v);
};

struct Unk_020a6720 {
    u32 unk_00;
    u8 unk_04;
    void func_020a672c(s32 *a, u8 *b);
    void func_020a6738(u32 a, u8 b);
};

struct Unk_020a6754 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    void func_020a6760(u8 *a, u8 *b, u8 *c);
    void func_020a6774(u8 a, u8 b, u8 c);
};

extern "C" void _ZN12Unk_020a679013func_020a67bcEhhhj(void *self, u32 a, u32 b, u32 c, u32 mask);

struct Unk_020a6790 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u32 unk_04;
};

extern Unk_020a6754 data_021eda94[];
extern Unk_020a6720 data_021edaa0[];
extern u8 data_021edac0[];  // data_021eda94 + 0x2c (Unk_020a66f8[4] member of U195's singleton)
extern u8 data_021edad0[];  // data_021eda94 + 0x3c (Unk_020a6790[4] member)

extern "C" s32 func_020a6478() { return 0; }

extern "C" s32 func_020a6474() { return 0; }

extern "C" void func_020a6470() {}

extern "C" void func_020a6430(u32 a, u8 b) {
    Unk_020a6720 *p = data_021edaa0;
    s32 i;
    for (i = 3; i >= 0; p++, i--) {
        s32 v;
        u8 t;
        p->func_020a672c(&v, &t);
        if (v >= 4) {
            p->func_020a6738(a, b);
            break;
        }
    }
}

extern "C" void func_020a63bc(s32 idx, u32 b, u32 c, u32 d, u32 e) {
    Unk_020a6754 *t = &data_021eda94[idx];
    u8 v[3];
    t->func_020a6760(&v[0], &v[1], &v[2]);
    if (e & 1) {
        v[0] = b;
    }
    if (e & 2) {
        v[1] = c;
    }
    if (e & 4) {
        v[2] = d;
    }
    t->func_020a6774(v[0], v[1], v[2]);
    gCommManager->flushDeferred();
}

extern "C" void func_020a63a8(s32 idx, u32 v) { ((Unk_020a66f8 *)data_021edac0)[idx].func_020a6708(v); }

extern "C" void func_020a6388(u32 idx, u32 a, u32 b, u32 c, u32 d) {
    _ZN12Unk_020a679013func_020a67bcEhhhj(&((Unk_020a6790 *)data_021edad0)[idx], a, b, c, d);
}
