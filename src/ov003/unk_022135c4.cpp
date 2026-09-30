#include "types.h"

struct Unk_ov003_022135c4_V3 {
    s32 x, y, z;
};

struct Unk_ov003_022135c4_Q4 {
    s32 x, y, z, w;
};

struct Unk_ov003_022135c4_Blk {
    s64 v[6];
};

struct Unk_ov003_022135c4_Fl {
    u16 a : 2;
    u16 b : 2;
    u16 c : 1;
    u16 d : 1;
    u16 e : 1;
    u16 f : 1;
    u16 g : 1;
    u16 h : 1;
    u16 i : 1;
};

struct Unk_ov003_022135c4_Rec {
    s32 x, y, z, w;
};

class Unk_ov003_022135c4_Loc {
public:
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[0xc];
    Unk_ov003_022135c4_Loc() {}
    Unk_ov003_022135c4_Loc *func_020339bc(Unk_ov003_022135c4_V3 *v, s32 a, s32 b);
    ~Unk_ov003_022135c4_Loc();
};

struct Unk_ov003_022135c4_Obj {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0c[0x5c - 0xc];
    Unk_ov003_022135c4_V3 unk_5c;
    Unk_ov003_022135c4_V3 unk_68;
    u8 pad_74[0x130 - 0x74];
    u8 unk_130[0x64];
    Unk_ov003_022135c4_Blk unk_194;
    u8 pad_1c4[8];
    u8 unk_1cc[0x64];
    Unk_ov003_022135c4_Blk unk_230;
    u8 pad_260[0x268 - 0x260];
    s32 unk_268;
    s32 unk_26c;
    u8 unk_270[4];
    s32 unk_274;
    u8 pad_278[8];
    u8 unk_280;
    u8 pad_281[0x2a0 - 0x281];
    u8 unk_2a0[0x10];
    s32 unk_2b0;
    u8 pad_2b4[4];
    s32 unk_2b8;
    u8 pad_2bc[0x2dc - 0x2bc];
    u8 unk_2dc;
    u8 pad_2dd[0x2e4 - 0x2dd];
    u8 unk_2e4;
    u8 pad_2e5[3];
    s32 unk_2e8;
    s32 unk_2ec;
    s32 unk_2f0;
    Unk_ov003_022135c4_Q4 unk_2f4;
    Unk_ov003_022135c4_V3 unk_304;
    u8 pad_310[8];
    Unk_ov003_022135c4_V3 unk_318;
    u8 unk_324[0x40];
    u8 pad_364[1];
    u8 unk_365;
    u8 unk_366;
    u8 pad_367[0x370 - 0x367];
    s32 unk_370;
    Unk_ov003_022135c4_Fl unk_374;
    u8 pad_376[0x396 - 0x376];
    u16 unk_396;
    s32 unk_398;
    s32 unk_39c;
};

typedef Unk_ov003_022135c4_Obj Obj;
typedef Unk_ov003_022135c4_V3 V3;
typedef Unk_ov003_022135c4_Q4 Q4;
typedef Unk_ov003_022135c4_Blk Blk;
typedef Unk_ov003_022135c4_Rec Rec;
typedef Unk_ov003_022135c4_Loc Loc;

extern "C" {
extern void *data_021c47c4;
extern void *data_021c3070;
extern u8 data_021c309c[];
extern s32 data_020c8cbc;
extern u32 data_021f4768;
extern s16 data_02135f44[];
extern u8 data_021ed2e6[];
extern s32 data_020d0584[];
extern u8 data_ov003_02230d6c[];
extern u8 data_ov003_02230d88[];

s32 func_ov003_02212d28(Obj *o, s32 a);
s32 func_ov003_02212fd4(u32 a, V3 *p, u16 *q);
s32 func_ov003_02212f04(u32 a, V3 *p, u16 *q);
void func_ov003_02212e50(u16 *q);
void func_ov003_0222ebdc(Obj *o);
s32 func_ov003_0222ec00(Obj *o);
s32 func_ov003_022132a0(Obj *o);
s32 func_ov003_02213290(Obj *o);
void func_ov003_022129d0(Obj *o, s32 a);
void func_ov003_0221316c(Obj *o);
void func_ov003_02212c10(Obj *o);
void func_ov003_02212954(Obj *o);
void func_ov003_02213960(Obj *o);
s32 func_ov003_0221363c(Obj *o);
void func_ov003_02213a30(Obj *o, s32 a, s32 b);

s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc854(V3 *v);
void func_01ffd070(V3 *out, V3 *a, V3 *b);
void func_01ffb94c(Blk *a, Blk *b, Blk *out);
void func_020e9960(V3 *out, V3 *a, V3 *b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e9650(void *a, V3 *b);
void func_020e9888(V3 *v, s32 ang);
void func_020e8388(Blk *m, s32 x, s32 y, s32 z);
void func_020e8434(Blk *m, s32 a);
s32 func_0203ef38(V3 *out, V3 *in);
void func_02099218(Q4 *a, Q4 *b, Q4 *out);
void func_02099300(Q4 *a, Blk *out);
void func_020993dc(Q4 *a);
void func_020309d4(void *self, V3 *a, V3 *b, s32 c, s32 d, Obj *o, s32 k);
void func_02003e70(void *p, u32 a, u32 b, u32 c);
void func_02003e50(void *p);
void func_02003e80(void *p, V3 *v);
void func_02003ecc(void *p);
s32 func_02088d38(void *p, u32 a);
s32 func_02088c98(void *self, void *o, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
void func_02089040(void *p);
void func_02054c2c(void *p, u32 a, void *b);
void func_0205553c(void *p, V3 *v);
void func_0203e624(Obj *o, u32 a);
void func_0203e42c(Obj *o);
void func_020abc10(V3 *p, s32 a, s32 b, s32 c);
void func_ov003_02213a30(Obj *o, s32 a, s32 b);
void func_0204ee10(s32 *x, s32 *y, V3 *p);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 func_0204b14c(u16 *c);
void func_0204eb30(void *g, u16 *v, s32 x, s32 y, s32 z);
Rec *func_020af3f4();
void func_020af53c(void *p, u32 a);
}

extern "C" s32 func_ov003_022135c4(Obj *o)
{
    if (o->unk_398 < 7) {
        return func_ov003_02212d28(o, 3);
    }
    return 0;
}

extern "C" s32 func_ov003_022135e4(Obj *o)
{
    return o->unk_268;
}

extern "C" BOOL func_ov003_022135f0(Obj *o, V3 *v)
{
    if (o->unk_374.i == 0 && o->unk_374.e == 0 && o->unk_2e4 == 0) {
        o->unk_5c.x = v->x;
        o->unk_5c.y = v->y;
        o->unk_5c.z = v->z;
        o->unk_374.i = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_ov003_0221363c(Obj *o)
{
    s32 kind = o->unk_374.c != 0 ? 0xb : 0;
    Loc loc;
    V3 d;
    s32 yaw;
    if (o->unk_39c == 0 && o->unk_398 == 0) {
        o->unk_5c.y -= 0x200;
    }
    func_020309d4(o->unk_270, &o->unk_5c, &o->unk_68, 0, o->unk_26c, o, kind);
    u32 cur = o->unk_280;
    if (cur > o->unk_365 && o->unk_39c == 0 && o->unk_398 == 0) {
        func_02003e70(o->unk_324, 0x81d, 0x7f, 0);
    }
    o->unk_365 = cur;
    u32 fa = 0x20;
    if (o->unk_374.d != 0) fa |= 2;
    u32 fb = 0x12;
    u8 id = o->unk_08;
    if (o->unk_398 == 0xb) fb = 0x11;
    s32 s = func_01ffc5a4(0x41000, 0x64000);
    s32 t = o->unk_268;
    if (t < 0xa00) {
        s = 0x1000;
    } else if (t < 0xe00) {
        s = func_01ffc5a4((0x64 - ((func_01ffc5a4(t - 0xa00, 0x400) * 0x23) >> 12)) << 12, 0x64000);
    }
    s32 t2 = o->unk_268;
    s32 r2 = func_01ffcb0c(t2, s);
    func_02088c98(o->unk_2a0, o, r2, t2 * 2, fa, 0x2fc, fb, id, o->unk_2e8);
    func_02089040(o->unk_2a0);
    func_020e9960(&d, &o->unk_5c, &o->unk_68);
    s32 len = func_01ffc854(&d);
    s32 ang = (s16)((func_01ffc5a4(len, func_01ffcb0c(0x323d, o->unk_268)) >> 1) << 4);
    yaw = func_020e7b98(d.x, d.z);
    if (func_ov003_022132a0(o)) {
        s32 n = func_01ffc854(&d);
        if (n == 0) {
            o->unk_2ec = 0;
            o->unk_2f0 = 0;
        } else {
            s32 v;
            s32 m = 0;
            s32 w = o->unk_39c;
            if (w == 0 && o->unk_398 == 1) m = 1;
            if (m) {
                v = n - func_01ffc5a4(0x2000, 0xa5000);
            } else if (w == 0 && o->unk_398 == 5) {
                v = n - 0x155;
            } else {
                s32 q = o->unk_274;
                if (q & 1) {
                    if (o->unk_374.e != 0) {
                        v = n - 0x155;
                    } else {
                        v = n - 0x28;
                    }
                } else if (q & 2) {
                    v = n - 0xaa;
                } else {
                    v = n - func_01ffc5a4(0x2000, 0xa0000);
                }
            }
            if (v < 0) v = 0;
            if (v > 0x400) v = 0x400;
            n = func_01ffc5a4(v, n);
            o->unk_2ec = func_01ffcb0c(d.x, n);
            o->unk_2f0 = func_01ffcb0c(d.z, n);
        }
    } else {
        o->unk_2ec = 0;
        o->unk_2f0 = 0;
    }
    loc.func_020339bc(&o->unk_5c, 0, 0);
    if (loc.unk_34 == 3) {
        if (o->unk_374.i == 0) {
            o->unk_268 = func_01ffcb0c(o->unk_268, (len >> 7) + 0x1000);
            if (o->unk_268 > 0x1400) o->unk_268 = 0x1400;
        }
    } else {
        s32 m = 0;
        s32 w = o->unk_39c;
        if (w == 0 && o->unk_398 == 2) m = 1;
        if (!m) {
            if (w == 0 && o->unk_398 == 6) {
            } else {
                o->unk_268 = func_01ffcb0c(o->unk_268, 0x1000 - (len >> 9));
                if (o->unk_268 < 0x800) o->unk_268 = 0x800;
            }
        }
    }
    func_ov003_02213a30(o, ang, yaw);
}

extern "C" void func_ov003_02213960(Obj *o)
{
    if (o->unk_2dc != 0) {
        if (o->unk_374.h == 0) {
            o->unk_5c.x = o->unk_5c.x + o->unk_2b0;
            o->unk_5c.z = o->unk_5c.z + o->unk_2b8;
        }
        if (func_02088d38(o->unk_2a0, 4) != 0 && o->unk_268 < 0xa00) {
            if (o->unk_366 == 0) {
                func_02003e70(o->unk_324, 0x81c, 0x7f, 0);
            }
            o->unk_366 = 1;
        } else {
            o->unk_366 = 0;
        }
    } else {
        o->unk_366 = 0;
    }
    o->unk_2e8 = (func_01ffcb0c(func_01ffc5a4(o->unk_268 - 0x800, 0xc00), 0x10cd) + 0xdec) << 2;
}

extern "C" void func_ov003_02213a30(Obj *o, s32 a, s32 b)
{
    V3 v1;
    Q4 q;
    V3 pv;
    V3 ex;
    Blk m;
    Blk m2;
    if (a != 0) {
        s32 t = ((u16)b >> 4) * 2;
        v1.x = data_02135f44[t + 1];
        v1.y = 0;
        v1.z = -data_02135f44[t];
        s32 u = ((s32)((u32)(a << 15) >> 16) >> 4) * 2;
        func_020e9888(&v1, data_02135f44[u]);
        q.x = v1.x;
        q.y = v1.y;
        q.z = v1.z;
        q.w = data_02135f44[u + 1];
        func_02099218(&q, &o->unk_2f4, &o->unk_2f4);
        if ((data_021f4768 & 7) == o->unk_08) {
            func_020993dc(&o->unk_2f4);
        }
    }
    func_01ffd070(&ex, &o->unk_5c, &o->unk_304);
    ex.y = ex.y + o->unk_268;
    ex.y = ex.y - 0x400;
    s32 ang = func_0203ef38(&pv, &ex);
    func_020e8388(&m, pv.x, pv.y, pv.z);
    func_020e8434(&m, ang);
    func_02099300(&o->unk_2f4, &m2);
    func_01ffb94c(&m2, &m, &m);
    o->unk_194 = m;
    o->unk_230 = m;
}

extern "C" void func_ov003_02213b40(Obj *o)
{
    if (o->unk_398 == 9) {
        void *g = data_021c47c4;
        volatile s32 x, y;
        func_0204ee10((s32 *)&x, (s32 *)&y, &o->unk_5c);
        s32 lx = x;
        s32 ly = y;
        s32 hx = lx >> 4;
        s32 hy = ly >> 4;
        u16 *c = func_0204ebd8(g, hx, hy, lx - (hx << 4), ly - (hy << 4), 0);
        if (c != 0 && func_0204b14c(c) != 0) {
            u16 v = 0xfff1;
            func_0204eb30(g, &v, x, y, 0);
        }
        if (func_ov003_02212fd4(o->unk_374.a, &o->unk_5c, &o->unk_396) == 0) {
            if (func_ov003_02212f04(o->unk_374.a, &o->unk_5c, &o->unk_396) == 0) {
                func_020af53c(data_021ed2e6, o->unk_374.a);
            }
        }
        func_ov003_02212e50(&o->unk_396);
    }
    if (o->unk_39c == 0 && o->unk_398 == 0) {
        u32 i = o->unk_08 & 1;
        Rec *r = func_020af3f4();
        r[i & 1].x = o->unk_5c.x;
        r[i & 1].y = o->unk_5c.y;
        r[i & 1].z = o->unk_5c.z;
        s32 sv = o->unk_268;
        i = o->unk_08 & 1;
        r = func_020af3f4();
        r[i & 1].w = sv;
    }
    func_02003e50(o->unk_324);
    func_ov003_0222ebdc(o);
}

extern "C" BOOL func_ov003_02213c60(Obj *o)
{
    if (data_021c3070 != 0) {
        if (func_020e9650(data_021c309c, &o->unk_5c) <= data_020c8cbc) {
            s32 s = func_01ffc5a4(o->unk_268, 0x1000);
            V3 v;
            v.x = s;
            v.y = s;
            v.z = s;
            if (o->unk_398 == 0xb) {
                func_0205553c(o->unk_1cc, &v);
            } else {
                func_0205553c(o->unk_130, &v);
            }
            func_020abc10(&o->unk_5c, o->unk_268, 0x4000, 0x1000);
        }
    }
    return TRUE;
}

extern "C" BOOL func_ov003_02213cec(Obj *o)
{
    s32 t = func_01ffc5a4(0xa000, 0x64000);
    if (o->unk_374.e == 0) o->unk_370 = t;
    o->unk_68.x = o->unk_318.x;
    o->unk_68.y = o->unk_318.y;
    o->unk_68.z = o->unk_318.z;
    func_ov003_02213960(o);
    func_ov003_02212c10(o);
    func_ov003_02212954(o);
    func_ov003_0221363c(o);
    Unk_ov003_022135c4_Fl *fl = &o->unk_374;
    fl->f = fl->e;
    fl->e = 0;
    fl->h = 0;
    fl->i = 0;
    o->unk_2e4 = 0;
    o->unk_68.x = o->unk_5c.x;
    o->unk_68.y = o->unk_5c.y;
    o->unk_68.z = o->unk_5c.z;
    V3 *pv = &o->unk_68;
    o->unk_318.x = o->unk_68.x;
    o->unk_318.y = pv->y;
    o->unk_318.z = pv->z;
    V3 sp = o->unk_5c;
    func_02003e80(o->unk_324, &sp);
    return TRUE;
}

extern "C" void func_ov003_02213de0(Obj *o)
{
    u32 k = 0xfff1;
    o->unk_396 = k;
    o->unk_2f4.x = data_020d0584[0];
    o->unk_2f4.y = data_020d0584[1];
    o->unk_2f4.z = data_020d0584[2];
    o->unk_2f4.w = data_020d0584[3];
    func_02054c2c(o->unk_130, 0x534e5730, data_ov003_02230d6c);
    func_02054c2c(o->unk_1cc, 0x534e5731, data_ov003_02230d88);
    if (func_ov003_02213290(o) != 0) {
        u32 i = o->unk_08 & 1;
        Rec *r = func_020af3f4();
        o->unk_268 = r[i & 1].w;
        i = o->unk_08 & 1;
        r = func_020af3f4();
        r[i & 1].x = o->unk_5c.x;
        r[i & 1].y = o->unk_5c.y;
        r[i & 1].z = o->unk_5c.z;
        s32 sv = o->unk_268;
        i = o->unk_08 & 1;
        r = func_020af3f4();
        r[i & 1].w = sv;
    }
    func_0203e624(o, (u16)o->unk_08);
    func_ov003_022129d0(o, 0);
    func_ov003_0221316c(o);
    o->unk_68.x = o->unk_5c.x;
    o->unk_68.y = o->unk_5c.y;
    o->unk_68.z = o->unk_5c.z;
    V3 *pv = &o->unk_68;
    o->unk_318.x = o->unk_68.x;
    o->unk_318.y = pv->y;
    o->unk_318.z = pv->z;
    func_020309d4(o->unk_270, &o->unk_5c, &o->unk_68, 0, o->unk_26c, o, 0xb);
    o->unk_68.x = o->unk_5c.x;
    o->unk_68.y = o->unk_5c.y;
    o->unk_68.z = o->unk_5c.z;
    pv = &o->unk_68;
    o->unk_318.x = o->unk_68.x;
    o->unk_318.y = pv->y;
    o->unk_318.z = pv->z;
    o->unk_365 = o->unk_280;
    func_ov003_02213a30(o, 0, 0);
    func_02003ecc(o->unk_324);
    func_0203e42c(o);
    func_ov003_0222ec00(o);
}
