#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov079_02272ac4;
class Unk_ov079_02272a34;

struct Unk_ov079_Vec3 {
    s32 x, y, z;
};

extern "C" {
void func_02014f74(void *p);
void func_02014ce4(void *p, u16 *q, s32 a, s32 b, s32 c);
BOOL func_0206ed18();
s32 func_0206ed38();
u32 func_02099048(s32 v);
void func_02099064(s32 v);
BOOL func_0203d67c(void *p);
void *func_02015aac(void *p);
u32 func_0201bcbc(void *p, void *q);
void func_020135bc(void *p);
void func_020135c4(void *p);
void func_020196b4(void *p, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
BOOL func_02014220(void *p);
void func_020141b4(void *p, u32 a, u32 b, u32 c);
void func_020e7518(void *p);
s32 func_020e7fa8(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02063b8c(u32 n);
BOOL func_02019790(void *p);
s32 func_020197a8(void *p);
s32 func_0201acfc(void *p);
BOOL func_0201bd84(s16 a);
s32 func_02002bdc(void *a, void *b);
void *func_0201a978(void *p);
BOOL func_0201a9a0(void *a, void *b, u32 c);
s32 func_0201a7e8(void *p);
void func_0201a97c(void *a, void *b);
BOOL func_0201a968(void *a);
void func_0201a8f0(void *a);
void func_0201a900(void *out, void *base, void *off, s32 ang);
BOOL func_0201a834(void *pos);
void func_0204edd8(void *a, void *b);
BOOL func_02077f40(void *v, s32 a);
void func_0201a6c0(void *p, u32 a, u32 b, void *c, void *d, u32 e, u32 f, u32 g);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 data_021c7c88[];
extern u8 data_021f4880[];
extern u32 data_021c3070;
extern u8 data_021c309c[];
extern u8 data_0213a740[];
extern s16 data_02135f44[];
extern u8 data_ov079_02272b70[];
extern u8 data_ov079_02272bc0[];
extern u8 data_ov079_02272bb4[];
}

struct Unk_ov079_02272574_Ent {
    BOOL (Unk_ov079_02272ac4::*enter)();
    BOOL (Unk_ov079_02272ac4::*exit)();
};

extern "C" {
extern Unk_ov079_02272574_Ent data_ov079_02272be4[];
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    u8 pad_04[0x38];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

typedef void (Unk_ov079_02272a34::*Unk_ov079_02272a34_Fn)();


class Unk_ov079_02272a34 : public Unk_020d8b38 {
public:
    virtual ~Unk_ov079_02272a34();
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
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov079_02271d2c();
    void func_ov079_02271d34();
    BOOL func_ov079_02271ebc(u32 x);
    void func_ov079_02271ec8(s32 idx);
    void func_ov079_02271ed8(s32 idx);
    void func_ov079_02271ee8(Unk_ov079_02272a34_Fn *dst, s32 idx);
    void func_ov079_02271718();

    s32 unk_ac;
    Unk_ov079_02272a34_Fn unk_b0;
    Unk_ov079_02272a34_Fn unk_b8;
    u16 unk_c0;
    u8 pad_c2[2];
    s32 unk_c4;
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    u32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual void vfunc_48();
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

    u16 unk_ea;
    u8 unk_ec[0x350 - 0xec];
    u8 unk_350[0x3a8 - 0x350];
    u8 unk_3a8[2];
    u8 unk_3aa[6];
    u8 unk_3b0[0x558 - 0x3b0];
    u8 unk_558[0x564 - 0x558];
    u8 unk_564[0x618 - 0x564];
    u8 unk_618[0x640 - 0x618];
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();

    u8 unk_640[8];
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov079_02272ac4 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov079_02272ac4();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_68();

    BOOL func_ov079_02271fcc();
    BOOL func_ov079_02271fd0();
    BOOL func_ov079_02271ffc();
    BOOL func_ov079_02272000();
    BOOL func_ov079_02272004();
    BOOL func_ov079_02272040();
    BOOL func_ov079_0227205c();
    BOOL func_ov079_022720ac();
    BOOL func_ov079_022722f4();
    BOOL func_ov079_02272318();
    BOOL func_ov079_02272418(Unk_ov079_Vec3 *out, void *in);
    BOOL func_ov079_02272454(s32 *x, s32 *z);
    BOOL func_ov079_022724e4();
    BOOL func_ov079_0227251c(Unk_ov079_Vec3 *a, Unk_ov079_Vec3 *b);
    BOOL func_ov079_02272574();
    void func_ov079_022725f4(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov079_02272a34 unk_658;
};

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov079_02272a34::func_ov079_02271d2c() {
    func_02014f74(this);
}

void Unk_ov079_02272a34::func_ov079_02271d34() {
    Unk_020660f8 *m = unk_3c;
    u8 v = 1;
    unk_c4 = -1;
    if (func_0206ed18()) {
        unk_c4 = func_0206ed38();
        unk_c0 = func_02099048(unk_c4);
        v = 2;
        BOOL f = FALSE;
        u16 c = unk_c0;
        if (c >= 0x12e8 && c <= 0x131f) {
            f = TRUE;
        }
        if (f || (c >= 0x1531 && c <= 0x153a) || (c >= 0x1518 && c <= 0x151c) || (c >= 0x1542 && c <= 0x1546) ||
            (c >= 0x1548 && c <= 0x1548) || (c >= 0x153b && c <= 0x1541)) {
            v = 3;
        }
        BOOL g = FALSE;
        c = unk_c0;
        if (c >= 0x136a && c <= 0x136a) {
            g = TRUE;
        }
        if (g || (c >= 0x1373 && c <= 0x1373) || (c >= 0x1375 && c <= 0x1375) || (c >= 0x1377 && c <= 0x1377) ||
            (c >= 0x1379 && c <= 0x1379) || (c >= 0x137b && c <= 0x137b)) {
            v = 0xb;
            unk_c4 = -1;
        }
        if (unk_c4 >= 0) {
            func_02099064(unk_c4);
            unk_c4 = -1;
        }
        func_02014ce4(this, &unk_c0, 0, 4, 0);
        func_ov079_02271ec8(1);
    } else {
        func_02014f74(this);
    }
    m->func_02067a84(&v, data_ov079_02272b70);
}

BOOL Unk_ov079_02272a34::func_ov079_02271ebc(u32 x) {
    if (x == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov079_02272a34::func_ov079_02271ec8(s32 idx) {
    func_ov079_02271ee8(&unk_b8, idx);
}

void Unk_ov079_02272a34::func_ov079_02271ed8(s32 idx) {
    func_ov079_02271ee8(&unk_b0, idx);
}

void Unk_ov079_02272a34::func_ov079_02271ee8(Unk_ov079_02272a34_Fn *dst, s32 idx) {
    static Unk_ov079_02272a34_Fn tbl[3] = {&Unk_ov079_02272a34::func_ov079_02271d34, &Unk_ov079_02272a34::func_ov079_02271d2c,
                                           &Unk_ov079_02272a34::func_ov079_02271718};
    *dst = tbl[idx];
}

void Unk_ov079_02272a34::vfunc_84() {
    if (unk_b0 != NULL) {
        (this->*unk_b0)();
        Unk_ov079_02272a34_Fn t = *(Unk_ov079_02272a34_Fn *)data_0213a740;
        unk_b0 = t;
        if (unk_b8 != NULL) {
            unk_b0 = unk_b8;
            unk_b8 = t;
        }
    }
}

BOOL Unk_ov079_02272ac4::func_ov079_02271fcc() { return TRUE; }

BOOL Unk_ov079_02272ac4::func_ov079_02271fd0() {
    if (func_02014220(unk_618) == 0) {
        func_0203d67c(this);
        func_ov079_022725f4(1);
    }
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_02271ffc() { return TRUE; }

BOOL Unk_ov079_02272ac4::func_ov079_02272000() { return TRUE; }

BOOL Unk_ov079_02272ac4::func_ov079_02272004() {
    void *p = func_02015aac(&unk_658);
    s32 x = unk_8e;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    func_020141b4(unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272040() {
    if (func_ov079_022724e4()) {
        func_ov079_022725f4(2);
    }
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_0227205c() {
    func_020196b4(unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_651 = 0;
    func_020135bc(unk_558);
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_022720ac() {
    void *p = unk_564;
    BOOL a = func_ov079_022724e4();
    func_020e7518(&unk_651);
    if (a) {
        if (func_ov079_022722f4() == 0) {
            if (func_02019790(p)) {
                if (func_0201acfc(unk_3aa) == 2) {
                    func_020196b4(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((func_020e7fa8(data_021c7c88) & 7) == 0) {
                    Unk_ov079_Vec3 v;
                    v.x = ((Unk_ov079_Vec3 *)data_021f4880)->x;
                    v.y = ((Unk_ov079_Vec3 *)data_021f4880)->y;
                    v.z = ((Unk_ov079_Vec3 *)data_021f4880)->z;
                    if (func_ov079_02272454(&v.x, &v.z)) {
                        s32 t = func_02002bdc(&unk_5c, &v);
                        if (func_0201bd84((s16)(t - unk_8e))) {
                            t = 1;
                            if (func_02063b8c(4) == 0) {
                                t = 2;
                            }
                            if (t != func_020197a8(unk_564)) {
                                func_020196b4(p, t, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_651 = 0x64;
                            }
                        } else if (func_020197a8(unk_564) != 4) {
                            func_020196b4(p, 4, 1, v.x, v.z, 0, t, 0, 0, data_020c6cc8, 0);
                            unk_651 = 0x50;
                        }
                    } else {
                        func_020196b4(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    func_020196b4(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (unk_98 != 0) {
                if (func_020197a8(unk_564) == 1 || func_020197a8(unk_564) == 2 || func_020197a8(unk_564) == 4) {
                    if (unk_651 == 0) {
                        func_020196b4(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        Unk_ov079_Vec3 *q = (Unk_ov079_Vec3 *)func_0201a978(unk_350);
                        Unk_ov079_Vec3 w;
                        w.x = q->x;
                        w.y = q->y;
                        w.z = q->z;
                        if (func_0201bd84((s16)(func_02002bdc(&unk_5c, &w) - unk_8e)) == 0) {
                            func_020196b4(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        }
                    }
                }
            }
        }
    } else if (unk_98 != 0) {
        func_ov079_022725f4(3);
    }
    return FALSE;
}

BOOL Unk_ov079_02272ac4::func_ov079_022722f4() {
    if (unk_98 != 0) {
        if (func_ov079_02272318()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272318() {
    void *p564 = unk_564;
    void *p350 = unk_350;
    s32 k = func_0201a7e8(unk_3a8);
    BOOL r = FALSE;
    Unk_ov079_Vec3 v;
    if (!func_0201a9a0(p350, this, 1)) {
        switch (k) {
        case 3:
            func_020196b4(p564, r, 1, r, r, r, r, r, r, data_020c6cc8, r);
            r = TRUE;
            break;
        case 1:
            if (func_ov079_02272418(&v, data_ov079_02272bc0)) {
                func_0201a97c(p350, &v);
            } else {
                func_020196b4(p564, r, 1, r, r, r, r, r, r, data_020c6cc8, r);
            }
            r = TRUE;
            break;
        case 2:
            if (func_ov079_02272418(&v, data_ov079_02272bb4)) {
                func_0201a97c(p350, &v);
            } else {
                func_020196b4(p564, r, 1, r, r, r, r, r, r, data_020c6cc8, r);
            }
            r = TRUE;
            break;
        }
    } else if (func_0201a968(p350)) {
        func_0201a8f0(p350);
    }
    return r;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272418(Unk_ov079_Vec3 *out, void *in) {
    BOOL r = FALSE;
    Unk_ov079_Vec3 v;
    func_0201a900(&v, &unk_5c, in, unk_94);
    if (func_0201a834(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272454(s32 *px, s32 *pz) {
    Unk_ov079_Vec3 v;
    BOOL r = FALSE;
    s32 i;
    v.x = r;
    v.y = r;
    v.z = r;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)func_020e7fa8(data_021c7c88) >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + unk_5c;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + unk_64;
        func_0204edd8(&v, &v);
        if (func_02077f40(&v, r)) {
            *px = v.x;
            *pz = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL Unk_ov079_02272ac4::func_ov079_022724e4() {
    Unk_ov079_Vec3 *b = (Unk_ov079_Vec3 *)&unk_5c;
    BOOL r = FALSE;
    Unk_ov079_Vec3 v;
    if (data_021c3070 != 0) {
        v.x = ((Unk_ov079_Vec3 *)data_021c309c)->x;
        v.y = ((Unk_ov079_Vec3 *)data_021c309c)->y;
        v.z = ((Unk_ov079_Vec3 *)data_021c309c)->z;
        r = func_ov079_0227251c(&v, b);
    }
    return r;
}

BOOL Unk_ov079_02272ac4::func_ov079_0227251c(Unk_ov079_Vec3 *a, Unk_ov079_Vec3 *b) {
    BOOL r = FALSE;
    BOOL f2 = FALSE;
    BOOL f1 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - 0x10000) {
        if (bx < ax + 0x10000) {
            f1 = TRUE;
        }
    }
    if (f1) {
        if (b->z > a->z - 0x1a000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        if (b->z < a->z + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272574() {
    unk_651 = 0;
    func_020196b4(unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    func_020135c4(unk_558);
    func_020135c4(unk_558);
    func_0201a6c0(unk_3b0, 1, 0, NULL, data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

void Unk_ov079_02272ac4::func_ov079_022725f4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov079_02272be4[state].enter != NULL) {
        ok = (this->*data_ov079_02272be4[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}
