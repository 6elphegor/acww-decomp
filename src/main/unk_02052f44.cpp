#include "types.h"

extern "C" {
extern u8 data_021c5330[];
extern u32 data_0213bfec;
extern volatile u32 data_021c5384;
struct Unk_020536dc_Obj;
extern Unk_020536dc_Obj *data_021c5388;
extern u8 data_020dbd14[];
extern u8 data_020dbce4[];
extern u8 data_020dbcfc[];

void *func_0206d794(void *);
void *func_0206d798(void *);
void *func_0206d79c(void *);
void *func_0206d86c(void *, s32);
s32 func_0204b2d4(s32);
s32 func_0204b25c(s32);
void func_0206d7a0(void *);
void func_0206d7b4(void *, s32);
void func_0206d7cc(void *);
void func_0206d7ec(void *, void *, s32, void *, s32, void *, s32, s32);
void func_0206d964(void *);
void func_0206d974(void *);
void func_02115ca0(u32, void *, u32, u32);
void func_02115ea8(u32, void *, u32);
void func_0205369c();
void func_0210f554();
void func_0210f614();
void func_0210f600();
void func_0210f568();
void func_0210f5a4();
void func_0210f590();
void func_0210f57c();
void func_0210f5dc();
void func_0210f5b8();
void func_0210f540();
void func_0210f52c();
void func_0210f504();
void func_0210f4dc();
void func_020889cc();
void func_020889f4();
void func_02041220();
void func_020027c4();
void func_02001d04();
void func_0200187c();
void func_02041290();
void func_02088960();
void func_02002870();
void func_02001db8();
void func_02001dbc();
void func_02002918();
void func_020e82b8();
void func_0204142c();
void func_0210f9ac(s32);
void func_02002898();
void func_02001e7c();
void func_020b83e0();
void func_020b8494();
void func_02054154(void *, u32);
void func_02054124(void *, u32);
void func_02053c40(void *, u32);
s32 func_02053018(s32);
s32 func_0205306c(s32);
s32 func_02053110(s32);
s32 func_020531f4(s32);
s32 func_02053248(s32);
s32 func_0205329c(s32);
s32 func_020532f0(s32);
s32 func_02053194(s32);
}

struct Unk_020536dc_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

struct Unk_02053598_Rec {
    u8 b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;
};

#define CLAMP(n) if (n >= 0x6e9) n = 0x6e8;

extern "C" {

s32 func_02052f44(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d798(data_021c5330), n);
    if (r) {
        return (r[1] >> 2) & 1 ? TRUE : FALSE;
    }
    return 0;
}

s32 func_02052f84(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d798(data_021c5330), n);
    if (r) {
        return r[1] & 1 ? TRUE : FALSE;
    }
    return 0;
}

s32 func_02052fc4(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d794(data_021c5330), n);
    if (r) {
        return r[4];
    }
    return 0;
}

s32 func_02052ff8(s32 n)
{
    if (func_0204b2d4(n)) {
        return func_02053018(func_0204b25c(n));
    }
    return 0;
}

s32 func_02053018(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), n);
    if (r) {
        return r[6];
    }
    return 0;
}

s32 func_0205304c(s32 n)
{
    if (func_0204b2d4(n)) {
        return func_0205306c(func_0204b25c(n));
    }
    return 0;
}

s32 func_0205306c(s32 n)
{
    s32 t;
    BOOL a;
    if (n >= 0x6e9) t = 0x6e8; else t = n;
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), t);
    if (r) {
        a = (r[7] >> 2) & 1 ? TRUE : FALSE;
    } else {
        a = FALSE;
    }
    CLAMP(n)
    u8 *q = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), n);
    if (a) {
        return 1;
    }
    BOOL b;
    if (q) {
        b = (q[7] >> 3) & 1 ? TRUE : FALSE;
    } else {
        b = FALSE;
    }
    if (b) {
        return 2;
    }
    return 0;
}

s32 func_020530f0(s32 n)
{
    if (func_0204b2d4(n)) {
        return func_02053110(func_0204b25c(n));
    }
    return 0;
}

s32 func_02053110(s32 n)
{
    s32 t;
    BOOL a;
    if (n >= 0x6e9) t = 0x6e8; else t = n;
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), t);
    if (r) {
        a = r[7] & 1 ? TRUE : FALSE;
    } else {
        a = FALSE;
    }
    CLAMP(n)
    u8 *q = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), n);
    if (a) {
        return 1;
    }
    BOOL b;
    if (q) {
        b = (q[7] >> 1) & 1 ? TRUE : FALSE;
    } else {
        b = FALSE;
    }
    if (b) {
        return 2;
    }
    return 0;
}

s32 func_02053194(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), n);
    if (r) {
        return (r[7] >> 4) & 1 ? TRUE : FALSE;
    }
    return 0;
}

s32 func_020531d4(s32 n)
{
    if (func_0204b2d4(n)) {
        return func_020531f4(func_0204b25c(n));
    }
    return 0;
}

s32 func_020531f4(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), n);
    if (r) {
        return r[3];
    }
    return 0;
}

s32 func_02053228(s32 n)
{
    if (func_0204b2d4(n)) {
        return func_02053248(func_0204b25c(n));
    }
    return 0;
}

s32 func_02053248(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), n);
    if (r) {
        return r[5];
    }
    return 0;
}

s32 func_0205327c(s32 n)
{
    if (func_0204b2d4(n)) {
        return func_0205329c(func_0204b25c(n));
    }
    return 0;
}

s32 func_0205329c(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), n);
    if (r) {
        return r[4];
    }
    return 0;
}

s32 func_020532d0(s32 n)
{
    if (func_0204b2d4(n)) {
        return func_020532f0(func_0204b25c(n));
    }
    return 0;
}

s32 func_020532f0(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), n);
    if (r) {
        return r[0];
    }
    return 0;
}

s32 func_02053324(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), n);
    if (r) {
        return r[2];
    }
    return 0;
}

s32 func_02053358(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c5330), n);
    if (r) {
        return r[1];
    }
    return 0;
}

s32 func_0205338c(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d794(data_021c5330), n);
    s32 v;
    if (r) {
        v = r[8];
    } else {
        v = 0;
    }
    s32 m = -1;
    if (v == 0xff) {
        v = m;
    }
    return v;
}

s32 func_020533c8(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d794(data_021c5330), n);
    if (r) {
        return r[7];
    }
    return 0;
}

s32 func_020533fc(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d794(data_021c5330), n);
    if (r) {
        return r[10];
    }
    return 0;
}

s32 func_02053430(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d794(data_021c5330), n);
    if (r) {
        return r[9];
    }
    return 0;
}

s32 func_02053464()
{
    return -1;
}

s32 func_0205346c(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d794(data_021c5330), n);
    s32 v;
    if (r) {
        v = r[3];
    } else {
        v = 0;
    }
    return (v << 12) >> 4;
}

s32 func_020534a4(s32 n)
{
    CLAMP(n)
    u8 *r = (u8 *)func_0206d86c(func_0206d794(data_021c5330), n);
    if (r) {
        return r[2];
    }
    return 0;
}

s32 func_020534d8(s32 n)
{
    CLAMP(n)
    u16 *r = (u16 *)func_0206d86c(func_0206d794(data_021c5330), n);
    if (r) {
        return r[0];
    }
    return 0;
}

void func_0205354c(void *p);
void func_02053554(void *p, s32 a);
void func_0205355c(void *p);
void func_02053564(void *p);

void func_0205350c()
{
    func_0205354c(data_021c5330);
}

void func_0205351c(s32 a)
{
    func_02053554(data_021c5330, a);
}

void func_0205352c()
{
    func_0205355c(data_021c5330);
}

void func_0205353c()
{
    func_02053564(data_021c5330);
}

void func_0205354c(void *p)
{
    func_0206d7a0(p);
}

void func_02053554(void *p, s32 a)
{
    func_0206d7b4(p, a);
}

void func_0205355c(void *p)
{
    func_0206d7cc(p);
}

void func_02053564(void *p)
{
    func_0206d7ec(p, data_020dbce4, 8, data_020dbcfc, 4, data_020dbd14, 0x1c, 0x800);
}

void *func_02053598(u8 *p)
{
    func_0206d7cc(p);
    func_0206d964(p + 0x38);
    func_0206d964(p + 0x1c);
    func_0206d964(p);
    return p;
}

void *func_020535c0(u8 *p)
{
    func_0206d974(p);
    func_0206d974(p + 0x1c);
    func_0206d974(p + 0x38);
    return p;
}

void func_020535e0()
{
    volatile u16 *r = (volatile u16 *)0x4000000;
    u8 *b = (u8 *)r;
    *(volatile u16 *)(b + 0x304) |= 0x820e;
    func_0205369c();
    *(volatile u32 *)b = *(volatile u32 *)b & 0xf000f;
    func_02115ca0(data_0213bfec, b + 8, 0, 0x48);
    func_02115ca0(data_0213bfec, b + 0x60, 0, 8);
    *(volatile u16 *)(b + 0x6c) = 0;
    *(volatile u32 *)(b + 0x1000) = *(volatile u32 *)(b + 0x1000) & 0x10000;
    func_02115ca0(data_0213bfec, b + 0x1008, 0, 0x48);
    *(volatile u16 *)(b + 0x106c) = 0;
    u16 v = 0x100;
    *(volatile u16 *)(b + 0x20) = v;
    *(volatile u16 *)(b + 0x26) = v;
    *(volatile u16 *)(b + 0x30) = v;
    *(volatile u16 *)(b + 0x36) = v;
    *(volatile u16 *)(b + 0x1020) = v;
    *(volatile u16 *)(b + 0x1026) = v;
    *(volatile u16 *)(b + 0x1030) = v;
    *(volatile u16 *)(b + 0x1036) = v;
}

void func_0205369c()
{
    func_0210f554();
    func_0210f614();
    func_0210f600();
    func_0210f568();
    func_0210f5a4();
    func_0210f590();
    func_0210f57c();
    func_0210f5dc();
    func_0210f5b8();
    func_0210f540();
    func_0210f52c();
    func_0210f504();
    func_0210f4dc();
}

void func_020536dc()
{
    u32 v = data_021c5384;
    u16 *p = (u16 *)0x4000304;
    *p = (*p & 0xffff7fff) | (v << 15);
    func_020889cc();
    func_020889f4();
    func_02041220();
    func_020027c4();
    func_02001d04();
    if (data_021c5388) {
        data_021c5388->vfunc_08();
    }
    func_0200187c();
}

void func_02053730()
{
    if (data_021c5388) {
        data_021c5388->vfunc_04();
    }
    func_02041290();
}

void func_02053750()
{
}

void func_02053754()
{
    func_02088960();
    if (data_021c5388) {
        data_021c5388->vfunc_00();
    }
    func_02002870();
    func_02001db8();
}

void func_0205377c()
{
}

void func_02053780()
{
    data_021c5388 = 0;
    data_021c5384 = 0;
    func_02001dbc();
    func_02002918();
}

void func_020537a4()
{
    volatile u32 b, a, c;
    func_020e82b8();
    func_02053780();
    func_0204142c();
    u16 *p = (u16 *)0x4000304;
    *p = (*p & 0xfffffdf1) | 0x20e;
    func_0210f9ac(0x1f7);
    a = 0;
    func_02115ea8(a, (void *)0x6800000, 0x84000);
    func_0210f554();
    b = 0xc0;
    func_02115ea8(b, (void *)0x7000000, 0x400);
    c = 0;
    func_02115ea8(c, (void *)0x5000000, 0x400);
    func_02002898();
    func_02001e7c();
    func_020b83e0();
    func_020b8494();
}

struct Unk_02053830_Obj {
    u8 pad[0x1ac];
    u32 f1ac;
    u32 f1b0;
};

void func_02053830(Unk_02053830_Obj *o)
{
    o->f1b0 = 0;
    o->f1ac = o->f1b0;
}

void func_02053848(void *a, u32 b, u32 c)
{
    for (; b <= c; b++) {
        func_02054154(a, b);
        func_02054124(a, b);
        func_02053c40(a, b);
    }
}

}
