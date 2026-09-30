#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

struct Unk_ov049_0225b4f8_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Unk_ov049_0225b4f8_Global *data_020cbb18;
extern u16 data_020c6cc8;

BOOL func_020a62a0();
BOOL func_02072e44(void *g);
BOOL func_020b50dc();
void func_0202ffb0(s32 a);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0202e18c(void *self, void *out, s32 x);
s16 *func_0209c37c(s32 a, s32 b);
void func_02019614(void *self, s32 a, u32 b);
void func_0201a8d0(void *self, s32 a, s32 b, s32 c, s32 d);
s32 func_02063b8c(s32 a);
s32 func_0203d704(void *self, s32 a);
void func_ov049_0225aa50(void *self, s32 a);
void func_ov049_0225aa58(void *self, void *owner);
void func_02071e74(void *self);
}

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    u32 pad_04[0xac / 4];
};

class Unk_ov049_0225aaac : public Unk_020d7714 {
public:
    Unk_ov049_0225aaac();
    ~Unk_ov049_0225aaac();
    u8 pad_b0[0xcc - 0xb0];
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_02053d3c {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_02053d3c();
    ~Unk_02053d3c();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_020323b0, 0x30);
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
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct Unk_02082014 { u8 unk_00[8]; Unk_02082014(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    void func_0203e468(s32 v);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0x5c - 0x40];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xac - 0x96];
    s32 unk_ac;
    void *unk_b0;
    u8 pad_b4[0xc8 - 0xb4];
    u8 unk_c8;
    u8 pad_c9;
    u16 unk_ca;
    s32 unk_cc;
    u8 pad_d0[0xea - 0xd0];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual u32 vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual s32 vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    BOOL func_0201b9bc();
    void func_0201b964(void *dst, s32 n);
    BOOL func_0201b980(u8 *src, u32 n);
    s32 func_0201b9e8(s32 *a, s32 *b);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    BOOL func_0201ba88();
    void func_0201bc28(void *p);
    s32 func_0201bc4c(u32 id);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);

    u16 unk_ea;
    Unk_02053d3c unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_020323b0 unk_49c;
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
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};



struct Unk_ov051_0225a1a4_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_02067918 {
    u32 unk_00;
    s32 unk_04;
};

class Unk_ov051_0225a2dc;

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c(s32 a);
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
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov051_0225a1a4_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
};

class Unk_ov051_0225a1a4 : public Unk_02015b54 {
public:
    typedef void (Unk_ov051_0225a1a4::*Fn)();

    Unk_ov051_0225a1a4();
    virtual ~Unk_ov051_0225a1a4();
    virtual void vfunc_10();
    virtual void vfunc_1c(s32 a);
    virtual void vfunc_78(Unk_ov051_0225a1a4_Out *out);
    virtual void vfunc_84();

    u8 func_ov051_02258fa8(s32 v);
    void func_ov051_02259704();
    void func_ov051_02259754();
    void func_ov051_02259780();
    void func_ov051_022597a4();
    void func_ov051_022597c8();
    void func_ov051_02259858();
    void func_ov051_02259878();
    void func_ov051_022598bc();
    void func_ov051_022598e4(s32 idx);
    void func_ov051_022599d4(Unk_ov051_0225a2dc *owner);

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ Unk_ov051_0225a2dc *unk_ac;
    /* 0xb0 */ Fn unk_b0;
    /* 0xb8 */ s32 unk_b8;
};

struct Unk_ov051_02259be4_Ent;

class Unk_ov051_0225a2dc : public Unk_020d8bc8 {
public:
    Unk_ov051_0225a2dc() : unk_658() {}
    virtual ~Unk_ov051_0225a2dc();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual u32 vfunc_84();
    virtual s32 vfunc_9c();

    BOOL func_ov051_02259a40();
    BOOL func_ov051_02259a88();
    BOOL func_ov051_02259a8c();
    BOOL func_ov051_02259b6c();
    BOOL func_ov051_02259b70();
    BOOL func_ov051_02259b74();
    BOOL func_ov051_02259b78();
    BOOL func_ov051_02259b7c();
    BOOL func_ov051_02259b98();
    BOOL func_ov051_02259bd4();
    void func_ov051_02259be4(s32 state);

    s32 unk_654;
    Unk_ov051_0225a1a4 unk_658;
    u16 unk_714;
    u8 unk_716;
    u8 pad_717;
};

struct Unk_ov051_02259be4_Ent {
    BOOL (Unk_ov051_0225a2dc::*enter)();
    BOOL (Unk_ov051_0225a2dc::*exit)();
};

extern "C" {
extern u32 data_ov051_02259f60;
extern u8 data_ov051_0225a508[];
extern u8 data_ov051_0225a150[];
extern u8 data_ov051_0225a180[];
extern Unk_ov051_02259be4_Ent data_ov051_0225a548[];
extern Unk_ov051_02259be4_Ent data_ov051_0225a550[];
extern Unk_ov051_0225a2dc *data_ov051_0225a520;
extern u8 data_021c3cc0;
extern u8 data_021d7350[];
extern u8 data_0213a740[];

BOOL func_020a0318();
BOOL func_020a02dc();
BOOL func_020a02f0();
BOOL func_020a0304();
BOOL func_0206ed04();
void func_02067a84(void *o, u8 *m, u32 x);
void func_02067a1c(void *o, s32 a, void *p, void *q);
Unk_02067918 *func_02067918(s32 a);
void func_0209d498(void *p);
void func_02015170(void *self, u32 a, u32 b);
s32 func_020151d0(void *self, s32 a);
void func_02015958(void *self, u32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_ov068_0226ba48();
s32 func_02063b8c(s32 a);
void func_ov068_0226b9f0();
void func_0203a318();
void func_0204137c(s32 a, s32 b);
void func_0200403c();
void func_020412f0(s32 a, s32 b, s32 c);
void func_020b0f24();
void func_0206e8cc(void *p);
void func_0209d70c(void *p, s32 a);
void func_0209d624(void *p);
void func_0209e120(void *p, s32 a);
s32 func_0204da0c();
void func_0204d5d8(s32 a, void *p, s32 b, s32 c);
s32 func_020b4934();
void func_020b4f18(s32 a, s32 b, void *p, u32 c, u32 d, u32 e, u32 f);
void func_02014198(void *self, u32 a, u32 b);
s32 func_020e7500(void *p);
s32 func_020e7518(void *p);
void func_020195c8(void *self, s32 a, s32 b, s32 c, u32 d, s32 e);
void func_0203d984();
void func_0203d990();
void func_0201ad34(void *self, s32 a);
}

static inline BOOL Unk_ov051_02259a8c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
static inline BOOL Unk_ov051_02259b98_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }

// ---------------------------------------------------------------------------------------------------------------------
// Dialog class Unk_ov051_0225a1a4
void Unk_ov051_0225a1a4::func_ov051_02259704() {
    u8 m[2];
    if (func_020a0318()) {
        m[0] = func_ov051_02258fa8(0x15);
        func_02067a84(unk_3c, m, data_ov051_02259f60);
    } else {
        m[1] = func_ov051_02258fa8(0x1f);
        func_02067a84(unk_3c, &m[1], data_ov051_02259f60);
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259754() {
    u8 m[2];
    if (func_020a02dc()) {
        m[0] = 0x30;
        func_02067a84(unk_3c, m, data_ov051_02259f60);
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259780() {
    func_02015170(this, 0x10, 0);
    func_020151d0(this, 2);
    func_ov051_022598e4(0);
}

void Unk_ov051_0225a1a4::func_ov051_022597a4() {
    func_02015170(this, 0xf, 0);
    func_020151d0(this, 2);
    func_ov051_022598e4(1);
}

void Unk_ov051_0225a1a4::func_ov051_022597c8() {
    func_02015170(this, 0x30, 0);
    func_020151d0(this, 2);
    func_ov051_022598e4(2);
}

void Unk_ov051_0225a1a4::vfunc_10() {
    struct {
        u8 msg;
        u8 pad[3];
        u32 w[2];
    } l;
    if (unk_1e == 0 || unk_1e == 2) {
        void *h = func_02067918(0);
        s32 r4 = 0x19;
        l.w[0] = 0;
        l.w[1] = 0;
        func_0209d498(&l.w);
        if (((u8 *)l.w)[2] >= 0xc) {
            r4 = 0x1a;
        }
        l.msg = r4;
        func_02067a1c(h, 0, &l.msg, data_ov051_0225a508);
        u32 t = ((u8 *)l.w)[2];
        if (t >= 0xc) {
            t -= 0xc;
        }
        if (t == 0) {
            t = 0xc;
        }
        func_02015958(this, t, 1, 2, 0, 0);
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259858() {
    u8 m[1];
    m[0] = 2;
    func_02067a84(unk_3c, m, data_ov051_02259f60);
}

void Unk_ov051_0225a1a4::func_ov051_02259878() {
    u8 m[2];
    if (func_0206ed04()) {
        m[0] = 0x29;
        func_02067a84(unk_3c, m, data_ov051_02259f60);
    } else {
        m[1] = 9;
        func_02067a84(unk_3c, &m[1], data_ov051_02259f60);
    }
}

void Unk_ov051_0225a1a4::func_ov051_022598bc() {
    u8 m[1];
    m[0] = func_ov051_02258fa8(0x11);
    func_02067a84(unk_3c, m, data_ov051_02259f60);
}

void Unk_ov051_0225a1a4::func_ov051_022598e4(s32 idx) {
    static Fn tbl[3] = {
        &Unk_ov051_0225a1a4::func_ov051_022598bc,
        &Unk_ov051_0225a1a4::func_ov051_02259878,
        &Unk_ov051_0225a1a4::func_ov051_02259858,
    };
    unk_b0 = tbl[idx];
}

void Unk_ov051_0225a1a4::vfunc_84() {
    if (unk_b0) {
        (this->*unk_b0)();
        unk_b0 = *(Fn *)data_0213a740;
    }
}

void Unk_ov051_0225a1a4::vfunc_78(Unk_ov051_0225a1a4_Out *out) {
    out->unk_00 = data_ov051_02259f60;
    if (func_020a0318() || func_020a02f0()) {
        out->unk_04 = 0;
    } else {
        out->unk_04 = 0x28;
    }
}

void Unk_ov051_0225a1a4::vfunc_1c(s32 a) {
    if (a == 0) {
        func_ov068_0226ba48();
    }
}

void Unk_ov051_0225a1a4::func_ov051_022599d4(Unk_ov051_0225a2dc *owner) {
    vfunc_08();
    unk_ac = owner;
}

Unk_ov051_0225a1a4::~Unk_ov051_0225a1a4() {}

Unk_ov051_0225a1a4::Unk_ov051_0225a1a4() {}

// ---------------------------------------------------------------------------------------------------------------------
// Owner Unk_ov051_0225a2dc
BOOL Unk_ov051_0225a2dc::func_ov051_02259a40() {
    if (func_02067918(0)->unk_04 == 0) {
        if (func_02063b8c(4) == 0) {
            func_ov068_0226b9f0();
            func_0203a318();
            unk_716 = 10;
        }
        func_0204137c(0, 0xf);
        func_0200403c();
        func_ov051_02259be4(3);
    }
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::func_ov051_02259a88() { return TRUE; }

BOOL Unk_ov051_0225a2dc::func_ov051_02259a8c() {
    struct {
        u32 w[2];
        u32 v[3];
    } l;
    if (Unk_ov051_02259a8c_IsZero(data_021c3cc0)) {
        func_020412f0(3, 0, 1);
        func_020b0f24();
        if (func_020a02f0() || func_020a0318()) {
            l.w[0] = 0;
            l.w[1] = 0;
            func_0209d498(&l.w);
            func_0206e8cc(&l.w);
        }
        if (func_020a0318()) {
            func_0209d70c(data_021d7350, 0);
            func_0209d624(data_021d7350);
        } else if (func_020a02f0()) {
            func_0209d70c(data_021d7350, 6);
            func_0209d624(data_021d7350);
        } else if (func_020a0304()) {
            func_0209d70c(data_021d7350, 1);
            func_0209d624(data_021d7350);
        }
        func_0209e120(data_021d7350, 0x12);
        func_0204d5d8(func_0204da0c(), &l.v, 0, 0);
        func_020b4f18(func_020b4934(), 0, &l.v, 0x400000, 0xffff8000, 3, 2);
        func_ov051_02259be4(2);
    }
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::func_ov051_02259b6c() { return TRUE; }
BOOL Unk_ov051_0225a2dc::func_ov051_02259b70() { return TRUE; }
BOOL Unk_ov051_0225a2dc::func_ov051_02259b74() { return TRUE; }
BOOL Unk_ov051_0225a2dc::func_ov051_02259b78() { return TRUE; }

BOOL Unk_ov051_0225a2dc::func_ov051_02259b7c() {
    func_02014198(&unk_618, 1, 0);
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::func_ov051_02259b98() {
    if (Unk_ov051_02259b98_IsTwo(data_021c3cc0)) {
        if (func_020e7500(&unk_714) == 0) {
            func_ov051_02259be4(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::func_ov051_02259bd4() { return TRUE; }

u32 Unk_ov051_0225a2dc::vfunc_84() { return 0xffff; }

s32 Unk_ov051_0225a2dc::vfunc_9c() { return 10; }

void Unk_ov051_0225a2dc::func_ov051_02259be4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov051_0225a548[state].enter) {
        ok = (this->*data_ov051_0225a548[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov051_0225a2dc::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov051_0225a550[unk_654].enter) {
        r = (this->*data_ov051_0225a548[unk_654].exit)();
    }
    if (func_020e7518(&unk_716) == 1) {
        func_020195c8(&unk_564, 1, 0x8f, 1, data_020c6cc8, 0);
    }
    return r;
}

u8 *Unk_ov051_0225a2dc::vfunc_70() { return data_ov051_0225a150; }
u8 *Unk_ov051_0225a2dc::vfunc_6c() { return data_ov051_0225a180; }

BOOL Unk_ov051_0225a2dc::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    func_0203d984();
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    data_ov051_0225a520 = this;
    func_ov051_02259be4(0);
    unk_4cc.unk_1c |= 2;
    func_0203d990();
    unk_714 = 0x29;
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov051_022599d4(this);
    func_0201ad34(&unk_2a0, 0xfb);
    return TRUE;
}

extern "C" Unk_ov051_0225a2dc *func_ov051_02259d5c() { return new Unk_ov051_0225a2dc; }
