#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov075_Vec3 {
    s32 x, y, z;
};

struct Unk_ov075_Vec4 {
    s32 v[4];
};

struct Unk_ov075_022714e4_Out {
    const char *unk_00;
    u8 unk_04;
};

struct Unk_ov075_02271590_T3c {
    u32 unk_00;
    s32 unk_04;
};

extern "C" {
extern u8 data_ov075_02272468[];
extern u8 data_ov075_022724b0[];
extern u8 data_ov075_022724bc[];
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern u8 data_021f4880[];
extern u8 data_021c7c88[];
extern void *data_021c3070;
extern Unk_ov075_Vec3 data_021c309c;
extern s16 data_02135f44[];

void *func_0209750c();
s32 func_020aa514();
s32 func_02098044(void *p, s32 a);
s32 func_0209801c(void *p, s32 a);
s32 func_02063b8c(s32 a);
BOOL func_0202e1cc(s32 a, s32 b);
void func_02067a84(void *self, u8 *b, void *c);
void func_02014f38(void *self, s32 a);
s32 func_02014f74(void *self);
BOOL func_02014220(void *self);
void func_02014198(void *self, s32 a, s32 b);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
void func_0203d67c(void *self);
void func_020195c8(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_0201ad34(void *p, s32 v);
s32 func_02015e48(void *p, s32 a);
s32 func_02019790(void *p);
s32 func_020197a8(void *p);
void func_0201a6c0(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_0201acfc(void *p);
s32 func_0201a7e8(void *p);
s32 func_0201a9a0(void *p, void *q, s32 a);
s32 func_0201a968(void *p);
void func_0201a8f0(void *p);
void func_0201a97c(void *p, void *q);
Unk_ov075_Vec3 *func_0201a978(void *p);
void func_0201a900(void *out, void *a, void *b, s32 c);
s32 func_0201a834(void *p);
s32 func_02002bdc(void *a, void *b);
BOOL func_0201bd84(s16 a);
u32 func_0201bc4c(void *p, s32 n);
u32 func_0201bc70(void *p, s32 n);
s32 func_0201bcbc(void *self, u32 a);
void func_020e7518(void *p);
s32 func_020e7fa8(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204edd8(void *out, void *in);
s32 func_02077f40(void *v, s32 a);

void func_ov075_02271e78(void *self, s32 state);
s32 func_ov075_02271ccc(void *self, void *a, void *b);
}

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
    virtual void vfunc_78(Unk_ov075_022714e4_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_02015a5c();
    void func_02015ab0(u32 a);
    u32 func_02015aac();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    Unk_ov075_02271590_T3c *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_ov075_0227232c;

struct Unk_ov075_022722f0_Ent {
    void (Unk_ov075_0227232c::*fn)();
    u8 kind;
};

extern "C" Unk_ov075_022722f0_Ent data_ov075_022722f0[];
extern "C" u8 data_ov075_022722f8[];

// Inner state object at +0x658 of Unk_ov075_022723bc.
class Unk_ov075_0227232c : public Unk_020d8b38 {
public:
    Unk_ov075_0227232c();
    virtual ~Unk_ov075_0227232c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov075_022714e4_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov075_02271524(void *owner);
    void func_ov075_02271590();
    void func_ov075_02271704(s32 v);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb4 */ u8 *unk_b4;
};

class Unk_020d8bc8 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    /* 0x004 */ u8 pad_04[0x58];
    /* 0x05c */ Unk_ov075_Vec3 unk_5c;
    /* 0x068 */ u8 pad_68[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_90[4];
    /* 0x094 */ s16 unk_94;
    /* 0x096 */ u8 pad_96[2];
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ u8 pad_9c[0x2a0 - 0x9c];
    /* 0x2a0 */ u8 unk_2a0[0x350 - 0x2a0];
    /* 0x350 */ u8 unk_350[0x3a8 - 0x350];
    /* 0x3a8 */ u8 unk_3a8[2];
    /* 0x3aa */ u8 unk_3aa[6];
    /* 0x3b0 */ u8 unk_3b0[0x4e8 - 0x3b0];
    /* 0x4e8 */ u32 unk_4e8;
    /* 0x4ec */ u8 pad_4ec[0x561 - 0x4ec];
    /* 0x561 */ u8 unk_561;
    /* 0x562 */ u8 pad_562[2];
    /* 0x564 */ u8 unk_564[0x618 - 0x564];
    /* 0x618 */ u8 unk_618[0x654 - 0x618];
};

class Unk_ov075_022723bc : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov075_022723bc();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    BOOL func_ov075_022717a8();
    BOOL func_ov075_02271800();
    BOOL func_ov075_022717ac();
    BOOL func_ov075_022717d8();
    BOOL func_ov075_02271804();
    BOOL func_ov075_0227188c();
    BOOL func_ov075_02271aa4();
    BOOL func_ov075_02271ac8();
    BOOL func_ov075_02271bc8(Unk_ov075_Vec3 *out, void *p);
    BOOL func_ov075_02271c04(s32 *px, s32 *pz);
    s32 func_ov075_02271c94();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov075_0227232c unk_658;
    /* 0x710 */ u32 unk_710;
    /* 0x714 */ u8 unk_714;
    /* 0x715 */ u8 unk_715;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov075_022723bc::~Unk_ov075_022723bc() {}

void Unk_ov075_022723bc::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        func_ov075_02271e78(this, 2);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(this, 4));
        if (unk_714 != 0) {
            func_ov075_02271e78(this, 1);
        }
        break;
    case 8:
        if (unk_714 == 0) {
            func_ov075_02271e78(this, 0);
        } else {
            func_ov075_02271e78(this, 5);
        }
        break;
    }
}

BOOL Unk_ov075_022723bc::vfunc_48() {
    BOOL r = FALSE;
    if (unk_561 != 0) {
        if (func_02014220(unk_618) == 0) {
            r = TRUE;
        }
    }
    return r;
}

void Unk_ov075_0227232c::vfunc_18() {
    func_02015a5c();
    s32 r = func_020aa514();
}

void Unk_ov075_0227232c::vfunc_14() {
    func_0209750c();
    if (unk_1e == 0x1a) {
        func_02014f38(this, 0);
        func_ov075_02271704(1);
    }
}

void Unk_ov075_0227232c::vfunc_78(Unk_ov075_022714e4_Out *out) {
    out->unk_04 = 0x1a;
    if (unk_b4[0x714] != 0) {
        if (func_02098044(func_0209750c(), 6) != 0) {
            out->unk_04 = func_02063b8c(4) + 12;
        }
    }
    out->unk_00 = (const char *)data_ov075_02272468;
}

void Unk_ov075_0227232c::func_ov075_02271524(void *owner) {
    vfunc_08();
    unk_b4 = (u8 *)owner;
}

Unk_ov075_0227232c::~Unk_ov075_0227232c() {}

Unk_ov075_0227232c::Unk_ov075_0227232c() {}

void Unk_ov075_0227232c::func_ov075_02271590() {
    u8 *o;
    switch (unk_b0) {
    case 0:
        if (unk_3c->unk_04 == 5) {
            func_020195c8(unk_b4 + 0x564, 2, 0xd5, 1, data_020c6cc8, 0);
            func_0201ad34(unk_b4 + 0x2a0, 0);
            unk_b0 = unk_b0 + 1;
        }
        break;
    case 1:
        if (func_02015e48(unk_b4 + 0x334, 0) == 0xd5) {
            if (func_02019790(unk_b4 + 0x564) != 0) {
                u32 r = func_0201bc70(unk_b4, 4);
                func_020196b4(unk_b4 + 0x564, 3, 2, 0, 0, 0, r, 0, 0, data_020c6cc8, 0);
                unk_b0 = unk_b0 + 1;
            }
        }
        break;
    case 2:
        if (func_020197a8(unk_b4 + 0x564) == 3) {
            if (func_02019790(unk_b4 + 0x564) != 0) {
                void *p = func_0209750c();
                u8 buf[2];
                unk_b4[0x714] = 1;
                func_02014f74(this);
                if (func_02098044(p, 6) == 0) {
                    func_0209801c(p, 6);
                    func_0202e1cc(0x12, 1);
                    buf[0] = 0x10;
                    func_02067a84(unk_3c, buf, data_ov075_02272468);
                } else {
                    func_0202e1cc(0x12, 1);
                    buf[1] = func_02063b8c(12);
                    func_02067a84(unk_3c, &buf[1], data_ov075_02272468);
                }
                func_ov075_02271704(0);
            }
        }
        break;
    }
}

void Unk_ov075_0227232c::func_ov075_02271704(s32 v) {
    unk_ac = v;
    unk_b0 = 0;
}

void Unk_ov075_0227232c::vfunc_84() {
    s32 i = unk_ac * 12;
    if (data_ov075_022722f8[i] == 0) {
        Unk_ov075_022722f0_Ent *e = (Unk_ov075_022722f0_Ent *)((u8 *)data_ov075_022722f0 + i);
        if (e->fn != 0) {
            (this->*e->fn)();
            func_ov075_02271704(0);
        }
    }
}

void Unk_ov075_0227232c::vfunc_80() {
    s32 i = unk_ac * 12;
    if (data_ov075_022722f8[i] != 0) {
        Unk_ov075_022722f0_Ent *e = (Unk_ov075_022722f0_Ent *)((u8 *)data_ov075_022722f0 + i);
        if (e->fn != 0) {
            (this->*e->fn)();
        }
    }
}

BOOL Unk_ov075_022723bc::func_ov075_022717a8() {
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_022717ac() {
    if (func_02014220(unk_618) == 0) {
        func_0203d67c(this);
        func_ov075_02271e78(this, 3);
    }
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_022717d8() {
    if (unk_714 == 0) {
        func_02014198(unk_618, 0, 0);
    }
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271804() {
    u32 r4 = unk_658.func_02015aac();
    s32 r6 = unk_8e;
    if (unk_714 != 0) {
        func_0201a6c0(unk_3b0, 1, 0, 0, (s32)data_021f4880, 4, data_020c6d1c, 1);
        unk_4e8 &= ~2;
    }
    if (r4 != 0) {
        r6 = func_0201bcbc(this, r4);
    }
    func_020141b4(unk_618, 0, r6, 0);
    return TRUE;
}

#define Unk_ov075_0227188c_CallA() \
    func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)

BOOL Unk_ov075_022723bc::func_ov075_0227188c() {
    u8 *r4 = unk_564;
    s32 r6 = func_ov075_02271c94();
    func_020e7518(&unk_715);
    if (r6 != 0) {
        if (func_ov075_02271aa4() == 0) {
            if (func_02019790(r4) != 0) {
                if (func_0201acfc(unk_3aa) == 2) {
                    Unk_ov075_0227188c_CallA();
                } else if ((func_020e7fa8(data_021c7c88) & 7) == 0) {
                    Unk_ov075_Vec3 a;
                    a.x = ((Unk_ov075_Vec3 *)data_021f4880)->x;
                    a.y = ((Unk_ov075_Vec3 *)data_021f4880)->y;
                    a.z = ((Unk_ov075_Vec3 *)data_021f4880)->z;
                    if (func_ov075_02271c04(&a.x, &a.z) != 0) {
                        r6 = func_02002bdc(&unk_5c, &a);
                        if (func_0201bd84((s16)(r6 - unk_8e)) != 0) {
                            r6 = 1;
                            if (func_02063b8c(4) == 0) {
                                r6 = 2;
                            }
                            func_020196b4(r4, r6, 1, a.x, a.z, 0, 0, 0, 0, data_020c6cc8, 0);
                            unk_715 = 100;
                        } else {
                            func_020196b4(r4, 4, 1, a.x, a.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            unk_715 = 80;
                        }
                    } else {
                        Unk_ov075_0227188c_CallA();
                    }
                } else {
                    Unk_ov075_0227188c_CallA();
                }
            } else {
                if (unk_98 != 0) {
                    if (func_020197a8(unk_564) == 1 || func_020197a8(unk_564) == 2 || func_020197a8(unk_564) == 4) {
                        if (unk_715 == 0) {
                            Unk_ov075_0227188c_CallA();
                        } else {
                            Unk_ov075_Vec3 b;
                            Unk_ov075_Vec3 *q = func_0201a978(unk_350);
                            b.x = q->x;
                            b.y = q->y;
                            b.z = q->z;
                            if (func_0201bd84((s16)(func_02002bdc(&unk_5c, &b) - unk_8e)) == 0) {
                                Unk_ov075_0227188c_CallA();
                            }
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271aa4() {
    if (unk_98 != 0) {
        if (func_ov075_02271ac8()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271ac8() {
    u8 *a = unk_564;
    u8 *b = unk_350;
    s32 r6 = func_0201a7e8(unk_3a8);
    BOOL r = FALSE;
    Unk_ov075_Vec3 t;
    if (func_0201a9a0(b, this, 1) == 0) {
        switch (r6) {
        case 3:
            func_020196b4(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (func_ov075_02271bc8(&t, data_ov075_022724bc)) {
                func_0201a97c(b, &t);
            } else {
                func_020196b4(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (func_ov075_02271bc8(&t, data_ov075_022724b0)) {
                func_0201a97c(b, &t);
            } else {
                func_020196b4(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (func_0201a968(b)) {
            func_0201a8f0(b);
        }
    }
    return r;
}

BOOL Unk_ov075_022723bc::func_ov075_02271bc8(Unk_ov075_Vec3 *out, void *p) {
    BOOL r = FALSE;
    Unk_ov075_Vec4 t;
    func_0201a900(&t, &unk_5c, p, unk_94);
    if (func_0201a834(&t) != 1) {
        out->x = t.v[0];
        out->y = t.v[1];
        out->z = t.v[2];
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov075_022723bc::func_ov075_02271c04(s32 *px, s32 *pz) {
    BOOL r = FALSE;
    Unk_ov075_Vec3 v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)func_020e7fa8(data_021c7c88) >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + unk_5c.x;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + unk_5c.z;
        func_0204edd8(&v, &v);
        if (func_02077f40(&v, r) != 0) {
            *px = v.x;
            *pz = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

s32 Unk_ov075_022723bc::func_ov075_02271c94() {
    Unk_ov075_Vec3 *p = &unk_5c;
    s32 r = 0;
    if (data_021c3070 != 0) {
        Unk_ov075_Vec3 v;
        v.x = data_021c309c.x;
        v.y = data_021c309c.y;
        v.z = data_021c309c.z;
        r = func_ov075_02271ccc(this, &v, p);
    }
    return r;
}

BOOL Unk_ov075_022723bc::func_ov075_02271800() {
    return TRUE;
}
