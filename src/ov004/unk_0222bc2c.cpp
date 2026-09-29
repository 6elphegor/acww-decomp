#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------- helper types
struct Unk_ov004_0222bf34_V3 {
    s32 x, y, z;
    Unk_ov004_0222bf34_V3() {}
    Unk_ov004_0222bf34_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_ov004_0222bf34_V3(const Unk_ov004_0222bf34_V3 &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

struct Unk_ov004_0222bf34_P2 {
    s32 a, b;
    Unk_ov004_0222bf34_P2() {}
    Unk_ov004_0222bf34_P2(s32 x, s32 y) {
        a = x;
        b = y;
    }
    Unk_ov004_0222bf34_P2(const Unk_ov004_0222bf34_P2 &o) {
        a = o.a;
        b = o.b;
    }
};

typedef Unk_ov004_0222bf34_V3 Unk_ov004_V3;
typedef Unk_ov004_0222bf34_P2 Unk_ov004_P2;

// Effect entry, 0x94 bytes, 15 of them at data_ov004_022514b4 (5 groups of 3)
struct Unk_ov004_0222bff4_Entry {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ Unk_ov004_P2 unk_10;
    /* 0x18 */ Unk_ov004_V3 unk_18;
    /* 0x24 */ Unk_ov004_V3 unk_24;
    /* 0x30 */ Unk_ov004_V3 unk_30;
    /* 0x3c */ Unk_ov004_V3 unk_3c;
    /* 0x48 */ s16 unk_48;
    /* 0x4a */ s16 unk_4a;
    /* 0x4c */ u8 unk_4c[0x40];
    /* 0x8c */ s8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 pad_91[3];
};

typedef Unk_ov004_0222bff4_Entry Unk_ov004_Entry;

struct Unk_0209d498_Time {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};

// 0x20-byte element array member of the manager
struct Unk_ov004_0222aeb8 {
    u8 pad[0x20];
};

class Unk_ov004_0224e488 : public Unk_020d8c7c {
public:
    Unk_ov004_0224e488();
    virtual ~Unk_ov004_0224e488();

    /* 0x050 */ u8 unk_50[0xb8];
    /* 0x108 */ u8 unk_108[0x20];
    /* 0x128 */ u8 unk_128[0x1100];
    /* 0x1228 */ u8 unk_1228[0x2100];
    /* 0x3328 */ u8 unk_3328[0x138];
    /* 0x3460 */ u8 unk_3460[0x9c];
    /* 0x34fc */ u8 unk_34fc[0x24];
    /* 0x3520 */ s8 unk_3520;
    /* 0x3521 */ s8 unk_3521;
    /* 0x3522 */ u8 pad_3522[2];
    /* 0x3524 */ u8 pad_3524[0x10];
    /* 0x3534 */ void *unk_3534;
    /* 0x3538 */ u8 pad_3538[8];
    /* 0x3540 */ s8 unk_3540;
    /* 0x3541 */ u8 pad_3541[3];
};

// size 0x54
class Unk_ov004_0224e53c : public Unk_020d8c7c {
public:
    Unk_ov004_0224e53c();
    virtual ~Unk_ov004_0224e53c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_18();

    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 unk_51;
    /* 0x52 */ u8 unk_52;
    /* 0x53 */ u8 unk_53;
};

struct Unk_020dbd44 {
    ~Unk_020dbd44();
    u8 pad[0x10];
};

// dtors only in this range
class Unk_ov004_0224e594 : public Unk_020d8c7c {
public:
    virtual ~Unk_ov004_0224e594();

    /* 0x050 */ u8 pad_50[0x174 - 0x50];
    /* 0x174 */ Unk_020dbd44 unk_174;
    /* 0x184 */ u8 pad_184[0x10];
};

extern "C" {
void *func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
void *func_020548d0(void *p);
void *func_ov004_0222b3a8(void *p);
void *func_ov004_0222b11c(void *p);
void *func_ov004_0222ae54(void *p);
void *func_02031c48(void *p);
void *func_ov004_0222acc4(void *p);
void *func_ov004_0222aeb8(void *p);
void *func_ov004_0222aea0(void *p);
u32 func_020b50e8(void);
void func_020b5184(void);
void func_0209d498(void *p);
void func_0200402c(s32 a);
void func_0204ed8c(Unk_ov004_V3 *out, s32 a, s32 b);
s32 func_ov004_02234f80(s32 a, s32 b);
void func_02003e50(void *p);
void func_02003e80(void *p, void *v);
void func_02003ecc(void *p);
s32 func_02003e70(void *p, u32 a, u32 b, u32 c);
void func_01ffca8c(void *a, void *b, void *c);
s32 func_0203ef38(Unk_ov004_V3 *out, void *in);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s32 a);
void func_020e84f8(void *m, s32 x, s32 y, s32 z);
void func_02045570(void *p, u32 a);
void func_0204eb30(void *grid, u16 *v, s32 x, s32 y, s32 z);
s32 func_0213335c(u32 a, u32 b);
s32 func_02133150(s32 a, s32 b);
void func_ov004_0222c788(s32 mgr, u32 id, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 c, s32 d, s32 e);
void func_ov004_0222c7e0(s32 mgr, u32 id, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 c, s32 d, s32 e);
extern u8 data_ov004_022402b8[];
extern u8 data_ov004_022514b4[];
extern u8 data_0213b91c[];
extern s32 data_021c47c4;
extern s32 data_ov004_022514a4;
extern u8 data_021f47e0[];

void func_ov004_0222c3a8(Unk_ov004_Entry *e);
void func_ov004_0222c46c(Unk_ov004_Entry *e);
void func_ov004_0222c204(Unk_ov004_Entry *e);
void func_ov004_0222c2e0(Unk_ov004_Entry *e, Unk_ov004_P2 *p, Unk_ov004_V3 *a, Unk_ov004_V3 *b, u32 v);
void func_ov004_0222c3c8(Unk_ov004_Entry *e, s32 idx, Unk_ov004_P2 *p, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 flag, u32 idv, s32 unused, s32 s16v, u32 u8v);
s32 func_ov004_0222bff4(void *base, s32 idx, Unk_ov004_P2 *p, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 flag, u32 idv, s32 s16v, u32 u8v);
}

// ---------------------------------------------------------------- 0224e488 manager
Unk_ov004_0224e488::Unk_ov004_0224e488() {
    func_020548d0(unk_50);
    func_02135714(unk_108, 1, 0x20, (void *)func_ov004_0222aeb8, (void *)func_ov004_0222aea0);
    func_ov004_0222b3a8(unk_128);
    func_ov004_0222b11c(unk_1228);
    func_ov004_0222ae54(unk_3328);
    func_02031c48(unk_3460);
    func_ov004_0222acc4(unk_34fc);
    unk_3534 = data_0213b91c;
    unk_3520 = unk_3521 = unk_3540 = -1;
}

extern "C" Unk_ov004_0224e488 *func_ov004_0222bce0() {
    return new Unk_ov004_0224e488;
}

// ---------------------------------------------------------------- 0224e53c
BOOL Unk_ov004_0224e53c::vfunc_18() {
    u32 idx = func_020b50e8();
    Unk_0209d498_Time t;
    ((u32 *)&t)[0] = 0;
    ((u32 *)&t)[1] = 0;
    func_0209d498(&t);
    if (idx < 0x33) {
        if (data_ov004_022402b8[idx] != 0) {
            if (t.b4 == 0xc && t.b3 == 0x1f) {
                u32 secs = 0x15180 - (t.b0 + (t.b1 * 0x3c + t.b2 * 0xe10));
                u32 h = secs / 0xe10;
                secs = secs - h * 0xe10;
                u32 m = secs / 0x3c;
                secs = secs - m * 0x3c;
                unk_51 = secs % 10;
                if (unk_51 != unk_50) {
                    if (h == 0) {
                        if (m == 1 && secs == 0) {
                            if (unk_52 == 0) func_0200402c(0x62);
                        } else if (m == 0) {
                            if (secs == 0) {
                                if (unk_52 == 0) func_0200402c(0x61);
                            } else if (secs <= 10) {
                                if (unk_52 == 0) func_0200402c(0x60);
                            } else {
                                if (unk_52 == 0) func_0200402c(0x62);
                            }
                        }
                        unk_52 = 0;
                    }
                }
                unk_50 = unk_51;
            } else if (t.b4 == 1) {
                if (t.b3 == 1 && t.b2 == 0 && t.b1 == 0 && t.b0 == 0) {
                    if (unk_53 == 0) {
                        func_0200402c(0x61);
                        unk_53 = 1;
                    }
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224e53c::vfunc_00() {
    unk_52 = 1;
    return TRUE;
}

Unk_ov004_0224e53c::Unk_ov004_0224e53c() {}
Unk_ov004_0224e53c::~Unk_ov004_0224e53c() {}

extern "C" Unk_ov004_0224e53c *func_ov004_0222beb8() {
    return new Unk_ov004_0224e53c;
}

Unk_ov004_0224e594::~Unk_ov004_0224e594() {}

// ---------------------------------------------------------------- effect entries
extern "C" s32 func_ov004_0222bf34(s32 idx, u32 v, Unk_ov004_V3 *a, Unk_ov004_V3 *b, u32 f) {
    Unk_ov004_V3 la;
    Unk_ov004_V3 lb;
    Unk_ov004_P2 pp;
    la = *a;
    lb = *b;
    pp.a = 0;
    pp.b = 0;
    return func_ov004_0222bff4(data_ov004_022514b4, idx, &pp, &la, &lb, 0, v, 0, *(u8 *)&f);
}

extern "C" s32 func_ov004_0222bf80(s32 idx, u32 v, Unk_ov004_P2 *p, Unk_ov004_V3 *b, u32 f) {
    Unk_ov004_P2 pair;
    Unk_ov004_V3 t;
    Unk_ov004_V3 lb;
    Unk_ov004_V3 lc;
    func_0204ed8c(&t, p->a, p->b);
    if (*(u8 *)&f != 0) {
        t.y = func_ov004_02234f80(p->a, p->b);
    }
    lb = *b;
    lc = t;
    pair = *p;
    return func_ov004_0222bff4(data_ov004_022514b4, idx, &pair, &lb, &lc, 0, v, 0, *(u8 *)&f);
}

extern "C" s32 func_ov004_0222bff4(void *base, s32 idx, Unk_ov004_P2 *p, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 flag, u32 idv, s32 s16v, u32 u8v) {
    s32 g = data_021c47c4;
    if (g == 0) return 0;
    Unk_ov004_Entry *e = (Unk_ov004_Entry *)base + idx * 3;
    BOOL r = FALSE;
    s32 i;
    for (i = 0; i < 3; e++, i++) {
        if (e->unk_04 == 0) {
            Unk_ov004_V3 la;
            Unk_ov004_V3 lb;
            Unk_ov004_P2 pp;
            la = *a;
            lb = *b;
            pp = *p;
            func_ov004_0222c3c8(e, idx, &pp, &la, &lb, flag, *(u16 *)&idv, g, *(s16 *)&s16v, *(u8 *)&u8v);
            e->unk_04 = 2;
            r = TRUE;
            break;
        }
    }
    return r;
}

extern "C" void func_ov004_0222c08c(Unk_ov004_Entry *e) {
    s32 i;
    for (i = 0; i < 15; e++, i++) {
        if (e->unk_04 != 0) func_ov004_0222c3a8(e);
        func_02003e50(e->unk_4c);
    }
}

extern "C" void func_ov004_0222c0b8(Unk_ov004_Entry *e) {
    volatile u16 id = 0xfff1;
    s32 i;
    for (i = 0; i < 15; e++, i++) {
        id = e->unk_08;
        if (e->unk_04 != 0 && id != 0xfff1) {
            Unk_ov004_V3 *q = &e->unk_3c;
            Unk_ov004_V3 v;
            s32 r = func_0203ef38(&v, &e->unk_24);
            func_020e8388(data_021f47e0, v.x, v.y, v.z);
            func_020e8434(data_021f47e0, r);
            func_020e84f8(data_021f47e0, e->unk_3c.x, q->y, q->z);
            u32 idc = id;
            u32 t = (id & 0xf000) >> 12;
            if (t == 1 || t == 3 || t == 4) {
                Unk_ov004_V3 pos;
                Unk_ov004_V3 sc;
                Unk_ov004_V3 *pv = &e->unk_24;
                pos.x = e->unk_24.x;
                pos.y = pv->y;
                pos.z = pv->z;
                sc.x = 0x1000;
                sc.y = 0x1000;
                sc.z = 0x1000;
                func_ov004_0222c788(data_ov004_022514a4, idc, &pos, &sc, 0, 0, 0);
            }
        }
    }
}

extern "C" void func_ov004_0222c174(Unk_ov004_Entry *e) {
    volatile u16 id = 0xfff1;
    s32 i;
    Unk_ov004_V3 v;
    for (i = 0; i < 15; e++, i++) {
        if (e->unk_04 == 2) {
            e->unk_8d = e->unk_8d + 1;
            id = e->unk_08;
            if (e->unk_0c == 0) func_ov004_0222c204(e);
            v.x = e->unk_24.x;
            v.y = e->unk_24.y;
            v.z = e->unk_24.z;
            func_02003e80(e->unk_4c, &v);
        }
    }
}

extern "C" void func_ov004_0222c1d4(Unk_ov004_Entry *e) {
    s32 i;
    for (i = 0; i < 15; e++, i++) {
        e->unk_04 = 0;
        e->unk_08 = 0xfff1;
        e->unk_0a = 0xfff1;
        func_02003ecc(e->unk_4c);
    }
}

extern "C" void func_ov004_0222c204(Unk_ov004_Entry *e) {
    e->unk_3c.x = e->unk_3c.x + 0x19a;
    if (e->unk_3c.x >= 0x1000) e->unk_3c.x = 0x1000;
    e->unk_3c.z = e->unk_3c.x;
    e->unk_30.y = e->unk_30.y - 0x400;
    func_01ffca8c(&e->unk_24, &e->unk_30, &e->unk_24);
    if (e->unk_30.y < 0 && e->unk_24.y < e->unk_18.y) {
        if (e->unk_8c < 2) {
            volatile u16 id = 0xfff1;
            id = e->unk_0a;
            BOOL in = FALSE;
            u16 v1 = id;
            u16 v2 = id;
            if (v2 >= 0x1492 && v1 <= 0x14fd) in = TRUE;
            if (in) func_02003e70(e->unk_4c, 0x70, 0x7f, 0);
        }
        e->unk_24.y = e->unk_18.y;
        if (e->unk_8c == 0) {
            e->unk_8c = 1;
            e->unk_30.y = 0x600;
            e->unk_30.x = (e->unk_30.x * 0x4cd) >> 12;
            e->unk_30.z = (e->unk_30.z * 0x4cd) >> 12;
        } else {
            e->unk_30.x = 0;
            e->unk_30.y = 0;
            e->unk_30.z = 0;
            func_ov004_0222c3a8(e);
        }
    }
}

extern "C" void func_ov004_0222c2e0(Unk_ov004_Entry *e, Unk_ov004_P2 *p, Unk_ov004_V3 *from, Unk_ov004_V3 *to, u32 v32) {
    volatile u16 id = 0xfff1;
    Unk_ov004_V3 t;
    func_0204ed8c(&t, p->a, p->b);
    if (to->y == 0) {
        s32 z = func_02133150(to->z - from->z, 9);
        e->unk_30.x = func_02133150(to->x - from->x, 9);
        e->unk_30.y = 0x1000;
        e->unk_30.z = z;
    } else {
        s32 z = func_02133150(to->z - from->z, 12);
        e->unk_30.x = func_02133150(to->x - from->x, 12);
        e->unk_30.y = 0x1800;
        e->unk_30.z = z;
    }
    u16 v = *(u16 *)&v32;
    e->unk_08 = v;
    e->unk_0a = v;
    e->unk_24.x = from->x;
    e->unk_24.y = from->y;
    e->unk_24.z = from->z;
    e->unk_3c = Unk_ov004_V3(0, 0x1000, 0);
    id = v;
    u32 k = (id & 0xf000) >> 12;
    if (k == 3) goto zero;
    if (k == 4) {
    zero:
        e->unk_8e = 0;
    } else {
        func_02003e70(e->unk_4c, 0x75, 0x7f, 0);
    }
}

extern "C" void func_ov004_0222c3a8(Unk_ov004_Entry *e) {
    func_ov004_0222c46c(e);
    e->unk_04 = 0;
    e->unk_0c = 1;
    e->unk_08 = 0xfff1;
    e->unk_0a = 0xfff1;
}

extern "C" void func_ov004_0222c3c8(Unk_ov004_Entry *e, s32 idx, Unk_ov004_P2 *p, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 flag, u32 idv, s32 unused, s32 s16v, u32 u8v) {
    e->unk_00 = idx;
    e->unk_04 = 1;
    e->unk_0c = flag;
    e->unk_10.a = p->a;
    e->unk_10.b = p->b;
    e->unk_18.x = b->x;
    e->unk_18.y = b->y;
    e->unk_18.z = b->z;
    e->unk_48 = *(s16 *)&s16v;
    e->unk_4a = 0;
    e->unk_8e = 1;
    e->unk_8f = 1;
    e->unk_90 = *(u8 *)&u8v;
    e->unk_8d = 0;
    e->unk_8c = 0;
    if (flag == 0) {
        Unk_ov004_V3 la;
        Unk_ov004_V3 lb;
        Unk_ov004_P2 pp;
        la = *a;
        lb = *b;
        pp = *p;
        func_ov004_0222c2e0(e, &pp, &la, &lb, *(u16 *)&idv);
    }
}

extern "C" void func_ov004_0222c46c(Unk_ov004_Entry *e) {
    if (e->unk_8f != 0) {
        e->unk_8f = 0;
        Unk_ov004_P2 v;
        v.a = e->unk_10.a;
        v.b = e->unk_10.b;
        func_02045570(&v, e->unk_90);
    }
}

extern "C" void func_ov004_0222c49c(s32 x, s32 y, u16 v, s32 z) {
    func_020b5184();
    if (data_021c47c4 != 0) {
        volatile u16 buf = 0xfff1;
        buf = v;
        func_0204eb30((void *)data_021c47c4, (u16 *)&buf, x, y, z);
    }
}

extern "C" void func_ov004_0222c4d8(u32 id, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 c, s16 d, s16 e) {
    if (data_ov004_022514a4 != 0) {
        Unk_ov004_V3 la;
        Unk_ov004_V3 lb;
        la = *a;
        lb = *b;
        func_ov004_0222c788(data_ov004_022514a4, id, &la, &lb, c, d, e);
    }
}

extern "C" void func_ov004_0222c524(u32 id, Unk_ov004_V3 *a, Unk_ov004_V3 *b, s32 c, s16 d, s16 e) {
    if (data_ov004_022514a4 != 0) {
        Unk_ov004_V3 la;
        Unk_ov004_V3 lb;
        la = *a;
        lb = *b;
        func_ov004_0222c7e0(data_ov004_022514a4, id, &la, &lb, c, d, e);
    }
}
