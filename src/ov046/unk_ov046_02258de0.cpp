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
class Unk_ov046_0225aa0c;
class Unk_ov046_0225aaa0;
typedef void (Unk_ov046_0225aa0c::*Unk_ov046_0225aa0c_Fn)();
typedef void (Unk_ov046_0225aa0c::*Unk_ov046_02259480_Fn)(s32);

struct Unk_ov046_0225aa0c_Out {
    const void *unk_00;
    u8 unk_04;
};

struct Unk_ov046_0225a650_Entry {
    const void *p;
    u8 v;
};
struct Unk_ov046_0225a11c_Vec {
    s32 x, y, z;
};
struct Unk_ov046_02258e68_Vec {
    s32 x, y, z;
};
struct Unk_ov046_02258e68_Actor {
    u8 pad_00[0x5c];
    Unk_ov046_02258e68_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_020aa72c {
    void func_020aa784(const u8 *p);
    void func_020aa780(const void *p);
    void func_020aa72c();
    void *func_020aa7a0();
};
struct Unk_020aa3b8 {
    s32 func_020aa514();
    void func_020aa5f4();
    Unk_020aa72c *func_020aa560(s32 i);
    void func_020aa4cc(s32 v);
    s32 func_020aa4b8();
};
struct Unk_020660f8 {
    Unk_020aa3b8 *func_020679b4();
    void func_020679c0(s32 v);
    void func_02067a3c(s32 a, void *b);
    void func_02067a84(u8 *a, void *b);
};

struct Unk_020e2f74 {
    u32 pad[9];
    Unk_020e2f74();
    ~Unk_020e2f74();
};
struct Unk_020e3eb4 {
    u32 pad[0x114 / 4];
    Unk_020e3eb4();
    ~Unk_020e3eb4();
};

extern "C" {
extern void *data_020cbb18;
extern u8 data_021ef5d0;
extern u8 data_021ef5cc;
extern u16 data_021f47d8[];
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern Unk_ov046_0225a11c_Vec data_021f4880;

s32 func_02063b8c(u32 v);
s32 func_020b0564(void);
s32 func_020b058c(void);
s32 func_020b0334(s32 *out);
void func_020b031c(void);
void func_020b04cc(s32 idx);
void func_020b02ec(void *a, s32 idx);
s32 func_020b03a0(void *self, s32 idx);
void func_020b3558(void *o, u8 *p, u32 x);
BOOL func_020a032c(void);
void *func_0209750c(void);
s16 *func_0209c37c(s32 a, s32 b);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0206ec6c(void);
BOOL func_0206ed18(void);
const void *func_020aa3ac(u32 i);
Unk_ov046_02258e68_Actor *func_02095204(s32 n);
s32 func_020e9650(Unk_ov046_02258e68_Vec *a, Unk_ov046_02258e68_Vec *b);
void *func_020b50b4();
s32 func_020b6080(void *a, void *b, void *c, s32 d);
void func_0203a304();
void func_0203d704(void *p, s32 v);
void func_0203d67c(void *self);
s32 func_0209ccd0();
s32 func_020e7500(void *p);
void func_020902f8(s32 h);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
void func_020902d4(s32 h, void *b, void *c);

BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *self);
void _ZN12Unk_020e2f74C1Ev(void *self);
void _ZN12Unk_020e2f74D1Ev(void *self);
void _ZN12Unk_020e2a7813func_020a7a0cEPS_(void *self, void *p);
void _ZN12Unk_020e2a7813func_020a7bd8EPS_(void *self, void *p);
void _ZN12Unk_020660f813func_02067a1cEiii(void *self, s32 a, void *b, void *c);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, u32 a, u32 b, u32 c);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void _ZN12Unk_0201985813func_020195c8Eiijtt(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *self);
BOOL _ZN12Unk_0201985813func_02019790Ev(void *self);
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *self, u8 a, s32 b, s32 c, Unk_ov046_0225a11c_Vec *v, s32 d, s32 e, u8 f);
}
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_020a7a0c _ZN12Unk_020e2a7813func_020a7a0cEPS_
#define func_020a7bd8 _ZN12Unk_020e2a7813func_020a7bd8EPS_
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_020195c8 _ZN12Unk_0201985813func_020195c8Eiijtt
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih

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
    virtual void vfunc_78(Unk_ov046_0225aa0c_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    void func_02015848(u32 a, u32 b);
    void func_02015878(u32 a, u32 b);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
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
    void func_02015158(u32 a, u32 b, u32 c);
    void func_02015170(u32 a, u32 b);
    void func_020151d0(s32 a);
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
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
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
    virtual BOOL vfunc_58();
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
    BOOL func_0201b9bc();
    s32 func_0201bcbc(Unk_020d77a4 *other);

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

struct Unk_ov046_0225aa0c_Row {
    u32 id;
    Unk_ov046_0225aa0c_Fn f;
};

struct Unk_ov046_02259480_Ent {
    u32 id;
    Unk_ov046_02259480_Fn fn;
};

class Unk_ov046_0225aa0c : public Unk_020d8b38 {
public:
    Unk_ov046_0225aa0c();
    virtual ~Unk_ov046_0225aa0c();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov046_0225aa0c_Out *out);
    virtual void vfunc_84();
    virtual void vfunc_88();

    void func_ov046_02259004(s32 a);
    void func_ov046_02259024(s32 a);
    void func_ov046_0225904c(s32 a);
    void func_ov046_022590a0(s32 a);
    void func_ov046_022590b4(s32 a);
    void func_ov046_022590e0(s32 a);
    void func_ov046_0225913c(s32 a);
    void func_ov046_022591b0(s32 a);
    void func_ov046_0225922c(s32 a);
    void func_ov046_02259264(s32 a);
    void func_ov046_022592a4(s32 a);
    void func_ov046_022592d4(s32 idx);
    void func_ov046_0225946c(s32 a);
    void func_ov046_02259694();
    void func_ov046_022596b8();
    void func_ov046_022596dc();
    void func_02259700();
    void func_02259714();
    void func_02259728();
    void func_0225975c();
    void func_022597a0();
    void func_022597f8();
    s32 func_02259ac0();
    void func_02259c2c(s32 v);
    void func_02259c34(void *p);
    void func_02259ce0();
    void func_02259d3c();
    void func_02259d8c();
    void func_02259de8();
    void func_02259eb4();
    void func_02259ed4(s32 idx);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 *unk_b0;
    /* 0xb4 */ Unk_ov046_0225aa0c_Fn unk_b4;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 unk_c2;
    /* 0xc3 */ u8 pad_c3;
    /* 0xc4 */ s32 unk_c4[5];
    /* 0xd8 */ s32 unk_d8;
};

class Unk_ov046_0225aaa0 : public Unk_020d8bc8 {
public:
    Unk_ov046_0225aaa0() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov046_02258e34();
    BOOL func_ov046_02258e68();
    BOOL func_ov046_0225a0d4();
    BOOL func_ov046_0225a0d8();
    BOOL func_ov046_0225a11c();
    BOOL func_ov046_0225a1a0();
    BOOL func_ov046_0225a1ec();
    BOOL func_ov046_0225a250();
    BOOL func_ov046_0225a280();
    BOOL func_ov046_0225a2bc();
    BOOL func_ov046_0225a32c();
    void func_ov046_0225a398(s32 state);

    s32 unk_654;
    Unk_ov046_0225aa0c unk_658;
    u16 unk_734;
    s16 unk_736;
    u16 unk_738;
    u8 unk_73a;
    u8 pad_73b;
    s32 unk_73c;
};

struct Unk_ov046_0225a398_Ent {
    BOOL (Unk_ov046_0225aaa0::*enter)();
    BOOL (Unk_ov046_0225aaa0::*exit)();
};

struct Unk_ov046_SceneEntry {
    void *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" void *func_ov046_0225a538();
struct Unk_ov046_Quad {
    u8 a, b, c, d;
    Unk_ov046_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};
extern "C" Unk_ov046_Quad data_ov046_0225ae04;
extern "C" Unk_ov046_Quad data_ov046_0225ae08;
extern "C" Unk_ov046_Quad data_ov046_0225ae20;
extern "C" Unk_ov046_Quad data_ov046_0225ae10;
extern "C" Unk_ov046_Quad data_ov046_0225ae00;
extern "C" Unk_ov046_Quad data_ov046_0225ae0c;
extern "C" u8 data_ov046_0225a9b8[];
extern "C" u8 data_ov046_0225a9e8[];
extern "C" const Unk_ov046_0225a650_Entry data_ov046_0225a650[5];
extern "C" Unk_ov046_SceneEntry data_ov046_0225a9d0;
extern Unk_ov046_0225a398_Ent data_ov046_0225ae4c[5];
extern "C" u8 data_ov046_0225a9a8[];

static inline BOOL Unk_ov046_02258e68_Both() {
    if (data_021ef5d0 != 0 && data_021ef5cc != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov046_02259de8_Time {
    u32 w0, w1;
};

extern "C" void *func_ov046_0225a538() {
    return new Unk_ov046_0225aaa0();
}

BOOL Unk_ov046_0225aaa0::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28((Unk_0201bc1c *)&unk_658);
    unk_658.func_02259c34(this);
    unk_73c = -1;
    return TRUE;
}

BOOL Unk_ov046_0225aaa0::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    unk_736 = unk_8e;
    unk_738 = 0;
    unk_4cc.unk_1c |= 2;
    unk_658.func_02259c2c(5);
    if (func_0209ccd0() == 2 || func_0209ccd0() == 3 || func_02072e44(data_020cbb18) != 0 ||
        *func_0209c37c(0, 0x4a) != 0) {
        func_ov046_0225a398(0);
    } else {
        func_ov046_0225a398(2);
    }
    return TRUE;
}

BOOL Unk_ov046_0225aaa0::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    if (unk_73c != -1) {
        func_020902f8(unk_73c);
        unk_73c = -1;
    }
    return TRUE;
}

u8 *Unk_ov046_0225aaa0::vfunc_6c() { return data_ov046_0225a9e8; }

// Getters at the end of the file so they are not inlined.
u8 *Unk_ov046_0225aaa0::vfunc_70() { return data_ov046_0225a9b8; }

BOOL Unk_ov046_0225aaa0::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov046_0225ae4c[unk_654].exit) {
        r = (this->*data_ov046_0225ae4c[unk_654].exit)();
    }
    return r;
}

void Unk_ov046_0225aaa0::func_ov046_0225a398(s32 state) {
    BOOL ok = TRUE;
    if (data_ov046_0225ae4c[state].enter) {
        ok = (this->*data_ov046_0225ae4c[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov046_0225aaa0::func_ov046_0225a32c() {
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_734 = 0x78;
    func_0201a6c0(&unk_3b0, 1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov046_0225aaa0::func_ov046_0225a2bc() {
    if (func_ov046_02258e34()) {
        return TRUE;
    }
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0 || func_0209ccd0() == 2 ||
        func_0209ccd0() == 3) {
        return TRUE;
    }
    if (func_020e7500(&unk_734) == 0) {
        unk_738 = 0x18;
        func_ov046_0225a398(2);
    }
    return TRUE;
}

BOOL Unk_ov046_0225aaa0::func_ov046_0225a280() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_736, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov046_0225aaa0::func_ov046_0225a250() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov046_0225a398(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov046_0225aaa0::func_ov046_0225a1ec() {
    func_020195c8(&unk_564, 1, 0xf0, 0, unk_738, 0);
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    unk_73a = 1;
    return TRUE;
}

BOOL Unk_ov046_0225aaa0::func_ov046_0225a1a0() {
    if (func_ov046_02258e34()) {
        return TRUE;
    }
    if (unk_73c == -1) {
        unk_73c = func_02090330(0x3c, (u8 *)this + 0x478, &unk_8e, 0);
    } else {
        func_020902d4(unk_73c, (u8 *)this + 0x478, &unk_8e);
    }
    return TRUE;
}

BOOL Unk_ov046_0225aaa0::func_ov046_0225a11c() {
    Unk_020d77a4 *p = (Unk_020d77a4 *)unk_658.func_02015aac();
    s32 r = 0;
    if (p) {
        r = func_0201bcbc(p);
    }
    if (unk_73c != -1) {
        func_020902f8(unk_73c);
        unk_73c = -1;
    }
    func_020141b4(&unk_618, 0, r, 0);
    func_0201a6c0(&unk_3b0, 1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov046_0225aaa0::func_ov046_0225a0d8() {
    if (func_02014220(&unk_618) == 0) {
        unk_73a = 0;
        unk_658.func_02259c2c(5);
        func_0203d67c(this);
        func_ov046_0225a398(4);
    }
    return TRUE;
}

// ---- unit 3
BOOL Unk_ov046_0225aaa0::func_ov046_0225a0d4() { return TRUE; }

void Unk_ov046_0225aa0c::vfunc_88() {
    Unk_020660f8 *o = unk_3c;
    Unk_020aa3b8 *r7 = o->func_020679b4();
    u8 v = 0xf;
    r7->func_020aa5f4();
    Unk_020e2f74 a;
    Unk_020e2f74 b;
    v = 0x7d;
    func_020b3558(&b, &v, 0);
    s32 i;
    for (i = 0; i < 5; i++) {
        unk_c4[i] = -1;
    }
    s32 r6 = unk_c0;
    s32 r4 = 0;
    for (; r6 < 0x10 && r4 < 4 && unk_c1 != 0; r6++) {
        if (func_020b03a0(&a, r6)) {
            Unk_020e3eb4 c;
            Unk_020aa72c *q = r7->func_020aa560(r4);
            func_020a7a0c(&c, &a);
            func_020a7a0c(&c, &b);
            func_020a7bd8(q->func_020aa7a0(), &c);
            unk_c4[r4] = r6;
            r4++;
            unk_c1 = unk_c1 - 1;
        }
    }
    unk_c0 = r6;
    if (unk_c0 >= 0x10) {
        unk_c0 = 0xf;
    }
    v = 0xf;
    if (unk_c1 == 0) {
        v = 0x10;
    }
    Unk_020aa72c *p = r7->func_020aa560(r4);
    p->func_020aa784(&v);
    p->func_020aa780(func_020aa3ac(1));
    p->func_020aa72c();
    r7->func_020aa4cc(r4 + 1);
    r7->func_020aa4b8();
    unk_3c->func_020679c0(1);
}

void Unk_ov046_0225aa0c::vfunc_84() {
    if (unk_b4) {
        (this->*unk_b4)();
        unk_b4 = NULL;
    }
}// Declarations for data defined further down (definition order sets the data layout)

extern "C" Unk_ov046_Quad data_ov046_0225ae04 = Unk_ov046_Quad(31, 20, 20, 31);

extern "C" Unk_ov046_Quad data_ov046_0225ae08 = Unk_ov046_Quad(20, 20, 31, 31);

extern "C" Unk_ov046_Quad data_ov046_0225ae20 = Unk_ov046_Quad(31, 31, 20, 31);

extern "C" Unk_ov046_Quad data_ov046_0225ae10 = Unk_ov046_Quad(20, 31, 20, 31);

extern "C" Unk_ov046_Quad data_ov046_0225ae00 = Unk_ov046_Quad(20, 31, 31, 31);

extern "C" Unk_ov046_Quad data_ov046_0225ae0c = Unk_ov046_Quad(20, 24, 24, 31);

extern "C" u8 data_ov046_0225a9b8[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 'w', 's', '.', 'n', 's', 'b', 'm', 'd', 0};

extern "C" u8 data_ov046_0225a9e8[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 'w', 's', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

extern "C" const Unk_ov046_0225a650_Entry data_ov046_0225a650[5] = {
    {data_ov046_0225a9a8, 0},
    {data_ov046_0225a9a8, 0x2c},
    {data_ov046_0225a9a8, 0x2d},
    {data_ov046_0225a9a8, 0x2e},
    {data_ov046_0225a9a8, 4},
};

extern "C" Unk_ov046_SceneEntry data_ov046_0225a9d0 = {func_ov046_0225a538, 0x6d, 0x73, 2, 0x5000, 0x5000, 0x3e800};

Unk_ov046_0225a398_Ent data_ov046_0225ae4c[5] = {
    {&Unk_ov046_0225aaa0::func_ov046_0225a32c, &Unk_ov046_0225aaa0::func_ov046_0225a2bc},
    {&Unk_ov046_0225aaa0::func_ov046_0225a280, &Unk_ov046_0225aaa0::func_ov046_0225a250},
    {&Unk_ov046_0225aaa0::func_ov046_0225a1ec, &Unk_ov046_0225aaa0::func_ov046_0225a1a0},
    {&Unk_ov046_0225aaa0::func_ov046_0225a11c, &Unk_ov046_0225aaa0::func_ov046_0225a0d8},
    {NULL, &Unk_ov046_0225aaa0::func_ov046_0225a0d4},
};

void Unk_ov046_0225aa0c::func_02259ed4(s32 idx) {
    static Unk_ov046_0225aa0c_Fn tbl[5] = {
        &Unk_ov046_0225aa0c::func_02259eb4,
        &Unk_ov046_0225aa0c::func_02259de8,
        &Unk_ov046_0225aa0c::func_02259d8c,
        &Unk_ov046_0225aa0c::func_02259d3c,
        &Unk_ov046_0225aa0c::func_02259ce0,
    };
    unk_b4 = tbl[idx];
}

void Unk_ov046_0225aa0c::func_02259eb4() {
    Unk_020660f8 *o = unk_3c;
    u8 v = 0x12;
    o->func_02067a84(&v, data_ov046_0225a9a8);
}

void Unk_ov046_0225aa0c::func_02259de8() {
    Unk_020660f8 *o = unk_3c;
    u8 msg[4];
    Unk_ov046_02259de8_Time t;
    msg[0] = 0xc;
    if (func_0206ed18()) {
        t.w0 = 0;
        t.w1 = 0;
        func_020b02ec(&t, unk_bc);
        func_02015878(((u8 *)&t)[4], 2);
        func_02015848(((u8 *)&t)[3], 3);
        func_02015958(((u8 *)&t)[1], 5, 2, 0, 0);
        s32 h = 0x19;
        s32 m = ((u8 *)&t)[2];
        if (m > 0xc) {
            h = 0x1a;
            m -= 0xc;
        }
        if (m == 0) {
            m = 0xc;
        }
        func_02015958(m, 4, 2, 0, 0);
        msg[1] = h;
        _ZN12Unk_020660f813func_02067a1cEiii(o, 8, &msg[1], (u8 *)"st_general");
        msg[0] = 8;
    } else {
        func_020b04cc(unk_bc);
        unk_c1 = 0x10 - func_020b0564();
        unk_c0 = 0;
    }
    o->func_02067a84(msg, data_ov046_0225a9a8);
}

void Unk_ov046_0225aa0c::func_02259d8c() {
    Unk_020660f8 *o = unk_3c;
    u8 v = 5;
    if (func_0206ec6c()) {
        if (func_0206ed18()) {
            Unk_020e2f74 s;
            v = 0xb;
            func_020b03a0(&s, unk_bc);
            unk_3c->func_02067a3c(0, &s);
        }
        o->func_02067a84(&v, data_ov046_0225a9a8);
    }
}

void Unk_ov046_0225aa0c::func_02259d3c() {
    Unk_020660f8 *o = unk_3c;
    u8 v = 0x1d;
    if (func_0206ed18()) {
        v = 0x38;
    } else {
        unk_c1 = 0x10 - func_020b0564();
        unk_c0 = 0;
        v = 0x1d;
    }
    o->func_02067a84(&v, data_ov046_0225a9a8);
}

void Unk_ov046_0225aa0c::func_02259ce0() {
    Unk_020660f8 *o = unk_3c;
    u8 v = 5;
    if (func_0206ec6c()) {
        if (func_0206ed18()) {
            v = 0x3d;
            Unk_020e2f74 s;
            func_020b03a0(&s, unk_bc);
            unk_3c->func_02067a3c(0, &s);
        }
        o->func_02067a84(&v, data_ov046_0225a9a8);
    }
}

Unk_ov046_0225aa0c::Unk_ov046_0225aa0c() {}

Unk_ov046_0225aa0c::~Unk_ov046_0225aa0c() {}

void Unk_ov046_0225aa0c::vfunc_08() {
    Unk_020d7714::vfunc_08();
    unk_b4 = NULL;
    unk_bc = func_020b058c();
}

void Unk_ov046_0225aa0c::func_02259c34(void *p) {
    vfunc_08();
    unk_b0 = (u8 *)p;
    unk_c0 = 0;
    unk_c1 = 0x10 - func_020b0564();
}

void Unk_ov046_0225aa0c::func_02259c2c(s32 v) {
    unk_ac = v;
}

void Unk_ov046_0225aa0c::vfunc_78(Unk_ov046_0225aa0c_Out *out) {
    if (func_020a032c()) {
        out->unk_00 = (u8 *)"sp_etc_sequence4";
        out->unk_04 = 0x14;
        return;
    }
    if (unk_ac == 5) {
        if (func_0202e1cc(2, 1) == 0) {
            if (unk_b0[0x73a] == 0) {
                unk_ac = 1;
            } else {
                unk_ac = 0;
            }
        } else {
            if (unk_b0[0x73a] == 0) {
                unk_ac = 3;
            } else {
                unk_ac = 2;
            }
        }
    }
    s32 t = unk_ac;
    if (t == 4 && unk_b0[0x73a] == 0) {
        if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
            if (func_020b0564() < 0x10) {
                out->unk_04 = 0x13;
            } else {
                out->unk_04 = 0x10;
            }
        } else {
            if (func_020b0564() < 0x10) {
                out->unk_04 = 0x14;
            } else {
                out->unk_04 = 1;
            }
        }
        out->unk_00 = data_ov046_0225a9a8;
    } else if (t >= 0 && t < 5) {
        out->unk_04 = data_ov046_0225a650[t].v;
        out->unk_00 = data_ov046_0225a650[unk_ac].p;
    }
}

s32 Unk_ov046_0225aa0c::func_02259ac0() {
    unk_c1 = 0x10 - func_020b0564();
    unk_c0 = 0;
    if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
        if (func_020b0564() < 0x10) {
            return 0x27;
        }
        return 0x26;
    }
    if (func_020b0564() < 0x10) {
        return 0x28;
    }
    return 0x29;
}
extern "C" u8 data_ov046_0225a9a8[] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'a', 's', 't', 'r', 'o', 0};

// Data order: this unit is placed object by object (see object_order.txt).

void Unk_ov046_0225aa0c::vfunc_14() {
    if (func_020a032c() == 0) {
        func_0209750c();
        unk_d8 = 0xff;
        static Unk_ov046_0225aa0c_Row tbl[29] = {
            {0x00, &Unk_ov046_0225aa0c::func_022597f8},
            {0x04, &Unk_ov046_0225aa0c::func_022597a0},
            {0x05, &Unk_ov046_0225aa0c::func_ov046_022596dc},
            {0x07, &Unk_ov046_0225aa0c::func_0225975c},
            {0x09, &Unk_ov046_0225aa0c::func_ov046_022596dc},
            {0x0b, &Unk_ov046_0225aa0c::func_02259728},
            {0x0c, &Unk_ov046_0225aa0c::func_02259714},
            {0x12, &Unk_ov046_0225aa0c::func_02259714},
            {0x15, &Unk_ov046_0225aa0c::func_02259700},
            {0x16, &Unk_ov046_0225aa0c::func_02259714},
            {0x17, &Unk_ov046_0225aa0c::func_02259714},
            {0x1a, &Unk_ov046_0225aa0c::func_02259714},
            {0x1b, &Unk_ov046_0225aa0c::func_02259714},
            {0x1d, &Unk_ov046_0225aa0c::func_02259714},
            {0x1e, &Unk_ov046_0225aa0c::func_02259700},
            {0x1f, &Unk_ov046_0225aa0c::func_02259700},
            {0x21, &Unk_ov046_0225aa0c::func_02259714},
            {0x2c, &Unk_ov046_0225aa0c::func_022597f8},
            {0x2d, &Unk_ov046_0225aa0c::func_022597f8},
            {0x2e, &Unk_ov046_0225aa0c::func_022597f8},
            {0x30, &Unk_ov046_0225aa0c::func_ov046_02259694},
            {0x32, &Unk_ov046_0225aa0c::func_02259714},
            {0x33, &Unk_ov046_0225aa0c::func_02259714},
            {0x3b, &Unk_ov046_0225aa0c::func_ov046_022596b8},
            {0x3d, &Unk_ov046_0225aa0c::func_02259714},
            {0x3e, &Unk_ov046_0225aa0c::func_02259714},
            {0x3f, &Unk_ov046_0225aa0c::func_02259700},
            {0x40, &Unk_ov046_0225aa0c::func_02259700},
            {0x41, &Unk_ov046_0225aa0c::func_02259700},
        };
        s32 i = 0;
        u8 *p = &unk_1e;
        Unk_ov046_0225aa0c_Row *t = tbl;
        for (; (u32)i < 0x1d; i++) {
            u32 a = tbl[i].id;
            u32 b = *p;
            if (a == b) {
                (this->*t[i].f)();
            }
        }
        if (unk_d8 != 0xff) {
            u8 v = unk_d8;
            unk_3c->func_02067a84(&v, data_ov046_0225a9a8);
        }
    }
}

void Unk_ov046_0225aa0c::func_022597f8() {
    s32 v = 0;
    if (func_020b0334(&v) == 0) {
        if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
            unk_d8 = 0x2f;
        } else {
            unk_d8 = 0x11;
        }
    } else {
        if (func_020b0334(&v) == 1) {
            Unk_020e2f74 s;
            func_020b03a0(&s, v);
            unk_3c->func_02067a3c(7, &s);
            unk_d8 = 0x39;
        } else {
            unk_d8 = 0x3a;
        }
        func_020b031c();
    }
}

void Unk_ov046_0225aa0c::func_022597a0() {
    if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
        if (func_020b0564() < 0x10) {
            unk_d8 = 0x13;
        } else {
            unk_d8 = 0x10;
        }
    } else {
        if (func_020b0564() < 0x10) {
            unk_d8 = 0x14;
        } else {
            unk_d8 = 1;
        }
    }
}

void Unk_ov046_0225aa0c::func_0225975c() {
    unk_bc = func_020b058c();
    if (unk_bc >= 0) {
        func_02015158(0x2e, (u8)unk_bc, 0);
        func_020151d0(3);
        func_02259ed4(1);
    } else {
        unk_d8 = 0x3e;
    }
}

void Unk_ov046_0225aa0c::func_02259728() {
    s32 r = func_02063b8c(0x65);
    if (r < 0x46) {
        unk_d8 = func_02259ac0();
    } else if (r < 0x55) {
        unk_d8 = 0x32;
    } else {
        unk_d8 = 0x33;
    }
}

void Unk_ov046_0225aa0c::func_02259714() {
    unk_d8 = func_02259ac0();
}

// ---- unit 2
void Unk_ov046_0225aa0c::func_02259700() {
    vfunc_88();
}

void Unk_ov046_0225aa0c::func_ov046_022596dc() {
    func_02015170(0x12, 0);
    func_020151d0(2);
    func_02259ed4(2);
}

void Unk_ov046_0225aa0c::func_ov046_022596b8() {
    func_02015170(0x12, 0);
    func_020151d0(2);
    func_02259ed4(4);
}

void Unk_ov046_0225aa0c::func_ov046_02259694() {
    func_02015170(0x2d, 0);
    func_020151d0(2);
    func_02259ed4(0);
}

void Unk_ov046_0225aa0c::vfunc_18() {
    s32 t = func_02015a5c()->func_020aa514();
    unk_d8 = 0xff;
    static Unk_ov046_02259480_Ent tbl[26] = {
        {0x01, &Unk_ov046_0225aa0c::func_ov046_0225922c},
        {0x08, &Unk_ov046_0225aa0c::func_ov046_0225946c},
        {0x10, &Unk_ov046_0225aa0c::func_ov046_022590b4},
        {0x13, &Unk_ov046_0225aa0c::func_ov046_022590b4},
        {0x14, &Unk_ov046_0225aa0c::func_ov046_022591b0},
        {0x15, &Unk_ov046_0225aa0c::func_ov046_022592d4},
        {0x18, &Unk_ov046_0225aa0c::func_ov046_022590e0},
        {0x19, &Unk_ov046_0225aa0c::func_ov046_0225913c},
        {0x1e, &Unk_ov046_0225aa0c::func_ov046_022592d4},
        {0x1f, &Unk_ov046_0225aa0c::func_ov046_022592d4},
        {0x20, &Unk_ov046_0225aa0c::func_ov046_022590a0},
        {0x23, &Unk_ov046_0225aa0c::func_ov046_02259264},
        {0x24, &Unk_ov046_0225aa0c::func_ov046_0225904c},
        {0x25, &Unk_ov046_0225aa0c::func_ov046_022590e0},
        {0x26, &Unk_ov046_0225aa0c::func_ov046_022590b4},
        {0x27, &Unk_ov046_0225aa0c::func_ov046_022590b4},
        {0x28, &Unk_ov046_0225aa0c::func_ov046_022591b0},
        {0x29, &Unk_ov046_0225aa0c::func_ov046_0225922c},
        {0x2a, &Unk_ov046_0225aa0c::func_ov046_022590e0},
        {0x2b, &Unk_ov046_0225aa0c::func_ov046_022590e0},
        {0x31, &Unk_ov046_0225aa0c::func_ov046_022592a4},
        {0x35, &Unk_ov046_0225aa0c::func_ov046_02259024},
        {0x38, &Unk_ov046_0225aa0c::func_ov046_02259004},
        {0x3f, &Unk_ov046_0225aa0c::func_ov046_022592d4},
        {0x40, &Unk_ov046_0225aa0c::func_ov046_022592d4},
        {0x41, &Unk_ov046_0225aa0c::func_ov046_022592d4},
    };
    u32 i = 0;
    u8 *pe = &unk_1e;
    goto test;
loop:
    {
        u32 id = *(u32 *)((u8 *)tbl + i * 12);
        u32 cur = *pe;
        if (id == cur) {
            (this->*tbl[i].fn)(t);
        }
    }
    i++;
test:
    if (i < 26) {
        goto loop;
    }
    if (unk_d8 != 0xff) {
        u8 b = unk_d8;
        unk_3c->func_02067a84(&b, data_ov046_0225a9a8);
    }
}

void Unk_ov046_0225aa0c::func_ov046_0225946c(s32 a) {
    if (a == 0) {
        unk_d8 = 9;
    } else {
        unk_d8 = 0x23;
    }
}

void Unk_ov046_0225aa0c::func_ov046_022592d4(s32 idx) {
    struct {
        u8 msg;
        u8 pad[3];
        u32 w[2];
    } l;
    Unk_020660f8 *o = unk_3c;
    unk_bc = unk_c4[idx];
    if (unk_bc >= 0) {
        u32 buf[9];
        _ZN12Unk_020e2f74C1Ev(buf);
        func_020b03a0(buf, unk_bc);
        unk_3c->func_02067a3c(6, buf);
        if (unk_c2 == 0) {
            unk_d8 = 0x19;
            unk_c0 = 0;
        } else if (unk_c2 == 1) {
            l.w[0] = 0;
            l.w[1] = 0;
            func_020b02ec(&l.w, unk_bc);
            func_02015878(((u8 *)l.w)[4], 2);
            func_02015848(((u8 *)l.w)[3], 3);
            func_02015958(((u8 *)l.w)[1], 5, 2, 0, 0);
            s32 t4 = ((u8 *)l.w)[2];
            s32 r1 = 0x19;
            if (t4 > 0xc) {
                r1 = 0x1a;
                t4 -= 0xc;
            }
            if (t4 == 0) {
                t4 = 0xc;
            }
            l.msg = r1;
            _ZN12Unk_020660f813func_02067a1cEiii(o, 8, &l.msg, (u8 *)"st_general");
            func_02015958(t4, 4, 2, 0, 0);
            unk_d8 = 0x17;
        } else if (unk_c2 == 2) {
            func_02015158(0x2e, (u8)unk_bc, 0);
            func_020151d0(3);
            func_02259ed4(3);
        }
        unk_c2 = 0;
        _ZN12Unk_020e2f74D1Ev(buf);
    } else {
        if (unk_c1 == 0) {
            unk_d8 = func_02259ac0();
            if ((u8)(unk_c2 + 0xff) <= 1) {
                if (func_020b0564() < 0x10) {
                    if (unk_c2 == 1) {
                        unk_d8 = 0x16;
                    } else {
                        unk_d8 = 0x1d;
                    }
                }
            }
            unk_c2 = 0;
        } else {
            if (unk_1e == 0x15) {
                goto set3f;
            }
            if (unk_1e == 0x1e) {
                goto set3f;
            }
            if (unk_1e == 0x1f) {
            set3f:
                unk_d8 = 0x3f;
            } else if (unk_1e == 0x3f) {
                unk_d8 = 0x40;
            } else if (unk_1e == 0x40) {
                unk_d8 = 0x41;
            }
        }
    }
}

void Unk_ov046_0225aa0c::func_ov046_022592a4(s32 a) {
    if (a == 0) {
        unk_d8 = 7;
    } else if (func_020b0564() < 0x10) {
        unk_d8 = 0x2a;
    } else {
        unk_d8 = func_02259ac0();
    }
}

void Unk_ov046_0225aa0c::func_ov046_02259264(s32 a) {
    if (a == 0) {
        if (unk_bc >= 0) {
            func_020b04cc(unk_bc);
        }
        unk_c1 = 0x10 - func_020b0564();
        unk_c0 = 0;
        unk_d8 = 0x21;
    } else {
        unk_d8 = 9;
    }
}

void Unk_ov046_0225aa0c::func_ov046_0225922c(s32 a) {
    if (a == 0) {
        if (func_020b0564() < 0x10) {
            unk_d8 = 0x18;
        } else {
            unk_d8 = 7;
        }
    } else if (a == 1) {
        unk_d8 = 0x30;
    } else {
        unk_d8 = 2;
    }
}

void Unk_ov046_0225aa0c::func_ov046_022591b0(s32 a) {
    unk_c1 = 0x10 - func_020b0564();
    unk_c0 = 0;
    if (a == 0) {
        if (func_020b0564() < 0x10) {
            unk_d8 = 0x18;
        } else {
            unk_d8 = 7;
        }
    } else if (a == 1) {
        unk_d8 = 0x35;
    } else if (a == 2) {
        unk_c1 = 0x10 - func_020b0564();
        u8 z = 0;
        unk_c0 = z;
        unk_d8 = 0x1f;
        unk_c2 = z;
    } else {
        unk_d8 = 2;
    }
}

void Unk_ov046_0225aa0c::func_ov046_0225913c(s32 a) {
    u32 buf[9];
    unk_c0 = 0;
    if (a == 0) {
        if (unk_bc >= 0) {
            _ZN12Unk_020e2f74C1Ev(buf);
            func_020b03a0(buf, unk_bc);
            unk_3c->func_02067a3c(6, buf);
            func_020b04cc(unk_bc);
            _ZN12Unk_020e2f74D1Ev(buf);
        }
        unk_c1 = 0x10 - func_020b0564();
        unk_c0 = 0;
        unk_d8 = 0x1b;
    } else {
        unk_d8 = func_02259ac0();
    }
}

void Unk_ov046_0225aa0c::func_ov046_022590e0(s32 a) {
    unk_c1 = 0x10 - func_020b0564();
    unk_c0 = 0;
    if (a == 0) {
        if (func_020b0564() == 0) {
            unk_d8 = 0x3e;
        } else {
            unk_d8 = 7;
        }
    } else if (a == 1) {
        unk_c2 = 2;
        unk_d8 = 0x1e;
    } else {
        unk_d8 = 0xc;
    }
}

void Unk_ov046_0225aa0c::func_ov046_022590b4(s32 a) {
    if (a == 0) {
        if (func_020b0564() < 0x10) {
            unk_d8 = 0x35;
        } else {
            unk_d8 = 0x30;
        }
    } else {
        unk_d8 = 2;
    }
}

void Unk_ov046_0225aa0c::func_ov046_022590a0(s32 a) {
    if (a == 0) {
        unk_d8 = 7;
    } else {
        unk_d8 = 0xc;
    }
}

void Unk_ov046_0225aa0c::func_ov046_0225904c(s32 a) {
    unk_c1 = 0x10 - func_020b0564();
    unk_c0 = 0;
    if (a == 0) {
        unk_c2 = 2;
        unk_d8 = 0x1e;
    } else if (func_020b0564() < 0x10) {
        unk_d8 = 0x25;
    } else {
        unk_d8 = func_02259ac0();
    }
}

void Unk_ov046_0225aa0c::func_ov046_02259024(s32 a) {
    if (a == 0) {
        unk_d8 = 0x30;
    } else if (a == 1) {
        unk_c2 = 1;
        unk_d8 = 0x15;
    } else {
        unk_d8 = 0x16;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov046_0225aa0c

void Unk_ov046_0225aa0c::func_ov046_02259004(s32 a) {
    if (a == 0) {
        unk_d8 = 0x3b;
    } else {
        unk_d8 = func_02259ac0();
    }
}

BOOL Unk_ov046_0225aaa0::vfunc_48() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov046_0225aaa0::vfunc_58() {
    return func_02014220(&unk_618) == 0 ? TRUE : FALSE;
}

void Unk_ov046_0225aaa0::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
    case 1:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)func_0201bc4c(4));
        func_ov046_0225a398(3);
        break;
    case 8:
        func_ov046_0225a398(1);
        break;
    }
}

BOOL Unk_ov046_0225aaa0::func_ov046_02258e68() {
    Unk_ov046_02258e68_Vec v0;
    Unk_ov046_02258e68_Vec v1;
    u32 out;
    u32 buf[3];
    BOOL result;
    Unk_ov046_02258e68_Actor *p = func_02095204(4);
    BOOL r6;
    if (Unk_ov046_02258e68_Both()) {
        r6 = TRUE;
    } else {
        r6 = FALSE;
    }
    if (p == 0 || func_02014220(&unk_618) != 0) {
        unk_658.func_02259c2c(5);
        result = FALSE;
        goto end;
    }
    Unk_ov046_02258e68_Vec *pv = &p->unk_5c;
    v0.x = p->unk_5c.x;
    v0.y = pv->y;
    v0.z = pv->z;
    v1.x = p->unk_5c.x;
    v1.y = pv->y;
    v1.z = pv->z;
    v1.x = 0x10800;
    v1.z = 0x17000;
    s32 d = func_020e9650(&v0, &v1);
    s32 a = p->unk_8e;
    if (d < 0x1000) {
        a = a & 0xffff;
        if (a < 0x6000 || a > 0xa000) {
            unk_658.func_02259c2c(5);
            result = FALSE;
            goto end;
        }
        if (r6 == 0) {
            if ((data_021f47d8[1] & 1) != 0) {
                result = TRUE;
                goto end;
            }
        }
        if (r6 != 0) {
            if (func_020b6080(func_020b50b4(), &buf, &out, 0) != 0) {
                if (out == 0x16) {
                    result = TRUE;
                    goto end;
                }
            }
        }
    }
    result = FALSE;
end:
    return result;
}

// ---- unit 1
BOOL Unk_ov046_0225aaa0::func_ov046_02258e34() {
    if (func_ov046_02258e68()) {
        unk_658.func_02259c2c(4);
        func_0203a304();
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

