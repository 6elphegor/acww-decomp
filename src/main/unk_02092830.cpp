#include "types.h"

struct Unk_02092e98_Vec { s32 x, y, z; };
extern Unk_02092e98_Vec data_021d0830;
struct Unk_02092da4_Y { s32 unk_00; s32 unk_04; s32 unk_08; s32 unk_0c; };
struct Unk_02092da4_X { Unk_02092da4_Y *unk_00; };
struct Unk_02092da4_B {
    u8 pad_00[0xc];
    s32 unk_0c;
    u8 pad_10[8];
    Unk_02092da4_X *unk_18;
    u32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[0x10];
    u16 unk_3c;
    u16 unk_3e;
    u16 unk_40;
    u8 pad_42[0xe];
    u32 unk_50;
    u32 unk_54;
};
struct Unk_02092da4_Rec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0c[2];
    s16 unk_0e;
    u8 pad_10[4];
    s32 unk_14;
    u8 pad_18[4];
};
struct Unk_02092830 {
    u32 unk_00;
    u8 unk_04[4];
    u32 unk_08;
    Unk_02092da4_B *unk_0c;
};
struct Unk_02092da4_Bytes { u8 b[4]; };

extern u32 data_020e14dc[], data_020e14e4[], data_020e154c[], data_020e15ac[], data_020e153c[], data_020e1534[];
extern u32 data_020e15f4[], data_020e1494[], data_020e1524[], data_020e14bc[], data_020e1574[], data_020e147c[];
extern u32 data_020e1620[], data_020e151c[], data_020e1614[], data_020e15b4[], data_020e15a4[], data_020e157c[];
extern u32 data_020e16d4[], data_020e1584[], data_020e16a4[], data_020e1504[], data_020e15dc[], data_020e14fc[];
extern u32 data_020e15ec[];
extern Unk_02092da4_Rec data_021d04b0[];

extern "C" {
s32 func_02093bb4(s32, s32, s32, s32, s32, void *);
s32 func_02093c94(void *, s32, s32);
s32 func_02093c1c(void *);
s32 func_02093e60(void *, s32);
s32 func_020932bc(void *, s32);
s32 func_02093f50(void *);
s32 func_02093d54(s32, s32, s32, s32, s32, void *);
s32 func_020904f0(void *, s32, s32, s32, s32, s32, s32);
s32 func_0208fb20(s32, s32, s32, void *);
s32 func_02090538(void *);
s32 func_02093914(void *, s32, void *, s32, s32, s32, s32, s32, s32);
s32 func_02093aa8(void *, s32, void *, s32, s32, s32, s32, s32, s32);
s32 func_020931e8(s32, s32, s32, s32, void *, void *, void *);
void func_020339bc(void *, void *, s32, s32);
void func_02033988(void *);
s32 func_020e94f8(void *);
void func_0208fe0c(void *);
void func_02116048(void *, void *, u32);
}

#define H4(name, id, tbl) \
extern "C" s32 name(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x73, a, b, c, d, tbl); }
#define CHK(name, id, tbl, tbl2, kind) \
extern "C" s32 name(s32 a, s32 b, s32 c, s32 d) { \
    u8 *s = (u8 *)data_021d04b0; \
    s32 r = 3; \
    s32 t = func_02093d54(id, a, b, c, d, tbl); \
    if (t < 3) { \
        func_020904f0(&data_021d0830, *(u16 *)(s + 0x39c), a, b, c, d, -1); \
        if (func_0208fb20(kind, b, c, tbl2) != 0) r = 2; \
    } \
    func_02090538(&data_021d0830); \
    return r; \
}

extern "C" s32 func_02092830(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x73, a, b, c, d, 0); }
H4(func_02092854, 0, data_020e14dc)
#define SETA(name, val) extern "C" void name(Unk_02092830 *p) { func_02093c94(p, 0, 0); p->unk_0c->unk_54 = val; }
#define SETB(name, val) extern "C" void name(Unk_02092830 *p) { func_02093c1c(p); p->unk_0c->unk_50 = val; }
#define SETB54(name, val) extern "C" void name(Unk_02092830 *p) { func_02093c1c(p); p->unk_0c->unk_54 = val; }
#define TAILE(name, fn, val) extern "C" s32 name(void *p) { return fn(p, val); }

SETA(func_0209287c, 0xccd)
H4(func_02092898, 0, data_020e14e4)
SETA(func_020928c0, 0xb33)
H4(func_020928dc, 0, data_020e154c)
SETA(func_02092904, 0x99a)
H4(func_02092920, 0, data_020e15ac)
SETA(func_02092948, 0x800)
H4(func_02092964, 0, data_020e153c)
SETA(func_0209298c, 0x666)
H4(func_020929a8, 0, data_020e1534)
SETA(func_020929d0, 0x4cd)

extern "C" s32 func_02092a14(void *p);
extern "C" s32 func_020929ec(s32 a, s32 b, s32 c, s32 d) {
    return func_020931e8(a, b, c, d, data_020e15f4, data_020e1494, (void *)func_02092a14);
}
extern "C" s32 func_02092a14(void *p) { return func_020932bc(p, 0x14cd); }
extern "C" s32 func_02092a24(void *p) { return func_02093e60(p, 0x1ccd); }
SETB(func_02092a34, 0xc00)
extern "C" s32 func_02092a74(void *p);
extern "C" s32 func_02092a4c(s32 a, s32 b, s32 c, s32 d) {
    return func_020931e8(a, b, c, d, data_020e1524, data_020e14bc, (void *)func_02092a74);
}
extern "C" s32 func_02092a74(void *p) { return func_020932bc(p, 0x119a); }
extern "C" s32 func_02092a84(void *p) { return func_02093e60(p, 0x14cd); }
SETB(func_02092a94, 0x99a)
extern "C" s32 func_02092ad4(void *p);
extern "C" s32 func_02092aac(s32 a, s32 b, s32 c, s32 d) {
    return func_020931e8(a, b, c, d, data_020e1574, data_020e147c, (void *)func_02092ad4);
}
extern "C" s32 func_02092ad4(void *p) { return func_020932bc(p, 0xccd); }
extern "C" s32 func_02092ae4(void *p) { return func_02093e60(p, 0x119a); }
SETB(func_02092af4, 0x800)
CHK(func_02092b0c, 0x49, data_020e1620, data_020e151c, 0x75)
extern "C" s32 func_02092b84(void *p) { return func_02093e60(p, 0x199a); }
extern "C" s32 func_02092b94(void *p) { return func_02093e60(p, 0x2000); }
CHK(func_02092ba4, 0x48, data_020e1614, data_020e15b4, 0x75)
SETB54(func_02092c1c, 0x1333)
extern "C" s32 func_02092c34(void *p) { return func_02093e60(p, 0x1333); }
extern "C" s32 func_02092c44(void *p) { return func_02093e60(p, 0x1800); }
CHK(func_02092c54, 0x47, data_020e15a4, data_020e157c, 0x75)
extern "C" s32 func_02092ccc(void *p) { return func_02093914(p, 0x5f, data_020e16d4, -1, 0, -1, 0, -1, 0); }
extern "C" s32 func_02092cf0(void *p) { return func_02093f50(p); }
extern "C" s32 func_02092cf8(void *p) { return func_02093e60(p, 0x1ccd); }
CHK(func_02092d08, 0x46, 0, data_020e1584, 0x5e)
extern "C" s32 func_02092d7c(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x3c, a, b, c, d, data_020e16a4); }
CHK(func_02093020, 0x3b, 0, data_020e15dc, 0x5e)
extern "C" s32 func_02093094(s32 a, s32 b, s32 c, s32 d) { return func_02093d54(0x3a, a, b, c, d, 0); }
CHK(func_020930b8, 0x38, 0, data_020e14fc, 0x5e)
CHK(func_0209312c, 0x37, 0, data_020e15ec, 0x5e)
extern "C" s32 func_02092e70(s32 a, s32 b, s32 c, s32 d) { return func_02093bb4(0x39, a, b, c, d, data_020e1504); }

struct Unk_02092e98_Bytes { u8 b[4]; };
struct Unk_02092e98_Obj {
    u8 pad_00[0x24];
    Unk_02092e98_Vec unk_24;
    s32 unk_30;
    u8 pad_34[0xc];
};
extern "C" s32 func_02092da4(Unk_02092830 *p) {
    Unk_02092e98_Bytes id;
    s32 s;
    Unk_02092da4_Rec *r;
    id = *(Unk_02092e98_Bytes *)p->unk_04;
    r = data_021d04b0 + id.b[0];
    s = 0;
    s32 m1 = -1;
    if (r->unk_14 != m1 && r->unk_0e != 0) {
        Unk_02092da4_B *b = p->unk_0c;
        b->unk_20 = r->unk_00 + b->unk_18->unk_00->unk_04;
        b->unk_24 = r->unk_04 + b->unk_18->unk_00->unk_08;
        b->unk_28 = r->unk_08 + b->unk_18->unk_00->unk_0c;
        func_02093aa8(p->unk_0c, 0x5f, data_020e16d4, m1, 0, m1, 0, m1, 0);
        if (r->unk_0e > 0) r->unk_0e--;
        s = 1;
    }
    if (s == 0) {
        p->unk_0c->unk_1c |= 2;
        Unk_02092da4_B *b = p->unk_0c;
        if (b->unk_0c > 0) s = func_02093aa8(b, 0x5f, data_020e16d4, -1, 0, -1, 0, -1, 0);
    }
    if (s == 0) func_02090538(r);
    return s;
}

extern "C" s32 func_02092e98(Unk_02092830 *p) {
    Unk_02092e98_Bytes id;
    Unk_02092e98_Obj o;
    Unk_02092e98_Vec v;
    Unk_02092e98_Vec pos;
    s32 s;
    Unk_02092da4_Rec *r;
    id = *(Unk_02092e98_Bytes *)p->unk_04;
    r = data_021d04b0 + id.b[0];
    s = 0;
    s32 m1 = -1;
    if (r->unk_14 != m1 && r->unk_0e != 0) {
        Unk_02092da4_B *b = p->unk_0c;
        b->unk_20 = r->unk_00 + b->unk_18->unk_00->unk_04;
        b->unk_24 = r->unk_04 + b->unk_18->unk_00->unk_08;
        b->unk_28 = r->unk_08 + b->unk_18->unk_00->unk_0c;
        pos.x = r->unk_00;
        pos.y = r->unk_04;
        pos.z = r->unk_08;
        func_020339bc(&o, &pos, 0, 0);
        if (o.unk_30 != 0) {
            Unk_02092e98_Vec *pv = &o.unk_24;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (func_020e94f8(&v) != 0) {
                s32 vy = v.y;
                s32 vz = v.z;
                Unk_02092da4_B *b2 = p->unk_0c;
                b2->unk_3c = v.x;
                b2->unk_3e = vy;
                b2->unk_40 = vz;
            }
        }
        if (r->unk_0e > 0) r->unk_0e--;
        s = 1;
        func_02033988(&o);
    }
    if (s == 0) func_02090538(r);
    return s;
}

extern "C" s32 func_02092f68(Unk_02092830 *p) {
    Unk_02092e98_Bytes id;
    Unk_02092e98_Obj o;
    Unk_02092e98_Vec v;
    Unk_02092e98_Vec pos;
    Unk_02092da4_B *b;
    Unk_02092e98_Vec *const g = &data_021d0830;
    id = *(Unk_02092e98_Bytes *)p->unk_04;
    b = p->unk_0c;
    b->unk_20 = g->x + b->unk_18->unk_00->unk_04;
    b->unk_24 = g->y + b->unk_18->unk_00->unk_08;
    b->unk_28 = g->z + b->unk_18->unk_00->unk_0c;
    func_0208fe0c(p->unk_0c);
    pos.x = g->x;
    pos.y = g->y;
    pos.z = g->z;
    func_020339bc(&o, &pos, 0, 0);
    if (o.unk_30 != 0) {
        Unk_02092e98_Vec *pv = &o.unk_24;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        if (func_020e94f8(&v) != 0) {
            s32 vy = v.y;
            s32 vz = v.z;
            Unk_02092da4_B *b2 = p->unk_0c;
            b2->unk_3c = v.x;
            b2->unk_3e = vy;
            b2->unk_40 = vz;
        }
    }
    func_02116048(g, data_021d04b0 + id.b[0], 0x1c);
    func_02033988(&o);
}
