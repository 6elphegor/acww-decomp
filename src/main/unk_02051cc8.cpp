#include "types.h"

struct Unk_02051d24_Obj {
    virtual s32 v00(); virtual s32 v04(); virtual s32 v08(); virtual s32 v0c();
    virtual s32 v10(); virtual s32 v14(); virtual s32 v18(); virtual s32 v1c();
    virtual s32 v20(); virtual s32 v24(); virtual s32 v28(); virtual s32 v2c();
    virtual s32 v30(); virtual s32 v34(); virtual s32 v38(); virtual s32 v3c();
    virtual s32 v40(); virtual s32 v44(); virtual s32 v48(); virtual s32 v4c();
    virtual s32 v50(); virtual s32 v54(); virtual s32 v58(); virtual s32 v5c();
    virtual s32 v60(); virtual s32 v64(); virtual s32 v68(); virtual s32 v6c();
    virtual s32 vfunc_70(s32 a, u32 b);
    virtual s32 vfunc_74(u32 a);
    virtual u8 vfunc_78();
};

struct Unk_02052134_W { u32 a:1, b:4, c:4, d:1, e:1, f:16; };
struct Unk_020520a8_W { u32 a:4, b:4, c:16; };
struct Unk_020520d0_W { u32 a:4, b:4, h:4, i:1, j:1, k:1, c:16; };
struct Unk_0205218c_B { u8 a:6, b:1, c:1; };
struct Unk_02051fcc_W { u16 a:6, b:1, c:4, d:4; };
struct Unk_020521fc_W { u32 a:6, b:1, c:1, d:4, e:4, f:5, g:8, n:1, o:1, p:1; };
struct Unk_0205242c_Item { u16 a, b; Unk_0205242c_Item() { a = 0; b = 0; } };
struct Unk_0205242c_Ent { Unk_0205242c_Item *rows[4]; u8 count; };
struct Unk_0205242c_Self { s32 a; s32 b; };
struct Unk_02051f68_V { s32 x, y, z; };
struct Unk_02052580_Rec { u8 pad[0x48]; };

extern u8 data_020e416c;
extern void *data_020cbb18;
extern u8 data_021c4ee4[];
extern s32 data_021c4e38;
extern u8 data_021e58a8[];
extern Unk_0205242c_Ent *data_020dbcd8[];
extern Unk_02052580_Rec data_021c50e4[];
extern Unk_02052580_Rec data_021c4f34[];
extern Unk_02052580_Rec data_021c4e9c;

inline BOOL IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
inline BOOL Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" {
BOOL func_ov004_0220711c(s32 a, s32 *x, s32 *y, s32 z, s32 w);
s32 func_ov004_02208750(s32 a);
s32 func_02051c10(s32 x, s32 y, s32 ov, s32 b, u32 c, u32 d, u32 e);
void *func_ov004_02235718();
Unk_02051d24_Obj *func_ov004_022355d8(void *self, s32 a, s32 b, s32 c);
s32 func_02051e00(u32 a, u32 b, u32 c, u32 d, u8 e, u8 f, s32 g);
s32 func_02051d24(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g);
s32 func_02051da4(s32 a, s32 b, u8 c, u8 d);
void func_02051ff8(u8 a, s32 b, s32 c, u8 d, u8 e);
s32 func_02072e44(void *p);
s32 func_ov004_02206f8c(void *p);
s32 func_ov004_02206f7c(void *p);
u32 func_020b50e8();
void func_020728d4(void *p);
void func_020728a4(void *p, void *d, s32 n);
void func_02072824(void *p, s32 a, s32 b);
s32 func_02052a70(void *p, s32 a);
s32 func_020529e4(void *p, s32 a, s32 b, void *v);
s32 func_ov004_02205c7c(void *p);
s32 func_ov004_02234c2c(void (*f)());
void func_ov004_02209c44();
void *func_ov004_02234bb4(void (*f)(), s32 a);
s32 func_02051784(s32 a, s32 b, s32 c, u16 *p, s32 d);
s32 func_02051a50(s32 a, s32 b, s32 c, u8 d, s32 e, s32 f, u8 g, u16 *p, s32 h);
s32 func_02051844(s32 a, s32 b, s32 c, u8 d, s32 e, u16 *p, s32 f, s32 g);
void func_02060244(void *p, s32 a, s32 b);
s32 func_02052318(u8 a, s32 b, s32 c, s32 d, u8 e, bool f, bool g, bool h, u8 i);
s32 func_0204cbc0(s32 a);
u16 *func_0204ebd8(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_02052504(s32 a, s32 b, s32 c, u32 d);
s32 func_020524dc(s32 a, s32 b, u32 c);
void func_02060174(s32 a);
void func_020601a4(s32 a, u16 *p);
s32 func_0205248c(Unk_0205242c_Self *p);
s32 func_0204b25c(s32 a);
s32 func_0204b274(s32 a);
s32 func_02053248(s32 a);
Unk_02052580_Rec *func_020525a8(u32 id);
s32 func_02052620(Unk_02052580_Rec *r, s32 a, s32 b);
s32 func_0205262c(Unk_02052580_Rec *r, s32 a, s32 b, s32 c);
s32 func_0205263c(Unk_02052580_Rec *r, s32 a, s32 b);
s32 func_020526c4(Unk_02052580_Rec *r, s32 a, s32 b, s32 c, s32 d);
s32 func_020526e0(Unk_02052580_Rec *r, s32 a, s32 b, s32 c);
s32 func_020b530c(u32 id);
s32 func_020b533c(u32 id);
s32 func_020b51b8(u32 id);
s32 func_020b51e8(u32 id);
s32 func_020b5268(u32 id);
s32 func_020b5298(u32 id);
s32 func_0206052c(void *p, s32 a);
Unk_02052580_Rec *func_0206086c();
}

extern "C" {

s32 func_0205218c(Unk_0205218c_B *p) {
    u32 a = p->a;
    BOOL b = p->b ? 1 : 0;
    if (p->c == 1) {
        func_02060244(data_021e58a8, a, b);
        Unk_0205218c_B t;
        t = *p;
        t.c = 0;
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, &t, 1);
        func_02072824(g, 0x19, 4);
    } else {
        func_02060244(data_021e58a8, a, b);
    }
}

s32 func_02052134(s32 a, Unk_02052134_W *w) {
    u16 t = w->f;
    BOOL e = w->e ? 1 : 0;
    BOOL d = w->d ? 1 : 0;
    func_02051844(a, w->b, w->c, (u8)w->a, e, &t, d, 0);
}

s32 func_020520d0(s32 a, Unk_020520d0_W *w) {
    u16 t = w->c;
    BOOL j = w->j ? 1 : 0;
    BOOL k = w->k ? 1 : 0;
    func_02051a50(a, w->a, w->b, (u8)w->i, j, k, (u8)w->h, &t, 0);
}

s32 func_020520a8(s32 a, Unk_020520a8_W *w) {
    u16 t = w->c;
    func_02051784(a, w->a, w->b, &t, 0);
}

void func_02051fcc(Unk_02051fcc_W *p) {
    func_02051ff8(p->a, p->c, p->d, p->b, 1);
}

void func_02051ff8(u8 a, s32 b, s32 c, u8 d, u8 e) {
    if (a == func_020b50e8() && IsOne(data_020e416c)) {
        {
            Unk_02051d24_Obj *o = func_ov004_022355d8(func_ov004_02235718(), b, c, d);
            if (o) {
                if (func_ov004_02205c7c((u8 *)o + 0x73c) == 0) {
                    if ((u32)func_ov004_02234c2c(func_ov004_02209c44) >= 4) {
                        void *r = func_ov004_02234bb4(func_ov004_02209c44, 0);
                        if (r) {
                            func_02051da4((s32)r, 0, 0xff, e);
                        }
                    }
                    func_02051d24(b, c, d, 1, 0xff, e, 1);
                } else {
                    func_02051d24(b, c, d, 0, 0xff, e, 1);
                }
            }
        }
    }
}

s32 func_02051f68(u8 *p, s32 q) {
    Unk_02051f68_V v;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    v.x = p[0] << 9;
    v.z = p[1] << 9;
    if (func_020529e4(data_021c4ee4, q, p[2], &v)) {
        void *g = data_020cbb18;
        func_020728d4(g);
        func_02072824(g, 0x1f, q);
    } else {
        void *g = data_020cbb18;
        func_020728d4(g);
        func_02072824(g, 0x20, q);
    }
}

void func_02051f50(s32 x) {
    if (x) data_021c4e38 = 1;
    else data_021c4e38 = 2;
}

s32 func_02051f40(s32 x) {
    return func_02052a70(data_021c4ee4, x);
}

s32 func_02051e00(u32 a, u32 b, u32 c, u32 d, u8 e, u8 f, s32 g) {
    u32 w;
    u32 r5 = (g != 4) ? 1 : 0;
    Unk_02051d24_Obj *o = func_ov004_022355d8(func_ov004_02235718(), a, b, c);
    if (!o) return 0;
    if (func_02072e44(data_020cbb18) && o && !func_ov004_02206f8c(o)) {
        u32 t = o->vfunc_74(d);
        w = (w & ~0x3f) | (func_020b50e8() & 0x3f);
        c = c & 1;
        w = (w & ~0x40) | (c << 6);
        t = t & 1;
        w = (w & ~0x80) | (t << 7);
        a = a & 0xf;
        w = (w & 0xfffff0ff) | (a << 8);
        b = b & 0xf;
        w = (w & 0xffff0fff) | (b << 12);
        d = d & 0x1f;
        w = (w & 0xffe0ffff) | (d << 16);
        w = (w & 0xe01fffff) | ((e & 0xff) << 21);
        w = (w & 0x7fffffff) | ((f & 1) << 31);
        r5 = r5 & 1;
        w = (w & 0xdfffffff) | (r5 << 29);
        w = (w & 0xbfffffff) | ((func_ov004_02206f7c(o) & 1) << 30);
        void *g2 = data_020cbb18;
        func_020728d4(g2);
        func_020728a4(g2, &w, 4);
        func_02072824(g2, 0x18, g);
    }
    return 1;
}

s32 func_02051d24(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g) {
    if (!IsOne(data_020e416c)) return 0;
    Unk_02051d24_Obj *o = func_ov004_022355d8(func_ov004_02235718(), a, b, c);
    if (!o) return 0;
    o->vfunc_70(d, e);
    if (g) {
        return func_02051e00(a, b, c, d, o->vfunc_78(), f, 4);
    }
    return 1;
}

s32 func_02051da4(s32 a, s32 b, u8 c, u8 d) {
    s32 x, y;
    if (IsOne(data_020e416c)) {
        if (func_ov004_0220711c(a, &x, &y, 0, 0)) {
            return func_02051d24(x, y, func_ov004_02208750(a), b, c, d, 1);
        }
    }
    return 0;
}

s32 func_02051cc8(s32 a, s32 b, u8 c, u8 d) {
    s32 x, y;
    if (IsOne(data_020e416c)) {
        if (func_ov004_0220711c(a, &x, &y, 0, 0)) {
            return func_02051c10(x, y, func_ov004_02208750(a), b, c, d, 1);
        }
    }
    return 0;
}

Unk_02052580_Rec *func_020525a8(u32 id) {
    if (func_020b530c(id)) {
        if (func_0206052c(data_021e58a8, func_020b533c(id))) {
            return func_0206086c();
        }
    } else if (func_020b51b8(id)) {
        return &data_021c50e4[func_020b51e8(id)];
    } else if (func_020b5268(id)) {
        return &data_021c4f34[func_020b5298(id)];
    } else if (id == 10) {
        return &data_021c4e9c;
    }
    return 0;
}

s32 func_02052580(s32 a, s32 b, s32 c, u32 d) {
    Unk_02052580_Rec *r = func_020525a8(d);
    if (r) return func_020526e0(r, a, b, c);
    return 0;
}

s32 func_02052554(s32 a, s32 b, s32 c, s32 d, u8 e) {
    Unk_02052580_Rec *r = func_020525a8(e);
    if (r) {
        func_020526c4(r, a, b, c, d);
    }
}

s32 func_0205252c(s32 a, s32 b, u32 c) {
    Unk_02052580_Rec *r = func_020525a8(c);
    if (r) return func_0205263c(r, a, b);
    return -1;
}

s32 func_02052504(s32 a, s32 b, s32 c, u32 d) {
    Unk_02052580_Rec *r = func_020525a8(d);
    if (r) return func_0205262c(r, a, b, c);
    return 0;
}

s32 func_020524dc(s32 a, s32 b, u32 c) {
    Unk_02052580_Rec *r = func_020525a8(c);
    if (r) return func_02052620(r, a, b);
    return 0;
}

Unk_0205242c_Self *func_020524a8(Unk_0205242c_Self *p, s32 q) {
    p->a = -1;
    s32 r = func_0204b25c(q);
    s32 m = -1;
    if (r != m) {
        p->a = func_02053248(r);
        p->b = func_0204b274(q);
    }
    return p;
}

void func_020524a4() {}

s32 func_0205248c(Unk_0205242c_Self *p) {
    if (p->a < 3) {
        return data_020dbcd8[p->a]->count;
    }
    return 0;
}

Unk_0205242c_Item *func_0205242c(Unk_0205242c_Self *p, u32 idx) {
    if (p->a < 3 && idx < func_0205248c(p)) {
        return &data_020dbcd8[p->a]->rows[p->b][idx & 3];
    }
    static Unk_0205242c_Item dflt;
    return &dflt;
}

s32 func_02052318(u8 a, s32 b, s32 c, s32 d, u8 e, bool f, bool g, bool h, volatile u8 i) {
    if (IsOne(data_020e416c) && a == func_020b50e8()) {
        Unk_02051d24_Obj *o = func_ov004_022355d8(func_ov004_02235718(), b, c, d);
        if (o) {
            return o->vfunc_70(e, i);
        }
    }
    s32 t = func_0204cbc0(a);
    if (t) {
        s32 hb = b >> 4;
        s32 hc = c >> 4;
        u16 *p = func_0204ebd8(t, hb, hc, b - (hb << 4), c - (hc << 4), 0);
        if (p && Range(p, 0x45dc, 0x47d7)) {
            if (f) {
                func_02052504(b, c, (u8)(i & 0xf), a);
            } else {
                func_020524dc(b, c, a);
            }
        }
    }
    func_02052554(b, c, d, f, a);
    if (g) {
        if (f) {
            u32 t = i;
            u16 v = t < 0x46 ? (u16)(t + 0x1323) : 0x1323;
            func_020601a4(a, &v);
        } else if (!h) {
            func_02060174(a);
        }
    }
    return 1;
}

s32 func_020521fc(u32 *pp) {
    Unk_020521fc_W *p = (Unk_020521fc_W *)pp;
    if (p->n == 1) {
        func_02052318(p->a, p->d, p->e, (u8)p->b, p->f, p->c, p->o, p->p, p->g);
        u32 w = *pp;
        w &= 0xdfffffff;
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, &w, 4);
        func_02072824(g, 0x18, 4);
    } else {
        func_02052318(p->a, p->d, p->e, (u8)p->b, p->f, p->c, p->o, p->p, p->g);
    }
}

}
