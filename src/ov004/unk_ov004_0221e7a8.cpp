// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
#include "types.h"

extern "C" {
void _ZN12Unk_0200e2c0C1Ev(void *self);
void _ZN12Unk_0200e2c0D1Ev(void *self);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(void *self, s32 a, s32 b, s32 c);
}

extern "C" {
const s16 data_ov004_02240134[4] = {0, -0x4000, 0x4000, 0};
s32 data_ov004_0224d4a4 = 0x400;
char data_ov004_0224d4d0[16] = "obj_etc_player";
s32 data_ov004_0224d4a8 = 0x400;
s32 data_ov004_0224d4bc = -0x2000;
s32 data_ov004_0224d4b8 = -0x2000;
s32 data_ov004_0224d4b0 = 0x400;
const s32 data_ov004_0224013c[4] = {0x10800, 0x2200, 0x17100, 0x2000};
s32 data_ov004_0224d4ac = 0xccd;
char data_ov004_0224d4c0[16] = "obj_etc_error";
s32 data_ov004_0224d4b4 = 0x400;
}

// Library base class chain (header Unk_020d8c7c.h rebuilt so that the vtable names the real symbols:
// slot 08 is Unk_020d9670::func_0203e678(s32), slot 20 takes a u32).
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

class Unk_020d8c7c : public Unk_020d8c7c_Base {
public:
    Unk_020d8c7c() {}
    virtual ~Unk_020d8c7c() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

struct Unk_ov004_02224ee4_Vec {
    s32 x, y, z;
};

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ void *unk_0c;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e624(u32 a);

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)
class Unk_02055704 {
public:
    Unk_02055704();
    virtual ~Unk_02055704();
    u8 pad_04[0x94];
};

class Unk_020dbd34 : public Unk_02055704 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 unk_98;
};

class Unk_020dbe7c {
public:
    virtual ~Unk_020dbe7c();
    inline Unk_020dbe7c() : unk_a4(0), unk_a8(0), unk_ac(0x1000) {}
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u32 unk_b0;

    s32 func_02056654();
    s32 func_020565e8(s32 a);
};

class Unk_020dbd54 : public Unk_020dbd34, public Unk_020dbe7c {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    void *unk_b4;

    s32 func_02054710();
    s32 func_020547cc(void *q);
    void func_020547e4();
    BOOL func_02054800(void *x);
    // declared in Unk_0205454c in src/main, but it is called on this object
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

extern "C" {
s32 func_ov004_02224d8c(void *self, u32 i);
void func_ov004_02224d9c(void *self);
void func_ov004_02224dbc(void *self, const char *s);
void *func_ov004_02224d68(void *self);
void func_ov004_02224d60(void *self);
void func_ov004_02224d5c(void *self);
void func_ov004_02224d08(void *self);
void func_ov004_02224d10(void *self, const char *s);
u32 func_ov004_02224d04(void *self);
void func_ov004_02224cf4(void *self);
void func_ov004_02224ce4(void *self);
void func_ov004_02224ca4(void *self, s32 v);
void func_ov004_02224cb8(void *self);
void func_ov004_02224cc0(void *self, void *v);
void func_ov004_02224cdc(void *self);
}

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)
class Unk_ov004_02224ee4 {
public:
    Unk_ov004_02224ee4();
    ~Unk_ov004_02224ee4();
    void func_ov004_02224ee4();
    inline s32 func_ov004_02224d8c(u32 i) { return ::func_ov004_02224d8c(this, i); }
    inline void func_ov004_02224d9c() { ::func_ov004_02224d9c(this); }
    inline void func_ov004_02224dbc(const char *s) { ::func_ov004_02224dbc(this, s); }
    inline void *func_ov004_02224d68() { return ::func_ov004_02224d68(this); }

    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

class Unk_ov004_02224d60 {
public:
    inline Unk_ov004_02224d60() { func_ov004_02224d60(this); }
    inline void func_ov004_02224d08() { ::func_ov004_02224d08(this); }
    inline void func_ov004_02224d10(const char *s) { ::func_ov004_02224d10(this, s); }
    inline u32 func_ov004_02224d04() { return ::func_ov004_02224d04(this); }

    u32 unk_00;
    u8 unk_04;
};

class Unk_ov004_02224cf4 {
public:
    inline Unk_ov004_02224cf4() { func_ov004_02224cf4(this); }
    inline void func_ov004_02224ca4(s32 v) { ::func_ov004_02224ca4(this, v); }
    inline void func_ov004_02224cb8() { ::func_ov004_02224cb8(this); }
    inline void func_ov004_02224cc0(Unk_ov004_02224ee4_Vec *v) { ::func_ov004_02224cc0(this, v); }
    inline void func_ov004_02224cdc() { ::func_ov004_02224cdc(this); }

    u32 unk_00[0x10];
};

extern "C" {

s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_0209c3e0(u32 v);
s32 func_0209c3f4(u32 v);
void _ZN12Unk_020d5d848vfunc_20Ev(void *o, u32 v);
void _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj(void *m, void *r, u32 z);
void NNS_G3dBindMdlTex(void *a, u32 b);
void NNS_G3dBindMdlPltt(void *a, u32 b);
}

class Unk_ov004_0224d4e8 : public Unk_020d9670 {
public:
    virtual ~Unk_ov004_0224d4e8();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_60(u32 v);
    virtual void vfunc_64(Unk_ov004_02224ee4_Vec *out);

    void func_ov004_02224f58(u32 v);
    s32 func_ov004_02224f20();
    s32 func_ov004_02224f3c();
    void func_ov004_02224f60();
    void func_ov004_02224f90(char *name);
    void func_ov004_02224fc8(char *a, char *b);

    /* 0xec */ Unk_020dbd54 unk_ec;
    /* 0x1a4 */ Unk_ov004_02224ee4 unk_1a4;
    /* 0x248 */ Unk_ov004_02224d60 unk_248;
    /* 0x250 */ Unk_ov004_02224cf4 unk_250;
};

extern "C" {
void _ZN12Unk_020d9670C2Ev(void *self);
void _ZN12Unk_020dbd54C1Ev(void *self);
void _ZN18Unk_ov004_02224ee4C1Ev(void *self);
extern char _ZTV18Unk_ov004_0224d4e8[];
}

typedef Unk_ov004_0224d4e8 M;
typedef Unk_ov004_02224ee4 A;
typedef Unk_ov004_02224d60 B;
typedef Unk_ov004_02224ee4_Vec Vec;

extern "C" void func_ov004_02224ff4(char *name, Unk_020dbd54 *m, A *a, B *b);
extern "C" void func_ov004_02225034(char *a, char *b, Unk_020dbd54 *m, A *aa, B *bb);
extern "C" void func_ov004_02224f7c(A *a, B *b);

extern "C" Unk_ov004_0224d4e8 *_ZN18Unk_ov004_0224d4e8C2Ev(Unk_ov004_0224d4e8 *self) {
    _ZN12Unk_020d9670C2Ev(self);
    *(void **)self = _ZTV18Unk_ov004_0224d4e8 + 8;
    _ZN12Unk_020dbd54C1Ev(&self->unk_ec);
    _ZN18Unk_ov004_02224ee4C1Ev(&self->unk_1a4);
    func_ov004_02224d60(&self->unk_248);
    func_ov004_02224cf4(&self->unk_250);
    self->unk_ea = 0xff;
    return self;
}

Unk_ov004_0224d4e8::~Unk_ov004_0224d4e8() {
    func_ov004_02224ce4(&unk_250);
    func_ov004_02224d5c(&unk_248);
}

BOOL Unk_ov004_0224d4e8::vfunc_04() {
    if (Unk_020d9670::vfunc_04() == 0) {
        return FALSE;
    }
    func_0203e624(0);
    unk_250.func_ov004_02224cdc();
    return TRUE;
}

BOOL Unk_ov004_0224d4e8::vfunc_1c() {
    if (Unk_020d9670::vfunc_1c() == 0) {
        return FALSE;
    }
    if (unk_ea != 0xff) {
        s32 v = func_ov004_02224f3c();
        if (unk_248.unk_04 != v) {
            vfunc_60(v);
        }
    }
    return TRUE;
}

void Unk_ov004_0224d4e8::vfunc_20(u32 a) {
    Vec out;
    vfunc_64(&out);
    unk_250.func_ov004_02224cc0(&out);
    _ZN12Unk_020d5d848vfunc_20Ev(this, a);
}

BOOL Unk_ov004_0224d4e8::vfunc_10() {
    if (Unk_020d9670::vfunc_10() == 0) {
        return FALSE;
    }
    unk_250.func_ov004_02224cb8();
    return TRUE;
}

void Unk_ov004_0224d4e8::vfunc_64(Vec *out) {
    out->x = unk_5c[0];
    out->y = unk_5c[1];
    out->z = unk_5c[2];
}

BOOL Unk_ov004_0224d4e8::vfunc_60(u32 v) {
    return TRUE;
}

extern "C" void func_ov004_02225034(char *a, char *b, Unk_020dbd54 *m, A *aa, B *bb) {
    aa->func_ov004_02224dbc(a);
    bb->func_ov004_02224d10(b);
    _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj(m, aa->func_ov004_02224d68(), 0);
    void *p = aa->func_ov004_02224d68();
    NNS_G3dBindMdlTex(p, bb->func_ov004_02224d04());
    void *q = aa->func_ov004_02224d68();
    NNS_G3dBindMdlPltt(q, bb->func_ov004_02224d04());
}

extern "C" void func_ov004_02224ff4(char *name, Unk_020dbd54 *m, A *a, B *b) {
    char x[0x28];
    char y[0x28];
    func_020639e8(x, "/roomObj/%s.arc", name);
    func_020639e8(y, "/roomObj/%s.nsbtx", name);
    func_ov004_02225034(x, y, m, a, b);
}

void Unk_ov004_0224d4e8::func_ov004_02224fc8(char *a, char *b) {
    func_ov004_02225034(a, b, &unk_ec, &unk_1a4, &unk_248);
}

void Unk_ov004_0224d4e8::func_ov004_02224f90(char *name) {
    char a[0x28];
    char b[0x28];
    func_020639e8(a, "/roomObj/%s.arc", name);
    func_020639e8(b, "/roomObj/%s.nsbtx", name);
    func_ov004_02224fc8(a, b);
}

extern "C" void func_ov004_02224f7c(A *a, B *b) {
    a->func_ov004_02224d9c();
    b->func_ov004_02224d08();
}

void Unk_ov004_0224d4e8::func_ov004_02224f60() {
    func_ov004_02224f7c(&unk_1a4, &unk_248);
}

void Unk_ov004_0224d4e8::func_ov004_02224f58(u32 v) {
    unk_ea = v;
}

s32 Unk_ov004_0224d4e8::func_ov004_02224f3c() {
    if (unk_ea != 0xff) {
        return func_0209c3f4(unk_ea);
    }
    return 0;
}

s32 Unk_ov004_0224d4e8::func_ov004_02224f20() {
    if (unk_ea != 0xff) {
        return func_0209c3e0(unk_ea);
    }
    return 0;
}

// 02224ee4 is the first function
Unk_ov004_02224ee4::Unk_ov004_02224ee4() {
    func_ov004_02224ee4();
}

Unk_ov004_02224ee4::~Unk_ov004_02224ee4() {
    func_ov004_02224ee4();
}

void Unk_ov004_02224ee4::func_ov004_02224ee4() {
    unk_00 = 0;
    unk_04 = 0;
    u32 i;
    for (i = 0; i < 13; i++) {
        unk_3c[i] = 0;
        unk_08[i] = 0;
        unk_70[i] = 0;
    }
}


namespace ns_0222459c {

struct Unk_ov004_022245ac_V3 {
    s32 x, y, z;
};

class Unk_ov004_022245ac_Msg {
public:
    inline Unk_ov004_022245ac_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    u8 unk_0c;
    u8 pad_0d[0x1c - 0xd];
};

struct Unk_ov004_022245ac_Rec {
    Unk_ov004_022245ac_V3 pos;
    u8 flag;
};

struct Unk_ov004_022245ac_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_022245ac_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x700 - 0x90];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    u8 unk_7d0;
    u8 pad_7d1[0x7ec - 0x7d1];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[4];
    s32 unk_804;
    u8 pad_808[0x8e6 - 0x808];
    u8 unk_8e6;
    u8 pad_8e7[0xc80 - 0x8e7];
    u16 unk_c80;
};

struct Unk_ov004_02224d10 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

typedef Unk_ov004_022245ac_Obj Obj;
typedef Unk_ov004_022245ac_V3 V3;
typedef Unk_ov004_022245ac_Msg Msg;
typedef Unk_ov004_022245ac_Rec Rec;
typedef Unk_ov004_02224d10 Res;

extern "C" {
extern void *data_020cbb18;
extern void *data_021c620c;
extern void *data_021f482c;

Obj *func_02095774(u32 idx);
s32 func_02095180(s32 a, s32 b);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
s32 _ZN12Unk_02006d1413func_0200ef08Ev(Obj *o);
s32 _ZN12Unk_020102ec13func_02010914Ev(Obj *o);
void _ZN12Unk_020102ec13func_0201065cEv(Obj *o);
BOOL func_020b52d0(void);
s32 _ZN12Unk_020d6df413func_0200d640Ev(Obj *o);
s32 _ZN12Unk_020d6df413func_0200d5e0Ev(Obj *o);
s32 _ZN12Unk_020d6df413func_0200e1dcEv(Obj *o);
s32 func_02063c54(s16 a);
s32 func_02010cf8(Obj *o);
void _ZN12Unk_02006d1413func_0200ecdcEj(Obj *o, u32 a);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010358Eijt(Obj *o, s32 a, u32 b, u32 c);
s32 func_0203d76c(void);
s32 _ZN12Unk_0200769413func_02007c08Ej(Obj *o, s32 a);
s32 _ZN12Unk_02006d1413func_0200ebe8Ev(Obj *o);
s32 _ZN12Unk_02006d1413func_0200ec44Ej(Obj *o, u32 a);
void _ZN12Unk_02006d1413func_0200ec1cEj(Obj *o, u32 a);
void _ZN12Unk_02006d1413func_0200ec30Ej(Obj *o, u32 a);
void func_02010cb0(u16 *p, Obj *o);
void func_02010af0(u16 *p, Obj *o);
s32 func_02010c9c(Obj *o);
s32 func_02010c88(Obj *o);
s32 _ZN12Unk_02006d1413func_0200fab8EPthhh(Obj *o, u16 *v, s32 a, s32 b, u32 c);
void _ZN12Unk_02006d1413func_0200fd90EPt(Obj *o, u16 *v);
s32 func_02003e60(s32 a, s32 b, s32 c, s32 d);
s32 func_02003e70(s32 a, s32 b, s32 c, s32 d);
s32 _ZN12Unk_02003c3013func_02003e50Ev(s32 a);
s32 _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(s32 a, V3 *v);
s32 _ZN12Unk_02003c3013func_02003eccEv(s32 a);
void func_020f43fc(void *p);
void func_020f440c(void *p);
s32 func_020641ec(u32 id, void *g, s32 a, u32 b);
void *NNS_G3dGetTex(s32 a);
void func_02055724(void *p, u32 a);
u32 func_0205588c(void *p, void *g);
void func_020e8558(s32 a);
void func_020e85fc(void *g, u32 p);
s32 func_020639e8(char *buf, char *fmt, ...);
s32 func_02101340(void *buf, char *name, u32 data);
void *func_021012bc(char *name);
void func_02101310(void *buf);
void *NNS_G3dGetMdlSet(void *p);
void *func_021065dc(void *p);
u32 func_021065f8(void *p, u32 a);
void *func_02106618(void *p);
u32 func_02106634(void *p, u32 a);
void *func_02106654(void *p);
u32 func_02106670(void *p, u32 a);

s32 func_ov004_02224070(Obj *o, u32 a, u32 b, u32 c);
s32 func_ov004_02234ed8(void *p, s32 a);
s32 func_ov004_02234e80(void *p, s32 a);
s32 func_ov004_0221f6dc(Obj *o, u32 a, u32 b);
s32 func_ov004_022236b8(Obj *o, u32 a, u32 b);
s32 func_ov004_022217c4(Obj *o, u32 a, u32 b, u32 c);
s32 func_ov004_0221f7c4(Obj *o, u32 a, u32 b);
s32 func_ov004_0221f96c(Obj *o, u32 a, u32 b);
s32 func_ov004_0221fcec(Obj *o, u32 a, u32 b, u32 c, s32 e);
s32 func_ov004_022209ac(Obj *o, s32 a, s32 b);
s32 func_ov004_02220ac8(Obj *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
s32 func_ov004_0221f204(Obj *o, V3 *v, u32 a, u32 b);
s32 func_ov004_0222085c(Obj *o, s32 a, s32 b);
s32 func_ov004_02220c88(Obj *o, u32 a, s32 b, s32 c);
s32 func_ov004_02220ff0(Obj *o, u8 b, u32 x, u32 y, s16 c, s32 d, s32 e);
s32 func_ov004_02221218(Obj *o, s32 a, s32 b);
s32 func_ov004_022214dc(Obj *o, s32 a, s32 b);
s32 func_ov004_022215a8(Obj *o, u32 a, u32 b);
s32 func_ov004_0222213c(Obj *o, u32 a, u32 b, s16 c, u32 d, s32 e, s32 f);
s32 func_ov004_0222439c(Obj *o, u32 a, u32 b, u32 c, s32 d);
s32 func_ov004_02223bdc(Obj *o, u32 a, u32 b, s32 c, u32 d, s32 e, s32 f);

void func_ov004_0222459c(Rec *r, V3 *v, u32 f);
s32 func_ov004_022245ac(Obj *o, u32 a, u32 b, u32 c);
void func_ov004_022245ec(u8 *p, u32 v);
void func_ov004_022245f0(Obj *o);
void func_ov004_02224628(Obj *o);
void func_ov004_022246bc(Obj *o, s32 a);
void func_ov004_02224708(Obj *o, s32 a);
void func_ov004_02224734(Obj *o, u8 *p, s32 c);
void func_ov004_022247b4(u8 *p, u32 v);
s32 func_ov004_022247b8(Obj *o, u32 a, u32 b, u32 c);
void func_ov004_022247f8(u8 *p, u32 v);
s32 func_ov004_02224c3c(V3 *out, u32 idx, s32 st);
}

enum Unk_ov004_02224a80_Limit { Unk_ov004_02224a80_LIMIT_6 = 6 };

extern "C" s32 func_ov004_02224dbc(Res *self, u32 id) {
    if (self->unk_00 == 0) {
        char buf[0x24];
        u8 res[0x68];
        self->unk_00 = func_020641ec(id, data_021c620c, 4, 0);
        if (self->unk_00) {
            if (func_02101340(res, "RMO", self->unk_00)) {
                u32 i, z;
                void *h = func_021012bc("RMO:a/bmd/bmd0");
                if (h) {
                    u8 *r = (u8 *)NNS_G3dGetMdlSet(h);
                    self->unk_04 = (u32)(r + *(u32 *)(r + *(u16 *)(r + 0xe) + 0xc));
                }
                for (i = 0, z = i; i < 13;) {
                    func_020639e8(buf, "RMO:a/bca/bca%d", i);
                    { void *h = func_021012bc(buf); if (h) {
                        self->unk_08[i] = func_021065f8(func_021065dc(h), z);
                    } }
                    if (self->unk_08[i] == 0) {
                        break;
                    }
                    i++;
                }
                for (i = 0, z = i; i < 13;) {
                    func_020639e8(buf, "RMO:a/bma/bma%d", i);
                    { void *h = func_021012bc(buf); if (h) {
                        self->unk_3c[i] = func_02106634(func_02106618(h), z);
                    } }
                    if (self->unk_3c[i] == 0) {
                        break;
                    }
                    i++;
                }
                for (i = 0, z = i; i < 13;) {
                    func_020639e8(buf, "RMO:a/bta/bta%d", i);
                    { void *h = func_021012bc(buf); if (h) {
                        self->unk_70[i] = func_02106670(func_02106654(h), z);
                    } }
                    if (self->unk_70[i] == 0) {
                        break;
                    }
                    i++;
                }
                func_02101310(res);
                return 1;
            }
        }
    }
    return 0;
}

extern "C" void func_ov004_02224d9c(Res *p) {
    if (p->unk_00) {
        func_020e85fc(data_021c620c, p->unk_00);
        p->unk_00 = 0;
    }
}

extern "C" u32 func_ov004_02224d8c(Res *p, u32 i) {
    if (i < 13) {
        return p->unk_08[i];
    }
    return 0;
}

extern "C" u32 func_ov004_02224d7c(Res *p, u32 i) {
    if (i < 13) {
        return p->unk_3c[i];
    }
    return 0;
}

extern "C" u32 func_ov004_02224d6c(Res *p, u32 i) {
    if (i < 13) {
        return p->unk_70[i];
    }
    return 0;
}

extern "C" u32 func_ov004_02224d68(Res *p) {
    return p->unk_04;
}

extern "C" void func_ov004_02224d60(Res *p) {
    p->unk_00 = 0;
}

extern "C" void func_ov004_02224d5c(void) {
}

extern "C" s32 func_ov004_02224d10(Res *self, u32 id) {
    s32 r4 = func_020641ec(id, data_021f482c, -4, 0);
    if (r4) {
        void *r6 = NNS_G3dGetTex(r4);
        func_02055724(r6, 0);
        self->unk_00 = func_0205588c(r6, data_021c620c);
        func_020e8558(r4);
        return 1;
    }
    return 0;
}

extern "C" void func_ov004_02224d08(Res *p) {
    p->unk_00 = 0;
}

extern "C" u32 func_ov004_02224d04(Res *p) {
    return p->unk_00;
}

extern "C" Res *func_ov004_02224cf4(Res *p) {
    func_020f440c(p);
    return p;
}

extern "C" Res *func_ov004_02224ce4(Res *p) {
    func_020f43fc(p);
    return p;
}

extern "C" s32 func_ov004_02224cdc(s32 a) {
    return _ZN12Unk_02003c3013func_02003eccEv(a);
}

extern "C" s32 func_ov004_02224cc0(s32 a, V3 *p) {
    V3 v;
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    return _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(a, &v);
}

extern "C" s32 func_ov004_02224cb8(s32 a) {
    return _ZN12Unk_02003c3013func_02003e50Ev(a);
}

extern "C" s32 func_ov004_02224ca4(s32 a, s32 b) {
    return func_02003e70(a, b, 0x7f, 0);
}

extern "C" s32 func_ov004_02224c90(s32 a, s32 b) {
    return func_02003e60(a, b, 0x7f, 0);
}

extern "C" s32 func_ov004_02224c84(void) {
    return func_02095180(15, 4);
}

extern "C" s32 func_ov004_02224c78(void) {
    return func_02095180(2, 4);
}

extern "C" s32 func_ov004_02224c3c(V3 *out, u32 idx, s32 st) {
    Obj *o = func_02095774(idx);
    if (o && o->unk_7ec == st) {
        V3 *pv = &o->unk_5c;
        out->x = o->unk_5c.x;
        out->y = pv->y;
        out->z = pv->z;
        return 1;
    }
    return 0;
}

extern "C" s32 func_ov004_02224c30(V3 *out, u32 idx) {
    return func_ov004_02224c3c(out, idx, 0x28);
}

extern "C" s32 func_ov004_02224c24(V3 *out, u32 idx) {
    return func_ov004_02224c3c(out, idx, 8);
}

extern "C" s32 func_ov004_02224b78(u32 a) {
    Obj *o = func_02095774(4);
    if (o) {
        u16 v[2];
        u16 t[2];
        if (a) {
            if (_ZN12Unk_02006d1413func_0200ec44Ej(o, 0xc)) {
                func_02010cb0(&t[0], o);
                v[0] = t[0];
                func_02010af0(&t[1], o);
                v[1] = t[1];
                _ZN12Unk_02006d1413func_0200ec1cEj(o, 0xc);
            } else {
                return 1;
            }
        } else {
            if (!_ZN12Unk_02006d1413func_0200ec44Ej(o, 0xc)) {
                v[1] = 0xfff1;
                v[0] = 0xfff1;
                _ZN12Unk_02006d1413func_0200ec30Ej(o, 0xc);
            } else {
                return 1;
            }
        }
        s32 r4 = func_02010c9c(o);
        s32 r3 = func_02010c88(o);
        if (_ZN12Unk_02006d1413func_0200fab8EPthhh(o, v, r4, r3, 1)) {
            _ZN12Unk_02006d1413func_0200fd90EPt(o, &v[1]);
        }
        return 1;
    }
    return 0;
}

extern "C" s32 func_ov004_02224b14(u32 *a, u32 *b, s16 *c, s32 d) {
    Obj *o = func_02095774(4);
    if (o) {
        Unk_ov004_02224a80_Limit k = Unk_ov004_02224a80_LIMIT_6;
        if (k <= _ZN12Unk_020d6df413func_0200e1dcEv(o)) {
            return 0;
        }
        u32 f = func_02063c54(*c - d) == 1 ? 1 : 0;
        return func_ov004_02223bdc(o, *a, *b, *c, f, k, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_02224ad8(u32 a, u32 b) {
    Obj *o = func_02095774(4);
    if (o) {
        if (func_ov004_0222439c(o, a, b, 6, -1)) {
            _ZN12Unk_02006d1413func_0200ebe8Ev(o);
            return 1;
        }
    }
    return 0;
}

extern "C" s32 func_ov004_02224a80(u32 *a, u32 *b, s16 *c, u8 *d) {
    Obj *o = func_02095774(4);
    if (o) {
        Unk_ov004_02224a80_Limit k = Unk_ov004_02224a80_LIMIT_6;
        if (k <= _ZN12Unk_020d6df413func_0200e1dcEv(o)) {
            return 0;
        }
        return func_ov004_0222213c(o, *a, *b, *c + 0x8000, *d, k, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_02224a38(s32 t) {
    Obj *o = func_02095774(4);
    if (o) {
        switch (t) {
        case 0:
            func_ov004_02221218(o, 6, -1);
            break;
        case 1:
            func_ov004_022214dc(o, 6, -1);
            break;
        case 2:
            func_ov004_022215a8(o, 6, -1);
            break;
        }
    }
    return 0;
}

extern "C" s32 func_ov004_022249f8(u32 *a, u32 *b, u32 *c, s16 *d) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_02220ff0(o, *a, *b, *c, *d, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_022249d4(u32 *p) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_02220c88(o, *p, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_0222497c(void) {
    Obj *o = func_02095774(4);
    if (o) {
        if (o->unk_804 == 4) {
            V3 v;
            V3 *pv = &o->unk_5c;
            v.x = o->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            v.z += 0x6000;
            return func_ov004_0221f204(o, &v, 6, -1);
        }
        return func_ov004_0222085c(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_0222493c(u32 a, u32 *b, u8 *c, u32 *d, u32 e) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_02220ac8(o, a, *b, *c, *d, e, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_02224918(void) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_022209ac(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_022248e8(u8 *a, u8 *b) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_0221fcec(o, *a, *b, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_022248c4(void) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_0221f96c(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_022248a0(void) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_0221f7c4(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_0222487c(void) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_022217c4(o, 10, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_02224844(void) {
    Obj *o = func_02095774(4);
    if (o) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        return func_ov004_022236b8(o, 5, -1);
    }
    return 0;
}

extern "C" s32 func_ov004_02224820(void) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov004_0221f6dc(o, 6, -1);
    }
    return 0;
}

extern "C" BOOL func_ov004_022247fc(void) {
    Obj *o = func_02095774(4);
    if (o) {
        _ZN12Unk_020102ec13func_02010358Eijt(o, 0x98, 0, 0);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov004_022247f8(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_022247b8(Obj *o, u32 a, u32 b, u32 c) {
    Msg m;
    m.func_0200e2c0(8, b, c);
    func_ov004_022247f8(&m.unk_0c, a);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_022247b4(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02224734(Obj *o, u8 *p, s32 c) {
    u8 *q = p + 0xc;
    u8 *rec = &o->unk_7d0;
    if (o->unk_700 != 0x11) {
        if (c == 0xf || c == 0xd || !_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
            _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x11, 0, 0);
        } else {
            _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x11, 3, 0);
        }
    }
    func_ov004_022247b4(rec, *q);
    if (*rec == 0 && _ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_0203d76c();
    }
}

extern "C" void func_ov004_02224708(Obj *o, s32 a) {
    if (o->unk_7ec == 8) {
        o->unk_c80 = a;
    } else {
        func_ov004_022247b8(o, 0, 6, a);
    }
}

extern "C" void func_ov004_022246bc(Obj *o, s32 a) {
    if (func_020b52d0() && a == 10 && o->unk_7d0 == 0) {
        if (func_02010cf8(o)) {
            _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4cd);
        } else {
            _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4cc);
        }
    }
}

extern "C" void func_ov004_02224628(Obj *o) {
    s32 r;
    if (!func_020b52d0()) {
        if (_ZN12Unk_020d6df413func_0200d640Ev(o) > 0) {
            s32 t = _ZN12Unk_020d6df413func_0200d5e0Ev(o);
            if (o->unk_8e6 != t + 1) {
                o->unk_8e6 = t + 1;
                switch (t) {
                case 0:
                    r = func_ov004_02234ed8(&o->unk_5c, o->unk_8e);
                    break;
                case 1:
                    r = func_ov004_02234e80(&o->unk_5c, o->unk_8e);
                    break;
                }
                if (r == 1) {
                    func_ov004_02224070(o, t == 0 ? 1 : 0, 6, -1);
                } else if (r == 2) {
                    func_ov004_022245ac(o, t == 0 ? 1 : 0, 6, -1);
                }
            }
        }
    }
}

extern "C" void func_ov004_022245f0(Obj *o) {
    _ZN12Unk_02006d1413func_0200ef08Ev(o);
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201065cEv(o);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_ov004_02224628(o);
    }
}

extern "C" void func_ov004_022245ec(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_022245ac(Obj *o, u32 a, u32 b, u32 c) {
    Msg m;
    m.func_0200e2c0(9, b, c);
    func_ov004_022245ec(&m.unk_0c, a);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0222459c(Rec *r, V3 *v, u32 f) {
    r->pos.x = v->x;
    r->pos.y = v->y;
    r->pos.z = v->z;
    r->flag = f;
}


}  // namespace ns_0222459c

namespace ns_02223c38 {

struct Unk_ov004_02223c38_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02223c38_V3c {
    s32 x, y, z;
    Unk_ov004_02223c38_V3c() {}
    ~Unk_ov004_02223c38_V3c() {}
};

struct Unk_ov004_02223c38_Rec {
    s32 x;
    s32 z;
    s16 h;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
};

class Unk_ov004_02223c38_Msg {
public:
    inline Unk_ov004_02223c38_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(s32 a, s32 b, s32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    u8 unk_0c;
    u8 pad_0d[0x1c - 0xd];
};

struct Unk_ov004_02223c38_Sub2cc {
    u32 unk_00;
};

struct Unk_ov004_02223c38_Bits16 {
    u16 lo : 7;
    u16 mid : 4;
    u16 hi : 5;
};

struct Unk_ov004_02223c38_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02223c38_V3 unk_5c;
    Unk_ov004_02223c38_V3 unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[0x1c0 - 0x90];
    u8 unk_1c0[0x3c];
    u8 unk_1fc;
    u8 pad_1fd[0x2cc - 0x1fd];
    Unk_ov004_02223c38_Sub2cc unk_2cc;
    u8 pad_2d0[0x7d0 - 0x2d0];
    Unk_ov004_02223c38_Rec unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    u32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8e6 - 0x800];
    u8 unk_8e6;
    u8 pad_8e7[0x8ec - 0x8e7];
    u8 unk_8ec[8];
};

typedef Unk_ov004_02223c38_Obj Obj;
typedef Unk_ov004_02223c38_V3 V3;
typedef Unk_ov004_02223c38_V3c V3c;
typedef Unk_ov004_02223c38_Rec Rec;
typedef Unk_ov004_02223c38_Msg Msg;
typedef Unk_ov004_02223c38_Bits16 Bits16;

extern "C" {
extern void *data_020cbb18;
extern u8 data_020e416c;
extern s16 data_02135f44[];

void _ZN12Unk_02006d1413func_0200ef08Ev(Obj *o);
void _ZN12Unk_020102ec13func_02010914Ev(Obj *o);
void _ZN12Unk_020102ec13func_0201071cEv(Obj *o);
void _ZN12Unk_02006d1413func_0200ecdcEj(Obj *o, u32 a);
void _ZN12Unk_020102ec13func_02010358Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010a58EPs(Obj *o, s16 *a);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
s32 _ZN12Unk_020dbe7c13func_020565e8Ei(void *p, u32 a);
s32 func_0200f3ec(V3 *out, Obj *o, V3 *pos, s16 *ang, s32 *d);
s32 _ZN12Unk_0200769413func_02007c08Ej(Obj *o, u32 a);
void _ZN12Unk_02006d1413func_0200bd60Esji(Obj *o, u32 a, u32 b, s32 c);
void _ZN12Unk_020d6df413func_0200ce98Ejjj(Obj *o, s32 a, s32 b, s32 c);
u16 *func_020952d0(void);
Bits16 *func_020952d8(void);
u8 *func_020952c8(void);
u32 func_02010d20(Obj *o);
u32 func_02010c74(Obj *o);
u32 _ZN12Unk_0209865c13func_020987c4Ev(void);
s32 func_0200f23c(Obj *o);
u16 *func_0209c37c(s32 a, s32 b);
s32 func_02030814(u32 a);
void _ZN12Unk_020102ec13func_020106e0EPj(Obj *o, V3 *v);
void _ZN12Unk_020102ec13func_02010740Ejjj(Obj *o, V3 *v, s32 a, s32 b);
void _ZN12Unk_020e0d0813func_02089040Ev(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02051468(void);
void func_02051470(V3 *v);
void func_02051478(void);
s32 func_02051484(void);
void func_0205148c(V3 *v);

void func_ov004_02233074(V3 *p);
s32 func_ov004_022247b8(Obj *o, u32 a, s32 b, s32 c);
s32 func_ov004_0222459c(Rec *r, V3 *v, u32 c);

void func_ov004_02223c38(Rec *t, s32 x, s32 z, s16 h, u8 a, u8 b);
void func_ov004_02223c50(Obj *o);
void func_ov004_02223c6c(Obj *o);
void func_ov004_02223ca0(Obj *o);
void func_ov004_02223cb8(Obj *o, s32 a);
void func_ov004_02223ce4(Obj *o, Msg *m);
void func_ov004_02223d9c(u8 *p, u8 *out);
void func_ov004_02223da4(u8 *p, u32 v);
void func_ov004_02223da8(s32 *p, s32 x, s32 z);
s32 func_ov004_02223db0(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02223df0(u8 *p, u32 v);
void func_ov004_02223df4(Obj *o);
void func_ov004_02223e08(Obj *o);
void func_ov004_02223e30(Obj *o, s32 a);
void func_ov004_02223e5c(Obj *o, Msg *m);
void func_ov004_02223e9c(u8 *p, u8 *out);
void func_ov004_02223ea4(u8 *p, u32 v);
s32 func_ov004_02223ea8(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02223ee8(u8 *p, u32 v);
void func_ov004_02223eec(Obj *o);
void func_ov004_02223f08(Obj *o);
void func_ov004_02223f7c(Obj *o, s32 a);
void func_ov004_02223fa8(Obj *o, Msg *m);
void func_ov004_0222405c(u8 *p, u8 *out);
void func_ov004_02224064(u8 *p, u32 v);
void func_ov004_02224068(u8 *p, u32 v);
s32 func_ov004_02224070(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_022240b0(u8 *p, u32 v);
void func_ov004_022240b4(Obj *o);
void func_ov004_022240d0(Obj *o);
void func_ov004_022241ac(Obj *o);
void func_ov004_022241dc(Obj *o);
void func_ov004_02224224(Obj *o);
void func_ov004_02224254(Obj *o, s32 a);
void func_ov004_02224284(Obj *o, Msg *m);
void func_ov004_0222437c(u8 *p, u8 *out);
void func_ov004_02224384(u8 *p, u32 v);
void func_ov004_02224388(Rec *r, s32 x, s32 z, s16 h, u8 a);
s32 func_ov004_0222439c(Obj *o, u32 a, u32 b, s32 c, s32 d);
void func_ov004_022243e4(u8 *p, u32 a, u32 b);
void func_ov004_022243ec(Obj *o);
void func_ov004_0222440c(Obj *o);
void func_ov004_02224494(Obj *o);
void func_ov004_022244d0(void);
void func_ov004_022244d4(Obj *o, Msg *m);
}

static inline BOOL Unk_ov004_02224284_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" void func_ov004_022244d4(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    s32 ang = o->unk_8e;
    Rec *r = &o->unk_7d0;
    V3 v;
    V3 w;
    {
        V3 *pp = &o->unk_5c;
        v.x = o->unk_5c.x;
        v.y = pp->y;
        v.z = pp->z;
    }
    s32 k = 0x2000;
    if (c == 0) {
        k *= -1;
    }
    s32 t[2];
    t[0] = data_02135f44[((u16)ang >> 4) * 2];
    t[1] = data_02135f44[((u16)ang >> 4) * 2 + 1];
    s32 dz = func_01ffcb0c(t[1], 0x1000);
    dz -= func_01ffcb0c(t[0], k);
    s32 dx = func_01ffcb0c(t[0], 0x1000);
    dx += func_01ffcb0c(t[1], k);
    V3 *p2 = &o->unk_5c;
    v.x = p2->x + dx;
    v.z = p2->z + dz;
    w.x = v.x;
    w.y = v.y;
    w.z = v.z;
    func_ov004_0222459c(r, &w, c);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_0205148c(&v);
    }
}

extern "C" void func_ov004_022244d0(void) {
}

extern "C" void func_ov004_02224494(Obj *o) {
    V3 v;
    V3 *s = (V3 *)&o->unk_7d0;
    v.x = s->x;
    v.y = s->y;
    v.z = s->z;
    _ZN12Unk_020102ec13func_02010740Ejjj(o, &v, 0x1000, 0x1000);
    _ZN12Unk_020e0d0813func_02089040Ev(o->unk_1c0);
}

extern "C" void func_ov004_0222440c(Obj *o) {
    switch (func_02051484()) {
    case 0:
        return;
    case 1:
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        break;
    case 2:
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        func_ov004_022247b8(o, 0, 6, -1);
        return;
    }
    Rec *r = &o->unk_7d0;
    if (o->unk_1fc != 0) {
        func_ov004_022247b8(o, 0, 6, -1);
    } else {
        func_ov004_0222439c(o, r->unk_0c, 0, 6, -1);
    }
}

extern "C" void func_ov004_022243ec(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_0222440c(o);
    func_ov004_02224494(o);
}

extern "C" void func_ov004_022243e4(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" s32 func_ov004_0222439c(Obj *o, u32 a, u32 b, s32 c, s32 d) {
    Msg m;
    m.func_0200e2c0(0xa, c, *(s16 *)&d);
    func_ov004_022243e4(&m.unk_0c, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02224388(Rec *r, s32 x, s32 z, s16 h, u8 a) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->unk_0a = a;
}

extern "C" void func_ov004_02224384(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_0222437c(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov004_02224284(Obj *o, Msg *m) {
    u8 *q0 = (u8 *)m;
    u8 *q = q0 + 0xc;
    u8 c = m->unk_0c;
    if (Unk_ov004_02224284_IsOne(data_020e416c)) {
        func_ov004_02233074(&o->unk_5c);
    }
    _ZN12Unk_020102ec13func_02010358Eijt(o, c ? 0xa : 9, 3, 0);
    s32 ang = o->unk_8e;
    Rec *r = &o->unk_7d0;
    s32 k = 0x2000;
    if (c == 0) {
        k *= -1;
    }
    s32 t[2];
    t[0] = data_02135f44[((u16)ang >> 4) * 2];
    t[1] = data_02135f44[((u16)ang >> 4) * 2 + 1];
    s32 dz = func_01ffcb0c(t[1], 0x1000);
    dz -= func_01ffcb0c(t[0], k);
    s32 dx = func_01ffcb0c(t[0], 0x1000);
    dx += func_01ffcb0c(t[1], k);
    V3 *p = &o->unk_5c;
    s32 x = p->x + dx;
    s32 z = p->z + dz;
    s16 h;
    if (c != 0) {
        h = ang + 0x4000;
    } else {
        h = ang - 0x4000;
    }
    func_ov004_02224388(r, x, z, h, q[1]);
    func_ov004_02224384(o->unk_8ec, c);
}

extern "C" void func_ov004_02224254(Obj *o, s32 a) {
    u8 b;
    func_ov004_0222437c(o->unk_8ec, &b);
    func_ov004_0222439c(o, b, 0, 6, a);
}

extern "C" void func_ov004_02224224(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->z;
    _ZN12Unk_020102ec13func_02010a58EPs(o, &r->h);
    o->unk_68.x = o->unk_5c.x;
    o->unk_68.y = o->unk_5c.y;
    o->unk_68.z = o->unk_5c.z;
}

extern "C" void func_ov004_022241dc(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0x15)) {
        _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4c6);
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
            func_02051478();
        }
    }
}

extern "C" void func_ov004_022241ac(Obj *o) {
    V3 v;
    Rec *r = &o->unk_7d0;
    v.x = r->x;
    v.y = func_02030814(0);
    v.z = r->z;
    _ZN12Unk_020102ec13func_020106e0EPj(o, &v);
}

extern "C" void func_ov004_022240d0(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        if (o->unk_7d0.unk_0a != 0) {
            volatile u16 t[2];
            _ZN12Unk_02006d1413func_0200bd60Esji(o, 0, 5, -1);
            *func_020952d0() = 0x4650;
            func_02010d20(o);
            t[0] = _ZN12Unk_0209865c13func_020987c4Ev();
            t[1] = t[0];
            *(u16 *)func_020952d8() = t[1];
            s32 r5 = func_0200f23c(o);
            u16 *r7 = func_0209c37c(0, 0x50);
            u32 r4 = func_02010c74(o);
            Bits16 *r6 = func_020952d8();
            *r7 = r4 + r6->mid * 1000 + func_020952d8()->hi * 10;
            if (r5 == 0) {
                *func_020952c8() = 0x11;
            } else {
                *func_020952c8() = 0;
            }
        } else {
            _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 0, 1, -1);
        }
    }
}

extern "C" void func_ov004_022240b4(Obj *o) {
    func_ov004_022241dc(o);
    func_ov004_022241ac(o);
    func_ov004_022240d0(o);
}

extern "C" void func_ov004_022240b0(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_02224070(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xb, b, c);
    func_ov004_022240b0(&m.unk_0c, a);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02224068(u8 *p, u32 v) {
    p[0] = 0;
    p[1] = v;
}

extern "C" void func_ov004_02224064(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_0222405c(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov004_02223fa8(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    s32 k;
    s32 d;
    s16 ang;
    V3 w;
    V3 v;
    func_ov004_02224068((u8 *)&o->unk_7d0, c);
    func_ov004_02224064(o->unk_8ec, c);
    if (c != 0) {
        k = 0xc;
    } else {
        k = 0xf;
    }
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        if (c == 0) {
            d = -0x2000;
        } else {
            d = 0x2000;
        }
        ang = o->unk_8e + 0x4000;
        func_0200f3ec(&v, o, &o->unk_5c, &ang, &d);
        w.x = v.x;
        w.y = v.y;
        w.z = v.z;
        func_02051470(&w);
        _ZN12Unk_020102ec13func_020103b4Eijt(o, k, 3, 0);
    } else {
        _ZN12Unk_020102ec13func_020103b4Eijt(o, k, 3, 0);
    }
}

extern "C" void func_ov004_02223f7c(Obj *o, s32 a) {
    u8 b;
    func_ov004_0222405c(o->unk_8ec, &b);
    func_ov004_02224070(o, b, 6, a);
}

extern "C" void func_ov004_02223f08(Obj *o) {
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        u8 *p = (u8 *)&o->unk_7d0;
        if (p[0] < 3) {
            p[0] = p[0] + 1;
        }
        switch (func_02051468()) {
        case 0:
            break;
        case 1:
            if (p[0] >= 3) {
                func_ov004_02223db0(o, p[1], 6, -1);
            }
            break;
        case 2:
            if (p[0] >= 3) {
                func_ov004_02223ea8(o, p[1], 6, -1);
            }
            break;
        }
    }
}

extern "C" void func_ov004_02223eec(Obj *o) {
    _ZN12Unk_02006d1413func_0200ef08Ev(o);
    _ZN12Unk_020102ec13func_02010914Ev(o);
    func_ov004_02223f08(o);
}

extern "C" void func_ov004_02223ee8(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_02223ea8(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xc, b, c);
    func_ov004_02223ee8(&m.unk_0c, a);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02223ea4(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02223e9c(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov004_02223e5c(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    func_ov004_02223ea4(o->unk_8ec, c);
    s32 k;
    if (c != 0) {
        k = 0xd;
    } else {
        k = 0x10;
    }
    _ZN12Unk_020102ec13func_02010358Eijt(o, k, 3, 0);
    _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4a4);
}

extern "C" void func_ov004_02223e30(Obj *o, s32 a) {
    u8 b;
    func_ov004_02223e9c(o->unk_8ec, &b);
    func_ov004_02223ea8(o, b, 6, a);
}

extern "C" void func_ov004_02223e08(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        func_ov004_022247b8(o, 0, 6, -1);
    }
}

extern "C" void func_ov004_02223df4(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    func_ov004_02223e08(o);
}

extern "C" void func_ov004_02223df0(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_02223db0(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xd, b, c);
    func_ov004_02223df0(&m.unk_0c, a);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02223da8(s32 *p, s32 x, s32 z) {
    p[0] = x;
    p[1] = z;
}

extern "C" void func_ov004_02223da4(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02223d9c(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov004_02223ce4(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    s32 k;
    s32 d;
    s16 ang;
    V3c w;
    V3 v;
    if (c != 0) {
        k = 0xb;
    } else {
        k = 0xe;
    }
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        _ZN12Unk_020102ec13func_02010358Eijt(o, k, 3, 0);
    } else {
        _ZN12Unk_020102ec13func_02010358Eijt(o, k, 0, 0);
    }
    Rec *r = &o->unk_7d0;
    if (c == 0) {
        d = -0x2000;
    } else {
        d = 0x2000;
    }
    ang = o->unk_8e + 0x4000;
    func_0200f3ec(&v, o, &o->unk_5c, &ang, &d);
    s32 tx = v.x;
    w.x = tx;
    w.y = v.y;
    s32 tz = v.z;
    w.z = tz;
    func_ov004_02223da8((s32 *)r, tx, tz);
    func_ov004_02223da4(o->unk_8ec, c);
    _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x435);
}

extern "C" void func_ov004_02223cb8(Obj *o, s32 a) {
    u8 b;
    func_ov004_02223d9c(o->unk_8ec, &b);
    func_ov004_02223db0(o, b, 6, a);
}

extern "C" void func_ov004_02223ca0(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->z;
}

extern "C" void func_ov004_02223c6c(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        if (func_ov004_022247b8(o, 0, 6, -1)) {
            o->unk_8e6 = 0;
        }
    }
}

extern "C" void func_ov004_02223c50(Obj *o) {
    _ZN12Unk_02006d1413func_0200ef08Ev(o);
    _ZN12Unk_020102ec13func_02010914Ev(o);
    func_ov004_02223c6c(o);
}

extern "C" void func_ov004_02223c38(Rec *t, s32 x, s32 z, s16 h, u8 a, u8 b) {
    t->x = x;
    t->z = z;
    t->h = h;
    t->unk_0a = a;
    t->unk_0b = b;
}


}  // namespace ns_02223c38

namespace ns_02223314 {

struct Unk_ov004_02223314_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02223314_Rec {
    s32 unk_00;
    s32 unk_04;
    s16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
};

struct Unk_ov004_02223314_Rec2 {
    s32 unk_00;
    u8 unk_04;
    u8 unk_05;
};

struct Unk_ov004_02223314_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02223314_Pl {
    u8 a;
    u8 b;
    u8 pad_02[2];
    s32 c;
    s16 d;
    u8 e;
    u8 f;
};

class Unk_ov004_02223314_Msg {
public:
    inline Unk_ov004_02223314_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, s32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_02223314_Pl unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_02223314_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02223314_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2cc - 0x90];
    u32 unk_2cc;
    u8 pad_2d0[0x2d4 - 0x2d0];
    Unk_ov004_02223314_Bits unk_2d4;
    u8 pad_2d8[0x700 - 0x2d8];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_02223314_Rec unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x814 - 0x800];
    s32 unk_814;
    u8 pad_818[0x81c - 0x818];
    u16 unk_81c;
    u16 unk_81e;
    u32 unk_820;
    s32 unk_824;
    u8 pad_828[0x82c - 0x828];
    s32 unk_82c;
    s32 unk_830;
    s32 unk_834;
    u8 pad_838[0x8ec - 0x838];
    u8 unk_8ec[8];
    u8 pad_8f4[0xc80 - 0x8f4];
    u16 unk_c80;
};

typedef Unk_ov004_02223314_Obj Obj;
typedef Unk_ov004_02223314_V3 V3;
typedef Unk_ov004_02223314_Rec Rec;
typedef Unk_ov004_02223314_Rec2 Rec2;
typedef Unk_ov004_02223314_Msg Msg;
typedef Unk_ov004_02223314_Pl Pl;

extern "C" {
extern u8 data_020e416c;
extern void *data_020cbb18;
extern void *data_021c47c4;
extern s32 data_ov004_0224013c[];

s32 _ZN12Unk_02006d1413func_0200ec44Ej(Obj *o, s32 a);
void _ZN12Unk_02006d1413func_0200ec30Ej(Obj *o, s32 a);
void _ZN12Unk_02006d1413func_0200ec1cEj(Obj *o, s32 a);
void _ZN12Unk_02006d1413func_0200f004Ejz(Obj *o, s32 a);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
s32 _ZN12Unk_020102ec13func_02010914Ev(Obj *o);
void _ZN12Unk_020102ec13func_0201071cEv(Obj *o);
void _ZN12Unk_02006d1413func_0200ef08Ev(Obj *o);
void _ZN12Unk_02006d1413func_0200ecdcEj(Obj *o, u32 a);
s32 _ZN12Unk_020dbe7c13func_020565e8Ei(void *p, s32 n);
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
s32 _ZN12Unk_0200769413func_02007c08Ej(Obj *o, s32 a);
void _ZN12Unk_020d6df413func_0200ce98Ejjj(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec13func_02010358Eijt(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010a58EPs(Obj *o, s16 *a);
void func_02010e68(void *p, s32 a, u32 b, u32 c, u32 d);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
void _ZN12Unk_02006d1413func_0200f478Ei(Obj *o, s32 a);
void func_0200f528(Obj *o, s32 a, s32 b);
void func_0200f594(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203a278(V3 *v);
s32 func_02063c18(s16 a);
s32 func_02051494(void);
void func_0205149c(V3 *v);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
s32 func_020769ac(void *a);
void func_020769c4(void *a, s32 b);
s32 func_0204ed8c(void *p, u32 a, s32 b);
u16 *func_0204eba0(void *g, void *p, s32 a);
s32 func_02098ffc(void);
s32 func_020b52f8(void);
u32 func_020b0f54(void);
s32 func_0204b2d4(void *p);
s32 func_0204b25c(void *p);
void func_02045570(void *p, s32 a);

s32 func_ov004_022344a4(void);
s32 func_ov004_02234f6c(void *p);
void func_ov004_022344e8(s32 a, void *b, void *c);
void func_ov004_022330cc(V3 *v);
s32 func_ov004_022247b8(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02223c38(void *out, s32 x, s32 z, s32 h, u32 e, u32 f);

void func_ov004_02223314(Obj *o);
void func_ov004_022233bc(Obj *o);
void func_ov004_02223454(void);
void func_ov004_02223458(Obj *o, Msg *m);
s32 func_ov004_022235ec(Obj *o, s32 *p, s32 c, u32 b, s16 d);
void func_ov004_0222363c(void *out, s32 *in, s32 c);
void func_ov004_02223648(Obj *o);
void func_ov004_02223664(Obj *o);
void func_ov004_02223688(void);
void func_ov004_0222368c(Obj *o);
s32 func_ov004_022236b8(Obj *o, s32 a, s32 b);
void func_ov004_022236f0(Obj *o);
void func_ov004_02223710(Obj *o);
void func_ov004_02223740(Obj *o);
void func_ov004_02223794(Obj *o);
void func_ov004_022237fc(Obj *o);
void func_ov004_0222381c(Obj *o, u32 a);
void func_ov004_0222386c(Obj *o, Msg *m);
void func_ov004_022238f8(u8 *src, u8 *out, s32 *x, s32 *z);
void func_ov004_02223910(u8 *dst, u32 k, s32 a, s32 b);
void func_ov004_02223920(Rec *r, s32 a, s32 b, s32 c, u8 d);
s32 func_ov004_02223934(Obj *o, u8 b, s32 x, s32 z, u8 e, s32 f, s32 g);
void func_ov004_02223984(void *out, u8 b, s32 x, s32 z, u8 e);
void func_ov004_02223998(Obj *o);
void func_ov004_022239b8(Obj *o);
void func_ov004_02223a54(Obj *o);
void func_ov004_02223a70(Obj *o);
void func_ov004_02223a80(Obj *o, u32 a);
void func_ov004_02223ac4(Obj *o, Msg *m);
void func_ov004_02223b7c(u8 *src, s32 *x, s32 *z, s16 *h, u8 *b);
void func_ov004_02223ba0(u8 *dst, s32 x, s32 z, s32 h, u8 b);
void func_ov004_02223bc4(Rec *r, s32 a, s32 b, s16 c, u8 d, u8 e);
s32 func_ov004_02223bdc(Obj *o, s32 x, s32 z, s32 h, u8 a, s32 b, s32 c);
}

static inline BOOL Unk_ov004_02223314_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" s32 func_ov004_02223bdc(Obj *o, s32 x, s32 z, s32 h, u8 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xe, b, *(s16 *)&c);
    func_ov004_02223c38(&m.unk_0c, x, z, h, a, b == 6 ? 1 : 0);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02223bc4(Rec *r, s32 a, s32 b, s16 c, u8 d, u8 e) {
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
    r->unk_0a = d;
    r->unk_0b = e;
}

extern "C" void func_ov004_02223ba0(u8 *dst, s32 x, s32 z, s32 h, u8 b) {
    func_02076a6c(dst, x, z);
    func_020769c4(dst + 5, h);
    dst[7] = b;
}

extern "C" void func_ov004_02223b7c(u8 *src, s32 *x, s32 *z, s16 *h, u8 *b) {
    func_02076a2c(src, x, z);
    *h = func_020769ac(src + 5);
    *b = src[7];
}

extern "C" void func_ov004_02223ac4(Obj *o, Msg *m) {
    Pl *pl = &m->unk_0c;
    V3 v;
    s16 h;
    V3 tmp;
    void *g;
    u8 r6;
    Rec *r7;
    s32 c = pl->c;
    v.x = *(s32 *)pl;
    v.y = 0;
    v.z = c;
    h = pl->d;
    r6 = pl->e;
    r7 = &o->unk_7d0;
    g = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_020729bcEj(g, o->unk_7fc)) {
        func_0200f3ec(&tmp, o, &v, &h, (u32)(data_ov004_0224013c + 3));
        v.x = tmp.x;
        v.y = tmp.y;
        v.z = tmp.z;
    }
    func_ov004_02223bc4(r7, v.x, v.z, h, r6, pl->f);
    func_ov004_02223ba0(o->unk_8ec, v.x, v.z, h, r6);
    if (_ZN12Unk_020cbb1813func_020729bcEj(g, o->unk_7fc)) {
        func_0205149c(&v);
    }
    _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x1a, 3, 0);
}

extern "C" void func_ov004_02223a80(Obj *o, u32 a) {
    struct L {
        u8 b;
        s16 h;
    } l;
    s32 x, z;
    L *q = &l;
    func_ov004_02223b7c(o->unk_8ec, &x, &z, &l.h, &l.b);
    func_ov004_02223bdc(o, x, z, q->h, q->b, 6, a);
}

extern "C" void func_ov004_02223a70(Obj *o) {
    _ZN12Unk_020102ec13func_02010a58EPs(o, &o->unk_7d0.unk_08);
}

extern "C" void func_ov004_02223a54(Obj *o) {
    func_0200f594(o, o->unk_5c.x, o->unk_5c.z, o->unk_7d0.unk_08);
}

extern "C" void func_ov004_022239b8(Obj *o) {
    Rec *r = &o->unk_7d0;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc) == 0) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
    } else {
        switch (func_02051494()) {
        case 0:
            break;
        case 2:
            o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
            _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
            break;
        case 1:
        default:
            if (r->unk_08 == o->unk_8e) {
                func_ov004_02223934(o, r->unk_0a, r->unk_00, r->unk_04, r->unk_0b, 6, -1);
            }
            break;
        }
    }
}

extern "C" void func_ov004_02223998(Obj *o) {
    func_ov004_02223a54(o);
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_022239b8(o);
}

extern "C" void func_ov004_02223984(void *out, u8 b, s32 x, s32 z, u8 e) {
    u8 *p = (u8 *)out;
    p[0] = b;
    *(s32 *)(p + 4) = x;
    *(s32 *)(p + 8) = z;
    p[0xc] = e;
}

extern "C" s32 func_ov004_02223934(Obj *o, u8 b, s32 x, s32 z, u8 e, s32 f, s32 g) {
    Msg m;
    m.func_0200e2c0(0xf, f, *(s16 *)&g);
    func_ov004_02223984(&m.unk_0c, b, x, z, e);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02223920(Rec *r, s32 a, s32 b, s32 c, u8 d) {
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
    r->unk_0a = d;
}

extern "C" void func_ov004_02223910(u8 *dst, u32 k, s32 a, s32 b) {
    dst[0] = k;
    func_02076a6c(dst + 1, a, b);
}

extern "C" void func_ov004_022238f8(u8 *src, u8 *out, s32 *x, s32 *z) {
    *out = src[0];
    func_02076a2c(src + 1, x, z);
}

extern "C" void func_ov004_0222386c(Obj *o, Msg *m) {
    Pl *pl = &m->unk_0c;
    u8 k = pl->a;
    Rec *r;
    s32 t, h, x, z;
    _ZN12Unk_020102ec13func_02010358Eijt(o, k == 0 ? 8 : 7, 3, 0);
    _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4c5);
    r = &o->unk_7d0;
    t = func_02063c18(o->unk_8e);
    t = (t << 30) >> 16;
    x = pl->c;
    z = *(s32 *)((u8 *)pl + 8);
    if (k == 0) {
        h = (s16)(t + 0x4000);
    } else {
        h = (s16)(t - 0x4000);
    }
    func_ov004_02223920(r, x, z, h, ((u8 *)pl)[0xc]);
    func_ov004_02223910(o->unk_8ec, k, x, z);
}

extern "C" void func_ov004_0222381c(Obj *o, u32 a) {
    if (o->unk_7ec == 0xf) {
        o->unk_c80 = a;
    } else {
        u8 b;
        s32 x, z;
        func_ov004_022238f8(o->unk_8ec, &b, &x, &z);
        func_ov004_02223934(o, b, x, z, 0, 6, a);
    }
}

extern "C" void func_ov004_022237fc(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->unk_00;
    p->z = r->unk_04;
    _ZN12Unk_020102ec13func_02010a58EPs(o, &r->unk_08);
}

extern "C" void func_ov004_02223794(Obj *o) {
    Rec *r = &o->unk_7d0;
    u8 *p;
    s32 v;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        p = (u8 *)o;
        p += 0x5c;
        if ((r->unk_08 & 0x4000) != 0) {
            v = r->unk_00;
        } else {
            p += 8;
            v = r->unk_04;
        }
        func_02010e68(p, v, 0x399, 0x1ec, 0x31);
    } else {
        _ZN12Unk_02006d1413func_0200ef08Ev(o);
    }
}

extern "C" void func_ov004_02223740(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0xd)) {
        if (Unk_ov004_02223314_IsOne(data_020e416c)) {
            Rec *r = &o->unk_7d0;
            s32 z = r->unk_04;
            s32 y = o->unk_5c.y;
            s32 x = r->unk_00;
            v.x = x;
            v.y = y;
            v.z = z;
            func_ov004_022330cc(&v);
        }
    }
}

extern "C" void func_ov004_02223710(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        func_ov004_022247b8(o, o->unk_7d0.unk_0a, 6, -1);
    }
}

extern "C" void func_ov004_022236f0(Obj *o) {
    func_ov004_02223794(o);
    func_ov004_02223740(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02223710(o);
}

extern "C" s32 func_ov004_022236b8(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x12, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0222368c(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x9b, 3, 0);
    v.x = data_ov004_0224013c[0];
    v.y = data_ov004_0224013c[1];
    v.z = data_ov004_0224013c[2];
    func_0203a278(&v);
}

extern "C" void func_ov004_02223688(void) {
}

extern "C" void func_ov004_02223664(Obj *o) {
    _ZN12Unk_02006d1413func_0200f478Ei(o, 0x400);
    func_0200f528(o, data_ov004_0224013c[0], data_ov004_0224013c[2]);
}

extern "C" void func_ov004_02223648(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    func_ov004_02223664(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
}

extern "C" void func_ov004_0222363c(void *out, s32 *in, s32 c) {
    ((u8 *)out)[0] = in[0];
    ((u8 *)out)[1] = in[1];
    *(s32 *)((u8 *)out + 4) = c;
}

extern "C" s32 func_ov004_022235ec(Obj *o, s32 *p, s32 c, u32 b, s16 d) {
    Msg m;
    struct {
        s32 x;
        s32 z;
    } v;
    m.func_0200e2c0(0x1c, b, d);
    v.x = p[0];
    v.z = p[1];
    func_ov004_0222363c(&m.unk_0c, &v.x, c);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02223458(Obj *o, Msg *m) {
    Pl *pl = &m->unk_0c;
    s32 b = pl->c;
    Rec2 *r = (Rec2 *)&o->unk_7d0;
    u8 a;
    u32 c;
    u16 *p;
    r->unk_04 = 0;
    r->unk_05 = 0;
    r->unk_00 = b;
    a = pl->a;
    c = pl->b;
    func_0204ed8c(&o->unk_820, a, c);
    o->unk_824 = func_ov004_02234f6c(&o->unk_820);
    o->unk_82c = 0x1000;
    o->unk_830 = 0x1000;
    o->unk_834 = 0x1000;
    if (b < 0) {
        p = func_0204eba0(data_021c47c4, &o->unk_820, 1);
        if (p == 0) {
            o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
            _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
            return;
        }
        o->unk_81e = *p;
        o->unk_81c = o->unk_81e;
    }
    if (func_02098ffc() == -1 && func_020b52f8()) {
        BOOL ok;
        if (func_0204b2d4(&o->unk_81c)) {
            u16 t = 0xfff1;
            s32 x = func_0204b25c(&o->unk_81c);
            if (x == func_0204b25c(&t)) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        } else {
            if (o->unk_81c == 0xfff1) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        }
        if (!ok) {
            _ZN12Unk_020102ec13func_020103b4Eijt(o, 0, 3, 0);
            r->unk_05 = 6;
            o->unk_81e = 0xfff1;
            o->unk_81c = o->unk_81e;
            return;
        }
    }
    if (func_020b0f54() <= 1) {
        if (b < 0) {
            struct {
                s32 a;
                s32 c;
            } v;
            _ZN12Unk_02006d1413func_0200ec30Ej(o, 0xd);
            v.a = a;
            v.c = c;
            func_02045570(&v, 1);
        } else {
            func_ov004_022344e8(b, &o->unk_81c, &o->unk_81e);
        }
        _ZN12Unk_020102ec13func_02010358Eijt(o, 0x19, 3, 0);
        _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x52);
    } else {
        r->unk_05 = 10;
        _ZN12Unk_020102ec13func_020103b4Eijt(o, 0, 3, 0);
    }
}

extern "C" void func_ov004_02223454(void) {
}

extern "C" void func_ov004_022233bc(Obj *o) {
    Rec2 *r = (Rec2 *)&o->unk_7d0;
    if (r->unk_05 >= 6) {
        _ZN12Unk_020102ec13func_02010914Ev(o);
        return;
    }
    if (r->unk_04 == 2) {
        if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 7)) {
            o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
            _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
            return;
        }
    } else if (r->unk_04 == 0) {
        if (o->unk_2d4.mid < 7) {
            if (o->unk_814 == 2) {
                r->unk_04 = 2;
            } else if (o->unk_814 == 1) {
                r->unk_04 = 1;
                _ZN12Unk_02006d1413func_0200ec30Ej(o, 0xd);
            }
        }
    }
    _ZN12Unk_020102ec13func_02010914Ev(o);
}

extern "C" void func_ov004_02223314(Obj *o) {
    s32 *p;
    s32 r;
    if (_ZN12Unk_02006d1413func_0200ec44Ej(o, 0xd) == 0) {
        p = (s32 *)((u8 *)o + 0x7d0);
        if (*p < 0) return;
        if (func_ov004_022344a4() == 0) return;
        _ZN12Unk_02006d1413func_0200ec30Ej(o, 0xd);
        *p = -1;
    }
    if (o->unk_700 != 0x19) {
        o->unk_82c = 0;
        o->unk_830 = 0;
        o->unk_834 = 0;
        return;
    }
    if (o->unk_2d4.mid < 8) return;
    r = 0x1000 - (s32)((o->unk_2d4.mid - 8) << 12) / 7;
    if (r < 0) {
        r = 0;
        _ZN12Unk_02006d1413func_0200ec1cEj(o, 0xd);
    }
    o->unk_82c = r;
    o->unk_830 = r;
    o->unk_834 = r;
    _ZN12Unk_02006d1413func_0200f004Ejz(o, r);
}


}  // namespace ns_02223314

namespace ns_02222838 {

struct Unk_ov004_02222874_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02222874_Tgt {
    s32 x, z;
    s16 h;
};

struct Unk_ov004_02222874_Rt {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class Unk_ov004_02222874_Msg {
public:
    inline Unk_ov004_02222874_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    union {
        Unk_ov004_02222874_Tgt t;
        u8 b[2];
    } unk_0c;
    u8 pad_18[4];
};

class Unk_ov004_02222874_Prim {
public:
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    Unk_ov004_02222874_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xec - 0x90];
};

class Unk_ov004_02222874_Sec {
public:
    virtual void vfunc_s00();
    u8 pad_04[0x1e - 4];
    u8 unk_10a;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov004_02222874_Rt *unk_128;
    u8 pad_40[0x51 - 0x40];
    u8 unk_13d;
    u8 pad_52[0x60 - 0x52];
};

struct Unk_ov004_02222874_Rec {
    s32 x;
    s32 z;
    s16 h;
    u8 flag;
    u8 pad_b;
};

struct Unk_ov004_02222874_Obj : public Unk_ov004_02222874_Prim, public Unk_ov004_02222874_Sec {
    u8 pad_14c[0x2cc - 0x14c];
    u8 unk_2cc[0x10];
    s32 unk_2dc;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 unk_59c[4];
    u8 pad_5a0[0x7d0 - 0x5a0];
    union {
        Unk_ov004_02222874_Rec r;
        u8 b[2];
    } unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x80c - 0x800];
    s32 unk_80c;
    u8 pad_810[0x818 - 0x810];
    s32 unk_818;
    u16 unk_81c;
    u8 pad_81e[0x8ec - 0x81e];
    u8 unk_8ec[0x10];
};

typedef Unk_ov004_02222874_Obj Obj;
typedef Unk_ov004_02222874_Sec Sec;
typedef Unk_ov004_02222874_V3 V3;
typedef Unk_ov004_02222874_Tgt Tgt;
typedef Unk_ov004_02222874_Msg Msg;
typedef Unk_ov004_02222874_Rec Rec;

extern "C" {
extern u8 data_020e416c;
extern void *data_020cbb18;
extern u8 data_ov004_0224d4c0[];
extern u8 data_ov004_0224d4d0[];

s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
void _ZN12Unk_02006d1413func_0200ecdcEj(Obj *o, u32 a);
s32 _ZN12Unk_020102ec13func_02010914Ev(Obj *o);
s32 _ZN12Unk_020102ec13func_020109c4Ev(Obj *o);
s32 _ZN12Unk_020102ec13func_0201071cEv(Obj *o);
s32 _ZN12Unk_020102ec13func_0201065cEv(Obj *o);
void _ZN12Unk_020102ec13func_02010358Eijt(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec13func_02010a58EPs(Obj *o, s16 *a);
s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
s32 _ZN12Unk_0200769413func_02007c08Ej(Obj *o, s32 a);
s32 _ZN12Unk_020d6df413func_0200d640Ev(Obj *o);
s32 _ZN12Unk_020d6df413func_0200d5c4Ev(Obj *o);
s32 _ZN12Unk_020d6df413func_0200ce98Ejjj(Obj *o, s32 a, s32 b, s32 c);
s32 func_020b0f54(void);
s32 func_020b52f8(void);
s32 func_0203d820(void);
void func_0203d7f8(void);
void _ZN12Unk_020d967013func_0203e47cEi(void *o, Sec *s);
void _ZN12Unk_020d967013func_0203e488Ei(void *o, Sec *s);
void _ZN12Unk_02006d1413func_0200ec1cEj(Obj *o, s32 a);
void _ZN12Unk_02006d1413func_0200ec30Ej(Obj *o, s32 a);
void _ZN12Unk_020e2a3013func_020a710cEPKc(Sec *s, void *d);
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
s32 func_0200f594(Obj *o, s32 x, s32 z, s32 h);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
s32 func_020769ac(void *a);
void func_020769c4(void *a, s32 b);
s32 func_0204b2d4(void *p);
u32 func_0204b25c(void *p);
s32 func_02098ffc(void);
void func_02099124(void *p);
s32 _ZN12Unk_02006d1413func_0200f5b0Ev(Obj *o);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
s32 func_02042ba8(u32 a, u32 b);
s32 func_0206e780(u32 a);
s32 func_0206ec6c(void);
s32 func_0206ed18(void);

void *func_ov004_022354d8(void);
s32 _ZN18Unk_ov004_022351bc19func_ov004_0223532cEv(void *p);
s32 _ZN18Unk_ov004_022351bc19func_ov004_0223534cEv(void *p);
s32 _ZN18Unk_ov004_022351bc19func_ov004_0223531cEv(void *p);
s32 _ZN18Unk_ov004_022351bc19func_ov004_0223533cEv(void *p);
s32 _ZN18Unk_ov004_022351bc19func_ov004_0223539cEv(void *p);
s32 func_ov004_022226ec(Obj *o, s32 a, s32 b);
s32 func_ov004_0222257c(Obj *o, s32 a, s32 b);
s32 func_ov004_022233bc(Obj *o);
s32 func_ov004_02223314(Obj *o);

void func_ov004_02222838(void);
void func_ov004_0222283c(Obj *o, Obj *arg);
void func_ov004_02222870(u8 *p, u32 v);
s32 func_ov004_02222874(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02222924(u8 *p, u32 v);
void func_ov004_02222928(Obj *o);
void func_ov004_02222980(Obj *o);
void func_ov004_02222b40(Obj *o, s32 c);
void func_ov004_02222b74(Obj *o, Obj *arg);
void func_ov004_02222bd4(u8 *src, u8 *a, u8 *b);
void func_ov004_02222be0(u8 *p, u32 a, u32 b);
void func_ov004_02222be8(u8 *p, s32 v);
s32 func_ov004_02222c04(Obj *o, u32 a, u32 b, u32 c, s32 e);
void func_ov004_02222c4c(u8 *p, u32 a, u32 b);
void func_ov004_02222c54(Obj *o);
void func_ov004_02222cb0(Obj *o);
void func_ov004_02222d58(Obj *o);
void func_ov004_02222d74(Obj *o);
s32 func_ov004_02222d94(Obj *o, s32 c);
void func_ov004_02222dcc(Obj *o, Obj *arg);
void func_ov004_02222e18(void *p, s32 *x, s32 *z, s16 *h);
void func_ov004_02222e34(void *p, s32 x, s32 z, s16 h);
void func_ov004_02222e50(Rec *r, s32 x, s32 z, s16 h);
s32 func_ov004_02222e5c(Obj *o, s32 x, s32 z, s16 h, u32 a, s32 b);
void func_ov004_02222ea4(Tgt *t, s32 x, s32 z, s16 h);
void func_ov004_02222eac(Obj *o);
void func_ov004_02222ecc(Obj *o);
}

struct Unk_ov004_02222980_Pad {
    s32 v[2];
    Unk_ov004_02222980_Pad() {}
    ~Unk_ov004_02222980_Pad() {}
};

static inline BOOL Unk_ov004_02222874_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

#define ECC_START_FAIL(c) \
    { \
        *p = 4; \
        _ZN12Unk_020102ec13func_020103b4Eijt(o, 0, 6, 6); \
        o->unk_80c = func_02042ba8(o->unk_7fc, o->unk_81c); \
    }

extern "C" void func_ov004_02222ecc(Obj *o) {
    u8 *p = (u8 *)o + 0x7d5;
    struct {
        u32 pad;
        u16 a;
        u16 b;
    } w;
    s32 t;
    switch (*p) {
    case 0:
        if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_2cc) == 0) {
            break;
        }
        {
            BOOL ok;
            if (func_02098ffc() == -1) {
                if (func_0204b2d4(&o->unk_81c) != 0) {
                    w.b = 0xfff1;
                    u32 r6 = func_0204b25c(&o->unk_81c);
                    if (r6 == func_0204b25c(&w.b)) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                } else {
                    if (o->unk_81c == 0xfff1) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                }
                if (ok == FALSE) {
                    if (func_0203d820() == 0) {
                        break;
                    }
                    _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x6c, 3, 0);
                    s32 r = _ZN12Unk_02006d1413func_0200f5b0Ev(o);
                    if (r == 4) {
                        func_0205e1a0(o->unk_59c, 0, 9, 0);
                    } else if (r == 3) {
                        func_0205e1a0(o->unk_59c, 0x13, 3, 0);
                    }
                    *p = 1;
                    _ZN12Unk_020d967013func_0203e488Ei(o, o);
                    _ZN12Unk_02006d1413func_0200ec30Ej(o, 0x11);
                    {
                        Sec &s = *o;
                        _ZN12Unk_020e2a3013func_020a710cEPKc(&s, data_ov004_0224d4d0);
                    }
                    o->unk_10a = 2;
                    o->unk_128->unk_08 = 1;
                    break;
                }
            }
        }
        w.a = o->unk_81c;
        func_02099124(&w.a);
        *p = 5;
        break;
    case 1:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *p = 2;
                o->unk_818 = 3;
            }
        }
        break;
    case 2:
        t = o->unk_818;
        if (t >= 0xf) {
            *p = 3;
            if (o->unk_80c == -1) {
                ECC_START_FAIL(0)
            }
        } else if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                if (t == 5) {
                    if (func_0206e780(o->unk_81c) != 0) {
                        o->unk_818 = 6;
                    }
                } else if (t == 6) {
                    if (func_0206ec6c() != 0) {
                        o->unk_818 = 0xf;
                        o->unk_2dc = 0x1000;
                        if (func_0206ed18() != 0) {
                            *p = 5;
                            _ZN12Unk_020d967013func_0203e47cEi(o, o);
                            _ZN12Unk_02006d1413func_0200ec1cEj(o, 0x11);
                            func_0203d7f8();
                        } else {
                            *p = 3;
                            if (o->unk_80c == -1) {
                                ECC_START_FAIL(0)
                            }
                        }
                    }
                }
            }
        }
        break;
    case 3:
        if (o->unk_80c == -1) {
            ECC_START_FAIL(0)
        }
        break;
    case 4:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                _ZN12Unk_020d967013func_0203e47cEi(o, o);
                _ZN12Unk_02006d1413func_0200ec1cEj(o, 0x11);
                func_0203d7f8();
                *p = 5;
                _ZN12Unk_020102ec13func_020103b4Eijt(o, 0, 6, 6);
            }
        }
        break;
    case 5:
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
        _ZN12Unk_02006d1413func_0200ec1cEj(o, 0xd);
        o->unk_818 = 0xf;
        break;
    case 6:
        if (func_0203d820() != 0) {
            *p = 7;
            _ZN12Unk_020d967013func_0203e488Ei(o, o);
            _ZN12Unk_02006d1413func_0200ec30Ej(o, 0x11);
            {
                Sec &s = *o;
                _ZN12Unk_020e2a3013func_020a710cEPKc(&s, data_ov004_0224d4d0);
            }
            o->unk_10a = 0;
            o->unk_128->unk_08 = 1;
        }
        break;
    case 7:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *p = 8;
            }
        }
        break;
    case 8:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                _ZN12Unk_020d967013func_0203e47cEi(o, o);
                _ZN12Unk_02006d1413func_0200ec1cEj(o, 0x11);
                func_0203d7f8();
                *p = 9;
            }
        }
        break;
    case 9:
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
        _ZN12Unk_02006d1413func_0200ec1cEj(o, 0xd);
        break;
    case 10:
        if (func_0203d820() != 0) {
            *p = 0xb;
            _ZN12Unk_020d967013func_0203e488Ei(o, o);
            _ZN12Unk_02006d1413func_0200ec30Ej(o, 0x11);
            {
                Sec &s = *o;
                _ZN12Unk_020e2a3013func_020a710cEPKc(&s, data_ov004_0224d4c0);
            }
            o->unk_10a = 1;
            o->unk_128->unk_08 = 1;
        }
        break;
    case 11:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *p = 0xc;
            }
        }
        break;
    case 12:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                _ZN12Unk_020d967013func_0203e47cEi(o, o);
                _ZN12Unk_02006d1413func_0200ec1cEj(o, 0x11);
                func_0203d7f8();
                o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
                _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
            }
        }
        break;
    }
}

extern "C" void func_ov004_02222eac(Obj *o) {
    func_ov004_022233bc(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02223314(o);
    func_ov004_02222ecc(o);
}

extern "C" void func_ov004_02222ea4(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" s32 func_ov004_02222e5c(Obj *o, s32 x, s32 z, s16 h, u32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x1d, a, *(s16 *)&b);
    func_ov004_02222ea4(&m.unk_0c.t, x, z, h);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02222e50(Rec *r, s32 x, s32 z, s16 h) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->flag = 0;
}

extern "C" void func_ov004_02222e34(void *p, s32 x, s32 z, s16 h) {
    func_02076a6c(p, x, z);
    func_020769c4((u8 *)p + 5, h);
}

extern "C" void func_ov004_02222e18(void *p, s32 *x, s32 *z, s16 *h) {
    func_02076a2c(p, x, z);
    *h = func_020769ac((u8 *)p + 5);
}

extern "C" void func_ov004_02222dcc(Obj *o, Obj *arg) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x1a, 3, 0);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    s32 x = p->x;
    s32 z = p->y;
    s16 h = *(s16 *)((u8 *)p + 8);
    func_ov004_02222e50(&o->unk_7d0.r, x, z, h);
    func_ov004_02222e34(o->unk_8ec, x, z, h);
}

extern "C" s32 func_ov004_02222d94(Obj *o, s32 c) {
    s32 x, z;
    s16 h;
    func_ov004_02222e18(o->unk_8ec, &x, &z, &h);
    func_ov004_02222e5c(o, x, z, h, 5, c);
}

extern "C" void func_ov004_02222d74(Obj *o) {
    Rec *r = &o->unk_7d0.r;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->z;
    _ZN12Unk_020102ec13func_02010a58EPs(o, &r->h);
}

extern "C" void func_ov004_02222d58(Obj *o) {
    Rec *r = &o->unk_7d0.r;
    func_0200f594(o, r->x, r->z, r->h);
}

extern "C" void func_ov004_02222cb0(Obj *o) {
    Rec *r = &o->unk_7d0.r;
    V3 *v = &o->unk_5c;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_2cc) && v->x == r->x && v->z == r->z && r->h == o->unk_8e) {
        func_ov004_02222c04(o, 1, 0, 5, -1);
    } else if (o->unk_13d == 0) {
        if (r->flag == 0) {
            r->flag = 1;
            if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_2cc) == 0) {
                _ZN18Unk_ov004_022351bc19func_ov004_0223539cEv(func_ov004_022354d8());
            }
        } else {
            o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
            _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov004_02222c54(Obj *o) {
    func_ov004_02222d58(o);
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_020109c4Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    _ZN12Unk_020102ec13func_0201065cEv(o);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_ov004_02222cb0(o);
    } else {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
    }
}

extern "C" void func_ov004_02222c4c(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" s32 func_ov004_02222c04(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x1e, c, *(s16 *)&e);
    func_ov004_02222c4c(m.unk_0c.b, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02222be8(u8 *p, s32 v) {
    if (v > 0x333) {
        p[0] = 0;
    } else {
        p[0] = 1;
    }
    p[1] = 0;
}

extern "C" void func_ov004_02222be0(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" void func_ov004_02222bd4(u8 *src, u8 *a, u8 *b) {
    *a = src[0];
    *b = src[1];
}

extern "C" void func_ov004_02222b74(Obj *o, Obj *arg) {
    u8 *a = (u8 *)arg + 0xc;
    u8 *r = &o->unk_7d0.b[0];
    u32 x = a[0];
    u32 y = a[1];
    s32 t = _ZN12Unk_020d6df413func_0200d640Ev(o);
    if (x != 0) {
        t = 0;
    }
    func_ov004_02222be8(r, t);
    if (y != 0) {
        _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x1a, 3, 0);
    } else {
        _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x1a, 0, 0);
    }
    func_ov004_02222be0(o->unk_8ec, x, y);
}

extern "C" void func_ov004_02222b40(Obj *o, s32 c) {
    u8 l[2];
    func_ov004_02222bd4(o->unk_8ec, &l[0], &l[1]);
    func_ov004_02222c04(o, l[0], l[1], 5, c);
}

extern "C" void func_ov004_02222980(Obj *o) {
    Unk_ov004_02222980_Pad pad;
    u8 *p = &o->unk_7d0.b[0];
    u8 *q = p + 1;
    switch (*q) {
    case 0:
        if (*p == 0) {
            if (_ZN12Unk_020d6df413func_0200d640Ev(o) < 0x333) {
                *p = 1;
            }
        }
        if (o->unk_13d == 0) {
            o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
            _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
        } else if (_ZN12Unk_020d6df413func_0200d640Ev(o) > 0x333) {
            if ((u32)func_020b0f54() <= 1) {
                o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
                switch (_ZN12Unk_020d6df413func_0200d5c4Ev(o)) {
                case 2:
                    func_ov004_0222257c(o, 6, -1);
                    break;
                case 0:
                    func_ov004_022226ec(o, 6, -1);
                    break;
                case 3:
                    if (*p != 0) {
                        if (func_ov004_02222874(o, 1, 6, -1) == 0) {
                            *p = 0;
                        }
                    }
                    break;
                case 1:
                    if (*p != 0) {
                        if (func_ov004_02222874(o, 0, 6, -1) == 0) {
                            *p = 0;
                        }
                    }
                    break;
                }
            } else {
                if (func_020b52f8() != 0 && o->unk_7fc == 0) {
                    (*q)++;
                }
            }
        }
        break;
    case 1:
        if (func_0203d820() != 0) {
            (*q)++;
            _ZN12Unk_020d967013func_0203e488Ei(o, o);
            _ZN12Unk_02006d1413func_0200ec30Ej(o, 0x11);
            {
                Sec &s = *o;
                _ZN12Unk_020e2a3013func_020a710cEPKc(&s, data_ov004_0224d4c0);
            }
            o->unk_10a = 1;
            o->unk_128->unk_08 = 1;
        }
        break;
    case 2:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *q = *q + 1;
            }
        }
        break;
    case 3:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                _ZN12Unk_020d967013func_0203e47cEi(o, o);
                _ZN12Unk_02006d1413func_0200ec1cEj(o, 0x11);
                func_0203d7f8();
                *q = 0;
            }
        }
        break;
    }
}

extern "C" void func_ov004_02222928(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_020109c4Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    _ZN12Unk_020102ec13func_0201065cEv(o);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_ov004_02222980(o);
    } else {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
    }
}

extern "C" void func_ov004_02222924(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_02222874(Obj *o, u32 a, s32 b, s32 c) {
    if (!Unk_ov004_02222874_IsOne(data_020e416c)) {
        return 0;
    }
    if ((a != 0 && _ZN18Unk_ov004_022351bc19func_ov004_0223532cEv(func_ov004_022354d8()) != 0) || (a == 0 && _ZN18Unk_ov004_022351bc19func_ov004_0223534cEv(func_ov004_022354d8()) != 0)) {
        Msg m;
        m.func_0200e2c0(0x1f, b, c);
        func_ov004_02222924(m.unk_0c.b, a);
        if (a != 0) {
            _ZN18Unk_ov004_022351bc19func_ov004_0223531cEv(func_ov004_022354d8());
        } else {
            _ZN18Unk_ov004_022351bc19func_ov004_0223533cEv(func_ov004_022354d8());
        }
        s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
        _ZN12Unk_0200e2c0D1Ev(&m);
        return r;
    }
    if (func_020b52f8() != 0 && o->unk_7fc == 0) {
        _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x6d);
    }
    return 0;
}

extern "C" void func_ov004_02222870(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_0222283c(Obj *o, Obj *arg) {
    u8 *p = &o->unk_7d0.b[0];
    if (*((u8 *)arg + 0xc) != 0) {
        _ZN12Unk_020102ec13func_02010358Eijt(o, 0x1b, 3, 0);
    } else {
        _ZN12Unk_020102ec13func_02010358Eijt(o, 0x1c, 3, 0);
    }
    func_ov004_02222870(p, 0);
}

extern "C" void func_ov004_02222838(void) {
}


}  // namespace ns_02222838

namespace ns_02221ed0 {

struct Unk_ov004_02221ed0_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02221ed0_Rec {
    s32 x;
    s32 z;
    s16 h;
    u8 d;
};

struct Unk_ov004_02221ed0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_02221ed0_Msg {
public:
    inline Unk_ov004_02221ed0_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(s32 a, s32 b, s32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_02221ed0_Rec unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_02221ed0_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02221ed0_V3 unk_5c;
    Unk_ov004_02221ed0_V3 unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[0x13d - 0x90];
    u8 unk_13d;
    u8 pad_13e[0x2cc - 0x13e];
    u8 unk_2cc[4];
    Unk_ov004_02221ed0_Bits unk_2d0;
    u8 pad_2d4[0x2e0 - 0x2d4];
    u8 unk_2e0;
    u8 pad_2e1[0x6f0 - 0x2e1];
    s32 unk_6f0;
    u8 pad_6f4[0x6f8 - 0x6f4];
    s32 unk_6f8;
    u8 pad_6fc[0x7d0 - 0x6fc];
    Unk_ov004_02221ed0_Rec unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[0x10];
};

typedef Unk_ov004_02221ed0_Obj Obj;
typedef Unk_ov004_02221ed0_V3 V3;
typedef Unk_ov004_02221ed0_Rec Rec;
typedef Unk_ov004_02221ed0_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov004_0224013c[];
extern u8 data_ov004_0224d4b8[];
extern u8 data_ov004_0224d4bc[];
extern s16 data_ov004_02240134[];

s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
s32 _ZN12Unk_0200769413func_02007c08Ej(Obj *o, s32 a);
void _ZN12Unk_020102ec13func_02010914Ev(Obj *o);
void _ZN12Unk_020102ec13func_0201071cEv(Obj *o);
void _ZN12Unk_020102ec13func_0201065cEv(Obj *o);
void _ZN12Unk_020102ec13func_020109c4Ev(Obj *o);
void _ZN12Unk_02006d1413func_0200ef08Ev(Obj *o);
s32 func_02051518(void);
void func_02051524(V3 *v);
void _ZN12Unk_020d6df413func_0200ce98Ejjj(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_02006d1413func_0200ecdcEj(Obj *o, u32 a);
s32 _ZN12Unk_020d6df413func_0200d5c4Ev(Obj *o);
s32 _ZN12Unk_020d6df413func_0200d640Ev(Obj *o);
void func_0200f594(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec13func_02010358Eijt(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010a58EPs(Obj *o, s16 *a);
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
s32 _ZN12Unk_020dbe7c13func_0205668cEihit(void *p, s32 a, s32 b, s32 c, u32 d);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
u16 func_020769ac(void *a);
void func_020769c4(void *a, s32 b);

s32 func_ov004_02222c04(Obj *o, s32 a, s32 b, s32 c, s32 d);
s32 func_ov004_02222870(u8 *p, s32 a);
s32 func_ov004_022354d8(void);
s32 _ZN18Unk_ov004_022351bc19func_ov004_02235224Ev(void);
s32 _ZN18Unk_ov004_022351bc19func_ov004_02235270Ev(void);
s32 _ZN18Unk_ov004_022351bc19func_ov004_022351e8Ev(void);
s32 _ZN18Unk_ov004_022351bc19func_ov004_02235234Ev(void);
s32 func_020b52f8(void);

s32 func_ov004_02221e68(Obj *o, u32 a, u32 b);
s32 func_ov004_022219d8(Obj *o, u32 a, u32 b);
s32 func_ov004_02221c20(Obj *o, u32 a, u32 b);

void func_ov004_02221ed0(Rec *t, s32 x, s32 z, s16 h);
void func_ov004_02221ed8(Obj *o);
void func_ov004_02221ef8(Obj *o);
void func_ov004_02221fc0(Obj *o);
void func_ov004_02221fdc(Obj *o);
void func_ov004_02221ffc(Obj *o, s32 a);
void func_ov004_02222040(Obj *o, Msg *m);
void func_ov004_022220e0(u8 *self, s32 *x, s32 *z, s16 *h, u8 *d);
void func_ov004_02222104(u8 *self, s32 x, s32 z, s16 h, u8 d);
void func_ov004_02222128(Rec *r, s32 x, s32 z, s16 h, u8 d);
s32 func_ov004_0222213c(Obj *o, s32 x, s32 z, s16 h, u8 d, s32 a, s32 b);
void func_ov004_0222218c(Rec *r, s32 x, s32 z, s16 h, u8 d);
void func_ov004_022221a0(Obj *o);
void func_ov004_022221c8(Obj *o);
void func_ov004_02222228(Obj *o);
void func_ov004_02222280(Obj *o);
void func_ov004_022222a4(void);
void func_ov004_022222a8(Obj *o);
void func_ov004_022222e8(Rec *r, s32 x, s32 z);
s32 func_ov004_022222f0(Obj *o, s32 a, s32 b);
void func_ov004_02222328(Obj *o);
void func_ov004_02222348(Obj *o);
void func_ov004_022223a8(Obj *o);
void func_ov004_022223c0(void);
void func_ov004_022223c4(Obj *o);
void func_ov004_02222404(Rec *r, s32 x, s32 z);
s32 func_ov004_0222240c(Obj *o, s32 a, s32 b);
void func_ov004_02222444(Obj *o);
void func_ov004_0222246c(Obj *o);
void func_ov004_02222550(Obj *o, s32 a);
void func_ov004_0222255c(Obj *o);
s32 func_ov004_0222257c(Obj *o, s32 a, s32 b);
void func_ov004_022225b4(Obj *o);
void func_ov004_022225dc(Obj *o);
void func_ov004_022226c0(Obj *o, s32 a);
void func_ov004_022226cc(Obj *o);
s32 func_ov004_022226ec(Obj *o, s32 a, s32 b);
void func_ov004_02222724(Obj *o);
void func_ov004_02222744(Obj *o);
}

extern "C" void func_ov004_02222744(Obj *o) {
    if (o->unk_2e0 == 3) {
        u8 *f = (u8 *)&o->unk_7d0;
        s32 t;
        if (*f == 0) {
            if (_ZN12Unk_020d6df413func_0200d640Ev(o) < 0x19a) {
                func_ov004_02222870(f, 1);
            }
        }
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        t = _ZN12Unk_020d6df413func_0200d5c4Ev(o);
        if (*f != 0 && _ZN12Unk_020d6df413func_0200d640Ev(o) > 0x19a) {
            if (t == 3 || t == 1) {
                func_ov004_02222c04(o, 1, 1, 5, -1);
                return;
            }
        }
        if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_2cc)) {
            if (o->unk_13d) {
                func_ov004_02222c04(o, 0, 1, 5, -1);
            } else {
                _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
            }
        }
    } else {
        if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_2cc)) {
            _ZN12Unk_020dbe7c13func_0205668cEihit(o->unk_2cc, 0, 3, 0x1000, o->unk_2d0.mid);
        }
    }
}

extern "C" void func_ov004_02222724(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    _ZN12Unk_020102ec13func_0201065cEv(o);
    func_ov004_02222744(o);
}

extern "C" s32 func_ov004_022226ec(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x20, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_022226cc(Obj *o) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x1d, 3, 0);
    *(u8 *)&o->unk_7d0 = 0;
}

extern "C" void func_ov004_022226c0(Obj *o, s32 a) {
    func_ov004_022226ec(o, 6, a);
}

extern "C" void func_ov004_022225dc(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_2cc)) {
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
            u8 r4 = 0;
            func_ov004_022354d8();
            if (_ZN18Unk_ov004_022351bc19func_ov004_02235270Ev() == 0) {
                r4 = 1;
            }
            if (func_020b52f8() == 0 || o->unk_7fc != 0) {
                r4 |= 2;
            }
            if (r4 != 0) {
                u8 *f = (u8 *)&o->unk_7d0;
                if (*f == 0) {
                    *f = 1;
                    if (r4 == 1) {
                        _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x6d);
                    }
                }
                s32 t = _ZN12Unk_020d6df413func_0200d5c4Ev(o);
                if (_ZN12Unk_020d6df413func_0200d640Ev(o) > 0) {
                    if (t == 0) {
                        return;
                    }
                }
                o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
                func_ov004_02222c04(o, 0, 1, 5, -1);
            } else {
                func_ov004_0222240c(o, 6, -1);
                func_ov004_022354d8();
                _ZN18Unk_ov004_022351bc19func_ov004_02235234Ev();
            }
        } else {
            o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        }
    }
}

extern "C" void func_ov004_022225b4(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_020109c4Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    _ZN12Unk_020102ec13func_0201065cEv(o);
    func_ov004_022225dc(o);
}

extern "C" s32 func_ov004_0222257c(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x21, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0222255c(Obj *o) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x1e, 3, 0);
    *(u8 *)&o->unk_7d0 = 0;
}

extern "C" void func_ov004_02222550(Obj *o, s32 a) {
    func_ov004_0222257c(o, 6, a);
}

extern "C" void func_ov004_0222246c(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_2cc)) {
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
            u8 r4 = 0;
            func_ov004_022354d8();
            if (_ZN18Unk_ov004_022351bc19func_ov004_02235224Ev() == 0) {
                r4 = 1;
            }
            if (func_020b52f8() == 0 || o->unk_7fc != 0) {
                r4 |= 2;
            }
            if (r4 != 0) {
                u8 *f = (u8 *)&o->unk_7d0;
                if (*f == 0) {
                    *f = 1;
                    if (r4 == 1) {
                        _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x6d);
                    }
                }
                s32 t = _ZN12Unk_020d6df413func_0200d5c4Ev(o);
                if (_ZN12Unk_020d6df413func_0200d640Ev(o) > 0) {
                    if (t == 2) {
                        return;
                    }
                }
                o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
                func_ov004_02222c04(o, 0, 1, 5, -1);
            } else {
                func_ov004_022222f0(o, 6, -1);
                func_ov004_022354d8();
                _ZN18Unk_ov004_022351bc19func_ov004_022351e8Ev();
            }
        } else {
            o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        }
    }
}

extern "C" void func_ov004_02222444(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_020109c4Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    _ZN12Unk_020102ec13func_0201065cEv(o);
    func_ov004_0222246c(o);
}

extern "C" s32 func_ov004_0222240c(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x22, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02222404(Rec *r, s32 x, s32 z) {
    r->x = x;
    r->z = z;
}

extern "C" void func_ov004_022223c4(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x1f, 3, 0);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)(data_ov004_0224013c + 12));
    func_ov004_02222404(&o->unk_7d0, v.x, v.z);
}

extern "C" void func_ov004_022223c0(void) {
}

extern "C" void func_ov004_022223a8(Obj *o) {
    V3 *p = &o->unk_5c;
    Rec *r = &o->unk_7d0;
    p->x = r->x;
    p->z = r->z;
}

extern "C" void func_ov004_02222348(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_2cc)) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        if (o->unk_13d) {
            func_ov004_02222c04(o, 1, 0, 5, -1);
        } else {
            _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov004_02222328(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    _ZN12Unk_020102ec13func_0201065cEv(o);
    func_ov004_02222348(o);
}

extern "C" s32 func_ov004_022222f0(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x23, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_022222e8(Rec *r, s32 x, s32 z) {
    r->x = x;
    r->z = z;
}

extern "C" void func_ov004_022222a8(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x20, 3, 0);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)data_ov004_0224d4bc);
    func_ov004_022222e8(&o->unk_7d0, v.x, v.z);
}

extern "C" void func_ov004_022222a4(void) {
}

extern "C" void func_ov004_02222280(Obj *o) {
    V3 *p = &o->unk_5c;
    Rec *r = &o->unk_7d0;
    p->x = r->x;
    p->z = r->z;
    o->unk_68.x = p->x;
    o->unk_68.y = p->y;
    o->unk_68.z = p->z;
}

extern "C" void func_ov004_02222228(Obj *o) {
    volatile V3 old;
    V3 *pv = &o->unk_5c;
    s32 y;
    old.x = o->unk_5c.x;
    y = pv->y;
    old.y = y;
    old.z = pv->z;
    s32 nz = o->unk_6f8;
    s32 nx = o->unk_6f0;
    o->unk_5c.x = nx;
    o->unk_5c.y = y;
    o->unk_5c.z = nz;
    o->unk_68.x = o->unk_5c.x;
    o->unk_68.y = o->unk_5c.y;
    o->unk_68.z = o->unk_5c.z;
    _ZN12Unk_020102ec13func_020109c4Ev(o);
    s32 ox = old.x;
    if (ox == o->unk_6f0) {
        o->unk_5c.z = old.z;
    } else {
        o->unk_5c.x = ox;
    }
}

extern "C" void func_ov004_022221c8(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_2cc)) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        if (o->unk_13d) {
            func_ov004_02222c04(o, 1, 0, 5, -1);
        } else {
            _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov004_022221a0(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    func_ov004_02222228(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    _ZN12Unk_020102ec13func_0201065cEv(o);
    func_ov004_022221c8(o);
}

extern "C" void func_ov004_0222218c(Rec *r, s32 x, s32 z, s16 h, u8 d) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->d = d;
}

extern "C" s32 func_ov004_0222213c(Obj *o, s32 x, s32 z, s16 h, u8 d, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x24, a, *(s16 *)&b);
    func_ov004_0222218c(&m.unk_0c, x, z, h, d);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02222128(Rec *r, s32 x, s32 z, s16 h, u8 d) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->d = d;
}

extern "C" void func_ov004_02222104(u8 *self, s32 x, s32 z, s16 h, u8 d) {
    func_02076a6c(self, x, z);
    func_020769c4(self + 5, h);
    self[7] = d;
}

extern "C" void func_ov004_022220e0(u8 *self, s32 *x, s32 *z, s16 *h, u8 *d) {
    func_02076a2c(self, x, z);
    *h = func_020769ac(self + 5);
    *d = self[7];
}

extern "C" void func_ov004_02222040(Obj *o, Msg *m) {
    Rec *p = &m->unk_0c;
    s16 h = p->h;
    u8 d = p->d;
    s32 z = p->z;
    s32 y = o->unk_5c.y;
    s32 x = p->x;
    V3 tmp;
    V3 v;
    s16 t;
    tmp.x = x;
    tmp.y = y;
    tmp.z = z;
    t = h + data_ov004_02240134[d];
    func_0200f3ec(&v, o, &tmp, &t, (u32)data_ov004_0224d4b8);
    func_ov004_02222128(&o->unk_7d0, v.x, v.z, t, d);
    func_ov004_02222104(o->unk_8ec, tmp.x, tmp.z, h, d);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_02051524(&tmp);
    }
    _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x1a, 3, 0);
}

extern "C" void func_ov004_02221ffc(Obj *o, s32 a) {
    struct {
        u8 d;
        u8 pad;
        s16 h;
    } l;
    s32 x, z;
    func_ov004_022220e0(o->unk_8ec, &x, &z, &l.h, &l.d);
    func_ov004_0222213c(o, x, z, l.h, l.d, 6, a);
}

extern "C" void func_ov004_02221fdc(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->z;
    _ZN12Unk_020102ec13func_02010a58EPs(o, &r->h);
}

extern "C" void func_ov004_02221fc0(Obj *o) {
    Rec *r = &o->unk_7d0;
    func_0200f594(o, r->x, r->z, r->h);
}

extern "C" void func_ov004_02221ef8(Obj *o) {
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc) == 0) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        return;
    }
    switch (func_02051518()) {
    case 0:
        return;
    case 1:
        break;
    case 2:
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
        return;
    }
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    if (p->x == r->x) {
        if (p->z == r->z) {
            if (r->h == o->unk_8e) {
                switch (r->d) {
                case 0:
                    func_ov004_02221e68(o, 6, -1);
                    break;
                case 1:
                    func_ov004_022219d8(o, 6, -1);
                    break;
                case 2:
                    func_ov004_02221c20(o, 6, -1);
                    break;
                }
            }
        }
    }
}

extern "C" void func_ov004_02221ed8(Obj *o) {
    func_ov004_02221fc0(o);
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02221ef8(o);
}

extern "C" void func_ov004_02221ed0(Rec *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}


}  // namespace ns_02221ed0

namespace ns_022215a8 {

struct Unk_ov004_022215a8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_022215a8_Tgt {
    s32 x, z;
    s16 h;
};

struct Unk_ov004_022215a8_Rec {
    s32 x;
    union {
        s32 z;
        u8 flag;
    } u;
    s16 h;
};

struct Unk_ov004_022215a8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_022215a8_Msg {
public:
    inline Unk_ov004_022215a8_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    union {
        Unk_ov004_022215a8_Tgt t;
        u16 h;
    } unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_022215a8_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[8];
    Unk_ov004_022215a8_Bits unk_a4;
    u8 pad_a8[4];
    s32 unk_ac;
    u8 pad_b0[8];
    u8 unk_b8[0x300 - 0x230 - 0xb8];
};

struct Unk_ov004_022215a8_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_022215a8_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xb0 - 0x90];
    s32 unk_b0;
    u8 pad_b4[0x230 - 0xb4];
    Unk_ov004_022215a8_Sub unk_230;
    u8 pad_300[0x700 - 0x300];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_022215a8_Rec unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[0x10];
};

typedef Unk_ov004_022215a8_Obj Obj;
typedef Unk_ov004_022215a8_V3 V3;
struct Unk_ov004_022215a8_V3c {
    volatile s32 x, y, z;
    Unk_ov004_022215a8_V3c(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};
typedef Unk_ov004_022215a8_V3c V3c;
typedef Unk_ov004_022215a8_Tgt Tgt;
typedef Unk_ov004_022215a8_Msg Msg;
typedef Unk_ov004_022215a8_Rec Rec;
typedef Unk_ov004_022215a8_Sub Sub;

extern "C" {
extern u8 data_020e416c;
extern void *data_020cbb18;
extern u8 data_ov004_0224013c[];

s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
s32 func_02034d2c(void);
s32 func_020e77cc(s32 a, s32 b, s32 c);
u8 *func_02003bbc(void);
void _ZN12Unk_020dbe6c13func_02056520Ei(void *p, s32 n);
void _ZN12Unk_020dbda413func_02053f20Ev(void *p);
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
s32 _ZN12Unk_020dbe7c13func_020565e8Ei(void *p, s32 n);
s32 _ZN12Unk_020102ec13func_02010914Ev(Obj *o);
void _ZN12Unk_020102ec13func_0201065cEv(Obj *o);
void _ZN12Unk_02006d1413func_0200ef08Ev(Obj *o);
void _ZN12Unk_020102ec13func_0201071cEv(Obj *o);
void _ZN12Unk_02006d1413func_0200ecdcEj(Obj *o, u32 a);
void _ZN12Unk_020102ec13func_02010358Eijt(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010a58EPs(Obj *o, s16 *a);
s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
s32 _ZN12Unk_0200769413func_02007c08Ej(Obj *o, s32 a);
s32 _ZN12Unk_020d6df413func_0200d640Ev(Obj *o);
s32 _ZN12Unk_020d6df413func_0200d5fcEv(Obj *o);
s32 func_02063c18(s16 a);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
s32 func_020769ac(void *a);
void func_020769c4(void *a, s32 b);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);

void func_ov004_022330a0(void *p);
void func_ov004_022330cc(V3 *v);
s32 func_ov004_02234dd4(void *p, s32 a);
s32 func_ov004_02234d80(void *p, s32 a);
s32 func_ov004_02234d2c(void *p, s32 a);
s32 func_ov004_02221404(Obj *o, s32 a, s32 b, s32 c);

s32 func_ov004_022215a8(Obj *o, u32 a, u32 b);
void func_ov004_022215e0(Obj *o);
void func_ov004_0222164c(Obj *o);
void func_ov004_022216dc(Obj *o);
void func_ov004_02221768(Obj *o);
s32 func_ov004_02221778(Obj *o, s32 a);
void func_ov004_0222178c(Obj *o, Obj *arg);
s32 func_ov004_022217c4(Obj *o, u32 a, u32 b, u32 c);
void func_ov004_02221800(Obj *o);
void func_ov004_02221820(Obj *o);
void func_ov004_02221848(Obj *o);
void func_ov004_0222189c(Obj *o);
void func_ov004_022218bc(Obj *o, s32 a);
void func_ov004_022218f0(Obj *o, Obj *arg);
void func_ov004_0222194c(void *p, s32 *x, s32 *z, s16 *h);
void func_ov004_02221968(void *p, s32 x, s32 z, s16 h);
void func_ov004_02221984(Tgt *t, s32 x, s32 z, s16 h);
s32 func_ov004_0222198c(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b);
s32 func_ov004_022219d8(Obj *o, u32 a, u32 b);
void func_ov004_02221a40(Tgt *t, s32 x, s32 z, s16 h);
void func_ov004_02221a48(Obj *o);
void func_ov004_02221a68(Obj *o);
void func_ov004_02221a90(Obj *o);
void func_ov004_02221ae4(Obj *o);
void func_ov004_02221b04(Obj *o, s32 a);
void func_ov004_02221b38(Obj *o, Obj *arg);
void func_ov004_02221b94(void *p, s32 *x, s32 *z, s16 *h);
void func_ov004_02221bb0(void *p, s32 x, s32 z, s16 h);
void func_ov004_02221bcc(Tgt *t, s32 x, s32 z, s16 h);
s32 func_ov004_02221bd4(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b);
s32 func_ov004_02221c20(Obj *o, u32 a, u32 b);
void func_ov004_02221c88(Tgt *t, s32 x, s32 z, s16 h);
void func_ov004_02221c90(Obj *o);
void func_ov004_02221cb0(Obj *o);
void func_ov004_02221cd8(Obj *o);
void func_ov004_02221d2c(Obj *o);
void func_ov004_02221d4c(Obj *o, s32 a);
void func_ov004_02221d80(Obj *o, Obj *arg);
void func_ov004_02221ddc(void *p, s32 *x, s32 *z, s16 *h);
void func_ov004_02221df8(void *p, s32 x, s32 z, s16 h);
void func_ov004_02221e14(Tgt *t, s32 x, s32 z, s16 h);
s32 func_ov004_02221e1c(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b);
s32 func_ov004_02221e68(Obj *o, u32 a, u32 b);
void func_ov004_02221ed0(Tgt *t, s32 x, s32 z, s16 h);
}

static inline BOOL Unk_ov004_022215a8_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" s32 func_ov004_02221e68(Obj *o, u32 a, u32 b) {
    Msg m;
    V3 v;
    m.func_0200e2c0(0x25, a, b);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)(data_ov004_0224013c + 12));
    func_ov004_02221ed0(&m.unk_0c.t, v.x, v.z, (s16)(o->unk_8e + 0x8000));
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" s32 func_ov004_02221e1c(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x25, a, *(s16 *)&b);
    func_ov004_02221ed0(&m.unk_0c.t, *x, *z, *h);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02221e14(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" void func_ov004_02221df8(void *p, s32 x, s32 z, s16 h) {
    func_02076a6c(p, x, z);
    func_020769c4((u8 *)p + 5, h);
}

extern "C" void func_ov004_02221ddc(void *p, s32 *x, s32 *z, s16 *h) {
    func_02076a2c(p, x, z);
    *h = func_020769ac((u8 *)p + 5);
}

extern "C" void func_ov004_02221d80(Obj *o, Obj *arg) {
    s16 h;
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x21, 3, 0);
    _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4c5);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    h = *(s16 *)((u8 *)p + 8);
    s32 z = p->y;
    s32 y = *(volatile s32 *)&o->unk_5c.y;
    s32 x = *(s32 *)((u8 *)arg + 0xc);
    V3c v(x, y, z);
    func_ov004_02221e14((Tgt *)&o->unk_7d0, x, z, h);
    func_ov004_02221df8(o->unk_8ec, v.x, v.z, h);
}

extern "C" void func_ov004_02221d4c(Obj *o, s32 a) {
    s32 x, z;
    s16 h;
    func_ov004_02221ddc(o->unk_8ec, &x, &z, &h);
    func_ov004_02221e1c(o, &x, &z, &h, 6, a);
}

extern "C" void func_ov004_02221d2c(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->u.z;
    _ZN12Unk_020102ec13func_02010a58EPs(o, &r->h);
}

extern "C" void func_ov004_02221cd8(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(o->unk_230.unk_9c, 0xc)) {
        if (Unk_ov004_022215a8_IsOne(data_020e416c)) {
            Rec *r = &o->unk_7d0;
            s32 z = r->u.z;
            s32 y = o->unk_5c.y;
            s32 x = r->x;
            v.x = x;
            v.y = y;
            v.z = z;
            func_ov004_022330cc(&v);
        }
    }
}

extern "C" void func_ov004_02221cb0(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_230.unk_9c)) {
        func_ov004_022217c4(o, 0, 6, -1);
    }
}

extern "C" void func_ov004_02221c90(Obj *o) {
    func_ov004_02221cd8(o);
    _ZN12Unk_02006d1413func_0200ef08Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02221cb0(o);
}

extern "C" void func_ov004_02221c88(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" s32 func_ov004_02221c20(Obj *o, u32 a, u32 b) {
    Msg m;
    V3 v;
    m.func_0200e2c0(0x26, a, b);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)(data_ov004_0224013c + 12));
    func_ov004_02221c88(&m.unk_0c.t, v.x, v.z, (s16)(o->unk_8e + 0x4000));
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" s32 func_ov004_02221bd4(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x26, a, *(s16 *)&b);
    func_ov004_02221c88(&m.unk_0c.t, *x, *z, *h);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02221bcc(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" void func_ov004_02221bb0(void *p, s32 x, s32 z, s16 h) {
    func_02076a6c(p, x, z);
    func_020769c4((u8 *)p + 5, h);
}

extern "C" void func_ov004_02221b94(void *p, s32 *x, s32 *z, s16 *h) {
    func_02076a2c(p, x, z);
    *h = func_020769ac((u8 *)p + 5);
}

extern "C" void func_ov004_02221b38(Obj *o, Obj *arg) {
    s16 h;
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x22, 0, 0);
    _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4c5);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    h = *(s16 *)((u8 *)p + 8);
    s32 z = p->y;
    s32 y = *(volatile s32 *)&o->unk_5c.y;
    s32 x = *(s32 *)((u8 *)arg + 0xc);
    V3c v(x, y, z);
    func_ov004_02221bcc((Tgt *)&o->unk_7d0, x, z, h);
    func_ov004_02221bb0(o->unk_8ec, v.x, v.z, h);
}

extern "C" void func_ov004_02221b04(Obj *o, s32 a) {
    s32 x, z;
    s16 h;
    func_ov004_02221b94(o->unk_8ec, &x, &z, &h);
    func_ov004_02221bd4(o, &x, &z, &h, 6, a);
}

extern "C" void func_ov004_02221ae4(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->u.z;
    _ZN12Unk_020102ec13func_02010a58EPs(o, &r->h);
}

extern "C" void func_ov004_02221a90(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(o->unk_230.unk_9c, 0xc)) {
        if (Unk_ov004_022215a8_IsOne(data_020e416c)) {
            Rec *r = &o->unk_7d0;
            s32 z = r->u.z;
            s32 y = o->unk_5c.y;
            s32 x = r->x;
            v.x = x;
            v.y = y;
            v.z = z;
            func_ov004_022330cc(&v);
        }
    }
}

extern "C" void func_ov004_02221a68(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_230.unk_9c)) {
        func_ov004_022217c4(o, 0, 6, -1);
    }
}

extern "C" void func_ov004_02221a48(Obj *o) {
    func_ov004_02221a90(o);
    _ZN12Unk_02006d1413func_0200ef08Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02221a68(o);
}

extern "C" void func_ov004_02221a40(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" s32 func_ov004_022219d8(Obj *o, u32 a, u32 b) {
    Msg m;
    V3 v;
    m.func_0200e2c0(0x27, a, b);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)(data_ov004_0224013c + 12));
    func_ov004_02221a40(&m.unk_0c.t, v.x, v.z, (s16)(o->unk_8e - 0x4000));
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" s32 func_ov004_0222198c(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x27, a, *(s16 *)&b);
    func_ov004_02221a40(&m.unk_0c.t, *x, *z, *h);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02221984(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" void func_ov004_02221968(void *p, s32 x, s32 z, s16 h) {
    func_02076a6c(p, x, z);
    func_020769c4((u8 *)p + 5, h);
}

extern "C" void func_ov004_0222194c(void *p, s32 *x, s32 *z, s16 *h) {
    func_02076a2c(p, x, z);
    *h = func_020769ac((u8 *)p + 5);
}

extern "C" void func_ov004_022218f0(Obj *o, Obj *arg) {
    s16 h;
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x23, 0, 0);
    _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4c5);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    h = *(s16 *)((u8 *)p + 8);
    s32 z = p->y;
    s32 y = *(volatile s32 *)&o->unk_5c.y;
    s32 x = *(s32 *)((u8 *)arg + 0xc);
    V3c v(x, y, z);
    func_ov004_02221984((Tgt *)&o->unk_7d0, x, z, h);
    func_ov004_02221968(o->unk_8ec, v.x, v.z, h);
}

extern "C" void func_ov004_022218bc(Obj *o, s32 a) {
    s32 x, z;
    s16 h;
    func_ov004_0222194c(o->unk_8ec, &x, &z, &h);
    func_ov004_0222198c(o, &x, &z, &h, 6, a);
}

extern "C" void func_ov004_0222189c(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->u.z;
    _ZN12Unk_020102ec13func_02010a58EPs(o, &r->h);
}

extern "C" void func_ov004_02221848(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(o->unk_230.unk_9c, 0xc)) {
        if (Unk_ov004_022215a8_IsOne(data_020e416c)) {
            Rec *r = &o->unk_7d0;
            s32 z = r->u.z;
            s32 y = o->unk_5c.y;
            s32 x = r->x;
            v.x = x;
            v.y = y;
            v.z = z;
            func_ov004_022330cc(&v);
        }
    }
}

extern "C" void func_ov004_02221820(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(o->unk_230.unk_9c)) {
        func_ov004_022217c4(o, 0, 6, -1);
    }
}

extern "C" void func_ov004_02221800(Obj *o) {
    func_ov004_02221848(o);
    _ZN12Unk_02006d1413func_0200ef08Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02221820(o);
}

extern "C" s32 func_ov004_022217c4(Obj *o, u32 a, u32 b, u32 c) {
    Msg m;
    m.func_0200e2c0(0x28, b, c);
    m.unk_0c.h = a;
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0222178c(Obj *o, Obj *arg) {
    u16 *r2 = (u16 *)((u8 *)arg + 0xc);
    if (o->unk_700 != 0x24) {
        _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x24, *r2, 0);
    }
    Rec *r = &o->unk_7d0;
    r->x = o->unk_b0;
    r->u.flag = 0;
}

extern "C" s32 func_ov004_02221778(Obj *o, s32 a) {
    return func_ov004_022217c4(o, 0, 6, a);
}

extern "C" void func_ov004_02221768(Obj *o) {
    o->unk_b0 = o->unk_7d0.x;
}

extern "C" void func_ov004_022216dc(Obj *o) {
    u8 *p;
    if (func_020e77cc(func_02034d2c(), 0x63, 0xab) != 0 && (p = func_02003bbc()) != 0 && (s8)p[3] != 1) {
        Sub *sb = &o->unk_230;
        Rec *r = &o->unk_7d0;
        if (r->u.flag == 0) {
            r->u.flag = 1;
            if (sb->unk_a4.mid != 0) {
                _ZN12Unk_020dbe6c13func_02056520Ei(sb->unk_b8, 0xa);
            }
        }
        *(u32 *)&sb->unk_a4 = 0;
        sb->unk_ac = *(s32 *)(p + 0xc);
        _ZN12Unk_020dbda413func_02053f20Ev(sb);
        sb->unk_ac = 0x1000;
        o->unk_b0 = 0;
    } else {
        _ZN12Unk_020102ec13func_02010914Ev(o);
    }
}

extern "C" void func_ov004_0222164c(Obj *o) {
    if (_ZN12Unk_020d6df413func_0200d640Ev(o) > 0) {
        s32 t = _ZN12Unk_020d6df413func_0200d5fcEv(o);
        switch (func_02063c18((s16)(o->unk_8e - t))) {
        case 0:
            if (func_ov004_02234dd4(&o->unk_5c, o->unk_8e)) {
                func_ov004_02221404(o, 0, 6, -1);
            }
            break;
        case 3:
            if (func_ov004_02234d80(&o->unk_5c, o->unk_8e)) {
                func_ov004_02221404(o, 1, 6, -1);
            }
            break;
        case 1:
            if (func_ov004_02234d2c(&o->unk_5c, o->unk_8e)) {
                func_ov004_02221404(o, 2, 6, -1);
            }
            break;
        }
    }
}

extern "C" void func_ov004_022215e0(Obj *o) {
    if (Unk_ov004_022215a8_IsOne(data_020e416c)) {
        func_ov004_022330a0(&o->unk_5c);
    }
    func_ov004_022216dc(o);
    _ZN12Unk_020102ec13func_0201065cEv(o);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_ov004_0222164c(o);
    } else {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
    }
}

extern "C" s32 func_ov004_022215a8(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x29, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}


}  // namespace ns_022215a8

namespace ns_02220c78 {

struct Unk_ov004_02220c78_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02220c78_Rec {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
};

class Unk_ov004_02220c78_Msg {
public:
    inline Unk_ov004_02220c78_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(s32 a, s32 b, s32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    u8 unk_0c;
    u8 pad_0d[0x1c - 0xd];
};

struct Unk_ov004_02220c78_Sub2cc {
    u32 unk_00;
};

struct Unk_ov004_02220c78_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02220c78_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02220c78_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x170 - 0x90];
    u8 unk_170[0x50];
    u8 unk_1c0[0x3c];
    u8 unk_1fc;
    u8 pad_1fd[0x2cc - 0x1fd];
    Unk_ov004_02220c78_Sub2cc unk_2cc;
    u8 pad_2d0[0x2d4 - 0x2d0];
    Unk_ov004_02220c78_Bits unk_2d4;
    u8 pad_2d8[0x2e0 - 0x2d8];
    u8 unk_2e0;
    u8 pad_2e1[0x700 - 0x2e1];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_02220c78_Rec unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    u32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[8];
    u8 pad_8f4[0xc80 - 0x8f4];
    u16 unk_c80;
};

typedef Unk_ov004_02220c78_Obj Obj;
typedef Unk_ov004_02220c78_V3 V3;
typedef Unk_ov004_02220c78_Rec Rec;
typedef Unk_ov004_02220c78_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern u8 data_020e416c[];
extern u8 data_ov004_0224013c[];
extern s16 data_ov004_02240134[];

void _ZN12Unk_020102ec13func_02010914Ev(Obj *o);
void _ZN12Unk_020102ec13func_0201071cEv(Obj *o);
void _ZN12Unk_02006d1413func_0200ec1cEj(Obj *o, u32 a);
void _ZN12Unk_02006d1413func_0200ec30Ej(Obj *o, u32 a);
void _ZN12Unk_02006d1413func_0200ecdcEj(Obj *o, u32 a);
void func_0200f594(Obj *o, u32 a, u32 b, s32 c);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
s32 _ZN12Unk_020dbe7c13func_020565e8Ei(void *p, u32 a);
void _ZN12Unk_020102ec13func_02010358Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, u32 b, u32 c);
s32 _ZN12Unk_0200769413func_02007c08Ej(Obj *o, u32 a);
void _ZN12Unk_020d6df413func_0200ce98Ejjj(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_020102ec13func_02010810EP16Unk_020107c8_BlkPj(Obj *o, V3 *v, void *p);
void _ZN12Unk_020102ec13func_02010740Ejjj(Obj *o, V3 *v, s32 a, s32 b);
void _ZN12Unk_020e0d0813func_02089040Ev(void *p);
void func_020514a4(s32 a);
s32 func_02051508();
void func_02051510(V3 *v);
void _ZN12Unk_020102ec13func_02010a58EPs(Obj *o, s16 *a);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
u16 func_020769ac(void *a);
void func_020769c4(void *a, s32 b);

void func_ov004_02233d00(V3 *p, s32 a);
void func_ov004_02233d04(V3 *p, s32 a);
void func_ov004_02233074(V3 *p);
void func_ov004_022330a0(V3 *p);
s32 func_ov004_022217c4(Obj *o, s32 a, s32 b, s32 c);
s32 func_ov004_022215a8(Obj *o, s32 a, s32 b);

s32 func_ov004_02220c88(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02220cc8(u32 *p, u32 v);
void func_ov004_02220d84(u8 *p, u8 *out);
void func_ov004_02220d8c(u8 *p, u32 v);
void func_ov004_02220d90(u32 *p, u32 v);
s32 func_ov004_02220d94(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02220dd4(u8 *p, u32 v);
void func_ov004_02220e00(Obj *o);
void func_ov004_02220e48(Obj *o);
void func_ov004_02220ed8(Obj *o);
void func_ov004_02220f8c(u8 *self, u8 *o1, s32 *o2, s32 *o3, u16 *o4);
void func_ov004_02220fb0(u8 *self, u8 b, s32 x, s32 y, s16 h);
void func_ov004_02220fd8(Rec *r, u8 d, u32 a, u32 b, s16 c);
s32 func_ov004_02220ff0(Obj *o, u8 b, u32 x, u32 y, s16 c, s32 d, s32 e);
void func_ov004_02221040(void *r, u8 d, u32 a, u32 b, s16 c);
void func_ov004_02221074(Obj *o);
void func_ov004_022210b0(Obj *o);
void func_ov004_02221110(Obj *o);
void func_ov004_02221208(V3 *d, V3 *s);
s32 func_ov004_02221218(Obj *o, s32 a, s32 b);
void func_ov004_02221290(Obj *o);
void func_ov004_02221340(Obj *o);
void func_ov004_022213f4(V3 *d, V3 *s, u8 b);
s32 func_ov004_02221404(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02221444(u8 *p, u32 v);
void func_ov004_02221464(Obj *o);
s32 func_ov004_022214dc(Obj *o, s32 a, s32 b);
void func_ov004_02221530(Obj *o);
}

static inline BOOL Unk_ov004_02220e48_IsZero(u32 v) {
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL Unk_ov004_022211ac_Flag() {
    if (data_020e416c[0] == 1) return TRUE;
    return FALSE;
}

extern "C" void func_ov004_02221574(Obj *o) {
    s32 t = o->unk_8e;
    t -= 0x4000;
    *(u16 *)&o->unk_7d0 = t;
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x26, 0, 0);
    _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4c9);
}

extern "C" s32 func_ov004_02221568(Obj *o, s32 a) {
    return func_ov004_022215a8(o, 6, a);
}

extern "C" void func_ov004_02221558(Obj *o) {
    _ZN12Unk_020102ec13func_02010a58EPs(o, (s16 *)&o->unk_7d0);
}

extern "C" void func_ov004_02221530(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        func_ov004_02221218(o, 6, -1);
    }
}

extern "C" void func_ov004_02221514(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02221530(o);
}

extern "C" s32 func_ov004_022214dc(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x2a, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_022214a8(Obj *o) {
    s32 t = o->unk_8e;
    t += 0x4000;
    *(u16 *)&o->unk_7d0 = t;
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x25, 0, 0);
    _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4c9);
}

extern "C" s32 func_ov004_0222149c(Obj *o, s32 a) {
    return func_ov004_022214dc(o, 6, a);
}

extern "C" void func_ov004_0222148c(Obj *o) {
    _ZN12Unk_020102ec13func_02010a58EPs(o, (s16 *)&o->unk_7d0);
}

extern "C" void func_ov004_02221464(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        func_ov004_02221218(o, 6, -1);
    }
}

extern "C" void func_ov004_02221448(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02221464(o);
}

extern "C" void func_ov004_02221444(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_02221404(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x2b, b, c);
    func_ov004_02221444(&m.unk_0c, a);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_022213f4(V3 *d, V3 *s, u8 b) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    ((u8 *)d)[0xc] = b;
}

extern "C" void func_ov004_02221380(Obj *o, Msg *m) {
    V3 pos;
    V3 tmp;
    s16 t;
    u8 idx = m->unk_0c;
    t = o->unk_8e - data_ov004_02240134[idx];
    func_0200f3ec(&pos, o, &o->unk_5c, &t, (u32)(data_ov004_0224013c + 12));
    tmp.x = pos.x;
    tmp.y = pos.y;
    tmp.z = pos.z;
    func_ov004_022213f4((V3 *)&o->unk_7d0, &tmp, idx);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_02051510(&pos);
    }
}

extern "C" void func_ov004_0222137c() {
}

extern "C" void func_ov004_02221340(Obj *o) {
    V3 v;
    V3 *s = (V3 *)&o->unk_7d0;
    v.x = s->x;
    v.y = s->y;
    v.z = s->z;
    _ZN12Unk_020102ec13func_02010740Ejjj(o, &v, 0x1000, 0x1000);
    _ZN12Unk_020e0d0813func_02089040Ev(o->unk_1c0);
}

extern "C" void func_ov004_02221290(Obj *o) {
    Rec *r;
    switch (func_02051508()) {
    case 0:
        return;
    case 1:
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        break;
    case 2:
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        func_ov004_022217c4(o, 3, 6, -1);
        return;
    }
    r = &o->unk_7d0;
    if (o->unk_1fc != 0) {
        func_ov004_022217c4(o, 3, 6, -1);
        return;
    }
    switch (r->unk_0c) {
    case 0:
        func_ov004_02221218(o, 6, -1);
        break;
    case 1:
        func_ov004_022214dc(o, 6, -1);
        break;
    case 2:
        func_ov004_022215a8(o, 6, -1);
        break;
    }
}

extern "C" void func_ov004_02221250(Obj *o) {
    if (Unk_ov004_022211ac_Flag()) {
        func_ov004_022330a0(&o->unk_5c);
    }
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02221290(o);
    func_ov004_02221340(o);
}

extern "C" s32 func_ov004_02221218(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x2c, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02221208(V3 *d, V3 *s) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

extern "C" void func_ov004_022211ac(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x27, 0, 0);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)(data_ov004_0224013c + 12));
    func_ov004_02221208((V3 *)&o->unk_7d0, &v);
    if (Unk_ov004_022211ac_Flag()) {
        func_ov004_02233074(&o->unk_5c);
    }
}

extern "C" void func_ov004_0222117c(Obj *o, s32 a) {
    s32 t = o->unk_7ec;
    if ((u32)(t - 0x29) <= 1) return;
    if (t == 0x2c) {
        o->unk_c80 = a;
    } else {
        func_ov004_02221218(o, 6, a);
    }
}

extern "C" void func_ov004_0222113c(Obj *o) {
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_020514a4(0);
    }
    V3 *s = (V3 *)&o->unk_7d0;
    V3 *d = &o->unk_5c;
    o->unk_5c.x = s->x;
    d->y = s->y;
    d->z = s->z;
}

extern "C" void func_ov004_02221110(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0xd)) {
        _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4c6);
    }
}

extern "C" void func_ov004_022210b0(Obj *o) {
    V3 v;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        _ZN12Unk_020102ec13func_0201071cEv(o);
    } else {
        V3 *s = (V3 *)&o->unk_7d0;
        v.x = s->x;
        v.y = s->y;
        v.z = s->z;
        _ZN12Unk_020102ec13func_02010810EP16Unk_020107c8_BlkPj(o, &v, &o->unk_7ec);
        _ZN12Unk_020e0d0813func_02089040Ev(o->unk_170);
    }
}

extern "C" void func_ov004_02221074(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 0, 1, -1);
    }
}

extern "C" void func_ov004_02221058(Obj *o) {
    func_ov004_02221110(o);
    func_ov004_022210b0(o);
    func_ov004_02221074(o);
}

extern "C" void func_ov004_02221040(void *r, u8 d, u32 a, u32 b, s16 c) {
    Rec *p = (Rec *)r;
    p->unk_0a = d;
    p->unk_00 = a;
    p->unk_04 = b;
    p->unk_08 = c;
}

extern "C" s32 func_ov004_02220ff0(Obj *o, u8 b, u32 x, u32 y, s16 c, s32 d, s32 e) {
    Msg m;
    m.func_0200e2c0(0x2d, d, *(s16 *)&e);
    func_ov004_02221040(&m.unk_0c, b, x, y, c);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02220fd8(Rec *r, u8 d, u32 a, u32 b, s16 c) {
    r->unk_0a = d;
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
}

extern "C" void func_ov004_02220fb0(u8 *self, u8 b, s32 x, s32 y, s16 h) {
    self[7] = b;
    func_02076a6c(self, x, y);
    func_020769c4(self + 5, h);
}

extern "C" void func_ov004_02220f8c(u8 *self, u8 *o1, s32 *o2, s32 *o3, u16 *o4) {
    u8 b = self[7];
    *o1 = b;
    func_02076a2c(self, o2, o3);
    *o4 = func_020769ac(self + 5);
}

extern "C" void func_ov004_02220f38(Obj *o, Msg *m) {
    Rec *p = (Rec *)&m->unk_0c;
    u8 d = p->unk_0a;
    u32 a = *(u32 *)&m->unk_0c;
    u32 b = p->unk_04;
    s16 c = p->unk_08;
    func_ov004_02220fd8(&o->unk_7d0, d, a, b, c);
    func_ov004_02220fb0(o->unk_8ec, d, a, b, c);
    o->unk_2e0 = 1;
}

extern "C" void func_ov004_02220ef4(Obj *o, s32 a) {
    u8 b;
    u16 h;
    s32 x, y;
    func_ov004_02220f8c(o->unk_8ec, &b, &x, &y, &h);
    func_ov004_02220ff0(o, b, x, y, (s16)h, 6, a);
}

extern "C" void func_ov004_02220ed8(Obj *o) {
    Rec *r = &o->unk_7d0;
    func_0200f594(o, r->unk_00, r->unk_04, r->unk_08);
}

extern "C" void func_ov004_02220e48(Obj *o) {
    s32 k;
    if (o->unk_700 == 0x1a || o->unk_700 == 0) {
        if (Unk_ov004_02220e48_IsZero(o->unk_2d4.mid) < 6) {
            _ZN12Unk_02006d1413func_0200ec30Ej(o, 2);
            switch (o->unk_7d0.unk_0a) {
            case 0:
                k = 0x3b;
                break;
            case 1:
                k = 0x3c;
                break;
            case 2:
                k = 0x3d;
                break;
            }
            _ZN12Unk_020102ec13func_02010358Eijt(o, k, 3, 0);
            if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc) == 0) {
                func_ov004_02233d04(&o->unk_5c, o->unk_8e);
            }
        }
    }
}

extern "C" void func_ov004_02220e00(Obj *o) {
    if (o->unk_700 == 0x1a) return;
    if (o->unk_700 == 0) return;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        _ZN12Unk_02006d1413func_0200ec1cEj(o, 2);
        func_ov004_02220d94(o, o->unk_7d0.unk_0a, 6, -1);
    }
}

extern "C" void func_ov004_02220dd8(Obj *o) {
    func_ov004_02220ed8(o);
    func_ov004_02220e48(o);
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02220e00(o);
}

extern "C" void func_ov004_02220dd4(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_02220d94(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x2e, b, c);
    func_ov004_02220dd4(&m.unk_0c, a);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02220d90(u32 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02220d8c(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02220d84(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov004_02220d0c(Obj *o, Msg *m) {
    u32 t = m->unk_0c;
    s32 k;
    func_ov004_02220d90((u32 *)&o->unk_7d0, t);
    func_ov004_02220d8c(o->unk_8ec, t);
    switch (m->unk_0c) {
    case 0:
        k = 0x3b;
        break;
    case 1:
        k = 0x3c;
        break;
    case 2:
        k = 0x3d;
        break;
    }
    _ZN12Unk_020102ec13func_020103b4Eijt(o, k, 3, 0);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc) == 0) {
        func_ov004_02233d00(&o->unk_5c, o->unk_8e);
    }
}

extern "C" void func_ov004_02220ce0(Obj *o, s32 a) {
    u8 b;
    func_ov004_02220d84(o->unk_8ec, &b);
    func_ov004_02220d94(o, b, 6, a);
}

extern "C" void func_ov004_02220ccc(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
}

extern "C" void func_ov004_02220cc8(u32 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_02220c88(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x2f, b, c);
    func_ov004_02220cc8((u32 *)&m.unk_0c, a);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02220c84(u32 *a, u32 v) {
    *a = v;
}

extern "C" void func_ov004_02220c80(u8 *a, u32 v) {
    *a = v;
}

extern "C" void func_ov004_02220c78(u8 *a, u8 *b) {
    *b = *a;
}


}  // namespace ns_02220c78

namespace ns_02220314 {

struct Unk_ov004_02220314_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02220314_Sec {
    u8 pad_00[4];
};

struct Unk_ov004_02220314_V3c {
    s32 x, y, z;
    Unk_ov004_02220314_V3c(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov004_02220314_Rec {
    s32 unk_00;
    s16 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
};

struct Unk_ov004_02220314_Pay {
    s32 unk_00;
    s16 unk_04;
};

struct Unk_ov004_02220314_Pay2 {
    s32 unk_00;
    u8 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov004_02220314_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02220314_Ptr {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov004_02220314_Msgp {
    u8 pad_00[0xc];
    Unk_ov004_02220314_Pay unk_0c;
};

struct Unk_ov004_02220314_Msgp2 {
    u8 pad_00[0xc];
    Unk_ov004_02220314_Pay2 unk_0c;
};

class Unk_ov004_02220314_Msg {
public:
    inline Unk_ov004_02220314_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_02220314_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_02220314_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02220314_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x10a - 0x90];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_ov004_02220314_Ptr *unk_128;
    u8 pad_12c[0x2cc - 0x12c];
    u32 unk_2cc;
    u32 unk_2d0;
    u32 unk_2d4;
    u8 pad_2d8[4];
    s32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_02220314_Rec unk_7d0;
    u8 pad_7e4[0x7ec - 0x7e4];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    s32 unk_800;
    u8 pad_804[0x81c - 0x804];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x8e7 - 0x820];
    u8 unk_8e7;
    u8 pad_8e8[4];
    u8 unk_8ec[4];
};

static inline BOOL Unk_ov004_02220314_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

typedef Unk_ov004_02220314_Obj Obj;
typedef Unk_ov004_02220314_V3 V3;
typedef Unk_ov004_02220314_Rec Rec;
typedef Unk_ov004_02220314_Msg Msg;
typedef Unk_ov004_02220314_Sec Sec;
typedef Unk_ov004_02220314_Bits Bits;

extern "C" {
extern void *data_020cbb18;
extern u8 data_021c3cc0;
extern u8 data_ov004_0224d4c0[];

s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010358Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010914Ev(Obj *o);
void _ZN12Unk_020102ec13func_0201071cEv(Obj *o);
void _ZN12Unk_02006d1413func_0200ec30Ej(Obj *o, u32 a);
void _ZN12Unk_02006d1413func_0200ec1cEj(Obj *o, u32 a);
void _ZN12Unk_02006d1413func_0200ecdcEj(Obj *o, u32 a);
void _ZN12Unk_020d967013func_0203e488Ei(Obj *o, Sec *s);
void _ZN12Unk_020d967013func_0203e47cEi(Obj *o, Sec *s);
void _ZN12Unk_020e2a3013func_020a710cEPKc(Sec *s, void *n);
s32 _ZN12Unk_0200769413func_02007c08Ej(Obj *o, s32 a);
s32 _ZN12Unk_0200769413func_02007c50Ej(Obj *o, s32 a);
void _ZN12Unk_02006d1413func_020093f4EP16Unk_02006d14_Vecjjs(Obj *o, V3 *v, u32 a, u32 b, s32 c);
s32 func_0209c60c(void);
s32 func_0209c614(s32 a);
s32 func_0209c874(s32 p);
s32 func_0209c86c(s32 p);
V3 *func_0209c864(s32 p);
s32 func_0209c7a4(s32 a);
s32 func_020b4934(void);
void func_020b4bbc(s32 a, s32 b);
void func_020b4aec(s32 a, s32 b, V3 *v, V3 *w);
s32 func_020b4b68(s32 a, s32 b, s32 *c, s16 *d);
s32 func_020b50e8(void);
s32 func_02063c18(s32 a);
s32 _ZN12Unk_020dbe7c13func_020565e8Ei(void *p, u32 a);
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
void _ZN12Unk_02006d1413func_0200bd60Esji(Obj *o, u32 a, u32 b, s32 c);
void func_02057278(u16 *p);
void func_02057378(Obj *o);
void _ZN12Unk_020dbe7c13func_0205668cEihit(void *p, u32 a, u32 b, u32 c, u32 d);
s32 func_020573b4(void);
void func_020573cc(s32 a, Obj *o);
void func_02057418(void *p, s32 a, u32 b, s32 c, Obj *o, s32 d);
void func_0200f594(Obj *o, s32 a, s32 b, s32 c);
void _ZN12Unk_02006d1413func_0200f32cEv(Obj *o);
void _ZN12Unk_02006d1413func_0200f258Ev(Obj *o);
void func_020e9960(V3 *o, V3 *a, V3 *b);
s32 func_020e9688(V3 *v);
s32 func_020e9650(V3 *a, V3 *b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a);
void _ZN12Unk_02032238C1Ev(void *p);
void _ZN12Unk_02032238D1Ev(void *p);
void func_020309d4(void *a, V3 *b, V3 *c, s32 d, u32 e, Obj *f, u32 g);
s32 func_02030814(u32 a);
void func_ov004_02233cfc(V3 *p, s32 a);
void func_ov004_0221ec34(Obj *o, u32 a, u32 b);
void func_ov004_0222015c(Obj *o, s32 a, s32 b);
void func_ov004_02220c78(void *p, u8 *o);
void func_ov004_02220c80(void *p, u32 a);
void func_ov004_02220c84(void *p, u32 a);
void func_ov004_02220c88(Obj *o, u32 a, u32 b, s32 c);

s32 func_ov004_02220314(Obj *o, s32 a);
void func_ov004_02220320(Obj *o);
s32 func_ov004_02220368(Obj *o, s32 a, s32 b);
void func_ov004_022203a0(Obj *o);
void func_ov004_022203c8(Obj *o);
void func_ov004_022205bc(Obj *o);
void func_ov004_02220678(Obj *o);
void func_ov004_02220728(Obj *o);
void func_ov004_02220744(Obj *o);
void func_ov004_02220748(Obj *o, Unk_ov004_02220314_Msgp *m);
void func_ov004_02220844(Rec *r, s32 a, s32 b, s32 c, s32 d, bool e);
s32 func_ov004_0222085c(Obj *o, s32 a, s32 b);
void func_ov004_022208c8(void *p, s32 a, s16 b);
void func_ov004_022208d0(Obj *o);
void func_ov004_022208ec(Obj *o);
void func_ov004_02220954(Obj *o);
void func_ov004_02220958(Obj *o);
s32 func_ov004_022209ac(Obj *o, s32 a, s32 b);
void func_ov004_022209e4(Obj *o);
void func_ov004_02220a00(Obj *o);
void func_ov004_02220a40(Obj *o);
void func_ov004_02220a74(Obj *o);
void func_ov004_02220a78(Obj *o, Unk_ov004_02220314_Msgp2 *m);
s32 func_ov004_02220ac8(Obj *o, u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s16 g);
void func_ov004_02220b2c(void *p, s32 a, u32 b, s32 c, s32 d);
void func_ov004_02220b38(Obj *o);
void func_ov004_02220b54(Obj *o);
void func_ov004_02220ba8(Obj *o, s32 a);
void func_ov004_02220bd4(Obj *o, Unk_ov004_02220314_Msgp *m);
}

extern "C" void func_ov004_02220bd4(Obj *o, Unk_ov004_02220314_Msgp *m) {
    s32 t = m->unk_0c.unk_00;
    s32 k;
    func_ov004_02220c84(&o->unk_7d0, t);
    func_ov004_02220c80(&o->unk_8ec, (u8)t);
    switch (m->unk_0c.unk_00) {
    case 0:
        k = 0x38;
        break;
    case 1:
        k = 0x39;
        break;
    case 2:
        k = 0x3a;
        break;
    }
    _ZN12Unk_020102ec13func_02010358Eijt(o, k, 3, 0);
    u32 mid = ((Bits *)&o->unk_2d0)->mid;
    _ZN12Unk_020dbe7c13func_0205668cEihit(&o->unk_2cc, mid, 3, 0x1000, (u16)(mid - 1));
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc) == 0) {
        func_ov004_02233cfc(&o->unk_5c, o->unk_8e);
    }
}

extern "C" void func_ov004_02220ba8(Obj *o, s32 a) {
    u8 b;
    func_ov004_02220c78(&o->unk_8ec, &b);
    func_ov004_02220c88(o, b, 6, a);
}

extern "C" void func_ov004_02220b54(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        _ZN12Unk_020102ec13func_020103b4Eijt(o, 0, 3, 3);
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc) == 0) {
            o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        }
    }
}

extern "C" void func_ov004_02220b38(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02220b54(o);
}

extern "C" void func_ov004_02220b2c(void *p, s32 a, u32 b, s32 c, s32 d) {
    *(s32 *)p = a;
    *((u8 *)p + 4) = b;
    *(s32 *)((u8 *)p + 8) = c;
    *(s32 *)((u8 *)p + 0xc) = d;
}

extern "C" s32 func_ov004_02220ac8(Obj *o, u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s16 g) {
    Msg m;
    m.func_0200e2c0(0x36, f, g);
    u16 *p = &o->unk_81e;
    *p = *a;
    o->unk_81c = *p;
    func_ov004_02220b2c(&m.unk_0c, b, c, d, e);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02220a78(Obj *o, Unk_ov004_02220314_Msgp2 *m) {
    Unk_ov004_02220314_Pay2 *p = &m->unk_0c;
    func_02057418(&o->unk_81c, m->unk_0c.unk_00, p->unk_04, p->unk_08, o, p->unk_0c);
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x2e, 3, 0);
    func_020573cc(1, o);
    if (func_020b50e8() == 9) {
        _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4f);
    }
}

extern "C" void func_ov004_02220a74(Obj *o) {
}

extern "C" void func_ov004_02220a40(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 8)) {
        if (func_020b50e8() == 9) {
            _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x63);
        }
    }
    _ZN12Unk_020102ec13func_02010914Ev(o);
}

extern "C" void func_ov004_02220a00(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        _ZN12Unk_02006d1413func_0200bd60Esji(o, 3, 5, -1);
    }
}

extern "C" void func_ov004_022209e4(Obj *o) {
    func_ov004_02220a40(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_02220a00(o);
}

extern "C" s32 func_ov004_022209ac(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x37, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02220958(Obj *o) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x2e, 3, 0);
    u32 mid = ((Bits *)&o->unk_2d0)->mid;
    _ZN12Unk_020dbe7c13func_0205668cEihit(&o->unk_2cc, mid, 3, 0x1000, (u16)(mid - 1));
    func_020573cc(func_020573b4(), o);
    _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x52);
}

extern "C" void func_ov004_02220954(Obj *o) {
}

extern "C" void func_ov004_022208ec(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        _ZN12Unk_02006d1413func_0200bd60Esji(o, 3, 5, -1);
        u16 v;
        func_02057278(&v);
        if (v == 0x1379) {
            o->unk_8e7 = 4;
        }
        func_02057378(o);
    }
}

extern "C" void func_ov004_022208d0(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_022208ec(o);
}

extern "C" void func_ov004_022208c8(void *p, s32 a, s16 b) {
    *(s32 *)p = a;
    *(s16 *)((u8 *)p + 4) = b;
}

extern "C" s32 func_ov004_0222085c(Obj *o, s32 a, s32 b) {
    s32 h = o->unk_800;
    if (h != -1) {
        s16 x;
        s32 y;
        if (func_020b4b68(func_020b4934(), h, &y, &x) == 0) {
            return 0;
        }
        Msg m;
        m.func_0200e2c0(0x40, a, b);
        func_ov004_022208c8(&m.unk_0c, y, x);
        s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
        _ZN12Unk_0200e2c0D1Ev(&m);
        return r;
    }
    return 0;
}

extern "C" void func_ov004_02220844(Rec *r, s32 a, s32 b, s32 c, s32 d, bool e) {
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
    r->unk_0c = d;
    r->unk_10 = e;
}

extern "C" void func_ov004_02220748(Obj *o, Unk_ov004_02220314_Msgp *m) {
    _ZN12Unk_02006d1413func_0200ec30Ej(o, 3);
    Unk_ov004_02220314_Pay *pay = &m->unk_0c;
    Rec *r = &o->unk_7d0;
    V3 v;
    func_020b4aec(func_020b4934(), o->unk_800, &v, &o->unk_5c);
    s32 mode = pay->unk_00;
    s32 ang = pay->unk_04;
    if (mode == 2) {
        switch (func_02063c18(ang)) {
        case 2:
            v.z += 0x1000;
            break;
        case 0:
            v.z -= 0x1000;
            break;
        case 3:
            v.x += 0x1000;
            break;
        case 1:
            v.x -= 0x1000;
            break;
        }
    } else if (mode == 0) {
        ang = -0x8000;
        v.x = o->unk_5c.x;
        v.z = o->unk_5c.z;
    }
    bool flag = 0;
    if (func_0209c7a4(o->unk_800)) {
        flag = 1;
    }
    func_ov004_02220844(r, mode, ang, v.x, v.z, flag);
    if (flag == 0) {
        if (mode == 1) {
            _ZN12Unk_020102ec13func_02010358Eijt(o, 0x3e, 3, 0);
        } else {
            _ZN12Unk_020102ec13func_02010358Eijt(o, 0x3f, 3, 0);
        }
    } else {
        _ZN12Unk_02006d1413func_0200ec30Ej(o, 0x18);
        _ZN12Unk_020102ec13func_02010358Eijt(o, 1, 3, 0);
    }
}

extern "C" void func_ov004_02220744(Obj *o) {
}

extern "C" void func_ov004_02220728(Obj *o) {
    Rec *r = &o->unk_7d0;
    func_0200f594(o, r->unk_08, r->unk_0c, r->unk_04);
}

extern "C" void func_ov004_02220678(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (o->unk_700 == 1) {
        V3 v;
        func_020e9960(&v, &o->unk_5c, (V3 *)((u8 *)o + 0x68));
        s32 t = func_01ffcb0c(func_020e9688(&v), 0x3ae1) << 2;
        if (t <= (s32)o->unk_2d0) {
            o->unk_2dc = t;
        }
        _ZN12Unk_02006d1413func_0200f32cEv(o);
        if (t == 0) {
            _ZN12Unk_020102ec13func_020103b4Eijt(o, 0, 3, 0);
        }
    } else if (o->unk_700 != 0) {
        if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 1) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 6) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0xb) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0x10)) {
            _ZN12Unk_02006d1413func_0200f258Ev(o);
        }
    }
}

extern "C" void func_ov004_022205bc(Obj *o) {
    V3 *p = &o->unk_5c;
    u8 loc[0x30];
    _ZN12Unk_02032238C1Ev(loc);
    s32 ang = o->unk_8e;
    void *sel;
    if (_ZN12Unk_0200769413func_02007c50Ej(o, o->unk_7ec) == 0) {
        sel = loc;
    } else {
        sel = (u8 *)o + 0x7a0;
    }
    func_020309d4(sel, p, (V3 *)((u8 *)o + 0x68), ang, 0xfd7, o, 0xf);
    _ZN12Unk_02032238D1Ev(loc);
    p->y = func_02030814(0);
    Rec *r = &o->unk_7d0;
    s32 m = r->unk_00;
    if ((u32)(m - 1) <= 1) {
        Unk_ov004_02220314_V3c v(r->unk_08, p->y, r->unk_0c);
        if (func_020e9650((V3 *)&v, p) < 0x1000) {
            s32 d = FX_Div(0x1000 - func_020e9650((V3 *)&v, p)) * 6;
            if (m == 1) {
                p->y = p->y + (d >> 5);
            } else {
                p->y = p->y - (d >> 5);
            }
        }
    }
}

extern "C" void func_ov004_022203c8(Obj *o) {
    Rec *r = &o->unk_7d0;
    u8 *st = &r->unk_10;
    if (*st == 0) {
        V3 *p = &o->unk_5c;
        if (p->x == r->unk_08 && p->z == r->unk_0c && r->unk_04 == o->unk_8e) {
            if (r->unk_00 == 1) {
                func_ov004_02220368(o, 6, -1);
            } else {
                func_ov004_0222015c(o, 6, -1);
            }
        }
        s32 t = o->unk_700;
        if (t == 1) return;
        if (t == 0x3e) {
            if (((Bits *)&o->unk_2d4)->mid >= 6) {
                func_ov004_0221ec34(o, 0, 6);
            }
        }
        if (Unk_ov004_02220314_IsZero(data_021c3cc0)) return;
        if (((Bits *)&o->unk_2d4)->mid >= 5) {
            func_020b4bbc(func_020b4934(), o->unk_800);
        }
    } else {
        s32 p = func_0209c60c();
        switch (*st) {
        case 1:
            if (!func_0209c614(o->unk_800)) break;
            *st = *st + 1;
        case 2: {
            s32 c = func_0209c874(p);
            switch (c) {
            case 0:
                break;
            case 2:
                if (func_0209c86c(p) == 0) {
                    func_020b4bbc(func_020b4934(), o->unk_800);
                } else {
                    *st = 0;
                    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x3e, 3, 0);
                }
                break;
            case 1: {
                Sec *s = (Sec *)o;
                if (o) s = (Sec *)((u8 *)o + 0xec);
                _ZN12Unk_020d967013func_0203e488Ei(o, s);
                _ZN12Unk_02006d1413func_0200ec30Ej(o, 0x11);
                _ZN12Unk_020e2a3013func_020a710cEPKc((Sec *)((u8 *)o + 0xec), data_ov004_0224d4c0);
                o->unk_10a = 0x15;
                o->unk_128->unk_08 = 1;
                *st = *st + 1;
                break;
            }
            }
            break;
        }
        case 3: {
            Unk_ov004_02220314_Ptr *q = o->unk_128;
            if (q != 0) {
                if (q->unk_04 != 0) {
                    *st = *st + 1;
                }
            }
            break;
        }
        case 4: {
            Unk_ov004_02220314_Ptr *q = o->unk_128;
            if (q != 0) {
                if (q->unk_04 == 0) {
                    struct { u32 pad; V3 a; V3 b; } l;
                    V3 *v = func_0209c864(p);
                    l.a.x = v->x;
                    l.a.y = v->y;
                    l.a.z = v->z;
                    Sec *s = (Sec *)o;
                    if (o) s = (Sec *)((u8 *)o + 0xec);
                    _ZN12Unk_020d967013func_0203e47cEi(o, s);
                    _ZN12Unk_02006d1413func_0200ec1cEj(o, 0x11);
                    o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
                    l.b.x = l.a.x;
                    l.b.y = l.a.y;
                    l.b.z = l.a.z;
                    _ZN12Unk_02006d1413func_020093f4EP16Unk_02006d14_Vecjjs(o, &l.b, 0x333, 5, -1);
                }
            }
            break;
        }
        }
    }
}

extern "C" void func_ov004_022203a0(Obj *o) {
    func_ov004_02220728(o);
    func_ov004_02220678(o);
    func_ov004_022205bc(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_022203c8(o);
}

extern "C" s32 func_ov004_02220368(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x41, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_02220320(Obj *o) {
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        if (o->unk_700 != 0x3e) {
            _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x3e, 3, 0);
        }
    } else {
        _ZN12Unk_020102ec13func_020103b4Eijt(o, 0, 3, 3);
    }
}

extern "C" s32 func_ov004_02220314(Obj *o, s32 a) {
    return func_ov004_02220368(o, 9, a);
}


}  // namespace ns_02220314

namespace ns_0221fa00 {

struct Unk_ov004_0221fa00_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0221fa00_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

struct Unk_ov004_0221fa00_Pay {
    u8 unk_00;
    u8 unk_01;
};

class Unk_ov004_0221fa00_Msg {
public:
    inline Unk_ov004_0221fa00_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_0221fa00_Pay unk_0c;
    u8 pad_0e[0x1c - 0xe];
};

struct Unk_ov004_0221fa00_Msgp {
    u8 pad_00[0xc];
    Unk_ov004_0221fa00_Pay unk_0c;
};

struct Unk_ov004_0221fa00_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0221fa00_Obj {
    u8 pad_00[0x2cc];
    u32 unk_2cc;
    u32 unk_2d0;
    u32 unk_2d4;
    u8 pad_2d8[0x700 - 0x2d8];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_0221fa00_Rec unk_7d0;
    u8 pad_7d3[0x7ec - 0x7d3];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    s32 unk_800;
    u8 pad_804[0x8e5 - 0x804];
    u8 unk_8e5;
};

static inline BOOL Unk_ov004_0221fa00_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

typedef Unk_ov004_0221fa00_Obj Obj;
typedef Unk_ov004_0221fa00_V3 V3;
typedef Unk_ov004_0221fa00_Rec Rec;
typedef Unk_ov004_0221fa00_Msg Msg;
typedef Unk_ov004_0221fa00_Msgp Msgp;
typedef Unk_ov004_0221fa00_Bits Bits;

extern "C" {
extern void *data_020cbb18;
extern u8 data_021c3cc0;
extern u8 data_020e12cc[];

s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010358Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010914Ev(Obj *o);
s32 _ZN12Unk_020102ec13func_02010924Ev(Obj *o);
void _ZN12Unk_020102ec13func_0201071cEv(Obj *o);
s32 _ZN12Unk_020dbe7c13func_020565e8Ei(void *p, u32 a);
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
void func_0208fc88(u32 a, void *b, u32 c, void *d);
void func_02010cb0(u16 *p, Obj *o);
s32 _ZN12Unk_02006d1413func_0200fab8EPthhh(Obj *o, u16 *p, u32 a, u32 b, s32 c);
s32 func_02010d20(Obj *o);
void _ZN12Unk_0209865c13func_02098824Eh(s32 p, u32 a);
void _ZN12Unk_0209865c13func_020987fcEh(s32 p, u32 a);
s32 func_02097520(u32 a);
s32 _ZN12Unk_0209865c13func_02098840Ev(s32 p);
s32 _ZN12Unk_0209865c13func_02098814Ev(s32 p);
s32 func_02010c9c(Obj *o);
s32 func_02010c88(Obj *o);
void _ZN12Unk_02006d1413func_0200ed9cEv(Obj *o);
s32 _ZN12Unk_0200769413func_02007c08Ej(Obj *o, s32 a);
void _ZN12Unk_020d6df413func_0200ce98Ejjj(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203d76c(void);
void _ZN12Unk_02006d1413func_0200f258Ev(Obj *o);
s32 func_020b4934(void);
void func_020b4bbc(s32 a, s32 b);
void func_ov004_0221ec34(Obj *o, u32 a, u32 b);
void func_ov004_0221e938(Obj *o, s32 a, s32 b);

void func_ov004_0221fa00(Obj *o);
void func_ov004_0221fa98(Obj *o);
void func_ov004_0221fadc(Obj *o);
void func_ov004_0221fae0(Obj *o, Msgp *m);
s32 func_ov004_0221fb14(Obj *o, u32 a, u32 b, u32 c, s32 e);
void func_ov004_0221fb58(Obj *o);
void func_ov004_0221fb6c(Obj *o);
void func_ov004_0221fba4(Obj *o);
void func_ov004_0221fba8(Obj *o, Msgp *m);
s32 func_ov004_0221fbd8(Obj *o, u32 a, u32 b, u32 c, s32 e);
void func_ov004_0221fc1c(Obj *o);
void func_ov004_0221fc30(Obj *o);
void func_ov004_0221fcb8(Obj *o);
void func_ov004_0221fcbc(Obj *o, Msgp *m);
s32 func_ov004_0221fcec(Obj *o, u32 a, u32 b, u32 c, s32 e);
void func_ov004_0221fd30(Obj *o);
void func_ov004_0221fd54(Obj *o);
void func_ov004_0221fdb4(Obj *o);
s32 func_ov004_0221fe04(Obj *o, s32 a);
void func_ov004_0221fe10(Obj *o);
s32 func_ov004_0221fe30(Obj *o, s32 a, s32 b);
void func_ov004_0221fe68(Obj *o);
void func_ov004_0221fe8c(Obj *o);
void func_ov004_0221feec(Obj *o);
s32 func_ov004_0221ff3c(Obj *o, s32 a);
void func_ov004_0221ff48(Obj *o);
s32 func_ov004_0221ff68(Obj *o, s32 a, s32 b);
void func_ov004_0221ffa0(Obj *o);
void func_ov004_0221ffec(Obj *o);
void func_ov004_0222002c(Obj *o);
void func_ov004_0222005c(Obj *o, s32 a);
void func_ov004_022200d0(Obj *o);
s32 func_ov004_02220120(Obj *o, s32 a);
void func_ov004_0222012c(Obj *o);
s32 func_ov004_0222015c(Obj *o, s32 a, s32 b);
void func_ov004_02220194(Obj *o);
void func_ov004_022201e0(Obj *o);
void func_ov004_02220220(Obj *o);
void func_ov004_02220250(Obj *o, s32 a);
void func_ov004_022202c4(Obj *o);
}

extern "C" void func_ov004_022202c4(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 1) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 6) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0xb) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0x10)) {
        _ZN12Unk_02006d1413func_0200f258Ev(o);
    }
}

extern "C" void func_ov004_02220250(Obj *o, s32 a) {
    if (a != 0) {
        if (o->unk_700 != 0x3e) {
            _ZN12Unk_020102ec13func_02010358Eijt(o, 0x3e, 3, 0);
        }
    }
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (o->unk_700 == 0x3e) {
        if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 1) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 6) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0xb) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0x10)) {
            _ZN12Unk_02006d1413func_0200f258Ev(o);
        }
    }
}

extern "C" void func_ov004_02220220(Obj *o) {
    if (o->unk_700 == 0x3e) {
        if (((Bits *)&o->unk_2d4)->mid >= 6) {
            func_ov004_0221ec34(o, 0, 6);
        }
    }
}

extern "C" void func_ov004_022201e0(Obj *o) {
    if (Unk_ov004_0221fa00_IsZero(data_021c3cc0)) return;
    if (((Bits *)&o->unk_2d4)->mid >= 5) {
        func_020b4bbc(func_020b4934(), o->unk_800);
    }
}

extern "C" void func_ov004_02220194(Obj *o) {
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_ov004_022202c4(o);
        func_ov004_02220220(o);
        func_ov004_022201e0(o);
    } else {
        func_ov004_02220250(o, _ZN12Unk_020102ec13func_02010924Ev(o));
        func_ov004_02220220(o);
    }
}

extern "C" s32 func_ov004_0222015c(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x42, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0222012c(Obj *o) {
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc) == 0) {
        _ZN12Unk_020102ec13func_020103b4Eijt(o, 0, 3, 3);
    }
}

extern "C" s32 func_ov004_02220120(Obj *o, s32 a) {
    return func_ov004_0222015c(o, 9, a);
}

extern "C" void func_ov004_022200d0(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 1) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 6) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0xb) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0x10)) {
        _ZN12Unk_02006d1413func_0200f258Ev(o);
    }
}

extern "C" void func_ov004_0222005c(Obj *o, s32 a) {
    if (a != 0) {
        if (o->unk_700 != 0x3f) {
            _ZN12Unk_020102ec13func_02010358Eijt(o, 0x3f, 3, 0);
        }
    }
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (o->unk_700 == 0x3e) {
        if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 1) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 6) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0xb) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0x10)) {
            _ZN12Unk_02006d1413func_0200f258Ev(o);
        }
    }
}

extern "C" void func_ov004_0222002c(Obj *o) {
    if (o->unk_700 == 0x3f) {
        if (((Bits *)&o->unk_2d4)->mid >= 9) {
            func_ov004_0221ec34(o, 0, 6);
        }
    }
}

extern "C" void func_ov004_0221ffec(Obj *o) {
    if (Unk_ov004_0221fa00_IsZero(data_021c3cc0)) return;
    if (((Bits *)&o->unk_2d4)->mid >= 5) {
        func_020b4bbc(func_020b4934(), o->unk_800);
    }
}

extern "C" void func_ov004_0221ffa0(Obj *o) {
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_ov004_022200d0(o);
        func_ov004_0222002c(o);
        func_ov004_0221ffec(o);
    } else {
        func_ov004_0222005c(o, _ZN12Unk_020102ec13func_02010924Ev(o));
        func_ov004_0222002c(o);
    }
}

extern "C" s32 func_ov004_0221ff68(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x43, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221ff48(Obj *o) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x40, 0, 0);
    o->unk_8e5 = 0;
}

extern "C" s32 func_ov004_0221ff3c(Obj *o, s32 a) {
    return func_ov004_0221ff68(o, 9, a);
}

extern "C" void func_ov004_0221feec(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 1) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 6) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0xc) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0x14)) {
        _ZN12Unk_02006d1413func_0200f258Ev(o);
    }
}

extern "C" void func_ov004_0221fe8c(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        _ZN12Unk_02006d1413func_0200ed9cEv(o);
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
            func_0203d76c();
        }
    }
}

extern "C" void func_ov004_0221fe68(Obj *o) {
    func_ov004_0221feec(o);
    func_ov004_0221ec34(o, 0x1f, 6);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_0221fe8c(o);
}

extern "C" s32 func_ov004_0221fe30(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x44, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221fe10(Obj *o) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x41, 0, 0);
    o->unk_8e5 = 0;
}

extern "C" s32 func_ov004_0221fe04(Obj *o, s32 a) {
    return func_ov004_0221fe30(o, 9, a);
}

extern "C" void func_ov004_0221fdb4(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 1) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 6) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0xc) || _ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 0x14)) {
        _ZN12Unk_02006d1413func_0200f258Ev(o);
    }
}

extern "C" void func_ov004_0221fd54(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        _ZN12Unk_02006d1413func_0200ed9cEv(o);
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
            func_0203d76c();
        }
    }
}

extern "C" void func_ov004_0221fd30(Obj *o) {
    func_ov004_0221fdb4(o);
    func_ov004_0221ec34(o, 0x1f, 6);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_0221fd54(o);
}

extern "C" s32 func_ov004_0221fcec(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x7a, c, *(s16 *)&e);
    Unk_ov004_0221fa00_Pay &q = m.unk_0c;
    q.unk_00 = a;
    q.unk_01 = b;
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221fcbc(Obj *o, Msgp *m) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x6d, 3, 0);
    Unk_ov004_0221fa00_Pay *p = &m->unk_0c;
    u8 b = p->unk_01;
    Rec *r = &o->unk_7d0;
    r->unk_00 = p->unk_00;
    r->unk_01 = b;
}

extern "C" void func_ov004_0221fcb8(Obj *o) {
}

extern "C" void func_ov004_0221fc30(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        Rec *r = &o->unk_7d0;
        func_ov004_0221fbd8(o, r->unk_00, r->unk_01, 6, -1);
    } else if (((Bits *)&o->unk_2d4)->mid >= 3) {
        if (func_02010c9c(o)) {
            u16 loc[2];
            func_02010cb0(&loc[1], o);
            loc[0] = loc[1];
            s32 t = func_02010c88(o);
            if (_ZN12Unk_02006d1413func_0200fab8EPthhh(o, loc, 0, t, 0)) {
                _ZN12Unk_0209865c13func_02098824Eh(func_02010d20(o), 0);
            }
        }
    }
}

extern "C" void func_ov004_0221fc1c(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    func_ov004_0221fc30(o);
}

extern "C" s32 func_ov004_0221fbd8(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x7b, c, *(s16 *)&e);
    Unk_ov004_0221fa00_Pay &q = m.unk_0c;
    q.unk_00 = a;
    q.unk_01 = b;
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221fba8(Obj *o, Msgp *m) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x6e, 3, 0);
    Unk_ov004_0221fa00_Pay *p = &m->unk_0c;
    u8 b = p->unk_01;
    Rec *r = &o->unk_7d0;
    r->unk_00 = p->unk_00;
    r->unk_01 = b;
}

extern "C" void func_ov004_0221fba4(Obj *o) {
}

extern "C" void func_ov004_0221fb6c(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        Rec *r = &o->unk_7d0;
        func_ov004_0221fb14(o, r->unk_00, r->unk_01, 6, -1);
    }
}

extern "C" void func_ov004_0221fb58(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    func_ov004_0221fb6c(o);
}

extern "C" s32 func_ov004_0221fb14(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x7c, c, *(s16 *)&e);
    Unk_ov004_0221fa00_Pay &q = m.unk_0c;
    q.unk_00 = a;
    q.unk_01 = b;
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221fae0(Obj *o, Msgp *m) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x6f, 3, 0);
    Unk_ov004_0221fa00_Pay *p = &m->unk_0c;
    u8 b = p->unk_01;
    Rec *r = &o->unk_7d0;
    r->unk_00 = p->unk_00;
    r->unk_01 = b;
    r->unk_02 = 0;
}

extern "C" void func_ov004_0221fadc(Obj *o) {
}

extern "C" void func_ov004_0221fa98(Obj *o) {
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        s32 r4 = func_02097520(o->unk_7fc);
        s32 r6 = _ZN12Unk_0209865c13func_02098840Ev(r4);
        s32 r2 = _ZN12Unk_0209865c13func_02098814Ev(r4);
        func_ov004_0221e938(o, r6, r2);
    }
}

extern "C" void func_ov004_0221fa00(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(&o->unk_2cc, 10)) {
        func_0208fc88(0x60, (u8 *)o + 0x6dc, 0, data_020e12cc);
    }
    if (((Bits *)&o->unk_2d4)->mid >= 0xb) {
        Rec *r = &o->unk_7d0;
        if (r->unk_02 == 0) {
            u16 loc[2];
            func_02010cb0(&loc[1], o);
            loc[0] = loc[1];
            if (_ZN12Unk_02006d1413func_0200fab8EPthhh(o, loc, r->unk_00, r->unk_01, 0)) {
                s32 p = func_02010d20(o);
                _ZN12Unk_0209865c13func_02098824Eh(p, r->unk_00);
                _ZN12Unk_0209865c13func_020987fcEh(p, r->unk_01);
                r->unk_02 = 1;
            }
        }
    }
}


}  // namespace ns_0221fa00

namespace ns_0221f0b8 {

struct Unk_ov004_0221f0b8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0221f0b8_Rec {
    Unk_ov004_0221f0b8_V3 unk_00;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
};

class Unk_ov004_0221f0b8_Msg {
public:
    inline Unk_ov004_0221f0b8_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_0221f0b8_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_0221f0b8_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_0221f0b8_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0x2cc - 0x9c];
    s32 unk_2cc;
    s32 unk_2d0;
    u8 pad_2d4[0x2dc - 0x2d4];
    s32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_0221f0b8_Rec unk_7d0;
    u8 pad_7e8[0x7ec - 0x7e8];
    s32 unk_7ec;
    u8 pad_7f0[0x7f4 - 0x7f0];
    s32 unk_7f4;
    s32 unk_7f8;
    u32 unk_7fc;
    s32 unk_800;
    u8 pad_804[0x8ec - 0x804];
    u32 unk_8ec[4];
};

typedef Unk_ov004_0221f0b8_Obj Obj;
typedef Unk_ov004_0221f0b8_V3 V3;
typedef Unk_ov004_0221f0b8_Rec Rec;
typedef Unk_ov004_0221f0b8_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov004_0224d4a4[];
extern u8 data_ov004_0224d4b0[];
extern u8 data_ov004_0224d4b4[];

s32 func_01ffcb0c(s32 a, s32 b);
void _ZN12Unk_020102ec13func_02010380Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010358Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010a34EPj(Obj *o, u8 *a);
s32 _ZN12Unk_020102ec13func_02010914Ev(Obj *o);
void _ZN12Unk_020102ec13func_020109acEv(Obj *o);
void _ZN12Unk_020102ec13func_0201071cEv(Obj *o);
void _ZN12Unk_02006d1413func_0200ec1cEj(Obj *o, u32 a);
void _ZN12Unk_02006d1413func_0200ec30Ej(Obj *o, u32 a);
void _ZN12Unk_02006d1413func_0200ecdcEj(Obj *o, u32 a);
void _ZN12Unk_020d6df413func_0200ce98Ejjj(Obj *o, s32 a, s32 b, s32 c);
s32 _ZN12Unk_0200769413func_02007c08Ej(Obj *o, s32 a);
s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
s32 func_0203d76c();
s32 func_020b0ef4();
void func_020b0e60();
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
s32 func_020b52f8();
s32 func_020b51a4();
s32 _ZN12Unk_02006d1413func_0200e7c0Ev(Obj *o);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
s32 _ZN12Unk_020dbda413func_02053f20Ev(void *p);
s32 _ZN12Unk_02006d1413func_0200f32cEv(Obj *o);
s32 _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
s32 _ZN12Unk_020dbe7c13func_0205668cEihit(void *p, u32 a, u32 b, u32 c, u32 d);
s32 _ZN12Unk_02006d1413func_0200ef08Ev(Obj *o);
s32 func_0200f594(Obj *o, s32 a, s32 b, s32 c);
void func_0200f45c(V3 *out, Obj *o);
s32 _ZN12Unk_020d6df413func_0200d640Ev(Obj *o);
s32 _ZN12Unk_020d6df413func_0200d5fcEv(Obj *o);
s32 func_02063c18(s16 a);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);

s32 func_ov004_0221e7a8(Obj *o, V3 *tgt, s32 *out, s32 *lim);
s32 func_ov004_022217c4(Obj *o, s32 a, s32 b, s32 c);
s32 func_ov004_02221218(Obj *o, s32 a, s32 b);
s32 func_ov004_0222a2c0();
s32 func_ov004_022296ac();
s32 func_ov004_02229660();
s32 func_ov004_022296f8();
void func_ov004_0221fa00(Obj *o);

void func_ov004_0221f1d0(void *a, s32 *b, s32 *c);
void func_ov004_0221f1d8(void *a, s32 b, s32 c);
void func_ov004_0221f1e0(Rec *r, V3 v, s32 a, s32 b, u8 c);
s32 func_ov004_0221f204(Obj *o, V3 *v, u32 a, u32 b);
void func_ov004_0221f244(V3 *d, V3 v);
void func_ov004_0221f280(Obj *o);
void func_ov004_0221f2e8(Obj *o);
void func_ov004_0221f370(Obj *o);
void func_ov004_0221f5c0(void *a, s32 *b, s32 *c);
void func_ov004_0221f5c8(void *a, s32 b, s32 c);
void func_ov004_0221f5d0(Rec *r, V3 v, s32 a, u32 b, u8 c);
s32 func_ov004_0221f5f4(Obj *o, V3 *v, u32 a, u32 b);
void func_ov004_0221f634(V3 *d, V3 v);
void func_ov004_0221f65c(Obj *o);
s32 func_ov004_0221f730(Obj *o);
s32 func_ov004_0221f7c4(Obj *o, u32 a, u32 b);
s32 func_ov004_0221f840(Obj *o, u32 a, u32 b);
void func_ov004_0221f898(Obj *o);
void func_ov004_0221f8c0(Obj *o);
s32 func_ov004_0221f96c(Obj *o, u32 a, u32 b);
void func_ov004_0221f958(V3 *d, V3 v);
void func_ov004_0221f9b8(Obj *o);
}

extern "C" void func_ov004_0221f9b8(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        if (_ZN12Unk_020d6df413func_0200d640Ev(o) > 0) {
            s32 t = _ZN12Unk_020d6df413func_0200d5fcEv(o) - o->unk_8e;
            if (func_02063c18((s16)t) == 0) {
                func_ov004_02221218(o, 6, -1);
            }
        }
    }
}

extern "C" void func_ov004_0221f9a4(Obj *o) {
    func_ov004_0221fa00(o);
    func_ov004_0221f9b8(o);
}

extern "C" s32 func_ov004_0221f96c(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x7d, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221f958(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" void func_ov004_0221f914(Obj *o) {
    V3 v;
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x78, 3, 0);
    func_0200f45c(&v, o);
    v.z = v.z + 0x2000;
    func_ov004_0221f958((V3 *)&o->unk_7d0, v);
    func_ov004_0222a2c0();
    func_ov004_022296f8();
}

extern "C" void func_ov004_0221f908(Obj *o, u32 a) {
    func_ov004_0221f96c(o, 6, a);
}

extern "C" void func_ov004_0221f8c0(Obj *o) {
    Rec *r4 = &o->unk_7d0;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        func_0200f594(o, r4->unk_00.x, r4->unk_00.z, -0x8000);
    } else {
        _ZN12Unk_02006d1413func_0200ef08Ev(o);
    }
}

extern "C" void func_ov004_0221f898(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        func_ov004_0221f840(o, 6, -1);
    }
}

extern "C" void func_ov004_0221f878(Obj *o) {
    func_ov004_0221f8c0(o);
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_0221f898(o);
}

extern "C" s32 func_ov004_0221f840(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x7e, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221f824(Obj *o) {
    _ZN12Unk_020102ec13func_020103b4Eijt(o, 0x79, 3, 0);
    func_ov004_0222a2c0();
    func_ov004_02229660();
}

extern "C" void func_ov004_0221f818(Obj *o, u32 a) {
    func_ov004_0221f840(o, 6, a);
}

extern "C" void func_ov004_0221f7fc(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    _ZN12Unk_02006d1413func_0200ef08Ev(o);
}

extern "C" s32 func_ov004_0221f7c4(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x7f, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221f77c(Obj *o) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x78, 3, 0);
    u32 t = (u32)(o->unk_2d0 << 4) >> 16;
    _ZN12Unk_020dbe7c13func_0205668cEihit(&o->unk_2cc, t, 3, 0x1000, (u16)(t - 1));
    func_ov004_0222a2c0();
    func_ov004_022296ac();
}

extern "C" void func_ov004_0221f770(Obj *o, u32 a) {
    func_ov004_0221f7c4(o, 6, a);
}

extern "C" s32 func_ov004_0221f730(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 1, -1);
    }
}

extern "C" void func_ov004_0221f714(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_0221f730(o);
}

extern "C" s32 func_ov004_0221f6dc(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8a, a, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221f6c8(Obj *o) {
    _ZN12Unk_020102ec13func_02010358Eijt(o, 0x95, 3, 0);
}

extern "C" void func_ov004_0221f6c4() {
}

extern "C" void func_ov004_0221f65c(Obj *o) {
    if (_ZN12Unk_020dbe7c13func_02056654Ev(&o->unk_2cc)) {
        switch (o->unk_700) {
        case 0x95:
            _ZN12Unk_020102ec13func_02010358Eijt(o, 0x96, 0, 0);
            break;
        case 0x96:
            _ZN12Unk_020102ec13func_02010358Eijt(o, 0x97, 0, 0);
            break;
        case 0x97:
            break;
        case 0x98:
            func_ov004_022217c4(o, 0, 6, -1);
            break;
        }
    }
}

extern "C" void func_ov004_0221f648(Obj *o) {
    _ZN12Unk_020102ec13func_02010914Ev(o);
    func_ov004_0221f65c(o);
}

extern "C" void func_ov004_0221f634(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" s32 func_ov004_0221f5f4(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8b, a, b);
    func_ov004_0221f634(&m.unk_0c, *v);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221f5d0(Rec *r, V3 v, s32 a, u32 b, u8 c) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = 0;
    r->unk_10 = a;
    r->unk_14 = *(u8 *)&b;
    r->unk_15 = c;
}

extern "C" void func_ov004_0221f5c8(void *a, s32 b, s32 c) {
    func_02076a6c(a, b, c);
}

extern "C" void func_ov004_0221f5c0(void *a, s32 *b, s32 *c) {
    func_02076a2c(a, b, c);
}

extern "C" void func_ov004_0221f474(Obj *o, Obj *arg) {
    V3 c;
    V3 *r6 = (V3 *)((u8 *)arg + 0xc);
    Rec *r0c = &o->unk_7d0;
    _ZN12Unk_020102ec13func_020103b4Eijt(o, 1, 0, 0);
    s32 r7 = 0;
    o->unk_2dc = r7;
    u32 r5 = r7;
    s32 mode = func_020b0ef4();
    o->unk_7f4 = 1;
    switch (mode) {
    case 2:
        if ((_ZN12Unk_02006d1413func_0200e7c0Ev(o) && func_020b52f8()) || func_020b51a4()) {
            r7 = 0x14;
            r5 = 0x4ca;
            o->unk_7f4 = 0;
        } else {
            r5 = 0x4cb;
        }
        break;
    case 1:
        r5 = 0x4d2;
        r7 = 0x14;
        o->unk_7f4 = 0;
        break;
    case 0:
    case 3:
        break;
    }
    void *r14 = &o->unk_8ec;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        V3 *pv = &o->unk_5c;
        c.x = pv->x;
        c.y = pv->y;
        c.z = pv->z;
        func_ov004_0221f5c8(r14, c.x, c.z);
        o->unk_5c.z = o->unk_5c.z + 0x6000;
    } else {
        if (r5 != 0) {
            _ZN12Unk_02006d1413func_0200ecdcEj(o, r5);
            if (r5 == 0x4cb) func_020b0e60();
        }
        c.x = r6->x;
        c.y = r6->y;
        c.z = r6->z;
        o->unk_5c.z = c.z + 0x6000;
    }
    func_ov004_0221f5d0(r0c, c, 0x400, r7, (u8)mode);
    if (o->unk_7f4 == 1) {
        _ZN12Unk_020102ec13func_02010a34EPj(o, data_ov004_0224d4b4);
        r0c->unk_0c = 0x400;
    }
    _ZN12Unk_02006d1413func_0200ec30Ej(o, 5);
}

extern "C" void func_ov004_0221f448(Obj *o, u32 a) {
    V3 v;
    func_ov004_0221f5c0(&o->unk_8ec, &v.x, &v.z);
    func_ov004_0221f5f4(o, &v, 6, a);
}

extern "C" void func_ov004_0221f370(Obj *o) {
    Rec *r4 = &o->unk_7d0;
    V3 v;
    s32 lim;
    u8 *p = &r4->unk_14;
    if (r4->unk_14 != 0) {
        *p = r4->unk_14 - 1;
        if (r4->unk_15 == 2) {
            if (*p != 0) return;
            if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc) == 0) {
                func_020b0e60();
                _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4cb);
            }
            o->unk_7f4 = 1;
            _ZN12Unk_020102ec13func_02010a34EPj(o, data_ov004_0224d4b0);
            r4->unk_0c = 0x400;
        } else {
            u32 c = *p;
            if (c > 0xa) return;
            if (c == 0xa) {
                o->unk_7f4 = 1;
                _ZN12Unk_020102ec13func_02010a34EPj(o, data_ov004_0224d4a4);
                r4->unk_0c = 0x400;
            } else if (c == 0) {
                if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc) == 0) {
                    _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4d3);
                }
            }
        }
    }
    lim = r4->unk_10;
    v.x = r4->unk_00.x;
    v.y = r4->unk_00.y;
    v.z = r4->unk_00.z;
    func_ov004_0221e7a8(o, &v, &r4->unk_0c, &lim);
}

extern "C" void func_ov004_0221f2e8(Obj *o) {
    s32 r4 = o->unk_98;
    s32 t = func_01ffcb0c(r4, 0x3ae1);
    if (t < 0x800) t = 0x800;
    if (t <= o->unk_2d0) o->unk_2dc = t;
    if (r4 > 0x53f) {
        if (o->unk_700 != 2) _ZN12Unk_020102ec13func_02010380Eijt(o, 2, 3, 0);
    } else {
        if (o->unk_700 != 1) _ZN12Unk_020102ec13func_02010380Eijt(o, 1, 3, 0);
    }
    _ZN12Unk_020dbda413func_02053f20Ev((u8 *)o + 0x230);
    _ZN12Unk_02006d1413func_0200f32cEv(o);
}

extern "C" void func_ov004_0221f280(Obj *o) {
    if (o->unk_98 == 0 && o->unk_7f4 == 1) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 5, -1);
        _ZN12Unk_02006d1413func_0200ec1cEj(o, 5);
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
            func_0203d76c();
        }
    }
}

extern "C" void func_ov004_0221f258(Obj *o) {
    func_ov004_0221f370(o);
    func_ov004_0221f2e8(o);
    _ZN12Unk_020102ec13func_020109acEv(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_0221f280(o);
}

extern "C" void func_ov004_0221f244(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" s32 func_ov004_0221f204(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8c, a, b);
    func_ov004_0221f244(&m.unk_0c, *v);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221f1e0(Rec *r, V3 v, s32 a, s32 b, u8 c) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = a;
    r->unk_10 = b;
    r->unk_14 = 0;
    r->unk_15 = c;
}

extern "C" void func_ov004_0221f1d8(void *a, s32 b, s32 c) {
    func_02076a6c(a, b, c);
}

extern "C" void func_ov004_0221f1d0(void *a, s32 *b, s32 *c) {
    func_02076a2c(a, b, c);
}

extern "C" void func_ov004_0221f0e4(Obj *o, Obj *arg) {
    V3 c;
    V3 *r6 = (V3 *)((u8 *)arg + 0xc);
    if (o->unk_700 != 1) _ZN12Unk_020102ec13func_020103b4Eijt(o, 1, 3, 0);
    u32 r5 = 0;
    s32 r7 = func_020b0ef4();
    switch (r7) {
    case 2:
        r5 = 0x4cb;
        break;
    case 1:
        r5 = 0x4d2;
        break;
    case 0:
    case 3:
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
            func_020b4bbc(func_020b4934(), o->unk_800);
        }
        break;
    }
    if (r5 != 0) {
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc) == 0) {
            _ZN12Unk_02006d1413func_0200ecdcEj(o, r5);
            if (r5 == 0x4cb) func_020b0e60();
        }
    }
    c.x = r6->x;
    c.y = r6->y;
    c.z = r6->z;
    func_ov004_0221f1e0(&o->unk_7d0, c, o->unk_98, 0x400, (u8)r7);
    func_ov004_0221f1d8(&o->unk_8ec, c.x, c.z);
}

extern "C" void func_ov004_0221f0b8(Obj *o, u32 a) {
    V3 v;
    func_ov004_0221f1d0(&o->unk_8ec, &v.x, &v.z);
    func_ov004_0221f204(o, &v, 6, a);
}


}  // namespace ns_0221f0b8

namespace ns_0221e7a8 {

struct Unk_ov004_0221e7a8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0221e7a8_Rec {
    Unk_ov004_0221e7a8_V3 unk_00;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
};

struct Unk_ov004_0221e7a8_Pair {
    s32 a, b;
};

class Unk_ov004_0221e7a8_Msg {
public:
    inline Unk_ov004_0221e7a8_Msg() { _ZN12Unk_0200e2c0C1Ev(this); }
    inline void func_0200e2c0(u32 a, u32 b, u32 c) { _ZN12Unk_0200e2c013func_0200e2c0Eiis(this, a, b, c); }
    u8 pad_00[0xc];
    Unk_ov004_0221e7a8_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_0221e7a8_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_0221e7a8_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0x13d - 0x9c];
    u8 unk_13d;
    u8 pad_13e[0x144 - 0x13e];
    u8 unk_144;
    u8 pad_145[0x154 - 0x145];
    s32 unk_154;
    s32 unk_158;
    s32 unk_15c;
    u8 pad_160[0x169 - 0x160];
    u8 unk_169;
    u8 pad_16a[0x16c - 0x16a];
    s32 unk_16c;
    u8 pad_170[0x2dc - 0x170];
    s32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_0221e7a8_Rec unk_7d0;
    u8 pad_7e8[0x7fc - 0x7e8];
    u32 unk_7fc;
    s32 unk_800;
    u8 pad_804[0x81c - 0x804];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x8e5 - 0x820];
    u8 unk_8e5;
    u8 pad_8e6[0x8ec - 0x8e6];
    u32 unk_8ec[4];
};

typedef Unk_ov004_0221e7a8_Obj Obj;
typedef Unk_ov004_0221e7a8_V3 V3;
typedef Unk_ov004_0221e7a8_Pair Pair;
typedef Unk_ov004_0221e7a8_Rec Rec;
typedef Unk_ov004_0221e7a8_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov004_0224013c[];
extern u8 data_ov004_0224d4ac[];
extern u8 data_ov004_0224d4a8[];
extern s16 data_02135f44[];
extern void *data_021c47c4;

s32 func_020e9688(V3 *v);
s32 func_020e9650(void *a, void *b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void VEC_Add(void *a, void *b, void *c);
void func_01ffd070(void *a, void *b, void *c);
void func_02010e68(s32 *p, s32 a, s32 b, s32 c, s32 d);
s32 func_02010d50(s32 a, s32 b);
s32 func_02010d68(s32 a, s32 b);
void func_02010d98(void *a, s32 b);
void _ZN12Unk_020102ec13func_02010a58EPs(Obj *o, s16 *a);
void _ZN12Unk_020102ec13func_02010a34EPj(Obj *o, s32 *a);
void _ZN12Unk_020102ec13func_020103b4Eijt(Obj *o, s32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_020109acEv(Obj *o);
void _ZN12Unk_020102ec13func_0201071cEv(Obj *o);
void _ZN12Unk_02006d1413func_0200ec30Ej(Obj *o, u32 a);
void _ZN12Unk_02006d1413func_0200ecdcEj(Obj *o, u32 a);
s32 _ZN12Unk_02006d1413func_0200f5b0Ev(Obj *o);
s32 _ZN12Unk_02006d1413func_0200f9d4Ei(Obj *o, s32 a);
s32 func_02063c18(s16 a);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Obj *o, Msg *m);
s32 _ZN12Unk_020cbb1813func_02072e44Ev(void *g);
void _ZN12Unk_020cbb1813func_020728d4Ev(void *g);
void _ZN12Unk_020cbb1813func_020728a4EPhj(void *g, u8 *b, u32 n);
void _ZN12Unk_020cbb1813func_02072824Ejj(void *g, u32 a, u32 b);
s32 _ZN12Unk_020cbb1813func_020729bcEj(void *g, u32 a);
void func_020954b8(u8 *p, s32 a, s32 b);
s32 func_020b52f8();
s32 func_020b0f54();
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
s32 func_02098ffc();
s32 func_0204eba0(void *a, V3 *v, u32 b);
s32 func_0204b300(s32 a);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
s32 _ZN12Unk_02006d1413func_0200b76cE17Unk_0200b750_Pairijs(Obj *o, Pair *p, s32 a, u32 b, s32 c);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
s32 _ZN12Unk_02006d1413func_0200fa2cEPij(Obj *o, V3 *v, u32 a);
s32 _ZN12Unk_02006d1413func_0200f8f8Eiii(Obj *o, V3 *v, s32 a, s32 b);
s32 _ZN12Unk_02006d1413func_0200f6d4Eii(Obj *o, V3 *v, s32 a);

void func_ov004_0221f2e8(Obj *o);
void func_ov004_0221f280(Obj *o);
s32 func_ov004_022354d8();
s32 _ZN18Unk_ov004_022351bc19func_ov004_022354a4Ej(s32 a, s32 b);
V3 *_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(s32 a);
s32 _ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(s32 a);
s32 func_ov004_02222e5c(Obj *o, s32 x, s32 z, s32 a, s32 b, s32 c);
s32 func_ov004_02234588(u32 *a, u32 *b, u16 *c, u16 *d);
s32 func_ov004_02234550(s32 a);
s32 func_ov004_022235ec(Obj *o, Pair *p, s32 a, u32 b, s32 c);

void func_ov004_0221e7a8(Obj *o, V3 *tgt, s32 *out, s32 *lim);
void func_ov004_0221ec8c(Obj *o);
void func_ov004_0221ee90(Obj *o);
void func_ov004_0221f08c(Obj *o);
void func_ov004_0221edf4(void *a, s32 *b, s32 *c);
void func_ov004_0221edfc(void *a, s32 b, s32 c);
void func_ov004_0221ee04(Rec *r, V3 v, s32 w);
s32 func_ov004_0221ee1c(Obj *o, V3 *v, u32 a, u32 b);
void func_ov004_0221ee5c(V3 *d, V3 v);
void func_ov004_0221ef78(void *a, s32 *b, s32 *c);
void func_ov004_0221ef80(void *a, s32 b, s32 c);
void func_ov004_0221ef88(Rec *r, V3 v, s32 a, s32 b);
s32 func_ov004_0221efa4(Obj *o, V3 *v, u32 a, u32 b);
void func_ov004_0221efe4(V3 *d, V3 v);
}

extern "C" void func_ov004_0221f08c(Obj *o) {
    Rec *r = &o->unk_7d0;
    s32 lim = r->unk_10;
    V3 v;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    func_ov004_0221e7a8(o, &v, &r->unk_0c, &lim);
}

extern "C" void func_ov004_0221eff8(Obj *o) {
    func_ov004_0221f08c(o);
    func_ov004_0221f2e8(o);
    _ZN12Unk_020102ec13func_020109acEv(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    Rec *q = &o->unk_7d0;
    u8 *r4 = &q->unk_14;
    u8 r6 = q->unk_15;
    void *r7 = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_020729bcEj(r7, o->unk_7fc) == 0 && *r4 == 0xf && r6 == 1) {
        _ZN12Unk_02006d1413func_0200ecdcEj(o, 0x4d3);
    }
    if (_ZN12Unk_020cbb1813func_020729bcEj(r7, o->unk_7fc) != 0) {
        if ((u32)(r6 - 1) <= 1 && *r4 == 0xa) {
            func_020b4bbc(func_020b4934(), o->unk_800);
        }
    }
    *r4 = *r4 + 1;
}

extern "C" void func_ov004_0221efe4(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" s32 func_ov004_0221efa4(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8d, a, b);
    func_ov004_0221efe4(&m.unk_0c, *v);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221ef88(Rec *r, V3 v, s32 a, s32 b) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = a;
    r->unk_10 = b;
}

extern "C" void func_ov004_0221ef80(void *a, s32 b, s32 c) {
    func_02076a6c(a, b, c);
}

extern "C" void func_ov004_0221ef78(void *a, s32 *b, s32 *c) {
    func_02076a2c(a, b, c);
}

extern "C" void func_ov004_0221ef14(Obj *o, Obj *arg) {
    V3 c;
    V3 *r4 = (V3 *)((u8 *)arg + 0xc);
    if (o->unk_700 != 1) _ZN12Unk_020102ec13func_020103b4Eijt(o, 1, 3, 0);
    c.x = r4->x;
    c.y = r4->y;
    c.z = r4->z;
    func_ov004_0221ef88(&o->unk_7d0, c, o->unk_98, 0x400);
    func_ov004_0221ef80(&o->unk_8ec, c.x, c.z);
}

extern "C" void func_ov004_0221eebc(Obj *o, u32 a) {
    V3 v;
    func_ov004_0221ef78(&o->unk_8ec, &v.x, &v.z);
    if ((v.x & 0x80000) != 0) v.x |= 0xfff00000;
    if ((v.z & 0x80000) != 0) v.z |= 0xfff00000;
    func_ov004_0221efa4(o, &v, 6, a);
}

extern "C" void func_ov004_0221ee90(Obj *o) {
    Rec *r = &o->unk_7d0;
    s32 lim = r->unk_10;
    V3 v;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    func_ov004_0221e7a8(o, &v, &r->unk_0c, &lim);
}

extern "C" void func_ov004_0221ee70(Obj *o) {
    func_ov004_0221ee90(o);
    func_ov004_0221f2e8(o);
    _ZN12Unk_020102ec13func_020109acEv(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
}

extern "C" void func_ov004_0221ee5c(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" s32 func_ov004_0221ee1c(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8e, a, b);
    func_ov004_0221ee5c(&m.unk_0c, *v);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(o, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

extern "C" void func_ov004_0221ee04(Rec *r, V3 v, s32 w) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = w;
    r->unk_10 = w;
}

extern "C" void func_ov004_0221edfc(void *a, s32 b, s32 c) {
    func_02076a6c(a, b, c);
}

extern "C" void func_ov004_0221edf4(void *a, s32 *b, s32 *c) {
    func_02076a2c(a, b, c);
}

extern "C" void func_ov004_0221ece4(Obj *o, Obj *arg) {
    V3 cur;
    V3 w;
    V3 tmp;
    V3 *r5 = (V3 *)((u8 *)arg + 0xc);
    Rec *r6 = &o->unk_7d0;
    _ZN12Unk_020102ec13func_020103b4Eijt(o, 1, 0, 0);
    o->unk_2dc = 0;
    w.x = 0;
    w.y = 0;
    w.z = 0;
    void *r7 = &o->unk_8ec;
    switch (func_02063c18(o->unk_8e)) {
    case 2:
        w.z = w.z + 0x6000;
        break;
    case 0:
        w.z = w.z - 0x6000;
        break;
    case 3:
        w.x = w.x + 0x6000;
        break;
    case 1:
        w.x = w.x - 0x6000;
        break;
    }
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, o->unk_7fc)) {
        V3 *pv = &o->unk_5c;
        cur.x = pv->x;
        cur.y = pv->y;
        cur.z = pv->z;
        func_ov004_0221edfc(r7, cur.x, cur.z);
        VEC_Add(&o->unk_5c, &w, &o->unk_5c);
    } else {
        cur.x = r5->x;
        cur.y = r5->y;
        cur.z = r5->z;
        func_01ffd070(&tmp, &cur, &w);
        V3 *pv = &o->unk_5c;
        pv->x = tmp.x;
        pv->y = tmp.y;
        pv->z = tmp.z;
    }
    func_ov004_0221ee04(r6, cur, 0x400);
    _ZN12Unk_020102ec13func_02010a34EPj(o, (s32 *)data_ov004_0224d4a8);
    _ZN12Unk_02006d1413func_0200ec30Ej(o, 5);
}

extern "C" void func_ov004_0221ecb8(Obj *o, u32 a) {
    V3 v;
    func_ov004_0221edf4(&o->unk_8ec, &v.x, &v.z);
    func_ov004_0221ee1c(o, &v, 6, a);
}

extern "C" void func_ov004_0221ec8c(Obj *o) {
    Rec *r = &o->unk_7d0;
    s32 lim = r->unk_10;
    V3 v;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    func_ov004_0221e7a8(o, &v, &r->unk_0c, &lim);
}

extern "C" void func_ov004_0221ec64(Obj *o) {
    func_ov004_0221ec8c(o);
    func_ov004_0221f2e8(o);
    _ZN12Unk_020102ec13func_020109acEv(o);
    _ZN12Unk_020102ec13func_0201071cEv(o);
    func_ov004_0221f280(o);
}

extern "C" void func_ov004_0221ec34(Obj *o, u32 lim, u32 step) {
    u8 *p = &o->unk_8e5;
    u32 c = *p;
    if (c == lim) return;
    if (c < lim) {
        *p = c + step;
        if (*p > lim) *p = lim;
    } else {
        *p = c - step;
        if (*(s8 *)p < (s32)lim) *p = lim;
    }
}

extern "C" s32 func_ov004_0221e980(Obj *o, s32 param) {
    s32 o1 = 0, o2 = 0;
    u32 u, v;
    Pair pa, pb, pc, pd, pe, pf;
    V3 tgt, tmp1, tmp2;
    s32 r5;
    void *r6;
    if (func_020b52f8() == 0) goto fail;
    if (o->unk_7fc != 0) goto fail;
    r5 = func_ov004_02234588(&u, &v, &o->unk_81c, &o->unk_81e);
    if (r5 >= 0) {
        if (r5 == o->unk_169 || o->unk_16c == 1) {
            if (func_ov004_02234550(r5) == 0) {
                pa.a = 0;
                pa.b = 0;
                _ZN12Unk_02006d1413func_0200b76cE17Unk_0200b750_Pairijs(o, &pa, r5, 6, -1);
            } else {
                pb.a = (u8)u;
                pb.b = (u8)v;
                func_ov004_022235ec(o, &pb, r5, 6, -1);
            }
            return 1;
        }
    }
    r6 = data_021c47c4;
    if (r5 == -2) {
        if (o->unk_16c == 1) {
            func_0200f3ec(&tmp1, o, &o->unk_5c, &o->unk_8e, (u32)(data_ov004_0224013c + 12));
            tgt.x = tmp1.x;
            tgt.y = tmp1.y;
            tgt.z = tmp1.z;
        } else {
            tgt.x = o->unk_154;
            tgt.y = o->unk_158;
            tgt.z = o->unk_15c;
            if (_ZN12Unk_02006d1413func_0200fa2cEPij(o, &tgt, 0xe) == 0) goto second;
        }
        r5 = func_0204eba0(r6, &tgt, 1);
        if (func_02098ffc() == -1) {
            if (r5 == 0) goto second;
            if (func_0204b300(r5) == 0) goto second;
            func_0204ee10(&o1, &o2, &tgt);
            pc.a = o1;
            pc.b = o2;
            _ZN12Unk_02006d1413func_0200b76cE17Unk_0200b750_Pairijs(o, &pc, -1, 6, -1);
            return 1;
        }
        if (r5 == 0) goto second;
        if (func_0204b300(r5) == 0) goto second;
        if ((u32)func_020b0f54() <= 1) {
            if (_ZN12Unk_02006d1413func_0200f8f8Eiii(o, &tgt, 0, param) == 0) goto second;
            if (_ZN12Unk_02006d1413func_0200f6d4Eii(o, &tgt, 1) == 0) goto second;
            return 1;
        }
        func_0204ee10(&o1, &o2, &tgt);
        pd.a = o1;
        pd.b = o2;
        _ZN12Unk_02006d1413func_0200b76cE17Unk_0200b750_Pairijs(o, &pd, -3, 6, -1);
        return 1;
    }
second:
    if (o->unk_16c == 1) {
        func_0200f3ec(&tmp2, o, &o->unk_5c, &o->unk_8e, (u32)data_ov004_0224d4ac);
        tgt.x = tmp2.x;
        tgt.y = tmp2.y;
        tgt.z = tmp2.z;
    } else {
        tgt.x = o->unk_154;
        tgt.y = o->unk_158;
        tgt.z = o->unk_15c;
        if (_ZN12Unk_02006d1413func_0200fa2cEPij(o, &tgt, 0xc) == 0) return 0;
    }
    {
        s32 q = func_0204eba0(r6, &tgt, 0);
        if (q == 0) goto fail;
        if (func_0204b300(q) == 0) goto fail;
    }
    if (func_02098ffc() == -1) {
        func_0204ee10(&o1, &o2, &tgt);
        pe.a = o1;
        pe.b = o2;
        _ZN12Unk_02006d1413func_0200b76cE17Unk_0200b750_Pairijs(o, &pe, -1, 6, -1);
        return 1;
    }
    if ((u32)func_020b0f54() <= 1) {
        if (_ZN12Unk_02006d1413func_0200f8f8Eiii(o, &tgt, 0, param) == 0) goto fail;
        if (_ZN12Unk_02006d1413func_0200f6d4Eii(o, &tgt, 0) == 0) goto fail;
        return 1;
    }
    func_0204ee10(&o1, &o2, &tgt);
    pf.a = o1;
    pf.b = o2;
    _ZN12Unk_02006d1413func_0200b76cE17Unk_0200b750_Pairijs(o, &pf, -3, 6, -1);
    return 1;
fail:
    return 0;
}

extern "C" void func_ov004_0221e938(void *unused, s32 a, s32 b) {
    u8 buf[4];
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        func_020954b8(buf, a, b);
        void *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, buf, 1);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x2c, 4);
    }
}

extern "C" s32 func_ov004_0221e8c0(Obj *o) {
    if (o->unk_13d != 0) {
        s32 a = func_ov004_022354d8();
        s32 r4 = _ZN18Unk_ov004_022351bc19func_ov004_022354a4Ej(a, 0);
        if (r4 == 0) return 0;
        volatile V3 loc;
        V3 *p = _ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(r4);
        loc.x = p->x;
        loc.y = p->y;
        loc.z = p->z;
        return func_ov004_02222e5c(o, loc.x, loc.z, _ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(r4), 5, -1);
    }
    if (o->unk_144 != 0) {
        return _ZN12Unk_02006d1413func_0200f9d4Ei(o, _ZN12Unk_02006d1413func_0200f5b0Ev(o));
    }
    return 0;
}

extern "C" void func_ov004_0221e7a8(Obj *o, V3 *tgt, s32 *out, s32 *lim) {
    V3 d;
    V3 saved;
    s32 t;
    s32 ang;
    s16 h;
    s32 v;
    V3 *pv = &o->unk_5c;
    saved = *pv;
    d.x = tgt->x - o->unk_5c.x;
    d.z = tgt->z - o->unk_5c.z;
    if (func_020e9688(&d) < 0x1000) {
        if (*out <= *lim) {
            func_02010e68(&o->unk_5c.x, tgt->x, 0x800, *lim, 0x31);
            func_02010e68(&o->unk_5c.z, tgt->z, 0x800, *lim, 0x31);
            if (tgt->x == o->unk_5c.x && tgt->z == o->unk_5c.z) {
                *out = 0;
            } else {
                *out = func_020e9650(&o->unk_5c, &saved);
                V3 *pw = &o->unk_5c;
                *pw = saved;
            }
        } else {
            *out = func_02010d50(*out, *lim);
        }
    } else {
        *out = func_02010d68(*out, *lim);
    }
    ang = func_020e7b98(d.x, d.z);
    h = o->unk_8e;
    if (*out != 0) {
        func_02010d98(&h, ang);
        _ZN12Unk_020102ec13func_02010a58EPs(o, &h);
    }
    s32 vt = func_01ffcb0c(*out, data_02135f44[(((u16)(s16)(h - ang)) >> 4) * 2 + 1]);
    if (vt < 0) vt = -vt;
    v = vt;
    _ZN12Unk_020102ec13func_02010a34EPj(o, &v);
}


}  // namespace ns_0221e7a8
