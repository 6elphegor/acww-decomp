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

// Shared parent of the three/four classes below; slots 0x64/0x6c/0x70/0x74 take parameters in the overrides here.
class Unk_ov004_0224882c : public Unk_020d9670, public Unk_ov004_022488d8 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void operator delete(void *p);
    static void *operator new(unsigned long size);

    virtual BOOL vfunc_00();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_60();
    virtual void vfunc_64(s32 a, void *b);
    virtual BOOL vfunc_68();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL vfunc_70(u32 a, u32 b);
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

    void func_ov004_02208ba8(s32 a, s32 b, s32 c, u32 d);
    BOOL func_ov004_02209150();
    u32 func_ov004_02208968();
    u32 func_ov004_022087a4();
    void func_ov004_0220878c();

    /* 0x0f0 */ u8 f_0f0[0x534 - 0xf0];
    /* 0x534 */ u8 f_534[0x590 - 0x534];
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 f_594[4];
    /* 0x598 */ u8 f_598[0x30];
    /* 0x5c8 */ u8 f_5c8[8];
    /* 0x5d0 */ u8 f_5d0[0x628 - 0x5d0];
    /* 0x628 */ u8 f_628[0x6c8 - 0x628];
    /* 0x6c8 */ u8 f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 f_73c[0x760 - 0x73c];
    /* 0x760 */ u8 f_760[0x77c - 0x760];
    /* 0x77c */ u32 unk_77c;
    /* 0x780 */ u8 f_780[0x840 - 0x780];
};

typedef Unk_ov004_0224882c Unk_ov004_Base;

struct Unk_ov004_0220cca4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0220cca4_Src {
    /* 0x00 */ u8 pad_00[0x4c];
    /* 0x4c */ Unk_ov004_0220cca4_Vec unk_4c;
};

struct Unk_ov004_0220cca4_Arg {
    /* 0x00 */ u8 pad_00[0xb4];
    /* 0xb4 */ Unk_ov004_0220cca4_Src *unk_b4;
};

struct Unk_ov004_0220cca4_Copy {
    s64 v[6];
};

extern "C" void func_020339bc(void *, void *, s32, s32);
extern "C" void func_02033988(void *);
extern "C" s32 func_02033914(void *, s32);

class Unk_ov004_0220cca4_Obj {
public:
    u8 pad_00[0x44];
    Unk_ov004_0220cca4_Obj(void *a, s32 b, s32 c) { func_020339bc(this, a, b, c); }
    ~Unk_ov004_0220cca4_Obj() { func_02033988(this); }
    s32 func_02033914(s32 a) { return ::func_02033914(this, a); }
};

struct Unk_ov004_0220c534_Arg {
    /* 0x00 */ u8 pad_00[0xb8];
    /* 0xb8 */ s32 *unk_b8;
};

// vtable 0x0224a884, size 0x888
class Unk_ov004_0224a884 : public Unk_ov004_Base {
public:
    Unk_ov004_0224a884();
    virtual ~Unk_ov004_0224a884();

    /* 0x840 */ s32 unk_840;
    /* 0x844 */ u8 f_844[0x44];
};

// vtable 0x0224a9b0, size 0x844
class Unk_ov004_0224a9b0 : public Unk_ov004_Base {
public:
    Unk_ov004_0224a9b0();
    virtual ~Unk_ov004_0224a9b0();

    virtual BOOL vfunc_0c();
    virtual void vfunc_64(s32 a, void *b);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ s32 unk_840;
};

// vtable 0x0224ad34, size 0x874
class Unk_ov004_0224ad34 : public Unk_ov004_Base {
public:
    Unk_ov004_0224ad34();
    virtual ~Unk_ov004_0224ad34();

    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u32 b);
    virtual u32 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual u32 vfunc_8c();

    BOOL func_ov004_0220c734();
    BOOL func_ov004_0220c748();
    BOOL func_ov004_0220c7d4();
    BOOL func_ov004_0220c7e8();
    void func_ov004_0220c838();
    s32 func_ov004_0220c93c();
    s32 func_ov004_0220c950();

    /* 0x840 */ s32 unk_840;
    /* 0x844 */ u8 f_844[0x28];
    /* 0x86c */ u8 unk_86c;
    /* 0x86d */ u8 unk_86d;
    /* 0x86e */ u8 pad_86e;
    /* 0x86f */ u8 unk_86f;
    /* 0x870 */ u8 unk_870;
    /* 0x871 */ u8 pad_871[3];
};

// vtable 0x0224ae60
class Unk_ov004_0224ae60 : public Unk_ov004_Base {
public:
    virtual BOOL vfunc_0c();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL vfunc_70(u32 a, u32 b);
    virtual BOOL vfunc_80();
    virtual void vfunc_90();

    BOOL func_ov004_0220caf0();
    BOOL func_ov004_0220cb24();
    BOOL func_ov004_0220cb5c();
    BOOL func_ov004_0220cb84();
    void func_ov004_0220cbb4();

    /* 0x840 */ u8 unk_840;
};

extern "C" {
extern u8 data_ov004_0224bb88[];
extern u8 data_ov004_0224bb8c[];
extern u8 data_ov004_0224bb90[];
extern u8 data_ov004_0224bb94[];
extern u8 data_ov004_0224002c[];
extern u8 data_021f47e0[];

void func_020f43fc(void *);
void func_020f440c(void *);
void func_020b895c(void *);
s32 func_ov004_02209ef0(u32);
u16 func_0204b248(u32, s32);
u32 func_02056fcc(u32, void *);
s32 func_020974a0(s32);
s32 func_0209888c(...);
s32 func_0209411c();
void *func_020716cc();
s32 func_020716e8(void *, u8, u8);
s32 func_02056744(u32, void *, s32, s32, s32);
BOOL func_ov004_02205c44(void *, s32, s32);
void *func_ov004_02206be4(void *);
s32 func_ov004_02206380(void *);
s32 func_02057100(s32, void *);
s32 func_02057078(s32, void *);
s32 func_020b8840(void *, u32, void *, s32, s32, s32);
s32 func_0203c6c8(s32);
s32 func_02051cc8(void *, s32, s32, s32);
s32 func_02051da4(void *, s32, s32, s32);
void func_02061478(u16 *, u16 *);
s32 func_0209c348();
void *func_020e8608(s32, s32);
void func_0203c764(s32, u16 *, s32);
BOOL func_ov004_02205c7c(void *);
void func_020b895c(void *);
void func_0205439c(void *);
BOOL func_02056654(void *);
void func_ov004_022059b0(void *, s32);
BOOL func_ov004_02205c6c(void *);
BOOL func_ov004_02205998(void *);
void func_01ffb898(void *, void *, void *);
void func_020339bc(void *, void *, s32, s32);
s32 func_02033914(void *, s32);
void func_02033988(void *);
}

static inline BOOL Unk_ov004_0220c554_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_ov004_0220c554_R(u32 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}

static inline s32 Unk_ov004_0220c554_Idx(u32 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) {
        return (s32)(v - lo) >> 2;
    }
    return -1;
}

// ---- A ----
Unk_ov004_0224a884::~Unk_ov004_0224a884() {
    func_020f43fc(f_844);
}

Unk_ov004_0224a884::Unk_ov004_0224a884() {
    func_020f440c(f_844);
}

extern "C" Unk_ov004_0224a884 *func_ov004_0220c518() {
    return new Unk_ov004_0224a884;
}

// ---- B ----
void Unk_ov004_0224a9b0::vfunc_64(s32 a, void *b) {
    if (a == unk_840) {
        *((Unk_ov004_0220c534_Arg *)b)->unk_b8 = 0;
    }
}

BOOL Unk_ov004_0224a9b0::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a9b0::vfunc_80() {
    return TRUE;
}

BOOL Unk_ov004_0224a9b0::vfunc_7c() {
    volatile u16 v;
    s32 t;
    s32 hi;
    v = func_0204b248(func_ov004_022087a4(), 0);
    BOOL f = FALSE;
    t = -1;
    unk_840 = t;
    u32 x = v;
    if (x >= 0x3d84 && x <= 0x3e03) f = TRUE;
    if (f) {
        if (x >= 0x3d84 && x <= 0x3e03) {
            t = (s32)(x - 0x3d84) >> 2;
        } else {
            t = -1;
        }
    } else if (x >= 0x3ea4 && x <= 0x3f23) {
        t = Unk_ov004_0220c554_Idx(x, 0x3ea4, 0x3f23);
    } else if (x >= 0x4224 && x <= 0x42a3) {
        t = Unk_ov004_0220c554_Idx(x, 0x4224, 0x42a3);
    } else if (x >= 0x3f24 && x <= 0x3fa3) {
        t = Unk_ov004_0220c554_Idx(x, 0x3f24, 0x3fa3);
    }
    if (t == -1) t = 0;
    hi = (t >> 3) & 3;
    s32 lo = t & 7;
    if (func_020974a0(hi)) {
        func_0209888c();
        if (func_0209411c() == 0) {
            unk_840 = func_02056fcc(unk_590, data_ov004_0224bb8c);
        } else {
            unk_840 = func_02056fcc(unk_590, data_ov004_0224bb90);
        }
    }
    u32 o = unk_590;
    func_02056744(o, data_ov004_0224bb88, func_020716e8(func_020716cc(), hi, lo), 0, 0);
    return TRUE;
}

Unk_ov004_0224a9b0::~Unk_ov004_0224a9b0() {
}

Unk_ov004_0224a9b0::Unk_ov004_0224a9b0() {
}

extern "C" Unk_ov004_0224a9b0 *func_ov004_0220c718() {
    return new Unk_ov004_0224a9b0;
}

// ---- C ----
BOOL Unk_ov004_0224ad34::func_ov004_0220c734() {
    return func_ov004_02205c44(f_73c, 0, 0);
}

BOOL Unk_ov004_0224ad34::func_ov004_0220c748() {
    s32 a, b;
    u32 c;
    s32 d;
    func_ov004_02205c44(f_73c, 0, 0);
    a = func_02057100(func_ov004_02206380(func_ov004_02206be4(f_6c8)), data_ov004_0224bb94);
    b = func_02057078(func_ov004_02206380(func_ov004_02206be4(f_6c8)), data_ov004_0224bb94);
    c = unk_590;
    d = func_ov004_02206380(func_ov004_02206be4(f_6c8));
    if (func_020b8840(f_844, c, data_ov004_0224bb88, d, a, b)) {
        unk_86c = 0;
    }
    return TRUE;
}

BOOL Unk_ov004_0224ad34::func_ov004_0220c7d4() {
    return func_ov004_02205c44(f_73c, 1, 0);
}

BOOL Unk_ov004_0224ad34::func_ov004_0220c7e8() {
    func_ov004_02205c44(f_73c, 1, 0);
    u32 o = unk_590;
    func_020b8840(f_844, o, data_ov004_0224bb88, func_0203c6c8(unk_840), 0, 0);
    return TRUE;
}

typedef BOOL (Unk_ov004_0224ad34::*Unk_ov004_0224ad34_Fn)();

void Unk_ov004_0224ad34::func_ov004_0220c838() {
    static Unk_ov004_0224ad34_Fn tbl[2] = { &Unk_ov004_0224ad34::func_ov004_0220c7d4, &Unk_ov004_0224ad34::func_ov004_0220c734 };
    u32 i = unk_870;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224ad34::vfunc_70(u32 a, u32 b) {
    func_ov004_0220878c();
    static Unk_ov004_0224ad34_Fn tbl[2] = { &Unk_ov004_0224ad34::func_ov004_0220c7e8, &Unk_ov004_0224ad34::func_ov004_0220c748 };
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_870 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_0224ad34::vfunc_74(u32 a) {
    if (a < 2) {
        return data_ov004_0224002c[a];
    }
    return 0;
}

s32 Unk_ov004_0224ad34::func_ov004_0220c93c() {
    return func_02051cc8(this, 0, 0xff, 1);
}

s32 Unk_ov004_0224ad34::func_ov004_0220c950() {
    return func_02051cc8(this, 1, 0xff, 1);
}

u32 Unk_ov004_0224ad34::vfunc_8c() {
    return 1;
}

BOOL Unk_ov004_0224ad34::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224ad34::vfunc_80() {
    func_ov004_0220c838();
    return TRUE;
}

BOOL Unk_ov004_0224ad34::vfunc_7c() {
    u16 v, w;
    unk_86f = 1;
    v = func_0204b248(func_ov004_022087a4(), 0);
    BOOL r = FALSE;
    if (v >= 0x3984 && v <= 0x3d83) r = TRUE;
    if (r) {
        func_02061478(&w, &v);
        func_ov004_02208968();
        unk_840 = (s32)func_020e8608(func_0209c348(), 0x2c4);
        func_0203c764(unk_840, &w, 0);
        if (func_ov004_02205c7c(f_73c)) {
            vfunc_70(0, 0xff);
        } else {
            vfunc_70(1, 0xff);
        }
    }
    vfunc_70(0, 0xff);
    unk_86f = 0;
    return TRUE;
}

Unk_ov004_0224ad34::~Unk_ov004_0224ad34() {
}

Unk_ov004_0224ad34::Unk_ov004_0224ad34() {
    func_020b895c(f_844);
    unk_840 = 0;
    unk_86c = unk_86d = 0;
}

extern "C" Unk_ov004_0224ad34 *func_ov004_0220cad4() {
    return new Unk_ov004_0224ad34;
}

// ---- D ----
BOOL Unk_ov004_0224ae60::func_ov004_0220caf0() {
    func_0205439c(f_534);
    BOOL r = func_02056654(f_5d0);
    if (r) {
        return func_02051da4(this, 0, 0xff, 1);
    }
    return r;
}

BOOL Unk_ov004_0224ae60::func_ov004_0220cb24() {
    func_ov004_022059b0(f_760, 1);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

BOOL Unk_ov004_0224ae60::func_ov004_0220cb5c() {
    BOOL r = func_ov004_02205c6c(f_73c);
    if (r) {
        return func_02051da4(this, 1, 0xff, 1);
    }
    return r;
}

BOOL Unk_ov004_0224ae60::func_ov004_0220cb84() {
    func_ov004_022059b0(f_760, 0);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    return TRUE;
}

typedef BOOL (Unk_ov004_0224ae60::*Unk_ov004_0224ae60_Fn)();

void Unk_ov004_0224ae60::func_ov004_0220cbb4() {
    static Unk_ov004_0224ae60_Fn tbl[2] = { &Unk_ov004_0224ae60::func_ov004_0220cb5c, &Unk_ov004_0224ae60::func_ov004_0220caf0 };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224ae60::vfunc_70(u32 a, u32 b) {
    func_ov004_0220878c();
    static Unk_ov004_0224ae60_Fn tbl[2] = { &Unk_ov004_0224ae60::func_ov004_0220cb84, &Unk_ov004_0224ae60::func_ov004_0220cb24 };
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224ae60::vfunc_6c(s32 a, void *b) {
    Unk_ov004_0220cca4_Vec v;
    Unk_ov004_0220cca4_Vec o;
    if (func_ov004_02205998(f_760) && unk_840 == 1) {
        Unk_ov004_0220cca4_Vec *pv = &((Unk_ov004_0220cca4_Arg *)b)->unk_b4->unk_4c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        *(Unk_ov004_0220cca4_Copy *)data_021f47e0 = *(Unk_ov004_0220cca4_Copy *)f_598;
        func_01ffb898(&v, data_021f47e0, &o);
        Unk_ov004_0220cca4_Obj obj(&o, 0, 0);
        if (obj.func_02033914(0) > 0) {
            func_02051da4(this, 0, 0xff, 1);
        }
    }
}

void Unk_ov004_0224ae60::vfunc_90() {
    func_ov004_02208ba8(0, 1, 0x1000, 0);
}

BOOL Unk_ov004_0224ae60::vfunc_0c() {
    func_ov004_02205c44(f_73c, 0, 0);
    return TRUE;
}

BOOL Unk_ov004_0224ae60::vfunc_80() {
    func_ov004_0220cbb4();
    return TRUE;
}
