#include "types.h"

struct Unk_0203a9b8_Vec {
    s32 x, y, z;
};

struct Unk_0203a9b8_Cfg {
    u8 pad[4];
    u8 unk_04;
};

struct Unk_0203a9b8_Row {
    s32 v[3];
};

class Unk_0203a9b8;

struct Unk_0203a9b8_Sub {
    s32 unk_00;
    s16 unk_04, unk_06;
};

extern "C" {
extern Unk_0203a9b8_Vec data_021f4880;
extern Unk_0203a9b8_Cfg *data_021ef2f0;
extern Unk_0203a9b8_Row data_020c8ce8[];
extern s16 data_02135f44[];
Unk_0203a9b8_Vec *func_020947f0(s32 id);
void *func_ov003_022120ac(s32 id);
void func_020e9960(Unk_0203a9b8_Vec *out, Unk_0203a9b8_Vec *a, void *b);
s32 func_020e9688(Unk_0203a9b8_Vec *v);
s32 func_02002bdc(Unk_0203a9b8_Vec *a, void *b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_020e944c(Unk_0203a9b8_Vec *v, s16 a);
void func_020e93a0(Unk_0203a9b8_Vec *v, s16 a);
void func_01ffd070(Unk_0203a9b8_Vec *out, Unk_0203a9b8_Vec *a, Unk_0203a9b8_Vec *b);
void func_01ffcbb0(Unk_0203a9b8_Vec *out, Unk_0203a9b8 *self);
s32 func_0206ede0();
s32 func_020b52f8();
s32 func_020b51a4();
s32 func_020b51fc();
s32 func_020b50e8();
void func_0203a458();
void func_0203a468();
BOOL func_0203a488();
void func_0203a378();
s32 func_ov068_0226647c(Unk_0203a9b8 *self);
void func_ov004_0223fe00(Unk_0203a9b8 *self, s32 a);
void func_ov003_0222ef10(Unk_0203a9b8 *self);
}

class Unk_0203a9b8 {
public:
    BOOL func_0203a9b8();
    void func_0203a9dc();
    BOOL func_0203aa20();
    void func_0203aa34();
    BOOL func_0203ab0c();
    void func_0203ab2c();
    BOOL func_0203abb4();
    void func_0203abfc();
    BOOL func_0203ac84();
    void func_0203acbc();
    BOOL func_0203ad18();
    void func_0203ad84();
    BOOL func_0203aed0();
    void func_0203af68();
    void func_0203b094();
    void func_0203b160();
    BOOL func_0203b28c();

    void func_0203a234(s32 a);
    void func_0203b350(Unk_0203a9b8_Vec *v);
    void func_0203b3c4(Unk_0203a9b8_Vec *a, Unk_0203a9b8_Vec *b);
    void func_0203b484(Unk_0203a9b8_Vec *v, s32 a, s32 b, s32 c);
    void func_0203b56c();
    void func_0203b93c(Unk_0203a9b8_Vec *v);
    void func_0203c09c(s32 a);
    void func_0203c1a4(s32 a, s32 b);
    s16 func_0203bc7c();
    s16 func_0203bc68();
    s32 func_0203bc48();
    Unk_0203a9b8_Vec *func_0203bc9c();

    u8 pad_00[0xfc];
    s16 unk_fc;
    s16 unk_fe;
    s32 unk_100, unk_104, unk_108, unk_10c;
    s32 unk_110, unk_114, unk_118;
    s16 unk_11c, unk_11e;
    s32 unk_120, unk_124, unk_128, unk_12c, unk_130, unk_134, unk_138;
    s32 unk_13c, unk_140, unk_144;
    u8 pad_148[0x168 - 0x148];
    s32 unk_168, unk_16c, unk_170;
    u8 pad_174[0x1e4 - 0x174];
    s32 unk_1e4;
    s32 unk_1e8;
    s32 unk_1ec;
    s32 unk_1f0;
    u8 unk_1f4;
    u8 unk_1f5;
    u8 unk_1f6;
    u8 pad_1f7;
    s32 unk_1f8;
    s32 unk_1fc;
    u8 pad_200[4];
    s32 unk_204, unk_208, unk_20c, unk_210, unk_214, unk_218;
    Unk_0203a9b8_Sub unk_21c;
};

#define R096_TAIL(V) \
    func_0203b56c(); \
    func_01ffcbb0(&V, this); \
    s32 a = func_0203bc7c(); \
    s32 b = func_0203bc68(); \
    func_0203b484(&V, a, b, func_0203bc48());

BOOL Unk_0203a9b8::func_0203a9b8() {
    Unk_0203a9b8_Sub *sub = &unk_21c;
    sub->unk_04 = 0;
    sub->unk_06 = 0x2000;
    func_0203a468();
    return TRUE;
}

void Unk_0203a9b8::func_0203a9dc() {
    Unk_0203a9b8_Vec v;
    func_0203a378();
    R096_TAIL(v)
}

BOOL Unk_0203a9b8::func_0203aa20() {
    func_0203a378();
    func_0203a468();
    return TRUE;
}

void Unk_0203a9b8::func_0203aa34() {
    Unk_0203a9b8_Vec d;
    d = data_021f4880;
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    void *q = func_ov003_022120ac(4);
    if (p && q) {
        Unk_0203a9b8_Vec t;
        func_020e9960(&t, p, q);
        s32 len = func_020e9688(&t);
        s32 ang = func_02002bdc(p, q);
        s32 sc = func_01ffcb0c(len, 0xb33);
        d = *p;
        s32 idx = ((u16)ang >> 4) * 2;
        d.x += func_01ffcb0c(sc, data_02135f44[idx]);
        d.z += func_01ffcb0c(sc, data_02135f44[idx + 1]);
    }
    func_0203b350(&d);
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Unk_0203a9b8::func_0203ab0c() {
    func_0203c1a4(0, 0);
    func_0203c09c(0);
    func_0203a458();
    return TRUE;
}

void Unk_0203a9b8::func_0203ab2c() {
    volatile Unk_0203a9b8_Vec d;
    d.x = data_021f4880.x;
    d.y = data_021f4880.y;
    d.z = data_021f4880.z;
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    unk_110 = d.x;
    unk_114 = d.y;
    unk_118 = d.z;
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Unk_0203a9b8::func_0203abb4() {
    if (data_021ef2f0->unk_04 == 0) {
        func_0203c1a4(0xd, 0);
    } else {
        func_0203c1a4(0xc, 0);
    }
    func_0203c09c(0);
    func_0203a458();
    unk_1e4 = 0x1000;
    return TRUE;
}

void Unk_0203a9b8::func_0203abfc() {
    volatile Unk_0203a9b8_Vec d;
    d.x = data_021f4880.x;
    d.y = data_021f4880.y;
    d.z = data_021f4880.z;
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    unk_110 = d.x;
    unk_114 = d.y;
    unk_118 = d.z;
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Unk_0203a9b8::func_0203ac84() {
    if (data_021ef2f0->unk_04 == 0) {
        func_0203c1a4(0x1c, 0);
    } else {
        func_0203c1a4(0x1b, 0);
    }
    func_0203c09c(3);
    func_0203a458();
    return TRUE;
}

void Unk_0203a9b8::func_0203acbc() {
    if (data_021ef2f0->unk_04 == 0) {
        func_ov004_0223fe00(this, 0);
    } else {
        func_ov003_0222ef10(this);
    }
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Unk_0203a9b8::func_0203ad18() {
    if (data_021ef2f0->unk_04 == 0) {
        func_0203c1a4(0xb, 0);
        unk_1f6 = 3;
        func_ov004_0223fe00(this, 0);
    } else {
        func_0203c1a4(0xa, 0);
        func_ov003_0222ef10(this);
    }
    func_0203c09c(0);
    if (unk_1fc == 1) {
        func_0203a468();
    } else {
        func_0203a458();
    }
    func_0203a234(0x2f);
    return TRUE;
}

void Unk_0203a9b8::func_0203ad84() {
    volatile Unk_0203a9b8_Vec d;
    Unk_0203a9b8_Vec v, e, r, o, v2;
    d.x = data_021f4880.x;
    d.y = data_021f4880.y;
    d.z = data_021f4880.z;
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    if (unk_1f4 == 0) {
        func_0203b56c();
        func_01ffcbb0(&v, this);
        Unk_0203a9b8_Vec *pp = func_0203bc9c();
        e.x = pp->x;
        e.y = pp->y;
        e.z = pp->z;
        if (func_0203a488()) {
            s32 z = func_0203bc48();
            r.x = 0;
            r.y = 0;
            r.z = z;
            func_020e944c(&r, -func_0203bc7c());
            func_020e93a0(&r, func_0203bc68());
            func_01ffd070(&o, &v, &r);
            e.x = o.x;
            e.y = o.y;
            e.z = o.z;
        }
        v.y = v.y + (0x1000 - func_0206ede0()) * 15;
        e.y = e.y + (0x1000 - func_0206ede0()) * 2;
        if (unk_1fc == 9) {
            v.y = v.y + func_ov068_0226647c(this);
        }
        func_0203b3c4(&v, &e);
    } else {
        unk_110 = d.x;
        unk_114 = d.y;
        unk_118 = d.z;
        R096_TAIL(v2)
    }
}

BOOL Unk_0203a9b8::func_0203aed0() {
    Unk_0203a9b8_Vec v;
    if (unk_1f4 == 0) {
        func_01ffcbb0(&v, this);
        unk_204 = v.x;
        unk_208 = v.y;
        unk_20c = v.z;
        Unk_0203a9b8_Vec *p = func_0203bc9c();
        unk_210 = p->x;
        unk_214 = p->y;
        unk_218 = p->z;
        func_0203a468();
    } else {
        if (data_021ef2f0->unk_04 == 0) {
            func_0203c1a4(0xf, 0);
        } else {
            func_0203c1a4(0xe, 0);
        }
        func_0203c09c(1);
        func_0203a458();
    }
    return TRUE;
}

void Unk_0203a9b8::func_0203af68() {
    unk_1f4 = 0;
    func_0203aed0();
    unk_fc = unk_11c;
    unk_fe = unk_11e;
    unk_100 = unk_120;
    unk_104 = unk_124;
    unk_108 = unk_128;
    unk_10c = unk_12c;
    unk_110 = unk_130;
    unk_114 = unk_134;
    unk_118 = unk_138;
    unk_168 = unk_13c;
    unk_16c = unk_140;
    unk_170 = unk_144;
    unk_204 = unk_110;
    unk_208 = unk_114;
    unk_20c = unk_118;
    unk_210 = unk_168;
    unk_214 = unk_16c;
    unk_218 = unk_170;
    func_0203a458();
    func_0203c09c(2);
}

void Unk_0203a9b8::func_0203b094() {
    unk_1f4 = 1;
    unk_11c = unk_fc;
    unk_11e = unk_fe;
    unk_120 = unk_100;
    unk_124 = unk_104;
    unk_128 = unk_108;
    unk_12c = unk_10c;
    unk_130 = unk_110;
    unk_134 = unk_114;
    unk_138 = unk_118;
    unk_13c = unk_168;
    unk_140 = unk_16c;
    unk_144 = unk_170;
    func_0203aed0();
}

void Unk_0203a9b8::func_0203b160() {
    volatile Unk_0203a9b8_Vec cur;
    cur.x = unk_110;
    cur.y = unk_114;
    cur.z = unk_118;
    volatile Unk_0203a9b8_Vec d;
    d.x = data_021f4880.x;
    d.y = data_021f4880.y;
    d.z = data_021f4880.z;
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    if (data_021ef2f0->unk_04 == 0) {
        if (func_020b52f8() || func_020b51a4() || (func_020b51fc() && func_020b50e8() != 0x20 && func_020b50e8() != 0x22)) {
            func_0203c1a4(data_020c8ce8[unk_1f0].v[unk_1ec], 0);
            unk_110 = d.x;
            unk_114 = d.y;
            unk_118 = d.z;
            if (unk_1f0 != 0) {
                func_0203b93c((Unk_0203a9b8_Vec *)&unk_110);
            }
        } else {
            unk_110 = d.x;
            unk_114 = d.y;
            unk_118 = d.z;
            func_0203b93c((Unk_0203a9b8_Vec *)&unk_110);
        }
    } else {
        func_0203b350((Unk_0203a9b8_Vec *)&d);
    }
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Unk_0203a9b8::func_0203b28c() {
    if (data_021ef2f0->unk_04 == 0) {
        if (unk_1fc == 2) {
            unk_1f5 = 0;
        }
        func_0203c1a4(data_020c8ce8[unk_1f0].v[unk_1ec], 0);
    } else {
        func_0203c1a4(0, 0);
    }
    func_0203c09c(0);
    s32 t = unk_1fc;
    if (t == 2 || t == 4 || t == 0x10 || t == 5 || t == 6 || t == 0x12 || (u32)(t - 0xb) <= 1) {
        func_0203a458();
        unk_1e4 = 0;
    } else {
        unk_1e4 = 0;
        unk_1e8 = 0;
        func_0203a468();
    }
    if (unk_1fc == 2 || unk_1fc == 0x10) {
        func_0203a234(0x30);
    }
    return TRUE;
}
