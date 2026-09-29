#include "types.h"

struct Unk_020d77a4_Vec {
    s32 x, y, z;
};

struct Unk_020d77a4_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

class Unk_0201bc1c {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38(s32 flag);
};

extern "C" {
extern Unk_020d77a4_Global *data_020cbb18;
extern u16 data_020c6cc8;
extern s32 data_020c6d60[];
extern s32 data_020c6d48[];
extern s32 data_020c6d20;
extern u8 data_021bdfbc[];
extern u8 data_021bdfb0[];
extern s32 data_021c61a0;
extern s16 data_02135f44[];

BOOL func_020a62a0();
s32 func_0203e678(void *self, s32 x);
BOOL func_0203e6a4(void *self);
s32 func_0203e3f4(void *self);
s32 func_0203e624(void *self, u32 v);
BOOL func_0201a99c(void *p, s32 v);
void func_0201a184(void *p);
void func_0201a0f4(void *p);
void func_0201ac88(void *p);
void func_02003e40(void *p);
void func_02014234(void *p);
void func_020135cc(void *p);
void func_02013464(void *p);
void *func_02115fb4(void *dst, s32 v, u32 n);
void *func_02116048(void *dst, const void *src, u32 n);
u8 func_02081450(void *p);
u8 *func_020841fc(void *p);
s32 func_020b50e8();
void func_02084254(void *a, s32 b, void *c, s32 d, void *e, void *f);
BOOL func_02072e88(Unk_020d77a4_Global *g, s32 v);
BOOL func_02072e44(Unk_020d77a4_Global *g);
void func_02076280(s32 a, void *args, s32 b, s32 c);
void func_02084228(void *a, u32 b, u32 c);
s32 func_0208416c(s32 a, s32 b, void *c);
s32 func_0208419c(s32 a, s32 b, s32 c, void *d);
void func_02076a2c(void *a, void *b, void *c);
void func_02015a78(Unk_0201bc1c *a, void *b);
s32 func_020951ec(u32 id);
BOOL func_02095670(u8 *a, void *b, void *c, s32 d, u32 e);
s32 func_02002bdc(void *a, void *b);
s32 func_020e96a4(void *a, void *b);
BOOL func_0201a834(void *a);
void func_0201a900(void *out, void *a, void *b, s32 c);
s32 func_0201a7e8(void *p);
void func_02054b14(void *p);
BOOL func_02054c88(void *p, s32 a, s32 b);
BOOL func_0201bd84(s32 x);
}

class Unk_020d77a4 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 x);
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual void vfunc_6c();
    virtual s32 vfunc_70();
    virtual void vfunc_74();
    virtual s32 vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual s32 vfunc_94();
    virtual s32 vfunc_98();
    virtual u16 vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();

    u8 func_0201b84c();
    BOOL func_0201b858(s32 *a, s32 *b, u8 *c);
    BOOL func_0201b888(s32 *a, u8 *b);
    void func_0201b8cc(u32 a, ...);
    void func_0201b964(void *dst, s32 n);
    BOOL func_0201b980(u8 *src, u32 n);
    BOOL func_0201b9bc();
    s32 func_0201b9e8(s32 a, s32 b);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    s32 func_0201ba70(s32 a, s32 b, s32 c);
    BOOL func_0201ba88();
    s32 func_0201bb3c(Unk_020d77a4_Vec *out);
    BOOL func_0201bbb0(Unk_020d77a4_Vec *out, void *p);
    s32 func_0201bbf8();
    Unk_0201bc1c *func_0201bc1c();
    void func_0201bc28(Unk_0201bc1c *p);
    s32 func_0201bc4c(u32 id);
    s16 func_0201bc58(Unk_020d77a4 *other);
    s32 func_0201bc70(u32 id);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    BOOL func_0201bcd8(s32 n, u32 id);
    BOOL func_0201bcf8(Unk_020d77a4 *other, s32 n);
    s32 func_0201bd20(u32 id);
    s32 func_0201bd38(Unk_020d77a4 *other);
    BOOL func_0201bd58(s16 *out, Unk_020d77a4_Vec *pos);
    void func_0201bd9c(s32 v);
    void func_0201bda8(u16 *p);
    void func_0201bde0(u16 v);
    u16 func_0201bdec();
    void func_0201bdf8();
    BOOL func_0201be04();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u8 pad_0c[0x5c - 0x0c];
    /* 0x5c */ Unk_020d77a4_Vec unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[4];
    /* 0x94 */ s16 unk_94;
    /* 0x96 */ u8 pad_96[6];
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ u8 pad_a4[0xea - 0xa4];
    /* 0xea */ u16 unk_ea;
    /* 0xec */ u8 unk_ec[0x2a0 - 0xec];
    /* 0x2a0 */ u8 pad_2a0[0x350 - 0x2a0];
    /* 0x350 */ u8 unk_350[0x3a8 - 0x350];
    /* 0x3a8 */ u8 unk_3a8[0x3b0 - 0x3a8];
    /* 0x3b0 */ u8 unk_3b0;
    /* 0x3b1 */ u8 pad_3b1[0x3ca - 0x3b1];
    /* 0x3ca */ s16 unk_3ca;
    /* 0x3cc */ u8 pad_3cc[0x3d2 - 0x3cc];
    /* 0x3d2 */ s16 unk_3d2;
    /* 0x3d4 */ u8 pad_3d4[0x418 - 0x3d4];
    /* 0x418 */ u8 unk_418[0x420 - 0x418];
    /* 0x420 */ u8 unk_420[0x438 - 0x420];
    /* 0x438 */ void *unk_438;
    /* 0x43c */ u8 pad_43c[0x447 - 0x43c];
    /* 0x447 */ u8 unk_447;
    /* 0x448 */ u8 pad_448[0x4e8 - 0x448];
    /* 0x4e8 */ u32 unk_4e8;
    /* 0x4ec */ u8 pad_4ec[0x510 - 0x4ec];
    /* 0x510 */ u8 unk_510;
    /* 0x511 */ u8 unk_511;
    /* 0x512 */ u8 pad_512[2];
    /* 0x514 */ u8 unk_514[0x558 - 0x514];
    /* 0x558 */ u8 unk_558[0x560 - 0x558];
    /* 0x560 */ u8 unk_560;
    /* 0x561 */ u8 unk_561;
    /* 0x562 */ u8 unk_562;
    /* 0x563 */ u8 unk_563;
    /* 0x564 */ u8 unk_564[4];
    /* 0x568 */ u8 unk_568[0x618 - 0x568];
    /* 0x618 */ u8 unk_618[0x628 - 0x618];
    /* 0x628 */ s32 unk_628;
    /* 0x62c */ u8 unk_62c;
    /* 0x62d */ u8 unk_62d[3];
    /* 0x630 */ u8 pad_630[2];
    /* 0x632 */ u16 unk_632;
    /* 0x634 */ Unk_0201bc1c *unk_634;
    /* 0x638 */ s32 unk_638;
};

BOOL Unk_020d77a4::vfunc_68() {
    return TRUE;
}

void Unk_020d77a4::vfunc_08(s32 x) {
    if (x == 2) {
        if (func_020a62a0() == 0) {
            if ((unk_4e8 & 2) == 0) {
                unk_4e8 |= 2;
                unk_62c = 1;
            }
        }
        if (unk_563 == 0) {
            func_0201b8cc(1);
        }
    }
    func_0203e678(this, x);
}

BOOL Unk_020d77a4::vfunc_00() {
    if (func_020a62a0() != 0) {
        func_0201ba70(1, data_020cbb18->unk_64, 4);
    }
    if (func_0201be04() == 0) {
        return FALSE;
    }
    unk_a0 = 0xffffec00;
    unk_9c = 0;
    func_0201a99c(unk_350, unk_8e);
    unk_447 = func_02081450(&unk_ea);
    return TRUE;
}

BOOL Unk_020d77a4::vfunc_04() {
    u16 tmp;
    if (func_0203e6a4(this) == 0) {
        return FALSE;
    }
    tmp = unk_08;
    func_0201bda8(&tmp);
    unk_634 = NULL;
    func_0201bd9c(0xd00);
    func_0201a184(unk_418);
    func_02014234(unk_618);
    func_0201a0f4(unk_420);
    unk_560 = 0;
    func_0201ac88(unk_350);
    unk_62c = 0;
    func_02115fb4(unk_62d, 0, 4);
    func_02003e40(unk_514);
    unk_438 = unk_514;
    func_020135cc(unk_558);
    unk_510 = 1;
    unk_511 = 1;
    func_02013464(this);
    unk_561 = 1;
    unk_562 = 1;
    unk_628 = 0;
    func_0203e3f4(this);
    return TRUE;
}

u8 Unk_020d77a4::func_0201b84c() {
    return unk_561;
}

BOOL Unk_020d77a4::func_0201b858(s32 *a, s32 *b, u8 *c) {
    u8 *p = func_020841fc(&unk_ea);
    if (p != NULL) {
        *a = p[0xf];
        *b = p[0x10];
        func_02116048(p + 0x11, c, 0xd);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d77a4::func_0201b888(s32 *a, u8 *b) {
    if (unk_563 == 0) {
        u8 *p = func_020841fc(&unk_ea);
        if (p != NULL) {
            func_02076a2c(p + 4, a, a + 2);
            func_02116048(p + 9, b, 2);
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_020d77a4::func_0201b8cc(u32 a, ...) {
    func_02084254(&unk_ea, func_020b50e8(), &unk_5c, unk_8e, unk_568, unk_62d);
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) != 0) {
        if (func_0201ba88() != 0) {
            s32 t = (unk_ea & 0xf000) >> 12;
            if (t == 0xe) {
                func_02076280(func_0201bdec() + 0xc, &a, 0, 0);
            } else if (t == 0xd) {
                func_02076280(func_0201bdec() + 0x20, &a, 0, 0);
            }
        }
    }
}

void Unk_020d77a4::func_0201b964(void *dst, s32 n) {
    if (n > 4) {
        n = 4;
    }
    func_02116048(dst, unk_62d, n);
}

BOOL Unk_020d77a4::func_0201b980(u8 *src, u32 n) {
    if (unk_563 == 0) {
        u8 *p = func_020841fc(&unk_ea);
        if (n > 4) {
            n = 4;
        }
        if (p != NULL) {
            func_02116048(p + 0xb, src, n);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_020d77a4::func_0201b9bc() {
    s32 a = 4;
    s32 b = 4;
    if (func_0201b9e8((s32)&a, (s32)&b) != 0) {
        if (b < 4) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

s32 Unk_020d77a4::func_0201b9e8(s32 a, s32 b) {
    return func_0208416c(a, b, &unk_ea);
}

void Unk_020d77a4::func_0201b9fc(u32 a, u32 b, u32 c, ...) {
    func_02084228(&unk_ea, b, c);
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) != 0) {
        if (func_0201ba88() != 0) {
            s32 t = (unk_ea & 0xf000) >> 12;
            if (t == 0xe) {
                func_02076280(func_0201bdec() + 0xc, &a, 0, 0);
            } else if (t == 0xd) {
                func_02076280(func_0201bdec() + 0x20, &a, 0, 0);
            }
        }
    }
}

s32 Unk_020d77a4::func_0201ba70(s32 a, s32 b, s32 c) {
    return func_0208419c(a, b, c, &unk_ea);
}

BOOL Unk_020d77a4::func_0201ba88() {
    Unk_020d77a4_Global *g = data_020cbb18;
    if (func_02072e44(g) != 0 && unk_563 == 0) {
        u8 *p = func_020841fc(&unk_ea);
        if (p != NULL && p[0] != 0) {
            if ((p[1] == 4 && func_020a62a0() != 0) || p[1] == g->unk_64) {
                return TRUE;
            }
            return FALSE;
        }
        return FALSE;
    }
    return TRUE;
}

void Unk_020d77a4::vfunc_a4() {}

u16 Unk_020d77a4::vfunc_9c() {
    return data_020c6cc8;
}

s32 Unk_020d77a4::vfunc_98() {
    s32 i = vfunc_78();
    if (i >= 2) {
        i = 0;
    }
    return data_020c6d60[i];
}

s32 Unk_020d77a4::vfunc_94() {
    s32 i = vfunc_78();
    if (i >= 2) {
        i = 0;
    }
    return data_020c6d48[i];
}

s32 Unk_020d77a4::func_0201bb3c(Unk_020d77a4_Vec *out) {
    s32 r = func_0201a7e8(unk_3a8);
    s32 result = 0;
    Unk_020d77a4_Vec *pv = &unk_5c;
    *out = *pv;
    switch (r) {
    case 3:
        result = 1;
        break;
    case 1:
        if (func_0201bbb0(out, data_021bdfbc) != 0) {
            result = 2;
        } else {
            result = 1;
        }
        break;
    case 2:
        if (func_0201bbb0(out, data_021bdfb0) != 0) {
            result = 2;
        } else {
            result = 1;
        }
        break;
    }
    return result;
}

BOOL Unk_020d77a4::func_0201bbb0(Unk_020d77a4_Vec *out, void *p) {
    BOOL result = FALSE;
    Unk_020d77a4_Vec v;
    func_0201a900(&v, &unk_5c, p, unk_94);
    if (func_0201a834(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        result = TRUE;
    }
    return result;
}

void Unk_020d77a4::vfunc_90() {}
void Unk_020d77a4::vfunc_8c() {}
void Unk_020d77a4::vfunc_88() {}

s32 Unk_020d77a4::func_0201bbf8() {
    s32 r = 2;
    s32 v = vfunc_78();
    switch (v) {
    case 0:
        r = 0;
        break;
    case 1:
        r = 1;
        break;
    }
    return r;
}

Unk_0201bc1c *Unk_020d77a4::func_0201bc1c() {
    return unk_634;
}

void Unk_020d77a4::func_0201bc28(Unk_0201bc1c *p) {
    unk_634 = p;
    if (unk_634 != NULL) {
        func_02015a78(unk_634, this);
    }
}

s32 Unk_020d77a4::func_0201bc4c(u32 id) {
    return func_020951ec(id);
}

s16 Unk_020d77a4::func_0201bc58(Unk_020d77a4 *other) {
    return func_0201bcbc(other) - unk_8e;
}

s32 Unk_020d77a4::func_0201bc70(u32 id) {
    s32 result = 0;
    u8 flag;
    Unk_020d77a4_Vec vec;
    flag = 0;
    if (func_02095670(&flag, &vec, &vec.z, -1, id) != 0) {
        result = func_02002bdc(&unk_5c, &vec);
    } else {
        s32 p = func_020951ec(id);
        if (p != 0) {
            result = func_0201bcbc((Unk_020d77a4 *)p);
        }
    }
    return result;
}

s32 Unk_020d77a4::func_0201bcbc(Unk_020d77a4 *other) {
    s32 r = 0;
    if (other != NULL) {
        r = func_02002bdc(&unk_5c, &other->unk_5c);
    }
    return r;
}

BOOL Unk_020d77a4::func_0201bcd8(s32 n, u32 id) {
    return func_0201bcf8((Unk_020d77a4 *)func_020951ec(id), n);
}

BOOL Unk_020d77a4::func_0201bcf8(Unk_020d77a4 *other, s32 n) {
    BOOL r = FALSE;
    if (other != NULL) {
        s32 d = func_0201bd38(other);
        if (d < 0) {
            d = -d;
        }
        if (d < n) {
            r = TRUE;
        }
    }
    return r;
}

s32 Unk_020d77a4::func_0201bd20(u32 id) {
    return func_0201bd38((Unk_020d77a4 *)func_020951ec(id));
}

s32 Unk_020d77a4::func_0201bd38(Unk_020d77a4 *other) {
    s32 r = 0;
    if (other != NULL) {
        r = func_020e96a4(&other->unk_5c, &unk_5c);
    }
    return r;
}

BOOL Unk_020d77a4::func_0201bd58(s16 *out, Unk_020d77a4_Vec *pos) {
    *out = func_02002bdc(&unk_5c, pos);
    return func_0201bd84((s16)(*out - unk_8e));
}

BOOL func_0201bd84(s32 x) {
    if (x < 0) {
        x = -x;
    }
    if (x < 0x4000) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020d77a4::func_0201bd9c(s32 v) {
    unk_638 = v;
}

void Unk_020d77a4::func_0201bda8(u16 *p) {
    unk_ea = *p;
    func_0201bde0(unk_ea & 0xfff);
    func_0203e624(this, func_0201bdec());
}

void Unk_020d77a4::func_0201bde0(u16 v) {
    unk_632 = v;
}

u16 Unk_020d77a4::func_0201bdec() {
    return unk_632;
}

void Unk_020d77a4::func_0201bdf8() {
    func_02054b14(unk_ec);
}

BOOL Unk_020d77a4::func_0201be04() {
    s32 t = vfunc_70();
    BOOL r = FALSE;
    if (func_02054c88(unk_ec, t, data_021c61a0) != 0) {
        r = TRUE;
    }
    return r;
}

// ---- Unk_0201be34: state object holding a Unk_020d77a4 at +0x2c ----
struct Unk_0201be34_Mtx {
    s32 m[9];
};

struct Unk_0201be44_Hdr {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_0201be44_Owner {
    u8 pad_00[0x2c];
    Unk_020d77a4 *unk_2c;
};

struct Unk_0201be44_Dst {
    u8 pad_00[0x28];
    Unk_0201be34_Mtx unk_28;
    Unk_020d77a4_Vec unk_4c;
};

extern "C" {
BOOL func_0204b2d4(void *p);
u32 func_0204b25c(void *p);
BOOL func_020b51fc();
s32 func_020b522c();
void func_02054628(void *self, u32 flags);
void func_01ffb4b4(Unk_0201be34_Mtx *m, s32 a, s32 b);
void func_01ffb498(Unk_0201be34_Mtx *m, s32 a, s32 b);
void func_01ffb56c(Unk_0201be34_Mtx *a, Unk_0201be34_Mtx *b, Unk_0201be34_Mtx *out);
s32 func_0203eeac(Unk_020d77a4_Vec *a, Unk_020d77a4_Vec *b);
s32 func_0203edc0();
void func_02053a54(void *p, void *q);
}

class Unk_0201be34;
typedef void (*Unk_0201be34_StateFn)(Unk_0201be34 *);
extern "C" void func_0201c050(Unk_0201be34 *p);
extern "C" void func_0201be34(Unk_0201be34 *self);

class Unk_0201be34 {
public:

    /* 0x00 */ Unk_0201be44_Hdr *unk_00;
    /* 0x04 */ Unk_0201be44_Owner *unk_04;
    /* 0x08 */ u8 pad_08[0x24 - 0x08];
    /* 0x24 */ Unk_0201be34_StateFn unk_24;
    /* 0x28 */ u8 pad_28[0x92 - 0x28];
    /* 0x92 */ u8 unk_92;
    /* 0x93 */ u8 pad_93[0xb4 - 0x93];
    /* 0xb4 */ Unk_0201be44_Dst *unk_b4;
    /* 0xb8 */ u8 pad_b8[0xd4 - 0xb8];
    /* 0xd4 */ u8 *unk_d4;
};

extern "C" void func_0201be34(Unk_0201be34 *self) {
    self->unk_24 = func_0201c050;
    self->unk_92 = 1;
}

extern "C" void func_0201be44(Unk_0201be34 *self) {
    u32 idx = self->unk_00->unk_01;
    Unk_020d77a4 *p = self->unk_04->unk_2c;
    u16 tmp[2];
    Unk_0201be34_Mtx mB;
    Unk_0201be34_Mtx mA;
    Unk_020d77a4_Vec va;
    Unk_0201be34_Mtx mC;
    Unk_020d77a4_Vec vb;
    if (p != NULL) {
        BOOL isX;
        if (func_0204b2d4(&p->unk_ea) != 0) {
            tmp[0] = 0xd011;
            isX = func_0204b25c(&p->unk_ea) == func_0204b25c(&tmp[0]) ? TRUE : FALSE;
        } else {
            isX = p->unk_ea == 0xd011 ? TRUE : FALSE;
        }
        if (isX && (func_020b51fc() == 0 || func_020b522c() != 1)) {
            if (idx == 0x10) {
                u8 *base = self->unk_d4;
                u16 off = *(u16 *)(base + 6);
                u8 *t = base + off;
                u32 n = *(u16 *)t;
                s32 o = *(s32 *)(t + n * idx + 4);
                s32 *v = (s32 *)(base + o);
                s32 *w = v + 1;
                Unk_0201be44_Dst *d = self->unk_b4;
                d->unk_4c.x = v[1];
                d->unk_4c.y = w[1];
                d->unk_4c.z = w[2];
            }
        } else {
            func_02054628(self, 0x800);
        }
    }
    if (idx == (u32)data_020c6d20 && p != NULL && p->unk_3b0 < 6) {
        Unk_0201be34_Mtx *m = &self->unk_b4->unk_28;
        if (p->unk_3ca != 0) {
            u32 a = (u16)p->unk_3ca >> 4;
            func_01ffb4b4(&mA, data_02135f44[a * 2], data_02135f44[a * 2 + 1]);
            func_01ffb56c(m, &mA, m);
        }
        if (p->unk_3d2 != 0) {
            u32 a = (u16)p->unk_3d2 >> 4;
            func_01ffb498(&mB, data_02135f44[a * 2], data_02135f44[a * 2 + 1]);
            func_01ffb56c(m, &mB, m);
        }
    }
    if (idx == 0 && p != NULL) {
        BOOL isY;
        if (func_0204b2d4(&p->unk_ea) != 0) {
            tmp[1] = 0xd016;
            isY = func_0204b25c(&p->unk_ea) == func_0204b25c(&tmp[1]) ? TRUE : FALSE;
        } else {
            isY = p->unk_ea == 0xd016 ? TRUE : FALSE;
        }
        if (isY) {
            Unk_0201be44_Dst *d = self->unk_b4;
            Unk_0201be34_Mtx *m = &d->unk_28;
            Unk_020d77a4_Vec *pv = &d->unk_4c;
            s32 r;
            va = *pv;
            vb = *pv;
            r = func_0203eeac(&va, &vb);
            pv->z = va.z;
            pv->y = va.y - func_0203edc0();
            if (r != 0) {
                u32 a = (u16)r >> 4;
                func_01ffb498(&mC, data_02135f44[a * 2], data_02135f44[a * 2 + 1]);
                func_01ffb56c(m, &mC, m);
            }
        }
    }
    if (p != NULL) {
        func_02053a54(p->unk_ec, self);
    }
    self->unk_24 = func_0201be34;
    self->unk_92 = 3;
}
