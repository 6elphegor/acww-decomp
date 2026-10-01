#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov003_02206574_V3 {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ Unk_ov003_02206574_V3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c(void *a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov003_022067c4_Shared {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_s14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov003_022067c4_Shared *unk_3c;
    /* 0x40 */ u8 pad_40[4];
};

class Unk_ov003_02206574_Msg {
public:
    Unk_ov003_02206574_Msg();
    ~Unk_ov003_02206574_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0x1c];
};

struct Unk_ov003_02206c04_St {
    /* 0x00 */ s32 f0;
    /* 0x04 */ s32 f4;
    /* 0x08 */ s32 f8;
    /* 0x0c */ s32 fc;
    /* 0x10 */ s32 f10;
    /* 0x14 */ u16 f14;
    /* 0x16 */ u16 pad_16;
    /* 0x18 */ s32 f18;
};

struct Unk_ov003_022067c4_Pad {
    s32 v[2];
    Unk_ov003_022067c4_Pad() {}
    ~Unk_ov003_022067c4_Pad() {}
};

enum Unk_ov003_02206a84_Three { Unk_ov003_02206a84_THREE = 3 };

class Unk_ov003_02206574_Obj : public Unk_020d9670, public Unk_020ddcf0 {
public:
    /* 0x130 */ u8 pad_130[0x2cc - 0x130];
    /* 0x2cc */ u8 unk_2cc[8];
    /* 0x2d4 */ u8 pad_2d4[0x2dc - 0x2d4];
    /* 0x2dc */ s32 unk_2dc;
    /* 0x2e0 */ u8 pad_2e0[0x59c - 0x2e0];
    /* 0x59c */ u8 unk_59c[0x688 - 0x59c];
    /* 0x688 */ Unk_ov003_02206574_V3 unk_688;
    /* 0x694 */ u8 pad_694[0x6dc - 0x694];
    /* 0x6dc */ u8 unk_6dc[0x700 - 0x6dc];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[5];
    /* 0x709 */ u8 unk_709[0x7d0 - 0x709];
    /* 0x7d0 */ Unk_ov003_02206c04_St unk_7d0;
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
};

typedef Unk_ov003_02206574_Obj Obj;
typedef Unk_ov003_02206574_V3 V3;
typedef Unk_ov003_02206574_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern char data_ov003_02230af4[];
extern s16 data_02135f44[];
struct Unk_ov003_02206c04_Keys { u16 a; u16 b; s16 c; };
extern Unk_ov003_02206c04_Keys data_021f47d8;

s32 func_02007c08(Obj *o, s32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_02010914(Obj *o);
void func_020109c4(Obj *o);
void func_0201071c(Obj *o);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_0200ec30(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200eb58(Obj *o, u32 a, u32 b);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ec54(Obj *o, u32 a, void *v);
void func_0200f478(Obj *o, u32 a);
s32 func_0200f4c0(Obj *o, u32 a);
s32 func_0200f5b0(Obj *o);
s32 func_0200d640(Obj *o);
s32 func_0200d634(Obj *o);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
s32 func_020729bc(void *g, s32 a);
s32 func_02097520(s32 a);
void func_02098738(s32 a, u16 *p);
u16 *func_02098744(s32 a);
s32 func_02098eb0(u16 *p);
void func_020946f0(s32 a, s32 b);
void func_02099064(s32 a);
void func_0205e24c(void *p, u16 *a, s32 b);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
void func_0205e184(void *p, s32 a);
void func_0205d354(void *p, void *q);
void func_0203ee38(V3 *a, V3 *b);
s32 func_02090330(s32 a, V3 *v, void *p, s32 b);
void func_020902d4(s32 a, void *v, void *p, s32 b);
void func_020902b0(s32 a, V3 *v, s32 b, s32 c);
s32 func_0209750c();
void func_0209875c(s32 a, s32 b);
u8 *func_02098868(s32 a);
s32 func_02098044(s32 a, s32 b);
void func_0209801c(s32 a, s32 b);
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
void func_0203a598();
void func_0203a844();
void func_0203d7f8();
void func_02034d70(s32 a);
void func_02034d84(s32 a);
s32 func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_020339bc(void *out, V3 *v, s32 a, s32 b);
void func_02033988(void *p);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffc854(V3 *v);
void func_020e9960(V3 *out, V3 *a, V3 *b);
s32 func_ov003_0221950c(s32 a, V3 *v);
s32 func_ov003_02210628(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

s32 func_ov003_02206574(Obj *o, s32 a, s32 b);
s32 func_ov003_022065cc(Obj *o);
s32 func_ov003_02206670(Obj *o);
s32 func_ov003_02206770(Obj *o, s32 a, s32 b);
void func_ov003_022067c4(Obj *o);
s32 func_ov003_02206a84(Obj *o);
s32 func_ov003_02206bb0(Obj *o, s32 a, s32 b);
void func_ov003_02206c04(Obj *o);
void func_ov003_02206de8(Obj *o);
}

extern "C" s32 func_ov003_02206574(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x81, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_022065ac(Obj *o) {
    func_ov003_02206670(o);
    func_020109c4(o);
    func_0201071c(o);
    func_ov003_022065cc(o);
}

extern "C" s32 func_ov003_022065cc(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        u16 t = 0x137d;
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            s32 r4 = func_02098eb0(&t);
            if (r4 != -1) {
                func_0200ec1c(o, 0);
                func_020946f0(0x15, o->unk_7fc);
                func_02099064(r4);
                func_ov003_02210628(o, 2, 2, 0, 0, 0, 6, -1);
                return;
            }
        }
        func_0200ce98(o, 3, 1, -1);
    }
}

extern "C" s32 func_ov003_02206670(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 0xd)) {
        u16 t[2];
        s32 r = func_02097520(o->unk_7fc);
        t[0] = 0xfff1;
        func_02098738(r, &t[0]);
        t[1] = 0xfff1;
        func_0205e24c(o->unk_59c, &t[1], 0);
        func_0200ecdc(o, 0x850);
        V3 v;
        s32 tz = o->unk_688.z;
        s32 ty = o->unk_688.y;
        s32 tx = o->unk_688.x;
        v.x = tx;
        v.y = ty;
        v.z = tz;
        func_0203ee38(&v, &v);
        func_02090330(0x24, &v, &o->unk_8e, 0);
        func_0200ec30(o, 9);
    }
}

extern "C" void func_ov003_02206710(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u16 *r = func_02098744(func_02097520(o->unk_7fc));
        if (r) {
            func_0200eb58(o, 3, *r);
        }
    }
}

extern "C" s32 func_ov003_02206750(Obj *o, s32 a) {
    return func_ov003_02206770(o, 6, a);
}

extern "C" void func_ov003_0220675c(Obj *o) {
    func_02010358(o, 0x7b, 3, 0);
}

extern "C" s32 func_ov003_02206770(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x80, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_022067a8(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov003_022067c4(o);
}

extern "C" void func_ov003_022067c4(Obj *o) {
    Unk_ov003_022067c4_Pad pad;

    switch (o->unk_700) {
    case 0x71:
        if (func_02056654(o->unk_2cc)) {
            func_02010358(o, 0x72, 0, 0);
        }
        break;
    case 0x72:
        func_0200f478(o, 0x3ae);
        if (func_02056654(o->unk_2cc)) {
            func_02010358(o, 0x73, 0, 0);
        }
        break;
    case 0x73:
        if (func_02056654(o->unk_2cc)) {
            func_0200ecdc(o, 0x817);
            func_02010358(o, 0x74, 0, 0);
            s32 r5 = func_0209750c();
            if (r5) {
                func_0209875c(r5, 1);
                u8 *q = func_02098868(r5) + 0x10;
                func_0205d354(o->unk_709, q);
                if (func_02098044(r5, 0x17)) {
                    func_0209801c(r5, 0x19);
                }
            }
        }
        break;
    case 0x74:
        if (func_02056654(o->unk_2cc)) {
            func_02010358(o, 0x75, 0, 0);
        }
        break;
    case 0x75: {
        u8 *p = (u8 *)&o->unk_7d0;
        s16 prev = o->unk_8e;
        func_0200f4c0(o, 0x59a);
        if (prev != 0) {
            if (o->unk_8e == 0) {
                func_02034d70(0x19);
                func_02034e10(0xd, 0x40, 0x7f, 1);
            }
        }
        switch (*p) {
        case 0:
            *p = 1;
            func_0203e488(o, o);
            func_0200ec30(o, 0x11);
            ((Unk_020ddcf0 &)*o).func_020a710c(data_ov003_02230af4);
            o->unk_1e = 0x14;
            o->unk_3c->unk_08 = 1;
            func_0203a598();
        case 1:
            if (o->unk_3c) {
                if (o->unk_3c->unk_04) {
                    *p = 2;
                }
            }
            break;
        case 2:
            if (o->unk_3c) {
                if (o->unk_3c->unk_04 == 0) {
                    func_0203e47c(o, o);
                    func_0200ec1c(o, 0x11);
                    func_0203d7f8();
                    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                    func_0200ce98(o, 3, 1, -1);
                    func_0200ec1c(o, 7);
                    func_0203a844();
                    func_02034d84(0x40);
                    func_02034dd0(0xc, 0xf, 5);
                }
            }
            break;
        }
        break;
    }
    }
}

extern "C" void func_ov003_022069c4() {
}

extern "C" void func_ov003_022069c8(Obj *o) {
    func_02010358(o, 0x71, 3, 0);
    *(u8 *)&o->unk_7d0 = 0;
    if (func_0200f5b0(o) == 3) {
        func_0205e1a0(o->unk_59c, 0x13, 3, 0);
    }
    func_0200ec1c(o, 0x1a);
    func_02034d84(0x3f);
    func_02034dd0(0x19, 0xf, 0);
}

extern "C" s32 func_ov003_02206a1c(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x78, a, b);
    if (func_0200e248(o, &m)) {
        func_0200ec30(o, 7);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov003_02206a68(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov003_02206a84(o);
}

extern "C" s32 func_ov003_02206a84(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        u16 k = 3;
        if (func_0200f5b0(o) == 4) {
            k *= (u32)k;
        }
        func_0200ce98(o, k, 1, -1);
    }
}

extern "C" s32 func_ov003_02206adc(Obj *o, s32 a) {
    return func_ov003_02206bb0(o, 6, a);
}

extern "C" void func_ov003_02206ae8(Obj *o) {
    V3 pos;
    u32 buf[0x10];
    V3 pos2;
    s32 st = func_0200f5b0(o);
    if (st == 10 || (u32)(st - 3) <= 1) {
        func_02010358(o, 0x94, 3, 0);
        if (func_0200f5b0(o) == 4) {
            func_0205e1a0(o->unk_59c, 0x12, 3, 1);
        }
    } else {
        func_02010358(o, 0x93, 3, 0);
    }
    V3 *pv = &o->unk_5c;
    pos.x = o->unk_5c.x;
    pos.y = pv->y;
    pos.z = pv->z;
    func_020339bc(buf, &pos, 0, 0);
    if (buf[0x34 / 4] == 0x13) {
        func_020902b0(0x91, &pos, 0, 0);
    } else {
        func_020902b0(0x90, &pos, 0, 0);
    }
    func_0200ec30(o, 9);
    pv = &o->unk_5c;
    pos2.x = o->unk_5c.x;
    pos2.y = pv->y;
    pos2.z = pv->z;
    func_ov003_0221950c(o->unk_7fc, &pos2);
    func_0200ecdc(o, 0x7e9);
    func_02033988(buf);
}

extern "C" s32 func_ov003_02206bb0(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x75, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

namespace Unk_ov003_02206be8_Ns {
extern "C" s32 func_ov003_02206c04(Obj *o);
extern "C" s32 func_ov003_02206de8(Obj *o);
}

extern "C" void func_ov003_02206be8(Obj *o) {
    Unk_ov003_02206be8_Ns::func_ov003_02206de8(o);
    func_0201071c(o);
    Unk_ov003_02206be8_Ns::func_ov003_02206c04(o);
}

extern "C" void func_ov003_02206c04(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        Unk_ov003_02206c04_St *p = &o->unk_7d0;
        s32 *q = &p->f10;
        s32 r4 = p->f0;
        s32 h = p->f14;
        s32 sp10;
        V3 a, b, c, d;
        b.y = 0;
        a.y = 0;
        s32 idx = (h >> 4) * 2;
        a.x = func_01ffcb0c(data_02135f44[idx], r4);
        a.z = func_01ffcb0c(data_02135f44[idx + 1], r4);
        s32 s4 = func_0200d640(o);
        s32 s8 = func_0200d634(o);
        s32 i2 = ((u16)s8 >> 4) * 2;
        b.x = func_01ffcb0c(data_02135f44[i2], s4);
        b.z = func_01ffcb0c(data_02135f44[i2 + 1], s4);
        o->unk_7d0.f0 = s4;
        p->f14 = s8;
        r4 = 0;
        func_020e9960(&d, &a, &b);
        c.x = d.x;
        c.y = d.y;
        c.z = d.z;
        if (func_01ffc854(&c) >= 0x59a) {
            r4 = func_01ffc5a4(func_01ffcb0c(func_01ffc854(&c), 0x6400), 0x59a);
        }
        s32 t = 0;
        u32 k = data_021f47d8.b;
        if (k & 1) t += 0x14;
        if (k & 2) t += 0x14;
        if (k & 0x400) t += 0x14;
        if (k & 0x800) t += 0x14;
        if (k & 0x200) t += 0x14;
        if (k & 0x100) t += 0x14;
        if (k & 8) t += 0x14;
        if (k & 4) t += 0x14;
        r4 += t << 12;
        if (r4 == 0) {
            r4 += 0x2000;
        }
        *q = *q + r4;
        p->fc = r4 >> 12;
        if (*q < 0) {
            *q = 0;
        }
        if (r4 != 0) {
            if (s4 != 0 || t != 0) {
                func_0200ecdc(o, 0x7ef);
            }
            p->f8 = func_01ffc5a4(func_01ffcb0c(func_01ffcb0c(0x1c00, *q), 0xa66), 0x190000) + 0x800;
        }
        if (func_0200ec44(o, 0xb) != 0 || p->f10 >= 0x190000) {
            func_ov003_02206bb0(o, 6, -1);
        }
    }
}

extern "C" void func_ov003_02206de8(Obj *o) {
    Unk_ov003_02206c04_St *r6 = &o->unk_7d0;
    s32 *r4 = &r6->f4;
    if (r6->fc >= 10) {
        *r4 = *r4 + 0x1333;
    } else {
        *r4 = *r4 - 0x4cd;
    }
    s32 v = *r4;
    if (v > 0x2400) {
        *r4 = 0x2400;
    } else if (v < r6->f8) {
        *r4 = r6->f8;
    }
    o->unk_2dc = *r4;
    if (func_0200f5b0(o) == 4) {
        func_0205e184(o->unk_59c, *r4);
    }
    func_02010914(o);
    s32 *r4b = &r6->f18;
    s32 z = 0;
    if (r6->f18 == -1) {
        *r4b = func_02090330(0x4c, (V3 *)o->unk_6dc, (void *)z, z);
    } else {
        func_020902d4(r6->f18, o->unk_6dc, (void *)z, z);
    }
    func_0200ec54(o, 0x8a, &o->unk_5c);
}
