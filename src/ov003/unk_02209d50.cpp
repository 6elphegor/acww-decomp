#include "types.h"

struct Unk_ov003_02209d50_V3 {
    s32 x, y, z;
    Unk_ov003_02209d50_V3() {}
    Unk_ov003_02209d50_V3(const Unk_ov003_02209d50_V3 &o) { x = o.x; y = o.y; z = o.z; }
};

struct Unk_ov003_02209d50_V3D : Unk_ov003_02209d50_V3 {
    Unk_ov003_02209d50_V3D() {}
    ~Unk_ov003_02209d50_V3D() {}
};

struct Unk_ov003_02209d50_P3 {
    s32 x, y, z;
};

struct Unk_ov003_02209d50_V2 {
    s32 x, y;
    Unk_ov003_02209d50_V2() {}
    Unk_ov003_02209d50_V2(const Unk_ov003_02209d50_V2 &o) { x = o.x; y = o.y; }
};

struct Unk_ov003_02209d50_Blk {
    s32 v[12];
};

struct Unk_ov003_02209d50_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02209d50_Rec {
    Unk_ov003_02209d50_V3 unk_00;
    u8 unk_0c;
    u8 unk_0d;
};

struct Unk_ov003_02209d50_Rec2 {
    s32 unk_00;
    Unk_ov003_02209d50_V3 unk_04;
};

struct Unk_ov003_02209d50_Pay {
    Unk_ov003_02209d50_V3 v;
    u16 a;
    u8 b;
};

class Unk_ov003_02209d50_Msg {
public:
    Unk_ov003_02209d50_Msg();
    ~Unk_ov003_02209d50_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    Unk_ov003_02209d50_Pay unk_0c;
};

struct Unk_ov003_02209d50_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_02209d50_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xc4 - 0x90];
    Unk_ov003_02209d50_V3 unk_c4;
    s16 unk_d0;
    u8 pad_d2[0x294 - 0xd2];
    Unk_ov003_02209d50_Blk unk_294;
    u8 pad_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[4];
    Unk_ov003_02209d50_Bits unk_2d0;
    Unk_ov003_02209d50_Bits unk_2d4;
    u8 pad_2d8[0x628 - 0x2d8];
    Unk_ov003_02209d50_V3 unk_628;
    u8 pad_634[0x694 - 0x634];
    Unk_ov003_02209d50_Blk unk_694;
    u8 pad_6c4[0x700 - 0x6c4];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_02209d50_Rec unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x818 - 0x800];
    s32 unk_818;
    u16 unk_81c;
    u16 unk_81e;
    Unk_ov003_02209d50_V3 unk_820;
    s32 unk_82c;
    s32 unk_830;
    s32 unk_834;
    u8 pad_838[0x8ec - 0x838];
    u8 unk_8ec[0x10];
};

typedef Unk_ov003_02209d50_Obj Obj;
typedef Unk_ov003_02209d50_V3 V3;
typedef Unk_ov003_02209d50_V2 V2;
typedef Unk_ov003_02209d50_V3D V3D;
typedef Unk_ov003_02209d50_Blk Blk;
typedef Unk_ov003_02209d50_Bits Bits;
typedef Unk_ov003_02209d50_Rec Rec;
typedef Unk_ov003_02209d50_Rec2 Rec2;
typedef Unk_ov003_02209d50_Msg Msg;
typedef Unk_ov003_02209d50_Pay Pay;

extern "C" {
extern void *data_020cbb18;
extern void *data_021c47c4;

s32 func_02010914(Obj *o);
void func_02090330(s32 a, V3 *b, s16 *c, s32 d);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
s32 func_0200ec1c(Obj *o, u32 a);
BOOL func_0200ec44(Obj *o, u32 a);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
void func_02030504(s32 a, s32 b);
void func_ov003_02219c5c(s32 a, V3 v, u32 b);
void func_ov003_02219908(s32 a, V3 v, s16 b);
void func_0200e7f4(Obj *o);
void func_0200f004(Obj *o, s32 a);
void func_0203ee38(void *a, void *b);
s32 func_020729bc(void *g, s32 a);
void func_02010358(Obj *o, s32 a, s32 b, s32 c);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_02076964(void *p, u32 a);
u16 func_0207694c(void *p);
void func_0204ed8c(V3 *out, s32 x, s32 y);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_020787f8(V3 *v);
s32 func_0200e248(Obj *o, Msg *m);
void func_020109c4(Obj *o);
void func_0200ede8(Obj *o, V3 *v);
void func_0201071c(Obj *o);
BOOL func_02056654(void *p);
s32 func_02007c08(Obj *o, s32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);

void func_ov003_02209d50(Obj *o);
void func_ov003_02209ef4(Obj *o, s32 p);
void func_ov003_02209f68(Obj *o, s32 a);
void func_ov003_02209fc8(Obj *o, Msg *m);
void func_ov003_0220a27c(u8 *p, s32 *xy, u16 *a, u8 *b);
void func_ov003_0220a29c(u8 *p, V2 v, u16 a, u8 b);
s32 func_ov003_0220a2bc(Obj *o, V3 v, u16 a, u8 b, s32 c, s32 d);
s32 func_ov003_0220a344(Obj *o, V3 v, u8 x, s32 c, s32 e);
void func_ov003_0220a39c(Pay *d, V3 v, u16 a, u8 b);
void func_ov003_0220a3b4(Obj *o);
void func_ov003_0220a410(Obj *o);
void func_ov003_0220a484(Obj *o);
void func_ov003_0220a5e4(Obj *o);
}

static inline BOOL Unk_ov003_02209fc8_Eq(u16 *p) {
    if (func_0204b2d4(p)) {
        u16 w = 0xfff1;
        if (func_0204b25c(p) == func_0204b25c(&w)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov003_02209fc8_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void func_ov003_02209d50(Obj *o) {
    s32 a, b;
    V3 p;
    volatile Unk_ov003_02209d50_P3 sv;
    Blk b0;
    Blk b1;
    func_02010914(o);
    if (o->unk_700 != 0x49) {
        Rec *r = &o->unk_7d0;
        p = r->unk_00;
        switch (o->unk_2d4.mid) {
        case 5:
            func_02090330(6, &p, 0, 0);
            break;
        case 6:
            func_0200ecdc(o, 0x841);
            func_0200ec30(o, 9);
            break;
        case 12: {
            func_02090330(8, &p, 0, 0);
            func_0204ee10(&a, &b, &p);
            func_02030504(a, b);
            func_ov003_02219c5c(o->unk_7fc, p, r->unk_0d);
            func_0200ec30(o, 0xd);
            func_0200ec1c(o, 0x1c);
            break;
        }
        }
        if (o->unk_2d4.mid >= 0x18) {
            func_0200ec1c(o, 9);
            V3 *pv = &o->unk_c4;
            sv.x = pv->x;
            sv.y = pv->y;
            sv.z = pv->z;
            s16 h = o->unk_d0;
            b0 = o->unk_294;
            b1 = o->unk_694;
            func_0200e7f4(o);
            func_0200f004(o, 0x1000);
            o->unk_c4.x = sv.x;
            o->unk_c4.y = sv.y;
            o->unk_c4.z = sv.z;
            o->unk_d0 = h;
            o->unk_294 = b0;
            o->unk_694 = b1;
        } else {
            s32 z2 = o->unk_628.z;
            s32 y2 = o->unk_628.y;
            s32 x2 = o->unk_628.x;
            o->unk_820.x = x2;
            o->unk_820.y = y2;
            o->unk_820.z = z2;
            func_0203ee38(&o->unk_820, &o->unk_820);
        }
    }
}

namespace Unk_ov003_02209ef4_P {
extern "C" void func_ov003_02219c5c(s32 a, V3 *v, u32 b);
}

extern "C" void func_ov003_02209ef4(Obj *o, s32 p) {
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        if (func_0200ec44(o, 0x1c)) {
            Rec *r = &o->unk_7d0;
            V3 v;
            v = r->unk_00;
            Unk_ov003_02209ef4_P::func_ov003_02219c5c(o->unk_7fc, &v, r->unk_0d);
            func_0200ec1c(o, 0x1c);
            func_0200ec1c(o, 9);
        }
        if (p != 0x60 && p != 0x61) func_0200ec1c(o, 0xd);
    }
}

extern "C" void func_ov003_02209f68(Obj *o, s32 a) {
    s32 xy[2];
    V3 v;
    u16 h;
    u8 b;
    if (o->unk_7ec == 0) {
        xy[0] = 0;
        xy[1] = 0;
        func_ov003_0220a27c(o->unk_8ec, xy, &h, &b);
        func_0204ed8c(&v, xy[0], xy[1]);
        V3 w = v;
        func_ov003_0220a2bc(o, w, h, b, 6, a);
    }
}

extern "C" void func_ov003_02209fc8(Obj *o, Msg *m) {
    Pay *pl = &m->unk_0c;
    V3 v = pl->v;
    u16 loc = pl->a;
    u8 b = pl->b;
    Rec *r = &o->unk_7d0;
    r->unk_0c = 0;
    r->unk_00 = v;
    r->unk_0d = b;
    s32 st = o->unk_700;
    if (st == 0x49 || st == 0x4a || !Unk_ov003_02209fc8_Eq(&loc)) {
        func_02010358(o, 0x4f, 3, 0);
    } else {
        func_02010358(o, 0x49, 3, 0);
    }
    s32 z2 = o->unk_628.z;
    s32 y2 = o->unk_628.y;
    s32 x2 = o->unk_628.x;
    o->unk_820.x = x2;
    o->unk_820.y = y2;
    o->unk_820.z = z2;
    func_0203ee38(&o->unk_820, &o->unk_820);
    o->unk_82c = 0x1000;
    o->unk_830 = 0x1000;
    o->unk_834 = 0x1000;
    func_0200ec1c(o, 0xd);
    s32 xy[2];
    xy[0] = 0;
    xy[1] = 0;
    func_0204ee10(&xy[0], &xy[1], &v);
    u16 t = o->unk_81c;
    V2 pr;
    pr.x = xy[0];
    pr.y = xy[1];
    func_ov003_0220a29c(o->unk_8ec, pr, t, b);
    s32 px = xy[0];
    s32 py = xy[1];
    s32 hx = px >> 4;
    s32 hy = py >> 4;
    u16 *cell = func_0204ebd8(data_021c47c4, hx, hy, px - (hx << 4), py - (hy << 4), 0);
    if (!Unk_ov003_02209fc8_Eq(&loc)) {
        o->unk_81c = o->unk_81e = loc;
        if (Unk_ov003_02209fc8_Rng(cell, 0xfc, 0xfd)) {
            *(u32 *)&o->unk_2d4 = (u32)((o->unk_2d0.mid - 1) << 16) >> 4;
            func_0200ec30(o, 0xd);
        }
    } else {
        if (Unk_ov003_02209fc8_Eq(&o->unk_81c) || !func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (cell == 0) {
                o->unk_81c = o->unk_81e = 0xfff1;
            } else {
                o->unk_81c = o->unk_81e = *cell;
            }
        }
    }
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02034dd0(0x12, 0xf, 0);
        if (Unk_ov003_02209fc8_Rng(&o->unk_81c, 0x1549, 0x1549)) func_020787f8(&o->unk_5c);
    }
    o->unk_818 = 7;
    func_0200ec30(o, 0x1c);
}

extern "C" void func_ov003_0220a27c(u8 *p, s32 *xy, u16 *a, u8 *b) {
    xy[0] = p[2];
    xy[1] = p[3];
    *a = func_0207694c(p);
    *b = p[4];
}

extern "C" void func_ov003_0220a29c(u8 *p, V2 v, u16 a, u8 b) {
    p[2] = v.x;
    p[3] = v.y;
    func_02076964(p, a);
    p[4] = b;
}

extern "C" s32 func_ov003_0220a2bc(Obj *o, V3 v, u16 a, u8 b, s32 c, s32 d) {
    Msg m;
    m.func_0200e2c0(0x5f, c, *(s16 *)&d);
    func_ov003_0220a39c(&m.unk_0c, v, a, b);
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        o->unk_81c = o->unk_81e = 0xfff1;
    }
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220a344(Obj *o, V3 v, u8 x, s32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x5f, c, *(s16 *)&e);
    func_ov003_0220a39c(&m.unk_0c, v, 0xfff1, x);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220a39c(Pay *d, V3 v, u16 a, u8 b) {
    d->v.x = v.x;
    d->v.y = v.y;
    d->v.z = v.z;
    d->a = a;
    d->b = b;
}

extern "C" void func_ov003_0220a3b4(Obj *o) {
    V3 v;
    func_ov003_0220a484(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_020109c4(o);
    } else {
        Rec2 *r = (Rec2 *)&o->unk_7d0;
        v = r->unk_04;
        func_0200ede8(o, &v);
    }
    func_0201071c(o);
    func_ov003_0220a410(o);
}

extern "C" void func_ov003_0220a410(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        if (o->unk_700 == 0x49) {
            if (*(u8 *)&o->unk_7d0 != 0) {
                func_02010358(o, 0x4e, 3, 0);
            } else {
                func_02010358(o, 0x4b, 3, 0);
            }
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov003_0220a484(Obj *o) {
    s16 h;
    V3D p;
    s32 a, b;
    if (o->unk_700 != 0x49) {
        Rec2 *r = (Rec2 *)&o->unk_7d0;
        p.x = r->unk_04.x;
        p.y = r->unk_04.y;
        p.z = r->unk_04.z;
        h = o->unk_8e;
        if (o->unk_700 == 0x4b) {
            switch (o->unk_2d4.mid) {
            case 2:
                func_02090330(6, &p, 0, 0);
                break;
            case 5:
                func_0200ecdc(o, 0x841);
                func_0200ec30(o, 9);
                break;
            case 7: {
                func_02090330(7, &p, &h, 0);
                func_ov003_02219c5c(o->unk_7fc, p, 0);
                func_0200ec1c(o, 0x1c);
                func_0204ee10(&a, &b, &p);
                func_02030504(a, b);
                break;
            }
            }
        } else {
            switch ((s32)o->unk_2d4.mid) {
            case 5:
                func_0200ecdc(o, 0x85b);
                func_0200ec30(o, 9);
                break;
            case 12:
                func_02090330(6, &p, 0, 0);
                break;
            case 18:
                func_02090330(8, &p, &h, 0);
                break;
            case 21: {
                func_ov003_02219908(o->unk_7fc, p, o->unk_8e);
                func_ov003_02219c5c(o->unk_7fc, p, 0);
                func_0200ecdc(o, 0x85c);
                func_0200ec1c(o, 0x1c);
                break;
            }
            }
        }
    }
    func_02010914(o);
}

extern "C" void func_ov003_0220a5e4(Obj *o) {
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        if (func_0200ec44(o, 0x1c)) {
            Rec2 *r = (Rec2 *)&o->unk_7d0;
            V3D p;
            p.x = r->unk_04.x;
            p.y = r->unk_04.y;
            p.z = r->unk_04.z;
            if (o->unk_700 == 0x4b) {
                func_ov003_02219c5c(o->unk_7fc, p, 0);
            } else {
                func_ov003_02219908(o->unk_7fc, p, o->unk_8e);
                func_ov003_02219c5c(o->unk_7fc, p, 0);
            }
            func_0200ec1c(o, 0x1c);
        }
    }
}
