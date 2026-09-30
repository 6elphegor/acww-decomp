#include "types.h"

struct Unk_ov003_0221e4d4_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0221e4d4_Blk {
    s64 v[6];
};

typedef Unk_ov003_0221e4d4_V3 V3;
typedef Unk_ov003_0221e4d4_Blk Blk;

struct Unk_ov003_0221e4d4_Elem {
    u8 pad[0x9c];
};
typedef Unk_ov003_0221e4d4_Elem Elem;

struct Unk_ov003_0221e4d4_Model {
    u8 pad_00[0x5c];
    void *unk_5c;
};

struct Unk_ov003_0221e4d4_Obj {
    /* 0x0000 */ u8 pad_0000[0x50];
    /* 0x0050 */ Unk_ov003_0221e4d4_Model *unk_50[1];
    /* 0x0054 */ u8 pad_0054[0x3068 - 0x54];
    /* 0x3068 */ Elem unk_3068[4][8];
    /* 0x43e8 */ Elem unk_43e8[5];
    /* 0x46f4 */ u8 pad_46f4[0x4708 - 0x46f4];
    /* 0x4708 */ Elem unk_4708;
    /* 0x47a4 */ Elem unk_47a4;
    /* 0x4840 */ Elem unk_4840;
    /* 0x48dc */ Elem unk_48dc;
    /* 0x4978 */ u8 pad_4978[0x49a8 - 0x4978];
    /* 0x49a8 */ Elem unk_49a8[2];
    /* 0x4ae0 */ u8 pad_4ae0[0x4b20 - 0x4ae0];
    /* 0x4b20 */ u8 unk_4b20[0x6a6c - 0x4b20];
    /* 0x6a6c */ s32 unk_6a6c;
};
typedef Unk_ov003_0221e4d4_Obj Obj;

typedef BOOL (*Fn)();

extern "C" {
extern Obj *data_ov003_02235930;
extern void *data_ov003_02235934;
extern void *data_ov003_02235938;
extern u8 data_ov003_02235960[];
extern u8 data_ov003_022359a4[];
extern Blk data_021f47e0;
extern void *data_021f482c;
extern void *data_021f482c_v;
extern Fn data_ov003_02234264[];
extern u8 data_ov003_02234704[];
extern void *data_ov003_02232788[];
extern void *data_ov003_02232648;
extern u8 data_ov003_0222fc30[];
extern u8 data_ov003_02232630[];
extern void *data_ov003_02232634;
extern u8 data_ov003_0222fc34[];
extern u8 data_ov003_02232654[];
extern u8 data_ov003_02232650[];
extern void *data_ov003_0222f6fc[];
extern u32 data_ov003_0222f6a0[];
extern void *data_ov003_02232bd8[];
extern u8 data_ov003_02236674[];
extern u8 data_ov003_02257a74[];

s32 func_0203ef38(V3 *out, V3 *in);
void func_020e8388(Blk *m, s32 x, s32 y, s32 z);
void func_020e8434(Blk *m, s32 a);
void func_020e8464(Blk *m, s32 x, s32 y, s32 z);
void func_020e84f8(Blk *m, s32 x, s32 y, s32 z);
void func_02105f00(void *p, s32 a);
void func_020e85fc(void *heap, void *p);
void *func_020e8f58(void *p, u32 n);
void *func_020e8e7c(u32 n, void *heap);
s32 func_0204bc34(volatile u16 *p);
u32 func_0204c0ac();
void func_02045e14();
s32 func_02054bac(void *p, void *t, u8 a, u8 b);
s32 func_02054c88(void *p, void *a, void *b);
s32 func_02054c64(void *p, void *a, void *b, u32 c, u32 d, void *e, u32 f);

s32 func_ov003_0221db54(Obj *o, Unk_ov003_0221e4d4_Model *m, Blk b);
s32 func_ov003_0221db98(Obj *o, volatile u16 *t, Blk m);
s32 func_ov003_0221de24(Obj *o, volatile u16 *t, Blk m);
s32 func_ov003_0221df48(Obj *o, volatile u16 *t, Blk m);
void func_ov003_0221a310(void *t);
void func_ov003_0221a400(void *t);
void func_ov003_0221c3b4(void *t);
void func_ov003_0221c440(void *t);
void func_ov003_0221c608(void *t);
BOOL func_ov003_0221fc1c(Obj *o);
s32 func_ov003_0221fc70(Obj *o, void *a, void *b, void *c, s32 d);

s32 func_ov003_0221e7b0(Obj *o, u32 idx, V3 *a, s32 b, V3 *c, s32 d, s32 e, s32 f);
BOOL func_ov003_0221e918(Obj *o);
BOOL func_ov003_0221e954(Obj *o);
BOOL func_ov003_0221e9a8(Obj *o);
BOOL func_ov003_0221ea44(Obj *o, u32 idx);
s32 func_ov003_0221eab8(Obj *o, void *a, void *b);
BOOL func_ov003_0221eb1c(Obj *o, u32 idx);
s32 func_ov003_0221eb90(Obj *o, void *a, void *b);
void *func_ov003_0221eba8();
BOOL func_ov003_0221ec0c(Obj *o, u32 idx);
s32 func_ov003_0221ec70(Obj *o, void *a, void *b);
s32 func_ov003_0221ef9c(Obj *o, void *a, void *b);
s32 func_ov003_0221ef84(Obj *o, void *a, void *b);
s32 func_ov003_0221eef4(Obj *o, void *a, void *b);
s32 func_ov003_0221eedc(Obj *o, void *a, void *b);
s32 func_ov003_0221eec4(Obj *o, void *a, void *b);
s32 func_ov003_0221ee40(Obj *o, void *a, void *b);
s32 func_ov003_0221ede8(Obj *o);
void func_ov003_0221ed64(Obj *o, s32 *b, s32 *d, s32 *f, s32 *h);

s32 func_ov003_0221e750(Obj *o, u32 t, V3 *a, s32 b, V3 *c, s32 d, s32 e, s32 f) {
    volatile u16 type = 0xfff1;
    V3 va;
    V3 vc;
    type = t;
    va.x = a->x;
    va.y = a->y;
    va.z = a->z;
    vc.x = c->x;
    vc.y = c->y;
    vc.z = c->z;
    s32 idx = func_0204bc34(&type);
    return func_ov003_0221e7b0(o, idx, &va, b, &vc, *(s16 *)&d, *(s16 *)&e, *(s16 *)&f);
}

s32 func_ov003_0221e7b0(Obj *o, u32 idx, V3 *a, s32 b, V3 *c, s32 d, s32 e, s32 f) {
    Unk_ov003_0221e4d4_Model *m = o->unk_50[idx];
    V3 t;
    s32 ang = func_0203ef38(&t, a);
    func_020e8388(&data_021f47e0, t.x, t.y, t.z);
    func_020e8434(&data_021f47e0, ang);
    func_020e8464(&data_021f47e0, *(s16 *)&d, *(s16 *)&e, *(s16 *)&f);
    func_020e84f8(&data_021f47e0, c->x, c->y, c->z);
    func_02105f00(m->unk_5c, b);
    func_ov003_0221db54(o, m, data_021f47e0);
    return (s32)m;
}

BOOL func_ov003_0221e848(Obj *o) {
    func_ov003_0221a310(data_ov003_022359a4);
    func_ov003_0221c3b4(o->unk_4b20);
    return TRUE;
}

BOOL func_ov003_0221e86c(Obj *o) {
    BOOL r = FALSE;
    if (data_ov003_02235934 == NULL) {
        data_ov003_02235934 = func_020e8f58(data_ov003_02236674, (u32)data_ov003_02257a74 - (u32)data_ov003_02236674);
    }
    if (data_ov003_02235938 == NULL) {
        data_ov003_02235938 = func_020e8e7c(0x8c00, data_021f482c);
    }
    if (func_ov003_0221fc1c(o)) {
        data_ov003_02235930 = o;
        if (func_ov003_0221e918(o)) {
            o->unk_6a6c = 0;
            func_ov003_0221c440(o->unk_4b20);
            func_ov003_0221c608(data_ov003_02235960);
            func_ov003_0221a400(data_ov003_022359a4);
            func_02045e14();
            r = TRUE;
        } else {
            data_ov003_02235930 = NULL;
        }
    }
    return r;
}

BOOL func_ov003_0221e918(Obj *o) {
    s32 i;
    for (i = 0; i < 9; i++) {
        if (!data_ov003_02234264[i]()) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL func_ov003_0221e944() {
    return func_ov003_0221e954(data_ov003_02235930);
}

BOOL func_ov003_0221e954(Obj *o) {
    Elem *p = &o->unk_3068[0][0];
    s32 i;
    u32 j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 8; j++) {
            if (!func_02054bac(p, data_ov003_02234704, i, j)) {
                return FALSE;
            }
            p++;
        }
    }
    return TRUE;
}

BOOL func_ov003_0221e9a0(Obj *o) {
    return func_ov003_0221e9a8(o);
}

BOOL func_ov003_0221e9a8(Obj *o) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (!func_02054c88(&data_ov003_02235930->unk_49a8[i], data_ov003_02232788[i], data_ov003_02235938)) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL func_ov003_0221e9f8() {
    BOOL r = FALSE;
    void *a = NULL;
    void *b = NULL;
    if (func_ov003_0221eab8(data_ov003_02235930, &a, &b)) {
        if (func_ov003_0221ea44(data_ov003_02235930, (u32)a)) {
            r = TRUE;
        }
    }
    if (b != NULL) {
        func_020e85fc(data_021f482c, b);
    }
    return r;
}

BOOL func_ov003_0221ea44(Obj *o, u32 idx) {
    void *m = func_ov003_0221eba8();
    if (func_02054c64(&o->unk_4840, data_ov003_02232648, data_ov003_02235934, 0, idx, &m, 1) == 0) {
        return FALSE;
    }
    if (func_02054c64(&o->unk_48dc, data_ov003_02232648, data_ov003_02235934, 0, idx, data_ov003_0222fc30, 1)) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov003_0221eab8(Obj *o, void *a, void *b) {
    return func_ov003_0221fc70(o, a, b, data_ov003_02232630, 1);
}

BOOL func_ov003_0221ead0() {
    BOOL r = FALSE;
    void *a = NULL;
    void *b = NULL;
    if (func_ov003_0221eb90(data_ov003_02235930, &a, &b)) {
        if (func_ov003_0221eb1c(data_ov003_02235930, (u32)a)) {
            r = TRUE;
        }
    }
    if (b != NULL) {
        func_020e85fc(data_021f482c, b);
    }
    return r;
}

BOOL func_ov003_0221eb1c(Obj *o, u32 idx) {
    void *m = func_ov003_0221eba8();
    if (func_02054c64(&o->unk_4708, data_ov003_02232634, data_ov003_02235934, 0, idx, &m, 1) == 0) {
        return FALSE;
    }
    if (func_02054c64(&o->unk_47a4, data_ov003_02232634, data_ov003_02235934, 0, idx, data_ov003_0222fc34, 1)) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov003_0221eb90(Obj *o, void *a, void *b) {
    return func_ov003_0221fc70(o, a, b, data_ov003_02232654, 1);
}

void *func_ov003_0221eba8() {
    return data_ov003_0222f6fc[func_0204c0ac()];
}

BOOL func_ov003_0221ebc0() {
    BOOL r = FALSE;
    void *a = NULL;
    void *b = NULL;
    if (func_ov003_0221ec70(data_ov003_02235930, &a, &b)) {
        if (func_ov003_0221ec0c(data_ov003_02235930, (u32)a)) {
            r = TRUE;
        }
    }
    if (b != NULL) {
        func_020e85fc(data_021f482c, b);
    }
    return r;
}

BOOL func_ov003_0221ec0c(Obj *o, u32 idx) {
    s32 i;
    volatile s32 z;
    u32 n = func_0204c0ac();
    i = 0;
    u32 *p = &data_ov003_0222f6a0[n];
    z = 0;
    for (; i < 5; i++) {
        if (!func_02054c64(&o->unk_43e8[i], data_ov003_02232bd8[i], data_ov003_02235934, z, idx, p, 1)) {
            return FALSE;
        }
    }
    return TRUE;
}

s32 func_ov003_0221ec70(Obj *o, void *a, void *b) {
    return func_ov003_0221fc70(o, a, b, data_ov003_02232650, 1);
}

BOOL func_ov003_0221ec88() {
    BOOL r5 = FALSE, r4 = FALSE;
    void *A[4], *B[4], *C[4], *D[4];
    void *E[2], *F[2], *G[2], *H[2];
    s32 i, j;
    for (i = 0; i < 4; i++) {
        A[i] = NULL;
        B[i] = NULL;
        C[i] = NULL;
        D[i] = NULL;
    }
    for (j = 0; j < 2; j++) {
        E[j] = NULL;
        F[j] = NULL;
        G[j] = NULL;
        H[j] = NULL;
    }
    if (func_ov003_0221ef9c(data_ov003_02235930, A, B)) {
        if (func_ov003_0221ef84(data_ov003_02235930, C, D)) {
            if (func_ov003_0221eef4(data_ov003_02235930, A, C)) {
                r5 = TRUE;
            }
        }
    }
    if (func_ov003_0221eedc(data_ov003_02235930, E, F)) {
        if (func_ov003_0221eec4(data_ov003_02235930, G, H)) {
            if (func_ov003_0221ee40(data_ov003_02235930, E, G)) {
                r4 = TRUE;
            }
        }
    }
    func_ov003_0221ed64(data_ov003_02235930, (s32 *)B, (s32 *)D, (s32 *)F, (s32 *)H);
    s32 r = func_ov003_0221ede8(data_ov003_02235930);
    if (r5 && r4 && r) {
        return TRUE;
    }
    return FALSE;
}

void func_ov003_0221ed64(Obj *o, s32 *b, s32 *d, s32 *f, s32 *h) {
    void *heap = data_021f482c;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*b != 0) {
            func_020e85fc(heap, (void *)*b);
            *b = 0;
        }
        if (*d != 0) {
            func_020e85fc(heap, (void *)*d);
            *d = 0;
        }
        b++;
        d++;
    }
    for (i = 0; i < 2; i++) {
        if (*f != 0) {
            func_020e85fc(heap, (void *)*f);
            *f = 0;
        }
        if (*h != 0) {
            func_020e85fc(heap, (void *)*h);
            *h = 0;
        }
        f++;
        h++;
    }
}

static inline BOOL Unk_ov003_0221e4d4_Chk1(volatile u16 *p) {
    BOOL r = TRUE;
    BOOL f = FALSE;
    u32 a = *p;
    u32 v = *p;
    if (v >= 0xd4 && a <= 0xda) {
        f = TRUE;
    }
    if (!f) {
        if (a < 0xdb || a > 0xe1) {
            r = FALSE;
        }
    }
    return r;
}

static inline s32 Unk_ov003_0221e4d4_Kind(volatile u16 *p) {
    u32 v = *p;
    return (v & 0xf000) >> 12;
}

static inline BOOL Unk_ov003_0221e4d4_Chk4(u32 a) {
    BOOL f = FALSE;
    u16 x = a + 0xffe6;
    if (x <= 4) {
        if ((1 << x) & 0x1b) {
            f = TRUE;
        }
    }
    return f;
}

static inline BOOL Unk_ov003_0221e4d4_Chk9(u32 a) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = FALSE;
    if (a <= 5) {
        f2 = TRUE;
    }
    if (!f2) {
        if (a < 6 || a > 0xb) {
            f3 = FALSE;
        }
    }
    if (!f3) {
        if (a < 0xc || a > 0x11) {
            f4 = FALSE;
        }
    }
    if (!f4) {
        if ((a < 0x12 || a > 0x19) && a != 0x1c) {
            f5 = FALSE;
        }
    }
    if (!f5) {
        if ((a < 0x8a || a > 0x8f) && (a < 0x90 || a > 0x95) && (a < 0x96 || a > 0x9b) && (a < 0x9c || a > 0xa3) && a != 0xa5) {
            f6 = FALSE;
        }
    }
    if (!f6) {
        if (a != 0x1a) {
            f7 = FALSE;
        }
    }
    if (!f7) {
        if (a != 0xa4) {
            f8 = FALSE;
        }
    }
    if (!f8) {
        if (a != 0x1d) {
            f9 = FALSE;
        }
    }
    return f9;
}

void func_ov003_0221e4d4(Obj *o, u32 t, V3 *pos, V3 *scale, s32 rx, s32 ry, s32 rz) {
    s32 idx;
    BOOL f9, f8, f7, f6, f5, f4, f3, f2;
    u32 a;
    volatile u16 type = 0xfff1;
    V3 v;
    type = t;
    s32 ang = func_0203ef38(&v, pos);
    func_020e8388(&data_021f47e0, v.x, v.y, v.z);
    func_020e8434(&data_021f47e0, ang);
    func_020e8464(&data_021f47e0, *(s16 *)&rx, *(s16 *)&ry, *(s16 *)&rz);
    func_020e84f8(&data_021f47e0, scale->x, scale->y, scale->z);
    if (Unk_ov003_0221e4d4_Chk1(&type)) {
        u16 u = t - 0xd4;
        u16 nv;
        if (u < 7) {
            nv = u + 0x153b;
        } else {
            nv = 0x153b;
        }
        type = nv;
    } else if (t == 0x20) {
        type = 0x156a;
    }
    a = type;
    s32 k = (type & 0xf000) >> 12;
    switch (k) {
    case 0:
        BOOL c4 = FALSE;
        u16 x = a + 0xffe6;
        if (x <= 4) {
            if ((1 << x) & 0x1b) {
                c4 = TRUE;
            }
        }
        if (!c4) {
            if (a != 0x88 && a != 0x89) {
                goto rest;
            }
        }
        func_ov003_0221de24(o, &type, data_021f47e0);
        break;
    rest:
        f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = FALSE;
        if (a <= 5) {
            f2 = TRUE;
        }
        if (!f2) {
            if (a < 6 || a > 0xb) {
                f3 = FALSE;
            }
        }
        if (!f3) {
            if (a < 0xc || a > 0x11) {
                f4 = FALSE;
            }
        }
        if (!f4) {
            if ((a < 0x12 || a > 0x19) && a != 0x1c) {
                f5 = FALSE;
            }
        }
        if (!f5) {
            if ((a < 0x8a || a > 0x8f) && (a < 0x90 || a > 0x95) && (a < 0x96 || a > 0x9b) && (a < 0x9c || a > 0xa3) && a != 0xa5) {
                f6 = FALSE;
            }
        }
        if (!f6) {
            if (a != 0x1a) {
                f7 = FALSE;
            }
        }
        if (!f7) {
            if (a != 0xa4) {
                f8 = FALSE;
            }
        }
        if (!f8) {
            if (a != 0x1d) {
                f9 = FALSE;
            }
        }
        if (f9) {
            func_ov003_0221df48(o, &type, data_021f47e0);
        } else if (a >= 0xa7 && a <= 0xc6) {
            func_ov003_0221db98(o, &type, data_021f47e0);
        }
        break;
    case 1:
    case 3:
    case 4:
        idx = func_0204bc34(&type);
        func_ov003_0221db54(o, o->unk_50[idx], data_021f47e0);
        break;
    case 2:
        break;
    }
}
}
