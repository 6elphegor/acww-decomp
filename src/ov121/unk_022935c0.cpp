#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021ef5f4;
extern u8 data_021ef5f8;
extern u8 data_021edb68;
extern u16 data_021f47d8[];
extern u16 data_ov121_02294bd8[];
extern u16 data_ov121_02294be8[];
extern u8 data_ov121_02294bf8[];
extern u8 data_ov121_02294c08[];

void func_0200402c(s32 id);
s32 func_02042830(s32 h);
void func_02042820(s32 h);
BOOL func_0206ef0c();
BOOL func_0206ef00();
BOOL func_0206e61c();
BOOL func_0208d4fc(void *p);
BOOL func_0208d534(void *p);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov090_02291a78(s32 i);
s32 func_ov090_02291a38(s32 i);
s32 func_ov090_02291a58(s32 i);

void func_ov002_02204394(void *p, void *q, u32 a, u32 b);
BOOL func_ov002_02204234(void *p, s32 a);
void func_ov002_02202b68(void *p);
BOOL func_ov002_022017a4(void *p);
BOOL func_ov002_022017b4(void *p);
BOOL func_ov002_02201a28(void *p);
void func_ov002_02202064(void *p, s32 x);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
BOOL func_ov002_022019d0(void *p, s32 a, u8 *pos, u32 n);
BOOL func_ov002_02202928(void *p);
BOOL func_ov002_022028f0(void *p);
BOOL func_ov002_022006e4(void *p, s32 a);
void func_ov002_022006c0(void *p);
}

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200980();
    u32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a58(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// Vtable 0x02294d68, size 0x107c
class Unk_ov121_02294d68 : public Unk_ov002_022044e4 {
public:
    Unk_ov121_02294d68();
    virtual ~Unk_ov121_02294d68();

    void func_ov121_022923fc(u32 a);
    void func_ov121_0229240c(u32 a);
    BOOL func_ov121_0229241c(u32 a);
    BOOL func_ov121_02292430();
    BOOL func_ov121_0229246c(u32 a);
    BOOL func_ov121_02292498(u32 a, u32 b);
    void func_ov121_02292648(u32 a);
    BOOL func_ov121_0229268c(u32 a, u32 b);
    s32 func_ov121_02292988();
    void func_ov121_02292aa0();
    void func_ov121_02292ac8();
    void func_ov121_02292af0();
    void func_ov121_02292b10();
    void func_ov121_02292b30();
    void func_ov121_02292b50();
    void func_ov121_02292b70();
    void func_ov121_02292ba4();
    void func_ov121_02292bf0();
    void func_ov121_02292c54();
    void func_ov121_02292ca4();
    void func_ov121_02292d18();
    void func_ov121_02292dbc();
    void func_ov121_02292e10();
    void func_ov121_02292ecc();
    void func_ov121_02292efc();
    void func_ov121_02292f28();
    void func_ov121_02292f88();
    void func_ov121_02292ffc();
    void func_ov121_02293074();
    void func_ov121_02293188(u32 a);
    void func_ov121_02293474();
    u32 func_ov121_02293540(u32 a);
    void func_ov121_0229354c(u32 a);
    void func_ov121_02293588(u32 a, u32 b);
    BOOL func_ov121_022935c0();
    void func_ov121_02293700();
    BOOL func_ov121_0229376c(u32 i);
    void func_ov121_02293780(u32 i);
    u32 func_ov121_02293794();
    u32 func_ov121_022937d8();
    u32 func_ov121_02293828(u32 x, u32 y, u32 n);
    void func_ov121_02293884(u32 idx);
    void func_ov121_022938c0(u32 id, u32 s);
    u32 func_ov121_02293900(u32 i);
    s32 func_ov121_02293918(u32 i);
    void func_ov121_0229393c(u32 a, u32 b);
    void func_ov121_02293978();
    void func_ov121_02293998();
    void func_ov121_022939c8();
    void func_ov121_022939e0();
    void func_ov121_02293a38();
    void func_ov121_02293a5c();
    void func_ov121_02293a7c();
    void func_ov121_02293aa4();
    void func_ov121_02293ac4();
    void func_ov121_02293b08();
    void func_ov121_02293b44();
    void func_ov121_02293bd4();
    void func_ov121_02293c64();
    void func_ov121_02293cdc();
    void func_ov121_02293d00();
    void func_ov121_02293d3c();
    void func_ov121_02293d64();
    void func_ov121_02293da0();
    void func_ov121_02293dcc();
    void func_ov121_02293e44();
    BOOL func_ov121_02294630(u32 a);
    void func_ov121_02294780();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u8 *unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u16 unk_a0;
    /* 0xa2 */ u16 unk_a2;
    /* 0xa4 */ s16 unk_a4;
    /* 0xa6 */ s16 unk_a6;
    /* 0xa8 */ s16 unk_a8;
    /* 0xaa */ s16 unk_aa;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8[0x2d8 - 0xb8];
    /* 0x2d8 */ u8 unk_2d8[0x398 - 0x2d8];
    /* 0x398 */ u8 unk_398[0x3fc - 0x398];
    /* 0x3fc */ u8 unk_3fc[0x504 - 0x3fc];
    /* 0x504 */ u8 unk_504[0x874 - 0x504];
    /* 0x874 */ u8 unk_874[0x1074 - 0x874];
};

extern "C" BOOL func_ov121_02293728() {
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) d = -d;
    if (d > 0x10) return TRUE;
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) d = -d;
    if (d > 0x10) return TRUE;
    return FALSE;
}

BOOL Unk_ov121_02294d68::func_ov121_022935c0() {
    u32 v = unk_af;
    if (v <= 7) {
        func_0200402c(0xe);
        func_ov121_02293588(unk_af, unk_ae);
        return FALSE;
    }
    switch (v) {
    case 8:
        func_ov121_02293474();
        return TRUE;
    case 10:
        if (func_ov121_02292430()) {
            func_ov121_0229354c(0);
        } else {
            func_ov121_0229393c(0x17, 1);
            return TRUE;
        }
        func_ov121_02292f28();
        return TRUE;
    case 11:
        if (func_ov121_02292430()) {
            func_ov121_0229354c(1);
        } else {
            func_ov121_0229393c(0x18, 1);
            return TRUE;
        }
        func_ov121_02292f28();
        return TRUE;
    case 13:
        switch (unk_ac) {
        case 0:
        case 2:
            func_ov121_02293188(0);
            break;
        case 1:
            func_ov121_0229354c(3);
            func_ov121_02292f28();
            break;
        }
        return TRUE;
    case 12:
        switch (unk_ac) {
        case 0:
        case 2:
            func_ov121_02293188(1);
            break;
        case 1:
            func_ov121_0229354c(4);
            func_ov121_02292f28();
            break;
        }
        return TRUE;
    case 14:
        switch (unk_ac) {
        case 0:
            func_ov121_02293188(2);
            break;
        case 1:
            func_ov121_02293074();
            return TRUE;
        default:
            return FALSE;
        }
        return TRUE;
    case 9:
        func_ov121_02293074();
        return TRUE;
    case 15:
        func_ov121_02292ffc();
        return TRUE;
    default:
        return FALSE;
    }
}

void Unk_ov121_02294d68::func_ov121_02293700() {
    unk_a4 = unk_a8 + data_021ef5f0;
    unk_a6 = unk_aa + data_021ef5ec;
}

BOOL Unk_ov121_02294d68::func_ov121_0229376c(u32 i) {
    if ((unk_9c & (1 << i)) != 0) return TRUE;
    return FALSE;
}

void Unk_ov121_02294d68::func_ov121_02293780(u32 i) {
    unk_9c = unk_9c | (1 << i);
}

u32 Unk_ov121_02294d68::func_ov121_02293794() {
    u32 x = *(volatile u8 *)&data_021ef5f0;
    u32 y = *(volatile u8 *)&data_021ef5ec;
    u32 r = func_ov121_02293828(x + unk_a8, y + unk_aa, 0xf);
    if (func_ov121_0229376c(r)) r = 0x18;
    return r;
}

u32 Unk_ov121_02294d68::func_ov121_022937d8() {
    u32 x = data_021ef5f0;
    u32 y = data_021ef5ec;
    u32 r = func_ov121_02293828(x, y, 7);
    if (r != 0x18) {
        unk_a8 = func_ov121_02293918(r) - x;
        unk_aa = func_ov121_02293900(r) - y;
    }
    return r;
}

u32 Unk_ov121_02294d68::func_ov121_02293828(u32 x, u32 y, u32 n) {
    s32 xl = x - 0x10;
    s32 xh = x + 0x10;
    s32 yl = y - 0x10;
    s32 yh = y + 0x10;
    u8 i;
    for (i = 0; i <= n; i++) {
        s32 px = func_ov121_02293918(i);
        if (xl < px && px < xh) {
            s32 py = func_ov121_02293900(i);
            if (yl < py && py < yh) return i;
        }
    }
    return 0x18;
}

void Unk_ov121_02294d68::func_ov121_02293884(u32 idx) {
    u32 old = unk_b0;
    if (idx != old) {
        if (old != 0x18) func_ov121_022938c0(old, 2);
        unk_b0 = idx;
        u32 n = *(volatile u8 *)&unk_b0;
        if (n != 0x18) func_ov121_022938c0(n, 6);
    }
}

void Unk_ov121_02294d68::func_ov121_022938c0(u32 id, u32 s) {
    u32 k = id - 9;
    u32 xv = data_ov121_02294be8[k];
    u32 yv = data_ov121_02294bd8[k];
    func_0206ee80(unk_874, yv, xv, yv + 3, xv + 3, s);
    func_ov121_0229240c(2);
}

u32 Unk_ov121_02294d68::func_ov121_02293900(u32 i) {
    if (i >= 0x10 && i <= 0x17) return 8;
    return data_ov121_02294bf8[i];
}

s32 Unk_ov121_02294d68::func_ov121_02293918(u32 i) {
    if (i >= 0x10 && i <= 0x17) return func_ov090_02291a78(i - 0x10);
    return data_ov121_02294c08[i];
}

void Unk_ov121_02294d68::func_ov121_0229393c(u32 a, u32 b) {
    u8 buf[1];
    buf[0] = data_021edb68;
    buf[0] = a;
    func_ov002_02204394(unk_3fc, buf, b, 0);
    func_ov002_02200a58(0x13);
    func_ov121_02292d18();
}

void Unk_ov121_02294d68::func_ov121_02293978() {
    if (func_0206ef0c()) func_ov121_022939c8();
    else func_ov121_02293998();
}

void Unk_ov121_02294d68::func_ov121_02293998() {
    u8 v = 0x18;
    unk_ae = v;
    unk_ad = v;
    func_ov121_02292dbc();
    func_ov002_02200980();
    func_ov121_02292e10();
    func_ov002_02200a58(4);
}

void Unk_ov121_02294d68::func_ov121_022939c8() {
    func_ov121_02292d18();
    func_ov002_02200a58(0);
}

void Unk_ov121_02294d68::func_ov121_022939e0() {
    switch (func_02042830(unk_98)) {
    case 1:
        func_ov121_02292ecc();
        func_ov121_02292648(unk_af);
        func_ov121_02293978();
        break;
    case 2:
        func_ov121_0229393c(3, 0);
        func_0200402c(0x73);
        break;
    default:
        return;
    }
    func_02042820(unk_98);
    unk_98 = -1;
}

void Unk_ov121_02294d68::func_ov121_02293a38() {
    if (func_ov002_02204234(unk_3fc, 1)) func_ov121_02293978();
}

void Unk_ov121_02294d68::func_ov121_02293a5c() {
    if (func_ov121_0229246c(unk_b7)) func_ov121_02293978();
}

void Unk_ov121_02294d68::func_ov121_02293a7c() {
    if (func_ov121_02292498(unk_b7, unk_a0)) func_ov002_02200a58(0x12);
}

void Unk_ov121_02294d68::func_ov121_02293aa4() {
    if (func_ov002_022017a4(unk_504)) func_ov121_02292f88();
}

void Unk_ov121_02294d68::func_ov121_02293ac4() {
    if (func_ov002_02201a28(unk_504)) {
        func_ov002_02202064(unk_504, 0);
        if (func_0208d534(unk_398)) func_ov121_02292b70();
        func_ov002_02200a58(0x10);
    }
}

void Unk_ov121_02294d68::func_ov121_02293b08() {
    if (func_ov002_022017b4(unk_504)) {
        if (func_0206ef00()) {
            func_ov121_02292ba4();
            func_ov002_02200a58(0xc);
        } else {
            func_ov002_02200a58(3);
        }
    }
}

void Unk_ov121_02294d68::func_ov121_02293b44() {
    if (func_0206e61c()) {
        func_ov121_02292efc();
    } else if (func_0208d4fc(unk_398)) {
        unk_b2 = func_ov121_02293540(unk_b3);
        BOOL r5 = TRUE;
        switch (unk_b2) {
        case 0:
        case 1:
        case 2:
        case 3:
            func_0200402c(0x50);
            break;
        case 4:
        case 5:
            break;
        case 6:
            r5 = FALSE;
            break;
        }
        func_ov002_02201aa0(unk_504, unk_b3, r5);
        func_ov002_02200a58(0xf);
    }
}

void Unk_ov121_02294d68::func_ov121_02293bd4() {
    if (func_0206e61c()) {
        func_ov121_02292efc();
    } else if (func_ov002_022009d4()) {
        func_ov121_02292d18();
        func_ov002_02200a58(3);
    } else if (func_ov002_022019d0(unk_504, func_ov002_022009c8(), &unk_b3, 0)) {
        func_ov121_02292c54();
    } else {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            func_ov002_02202b68(unk_398);
            func_ov002_02200a58(0xd);
        } else if (k & 2) {
            func_ov121_02292bf0();
        }
    }
}

void Unk_ov121_02294d68::func_ov121_02293c64() {
    if (!func_ov002_02202928(unk_398)) {
        func_ov121_022923fc(4);
        if (func_ov121_0229241c(0x80)) {
            func_ov121_02292e10();
            func_ov002_02200a58(4);
            func_ov121_022923fc(0x80);
            func_0200402c(0xe);
        } else {
            unk_af = unk_b1;
            func_ov121_022923fc(4);
            if (!func_ov121_022935c0()) {
                func_ov121_02292e10();
                func_ov002_02200a58(4);
            }
        }
    }
}

void Unk_ov121_02294d68::func_ov121_02293cdc() {
    if (func_0208d4fc(unk_398)) func_ov002_02200a58(5);
}

void Unk_ov121_02294d68::func_ov121_02293d00() {
    if (func_ov002_02202928(unk_398)) {
        func_ov002_02200a58(0xa);
        unk_ae = unk_b1;
        func_ov121_0229240c(4);
        func_0200402c(0xd);
    }
}

void Unk_ov121_02294d68::func_ov121_02293d3c() {
    if (func_0208d4fc(unk_398)) {
        func_ov121_02292b50();
        func_ov002_02200a58(4);
    }
}

void Unk_ov121_02294d68::func_ov121_02293d64() {
    if (func_0208d4fc(unk_398)) {
        s32 r = func_ov121_02292988();
        if (r == -1 || !func_ov121_02294630(r)) func_ov121_02292b10();
    }
}

void Unk_ov121_02294d68::func_ov121_02293da0() {
    if (!func_ov002_022028f0(unk_398)) {
        func_ov002_02200a58(unk_b4);
        func_ov121_02294780();
    }
}

void Unk_ov121_02294d68::func_ov121_02293dcc() {
    if (func_0206e61c()) {
        func_ov121_022923fc(4);
        func_ov121_02294630(7);
    } else if (func_ov121_0229268c(func_ov002_022009c8(), 1)) {
        func_ov121_02292ca4();
    } else {
        if (data_021f47d8[1] & 1) {
            if (!func_ov121_0229376c(unk_b1)) func_ov121_02292ac8();
        }
        if (data_021f47d8[1] & 2) func_ov121_02292aa0();
    }
}

void Unk_ov121_02294d68::func_ov121_02293e44() {
    if (func_ov002_022009d4()) {
        func_ov121_022939c8();
        func_ov002_022006e4(unk_2d8, 1);
    } else if (func_ov121_0229268c(func_ov002_022009c8(), 0)) {
        func_ov121_02292e10();
        func_ov121_02292ca4();
        func_ov002_022006e4(unk_2d8, 0);
    } else {
        if (data_021f47d8[1] & 1) {
            func_ov002_022006e4(unk_2d8, 1);
            if (func_ov121_02292988() != -1) {
                func_ov121_02292b30();
                return;
            }
            if (unk_b1 <= 7) {
                func_ov121_02292af0();
                return;
            }
        }
        u32 k = data_021f47d8[1];
        if (k & 0x100) {
            func_ov121_02294630(func_ov090_02291a38(1));
        } else if (k & 0x200) {
            func_ov121_02294630(func_ov090_02291a58(1));
        } else if (k & 2) {
            func_ov121_02294630(7);
        } else {
            func_ov002_022006c0(unk_2d8);
        }
    }
}
