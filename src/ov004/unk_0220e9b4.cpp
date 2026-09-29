#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_ov004_022488d8 {
public:
    Unk_ov004_022488d8();
    virtual ~Unk_ov004_022488d8();
};

// Element of the 3-element container (0x1c bytes)
struct Unk_ov004_02205b14_Obj {
    u8 pad[0x18];
    u8 unk_18;
};

class Unk_ov004_02205b14 {
public:
    Unk_ov004_02205b14();
    ~Unk_ov004_02205b14();
    void func_ov004_02205b14();
    u32 func_ov004_02205bcc(u32 a, u32 b, u32 c);
    u32 func_ov004_02205be4(u32 a, u32 b, u32 c);

    /* 0x00 */ u8 pad_00[0x14];
    /* 0x14 */ s8 unk_14;
    /* 0x15 */ u8 pad_15[3];
    /* 0x18 */ Unk_ov004_02205b14_Obj *unk_18;
};

class Unk_ov004_022059f4 {
public:
    Unk_ov004_022059f4();
    ~Unk_ov004_022059f4();
    void func_ov004_022059f4();
    u32 func_ov004_02205a1c(u32 a, u32 b, u32 c);
    u32 func_ov004_02205a64(u32 a, u32 b);

    /* 0x00 */ Unk_ov004_02205b14 unk_00[3];
    /* 0x54 */ u8 unk_54;
};

struct Unk_ov004_0220ebd8_Ptr {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_ov004_022488d8 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_00();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64(s32 a, void *b);
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_6c(s32 a, void *b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u32 vfunc_74(u32 a);
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual u32 vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();

    // Callees outside this range
    void func_ov004_02208ba8(s32 a, s32 b, s32 c, u32 d);
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov004_02208980();
    BOOL func_ov004_02209108();
    BOOL func_ov004_02209150();
    void func_ov004_0220878c();
    BOOL func_ov004_022057bc();
    BOOL func_ov004_02209ccc();

    /* 0x0f0 */ u8 pad_0f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    /* 0x10b */ u8 pad_10b[0x128 - 0x10b];
    /* 0x128 */ Unk_ov004_0220ebd8_Ptr *unk_128;
    /* 0x12c */ u8 pad_12c[0x534 - 0x12c];
    /* 0x534 */ u8 f_534[0x590 - 0x534];
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u8 f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 f_73c[0x768 - 0x73c];
    /* 0x768 */ u32 unk_768;
    /* 0x76c */ u8 f_76c[0x778 - 0x76c];
    /* 0x778 */ u8 unk_778;
    /* 0x779 */ u8 pad_779;
    /* 0x77a */ u8 unk_77a;
    /* 0x77b */ u8 pad_77b;
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ u8 f_780[0x840 - 0x780];
};

class Unk_ov004_0224a17c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a17c();
    virtual ~Unk_ov004_0224a17c();

    virtual BOOL vfunc_0c();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u32 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();

    void func_ov004_0220e950();
    BOOL func_ov004_0220e9b4();
    void func_ov004_0220ea20();
    BOOL func_ov004_0220ea74();
    void func_ov004_0220ead4();
    void func_ov004_0220ebd8();
    BOOL func_ov004_0220ec08();
    BOOL func_ov004_0220ec0c();
    BOOL func_ov004_0220ec30();
    BOOL func_ov004_0220ed14();
    BOOL func_ov004_0220ed20();
    void func_ov004_0220ed24();
    BOOL func_ov004_0220ed88();
    BOOL func_ov004_0220eda4();
    BOOL func_ov004_0220edb0();
    void func_ov004_0220edb4();
    BOOL func_ov004_0220edb8();
    void func_ov004_0220edbc();
    BOOL func_ov004_0220ee64(s32 a);
    void func_ov004_0220ef5c(u32 a, BOOL b);
    void func_ov004_0220efa0(u32 a);
    void func_ov004_0220f280();
    void func_ov004_0220f29c();
    void func_ov004_0220f2a8();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 pad_842[2];
    /* 0x844 */ Unk_ov004_022059f4 unk_844;
    /* 0x89c */ u8 unk_89c;
    /* 0x89d */ u8 pad_89d[3];
    /* 0x8a0 */ s32 unk_8a0;
};

class Unk_ov004_0224a760 : public Unk_ov004_0224882c {
public:
    virtual BOOL vfunc_64(s32 a, void *b);
};

extern "C" {
extern u8 data_ov004_02240028[];
extern u16 data_ov004_0224f9ac;
extern u8 data_021dfd8c[];
extern u8 data_ov004_0224bbb0[];
void func_0203e47c(void *self, Unk_ov004_022488d8 *sec);
void func_0203e488(void *self, Unk_ov004_022488d8 *sec);
s32 func_0203d67c(void *self);
s32 func_0203d704(void *self, s32 a);
s32 func_02094f20();
void func_020a710c(void *p, void *q);
s32 func_020b51a4();
u32 func_020b51d4();
s32 func_020b52f8();
s32 func_0207bf60(void *p, u32 a);
u32 func_0207e364();
void func_02062650(void *out, u16 *in);
void func_0206260c(void *p);
void func_020679ec(void *a, s32 b, void *c, s32 d);
u16 *func_020601cc();
s32 func_02060158();
void func_02060190(u16 *p);
s32 func_0206ec6c();
s32 func_0206ed18();
u16 func_0206e714();
s32 func_0206eca4(s32 a);
void func_02051cc8(void *self, s32 a, u8 b, s32 c);
void func_02051da4(void *self, s32 a, u8 b, s32 c);
void func_02034d84(u16 a);
void func_02034e10(s32 a, u16 b, s32 c, s32 d);
void func_ov004_02205c44(void *p, s32 a, s32 b);
BOOL func_ov004_02205c6c(void *p);
u8 func_ov004_02205c7c(void *p);
s32 func_ov004_02208894();
s32 func_ov004_02234ad4();
void func_ov004_02209ccc(void *self);
void func_ov004_02234c7c(s32 a, void (*f)(void *), s32 c);
}

typedef void (Unk_ov004_0224a17c::*Unk_ov004_0220ead4_Fn)();
typedef BOOL (Unk_ov004_0224a17c::*Unk_ov004_0220eb40_Fn)();

static inline BOOL Unk_ov004_0220eff4_InRange(volatile u16 *p) {
    u32 hi = *p;
    u32 lo = *p;
    BOOL r = FALSE;
    if (lo >= 0x1323 && hi <= 0x1368) r = TRUE;
    return r;
}

static inline u16 Unk_ov004_0220ec30_Val(u32 t) {
    if (t < 0x46) {
        return t + 0x1323;
    }
    return 0x1323;
}

BOOL Unk_ov004_0224a17c::func_ov004_0220e9b4() {
    func_ov004_02209150();
    func_ov004_02234c7c(0, ::func_ov004_02209ccc, 0);
    func_ov004_02205c44(f_73c, 1, 0);
    u8 *p = &unk_778;
    unk_841 = *p;
    func_ov004_0220efa0(*p);
    if (unk_77c == 0x29) {
        func_ov004_02208ba8(1, 0, 0x1000, 0);
    }
    return TRUE;
}

void Unk_ov004_0224a17c::func_ov004_0220ea20() {
    if (unk_77c == 0x29) {
        func_ov004_02208980();
    }
    unk_844.func_ov004_02205a1c(0, 1, 0);
    if (func_ov004_02205c6c(f_73c)) {
        func_ov004_02205c44(f_73c, 0, 0);
        func_0203d704(this, 0);
        func_02094f20();
    }
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ea74() {
    func_ov004_02209108();
    func_ov004_02205c44(f_73c, 0, 0);
    if (unk_77a == 0) {
        func_ov004_0220ef5c(unk_841, 1);
    }
    if (unk_77c == 0x29) {
        func_ov004_02208ba8(0, 1, 0x1000, 0);
    }
    return TRUE;
}

void Unk_ov004_0224a17c::func_ov004_0220ead4() {
    static Unk_ov004_0220ead4_Fn tbl[2] = {
        &Unk_ov004_0224a17c::func_ov004_0220ea20,
        &Unk_ov004_0224a17c::func_ov004_0220e950,
    };
    if (unk_89c < 2) {
        (this->*tbl[unk_89c])();
    }
}

BOOL Unk_ov004_0224a17c::vfunc_70(u32 a, u8 b) {
    func_ov004_0220878c();
    static Unk_ov004_0220eb40_Fn tbl[2] = {
        &Unk_ov004_0224a17c::func_ov004_0220ea74,
        &Unk_ov004_0224a17c::func_ov004_0220e9b4,
    };
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_89c = a;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_0224a17c::vfunc_74(u32 a) {
    if (a < 2) {
        return data_ov004_02240028[a];
    }
    return 0;
}

void Unk_ov004_0224a17c::func_ov004_0220ebd8() {
    if (unk_128 != NULL) {
        if (unk_128->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ec08() {
    return TRUE;
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ec0c() {
    if (unk_128 != NULL) {
        if (unk_128->unk_04 != 0) {
            func_ov004_0220ee64(5);
        }
    }
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ec30() {
    func_0203e488(this, this);
    unk_128->unk_08 = 1;
    {
        Unk_ov004_022488d8 &sec = *this;
        func_020a710c(&sec, data_ov004_0224bbb0);
    }
    struct { u32 pad; u16 v; } l;
    u32 buf1[9];
    u32 buf2[9];
    if (func_020b51a4()) {
        u32 t = 0;
        u32 r = func_020b51d4();
        if (func_0207bf60(data_021dfd8c, r)) {
            t = func_0207e364();
        }
        l.v = Unk_ov004_0220ec30_Val(t);
        func_02062650(buf1, &l.v);
        unk_10a = 5;
        func_020679ec(unk_128, 0, buf1, 7);
        func_0206260c(buf1);
    } else {
        u16 *p = func_020601cc();
        BOOL ok = FALSE;
        if (*p >= 0x1323 && *p <= 0x1368) ok = TRUE;
        if (ok) {
            func_02062650(buf2, p);
            unk_10a = 5;
            func_020679ec(unk_128, 0, buf2, 7);
            func_0206260c(buf2);
        } else {
            unk_10a = 6;
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ed14() {
    return func_ov004_0220ee64(4);
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ed20() {
    return TRUE;
}

void Unk_ov004_0224a17c::func_ov004_0220ed24() {
    if (func_0206ec6c()) {
        if (func_0206ed18()) {
            volatile u16 vv;
            vv = func_0206e714();
            BOOL ok = FALSE;
            u32 v = vv;
            if (v < 0x1323 || v > 0x1368) {
            } else {
                ok = TRUE;
            }
            s32 t;
            if (ok) {
                t = v - 0x1323;
            } else {
                t = -1;
            }
            func_02051cc8(this, 1, t, 1);
        }
        func_0203d67c(this);
    }
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ed88() {
    if (func_0206eca4(0x40)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224a17c::func_ov004_0220eda4() {
    return func_ov004_0220ee64(2);
}

BOOL Unk_ov004_0224a17c::func_ov004_0220edb0() {
    return TRUE;
}

void Unk_ov004_0224a17c::func_ov004_0220edb4() {
}

BOOL Unk_ov004_0224a17c::func_ov004_0220edb8() {
    return TRUE;
}

void Unk_ov004_0224a17c::func_ov004_0220edbc() {
    static Unk_ov004_0220ead4_Fn tbl[6] = {
        &Unk_ov004_0224a17c::func_ov004_0220edb4,
        (Unk_ov004_0220ead4_Fn)&Unk_ov004_0224a17c::func_ov004_0220eda4,
        &Unk_ov004_0224a17c::func_ov004_0220ed24,
        (Unk_ov004_0220ead4_Fn)&Unk_ov004_0224a17c::func_ov004_0220ed14,
        (Unk_ov004_0220ead4_Fn)&Unk_ov004_0224a17c::func_ov004_0220ec0c,
        &Unk_ov004_0224a17c::func_ov004_0220ebd8,
    };
    if (unk_8a0 < 6) {
        (this->*tbl[unk_8a0])();
    }
}

BOOL Unk_ov004_0224a17c::func_ov004_0220ee64(s32 a) {
    static Unk_ov004_0220eb40_Fn tbl[6] = {
        &Unk_ov004_0224a17c::func_ov004_0220edb8,
        &Unk_ov004_0224a17c::func_ov004_0220edb0,
        &Unk_ov004_0224a17c::func_ov004_0220ed88,
        &Unk_ov004_0224a17c::func_ov004_0220ed20,
        &Unk_ov004_0224a17c::func_ov004_0220ec30,
        &Unk_ov004_0224a17c::func_ov004_0220ec08,
    };
    if (a < 6) {
        if ((this->*tbl[a])()) {
            unk_8a0 = a;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224a17c::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        if (func_020b52f8() && func_ov004_02208894()) {
            func_ov004_0220ee64(1);
        } else {
            func_ov004_0220ee64(3);
        }
        break;
    case 8:
        func_ov004_0220ee64(0);
        break;
    }
}

void Unk_ov004_0224a17c::func_ov004_0220ef5c(u32 a, BOOL b) {
    if (unk_840 != 0) {
        if (a < 0x46) {
            func_02034d84(a + 0xb0);
            if (b) {
                u16 v = 0xfff1;
                func_02060190(&v);
            }
            unk_840 = 0;
        }
    }
}

void Unk_ov004_0224a17c::func_ov004_0220efa0(u32 a) {
    if (unk_840 == 0) {
        if (a < 0x46) {
            func_02034e10(0x11, a + 0xb0, 0x7f, 0);
            u16 v = Unk_ov004_0220ec30_Val(a);
            func_02060190(&v);
            unk_840 = 1;
        }
    }
}

BOOL Unk_ov004_0224a17c::vfunc_0c() {
    BOOL t = func_ov004_022057bc();
    func_ov004_0220ef5c(unk_841, t);
    BOOL r = FALSE;
    volatile u16 *pg = &data_ov004_0224f9ac;
    u32 hi = *pg;
    u32 lo = *pg;
    if (lo >= 0x1323 && hi <= 0x1368) r = TRUE;
    if (r) {
        data_ov004_0224f9ac = 0xfff1;
    }
    return TRUE;
}

BOOL Unk_ov004_0224a17c::vfunc_84() {
    vfunc_80();
}

BOOL Unk_ov004_0224a17c::vfunc_80() {
    func_ov004_0220ead4();
    func_ov004_0220edbc();
    unk_844.func_ov004_022059f4();
    return TRUE;
}

BOOL Unk_ov004_0224a17c::vfunc_7c() {
    if (unk_77c == 0x29 || unk_77c == 0x13) {
        func_ov004_02208de0(0, 0, 0x1000, 0);
    }
    u32 r4 = unk_590;
    u32 c = func_ov004_02205c7c(f_73c);
    unk_844.func_ov004_02205a64(r4, c);
    if (unk_768 == 1) {
        func_02051da4(this, 0, 0xff, 1);
    } else if (func_ov004_02205c7c(f_73c) != 0 && func_ov004_02234ad4() == 0) {
        if (func_020b51a4()) {
            u32 t = 0;
            u32 r = func_020b51d4();
            if (func_0207bf60(data_021dfd8c, r)) {
                t = func_0207e364();
            }
            BOOL f = FALSE;
            volatile u16 *pg = &data_ov004_0224f9ac;
            u32 hi = *pg;
            u32 lo = *pg;
            if (lo >= 0x1323 && hi <= 0x1368) f = TRUE;
            if (f) {
                vfunc_70(0, 0xff);
            } else if (vfunc_70(1, t)) {
                data_ov004_0224f9ac = Unk_ov004_0220ec30_Val(t);
            }
        } else {
            volatile u16 v;
            v = *func_020601cc();
            BOOL f = FALSE;
            u32 hi = v;
            u32 lo = v;
            if (lo >= 0x1323 && hi <= 0x1368) f = TRUE;
            if (f) {
                s32 x;
                if (hi >= 0x1323 && hi <= 0x1368) {
                    x = hi - 0x1323;
                } else {
                    x = -1;
                }
                vfunc_70(1, x);
            } else {
                func_02060158();
                vfunc_70(0, 0xff);
            }
        }
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224a17c::~Unk_ov004_0224a17c() {}

Unk_ov004_0224a17c::Unk_ov004_0224a17c() {}

void Unk_ov004_0224a17c::func_ov004_0220f280() {
    new Unk_ov004_0224a17c;
}

void Unk_ov004_0224a17c::func_ov004_0220f29c() {
    *((u8 *)this + 0x847) = 1;
}

void Unk_ov004_0224a17c::func_ov004_0220f2a8() {
    *((u8 *)this + 0x846) = 1;
}

BOOL Unk_ov004_0224a760::vfunc_64(s32 a, void *b) {
    return Unk_ov004_0224882c::vfunc_6c(a, b);
}
