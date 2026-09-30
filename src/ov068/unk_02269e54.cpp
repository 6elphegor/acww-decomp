#include "types.h"

struct Unk_ov068_02269e54_Vec {
    s32 x, y, z;
};

// Actor owned by overlay 3 (fields used by the ov068 helpers).
struct Unk_ov068_02269e54_Obj {
    /* 0x000 */ u8 pad_00[0x1b0];
    /* 0x1b0 */ Unk_ov068_02269e54_Vec unk_1b0;
    /* 0x1bc */ Unk_ov068_02269e54_Vec unk_1bc;
    /* 0x1c8 */ u8 pad_1c8[0x1e0 - 0x1c8];
    /* 0x1e0 */ Unk_ov068_02269e54_Vec unk_1e0;
    /* 0x1ec */ u8 pad_1ec[0x204 - 0x1ec];
    /* 0x204 */ Unk_ov068_02269e54_Vec unk_204;
    /* 0x210 */ u8 pad_210[0x21c - 0x210];
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ s32 unk_220;
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ u8 pad_228[0x232 - 0x228];
    /* 0x232 */ s16 unk_232;
    /* 0x234 */ u8 pad_234[4];
    /* 0x238 */ s16 unk_238;
    /* 0x23a */ s16 unk_23a;
    /* 0x23c */ u8 pad_23c[4];
    /* 0x240 */ s16 unk_240;
    /* 0x242 */ u8 pad_242[8];
    /* 0x24a */ u8 unk_24a;
    /* 0x24b */ u8 unk_24b;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ s8 unk_24d;
    /* 0x24e */ u8 pad_24e;
    /* 0x24f */ u8 unk_24f;
    /* 0x250 */ u8 pad_250;
    /* 0x251 */ u8 unk_251;
    /* 0x252 */ u8 pad_252[2];
    /* 0x254 */ u8 unk_254;
    /* 0x255 */ u8 pad_255[2];
    /* 0x257 */ u8 unk_257;
};

struct Unk_ov068_02269e54_Pad {
    s32 v[3];
    Unk_ov068_02269e54_Pad() {}
    ~Unk_ov068_02269e54_Pad() {}
};

struct Unk_ov068_0226a004_Save {
    s32 x, y;
    volatile s32 z;
};

typedef Unk_ov068_02269e54_Obj Obj_t;
typedef Unk_ov068_02269e54_Vec Vec_t;

extern "C" {
extern void *data_021c47c4;

void func_0204ee10(s32 *, s32 *, void *);
void func_0204ed8c(void *, u32, u32);
u16 *func_0204ebd8(void *, s32, s32, s32, s32, s32);
u16 func_0204b1cc(u32);
void *func_020b27a4(u16 *);
u32 func_020b2b98(void *);
s32 func_020b2ae0(void *, s32 *, s32 *, u32);
void *func_ov003_02218b40(u32);
s32 func_ov009_0225b964(void *);
s32 func_ov009_0225b980(void *);
s32 func_ov009_0225b974(void *);
s32 func_020e9650(void *, void *);
void func_020e9960(void *, void *, void *);
void func_020e93a0(void *, s32);
void func_ov003_02225ec8(void *, s32);
s32 func_ov003_0222ab68(void *, void *, s32);
s32 func_01ffca58(void *, void *, void *);
s32 func_01ffc5a4(s32, s32);
s32 func_01ffcb0c(s32, s32);
s32 func_02063b8c(s32);
void func_ov003_0222d720(void *);
void *func_02095204(s32);
s32 func_02133150(s32, s32);
s16 func_02002bdc(void *, void *);
void func_ov003_0222e328(Vec_t *, s32);
s32 func_020312a8(s32, s32);
void func_0209028c(s32, void *, void *, s32);
s32 func_ov003_0222e500(void *, s32, s32);
s32 func_ov003_0222c620(s32, s32);
void *func_02081718(u32);
s32 func_02081780();

s32 func_ov068_02269e54(Obj_t *o, Vec_t *out) {
    s32 best;
    Vec_t bv;
    Vec_t cur;
    s32 bx, bz;
    s32 x, z;
    u32 i;
    s32 zj = 0, zt = 0, zp = 0;

    bx = 0;
    best = -1;
    x = 0;
    z = 0;
    bz = 0;
    bv.x = best;
    bv.y = 0;
    bv.z = best;
    cur.x = 0;
    cur.y = 0;
    cur.z = 0;
    func_0204ee10(&x, &z, &o->unk_204);
    cur.x = x;
    cur.y = 0;
    cur.z = z;
    for (i = 0; i < 0x22; i++) {
        u16 id = func_0204b1cc(i);
        void *obj = func_020b27a4(&id);
        if (obj != 0) {
            u32 cnt = func_020b2b98(obj);
            s32 px = zp, pz = zp;
            if (cnt != 0) {
                void *q = func_ov003_02218b40(id);
                if (q != 0) {
                    u32 j;
                    for (j = zj; j < cnt; j++) {
                        if (func_020b2ae0(obj, &px, &pz, j) != 0 && func_ov009_0225b964(q) == 1) {
                            Vec_t t;
                            Unk_ov068_02269e54_Pad pad;
                            s32 d;
                            s32 tx = px + func_ov009_0225b980(q);
                            s32 tz = pz + func_ov009_0225b974(q);
                            t.x = tx;
                            t.y = zt;
                            t.z = tz;
                            d = func_020e9650(&cur, &t);
                            if ((cur.z <= tz && best < 0) || d < best) {
                                best = d;
                                bx = tx;
                                bz = tz;
                            }
                        }
                    }
                }
            }
        }
    }
    if (best >= 0) {
        func_0204ed8c(&bv, bx, bz);
        out->x = bx;
        out->z = bz;
    }
    return best;
}

s32 func_ov068_02269f60(Obj_t *o, u16 *p, Vec_t *out) {
    Vec_t a;
    Vec_t *pos;
    s32 r;
    a.x = 0;
    a.y = 0;
    a.z = 0;
    pos = &o->unk_204;
    r = func_ov068_02269e54(o, &a);
    if (r == 0) {
        o->unk_23a = -0x8000;
        o->unk_238 = 1;
        o->unk_251 = 0;
        func_ov003_02225ec8(o, 0x1000);
    } else if (r > 0 && r < 5) {
        Vec_t t;
        func_020e9960(&t, pos, &a);
        out->x = t.x;
        out->y = t.y;
        out->z = t.z;
        out->y = 0;
        func_ov003_0222ab68(out, out, 2);
        func_01ffca58(pos, out, pos);
        return 1;
    } else {
        o->unk_251 = 9;
        *p = 0;
    }
    return 0;
}

void func_ov068_0226a004(Obj_t *o) {
    u32 rnd;
    u32 k24b, k24c;
    Vec_t *pos;
    Vec_t *v1e0;
    Unk_ov068_0226a004_Save save;
    s32 cnt;

    k24b = o->unk_24b;
    rnd = (u8)func_02063b8c(100);
    pos = &o->unk_204;
    v1e0 = &o->unk_1e0;
    k24c = o->unk_24c;
    save.x = pos->x;
    save.y = pos->y;
    save.z = pos->z;
    func_ov003_0222d720(o);
    if (o->unk_24a != 0) {
        Vec_t *q = (Vec_t *)func_02095204(4);
        if (q != 0) {
            q = (Vec_t *)((u8 *)q + 0x5c);
            if (o->unk_238 == 1 && o->unk_24d == 8) {
                s32 v;
                if (pos->x > q->x) {
                    v = 0x2aaa;
                } else {
                    v = -0x2aaa;
                }
                o->unk_238 = 0;
                o->unk_23a = v;
                func_ov003_02225ec8(o, 0x119a);
            }
        }
    } else {
        cnt = o->unk_24f;
        if (cnt % 10 == 0 && rnd > 0x1e) {
            o->unk_24c = k24c == 0 ? 1 : 0;
        } else if (cnt % 5 == 0 && rnd > 0x1e) {
            o->unk_24b = k24b == 0 ? 1 : 0;
        }
        if (k24b != 0) {
            pos->x = pos->x + o->unk_257 * 0x30;
        } else {
            pos->x = pos->x - o->unk_257 * 0x30;
        }
        if (k24c != 0) {
            pos->y = pos->y + o->unk_257 * 0x30;
        } else {
            pos->y = pos->y - o->unk_257 * 0x30;
        }
        if (func_ov068_02269e54(o, v1e0) != 0) {
            o->unk_24b = k24b == 0 ? 1 : 0;
            pos->x = save.x;
        }
        if (func_01ffc5a4(0x15000, 0x10000) > pos->y || func_01ffc5a4(0x32000, 0x10000) < pos->y) {
            o->unk_24c = k24c == 0 ? 1 : 0;
            pos->y = save.y;
        }
    }
}

void func_ov068_0226a1a0(Obj_t *o) {
    s32 d;
    Vec_t *pos = &o->unk_204;
    Vec_t *v1e0 = &o->unk_1e0;
    void *grid = data_021c47c4;
    s32 wx;
    s32 ang;
    s32 t;
    s32 x, z;
    s32 hx, hz;
    u8 cnt;
    u16 *cell;
    Vec_t dv;

    t = 0;
    x = 0;
    z = 0;
    d = func_020e9650(pos, v1e0);
    cnt = 0;
    func_0204ee10(&x, &z, v1e0);
    wx = x;
    hz = z >> 4;
    hx = wx >> 4;
    cell = func_0204ebd8(grid, hx, hz, wx - (hx << 4), z - (hz << 4), 0);
    if (cell != 0) {
        u32 v = *cell;
        if (v == 0x500a) {
            t = 0x27ae;
        } else if (v >= 0xe3 && v <= 0xe7) {
            t = 0x191f;
        }
    }
    if (t > 0 && o->unk_24a == 0) {
        if (d > 0x266) {
            ang = func_02002bdc(pos, v1e0);
            func_ov003_0222e328(&dv, ang);
            o->unk_23a = ang;
            pos->x = pos->x + func_01ffcb0c(dv.x, 0xa000);
            pos->z = pos->z + func_01ffcb0c(dv.z, 0xa000);
        } else {
            cnt++;
        }
        if (t < pos->y - 0x19a) {
            pos->y = pos->y - 0xcd;
        } else {
            cnt++;
        }
        if (cnt >= 2) {
            o->unk_251 = 0x13;
        }
    } else {
        o->unk_21c = o->unk_21c & 0xff0f;
        o->unk_251 = 0x13;
    }
}

void func_ov068_0226a2dc(Obj_t *o, u16 *p) {
    if (func_ov003_0222e500(o, 0xa0, 0xe38) != 0) {
        s32 base = -0x8000;
        base += func_ov003_0222c620(0xc, 1);
        o->unk_240 = base;
        o->unk_251 = 0xf;
        *p = 0;
    }
}

void func_ov068_0226a320(Obj_t *o, u16 *p) {
    s16 a;
    s16 r;
    u8 k;
    Vec_t v;

    s16 a0 = o->unk_23a;
    a = a0;
    r = 0;
    if (o->unk_251 == 0xf) {
        r = a0 + o->unk_240;
    } else {
        k = 0;
        for (; k < func_02063b8c(5); k++) {
            r = r + 0xaaa;
        }
        if (func_02063b8c(100) > 0x32) {
            r = -r;
        }
        r += a;
    }
    o->unk_251 = 4;
    o->unk_23a = r;
    *p = func_02063b8c(8) + 8;
    Vec_t *pv = &o->unk_204;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    v.y = v.y + 0x100;
    func_0209028c(0x1f, &v, &a, 0);
}

void func_ov068_0226a3d4(Obj_t *o, s16 *p) {
    Vec_t *b2;
    s32 x;
    s32 z;
    Vec_t w;
    volatile Vec_t sv[1];
    Vec_t *pos;
    Vec_t *b1;
    s32 r;

    pos = &o->unk_204;
    sv[0].x = pos->x;
    sv[0].y = pos->y;
    sv[0].z = pos->z;
    b2 = &o->unk_1bc;
    b1 = &o->unk_1b0;
    x = 0;
    z = 0;
    w.x = 0;
    w.y = 0;
    w.z = 0x29;
    func_020e93a0(&w, o->unk_23a);
    o->unk_204.x = o->unk_204.x + func_01ffcb0c((*p * o->unk_257) << 12, w.x);
    pos->z = pos->z + func_01ffcb0c((*p * o->unk_257) << 12, w.z);
    *p = *p - 1;
    func_0204ee10(&x, &z, pos);
    r = func_020312a8(x, z);
    if (r != 2 || pos->x < b1->x || pos->x > b2->x || pos->z > b1->z || pos->z < b2->z) {
        s32 base = -0x8000;
        pos->x = sv[0].x;
        pos->y = sv[0].y;
        pos->z = sv[0].z;
        base += func_ov003_0222c620(0xc, 1);
        o->unk_240 = base;
        o->unk_251 = 0xf;
        *p = 0;
    } else if (*p <= 0) {
        o->unk_251 = 0x13;
        o->unk_232 = func_02063b8c(0x14) * 3;
    }
}

#pragma opt_loop_invariants off
s32 func_ov068_0226a4f0(Obj_t *o) {
    Vec_t *v1e0 = &o->unk_1e0;
    s32 t;
    u8 zlo, xhi, zhi;
    Vec_t *pos;
    void *grid;
    s32 x, z;
    u8 xlo;
    u8 i, j;
    s32 lo;
    s32 hx, hz;
    u16 *cell;

    pos = &o->unk_204;
    t = 0;
    x = 0;
    z = 0;
    grid = data_021c47c4;
    func_0204ee10(&x, &z, pos);
    lo = x - 1;
    if (lo < 0x10) {
        lo = 0x10;
    }
    xlo = lo;
    lo = z - 1;
    if (lo < 0x10) {
        lo = 0x10;
    }
    zlo = lo;
    lo = x + 1;
    if (lo > 0x50) {
        lo = 0x50;
    }
    xhi = lo;
    lo = z + 1;
    if (lo > 0x50) {
        lo = 0x50;
    }
    zhi = lo;
    for (i = xlo; i <= xhi; i++) {
        j = zlo;
        goto test0;
    loop0:
        hx = i >> 4;
        hz = j >> 4;
        cell = func_0204ebd8(grid, hx, hz, i - (hx << 4), j - (hz << 4), 0);
        if (cell != 0) {
            u32 v = *cell;
            if (v == 0x500a) {
                t = 1;
            } else if (v >= 0xe3 && v <= 0xe7) {
                t = 2;
            }
            if (t != 0) {
                func_0204ed8c(v1e0, i, j);
                if (t == 1) {
                    v1e0->z = v1e0->z + 0x59a;
                }
                o->unk_21c = o->unk_21c + 0x10;
                {
                    s32 old = o->unk_23a;
                    s32 rr = func_02002bdc(pos, v1e0);
                    o->unk_240 = rr + old;
                }
                o->unk_251 = 0xe;
                return 1;
            }
        }
        j++;
    test0:
        if (j <= zhi) goto loop0;
    }
    return 0;
}

void func_ov068_0226a618(Obj_t *o, u8 *flag, s32 a, s32 b) {
    s16 t = o->unk_254;
    s32 lim = o->unk_224;
    *flag = 0;
    if (b < 0x2000) {
        t = t + 0x19;
    } else if (b > lim || a == 0) {
        *flag = 1;
    } else if (a <= 0x3e8) {
        t = t + 1;
    } else if (a <= 0x44c) {
        t = t + 3;
    } else if (a <= 0x490) {
        t = t + 5;
    } else if (a == 0x491) {
        t = t + 8;
    } else {
        t = t + 0xf;
    }
    if (t > 0xfe) {
        t = 0xfe;
    }
    o->unk_254 = t;
}

void func_ov068_0226a6ac(Obj_t *o, u8 *fp, Vec_t *out) {
    s32 best;
    s32 d;
    Vec_t *me;
    s32 zero;
    u8 flag;
    u8 i;
    void *p;

    best = 0xfffffff;
    flag = 1;
    p = func_02095204(4);
    me = &o->unk_204;
    if (p != 0) {
        Vec_t *q = (Vec_t *)((u8 *)p + 0x5c);
        out->x = q->x;
        out->y = q->y;
        out->z = q->z;
        best = func_020e9650(out, me);
        func_ov068_0226a618(o, &flag, *(s32 *)((u8 *)p + 0x98), best);
        *fp = (*fp & flag) ? 1 : 0;
    }
    zero = 0;
    i = zero;
    for (; i < func_02081780(); i++) {
        void *e = func_02081718(i);
        if (e != 0) {
            Vec_t *q = (Vec_t *)((u8 *)e + 0x5c);
            Vec_t t;
            t.x = q->x;
            t.y = q->y;
            t.z = q->z;
            d = func_020e9650(&t, me);
            func_ov068_0226a618(o, &flag, *(s32 *)((u8 *)e + 0x98), d);
            *fp = (*fp & flag) ? 1 : zero;
            if (best > d) {
                best = d;
                out->x = t.x;
                out->y = t.y;
                out->z = t.z;
            }
        }
    }
}
}
