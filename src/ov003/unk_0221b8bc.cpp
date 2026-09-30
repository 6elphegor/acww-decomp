#include "types.h"

struct Unk_ov003_0221b8bc_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0221b8bc_V3D : Unk_ov003_0221b8bc_V3 {
    Unk_ov003_0221b8bc_V3D() {}
    ~Unk_ov003_0221b8bc_V3D() {}
};

struct Unk_ov003_0221b8bc_V2 {
    s32 x, z;
};

struct Unk_ov003_0221b8bc_Col {
    u16 a, b, c;
};

struct Unk_ov003_0221b8bc_Col2 {
    u16 a, b;
};

struct Unk_ov003_0221b8bc_Blk {
    s32 v[12];
};

struct Unk_ov003_0221b8bc_Bits {
    u32 a : 12;
    u32 b : 16;
    u32 c : 4;
};

struct Unk_ov003_0221b8bc_Sub {
    u8 pad_00[0xd];
    u8 unk_0d;
};

struct Unk_ov003_0221b8bc {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08[0x5c];
    /* 0x64 */ void *unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov003_0221b8bc_Blk unk_6c;
    /* 0x9c */ u8 unk_9c[0x10];
    /* 0xac */ Unk_ov003_0221b8bc_Bits unk_ac;
    /* 0xb0 */ u8 unk_b0[8];
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 pad_b9[7];
    /* 0xc0 */ Unk_ov003_0221b8bc_V3 unk_c0;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s32 unk_d0;
    /* 0xd4 */ s32 unk_d4;
    /* 0xd8 */ s32 unk_d8;
    /* 0xdc */ s32 unk_dc;
    /* 0xe0 */ u8 unk_e0[0x64];
    /* 0x144 */ Unk_ov003_0221b8bc_Sub *unk_144;
    /* 0x148 */ Unk_ov003_0221b8bc_Sub *unk_148;
};

struct Unk_ov003_0221c030_Ent {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08[2];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
};

extern "C" {
extern void *data_020cbb18;
extern Unk_ov003_0221b8bc_V3 *data_ov003_0223291c[];
extern u16 data_ov003_0222f034[];
extern Unk_ov003_0221b8bc_Blk data_021f47e0;
extern s32 data_ov003_02235960;
extern s32 data_ov003_02235938;
extern u8 *data_ov003_02235930;

s32 func_02072e44(void *p);
void *func_0209750c(void);
s32 func_02098044(void *p, s32 a);
void func_0204ed8c(Unk_ov003_0221b8bc_V3 *out, s32 x, s32 z);
void func_01ffd070(Unk_ov003_0221b8bc_V3 *out, Unk_ov003_0221b8bc_V3 *a, void *m);
void func_ov003_02219a1c(Unk_ov003_0221b8bc *o, s32 id, Unk_ov003_0221b8bc_V2 *a, Unk_ov003_0221b8bc_V3 *b);
s32 func_02045220(u8 a, u8 b);
void *func_02045214(void);
s32 func_0204ad08(u16 *p);
void func_0204ee10(s32 *x, s32 *y, Unk_ov003_0221b8bc_V3 *v);
void func_ov003_02219a9c(s32 a, s32 id, Unk_ov003_0221b8bc_V2 *p, Unk_ov003_0221b8bc_V3 *v, s32 f, s32 i);
void *func_02043ee0(void *p);
u16 *func_02095204(void *p);
void *func_0204da0c(void);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 e);
s32 func_02045354(Unk_ov003_0221b8bc_V2 *p, s32 a);
void func_ov003_0221b718(Unk_ov003_0221b8bc *o, u16 *cell);
void func_02045510(Unk_ov003_0221b8bc_V2 *p, s32 id, s32 a);
void func_02003e70(void *p, u32 a, u32 b, u32 c);
void func_ov003_0221b618(Unk_ov003_0221b8bc *o);
void func_02054b14(void *p);
void func_02003e50(void *p);
s32 func_0203ef38(Unk_ov003_0221b8bc_V3 *out, void *v);
void func_020e8388(void *p, s32 x, s32 y, s32 z);
void func_020e8434(void *p, s32 a);
void func_020547cc(void *p, s32 a);
u16 func_02064cc4(void);
void func_0210612c(void *p, s32 a, s32 b);
void func_020547e4(void *p);
s32 func_02056654(void *p);
void func_02105f00(void *p, s32 a);
void func_02105f48(void *p, s32 a);
s32 func_0204aba4(u16 *p);
s32 func_0204ad98(u16 *p);
void *func_ov003_0221c62c(void *d, s32 mode, s32 n, u16 *cell, Unk_ov003_0221b8bc_V2 *p, s32 c);
void *func_ov003_0221c6c4(void *d, s32 mode, s32 n, u16 *cell, Unk_ov003_0221b8bc_V2 *p, s32 c);
void func_02003e80(void *p, Unk_ov003_0221b8bc_V3 *v);
void func_02054b38(void *p, s32 a);
void func_02054800(void *p, s32 a);
void func_020554a0(void *p, void *fn, s32 a, s32 b, void *o, s32 c);
void func_02003ecc(void *p);
void func_ov003_0221b5e4(void);
Unk_ov003_0221b8bc *func_ov003_0221c220(void *a, u16 *cell, s32 n, s32 f);
s32 func_0204af08(u16 *p);
s32 func_02043ba8(void);
void func_02045570(Unk_ov003_0221b8bc_V2 *p, s32 a);
void func_ov003_0221b4b8(Unk_ov003_0221c030_Ent *e);
void func_ov003_0221b65c(Unk_ov003_0221b8bc *a, s32 id, Unk_ov003_0221b8bc_V2 *p, s32 c, s32 n, s32 d);

s32 func_ov003_0221ba28(Unk_ov003_0221b8bc *o, Unk_ov003_0221b8bc_V3 *p);

void func_ov003_0221b8bc(Unk_ov003_0221b8bc *o, s32 *p) {
    Unk_ov003_0221b8bc_V2 a;
    Unk_ov003_0221b8bc_V3 b;
    Unk_ov003_0221b8bc_V3D c;
    Unk_ov003_0221b8bc_V3 e;
    Unk_ov003_0221b8bc_V3 d;
    if (func_02072e44(data_020cbb18) == 0 && func_02098044(func_0209750c(), 1) == 0) {
        func_0204ed8c(&b, p[0], p[1]);
        Unk_ov003_0221b8bc_V3 *t = data_ov003_0223291c[0];
        t = t + func_ov003_0221ba28(o, &b);
        func_01ffd070(&e, &b, t);
        c.x = e.x;
        c.y = e.y;
        c.z = e.z;
        d = c;
        a.x = p[0];
        a.z = p[1];
        func_ov003_02219a1c(o, 0x1569, &a, &d);
    }
}

void func_ov003_0221b93c(u16 *cell, s32 id, s32 *pos) {
    volatile Unk_ov003_0221b8bc_Col col;
    Unk_ov003_0221b8bc_V2 xy, xy2;
    Unk_ov003_0221b8bc_V3 base, cur, cp;
    Unk_ov003_0221b8bc_V3 *tbl;
    s32 n, arg, i;
    func_0204ed8c(&base, pos[0], pos[1]);
    switch (*cell) {
    case 0xcc:
        tbl = data_ov003_0223291c[2];
        n = 2;
        arg = 0x1548;
        break;
    case 0x5b:
        tbl = data_ov003_0223291c[0];
        n = 3;
        arg = 0x14b8;
        break;
    default:
        tbl = data_ov003_0223291c[0];
        n = 3;
        arg = data_ov003_0222f034[func_0204ad08(cell)];
        break;
    }
    xy.x = 0;
    xy.z = 0;
    for (i = 0; i < n; i++) {
        s32 r = func_02045220(id, i);
        cur.x = base.x + tbl->x;
        cur.y = base.y + tbl->y;
        cur.z = base.z + tbl->z;
        if (r >= 0) {
            u16 v = ((u16 *)func_02045214())[4];
            col.c = v;
            u16 t = col.c;
            col.b = t;
            col.a = t;
            xy.x = (s32)col.a >> 8;
            xy.z = col.b & 0xff;
            r = 0;
        } else {
            func_0204ee10(&xy.x, &xy.z, &cur);
            r = 1;
        }
        cp = cur;
        xy2.x = xy.x;
        xy2.z = xy.z;
        func_ov003_02219a9c(id, arg, &xy2, &cp, r, i);
        tbl++;
    }
}

s32 func_ov003_0221ba28(Unk_ov003_0221b8bc *o, Unk_ov003_0221b8bc_V3 *p) {
    s32 r = 0;
    u16 *q = func_02095204(func_02043ee0(o));
    if (q != 0) {
        if (*(s32 *)((u8 *)q + 0x5c) < p->x) {
            r = 1;
        }
    }
    return r;
}

void func_ov003_0221ba50(Unk_ov003_0221b8bc *o, s32 flag) {
    Unk_ov003_0221b8bc_V2 a, b, c;
    s32 hx, hy, x, z;
    u16 *cell;
    void *g = func_0204da0c();
    x = o->unk_cc;
    z = o->unk_d0;
    hx = x >> 4;
    hy = z >> 4;
    cell = func_0204ebd8(g, hx, hy, x - (hx << 4), z - (hy << 4), 0);
    switch (o->unk_d4) {
    case 1:
        break;
    case 2:
    case 3:
        a.x = o->unk_cc;
        a.z = o->unk_d0;
        if (func_02045354(&a, 0) >= 0) {
            func_ov003_0221b718(o, cell);
            b.x = o->unk_cc;
            b.z = o->unk_d0;
            func_02045510(&b, o->unk_04, 0);
        }
        break;
    default:
        func_ov003_0221b718(o, cell);
        c.x = o->unk_cc;
        c.z = o->unk_d0;
        func_02045510(&c, o->unk_04, 0);
        break;
    }
    if (flag == 0) {
        switch (o->unk_d4) {
        case 0:
        case 2:
        case 3:
            func_02003e70(o->unk_e0, 0x7dc, 0x7f, 0);
            break;
        case 1:
            func_02003e70(o->unk_e0, 0x7d9, 0x7f, 0);
            break;
        }
    } else {
        switch (o->unk_d4) {
        case 4:
        case 5:
        case 6:
        case 7:
            func_02003e70(o->unk_e0, 0x855, 0x7f, 0);
            break;
        default:
            func_02003e70(o->unk_e0, 0x7dd, 0x7f, 0);
            break;
        }
    }
    o->unk_00 = 1;
}

s32 func_ov003_0221bb98(Unk_ov003_0221b8bc *o) {
    func_ov003_0221b618(o);
    func_02054b14(o->unk_08);
    func_02003e50(o->unk_e0);
}

void func_ov003_0221bbb8(Unk_ov003_0221b8bc *o) {
    if (o->unk_00 == 1) {
        volatile Unk_ov003_0221b8bc_Col2 l;
        Unk_ov003_0221b8bc_V3 v;
        s32 r = func_0203ef38(&v, &o->unk_c0);
        func_020e8388(&data_021f47e0, v.x, v.y, v.z);
        func_020e8434(&data_021f47e0, r);
        o->unk_6c = data_021f47e0;
        func_020547cc(o->unk_08, 0);
        l.a = func_02064cc4();
        l.b = l.a;
        func_0210612c(o->unk_64, 0, l.b);
    }
}

void func_ov003_0221bc24(Unk_ov003_0221b8bc *o) {
    if (o->unk_00 == 1) {
        func_020547e4(o->unk_08);
        if (func_02056654(o->unk_9c + 8)) {
            func_ov003_0221b618(o);
        } else {
            s32 r5 = 0;
            s32 r6 = *(s32 *)((u8 *)data_020cbb18 + 0x68);
            switch (o->unk_d4) {
            case 4:
            case 5:
                if (o->unk_ac.b >= 0x11) {
                    o->unk_d8 = o->unk_d8 - 0x2955;
                    if (o->unk_d8 < 0) {
                        o->unk_d8 = 0;
                    }
                }
                switch (o->unk_dc) {
                case 0:
                    if (o->unk_ac.b >= 4) {
                        r5 = 1;
                    }
                    break;
                case 1:
                    if (o->unk_ac.b >= 0x14) {
                        r5 = 1;
                        func_02003e70(o->unk_e0, 0x7ea, 0x7f, 0);
                    }
                    break;
                }
                break;
            case 6:
            case 7:
                if (o->unk_ac.b >= 0x11) {
                    o->unk_d8 = o->unk_d8 - 0x2627;
                    if (o->unk_d8 < 0) {
                        o->unk_d8 = 0;
                    }
                }
                switch (o->unk_dc) {
                case 0:
                    if (o->unk_ac.b >= 4) {
                        r5 = 1;
                    }
                    break;
                case 1:
                    if (o->unk_ac.b >= 0xd) {
                        r5 = 1;
                        func_02003e70(o->unk_e0, 0x7ea, 0x7f, 0);
                    }
                    break;
                }
                break;
            case 2:
                if (o->unk_dc == 0 && o->unk_ac.b >= 4) {
                    r5 = 1;
                } else {
                    if (o->unk_144) {
                        o->unk_144->unk_0d = 0x1a;
                    }
                    if (o->unk_148) {
                        o->unk_148->unk_0d = 0x1a;
                    }
                }
                break;
            case 0:
                if (o->unk_dc == 0 && o->unk_ac.b >= 4) {
                    r5 = 1;
                }
                break;
            case 3:
                break;
            case 1:
            default:
                if (o->unk_dc == 0 && o->unk_ac.b >= 4) {
                    r5 = 1;
                }
                break;
            }
            func_02105f00(o->unk_64, o->unk_d8 >> 12);
            func_02105f48(o->unk_64, r6 + 0x33);
            if (r5 != 0) {
                void *g = func_0204da0c();
                if (g != 0) {
                    s32 x = o->unk_cc;
                    s32 z = o->unk_d0;
                    s32 hx = x >> 4;
                    s32 hy = z >> 4;
                    u16 *cell = func_0204ebd8(g, hx, hy, x - (hx << 4), z - (hy << 4), 0);
                    if (cell != 0) {
                        BOOL f3 = TRUE, f2 = TRUE, f1 = TRUE, f0 = FALSE;
                        u32 v = *cell;
                        s32 n;
                        if (v >= 0x2b && v <= 0x2e) {
                            f0 = TRUE;
                        }
                        if (!f0) {
                            if (v < 0xff || v > 0x102) {
                                f1 = FALSE;
                            }
                        }
                        if (!f1) {
                            if (v < 0x62 || v > 0x65) {
                                f2 = FALSE;
                            }
                        }
                        if (!f2) {
                            if (v < 0xd0 || v > 0xd3) {
                                f3 = FALSE;
                            }
                        }
                        if (f3) {
                            n = func_0204aba4(cell);
                        } else {
                            n = func_0204ad98(cell);
                        }
                        if (n > 0) {
                            Unk_ov003_0221b8bc_V2 a, b;
                            a.x = o->unk_cc;
                            a.z = o->unk_d0;
                            o->unk_144 = (Unk_ov003_0221b8bc_Sub *)func_ov003_0221c62c(&data_ov003_02235960, o->unk_d4, n - 1, cell, &a, o->unk_dc);
                            b.x = o->unk_cc;
                            b.z = o->unk_d0;
                            o->unk_148 = (Unk_ov003_0221b8bc_Sub *)func_ov003_0221c6c4(&data_ov003_02235960, o->unk_d4, n - 1, cell, &b, o->unk_dc);
                            o->unk_dc = o->unk_dc + 1;
                        }
                    }
                }
            }
        }
        Unk_ov003_0221b8bc_V3 v3;
        v3.x = o->unk_c0.x;
        v3.y = o->unk_c0.y;
        v3.z = o->unk_c0.z;
        func_02003e80(o->unk_e0, &v3);
    }
    o->unk_b8 = 1;
}

void func_ov003_0221bf30(Unk_ov003_0221b8bc *o) {
    func_02054b38(o->unk_08, data_ov003_02235938);
    func_02054800(o->unk_08, data_ov003_02235938);
    o->unk_d4 = 8;
    func_020554a0(o->unk_08, (void *)func_ov003_0221b5e4, 2, 2, o, 0);
    func_02003ecc(o->unk_e0);
    func_ov003_0221b618(o);
}

void func_ov003_0221bf88(s32 id, s32 *pos) {
    void *g = func_0204da0c();
    if (g != 0) {
        s32 x = pos[0];
        s32 z = pos[1];
        s32 hx = x >> 4;
        s32 hy = z >> 4;
        u16 *cell = func_0204ebd8(g, hx, hy, x - (hx << 4), z - (hy << 4), 0);
        if (cell != 0) {
            s32 n;
            Unk_ov003_0221b8bc *e;
            if (func_02072e44(data_020cbb18) == 0) {
                id = 0;
            }
            n = func_0204ad98(cell);
            if (n > 0 && n <= 4) {
                e = func_ov003_0221c220(data_ov003_02235930 + 0x4b20, cell, n - 1, (pos[0] ^ pos[1]) & 1);
                if (e != 0 && pos[0] == e->unk_cc && pos[1] == e->unk_d0 && id == e->unk_04) {
                    e->unk_b8 = 0;
                }
            }
        }
    }
}

void func_ov003_0221c030(u8 *a, s32 id, s32 *pos, s32 c, s32 d) {
    void *g = func_0204da0c();
    if (g != 0) {
        s32 x = pos[0];
        s32 z = pos[1];
        s32 hx = x >> 4;
        s32 hy = z >> 4;
        u16 *cell = func_0204ebd8(g, hx, hy, x - (hx << 4), z - (hy << 4), 0);
        if (cell != 0) {
            Unk_ov003_0221c030_Ent *e;
            s32 f1, f2;
            u32 v;
            Unk_ov003_0221b8bc_V2 t;
            if (func_02072e44(data_020cbb18) == 0) {
                id = 0;
            }
            e = (Unk_ov003_0221c030_Ent *)(a + 0x1dd4 + id * 0x18);
            if (e->unk_00 != 0) {
                f1 = 0;
                v = *cell;
                if (v >= 0x2f && v <= 0x56) {
                    f1 = 1;
                }
                if (f1 == 0 && v >= 0xc8 && v <= 0xcf) {
                    goto l_ae;
                }
                if (func_0204af08(cell) != 0) {
                    goto set;
                }
            l_ae:
                f1 = 1;
                v = *cell;
                if (v != 0x67 && v != 0x6b) {
                    f1 = 0;
                }
                if (f1 != 0) {
                    if (func_02043ba8() != 0) {
                        goto set;
                    }
                }
                f2 = 1;
                f1 = 0;
                v = *cell;
                if (v >= 0x66 && v <= 0x68) {
                    f1 = f2;
                }
                if (f1 == 0) {
                    if (v < 0x6a || v > 0x6c) {
                        f2 = 0;
                    }
                }
                if (f2 != 0) {
                    goto set;
                }
                if (v >= 0x57 && v <= 0x5b) {
                    goto set;
                }
                if (((volatile s32 *)pos)[0] == e->unk_08[0] && ((volatile s32 *)pos)[1] == e->unk_08[1]) {
                    return;
                }
                t.x = pos[0];
                t.z = pos[1];
                func_02045570(&t, 0);
                return;
            }
        set:
            e->unk_00 = 1;
            e->unk_04 = id;
            s32 tz = pos[1];
            e->unk_08[0] = pos[0];
            e->unk_08[1] = tz;
            e->unk_10 = c;
            e->unk_14 = d;
        }
    }
}

void func_ov003_0221c13c(void *a, Unk_ov003_0221c030_Ent *o) {
    s32 w;
    u16 *cell;
    s32 x, z, n;
    Unk_ov003_0221b8bc_V2 p;
    s32 *q;
    s32 hx, hy;
    Unk_ov003_0221b8bc *e;
    void *g = func_0204da0c();
    if (g == 0) {
        func_ov003_0221b4b8(o);
        return;
    }
    q = o->unk_08;
    x = q[0];
    z = q[1];
    hx = x >> 4;
    hy = z >> 4;
    cell = func_0204ebd8(g, hx, hy, x - (hx << 4), z - (hy << 4), 0);
    if (cell == 0) {
        func_ov003_0221b4b8(o);
        return;
    }
    q = o->unk_08;
    x = q[0];
    z = q[1];
    w = o->unk_10;
    n = func_0204ad98(cell);
    if (n <= 0 || n > 4) {
        func_ov003_0221b4b8(o);
        return;
    }
    e = func_ov003_0221c220(a, cell, n - 1, (x ^ z) & 1);
    if (e == 0) {
        func_ov003_0221b4b8(o);
        return;
    }
    if (e->unk_00 == 1) {
        switch (e->unk_d4) {
        case 4:
        case 5:
        case 6:
        case 7:
            func_ov003_0221b4b8(o);
            return;
        default:
            break;
        }
    }
    s32 d = o->unk_14;
    p.x = x;
    p.z = z;
    func_ov003_0221b65c(e, o->unk_04, &p, w, n - 1, d);
    o->unk_00 = 0;
}
}
