#include "types.h"
// Library base class; its code is ARM in autoload_2 and ITCM. It allocates its objects on a separate heap.
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void func_0203e678(s32 a);
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

// Vtable at 0x020d8c74. Its constructor and destructor are inline, which is why derived constructors and destructors
// store two vtable pointers in a row.
class Unk_020d8c7c : public Unk_020d8c7c_Base {
public:
    Unk_020d8c7c() {}
    virtual void func_0203e678(s32 a);
    virtual ~Unk_020d8c7c() {}

    /* 0x04 */ u8 unk_04[0x4c];
};


struct Unk_0203e22c_State {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 pad_09[3];
    /* 0x0c */ void *unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
};

class Unk_020d9670;

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ Unk_020d9670 *unk_0c;
};

struct Unk_0203e5d0_List {
    /* 0x00 */ Unk_0203e5d0_Node *unk_00;
    /* 0x04 */ u32 unk_04;
    Unk_0203e5d0_List() {
        unk_00 = 0;
        unk_04 = 0;
    }
};

extern Unk_0203e5d0_List data_021c39d4;
extern u32 data_021c39dc;
extern u32 data_021c39e0[4];
extern u8 data_020d96d0;

struct Unk_0203e938_Net {
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ u32 unk_64;
};

struct Unk_0203e4f0_Vec {
    s32 x, y, z;
};

extern "C" {
extern Unk_0203e22c_State *data_021c39c0;
}

extern "C" {
extern u32 data_021c39c4;
}

extern "C" {
extern u32 data_021c39c8;
}

extern "C" {
extern u32 data_021c39cc;
}

extern "C" {
extern Unk_0203e938_Net *volatile data_020cbb18;
}

extern "C" {
extern s16 data_020c905c;
}

extern "C" {
extern u8 data_0213c874[];
}

extern "C" {
void func_02065328(void *);
}

extern "C" {
void func_0203ebb0(void);
}

extern "C" {
void func_0203d904(u32);
}

extern "C" {
BOOL func_02094960(void);
}

extern "C" {
void func_0203d640(u32);
}

extern "C" {
BOOL func_02094c38(void);
}

extern "C" {
u32 func_0206ec6c(u32);
}

extern "C" {
BOOL func_0206f140(void);
}

extern "C" {
BOOL func_02094e64(void);
}

extern "C" {
BOOL func_02094d3c(void);
}

extern "C" {
void func_0206f0f8(u32);
}

extern "C" {
s32 func_020b14f0(void);
}

extern "C" {
Unk_0203e22c_State *func_0203eb78(void);
}

extern "C" {
void func_020e79a0(void *, void *);
}

extern "C" {
s32 func_01ffcb0c(s32);
}

extern "C" {
u32 func_0203d5e4(s32);
}

extern "C" {
u32 func_0203d5f0(s32);
}

extern "C" {
s32 func_02002bdc(Unk_0203e4f0_Vec *, Unk_0203e4f0_Vec *);
}

extern "C" {
long long func_020e9630(Unk_0203e4f0_Vec *);
}

extern "C" {
void *func_020652c0(void *, u32);
}

extern "C" {
void func_020652dc(void *, void *);
}

extern "C" {
void _ZN12Unk_020d5d848vfunc_08Ev(void *, s32);
}

extern "C" {
void func_0203eb04(u8 a, u32 aid, ...);
}

extern "C" {
void func_0203eab8(u32 idx);
}

extern "C" {
u32 func_0203eac8(u32 idx, u32 id);
}

extern "C" {
void func_0203ea08(u32);
}

extern "C" {
s32 func_0203ea74(u32);
}

extern "C" {
BOOL _ZN12Unk_020cbb1813func_020729ccEj(void *, u32);
}

extern "C" {
void *func_02095204(u32);
}

extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *);
}

extern "C" {
void _ZN12Unk_020cbb1813func_020728d4Ev(void *);
}

extern "C" {
void _ZN12Unk_020cbb1813func_020728a4EPhj(void *, void *, u32);
}

extern "C" {
void _ZN12Unk_020cbb1813func_02072824Ejj(void *, u32, u32);
}

extern "C" {
BOOL func_020a62a0(void);
}

extern "C" {
void func_0203e938(u32 id, u8 x, u8 mode);
}

extern "C" {
void func_0203e358(void);
}

extern "C" {
void func_0203eb38(void);
}

extern "C" {
Unk_020d9670 *func_0203e604(u32 id);
}

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void func_0203e678(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84() { func_020e79a0(data_0213c874, &unk_50); }

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual void func_0203e678(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_0203e4f0_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e3b4(u32 mask);
    void func_0203e3c4(u32 mask);
    BOOL func_0203e3d4(u32 mask);
    BOOL func_0203e3e8();
    void func_0203e3f4();
    s32 func_0203e400();
    void func_0203e42c();
    void func_0203e438();
    void func_0203e450();
    void func_0203e468(s32 v);
    void func_0203e47c(s32 a);
    void func_0203e488(s32 a);
    BOOL func_0203e4a8(Unk_020d9670 *other);
    BOOL func_0203e4f0(Unk_020d9670 *other);
    BOOL func_0203e574(Unk_020d9670 *other, s16 lo, s16 hi);
    void func_0203e624(u32 a);
    u32 func_0203e630();

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_020d9620 : public Unk_020d8c7c {
public:
    Unk_020d9620() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual ~Unk_020d9620();
};
Unk_0203e5d0_List data_021c39d4;

Unk_020d9670::Unk_020d9670() {
    unk_d4.unk_00 = 0;
    unk_d4.unk_04 = 0;
    unk_d4.unk_08 = 0;
}

Unk_020d9670::~Unk_020d9670() {}

extern "C" void func_0203e6e4(void) {
    func_02065328(&data_021c39d4);
}

BOOL Unk_020d9670::vfunc_04() {
    if (!Unk_020d5d84::vfunc_04()) {
        return FALSE;
    }
    unk_d4.unk_08 = 0;
    unk_d4.unk_0c = this;
    func_0203e468(0x3000);
    unk_e8 = 0;
    func_0203e438();
    return TRUE;
}

void Unk_020d9670::func_0203e678(s32 a) {
    if (a == 2) {
        func_020652dc(&data_021c39d4, &unk_d4);
    }
    _ZN12Unk_020d5d848vfunc_08Ev(this, a);
}

BOOL Unk_020d9670::vfunc_10() {
    if (!Unk_020d5d84::vfunc_10()) {
        return FALSE;
    }
    func_020e79a0(&data_021c39d4, &unk_d4);
    return TRUE;
}

BOOL Unk_020d9670::vfunc_1c() {
    if (Unk_020d5d84::vfunc_1c()) {
        return TRUE;
    }
    return FALSE;
}

u32 Unk_020d9670::func_0203e630() { return unk_d4.unk_08; }

void Unk_020d9670::func_0203e624(u32 a) {
    unk_d4.unk_08 = a | (*(u16 *)((u8 *)this + 0xc) << 16);
}

extern "C" Unk_020d9670 *func_0203e604(u32 id) {
    Unk_0203e5d0_Node *n = (Unk_0203e5d0_Node *)func_020652c0(&data_021c39d4, id);
    if (n) {
        return n->unk_0c;
    }
    return 0;
}

extern "C" Unk_020d9670 *func_0203e5d0(Unk_020d9670 *self) {
    for (Unk_0203e5d0_Node *n = data_021c39d4.unk_00; n; n = n->unk_04) {
        Unk_020d9670 *o = n->unk_0c;
        if (o == self) {
            continue;
        }
        if (o->func_0203e4a8(self)) {
            return o;
        }
    }
    return 0;
}

BOOL Unk_020d9670::func_0203e574(Unk_020d9670 *other, s16 lo, s16 hi) {
    Unk_0203e4f0_Vec a, b;
    a = *other->vfunc_50();
    b = *vfunc_50();
    s16 d = func_02002bdc(&a, &b) - *(s16 *)((u8 *)other + 0x8e);
    if (d >= lo && d <= hi) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d9670::func_0203e4f0(Unk_020d9670 *other) {
    Unk_0203e4f0_Vec d;
    if (unk_e4 == 0) {
        return TRUE;
    }
    d.x = other->vfunc_50()->x - vfunc_50()->x;
    d.y = other->vfunc_50()->y - vfunc_50()->y;
    d.z = other->vfunc_50()->z - vfunc_50()->z;
    if (func_020e9630(&d) < (long long)unk_e4) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d9670::vfunc_48(void *a) { return FALSE; }

BOOL Unk_020d9670::func_0203e4a8(Unk_020d9670 *other) {
    if (func_0203e4f0(other)) {
        s16 t = data_020c905c;
        if (func_0203e574(other, -t, t)) {
            return vfunc_48(other);
        }
    }
    return FALSE;
}

void Unk_020d9670::vfunc_4c(u32 a, u8 b) {}

Unk_0203e4f0_Vec *Unk_020d9670::vfunc_50() { return (Unk_0203e4f0_Vec *)unk_5c; }

BOOL Unk_020d9670::vfunc_54(void *a) { return FALSE; }

BOOL Unk_020d9670::vfunc_58(void *a) { return FALSE; }

BOOL Unk_020d9670::vfunc_5c() { return FALSE; }

void Unk_020d9670::func_0203e488(s32 a) { func_0203d5f0(a); }

void Unk_020d9670::func_0203e47c(s32 a) { func_0203d5e4(a); }

void Unk_020d9670::func_0203e468(s32 v) { unk_e4 = func_01ffcb0c(v); }

void Unk_020d9670::func_0203e450() {
    func_0203e3b4(3);
    func_0203e3c4(1);
}

void Unk_020d9670::func_0203e438() {
    func_0203e3b4(3);
    func_0203e3c4(2);
}

