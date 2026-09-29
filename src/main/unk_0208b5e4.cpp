#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
void func_020a7fd8(Unk_02050288 *obj);
BOOL func_020a706c(s32 x0, s32 x1, s32 y0, s32 y1);
BOOL func_020a6df8(void);
BOOL func_020a6dec(void);
BOOL func_020a6fa4(void);
BOOL func_020a70d4(void);
void func_020b3270(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
BOOL func_02038f10(void);
void func_02116048(void *src, void *dst, u32 n);
void func_0209cf28(void *p);
s32 func_0209d3d0(void *a, void *b, s32 n);
void func_0209d064(void *a, void *b);
s32 func_020b50e8(void);
void func_0200402c(u32 x);
void func_020b7878(s32 x);
u64 func_01ffa6b4(void);
u64 func_02132ef8(u64 a, u64 b);
void func_020e7870(void *p, s32 a, s32 b, s32 c, s32 d);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_02089270(void *p);
void func_0208926c(void *p);
}

extern u8 data_020cf600[];
extern u32 data_021ce674;
extern u32 data_020e0e1c[2];
extern u32 data_020e0e34[2];
extern u32 data_020e0ea4[2];
extern u32 data_020e0e6c[2];
extern Unk_02050288_Font data_021c48fc;
extern Unk_02050288_Font data_021c4938;

// Sub-object (ctor 0x02089270, dtor 0x0208926c)
class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_020891bc();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e0f48 : public Unk_020e0db4 {
public:
    Unk_020e0f48();
    virtual ~Unk_020e0f48();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208b418();
    void func_0208b388();
    void func_0208b324();
    void func_0208b294();
    void func_0208b430();
    void func_0208b438();
    BOOL func_0208b5e4();
    BOOL func_0208b634();
    BOOL func_0208b668();
    BOOL func_0208b688();
    BOOL func_0208b698();
    void func_0208b6a8(u32 v);
    void func_0208b6b0();
    void func_0208b6d0();
    void func_0208b6e0();
    void func_0208b700();

    /* 0x0c */ Unk_02089270 unk_0c[9];
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s32 unk_d0;
    /* 0xd4 */ u8 unk_d4;
};

typedef void (Unk_020e0f48::*Unk_0208b728_Fn)();

BOOL Unk_020e0f48::func_0208b5e4() {
    BOOL r = FALSE;
    s32 i = 0;
    for (; i < 9; i++) {
        u8 *q = &data_020cf600[i * 2];
        s32 a = q[0] + 0x80;
        s32 b = q[1] + 0x60;
        if (func_020a706c(a, a + 0x10, b, b + 0x10)) {
            r = TRUE;
            unk_c4 = i;
            func_0208b438();
            break;
        }
    }
    return r;
}


BOOL Unk_020e0f48::func_0208b634() {
    BOOL r = FALSE;
    if (func_020a6df8()) {
        if (func_020a6fa4()) {
            r = TRUE;
        }
    } else if (func_020a6dec()) {
        if (func_020a70d4()) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_020e0f48::func_0208b668() {
    s32 s = unk_c0;
    BOOL two = (s == 2) ? TRUE : FALSE;
    BOOL r = FALSE;
    if (s == 0) {
        return TRUE;
    }
    if (two) {
        r = TRUE;
    }
    return r;
}

BOOL Unk_020e0f48::func_0208b688() {
    if (unk_c0 == 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e0f48::func_0208b698() {
    if (unk_c0 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e0f48::func_0208b6a8(u32 v) { unk_d4 = v; }

void Unk_020e0f48::func_0208b6b0() {
    if (unk_c0 == 2) {
        func_020a6dec();
    }
    vfunc_08();
}

void Unk_020e0f48::func_0208b6d0() { vfunc_0c(); }

void Unk_020e0f48::func_0208b6e0() {
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_0c[i].func_020891bc();
    }
}

void Unk_020e0f48::func_0208b700() {
    unk_d4 = 0;
    unk_c4 = 0;
    unk_c8 = 0;
    unk_cc = 0;
    unk_d0 = 0;
    func_0208b430();
}

void Unk_020e0f48::vfunc_0c() {
    static Unk_0208b728_Fn tbl[4] = {&Unk_020e0f48::func_0208b418, &Unk_020e0f48::func_0208b388,
                                     &Unk_020e0f48::func_0208b324, &Unk_020e0f48::func_0208b294};
    (this->*tbl[unk_c0])();
}

void Unk_020e0f48::vfunc_08() {
    if (unk_c0 != 0) {
        s32 bx = func_02089f68();
        s32 by = func_02089f64();
        s32 i = 0;
        s32 nb = -1;
        s32 z = 0;
        for (; i < 9; i++) {
            Unk_02089270 *e = &unk_0c[i];
            void *p = e->func_02089248();
            if (p != NULL) {
                s32 sx = e->func_02089228(nb);
                s32 sy = e->func_02089210(nb);
                s32 pal = (i == unk_d0) ? 6 : 5;
                func_02087e70(z, p, bx + sx, by + sy, pal, nb, 0x1000, 0x1000, z, nb, z, z);
            }
        }
    }
}

Unk_020e0f48::~Unk_020e0f48() { func_0208b6e0(); }

Unk_020e0f48::Unk_020e0f48() {
    unk_c0 = 0;
    unk_c4 = 0;
    unk_c8 = 0;
    unk_cc = 0;
    unk_d0 = 0;
    unk_d4 = 0;
}

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_0208b9f0_Or(BOOL a, BOOL v) { if ((a | v) != 0) return TRUE; return FALSE; }

class Unk_0208b908 {
public:
    void func_0208b908();
    void func_0208b924();
    void func_0208b9f0();
    void func_0208bba0();
    void func_0208bbe8();
    void func_0208bc30();
    void func_0208bc74();
    void func_0208bcbc();
    void func_0208bcdc();
    void func_0208bd20();
    void func_0208bd90();
    void func_0208be00();
    void func_0208be70();
    void func_0208bee0();
    BOOL func_0208bf00();

    /* 0x00 */ u32 unk_00[9];
    /* 0x24 */ Unk_02050288 *unk_24;
    /* 0x28 */ Unk_02050288 *unk_28;
    /* 0x2c */ Unk_02050288 *unk_2c;
    /* 0x30 */ Unk_02050288 *unk_30;
    /* 0x34 */ u32 unk_34[6];
    /* 0x4c */ u32 unk_4c[6];
    /* 0x64 */ u32 unk_64[6];
    /* 0x7c */ u32 unk_7c[6];
    /* 0x94 */ u8 unk_94;
    /* 0x95 */ u8 unk_95;
    /* 0x96 */ u8 unk_96;
    /* 0x97 */ u8 unk_97;
    /* 0x98 */ u8 unk_98;
    /* 0x99 */ u8 unk_99;
    /* 0x9a */ u8 unk_9a[2];
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ u8 unk_a8[8];
    /* 0xb0 */ u8 unk_b0[8];
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ u32 unk_cc;
    /* 0xd0 */ u32 unk_d0;
};

void Unk_0208b908::func_0208b908() {
    unk_bc = 0;
    unk_c0 = 0;
    unk_c8 = -1;
    unk_c4 = 0;
}

void Unk_0208b908::func_0208b924() {
    BOOL a = func_02038f10();
    BOOL b = func_0208bf00();
    s32 t;
    s32 c4;
    if (a && b) {
        t = 0xfffec000;
    } else {
        t = 0;
    }
    unk_c4 = unk_c4 + 0xa00;
    c4 = unk_c4;
    if (c4 < 0x2300) {
        c4 = 0x2300;
    } else if (c4 > 0x5000) {
        c4 = 0x5000;
    }
    unk_c4 = c4;
    if (t != unk_c0) {
        if (unk_c8 >= 0 && b) {
            unk_c8 = unk_c8 + 1;
            if (unk_c8 <= 10) {
                goto end;
            }
        }
        unk_c0 = t;
        unk_c8 = 0;
    } else {
        unk_c8 = 0;
    }
end:
    func_020e7870(&unk_bc, unk_c0, 0x600, unk_c4, 0x2300);
}

void Unk_0208b908::func_0208b9f0() {
    u8 a[8];
    u8 b[8];
    u8 c[8];
    BOOL x;
    BOOL y;
    BOOL t;
    s32 r;
    if (unk_b8 > 0) {
        unk_b8 = unk_b8 - 1;
    }
    if (unk_a4 != 0) {
        func_02116048(unk_a8, a, 8);
        ((u32 *)b)[0] = 0;
        ((u32 *)b)[1] = 0;
        func_0209cf28(b);
        r = func_0209d3d0(b, a, 0x3f);
        if (r == 0) {
            goto yes;
        }
        if (r == 1) {
        yes:
            x = TRUE;
        } else {
            x = FALSE;
        }
        y = x;
        if (x) {
            ((u32 *)a)[0] = 0;
            ((u32 *)a)[1] = 0;
        } else {
            BOOL k;
            func_02116048(b, c, 8);
            func_0209d064(a, c);
            k = x;
            t = func_0209d3d0(unk_b0, a, 1) ? TRUE : FALSE;
            x = (k | t) ? TRUE : FALSE;
            r = func_0209d3d0(unk_b0, a, 2) ? TRUE : FALSE;
            k |= r;
            y = k ? TRUE : FALSE;
        }
        u8 *p95 = &unk_95;
        *p95 = Unk_0208b9f0_Or(unk_95, x);
        u8 *p94 = &unk_94;
        *p94 = Unk_0208b9f0_Or(unk_94, y);
        if (x != 0 || y != 0) {
            u32 b0, b1;
            func_02116048(a, unk_b0, 8);
            b0 = a[0];
            b1 = a[1];
            if (b1 == 0) {
                if (b0 == 0) {
                    unk_b8 = 0x258;
                    unk_a4 = 0;
                    if (func_020b50e8() != 0x2e) {
                        func_0200402c(0x65);
                    }
                    func_020b7878(3);
                } else if (b0 <= 10) {
                    u64 now = func_01ffa6b4();
                    u64 d = now - *(u64 *)&unk_cc;
                    u64 q = func_02132ef8(d << 6, 0x82ea);
                    if (q <= 0x44c) {
                        if (func_020b50e8() != 0x2e) {
                            func_0200402c(0x64);
                        }
                    }
                    unk_cc = (u32)now;
                    unk_d0 = (u32)(now >> 32);
                } else if (b0 >= 0xb) {
                    u64 now = func_01ffa6b4();
                    unk_cc = (u32)now;
                    unk_d0 = (u32)(now >> 32);
                }
            }
        }
    }
}

void Unk_0208b908::func_0208bba0() {
    if (unk_97 != 0 && unk_30 != NULL) {
        func_020b3270(&unk_7c, unk_a0, 2, 6, 0, 1);
        unk_30->func_02050c44();
        unk_30->func_02050c90();
        unk_97 = 0;
    }
}

void Unk_0208b908::func_0208bbe8() {
    if (unk_96 != 0 && unk_2c != NULL) {
        func_020b3270(&unk_64, unk_9c, 2, 6, 0, 1);
        unk_2c->func_02050c44();
        unk_2c->func_02050c90();
        unk_96 = 0;
    }
}

void Unk_0208b908::func_0208bc30() {
    if (unk_95 != 0 && unk_28 != NULL) {
        func_020b3270(&unk_4c, unk_b0[0], 2, 6, 0, 1);
        unk_28->func_02050c90();
        unk_95 = 0;
    }
}

void Unk_0208b908::func_0208bc74() {
    if (unk_94 != 0 && unk_24 != NULL) {
        func_020b3270(&unk_34, unk_b0[1], 2, 6, 0, 1);
        unk_24->func_02050c20();
        unk_24->func_02050c90();
        unk_94 = 0;
    }
}

void Unk_0208b908::func_0208bcbc() {
    func_0208bc74();
    func_0208bc30();
    func_0208bbe8();
    func_0208bba0();
}

void Unk_0208b908::func_0208bcdc() {
    if (unk_24 != NULL) {
        func_020a7fd8(unk_24);
        unk_24 = NULL;
    }
    if (unk_28 != NULL) {
        func_020a7fd8(unk_28);
        unk_28 = NULL;
    }
    if (unk_2c != NULL) {
        func_020a7fd8(unk_2c);
        unk_2c = NULL;
    }
    if (unk_30 != NULL) {
        func_020a7fd8(unk_30);
        unk_30 = NULL;
    }
}

void Unk_0208b908::func_0208bd20() {
    unk_30 = func_020a8054(unk_99 != 0 ? 0x176 : 0xaa, 2, 1);
    if (unk_30 != NULL) {
        unk_30->unk_2c = 4;
        unk_30->unk_50 = 2;
        unk_30->unk_55 = 1;
        unk_30->unk_39 = 0;
        unk_30->unk_38 = 5;
        unk_30->unk_28 = &data_021c48fc;
        Unk_02050288 *t = unk_30;
        t->unk_10 = (u32)((StrBuf *)unk_7c)->data();
        unk_97 = 1;
    }
}

void Unk_0208b908::func_0208bd90() {
    unk_2c = func_020a8054(unk_99 != 0 ? 0x174 : 0xa8, 2, 1);
    if (unk_2c != NULL) {
        unk_2c->unk_2c = 4;
        unk_2c->unk_50 = 2;
        unk_2c->unk_55 = 1;
        unk_2c->unk_39 = 0;
        unk_2c->unk_38 = 5;
        unk_2c->unk_28 = &data_021c48fc;
        Unk_02050288 *t = unk_2c;
        t->unk_10 = (u32)((StrBuf *)unk_64)->data();
        unk_96 = 1;
    }
}

void Unk_0208b908::func_0208be00() {
    unk_28 = func_020a8054(unk_99 != 0 ? 0x117 : 0x83, 3, 2);
    if (unk_28 != NULL) {
        unk_28->unk_2c = 4;
        unk_28->unk_50 = 2;
        unk_28->unk_55 = 1;
        unk_28->unk_39 = 0;
        unk_28->unk_38 = 0xc;
        unk_28->unk_28 = &data_021c4938;
        Unk_02050288 *t = unk_28;
        t->unk_10 = (u32)((StrBuf *)unk_4c)->data();
        unk_95 = 1;
    }
}

void Unk_0208b908::func_0208be70() {
    unk_24 = func_020a8054(unk_99 != 0 ? 0x114 : 0x80, 3, 2);
    if (unk_24 != NULL) {
        unk_24->unk_2c = 4;
        unk_24->unk_50 = 2;
        unk_24->unk_55 = 1;
        unk_24->unk_39 = 0;
        unk_24->unk_38 = 0xc;
        unk_24->unk_28 = &data_021c4938;
        Unk_02050288 *t = unk_24;
        t->unk_10 = (u32)((StrBuf *)unk_34)->data();
        unk_94 = 1;
    }
}

void Unk_0208b908::func_0208bee0() {
    func_0208be70();
    func_0208be00();
    func_0208bd90();
    func_0208bd20();
}
