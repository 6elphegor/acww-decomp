#include "types.h"

struct Unk_02062f94_Obj {
    u32 v[2];
    Unk_02062f94_Obj(s32 a, s32 b);
    Unk_02062f94_Obj(const Unk_02062f94_Obj &o) { v[0] = o.v[0]; v[1] = o.v[1]; }
    ~Unk_02062f94_Obj();
};

struct Unk_020626cc_Entry {
    void *fn_00;
    void *fn_04;
    s32 (*fn_08)(u16 *);
    u32 unk_0c;
    s32 (*fn_10)(u16 *);
};

class Unk_02062ad4_Rng {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u32 vfunc_0c(u32 n);
};

extern "C" {
void *__cxa_vec_ctor(void *, u32, u32, void (*)(void *), void (*)(void *));
void __cxa_vec_cleanup(void *, u32, u32, void (*)(void *));
void func_0203442c(void *);
void func_02004b60(void *);
u32 func_02063600(s32 k);
void func_02063388(Unk_02062f94_Obj *);
void func_0206338c(Unk_02062f94_Obj *, s32, s32);
void func_0206277c(u16 *out, s32 a, Unk_02062ad4_Rng *rng);
void func_02063558(void *);
void func_0206354c(void *);
BOOL func_0204b300(u16 *p);
s32 func_0204b820(u16 *p);
BOOL func_0204b858(u16 *p);
s32 func_02061e0c(u16 *p);
s32 func_0205327c(u16 *p);
void *func_020986c8(void *);
BOOL func_0203c4cc(void *, u16 *);

BOOL func_0204b2d4(u16 *p);
void func_02062fd4(u16 *, s32, Unk_02062f94_Obj *, s32, s32, s32, s32, s32, s32);
void *func_02063570(void *, s32);
s32 func_02063654(void *, u32, s32);

extern Unk_020626cc_Entry data_020cb640[];
extern u32 data_020cb620[];
extern u8 data_021d7350[];

u8 func_0206269c(u8 *p);
u8 func_020626a0(u8 *p);
u8 func_020626a4(u8 *p);
BOOL func_020626a8(u16 *p);
s32 func_020626cc(u16 *p, s32 mode);
s32 func_02062744(u16 *p);
void func_02062f44(u16 *out, Unk_02062f94_Obj *o);
void func_02062ad4(u16 *out, s32 base, u32 cnt, u16 *list, u32 listLen, void *a5, s32 a6, s32 a7, Unk_02062ad4_Rng *rng, s32 a9);
BOOL func_02062e90(u16 *arr, u32 n, s32 base, u32 cnt, void *a4, s32 a5, s32 a6, Unk_02062ad4_Rng *a7, s32 a8);
s32 func_0204b25c(u16 *p);
void func_02062f70(u16 *out, s32 one, Unk_02062f94_Obj *o, s32 a, s32 b, u8 c, s32 d, s32 e);
void func_02062f94(u16 *out, Unk_02062f94_Obj *o, s32 a, s32 b, u8 c, s32 d, s32 e);

u8 func_0206269c(u8 *p) { return p[8]; }
u8 func_020626a0(u8 *p) { return p[9]; }
u8 func_020626a4(u8 *p) { return p[10]; }

BOOL func_020626a8(u16 *p) {
    if (func_0204b2d4(p)) {
        if (func_020626cc(p, 0) == 4) return TRUE;
    }
    return FALSE;
}

s32 func_02062744(u16 *p) {
    u32 i;
    for (i = 0; i < 9; i++) {
        if (data_020cb640[i].fn_10(p)) return i;
    }
    return 9;
}

s32 func_020626cc(u16 *p, s32 mode) {
    s32 idx = func_02062744(p);
    if (idx != 9) {
        u8 *g = data_021d7350;
        Unk_020626cc_Entry *t = data_020cb640 + idx;
        s32 v = (t->fn_08)(p);
        if (mode != 0) return v;
        {
            void *base = func_02063570(g + 0x15fbc, idx);
            s32 z = 0;
            for (u32 i = 0; i < 3; i++) {
                if (v == func_02063654(base, ((volatile u32 *)data_020cb620)[i], z)) return ((volatile u32 *)data_020cb620)[i];
            }
        }
        return v;
    }
    return 0x18;
}

void func_02062f44(u16 *out, Unk_02062f94_Obj *o) {
    Unk_02062f94_Obj t = *o;
    func_02062f94(out, &t, 0, 0, 1, 0, 0);
}

void func_02062f70(u16 *out, s32 one, Unk_02062f94_Obj *o, s32 a, s32 b, u8 c, s32 d, s32 e) {
    func_02062fd4(out, one, o, 1, a, b, c, d, e);
}

void func_02062f94(u16 *out, Unk_02062f94_Obj *o, s32 a, s32 b, u8 c, s32 d, s32 e) {
    *out = 0xfff1;
    Unk_02062f94_Obj t = *o;
    func_02062f70(out, 1, &t, a, b, c, d, e);
}

void func_02062ad4(u16 *out, s32 base, u32 cnt, u16 *list, u32 listLen, void *a5, s32 a6, s32 a7, Unk_02062ad4_Rng *rng, s32 a9) {
    u16 v[4];
    u32 dflt[2];
    s32 step;
    func_02063558(dflt);
    Unk_02062ad4_Rng *obj;
    if (rng != 0) obj = rng;
    else obj = (Unk_02062ad4_Rng *)dflt;
    v[0] = base;
    step = func_0204b2d4(&v[0]) ? 2 : 0;
    u32 count = 0;
    {
        BOOL r = FALSE;
        if (v[0] >= 0x450c && v[0] <= 0x45db) r = TRUE;
        if (r || (v[0] >= 0x45dc && v[0] <= 0x47d7) || (v[0] >= 0x1323 && v[0] <= 0x1368)) a9 = 0;
    }
    u32 i = 0;
    BOOL z40, z3c;
    BOOL z2c = FALSE, z34 = FALSE, z38 = FALSE;
    z3c = FALSE;
    z40 = FALSE;
    BOOL z44 = FALSE;
    for (; i < cnt; i++) {
        v[2] = base + (i << step);
        BOOL found = z2c;
        u32 j = z2c;
        for (; j < listLen; j++) {
            BOOL m;
            if (func_0204b2d4(&v[2])) {
                m = func_0204b25c(&v[2]) == func_0204b25c(list + j) ? TRUE : z34;
            } else {
                m = v[2] == list[j] ? TRUE : z38;
            }
            if (m) {
                found = TRUE;
                break;
            }
        }
        if (found) continue;
        BOOL r = z3c;
        if (v[2] >= 0x11a8 && v[2] <= 0x12a7) r = TRUE;
        BOOL ok;
        if (r) {
            if (a7 == 10) ok = TRUE;
            else if (a7 == func_0204b820(&v[2])) ok = TRUE; else ok = z40;
        } else {
            ok = TRUE;
        }
        if (!ok) continue;
        s32 t = z44;
        if (func_0204b300(&v[2])) t = func_02061e0c(&v[2]);
        else if (func_0204b2d4(&v[2])) t = func_0205327c(&v[2]);
        if (t == 0x19 || t == 0x18) continue;
        if (a9 && func_0204b858(&v[2])) continue;
        if (a5) {
            if (a6) {
                if (func_0203c4cc(func_020986c8(a5), &v[2])) count++;
            } else {
                if (!func_0203c4cc(func_020986c8(a5), &v[2])) count++;
            }
        } else {
            count++;
        }
    }
    BOOL flag = FALSE;
    if (count == 0) {
        if (a5) {
            *out = 0xfff1;
            func_0206354c(dflt);
            return;
        }
        flag = TRUE;
        count = cnt;
    }
    u32 pick = obj->vfunc_0c(count);
    u32 idx = 0;
    u32 i2 = 0;
    BOOL z5c, z58;
    BOOL z48 = FALSE, z50 = FALSE, z54 = FALSE;
    z58 = FALSE;
    z5c = FALSE;
    BOOL z60 = FALSE;
    for (; i2 < cnt; i2++) {
        v[3] = base + (i2 << step);
        BOOL found = z48;
        if (!flag) {
            u32 j = z48;
            for (; j < listLen; j++) {
                BOOL m;
                if (func_0204b2d4(&v[3])) {
                    m = func_0204b25c(&v[3]) == func_0204b25c(list + j) ? TRUE : z50;
                } else {
                    m = v[3] == list[j] ? TRUE : z54;
                }
                if (m) {
                    found = TRUE;
                    break;
                }
            }
        }
        if (found) continue;
        BOOL r = z58;
        if (v[3] >= 0x11a8 && v[3] <= 0x12a7) r = TRUE;
        BOOL ok;
        if (r) {
            if (a7 == 10) ok = TRUE;
            else if (a7 == func_0204b820(&v[3])) ok = TRUE; else ok = z5c;
        } else {
            ok = TRUE;
        }
        if (!ok) continue;
        s32 t = z60;
        if (func_0204b300(&v[3])) t = func_02061e0c(&v[3]);
        else if (func_0204b2d4(&v[3])) t = func_0205327c(&v[3]);
        if (t == 0x19 || t == 0x18) continue;
        if (a9 && func_0204b858(&v[3])) continue;
        if (a5) {
            if (a6) {
                if (func_0203c4cc(func_020986c8(a5), &v[3])) {
                    if (pick == idx) {
                        *out = v[3];
                        func_0206354c(dflt);
                        return;
                    }
                    idx++;
                }
            } else {
                if (!func_0203c4cc(func_020986c8(a5), &v[3])) {
                    if (pick == idx) {
                        *out = v[3];
                        func_0206354c(dflt);
                        return;
                    }
                    idx++;
                }
            }
        } else {
            if (pick == idx) {
                *out = v[3];
                func_0206354c(dflt);
                return;
            }
            idx++;
        }
    }
    *out = 0xfff1;
    func_0206354c(dflt);
}

BOOL func_02062e90(u16 *arr, u32 n, s32 base, u32 cnt, void *a4, s32 a5, s32 a6, Unk_02062ad4_Rng *a7, s32 a8) {
    BOOL result = TRUE;
    BOOL t1 = TRUE, f1 = FALSE, t2 = TRUE, f2 = FALSE, f3 = FALSE;
    u16 tmp[2];
    for (u32 i = 0; i < n; i++) {
        func_02062ad4(&tmp[0], base, cnt, arr, i, a4, a5, a6, a7, a8);
        u16 *p = arr + i;
        *p = tmp[0];
        BOOL c;
        if (func_0204b2d4(p)) {
            tmp[1] = 0xfff1;
            c = func_0204b25c(p) == func_0204b25c(&tmp[1]) ? t1 : f1;
        } else {
            c = *p == 0xfff1 ? t2 : f2;
        }
        if (c) result = f3;
    }
    return result;
}

static inline BOOL Unk_0206277c_Bad1(u16 *p, u16 *e) {
    BOOL r;
    if (func_0204b2d4(p)) {
        *e = 0xfff1;
        if (func_0204b25c(p) == func_0204b25c(e)) r = TRUE;
        else r = FALSE;
    } else {
        if (*p == 0xfff1) r = TRUE;
        else r = FALSE;
    }
    return r;
}

static inline BOOL Unk_0206277c_Bad2(u16 *p, u16 *e) {
    BOOL r;
    if (func_0204b2d4(p)) {
        *e = 0xfff1;
        s32 x = func_0204b25c(p);
        if (x == func_0204b25c(e)) r = TRUE;
        else r = FALSE;
    } else {
        if (*p == 0xfff1) r = TRUE;
        else r = FALSE;
    }
    return r;
}

void func_0206277c(u16 *out, s32 a, Unk_02062ad4_Rng *rng) {
    u16 t0, t1, t2, t3, t4, t5, t6, t7, t8;
    u16 e1, e2;
    u32 dflt[1];
    func_02063558(dflt);
    Unk_02062ad4_Rng *obj;
    if (rng != 0) obj = rng;
    else obj = (Unk_02062ad4_Rng *)dflt;
    u8 mask[3] = {1, 1, 1};
    u16 h[9];
    __cxa_vec_ctor(h, 9, 2, func_0203442c, func_02004b60);
    {
        Unk_02062f94_Obj o(0, 1);
        func_02062f94(&t0, &o, a, (s32)rng, 1, 1, 0);
        h[0] = t0;
    }
    {
        Unk_02062f94_Obj o(4, 1);
        func_02062f94(&t1, &o, a, (s32)rng, 1, 1, 0);
        h[1] = t1;
    }
    {
        Unk_02062f94_Obj o(3, 1);
        func_02062f94(&t2, &o, a, (s32)rng, 1, 1, 0);
        h[2] = t2;
    }
    {
        Unk_02062f94_Obj o(0, 2);
        func_02062f94(&t3, &o, a, (s32)rng, 1, 1, 0);
        h[3] = t3;
    }
    {
        Unk_02062f94_Obj o(4, 2);
        func_02062f94(&t4, &o, a, (s32)rng, 1, 1, 0);
        h[4] = t4;
    }
    {
        Unk_02062f94_Obj o(3, 2);
        func_02062f94(&t5, &o, a, (s32)rng, 1, 1, 0);
        h[5] = t5;
    }
    {
        Unk_02062f94_Obj o(0, 3);
        func_02062f94(&t6, &o, a, (s32)rng, 1, 1, 0);
        h[6] = t6;
    }
    {
        Unk_02062f94_Obj o(4, 3);
        func_02062f94(&t7, &o, a, (s32)rng, 1, 1, 0);
        h[7] = t7;
    }
    {
        Unk_02062f94_Obj o(3, 3);
        func_02062f94(&t8, &o, a, (s32)rng, 1, 1, 0);
        h[8] = t8;
    }
    u32 idx;
    u32 count;
    u32 pick;
    u32 acc;
    u32 pick2;
    u32 j;
    u32 cnt;
    u32 k;
    for (;;) {
        count = 0;
        for (k = 0; k < 3; k++) {
            if (mask[k]) count += func_02063600(k);
        }
        if (count == 0) break;
        pick = obj->vfunc_0c(count);
        acc = 0;
        for (k = 0; k < 3; k++) {
            if (mask[k]) {
                acc += func_02063600(k);
                if (pick < acc) {
                    cnt = 0;
                    j = 0;
                    for (; j < 3; j++) {
                        if (!Unk_0206277c_Bad1((u16 *)((u8 *)h + k * 6 + j * 2), &e1)) cnt++;
                    }
                    if (cnt == 0) {
                        mask[k] = 0;
                        goto next;
                    }
                    pick2 = obj->vfunc_0c(cnt);
                    idx = 0;
                    for (j = 0; j < 3; j++) {
                        u16 *p = (u16 *)((u8 *)h + k * 6 + j * 2);
                        if (!Unk_0206277c_Bad2(p, &e2)) {
                            if (idx == pick2) {
                                *out = *p;
                                __cxa_vec_cleanup(h, 9, 2, func_02004b60);
                                func_0206354c(dflt);
                                return;
                            }
                            idx++;
                        }
                    }
                }
            }
        }
    next:;
    }
    *out = 0xfff1;
    __cxa_vec_cleanup(h, 9, 2, func_02004b60);
    func_0206354c(dflt);
}
}
