#include "types.h"
#define vfunc_2c() vfunc_2c(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_2c

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c(s32 a);
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
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
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();
    void func_0203e624(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_s14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();

    void func_020a710c(const char *src);
    void func_02065f90(s32 a, s32 b);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[4];
};

struct Unk_0209d498_Time {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};

// 0x20-byte member object (ctor func_02055c88, dtor func_02055c70)
struct Unk_ov003_022154fc_Mem {
    Unk_ov003_022154fc_Mem();
    ~Unk_ov003_022154fc_Mem();
    u8 pad_00[8];
    /* 0x08 */ s32 unk_08;
    u8 pad_0c[0xc];
    /* 0x18 */ s32 *unk_18;
    u8 pad_1c[4];
};

// Other actor with a u8 at +0x2d4 (element of the Y child list)
struct Unk_ov003_02215748_Ent {
    u8 pad_00[0x2d4];
    u8 unk_2d4;
};

// ov009 base class (vtable 0x0225e29c, size 0x2b0)
class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual BOOL vfunc_6c(u32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual void vfunc_b0();
    virtual void vfunc_b4();
    virtual void vfunc_b8();

    s32 func_ov009_0225d6b8(s32 a);
    void func_ov009_0225d244();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ s32 unk_194;
    /* 0x198 */ u8 pad_198[0x231 - 0x198];
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ u8 pad_232[0x2b0 - 0x232];
};

extern "C" {
extern u8 data_ov003_02235270;
extern u32 data_ov003_02235278;
extern u32 data_ov003_0223527c;
extern u32 data_ov003_02235280;
extern s32 data_ov003_0222efd8[6];
extern char data_ov003_02231750[];
extern char data_ov003_022318b8[];
extern u32 data_021c6204;

void func_ov003_022150f0(void *p);
void func_ov003_02215a04(void *p);
s32 func_020554c0(void *p);
void func_02055b00(void *m, s32 a, s32 b, s32 c, s32 d, u32 e);
BOOL func_02055bcc(void *m, s32 a, s32 b);
void func_02055b38(void *m, s32 a, s32 b, s32 c, s32 d);
void func_02055a9c(void *m, s32 a);
void func_0209d498(void *p);
s32 func_02002cf8(u32 a, u32 b, void *c, u32 d, u32 e);
void func_02055488(void *m, void (*fn)(void *), void *self);
s32 func_02057110(s32 a, const char *s);
void func_0200402c(u32 a);
void func_020566bc(void *m);
void func_ov009_0225bc88(void *p);
BOOL func_020b1d3c(u32 a, u32 b);
void func_02094030(void *p);
void func_02094018(void *p);
void func_020814ec(void *p, void *q);
void *func_020e8608(u32 heap, u32 size);
void func_0212899c(void *p, s32 v, u32 n);
}

class Unk_ov003_02215ad8_Str {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();
};

// ---------------------------------------------------------------- X
class Unk_ov003_022314d0 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_022314d0();
    virtual ~Unk_ov003_022314d0();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_70();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    /* 0x2b0 */ u8 unk_2b0;
    /* 0x2b1 */ u8 unk_2b1;
    /* 0x2b2 */ u8 unk_2b2;
    /* 0x2b3 */ u8 pad_2b3;
    /* 0x2b4 */ Unk_ov003_022154fc_Mem unk_2b4;
    /* 0x2d4 */ u8 unk_2d4;
    /* 0x2d5 */ u8 unk_2d5;
    /* 0x2d6 */ u8 pad_2d6[2];
};

// ---------------------------------------------------------------- Y
class Unk_ov003_02231614;
typedef void (Unk_ov003_02231614::*Unk_02215614_Fn)();
typedef BOOL (Unk_ov003_02231614::*Unk_02215680_Fn)();

class Unk_ov003_02231614 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02231614();
    virtual ~Unk_ov003_02231614();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_2c(s32 a);
    virtual BOOL vfunc_6c(u32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();

    void func_ov003_0221552c();
    BOOL func_ov003_02215554();
    void func_ov003_0221558c();
    BOOL func_ov003_022155dc();

    /* 0x2b0 */ Unk_ov003_022154fc_Mem unk_2b0;
    /* 0x2d0 */ s8 unk_2d0;
    /* 0x2d1 */ u8 unk_2d1;
    /* 0x2d2 */ u8 pad_2d2[2];
    /* 0x2d4 */ Unk_ov003_02215748_Ent *unk_2d4[6];
};

// ---------------------------------------------------------------- Z
class Unk_ov003_0223177c : public Unk_ov009_0225e29c {
public:
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();

    /* 0x2b0 */ u8 unk_2b0;
};

struct Unk_ov003_02215a04_Ctx {
    u8 unk_00[2];
    u8 pad_02[2];
};
struct Unk_ov003_02215a04_Sub {
    u8 pad_00[0x2c];
    u32 unk_2c;
};
struct Unk_ov003_022159c8_Word {
    u8 pad_00[0xc];
    u32 unk_0c;
};
struct Unk_ov003_02215a04_Obj {
    Unk_ov003_02215a04_Ctx *unk_00;
    Unk_ov003_02215a04_Sub *unk_04;
    u8 pad_08[0x14];
    void (*unk_1c)(void *);
    u8 pad_20[0x90 - 0x20];
    u8 unk_90;
    u8 pad_91[0xb0 - 0x91];
    Unk_ov003_022159c8_Word *unk_b0;
};

// ================================================================
BOOL Unk_ov003_022314d0::vfunc_18() {
    func_ov003_022150f0(this);
    s32 r4 = func_020554c0(unk_138);
    s32 r2 = func_ov009_0225d6b8(0);
    func_02055b00(&unk_2b4, r4, r2, 1, 0x1000, unk_2b1);
    return TRUE;
}

BOOL Unk_ov003_022314d0::vfunc_70() {
    unk_2b0 = data_ov003_02235270;
    unk_2b1 = 0;
    func_0203e624(unk_2b0);
    if (func_02055bcc(&unk_2b4, unk_194, data_021c6204)) {
        s32 r1 = func_ov009_0225d6b8(0);
        func_02055b38(&unk_2b4, r1, 1, 0x1000, 0);
        func_02055a9c(&unk_2b4, func_020554c0(unk_138));
    }
    unk_2d4 = 1;
    unk_2b2 = 0xff;
    u32 tm[2];
    tm[0] = 0;
    tm[1] = 0;
    func_0209d498(tm);
    if (((u8 *)tm)[4] != 1) {
        switch (unk_2b0) {
        case 0:
            unk_2b1 = unk_2b2 = (data_ov003_02235278 / 10) & 1;
            unk_2d5 = 0;
            break;
        case 1:
            unk_2b1 = unk_2b2 = data_ov003_02235278 % 10;
            unk_2d5 = 0;
            break;
        case 2:
            unk_2b1 = unk_2b2 = data_ov003_02235280 / 10;
            unk_2d5 = 0;
            break;
        case 3:
            unk_2b1 = unk_2b2 = data_ov003_02235280 % 10;
            unk_2d5 = 0;
            break;
        case 4:
            unk_2b1 = unk_2b2 = data_ov003_0223527c / 10;
            unk_2d5 = 1;
            break;
        case 5:
            unk_2b1 = unk_2b2 = data_ov003_0223527c % 10;
            unk_2d5 = 1;
            break;
        }
    }
    func_ov003_022150f0(this);
    return TRUE;
}

Unk_ov003_022314d0::Unk_ov003_022314d0() {}
Unk_ov003_022314d0::~Unk_ov003_022314d0() {}

void *Unk_ov003_022314d0::operator new(unsigned long size) {
    void *p = func_020e8608(data_021c6204, size);
    func_0212899c(p, 0, size);
    return p;
}

void Unk_ov003_022314d0::operator delete(void *p) {}

// ---------------------------------------------------------------- Y methods
void Unk_ov003_02231614::func_ov003_0221552c() {
    func_020566bc(&unk_2b0);
    *unk_2b0.unk_18 = unk_2b0.unk_08;
}

BOOL Unk_ov003_02231614::func_ov003_02215554() {
    s32 r1 = func_ov009_0225d6b8(1);
    func_02055b38(&unk_2b0, r1, 0, 0x1000, 0);
    unk_2d1 = 1;
    return TRUE;
}

void Unk_ov003_02231614::func_ov003_0221558c() {
    func_020566bc(&unk_2b0);
    *unk_2b0.unk_18 = unk_2b0.unk_08;
    u32 tm[2];
    tm[0] = 0;
    tm[1] = 0;
    func_0209d498(tm);
    if (((u8 *)tm)[4] == 1) {
        func_0200402c(0x61);
        vfunc_6c(1);
    }
}

BOOL Unk_ov003_02231614::func_ov003_022155dc() {
    s32 r1 = func_ov009_0225d6b8(0);
    func_02055b38(&unk_2b0, r1, 0, 0x1000, 0);
    unk_2d1 = 0x1f;
    return TRUE;
}

void Unk_ov003_02231614::vfunc_74() {
    static Unk_02215614_Fn tbl[3] = { &Unk_ov003_02231614::func_ov003_0221558c, &Unk_ov003_02231614::func_ov003_0221552c };
    if (unk_130 < 3) {
        (this->*tbl[unk_130])();
    }
}

BOOL Unk_ov003_02231614::vfunc_6c(u32 a) {
    static Unk_02215680_Fn tbl[3] = { &Unk_ov003_02231614::func_ov003_022155dc, &Unk_ov003_02231614::func_ov003_02215554 };
    if (a < 3) {
        if ((this->*tbl[a])()) {
            if (func_020b1d3c(unk_132, a)) {
                unk_130 = a;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov003_02231614::vfunc_ac() { Unk_ov009_0225e29c::vfunc_ac(); }
void Unk_ov003_02231614::vfunc_a8() { Unk_ov009_0225e29c::vfunc_a8(); }
void Unk_ov003_02231614::vfunc_a4() { Unk_ov009_0225e29c::vfunc_a4(); }

BOOL Unk_ov003_02231614::vfunc_0c() {
    for (u32 i = 0; i < 6; i++) {
        unk_2d4[i] = 0;
    }
    return TRUE;
}

BOOL Unk_ov003_02231614::vfunc_2c(s32 a) {
    if (a == 2) {
        if ((unk_231 & 1) == 0) {
            for (u32 i = 0; i < 6; i++) {
                Unk_ov003_02215748_Ent *p = unk_2d4[i];
                if (p) {
                    if (p->unk_2d4) {
                        func_ov009_0225bc88(p);
                    }
                }
            }
        }
    }
    return Unk_020d9670::vfunc_2c(a);
}

BOOL Unk_ov003_02231614::vfunc_18() {
    Unk_0209d498_Time t;
    ((u32 *)&t)[0] = 0;
    ((u32 *)&t)[1] = 0;
    func_0209d498(&t);
    u32 secs = 0x15180 - (t.b0 + (t.b1 * 0x3c + t.b2 * 0xe10));
    data_ov003_0223527c = secs;
    u32 h = data_ov003_0223527c / 0xe10;
    data_ov003_02235278 = h;
    data_ov003_0223527c = data_ov003_0223527c - h * 0xe10;
    u32 m = data_ov003_0223527c / 0x3c;
    data_ov003_02235280 = m;
    data_ov003_0223527c = data_ov003_0223527c - m * 0x3c;
    return TRUE;
}

BOOL Unk_ov003_02231614::vfunc_70() {
    func_ov009_0225d244();
    vfunc_18();
    s32 z = 0;
    u32 i = 0;
    s32 v[3];
    do {
        s32 c = unk_5c[2] + 0x500;
        s32 b = unk_5c[1] + 0x2500;
        s32 a = unk_5c[0] + data_ov003_0222efd8[i];
        v[0] = a;
        v[1] = b;
        v[2] = c;
        data_ov003_02235270 = i;
        unk_2d4[i] = (Unk_ov003_02215748_Ent *)func_02002cf8(0x26, 0x501f, v, z, z);
        i++;
    } while (i < 6);
    func_02055488(unk_138, func_ov003_02215a04, this);
    unk_2d0 = func_02057110(unk_194, data_ov003_02231750);
    if (func_02055bcc(&unk_2b0, unk_194, data_021c6204)) {
        s32 r1 = func_ov009_0225d6b8(0);
        func_02055b38(&unk_2b0, r1, 0, 0x1000, 0);
        func_02055a9c(&unk_2b0, func_020554c0(unk_138));
    }
    u32 tm[2];
    tm[0] = 0;
    tm[1] = 0;
    func_0209d498(tm);
    if (((u8 *)tm)[4] == 1) {
        vfunc_6c(1);
    } else {
        vfunc_6c(0);
    }
    return TRUE;
}

Unk_ov003_02231614::Unk_ov003_02231614() {
    unk_2d0 = -1;
}
Unk_ov003_02231614::~Unk_ov003_02231614() {}

// ---------------------------------------------------------------- Z methods
void Unk_ov003_0223177c::vfunc_78() {
    func_020a710c(data_ov003_022318b8);
    if (vfunc_8c() == 0) {
        unk_1e = 0xf;
    } else {
        unk_1e = 0x12;
    }
    u32 buf[7];
    u16 v[2];
    func_02094030(buf);
    v[1] = 0xd00a;
    func_020814ec(buf, &v[1]);
    func_02065f90(((Unk_ov003_02215ad8_Str *)buf)->vfunc_0c(), 1);
    func_02094018(buf);
}

BOOL Unk_ov003_0223177c::vfunc_8c() {
    Unk_0209d498_Time t;
    ((u32 *)&t)[0] = 0;
    ((u32 *)&t)[1] = 0;
    func_0209d498(&t);
    BOOL r;
    if (t.b2 >= 6) {
        if (unk_2b0 < 6) r = FALSE;
        else r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

// ---------------------------------------------------------------- free functions
extern "C" {
void func_ov003_02215a14(Unk_ov003_02215a04_Obj *o);
void func_ov003_022159c8(Unk_ov003_02231614 *self, s32 a, Unk_ov003_02215a04_Obj *o);

void func_ov003_02215a04(void *p) {
    Unk_ov003_02215a04_Obj *o = (Unk_ov003_02215a04_Obj *)p;
    o->unk_1c = (void (*)(void *))func_ov003_02215a14;
    o->unk_90 = 2;
}

void func_ov003_02215a14(Unk_ov003_02215a04_Obj *o) {
    Unk_ov003_02215a04_Sub *s = o->unk_04;
    if (s->unk_2c != 0) {
        func_ov003_022159c8((Unk_ov003_02231614 *)s->unk_2c, o->unk_00->unk_00[1], o);
    }
}

Unk_ov003_022314d0 *func_ov003_02215a30() {
    return new Unk_ov003_022314d0();
}

Unk_ov003_02231614 *func_ov003_02215a4c() {
    return new Unk_ov003_02231614();
}

void func_ov003_022159c8(Unk_ov003_02231614 *self, s32 a, Unk_ov003_02215a04_Obj *o) {
    if (a == self->unk_2d0) {
        o->unk_b0->unk_0c &= ~0x1f0000;
        o->unk_b0->unk_0c |= (u32)self->unk_2d1 << 16;
    }
}
}
