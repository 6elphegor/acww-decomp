#include "types.h"

// ---------------------------------------------------------------------------------------------------------------------
// Local object types, named after their constructors

struct Unk_020639bc { Unk_020639bc(); ~Unk_020639bc(); void func_0206397c(u32 a); u32 pad[0x10 / 4]; };
struct Unk_020811b0 { Unk_020811b0(); ~Unk_020811b0(); u32 pad[0x24 / 4]; };
struct Unk_02094030 { Unk_02094030(); ~Unk_02094030(); void func_020a7c3c(); u32 pad[0x20 / 4]; };

struct Unk_02002fc8 { void func_02002fc8(u32 a); s32 func_02003070(); };


extern "C" {
extern u8 data_020e416c[];
extern u8 data_021d735c[];
extern u32 data_020c7a94[];
extern u8 data_020c7a98[];
struct Unk_02021340_Pair { u32 a; u8 b; };
extern Unk_02021340_Pair data_020c7818, data_020c7808, data_020c7868, data_020c7878;
struct Unk_02021340_V { s32 v; };
struct Unk_02021340_Pair2 { Unk_02021340_V a, b; };
extern Unk_02021340_Pair2 data_020d7ca8, data_020d7cb8;
extern u8 data_020d7860[2];
extern u8 data_021dfd8c[];

void *func_02080e1c(void *p);
u16 *func_02080b74(void *p);
s32 func_02080b60(void *p);
s32 func_02080cb8(void *p);
s32 func_02080450(void *a, void *b);
void *func_02080e18(void *p);
void *func_02080ec8(void *p);
s32 func_02080dd8(void *p);
void *func_020805ac(void *p);
Unk_02002fc8 *func_020805c4(void *p);
u32 func_02003098(Unk_02002fc8 *p);
void *func_02065634(void);
void func_02080c7c(void *a, void *b);
s32 func_02067a3c(u32 a, u32 b, void *c);
u16 *func_0209409c(void *p);
s32 func_02097740(void *a, void *b);
s32 func_0209d498(void *p);
s32 func_0209d3d0(void *a, void *b, u32 c);
s32 func_0209d3a4(void *a, void *b);
s32 func_0209750c(void);
s32 func_02098750(void);
s32 func_02097edc(s32 a);
s32 func_0209888c(s32 a);
s32 func_02094058(s32 a);
void func_0202cdf4(u16 *p);
void func_0202d184(void *self, void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
s32 func_020b51a4(void);
s32 func_020b51d4(void);
s32 func_0207e334(void *p);
struct Unk_02021340_Pad { u8 pad_00[0x20]; s32 unk_20; u16 unk_24; };
Unk_02021340_Pad *func_0207e310(void *p);
s32 func_020374b0(void *p, u32 f);
void *func_0207bd3c(void *a, void *b, s32 c);
s32 func_0207bfb4(void *a, void *b);
u32 func_0207bcfc(u32 a, u32 b, u32 c);
s32 func_0207ac2c(void *a, s32 b, s32 c);
void *func_02115fb4(void *p, s32 v, u32 n);
void func_02133ef8(void *p, u32 n);
s32 func_02128930(const void *a, const void *b, u32 n);
s32 func_02063b8c(s32 n);
}

struct Unk_02021340_Map { u8 *cells; u32 w; u32 h; };
extern "C" Unk_02021340_Map *data_021c47c4;

struct Unk_02021340_Pos { s32 x, y, z; };
static inline s32 Unk_02021340_GetZ(Unk_02021340_Pos *p) { return p->z; }

// Scene object at this+0xfc: game data pointer at +0x82c
struct Unk_02021340_Scene {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ Unk_02021340_Pos pos;
    /* 0x68 */ u8 pad_68[0x82c - 0x68];
    /* 0x82c */ void *unk_82c;
};

class Unk_02021340_Base {
public:
    virtual ~Unk_02021340_Base();
    virtual void vfunc_08();
    u8 pad_04[0x38];
    /* 0x3c */ u32 unk_3c;
    u8 pad_40[0x0c];
    /* 0x4c */ void *unk_4c;
    /* 0x50 */ u8 pad_50[0x2c];
    void func_02015818(u32 a, u32 b);
    void func_0201578c(u32 a, u32 b, u32 c);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
};

class Unk_02021340 : public Unk_02021340_Base {
public:
    void *func_02021340(void **arr, s32 n);
    void *func_020213b0(void **arr, s32 n);
    void *func_020213f0(void **arr, s32 n);
    void *func_02021448(void **arr, s32 n);
    void *func_020214ec(void **arr, s32 n);
    void *func_02021564(void **arr, s32 n);
    void *func_02021610(void **arr, s32 n);
    void *func_02021684(void **arr, s32 n);
    BOOL func_020217ac();
    BOOL func_02021848();
    BOOL func_020218c4();
    BOOL func_020219cc();
    BOOL func_02021b6c();

    u8 pad_a0[0xfc - 0x7c];
    /* 0xfc */ Unk_02021340_Scene *unk_fc;
    /* 0x100 */ u8 unk_100[0x1e];
    /* 0x11e */ u8 unk_11e[2];
    /* 0x120 */ u16 unk_120;
};

extern "C" {
void *func_02021738(void *ctx, void **arr, s32 n, BOOL (*cb)(void *, void *));
BOOL func_0202138c(void *ctx, void *item);
BOOL func_020213ec(void *ctx, void *item);
BOOL func_0202142c(void *ctx, void *item);
BOOL func_020214a8(void *ctx, void *item);
BOOL func_02021548(void *ctx, void *item);
BOOL func_020215a8(void *ctx, void *item);
s32 func_020216f8(void *item);
BOOL func_02021660(void *ctx, void *item);
BOOL func_020216d4(void *ctx, void *item);
}

void *Unk_02021340::func_02021340(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_0202138c);
    if (res != NULL) {
        func_02015818((u32)func_02080e1c(res), 9);
        func_0201578c((u32)func_02080b74(res), 1, 7);
    }
    return res;
}

extern "C" BOOL func_0202138c(void *ctx, void *item) {
    if (*func_02080b74(item) != 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

void *Unk_02021340::func_020213b0(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_020213ec);
    if (res != NULL) {
        func_02015818((u32)func_02080e1c(res), 9);
    }
    return res;
}

extern "C" BOOL func_020213ec(void *ctx, void *item) {
    return TRUE;
}

void *Unk_02021340::func_020213f0(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_0202142c);
    if (res != NULL) {
        func_02015818((u32)func_02080e1c(res), 9);
    }
    return res;
}

extern "C" BOOL func_0202142c(void *ctx, void *item) {
    if (func_02080b60(item) == 1) {
        return TRUE;
    }
    return FALSE;
}

void *Unk_02021340::func_02021448(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_020214a8);
    if (res != NULL) {
        void *a = func_020805ac(unk_fc->unk_82c);
        void *b = func_02065634();
        Unk_020639bc o;
        o.func_0206397c((u32)b);
        func_02015818((u32)&o, 9);
    }
    return res;
}

extern "C" BOOL func_020214a8(void *ctx, void *item) {
    void *id = func_02080e18(item);
    BOOL r = FALSE;
    BOOL ok = FALSE;
    if (func_02080450(ctx, id) == 1) {
        ok = TRUE;
    }
    if (ok) {
        if (func_02097740(data_021d735c, id) != -1) {
            r = TRUE;
        }
    }
    return r;
}

void *Unk_02021340::func_020214ec(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_02021548);
    if (res != NULL) {
        Unk_020811b0 o;
        func_02080c7c(res, &o);
        func_02067a3c(unk_3c, 1, &o);
        func_02015818((u32)func_02080e1c(res), 9);
    }
    return res;
}

extern "C" BOOL func_02021548(void *ctx, void *item) {
    if (func_02080cb8(item) == 1) {
        return TRUE;
    }
    return FALSE;
}

void *Unk_02021340::func_02021564(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_020215a8);
    if (res != NULL) {
        func_02015818((u32)((u8 *)unk_fc->unk_82c + 0x6f6), 9);
    }
    return res;
}

extern "C" BOOL func_020215a8(void *ctx, void *item) {
    u16 *mine = (u16 *)((u8 *)ctx + 0x6f6);
    BOOL r = FALSE;
    if (func_02080450(ctx, func_02080e18(item)) != 0) {
        u16 *p = func_0209409c(func_02080e18(item));
        if (*p == *mine) {
            if (func_02128930(p + 1, mine + 1, 8) == 0) {
                r = TRUE;
            }
        }
    }
    return r;
}

extern "C" s32 func_020215f8(void *ctx, void *item) {
    return func_02080450(ctx, func_02080e18(item));
}

void *Unk_02021340::func_02021610(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_02021660);
    if (res != NULL) {
        func_02015818((u32)func_02080e1c(res), 9);
        func_02015958(func_020216f8(res), 0, 10, 0, 0);
    }
    return res;
}

extern "C" BOOL func_02021660(void *ctx, void *item) {
    if (func_02080dd8(item) <= 0 && func_020216f8(item) > 0) {
        return TRUE;
    }
    return FALSE;
}

void *Unk_02021340::func_02021684(void **arr, s32 n) {
    void *res = func_02021738(unk_fc->unk_82c, arr, n, func_020216d4);
    if (res != NULL) {
        func_02015818((u32)func_02080e1c(res), 9);
        func_02015958(func_020216f8(res), 0, 10, 0, 0);
    }
    return res;
}

extern "C" BOOL func_020216d4(void *ctx, void *item) {
    if (func_02080dd8(item) > 0 && func_020216f8(item) > 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_020216f8(void *item) {
    s32 o[3];
    o[0] = 0;
    o[1] = 0;
    void *id = func_02080ec8(item);
    s32 r = 0;
    func_0209d498(o);
    if (func_0209d3d0(id, o, 0x3f) == -1) {
        r = func_0209d3a4(id, o);
    }
    return r;
}

extern "C" void *func_02021738(void *ctx, void **arr, s32 n, BOOL (*cb)(void *, void *)) {
    s32 count = 0;
    void *result = NULL;
    u8 flags[8];
    s32 i;
    func_02115fb4(flags, count, 8);
    for (i = count; i < n; i++) {
        if (arr[i] != NULL) {
            if (cb(ctx, arr[i]) == 1) {
                flags[i] = 1;
                count++;
            }
        }
    }
    if (count > 0) {
        s32 k = func_02063b8c(count);
        for (i = 0; i < n; i++) {
            if (flags[i] == 1) {
                if (k == 0) {
                    result = arr[i];
                    break;
                }
                k--;
            }
        }
    }
    return result;
}

BOOL Unk_02021340::func_020217ac() {
    s32 t = func_0209750c();
    BOOL result = FALSE;
    if (t != 0) {
        if (func_02097edc(func_02098750()) != -1) {
            u16 v;
            func_0202cdf4(&v);
            unk_120 = v;
            if (unk_120 != 0xfff1) {
                func_0201578c((u32)&unk_120, result, 7);
                Unk_02002fc8 *o = func_020805c4(unk_fc->unk_82c);
                func_0202d184(this, unk_100, unk_11e, 30, func_02003098(o), data_020c7818.a, data_020c7818.b, result, result);
                result = TRUE;
            }
        }
    }
    return result;
}

BOOL Unk_02021340::func_02021848() {
    s32 t = 2;
    if (func_0209750c() != 0) {
        t = func_02094058(func_0209888c(func_0209750c()));
    }
    if (t >= 2) {
        t = 1;
    }
    t <<= 3;
    func_0202d184(this, unk_100, unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), *(u32 *)((u8 *)data_020c7a94 + t), *((u8 *)data_020c7a98 + t), 0, 0);
    return TRUE;
}

BOOL Unk_02021340::func_020218c4() {
    s32 t = 4;
    Unk_02021340_Map *map = data_021c47c4;
    if (func_020b51a4() != 0) {
        s32 v = func_020b51d4();
        if (v == func_0207e334(unk_fc->unk_82c)) {
            t = 3;
            goto end;
        }
    }
    if (map != NULL) {
        BOOL z = data_020e416c[0] == 0 ? TRUE : FALSE;
        if (z) {
            Unk_02021340_Scene *sc = unk_fc;
            Unk_02021340_Pos *pp = &sc->pos;
            u32 y = pp->z >> 17;
            u32 x = pp->x >> 17;
            u8 *cell;
            if (x < map->w && y < map->h && map->cells != NULL) {
                cell = map->cells + (x + y * map->w) * 0x28;
            } else {
                cell = NULL;
            }
            if (cell != NULL) {
                if (func_020374b0(cell, 0x200) == 1) {
                    t = 0;
                } else if (func_020374b0(cell, 2) == 1) {
                    t = 1;
                } else if (func_020374b0(cell, 0x800) == 1) {
                    t = 2;
                }
            }
        }
    }
end:
    func_0202d184(this, unk_100, unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7808.a, data_020c7808.b, t, 0);
    return TRUE;
}

BOOL Unk_02021340::func_020219cc() {
    s32 x, y;
    void **pa;
    char c[2];
    void *a[2];
    s32 j, i;
    s32 sel;
    func_02133ef8(a, 8);
    Unk_02021340_Pair2 b = data_020d7ca8;
    c[0] = data_020d7860[0];
    c[1] = data_020d7860[1];
    Unk_02002fc8 *d[2];
    func_02133ef8(d, 8);
    x = 0;
    y = 0;
    d[0] = func_020805c4(unk_fc->unk_82c);
    j = 1;
    for (i = 0; i < 2; i++) {
        pa = &a[i];
        a[i] = func_0207bd3c(data_021dfd8c, d, j);
        if (a[i] != NULL) {
            (&b.a)[i].v = func_0207bfb4(data_021dfd8c, func_020805c4(a[i]));
            c[i] = func_020805c4(a[i])->func_02003070();
        }
        if (j < 2) {
            if (*pa != NULL) {
                d[j] = func_020805c4(*pa);
                j++;
            }
        }
    }
    {
    Unk_02094030 o;
    Unk_02021340_Pair2 e = data_020d7cb8;
    sel = c[1];
    if (sel == 0) {
        e.a.v = 1;
        e.b.v = 0;
    }
    for (i = 0; i < 2; i++) {
        o.func_020a7c3c();
        func_020805c4(a[(&e.a)[i].v])->func_02002fc8((u32)&o);
        func_02067a3c(unk_3c, i + 7, &o);
    }
    }
    if (b.a.v != -1 && b.b.v != -1) {
        s32 r = func_0207ac2c(data_021dfd8c, b.a.v, b.b.v);
        if (r == 2) {
            x = 1;
        } else if (r > 2) {
            x = 2;
        }
        if (c[0] == sel) {
            if (c[0] == 0) {
                y = 1;
            } else {
                y = 2;
            }
        }
    }
    y *= 3;
    func_0202d184(this, unk_100, unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7868.a, data_020c7868.b, x + y, 0);
    return TRUE;
}

BOOL Unk_02021340::func_02021b6c() {
    Unk_02021340_Pad *p;
    void *ctx = unk_fc->unk_82c;
    if (ctx != NULL) {
        p = func_0207e310(ctx);
    } else {
        p = NULL;
    }
    u8 mask = 0;
    u8 cnt = 0;
    if (p != NULL && p->unk_20 >= 0) {
        s32 h = p->unk_20;
        u32 v = p->unk_24;
        if ((v & 1) != 0 || (v & 2) != 0 || (v & 4) != 0 || (v & 8) != 0 || (v & 0x10) != 0) {
            mask |= 1;
            cnt++;
        }
        if ((v & 0x20) != 0) {
            mask |= 2;
            cnt++;
        }
        if ((v & 0x40) != 0) {
            mask |= 4;
            cnt++;
        }
        if ((v & 0x80) != 0) {
            mask |= 8;
            cnt++;
        }
        if ((v & 0x100) != 0) {
            mask |= 0x10;
            cnt++;
        }
        if ((v & 0x200) != 0) {
            mask |= 0x20;
            cnt++;
        }
        if ((v & 0x400) != 0) {
            mask |= 0x40;
            cnt++;
        }
        u32 k = func_0207bcfc(mask, cnt, 7);
        if (k >= 7) {
            k = 7;
        }
        func_0202d184(this, unk_100, unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7878.a, data_020c7878.b, k, 0);
        func_02015958(h, 0, 6, 1, 0);
        return TRUE;
    }
    return FALSE;
}
