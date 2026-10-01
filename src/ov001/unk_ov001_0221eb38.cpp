// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222defc {
    void *unk_00[5];
    void *unk_14;
    u8 unk_18;
};

struct Unk_ov001_0222a320 {
    u16 a;
    u16 b;
};

extern "C" const u8 data_ov001_0222a300[16];
extern "C" const u8 data_ov001_0222a310[16];
extern "C" const Unk_ov001_0222a320 data_ov001_0222a320[5];
extern "C" Unk_ov001_0222defc *data_ov001_0222defc;

extern "C" {

void func_ov001_0222449c(void *, s32, s32 *, s32 *);
void func_ov001_02224558(void *, s32, s32, s32);
void func_ov001_022244d8(void *, s32, s32);
void func_ov001_02224670(void *, s32, s32, s32);
void func_ov001_022247e0(void *);
void *func_ov001_022247d4(void *, s32);
void func_ov001_02224b9c(s32, s32, void *);
void *func_ov001_02224b14(s32, s32, s32);
void func_ov001_02225d58(void *);
void *func_ov001_02225db0(s32, s32);
void func_ov001_02226fdc(s32, s32);
void func_ov001_02226ffc(s32, void *);
u32 func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_0221eae4(s32);
void func_ov001_0221e9a0(s32);

void func_ov001_0221eb64(s32 a);
void func_ov001_0221ec44(s32 a);
void func_ov001_0221ed24(s32 a);
void func_ov001_0221ee04(s32 a);
void func_ov001_0221eee4(s32 r);
void func_ov001_0221f0e8(s32 r);
void func_ov001_0221f11c(s32 r);
void func_ov001_0221f1d4(s32 r);
void func_ov001_0221f2c0(s32 r);
void func_ov001_0221f3ac(s32 r);
void func_ov001_0221f498(s32 r);
void func_ov001_0221f584(s32 n);
void func_ov001_0221f09c();
void func_ov001_0221efb0(s32 n);
s32 func_ov001_0221ef90();
BOOL func_ov001_0221eb38();
}

void func_ov001_0221f584(s32 n)
{
    s32 i;
    void *p = func_ov001_02225db0(0x1c, 4);
    data_ov001_0222defc = (Unk_ov001_0222defc *)p;
    const u8 *p9 = data_ov001_0222a300 + n * 5;
    const u8 *p8 = data_ov001_0222a310 + n * 5;
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

void func_ov001_0221f498(s32 r)
{
    s32 a, b, i;
    func_ov001_0222449c(data_ov001_0222defc->unk_00[0], 0, &a, &b);
    a += 8;
    if (a < data_ov001_0222a320[0].a || a > 0x100) {
        for (i = 0; i < 5; i++)
            func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, a, data_ov001_0222a320[i].b);
        return;
    }
    a = data_ov001_0222a320[0].a;
    for (i = 0; i < 5; i++)
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, a, data_ov001_0222a320[i].b);
    func_ov001_02226ffc(r, (void *)func_ov001_0221f3ac);
}

void func_ov001_0221f3ac(s32 r)
{
    s32 a, b, i;
    func_ov001_0222449c(data_ov001_0222defc->unk_00[1], 0, &a, &b);
    a += 8;
    if (a < data_ov001_0222a320[1].a || a > 0x100) {
        for (i = 1; i < 5; i++)
            func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, a, data_ov001_0222a320[i].b);
        return;
    }
    a = data_ov001_0222a320[1].a;
    for (i = 1; i < 5; i++)
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, a, data_ov001_0222a320[i].b);
    func_ov001_02226ffc(r, (void *)func_ov001_0221f2c0);
}

void func_ov001_0221f2c0(s32 r)
{
    s32 a, b, i;
    func_ov001_0222449c(data_ov001_0222defc->unk_00[2], 0, &a, &b);
    a += 8;
    if (a < data_ov001_0222a320[2].a || a > 0x100) {
        for (i = 2; i < 5; i++)
            func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, a, data_ov001_0222a320[i].b);
        return;
    }
    a = data_ov001_0222a320[2].a;
    for (i = 2; i < 5; i++)
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, a, data_ov001_0222a320[i].b);
    func_ov001_02226ffc(r, (void *)func_ov001_0221f1d4);
}

void func_ov001_0221f1d4(s32 r)
{
    s32 a, b, i;
    func_ov001_0222449c(data_ov001_0222defc->unk_00[3], 0, &a, &b);
    a += 8;
    if (a < data_ov001_0222a320[3].a || a > 0x100) {
        for (i = 3; i < 5; i++)
            func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, a, data_ov001_0222a320[i].b);
        return;
    }
    a = data_ov001_0222a320[3].a;
    for (i = 3; i < 5; i++)
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, a, data_ov001_0222a320[i].b);
    func_ov001_02226ffc(r, (void *)func_ov001_0221f11c);
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

void func_ov001_0221f0e8(s32 r)
{
    func_ov001_02226fdc(0, r);
    data_ov001_0222defc->unk_14 = 0;
}

void func_ov001_0221f09c()
{
    data_ov001_0222defc->unk_18 = 1;
    data_ov001_0222defc->unk_14 = (void *)func_ov001_02227094(0, (void *)func_ov001_0221eee4, 0, 0x78);
}

void func_ov001_0221efb0(s32 n)
{
    s32 i;
    const u8 *p9 = data_ov001_0222a300 + n * 5;
    const u8 *p8 = data_ov001_0222a310 + n * 5;
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

s32 func_ov001_0221ef90()
{
    if (data_ov001_0222defc->unk_14 != 0) return TRUE;
    return FALSE;
}

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

void func_ov001_0221ee04(s32 a)
{
    s32 xy[2];
    s32 i;
    func_ov001_0222449c(data_ov001_0222defc->unk_00[3], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    if (xy[0] > data_ov001_0222a320[2].a) {
        for (i = 3; i < 5; i++) {
            func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, xy[0], data_ov001_0222a320[i].b);
        }
        return;
    }
    xy[0] = data_ov001_0222a320[2].a;
    for (i = 3; i < 5; i++) {
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, xy[0], data_ov001_0222a320[i].b);
    }
    func_ov001_02226ffc(a, (void *)func_ov001_0221ed24);
}

void func_ov001_0221ed24(s32 a)
{
    s32 xy[2];
    s32 i;
    func_ov001_0222449c(data_ov001_0222defc->unk_00[2], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    if (xy[0] > data_ov001_0222a320[1].a) {
        for (i = 2; i < 5; i++) {
            func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, xy[0], data_ov001_0222a320[i].b);
        }
        return;
    }
    xy[0] = data_ov001_0222a320[1].a;
    for (i = 2; i < 5; i++) {
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, xy[0], data_ov001_0222a320[i].b);
    }
    func_ov001_02226ffc(a, (void *)func_ov001_0221ec44);
}

void func_ov001_0221ec44(s32 a)
{
    s32 xy[2];
    s32 i;
    func_ov001_0222449c(data_ov001_0222defc->unk_00[1], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    if (xy[0] > data_ov001_0222a320[0].a) {
        for (i = 1; i < 5; i++) {
            func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, xy[0], data_ov001_0222a320[i].b);
        }
        return;
    }
    xy[0] = data_ov001_0222a320[0].a;
    for (i = 1; i < 5; i++) {
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, xy[0], data_ov001_0222a320[i].b);
    }
    func_ov001_02226ffc(a, (void *)func_ov001_0221eb64);
}

void func_ov001_0221eb64(s32 a)
{
    s32 xy[2];
    s32 i;
    func_ov001_0222449c(data_ov001_0222defc->unk_00[0], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    for (i = 0; i < 5; i++) {
        func_ov001_02224558(data_ov001_0222defc->unk_00[i], -1, xy[0], data_ov001_0222a320[i].b);
    }
    if (xy[0] > 0x1d6) return;
    if (xy[0] < 0x100) return;
    func_ov001_02226fdc(0, a);
    for (i = 0; i < 5; i++) {
        func_ov001_022247e0(data_ov001_0222defc->unk_00[i]);
    }
    func_ov001_02225d58(&data_ov001_0222defc);
}

BOOL func_ov001_0221eb38()
{
    Unk_ov001_0222defc *g = data_ov001_0222defc;
    if (g == 0) return TRUE;
    return g->unk_18 == 0 ? TRUE : FALSE;
}

// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u8 data_ov001_0222a310[16];
extern "C" const u8 data_ov001_0222a300[16];
extern "C" const Unk_ov001_0222a320 data_ov001_0222a320[5];

extern "C" const u8 data_ov001_0222a310[16] = {2, 1, 3, 1, 3, 5, 1, 4, 1, 5, 7, 1, 7, 1, 6, 0};

extern "C" const u8 data_ov001_0222a300[16] = {1, 0, 5, 0, 6, 4, 0, 2, 0, 6, 4, 0, 5, 0, 3, 0};

extern "C" const Unk_ov001_0222a320 data_ov001_0222a320[5] = {{0x20, 0x21}, {0x50, 0x30}, {0x68, 0x21}, {0x98, 0x30}, {0xb0, 0x21}};

extern "C" Unk_ov001_0222defc *data_ov001_0222defc = 0;
