// mwcc-flags: -O3,p
#include "types.h"

#pragma thumb off

extern "C" const u8 data_ov001_02229e94[2] = {0x3c, 0x3d};
extern "C" const u8 data_ov001_02229e8c[2] = {4, 5};
extern "C" const u16 data_ov001_02229eac[2] = {0x1c, 0x14};
extern "C" const u8 data_ov001_02229e9c[2] = {0x12, 0x13};
extern "C" const u16 data_ov001_02229eb0[2] = {0x78, 0x12};
extern "C" const u16 data_ov001_02229ebc[2][2] = {{0x4, 0xaa}, {0x84, 0xaa}};
extern "C" const char data_ov001_02229ec4[12] = "7894561230";
extern "C" const u16 data_ov001_02229eb4[2][2] = {{0x72, 0x91}, {0x92, 0x91}};
extern "C" const u16 data_ov001_02229ea4[2] = {0x1c, 0x14};
extern "C" const u16 data_ov001_02229ea8[2] = {0xc, 0x4};
extern "C" const u16 data_ov001_02229ed0[14] = {0x37, 0x38, 0x39, 0x34, 0x35, 0x36, 0x31, 0x32, 0x33, 0x30, 0x20, 0x20, 0, 0};
extern "C" const u8 data_ov001_02229e98[2] = {2, 3};
extern "C" const u16 data_ov001_02229eec[10][2] = {
    {0x52, 0x4c}, {0x72, 0x4c}, {0x92, 0x4c}, {0x52, 0x63},
    {0x72, 0x63}, {0x92, 0x63}, {0x52, 0x7a}, {0x72, 0x7a},
    {0x92, 0x7a}, {0x52, 0x91},
};
extern "C" const u8 data_ov001_02229e90[2] = {0x37, 0x38};
extern "C" { void *data_ov001_0222dde0; }
extern "C" const u16 data_ov001_02229f14[14][2] = {
    {0x50, 0x4a}, {0x70, 0x4a}, {0x90, 0x4a}, {0x50, 0x61},
    {0x70, 0x61}, {0x90, 0x61}, {0x50, 0x78}, {0x70, 0x78},
    {0x90, 0x78}, {0x50, 0x8f}, {0x70, 0x8f}, {0x90, 0x8f},
    {0x2, 0xa8}, {0x82, 0xa8},
};
extern "C" const s8 data_ov001_02229f4c[14][4] = {
    {2, 12, 1, 3},
    {0, 13, 2, 4},
    {1, 13, 0, 5},
    {5, 0, 4, 6},
    {3, 1, 5, 7},
    {4, 2, 3, 8},
    {8, 3, 7, 9},
    {6, 4, 8, 10},
    {7, 5, 6, 11},
    {11, 6, 10, 12},
    {9, 7, 11, 13},
    {10, 8, 9, 13},
    {13, 9, 13, 0},
    {12, -1, 12, -2},
};
extern "C" const u8 data_ov001_02229ea0[2] = {0x10, 0x11};
extern "C" u16 data_ov001_0222aa58[4] = {0, 1, 0, 0};


#define data_ov001_02229f16 ((u16 *)data_ov001_02229f14 + 1)


namespace N_0a758 {

struct Unk_ov001_0220a7f0_Reg { u32 w0; u16 h4; };

struct Unk_ov001_0220a7f0_Pos {
    volatile u16 x, y, w, h;
    Unk_ov001_0220a7f0_Pos() { x = 0; y = 0; w = 0; h = 0; }
};

struct Unk_ov001_0220a7f0_H {
    u16 v;
    u16 v2;
    u16 v3;
    u16 v4;
    Unk_ov001_0220a7f0_H() { v = 0; v2 = 0; v3 = 0; v4 = 0; }
};

struct Unk_ov001_0222dddc {
    void *unk_000[3][4];
    Unk_ov001_0220a7f0_Reg *unk_030[0x2f];
    Unk_ov001_0220a7f0_Reg *unk_0ec[4];
    void *unk_0fc[2];
    void *unk_104[4];
    void *unk_114;
    void *unk_118;
    u8 unk_11c;
    u8 unk_11d;
    u8 pad_11e[3];
    u8 unk_121;
    u8 pad_122;
    u8 unk_123;
    u8 unk_124;
};

struct Unk_ov001_0222dde0 {
    void *unk_000[4];
    Unk_ov001_0220a7f0_Reg *unk_010[10];
    void *unk_038[2];
    void *unk_040[2];
    void *unk_048[4];
    void *unk_058;
    u8 pad_05c[7];
    s8 unk_063;
    s8 unk_064;
};

extern "C" {
extern Unk_ov001_0222dddc *data_ov001_0222dddc;
extern Unk_ov001_0222dde0 *data_ov001_0222dde0;
extern u16 data_ov001_02229bf4[];
extern u8 data_ov001_02229be8[];
extern u8 data_ov001_02229be0[];
extern u16 data_ov001_02229bec[];
extern u16 *data_ov001_0222a868[];
extern u16 data_ov001_02229f14[];
extern s8 data_ov001_02229f4c[][4];

extern void *func_ov001_02225db0(s32, s32);
extern Unk_ov001_0220a7f0_Reg *func_ov001_02224b60(s32, s32);
extern void *func_ov001_02224b14(s32, s32, s32);
extern void func_ov001_02224704(void *, s32, s32, s32);
extern void func_ov001_022244d8(void *, s32, s32);
extern void func_ov001_02224558(void *, s32, s32, s32);
extern void *func_ov001_02225748(s32, s32, s32, s32, void *, s32);
extern void func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
extern void *func_ov001_02224870(s32, s32, s32);
extern void *func_ov001_022247d4(void *, s32);
extern void func_ov001_022247e0(void *);
extern void func_ov001_02225718(void *);
extern void func_ov001_022267c8(void *);
extern void func_ov001_02225d58(void *);
extern void func_ov001_02226fdc(s32, s32);
extern void func_ov001_02226ffc(s32, void *);
extern u32 func_ov001_02227094(s32, void *, s32, s32);
extern void func_ov001_02209698(u32, s32, s32);
extern void func_ov001_02208f20();
extern void func_ov001_0220a6a0();
extern void func_ov001_0220b148(s32, s32);
extern void func_ov001_02224b9c(s32, u32, u32);
extern void func_ov001_0221e9a0(s32);
void func_ov001_0220afcc();
void func_ov001_0220aba4(s32);
void func_ov001_0220ac6c(s32);
void func_ov001_0220acec(s32);
void func_ov001_0220ad6c(s32);
void func_ov001_0220adec(s32);


}
}

namespace N_0b05c {

struct Unk_ov001_0220b05c_Reg {
    u32 w0;
    u16 h4;
};

struct Unk_ov001_0222dde0 {
    void *unk_00[4];
    Unk_ov001_0220b05c_Reg *unk_10[10];
    Unk_ov001_0220b05c_Reg *unk_38[2];
    void *unk_40[2];
    void *unk_48[4];
    u8 unk_58[8];
    u8 unk_60;
    s8 unk_61;
    s8 unk_62;
    s8 unk_63;
    u8 unk_64;
    u8 unk_65;
    u8 unk_66;
    u8 unk_67;
    u8 unk_68;
    u8 unk_69;
};

struct Unk_ov001_0220b618_Pt {
    u16 x;
    u16 y;
};

extern "C" {
extern Unk_ov001_0222dde0 *data_ov001_0222dde0;
extern u8 data_ov001_02229e98[];
extern u8 data_ov001_02229e8c[];
extern u8 data_ov001_02229e9c[];
extern u8 data_ov001_02229ea0[];
extern u8 data_ov001_02229ec4[];
extern Unk_ov001_0220b618_Pt data_ov001_02229eec[];
extern Unk_ov001_0220b618_Pt data_ov001_02229eb4[];
extern Unk_ov001_0220b618_Pt data_ov001_02229ebc[];
extern u8 data_ov001_0222a460[];
extern u8 data_ov001_02229ea4[];
extern u8 data_ov001_02229eac[];
extern u8 data_ov001_02229eb0[];

extern void func_ov001_02224670(void *, s32, s32, u32);
extern void func_ov001_0222519c(void *, u32, s32, void *, s32);
extern void func_ov001_02224704(void *, s32, s32, s32);
extern void func_ov001_02224558(void *, s32, u32, s32);
extern void func_ov001_02225924(void *, void *, void *);
extern s32 func_ov001_02226118(void *);
extern s32 func_ov001_02225fd4(void *);
extern s32 func_ov001_022261a8(u32);
extern s32 func_ov001_022261cc(u32);
extern s32 func_ov001_02226184(u32);
extern void func_ov001_0220aef4(s32);
extern void func_ov001_0221e9a0(s32);
extern void func_ov001_0220afcc();

void func_ov001_0220b05c(s32 a, u32 b);
void func_ov001_0220b148(s32 a, s32 b);
void func_ov001_0220b3e4();
void func_ov001_0220b5c4(s32 a);
void func_ov001_0220b618();
void func_ov001_0220b818();


}
}

namespace N_0ba08 {

struct Unk_ov001_0220ba08_Reg {
    u32 w0;
    u16 h4;
};

struct Unk_ov001_0222dde0 {
    void *unk_00[4];
    Unk_ov001_0220ba08_Reg *unk_10[10];
    Unk_ov001_0220ba08_Reg *unk_38[2];
    void *unk_40[2];
    void *unk_48[4];
    void *unk_58;
    void *unk_5c;
    u8 unk_60;
    s8 unk_61;
    s8 unk_62;
    s8 unk_63;
    u8 unk_64;
    u8 unk_65;
    u8 unk_66;
    u8 unk_67;
    u8 unk_68;
    u8 unk_69;
};

extern "C" {
extern Unk_ov001_0222dde0 *data_ov001_0222dde0;
extern u8 data_ov001_0222a460[];
extern u32 data_ov001_02229eec[];
extern u32 data_ov001_02229eb4[];
extern u32 data_ov001_02229ebc[];
extern u8 data_ov001_02229ea4[];
extern u8 data_ov001_02229eac[];
extern u8 data_ov001_02229eb0[];
extern u16 data_ov001_0222aa58[];
extern u16 data_ov001_02229ea4_h[];
extern u8 data_ov001_02229e90[];
extern u8 data_ov001_02229e94[];
extern u16 data_ov001_02229ea8[];
extern u16 data_ov001_02229ed0[];

extern void func_ov001_02225924(void *, void *, void *);
extern s32 func_ov001_022260ac(void *);
extern void func_ov001_0221e9a0(s32);
extern void func_ov001_0222449c(void *, s32, s32 *, s32 *);
extern void func_ov001_0220b148(s32, s32);
extern void func_ov001_0220afcc();
extern s32 func_ov001_02226ffc(void *, void *);
extern void func_ov001_0220b818();
extern void func_ov001_0220b618();
extern void func_ov001_0220b3e4();
extern void func_ov001_022247e0(void *);
extern void func_ov001_0220ae6c(void *);
extern void *func_ov001_02225db0(s32, s32);
extern void *func_ov001_02224b60(s32, s32);
extern void *func_ov001_02224b14(s32, s32, s32);
extern void func_ov001_02224704(void *, s32, s32, s32);
extern void func_ov001_022244d8(void *, s32, s32);
extern void *func_ov001_02225748(s32, s32, s32, s32, void *, s32);
extern void func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
extern void *func_ov001_02224870(s32, s32, s32);
extern void *func_ov001_02227094(s32, void *, s32, s32);

void func_ov001_0220ba08();
void func_ov001_0220bc00();
void func_ov001_0220bc24(void *self);
void func_ov001_0220bcb0(void *self);
void func_ov001_0220bd54(void *self);
void func_ov001_0220bdf8(void *self);
void func_ov001_0220be9c(void *self);


}
}

namespace N_0ba08 {
struct Unk_ov001_0220bfec_Pair { u16 a, b; };
struct Unk_ov001_0220bfec_Rect { Unk_ov001_0220bfec_Pair p; Unk_ov001_0220bfec_Pair s; };
}



namespace N_0ba08 {
extern "C" {
void func_ov001_0220bfec();
void func_ov001_0220bfac();
u32 func_ov001_0220bf98();
void func_ov001_0220bf84(u32 v);
void func_ov001_0220bf70(u32 v);
void func_ov001_0220bf5c(u32 v);
BOOL func_ov001_0220bf40();
void func_ov001_0220be9c(void *self);
void func_ov001_0220bdf8(void *self);
void func_ov001_0220bd54(void *self);
void func_ov001_0220bcb0(void *self);
void func_ov001_0220bc24(void *self);
void func_ov001_0220bc00();
void func_ov001_0220ba08();
}
}

namespace N_0b05c {
extern "C" {
void func_ov001_0220b818();
void func_ov001_0220b618();
void func_ov001_0220b5c4(s32 a);
void func_ov001_0220b3e4();
void func_ov001_0220b148(s32 a, s32 b);
void func_ov001_0220b05c(s32 a, u32 b);
}
}

namespace N_0a758 {
extern "C" {
void func_ov001_0220afcc();
void func_ov001_0220aef4(s32 a);
void func_ov001_0220ae6c(s32 a);
void func_ov001_0220adec(s32 a);
void func_ov001_0220ad6c(s32 a);
void func_ov001_0220acec(s32 a);
void func_ov001_0220ac6c(s32 a);
void func_ov001_0220aba4(s32 a);
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220bfec() {
    Unk_ov001_0220bfec_Rect pos;
    u32 t;
    u16 v[2];
    s32 i, j, k;
    pos = *(Unk_ov001_0220bfec_Rect *)data_ov001_0222aa58;
    pos.s = *(Unk_ov001_0220bfec_Pair *)data_ov001_02229ea4;
    data_ov001_0222dde0 = (Unk_ov001_0222dde0 *)func_ov001_02225db0(0x6c, 4);
    data_ov001_0222dde0->unk_60 = 0x1f;
    data_ov001_0222dde0->unk_63 = 0;
    data_ov001_0222dde0->unk_66 = 1;
    data_ov001_0222dde0->unk_67 = 1;
    data_ov001_0222dde0->unk_68 = 1;
    for (i = 0; i < 10; i++) {
        data_ov001_0222dde0->unk_10[i] = (Unk_ov001_0220ba08_Reg *)func_ov001_02224b60(0, 0x36);
        data_ov001_0222dde0->unk_10[i]->w0 = (data_ov001_0222dde0->unk_10[i]->w0 & 0xc1fffcff) | 0x200;
        data_ov001_0222dde0->unk_10[i]->h4 = (data_ov001_0222dde0->unk_10[i]->h4 & ~0xc00) | 0xc00;
    }
    u8 *p = data_ov001_02229e90;
    for (i = 0; i < 2; i++) {
        data_ov001_0222dde0->unk_38[i] = (Unk_ov001_0220ba08_Reg *)func_ov001_02224b60(0, *p);
        p++;
        data_ov001_0222dde0->unk_38[i]->w0 = (data_ov001_0222dde0->unk_38[i]->w0 & 0xc1fffcff) | 0x200;
        data_ov001_0222dde0->unk_38[i]->h4 = (data_ov001_0222dde0->unk_38[i]->h4 & ~0xc00) | 0xc00;
    }
    for (i = 0; i < 2; i++) {
        data_ov001_0222dde0->unk_40[i] = func_ov001_02224b14(0, data_ov001_02229e94[i], 1);
        func_ov001_02224704(data_ov001_0222dde0->unk_40[i], -1, 0x200, 0);
        func_ov001_022244d8(data_ov001_0222dde0->unk_40[i], -1, 3);
    }
    u32 bh = data_ov001_02229ea8[1];
    u32 bw = data_ov001_02229ea8[0];
    s32 n;
    i = 0;
    n = i;
    v[1] = i;
    for (; i < 4; i++) {
        data_ov001_0222dde0->unk_00[i] = func_ov001_02225748(0, bw, bh, 0, &t, 0);
        pos.p.a = 0;
        s32 idx = n;
        s32 kk;
        for (kk = 0; kk < 3; kk++, idx++, pos.p.a += 0x20) {
            v[0] = data_ov001_02229ed0[idx];
            func_ov001_02225254(data_ov001_0222dde0->unk_00[i], pos.p.a, pos.p.b, pos.s.a, pos.s.b, 2, 0x480, (void *)v);
        }
        data_ov001_0222dde0->unk_48[i] = func_ov001_02224870(0, t, 0);
        n += 3;
    }
    data_ov001_0222dde0->unk_58 = func_ov001_02224b14(0, 0x44, 1);
    func_ov001_02224704(data_ov001_0222dde0->unk_58, -1, 0x200, 0);
    func_ov001_022244d8(data_ov001_0222dde0->unk_58, -1, 2);
    data_ov001_0222dde0->unk_5c = func_ov001_02227094(0, (void *)func_ov001_0220be9c, 0, 0x78);
    func_ov001_0220b148(0, 0xc0);
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220bfac() {
    func_ov001_022247e0(data_ov001_0222dde0->unk_58);
    func_ov001_02226ffc(data_ov001_0222dde0->unk_5c, (void *)func_ov001_0220ae6c);
}
}
}

namespace N_0ba08 {
extern "C" {
u32 func_ov001_0220bf98() {
    return data_ov001_0222dde0->unk_60;
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220bf84(u32 v) {
    data_ov001_0222dde0->unk_66 = v;
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220bf70(u32 v) {
    data_ov001_0222dde0->unk_67 = v;
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220bf5c(u32 v) {
    data_ov001_0222dde0->unk_68 = v;
}
}
}

namespace N_0ba08 {
extern "C" {
BOOL func_ov001_0220bf40() {
    return data_ov001_0222dde0 != NULL ? TRUE : FALSE;
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220be9c(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)data_ov001_0222dde0->unk_10[0];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0x2 / 2];
    if (c > (s32)h) {
        func_ov001_0220b148(0, c);
        return;
    }
    func_ov001_0220b148(0, h);
    func_ov001_0220b148(1, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220bdf8);
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220bdf8(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)data_ov001_0222dde0->unk_10[3];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0xe / 2];
    if (c > (s32)h) {
        func_ov001_0220b148(1, c);
        return;
    }
    func_ov001_0220b148(1, h);
    func_ov001_0220b148(2, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220bd54);
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220bd54(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)data_ov001_0222dde0->unk_10[6];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0x1a / 2];
    if (c > (s32)h) {
        func_ov001_0220b148(2, c);
        return;
    }
    func_ov001_0220b148(2, h);
    func_ov001_0220b148(3, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220bcb0);
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220bcb0(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)data_ov001_0222dde0->unk_10[9];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0x26 / 2];
    if (c > (s32)h) {
        func_ov001_0220b148(3, c);
        return;
    }
    func_ov001_0220b148(3, h);
    func_ov001_0220b148(4, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220bc24);
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220bc24(void *self) {
    s32 a, b;
    func_ov001_0222449c(data_ov001_0222dde0->unk_40[0], 0, &a, &b);
    b -= 12;
    u32 h = ((u16 *)data_ov001_02229ebc)[1];
    if (b > (s32)h) {
        func_ov001_0220b148(4, b);
        return;
    }
    func_ov001_0220b148(4, h);
    func_ov001_0220afcc();
    func_ov001_02226ffc(self, (void *)func_ov001_0220bc00);
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220bc00() {
    func_ov001_0220ba08();
    func_ov001_0220b818();
    func_ov001_0220b618();
    func_ov001_0220b3e4();
}
}
}

namespace N_0ba08 {
extern "C" {
void func_ov001_0220ba08() {
    u32 out[3];
    s32 i;
    if (func_ov001_022260ac(data_ov001_0222a460) == 0) return;
    data_ov001_0222dde0->unk_61 = -1;
    for (i = 0; i < 10; i++) {
        func_ov001_02225924(&data_ov001_02229eec[i], data_ov001_02229ea4, out);
        if (func_ov001_022260ac(out) != 0) {
            if (data_ov001_0222dde0->unk_67 == 0) {
                func_ov001_0221e9a0(9);
                return;
            }
            func_ov001_0221e9a0(0);
            data_ov001_0222dde0->unk_61 = i;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov001_02225924(&data_ov001_02229eb4[i], data_ov001_02229eac, out);
        if (func_ov001_022260ac(out) != 0) {
            if (i == 0 && data_ov001_0222dde0->unk_66 == 0) goto fail;
            if (i == 1 && data_ov001_0222dde0->unk_68 == 0) {
            fail:
                func_ov001_0221e9a0(9);
                return;
            }
            func_ov001_0221e9a0(0);
            data_ov001_0222dde0->unk_61 = i + 10;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov001_02225924(&data_ov001_02229ebc[i], data_ov001_02229eb0, out);
        if (func_ov001_022260ac(out) != 0) {
            func_ov001_0221e9a0(0);
            data_ov001_0222dde0->unk_61 = i + 12;
            return;
        }
    }
}
}
}

namespace N_0b05c {
extern "C" {
void func_ov001_0220b818() {
    Unk_ov001_0220b618_Pt *p;
    s32 i;
    u32 buf[3];
    data_ov001_0222dde0->unk_60 = 0;
    if (!func_ov001_02225fd4(data_ov001_0222a460)) return;
    for (p = data_ov001_02229eec, i = 0; i < 10; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229ea4, buf);
        if (func_ov001_02225fd4(buf)) {
            if (data_ov001_0222dde0->unk_61 != i) return;
            data_ov001_0222dde0->unk_60 = data_ov001_02229ec4[i];
            data_ov001_0222dde0->unk_63 = i;
            func_ov001_0220afcc();
            return;
        }
    }
    for (p = data_ov001_02229eb4, i = 0; i < 2; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229eac, buf);
        if (func_ov001_02225fd4(buf)) {
            if (data_ov001_0222dde0->unk_61 != i + 10) return;
            data_ov001_0222dde0->unk_60 = data_ov001_02229ea0[i];
            data_ov001_0222dde0->unk_63 = i + 10;
            func_ov001_0220afcc();
            return;
        }
    }
    for (p = data_ov001_02229ebc, i = 0; i < 2; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229eb0, buf);
        if (func_ov001_02225fd4(buf)) {
            if (data_ov001_0222dde0->unk_61 != i + 12) return;
            data_ov001_0222dde0->unk_60 = data_ov001_02229e9c[i];
            data_ov001_0222dde0->unk_63 = i + 12;
            func_ov001_0220afcc();
            return;
        }
    }
}
}
}

namespace N_0b05c {
extern "C" {
void func_ov001_0220b618() {
    s32 i;
    Unk_ov001_0220b618_Pt *p;
    u32 buf[3];
    if (!func_ov001_02226118(data_ov001_0222a460)) goto fail;
    for (p = data_ov001_02229eec, i = 0; i < 10; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229ea4, buf);
        if (func_ov001_02226118(buf)) {
            if (data_ov001_0222dde0->unk_61 != i) goto fail;
            func_ov001_0220b5c4(i);
            goto end;
        }
    }
    for (p = data_ov001_02229eb4, i = 0; i < 2; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229eac, buf);
        if (func_ov001_02226118(buf)) {
            if (data_ov001_0222dde0->unk_61 != i + 10) goto fail;
            func_ov001_0220b5c4(i + 10);
            if (i != 0) goto end;
            data_ov001_0222dde0->unk_65++;
            if (data_ov001_0222dde0->unk_65 < 0x28) return;
            if (data_ov001_0222dde0->unk_66 == 0) {
                func_ov001_0221e9a0(9);
                data_ov001_0222dde0->unk_61 = -1;
                return;
            }
            data_ov001_0222dde0->unk_60 = 0x10;
            data_ov001_0222dde0->unk_65 -= 7;
            return;
        }
    }
    for (p = data_ov001_02229ebc, i = 0; i < 2; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229eb0, buf);
        if (func_ov001_02226118(buf)) {
            if (data_ov001_0222dde0->unk_61 != i + 12) goto fail;
            func_ov001_0220b5c4(i + 12);
            goto end;
        }
    }
fail:
    func_ov001_0220b5c4(-1);
end:
    data_ov001_0222dde0->unk_65 = 0;
}
}
}

namespace N_0b05c {
extern "C" {
void func_ov001_0220b5c4(s32 a) {
    if (a == data_ov001_0222dde0->unk_62) return;
    func_ov001_0220b05c(a, 1);
    func_ov001_0220b05c(data_ov001_0222dde0->unk_62, 0);
    data_ov001_0222dde0->unk_62 = a;
}
}
}

namespace N_0b05c {
extern "C" {
void func_ov001_0220b3e4() {
    if (func_ov001_022261a8(0x20)) func_ov001_0220aef4(0);
    if (func_ov001_022261a8(0x40)) func_ov001_0220aef4(1);
    if (func_ov001_022261a8(0x10)) func_ov001_0220aef4(2);
    if (func_ov001_022261a8(0x80)) func_ov001_0220aef4(3);
    if (func_ov001_022261cc(1)) {
        Unk_ov001_0222dde0 *o = data_ov001_0222dde0;
        s32 c = o->unk_63;
        if (c < 10) {
            if (o->unk_67 != 0) {
                o->unk_60 = data_ov001_02229ec4[c];
                return;
            }
            func_ov001_0221e9a0(9);
            return;
        } else if (c - 10 < 2) {
            if ((c - 10 == 0 && o->unk_66 == 0) || (c - 10 == 1 && o->unk_68 == 0)) {
                func_ov001_0221e9a0(9);
                return;
            }
            o->unk_60 = data_ov001_02229ea0[c - 10];
            return;
        } else {
            o->unk_60 = data_ov001_02229e9c[c - 12];
        }
    }
    if (func_ov001_022261a8(2)) {
        Unk_ov001_0222dde0 *o = data_ov001_0222dde0;
        if (o->unk_66 == 0) {
            if (o->unk_69 != 0) return;
            func_ov001_0221e9a0(9);
            data_ov001_0222dde0->unk_69 = 1;
            return;
        }
        o->unk_60 = 0x10;
        return;
    }
    if (func_ov001_02226184(2)) {
        data_ov001_0222dde0->unk_69 = 0;
    }
}
}
}

namespace N_0b05c {
extern "C" {
void func_ov001_0220b148(s32 a, s32 b) {
    u8 x[5] = {3, 3, 3, 1, 0};
    u8 y[5] = {0, 0, 0, 2, 0};
    u8 z[5] = {0, 0, 0, 0, 2};
    s32 k = a * 3;
    s32 i;
    for (i = 0; i < x[a]; i++) {
        Unk_ov001_0220b05c_Reg *r = data_ov001_0222dde0->unk_10[k];
        r->w0 &= 0xc1fffcff;
        u32 t = data_ov001_02229eec[k].x;
        r = data_ov001_0222dde0->unk_10[k];
        r->w0 = (r->w0 & 0xfe00ff00) | (u8)b | ((t & 0x1ff) << 16);
        k++;
    }
    if (a < 4) {
        func_ov001_0222519c(data_ov001_0222dde0->unk_00[a], data_ov001_02229eec[a * 3].x, b, data_ov001_0222dde0->unk_48[a], 2);
    }
    for (i = 0; i < y[a]; i++) {
        Unk_ov001_0220b05c_Reg *r = data_ov001_0222dde0->unk_38[i];
        r->w0 &= 0xc1fffcff;
        u32 t = data_ov001_02229eb4[i].x;
        r = data_ov001_0222dde0->unk_38[i];
        r->w0 = (r->w0 & 0xfe00ff00) | (u8)b | ((t & 0x1ff) << 16);
    }
    for (i = 0; i < z[a]; i++) {
        func_ov001_02224704(data_ov001_0222dde0->unk_40[i], -1, 0, 0);
        func_ov001_02224558(data_ov001_0222dde0->unk_40[i], -1, data_ov001_02229ebc[i].x, b);
    }
}
}
}

namespace N_0b05c {
extern "C" {
void func_ov001_0220b05c(s32 a, u32 b) {
    if (a < 0) return;
    if (a < 10) {
        Unk_ov001_0220b05c_Reg *r = data_ov001_0222dde0->unk_10[a];
        r->w0 = r->w0 & ~0xc00;
        r->h4 = (r->h4 & ~0xf000) | (data_ov001_02229e98[b] << 12);
    } else if (a - 10 < 2) {
        Unk_ov001_0220b05c_Reg *r = data_ov001_0222dde0->unk_38[a - 10];
        r->w0 = r->w0 & ~0xc00;
        r->h4 = (r->h4 & ~0xf000) | (data_ov001_02229e98[b] << 12);
    } else {
        func_ov001_02224670(data_ov001_0222dde0->unk_40[a - 12], -1, 0, data_ov001_02229e8c[b]);
    }
}
}
}

namespace N_0a758 {
extern "C" {
void func_ov001_0220afcc() {
    s32 t;
    s32 idx = data_ov001_0222dde0->unk_063;
    if (idx <= 0xb) t = 0x44;
    else t = 0x45;
    void *r = func_ov001_022247d4(data_ov001_0222dde0->unk_058, 0);
    func_ov001_02224b9c(0, t, (u32)r);
    func_ov001_022244d8(data_ov001_0222dde0->unk_058, -1, 2);
    s32 i2 = data_ov001_0222dde0->unk_063 << 2;
    func_ov001_02224558(data_ov001_0222dde0->unk_058, -1, *(u16 *)((u8 *)data_ov001_02229f14 + i2), *(u16 *)((u8 *)data_ov001_02229f16 + i2));
}
}
}

namespace N_0a758 {
extern "C" {
void func_ov001_0220aef4(s32 a) {
    Unk_ov001_0222dde0 *g = data_ov001_0222dde0;
    s32 old = g->unk_063;
    g->unk_063 = data_ov001_02229f4c[old][a];
    g = data_ov001_0222dde0;
    s32 n = g->unk_063;
    if (n == 0xd && (a == 1 || a == 3)) {
        g->unk_064 = old;
    } else if (n == -1) {
        if (g->unk_064 == 1 || g->unk_064 == 0xa) {
            g->unk_063 = 0xa;
        } else {
            g->unk_063 = 0xb;
        }
    } else if (n == -2) {
        if (g->unk_064 == 1 || g->unk_064 == 0xa) {
            g->unk_063 = 1;
        } else {
            g->unk_063 = 2;
        }
    }
    func_ov001_0220afcc();
    func_ov001_0221e9a0(8);
}
}
}

namespace N_0a758 {
extern "C" {
void func_ov001_0220ae6c(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = (Unk_ov001_0220a7f0_Reg *)func_ov001_022247d4(data_ov001_0222dde0->unk_040[0], 0);
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    func_ov001_0220b148(4, t);
    if (s[1] < 0xc0) return;
    func_ov001_02226ffc(a, (void *)func_ov001_0220adec);
}
}
}

namespace N_0a758 {
extern "C" {
void func_ov001_0220adec(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = data_ov001_0222dde0->unk_010[9];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    func_ov001_0220b148(3, t);
    if (s[1] < 0xc0) return;
    func_ov001_02226ffc(a, (void *)func_ov001_0220ad6c);
}
}
}

namespace N_0a758 {
extern "C" {
void func_ov001_0220ad6c(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = data_ov001_0222dde0->unk_010[6];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    func_ov001_0220b148(2, t);
    if (s[1] < 0xc0) return;
    func_ov001_02226ffc(a, (void *)func_ov001_0220acec);
}
}
}

namespace N_0a758 {
extern "C" {
void func_ov001_0220acec(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = data_ov001_0222dde0->unk_010[3];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    func_ov001_0220b148(1, t);
    if (s[1] < 0xc0) return;
    func_ov001_02226ffc(a, (void *)func_ov001_0220ac6c);
}
}
}

namespace N_0a758 {
extern "C" {
void func_ov001_0220ac6c(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = data_ov001_0222dde0->unk_010[0];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    func_ov001_0220b148(0, t);
    if (s[1] < 0xc0) return;
    func_ov001_02226ffc(a, (void *)func_ov001_0220aba4);
}
}
}

namespace N_0a758 {
extern "C" {
void func_ov001_0220aba4(s32 a) {
    s32 i;
    func_ov001_02226fdc(0, a);
    for (i = 0; i < 4; i++) {
        func_ov001_022247e0(data_ov001_0222dde0->unk_048[i]);
        func_ov001_02225718(data_ov001_0222dde0->unk_000[i]);
    }
    for (i = 0; i < 2; i++) {
        func_ov001_022247e0(data_ov001_0222dde0->unk_040[i]);
    }
    for (i = 0; i < 2; i++) {
        func_ov001_022267c8(data_ov001_0222dde0->unk_038[i]);
    }
    for (i = 0; i < 10; i++) {
        func_ov001_022267c8(data_ov001_0222dde0->unk_010[i]);
    }
    func_ov001_02225d58(&data_ov001_0222dde0);
}
}
}
