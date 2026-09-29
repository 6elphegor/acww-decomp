#include "Unk_020d8c7c.h"

extern "C" {
void func_0201bc28(void *a, void *b);
void func_0201a8d0(void *self, s32 a, s32 b, s32 c, s32 d);
s32 func_020b50e8(void);
void func_020196b4(void *self, s32 a, s32 b, s32 c, s32 d0, s32 d1, s32 d2, s32 d3, s32 d4, s32 d5, s32 d6);
void func_020135bc(void *self);
void func_020135c4(void *self);
s32 func_02019790(void *self);
s32 func_0201acfc(void *self);
s32 func_0201a7e8(void *self);
s32 func_0201a9a0(void *self, void *owner, s32 a);
void func_0201a97c(void *self, void *v);
s32 func_0201a968(void *self);
void func_0201a8f0(void *self);
s32 func_020197a8(void *self);
void *func_0201a978(void *self);
void func_0201a900(void *out, void *pos, void *a, s32 b);
s32 func_0201a834(void *v);
s32 func_02002bdc(void *pos, void *v);
s32 func_0201bd84(s16 a);
void func_0201a6c0(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_020e7518(void *p);
u32 func_020e7fa8(void *p);
u32 func_02063b8c(u32 n);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204edd8(void *a, void *b);
s32 func_02077f40(void *v, s32 a);
void func_02015818(void *self, s32 a, s32 b);
void *func_0209750c(void);
void *func_020986a4(void);
s32 func_02087364(void *p);
s32 func_02098044(void *p, s32 a);
void func_0209801c(void *p, s32 a);
s32 func_0202e1cc(s32 a, s32 b);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_021f4880[3];
extern s32 data_021f4664[3];
extern s32 data_021f4658[3];
extern s32 data_021c3070;
extern s32 data_021c309c[3];
extern u8 data_021c7c88[];
extern s16 data_02135f44[];
extern const char *data_020e69d0;
}

struct Unk_020c17f8_Vec {
    s32 x, y, z;
};

// Model/animation-like helper object embedded at 0x658 of Unk_020e6924 (constructed by func_020c0688)
struct Unk_020e6894 {
    u8 unk_00[0xac];
    u32 unk_ac;
    s32 unk_b0;
    u8 unk_b4[0xd0 - 0xb4];
    Unk_020e6894();
    void func_020c0634(void *owner);
};

struct Unk_020e6ad8 : Unk_020e6894 {
    void vfunc_10();
    void vfunc_14();
    void vfunc_18();
    void vfunc_78(void *out);
    s32 func_020c1e44();
    void func_020c1e4c(s32 v);
    ~Unk_020e6ad8();
};

struct Unk_0203e7a4 : Unk_020d8c7c_Base {
    u8 unk_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 unk_68[0x26];
    s16 unk_8e;
    u8 unk_90[4];
    s16 unk_94;
    u8 unk_96[2];
    s32 unk_98;
    u8 unk_9c[0xea - 0x9c];
    Unk_0203e7a4();
    BOOL func_0202e514();
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
    }
MEMBER(Unk_02053d3c, 0x2a0 - 0xec);
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
MEMBER(Unk_0201a8bc, 2);
MEMBER(Unk_0201ad18, 6);
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_020323b0, 0x30);
MEMBER(Unk_02088d00, 0x514 - 0x4cc);
MEMBER(Unk_020f4080, 0x558 - 0x514);
MEMBER(Unk_020135e4, 0xc);
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);

struct Unk_02082014 {
    u8 unk_00[0x11];
    u8 unk_11;
    u8 unk_12[6];
    Unk_02082014();
};

struct Unk_020d77a4 : Unk_0203e7a4 {
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
    Unk_020d77a4() : unk_ea(0xfff1) {}
};

struct Unk_020d8bc8 : Unk_020d77a4 {
    Unk_02082014 unk_640;
    Unk_020d8bc8() {}
};

struct Unk_020e6924 : Unk_020d8bc8 {
    Unk_020e6894 unk_658;
    Unk_020e6924() {}

    BOOL vfunc_04();
    BOOL func_020c178c();
    BOOL func_020c17a8();
    BOOL func_020c17f8();
    BOOL func_020c1a40();
    BOOL func_020c1a64();
    BOOL func_020c1b64(Unk_020c17f8_Vec *out, s32 *data);
    BOOL func_020c1ba0(s32 *px, s32 *pz);
    BOOL func_020c1c30();
    BOOL func_020c1c68(Unk_020c17f8_Vec *a, Unk_020c17f8_Vec *b);
    BOOL func_020c1cc0();
    void func_020c2194(s32 s);
};

class Unk_0202e5a8 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_0202e5a8();
};

class Unk_020e6b68 : public Unk_0202e5a8 {
public:
    u8 unk_04[0x654];
    Unk_020e6ad8 unk_658;
    virtual ~Unk_020e6b68();
};

#define ZERO_CALL(obj, a, b, c) \
    func_020196b4(obj, a, b, c, 0, 0, 0, 0, 0, data_020c6cc8, 0)

s32 Unk_020e6ad8::func_020c1e44() {
    return unk_b0;
}

void Unk_020e6ad8::func_020c1e4c(s32 v) {
    unk_b0 = v;
}

void Unk_020e6ad8::vfunc_78(void *outp) {
    struct Unk_020c1d80_Out {
        const char *unk_00;
        u8 unk_04;
    };
    Unk_020c1d80_Out *out = (Unk_020c1d80_Out *)outp;
    void *p = func_0209750c();
    out->unk_00 = data_020e69d0;
    if (func_02098044(p, 0x33) == 0) {
        if (func_02098044(p, 0x39) == 0) {
            func_020c1e4c(0);
        } else {
            func_020c1e4c(1);
        }
    } else {
        if (func_0202e1cc(0x2a, 0) == 0) {
            func_020c1e4c(2);
        } else {
            func_020c1e4c(3);
        }
    }
    switch (func_020c1e44()) {
    case 0:
        func_0209801c(p, 0x33);
        out->unk_04 = 0;
        break;
    case 1:
        func_0209801c(p, 0x33);
        out->unk_04 = func_02063b8c(3) + 1;
        break;
    case 2:
        out->unk_04 = func_02063b8c(3) + 4;
        func_0202e1cc(0x2a, 1);
        break;
    case 3:
        out->unk_04 = func_02063b8c(3) + 7;
        break;
    }
}

void Unk_020e6ad8::vfunc_10() {
    func_0209750c();
    void *r4 = func_020986a4();
    func_02015818(this, func_02087364(r4), 0);
    func_02015818(this, func_02087364(r4), 1);
}

void Unk_020e6ad8::vfunc_14() {}
void Unk_020e6ad8::vfunc_18() {}

BOOL Unk_020e6924::func_020c1cc0() {
    unk_640.unk_11 = 0;
    ZERO_CALL(&unk_564, 0, 1, 0);
    func_020135c4(&unk_558);
    func_020135c4(&unk_558);
    func_0201a6c0(&unk_3b0, 1, 0, 0, (s32)data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_020e6924::func_020c1c68(Unk_020c17f8_Vec *a, Unk_020c17f8_Vec *b) {
    BOOL r = FALSE, c = FALSE, d = FALSE;
    s32 x = a->x;
    s32 bx = b->x;
    if (bx > x - 0x10000 && bx < x + 0x10000) {
        d = TRUE;
    }
    if (d) {
        if (b->z > a->z - 0x1a000) {
            c = TRUE;
        }
    }
    if (c) {
        if (b->z < a->z + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_020e6924::func_020c1c30() {
    Unk_020c17f8_Vec *pos = (Unk_020c17f8_Vec *)&unk_5c;
    s32 r = 0;
    if (data_021c3070 != 0) {
        Unk_020c17f8_Vec v;
        v.x = data_021c309c[0];
        v.y = data_021c309c[1];
        v.z = data_021c309c[2];
        r = func_020c1c68(&v, pos);
    }
    return r;
}

BOOL Unk_020e6924::func_020c1ba0(s32 *px, s32 *pz) {
    s32 *ppx = px;
    s32 *ppz = pz;
    BOOL result = FALSE;
    Unk_020c17f8_Vec v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)func_020e7fa8(data_021c7c88) >> 4) * 2;
        s32 m = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = m + unk_5c;
        m = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = m + unk_64;
        func_0204edd8(&v, &v);
        if (func_02077f40(&v, 0)) {
            *ppx = v.x;
            *ppz = v.z;
            result = TRUE;
            break;
        }
    }
    return result;
}

BOOL Unk_020e6924::func_020c1b64(Unk_020c17f8_Vec *out, s32 *data) {
    BOOL result = FALSE;
    Unk_020c17f8_Vec v;
    func_0201a900(&v, &unk_5c, data, unk_94);
    if (func_0201a834(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        result = TRUE;
    }
    return result;
}

BOOL Unk_020e6924::func_020c1a40() {
    if (unk_98 != 0) {
        if (func_020c1a64()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_020e6924::func_020c1a64() {
    void *p564 = &unk_564;
    void *p350 = &unk_350;
    s32 st = func_0201a7e8(&unk_3a8);
    BOOL result = FALSE;
    Unk_020c17f8_Vec v;
    if (func_0201a9a0(p350, this, 1) == 0) {
        switch (st) {
        case 3:
            ZERO_CALL(p564, 0, 1, 0);
            result = TRUE;
            break;
        case 1:
            if (func_020c1b64(&v, data_021f4664)) {
                func_0201a97c(p350, &v);
            } else {
                ZERO_CALL(p564, 0, 1, 0);
            }
            result = TRUE;
            break;
        case 2:
            if (func_020c1b64(&v, data_021f4658)) {
                func_0201a97c(p350, &v);
            } else {
                ZERO_CALL(p564, 0, 1, 0);
            }
            result = TRUE;
            break;
        }
    } else {
        if (func_0201a968(p350)) {
            func_0201a8f0(p350);
        }
    }
    return result;
}

BOOL Unk_020e6924::func_020c17f8() {
    void *p564 = &unk_564;
    BOOL a = func_020c1c30();
    func_020e7518(&unk_640.unk_11);
    if (a) {
        if (!func_020c1a40()) {
            if (func_02019790(p564)) {
                if (func_0201acfc(&unk_3aa) == 2) {
                    ZERO_CALL(p564, 0, 1, 0);
                } else if ((func_020e7fa8(data_021c7c88) & 7) == 0) {
                    Unk_020c17f8_Vec v1;
                    v1.x = data_021f4880[0];
                    v1.y = data_021f4880[1];
                    v1.z = data_021f4880[2];
                    if (func_020c1ba0(&v1.x, &v1.z)) {
                        s32 ang = func_02002bdc(&unk_5c, &v1);
                        if (func_0201bd84(ang - unk_8e)) {
                            s32 k = 1;
                            if (func_02063b8c(4) == 0) {
                                k = 2;
                            }
                            if (k != func_020197a8(&unk_564)) {
                                func_020196b4(p564, k, 1, v1.x, v1.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_640.unk_11 = 0x64;
                            }
                        } else {
                            if (func_020197a8(&unk_564) != 4) {
                                func_020196b4(p564, 4, 1, v1.x, v1.z, 0, ang, 0, 0, data_020c6cc8, 0);
                                unk_640.unk_11 = 0x50;
                            }
                        }
                    } else {
                        ZERO_CALL(p564, 0, 1, 0);
                    }
                } else {
                    ZERO_CALL(p564, 0, 1, 0);
                }
            } else {
                if (unk_98 != 0) {
                    if (func_020197a8(&unk_564) == 1 || func_020197a8(&unk_564) == 2 || func_020197a8(&unk_564) == 4) {
                        if (unk_640.unk_11 == 0) {
                            ZERO_CALL(p564, 0, 1, 0);
                        } else {
                            Unk_020c17f8_Vec *src = (Unk_020c17f8_Vec *)func_0201a978(&unk_350);
                            Unk_020c17f8_Vec v2;
                            v2.x = src->x;
                            v2.y = src->y;
                            v2.z = src->z;
                            s32 ang = func_02002bdc(&unk_5c, &v2);
                            if (!func_0201bd84(ang - unk_8e)) {
                                ZERO_CALL(p564, 0, 1, 0);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (unk_98 != 0) {
            func_020c2194(8);
        }
    }
    return FALSE;
}

BOOL Unk_020e6924::func_020c17a8() {
    ZERO_CALL(&unk_564, 0, 1, 0);
    unk_640.unk_11 = 0;
    func_020135bc(&unk_558);
    return TRUE;
}

BOOL Unk_020e6924::func_020c178c() {
    if (func_020c1c30()) {
        func_020c2194(7);
    }
    return TRUE;
}

Unk_020e6b68::~Unk_020e6b68() {}

BOOL Unk_020e6924::vfunc_04() {
    if (!func_0202e514()) {
        return FALSE;
    }
    func_0201bc28(this, &unk_658);
    unk_658.func_020c0634(this);
    func_0201a8d0(&unk_350, 2, 0x333, 0xcc, 0x133);
    func_0201a8d0(&unk_350, 1, 0x1b3, 0xcc, 0x133);
    if (func_020b50e8() == 0xb) {
        unk_8e = -0x8000;
        unk_94 = -0x8000;
    }
    if (func_020b50e8() == 0xc) {
        unk_8e = -0x8000;
        unk_94 = -0x8000;
    }
    if (func_020b50e8() == 0x2f) {
        unk_8e = 0;
        unk_94 = 0;
        unk_5c = 0xe000;
        unk_64 = 0x4000;
        func_0201a8d0(&unk_350, 1, 0x280, 0xcc, 0x133);
    }
    unk_558.unk_00[0xb] = 1;
    return TRUE;
}

extern "C" Unk_020e6924 *func_020c1620(void) {
    return new Unk_020e6924();
}
