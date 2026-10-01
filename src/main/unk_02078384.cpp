#include "types.h"

struct Unk_020784f4 {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_02078614 {
    u8 unk_00;
    u8 unk_01;
    u32 unk_04[3];
    u32 unk_10[2];
    u8 unk_18;
    u8 unk_19;
    u16 unk_1a;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u32 unk_20;
    u16 unk_24;
    u16 unk_26;
    Unk_020784f4 unk_28;
};

struct Unk_02078400 {
    Unk_02078614 unk_00[8];
    s8 unk_160;
    s8 unk_161;
    s8 unk_162;
    s8 unk_163;
    s8 unk_164;
    u32 unk_168;
    s8 unk_16c;
};

struct Unk_02078738_Pos {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_02078738_Cell {
    u8 pad_00[0x28];
};

struct Unk_02078738_Grid {
    Unk_02078738_Cell *unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_02078948_Obj {
    Unk_02078948_Obj() {}
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
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual BOOL vfunc_a8();
    u8 pad_04[0x5c - 4];
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
};

struct Unk_02078864_T {
    s32 v[2];
};

extern "C" {
extern u8 data_021dfd8c[];
extern void *data_020cbb18;
extern Unk_02078400 data_021cc9e8;
extern Unk_02078738_Grid *data_021c47c4;
extern u8 data_020e416c;
extern u8 data_020cbfe8[][2];
extern u8 data_020cbfb8[][2];
extern u8 data_020cc008[][4];
extern u8 data_020cc084[][6];

BOOL func_02072e88(void *o, u32 v);
BOOL func_02072e44(void *o);
BOOL func_020b51a4();
BOOL func_020b5184();
void func_0209ad80(void *p);
void func_0209ada0(void *p);
void func_0209ada4(void *p);
void func_0209b550(void *p);
void func_0209b55c(void *p);
void func_0209b560(void *p);
s32 func_02115fb4(void *d, s32 v, s32 n);
void *func_0207bf60(void *t, s32 i);
void *func_020805c4(void *p);
BOOL func_020030b4(void *p);
u32 func_02003098(void *p);
void *func_0207e268(void *p);
void *func_0209a610(void *p);
BOOL func_0209b1e4(void *a, void *b);
void func_0209d498(void *p);
void func_0207cb68(void *o, u32 kind, s32 v);
Unk_02078948_Obj *func_0208168c();
BOOL func_020374cc(void *cell, s32 v);
void func_020807c8(void *p);
void func_02080860(void *p);
u8 *func_0207f948(void *p);
u32 func_0207f9a4(void *p);
u32 func_0207f9c4(void *p);
BOOL func_0207c014(void *p);
s32 func_02078d1c(void *a, void *p, void *q);
BOOL func_02078d4c(void *a, s32 k);
s32 func_02078ca8(void *a, s32 k, s32 r);
}


extern "C" {
void func_02078384(Unk_02078614 *e);
void func_020783d4();
Unk_02078614 *func_020783d8(Unk_02078400 *m, s32 i);
Unk_02078400 *func_020783f8();
void func_02078400(Unk_02078400 *m);
BOOL func_0207845c(s32 i);
s32 func_0207846c(Unk_020784f4 *t);
void func_02078498(Unk_020784f4 *t);
void func_020784a8(Unk_020784f4 *t);
void func_020784b8(Unk_020784f4 *t, s32 v);
void func_020784e0(Unk_020784f4 *t);
void func_020784ec(Unk_020784f4 *t);
void func_020784f0(Unk_020784f4 *t);
Unk_020784f4 *func_020784f4(Unk_02078614 *e);
void func_020784f8(Unk_02078614 *e);
void func_02078504(Unk_02078614 *e, u16 *p);
u16 *func_0207850c(Unk_02078614 *e);
void func_02078510(Unk_02078614 *e);
void func_02078520(Unk_02078614 *e);
void func_0207853c(Unk_02078614 *e);
u32 func_02078548(Unk_02078614 *e);
void func_0207854c(Unk_02078614 *e, u16 v);
void func_02078550(Unk_02078614 *e, s32 v);
void func_02078568(Unk_02078614 *e, u32 v);
u32 func_0207856c(Unk_02078614 *e);
void func_02078570(Unk_02078614 *e, u32 v);
u32 func_02078574(Unk_02078614 *e);
void *func_02078578(Unk_02078614 *e);
void func_0207857c(Unk_02078614 *e, u32 v);
u32 func_02078580(Unk_02078614 *e);
void func_020785a8(Unk_02078614 *e);
void func_020785e8(Unk_02078614 *e, u32 v);
u32 func_020785ec(Unk_02078614 *e);
void func_02078614(Unk_02078614 *e);
Unk_02078614 *func_02078650(Unk_02078614 *e);
Unk_02078614 *func_02078670(Unk_02078614 *e);
void func_0207869c();
void func_020786e8();
void func_0207870c(Unk_02078738_Pos *p);
BOOL func_02078738(Unk_02078738_Pos *p);
void func_0207878c(Unk_02078738_Pos *p);
void func_020787b0();
void func_020787d4();
void func_020787f8(Unk_02078738_Pos *p);
void func_0207881c(Unk_02078738_Pos *p);
void func_02078840(Unk_02078738_Pos *p);
void func_02078864(u32 kind, Unk_02078738_Pos *p);
BOOL func_02078948(u16 *h, s32 x0, s32 x1, s32 z0, s32 z1);
void func_020789a8();
void *func_020789ac(void *p);
void *func_020789bc(void *p);
s32 func_020789cc(void *a, s32 b, s32 c);
s32 func_02078a3c(void *a, void *p, void *q);
u32 func_02078acc(void *a, void *p, void *q);
u32 func_02078b04(void *a, void *p, void *q);
u32 func_02078b30(void *a, void *p, void *q);
u32 func_02078bb0(void *a, void *p, void *q);
s32 func_02078be4(void *a, void *p, void *q);
s32 func_02078c24(void *a, void *p, void *q);
void func_02078c6c(void *a, void *p, void *q, s32 r);
}

static inline BOOL Unk_02078384_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

void func_02078384(Unk_02078614 *e) {
    s32 i = 0;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 z3 = 0;
    for (; i < 8; e++, i++) {
        func_020785e8(e, z1);
        e->unk_1d &= ~1;
        func_02078568(e, z2);
        func_0207854c(e, z3);
        e->unk_1d &= ~4;
        func_020784e0(func_020784f4(e));
    }
}

void func_020783d4() {}

Unk_02078614 *func_020783d8(Unk_02078400 *m, s32 i) {
    Unk_02078614 *r = NULL;
    if (func_0207845c(i)) {
        r = &m->unk_00[i];
    }
    return r;
}

void func_02078400(Unk_02078400 *m) {
    s32 i;
    for (i = 0; i < 8; i++) {
        func_02078614(&m->unk_00[i]);
    }
    m->unk_160 = -1;
    m->unk_161 = 0;
    m->unk_162 = -1;
    m->unk_163 = -1;
    m->unk_164 = -1;
    m->unk_168 = 0;
    m->unk_16c = -1;
}

BOOL func_0207845c(s32 i) {
    if (i >= 0 && i < 8) {
        return TRUE;
    }
    return FALSE;
}

s32 func_0207846c(Unk_020784f4 *t) {
    if (Unk_02078384_IsZero(data_020e416c)) {
        u32 v = t->unk_03;
        if (v >= 10) {
            return 2;
        }
        if (v >= 7) {
            return 1;
        }
    }
    return 0;
}

void func_02078498(Unk_020784f4 *t) {
    t->unk_02 = 40;
    t->unk_00 = 0x4b0;
}

void func_020784a8(Unk_020784f4 *t) {
    if (t->unk_02 != 0) {
        t->unk_03 = t->unk_03 + 1;
    }
}

void func_020784b8(Unk_020784f4 *t, s32 v) {
    if (v == 0) {
        if (t->unk_02 != 0) {
            t->unk_02 = t->unk_02 - 1;
        } else if (t->unk_00 != 0) {
            t->unk_00 = t->unk_00 - 1;
        }
        if (t->unk_00 == 0) {
            t->unk_03 = 0;
        }
    }
}

void func_020784e0(Unk_020784f4 *t) {
    t->unk_02 = 0;
    t->unk_00 = 0;
    t->unk_03 = 0;
}

void func_020784ec(Unk_020784f4 *t) {}
void func_020784f0(Unk_020784f4 *t) {}

Unk_020784f4 *func_020784f4(Unk_02078614 *e) { return &e->unk_28; }

void func_020784f8(Unk_02078614 *e) { e->unk_26 = 0xfff1; }

void func_02078504(Unk_02078614 *e, u16 *p) { e->unk_26 = *p; }

u16 *func_0207850c(Unk_02078614 *e) { return &e->unk_26; }

void func_02078510(Unk_02078614 *e) {
    s32 v = e->unk_1e << 1;
    if (v > 32) {
        v = 32;
    }
    e->unk_1e = v;
}

void func_02078520(Unk_02078614 *e) {
    if (!func_020b51a4()) {
        e->unk_1d |= 2;
    }
}

void func_0207853c(Unk_02078614 *e) {
    if (e->unk_1a != 0) {
        e->unk_1a = e->unk_1a - 1;
    }
}

u32 func_02078548(Unk_02078614 *e) { return e->unk_1a; }
void func_0207854c(Unk_02078614 *e, u16 v) { e->unk_1a = v; }

void func_02078550(Unk_02078614 *e, s32 v) {
    s32 s = e->unk_1a + v;
    if (s >= 0xffff) {
        e->unk_1a = 0xffff;
        return;
    }
    e->unk_1a = s;
}

void func_02078568(Unk_02078614 *e, u32 v) { e->unk_18 = v; }
u32 func_0207856c(Unk_02078614 *e) { return e->unk_18; }
void func_02078570(Unk_02078614 *e, u32 v) { e->unk_1c = v; }
u32 func_02078574(Unk_02078614 *e) { return e->unk_1c; }
void *func_02078578(Unk_02078614 *e) { return e->unk_04; }
void func_0207857c(Unk_02078614 *e, u32 v) { e->unk_01 = v; }

u32 func_02078580(Unk_02078614 *e) {
    Unk_02078948_Obj *o = (Unk_02078948_Obj *)data_020cbb18;
    if (func_02072e88(o, o->unk_64) && e->unk_01 == 0) {
        return 1;
    }
    return e->unk_01;
}

void func_020785a8(Unk_02078614 *e) {
    switch (e->unk_00) {
    case 0:
    case 1:
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        if (func_02078580(e) == 0) {
            e->unk_00 = 1;
        } else {
            e->unk_00 = 0;
        }
        break;
    }
}

void func_020785e8(Unk_02078614 *e, u32 v) { e->unk_00 = v; }

u32 func_020785ec(Unk_02078614 *e) {
    Unk_02078948_Obj *o = (Unk_02078948_Obj *)data_020cbb18;
    if (func_02072e88(o, o->unk_64) && e->unk_00 != 7) {
        return 0;
    }
    return e->unk_00;
}

void func_02078614(Unk_02078614 *e) {
    func_02115fb4(e, 0, 0x2c);
    e->unk_00 = 0;
    e->unk_01 = 3;
    func_0209ad80(e->unk_04);
    func_0209b550(e->unk_10);
    e->unk_18 = 5;
    e->unk_1c = 0xc;
    e->unk_20 = 0;
    e->unk_24 = 0;
    func_020784f8(e);
}

Unk_02078614 *func_02078650(Unk_02078614 *e) {
    func_020784ec(&e->unk_28);
    func_0209b55c(e->unk_10);
    func_0209ada0(e->unk_04);
    return e;
}

Unk_02078614 *func_02078670(Unk_02078614 *e) {
    func_0209ada4(e->unk_04);
    func_0209b560(e->unk_10);
    e->unk_26 = 0xfff1;
    func_020784f0(&e->unk_28);
    return e;
}

void func_0207869c() {
    if (func_020b5184()) {
        if (!func_02072e44(data_020cbb18)) {
            if (func_020783f8()->unk_168 > 0x4b0) {
                func_020786e8();
            }
            func_020783f8()->unk_168++;
        }
    }
}

void func_020786e8() {
    if (!func_02072e44(data_020cbb18)) {
        func_02078864(7, NULL);
    }
}

void func_0207870c(Unk_02078738_Pos *p) {
    if (!func_02072e44(data_020cbb18)) {
        if (func_02078738(p)) {
            func_02078864(6, p);
        }
    }
}

static inline Unk_02078738_Cell *Unk_02078738_GetCell(Unk_02078738_Grid *g, u32 x, u32 y) {
    if (x < g->unk_04 && y < g->unk_08 && g->unk_00 != NULL) {
        return &g->unk_00[y * g->unk_04 + x];
    }
    return NULL;
}

BOOL func_02078738(Unk_02078738_Pos *p) {
    Unk_02078738_Grid *g = data_021c47c4;
    if (g != NULL) {
        Unk_02078738_Cell *c = Unk_02078738_GetCell(g, p->x >> 17, p->z >> 17);
        if (c != NULL) {
            if (func_020374cc(c, 8)) {
                return TRUE;
            }
        }
        return FALSE;
    }
    return FALSE;
}

void func_0207878c(Unk_02078738_Pos *p) {
    if (!func_02072e44(data_020cbb18)) {
        func_02078864(5, p);
    }
}

void func_020787b0() {
    if (!func_02072e44(data_020cbb18)) {
        func_02078864(4, NULL);
    }
}

void func_020787d4() {
    if (!func_02072e44(data_020cbb18)) {
        func_02078864(3, NULL);
    }
}

void func_020787f8(Unk_02078738_Pos *p) {
    if (!func_02072e44(data_020cbb18)) {
        func_02078864(2, p);
    }
}

void func_0207881c(Unk_02078738_Pos *p) {
    if (!func_02072e44(data_020cbb18)) {
        func_02078864(0, p);
    }
}

void func_02078840(Unk_02078738_Pos *p) {
    if (!func_02072e44(data_020cbb18)) {
        func_02078864(1, p);
    }
}

void func_02078864(u32 kind, Unk_02078738_Pos *p) {
    if ((u32)data_021dfd8c != 0) {
        s32 b[4];
        Unk_02078864_T t;
        s32 z1;
        u16 h;
        s32 i;
        b[0] = 0;
        t.v[0] = 0;
        t.v[1] = 0;
        b[1] = 0;
        b[2] = 0;
        z1 = 0;
        h = 0xfff1;
        if (p != NULL) {
            b[0] = p->x - 0x10000;
            b[1] = p->x + 0x10000;
            b[2] = p->z - 0x1a000;
            z1 = p->z + 0xa000;
        }
        func_0209d498(&t);
        for (i = 0; i < 8; i++) {
            void *o;
            b[3] = 1;
            o = func_0207bf60(data_021dfd8c, i);
            if (o != NULL) {
                if (func_020030b4(func_020805c4(o))) {
                    if (func_0209b1e4(func_0209a610(func_0207e268(o)), &t)) {
                        if (p != NULL) {
                            h = (i & 0xfff) | 0xe000;
                            if (func_02078948(&h, b[0], b[1], b[2], z1)) {
                                b[3] = 2;
                            }
                        }
                        func_0207cb68(o, kind, b[3]);
                    }
                }
            }
        }
        func_020783f8()->unk_168 = 0;
    }
}

void func_020789a8() {}

void *func_020789ac(void *p) {
    func_020807c8(p);
    return p;
}

void *func_020789bc(void *p) {
    func_02080860(p);
    return p;
}

s32 func_020789cc(void *a, s32 b, s32 c) {
    void *d = data_021dfd8c;
    void *r5 = func_0207bf60(d, b);
    void *r4 = func_0207bf60(d, c);
    s32 r = 0;
    if (r5 != NULL && func_020030b4(func_020805c4(r5)) && r4 != NULL && func_020030b4(func_020805c4(r4))) {
        r = func_02078c24(a, (void *)b, (void *)c);
        s32 t = func_02078a3c(a, r5, r4);
        r = r * 5;
        r = t + (r >> 1);
    }
    return r;
}

s32 func_02078a3c(void *a, void *p, void *q) {
    s32 r = 0;
    if (p != NULL && func_020030b4(func_020805c4(p)) && q != NULL && func_020030b4(func_020805c4(q))) {
        void *x = func_020805c4(p);
        void *y = func_020805c4(q);
        r = func_02078be4(a, x, y);
        r += func_02078bb0(a, p, q);
        r += func_02078b30(a, p, q);
        r += func_02078b04(a, p, q);
        if (r < 200) {
            r -= func_02078acc(a, p, q);
            if (r < 0) {
                r = -r;
            }
        }
    }
    return r;
}

u32 func_02078acc(void *a, void *p, void *q) {
    u8 *x = func_0207f948(p);
    u8 *y = func_0207f948(q);
    u32 r = 0;
    if (x != NULL && y != NULL) {
        u32 yb = y[4];
        u32 xb = x[4];
        if (xb > yb) {
            r = xb - yb;
        } else {
            r = yb - xb;
        }
    }
    return r;
}

u32 func_02078b04(void *a, void *p, void *q) {
    u8 *x = func_0207f948(p);
    u8 *y = func_0207f948(q);
    u32 r = 0;
    if (x != NULL && y != NULL) {
        r = 0x3f;
    }
    return r;
}

u32 func_02078b30(void *a, void *p, void *q) {
    u32 x = func_0207f9a4(p);
    u32 y = func_0207f9a4(q);
    u8 (*t)[2];
    s32 i;
    if (x == y) {
        return 0x40;
    }
    t = data_020cbfe8;
    for (i = 0; i < 7; t++, i++) {
        u32 a0 = (*t)[0];
        if ((a0 == x && (*t)[1] == y) || ((*t)[1] == x && a0 == y)) {
            return 0x80;
        }
    }
    t = data_020cbfb8;
    for (i = 0; i < 4; t++, i++) {
        u32 a0 = (*t)[0];
        if ((a0 == x && (*t)[1] == y) || ((*t)[1] == x && a0 == y)) {
            return 0;
        }
    }
    return 0x20;
}

u32 func_02078bb0(void *a, void *p, void *q) {
    u8 x = func_0207f9c4(p) & 3;
    u8 y = func_0207f9c4(q) & 3;
    return data_020cc008[x][y];
}

s32 func_02078be4(void *a, void *p, void *q) {
    s32 r = 0;
    if (func_020030b4(p) && func_020030b4(q)) {
        u32 x = func_02003098(p);
        u32 y = func_02003098(q);
        r = data_020cc084[x][y];
    }
    return r;
}

s32 func_02078c24(void *a, void *p, void *q) {
    s32 r = 0x80000000;
    if (func_0207c014(p) && func_0207c014(q)) {
        s32 k = func_02078d1c(a, p, q);
        if (func_02078d4c(a, k)) {
            r = ((s8 *)a)[k];
        }
    }
    return r;
}

void func_02078c6c(void *a, void *p, void *q, s32 r) {
    if (func_0207c014(p) && func_0207c014(q)) {
        func_02078ca8(a, func_02078d1c(a, p, q), r);
    }
}

Unk_02078400 *func_020783f8() { return &data_021cc9e8; }

BOOL func_02078948(u16 *h, s32 x0, s32 x1, s32 z0, s32 z1) {
    Unk_02078948_Obj *o = func_0208168c();
    if (o != NULL && o->vfunc_a8()) {
        s32 *pos = &o->unk_5c;
        BOOL result = FALSE;
        BOOL b = FALSE;
        BOOL a = FALSE;
        if (o->unk_5c > x0 && o->unk_5c < x1) {
            a = TRUE;
        }
        if (a) {
            if (pos[2] > z0) {
                b = TRUE;
            }
        }
        if (b) {
            if (pos[2] < z1) {
                result = TRUE;
            }
        }
        return result;
    }
    return FALSE;
}
