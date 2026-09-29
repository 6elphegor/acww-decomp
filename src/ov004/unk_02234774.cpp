#include "types.h"

struct Unk_ov004_02234774_Vec {
    s32 x, y, z;
};

struct Unk_ov004_02205c44 {
    void func_ov004_02205c44(u32 v, s32 flag);
    u8 func_ov004_02205c7c();
    u8 unk_00;
    u8 unk_01;
};

struct Unk_ov004_0224882c {
    /* 0x000 */ u8 pad_000[0x60];
    /* 0x060 */ s32 unk_60;
    /* 0x064 */ u8 pad_064[0x73c - 0x64];
    /* 0x73c */ Unk_ov004_02205c44 unk_73c;
    /* 0x73e */ u8 pad_73e[0x770 - 0x73e];
    /* 0x770 */ u32 unk_770;
    /* 0x774 */ s32 unk_774;
    /* 0x778 */ u8 pad_778[4];
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ u8 pad_780[8];
    /* 0x788 */ u8 unk_788;
    /* 0x789 */ u8 pad_789[3];
    /* 0x78c */ s32 unk_78c;
    /* 0x790 */ u8 pad_790[0x7b4 - 0x790];
    /* 0x7b4 */ Unk_ov004_02234774_Vec unk_7b4;
};

class Unk_0213bac4 {
public:
    void func_020037b0();
    void func_020037c0(s32 a);
    void func_020037d0(s32 a, void *b);
};

struct Unk_ov004_02234774_Self {
    /* 0x000 */ u8 pad_000[0x2a8];
    /* 0x2a8 */ u8 unk_2a8;
    /* 0x2a9 */ u8 unk_2a9;
    /* 0x2aa */ u8 pad_2aa[2];
    /* 0x2ac */ s32 unk_2ac;
};

struct Unk_ov004_02234e80_Static {
    s32 unk_00, unk_04, unk_08;
    Unk_ov004_02234e80_Static(s32 v) {
        unk_00 = v;
        unk_04 = 0;
        unk_08 = 0;
    }
    ~Unk_ov004_02234e80_Static();
};

struct Unk_ov004_02234a48_Grid {
    void *cells;
    u32 w, h;
};

class Unk_0203389c {
public:
    u8 pad_00[0x40];
    s32 func_02033914(s32 a);
};

class Unk_0203398c : public Unk_0203389c {
public:
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(Unk_ov004_02234774_Vec *v, s32 a, s32 b);
    ~Unk_0203398c();
};

extern "C" {
extern u8 data_ov004_02251f78;
extern Unk_ov004_02234774_Vec data_021f4880;
extern s32 data_ov004_02251f98;
extern u16 data_ov004_02251f7c;
extern u32 data_ov004_02251f80;
extern u16 data_ov004_0224091c[];
extern Unk_ov004_02234a48_Grid *data_021c47c4;
extern s16 data_02135f44[];

void *func_ov004_0223584c();
Unk_ov004_0224882c *func_ov004_02235720(void *, s32);
void *func_ov004_02235718();
Unk_ov004_0224882c *func_ov004_022355b0(void *, void *, s32);
Unk_ov004_0224882c *func_ov004_022355d8(void *, s32, s32, s32);
BOOL func_ov004_0223576c(void *);
Unk_0213bac4 *func_ov004_02233c94();
s32 func_ov004_02233c54();
s32 func_ov004_02233cb4();
s32 func_ov004_02233c74();
s32 func_ov004_02233c20();
BOOL func_ov004_02209c88(Unk_ov004_0224882c *);
BOOL func_ov004_02209bb4(Unk_ov004_0224882c *);
BOOL func_ov004_02209c10(Unk_ov004_0224882c *);
BOOL func_ov004_02209c44(Unk_ov004_0224882c *);
void func_ov004_0220e738(Unk_ov004_0224882c *);
void func_ov004_0220f2a8(Unk_ov004_0224882c *);
void func_ov004_0220f29c(Unk_ov004_0224882c *);
BOOL func_ov004_02206f7c(Unk_ov004_0224882c *);
s32 func_ov004_02209d4c(Unk_ov004_0224882c *);
s32 func_ov004_02209d40(Unk_ov004_0224882c *);
Unk_ov004_0224882c *func_ov004_02209d58(s32, s32, s32, s32, u8, s32);
BOOL func_ov004_02210dd8(Unk_ov004_0224882c *, Unk_ov004_02234774_Vec *, s32, Unk_ov004_02234774_Vec *);
BOOL func_ov004_022087e8(Unk_ov004_02234774_Vec *, s32, s32, s32, s32);
u32 func_ov004_02234af8();
s32 func_ov004_02234f6c(Unk_ov004_02234774_Vec *);
s32 func_ov004_02234f80(s32, s32);
s32 func_ov004_02234df8(Unk_ov004_02234774_Vec *, s16, s32);
s32 func_ov004_02234f30(Unk_ov004_02234774_Vec *, s32, Unk_ov004_02234774_Vec *);
s32 func_ov004_02235028(Unk_ov004_0224882c *);
s32 func_ov004_02234c2c(BOOL (*f)(Unk_ov004_0224882c *));
Unk_ov004_0224882c *func_ov004_02234bb4(BOOL (*f)(Unk_ov004_0224882c *), s32 a);
s32 func_ov004_02234ff4(s32 x, s32 y, s32 a, s32 b, u8 c, s32 d);

void *func_02095204(s32);
s32 func_01ffd028(void *, void *);
s32 func_01ffcb0c(s32, s32);
void *func_02037558(void *, u32, u32, u8);
s32 func_0204b2d4(void *);
s32 func_0204b25c(void *);
s32 func_0204b274(void *);
s32 func_020534a4(s32);
s32 func_020b50e8();
s32 func_020b5254();
s32 func_020b4904(s32);
s32 func_02063b8c(s32);
s32 func_02051da4(void *, s32, s32, s32);
s32 func_020515b8(s32, void *, s32);
s32 func_0202ffdc(void *);
s32 func_02002cf8(u32, void *, s32, s32, u32);

void func_ov004_02234774(Unk_ov004_02234774_Self *self) {
    if (data_ov004_02251f78 != 0) {
        BOOL r6 = TRUE;
        Unk_ov004_02234774_Vec v8;
        v8.x = data_021f4880.x;
        v8.y = data_021f4880.y;
        v8.z = data_021f4880.z;
        u8 *p = (u8 *)func_02095204(4);
        if (p != NULL) {
            Unk_ov004_02234774_Vec v14;
            Unk_ov004_02234774_Vec *pv = (Unk_ov004_02234774_Vec *)(p + 0x5c);
            v14.x = pv->x;
            v14.y = pv->y;
            v14.z = pv->z;
            u32 i = 0;
            s32 best = -1;
            s32 minv = data_ov004_02251f98;
            for (; i < func_ov004_02234af8(); i++) {
                Unk_ov004_0224882c *e = func_ov004_02235720(func_ov004_0223584c(), i);
                if (e != NULL && func_ov004_02209c88(e)) {
                    Unk_ov004_02234774_Vec v20;
                    Unk_ov004_02234774_Vec t = e->unk_7b4;
                    v20.x = t.x;
                    v20.y = t.y;
                    v20.z = t.z;
                    s32 d = func_01ffd028(&v20, &v14);
                    if (d < minv) {
                        best = i;
                        minv = d;
                    }
                }
            }
            if (best != -1) {
                Unk_ov004_0224882c *e = func_ov004_02235720(func_ov004_0223584c(), best);
                if (e != NULL) {
                    func_ov004_0220e738(e);
                    Unk_ov004_02234774_Vec t = e->unk_7b4;
                    v8.x = t.x;
                    v8.y = t.y;
                    v8.z = t.z;
                    r6 = FALSE;
                }
            }
        }
        Unk_0213bac4 *r4 = func_ov004_02233c94();
        if (r4 != NULL) {
            if (r6) {
                if (self->unk_2a9 == 0 || self->unk_2a8 == 0) {
                    r4->func_020037b0();
                    self->unk_2a8 = 1;
                }
                r4->func_020037d0(func_ov004_02233c54(), NULL);
            } else {
                if (self->unk_2a9 == 0 && self->unk_2a8 != 0 && self->unk_2ac == func_ov004_02233cb4()) {
                } else {
                    s32 r7 = func_ov004_02233c54() - 1;
                    if (r7 < 0) r7 = 0;
                    BOOL f;
                    if (func_ov004_02233c74() == 0 && r7 == 0 && func_ov004_02233c20() != 0) {
                        f = TRUE;
                    } else {
                        f = FALSE;
                    }
                    r4->func_020037c0(f);
                    self->unk_2a8 = 1;
                }
                r4->func_020037d0(func_ov004_02233c54(), &v8);
            }
        }
        self->unk_2a9 = r6;
        self->unk_2ac = func_ov004_02233cb4();
    }
}

void func_ov004_02234908() {
    u8 *p = (u8 *)func_02095204(4);
    if (p != NULL) {
        Unk_ov004_02234774_Vec v0;
        Unk_ov004_02234774_Vec *pv = (Unk_ov004_02234774_Vec *)(p + 0x5c);
        v0.x = pv->x;
        v0.y = pv->y;
        v0.z = pv->z;
        s32 best;
        u32 i = 0;
        best = -1;
        s32 minv = data_ov004_02251f98;
        for (; i < func_ov004_02234af8(); i++) {
            Unk_ov004_0224882c *e = func_ov004_02235720(func_ov004_0223584c(), i);
            if (e != NULL && func_ov004_02209bb4(e)) {
                Unk_ov004_02234774_Vec v0c;
                Unk_ov004_02234774_Vec t = e->unk_7b4;
                v0c.x = t.x;
                v0c.y = t.y;
                v0c.z = t.z;
                s32 d = func_01ffd028(&v0c, &v0);
                if (d < minv) {
                    best = i;
                    minv = d;
                }
            }
        }
        if (best != -1) {
            Unk_ov004_0224882c *e = func_ov004_02235720(func_ov004_0223584c(), best);
            if (e != NULL) {
                func_ov004_0220f2a8(e);
            }
        }
    }
}

void func_ov004_022349a8() {
    u8 *p = (u8 *)func_02095204(4);
    if (p != NULL) {
        Unk_ov004_02234774_Vec v0;
        Unk_ov004_02234774_Vec *pv = (Unk_ov004_02234774_Vec *)(p + 0x5c);
        v0.x = pv->x;
        v0.y = pv->y;
        v0.z = pv->z;
        s32 best;
        u32 i = 0;
        best = -1;
        s32 minv = data_ov004_02251f98;
        for (; i < func_ov004_02234af8(); i++) {
            Unk_ov004_0224882c *e = func_ov004_02235720(func_ov004_0223584c(), i);
            if (e != NULL && func_ov004_02209c10(e)) {
                Unk_ov004_02234774_Vec v0c;
                Unk_ov004_02234774_Vec t = e->unk_7b4;
                v0c.x = t.x;
                v0c.y = t.y;
                v0c.z = t.z;
                s32 d = func_01ffd028(&v0c, &v0);
                if (d < minv) {
                    best = i;
                    minv = d;
                }
            }
        }
        if (best != -1) {
            Unk_ov004_0224882c *e = func_ov004_02235720(func_ov004_0223584c(), best);
            if (e != NULL) {
                func_ov004_0220f29c(e);
            }
        }
    }
}

void func_ov004_02234a48() {
    Unk_ov004_02234a48_Grid *g = data_021c47c4;
    void *cells;
    if ((u8 *)g->w > (u8 *)0 && (u8 *)g->h > (u8 *)0 && g->cells != NULL) {
        cells = g->cells;
    } else {
        cells = NULL;
    }
    u32 layer;
    for (layer = 0; layer < 2; layer++) {
        s32 y;
        for (y = 0; y < 16; y++) {
            s32 x;
            for (x = 0; x < 16; x++) {
                void *c = func_02037558(cells, x, y, layer);
                if (c != NULL && func_0204b2d4(c)) {
                    s32 a = func_0204b25c(c);
                    func_ov004_02234ff4(x, y, a, func_0204b274(c), layer, 0);
                }
            }
        }
    }
}

void func_ov004_02234ad0() {
}

BOOL func_ov004_02234ad4() {
    s32 t = func_020b50e8();
    if (func_020b5254() != 0 || t == 10 || t == 15) {
        return TRUE;
    }
    return FALSE;
}

u32 func_ov004_02234af8() {
    return func_020b4904(func_020b50e8());
}

s32 func_ov004_02234b0c(u32 key) {
    u32 n = func_ov004_02234af8();
    void *mgr = func_ov004_0223584c();
    s32 cnt = 0;
    u32 i = 0;
    for (; i < n; i++) {
        Unk_ov004_0224882c *e = func_ov004_02235720(mgr, i);
        if (e != NULL && e->unk_774 != -1 && key == e->unk_770) {
            cnt++;
        }
    }
    if (cnt != 0) {
        s32 pick = func_02063b8c(cnt);
        cnt = 0;
        i = 0;
        for (; i < n; i++) {
            Unk_ov004_0224882c *e = func_ov004_02235720(mgr, i);
            if (e != NULL && e->unk_774 != -1 && key == e->unk_770) {
                if (cnt == pick) {
                    return e->unk_774;
                }
                cnt++;
            }
        }
    }
    return -1;
}

u16 func_ov004_02234ba8() {
    return data_ov004_02251f7c;
}

Unk_ov004_0224882c *func_ov004_02234bb4(BOOL (*f)(Unk_ov004_0224882c *), s32 a) {
    s32 n = func_ov004_02234c2c(f);
    if (n != 0) {
        s32 pick = func_02063b8c(n);
        s32 cnt = 0;
        u32 i = 0;
        for (; i < func_ov004_02234af8(); i++) {
            Unk_ov004_0224882c *e = func_ov004_02235720(func_ov004_0223584c(), i);
            if (e != NULL) {
                if (f == NULL || (f != NULL && f(e))) {
                    if (e->unk_73c.func_ov004_02205c7c()) {
                        if (cnt == pick) {
                            e->unk_73c.func_ov004_02205c44(0, a);
                            return e;
                        }
                        cnt++;
                    }
                }
            }
        }
    }
    return NULL;
}

s32 func_ov004_02234c2c(BOOL (*f)(Unk_ov004_0224882c *)) {
    s32 cnt = 0;
    u32 i = 0;
    for (; i < func_ov004_02234af8(); i++) {
        Unk_ov004_0224882c *e = func_ov004_02235720(func_ov004_0223584c(), i);
        if (e != NULL) {
            if (f == NULL || (f != NULL && f(e) && e->unk_73c.func_ov004_02205c7c())) {
                cnt++;
            }
        }
    }
    return cnt;
}

void func_ov004_02234c7c(u32 v, BOOL (*f)(Unk_ov004_0224882c *), s32 a) {
    u32 i = 0;
    for (; i < func_ov004_02234af8(); i++) {
        Unk_ov004_0224882c *e = func_ov004_02235720(func_ov004_0223584c(), i);
        if (e != NULL) {
            if (f == NULL || (f != NULL && f(e))) {
                if (v != e->unk_73c.func_ov004_02205c7c()) {
                    e->unk_73c.func_ov004_02205c44(v, a);
                }
            }
        }
    }
}

BOOL func_ov004_02234cd8() {
    s32 i = 0;
    s32 z = 0;
    for (; (u32)i < func_ov004_02234af8(); i++) {
        Unk_ov004_0224882c *e = func_ov004_02235720(func_ov004_0223584c(), i);
        if (e != NULL && func_ov004_02206f7c(e) && e->unk_73c.func_ov004_02205c7c()) {
            func_02051da4(e, z, 0xff, 1);
        }
    }
    return TRUE;
}

BOOL func_ov004_02234d2c(Unk_ov004_02234774_Vec *pos, s32 ang) {
    Unk_ov004_0224882c *m = func_ov004_022355b0(func_ov004_02235718(), pos, 0);
    if (m != NULL && m->unk_77c != 0x26) {
        return FALSE;
    }
    if (func_ov004_02234df8(pos, ang + 0xc000, 0x2000) == 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov004_02234d80(Unk_ov004_02234774_Vec *pos, s32 ang) {
    Unk_ov004_0224882c *m = func_ov004_022355b0(func_ov004_02235718(), pos, 0);
    if (m != NULL && m->unk_77c != 0x26) {
        return FALSE;
    }
    if (func_ov004_02234df8(pos, ang + 0x4000, 0x2000) == 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov004_02234dd4(Unk_ov004_02234774_Vec *pos, s32 ang) {
    if (func_ov004_02234df8(pos, ang, 0x2000) == 2) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov004_02234df8(Unk_ov004_02234774_Vec *p, s16 ang, s32 dist) {
    s32 y;
    s32 z;
    s32 idx = ((u16)ang >> 4) * 2;
    Unk_ov004_02234774_Vec v;
    z = p->z + func_01ffcb0c(dist, data_02135f44[idx + 1]);
    y = p->y;
    s32 x = p->x + func_01ffcb0c(dist, data_02135f44[idx]);
    v.x = x;
    v.y = y;
    v.z = z;
    if (func_ov004_02234f6c(&v)) {
        return 0;
    }
    if (func_ov004_022087e8(&v, 0x800, 0x2000, 0x800, 0) == 0) {
        return 1;
    }
    s32 t = func_0202ffdc(&v);
    s32 zz = 0;
    if (t == -1) goto two;
    return zz;
two:
    return 2;
}

s32 func_ov004_02234e80(Unk_ov004_02234774_Vec *pos, s32 ang) {
    static Unk_ov004_02234e80_Static dflt(-0x2000);
    return func_ov004_02234f30(pos, ang, (Unk_ov004_02234774_Vec *)&dflt);
}

s32 func_ov004_02234ed8(Unk_ov004_02234774_Vec *pos, s32 ang) {
    static Unk_ov004_02234e80_Static dflt(0x2000);
    return func_ov004_02234f30(pos, ang, (Unk_ov004_02234774_Vec *)&dflt);
}

static inline BOOL Unk_ov004_02234f30_Is37(Unk_ov004_0224882c *m) {
    if (*(u16 *)((u8 *)m + 0xc) == 0x37) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov004_02234f30(Unk_ov004_02234774_Vec *pos, s32 ang, Unk_ov004_02234774_Vec *out) {
    Unk_ov004_0224882c *m = func_ov004_022355b0(func_ov004_02235718(), pos, 0);
    if (m != NULL && Unk_ov004_02234f30_Is37(m)) {
        return func_ov004_02210dd8(m, pos, ang, out);
    }
    return 0;
}

s32 func_ov004_02234f6c(Unk_ov004_02234774_Vec *p) {
    return func_ov004_02234f80(p->x >> 13, p->z >> 13);
}

s32 func_ov004_02234f80(s32 x, s32 y) {
    Unk_ov004_0224882c *e = func_ov004_022355d8(func_ov004_02235718(), x, y, 0);
    if (e != NULL) {
        if (e->unk_788 == 1) {
            return e->unk_60;
        }
        return e->unk_78c + e->unk_60;
    }
    Unk_ov004_02234774_Vec v;
    Unk_0203398c g;
    v.x = (x << 13) + 0x1000;
    v.y = 0;
    v.z = (y << 13) + 0x1000;
    g.func_020339bc(&v, 0, 0);
    return g.func_02033914(0);
}

s32 func_ov004_02234ff4(s32 x, s32 y, s32 a, s32 b, u8 c, s32 d) {
    func_020534a4(a);
    return func_ov004_02235028(func_ov004_02209d58(x, y, a, b, c, d));
}

s32 func_ov004_02235028(Unk_ov004_0224882c *self) {
    if (func_ov004_0223576c(func_ov004_0223584c())) {
        s32 a = func_020534a4(func_ov004_02209d4c(self));
        s32 b = func_ov004_02209d40(self);
        u16 v;
        if (a >= 0 && a < 0x30) {
            v = data_ov004_0224091c[a];
        } else {
            v = data_ov004_0224091c[0];
        }
        if (a == 0x18 && b == 1) {
            if ((u32)func_ov004_02234c2c(func_ov004_02209c44) >= 4) {
                Unk_ov004_0224882c *e = func_ov004_02234bb4(func_ov004_02209c44, 0);
                if (e != NULL) {
                    e->unk_73c.func_ov004_02205c44(1, 0);
                    func_020515b8(func_020b50e8(), (u8 *)e + 0x5c, 0);
                }
            }
        }
        return func_02002cf8(v, self, 0, 0, data_ov004_02251f80);
    }
    return 0;
}
}
