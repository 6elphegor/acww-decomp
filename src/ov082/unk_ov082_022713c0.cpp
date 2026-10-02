// mwcc-flags: -str reuse
#include "types.h"

// Library base class (same as Unk_020d8c7c.h, but vfunc_08 takes the s32 the vtable symbol names).
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

struct Unk_0201bc1c;
class Unk_ov082_022721dc;
class Unk_ov082_0227214c;

struct Unk_020aa3b8 {
    s32 func_020aa514();
};

struct Unk_0202368c_Obj {
    u32 v[2];
};

struct Unk_020e1c64 {
    u32 v[8];
    Unk_020e1c64();
    ~Unk_020e1c64();
};

struct Unk_ov082_022718b0_Rec {
    u32 a, b;
};

extern "C" {
void _ZN12Unk_0201442013func_02014a4cEv(void *p);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_020d771413func_0201578cEjjj(void *p, u16 *q, s32 a, s32 b);
void _ZN12Unk_020d771013func_0201517cEjjj(void *p, BOOL (*cb)(u16 *, s32), u32 a, u32 b);
void _ZN12Unk_020d771013func_020151d0Ei(void *p, s32 v);
void _ZN12Unk_020d771013func_02014f74Ev(void *p);
void _ZN12Unk_020d771413func_02015958Eijiii(void *p, s32 a, u32 b, s32 c, s32 d, s32 e);
void _ZN12Unk_020d771413func_020157e8Ejj(void *p, void *q, u32 a);
BOOL _ZN12Unk_020d77a413func_0201bcbcEPS_(void *p, void *q);
s32 _ZN12Unk_020940a013func_02094218Ev(void *p);
s32 _ZN12Unk_020940a013func_020941e8EPS_(void *p, void *q);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *p);
void _ZN12Unk_02002fc813func_02002fc8Ej(void *p, void *q);
void *_ZN12Unk_0208581013func_020858acEv(void *p);
void *_ZN12Unk_0208581013func_0208586cEv(void *p);
s32 _ZN12Unk_0208581013func_02085810Ev(void *p);
void func_02085818(u16 *out, void *p);
void func_02085820(void *p, u16 *q);
void _ZN12Unk_0208581013func_02085814Ei(void *p, s32 v);
void _ZN12Unk_0208581013func_020858b0EP17Unk_02085810_Base(void *p, void *q);
void _ZN12Unk_0208581013func_02085900Ej(void *p, s32 v);
void _ZN12Unk_02087ad813func_02087b94Ei(void *p, s32 v);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209865cEv(void *p);
void *_ZN12Unk_0209865c13func_0209868cEv(void *p);
void *_ZN12Unk_0209865c13func_0209888cEv(void *p);
void _ZN12Unk_0209da4413func_0209e148Ej(void *p, s32 v);
void _ZN12Unk_0206338013func_0206338cEii(Unk_0202368c_Obj *o, s32 a, s32 b);
void func_02062f94(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02063388(Unk_0202368c_Obj *o);
void func_0203d67c(void *p);
void func_020947c0(u16 *out, void *p);
void *func_02094348();
void func_0209d498(void *p);
s32 func_02098eb0(u16 *p);
s32 func_02098ffc();
void func_02099064(s32 v);
void func_02099014(u16 *p, s32 v);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0206ed18();
s32 func_0206ed38();
s32 func_02099048();
s32 func_02085618(u16 *p);
s32 func_02128930(void *a, void *b, u32 n);
u32 func_02063b8c(u32 n);
void func_02085784(void *g, u32 a);
u32 func_02060e24(u32 v);
s32 func_0202c908(u16 *a, s32 *b, s32 *c, s32 d, void *tbl, s32 *arr, s32 cnt);
s32 func_0207bd3c(void *p, u32 a, u32 b);
void *_ZN12Unk_0208086013func_020805c4Ev();
void _ZN12Unk_0208581013func_02085870EP16Unk_02085810_Rec(void *g, void *p);
void func_02053848(void *p, s32 a, s32 b);
void _ZN12Unk_0201635013func_0201610cEP16Unk_02015fe0_Objiiiiti(void *p, void *owner, s32 a, s32 b, s32 s0, s32 s1, s32 s2, s32 s3);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, u32 a, u32 b, u32 c);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
extern u16 data_020c6cc8;
extern u8 data_021ed24c[];
extern u8 data_021d7350[];
extern u8 data_021dfd8c[];
extern u32 __ptmf_null[];
}

struct Unk_020660f8 {
    s32 func_02067a84(u8 *a, void *b);
    s32 func_02067a3c(s32 idx, void *p);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
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
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov082_022718b0_Rec *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    Unk_020aa3b8 *func_02015a5c();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public Unk_020ddcf0 {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
};

class Unk_020d8b38 : public Unk_020d7710 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_ov082_0227214c : public Unk_020d8b38 {
public:
    typedef void (Unk_ov082_0227214c::*Fn)();

    Unk_ov082_0227214c();
    virtual ~Unk_ov082_0227214c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov082_022718b0_Rec *out);
    virtual void vfunc_84();

    s32 func_ov082_022717ac();
    void func_ov082_022719d8(Unk_ov082_022721dc *owner);
    void func_ov082_02271a60();
    void func_ov082_02271a68();
    void func_ov082_02271b50(s32 i);
    void func_ov082_02271b60(s32 i);
    void func_ov082_02271b70(Fn *slot, s32 i);

    Unk_ov082_022721dc *unk_ac;
    Fn unk_b0;
    Fn unk_b8;
    u16 unk_c0;
    u8 unk_c2;
    s32 unk_c4;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Unk_020d5d84 : public Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
};

struct Unk_020d77a4_Vec3;

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    void func_0201bc28(Unk_0201bc1c *p);
    void *func_0201bc4c(u32 v);

    u16 unk_ea;
    Unk_020dbd74 unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov082_022721dc : public Unk_020d8bc8 {
public:
    Unk_ov082_022721dc() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov082_02271c44();
    BOOL func_ov082_02271c48();
    BOOL func_ov082_02271c74();
    BOOL func_ov082_02271cac();
    BOOL func_ov082_02271cb0();
    void func_ov082_02271ce4(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov082_0227214c unk_658;
    s32 unk_720;
};

struct Unk_ov082_02271ce4_Ent {
    BOOL (Unk_ov082_022721dc::*enter)();
    BOOL (Unk_ov082_022721dc::*exit)();
};

static inline BOOL Unk_ov082_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 h = *p;
    u32 l = *p;
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov082_Neg(s32 v) {
    if (v < 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {
extern Unk_ov082_02271ce4_Ent data_ov082_022722d4[3];
extern u8 data_ov082_02272128[];
extern u8 data_ov082_022720f8[];
BOOL func_ov082_02271b28(u16 *p, s32 x);
}

struct Unk_ov082_SceneEntry {
    Unk_ov082_022721dc *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" Unk_ov082_022721dc *func_ov082_02271f2c();

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov082_022721dc *func_ov082_02271f2c() {
    return new Unk_ov082_022721dc();
}

BOOL Unk_ov082_022721dc::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov082_022719d8(this);
    return TRUE;
}

BOOL Unk_ov082_022721dc::vfunc_00() {
    struct {
        u16 w0;
        u16 s2;
        u16 s4;
        u16 s6;
        s32 t[4];
    } l;
    void *g;
    s32 rnd;
    u32 idx;
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov082_02271ce4(0);
    g = data_021ed24c;
    func_02085784(g, 2);
    func_02085818(&l.s2, g);
    if (!Unk_ov082_InRange(&l.s2, 0x12b0, 0x12e7)) {
        _ZN12Unk_0208581013func_020858acEv(g);
        rnd = func_02063b8c(2);
        l.t[0] = 0;
        l.t[1] = 0;
        l.t[2] = 0;
        l.t[3] = 0;
        l.w0 = 0xfff1;
        func_0209d498(&l.t[2]);
        idx = func_02060e24(((u8 *)&l)[0x14] - 1);
        if (idx != 0) {
            if (func_0202c908(&l.w0, &l.t[0], &l.t[1], rnd, (void *)idx, 0, 0) == 0) {
                func_0202c908(&l.w0, &l.t[0], &l.t[1], rnd, (void *)idx, 0, 0);
            }
        }
        func_02085820(g, &l.w0);
        func_02085818(&l.s4, g);
        if (Unk_ov082_InRange(&l.s4, 0x12b0, 0x12e7)) {
            if (func_0207bd3c(data_021dfd8c, 0, 0) != 0) {
                _ZN12Unk_0208581013func_02085870EP16Unk_02085810_Rec(g, _ZN12Unk_0208086013func_020805c4Ev());
                _ZN12Unk_0208581013func_02085900Ej(g, 2);
                _ZN12Unk_0209da4413func_0209e148Ej(data_021d7350, 0xf);
            }
        }
        unk_720 = func_02085618(&l.w0);
        _ZN12Unk_0208581013func_02085814Ei(g, unk_720);
    }
    _ZN12Unk_0201635013func_0201610cEP16Unk_02015fe0_Objiiiiti(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    func_02053848(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

u8 *Unk_ov082_022721dc::vfunc_6c() { return data_ov082_02272128; }

u8 *Unk_ov082_022721dc::vfunc_70() { return data_ov082_022720f8; }

BOOL Unk_ov082_022721dc::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov082_022722d4[unk_654].exit != NULL) {
        result = (this->*data_ov082_022722d4[unk_654].exit)();
    }
    return result;
}

void Unk_ov082_022721dc::func_ov082_02271ce4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov082_022722d4[state].enter != NULL) {
        ok = (this->*data_ov082_022722d4[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov082_022721dc::func_ov082_02271cb0() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov082_022721dc::func_ov082_02271cac() { return TRUE; }

BOOL Unk_ov082_022721dc::func_ov082_02271c74() {
    void *p = unk_658.func_02015aac();
    u32 r = 0;
    if (p != NULL) {
        r = _ZN12Unk_020d77a413func_0201bcbcEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov082_022721dc::func_ov082_02271c48() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        func_0203d67c(this);
        func_ov082_02271ce4(2);
    }
    return TRUE;
}

BOOL Unk_ov082_022721dc::func_ov082_02271c44() { return TRUE; }

void Unk_ov082_0227214c::vfunc_84() {
    if (unk_b0) {
        (this->*unk_b0)();
        Fn t = *(Fn *)__ptmf_null;
        unk_b0 = t;
        if (unk_b8) {
            unk_b0 = unk_b8;
            unk_b8 = t;
        }
    }
}// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov082_02271ce4_Ent data_ov082_022722d4[3];
extern "C" u8 data_ov082_02272128[];
extern "C" Unk_ov082_SceneEntry data_ov082_02272110;
extern "C" u8 data_ov082_022720f8[];

extern "C" Unk_ov082_SceneEntry data_ov082_02272110 = {func_ov082_02271f2c, 0x58, 0x5f, 2, 0x5000, 0x5000, 0x3e800};

extern "C" u8 data_ov082_02272128[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

// Data order: this unit is placed object by object (see object_order.txt).

extern "C" u8 data_ov082_022720f8[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};

Unk_ov082_02271ce4_Ent data_ov082_022722d4[3] = {
    {&Unk_ov082_022721dc::func_ov082_02271cb0, &Unk_ov082_022721dc::func_ov082_02271cac},
    {&Unk_ov082_022721dc::func_ov082_02271c74, &Unk_ov082_022721dc::func_ov082_02271c48},
    {NULL, &Unk_ov082_022721dc::func_ov082_02271c44},
};

void Unk_ov082_0227214c::func_ov082_02271b70(Fn *slot, s32 i) {
    static Fn tbl[2] = {&Unk_ov082_0227214c::func_ov082_02271a68, &Unk_ov082_0227214c::func_ov082_02271a60};
    *slot = tbl[i];
}

void Unk_ov082_0227214c::func_ov082_02271b60(s32 i) {
    func_ov082_02271b70(&unk_b0, i);
}

void Unk_ov082_0227214c::func_ov082_02271b50(s32 i) {
    func_ov082_02271b70(&unk_b8, i);
}

extern "C" BOOL func_ov082_02271b28(u16 *p, s32 x) {
    if (x == 0) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x12b0 && v <= 0x12e7) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void Unk_ov082_0227214c::func_ov082_02271a68() {
    Unk_020660f8 *r6 = unk_3c;
    u8 b;
    unk_c0 = 0xfff1;
    unk_ac->unk_720 = 0;
    b = 0xc;
    if (func_0206ed18()) {
        s32 r4 = func_0206ed38();
        unk_c0 = func_02099048();
        unk_ac->unk_720 = func_02085618(&unk_c0);
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &unk_c0, 0, 4, 0);
        func_ov082_02271b50(1);
        _ZN12Unk_020d771413func_0201578cEjjj(this, &unk_c0, 2, 7);
        _ZN12Unk_020d771413func_02015958Eijiii(this, unk_ac->unk_720 >> 12, 4, 3, 0, 0);
        if (r4 >= 0) {
            func_02099064(r4);
        }
        b = 0xd;
    } else {
        _ZN12Unk_020d771013func_02014f74Ev(this);
    }
    r6->func_02067a84(&b, (void *)"sp_npc_turtle2");
}

void Unk_ov082_0227214c::func_ov082_02271a60() {
    _ZN12Unk_020d771013func_02014f74Ev(this);
}

Unk_ov082_0227214c::Unk_ov082_0227214c() {
    unk_c0 = 0xfff1;
}

Unk_ov082_0227214c::~Unk_ov082_0227214c() {}

void Unk_ov082_0227214c::func_ov082_022719d8(Unk_ov082_022721dc *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_c2 = 0;
    unk_c4 = -1;
}

void Unk_ov082_0227214c::vfunc_78(Unk_ov082_022718b0_Rec *out) {
    u16 x[4];
    Unk_ov082_022718b0_Rec rec;
    _ZN12Unk_0209865c13func_0209865cEv(func_0209750c());
    out->a = (u32)"sp_npc_turtle2";
    rec.a = 0;
    rec.b = 0;
    func_0209d498(&rec);
    if (unk_c4 == -1) {
        x[1] = 0x37e0;
        unk_c4 = func_02098eb0(&x[1]);
        if (unk_c4 >= 0) {
            out->a = (u32)"sp_npc_turtle";
            *((u8 *)out + 4) = 0;
            return;
        }
    }
    u8 t = *((u8 *)&rec + 2);
    if (!(t >= 0xc && t < 0x12)) {
        *((u8 *)out + 4) = 2;
    } else {
        *((u8 *)out + 4) = 3;
        func_020947c0(&x[0], func_02094348());
        if (!func_0202e1cc(0x1c, 0)) {
            x[2] = 0x1376;
            if (Unk_ov082_Neg(func_02098eb0(&x[2]))) {
                if (!Unk_ov082_InRange(&x[0], 0x1376, 0x1376)) {
                    x[3] = 0x1377;
                    if (Unk_ov082_Neg(func_02098eb0(&x[3]))) {
                        if (!Unk_ov082_InRange(&x[0], 0x1377, 0x1377)) {
                            if (func_02098ffc() >= 0) {
                                *((u8 *)out + 4) = 1;
                            } else {
                                *((u8 *)out + 4) = 0;
                            }
                            return;
                        }
                    }
                }
            }
        }
        if (func_0202e1cc(0x1c, 1)) {
            *((u8 *)out + 4) = 8;
        }
    }
}

s32 Unk_ov082_0227214c::func_ov082_022717ac() {
    u16 v, w;
    u8 *r7 = data_021ed24c;
    func_02085818(&v, r7);
    if (Unk_ov082_InRange(&v, 0x12b0, 0x12e7)) {
        void *r6 = _ZN12Unk_0208581013func_020858acEv(r7);
        void *r4 = _ZN12Unk_0208581013func_0208586cEv(r7);
        func_02085818(&w, r7);
        _ZN12Unk_020d771413func_0201578cEjjj(this, &w, 1, 7);
        _ZN12Unk_020d771413func_02015958Eijiii(this, _ZN12Unk_0208581013func_02085810Ev(r7) >> 12, 0, 3, 0, 0);
        if (_ZN12Unk_020940a013func_02094218Ev(r6)) {
            _ZN12Unk_020d771413func_020157e8Ejj(this, _ZN12Unk_0208581013func_020858acEv(r7), 1);
            u16 *q = (u16 *)_ZN12Unk_0209865c13func_0209888cEv(func_0209750c());
            u16 *p = (u16 *)_ZN12Unk_0208581013func_020858acEv(r7);
            if (p[0] != q[0] || func_02128930(p + 1, q + 1, 8) != 0 || _ZN12Unk_020940a013func_020941e8EPS_(p, q) == 0) {
                return 1;
            }
            return 0;
        }
        if (_ZN12Unk_02002fc813func_020030b4Ev(r4)) {
            Unk_020e1c64 o;
            _ZN12Unk_02002fc813func_02002fc8Ej(r4, &o);
            unk_3c->func_02067a3c(1, &o);
            return 2;
        }
    }
    return -1;
}

void Unk_ov082_0227214c::vfunc_14() {
    u8 b1, b2;
    u16 h0, ha, hb, x14, h16, hc, hd;
    Unk_0202368c_Obj o;
    u8 *r6;
    u8 *r7 = (u8 *)"sp_npc_turtle2";
    u32 msg = 0xff;
    if (unk_c4 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_c4 = -2;
        }
        if (unk_1e == 2) {
            ha = 0x1559;
            _ZN12Unk_020d771013func_02014e60EPtjjj(this, &ha, 0, 5, 0);
            hb = 0x1559;
            func_02099014(&hb, 0);
            b1 = 4;
            unk_3c->func_02067a84(&b1, (void *)"sp_npc_turtle");
        }
        return;
    }
    if (unk_1e == 0xd || unk_1e == 0x10 || unk_1e == 0x13 || unk_1e == 0x16) {
        h0 = 0xfff1;
        r6 = data_021ed24c;
        switch (unk_1e) {
        case 0xd:
            _ZN12Unk_0201442013func_02014a4cEv(this);
            func_02085818(&x14, r6);
            if (!Unk_ov082_InRange(&x14, 0x12b0, 0x12e7)) {
                msg = 0x16;
                break;
            }
            _ZN12Unk_02087ad813func_02087b94Ei(_ZN12Unk_0209865c13func_0209868cEv(func_0209750c()), 1);
            {
                s32 v = _ZN12Unk_0208581013func_02085810Ev(r6);
                if ((unk_ac->unk_720 >> 12) > (v >> 12)) {
                    msg = 0x10;
                    break;
                }
            }
            if (func_ov082_022717ac() == 0) {
                msg = 0x1d;
            } else if (func_ov082_022717ac() > 0) {
                msg = 0xe;
            }
            break;
        case 0xe:
        case 0xf:
            break;
        case 0x10:
            if (func_ov082_022717ac() == 0) {
                msg = 0x11;
                unk_c2 = 1;
            } else if (func_ov082_022717ac() > 0) {
                msg = 0x12;
                unk_c2 = 0;
            }
            break;
        case 0x11:
        case 0x12:
        case 0x14:
        case 0x15:
            break;
        case 0x13:
        case 0x16:
            if (unk_c2 != 0) {
                msg = 0x14;
            } else {
                msg = 0x15;
            }
            func_02085820(r6, &unk_c0);
            _ZN12Unk_0208581013func_02085814Ei(r6, unk_ac->unk_720);
            _ZN12Unk_0208581013func_020858b0EP17Unk_02085810_Base(r6, _ZN12Unk_0209865c13func_0209888cEv(func_0209750c()));
            _ZN12Unk_0208581013func_02085900Ej(r6, 2);
            _ZN12Unk_0209da4413func_0209e148Ej(data_021d7350, 0xf);
            _ZN12Unk_0206338013func_0206338cEii(&o, 0, 0);
            func_02062f94(&h16, &o, 0, 0, 1, 1, 0);
            h0 = h16;
            func_02063388(&o);
            _ZN12Unk_020d771013func_02014e60EPtjjj(this, &h0, 0, 5, 0);
            _ZN12Unk_020d771413func_0201578cEjjj(this, &h0, 0, 7);
            func_02099014(&h0, 0);
            break;
        }
    }
    switch (unk_1e) {
    case 1:
        hc = 0x1376;
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, &hc, 0, 5, 0);
        hd = 0x1376;
        func_02099014(&hd, 0);
        msg = 4;
        func_0202e1cc(0x1c, 1);
        break;
    case 0xb:
        _ZN12Unk_020d771013func_0201517cEjjj(this, func_ov082_02271b28, 0xd, 1);
        _ZN12Unk_020d771013func_020151d0Ei(this, 0);
        func_ov082_02271b60(0);
        break;
    }
    if (msg != 0xff) {
        b2 = msg;
        unk_3c->func_02067a84(&b2, r7);
    }
}

void Unk_ov082_0227214c::vfunc_18() {
    u8 b1, b2;
    u16 h;
    s32 t = func_02015a5c()->func_020aa514();
    u8 *s = (u8 *)"sp_npc_turtle2";
    u8 msg = 0xff;
    if (unk_c4 >= 0) {
        s = (u8 *)"sp_npc_turtle";
        if (unk_1e == 0 && t == 0) {
            if (unk_c4 >= 0) {
                func_02099064(unk_c4);
                h = 0x37e0;
                _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b1 = msg;
            unk_3c->func_02067a84(&b1, s);
        }
    } else {
        if (unk_1e == 8) {
            if (t != 0) {
                s32 r = func_ov082_022717ac();
                if (r == 0) {
                    msg = 9;
                } else if (r > 0) {
                    msg = 0xa;
                } else {
                    msg = 0x1e;
                }
            } else {
                msg = 0xb;
            }
        }
        if (msg != 0xff) {
            b2 = msg;
            unk_3c->func_02067a84(&b2, s);
        }
    }
}

BOOL Unk_ov082_022721dc::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov082_022721dc::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)func_0201bc4c(4));
        func_ov082_02271ce4(1);
        break;
    case 8:
        func_ov082_02271ce4(0);
        break;
    }
}

