#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov074_02272608;
class Unk_ov074_02272578;

struct Unk_02014254 {
    BOOL func_02014220();
    void func_020141b4(s32 a, s32 b, s32 c);
    u32 pad[0x28 / 4];
};

struct Unk_0201acf8 {
    u16 unk_00;
    u16 unk_02;
    s32 func_0201acfc();
};

struct Unk_ov074_02271450_Ent {
    u8 pad_00[0x5c];
    u32 unk_5c;
};

struct Unk_ov074_02271564_A {
    u16 a;
    u8 b[8];
    u16 c;
    u8 d[8];
    s8 e;
    u8 f;
    u8 g[16];
    u8 h;
};

struct Unk_ov074_02271564_B {
    u16 a;
    u8 b[8];
    u16 c;
    u8 d[8];
    s8 e;
    u8 f;
};

struct Unk_ov074_022717a4_Out {
    char *unk_00;
    u8 unk_04;
};

struct Unk_ov074_02271be8_V {
    s32 v[3];
};

class Unk_0209865c {
public:
    void *func_0209888c();
};

extern "C" {
extern u8 data_021eca50[];
extern u32 *data_ov074_022724e4;
extern char data_ov074_022726b4[];
extern char data_ov074_022726c8[];
extern u32 data_021f482c;
extern u16 data_020c6cc8;
extern u8 data_021c7c88[];
extern s32 data_021f4880[];
extern u8 data_0213a740[];

void *func_02087298(u8 *p);
s32 func_0203c6b0(u32 h);
u32 func_0203c6a8(u32 h);
u32 func_0203c6c0();
u32 func_020e8608(u32 *a, u32 b);
void func_020e85fc(u32 *a, u32 b);
void func_020b8930(void *p);
s32 func_020b8840(void *p, u32 a, u32 *b, u32 c, s32 d, s32 e);
void func_020b895c(void *p);
BOOL func_0201bd84(s16 a);
s32 func_0206ed18();
Unk_0209865c *func_0209750c();
s32 func_0207d164(void *a, s32 b, s32 c);
void func_02087274(u8 *p, s32 v);
void func_0208728c(u8 *p, s32 v);
s32 func_02063b8c(s32 a);
BOOL func_0202e1cc(s32 a, s32 b);
s32 func_02067a84(void *self, u8 *b, char *c);
void func_02067a1c(void *self, s32 a, u8 *b, char *c);
void func_02067a3c(void *self, s32 a, void *b);
u32 func_02087268(u8 *p);
s32 func_020aa514();
Unk_ov074_02271564_A *func_02071e04();
Unk_ov074_02271564_B *func_02071fa0(Unk_ov074_02271564_A *a);
void func_02071f70(Unk_ov074_02271564_A *a, void *b);
void func_02072064(Unk_ov074_02271564_A *a);
BOOL func_02094218(Unk_ov074_02271564_B *b);
BOOL func_020941e8(Unk_ov074_02271564_B *a, void *b);
u32 func_0209409c(Unk_ov074_02271564_B *a);
void func_020942c8(Unk_ov074_02271564_B *a);
s32 func_02128930(void *a, void *b, s32 n);
void func_0206267c(void *p);
void func_0206260c(void *p);
u32 func_0201bc4c(void *p, s32 n);
u32 func_0201bcbc(void *p);
void func_0203d67c(void *p);
void func_020e7518(void *p);
s32 func_020e7fa8(u8 *p);
s32 func_02019790(void *p);
s32 func_020197a8(void *p);
s32 func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
s32 func_02002bdc(void *a, s32 *b);
Unk_ov074_02271be8_V *func_0201a978(void *p);
void func_020135bc(void *p);

s32 func_ov074_02272130(void *self, s32 state);
s32 func_ov074_02272020(void *self);
s32 func_ov074_02271e30(void *self);
s32 func_ov074_02271f90(void *self, s32 *a, s32 *b);
}

class Unk_020d7714 {
public:
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    s32 func_02015a5c();
    void func_02015ab0(u32 a);
    u32 func_02015aac();
    void func_020157e8(void *a, u32 b);
    void func_02015818(u32 a, u32 b);
    void func_02015170(u32 a, u32 b);
    void func_020151d0(s32 a);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_020b895c {
public:
    ~Unk_020b895c();
};

class Unk_ov074_022714e0 {
public:
    ~Unk_ov074_022714e0();
    u32 unk_00;
    Unk_020b895c unk_04;
};

class Unk_ov074_02271450_Helper {
public:
    ~Unk_ov074_02271450_Helper();
    void func_0227142c(u32 *p);
    void func_02271450(void *e);
    u32 func_0227149c();
    void func_022714b8(u32 *a, void *b);
    u32 unk_00;
    u32 unk_04[0x20];
};

class Unk_ov074_02272578 : public Unk_020d8b38 {
public:
    typedef void (Unk_ov074_02272578::*Fn)();

    Unk_ov074_02272578();
    virtual ~Unk_ov074_02272578();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_70(Unk_ov074_022717a4_Out *out);
    virtual void vfunc_7c();

    void func_02271960(Unk_ov074_02272608 *o);
    BOOL func_022719cc();
    void func_02271a28();
    void func_02271a6c(s32 idx);

    /* 0xac */ Unk_ov074_02272608 *unk_ac;
    /* 0xb0 */ Fn unk_b0;
};

class Unk_020d8bc8 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    /* 0x004 */ u8 pad_04[0x8a];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_90[0xec - 0x90];
    /* 0x0ec */ u8 unk_ec[0x618 - 0xec];
    /* 0x618 */ Unk_02014254 unk_618;
    /* 0x640 */ u8 pad_640[0x14];
};

class Unk_ov074_02272608 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov074_02272608();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    BOOL func_02271b08();
    BOOL func_02271b0c();
    BOOL func_02271b48();
    BOOL func_02271b4c();
    BOOL func_02271b78();
    BOOL func_02271b7c();
    BOOL func_02271b98();
    BOOL func_02271be8();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov074_02272578 unk_658;
    /* 0x710 */ Unk_ov074_02271450_Helper unk_710;
};

#define F(T, o) (*(T *)((u8 *)this + (o)))
#define P(o) ((void *)((u8 *)this + (o)))

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov074_02272608::~Unk_ov074_02272608() {}

Unk_ov074_02271450_Helper::~Unk_ov074_02271450_Helper() {}

Unk_ov074_022714e0::~Unk_ov074_022714e0() {}

void Unk_ov074_02271450_Helper::func_0227142c(u32 *p) {
    func_020b8930(unk_04);
    if (unk_00 != 0) {
        func_020e85fc(p, unk_00);
    }
}

void Unk_ov074_02271450_Helper::func_02271450(void *e) {
    Unk_ov074_02271450_Ent *ent = (Unk_ov074_02271450_Ent *)e;
    void *t;
    u32 h;
    t = func_02087298(data_021eca50);
    if (t != 0) {
        if (func_0203c6b0(unk_00) != 0) {
            h = func_0227149c();
            if (h != 0) {
                func_020b8840(unk_04, ent->unk_5c, data_ov074_022724e4, h, 0, 0);
            }
        }
    }
}

u32 Unk_ov074_02271450_Helper::func_0227149c() {
    u32 r = 0;
    if (unk_00 != 0) {
        r = func_0203c6a8(unk_00);
    }
    return r;
}

void Unk_ov074_02271450_Helper::func_022714b8(u32 *a, void *b) {
    unk_00 = func_020e8608(a, func_0203c6c0());
    func_02271450(b);
}

void Unk_ov074_02272608::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        func_ov074_02272130(this, 0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(this, 4));
        func_ov074_02272130(this, 4);
        break;
    case 8:
        func_ov074_02272130(this, 2);
        break;
    }
}

BOOL Unk_ov074_02272608::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov074_02272578::vfunc_18() {
    u8 buf[1];
    Unk_ov074_02271564_A l;
    Unk_ov074_02271564_B m;
    s32 t;
    s32 r5;

    func_02015a5c();
    r5 = func_020aa514();
    func_02087298(data_021eca50);
    l = *func_02071e04();
    m = *func_02071fa0(&l);
    char *name = data_ov074_022726b4;
    t = 0xff;
    switch (unk_1e) {
    case 3:
        if (r5 == 0) {
            if (func_02094218(&m) != 0) {
                Unk_0209865c *p = func_0209750c();
                u16 *q = (u16 *)p->func_0209888c();
                if (m.a == q[0] && func_02128930(m.b, q + 1, 8) == 0 && func_020941e8(&m, q) != 0) {
                    t = 0xa;
                    break;
                }
            }
            t = 9;
        } else {
            if (func_02094218(&m) != 0) {
                Unk_0209865c *p = func_0209750c();
                u16 *q = (u16 *)p->func_0209888c();
                if (m.a == q[0] && func_02128930(m.b, q + 1, 8) == 0 && func_020941e8(&m, q) != 0) {
                    t = 0xc;
                    break;
                }
            }
            t = 0xb;
        }
        break;
    case 0xd:
        if (r5 != 0) {
            t = 0xe;
        }
        break;
    }
    if (t != 0xff) {
        buf[0] = t;
        func_02067a84(unk_3c, buf, name);
    }
    func_020942c8(&m);
    func_02072064(&l);
}

void Unk_ov074_02272578::vfunc_14() {
    u8 buf[1];
    char *name = data_ov074_022726b4;
    s32 t = 0xff;

    switch (unk_1e) {
    case 9:
    case 10:
    case 11:
    case 12:
        t = 0xd;
        break;
    case 13:
        break;
    case 14:
        unk_ac->unk_710.func_02271450(&unk_ac->unk_ec);
        func_02015170(3, 0);
        func_020151d0(2);
        func_02271a6c(0);
        break;
    case 0x1c:
        func_02015170(0x14, 0);
        func_020151d0(2);
        func_02271a6c(1);
        break;
    }
    if (t != 0xff) {
        buf[0] = t;
        func_02067a84(unk_3c, buf, name);
    }
}

void Unk_ov074_02272578::vfunc_70(Unk_ov074_022717a4_Out *out) {
    u8 buf[1];
    Unk_ov074_02271564_A l;
    Unk_ov074_02271564_B m;
    u32 obj[9];

    out->unk_00 = data_ov074_022726b4;
    u8 *const g = data_021eca50;
    func_02087298(g);
    l = *func_02071e04();
    m = *func_02071fa0(&l);
    if (func_02063b8c(2) == 0 || func_0202e1cc(0x2b, 0) == 0) {
        out->unk_04 = 3;
    } else {
        if (func_02094218(&m) != 0) {
            Unk_0209865c *p = func_0209750c();
            u16 *q = (u16 *)p->func_0209888c();
            if (m.a == q[0] && func_02128930(m.b, q + 1, 8) == 0 && func_020941e8(&m, q) != 0) {
                out->unk_04 = func_02063b8c(4) + 0x18;
                goto next;
            }
        }
        out->unk_04 = func_02063b8c(4) + 0x11;
    }
next:
    func_0206267c(obj);
    if (func_02094218(&m) != 0) {
        func_020157e8(&m, 1);
        func_02015818(func_0209409c(&m), 0);
        buf[0] = func_02087268(g);
        func_02067a1c(unk_3c, 2, buf, data_ov074_022726c8);
        func_02071f70(&l, obj);
        func_02067a3c(unk_3c, 3, obj);
    }
    func_0206260c(obj);
    func_020942c8(&m);
    func_02072064(&l);
}

void Unk_ov074_02272578::func_02271960(Unk_ov074_02272608 *o) {
    vfunc_08();
    unk_ac = o;
}

Unk_ov074_02272578::~Unk_ov074_02272578() {}

Unk_ov074_02272578::Unk_ov074_02272578() {}

BOOL Unk_ov074_02272578::func_022719cc() {
    if (func_0206ed18() != 0) {
        void *p = unk_3c;
        u8 *const g = data_021eca50;
        u8 buf[1];
        func_02087274(g, func_0207d164(func_0209750c(), 0, 0));
        func_0208728c(g, 3);
        buf[0] = func_02063b8c(3) + 5;
        func_0202e1cc(0x2b, 1);
        func_02067a84(p, buf, data_ov074_022726b4);
    }
end:;
}

void Unk_ov074_02272578::func_02271a28() {
    void *p = unk_3c;
    u8 buf[1];
    buf[0] = 0xf;
    if (func_0206ed18() != 0) {
        buf[0] = 0x1c;
        unk_ac->unk_710.func_02271450(&unk_ac->unk_ec);
    }
    func_02067a84(p, buf, data_ov074_022726b4);
}

void Unk_ov074_02272578::func_02271a6c(s32 idx) {
    static Fn tbl[2] = {&Unk_ov074_02272578::func_02271a28, (Fn)&Unk_ov074_02272578::func_022719cc};
    unk_b0 = tbl[idx];
}

void Unk_ov074_02272578::vfunc_7c() {
    if (unk_b0 != 0) {
        (this->*unk_b0)();
        unk_b0 = *(Fn *)data_0213a740;
    }
}

BOOL Unk_ov074_02272608::func_02271b08() { return TRUE; }

BOOL Unk_ov074_02272608::func_02271b0c() {
    u32 a = unk_658.func_02015aac();
    s32 b = unk_8e;
    if (a != 0) {
        b = func_0201bcbc(this);
    }
    unk_618.func_020141b4(0, b, 0);
    return TRUE;
}

BOOL Unk_ov074_02272608::func_02271b48() { return TRUE; }

BOOL Unk_ov074_02272608::func_02271b4c() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov074_02272130(this, 1);
    }
    return TRUE;
}

BOOL Unk_ov074_02272608::func_02271b78() { return TRUE; }

BOOL Unk_ov074_02272608::func_02271b7c() {
    if (func_ov074_02272020(this) != 0) {
        func_ov074_02272130(this, 2);
    }
    return TRUE;
}

BOOL Unk_ov074_02272608::func_02271b98() {
    func_020196b4(P(0x564), 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    F(u8, 0x651) = 0;
    func_020135bc(P(0x558));
    return TRUE;
}

BOOL Unk_ov074_02272608::func_02271be8() {
    s32 r6;
    Unk_ov074_02271be8_V v;
    Unk_ov074_02271be8_V w;
    void *r4 = P(0x564);

    r6 = func_ov074_02272020(this);
    func_020e7518(P(0x651));
    if (r6 != 0) {
        if (func_ov074_02271e30(this) == 0) {
            if (func_02019790(r4) != 0) {
                if (((Unk_0201acf8 *)P(0x3aa))->func_0201acfc() == 2) {
                    func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((func_020e7fa8(data_021c7c88) & 7) == 0) {
                    v.v[0] = data_021f4880[0];
                    v.v[1] = data_021f4880[1];
                    v.v[2] = data_021f4880[2];
                    if (func_ov074_02271f90(this, &v.v[0], &v.v[2]) != 0) {
                        r6 = func_02002bdc(P(0x5c), &v.v[0]);
                        if (func_0201bd84(r6 - F(s16, 0x8e)) != 0) {
                            r6 = 1;
                            if (func_02063b8c(4) == 0) {
                                r6 = 2;
                            }
                            if (r6 != func_020197a8(P(0x564))) {
                                func_020196b4(r4, r6, 1, v.v[0], v.v[2], 0, 0, 0, 0, data_020c6cc8, 0);
                                F(u8, 0x651) = 0x64;
                            }
                        } else {
                            if (func_020197a8(P(0x564)) != 4) {
                                func_020196b4(r4, 4, 1, v.v[0], v.v[2], 0, r6, 0, 0, data_020c6cc8, 0);
                                F(u8, 0x651) = 0x50;
                            }
                        }
                    } else {
                        func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else {
                if (F(u32, 0x98) != 0) {
                    if (func_020197a8(P(0x564)) == 1 || func_020197a8(P(0x564)) == 2 || func_020197a8(P(0x564)) == 4) {
                        if (F(u8, 0x651) == 0) {
                            func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        } else {
                            Unk_ov074_02271be8_V *src = func_0201a978(P(0x350));
                            w.v[0] = src->v[0];
                            w.v[1] = src->v[1];
                            w.v[2] = src->v[2];
                            if (func_0201bd84(func_02002bdc(P(0x5c), &w.v[0]) - F(s16, 0x8e)) == 0) {
                                func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (F(u32, 0x98) != 0) {
            func_ov074_02272130(this, 3);
        }
    }
    return FALSE;
}
