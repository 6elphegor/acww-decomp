#include "types.h"

struct Unk_ov003_0221efb4_Elem {
    u8 pad[0x9c];
};
typedef Unk_ov003_0221efb4_Elem Elem;

struct Unk_ov003_0221f674_Seg {
    u8 pad_00[8];
    Elem e;
    u8 pad_a4[0x14c - 0xa4];
};
typedef Unk_ov003_0221f674_Seg Seg;

struct Unk_ov003_0221efb4_Obj {
    /* 0x0000 */ u8 pad_0000[0x174];
    /* 0x0174 */ Elem unk_174[3][6];
    /* 0x0c6c */ Elem unk_c6c[6];
    /* 0x1014 */ Elem unk_1014[3];
    /* 0x11e8 */ Elem unk_11e8[6];
    /* 0x1590 */ Elem unk_1590[4][10];
    /* 0x2df0 */ Elem unk_2df0[2][2];
    /* 0x3060 */ void *unk_3060[2];
    /* 0x3068 */ u8 pad_3068[0x4af0 - 0x3068];
    /* 0x4af0 */ u8 unk_4af0[0x10];
    /* 0x4b00 */ u8 pad_4b00[0x4b20 - 0x4b00];
    /* 0x4b20 */ Seg unk_4b20[3][4];
    /* 0x5ab0 */ Seg unk_5ab0[4];
    /* 0x5fe0 */ u8 pad_5fe0[0x63c4 - 0x5fe0];
    /* 0x63c4 */ Seg unk_63c4[4];
};
typedef Unk_ov003_0221efb4_Obj Obj;

extern "C" {
extern Obj *data_ov003_02235930;
extern void *data_ov003_02235934;
extern void *data_021f482c;
extern u8 data_ov003_02234718[];
extern void *data_ov003_02232720[];
extern void *data_ov003_022326e8[];
extern void *data_ov003_02232a28[];
extern u32 data_ov003_0222f4a8[];
extern u8 data_ov003_02232a48[];
extern u8 data_ov003_02232778[];
extern u8 data_ov003_02232a18[];
extern u8 data_ov003_02232bc8[];
extern u8 data_ov003_0222f758[];
extern void *data_ov003_0223264c;

s32 func_020549e4(void *t, void *file, void *heap);
void *func_020549ac(void *t, void *name);
s32 func_02054c64(void *p, void *a, void *b, u32 c, u32 d, void *e, u32 f);
u32 func_0204c0ac();
void func_020e85fc(void *heap, void *p);

s32 func_ov003_0221fc70(Obj *o, void *a, void *b, void *c, s32 d);
s32 func_ov003_0221fcd4(Obj *o, void *a, void *b, void *c, s32 d);
s32 func_ov003_0221f9ec(Obj *o, u32 *a, u32 *b);
s32 func_ov003_0221f90c(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d);
s32 func_ov003_0221f9b0(Obj *o, u32 *a, u32 *b);
s32 func_ov003_0221f8c8(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d);
s32 func_ov003_0221f98c(Obj *o, u32 *a, u32 *b);
s32 func_ov003_0221f8a4(Obj *o, u32 *a, u32 *b);
s32 func_ov003_0221f950(Obj *o, u32 *a, u32 *b);
s32 func_ov003_0221f828(Obj *o, u32 *a, u32 *b, void *c);
s32 func_ov003_0221f7e0(Obj *o, u32 *a, u32 *b, void *c);
s32 func_ov003_0221f798(Obj *o, u32 *a, u32 *b, void *c);
void *func_ov003_0221fa88(Obj *o, u32 i);
void *func_ov003_0221fac8(Obj *o, u32 i);
void *func_ov003_0221fa68(Obj *o, u32 i);
void *func_ov003_0221faa8(Obj *o, u32 i);
void *func_ov003_0221fae8(Obj *o, u32 i, u32 j);
void *func_ov003_0221fb04(Obj *o, u32 i, u32 j);
s32 func_ov003_0221fb20(Obj *o, u32 i);

BOOL func_ov003_0221ede8(Obj *o);
BOOL func_ov003_0221ee40(Obj *o, u32 *a, u32 *b);
s32 func_ov003_0221eec4(Obj *o, void *a, void *b);
s32 func_ov003_0221eedc(Obj *o, void *a, void *b);
BOOL func_ov003_0221eef4(Obj *o, u32 *a, u32 *b);
s32 func_ov003_0221ef84(Obj *o, void *a, void *b);
s32 func_ov003_0221ef9c(Obj *o, void *a, void *b);
BOOL func_ov003_0221efb4();
void func_ov003_0221f1cc(Obj *o, void **a, void **b, void **c);
void func_ov003_0221f224(Obj *o, void **a, void **b);
void func_ov003_0221f258(Obj *o, void **a, void **b, void **c);
void func_ov003_0221f2b0(Obj *o, void **a, void **b, void **c);
void func_ov003_0221f328(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d);
void func_ov003_0221f33c(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d, u32 *e, u32 *f);
void func_ov003_0221f360(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d, u32 *e, u32 *f);
BOOL func_ov003_0221f3a8(Obj *o, u32 *a, u32 *b, void *c);
BOOL func_ov003_0221f3f0(Obj *o, u32 *a, u32 *b, void *c);
BOOL func_ov003_0221f438(Obj *o, u32 *a, u32 *b, void *c);
BOOL func_ov003_0221f4b4(Obj *o, u32 *a, u32 *b, void *c);
BOOL func_ov003_0221f564(Obj *o, u32 *a, u32 *b);
BOOL func_ov003_0221f5c4(Obj *o, u32 *a, u32 *b, void *c);
BOOL func_ov003_0221f674(Obj *o, u32 *a, u32 *b, void *c);
}

extern "C" BOOL func_ov003_0221ede8(Obj *o)
{
    BOOL r = FALSE;
    if (func_020549e4(o->unk_4af0, data_ov003_02234718, data_ov003_02235934)) {
        s32 i;
        for (i = 0; i < 2; i++) {
            o->unk_3060[i] = func_020549ac(o->unk_4af0, data_ov003_02232720[i]);
        }
        r = TRUE;
    }
    return r;
}

extern "C" BOOL func_ov003_0221ee40(Obj *o, u32 *a, u32 *b)
{
    s32 i;
    for (i = 0; i < 2; a++, b++, i++) {
        s32 j;
        for (j = 0; j < 2; j++) {
            if (!func_02054c64(&o->unk_2df0[i][j], data_ov003_022326e8[i], data_ov003_02235934, *a, *b, &j, 1)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

extern "C" s32 func_ov003_0221eec4(Obj *o, void *a, void *b)
{
    return func_ov003_0221fc70(o, a, b, data_ov003_02232a48, 2);
}

extern "C" s32 func_ov003_0221eedc(Obj *o, void *a, void *b)
{
    return func_ov003_0221fcd4(o, a, b, data_ov003_02232778, 2);
}

extern "C" BOOL func_ov003_0221eef4(Obj *o, u32 *a, u32 *b)
{
    s32 i;
    for (i = 0; i < 4; a++, b++, i++) {
        s32 j = 0;
        void **pname = &data_ov003_02232a28[i];
        Elem *base = o->unk_1590[i];
        s32 n = data_ov003_0222f4a8[i];
        for (; j < n; j++) {
            if (!func_02054c64(&base[j], *pname, data_ov003_02235934, *a, *b, &j, 1)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

extern "C" s32 func_ov003_0221ef84(Obj *o, void *a, void *b)
{
    return func_ov003_0221fc70(o, a, b, data_ov003_02232a18, 4);
}

extern "C" s32 func_ov003_0221ef9c(Obj *o, void *a, void *b)
{
    return func_ov003_0221fcd4(o, a, b, data_ov003_02232bc8, 4);
}

extern "C" BOOL func_ov003_0221efb4()
{
    u32 idx = func_0204c0ac();
    u8 *p;
    BOOL r7 = FALSE, r4 = FALSE, r6 = FALSE;
    p = (u8 *)data_ov003_0222f758 + idx * 8;
    u32 l_cc[18];
    u32 l_114[18];
    u32 l_3c[3];
    u32 l_48[3];
    u32 l_54[3];
    u32 l_60[3];
    u32 l_6c[6];
    u32 l_84[6];
    u32 l_c[1];
    u32 l_10[1];
    u32 l_14[1];
    u32 l_18[1];
    u32 l_1c[1];
    u32 l_20[1];
    u32 l_24[1];
    u32 l_28[1];
    u32 l_9c[6];
    u32 l_b4[6];
    u32 l_2c[1];
    u32 l_30[1];
    u32 l_34[1];
    u32 l_38[1];

    func_ov003_0221f360(data_ov003_02235930, l_cc, l_114, l_3c, l_48, l_54, l_60);
    if (func_ov003_0221f9ec(data_ov003_02235930, l_cc, l_114)) {
        if (func_ov003_0221f90c(data_ov003_02235930, l_3c, l_48, l_54, l_60)) {
            if (func_ov003_0221f828(data_ov003_02235930, l_cc, l_54, p)) {
                if (func_ov003_0221f674(data_ov003_02235930, l_cc, l_3c, p)) {
                    if (func_ov003_0221f438(data_ov003_02235930, l_cc, l_54, p)) {
                        r7 = TRUE;
                    }
                }
            }
        }
    }
    func_ov003_0221f2b0(data_ov003_02235930, (void **)l_114, (void **)l_48, (void **)l_60);
    func_ov003_0221f33c(data_ov003_02235930, l_6c, l_84, l_c, l_10, l_14, l_18);
    if (func_ov003_0221f9b0(data_ov003_02235930, l_6c, l_84)) {
        if (func_ov003_0221f8c8(data_ov003_02235930, l_c, l_10, l_14, l_18)) {
            if (func_ov003_0221f7e0(data_ov003_02235930, l_6c, l_14, p)) {
                if (func_ov003_0221f5c4(data_ov003_02235930, l_6c, l_c, p)) {
                    if (func_ov003_0221f3f0(data_ov003_02235930, l_6c, l_14, p)) {
                        r4 = TRUE;
                    }
                }
            }
        }
    }
    func_ov003_0221f258(data_ov003_02235930, (void **)l_84, (void **)l_10, (void **)l_18);
    func_ov003_0221f328(data_ov003_02235930, l_1c, l_20, l_24, l_28);
    if (func_ov003_0221f98c(data_ov003_02235930, l_1c, l_20)) {
        if (func_ov003_0221f8a4(data_ov003_02235930, l_24, l_28)) {
            if (func_ov003_0221f564(data_ov003_02235930, l_1c, l_24)) {
                r4 = TRUE;
            }
        }
    }
    func_ov003_0221f224(data_ov003_02235930, (void **)l_20, (void **)l_28);
    func_ov003_0221f33c(data_ov003_02235930, l_9c, l_b4, l_2c, l_30, l_34, l_38);
    if (func_ov003_0221f950(data_ov003_02235930, l_9c, l_b4)) {
        if (func_ov003_0221f8c8(data_ov003_02235930, l_2c, l_30, l_34, l_38)) {
            if (func_ov003_0221f798(data_ov003_02235930, l_9c, l_34, p)) {
                if (func_ov003_0221f4b4(data_ov003_02235930, l_9c, l_2c, p)) {
                    if (func_ov003_0221f3a8(data_ov003_02235930, l_9c, l_34, p)) {
                        r6 = TRUE;
                    }
                }
            }
        }
    }
    func_ov003_0221f1cc(data_ov003_02235930, (void **)l_b4, (void **)l_30, (void **)l_38);
    if (r7 && r4 && r6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov003_0221f1cc(Obj *o, void **a, void **b, void **c)
{
    void *heap = data_021f482c;
    s32 i;
    for (i = 0; i < 6; a++, i++) {
        if (*a) {
            func_020e85fc(heap, *a);
            *a = 0;
        }
    }
    if (*b) {
        func_020e85fc(heap, *b);
        *b = 0;
    }
    if (*c) {
        func_020e85fc(heap, *c);
        *c = 0;
    }
}

extern "C" void func_ov003_0221f224(Obj *o, void **a, void **b)
{
    void *heap = data_021f482c;
    if (*a) {
        func_020e85fc(heap, *a);
        *a = 0;
    }
    if (*b) {
        func_020e85fc(heap, *b);
        *b = 0;
    }
}

extern "C" void func_ov003_0221f258(Obj *o, void **a, void **b, void **c)
{
    void *heap = data_021f482c;
    s32 i;
    for (i = 0; i < 6; a++, i++) {
        if (*a) {
            func_020e85fc(heap, *a);
            *a = 0;
        }
    }
    if (*b) {
        func_020e85fc(heap, *b);
        *b = 0;
    }
    if (*c) {
        func_020e85fc(heap, *c);
        *c = 0;
    }
}

extern "C" void func_ov003_0221f2b0(Obj *o, void **a, void **b, void **c)
{
    void *heap = data_021f482c;
    s32 j, i;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; a++, j++) {
            if (*a) {
                func_020e85fc(heap, *a);
                *a = 0;
            }
        }
    }
    for (i = 0; i < 3; b++, c++, i++) {
        if (*b) {
            func_020e85fc(heap, *b);
            *b = 0;
        }
        if (*c) {
            func_020e85fc(heap, *c);
            *c = 0;
        }
    }
}

extern "C" void func_ov003_0221f328(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d)
{
    *a = 0;
    *b = 0;
    *c = 0;
    *d = 0;
}

extern "C" void func_ov003_0221f33c(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d, u32 *e, u32 *f)
{
    s32 i;
    for (i = 0; i < 6; i++) {
        *a++ = 0;
        *b++ = 0;
    }
    *c = 0;
    *d = 0;
    *e = 0;
    *f = 0;
}

extern "C" void func_ov003_0221f360(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d, u32 *e, u32 *f)
{
    s32 i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; a++, b++, j++) {
            *a = 0;
            *b = 0;
        }
    }
    for (k = 0; k < 3; c++, d++, e++, f++, k++) {
        *c = 0;
        *d = 0;
        *e = 0;
        *f = 0;
    }
}

extern "C" BOOL func_ov003_0221f3a8(Obj *o, u32 *a, u32 *b, void *c)
{
    void *n = func_ov003_0221fa88(o, 5);
    if (func_02054c64(&o->unk_11e8[5], n, data_ov003_02235934, a[5], *b, c, 1)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_0221f3f0(Obj *o, u32 *a, u32 *b, void *c)
{
    void *n = func_ov003_0221fac8(o, 5);
    if (func_02054c64(&o->unk_c6c[5], n, data_ov003_02235934, a[5], *b, c, 1)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_0221f438(Obj *o, u32 *a, u32 *b, void *c)
{
    s32 i;
    for (i = 0; i < 3; i++) {
        s32 t = func_ov003_0221fb20(o, i);
        void *n = func_ov003_0221fb04(o, i, 5);
        if (!func_02054c64(&o->unk_174[i][5], n, data_ov003_02235934, (a + t * 6)[5], b[i], c, 1)) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL func_ov003_0221f4b4(Obj *o, u32 *a, u32 *b, void *c)
{
    s32 i;
    for (i = 1; i <= 4; i++) {
        void *n = func_ov003_0221fa88(o, i);
        if (!func_02054c64(&o->unk_11e8[i], n, data_ov003_02235934, a[i], *b, c, 2)) {
            return FALSE;
        }
    }
    for (i = 0; i < 4; i++) {
        void *n = func_ov003_0221fa68(o, i);
        Seg *sg = &o->unk_63c4[i];
        if (!func_02054c64(&sg->e, n, data_ov003_02235934, (a + i)[1], *b, c, 2)) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL func_ov003_0221f564(Obj *o, u32 *a, u32 *b)
{
    s32 cnt;
    for (cnt = 0; cnt < 3; cnt++) {
        if (!func_02054c64(&o->unk_1014[cnt], data_ov003_0223264c, data_ov003_02235934, *a, *b, &cnt, 1)) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL func_ov003_0221f5c4(Obj *o, u32 *a, u32 *b, void *c)
{
    s32 i;
    for (i = 1; i <= 4; i++) {
        void *n = func_ov003_0221fac8(o, i);
        if (!func_02054c64(&o->unk_c6c[i], n, data_ov003_02235934, a[i], *b, c, 2)) {
            return FALSE;
        }
    }
    for (i = 0; i < 4; i++) {
        void *n = func_ov003_0221faa8(o, i);
        Seg *sg = &o->unk_5ab0[i];
        if (!func_02054c64(&sg->e, n, data_ov003_02235934, (a + i)[1], *b, c, 2)) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL func_ov003_0221f674(Obj *o, u32 *a, u32 *b, void *c)
{
    s32 i, j;
    Seg *base2; u32 *pb1; u32 *pb2; u32 *q2; u32 *q1; Elem *base1;
    for (i = 0; i < 3; i++) {
        s32 t = func_ov003_0221fb20(o, i);
        j = 1;
        pb1 = &b[i];
        q1 = a + t * 6;
        base1 = o->unk_174[i];
        for (; j <= 4; j++) {
            void *n = func_ov003_0221fb04(o, i, j);
            if (!func_02054c64(&base1[j], n, data_ov003_02235934, q1[j], *pb1, c, 2)) {
                return FALSE;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        s32 t = func_ov003_0221fb20(o, i);
        j = 0;
        base2 = o->unk_4b20[i];
        pb2 = &b[i];
        q2 = a + t * 6;
        for (; j < 4; j++) {
            void *n = func_ov003_0221fae8(o, i, j);
            if (!func_02054c64(&base2[j].e, n, data_ov003_02235934, (q2 + j)[1], *pb2, c, 2)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
