#include "types.h"

struct Unk_ov003_0222426c_V3 {
    s32 x, y, z;
    Unk_ov003_0222426c_V3() {}
    Unk_ov003_0222426c_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    Unk_ov003_0222426c_V3(const Unk_ov003_0222426c_V3 &o) { x = o.x; y = o.y; z = o.z; }
};
typedef Unk_ov003_0222426c_V3 V3;

struct Unk_ov003_02224990_V3 {
    s32 x, y, z;
    Unk_ov003_02224990_V3(const Unk_ov003_02224990_V3 &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_ov003_02224990_V3() {}
};
typedef Unk_ov003_02224990_V3 V3d;

struct Unk_ov003_0222426c_Sub {
    u8 b0, b1, b2, b3;
};

class Unk_ov003_0222426c_Obj;
typedef void (Unk_ov003_0222426c_Obj::*Fn)();
struct Unk_ov003_0222426c_Mp {
    Fn f;
};
struct Unk_ov003_0222426c_Mp2 {
    Fn a;
    Fn b;
};

class Unk_ov003_0222426c_Obj {
public:
    /* 0x000 */ u8 pad_000[0x7e];
    /* 0x07e */ s8 unk_7e;
    /* 0x07f */ u8 pad_07f[0x120 - 0x7f];
    /* 0x120 */ V3 unk_120;
    /* 0x12c */ s32 unk_12c, unk_130, unk_134;
    /* 0x138 */ s16 unk_138;
    /* 0x13a */ u8 pad_13a[2];
    /* 0x13c */ s32 unk_13c;
    /* 0x140 */ u16 unk_140;
    /* 0x142 */ s16 unk_142;
    /* 0x144 */ u8 pad_144[0x19a - 0x144];
    /* 0x19a */ u8 pad_19a[0x1fc - 0x19a];
    /* 0x1fc */ u8 unk_1fc;
    /* 0x1fd */ u8 unk_1fd;
    /* 0x1fe */ u8 unk_1fe;
    /* 0x1ff */ u8 unk_1ff;
    /* 0x200 */ u8 unk_200;
    /* 0x201 */ u8 unk_201;
    /* 0x202 */ u8 pad_202[0x210 - 0x202];
    /* 0x210 */ u8 unk_210;
    /* 0x211 */ u8 pad_211[0x218 - 0x211];
    /* 0x218 */ s32 unk_218, unk_21c, unk_220;
    /* 0x224 */ u8 unk_224;
    /* 0x225 */ u8 pad_225[0x23c - 0x225];
    /* 0x23c */ u8 unk_23c;
    /* 0x23d */ u8 pad_23d[0x248 - 0x23d];
    /* 0x248 */ Unk_ov003_0222426c_Sub unk_248;
};
typedef Unk_ov003_0222426c_Obj Obj;

class Unk_ov003_02224ae0_Ent;
struct Unk_ov003_02224ae0_E {
    /* 0x00 */ u8 pad_00[0x30];
    /* 0x30 */ u8 unk_30;
    /* 0x31 */ u8 pad_31[3];
    /* 0x34 */ V3 unk_34;
    /* 0x40 */ V3 unk_40;
    /* 0x4c */ V3 unk_4c;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ u8 unk_5c;
    /* 0x5d */ u8 pad_5d[3];
};
typedef Unk_ov003_02224ae0_E E;

class Unk_ov003_02224ae0_St {
public:
    void f();
};
typedef void (Unk_ov003_02224ae0_St::*StFn)(E *);
struct Unk_ov003_02224ae0_StMp {
    StFn f;
};

extern "C" {
extern Unk_ov003_0222426c_Mp data_ov003_02257b20[];
extern Unk_ov003_0222426c_Mp2 data_ov003_02257ad8[];
extern Unk_ov003_02224ae0_StMp data_ov003_02257ac0[];
extern E data_ov003_02257d1c[];
extern s16 data_02135f44[];
extern s32 data_ov003_02234768;
extern s32 data_ov003_02234764;
extern u32 data_021c3070;
extern V3 data_021c309c;

s32 func_01ffcb0c(s32 a, s32 b);
void func_ov003_022201ac(void *self, s32 v);
void func_ov003_022209ec(void *p, s32 v);
s32 func_ov003_022202cc(s32 a, u16 b);
s32 func_ov003_022202ec(s32 a, u16 b);
s32 func_ov003_02222b1c(void *self);
s32 func_ov003_02222fe4(void *self);
void func_ov003_022228b0(void *s, void *o);
s32 func_ov003_02220c68(void *o, void *p);
void func_ov003_02220db0(void *p, s32 a);
void func_ov003_0221cfdc(s32 o, V3 *a, V3 *b, s32 c, s16 d, s16 e);
s32 func_ov003_0222031c(V3 *a, V3 *b, V3 *c);
s32 func_ov003_0222034c(V3 *a, V3 *b, s32 c, s32 d, s32 e);
s32 func_ov003_02221dd8(V3 *p, V3 *a, V3 *b, s32 n, s32 k, s32 m);
void func_020309d4(void *a, void *b, void *c, s32 d, s32 e, s32 f, s32 g);
s32 func_02002bdc(void *a, void *b);
void func_0204ee10(s32 *x, s32 *y, void *v);
s32 func_020312a8(s32 x, s32 y);

void func_ov003_02224828(s32 *p, s32 a, s32 ang);
void func_ov003_02224848(s32 *p, s32 a, s32 ang);
void func_ov003_02224874(s32 *p, s32 a, s32 ang);
s32 func_ov003_02224b1c(E *e);

void func_ov003_0222426c(Obj *o)
{
    func_ov003_022201ac(o, 10);
    func_ov003_022209ec(&o->unk_120, 0x40);
    if (func_ov003_022202ec(0, 0x64) == 1 || o->unk_13c > 0x64) {
        o->unk_200 = 0;
    }
}

void func_ov003_022242ac(Obj *o)
{
    s32 t = 0x19a - (o->unk_13c << 3);
    func_ov003_02224828((s32 *)&o->unk_120, t, o->unk_138);
    if (o->unk_13c >= 10) {
        func_ov003_022201ac(o, 3);
    } else {
        func_ov003_022201ac(o, 0x10);
    }
    if (t <= 0) {
        o->unk_13c = 0;
        o->unk_200 = 4;
    }
}

void func_ov003_02224310(Obj *o)
{
    func_ov003_02224828((s32 *)&o->unk_120, 0x19a, o->unk_138);
    func_ov003_022201ac(o, 0x20);
    o->unk_140--;
    if (o->unk_140 == 0) {
        o->unk_13c = 0;
        o->unk_200 = 3;
    }
}

void func_ov003_02224364(Obj *o)
{
    s32 t;
    s32 a, b, x, q, z, c, d;
    t = o->unk_13c << 3;
    o->unk_142 = o->unk_142 + 0x2000;
    a = data_02135f44[((u16)o->unk_142 >> 4) * 2];
    b = data_02135f44[((u16)o->unk_138 >> 4) * 2];
    q = t >> 2;
    x = func_01ffcb0c(t, b) + func_01ffcb0c(q, a);
    c = data_02135f44[((u16)o->unk_142 >> 4) * 2];
    d = data_02135f44[((u16)o->unk_138 >> 4) * 2 + 1];
    z = func_01ffcb0c(t, d) + func_01ffcb0c(q, c);
    o->unk_120.x += x;
    o->unk_120.z += z;
    if (o->unk_13c >= 10) {
        func_ov003_022201ac(o, 0x20);
    } else {
        func_ov003_022201ac(o, 0x10);
    }
    if (t > 0x19a) {
        o->unk_200 = 2;
    }
}

void func_ov003_0222443c(Obj *o)
{
    o->unk_138 = o->unk_138 + (s16)func_ov003_022202cc(0, 0x2aa8);
    o->unk_13c = 0;
    o->unk_140 = (u8)func_ov003_022202ec(1, 3);
    o->unk_142 = func_ov003_022202cc(0xaaa, 0x2000);
    o->unk_210 = func_ov003_022202cc(0, 2) != 0 ? 1 : 0;
    o->unk_200 = 1;
}

void func_ov003_022244bc(Obj *o)
{
    s32 r;
    s32 x, y;
    if (o->unk_7e == 0xb) {
        func_ov003_022228b0(&o->unk_248, o);
    }
    (o->*data_ov003_02257b20[o->unk_200].f)();
    if (o->unk_200 == 5) {
        r = 0;
    } else {
        r = func_ov003_02222b1c(o);
    }
    switch (r) {
    case 0:
        o->unk_201 = 0;
        break;
    case 1:
    case 3:
        if (o->unk_210 != 0) {
            o->unk_138 = o->unk_138 + 0x222;
        } else {
            o->unk_138 = o->unk_138 - 0x222;
        }
        break;
    case 2:
    case 4:
        if (o->unk_200 == 1) {
            if (o->unk_210 != 0) {
                o->unk_138 = o->unk_138 + 0x222;
            } else {
                o->unk_138 = o->unk_138 - 0x222;
            }
        }
        break;
    case 6:
        if (o->unk_200 != 4) {
            s32 t = *(volatile s16 *)&o->unk_138;
            if (t < 0x3556 || t > 0x4aaa) {
                o->unk_138 = o->unk_138 - 0x555;
            }
        }
        break;
    case 7:
        if (o->unk_200 != 4) {
            s32 t = *(volatile s16 *)&o->unk_138;
            if (t > -0x3556 || t < -0x4aaa) {
                o->unk_138 = o->unk_138 + 0x555;
            }
        }
        break;
    case 5:
        if ((u8)(o->unk_200 + 0xff) <= 1) {
            s32 t = *(volatile s16 *)&o->unk_138;
            if (t < 0) t = -t;
            if (t < 0x7556) {
                if (o->unk_210 != 0) {
                    o->unk_138 = o->unk_138 + 0x555;
                } else {
                    o->unk_138 = o->unk_138 - 0x555;
                }
            }
        }
        break;
    }
    o->unk_13c = o->unk_13c + 1;
    if (o->unk_224 != 7 && o->unk_200 != 5) {
        if (func_ov003_02222fe4(o) != 0) {
            o->unk_13c = 0;
            o->unk_224 = 0;
        }
    } else {
        o->unk_224 = 0;
        switch (o->unk_1fe) {
        case 0:
        case 1:
        case 2:
        case 3:
            func_0204ee10(&x, &y, &o->unk_120);
            if (func_020312a8(x, y) == 1) {
                func_ov003_02220c68(o, &o->unk_218);
            }
            break;
        case 4:
            break;
        case 5:
        case 6:
            func_0204ee10(&x, &y, &o->unk_120);
            if (func_020312a8(x, y) == 2) {
                func_ov003_02220c68(o, &o->unk_218);
            }
            break;
        }
    }
}

void func_ov003_022246f0(Obj *o)
{
    s32 r;
    o->unk_120.x = o->unk_12c;
    o->unk_120.y = o->unk_130;
    o->unk_120.z = o->unk_134;
    (o->*data_ov003_02257b20[o->unk_200].f)();
    r = func_ov003_02222b1c(o);
    if (r != 0 && r != 5) {
        if (o->unk_1fc == 0) {
            o->unk_138 = o->unk_138 + 0x2aa8;
        } else {
            o->unk_138 = func_ov003_022202cc(0, 0xaaa);
        }
        o->unk_201 = 0;
    } else {
        o->unk_201 = o->unk_201 + 1;
    }
    o->unk_13c = o->unk_13c + 2;
}

void func_ov003_022247b8(Obj *o)
{
    (o->*data_ov003_02257ad8[o->unk_23c].b)();
}

void func_ov003_022247f0(Obj *o)
{
    (o->*data_ov003_02257ad8[o->unk_23c].a)();
}

void func_ov003_02224828(s32 *p, s32 a, s32 ang)
{
    func_ov003_02224874(p, a, ang);
    func_ov003_02224848(p + 2, a, ang);
}

void func_ov003_02224848(s32 *p, s32 a, s32 ang)
{
    *p += func_01ffcb0c(a, data_02135f44[((u16)ang >> 4) * 2 + 1]);
}

void func_ov003_02224874(s32 *p, s32 a, s32 ang)
{
    *p += func_01ffcb0c(a, data_02135f44[((u16)ang >> 4) * 2]);
}

void func_ov003_0222489c(void *self, E *e)
{
    V3 *pos = &e->unk_34;
    s32 *cnt = &e->unk_58;
    V3 a1, b, a2;
    s32 t;
    if (e->unk_58 < 0x64) {
        a1.x = pos->x;
        a1.y = pos->y;
        a1.z = pos->z;
        b.x = 0x1000;
        b.y = 0x1000;
        b.z = 0x1000;
        func_ov003_0221cfdc(0x1520, &a1, &b, 0, 0, 0);
        if (func_ov003_02224b1c(e) != 0) {
            *cnt = 0x64;
        }
    } else if ((e->unk_58 & 1) != 0) {
        a2.x = pos->x;
        a2.y = pos->y;
        a2.z = pos->z;
        b.x = 0x1000;
        b.y = 0x1000;
        b.z = 0x1000;
        func_ov003_0221cfdc(0x1520, &a2, &b, 0, 0, 0);
    }
    func_ov003_022209ec(pos, data_ov003_02234768);
    pos->y = pos->y - data_ov003_02234764;
    t = (*cnt * 0x199a) >> 5;
    if (t > 0x199a) t = 0x199a;
    func_020309d4(e, pos, pos, func_02002bdc(&e->unk_4c, &e->unk_40), t, 0, 0xb);
    *cnt = *cnt + 1;
    if (*cnt >= 0x78) {
        e->unk_30 = 0;
        V3 *v = &e->unk_4c;
        e->unk_4c.x = 0x1000;
        v->y = 0x1000;
        v->z = 0x1000;
    }
}

void func_ov003_02224990(void *self, E *e)
{
    V3 *pos = &e->unk_34;
    s32 *cnt = &e->unk_58;
    V3d a(*(V3d *)&e->unk_40);
    V3d b(*(V3d *)&e->unk_4c);
    V3 c30(*pos);
    V3 c3c(*(V3 *)&a);
    V3 c48(*(V3 *)&b);
    if (func_ov003_0222031c(&c30, &c3c, &c48) != 0) {
        e->unk_30 = 2;
        *cnt = 0;
        if (e->unk_5c != 0) {
            func_ov003_02220db0(pos, 0x2800);
        }
    } else {
        V3 x1(*(V3 *)&a);
        V3 x2(*(V3 *)&b);
        s32 ok = func_ov003_02221dd8(pos, &x1, &x2, *cnt, 0x14cd, 0xf) == 0 ? 1 : 0;
        if (ok != 0) {
            e->unk_30 = 2;
            *cnt = 0;
            if (e->unk_5c != 0) {
                func_ov003_02220db0(pos, 0x2800);
            }
        }
        s32 t = (*cnt * 0x199a) >> 5;
        if (t > 0x199a) t = 0x199a;
        func_020309d4(e, pos, pos, func_02002bdc(&e->unk_4c, &e->unk_40), t, 0, 0xb);
        V3 t6c(*pos);
        V3 b78(0x1000, 0x1000, 0x1000);
        func_ov003_0221cfdc(0x1520, &t6c, &b78, 0, 0, 0);
        *cnt = *cnt + 1;
    }
}

void func_ov003_02224adc()
{
}

void func_ov003_02224ae0(Unk_ov003_02224ae0_St *self, E *e)
{
    if (data_ov003_02257ac0[e->unk_30].f) {
        (self->*data_ov003_02257ac0[e->unk_30].f)(e);
    }
}

s32 func_ov003_02224b1c(E *e)
{
    s32 r = 0;
    if (data_021c3070 == 0) {
        return 1;
    }
    V3 v = data_021c309c;
    if (func_ov003_0222034c(&e->unk_34, &v, 0x8000, 0x6000, 0x6000) == 0) {
        r = 1;
    }
    return r;
}

s32 func_ov003_02224b6c(s32 i)
{
    s32 r = 0;
    if (i < 0 || i >= 4) {
        return 0;
    }
    E *e = &data_ov003_02257d1c[i];
    if (e->unk_30 == 1) {
        if (e->unk_58 == 0) {
            r = 1;
        } else if (e->unk_58 == 0xf) {
            r = 2;
        }
    }
    return r;
}
}
