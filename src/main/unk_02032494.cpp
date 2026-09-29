#include "types.h"

struct Unk_02032808_V2 {
    s32 x, z;
};

struct Unk_02032808_V3 {
    s32 x, y, z;
};

extern "C" {
void func_0202f048(Unk_02032808_V2 *out, s32 x, s32 z);
void func_0202efe4(Unk_02032808_V2 *out, Unk_02032808_V2 *a, Unk_02032808_V2 *b);
void func_0202ef40(Unk_02032808_V2 *v);
void func_0202eeec(Unk_02032808_V2 *out, Unk_02032808_V2 *a, Unk_02032808_V2 *b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 x, s32 z);
void func_020e9960(Unk_02032808_V3 *out, Unk_02032808_V3 *a, Unk_02032808_V3 *b);
void func_020323f8(void *p, s32 ang, s32 a, s32 b);
void func_02135558(void *obj, void (*dtor)(), void *dso);
void func_0202ea3c();
}

struct Unk_02032864_Static : Unk_02032808_V2 {
    inline Unk_02032864_Static(s32 x, s32 z) {
        func_0202f048(this, x, z);
    }
    inline ~Unk_02032864_Static() {}
};

struct Unk_0202fddc {
    Unk_0202fddc();
    ~Unk_0202fddc();
    void func_0202fd8c(Unk_02032808_V3 *pos, s32 b, s32 c);
    BOOL func_0202fccc(Unk_02032808_V3 *pos, s32 x);
    BOOL func_0202fcfc(Unk_02032808_V3 *pos, s32 x);
    s32 unk_00, unk_04, unk_08, unk_0c, unk_10;
};

struct Unk_020339d8 {
    Unk_020339d8();
    ~Unk_020339d8();
    void func_020339d8(s32 a, s32 b);
    u8 unk_00;
    u8 pad[7];
};

struct Unk_02032808 : Unk_0202fddc {
    Unk_02032808();
    ~Unk_02032808();
    void func_02032808(Unk_02032808_V3 *pos, s32 b, s32 c, s32 a4, s32 a5);
    /* 0x14 */ Unk_020339d8 unk_14;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s16 unk_20;
    /* 0x22 */ s16 unk_22;
};

struct Unk_02032d60_Elem {
    Unk_02032d60_Elem(void *a, void *b, void *c, s32 d0, s32 d1, s32 d2, s32 d3);
    ~Unk_02032d60_Elem();
    u8 pad[0x30];
};

extern "C" void func_02033044(void *dst, void *src);

struct Unk_02032d60 {
    BOOL func_02032d60(void *a, void *b, void *c, s32 d0, s32 d1, s32 d2, s32 d3);
    BOOL func_02032d98(Unk_02032d60_Elem *e);
    
    void func_02032864(void *grid, s32 x0, s32 x1, s32 z0, s32 z1, s32 flag);
    Unk_02032d60_Elem unk_00[0x18];
    /* 0x480 */ volatile u32 unk_480;
};

struct Unk_02032864_Cell {
    s32 unk_00, unk_04, unk_08, unk_0c;
    u8 unk_10, unk_11, unk_12, unk_13;
};

extern "C" Unk_02032864_Cell *func_02033a0c(void *grid, s32 x, s32 z);
extern "C" void *func_02033d4c(void *p, s32 x, s32 z);
extern u8 data_021c19f4;

BOOL func_0203270c(Unk_02032808 *a, Unk_02032d60 *out, Unk_02032808 *b);

struct Unk_02032494 {
    Unk_02032494();
    ~Unk_02032494();
    void func_02032494(Unk_02032d60 *out);
    void func_020324d8(void *obj, s32 x0, s32 x1, s32 z0, s32 z1, s32 flag);
    BOOL func_020325cc(Unk_02032808_V3 *pos, s32 b, s32 c, s32 a4, s32 a5);
    BOOL func_02032604(Unk_02032808_V3 *pos, s32 x, u32 *out);
    BOOL func_02032658(Unk_02032808_V3 *pos, s32 x, void *q);
    volatile u32 unk_00;
    Unk_02032808 unk_04[16];
};

void Unk_02032808::func_02032808(Unk_02032808_V3 *pos, s32 b, s32 c, s32 a4, s32 a5) {
    s32 z = pos->z >> 13;
    s32 x = pos->x >> 13;
    unk_20 = x;
    unk_22 = z;
    func_0202fd8c(pos, b, c);
    unk_1c = a4;
    unk_14.func_020339d8(a5, 0);
}

Unk_02032494::Unk_02032494() {
    unk_00 = 0;
}

Unk_02032494::~Unk_02032494() {
}

void Unk_02032494::func_02032494(Unk_02032d60 *out) {
    u32 n = unk_00;
    Unk_02032808 *p = unk_04;
    u32 i;
    for (i = 0; i < n; p++, i++) {
        Unk_02032808 *q = unk_04;
        u32 j;
        for (j = 0; j < n; q++, j++) {
            func_0203270c(p, out, q);
        }
    }
}

struct Unk_020324d8_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual BOOL vfunc_08(s32 *a, s32 *b, s32 *c, s32 x, s32 z);
};

void Unk_02032494::func_020324d8(void *obj, s32 x0, s32 x1, s32 z0, s32 z1, s32 flag) {
    s32 z, x;
    for (z = z0; z <= z1; z++) {
        x = x0;
        s32 zw = (z << 13) + 0x1000;
        for (; x <= x1; x++) {
            s32 a, b;
            volatile s32 c;
            if (((Unk_020324d8_Obj *)obj)->vfunc_08(&a, &b, (s32 *)&c, x, z)) {
                if (c == 2) {
                    if (flag) {
                        Unk_02032808_V3 p;
                        p.x = (x << 13) + 0x1000;
                        p.y = 0;
                        p.z = zw;
                        p.y = 0;
                        func_020325cc(&p, a, b, 2, c);
                    }
                } else {
                    Unk_02032808_V3 p;
                    p.x = (x << 13) + 0x1000;
                    p.y = 0;
                    p.z = zw;
                    p.y = 0;
                    func_020325cc(&p, a, b, 1, c);
                }
            } else if (flag) {
                if (data_021c19f4 != 0) {
                    void *r = func_02033d4c(&data_021c19f4, x, z);
                    if (r != 0) {
                        Unk_02032808_V3 p;
                        p.x = (x << 13) + 0x1000;
                        p.y = 0;
                        p.z = zw;
                        p.y = 0;
                        func_020325cc(&p, (s32)r, 0x1000, 2, 2);
                    }
                }
            }
        }
    }
}

BOOL Unk_02032494::func_020325cc(Unk_02032808_V3 *pos, s32 b, s32 c, s32 a4, s32 a5) {
    if (unk_00 < 16) {
        unk_04[unk_00].func_02032808(pos, b, c, a4, a5);
        unk_00++;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02032494::func_02032604(Unk_02032808_V3 *pos, s32 x, u32 *out) {
    Unk_02032808 *base = unk_04;
    Unk_02032808 *e;
    for (e = base; e < base + unk_00; e++) {
        volatile Unk_02032808_V3 d;
        d.x = pos->x;
        d.y = pos->y;
        d.z = pos->z;
        if (e->unk_1c == 1 && e->func_0202fccc(pos, x)) {
            *out = e->unk_14.unk_00;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_02032494::func_02032658(Unk_02032808_V3 *pos, s32 x, void *q) {
    BOOL r = FALSE;
    Unk_02032808 *base = unk_04;
    Unk_02032808 *e;
    for (e = base; e < base + unk_00; e++) {
        volatile Unk_02032808_V3 d;
        d.x = pos->x;
        d.y = pos->y;
        d.z = pos->z;
        if (e->func_0202fcfc(pos, x)) {
            Unk_02032808_V3 t;
            func_020e9960(&t, pos, (Unk_02032808_V3 *)e);
            s32 ang = func_020e7b98(t.x, t.z);
            func_020323f8((u8 *)q + 0xc, ang, e->unk_1c, e->unk_14.unk_00);
            r = TRUE;
        }
    }
    return r;
}

Unk_02032808::Unk_02032808() {
}

Unk_02032808::~Unk_02032808() {
}

BOOL Unk_02032d60::func_02032d98(Unk_02032d60_Elem *e) {
    if (unk_480 < 0x18) {
        u32 n = unk_480;
        unk_480 = n + 1;
        func_02033044(&unk_00[n], e);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02032d60::func_02032d60(void *a, void *b, void *c, s32 d0, s32 d1, s32 d2, s32 d3) {
    Unk_02032d60_Elem t(a, b, c, d0, d1, d2, d3);
    BOOL r = func_02032d98(&t);
    return r;
}

BOOL func_0203270c(Unk_02032808 *a, Unk_02032d60 *out, Unk_02032808 *b) {
    s32 dx = b->unk_20 - a->unk_20;
    s32 dz = b->unk_22 - a->unk_22;
    if ((dx == 0 && dz == 1) || (dx == 1 && (u32)(dz + 1) <= 2)) {
        Unk_02032808_V2 p10, p18, p20, p28, p30, p38, p40;
        s32 r;
        func_0202f048(&p10, a->unk_00, a->unk_08);
        func_0202f048(&p18, b->unk_00, b->unk_08);
        func_0202efe4(&p20, &p18, &p10);
        func_0202ef40(&p20);
        r = p10.z - func_01ffcb0c(p20.z, a->unk_0c);
        s32 x = p10.x - func_01ffcb0c(p20.x, a->unk_0c);
        func_0202f048(&p28, x, r);
        r = p18.z + func_01ffcb0c(p20.z, b->unk_0c);
        x = p18.x + func_01ffcb0c(p20.x, b->unk_0c);
        func_0202f048(&p30, x, r);
        func_0202f048(&p38, 0, 0);
        func_0202eeec(&p38, &p10, &p18);
        func_0202f048(&p40, -p38.x, -p38.z);
        s32 m = b->unk_10;
        if (m > a->unk_10) m = a->unk_10;
        out->func_02032d60(&p28, &p30, &p38, m, 3, 0, 0);
        out->func_02032d60(&p28, &p30, &p40, m, 3, 0, 0);
        return TRUE;
    }
    return FALSE;
}

void Unk_02032d60::func_02032864(void *grid, s32 x0, s32 x1, s32 z0, s32 z1, s32 flag) {
    s32 z, x;
    Unk_02032864_Cell *qx, *qz;
    s32 zw;
    Unk_02032808_V2 t30, t38, t40, t48, t50, t58, t60, t68;
    volatile Unk_02032808_V3 p;
    for (z = z1; z >= z0; z--) {
        x = x1;
        zw = (z << 13) + 0x1000;
        for (; x >= x0; x--) {
            Unk_02032864_Cell *q = func_02033a0c(grid, x, z);
            if (q == 0) continue;
            qx = func_02033a0c(grid, x + 1, z);
            qz = func_02033a0c(grid, x, z + 1);
            p.x = (x << 13) + 0x1000;
            p.y = 0;
            p.z = zw;
            if (qx != 0 && q->unk_0c != qx->unk_04) {
                static Unk_02032864_Static sA(0x1000, 0);
                static Unk_02032864_Static sB(-0x1000, 0);
                func_0202f048(&t30, p.x + 0x1000, p.z - 0x1000);
                func_0202f048(&t38, t30.x, p.z + 0x1000);
                if (q->unk_0c > qx->unk_04) {
                    func_02032d60(&t30, &t38, &sA, q->unk_0c, 1, q->unk_13, 0);
                    if (flag) func_02032d60(&t30, &t38, &sB, 0x8000, 2, 2, 0);
                } else {
                    func_02032d60(&t30, &t38, &sB, qx->unk_00, 1, qx->unk_10, 0);
                    if (flag) func_02032d60(&t30, &t38, &sA, 0x8000, 2, 2, 0);
                }
            }
            if (qz != 0 && q->unk_08 != qz->unk_00) {
                static Unk_02032864_Static sC(0, 0x1000);
                static Unk_02032864_Static sD(0, -0x1000);
                func_0202f048(&t40, p.x - 0x1000, p.z + 0x1000);
                func_0202f048(&t48, p.x + 0x1000, t40.z);
                if (q->unk_08 > qz->unk_00) {
                    func_02032d60(&t40, &t48, &sC, q->unk_08, 1, q->unk_12, 0);
                    if (flag) func_02032d60(&t40, &t48, &sD, 0x8000, 2, 2, 0);
                } else {
                    func_02032d60(&t40, &t48, &sD, qz->unk_00, 1, qz->unk_10, 0);
                    if (flag) func_02032d60(&t40, &t48, &sC, 0x8000, 2, 2, 0);
                }
            }
            if (q->unk_00 != q->unk_04) {
                static Unk_02032864_Static sE(-0xb50, 0xb50);
                static Unk_02032864_Static sF(-sE.x, -sE.z);
                func_0202f048(&t50, p.x - 0x1000, p.z - 0x1000);
                func_0202f048(&t58, p.x + 0x1000, p.z + 0x1000);
                if (q->unk_00 > q->unk_04) {
                    func_02032d60(&t50, &t58, &sE, q->unk_00, 1, q->unk_10, 0);
                    if (flag) func_02032d60(&t50, &t58, &sF, 0x8000, 2, 2, 0);
                } else {
                    func_02032d60(&t50, &t58, &sF, q->unk_04, 1, q->unk_11, 0);
                    if (flag) func_02032d60(&t50, &t58, &sE, 0x8000, 2, 2, 0);
                }
            } else if (q->unk_00 != q->unk_0c) {
                static Unk_02032864_Static sG(0xb50, 0xb50);
                static Unk_02032864_Static sH(-sG.x, -sG.z);
                func_0202f048(&t60, p.x - 0x1000, p.z + 0x1000);
                func_0202f048(&t68, p.x + 0x1000, p.z - 0x1000);
                if (q->unk_00 > q->unk_0c) {
                    func_02032d60(&t60, &t68, &sG, q->unk_00, 1, q->unk_10, 0);
                    if (flag) func_02032d60(&t60, &t68, &sH, 0x8000, 2, 2, 0);
                } else {
                    func_02032d60(&t60, &t68, &sH, q->unk_0c, 1, q->unk_13, 0);
                    if (flag) func_02032d60(&t60, &t68, &sG, 0x8000, 2, 2, 0);
                }
            }
        }
    }
}
