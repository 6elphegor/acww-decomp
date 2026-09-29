#include "types.h"

struct Unk_0201a334_Vec3 { s32 x, y, z; };

struct Unk_0201a334_Scene {
    u8 pad_00[0x5c];
    Unk_0201a334_Vec3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x94 - 0x90];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
};

struct Unk_0201a334_Prim { u8 unk_00[0xec]; };
struct Unk_020e2a30 { u8 unk_00[4]; };
struct Unk_02006d14 : Unk_0201a334_Prim, Unk_020e2a30 {};

struct Unk_0201a734_Obj {
    u8 pad_00[0x50];
    s32 x, y, z;
};

extern u8 data_021f4880[];
extern u8 data_020e416c;
extern s16 data_02135f44[];
extern Unk_0201a334_Vec3 data_021bdfe0[];

struct Unk_0201ab4c_Ent {
    s32 unk_00;
    s16 unk_04;
    s16 pad_06;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
    u8 pad_11[3];
};
extern Unk_0201ab4c_Ent data_020c6dfc[];

class Unk_0201a334;
class Unk_0201a8c4;
class Unk_0201a7ec;

extern "C" {
s32 func_0201a734(Unk_0201a734_Obj *self, Unk_0201a334_Vec3 *out);
Unk_0201a334_Scene *func_020951ec(s32 h);
BOOL func_0209451c(Unk_0201a334_Vec3 *out, s32 h);
s32 func_020e7530(s16 *p, s32 v, s32 n);
s32 func_020e96a4(void *a, void *b);
s32 func_020e96ec(void *a, void *b);
s32 func_020e972c(void *a, void *b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e9650(void *a, void *b);
s32 func_020e759c(s32 *p, s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02002bdc(void *a, void *b);
void func_02002bf4(void *a, void *b);
s32 func_0201a1bc(Unk_0201a334 *self, s32 v);
BOOL func_0201a834(Unk_0201a334_Vec3 *pos);
void func_0201a900(Unk_0201a334_Vec3 *out, Unk_0201a334_Vec3 *base, Unk_0201a334_Vec3 *off, u32 ang);
s32 func_020553cc(Unk_020e2a30 *dst, void *src, u32 n);
s32 func_0203ee38(void *v);
s32 func_0202ffdc(s32 id);
BOOL func_ov004_02234f6c(s32 id);
void func_020339bc(void *buf, s32 id, s32 a, s32 b);
s32 func_02033914(void *buf, s32 a);
s32 func_02030798(s32 id);
void func_02033988(void *buf);
s32 func_0201622c(void *a, s32 b, void *c);
void func_02015e94(void *a, void *b, s32 c, u32 d, s32 e);
void func_0201610c(void *a, void *b, s32 c, u32 d, s32 e, s32 f, s32 g, s32 h);
}

class Unk_0201a334 {
public:
    u8 unk_00;
    u8 pad_01[3];
    Unk_0201a734_Obj *unk_04;
    Unk_0201a334_Vec3 unk_08;
    s32 unk_14;
    u8 unk_18;
    u8 pad_19;
    s16 unk_1a;
    s16 unk_1c;
    s16 unk_1e;
    s16 unk_20;
    s16 unk_22;
    s16 unk_24;
    s16 unk_26;
    s16 unk_28;
    u8 unk_2a;
    u8 pad_2b[0x5c - 0x2b];
    s32 unk_5c;
    u8 unk_60;
    u8 pad_61[3];
    s32 unk_64;

    void func_0201a334(Unk_0201a334_Scene *scene);
    void func_0201a380(Unk_0201a334_Scene *scene);
    void func_0201a39c(Unk_0201a334_Scene *scene);
    void func_0201a3b8(Unk_0201a334_Scene *scene, s32 h, s32 limit, u8 flag);
    void func_0201a404();
    void func_0201a43c(Unk_0201a334_Scene *scene, Unk_0201a334_Scene *tgt, Unk_0201a334_Vec3 *v, s32 limit, u8 flag);
    s32 func_0201a518(s32 v);
    s32 func_0201a53c(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 func_0201a554(s32 v);
    s32 func_0201a578(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 func_0201a590(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 func_0201a5b8(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    BOOL func_0201a5d0(Unk_0201a334_Scene *scene);
    void func_0201a664(s32 pri, s16 a, s16 b, s16 c, s16 d);
    void func_0201a6c0(u8 type, s32 pri, s32 tgt, Unk_0201a334_Vec3 *v, s32 h, s32 lim, u8 flag);
    void func_0201a720(Unk_0201a334_Vec3 *v);
    void func_0201a730(s16 v);
    void func_0201a784();
    void func_0201a78c();
    void func_0201a794();
    u8 func_0201a7e8();
};

void Unk_0201a334::func_0201a334(Unk_0201a334_Scene *scene) {
    if (unk_04 != 0) {
        Unk_0201a334_Vec3 v;
        if (func_0201a734((Unk_0201a734_Obj *)((u8 *)unk_04 + 0x3b0), &v)) {
            Unk_0201a334_Vec3 w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            func_0201a43c(scene, (Unk_0201a334_Scene *)unk_04, &w, unk_5c, unk_60);
        }
    }
}

void Unk_0201a334::func_0201a380(Unk_0201a334_Scene *scene) {
    func_0201a3b8(scene, 4, unk_5c, unk_60);
}

void Unk_0201a334::func_0201a39c(Unk_0201a334_Scene *scene) {
    func_0201a3b8(scene, unk_64, unk_5c, unk_60);
}

void Unk_0201a334::func_0201a3b8(Unk_0201a334_Scene *scene, s32 h, s32 limit, u8 flag) {
    Unk_0201a334_Scene *t = func_020951ec(h);
    if (t != 0) {
        Unk_0201a334_Vec3 v;
        if (func_0209451c(&v, h)) {
            Unk_0201a334_Vec3 w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            func_0201a43c(scene, t, &w, limit, flag);
        }
    }
}

void Unk_0201a334::func_0201a404() {
    if (unk_22 != 0) {
        func_020e7530(&unk_22, 0, unk_24);
    }
    if (unk_1a != 0) {
        func_020e7530(&unk_1a, 0, unk_1c);
    }
}

void Unk_0201a334::func_0201a43c(Unk_0201a334_Scene *scene, Unk_0201a334_Scene *tgt, Unk_0201a334_Vec3 *v, s32 limit, u8 flag) {
    Unk_0201a334_Vec3 *tp = &tgt->unk_5c;
    Unk_0201a334_Vec3 *sp = &scene->unk_5c;
    s32 a = 0;
    s32 b = 0;
    unk_2a = 0;
    if (tp != 0) {
        s32 d = func_020e96a4(tp, sp);
        if (limit == 0 || (d < 0 ? -d : d) < limit) {
            s32 ang = func_0201a5b8(tp, sp, scene->unk_8e);
            if (!flag || func_0201a1bc(this, ang)) {
                Unk_0201a334_Vec3 w;
                if (func_0201a734((Unk_0201a734_Obj *)this, &w)) {
                    a = func_0201a53c(v, &w, 0);
                }
                b = func_0201a554(ang);
                unk_2a = 1;
            }
        }
    }
    if (unk_22 != b) {
        func_020e7530(&unk_22, b, unk_24);
    }
    if (unk_1a != a) {
        func_020e7530(&unk_1a, a, unk_1c);
    }
    if (unk_22 != b || unk_1a != a) {
        unk_2a = 0;
    }
}

BOOL Unk_0201a334::func_0201a5d0(Unk_0201a334_Scene *scene) {
    volatile Unk_0201a334_Vec3 z;
    Unk_0201a334_Vec3 *p = 0;
    z.x = 0;
    z.y = 0;
    z.z = 0;
    switch (unk_00) {
    case 1: {
        Unk_0201a334_Scene *t = func_020951ec(unk_64);
        if (t != 0) {
            p = &t->unk_5c;
        }
        break;
    }
    case 3:
        p = &unk_08;
        break;
    }
    if (p != 0 && func_020e96ec(p, data_021f4880) != 0) {
        s32 d = func_020e96a4(p, &scene->unk_5c);
        if (unk_5c == 0 || (d < 0 ? -d : d) < unk_5c) {
            s32 ang = func_0201a5b8(p, &scene->unk_5c, scene->unk_8e);
            if (unk_60 == 0 || func_0201a1bc(this, ang) != 0) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

s32 Unk_0201a334::func_0201a518(s32 v) {
    s32 m = v < 0 ? -v : v;
    s32 lim = unk_20;
    if (m > lim) {
        if (v >= 0) {
            v = lim;
        } else {
            v = (s16)-lim;
        }
    }
    return v;
}

s32 Unk_0201a334::func_0201a53c(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c) {
    return func_0201a518(func_0201a590(a, b, c));
}

s32 Unk_0201a334::func_0201a554(s32 v) {
    s32 m = v < 0 ? -v : v;
    s32 lim = unk_28;
    if (m > lim) {
        if (v > 0) {
            v = lim;
        } else {
            v = (s16)-lim;
        }
    }
    return v;
}

s32 Unk_0201a334::func_0201a578(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c) {
    return func_0201a554(func_0201a5b8(a, b, c));
}

s32 Unk_0201a334::func_0201a590(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c) {
    s32 d = func_020e96a4(a, b);
    return (s16)(func_020e7b98(a->y - b->y, d) - c);
}

s32 Unk_0201a334::func_0201a5b8(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c) {
    return (s16)(func_02002bdc(b, a) - c);
}

void Unk_0201a334::func_0201a664(s32 pri, s16 a, s16 b, s16 c, s16 d) {
    if (unk_18 == 0 && unk_14 != 4 && pri >= unk_14) {
        unk_00 = 5;
        unk_04 = 0;
        unk_08.x = 0;
        unk_08.y = 0;
        unk_08.z = 0;
        unk_14 = pri;
        unk_2a = 0;
        unk_5c = 0x8000;
        unk_60 = 1;
        unk_64 = 4;
        unk_1e = a;
        unk_26 = b;
        unk_1c = c;
        unk_24 = d;
    }
}

void Unk_0201a334::func_0201a6c0(u8 type, s32 pri, s32 tgt, Unk_0201a334_Vec3 *v, s32 h, s32 lim, u8 flag) {
    if (unk_18 == 0 && unk_14 != 4 && pri >= unk_14) {
        unk_00 = type;
        unk_04 = (Unk_0201a734_Obj *)tgt;
        unk_08.x = v->x;
        unk_08.y = v->y;
        unk_08.z = v->z;
        unk_14 = pri;
        unk_2a = 0;
        unk_5c = lim;
        unk_60 = flag;
        unk_64 = h;
        unk_1e = 0;
        unk_26 = 0;
        unk_1c = 0x200;
        unk_24 = 0x400;
    }
}

void Unk_0201a334::func_0201a720(Unk_0201a334_Vec3 *v) {
    unk_08.x = v->x;
    unk_08.y = v->y;
    unk_08.z = v->z;
}

void Unk_0201a334::func_0201a730(s16 v) {
    unk_20 = v;
}

s32 func_0201a734(Unk_0201a734_Obj *self, Unk_0201a334_Vec3 *out) {
    s32 r = 0;
    s32 x = self->x;
    if (x != 0 || self->y != 0 || self->z != 0) {
        out->x = x;
        out->y = self->y;
        out->z = self->z;
        func_0203ee38(out);
        r = 1;
    }
    return r;
}

void Unk_0201a334::func_0201a784() {
    unk_18 = 1;
}

void Unk_0201a334::func_0201a78c() {
    unk_04 = 0;
}

void Unk_0201a334::func_0201a794() {
    unk_00 = 1;
    unk_04 = 0;
    unk_08.x = 0;
    unk_08.y = 0;
    unk_08.z = 0;
    unk_14 = 0;
    unk_1a = 0;
    unk_1c = 0x200;
    unk_1e = 0;
    unk_20 = 0x1a00;
    unk_22 = 0;
    unk_24 = 0x400;
    unk_26 = 0;
    unk_28 = 0x3000;
    unk_18 = 0;
    unk_2a = 0;
    unk_5c = 0x8000;
    unk_60 = 1;
    unk_64 = 4;
}

u8 Unk_0201a334::func_0201a7e8() {
    return unk_00;
}

class Unk_0201a7ec {
public:
    u8 unk_00;

    void func_0201a7ec(Unk_0201a334_Scene *scene);
    void func_0201a8b4();
    void func_0201a8bc();
};

void Unk_0201a7ec::func_0201a7ec(Unk_0201a334_Scene *scene) {
    for (s32 i = 0; i < 2; i++) {
        Unk_0201a334_Vec3 v;
        func_0201a900(&v, &scene->unk_5c, &data_021bdfe0[i], *(s16 *)((u8 *)scene + 0x94));
        if (func_0201a834(&v)) {
            unk_00 |= 1 << i;
        }
    }
}

static inline BOOL Unk_0201a834_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

BOOL func_0201a834(Unk_0201a334_Vec3 *pos) {
    u32 buf[16];
    if (Unk_0201a834_IsOne(data_020e416c)) {
        if (func_0202ffdc((s32)pos) != -1) {
            return TRUE;
        }
        if (func_ov004_02234f6c((s32)pos)) {
            return TRUE;
        }
        return FALSE;
    }
    func_020339bc(buf, (s32)pos, 0, 0);
    s32 r;
    if (buf[12] != 0 || func_02033914(buf, 1) > 0 || func_02030798((s32)pos)) {
        r = 1;
    } else {
        r = 0;
    }
    func_02033988(buf);
    return r;
}

void Unk_0201a7ec::func_0201a8b4() {
    unk_00 = 0;
}

void Unk_0201a7ec::func_0201a8bc() {
    unk_00 = 0;
}

class Unk_0201a8c4 {
public:
    Unk_0201a334_Vec3 unk_00;
    Unk_0201a334_Vec3 unk_0c[3];
    s32 unk_30;
    s16 unk_34;
    s16 unk_36;
    Unk_0201a334_Vec3 unk_38;
    Unk_0201a334_Vec3 unk_44;
    s32 unk_50;
    u8 unk_54;
    u8 unk_55;

    void func_0201a764(Unk_02006d14 *p);
    void func_0201a8c4(u8 v);
    void func_0201a8cc();
    void func_0201a8d0(s32 idx, s32 x, s32 y, s32 z);
    void func_0201a8f0();
    s32 func_0201a968();
    Unk_0201a334_Vec3 *func_0201a978();
    void func_0201a97c(Unk_0201a334_Vec3 *v);
    s32 func_0201a98c();
    s32 func_0201a994();
    void func_0201a99c(s16 v);
    BOOL func_0201a9a0(Unk_0201a334_Scene *scene, s32 which);
    Unk_0201a334_Vec3 *func_0201a9e8();
    void func_0201a9ec(Unk_0201a334_Vec3 *v);
    void func_0201aa20(Unk_0201a334_Scene *scene);
    s32 func_0201aa64(s16 *p, s16 target, s16 step, u8 mode);
    void func_0201ab30(Unk_0201a334_Scene *scene);
    s32 func_0201ab48();
    void func_0201ab4c(Unk_0201a334_Scene *scene, s32 mode, s16 ang, u16 extra);
    void func_0201ac10(Unk_0201a334_Scene *scene);
};

void Unk_0201a8c4::func_0201a764(Unk_02006d14 *p) {
    if (p != 0) {
        Unk_020e2a30 &s = *p;
        func_020553cc(&s, (u8 *)this + 0x2c, 0xf);
    }
}

void Unk_0201a8c4::func_0201a8c4(u8 v) {
    unk_55 = v;
}

void Unk_0201a8c4::func_0201a8cc() {
}

void Unk_0201a8c4::func_0201a8d0(s32 idx, s32 x, s32 y, s32 z) {
    if (idx >= 1 && idx < 3) {
        Unk_0201a334_Vec3 *e = &unk_0c[idx];
        e->x = x;
        e->y = y;
        e->z = z;
    }
}

void Unk_0201a8c4::func_0201a8f0() {
    unk_44.x = unk_38.x;
    unk_44.y = unk_38.y;
    unk_44.z = unk_38.z;
}

void func_0201a900(Unk_0201a334_Vec3 *out, Unk_0201a334_Vec3 *base, Unk_0201a334_Vec3 *off, u32 ang) {
    s32 i = ((u16)ang >> 4) << 1;
    s32 s = data_02135f44[i];
    s32 c = data_02135f44[i + 1];
    s32 a = func_01ffcb0c(off->x, c);
    out->x = base->x + a + func_01ffcb0c(off->z, s);
    out->y = 0;
    s32 d = func_01ffcb0c(off->x, s);
    out->z = base->z - d + func_01ffcb0c(off->z, c);
}

s32 Unk_0201a8c4::func_0201a968() {
    return func_020e96ec(&unk_38, &unk_44);
}

Unk_0201a334_Vec3 *Unk_0201a8c4::func_0201a978() {
    return &unk_44;
}

void Unk_0201a8c4::func_0201a97c(Unk_0201a334_Vec3 *v) {
    unk_44.x = v->x;
    unk_44.y = v->y;
    unk_44.z = v->z;
}

s32 Unk_0201a8c4::func_0201a98c() {
    return unk_36;
}

s32 Unk_0201a8c4::func_0201a994() {
    return unk_34;
}

void Unk_0201a8c4::func_0201a99c(s16 v) {
    unk_34 = v;
}

BOOL Unk_0201a8c4::func_0201a9a0(Unk_0201a334_Scene *scene, s32 which) {
    Unk_0201a334_Vec3 v;
    BOOL r;
    Unk_0201a334_Vec3 *sp = &scene->unk_5c;
    v.x = sp->x;
    v.y = sp->y;
    v.z = sp->z;
    r = FALSE;
    v.y = 0;
    s32 d;
    if (which != 0) {
        d = func_020e96a4(&v, &unk_38);
    } else {
        d = func_020e96a4(&v, &unk_44);
    }
    if (d < unk_50) {
        r = TRUE;
    }
    return r;
}

Unk_0201a334_Vec3 *Unk_0201a8c4::func_0201a9e8() {
    return &unk_44;
}

void Unk_0201a8c4::func_0201a9ec(Unk_0201a334_Vec3 *v) {
    if (func_020e972c(&unk_38, &unk_44)) {
        func_0201a97c(v);
    }
    unk_38.x = v->x;
    unk_38.y = v->y;
    unk_38.z = v->z;
}

s32 Unk_0201a8c4::func_0201aa64(s16 *p, s16 target, s16 step, u8 mode) {
    s32 lim;
    s32 r;
    s16 t;
    if (step < 0) {
        lim = (s16)-step;
    } else {
        lim = step;
    }
    r = 0;
    if (step != 0) {
        switch (mode) {
        case 1:
        case 2:
            if (func_020e780c(target, *p) <= lim) {
                if ((s16)(*p - target) > 0) {
                    step = (s16)-step;
                }
            } else {
                if (mode == 1) {
                    step = (s16)lim;
                } else {
                    step = (s16)-lim;
                }
            }
            break;
        default:
            if ((s16)(*p - target) > 0) {
                step = (s16)-step;
            }
            break;
        }
        *p = *p + step;
        s32 x = *p - target;
        s32 d = (s16)x;
        if (d < 0) { d = (s16)-d; }
        s32 m = step < 0 ? (s32)(s16)-step : step;
        if (d <= m && (s16)x * step >= 0) {
            *p = target;
            r = 1;
        }
    } else if (*p == target) {
        r = 1;
    }
    return r;
}

void Unk_0201a8c4::func_0201aa20(Unk_0201a334_Scene *scene) {
    if (func_0201ab48() == 4) {
        scene->unk_94 = unk_34;
    } else {
        func_0201aa64(&scene->unk_94, unk_34, unk_36, unk_55);
        *(s16 *)((u8 *)scene + 0x8e) = scene->unk_94;
    }
}

void Unk_0201a8c4::func_0201ab30(Unk_0201a334_Scene *scene) {
    unk_34 = func_02002bdc(&scene->unk_5c, &unk_44);
}

s32 Unk_0201a8c4::func_0201ab48() {
    return unk_30;
}

void Unk_0201a8c4::func_0201ab4c(Unk_0201a334_Scene *scene, s32 mode, s16 ang, u16 extra) {
    if (mode < 0 || mode >= 5) {
        mode = 0;
    }
    Unk_0201ab4c_Ent *e = &data_020c6dfc[mode];
    Unk_0201a334_Vec3 *src = &unk_0c[e->unk_08];
    unk_00.x = src->x;
    unk_00.y = src->y;
    unk_00.z = src->z;
    if (ang == 0) {
        unk_36 = e->unk_04;
    } else {
        unk_36 = ang;
    }
    unk_50 = e->unk_0c;
    if (mode != 4) {
        if ((unk_54 == 1 && e->unk_10 == 1) || func_0201622c((u8 *)scene + 0x334, e->unk_00, (u8 *)scene + 0x2a0)) {
            func_02015e94((u8 *)scene + 0x334, scene, e->unk_00, extra, 0);
        } else {
            func_0201610c((u8 *)scene + 0x334, scene, e->unk_00, extra, 0, 0x1000, 0, 0);
        }
    }
    unk_30 = mode;
    unk_54 = e->unk_10;
}

void Unk_0201a8c4::func_0201ac10(Unk_0201a334_Scene *scene) {
    s32 lo = unk_00.x;
    if (lo == 0) {
        scene->unk_98 = 0;
    } else {
        s32 hi = unk_00.y;
        if (hi >= lo) {
            hi = unk_00.z;
        }
        func_020e759c(&scene->unk_98, lo, hi);
        s32 ang = func_02002bdc(&scene->unk_5c, &unk_44);
        if (ang == scene->unk_94) {
            s32 d = func_020e9650(&unk_44, &scene->unk_5c);
            if (d < scene->unk_98) {
                scene->unk_98 = d;
            }
        }
    }
    func_02002bf4(scene, (u8 *)scene + 0x4cc);
}
