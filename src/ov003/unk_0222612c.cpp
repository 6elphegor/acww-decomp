#include "types.h"

struct Unk_ov003_02226180_Vec {
    s32 x, y, z;
};

struct Unk_ov003_02226180_Blk {
    s64 v[6];
};

// One 0x25c-byte entry of the tables at data_ov003_02259354 (2), 0225980c (4), 0225a17c (8)
struct Unk_ov003_02226180_Rec {
    u32 unk_00[0x14];                  // 0x00
    u8 unk_50[0x9c];                   // 0x50
    u8 unk_ec[4];                      // 0xec
    s32 unk_f0;                        // 0xf0
    u32 unk_f4;                        // 0xf4
    u32 unk_f8[(0x180 - 0xf8) / 4];    // 0xf8
    Unk_ov003_02226180_Blk unk_180;    // 0x180
    u32 unk_1b0[(0x1c8 - 0x1b0) / 4];  // 0x1b0
    Unk_ov003_02226180_Vec unk_1c8;    // 0x1c8
    u32 unk_1d4[(0x204 - 0x1d4) / 4];  // 0x1d4
    Unk_ov003_02226180_Vec unk_204;    // 0x204
    u32 unk_210[(0x21c - 0x210) / 4];  // 0x210
    s32 unk_21c;                       // 0x21c
    u32 unk_220[(0x22c - 0x220) / 4];  // 0x220
    s32 unk_22c;                       // 0x22c
    u32 unk_230[(0x238 - 0x230) / 4];  // 0x230
    u16 unk_238;                       // 0x238
    u16 unk_23a;                       // 0x23a
    u16 unk_23c;                       // 0x23c
    u8 unk_23e[8];                     // 0x23e
    u8 unk_246;                        // 0x246
    u8 unk_247;                        // 0x247
    u8 unk_248;                        // 0x248
    u8 unk_249;                        // 0x249
    u8 unk_24a[3];                     // 0x24a
    s8 unk_24d;                        // 0x24d
    u8 unk_24e[2];                     // 0x24e
    u8 unk_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 unk_252[6];                     // 0x252
    u8 unk_258;                        // 0x258
    u8 unk_259[3];                     // 0x259
};

struct Unk_ov003_022264f0_Buf {
    u8 b[0x200];
};

struct Unk_ov003_022269b8_Obj {
    u8 unk_00[0x50];
    u8 unk_50[0x18];
    u8 unk_68[0x18];
    u8 unk_80[0x18];
    void *unk_98[2];
};

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

struct Unk_ov003_02226768_Vec : Unk_ov003_02226180_Vec {
    Unk_ov003_02226768_Vec() {}
    ~Unk_ov003_02226768_Vec() {}
};

typedef Unk_ov003_02226180_Rec Rec;
typedef Unk_ov003_02226180_Vec Vec3;
typedef Unk_ov003_022264f0_Buf Buf;

extern "C" {
extern Unk_020cbb18_Ptr *data_020cbb18;
extern void *data_021c3070;
extern Vec3 data_021c309c;
extern s16 data_02135f44[];

extern Rec data_ov003_0225a17c[];
extern Rec data_ov003_02259354[];
extern Rec data_ov003_0225980c[];
extern Rec data_ov003_022595b0;
extern u8 data_ov003_02259484[];
extern u8 data_ov003_02259594[];
extern Vec3 data_ov003_02259558;
extern u8 data_ov003_02258f0c;

BOOL func_02072e88(Unk_020cbb18_Ptr *p, u32 v);
s32 func_0209c0ac(void *p);
s32 func_02106020(s32 a, s32 b);
void func_0203ee38(void *dst, void *src);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
void func_020547a4(void *p, s32 v);
void func_020902f8(void);
s32 func_020b8fe8(void);
s32 func_020a62a0(void);
u8 func_02060b9c(u8 v);
void *func_02095204(s32 v);
s32 func_02095670(u8 *a, s32 *b, s32 *c, s32 d, s32 e);
s32 func_020e9650(void *a, void *b);
void func_020e8558(void *p);
s32 func_02002bdc(void *a, void *b);
void func_0209c15c(void *p);
void func_02043b90(void);

s32 func_ov003_022260ac(s8 *p);
void func_ov003_02226d08(Rec *e, s32 v);
void func_ov003_02225b6c(Buf *b, s32 v);
void func_ov003_022258cc(Buf *b);
s32 func_ov003_02224e68(Buf *b, s32 x, s32 z, s32 a, s32 c, s32 d);
BOOL func_ov003_02225910(Rec *e, Buf *b, s32 kind, s32 sub);
s32 func_ov003_02225bf8(s32 kind, s32 h);
s32 func_ov003_022287c8(void *obj, Rec *e, s32 v);
void func_ov003_022288dc(void *obj, Rec *e);
u8 *func_ov003_0222eb10(s32 i);
s32 func_ov003_022135e4(void *o);
s32 func_ov003_0222c620(s32 a, s32 b);
BOOL func_ov003_022264f0(s32 obj, s32 kind, u8 sub, s32 flag);
}

extern "C" BOOL func_ov003_0222612c(void) {
    Unk_020cbb18_Ptr *p = data_020cbb18;
    if (func_02072e88(p, p->unk_64) == 0) {
        Rec *e = data_ov003_02259354;
        if (func_02106020(func_0209c0ac(data_ov003_02259484), 0) > 0x1e && e->unk_250 == 3 && e->unk_24d != 0x13) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02226180(s32 x) {
    u8 idx = x & 0xf;
    Rec *r = (Rec *)x;
    if ((x >> 4) & 1) {
        r = data_ov003_0225a17c + idx;
    } else if ((x >> 5) & 1) {
        r = data_ov003_02259354 + idx;
    }
    u32 t = r->unk_251;
    if (t != 0xa && t != 0xb && t != 9 && t != 0x10 && r->unk_250 == 3) {
        r->unk_251 = 0x10;
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL func_ov003_022261ec(s32 idx, s16 *p, Unk_ov003_02226180_Blk *q, s32 flag) {
    Rec *e = data_ov003_0225980c + idx;
    Vec3 *v = &e->unk_204;
    BOOL ret = TRUE;
    e->unk_180 = *q;
    s32 *b = (s32 *)&e->unk_180;
    func_ov003_02226d08(e, *p);
    v->x = b[9];
    v->y = b[10];
    v->z = b[11];
    func_0203ee38(v, v);
    if (e->unk_251 != 0xb) {
        s32 t = e->unk_24d;
        if (t == 0x1a) {
            e->unk_238 = 0;
            e->unk_23a = func_01ffcb0c(0xb6, 0xc8000);
            e->unk_23c = func_01ffcb0c(0xb6, 0x1e000);
        } else if (t == 0xc || t == 0xd || t == 0x1d) {
            e->unk_238 = func_01ffcb0c(0xb6, 0x91000);
            e->unk_23a = func_01ffcb0c(0xb6, 0xc8000);
            e->unk_23c = func_01ffcb0c(0xb6, 0x96000);
        } else if (t == 0x35) {
            e->unk_238 = func_01ffcb0c(0xb6, 0x91000);
            e->unk_23a = func_01ffcb0c(0xb6, 0x64000);
            e->unk_23c = 0;
        } else {
            e->unk_238 = func_01ffcb0c(0xb6, 0x35000);
            e->unk_23a = func_01ffcb0c(0xb6, 0xc8000);
            e->unk_23c = func_01ffcb0c(0xb6, 0x54000);
            if (e->unk_250 == 3) {
                u8 *s = e->unk_50;
                if (t == 0x14 && ((*(u32 *)(s + 0xa4) << 4) >> 16) == 0) {
                    func_0205668c(s + 0x9c, 4, 1, 0x1000, 0);
                    *(u32 *)(s + 0xa4) = 0x4000;
                } else if ((u16)(s16)(t - 10) <= 1) {
                    if (((*(u32 *)(s + 0xa4) << 4) >> 16) == 0) {
                        func_020547a4(s, 1);
                    } else {
                        func_020547a4(s, 0);
                    }
                } else if (t == 0x37) {
                    s32 w = *(s32 *)(s + 0xa0) >> 12;
                    if ((u16)w == 0xe && ((*(u32 *)(s + 0xa4) << 4) >> 16) == 0xd) {
                        *(u32 *)(s + 0xa4) = 0xa000;
                    } else if ((u16)w != 0xe) {
                        func_0205668c(s + 0x9c, 0xe, 0, 0x1000, 0xa);
                    }
                }
            }
        }
    }
    if (e->unk_250 == 2 || e->unk_250 == 0) {
        ret = FALSE;
    }
    if (flag != 0) {
        e->unk_251 = 0xa;
        if (e->unk_24d == 0x39) {
            s32 t = e->unk_22c;
            s32 m1 = -1;
            if (t != m1) {
                func_020902f8();
                e->unk_22c = -1;
            }
        }
    }
    return ret;
}

extern "C" void func_ov003_02226428(Vec3 *v) {
    data_ov003_02259594[9] = 1;
    data_ov003_02259558 = *v;
    data_ov003_02259594[0x11] = 4;
}

extern "C" s32 func_ov003_0222644c(s32 a, s32 b, s8 c, u32 d) {
    Rec *e;
    s32 r;
    u8 i;
    r = 0;
    e = data_ov003_0225a17c;
    for (i = 0; i < 8; e++, i++) {
        if (e->unk_248 == 0) {
            if (c == 0x33) {
                r = func_ov003_022264f0(a, c, (u8)d, b);
            } else if (func_ov003_022260ac(&c)) {
                r = func_ov003_022264f0(a, c, func_02060b9c(c), b);
            }
            if (r == 0 && c != 0x33) {
                e->unk_248 = 1;
                e->unk_24d = -10;
            }
            return r;
        }
    }
    return 0;
}

extern "C" BOOL func_ov003_022264f0(s32 obj, s32 kind, u8 sub, s32 flag) {
    Rec *e = data_ov003_0225a17c;
    s32 found = -1;
    Buf buf;
    if (kind != 8) {
        func_ov003_02225b6c(&buf, sub);
    } else {
        func_ov003_022258cc(&buf);
    }
    if (flag == 1) {
        u8 i;
        for (i = 0; i < 8; e++, i++) {
            if (e->unk_248 != 0) {
                if (kind != 0x33) {
                    Vec3 *v = &e->unk_204;
                    if (kind == 0x23 && e->unk_24d == 0x23) {
                        return FALSE;
                    }
                    if (kind != 8) {
                        func_ov003_02224e68(&buf, v->x, v->z, 1, 1, 1);
                    }
                }
            } else if (found < 0) {
                found = (s8)i;
            }
        }
    }
    if (found < 0 && flag != 2) {
        goto fail;
    }
    Vec3 *q = (Vec3 *)func_02095204(4);
    if (q != 0 && flag == 1 && kind != 0x33) {
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
            s32 k;
            u8 b0;
            s32 px, pz;
            for (k = 0; k < 4; k++) {
                if (func_02095670(&b0, &px, &pz, -1, k) && b0 == 0) {
                    func_ov003_02224e68(&buf, px, pz, 5, 8, 5);
                }
            }
        } else {
            Vec3 *pp = (Vec3 *)((u8 *)q + 0x5c);
            func_ov003_02224e68(&buf, pp->x, pp->z, 5, 8, 5);
        }
    }
    Rec *cur;
    if (flag == 1) {
        cur = data_ov003_0225a17c + found;
    } else {
        cur = &data_ov003_022595b0;
    }
    if (kind == 0x23 && !func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        u8 j;
        for (j = 0; j < 2; j++) {
            u8 *o = func_ov003_0222eb10(j);
            if (o) {
                Vec3 *pos = (Vec3 *)(o + 0x5c);
                Vec3 *dst = &cur->unk_204;
                s32 s24 = func_ov003_022135e4(o);
                s32 s28 = func_ov003_0222c620(0x20, 1);
                if (q) {
                    if (func_020e9650((u8 *)q + 0x5c, pos) > 0xc000) {
                        dst->x = pos->x;
                        dst->y = pos->y;
                        dst->z = pos->z;
                        s32 idx = ((u16)s28 >> 4) * 2;
                        dst->x += func_01ffcb0c(data_02135f44[idx], s24);
                        dst->z += func_01ffcb0c(data_02135f44[idx + 1], s24);
                        cur->unk_23a = func_02002bdc(pos, dst);
                        cur->unk_248 = 1;
                        cur->unk_24d = kind;
                        cur->unk_249 = 0;
                        cur->unk_21c = j;
                        func_ov003_022288dc((void *)obj, cur);
                        return TRUE;
                    }
                }
            }
        }
        goto fail;
    } else {
        if (!func_ov003_02225910(cur, &buf, kind, sub)) {
            goto fail;
        }
        cur->unk_248 = 1;
        cur->unk_24d = kind;
        cur->unk_249 = 0;
        Vec3 *s = &cur->unk_204;
        Vec3 *d = &cur->unk_1c8;
        d->x = s->x;
        d->y = s->y;
        d->z = s->z;
        if (flag == 1) {
            func_ov003_022288dc((void *)obj, cur);
        }
        return TRUE;
    }
fail:
    return FALSE;
}

extern "C" void func_ov003_0222675c(void) {
    data_ov003_02258f0c = 1;
}

extern "C" void func_ov003_02226768(s32 obj, s32 flag) {
    void *c = data_021c3070;
    Rec *e;
    s32 n;
    if (flag == 1) {
        e = data_ov003_0225a17c;
        n = 8;
    } else {
        e = data_ov003_02259354;
        n = 2;
    }
    if (c) {
        Unk_ov003_02226768_Vec cp;
        Vec3 *g = &data_021c309c;
        cp.x = g->x;
        cp.y = g->y;
        cp.z = g->z;
        s32 x0 = cp.x - 0x10000;
        s32 z0 = cp.z - 0x1c000;
        s32 x1 = cp.x + 0x10000;
        s32 z1 = cp.z + 0xc000;
        s32 h = func_020b8fe8();
        u8 i;
        for (i = 0; i < n; e++, i++) {
            if (e->unk_248 != 0 && e->unk_24d >= 0) {
                Vec3 *p = &e->unk_204;
                s32 r = func_ov003_02225bf8(e->unk_24d, h);
                if (e->unk_249 == 0 && r == 4) {
                    func_ov003_022287c8((void *)obj, e, flag);
                } else {
                    if (r == 5) {
                        e->unk_246 = 0;
                    } else {
                        e->unk_246 = 1;
                    }
                    if (x0 < p->x && x1 > p->x && z0 < p->z && z1 > p->z) {
                        e->unk_249 = 1;
                    } else {
                        e->unk_249 = 0;
                    }
                }
            }
        }
    }
}

extern "C" void func_ov003_02226874(s32 obj, s32 flag, s32 idx, s32 x, s32 z) {
    Rec *e;
    s32 n;
    if (flag == 1) {
        e = data_ov003_0225a17c;
        n = 8;
    } else {
        e = data_ov003_02259354;
        n = 2;
    }
    s32 x0 = x - 0x10000;
    s32 z0 = z - 0x1c000;
    s32 x1 = x + 0x10000;
    s32 z1 = z + 0xc000;
    s32 h = func_020b8fe8();
    u8 i = 0;
    s32 m = 1;
    m = m << idx;
    s32 nm = ~(m & 0xf);
    for (; i < n; e++, i++) {
        if (e->unk_248 != 0 && e->unk_24d >= 0) {
            s32 r;
            Vec3 *p = &e->unk_204;
            u32 bits = e->unk_258;
            r = func_ov003_02225bf8(e->unk_24d, h);
            if (func_020a62a0() == 0 && r == 4) {
                r = 3;
            }
            u32 t = e->unk_249;
            if (t == 0 && r == 4) {
                func_ov003_022287c8((void *)obj, e, flag);
            } else if (x0 < p->x && x1 > p->x && z0 < p->z && z1 > p->z) {
                if (t == 0) {
                    e->unk_249 = 1;
                    e->unk_258 = bits | m;
                }
            } else if (((s32)bits >> idx) & 1) {
                e->unk_258 = bits & nm;
            } else if (t != 0 && bits == 0 && flag == 1) {
                e->unk_249 = 0;
            }
        }
    }
}

extern "C" BOOL func_ov003_022269b8(Unk_ov003_022269b8_Obj *obj) {
    Rec *pa = data_ov003_0225a17c;
    Rec *pb = data_ov003_02259354;
    Rec *pc = data_ov003_0225980c;
    s32 i, j, k;
    for (i = 0; i < 8; i++) {
        func_ov003_022287c8(obj, pa++, 1);
    }
    j = 0;
    for (i = 0; i < 2; i++) {
        Rec *q = pb;
        pb++;
        func_ov003_022287c8(obj, q, 2);
        func_020e8558(obj->unk_98[i]);
        obj->unk_98[i] = 0;
    }
    for (k = 0; k < 4; k++) {
        Rec *q = pc;
        pc++;
        func_ov003_022287c8(obj, q, 3);
    }
    func_0209c15c(obj->unk_50);
    func_0209c15c(obj->unk_68);
    func_0209c15c(obj->unk_80);
    func_02043b90();
    return TRUE;
}
