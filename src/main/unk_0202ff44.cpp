#include "types.h"

struct Unk_0202ff44_V3 { s32 x, y, z; };

struct Unk_0202ff44_Obj {
    virtual void vfunc_00(void *a);
    virtual void vfunc_04(void *a);
    virtual BOOL vfunc_08(s32 *a, s32 *b, s32 *c, s32 x, s32 z);
};

struct Unk_02030608_Obj {
    virtual void vfunc_00(void *a);
    virtual void vfunc_04(void *a);
    virtual void vfunc_08(void *a);
};

struct Unk_020303d0_Cell { s32 unk_00; s32 unk_04; };

// one map slot, size 0x138
struct Unk_020303d0_Map {
    Unk_020303d0_Cell unk_00[5][6];
    u8 pad_f0[0x30];
    Unk_0202ff44_Obj *unk_120;
    u32 unk_124;
    u32 unk_128;
    s32 unk_12c;
    u8 unk_130;
    u8 pad_131;
    s16 unk_132;
    s16 unk_134;
    u8 pad_136[2];
};

struct Unk_02030528_Tbl {
    s32 unk_00;
    Unk_020303d0_Map unk_04[1];
};

struct Unk_0203006c_Ent {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
    s16 unk_06;
    u8 pad_08[4];
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 pad_10[14];
};

struct Unk_01ffcb5c_Chunk { u8 *unk_00; u8 *unk_04; };

extern "C" {
extern Unk_020303d0_Map *data_020d8ce8;
extern Unk_0203006c_Ent data_020c7c4c[];

s32 func_01ffcb2c(s32 x, s32 z);
Unk_01ffcb5c_Chunk *func_01ffcb5c(s32 x, s32 z);
s32 func_02031154(s32 x, s32 z);

void func_020304b4(s32 x, s32 z, s32 v);
void func_02030494(s32 x, s32 z, s32 v);

BOOL func_0202ff44(void) {
    Unk_020303d0_Map *c = data_020d8ce8;
    s32 m = 0;
    if (c->unk_12c != -1) {
        c->unk_12c = -1;
        return TRUE;
    }
    return m;
}

BOOL func_0202ff64(Unk_0202ff44_V3 *p) {
    s32 i = func_01ffcb2c(p->x >> 13, p->z >> 13);
    if (i >= 0x68 && i <= 0x6e) i -= 0x68; else i = -1;
    if (i >= 0) {
        if (i == data_020d8ce8->unk_12c) return TRUE;
        return FALSE;
    }
    return FALSE;
}

BOOL func_0202ffb0(s32 v) {
    Unk_020303d0_Map *c = data_020d8ce8;
    s32 m = 0;
    if (c->unk_12c == -1) {
        c->unk_12c = v;
        return TRUE;
    }
    return m;
}

s32 func_0202fff0(s32 x, s32 z) {
    s32 i = func_01ffcb2c(x, z);
    if (i >= 0x68 && i <= 0x6e) i -= 0x68; else i = -1;
    if (i < 0 || i == data_020d8ce8->unk_12c) return -1;
    return i;
}

s32 func_0202ffdc(Unk_0202ff44_V3 *p) {
    return func_0202fff0(p->x >> 13, p->z >> 13);
}

void func_0203002c(s32 x, s32 z) {
    func_020304b4(x, z, 0);
    func_02030494(x, z - 1, 4);
    func_02030494(x, z + 1, 1);
    func_02030494(x - 1, z, 8);
    func_02030494(x + 1, z, 2);
}

#define TB(i, f, d) ((i) < 0x7c ? data_020c7c4c[i].f : (d))

BOOL func_0203006c(s32 x, s32 z, s32 mask) {
    Unk_01ffcb5c_Chunk *ch = func_01ffcb5c(x >> 4, z >> 4);
    if (ch) {
        u8 *base = ch->unk_00;
        u8 *cell;
        s32 old, a, b, c, d;
        u32 i;
        s32 d0, d1, d2, d3;
        x &= 0xf;
        z &= 0xf;
        cell = base + (x + (z << 4));
        old = *cell;
        a = (mask & 1) ? 10 : old;
        b = ((mask >> 1) & 1) ? 10 : old;
        c = ((mask >> 2) & 1) ? 10 : old;
        d = ((mask >> 3) & 1) ? 10 : old;
        d0 = d1 = d2 = d3 = 0;
        for (i = 0; i < 0x7c; i++) {
            if (a == TB(i, unk_0c, d0) && b == TB(i, unk_0d, d1) && c == TB(i, unk_0e, d2) && d == TB(i, unk_0f, d3)) goto found;
        }
        i = 0;
    found:
        if (old != 0) {
            *cell = i;
            return TRUE;
        }
        *cell = 10;
        return FALSE;
    }
    return FALSE;
}

#define TS(i, d) ((i) < 0x7c ? ((v = data_020c7c4c[i].unk_06) > 0 ? 1 : v) : (d))

BOOL func_02030164(s32 x, s32 z) {
    Unk_01ffcb5c_Chunk *ch = func_01ffcb5c(x >> 4, z >> 4);
    if (ch) {
        u8 *base = ch->unk_00;
        s32 i;
        u8 *cell;
        s32 old, t, v;
        u32 e0, e1, e2, e3;
        s32 d0, d1, d2, d3, d4;
        x &= 0xf;
        z &= 0xf;
        cell = base + (x + (z << 4));
        old = *cell;
        t = old < 0x7c ? ((v = data_020c7c4c[old].unk_06) > 0 ? 1 : v) : -1;
        if (t == 1) {
            if (old == 3) {
                *cell = 0x1d;
                return TRUE;
            }
            if (old == 9) {
                *cell = 0x1e;
                return TRUE;
            }
            e0 = old < 0x7c ? data_020c7c4c[old].unk_0c : 0;
            e1 = old < 0x7c ? data_020c7c4c[old].unk_0d : 0;
            e2 = old < 0x7c ? data_020c7c4c[old].unk_0e : 0;
            e3 = old < 0x7c ? data_020c7c4c[old].unk_0f : 0;
            d0 = -1;
            d1 = d2 = d3 = d4 = 0;
            for (i = 0; (u32)i < 0x7c; i++) {
                if (TS(i, d0) == 0 && e0 == TB(i, unk_0c, d1) && e1 == TB(i, unk_0d, d2) && e2 == TB(i, unk_0e, d3) && e3 == TB(i, unk_0f, d4)) {
                    *cell = i;
                    return TRUE;
                }
            }
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

extern Unk_02030528_Tbl data_021bfab8;
extern u32 data_021c08b8[];
extern u32 data_021c12b8[];
extern u8 data_021c1548[];
extern u8 data_021c1549[];
extern u8 data_021c19f4[];
s32 func_02033e60(void *p);
void func_02031b78(void *p);
void func_02031dfc(void *p);
s32 func_02033e48(void *p);
void func_02033e10(void *p, s32 a, s32 b);
void func_02033db0(void *p);
BOOL func_020339f8(void *p, s32 v);

void func_020302cc(s32 v) {
    Unk_020303d0_Map *c = data_020d8ce8;
    s16 t = c->unk_134;
    if (t != v) {
        c->unk_132 = t;
        data_020d8ce8->unk_134 = v;
    }
}

void func_02030380(s32 idx);
void func_0203030c(s32 idx);

void func_020302f8(s32 idx) {
    func_0203030c(idx);
    func_02030380(idx);
}

static inline Unk_020303d0_Cell *Unk_0203030c_Get(Unk_020303d0_Map *m, s32 x, s32 y) {
    if (x >= 0 && y >= 0 && (u32)x < m->unk_124 && (u32)y < m->unk_128) return &m->unk_00[y][x];
    return NULL;
}

void func_0203030c(s32 idx) {
    Unk_020303d0_Map *m = &data_021bfab8.unk_04[idx];
    s32 y, x;
    for (y = 0; (u32)y < m->unk_128; y++) {
        for (x = 0; (u32)x < m->unk_124; x++) {
            Unk_020303d0_Cell *c = Unk_0203030c_Get(m, x, y);
            if (c) {
                c->unk_00 = 0;
                c->unk_04 = 0;
            }
        }
    }
}

void func_02030380(s32 idx) {
    func_02033e60(&data_021bfab8.unk_04[idx]);
    data_021c08b8[0x44 / 4] = 0;
    data_021c12b8[0x48 / 4] = 0;
    data_021c12b8[0x4c / 4] = 0;
    func_02031b78(data_021c1548);
    func_02031dfc(data_021c1549);
    func_02033e48(data_021c19f4);
}

void func_02030504(s32 a, s32 b) {
    func_02033e10(data_021c19f4, a, b);
}

void func_02030518(void) {
    func_02033db0(data_021c19f4);
}

static inline BOOL Unk_020303d0_IsSet(Unk_020303d0_Cell *c) {
    if (c->unk_00 != 0 && c->unk_04 != 0) return TRUE;
    return FALSE;
}

BOOL func_020303d0(s32 x, s32 y, s32 val, s32 idx) {
    Unk_020303d0_Cell *c = Unk_0203030c_Get(&data_021bfab8.unk_04[idx], x, y);
    if (c) {
        s32 i, j;
        u8 flag;
        Unk_020303d0_Cell *row;
        c->unk_00 = val;
        c->unk_04 = val + 0x100;
        for (i = data_021bfab8.unk_04[idx].unk_128 - 1; i >= 0; i--) {
            for (j = data_021bfab8.unk_04[idx].unk_124 - 1, row = data_021bfab8.unk_04[idx].unk_00[i]; j >= 0; j--) {
                if (!Unk_020303d0_IsSet(&row[j])) {
                    flag = 0;
                    goto end;
                }
            }
        }
        flag = 1;
    end:
        data_021bfab8.unk_04[idx].unk_130 = flag;
        return TRUE;
    }
    return FALSE;
}

void func_02030494(s32 x, s32 z, s32 mask) {
    s32 t = func_02031154(x, z) & ~mask;
    func_020304b4(x, z, t);
}

void func_020304b4(s32 x, s32 z, s32 v) {
    Unk_01ffcb5c_Chunk *ch = func_01ffcb5c(x >> 4, z >> 4);
    if (ch) {
        s32 n;
        u8 *p;
        x &= 0xf;
        z &= 0xf;
        n = x + (z << 4);
        p = ch->unk_04 + (n >> 1);
        if (n & 1) {
            *p = *p & ~0xf0;
            *p = *p | (v << 4);
        } else {
            *p = *p & ~0xf;
            *p = *p | v;
        }
    }
}

void func_02030598(s32 v);

BOOL func_02030528(u32 a, u32 b, Unk_0202ff44_Obj *o, s32 idx) {
    Unk_020303d0_Map *m = &data_021bfab8.unk_04[idx];
    BOOL ok = TRUE;
    func_02030380(idx);
    if (a <= 6) m->unk_124 = (u8)a; else ok = FALSE;
    if (b <= 6) m->unk_128 = (u8)b; else ok = FALSE;
    m->unk_120 = o;
    m->unk_130 = 0;
    func_02030598(0);
    return ok;
}

void func_02030598(s32 v) {
    if (!func_020339f8(&data_021bfab8, v)) {
        if (v < 0) {
            func_020339f8(&data_021bfab8, 0);
            data_020d8ce8 = &data_021bfab8.unk_04[data_021bfab8.unk_00];
        } else {
            func_020339f8(&data_021bfab8, 7);
            data_020d8ce8 = &data_021bfab8.unk_04[data_021bfab8.unk_00];
        }
    } else {
        data_020d8ce8 = &data_021bfab8.unk_04[data_021bfab8.unk_00];
    }
}

extern u8 data_021bfa70[];
extern u32 data_021c1304;
extern u8 data_021c047c[];
extern u8 data_021c0900[];
extern u8 data_021c154c[];
void func_020e9960(Unk_0202ff44_V3 *out, Unk_0202ff44_V3 *a, void *b);
void func_01ffd070(Unk_0202ff44_V3 *out, Unk_0202ff44_V3 *a, void *b);
void func_02033a5c(void *p, s32 a, s32 b, s32 c, s32 d, u32 e);
s32 func_0203139c(void);
void func_020324d8(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02031618(void *p, void *a, void *b, void *c, void *d, u32 e, s32 f);
void func_02032494(void *a, void *b);
void func_02032864(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_020331a8(void *a, void *b, s32 c, s32 d, s32 e, s32 f);

void func_02030608(Unk_0202ff44_V3 *a, Unk_0202ff44_V3 *b, Unk_02030608_Obj *o, u32 flags, u8 p5, u8 p6) {
    Unk_0202ff44_V3 v18, v24, v30, v3c;
    s32 x1, x2, z1, z2;
    BOOL f4 = (flags & 4) ? TRUE : FALSE;
    func_020e9960(&v18, a, data_021bfa70);
    func_01ffd070(&v24, b, data_021bfa70);
    x1 = v18.x >> 13;
    z1 = v18.z >> 13;
    x2 = v24.x >> 13;
    z2 = v24.z >> 13;
    func_01ffd070(&v30, &v18, &v24);
    v30.x >>= 1;
    v30.y >>= 1;
    v30.z >>= 1;
    func_020e9960(&v3c, &v24, &v18);
    v3c.x >>= 1;
    v3c.y >>= 1;
    v3c.z >>= 1;
    data_021c1304 = 0;
    data_021c08b8[0x44 / 4] = 0;
    data_021c12b8[0x48 / 4] = 0;
    func_02033a5c(data_021c154c, x1, x2, z1, z2, p6);
    if ((flags & 7) && !(flags & 0x20)) {
        func_020324d8(&data_021c1304, func_0203139c(), x1, x2, z1, z2, f4);
    }
    if (!(flags & 0x40)) {
        func_02031618(data_021c1548, &v30, &v3c, data_021c047c, data_021c0900, flags, 0);
        func_02031618(data_021c1548, &v30, &v3c, data_021c047c, data_021c0900, flags, 1);
    }
    if (flags & 6) {
        if (!(flags & 0x10)) func_02032494(&data_021c1304, data_021c047c);
        func_02032864(data_021c047c, data_021c154c, x1, x2, z1, z2, f4);
    }
    if (p5 && flags) {
        func_020331a8(data_021c0900, data_021c154c, x1, x2, z1, z2);
    }
    o->vfunc_08(&data_021c1304);
    o->vfunc_00(data_021c047c);
    o->vfunc_04(data_021c0900);
}

BOOL func_020307c4(s32 x, s32 z, s32 *p, s32 *q, s32 *r);
s32 func_020307ac(s32 x, s32 z);

s32 func_02030798(Unk_0202ff44_V3 *p) {
    return func_020307ac(p->x >> 13, p->z >> 13);
}

s32 func_020307ac(s32 x, s32 z) {
    s32 a, b, c;
    return func_020307c4(x, z, &a, &b, &c);
}

BOOL func_020307c4(s32 x, s32 z, s32 *p, s32 *q, s32 *r) {
    Unk_0202ff44_Obj *o = data_020d8ce8->unk_120;
    if (o) {
        s32 a, b, c;
        if (o->vfunc_08(&a, &b, &c, x, z)) {
            *p = a;
            *q = b;
            *r = c;
            return TRUE;
        }
    }
    return FALSE;
}

s32 func_02030814(void) {
    return 0x200;
}

struct Unk_0203081c_A {
    u8 unk_00;
    u8 pad_01[0x13];
};

struct Unk_0203081c_B {
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[0x0c];
};

void func_02032228(Unk_0203081c_A *p);
void func_02032218(Unk_0203081c_A *p);
BOOL func_02030908(Unk_0203081c_A *a, Unk_0202ff44_V3 *b, Unk_0202ff44_V3 *c, u32 flags);
void func_020339bc(Unk_0203081c_B *p, Unk_0202ff44_V3 *v, s32 a, s32 b);
s32 func_02033914(Unk_0203081c_B *p, s32 a);
void func_02033988(Unk_0203081c_B *p);

s32 func_0203081c(Unk_0202ff44_V3 *p, u32 *out, u32 flags) {
    Unk_0203081c_A a;
    Unk_0202ff44_V3 v14, v20;
    Unk_0203081c_B b;
    s32 r;
    func_02032228(&a);
    flags &= ~6;
    v14.x = p->x;
    v14.y = p->y;
    v14.z = p->z;
    v20.x = p->x;
    v20.y = p->y;
    v20.z = p->z;
    v14.y = 0x64000;
    v20.y = 0xfff9c000;
    if (func_02030908(&a, &v20, &v14, flags)) {
        if (out) *out = a.unk_00;
        r = v20.y;
        func_02032218(&a);
        return r;
    }
    func_020339bc(&b, p, 0, 0);
    if (out) *out = b.unk_34;
    r = func_02033914(&b, 0);
    func_02033988(&b);
    func_02032218(&a);
    return r;
}
}
