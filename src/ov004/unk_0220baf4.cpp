#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_0220bc80_V3 {
    s32 x, y, z;
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

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
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
    void func_020a710c(const char *s);
};

struct Unk_ov004_0220bdbc_P {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_ov004_0220c0bc_Mtx {
    s32 m[9];
};

struct Unk_ov004_0220c0bc_B {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 pad_04[0x24];
    /* 0x28 */ s32 unk_28[9];
};

struct Unk_ov004_0220c0bc_Obj {
    u8 pad_00[0xb4];
    /* 0xb4 */ Unk_ov004_0220c0bc_B *unk_b4;
};

struct Unk_ov004_0220c0bc_Actor {
    u8 pad_00[0x8e];
    /* 0x8e */ s16 unk_8e;
};

class Unk_ov004_0224882c;

extern "C" {
void *func_ov004_02209ef0(u32 size);
}

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_ov004_022488d8 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void operator delete(void *p);
    static void *operator new(unsigned long size) { return func_ov004_02209ef0(size); }

    virtual BOOL vfunc_00();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
    virtual void vfunc_6c(s32 a, Unk_ov004_0220c0bc_Obj *p);
    virtual BOOL vfunc_70(s32 a, u32 v);
    virtual BOOL vfunc_74();
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual u32 vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98(BOOL v);
    virtual void vfunc_9c(BOOL v);

    u32 func_ov004_022087a4();
    Unk_ov004_0220c0bc_Actor *func_ov004_022087b0();

    /* 0x0f0 */ u8 f_0f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    /* 0x10b */ u8 f_10b[0x128 - 0x10b];
    /* 0x128 */ Unk_ov004_0220bdbc_P *unk_128;
    /* 0x12c */ u8 f_12c[0x178 - 0x12c];
    /* 0x178 */ u8 f_178[0x188 - 0x178];
    /* 0x188 */ u8 f_188[0x1cc - 0x188];
    /* 0x1cc */ u8 f_1cc[0x24c - 0x1cc];
    /* 0x24c */ u8 f_24c[0x280 - 0x24c];
    /* 0x280 */ u32 unk_280;
    /* 0x284 */ u8 f_284[0x288 - 0x284];
    /* 0x288 */ u8 f_288[0x534 - 0x288];
    /* 0x534 */ u8 f_534[0x590 - 0x534];
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 f_594[0x628 - 0x594];
    /* 0x628 */ u8 f_628[0x6c8 - 0x628];
    /* 0x6c8 */ u8 f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 f_73c[2];
    /* 0x73e */ u8 f_73e[0x744 - 0x73e];
    /* 0x744 */ u8 f_744[0x760 - 0x744];
    /* 0x760 */ u8 f_760[0x768 - 0x760];
    /* 0x768 */ u32 unk_768;
    /* 0x76c */ u8 f_76c[0x77a - 0x76c];
    /* 0x77a */ u8 unk_77a;
    /* 0x77b */ u8 pad_77b;
    /* 0x77c */ u32 unk_77c;
    /* 0x780 */ u8 f_780[0x794 - 0x780];
    /* 0x794 */ u8 f_794[0x7b4 - 0x794];
    /* 0x7b4 */ Unk_ov004_0220bc80_V3 unk_7b4;
    /* 0x7c0 */ u8 f_7c0[0x840 - 0x7c0];
};

typedef Unk_ov004_0224882c Unk_ov004_Base;

extern "C" {
extern u16 data_ov004_022486f8;
extern char data_ov004_0224bb70[];
extern char data_ov004_0224bb80[];
extern char data_ov004_0224bb88[];
extern s16 data_02135f44[];

u32 func_ov004_02233118(u32 a);
BOOL func_ov004_02205c6c(void *p);
s32 func_ov004_02205e78(void *p);
u32 func_0204b248(u32 a, s32 b);
void func_02003a3c(void *p, u32 c);
void func_020039ec(void *p);
void func_020039f4(void *p, void *v);
void func_02003a44(void *p);
void func_02051cc8(void *p, s32 a, s32 b, s32 c);
void func_0203e47c(void *p, Unk_ov004_022488d8 *q);
void func_0203e488(void *p, Unk_ov004_022488d8 *q);
s32 func_0203d67c(void *p);
s32 func_0203d704(void *p, s32 a);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffb4b4(void *out, s32 a, s32 b);
void func_01ffb56c(void *a, void *b, void *c);
s32 func_020e761c(s32 *p, s32 target, s32 step);
s32 func_02056fcc(u32 a, const char *s);
void func_02003e50(void *p);
void func_02003e70(void *p, s32 a, s32 b, s32 c);
void func_02003e80(void *p, void *v);
void func_02003ecc(void *p);
u32 func_020716cc(void);
u32 func_020716e0(u32 a, u32 b);
s32 func_02071834(u32 a, u32 b);
void func_02056744(u32 a, const char *s, u32 c, s32 d, s32 e);
void func_020f5010(void *p);
void func_020f5014(void *p);
}

// ------------------------------------------------------------------ class A (vtable 0x02249f24)
class Unk_ov004_02249f24 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249f24();
    virtual ~Unk_ov004_02249f24();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(s32 a, u32 v);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    BOOL func_ov004_0220b9d4();
    BOOL func_ov004_0220ba84();
    void func_ov004_0220ba88();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
};

typedef BOOL (Unk_ov004_02249f24::*Unk_ov004_0220baf4_Fn)();

BOOL Unk_ov004_02249f24::vfunc_70(s32 a, u32 v) {
    Unk_ov004_0224882c::vfunc_70(a, v);
    static Unk_ov004_0220baf4_Fn tbl[2] = {
        &Unk_ov004_02249f24::func_ov004_0220ba84,
        &Unk_ov004_02249f24::func_ov004_0220b9d4,
    };
    if ((u32)a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_02249f24::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249f24::vfunc_80() {
    func_ov004_0220ba88();
    return TRUE;
}

BOOL Unk_ov004_02249f24::vfunc_7c() {
    vfunc_70(0, 0xff);
    return TRUE;
}

Unk_ov004_02249f24::~Unk_ov004_02249f24() {}

Unk_ov004_02249f24::Unk_ov004_02249f24() {}

extern "C" void func_ov004_0220bc18() {
    new Unk_ov004_02249f24;
}

// ------------------------------------------------------------------ class B (vtable 0x0224a050)
struct Unk_ov004_0224a050_Obj {
    u32 pad[3];
    Unk_ov004_0224a050_Obj() { func_020f5014(this); }
    ~Unk_ov004_0224a050_Obj() { func_020f5010(this); }
};

class Unk_ov004_0224a050 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a050();
    virtual ~Unk_ov004_0224a050();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(s32 a, u32 v);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();

    /* 0x840 */ Unk_ov004_0224a050_Obj unk_840;
};

BOOL Unk_ov004_0224a050::vfunc_70(s32 a, u32 v) {
    Unk_ov004_0224882c::vfunc_70(a, v);
    u32 c = func_ov004_02233118(func_ov004_022087a4());
    if (c != data_ov004_022486f8) {
        func_02003a3c(&unk_840, c);
    }
    return TRUE;
}

BOOL Unk_ov004_0224a050::vfunc_0c() {
    func_020039ec(&unk_840);
    return TRUE;
}

BOOL Unk_ov004_0224a050::vfunc_84() {
    Unk_ov004_0220bc80_V3 v;
    v.x = unk_7b4.x;
    v.y = unk_7b4.y;
    v.z = unk_7b4.z;
    func_020039f4(&unk_840, &v);
    return TRUE;
}

BOOL Unk_ov004_0224a050::vfunc_80() {
    if (func_ov004_02205c6c(f_73c)) {
        func_02051cc8(this, 0, 0xff, 1);
    }
    vfunc_84();
    return TRUE;
}

BOOL Unk_ov004_0224a050::vfunc_7c() {
    func_02003a44(&unk_840);
    return TRUE;
}

Unk_ov004_0224a050::~Unk_ov004_0224a050() {}

Unk_ov004_0224a050::Unk_ov004_0224a050() {}

extern "C" void func_ov004_0220bda0() {
    new Unk_ov004_0224a050;
}

// ------------------------------------------------------------------ class C (vtable 0x0224a500)
class Unk_ov004_0224a500 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a500();
    virtual ~Unk_ov004_0224a500();
    virtual BOOL vfunc_0c();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220bdbc();
    BOOL func_ov004_0220bdec();
    void func_ov004_0220bdf0();
    BOOL func_ov004_0220be14();
    void func_ov004_0220be90();
    BOOL func_ov004_0220be9c();
    void func_ov004_0220bea0();
    BOOL func_ov004_0220bec4();
    void func_ov004_0220bec8();
    BOOL func_ov004_0220bf54(s32 idx);

    /* 0x840 */ s32 unk_840;
};

typedef BOOL (Unk_ov004_0224a500::*Unk_ov004_0224a500_Fn)();
typedef void (Unk_ov004_0224a500::*Unk_ov004_0220bec8_Fn)();

void Unk_ov004_0224a500::func_ov004_0220bdbc() {
    if (unk_128) {
        if (unk_128->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov004_0224a500::func_ov004_0220bdec() {
    return TRUE;
}

void Unk_ov004_0224a500::func_ov004_0220bdf0() {
    if (unk_128) {
        if (unk_128->unk_04) {
            func_ov004_0220bf54(3);
        }
    }
}


struct Unk_ov004_0220be14_Chk {
    static inline BOOL RV(volatile u16 *p, u32 lo, u32 hi) {
        BOOL r = FALSE;
        if (*p >= lo && *p <= hi) r = TRUE;
        return r;
    }
    static inline BOOL R(u16 *p, u32 lo, u32 hi) {
        BOOL r = FALSE;
        if (*p >= lo && *p <= hi) r = TRUE;
        return r;
    }
};

BOOL Unk_ov004_0224a500::func_ov004_0220be14() {
    volatile u16 va[2];
    s32 idx;
    func_0203e488(this, this);
    unk_128->unk_08 = 1;
    va[1] = func_0204b248(func_ov004_022087a4(), 0);
    BOOL r = FALSE;
    u32 t = va[1];
    if (t >= 0x47d8 && t <= 0x4a47) r = TRUE;
    if (r) idx = (s32)(t - 0x47d8) >> 2;
    else idx = -1;
    Unk_ov004_022488d8::func_020a710c(data_ov004_0224bb70);
    unk_10a = idx;
    return TRUE;
}

void Unk_ov004_0224a500::func_ov004_0220be90() {
    func_ov004_0220bf54(2);
}

BOOL Unk_ov004_0224a500::func_ov004_0220be9c() {
    return TRUE;
}

void Unk_ov004_0224a500::func_ov004_0220bea0() {
    if (func_ov004_02205c6c(f_73c)) {
        func_0203d704(this, 0);
    }
}

BOOL Unk_ov004_0224a500::func_ov004_0220bec4() {
    return TRUE;
}

void Unk_ov004_0224a500::func_ov004_0220bec8() {
    static Unk_ov004_0220bec8_Fn tbl[4] = {
        &Unk_ov004_0224a500::func_ov004_0220bea0,
        &Unk_ov004_0224a500::func_ov004_0220be90,
        &Unk_ov004_0224a500::func_ov004_0220bdf0,
        &Unk_ov004_0224a500::func_ov004_0220bdbc,
    };
    if (unk_840 < 4) {
        (this->*tbl[unk_840])();
    }
}

BOOL Unk_ov004_0224a500::func_ov004_0220bf54(s32 idx) {
    static Unk_ov004_0224a500_Fn tbl[4] = {
        &Unk_ov004_0224a500::func_ov004_0220bec4,
        &Unk_ov004_0224a500::func_ov004_0220be9c,
        &Unk_ov004_0224a500::func_ov004_0220be14,
        &Unk_ov004_0224a500::func_ov004_0220bdec,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224a500::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        func_ov004_0220bf54(1);
        break;
    case 8:
        func_ov004_0220bf54(0);
        break;
    }
}

BOOL Unk_ov004_0224a500::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a500::vfunc_80() {
    func_ov004_0220bec8();
    return TRUE;
}

BOOL Unk_ov004_0224a500::vfunc_7c() {
    return TRUE;
}

Unk_ov004_0224a500::~Unk_ov004_0224a500() {}

Unk_ov004_0224a500::Unk_ov004_0224a500() {}

extern "C" void func_ov004_0220c0a0() {
    new Unk_ov004_0224a500;
}

// ------------------------------------------------------------------ class D (vtable 0x0224a62c)
class Unk_ov004_0224a62c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a62c();
    virtual ~Unk_ov004_0224a62c();
    virtual BOOL vfunc_0c();
    virtual void vfunc_6c(s32 a, Unk_ov004_0220c0bc_Obj *p);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual void vfunc_98(BOOL v);
    virtual void vfunc_9c(BOOL v);

    /* 0x840 */ s16 unk_840;
    /* 0x842 */ volatile s16 unk_842;
    /* 0x844 */ volatile s16 unk_844;
    /* 0x846 */ s16 pad_846;
    /* 0x848 */ volatile s32 unk_848;
    /* 0x84c */ s32 unk_84c;
};

void Unk_ov004_0224a62c::vfunc_6c(s32 a, Unk_ov004_0220c0bc_Obj *p) {
    if (unk_840 == a) {
        s32 *dst = &p->unk_b4->unk_28[0];
        s32 t = func_01ffcb0c(func_01ffc5a4(unk_84c, 0x168000), 0x10000000);
        s32 r = (t << 4) >> 16;
        s32 ang;
        Unk_ov004_0220c0bc_Actor *act = func_ov004_022087b0();
        if (act) {
            s32 e = act->unk_8e;
            ang = (s16)(r - (e + func_ov004_02205e78(f_178)));
        } else {
            ang = (s16)(r - *(s16 *)((u8 *)this + 0x8e));
        }
        s32 idx = ((u16)ang >> 4) * 2;
        Unk_ov004_0220c0bc_Mtx mtx;
        func_01ffb4b4(&mtx, data_02135f44[idx], data_02135f44[idx + 1]);
        if (p->unk_b4->unk_00 & 2) {
            *(Unk_ov004_0220c0bc_Mtx *)dst = mtx;
        } else {
            func_01ffb56c(dst, &mtx, dst);
        }
        p->unk_b4->unk_00 &= ~2;
    }
}

void Unk_ov004_0224a62c::vfunc_9c(BOOL v) {
    if (++unk_842 == 8) {
        unk_844 = 0;
        if (v) {
            unk_848 = func_01ffcb0c(unk_848, data_02135f44[((u16)unk_844 >> 4) * 2]) + 0x2d000;
            if (unk_848 > 0x2d000) unk_848 = 0x2d000;
        } else {
            unk_848 = func_01ffcb0c(unk_848, data_02135f44[((u16)unk_844 >> 4) * 2]) - 0x2d000;
            if (unk_848 < -0x2d000) unk_848 = -0x2d000;
        }
    }
}

void Unk_ov004_0224a62c::vfunc_98(BOOL v) {
    unk_842 = 0;
}

BOOL Unk_ov004_0224a62c::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a62c::vfunc_80() {
    func_020e761c((s32 *)&unk_848, 0, 0x5a00);
    if (unk_848 == 0) {
        unk_844 = 0;
    } else {
        unk_844 = unk_844 + 0x960;
    }
    func_020e761c(&unk_84c, func_01ffcb0c(unk_848, unk_844), 0x5a00);
    return TRUE;
}

BOOL Unk_ov004_0224a62c::vfunc_7c() {
    unk_840 = func_02056fcc(unk_590, data_ov004_0224bb80);
    return TRUE;
}

Unk_ov004_0224a62c::~Unk_ov004_0224a62c() {}

Unk_ov004_0224a62c::Unk_ov004_0224a62c() {
    unk_840 = -1;
}

extern "C" void func_ov004_0220c32c() {
    new Unk_ov004_0224a62c;
}

// ------------------------------------------------------------------ class F (vtable 0x0224a884)
class Unk_ov004_0224a884 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a884();
    virtual ~Unk_ov004_0224a884();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ s32 unk_840;
    /* 0x844 */ u32 unk_844[0x40 / 4];
    /* 0x884 */ u8 unk_884;
};

BOOL Unk_ov004_0224a884::vfunc_0c() {
    if (unk_884) {
        func_02003e50(&unk_844);
    }
    return TRUE;
}

BOOL Unk_ov004_0224a884::vfunc_80() {
    if (unk_884) {
        Unk_ov004_0220bc80_V3 v = unk_7b4;
        if (func_02071834(func_020716cc(), unk_840)) {
            func_02003e70(&unk_844, 0x50, 0x7f, 0);
        }
        func_02003e80(&unk_844, &v);
    }
    return TRUE;
}

BOOL Unk_ov004_0224a884::vfunc_7c() {
    volatile u16 va[2];
    va[0] = func_0204b248(func_ov004_022087a4(), 0);
    unk_840 = 0;
    BOOL r = FALSE;
    u32 t = va[0];
    if (t >= 0x3e04 && t <= 0x3e23) r = TRUE;
    if (r) {
        s32 x;
        if (t >= 0x3e04 && t <= 0x3e23) {
            x = (s32)(t - 0x3e04) >> 2;
        } else {
            x = -1;
        }
        unk_840 = x & 7;
        u32 o = func_020716cc();
        u32 q = func_020716e0(o, (u8)unk_840);
        if (q != 0) {
            func_02056744(unk_590, data_ov004_0224bb88, q, 0, 0);
            if (unk_884 == 0) {
                func_02003ecc(&unk_844);
                unk_884 = 1;
            }
            return TRUE;
        }
    }
    return FALSE;
}
