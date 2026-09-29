#include "types.h"

struct Unk_02083c28_Vec { s32 x, y, z; };

struct Unk_02083c28;
struct Unk_02083c28_G;
typedef void (Unk_02083c28::*Unk_02083c28_Fn)(Unk_02083c28_Vec *, u16 *, Unk_02083c28_G *);
typedef u16 *(Unk_02083c28::*Unk_02083d14_Fn)();

struct Unk_02083c28_G {
    Unk_02083c28_Vec pos;
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
};

struct Unk_02083c28_Ent {
    u16 id;
    u16 id2;
    u32 ovl;
    Unk_02083c28_Fn fn;
    u8 flag : 1;
};

struct Unk_02083d14_Ent {
    Unk_02083d14_Fn fn;
    u8 lvl;
};

struct Unk_02083c28_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 pad[0x1b];
};

struct Unk_020cbb18 { u8 pad_00[0x64]; s32 unk_64; };

struct Unk_02083f44_Obj {
    u8 pad[0x40];
    Unk_02083f44_Obj(Unk_02083c28_Vec *v, s32 a, s32 b);
    ~Unk_02083f44_Obj();
    BOOL func_02033914(s32 a);
};

struct Unk_02083c28 {
    u8 pad[0x70];
    u8 unk_70;
    u8 pad2[3];
    u32 unk_74;

    u16 *func_02083c28(Unk_02083c28_Ent *tbl, s32 n);
    BOOL func_02083d14();
    void func_02083e38();
    void func_02083e40(u32 *p);
};

extern "C" {
extern Unk_02083c28_G data_020e0994;
extern u16 data_020e09a0;
extern u16 data_020e0878;
extern Unk_02083d14_Ent data_020e09f4[11];
extern u8 data_020e416c;
extern Unk_020cbb18 *data_020cbb18;
extern Unk_02083c28_Vec data_021f4880;
extern Unk_02083c28_Rec data_021cd844[0x26];
extern Unk_02083c28_Rec data_021cd654[8];
extern u8 data_021cd640;
extern u8 data_021dfd8c[];
extern u16 *data_021c47c4;

s32 func_020b50e8();
s32 func_020b5184();
s32 func_02072e88(Unk_020cbb18 *g, s32 i);
void func_0204ef2c(u32 ovl);
s32 func_02002cf8(u32 a, u32 b, void *c, void *d, void *e);
s32 func_0204263c(Unk_02083c28_Vec *v);
s32 func_02083ba4(u16 *p);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
void func_0204ed8c(Unk_02083c28_Vec *out, s32 x, s32 y);
void func_02115fb4(void *dst, u32 v, u32 n);
void func_02116048(const void *src, void *dst, u32 n);
s32 func_02076ae8(u8 *p, u8 *dst, s32 z);
s32 func_02076280(u32 a, u8 *p, s32 b, s32 c);
s32 func_020766e0(u32 id);
void func_02076b08(u8 *p, u32 a, s32 b);
void func_02076a6c(u8 *p, s32 a, s32 b);
u8 *func_02072970(Unk_020cbb18 *g, s32 i);
void *func_0207aa78(s32 i);
s32 func_02078568(void *p, s32 v);
s32 func_0207854c(void *p, s32 v);
s32 func_0207869c();
s32 func_0207b74c(void *p);
void *func_0207bf60(void *p, s32 i);
s32 func_020805c4();
s32 func_020030b4();
void *func_0207e310(void *p);
s32 func_0208168c(u16 *p);
s32 func_0207856c(void *p);
s32 func_0207853c(void *p);
s32 func_02078548(void *p);
void *func_020784f4(void *p);
s32 func_020784b8(void *p, s32 v);

u16 *func_02083de8(u16 *key, Unk_02083c28_Ent *tbl, s32 n);
BOOL func_02083e50(void *p, Unk_02083c28_G *g);
void func_02083e60(Unk_02083c28_G *g);
void func_02083e7c(Unk_02083c28_G *out, u16 *idp, u32 b, u32 c, Unk_02083c28_Vec *pos);
BOOL func_02083dbc(u16 *p, u32 lvl, u32 b, Unk_02083c28_Vec *pos);
BOOL func_02083ed4(u16 *arr, s32 x, s32 y);
BOOL func_02083ef4(u16 *arr, s32 x, s32 y);
BOOL func_02083f1c(u16 *arr, s32 x, s32 y);
u8 *func_020841fc(u16 *p);
BOOL func_0208416c(s32 *a, s32 *b, u16 *p);
void func_0208419c(u32 a, u32 b, u32 c, u16 *p);
u8 *func_02084398(u16 *p);
u8 *func_02084294(u16 *p);
BOOL func_02084430(u16 *p, u32 b, u32 c);
BOOL func_020842f8(u16 *p, u32 b, u32 c);
BOOL func_02084464(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e);
BOOL func_0208432c(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e);
void func_020843c4(void *src, s32 id);

BOOL func_02084228(u16 *p, u32 b, u32 c);
}

static inline BOOL Unk_02083c28_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

u16 *Unk_02083c28::func_02083c28(Unk_02083c28_Ent *tbl, s32 n) {
    u16 *result = 0;
    if (func_02083e50(this, &data_020e0994)) {
        Unk_02083c28_Ent *e = (Unk_02083c28_Ent *)func_02083de8(&data_020e09a0, tbl, n);
        if (e) {
            if (data_020e0994.unk_0e == func_020b50e8()) {
                Unk_02083c28_Vec v;
                u16 t[3];
                t[0] = 0;
                t[1] = 0;
                t[2] = 0;
                if (e->fn) {
                    (this->*(e->fn))(&v, t, &data_020e0994);
                }
                if (e->flag) {
                    func_0204ef2c(e->ovl);
                    func_02083e40(&e->ovl);
                } else {
                    func_02083e38();
                }
                if (func_02002cf8(e->id, e->id2, &v, t, this)) {
                    if (Unk_02083c28_IsZero(data_020e416c)) {
                        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
                            Unk_02083c28_Vec w;
                            w.x = v.x;
                            w.y = v.y;
                            w.z = v.z;
                            func_0204263c(&w);
                        }
                    }
                    result = (u16 *)e;
                }
            }
        }
        func_02083e60(&data_020e0994);
    }
    return result;
}

BOOL Unk_02083c28::func_02083d14() {
    Unk_02083d14_Ent *e = data_020e09f4;
    s32 ovl = func_020b50e8();
    s32 i = 0;
    Unk_02083c28_Vec *z = 0;
    for (; i < 11; e++, i++) {
        if (e->lvl <= data_020e0994.unk_0f) break;
        if (e->fn) {
            u16 *r = (this->*(e->fn))();
            if (r) {
                if (func_02083dbc(r, e->lvl, ovl, z)) return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_02083c28::func_02083e38() { unk_70 = 0; }
void Unk_02083c28::func_02083e40(u32 *p) {
    unk_70 = 1;
    unk_74 = *p;
}

extern "C" {

BOOL func_02083d84(u16 *p, u8 b, Unk_02083c28_Vec *pos) {
    if (func_02083ba4(p) == 0 && func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        return func_02083dbc(p, 1, b, pos);
    }
    return 0;
}

BOOL func_02083dbc(u16 *p, u32 lvl, u32 b, Unk_02083c28_Vec *pos) {
    if (data_020e0994.unk_0f < lvl) {
        func_02083e7c(&data_020e0994, p, b, lvl, pos);
        return TRUE;
    }
    return FALSE;
}

u16 *func_02083de8(u16 *key, Unk_02083c28_Ent *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; tbl++, i++) {
        if (*key == tbl->id) return (u16 *)tbl;
    }
    return 0;
}

u16 *func_02083e10(u16 *key, Unk_02083c28_Ent *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; tbl++, i++) {
        if (tbl->id2 == *key) return (u16 *)tbl;
    }
    return 0;
}

BOOL func_02083e50(void *p, Unk_02083c28_G *g) {
    BOOL r = FALSE;
    u32 v = g->unk_0f;
    if (v != 0 && v < 5) r = TRUE;
    return r;
}

void func_02083e60(Unk_02083c28_G *g) {
    func_02083e7c(g, &data_020e0878, 0x33, 0, 0);
}

void func_02083e7c(Unk_02083c28_G *out, u16 *idp, u32 b, u32 c, Unk_02083c28_Vec *pos) {
    out->unk_0c = *idp;
    out->unk_0e = b;
    out->unk_0f = c;
    if (pos) {
        out->pos = *pos;
    } else {
        out->pos = data_021f4880;
    }
}

BOOL func_02083eb4(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 14) {
        if ((arr[y] >> x) & 1) return TRUE;
        return FALSE;
    }
    return FALSE;
}

BOOL func_02083ed4(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        if ((arr[y] >> x) & 1) return TRUE;
        return FALSE;
    }
    return FALSE;
}

BOOL func_02083ef4(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        arr[y] &= ~(1 << x);
        return TRUE;
    }
    return FALSE;
}

BOOL func_02083f1c(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        arr[y] |= (1 << x);
        return TRUE;
    }
    return FALSE;
}

BOOL func_02083f44(u16 *out) {
    s32 y, x;
    u16 *grid = data_021c47c4;
    func_02115fb4(out, 0, 0x20);
    if (grid) {
        u16 *p = func_0204ebd8(grid, 0, 0, 0, 0, 0);
        if (p) {
            for (y = 0; y < 16; y++) {
                for (x = 0; x < 16; x++) {
                    Unk_02083c28_Vec v;
                    func_0204ed8c(&v, x, y);
                    Unk_02083f44_Obj o(&v, 0, 0);
                    if (*p == 0xfff1 && !o.func_02033914(1)) {
                        func_02083f1c(out, x, y);
                    }
                    p++;
                }
            }
            for (y = 0; y < 14; y++) {
                for (x = 0; x < 16; x++) {
                    if (func_02083ed4(out, x, y) && !func_02083ed4(out, x + 1, y) && !func_02083ed4(out, x - 1, y)
                        && !func_02083ed4(out, x, y + 1) && !func_02083ed4(out, x, y - 1)) {
                        func_02083ef4(out, x, y);
                    }
                }
            }
            return TRUE;
        }
    }
    return FALSE;
}

void func_02084038() {}
void func_0208403c() {}

void func_02084040() {
    struct {
        u8 b[2];
        u16 id;
    } l;
    s32 s4, s8;
    s32 i;
    s32 ovl = func_020b50e8();
    Unk_020cbb18 *d;
    s4 = 4;
    s8 = 4;
    l.id = 0xfff1;
    i = 0;
    d = data_020cbb18;
    for (; i < 8; i++) {
        u8 *rec;
        l.id = (i & 0xfff) | 0xe000;
        rec = func_020841fc(&l.id);
        if (rec) {
            func_02076ae8(rec + 3, l.b, 0);
            if (l.b[0] == ovl) {
                s4 = 4;
                s8 = 4;
                if (func_0208416c(&s4, &s8, &l.id)) {
                    if (s8 >= 4) {
                        func_0208419c(1, 4, 4, &l.id);
                    } else if (s8 == d->unk_64 && s8 != s4) {
                        func_0208419c(1, d->unk_64, 4, &l.id);
                    }
                }
            }
        }
    }
    for (i = 0; i < 0x26; i++) {
        u8 *rec;
        l.id = (i & 0xfff) | 0xd000;
        rec = func_020841fc(&l.id);
        if (rec) {
            func_02076ae8(rec + 3, l.b, 0);
            if (l.b[0] == ovl) {
                s4 = 4;
                s8 = 4;
                if (func_0208416c(&s4, &s8, &l.id)) {
                    if (s8 >= 4) {
                        func_0208419c(1, 4, 4, &l.id);
                    } else if (s8 == d->unk_64 && s8 != s4) {
                        func_0208419c(1, d->unk_64, 4, &l.id);
                    }
                }
            }
        }
    }
}

BOOL func_0208416c(s32 *a, s32 *b, u16 *p) {
    u8 *rec = func_020841fc(p);
    if (rec && rec[0] != 0) {
        *a = rec[1];
        *b = rec[2];
        return TRUE;
    }
    return FALSE;
}

void func_0208419c(u32 a, u32 b, u32 c, u16 *p) {
    func_02084228(p, b, c);
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        u32 v = *p;
        s32 k = (s32)(v & 0xf000) >> 12;
        u32 idx = v & 0xfff;
        if (k == 0xe) {
            func_02076280(idx + 0xc, (u8 *)&a, 0, 0);
        } else if (k == 0xd) {
            func_02076280(idx + 0x20, (u8 *)&a, 0, 0);
        }
    }
}

u8 *func_020841fc(u16 *p) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return func_02084398(p);
    if (k == 0xd) return func_02084294(p);
    return 0;
}

BOOL func_02084228(u16 *p, u32 b, u32 c) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return func_02084430(p, b, c);
    if (k == 0xd) return func_020842f8(p, b, c);
    return 0;
}

BOOL func_02084254(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return func_02084464(p, b, v, c, d, e);
    if (k == 0xd) return func_0208432c(p, b, v, c, d, e);
    return 0;
}

u8 *func_02084294(u16 *p) {
    u32 i = *p & 0xfff;
    if (i < 0x26) return func_02072970(data_020cbb18, i + 0x20);
    return 0;
}

void func_020842c0(void *dst, s32 id) {
    u32 i = id - 0x20;
    if (i < 0x26) {
        Unk_02083c28_Rec *r = &data_021cd844[i];
        r->unk_00 = 1;
        func_02116048(r, dst, func_020766e0(id));
    }
}

BOOL func_020842f8(u16 *p, u32 b, u32 c) {
    u32 i = *p & 0xfff;
    if (i < 0x26) {
        Unk_02083c28_Rec *r = &data_021cd844[i];
        r->unk_00 = 1;
        r->unk_01 = b;
        r->unk_02 = c;
        return TRUE;
    }
    return FALSE;
}

BOOL func_0208432c(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e) {
    u32 i = *p & 0xfff;
    if (i < 0x26) {
        Unk_02083c28_Rec *r = &data_021cd844[i];
        r->unk_00 = 1;
        func_02076b08((u8 *)r + 3, b, 0);
        func_02076a6c((u8 *)r + 4, v->x, v->z);
        func_02116048(&c, (u8 *)r + 9, 2);
        func_02116048(d, (u8 *)r + 0xf, 0xf);
        func_02116048(e, (u8 *)r + 0xb, 4);
        return TRUE;
    }
    return FALSE;
}

u8 *func_02084398(u16 *p) {
    u32 i = *p & 0xfff;
    if (i < 8) return func_02072970(data_020cbb18, i + 0xc);
    return 0;
}

void func_020843c4(void *dst, s32 id) {
    u32 i = id - 0xc;
    if (i < 8) {
        Unk_02083c28_Rec *r = &data_021cd654[i];
        r->unk_00 = 1;
        func_02116048(r, dst, func_020766e0(id));
        data_021cd640 = 1;
    }
}

void func_02084404(void *dst, s32 id) {
    void *o;
    func_020843c4(dst, id);
    o = func_0207aa78(id - 0xc);
    if (o) {
        func_02078568(o, 0);
        func_0207854c(o, 0);
    }
}

BOOL func_02084430(u16 *p, u32 b, u32 c) {
    u32 i = *p & 0xfff;
    if (i < 8) {
        Unk_02083c28_Rec *r = &data_021cd654[i];
        r->unk_00 = 1;
        r->unk_01 = b;
        r->unk_02 = c;
        return TRUE;
    }
    return FALSE;
}

BOOL func_02084464(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e) {
    u32 i = *p & 0xfff;
    if (i < 8) {
        Unk_02083c28_Rec *r = &data_021cd654[i];
        r->unk_00 = 1;
        func_02076b08((u8 *)r + 3, b, 0);
        func_02076a6c((u8 *)r + 4, v->x, v->z);
        func_02116048(&c, (u8 *)r + 9, 2);
        func_02116048(d, (u8 *)r + 0xf, 0xf);
        func_02116048(e, (u8 *)r + 0xb, 4);
        return TRUE;
    }
    return FALSE;
}

BOOL func_020844d0() {
    u8 *g = data_021dfd8c;
    void *a, *b;
    s32 i;
    u16 id;
    if (func_020b5184()) {
        func_0207869c();
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
            if (g) func_0207b74c(g);
        }
    }
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        if (g) {
            id = 0xfff1;
            for (i = 0; i < 8; i++) {
                a = func_0207bf60(g, i);
                if (a) {
                    func_020805c4();
                    if (func_020030b4()) {
                        b = func_0207e310(a);
                        if (b) {
                            id = (i & 0xfff) | 0xe000;
                            if (func_0208168c(&id) == 0) {
                                if (func_0207856c(b)) {
                                    func_0207853c(b);
                                    if (func_02078548(b) == 0) func_02078568(b, 0);
                                    func_020784b8(func_020784f4(b), 0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return TRUE;
}

}
