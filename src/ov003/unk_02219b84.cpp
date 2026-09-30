#include "types.h"

struct Unk_ov003_022359a4_P2 {
    s32 x, y;
    Unk_ov003_022359a4_P2() {}
    Unk_ov003_022359a4_P2(s32 a, s32 b) {
        x = a;
        y = b;
    }
    Unk_ov003_022359a4_P2(const Unk_ov003_022359a4_P2 &o) {
        x = o.x;
        y = o.y;
    }
};

struct Unk_ov003_022359a4_V3 {
    s32 x, y, z;
    Unk_ov003_022359a4_V3() {}
    Unk_ov003_022359a4_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_ov003_022359a4_V3(const Unk_ov003_022359a4_V3 &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

struct Unk_ov003_022359a4_Blk {
    s64 v[6];
};

typedef Unk_ov003_022359a4_P2 P2;
typedef Unk_ov003_022359a4_V3 V3;
typedef Unk_ov003_022359a4_Blk Blk;

struct Unk_ov003_022359a4_Ent {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ P2 unk_10;
    /* 0x18 */ V3 unk_18;
    /* 0x24 */ V3 unk_24;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ V3 unk_3c;
    /* 0x48 */ u8 pad_48[6];
    /* 0x4e */ u16 unk_4e;
    /* 0x50 */ u8 pad_50[2];
    /* 0x52 */ s16 unk_52;
    /* 0x54 */ u8 pad_54[0xc];
    /* 0x60 */ u8 unk_60[0x40];
    /* 0xa0 */ u8 unk_a0;
};

typedef Unk_ov003_022359a4_Ent Ent;

struct Unk_ov003_022359a4 {
    Ent e[20];
};

typedef Unk_ov003_022359a4 Tbl;

extern "C" {
extern Tbl data_ov003_022359a4;
extern void *data_020cbb18;
extern void *data_ov003_02235930;
extern Blk data_021f47e0;

void *func_0204da0c();
void func_0204ee10(s32 *x, s32 *y, s32 v);
s32 func_0204e3a0(void *m, s32 x, s32 y);
s32 func_02072e44(void *g);
void func_0204ed8c(void *out, s32 x, s32 y);
void func_02003e50(void *);
void func_02003e80(void *, void *);
void func_02003ecc(void *);
void func_01ffd070(V3 *, void *, void *);
s32 func_0203ef38(V3 *, V3 *);
void func_020e8388(Blk *m, s32 x, s32 y, s32 z);
void func_020e8434(Blk *m, s32 a);
void func_020e84f8(Blk *m, s32 x, s32 y, s32 z);
s32 func_02045354(P2 p, s32 z);
u8 *func_02045214(s32 i);

s32 func_ov003_0221b228(Ent *e);
s32 func_ov003_0221b248(Ent *e, s32 g, P2 p, V3 v, s32 a, u32 b, void *map, s32 c, s32 d);
s32 func_ov003_0221caf0(s32 x, s32 y, s32 t, s32 z);
s32 func_ov003_0221e750(void *o, u32 t, V3 *a, s32 b, V3 *c, s32 d, s32 e, s32 f);
s32 func_ov003_0221ddb4(void *o, volatile u16 *t, Blk m);
s32 func_ov003_0221df48(void *o, volatile u16 *t, Blk m);
s32 func_ov003_0221dee8(void *o, volatile u16 *t, Blk m);
s32 func_ov003_0221de24(void *o, volatile u16 *t, Blk m);
s32 func_ov003_0221dcac(void *o, volatile u16 *t, Blk m);
s32 func_ov003_0221dfb8(void *o, volatile u16 *t, Blk m);
s32 func_ov003_0221e118(void *o, volatile u16 *t, s32 a, s32 b, V3 *c, Blk m);
s32 func_ov003_0221e044(void *o, volatile u16 *t, s32 a, s32 b, Blk m);
s32 func_ov003_0221dd58(void *o, volatile u16 *t, Blk m);
s32 func_ov003_0221dbf0(void *o, volatile u16 *t, Blk m);
s32 func_ov003_0221db98(void *o, volatile u16 *t, Blk m);

void func_ov003_0221b090(Ent *e);
void func_ov003_0221af60(Ent *e);
void func_ov003_0221ad84(Ent *e);
void func_ov003_0221ace0(Ent *e);
void func_ov003_0221ab94(Ent *e);
void func_ov003_0221aabc(Ent *e);
void func_ov003_0221a978(Ent *e);
void func_ov003_0221a8dc(Ent *e);
void func_ov003_0221a798(Ent *e);
void func_ov003_0221a72c(Ent *e);
void func_ov003_0221a67c(Ent *e);
void func_ov003_0221a4a0(Ent *e);

s32 func_ov003_02219d64(Tbl *t, s32 a, P2 p, V3 v, s32 f, u32 g, s32 h, s32 i);
s32 func_ov003_02219dc0(Tbl *t, s32 a, P2 p, V3 v, s32 f, u32 g, s32 h, s32 i);
Ent *func_ov003_02219e2c(Tbl *t, s32 g);

s32 func_ov003_02219b84(s32 type, s32 v) {
    void *map = func_0204da0c();
    if (map == 0) {
        return 0;
    }
    s32 ox = 0;
    s32 oy = 0;
    func_0204ee10(&ox, &oy, v);
    u32 k;
    if (func_0204e3a0(map, ox, oy) == 0) {
        k = 0xfc;
    } else {
        k = 0xfd;
    }
    return func_ov003_02219d64(&data_ov003_022359a4, type, P2(ox, oy), V3(0, 0, 0), 3, k, 0, 0);
}

s32 func_ov003_02219bf0(s32 type, s32 v) {
    void *map = func_0204da0c();
    if (map == 0) {
        return 0;
    }
    s32 ox = 0;
    s32 oy = 0;
    func_0204ee10(&ox, &oy, v);
    u32 k;
    if (func_0204e3a0(map, ox, oy) == 0) {
        k = 0xfc;
    } else {
        k = 0xfd;
    }
    return func_ov003_02219d64(&data_ov003_022359a4, type, P2(ox, oy), V3(0, 0, 0), 2, k, 0, 0);
}

s32 func_ov003_02219c5c(s32 type, s32 v, s32 w) {
    void *map = func_0204da0c();
    if (map == 0) {
        return 0;
    }
    s32 ox = 0;
    s32 oy = 0;
    func_0204ee10(&ox, &oy, v);
    u32 k;
    if (func_0204e3a0(map, ox, oy) == 0) {
        k = 0xfc;
    } else {
        k = 0xfd;
    }
    return func_ov003_02219d64(&data_ov003_022359a4, type, P2(ox, oy), V3(0, 0, 0), 1, k, 0, w);
}

s32 func_ov003_02219ccc(s32 a, u32 b, P2 p, V3 v) {
    return func_ov003_02219dc0(&data_ov003_022359a4, a, p, v, 0, b, 0, 0);
}

struct Unk_ov003_02219d08_Loc {
    s32 x;
    volatile s32 y;
};

s32 func_ov003_02219d08(s32 idx, P2 *q) {
    s32 r = 0;
    s32 i;
    Unk_ov003_02219d08_Loc l;
    Unk_ov003_02219d08_Loc *lp;
    Ent *e = &data_ov003_022359a4.e[idx * 4];
    for (i = 0, lp = &l; i < 4; e++, i++) {
        if (e->unk_04 != 0) {
            l.x = e->unk_10.x;
            l.y = e->unk_10.y;
            if (l.x == q->x && lp->y == q->y) {
                if (e->unk_a0 != 0) {
                    r = 1;
                }
                func_ov003_0221b228(e);
                break;
            }
        }
    }
    return r;
}

s32 func_ov003_02219d64(Tbl *t, s32 a, P2 p, V3 v, s32 f, u32 g, s32 h, s32 i) {
    if (func_02072e44(data_020cbb18) == 0) {
        a = 0;
    }
    return func_ov003_02219dc0(t, a, p, v, f, *(u16 *)&g, *(s16 *)&h, i);
}

s32 func_ov003_02219dc0(Tbl *t, s32 a, P2 p, V3 v, s32 f, u32 g, s32 h, s32 i) {
    void *map = func_0204da0c();
    if (map == 0) {
        return 0;
    }
    s32 r = 0;
    Ent *e = func_ov003_02219e2c(t, a);
    if (e != 0) {
        func_ov003_0221b248(e, a, p, v, f, *(u16 *)&g, map, *(s16 *)&h, i);
        r = 1;
    }
    return r;
}

Ent *func_ov003_02219e2c(Tbl *t, s32 g) {
    s32 i;
    Ent *r = 0;
    Ent *e = &t->e[g * 4];
    for (i = 0; i < 4; e++, i++) {
        if (e->unk_04 == 0) {
            r = e;
            break;
        }
    }
    return r;
}

void func_ov003_02219e50(Tbl *t) {
    Ent *e = t->e;
    s32 i;
    for (i = 0; i < 20; e++, i++) {
        if (e->unk_04 != 0) {
            func_ov003_0221b228(e);
        }
        func_02003e50(e->unk_60);
    }
}

void func_ov003_0221a400(Tbl *t) {
    Ent *e = t->e;
    s32 i;
    for (i = 0; i < 20; e++, i++) {
        e->unk_04 = 0;
        e->unk_08 = 0xfff1;
        func_02003ecc(e->unk_60);
    }
}

void func_ov003_0221a42c(Ent *e, P2 *p, void *m) {
    func_0204ed8c(&e->unk_18, p->x, p->y);
    if (func_0204e3a0(m, p->x, p->y) == 0) {
        e->unk_08 = 0xfc;
    } else {
        e->unk_08 = 0xfd;
    }
    e->unk_3c.x = 0x1000;
    e->unk_3c.y = 0x1000;
    e->unk_3c.z = 0x1000;
    s32 z = 0;
    e->unk_30 = z;
    e->unk_34 = z;
    e->unk_38 = z;
    func_ov003_0221caf0(p->x, p->y, 0xfff1, z);
    s32 i = func_02045354(P2(e->unk_10), 0);
    if (i >= 0) {
        *(u16 *)(func_02045214(i) + 0xa) = 0xfff1;
    }
}

void func_ov003_0221a310(Tbl *t) {
    volatile u16 v = 0xfff1;
    Ent *e = t->e;
    V3 tmp;
    s32 i;
    func_02072e44(data_020cbb18);
    for (i = 0; i < 20; e++, i++) {
        if (e->unk_04 != 0) {
            e->unk_4e++;
            v = e->unk_08;
            switch (e->unk_0c) {
            case 0:
            case 13:
                func_ov003_0221b090(e);
                break;
            case 1:
            case 2:
                func_ov003_0221af60(e);
                break;
            case 3:
            case 14:
                func_ov003_0221ad84(e);
                break;
            case 4:
                func_ov003_0221ace0(e);
                break;
            case 5:
                func_ov003_0221ab94(e);
                break;
            case 6:
                func_ov003_0221aabc(e);
                break;
            case 7:
                func_ov003_0221a978(e);
                break;
            case 8:
                func_ov003_0221a8dc(e);
                break;
            case 9:
                func_ov003_0221a798(e);
                break;
            case 10:
                func_ov003_0221a72c(e);
                break;
            case 11:
                func_ov003_0221a67c(e);
                break;
            case 12:
                func_ov003_0221a4a0(e);
                break;
            }
            tmp.x = e->unk_18.x;
            tmp.y = e->unk_18.y;
            tmp.z = e->unk_18.z;
            func_02003e80(e->unk_60, &tmp);
        }
    }
}

static inline BOOL Unk_ov003_02219e7c_Chk2(u32 v) {
    BOOL f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    if (v <= 5) {
        f1 = TRUE;
    }
    if (!f1) {
        if (v < 6 || v > 0xb) {
            f2 = FALSE;
        }
    }
    if (!f2) {
        if (v < 0xc || v > 0x11) {
            f3 = FALSE;
        }
    }
    if (!f3) {
        if ((v < 0x12 || v > 0x19) && v != 0x1c) {
            f4 = FALSE;
        }
    }
    return f4;
}

static inline BOOL Unk_ov003_02219e7c_Chk1(volatile u16 *q, volatile u16 *p, u16 &a) {
    BOOL f = FALSE;
    a = *q;
    u32 v = *p;
    if (v >= 0x21 && a <= 0x24) {
        f = TRUE;
    }
    return f;
}

static inline BOOL Unk_ov003_02219e7c_Chk4(u32 a) {
    BOOL f = FALSE;
    u32 d = (u16)(a + 0xffe6);
    if (d <= 4) {
        if ((1 << d) & 0x1b) {
            f = TRUE;
        }
    }
    return f;
}

void func_ov003_02219e7c(Ent *e) {
    BOOL k4, k3, k2, f1;
    volatile u16 type = 0xfff1;
    s32 i = 0;
    s32 y4;
    s32 y8;
    s32 ang;
    volatile u16 *tp = &type;
    s32 z0c = 0;
    struct {
        V3 v50, v5c, v68, v74, v80, v8c, v98;
    } l;
    for (;;) {
        if (e->unk_04 != 0 && e->unk_08 != 0xfff1) {
            func_01ffd070(&l.v74, &e->unk_18, &e->unk_24);
            l.v5c.x = l.v74.x;
            l.v5c.y = l.v74.y;
            l.v5c.z = l.v74.z;
            type = e->unk_08;
            s32 k = (type & 0xf000) >> 12;
            switch (k) {
            case 1:
            case 3:
            case 4: {
                l.v80.x = l.v5c.x;
                l.v80.y = l.v5c.y;
                l.v80.z = l.v5c.z;
                l.v8c.x = 0x1000;
                l.v8c.y = 0x1000;
                l.v8c.z = 0x1000;
                func_ov003_0221e750(data_ov003_02235930, e->unk_08, &l.v80, e->unk_52, &l.v8c, z0c, z0c, z0c);
                break;
            }
            default: {
                V3 *pv = &e->unk_3c;
                l.v68.x = pv->x;
                l.v68.y = pv->y;
                l.v68.z = pv->z;
                ang = func_0203ef38(&l.v50, &l.v5c);
                func_020e8388(&data_021f47e0, l.v50.x, l.v50.y, l.v50.z);
                func_020e8434(&data_021f47e0, ang);
                func_020e84f8(&data_021f47e0, l.v68.x, l.v68.y, l.v68.z);
                u16 a;
                if (Unk_ov003_02219e7c_Chk1(&type, tp, a) || (a >= 0x1f && a <= 0x20)) {
                    func_ov003_0221ddb4(data_ov003_02235930, &type, data_021f47e0);
                } else {
                k4 = TRUE, k3 = TRUE, k2 = TRUE, f1 = FALSE;
                if (a <= 5) {
                    f1 = TRUE;
                }
                if (!f1) {
                    if (a < 6 || a > 0xb) {
                        k2 = FALSE;
                    }
                }
                if (!k2) {
                    if (a < 0xc || a > 0x11) {
                        k3 = FALSE;
                    }
                }
                if (!k3) {
                    if ((a < 0x12 || a > 0x19) && a != 0x1c) {
                        k4 = FALSE;
                    }
                }
                if (k4 || (a >= 0x8a && a <= 0x8f) || (a >= 0x90 && a <= 0x95) ||
                           (a >= 0x96 && a <= 0x9b) || (a >= 0x9c && a <= 0xa3) || a == 0xa5) {
                    func_ov003_0221df48(data_ov003_02235930, &type, data_021f47e0);
                } else if ((a >= 0x6e && a <= 0x73) || (a >= 0x74 && a <= 0x79) || (a >= 0x7a && a <= 0x7f) ||
                           (a >= 0x80 && a <= 0x87)) {
                    func_ov003_0221dee8(data_ov003_02235930, &type, data_021f47e0);
                } else if (Unk_ov003_02219e7c_Chk4(a) || !(a != 0x88 && a != 0x89)) {
                    func_ov003_0221de24(data_ov003_02235930, &type, data_021f47e0);
                } else if (a >= 0xfc && a <= 0xfd) {
                    func_ov003_0221dcac(data_ov003_02235930, &type, data_021f47e0);
                } else if ((a >= 0x2b && a <= 0x2e) || (a >= 0xff && a <= 0x102) || (a >= 0x62 && a <= 0x65) ||
                           (a >= 0xd0 && a <= 0xd3)) {
                    func_ov003_0221dfb8(data_ov003_02235930, &type, data_021f47e0);
                } else if ((a >= 0x26 && a <= 0x2a) || (a >= 0x5d && a <= 0x61) || (a >= 0x2f && a <= 0x56) ||
                           (a >= 0x57 && a <= 0x5b) || (a >= 0x66 && a <= 0x68) || a == 0x69 ||
                           (a >= 0x6a && a <= 0x6c) || a == 0x6d || (a >= 0xc8 && a <= 0xcf)) {
                    l.v98.x = l.v5c.x;
                    l.v98.y = l.v5c.y;
                    l.v98.z = l.v5c.z;
                    s32 px = *(volatile s32 *)&e->unk_10.x;
                    y4 = *(volatile s32 *)&e->unk_10.y;
                    func_ov003_0221e118(data_ov003_02235930, &type, px, y4, &l.v98, data_021f47e0);
                } else if (a == 0x25 || a == 0x5c || a == 0xc7) {
                    s32 px = *(volatile s32 *)&e->unk_10.x;
                    y8 = *(volatile s32 *)&e->unk_10.y;
                    func_ov003_0221e044(data_ov003_02235930, &type, px, y8, data_021f47e0);
                } else if ((a >= 0xe3 && a <= 0xe7) || (a >= 0xe8 && a <= 0xfb)) {
                    func_ov003_0221dd58(data_ov003_02235930, &type, data_021f47e0);
                } else if ((a >= 0xd4 && a <= 0xda) || (a >= 0xdb && a <= 0xe1)) {
                    func_ov003_0221dbf0(data_ov003_02235930, &type, data_021f47e0);
                } else if (a >= 0xa7 && a <= 0xc6) {
                    func_ov003_0221db98(data_ov003_02235930, &type, data_021f47e0);
                }
                }
            }
            }
        }
        e++;
        i++;
        if (i >= 20) {
            break;
        }
    }
}
}
