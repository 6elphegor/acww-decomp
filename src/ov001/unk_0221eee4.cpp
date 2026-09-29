// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0222defc {
    void *unk_00[5];
    void *unk_14;
    u8 unk_18;
};

struct Unk_ov001_0222df00_Rec {
    u8 name[6];
    u8 flag;
};

struct Unk_ov001_0222df00 {
    u8 pad_0000[0x1300];
    Unk_ov001_0222df00_Rec unk_1300[16];
    void (*unk_1370)(s32);
    u8 pad_1374[0x1b74 - 0x1374];
    u64 unk_1b74;
    u32 unk_1b7c;
    u8 pad_1b80[2];
    u8 unk_1b82;
};

struct Unk_ov001_0222a320 {
    u16 a;
    u16 b;
};

extern "C" {
extern Unk_ov001_0222defc *data_ov001_0222defc;
extern Unk_ov001_0222df00 *data_ov001_0222df00;
extern Unk_ov001_0222a320 data_ov001_0222a320[];
extern u8 data_ov001_0222a300[];
extern u8 data_ov001_0222a310[];
extern u8 data_ov001_0222a334[];

u64 func_01ffa6b4();
s32 func_02128930(void *, void *, s32);
void func_ov001_0222449c(void *, s32, s32 *, s32 *);
void func_ov001_02224558(void *, s32, s32, s32);
void func_ov001_022244d8(void *, s32, s32);
void func_ov001_02224670(void *, s32, s32, s32);
void *func_ov001_022247d4(void *, s32);
void func_ov001_02224b9c(s32, s32, void *);
void *func_ov001_02224b14(s32, s32, s32);
void *func_ov001_02225db0(s32, s32);
void func_ov001_02226fdc(s32, s32);
void func_ov001_02226ffc(s32, void *);
u32 func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_0221eae4(s32);
void func_ov001_0221e9a0(s32);
void func_ov001_0221ee04(s32);
void func_ov001_0221eee4(s32);
void func_ov001_0221f0e8(s32);
void func_ov001_0221f11c(s32);
void func_ov001_0221f1d4(s32);
void func_ov001_0221f2c0(s32);
void func_ov001_0221f3ac(s32);
void func_ov001_0221f498(s32);

#pragma thumb off

void func_ov001_0221eee4(s32 r)
{
    s32 a, b;
    func_ov001_0222449c(data_ov001_0222defc->unk_00[4], 0, &a, &b);
    a -= 8;
    if (a > data_ov001_0222a320[3].a) {
        func_ov001_02224558(data_ov001_0222defc->unk_00[4], -1, a, data_ov001_0222a320[4].b);
        return;
    }
    a = data_ov001_0222a320[3].a;
    func_ov001_02224558(data_ov001_0222defc->unk_00[4], -1, a, data_ov001_0222a320[4].b);
    func_ov001_02226ffc(r, (void *)func_ov001_0221ee04);
}

s32 func_ov001_0221ef90()
{
    if (data_ov001_0222defc->unk_14 != 0) return TRUE;
    return FALSE;
}

void func_ov001_0221efb0(s32 n)
{
    s32 i;
    u8 *p9 = data_ov001_0222a300 + n * 5;
    u8 *p8 = data_ov001_0222a310 + n * 5;
    s32 z = 0;
    for (i = 0; i < 5; i += 2) {
        void *t = func_ov001_022247d4(data_ov001_0222defc->unk_00[i], z);
        func_ov001_02224b9c(1, *p9, t);
        func_ov001_022244d8(data_ov001_0222defc->unk_00[i], -1, z);
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, data_ov001_0222a320[i].a, data_ov001_0222a320[i].b);
        func_ov001_02224670(data_ov001_0222defc->unk_00[i], -1, z, *p8);
        p9 += 2;
        p8 += 2;
    }
    func_ov001_0221eae4(n);
}

void func_ov001_0221f09c()
{
    data_ov001_0222defc->unk_18 = 1;
    data_ov001_0222defc->unk_14 = (void *)func_ov001_02227094(0, (void *)func_ov001_0221eee4, 0, 0x78);
}

void func_ov001_0221f0e8(s32 r)
{
    func_ov001_02226fdc(0, r);
    data_ov001_0222defc->unk_14 = 0;
}

void func_ov001_0221f11c(s32 r)
{
    s32 a, b;
    func_ov001_0222449c(data_ov001_0222defc->unk_00[4], 0, &a, &b);
    a += 8;
    if (a < data_ov001_0222a320[4].a || a > 0x100) {
        func_ov001_02224558(data_ov001_0222defc->unk_00[4], -1, a, data_ov001_0222a320[4].b);
        return;
    }
    a = data_ov001_0222a320[4].a;
    func_ov001_02224558(data_ov001_0222defc->unk_00[4], -1, a, data_ov001_0222a320[4].b);
    func_ov001_02226ffc(r, (void *)func_ov001_0221f0e8);
}

#define STEP(NAME, IDX, NEXT, PIDX) \
void NAME(s32 r) \
{ \
    s32 a, b, i; \
    func_ov001_0222449c(data_ov001_0222defc->unk_00[IDX], 0, &a, &b); \
    a += 8; \
    if (a < data_ov001_0222a320[IDX].a || a > 0x100) { \
        for (i = PIDX; i < 5; i++) \
            func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, a, data_ov001_0222a320[i].b); \
        return; \
    } \
    a = data_ov001_0222a320[IDX].a; \
    for (i = PIDX; i < 5; i++) \
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, a, data_ov001_0222a320[i].b); \
    func_ov001_02226ffc(r, (void *)NEXT); \
}

STEP(func_ov001_0221f1d4, 3, func_ov001_0221f11c, 3)
STEP(func_ov001_0221f2c0, 2, func_ov001_0221f1d4, 2)
STEP(func_ov001_0221f3ac, 1, func_ov001_0221f2c0, 1)
STEP(func_ov001_0221f498, 0, func_ov001_0221f3ac, 0)

void func_ov001_0221f584(s32 n)
{
    s32 i;
    void *p = func_ov001_02225db0(0x1c, 4);
    data_ov001_0222defc = (Unk_ov001_0222defc *)p;
    u8 *p9 = data_ov001_0222a300 + n * 5;
    u8 *p8 = data_ov001_0222a310 + n * 5;
    s32 z = 0;
    for (i = 0; i < 5; i++) {
        data_ov001_0222defc->unk_00[i] = func_ov001_02224b14(1, *p9, 1);
        func_ov001_022244d8(data_ov001_0222defc->unk_00[i], -1, z);
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, -0x2a, data_ov001_0222a320[i].b);
        func_ov001_02224670(data_ov001_0222defc->unk_00[i], -1, z, *p8);
        p9++;
        p8++;
    }
    data_ov001_0222defc->unk_14 = (void *)func_ov001_02227094(0, (void *)func_ov001_0221f498, 0, 0x78);
    func_ov001_0221eae4(n);
    func_ov001_0221e9a0(0xd);
}

void func_ov001_0221f6a0(s32 arg)
{
    Unk_ov001_0222df00 *g;
    s32 i, b, a;
    u64 now = func_01ffa6b4();
    g = data_ov001_0222df00;
    a = 0;
    if (now < g->unk_1b74 + 0x17f898) return;
    b = 0;
    for (i = 0; i < 16; i++) {
        if (func_02128930(g->unk_1300[i].name, data_ov001_0222a334, 6)) {
            if (g->unk_1300[i].flag) b = 1;
            else a = 1;
        }
    }
    if (b && a) {
        if (g->unk_1370) g->unk_1370(2);
    } else if (b) {
        if (g->unk_1370) g->unk_1370(1);
    } else if (!a) {
        if (g->unk_1370) g->unk_1370(0);
    }
    data_ov001_0222df00->unk_1b7c = 0;
    data_ov001_0222df00->unk_1b82 = 1;
    func_ov001_02226fdc(0, arg);
}

#pragma thumb reset
}
