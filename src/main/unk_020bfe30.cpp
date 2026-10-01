#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020bfe30_Vec {
    s32 x, y, z;
};

static inline void Unk_020bfe30_Set(Unk_020bfe30_Vec *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}

struct Unk_020bfe38_Ent {
    u8 unk_00[0x5c];
    s32 unk_5c;
    u8 unk_60[8];
    s32 unk_68;
};

struct Unk_020bfec0_Ent {
    u8 unk_00[0x54];
    s32 unk_54;
};

struct Unk_020bffc0_Mtx {
    s32 m[12];
};

struct Unk_020cbb18 {
    u8 unk_00[0x68];
    s32 unk_68;
};

class Unk_020e6924;

extern "C" {
void func_020be094(void *p);
void func_01ffca8c(Unk_020bfe30_Vec *a, Unk_020bfe30_Vec *b, Unk_020bfe30_Vec *c);
Unk_020bfe38_Ent *func_02095204(s32 n);
u32 func_02063b8c(u32 n);
Unk_020bffc0_Mtx *func_0203a220(void);
void func_0203eeac(void *out, void *in);
void func_01ffb898(void *a, void *b, void *c);
s32 func_0203bc3c(s32 a);
s32 func_01ffc5a4(s32 a, s32 b);
void func_020e9888(void *a, s32 b);
s32 func_021355f0(void *p, u32 n, u32 sz, void (*dtor)(void *));
void func_02000c8c(void *p);
void func_020bd054(void *p);
void func_020bd058(void *p);
s32 func_0209cc08(void *p);
s32 func_02072e44(Unk_020cbb18 *p);
void func_02116048(void *a, void *b, s32 n);
void func_0209d124(void *p, s32 n);
s32 func_0209d374(void *a, void *b);
s32 func_02133150(s32 a, s32 b);
void func_0209d2c0(void *p, s32 n);
s32 func_020b50e8(void);
BOOL func_020a032c(void);
s32 func_0209750c(void);
BOOL func_02098044(s32 a, s32 b);
u16 *func_0203f2d8(void);
void func_0209d498(void *p);
void func_0209cf88(void *p);
void func_0202e5a8(void *p);
s32 func_02019d8c(void *p);
s32 func_020679b4(void *p);
s32 func_020aa514(void);
void func_02067a84(void *a, void *b, u32 c);
void func_020850e0(void);
void func_02085178(void);
void func_02086fa0(void);
void func_02086f98(void);
s32 func_020986a4(s32 a);
s32 func_02087364(s32 a);
s32 func_02015818(void *p, s32 a, s32 b);
s32 func_0209801c(s32 a, s32 b);
void func_0202e1cc(s32 a, s32 b);
s32 func_0201ad34(void *p, s32 a);
s32 func_0201ad30(void *p, s32 a);
s32 func_020159bc(void *p, void *q);
void func_0202e26c(void *p);
void func_0202e2bc(void *p);
void func_020c11b8(void *p, s32 n);
s32 func_020a0414(void);
s32 func_02097520(s32 a);
BOOL func_02094f2c(s32 a, s32 b);
void func_02094b0c(void *v, s32 a, s32 b);
void func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
BOOL func_020951b8(s32 a);
BOOL func_02019790(void *p);
void func_0201a6c0(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_02014198(void *p, s32 a, s32 b);
void func_02067a78(void *p);
void func_020c22fc(void);
void func_0203a5d8(void);
s32 func_020816f8(s32 a);
void func_02015a80(void *p, s32 a);
void func_02067a6c(void *p);
s32 func_02014220(void *p);
s32 func_02002bdc(void *a, void *b);
void func_02094ae8(s32 a, s32 b);
void func_020c22e0(void);
BOOL func_020a03c4(void);
void func_020b78c4(void);
BOOL func_020729cc(Unk_020cbb18 *p, s32 a);
s32 func_0208733c(void);
void func_02087368(s32 a);
void func_02087210(void);
s32 func_020b4934(void);
void func_020b4bbc(s32 a, s32 b);
extern u8 data_021c3cc0;
extern Unk_020bfe30_Vec data_020d1c8c;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 data_021f4880[];
extern s32 data_020d0e20[];
extern s32 data_020e463c;
extern Unk_020bfec0_Ent data_021f43e0;
extern s16 data_021f1448[];
extern s16 data_02135f44[];
extern Unk_020bffc0_Mtx data_021f47e0;
extern s32 data_021c3070;
extern u8 data_021f4570;
extern s32 data_021f4574;
extern Unk_020e6924 *data_021f4578;
extern u8 data_020d1a2c[];
extern Unk_020cbb18 *data_020cbb18;
extern u32 data_020e679c;
}

// ---------------------------------------------------------------------------------------------------------------------
static inline void Unk_020bfe38_Add(s32 *dst, s32 v) {
    *dst += v;
}

class Unk_020bfe30 {
public:
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08[4];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10[0x24];
    /* 0x34 */ Unk_020bfe30_Vec unk_34;
    /* 0x40 */ Unk_020bfe30_Vec unk_40;
    /* 0x4c */ u8 unk_4c[4];
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s16 unk_54;
    /* 0x56 */ u8 unk_56[2];
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ u8 unk_5c[4];
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ u8 unk_64[4];
    /* 0x68 */ s32 unk_68;

    void func_020bfe30();
    void func_020bfe38();
    void func_020bfec0(BOOL flag);
};

void Unk_020bfe30::func_020bfe30() {
    func_020be094(this);
}

void Unk_020bfe30::func_020bfe38() {
    Unk_020bfe30_Vec *p = &unk_34;
    func_01ffca8c(p, &unk_40, p);
    Unk_020bfe38_Ent *e = func_02095204(4);
    if (e) {
        s32 d = -(e->unk_5c - e->unk_68);
        s32 m = data_020d0e20[unk_68];
        d = (d * m) >> 12;
        p->x += d;
    }
    if (p->y > (unk_60 << 12) + 0x100000) {
        unk_04 = 3;
    } else if (p->x < -0x14000) {
        p->x += 0x11e000;
    } else if (p->x > 0x114000) {
        p->x -= 0x11e000;
    }
}

void Unk_020bfe30::func_020bfec0(BOOL flag) {
    s32 idx;
    s32 x = (data_020e463c * func_02063b8c(0x8a) + 0x80) << 12;
    data_020e463c *= -1;
    s32 y = -0x14000 - (func_02063b8c(0x10) << 12);
    Unk_020bfe30_Vec *p34 = &unk_34;
    p34->x = x;
    p34->y = y;
    p34->z = 0;
    s32 mul = data_021f43e0.unk_54;
    s32 rr = func_02063b8c(0xaac) - 0x556;
    s32 sh = ((mul * (rr + data_021f1448[0x38 / 2])) << 4) >> 16;
    idx = ((u16)sh >> 4) * 2;
    Unk_020bfe30_Vec *p40 = &unk_40;
    s16 *tab = data_02135f44;
    p40->x = tab[idx] * -0x24;
    p40->y = tab[idx + 1] * 0x24;
    p40->z = 0;
    unk_50 = 0x800;
    unk_54 = (u16)sh;
    s32 r = func_02063b8c(3);
    unk_0c = r + 2;
    s32 v;
    switch (r) {
    case 0:
        v = func_02063b8c(0x40) + 0x80;
        break;
    case 1:
        v = func_02063b8c(0x40) + 0x40;
        break;
    default:
        v = func_02063b8c(0x40);
        break;
    }
    unk_60 = v;
    if (flag == 1) {
        unk_34.y += func_02063b8c(v + 0x101) << 12;
    }
    unk_58 = 2;
}

extern "C" void func_020bffc0(s32 *out, Unk_020bfe30_Vec *in) {
    Unk_020bffc0_Mtx *m = func_0203a220();
    data_021f47e0 = *m;
    Unk_020bfe30_Vec v;
    v.x = in->x;
    v.y = in->y;
    v.z = in->z;
    u8 a[12];
    s32 b[3];
    func_0203eeac(a, &v);
    func_01ffb898(a, &data_021f47e0, b);
    s32 c = func_0203bc3c(data_021c3070);
    s32 q = -func_01ffc5a4(0x60000, c);
    func_020e9888(b, func_01ffc5a4(q, b[2]));
    *out = b[0] + 0x80000;
}

// ---------------------------------------------------------------------------------------------------------------------
// Vtable classes of the library (autoload_2)
class Unk_0213b91c {
public:
    Unk_0213b91c() {}
    virtual ~Unk_0213b91c();
    u8 unk_04[0xc];
};

class Unk_0213b938 : public Unk_0213b91c {
public:
    Unk_0213b938() {}
    virtual ~Unk_0213b938();
};

class Unk_020e5668 : public Unk_020d8c7c {
public:
    virtual void vfunc_08();

    /* 0x50 */ Unk_0213b938 unk_50;
};

extern "C" Unk_020e5668 *func_020c003c() {
    return new Unk_020e5668();
}

extern "C" void *func_020c0078(void *p) {
    func_021355f0((u8 *)p + 0x302c, 8, 0xc, func_02000c8c);
    func_021355f0((u8 *)p + 0x2f58, 4, 0x14, func_020bd054);
    func_021355f0(p, 0x3c, 0x74, func_020bd058);
    return p;
}

extern "C" u8 func_020c00c0() {
    return data_021f4570;
}

extern "C" u8 func_020c00cc(void *self, void *p) {
    u8 result = 0;
    s32 idx = func_0209cc08(p);
    s32 r = func_02063b8c(100);
    s32 i = result;
    u8 *tab = data_020d1a2c + idx * 0x20;
    for (; i < 0x20; i++) {
        r -= tab[i];
        if (r < 0) {
            result = i;
            break;
        }
    }
    return result;
}

struct Unk_020c010c {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    s8 unk_06;
    u8 unk_07;
};

struct Unk_020c010c_Ent {
    u16 unk_00;
    u8 unk_02[10];
};

extern "C" BOOL func_020c010c(Unk_020c010c *self, void *arg) {
    BOOL result = FALSE;
    if (func_02072e44(data_020cbb18)) {
        return FALSE;
    }
    u8 a[8];
    u8 b[8];
    ((u32 *)a)[0] = 0;
    ((u32 *)a)[1] = 0;
    func_02116048(arg, a, 8);
    func_0209d124(a, 6);
    a[2] = 0;
    a[1] = 0;
    u8 c = a[5];
    if (self->unk_02 != c || self->unk_01 != a[4] || self->unk_00 != a[3]) {
        ((u32 *)b)[0] = 0;
        ((u32 *)b)[1] = 0;
        result = TRUE;
        ((u32 *)b)[0] = 0;
        ((u32 *)b)[1] = 0;
        b[5] = self->unk_02;
        b[4] = self->unk_01;
        b[3] = self->unk_00;
        self->unk_02 = c;
        self->unk_01 = a[4];
        self->unk_00 = a[3];
        s32 d = func_0209d374(b, a);
        d = func_02133150(d, 0x5a0);
        if (d > 0) {
            if (d >= 2) {
                self->unk_04 = func_020c00cc(self, a);
                func_0209d2c0(a, result);
                self->unk_05 = func_020c00cc(self, a);
            } else {
                self->unk_04 = self->unk_05;
                func_0209d2c0(a, result);
                self->unk_05 = func_020c00cc(self, a);
            }
        } else if (d < 0) {
            if (d <= -result - 1) {
                self->unk_04 = func_020c00cc(self, a);
                func_0209d2c0(a, result);
                self->unk_05 = func_020c00cc(self, a);
            } else {
                self->unk_05 = self->unk_04;
                self->unk_04 = func_020c00cc(self, a);
            }
        }
        data_021f4570 = self->unk_07;
        self->unk_07 = 0;
    }
    if (func_020b50e8() != 0x3f) {
        if (func_020a032c()) {
            self->unk_04 = 4;
        } else {
            s32 t = func_0209750c();
            if (t && func_02098044(t, 1)) {
                self->unk_04 = 4;
            } else {
                Unk_020c010c_Ent *e = (Unk_020c010c_Ent *)func_0203f2d8();
                for (s32 i = 0; i < 7; i++) {
                    switch (e->unk_00) {
                    case 9:
                    case 10:
                        self->unk_04 = 4;
                        break;
                    }
                    e++;
                }
            }
        }
    }
    return result;
}

extern "C" void func_020c0270(Unk_020c010c *self) {
    u8 buf[12];
    ((u32 *)buf)[0] = 0;
    ((u32 *)buf)[1] = 0;
    func_0209d498(buf);
    if (func_020b50e8() == 0x3f) {
        data_021f4574 = func_020c010c(self, buf);
        if (data_021f4574 == 0) {
            data_021f4570 = self->unk_07;
        }
    } else {
        if (data_021f4574 != 0) {
            u8 saved = data_021f4570;
            if (func_020c010c(self, buf)) {
                data_021f4570 = saved;
            }
        } else {
            func_020c010c(self, buf);
        }
        data_021f4574 = 0;
    }
    self->unk_06 = buf[2] - 6;
    if (self->unk_06 < 0) {
        self->unk_06 += 0x18;
    }
}

extern "C" void func_020c02f4(void *p) {
    func_0209cf88(p);
}

extern "C" void func_020c02fc(Unk_020c010c *self) {
    data_021f4570 = 0;
    self->unk_07 = 0;
    self->unk_00 = 1;
    self->unk_01 = 1;
    self->unk_02 = 0;
    self->unk_03 = 0;
    self->unk_00 = 0;
    func_020c0270(self);
}

extern "C" void func_020c031c() {}
extern "C" void func_020c0320() {}

// ---------------------------------------------------------------------------------------------------------------------
struct Unk_020c0538_Out {
    u32 unk_00;
    u8 unk_04;
};

// Library base class; its ctor and dtor are out of line.
class Unk_020d8b38 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
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
    virtual void vfunc_38(void *p);
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
    virtual void vfunc_78(Unk_020c0538_Out *out);
};

struct Unk_020c0408_Obj {
    u8 unk_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c[8];
    s32 unk_14;
};

// Sub-object at 0x658 of Unk_020e6924
class Unk_020e6894 : public Unk_020d8b38 {
public:
    Unk_020e6894();
    virtual ~Unk_020e6894();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_38(void *p);
    virtual void vfunc_78(Unk_020c0538_Out *out);

    /* 0x04 */ u8 unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 unk_1f[0x1d];
    /* 0x3c */ Unk_020c0408_Obj *unk_3c;
    /* 0x40 */ u8 unk_40[0x6c];
    /* 0xac */ Unk_020e6924 *unk_ac;
    /* 0xb0 */ s32 unk_b0;

    s32 func_020c0624();
    void func_020c062c(s32 v);
    void func_020c0634(Unk_020e6924 *owner);
};

// Base of Unk_020e6924; its dtor is out of line.
class Unk_0202e5a8 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_0202e5a8();

    /* 0x004 */ u8 unk_004[0x5c - 4];
    /* 0x05c */ u8 unk_05c[0x2a0 - 0x5c];
    /* 0x2a0 */ u8 unk_2a0[0xc];
    /* 0x2ac */ u8 unk_2ac[0x3b0 - 0x2ac];
    /* 0x3b0 */ u8 unk_3b0[0x564 - 0x3b0];
    /* 0x564 */ u8 unk_564[0x618 - 0x564];
    /* 0x618 */ u8 unk_618[0x654 - 0x618];
};

class Unk_020e6924 : public Unk_0202e5a8 {
public:
    virtual ~Unk_020e6924();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_020e6894 unk_658;
    /* 0x70c */ u8 unk_70c;
    /* 0x70d */ u8 unk_70d;
    /* 0x70e */ u8 unk_70e[0x724 - 0x70e];
    /* 0x724 */ u8 unk_724;

    void func_020c11b8(s32 state);
    BOOL func_020c06a0();
};


void Unk_020e6894::vfunc_18() {
    switch (unk_1e) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
    case 25: case 26: case 27:
    case 34: case 35: case 36: {
        u8 v[2];
        func_020679b4(unk_3c);
        switch (func_020aa514()) {
        case 0:
            v[0] = func_02063b8c(3) + 0x1c;
            func_02067a84(unk_3c, &v[0], data_020e679c);
            func_020850e0();
            func_02085178();
            func_02086fa0();
            break;
        case 1:
            v[1] = func_02063b8c(3) + 0x1f;
            func_02067a84(unk_3c, &v[1], data_020e679c);
            if (func_020b50e8() == 0) {
                func_020850e0();
                func_02085178();
                func_02086f98();
            }
            unk_ac->unk_70d = 1;
            break;
        }
        break;
    }
    case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21:
    case 22: case 23: case 24: case 28: case 29: case 30: case 31: case 32: case 33:
        break;
    }
}

void Unk_020e6894::vfunc_14() {
    if (unk_1e == 0x14) {
        unk_3c->unk_14 = 0;
    }
}

void Unk_020e6894::vfunc_10() {
    s32 a = func_020986a4(func_0209750c());
    func_02015818(this, func_02087364(a), 0);
    func_02015818(this, func_02087364(a), 1);
}

void Unk_020e6894::vfunc_78(Unk_020c0538_Out *out) {
    s32 t = func_0209750c();
    out->unk_00 = data_020e679c;
    switch (func_020c0624()) {
    case 0:
        func_0209801c(t, 0x33);
        out->unk_04 = 0;
        break;
    case 1:
        func_0209801c(t, 0x33);
        out->unk_04 = func_02063b8c(3) + 1;
        break;
    case 2:
        out->unk_04 = func_02063b8c(3) + 4;
        func_0202e1cc(0x29, 1);
        break;
    case 3:
        out->unk_04 = func_02063b8c(3) + 7;
        break;
    case 4:
        out->unk_04 = func_02063b8c(3) + 0x19;
        break;
    case 5:
        out->unk_04 = func_02063b8c(3) + 0x22;
        break;
    case 6:
        out->unk_04 = 0x14;
        break;
    }
    unk_ac->unk_70d = 0;
}

void Unk_020e6894::vfunc_38(void *p) {
    func_0201ad34(unk_ac->unk_2a0, 0);
    func_0201ad30(unk_ac->unk_2a0, 1);
    func_020159bc(this, p);
}

s32 Unk_020e6894::func_020c0624() {
    return unk_b0;
}

void Unk_020e6894::func_020c062c(s32 v) {
    unk_b0 = v;
}

void Unk_020e6894::func_020c0634(Unk_020e6924 *owner) {
    vfunc_08();
    unk_ac = owner;
}

Unk_020e6894::~Unk_020e6894() {}

Unk_020e6894::Unk_020e6894() {}

Unk_020e6924::~Unk_020e6924() {}

extern "C" void func_020c0378() {
    Unk_020e6924 *p = data_021f4578;
    if (p) {
        if (p->unk_654 != 5) {
            p->func_020c11b8(5);
        }
    }
}

extern "C" void func_020c03a0() {
    Unk_020e6924 *p = data_021f4578;
    if (p) {
        if (p->unk_654 != 0) {
            p->func_020c11b8(0);
        }
    }
}

extern "C" BOOL func_020c03c8() {
    Unk_020e6924 *p = data_021f4578;
    if (p) {
        if (func_02019d8c(p->unk_2ac) == 0xba && data_021f4578->unk_654 == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

static inline BOOL Unk_020c06a0_IsMode2() {
    return data_021c3cc0 == 2;
}

BOOL Unk_020e6924::func_020c06a0() {
    u8 buf;
    Unk_020bfe30_Vec vec24;
    Unk_020bfe30_Vec vec30;
    s32 r5 = func_020a0414();
    Unk_020cbb18 *r7 = data_020cbb18;
    s32 r6 = r7->unk_68;
    s32 s = func_02097520(r5);
    switch (unk_724) {
    case 0:
        if (Unk_020c06a0_IsMode2()) {
            if (func_02094f2c(1, r5)) {
                unk_724 = 1;
            }
        }
        break;
    case 1:
        vec30 = data_020d1c8c;
        func_02094b0c(&vec30, 0x35c, r5);
        func_020196b4(unk_564, 1, 1, 0xe000, 0x10800, 0, 0, 0, 0, data_020c6cc8, 0);
        unk_724 = 2;
        break;
    case 2:
        if (func_020951b8(r5)) {
            break;
        }
        if (func_02019790(unk_564)) {
            unk_724 = 3;
            unk_658.func_020c062c(6);
            func_0201a6c0(unk_3b0, 0, 0, 0, (s32)data_021f4880, 4, data_020c6d1c, 1);
            func_020196b4(unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            func_02014198(unk_618, 0, 1);
        }
        break;
    case 3:
        if (unk_658.unk_3c->unk_04 == 5) {
            func_02067a78(unk_658.unk_3c);
            func_020196b4(unk_564, 2, 2, 0xea00, 0x12e00, 0, 0, 0, 0, data_020c6cc8, 0);
            func_020c22fc();
            func_0203a5d8();
            unk_724 = 4;
        }
        break;
    case 4:
        if (func_02019790(unk_564)) {
            func_020196b4(unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            func_0201a6c0(unk_3b0, 1, 0, 0, (s32)data_021f4880, 4, data_020c6d1c, 1);
            s32 t = func_020816f8(0x23);
            if (t) {
                func_02015a80(&unk_658, t);
            }
            buf = 10;
            func_02067a84(unk_658.unk_3c, &buf, data_020e679c);
            unk_658.unk_3c->unk_08 = 1;
            func_02067a6c(unk_658.unk_3c);
            unk_724 = 5;
        }
        break;
    case 5:
        if (func_02014220(unk_618) == 0) {
            vec24.x = 0xde00;
            vec24.y = 0;
            vec24.z = 0x13a00;
            s32 t = func_02002bdc(unk_05c, &vec24);
            func_020196b4(unk_564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
            unk_724 = 6;
        }
        break;
    case 6:
        if (func_02019790(unk_564)) {
            func_020196b4(unk_564, 1, 1, 0xde00, 0x13a00, 0, 0, 0, 0, data_020c6cc8, 0);
            func_02094ae8(0, r5);
            func_020c22e0();
            unk_724 = 7;
        }
        break;
    case 7:
        if (func_02019790(unk_564)) {
            func_020196b4(unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_724 = 8;
        }
        break;
    case 8:
        if (func_02019790(unk_564)) {
            func_020196b4(unk_564, 1, 1, 0xf000, 0x1d000, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_724 = 9;
        }
        break;
    case 9:
        if (func_02019790(unk_564)) {
            if (r5 != r6 && !func_020a03c4()) {
                func_020b78c4();
                break;
            }
            unk_724 = 10;
        }
        break;
    case 10:
        if (func_020729cc(r7, 0)) {
            s32 x = func_020986a4(func_0209750c());
            if (func_0208733c() == 1) {
                func_02087368(x);
            }
            func_0209801c(func_0209750c(), 0x39);
            func_02087368(func_020986a4(s));
            func_020850e0();
            func_02085178();
            func_02087210();
            func_020b4bbc(func_020b4934(), 1);
        }
        if (r5 == r6) {
            func_02087368(func_020986a4(func_0209750c()));
            func_020850e0();
            func_02085178();
            func_02087210();
            func_0209801c(func_0209750c(), 0x31);
            func_020b4bbc(func_020b4934(), 0);
        } else {
            func_020b4bbc(func_020b4934(), 1);
        }
        unk_724 = 11;
        break;
    }
    return TRUE;
}
