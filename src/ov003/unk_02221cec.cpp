#include "types.h"

struct Unk_ov003_02221cec_Vec3 {
    s32 x, y, z;
};
typedef Unk_ov003_02221cec_Vec3 V3;

struct Unk_ov003_02221cec_T48 {
    s32 v[12];
};
typedef Unk_ov003_02221cec_T48 T48;

struct Unk_ov003_02221cec_Dead : V3 {
    Unk_ov003_02221cec_Dead() {}
};

class Unk_ov003_02221cec_Ent {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual BOOL vfunc_5c(V3 *out);

    u8 pad_04[0x58];
    V3 unk_5c;
    u8 pad_68[0xb0 - 0x68];
    u32 unk_b0;
};
typedef Unk_ov003_02221cec_Ent Ent;

struct Unk_ov003_02221cec_Self {
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    s32 unk_50;
    V3 unk_54;
    V3 unk_60;
    V3 unk_6c;
    s8 unk_78;
    u8 pad_79[3];
    s32 unk_7c;
    u8 unk_80;
    u8 pad_81[3];
    V3 unk_84;
    s32 unk_90;
    u8 unk_94;
    u8 pad_95;
    s16 unk_96;
    s16 unk_98;
    s16 unk_9a;
    s32 unk_9c;
    u8 unk_a0;
};
typedef Unk_ov003_02221cec_Self Self;

struct Unk_ov003_02222224_Rec {
    u8 pad_000[0x224];
    u8 unk_224;
    u8 pad_225[2];
    s8 unk_227;
    u8 pad_228[4];
    s32 unk_22c;
    u8 pad_230[0x23c - 0x230];
    u8 unk_23c;
    u8 pad_23d[0x24c - 0x23d];
};

extern "C" {
extern Unk_ov003_02222224_Rec data_ov003_0225812c[];
extern s16 data_02135f44[];
extern s32 data_020c7c1c;
extern u8 data_020ca314[];
extern u8 data_020ca315[];
extern u8 data_ov003_022349e2[];
extern u8 data_ov003_022349e3[];
extern u8 *data_ov003_022348c0;
extern void *data_020cbb18;

s32 func_020e7b98(s32 x, s32 z);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02002bdc(V3 *a, V3 *b);
s32 func_020e9650(void *a, void *b);
void func_020902d4(s32 h, V3 *v, s32 a, s32 b);
s32 func_02090330(s32 id, V3 *v, s32 a, s32 b);
void func_020902f8(s32 h);
void func_02003e70(void *o, s32 a, s32 b, s32 c);
void func_0204f3b4(s32 h);
void func_0204f3e4(s32 h, s32 a, V3 *p, V3 *q, s32 r, s32 s, s32 t, s32 u, s32 v, s32 w);
s32 func_0204f49c();
BOOL func_0205f1e8(V3 *a, s32 b, s32 *c, s32 *d, s32 e);
void func_0205f284(V3 *a, V3 *b, s32 *c, s32 *d, s32 e);
void func_0203ee38(V3 *a, V3 *b);
Ent *func_020951ec(u32 a);
Ent *func_02095204(u32 a);
void func_020944f8(T48 *out, u32 a);
BOOL func_02072e44(void *g);
BOOL func_020729cc(void *g, s32 a);
s32 func_02133150(s32 a, s32 b);

s32 func_ov003_02224828(void *a, s32 b, s32 c);
BOOL func_ov003_0222031c(V3 *a, V3 *b, V3 *c);
s32 func_ov003_02220db0(void *p, s32 a);
void func_ov003_0222323c(Self *self, u32 a);
void func_ov003_02212034(T48 *t, V3 *d);
void func_ov003_02223450(V3 *v, s32 a);
}

extern "C" {

void func_ov003_02221cec(Self *self, Ent *ent, V3 *out) {
    if (ent->vfunc_5c(out) == 0) {
        V3 *pv = &ent->unk_5c;
        out->x = pv->x;
        out->y = pv->y;
        out->z = pv->z;
    } else {
        s32 ang = func_020e7b98(self->unk_54.x - out->x, self->unk_54.z - out->z);
        s32 idx = ((u16)ang >> 4) * 2;
        out->x += func_01ffcb0c(0x4cd, data_02135f44[idx]);
        out->z += func_01ffcb0c(0x4cd, data_02135f44[idx + 1]);
    }
}

BOOL func_ov003_02221d60(Self *self, V3 *p) {
    s32 c = self->unk_7c;
    s32 t = (c + 2) << 7;
    if (c == 0) {
        self->unk_98 = func_02002bdc(p, &self->unk_54);
    } else if (c >= 0x1e) {
        self->unk_40 = 4;
    }
    if (t > 0x214) {
        t = 0x214;
    }
    func_ov003_02224828(&self->unk_54, t, self->unk_98);
    self->unk_7c = self->unk_7c + 1;
    V3 v;
    v.x = self->unk_54.x;
    v.y = self->unk_54.y;
    v.z = self->unk_54.z;
    v.y = data_020c7c1c;
    func_020902d4(self->unk_9c, &v, 0, 0);
    return TRUE;
}

BOOL func_ov003_02221dd8(V3 *p, V3 *a, V3 *b, s32 n, s32 k, s32 m) {
    s32 mm, y, ang;
    volatile s32 t, d;
    if (m <= n) {
        return FALSE;
    }
    y = b->y;
    mm = m * m;
    t = ((k - (y >> 1)) << 3) / mm;
    d = func_020e9650(a, b);
    ang = func_02002bdc(a, b);
    s32 nn = n * n;
    p->y = a->y + (n * ((y + ((mm * t) >> 1)) / m) - ((nn * t) >> 1));
    func_ov003_02224828(p, d / m, ang);
    return TRUE;
}

#define CP(d, s) do { (d).x = (s).x; (d).y = (s).y; (d).z = (s).z; } while (0)

void func_ov003_02221e64(Self *self, BOOL flag) {
    struct {
        V3 a, b, c, a2, b2, a3, b3;
    } l;
    s32 n;
    if (flag) {
        CP(l.a, self->unk_6c);
        CP(l.b, self->unk_60);
        l.b.y = l.b.y - 0x1800;
        n = 0x14;
    } else {
        CP(l.a, self->unk_60);
        CP(l.b, self->unk_6c);
        l.b.y = l.b.y - l.a.y;
        n = 0x14;
    }
    CP(l.c, self->unk_54);
    CP(l.a2, l.a);
    CP(l.b2, l.b);
    if (func_ov003_0222031c(&l.c, &l.a2, &l.b2)) {
        self->unk_40 = 4;
        self->unk_94 = 1;
    } else {
        CP(l.a3, l.a);
        CP(l.b3, l.b);
        if (!func_ov003_02221dd8(&self->unk_54, &l.a3, &l.b3, self->unk_7c, 0x14cd, n)) {
            self->unk_40 = 4;
            self->unk_94 = 1;
        }
        self->unk_7c = self->unk_7c + 1;
    }
}

s32 func_ov003_02221f40(Self *self, s32 a) {
    self->unk_40 = 1;
    self->unk_94 = 0;
    s32 k = self->unk_90 * 6;
    s32 t = data_020ca314[k];
    s32 r = t * 0x14;
    self->unk_84.x = (data_ov003_022349e2[r] << 12) / 100;
    self->unk_84.y = 0x1000;
    self->unk_84.z = (data_ov003_022349e3[r] << 12) / 100;
    self->unk_54.y = data_020c7c1c;
    self->unk_90 = 0x3b;
    V3 v;
    v.x = self->unk_54.x;
    v.y = self->unk_54.y;
    v.z = self->unk_54.z;
    s32 *h = &self->unk_9c;
    switch (t) {
    case 0:
        func_02090330(0x12, &v, 0, 0);
        *h = func_02090330(0x1a, &v, 0, 0);
        func_02003e70(self, 0x7e2, 0x7f, 0);
        break;
    case 1:
        func_02090330(0x13, &v, 0, 0);
        *h = func_02090330(0x1b, &v, 0, 0);
        func_02003e70(self, 0x7e2, 0x7f, 0);
        break;
    case 2:
        func_02090330(0x14, &v, 0, 0);
        *h = func_02090330(0x1c, &v, 0, 0);
        func_02003e70(self, 0x7e2, 0x7f, 0);
        break;
    case 3:
        func_02090330(0x15, &v, 0, 0);
        *h = func_02090330(0x1d, &v, 0, 0);
        func_02003e70(self, 0x7e3, 0x7f, 0);
        break;
    case 4:
        func_02090330(0x16, &v, 0, 0);
        *h = func_02090330(0x1e, &v, 0, 0);
        func_02003e70(self, 0x7e3, 0x7f, 0);
        break;
    case 5:
        func_02090330(0x17, &v, 0, 0);
        *h = func_02090330(0x1f, &v, 0, 0);
        func_02003e70(self, 0x7e4, 0x7f, 0);
        break;
    case 6:
        func_02090330(0x19, &v, 0, 0);
        *h = func_02090330(0x21, &v, 0, 0);
        func_02003e70(self, 0x7e4, 0x7f, 0);
        break;
    case 7:
        func_02090330(0x18, &v, 0, 0);
        *h = func_02090330(0x20, &v, 0, 0);
        func_02003e70(self, 0x7e3, 0x7f, 0);
        break;
    }
    self->unk_48 = 5;
    void *g = data_020cbb18;
    if (func_02072e44(g)) {
        if (func_020729cc(g, a)) {
            func_ov003_02220db0(&v, (data_ov003_022348c0[data_020ca315[k] * 4] << 12) / 10);
        }
    } else {
        func_ov003_02220db0(&v, (data_ov003_022348c0[data_020ca315[k] * 4] << 12) / 10);
    }
}

void func_ov003_022221a0(Self *self, s32 a) {
    func_0204f3b4(self->unk_44);
    self->unk_44 = -1;
    self->unk_40 = 0;
    self->unk_78 = -1;
    self->unk_80 = 0;
    self->unk_a0 = 0;
    self->unk_7c = 0;
    self->unk_84.x = 0x1333;
    self->unk_84.y = 0x1333;
    self->unk_84.z = 0x1333;
    self->unk_96 = 0;
    self->unk_98 = 0;
    self->unk_9a = 0;
    func_020902f8(self->unk_9c);
    self->unk_9c = -1;
    if (self->unk_94) {
        func_ov003_02221f40(self, a);
    }
}

BOOL func_ov003_02222224(Self *self) {
    BOOL r = FALSE;
    s32 i = self->unk_78;
    if (i != -1) {
        Unk_ov003_02222224_Rec *p = &data_ov003_0225812c[i];
        if (p->unk_22c != 0) {
            p->unk_22c = r;
        }
        p->unk_227 = -1;
        p->unk_23c = 0;
        p->unk_224 = 0;
        r = TRUE;
    }
    return r;
}

BOOL func_ov003_02222274(Self *self, s32 a) {
    if (self->unk_48 == 1 || self->unk_48 == 3) {
        func_ov003_02222224(self);
    }
    func_ov003_022221a0(self, a);
    return TRUE;
}

BOOL func_ov003_022222a0(Self *self, u32 a) {
    BOOL r;
    struct {
        V3 t;
        T48 tt;
        V3 w, u;
        T48 blk;
    } l;
    Ent *e = func_020951ec(a);
    if (e == NULL) {
        self->unk_40 = 4;
        return FALSE;
    }
    if (self->unk_80 == 0) {
        func_ov003_02221cec(self, e, &l.t);
        r = TRUE;
        CP(l.u, l.t);
        if (func_0205f1e8(&l.u, self->unk_4c, &self->unk_54.x, &self->unk_50, r)) {
            self->unk_80 = r;
            CP(self->unk_6c, l.t);
        }
    } else {
        func_ov003_0222323c(self, a);
        func_020944f8(&l.blk, a);
        l.tt = l.blk;
        func_ov003_02212034(&l.tt, 0);
        l.w.x = ((V3 *)((u8 *)&l.tt + 0x24))->x;
        l.w.y = ((V3 *)((u8 *)&l.tt + 0x24))->y;
        l.w.z = ((V3 *)((u8 *)&l.tt + 0x24))->z;
        func_0203ee38(&l.w, &l.w);
        CP(self->unk_54, l.w);
        CP(self->unk_6c, l.w);
        r = TRUE;
    }
    return r;
}

BOOL func_ov003_02222368(Self *self, u32 a) {
    BOOL r = FALSE;
    if (self->unk_80 == 0) {
        Ent *e = func_020951ec(a);
        if (e == NULL) {
            self->unk_40 = 4;
            return r;
        }
        V3 t;
        func_ov003_02221cec(self, e, &t);
        r = TRUE;
        V3 u;
        CP(u, t);
        if (func_0205f1e8(&u, self->unk_4c, &self->unk_54.x, &self->unk_50, r)) {
            self->unk_80 = r;
            CP(self->unk_6c, t);
        }
    } else if (self->unk_a0 == 0) {
        func_ov003_0222323c(self, a);
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov003_02222490_Bit(u32 f, u32 m) {
    return (f & m) ? TRUE : FALSE;
}

BOOL func_ov003_022223e8(Self *self, u32 a) {
    s32 r5 = 0x1e;
    BOOL r6 = FALSE;
    switch (self->unk_48) {
    case 0:
        break;
    case 1:
        func_ov003_02222368(self, a);
        r6 = TRUE;
        break;
    case 2:
        func_ov003_022222a0(self, a);
        r6 = TRUE;
        break;
    case 3:
        func_ov003_02221e64(self, TRUE);
        break;
    case 4:
        func_ov003_02221e64(self, r6);
        break;
    case 5: {
        Ent *e = func_02095204(a);
        if (e == NULL) {
            self->unk_40 = 4;
            return r6;
        }
        func_ov003_02221d60(self, &e->unk_5c);
        r5 = r5 - self->unk_7c;
        if (r5 < 1) {
            r5 = 1;
        }
        break;
    }
    }
    func_0204f3e4(self->unk_44, self->unk_90, &self->unk_54, &self->unk_84, self->unk_96, self->unk_98, self->unk_9a, 1, r6, r5);
    return TRUE;
}

BOOL func_ov003_02222490(Self *self, u32 a) {
    BOOL r = FALSE;
    struct Pad {
        s32 v[3];
        Pad() {}
        ~Pad() {}
    } pad;
    Ent *e = func_020951ec(a);
    if (e == NULL) {
        self->unk_40 = 4;
        return r;
    }
    u32 f = e->unk_b0;
    if (Unk_ov003_02222490_Bit(f, 4) && Unk_ov003_02222490_Bit(f, 2)) {
        V3 v;
        V3 *pv = &e->unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        CP(self->unk_54, v);
        CP(self->unk_6c, v);
    } else {
        r = TRUE;
        self->unk_80 = r;
        self->unk_40 = 3;
    }
    return r;
}

BOOL func_ov003_02222504(Self *self, u32 a) {
    struct {
        Unk_ov003_02221cec_Dead dead;
        T48 t;
        V3 d, w;
        T48 blk;
        V3 y, z;
    } l;
    if (a >= 4) {
        self->unk_40 = 4;
        return FALSE;
    }
    if (func_020951ec(a) == NULL) {
        self->unk_40 = 4;
        return FALSE;
    }
    func_020944f8(&l.blk, a);
    l.t = l.blk;
    l.d.x = 0x800;
    l.d.y = 0;
    l.d.z = 0;
    func_ov003_02212034(&l.t, &l.d);
    l.w.x = ((V3 *)((u8 *)&l.t + 0x24))->x;
    l.w.y = ((V3 *)((u8 *)&l.t + 0x24))->y;
    l.w.z = ((V3 *)((u8 *)&l.t + 0x24))->z;
    func_0203ee38(&l.w, &l.w);
    CP(l.dead, l.w);
    CP(l.y, l.w);
    CP(l.z, self->unk_60);
    func_0205f284(&l.y, &l.z, &self->unk_4c, &self->unk_50, 3);
    CP(self->unk_54, self->unk_60);
    return TRUE;
}

BOOL func_ov003_022225b4(Self *self, u32 a) {
    if (self->unk_44 != -1) {
        return FALSE;
    }
    self->unk_44 = func_0204f49c();
    if (self->unk_48 != 5) {
        func_ov003_02223450(&self->unk_84, self->unk_90);
    }
    if (self->unk_48 == 1) {
        if (!func_ov003_02222504(self, a)) {
            return FALSE;
        }
    } else if (self->unk_48 == 2) {
        if (!func_ov003_02222504(self, a)) {
            return FALSE;
        }
        Ent *e = func_02095204(a);
        if (e != NULL) {
            u32 f = e->unk_b0;
            if (Unk_ov003_02222490_Bit(f, 4) && Unk_ov003_02222490_Bit(f, 2)) {
                self->unk_40 = 2;
                return TRUE;
            }
        }
    }
    self->unk_40 = 3;
    return TRUE;
}

}
