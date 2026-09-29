#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *(*ctor)(void *), void *(*dtor)(void *, s32));
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *(*dtor)(void *, s32));
void func_02004b60();
void func_0203442c();
}

extern "C" {
void func_02003dbc(void *);
void func_02003dc4(void *);
s32 func_02003ccc();
void func_020f3a18(void *);
void func_020ed188(void *p);
void func_020e85fc(void *heap, void *p);
void *func_020e8608(void *heap, s32 size);
void *func_020b8d98(void *);
void *func_0203c2cc(void *);
void func_02061168(u16 *out, u16 *in, s32 n);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
u32 func_0204b354(u16 *p);
s32 func_02133150(s32 a, s32 b);
s32 func_0204ff6c(void *p);
BOOL func_020b52d0();
BOOL func_020b52ac();
BOOL func_020b52f8();
BOOL func_020b51a4();
BOOL func_020b51fc();
void func_0209c15c(void *);
void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void func_0205c158();
void func_0205c13c();
s32 func_02095204(s32 a);
s32 func_020e9650(void *a, void *b);
s32 func_02002bdc(void *a, void *b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02063b8c(s32 a);
void func_020547a4(void *p);
void func_020547e4(void *p);
s32 func_02088bf8(void *a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
s32 func_02089040(void *a);

extern u8 data_021f482c[];
extern u8 data_021c4890[];
extern u8 data_ov004_0224eb48[];
extern u8 data_ov004_02252058[];
extern u8 data_ov004_02251f84[];
extern u8 data_ov004_02251f74;
extern u8 data_ov004_02251f78;
extern u16 data_ov004_02251f7c;
extern s8 data_ov004_022523c4;
extern u8 *data_ov004_022523d4;

void func_ov004_02233b04(void *p);
void func_ov004_02233b20(void *p);
void func_ov004_02233b3c(void *p);
void func_ov004_02233b54(void *p);
void func_ov004_022331e0(void *p);
void func_ov004_02233380(void *p);
void func_ov004_022333a8(void *p);
void func_ov004_0223349c(void *p);
void func_ov004_02233544(void *p);
void func_ov004_02233560(void *p);
s32 func_ov004_02233f08(void *out, void *in, s32 n);
void func_ov004_02234774(void *p);
void func_ov004_02234908(void *p);
void func_ov004_022349a8(void *p);
void func_ov004_02234a48(void *p);
void func_ov004_02234ad0(void *p);
u32 func_ov004_02234ad4();
u32 func_ov004_02234af8();
u32 func_ov004_02235028(s32 p);
void func_ov004_02235180();
void func_ov004_022354d8();
void func_ov004_022356cc();
void func_ov004_02235718();
void func_ov004_02235870(void *p);
void func_ov004_0223588c(void *p, u32 v);
}

// ---------------------------------------------------------------------------------------------------------------
// Class Unk_ov004_02235a0c: two-slot cache of loaded model resources.
class Unk_ov004_02235a0c {
public:
    /* 0x00 */ u32 unk_00[2];
    /* 0x08 */ u16 unk_08[2];
    /* 0x0c */ u8 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u32 unk_14[2];
    /* 0x1c */ u32 unk_1c[2];

    u32 func_ov004_02235a0c();
    u32 func_ov004_02235a1c();
    void func_ov004_02235a2c();
    BOOL func_ov004_02235a54(u16 *p);
    void func_ov004_02235bc8();
    void func_ov004_02235c10();
    s32 func_ov004_02235c74();
    void func_ov004_02235c78();
    Unk_ov004_02235a0c *func_ov004_02235c9c();
    Unk_ov004_02235a0c *func_ov004_02235cc0();
};

extern Unk_ov004_02235a0c data_ov004_02252070;

// Class Unk_ov004_02235984: object with a byte flag at +0x1c.
class Unk_ov004_02235984 {
public:
    /* 0x00 */ u8 unk_00[0x1c];
    /* 0x1c */ u8 unk_1c;

    void func_ov004_02235984();
};

// Class Unk_ov004_0223598c: small helper at +0x50 of the main object, flag at +0x10.
class Unk_ov004_0223598c {
public:
    /* 0x00 */ u8 unk_00[0x10];
    /* 0x10 */ u8 unk_10;

    void func_ov004_0223599c();
    void func_ov004_022359b4();
    void *func_ov004_022359d8();
    void func_ov004_022359e8();
    void func_ov004_02235990();
    u32 func_ov004_02235994();
    u32 func_ov004_0223598c();
};

// Main object, vtable 0x0224e9d8.
class Unk_ov004_0224e9d8 : public Unk_020d8c7c {
public:
    Unk_ov004_0224e9d8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224e9d8();

    /* 0x50 */ Unk_ov004_0223598c unk_50;
    /* 0x64 */ u32 unk_64[0x160 / 4];
    /* 0x1c4 */ u32 unk_1c4[0xe4 / 4];
    /* 0x2a8 */ u8 unk_2a8;
    /* 0x2a9 */ u8 unk_2a9;
    /* 0x2ac */ s32 unk_2ac;
    /* 0x2b0 */ u8 unk_2b0;
};

extern Unk_ov004_0224e9d8 *data_ov004_02251f80;

// ---------------------------------------------------------------------------------------------------------------
// Second scene object (vtable 0x0224eb9c).
struct Unk_ov004_02236004_Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

class Unk_ov004_0224eb9c;
class Unk_ov004_0224eb9c : public Unk_020d8c7c {
public:
    /* 0x50 */ u8 unk_50[0x0c];
    /* 0x5c */ Unk_ov004_02236004_Vec unk_5c;
    /* 0x68 */ u8 unk_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 unk_90[2];
    /* 0x92 */ s16 unk_92[2];
    /* 0x96 */ u8 unk_96[2];
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ u8 unk_9c[0xd8 - 0x9c];
    /* 0xd8 */ s32 unk_d8;
    /* 0xdc */ u8 unk_dc[0x10c - 0xdc];
    /* 0x10c */ s32 unk_10c;
    /* 0x110 */ u8 unk_110[0x120 - 0x110];
    /* 0x120 */ u8 unk_120[0x1d8 - 0x120];
    /* 0x1d8 */ u8 unk_1d8[0x22a - 0x1d8];
    /* 0x22a */ u8 unk_22a;
    /* 0x22b */ u8 unk_22b;
    /* 0x22c */ s16 unk_22c;
    /* 0x22e */ s16 unk_22e;
    /* 0x230 */ u8 unk_230[0x260 - 0x230];
    /* 0x260 */ s8 unk_260;
    /* 0x261 */ u8 unk_261;
    /* 0x262 */ u8 unk_262;

    s32 func_ov004_02235fd0();
    s32 func_ov004_02235fd8();
    s32 func_ov004_02235fe0();
    s32 func_ov004_02235ffc();
    BOOL func_ov004_02236004();
    void func_ov004_022361f4();
    void func_ov004_02236244();

    Unk_ov004_0224eb9c *func_ov004_02236320();
    s32 func_ov004_0223638c(s32 a, s32 b);
    s32 func_ov004_022364d0();
    void func_ov004_02236630(s32 a);
    s32 func_ov004_02236694();
    s32 func_ov004_022366cc();
    s32 func_ov004_02236838();
    s32 func_ov004_02236cb8();
};

// ---------------------------------------------------------------------------------------------------------------
extern "C" {
Unk_ov004_0224e9d8 *func_ov004_02235fb4();
Unk_ov004_0223598c *func_ov004_022359f0();
Unk_ov004_02235a0c *func_ov004_02235a04();
void func_ov004_02235d04();
u32 func_ov004_02235d10();
}

// Unk_ov004_0224e9d8

BOOL Unk_ov004_0224e9d8::vfunc_0c() {
    unk_50.func_ov004_02235994();
    func_ov004_02233b04(unk_1c4);
    if (func_ov004_02234af8() > 1) {
        func_ov004_022331e0(unk_64);
    }
    func_ov004_02235a04()->func_ov004_02235bc8();
    func_0209c15c(data_ov004_02252058);
    data_ov004_02251f80 = 0;
    func_ov004_022354d8();
    func_ov004_02235180();
    func_ov004_02235870(data_ov004_02251f84);
    return TRUE;
}

BOOL Unk_ov004_0224e9d8::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov004_0224e9d8::vfunc_18() {
    unk_50.func_ov004_022359b4();
    unk_50.func_ov004_0223599c();
    data_ov004_02251f7c = (data_ov004_02251f7c + 1) % 0x28;
    if (func_ov004_02234af8() > 1) {
        if (func_0204ff6c(data_021c4890) == 4) {
            if (!func_020b52d0()) {
                if (!func_020b52ac()) {
                    func_ov004_022333a8(unk_64);
                    func_ov004_02234774(this);
                    func_ov004_02233380(unk_64);
                }
            }
        }
    }
    func_ov004_02234908(this);
    func_ov004_022349a8(this);
    func_ov004_022354d8();
    func_ov004_02235180();
    return TRUE;
}

BOOL Unk_ov004_0224e9d8::vfunc_00() {
    if (func_020b52f8() || func_020b51a4()) {
        data_ov004_02251f78 = 1;
    }
    unk_2a9 = 1;
    unk_2a8 = 0;
    unk_2ac = 0;
    unk_2b0 = 0;
    data_ov004_02251f74 = func_ov004_02234ad4();
    func_ov004_0223588c(data_ov004_02251f84, func_ov004_02234af8());
    data_ov004_02251f80 = this;
    func_ov004_02235718();
    func_ov004_022356cc();
    func_ov004_022354d8();
    func_ov004_02235180();
    s32 flags = 0x1cc4;
    if (func_020b51fc()) {
        flags = 0x1c00;
    }
    func_0209c1a4(data_ov004_02252058, func_ov004_02234af8(), 0x2000, 0x80, flags, (void *)func_0205c158,
                  (void *)func_0205c13c, data_ov004_0224eb48);
    func_ov004_02234ad0(this);
    if (func_ov004_02234af8() > 1) {
        func_ov004_0223349c(unk_64);
    }
    func_ov004_02233b20(unk_1c4);
    func_ov004_02235a04()->func_ov004_02235c10();
    func_ov004_02234a48(this);
    return TRUE;
}

Unk_ov004_0224e9d8::~Unk_ov004_0224e9d8() {
    func_ov004_02233b3c(unk_1c4);
    func_ov004_02233544(unk_64);
    unk_50.func_ov004_022359d8();
}

Unk_ov004_0224e9d8::Unk_ov004_0224e9d8() {
    unk_50.func_ov004_022359e8();
    func_ov004_02233560(unk_64);
    func_ov004_02233b54(unk_1c4);
}

extern "C" Unk_ov004_0224e9d8 *func_ov004_02235fb4() {
    Unk_ov004_0224e9d8 *p = new Unk_ov004_0224e9d8;
    return p;
}

// ---------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224eb9c

s32 Unk_ov004_0224eb9c::func_ov004_02235fe0() {
    if (func_020b52f8()) {
        return func_ov004_02236cb8();
    }
    return 1;
}

s32 Unk_ov004_0224eb9c::func_ov004_02235fd0() {
    return func_ov004_02236694();
}

s32 Unk_ov004_0224eb9c::func_ov004_02235fd8() {
    return func_ov004_02236838();
}

s32 Unk_ov004_0224eb9c::func_ov004_02235ffc() {
    return func_ov004_022366cc();
}

BOOL Unk_ov004_0224eb9c::func_ov004_02236004() {
    s32 a = unk_8e;
    Unk_ov004_02236004_Vec *p6 = &unk_5c;
    s32 hit = 0;
    u8 i;
    func_ov004_0223638c(0x3c, 0xe38);
    unk_260 = func_ov004_022364d0();
    for (i = 0; i < 2; i++) {
        s32 o;
        if (i == 0) {
            o = func_02095204(4);
        } else {
            o = (s32)data_ov004_022523d4;
        }
        if (o != 0 && hit == 0) {
            Unk_ov004_02236004_Vec *q = (Unk_ov004_02236004_Vec *)(o + 0x5c);
            if (func_020e9650(p6, q) < 0x1800) {
                s32 d = func_02002bdc(p6, q);
                if ((d >= 0 && a >= 0) || (d <= 0 && a <= 0)) {
                    s32 t = d - a;
                    if (t < 0) {
                        t = -t;
                    }
                    if (t < 0x2aaa) {
                        unk_22e = unk_22e + 1;
                        unk_22a = 1;
                        hit = 1;
                        unk_98 = unk_d8;
                        func_ov004_02236630(1);
                    }
                }
            }
        }
    }
    s32 c = unk_22e;
    if (c > 0) {
        s32 k = c << 12;
        s32 r = func_01ffcb0c(0xcd, k);
        p6->unk_04 = func_01ffcb0c(0x99a - r, k);
        if (p6->unk_04 < 3) {
            p6->unk_04 = 3;
            unk_22e = 0;
            unk_22a = 0;
            func_020547a4(unk_120);
        } else {
            unk_22e = unk_22e + 1;
            func_020547e4(unk_120);
        }
    } else {
        s32 m = unk_260;
        if (m > 0) {
            if (m == 3) {
                if (unk_262 == 1 || unk_262 == 10) {
                    a = (s16)(a - 0xaaa);
                } else {
                    a = (s16)(a + 0xaaa);
                }
            } else if (m == 1 || unk_262 == 1) {
                a = (s16)(a - 0xaaa);
                unk_262 = 1;
            } else if (m == 2 || unk_262 == 2) {
                a = (s16)(a + 0xaaa);
                unk_262 = 2;
            }
        } else {
            if (data_ov004_022523c4 == 4) {
                a = (s16)(a + 0xaaa);
                data_ov004_022523c4 = -1;
            } else if (data_ov004_022523c4 == 2) {
                a = (s16)(a - 0xaaa);
            }
            data_ov004_022523c4 = data_ov004_022523c4 + 1;
            if (unk_262 < 10) {
                unk_262 = unk_262 * 10;
            }
        }
        func_ov004_02236630(m > 0 ? 0 : 0);
    }
    s16 *q92 = unk_92;
    q92[1] = a;
    unk_8e = q92[1];
    return TRUE;
}

void Unk_ov004_0224eb9c::func_ov004_022361f4() {
    func_02088bf8(unk_1d8, this, &unk_5c, 0x19a, 0x333, 0x81, 0xc, 0, 0xff, 0x1000);
    func_02089040(unk_1d8);
}

void Unk_ov004_0224eb9c::func_ov004_02236244() {
    u8 *self0 = (u8 *)&unk_5c;
    s32 res = 0;
    u8 i;
    s32 zero = 0;
    for (i = 0; i < 2; i++) {
        s32 o;
        if (i == 0) {
            o = func_02095204(4);
        } else {
            o = (s32)data_ov004_022523d4;
        }
        if (o != 0 && res == 0) {
            u8 *q = (u8 *)(o + 0x5c);
            unk_22c = unk_22c - 1;
            unk_98 = zero;
            if (unk_22c <= 0) {
                unk_10c = 1;
                unk_22c = (func_02063b8c(4) + 1) * 20;
                res = 1;
            } else if (*(s32 *)(o + 0x98) > 0) {
                s32 d = func_020e9650(self0, q);
                if (d < func_01ffcb0c(0x1000, 0x4000)) {
                    unk_22c = (func_02063b8c(4) + 2) * 20;
                    unk_10c = 1;
                    res = 2;
                }
            }
        }
    }
    if (res == 2) {
        Unk_ov004_0224eb9c *t = func_ov004_02236320();
        if (t) {
            s16 *q92 = unk_92;
            q92[1] = func_02002bdc(&t->unk_5c, self0);
            unk_8e = q92[1];
        }
    }
}

// ---------------------------------------------------------------------------------------------------------------
// Unk_ov004_02235a0c

void Unk_ov004_02235a0c::func_ov004_02235a2c() {
    for (u32 i = 0; i < 2; i++) {
        if (unk_00[i]) {
            func_020ed188((void *)unk_00[i]);
        }
    }
    func_ov004_02235c78();
}

static inline BOOL Unk_ov004_02235a54_InRange(u16 x, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (x >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov004_02235a0c::func_ov004_02235a54(u16 *p) {
    u16 v;
    s32 out;
    func_02061168(&v, p, 1);
    BOOL r = FALSE;
    volatile u16 *pv0 = &v;
    u32 a = *pv0;
    u32 b = *pv0;
    if (b >= 0x1100 && a <= 0x1143) {
        r = TRUE;
    }
    if (r) {
        BOOL in = FALSE;
        u32 x = *p;
        if (x < 0x1100 || x > 0x1143) {
        } else {
            in = TRUE;
        }
        unk_10 = in ? x - 0x1100 : -1;
        v = 0x4a64;
    } else if (a >= 0x1144 && a <= 0x1187) {
        {
            BOOL in = FALSE;
            u32 x = *p;
            if (x < 0x1144 || x > 0x1187) {
            } else {
                in = TRUE;
            }
            unk_10 = in ? x - 0x1144 : -1;
            v = 0x4a60;
        }
    } else if (a >= 0x1000 && a <= 0x10ff) {
        u32 idx = func_0204b354(&v);
        u32 t;
        if (idx < 0x40) {
            t = idx * 4 + 0x4a68;
        } else {
            t = 0x4a68;
        }
        v = t;
    }
    u16 *pv = &unk_08[unk_0c & 1];
    BOOL same;
    if (func_0204b2d4(p)) {
        s32 a = func_0204b25c(p);
        s32 b = func_0204b25c(pv);
        if (a == b) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    } else {
        if (*p == *pv) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    }
    if (!same) {
        u32 *slot = &unk_00[unk_0c & 1];
        if (*slot) {
            func_020ed188((void *)*slot);
            unk_00[unk_0c & 1] = 0;
        }
        u8 n = (u8)((unk_0c + 1) & 1);
        u32 *slot2 = &unk_00[n];
        if (*slot2 == 0) {
            if (func_ov004_02233f08(&out, &v, 2) == 3) {
                *slot2 = func_ov004_02235028(out);
                unk_08[n] = *p;
                unk_0c = n;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov004_02235a0c::func_ov004_02235bc8() {
    u32 *g = *(u32 **)data_021f482c;
    volatile s32 z0 = 0;
    volatile s32 z1 = 0;
    for (u32 i = 0; i < 2; i++) {
        u32 *p = (u32 *)((u8 *)this + i * 4);
        if (p[5]) {
            func_020e85fc(g, (void *)p[5]);
            p[5] = z0;
        }
        if (p[7]) {
            func_020e85fc(g, (void *)p[7]);
            p[7] = z1;
        }
    }
}

void Unk_ov004_02235a0c::func_ov004_02235c10() {
    u32 *g = *(u32 **)data_021f482c;
    for (u32 i = 0; i < 2; i++) {
        u32 *p = (u32 *)((u8 *)this + i * 4);
        if (p[5] == 0) {
            p[5] = (u32)func_020e8608(g, 0x10c4);
            u32 t5 = *(volatile u32 *)&p[5];
            if (t5) {
                t5 = (u32)func_020b8d98((void *)t5);
            }
            p[5] = t5;
        }
        if (p[7] == 0) {
            p[7] = (u32)func_020e8608(g, 0x20c4);
            u32 t7 = *(volatile u32 *)&p[7];
            if (t7) {
                t7 = (u32)func_0203c2cc((void *)t7);
            }
            p[7] = t7;
        }
    }
}

s32 Unk_ov004_02235a0c::func_ov004_02235c74() {
    return unk_10;
}

Unk_ov004_02235a0c *Unk_ov004_02235a0c::func_ov004_02235cc0() {
    __cxa_vec_ctor(unk_08, 2, 2, (void *(*)(void *))func_0203442c, (void *(*)(void *, s32))func_02004b60);
    func_ov004_02235c78();
    u32 i = 0;
    u32 z = i;
    for (; i < 2; i++) {
        unk_14[i] = z;
        unk_1c[i] = z;
    }
    return this;
}

Unk_ov004_02235a0c *Unk_ov004_02235a0c::func_ov004_02235c9c() {
    func_ov004_02235c78();
    __cxa_vec_cleanup(unk_08, 2, 2, (void *(*)(void *, s32))func_02004b60);
    return this;
}

void Unk_ov004_02235a0c::func_ov004_02235c78() {
    u32 i = 0;
    u32 z = i;
    for (; i < 2; i++) {
        unk_00[i] = z;
        unk_08[i] = 0xfff1;
        unk_0c = z;
    }
}

u32 Unk_ov004_02235a0c::func_ov004_02235a0c() {
    return unk_1c[unk_0c & 1];
}

u32 Unk_ov004_02235a0c::func_ov004_02235a1c() {
    return unk_14[unk_0c & 1];
}

// ---------------------------------------------------------------------------------------------------------------
// Unk_ov004_0223598c

void Unk_ov004_02235984::func_ov004_02235984() {
    unk_1c = 0;
}

void Unk_ov004_0223598c::func_ov004_02235990() {
}

void Unk_ov004_0223598c::func_ov004_022359e8() {
    unk_10 = 0;
}

void *Unk_ov004_0223598c::func_ov004_022359d8() {
    func_020f3a18(this);
    return this;
}

void Unk_ov004_0223598c::func_ov004_022359b4() {
    if (func_ov004_0223598c() == 0) {
        if (func_02003ccc()) {
            func_02003dc4(this);
            unk_10 = 1;
        }
    }
}

void Unk_ov004_0223598c::func_ov004_0223599c() {
    if (func_ov004_0223598c()) {
        func_02003dbc(this);
    }
}

u32 Unk_ov004_0223598c::func_ov004_02235994() {
    return func_ov004_0223598c();
}

u32 Unk_ov004_0223598c::func_ov004_0223598c() {
    return unk_10;
}

// ---------------------------------------------------------------------------------------------------------------
// free functions

extern "C" Unk_ov004_0223598c *func_ov004_022359f0() {
    Unk_ov004_0224e9d8 *o = data_ov004_02251f80;
    if (o) {
        return &o->unk_50;
    }
    return 0;
}

extern "C" void func_ov004_02235d04() {
    data_ov004_02251f74 = 1;
}

extern "C" u32 func_ov004_02235d10() {
    return data_ov004_02251f74;
}

extern "C" Unk_ov004_02235a0c *func_ov004_02235a04() {
    return &data_ov004_02252070;
}
