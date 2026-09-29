// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb on
extern "C" {
s32 func_020fefb0(void *);
}
#pragma thumb off

extern "C" {
extern u8 *data_ov001_0222def0;
extern u8 *data_ov001_0222def4;
extern u8 *data_ov001_0222def8;
extern u32 *data_ov001_0222defc;
extern u8 data_ov001_0222b444[];
extern u8 data_ov001_0222b454[];
extern u32 data_ov001_0222b4d0[];
struct Unk_ov001_0221eb64_Ent { u16 a; u16 b; };
extern Unk_ov001_0221eb64_Ent data_ov001_0222a320[];

s32 func_021130d0(s32, void *, u32, u32, u32, u32);
s32 func_02116048(void *, void *, u32);
s32 func_02115fb4(void *, u32, u32);
s32 func_ov001_0221dd08(s32, void *);
s32 func_ov001_02226c24(void *, u32);
s32 func_ov001_0221dcec(u32);
s32 func_ov001_02225d58(void *);
void *func_ov001_02225dd8(u32, u32);
s32 func_02127614(void *, u32);
s32 func_021095f8();
s32 func_0210a378(void *, u32);
s32 func_0210a118(void *, s32, s32);
s32 func_0210a26c(void *, s32);
s32 func_0210cf78(void *, u32, s32);
s32 func_ov001_02226fdc(s32, s32);
s32 func_ov001_02224074(void *, void *, u32);
s32 func_0210962c();
s32 func_0210b918(void *, s32);
s32 func_0210d064(s32);
s32 func_0210a294(void *);
s32 func_ov001_02227094(s32, void *, s32, s32);
s32 func_021145cc(void *, u32);
s32 func_02111ad4(void *, u32, u32);
s32 func_ov001_02224038(void *);
void *func_ov001_022085e0(u32);
s32 func_ov001_0222449c(s32, s32, s32 *, s32 *);
s32 func_ov001_02224558(s32, s32, s32, u32);
s32 func_ov001_022247e0(s32);
s32 func_ov001_02226ffc(s32, void *);

void func_ov001_0221e930();
void func_ov001_0221ea94(s32);


void func_ov001_0221e584(s32 a)
{
    u8 *g = data_ov001_0222def0;
    u8 *p = g + 0x4c0;
    func_021130d0(a, data_ov001_0222b444, p[0], p[1], p[2], p[3]);
}

void func_ov001_0221e5cc(void *src)
{
    func_02116048(data_ov001_0222def0 + 0x440, src, 0x20);
}

void func_ov001_0221e5f0(s32 a) { func_ov001_0221dd08(a, data_ov001_0222def0 + 0x4cc); }
void func_ov001_0221e614(s32 a) { func_ov001_0221dd08(a, data_ov001_0222def0 + 0x4c8); }
void func_ov001_0221e638(s32 a) { func_ov001_0221dd08(a, data_ov001_0222def0 + 0x4c4); }
void func_ov001_0221e65c(s32 a) { func_ov001_0221dd08(a, data_ov001_0222def0 + 0x4f0); }
void func_ov001_0221e678(s32 a) { func_ov001_0221dd08(a, data_ov001_0222def0 + 0x4c0); }

void func_ov001_0221e694(u8 *s)
{
    s32 i;
    s32 n;
    u8 *d;
    func_02115fb4(data_ov001_0222def0 + 0x480, 0, 0x10);
    n = func_ov001_02226c24(s, 0x20);
    switch (n) {
    case 0:
    case 10:
    case 0x1a:
    case 0x20:
        data_ov001_0222def0[0x4e6] = data_ov001_0222def0[0x4e6] & ~0xfc;
        d = data_ov001_0222def0 + 0x480;
        for (i = 0; i < n; i += 2, d++) {
            s32 hi = func_ov001_0221dcec(s[i]);
            *d = func_ov001_0221dcec(s[i + 1]) + (hi << 4);
        }
        break;
    default: {
        u8 *g = data_ov001_0222def0;
        g[0x4e6] = (g[0x4e6] & ~0xfc) | 4;
        func_02116048(s, data_ov001_0222def0 + 0x480, 0x10);
        break;
    }
    }
    switch (n) {
    case 0: {
        u8 *g = data_ov001_0222def0;
        g[0x4e6] = g[0x4e6] & ~3;
        return;
    }
    case 5:
    case 10: {
        u8 *g = data_ov001_0222def0;
        g[0x4e6] = (g[0x4e6] & ~3) | 1;
        return;
    }
    case 0xd:
    case 0x1a: {
        u8 *g = data_ov001_0222def0;
        g[0x4e6] = (g[0x4e6] & ~3) | 2;
        return;
    }
    default: {
        u8 *g = data_ov001_0222def0;
        g[0x4e6] = (g[0x4e6] & ~3) | 3;
        return;
    }
    }
}

void func_ov001_0221e850(void *a)
{
    func_02116048(a, data_ov001_0222def0 + 0x440, 0x20);
    data_ov001_0222def0[0x4e7] = 0;
}

void func_ov001_0221e88c(u32 v) { data_ov001_0222def0[0x4f6] = v; }
void func_ov001_0221e8a0(u32 v) { data_ov001_0222def0[0x4f5] = v; }
u8 *func_ov001_0221e8b4() { return data_ov001_0222def0 + 0x400; }
void func_ov001_0221e8c8() { func_ov001_02225d58(&data_ov001_0222def0); }

void func_ov001_0221e8dc()
{
    u8 *g = (u8 *)func_ov001_02225dd8(0x6f8, 0x20);
    data_ov001_0222def0 = g;
    func_02127614(g + 0x4f8, 0xa001);
    func_020fefb0(data_ov001_0222def0);
}

void func_ov001_0221e930() { func_021095f8(); }

void func_ov001_0221e93c() { func_0210a378(data_ov001_0222def4 + 0x90, 0); }
void func_ov001_0221e95c(s32 a, s32 b) { func_0210a118(data_ov001_0222def4 + 0x90, a, b); }
void func_ov001_0221e980(s32 a) { func_0210a26c(data_ov001_0222def4 + 0x90, a); }
void func_ov001_0221e9a0(s32 a) { func_0210cf78(data_ov001_0222def4 + 0x90, 0, a); }

void func_ov001_0221e9c4()
{
    func_ov001_02226fdc(0, *(s32 *)(data_ov001_0222def4 + 0x98));
    func_ov001_02225d58(&data_ov001_0222def4);
}

void func_ov001_0221e9f8()
{
    s32 t;
    data_ov001_0222def4 = (u8 *)func_ov001_02225dd8(0x9c, 4);
    *(s32 *)(data_ov001_0222def4 + 0x94) = func_ov001_02224074(data_ov001_0222b454, &t, 0x20);
    func_0210962c();
    func_0210b918(data_ov001_0222def4, *(s32 *)(data_ov001_0222def4 + 0x94));
    func_0210d064(0);
    func_0210a294(data_ov001_0222def4 + 0x90);
    *(s32 *)(data_ov001_0222def4 + 0x98) = func_ov001_02227094(0, (void *)func_ov001_0221e930, 0, 0xc8);
}

void func_ov001_0221ea94(s32 a)
{
    func_021145cc(data_ov001_0222def8, 0x600);
    func_02111ad4(data_ov001_0222def8, 0, 0x600);
    func_ov001_02224038(data_ov001_0222def8);
    func_ov001_02226fdc(1, a);
}

void func_ov001_0221eae4(u32 i)
{
    void *p = func_ov001_022085e0(data_ov001_0222b4d0[i]);
    data_ov001_0222def8 = (u8 *)func_ov001_02224074(p, 0, 4);
    func_ov001_02227094(1, (void *)func_ov001_0221ea94, 0, 0x78);
}

BOOL func_ov001_0221eb38()
{
    u32 *g = data_ov001_0222defc;
    if (g == 0) return TRUE;
    return ((u8 *)g)[0x18] == 0 ? TRUE : FALSE;
}

void func_ov001_0221eb64(s32 a)
{
    s32 xy[2];
    s32 i;
    func_ov001_0222449c(data_ov001_0222defc[0], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    for (i = 0; i < 5; i++) {
        func_ov001_02224558(data_ov001_0222defc[i], -1, xy[0], data_ov001_0222a320[i].b);
    }
    if (xy[0] > 0x1d6) return;
    if (xy[0] < 0x100) return;
    func_ov001_02226fdc(0, a);
    for (i = 0; i < 5; i++) {
        func_ov001_022247e0(data_ov001_0222defc[i]);
    }
    func_ov001_02225d58(&data_ov001_0222defc);
}

void func_ov001_0221ec44(s32 a)
{
    s32 xy[2];
    s32 i;
    func_ov001_0222449c(data_ov001_0222defc[1], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    if (xy[0] > data_ov001_0222a320[0].a) {
        for (i = 1; i < 5; i++) {
            func_ov001_02224558(data_ov001_0222defc[i], -1, xy[0], data_ov001_0222a320[i].b);
        }
        return;
    }
    xy[0] = data_ov001_0222a320[0].a;
    for (i = 1; i < 5; i++) {
        func_ov001_02224558(data_ov001_0222defc[i], -1, xy[0], data_ov001_0222a320[i].b);
    }
    func_ov001_02226ffc(a, (void *)func_ov001_0221eb64);
}

void func_ov001_0221ed24(s32 a)
{
    s32 xy[2];
    s32 i;
    func_ov001_0222449c(data_ov001_0222defc[2], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    if (xy[0] > data_ov001_0222a320[1].a) {
        for (i = 2; i < 5; i++) {
            func_ov001_02224558(data_ov001_0222defc[i], -1, xy[0], data_ov001_0222a320[i].b);
        }
        return;
    }
    xy[0] = data_ov001_0222a320[1].a;
    for (i = 2; i < 5; i++) {
        func_ov001_02224558(data_ov001_0222defc[i], -1, xy[0], data_ov001_0222a320[i].b);
    }
    func_ov001_02226ffc(a, (void *)func_ov001_0221ec44);
}

void func_ov001_0221ee04(s32 a)
{
    s32 xy[2];
    s32 i;
    func_ov001_0222449c(data_ov001_0222defc[3], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    if (xy[0] > data_ov001_0222a320[2].a) {
        for (i = 3; i < 5; i++) {
            func_ov001_02224558(data_ov001_0222defc[i], -1, xy[0], data_ov001_0222a320[i].b);
        }
        return;
    }
    xy[0] = data_ov001_0222a320[2].a;
    for (i = 3; i < 5; i++) {
        func_ov001_02224558(data_ov001_0222defc[i], -1, xy[0], data_ov001_0222a320[i].b);
    }
    func_ov001_02226ffc(a, (void *)func_ov001_0221ed24);
}

}
