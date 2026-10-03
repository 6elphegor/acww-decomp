#include "types.h"

extern "C" {
extern u32 data_0213bfec;
void MI_DmaFill32(u32, void *, u32, u32);
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
s32 func_0204b248(s32 a, s32 b);
s32 func_0204b25c(void *p);
s32 func_0204b2d4(void *p);
}

// cached record table (defined by another unit)
class Unk_0206d8b8 {
public:
    Unk_0206d8b8();
    ~Unk_0206d8b8();
    u8 *func_0206d86c(u32 idx);
    u8 unk_00[0x1c];
};

class Unk_0206d7cc {
public:
    Unk_0206d7cc();
    ~Unk_0206d7cc();
    Unk_0206d8b8 *func_0206d794();
    Unk_0206d8b8 *func_0206d798();
    Unk_0206d8b8 *func_0206d79c();
    BOOL func_0206d7a0();
    BOOL func_0206d7b4(s32 v);
    void func_0206d7cc();
    BOOL func_0206d7ec(void *a, s32 n0, void *b, s32 n1, void *c, s32 n2, s32 count);

    /* 0x00 */ Unk_0206d8b8 unk_00;
    /* 0x1c */ Unk_0206d8b8 unk_1c;
    /* 0x38 */ Unk_0206d8b8 unk_38;
};

extern Unk_0206d7cc data_021c5330;

struct Unk_02052c88_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07[4];
    u8 unk_0b;
};

#define CLAMP(n) if (n >= 0x6e9) n = 0x6e8;

extern "C" {
s32 func_02052f44(s32 n);
s32 func_02052f84(s32 n);
s32 func_02052fc4(s32 n);
s32 func_02052ff8(s32 n);
s32 func_02053018(s32 n);
s32 func_0205304c(s32 n);
s32 func_0205306c(s32 n);
s32 func_020530f0(s32 n);
s32 func_02053110(s32 n);
s32 func_02053194(s32 n);
s32 func_020531d4(s32 n);
s32 func_020531f4(s32 n);
s32 func_02053228(s32 n);
s32 func_02053248(s32 n);
s32 func_0205327c(s32 n);
s32 func_0205329c(s32 n);
s32 func_020532d0(s32 n);
s32 func_020532f0(s32 n);
void func_0205354c(void *p);
void func_02053554(void *p, s32 a);
void func_0205355c(void *p);
void func_02053564(void *p);
void func_0205369c();
u8 func_02052c88(s32 i);
BOOL func_02052d4c(s32 i);
BOOL func_02052dac(s32 i);
s32 func_02052c54(u16 *p);
s32 func_020534a4(s32 i);
}

static inline BOOL Unk_02052dac_Bit(s32 v, s32 n) {
    if ((v >> n) & 1) return TRUE;
    return FALSE;
}

static inline BOOL Unk_02052c54_Range(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x450c && *p <= 0x45db) r = TRUE;
    return r;
}

extern "C" {

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

void func_020535e0()
{
    volatile u16 *r = (volatile u16 *)0x4000000;
    u8 *b = (u8 *)r;
    *(volatile u16 *)(b + 0x304) |= 0x820e;
    func_0205369c();
    *(volatile u32 *)b = *(volatile u32 *)b & 0xf000f;
    MI_DmaFill32(data_0213bfec, b + 8, 0, 0x48);
    MI_DmaFill32(data_0213bfec, b + 0x60, 0, 8);
    *(volatile u16 *)(b + 0x6c) = 0;
    *(volatile u32 *)(b + 0x1000) = *(volatile u32 *)(b + 0x1000) & 0x10000;
    MI_DmaFill32(data_0213bfec, b + 0x1008, 0, 0x48);
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

}

Unk_0206d7cc::Unk_0206d7cc()
{
}

Unk_0206d7cc::~Unk_0206d7cc()
{
    func_0206d7cc();
}

Unk_0206d7cc data_021c5330;

extern "C" {

void func_02053564(void *p)
{
    ((Unk_0206d7cc *)p)->func_0206d7ec((void *)"/ftr_info/always.bin", 8, (void *)"/ftr_info/indoor.bin", 4, (void *)"/ftr_info/dma.bin", 0x1c, 0x800);
}

void func_0205355c(void *p)
{
    ((Unk_0206d7cc *)p)->func_0206d7cc();
}

void func_02053554(void *p, s32 a)
{
    ((Unk_0206d7cc *)p)->func_0206d7b4(a);
}

void func_0205354c(void *p)
{
    ((Unk_0206d7cc *)p)->func_0206d7a0();
}

void func_0205353c()
{
    func_02053564(&data_021c5330);
}

void func_0205352c()
{
    func_0205355c(&data_021c5330);
}

void func_0205351c(s32 a)
{
    func_02053554(&data_021c5330, a);
}

void func_0205350c()
{
    func_0205354c(&data_021c5330);
}

s32 func_020534d8(s32 n)
{
    CLAMP(n)
    u16 *r = (u16 *)data_021c5330.func_0206d794()->func_0206d86c(n);
    if (r) {
        return r[0];
    }
    return 0;
}

s32 func_020534a4(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d794()->func_0206d86c(n);
    if (r) {
        return r[2];
    }
    return 0;
}

s32 func_0205346c(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d794()->func_0206d86c(n);
    s32 v;
    if (r) {
        v = r[3];
    } else {
        v = 0;
    }
    return (v << 12) >> 4;
}

s32 func_02053464()
{
    return -1;
}

s32 func_02053430(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d794()->func_0206d86c(n);
    if (r) {
        return r[9];
    }
    return 0;
}

s32 func_020533fc(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d794()->func_0206d86c(n);
    if (r) {
        return r[10];
    }
    return 0;
}

s32 func_020533c8(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d794()->func_0206d86c(n);
    if (r) {
        return r[7];
    }
    return 0;
}

s32 func_0205338c(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d794()->func_0206d86c(n);
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

s32 func_02053358(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d79c()->func_0206d86c(n);
    if (r) {
        return r[1];
    }
    return 0;
}

s32 func_02053324(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d79c()->func_0206d86c(n);
    if (r) {
        return r[2];
    }
    return 0;
}

s32 func_020532f0(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d79c()->func_0206d86c(n);
    if (r) {
        return r[0];
    }
    return 0;
}

s32 func_020532d0(s32 n)
{
    if (func_0204b2d4((void *)n)) {
        return func_020532f0(func_0204b25c((void *)n));
    }
    return 0;
}

s32 func_0205329c(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d79c()->func_0206d86c(n);
    if (r) {
        return r[4];
    }
    return 0;
}

s32 func_0205327c(s32 n)
{
    if (func_0204b2d4((void *)n)) {
        return func_0205329c(func_0204b25c((void *)n));
    }
    return 0;
}

s32 func_02053248(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d79c()->func_0206d86c(n);
    if (r) {
        return r[5];
    }
    return 0;
}

s32 func_02053228(s32 n)
{
    if (func_0204b2d4((void *)n)) {
        return func_02053248(func_0204b25c((void *)n));
    }
    return 0;
}

s32 func_020531f4(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d79c()->func_0206d86c(n);
    if (r) {
        return r[3];
    }
    return 0;
}

s32 func_020531d4(s32 n)
{
    if (func_0204b2d4((void *)n)) {
        return func_020531f4(func_0204b25c((void *)n));
    }
    return 0;
}

s32 func_02053194(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d79c()->func_0206d86c(n);
    if (r) {
        return (r[7] >> 4) & 1 ? TRUE : FALSE;
    }
    return 0;
}

s32 func_02053110(s32 n)
{
    s32 t;
    BOOL a;
    if (n >= 0x6e9) t = 0x6e8; else t = n;
    u8 *r = data_021c5330.func_0206d79c()->func_0206d86c(t);
    if (r) {
        a = r[7] & 1 ? TRUE : FALSE;
    } else {
        a = FALSE;
    }
    CLAMP(n)
    u8 *q = data_021c5330.func_0206d79c()->func_0206d86c(n);
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

s32 func_020530f0(s32 n)
{
    if (func_0204b2d4((void *)n)) {
        return func_02053110(func_0204b25c((void *)n));
    }
    return 0;
}

s32 func_0205306c(s32 n)
{
    s32 t;
    BOOL a;
    if (n >= 0x6e9) t = 0x6e8; else t = n;
    u8 *r = data_021c5330.func_0206d79c()->func_0206d86c(t);
    if (r) {
        a = (r[7] >> 2) & 1 ? TRUE : FALSE;
    } else {
        a = FALSE;
    }
    CLAMP(n)
    u8 *q = data_021c5330.func_0206d79c()->func_0206d86c(n);
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

s32 func_0205304c(s32 n)
{
    if (func_0204b2d4((void *)n)) {
        return func_0205306c(func_0204b25c((void *)n));
    }
    return 0;
}

s32 func_02053018(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d79c()->func_0206d86c(n);
    if (r) {
        return r[6];
    }
    return 0;
}

s32 func_02052ff8(s32 n)
{
    if (func_0204b2d4((void *)n)) {
        return func_02053018(func_0204b25c((void *)n));
    }
    return 0;
}

s32 func_02052fc4(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d794()->func_0206d86c(n);
    if (r) {
        return r[4];
    }
    return 0;
}

s32 func_02052f84(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d798()->func_0206d86c(n);
    if (r) {
        return r[1] & 1 ? TRUE : FALSE;
    }
    return 0;
}

s32 func_02052f44(s32 n)
{
    CLAMP(n)
    u8 *r = data_021c5330.func_0206d798()->func_0206d86c(n);
    if (r) {
        return (r[1] >> 2) & 1 ? TRUE : FALSE;
    }
    return 0;
}

BOOL func_02052f04(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = (Unk_02052c88_Rec *)data_021c5330.func_0206d798()->func_0206d86c(i);
    if (r) {
        { s32 v = r->unk_01; if ((v >> 3) & 1) return TRUE; }
        return FALSE;
    }
    return FALSE;
}

s32 func_02052e80(s32 i) {
    s32 j = i >= 0x6e9 ? 0x6e8 : i;
    BOOL f;
    Unk_02052c88_Rec *r = (Unk_02052c88_Rec *)data_021c5330.func_0206d798()->func_0206d86c(j);
    if (r) {
        f = Unk_02052dac_Bit(r->unk_01, 4);
    } else {
        f = FALSE;
    }
    if (f) return 1;
    if (i >= 0x6e9) i = 0x6e8;
    r = (Unk_02052c88_Rec *)data_021c5330.func_0206d798()->func_0206d86c(i);
    if (r) {
        f = Unk_02052dac_Bit(r->unk_01, 5);
    } else {
        f = FALSE;
    }
    if (f) return 2;
    return 0;
}

u8 *func_02052e4c(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = (Unk_02052c88_Rec *)data_021c5330.func_0206d794()->func_0206d86c(i);
    if (r) return &r->unk_0b;
    return 0;
}

BOOL func_02052e0c(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = (Unk_02052c88_Rec *)data_021c5330.func_0206d798()->func_0206d86c(i);
    if (r) {
        { s32 v = r->unk_01; if ((v >> 6) & 1) return TRUE; }
        return FALSE;
    }
    return FALSE;
}

BOOL func_02052dac(s32 i) {
    s32 j = i >= 0x6e9 ? 0x6e8 : i;
    BOOL f;
    Unk_02052c88_Rec *r = (Unk_02052c88_Rec *)data_021c5330.func_0206d798()->func_0206d86c(j);
    if (r) {
        f = Unk_02052dac_Bit(r->unk_01, 7);
    } else {
        f = FALSE;
    }
    s32 t = func_020534a4(i);
    if (t != 0x23 && t != 0x24 && t != 0x25) return f;
    return FALSE;
}

BOOL func_02052d8c(u16 *p) {
    if (func_0204b2d4(p)) return func_02052dac(func_0204b25c(p));
    return FALSE;
}

BOOL func_02052d4c(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = (Unk_02052c88_Rec *)data_021c5330.func_0206d798()->func_0206d86c(i);
    if (r) {
        if (r->unk_02 & 1) return TRUE;
        return FALSE;
    }
    return FALSE;
}

BOOL func_02052d2c(u16 *p) {
    if (func_0204b2d4(p)) return func_02052d4c(func_0204b25c(p));
    return FALSE;
}

u32 func_02052cf4(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = (Unk_02052c88_Rec *)data_021c5330.func_0206d794()->func_0206d86c(i);
    u32 v;
    if (r) v = r->unk_05;
    else v = 0;
    return v << 12;
}

s8 func_02052cbc(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = (Unk_02052c88_Rec *)data_021c5330.func_0206d794()->func_0206d86c(i);
    u8 v;
    if (r) v = r->unk_06;
    else v = 0;
    return (s8)v;
}

u8 func_02052c88(s32 i) {
    if (i >= 0x6e9) i = 0x6e8;
    Unk_02052c88_Rec *r = (Unk_02052c88_Rec *)data_021c5330.func_0206d798()->func_0206d86c(i);
    if (r) return r->unk_00;
    return 0;
}

s32 func_02052c54(u16 *p) {
    if (Unk_02052c54_Range(p)) return func_02052c88(func_0204b25c(p));
    return 0;
}

u32 func_02052c18(u32 v) {
    u32 cnt = 0;
    u32 i = 0;
    u16 tmp;
    for (; i < 0x34; i++) {
        tmp = i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (v == func_02052c54(&tmp)) cnt++;
    }
    return cnt;
}

u32 func_02052b90(u16 *p) {
    s32 t = ((s32 (*)())func_020532d0)();
    u32 cnt = 0;
    s32 i = 0;
    BOOL z0 = FALSE, z8 = FALSE, zc = FALSE;
    u16 e;
    for (; (u32)i < 0x6e9; i++) {
        BOOL m;
        e = func_0204b248(i, z0);
        if (func_0204b2d4(&e)) {
            s32 a = func_0204b25c(&e);
            m = (a == func_0204b25c(p)) ? TRUE : z8;
        } else {
            m = (e == *p) ? TRUE : zc;
        }
        if (m) return (u8)cnt;
        if (t == func_020532f0(i)) cnt++;
    }
    return 0;
}

u32 func_02052b50(u32 v) {
    u8 cnt = 0;
    volatile u16 tmp[1];
    for (u32 i = 0, z = 0; i < 0x6e9; i++) {
        tmp[0] = func_0204b248(i, z);
        if (v == func_020532f0(i)) cnt++;
    }
    return cnt;
}

}
