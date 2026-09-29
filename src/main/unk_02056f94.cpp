#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_02057304_Vec3 {
    s32 x, y, z;
};

// Library class (see unk_020b8464.cpp)
class Unk_020e45ec {
public:
    Unk_020e45ec();
    void func_020b89c8(void);

    u32 unk_00[7];
};

class Unk_02056f94 {
public:
    Unk_02056f94();
    ~Unk_02056f94();

    /* 0x00 */ Unk_020e45ec unk_00[2];
};

Unk_02056f94::~Unk_02056f94() {
    unk_00[0].func_020b89c8();
    unk_00[1].func_020b89c8();
}

Unk_02056f94::Unk_02056f94() {
}

extern "C" {
s32 func_02057158(void *p, s32 a);
void func_0212a360(void *p);
s32 func_02106300(void *a, void *b);
u32 func_02057180(u32 v);
u32 func_020571c8(u32 v);
}

// Resource header
class Unk_02056fd8 {
public:
    u32 func_02056fcc(s32 a);
    u32 func_02056fd8(s32 idx);
    void func_02057030(void);
    void *func_02057048(s32 idx);
    s32 func_02057078(s32 a);
    u32 func_02057084(s32 idx);
    void *func_020570b0(s32 idx);
    void *func_020570e0(void);
    s32 func_02057100(s32 a);
    u32 func_0205710c(void);
    s32 func_02057110(s32 a);

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 unk_0c[2];
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u8 unk_18[0x18];
    /* 0x30 */ u16 unk_30;
    /* 0x32 */ u16 unk_32;
    /* 0x34 */ u16 unk_34;
    /* 0x36 */ u16 unk_36;
    /* 0x38 */ u32 unk_38;
    /* 0x3c */ u8 unk_3c[6];
    /* 0x42 */ u16 unk_42;
};

u32 Unk_02056fd8::func_02056fcc(s32 a) {
    return func_02057158((u8 *)this + 0x40, a);
}

u32 Unk_02056fd8::func_02056fd8(s32 idx) {
    u8 *base = (u8 *)this + unk_34;
    u8 *ent = 0;
    s32 i;
    u32 cnt;
    if (idx == -1) {
        return (u32)ent;
    }
    u32 off = *(u16 *)(base + 6);
    u32 stride = *(u16 *)(base + off);
    ent = base + off + 4;
    ent += stride * idx;
    i = idx + 1;
    cnt = base[1];
    for (;;) {
        if (i >= (s32)cnt) {
            return (unk_30 - *(u16 *)ent) << 3;
        }
        u8 *b2 = (u8 *)this + *(volatile u16 *)&unk_34;
        u32 off2 = *(u16 *)(b2 + 6);
        u8 *l2 = b2 + off2;
        u32 stride2 = *(u16 *)(b2 + off2);
        u8 *e2 = l2 + stride2 * i;
        u32 q = *(u16 *)(e2 + 4);
        u32 p0 = *(u16 *)ent;
        if (q > p0) {
            return (q - p0) << 3;
        }
        i++;
    }
}

void Unk_02056fd8::func_02057030(void) {
    s32 u;
    func_02057048(func_02057078(u));
}

void *Unk_02056fd8::func_02057048(s32 idx) {
    if (idx == -1) {
        return 0;
    }
    u8 *base = (u8 *)this + unk_34;
    u32 off = *(u16 *)(base + 6);
    u8 *list = base + off;
    u8 *data = (u8 *)this + unk_38;
    u32 stride = *(u16 *)(base + off);
    u8 *ent = list + stride * idx;
    return data + (*(u16 *)(ent + 4) << 3);
}

s32 Unk_02056fd8::func_02057078(s32 a) {
    return func_02057158((u8 *)this + unk_34, a);
}

u32 Unk_02056fd8::func_02057084(s32 idx) {
    if (idx == -1) {
        return 0;
    }
    u8 *base = (u8 *)this + 0x3c;
    u32 off = unk_42;
    u8 *list = base + off;
    u32 stride = *(u16 *)(base + off);
    u8 *ent = list + stride * idx;
    return func_02057180(*(u32 *)(ent + 4));
}

void *Unk_02056fd8::func_020570b0(s32 idx) {
    u8 *base = (u8 *)this + 0x3c;
    u32 off = unk_42;
    u8 *list = base + off;
    u8 *data = (u8 *)this + unk_14;
    u32 stride = *(u16 *)(base + off);
    u8 *ent = list + stride * idx;
    return data + ((*(u32 *)(ent + 4) & 0xffff) << 3);
}

void *Unk_02056fd8::func_020570e0(void) {
    s32 u;
    s32 idx = func_02057100(u);
    void *r = 0;
    if (idx != -1) {
        r = func_020570b0(idx);
    }
    return r;
}

s32 Unk_02056fd8::func_02057100(s32 a) {
    return func_02057158((u8 *)this + 0x3c, a);
}

u32 Unk_02056fd8::func_0205710c(void) {
    return unk_14;
}

s32 Unk_02056fd8::func_02057110(s32 a) {
    return func_02057158((u8 *)this + unk_08 + 4, a);
}

class Unk_02057120 {
public:
    u32 func_02057120(void);
    u32 func_0205713c(void);
    u32 func_0205714c(void);

    /* 0x00 */ u32 unk_00[5];
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u16 unk_1c;
};

u32 Unk_02057120::func_02057120(void) {
    if (((unk_14 & 0x1c000000) >> 26) == 2) {
        return unk_1c << 3;
    }
    return unk_1c << 4;
}

u32 Unk_02057120::func_0205713c(void) {
    return (unk_14 & 0xffff) << 3;
}

u32 Unk_02057120::func_0205714c(void) {
    return func_02057180(unk_14);
}

s32 func_02057158(void *p, s32 a) {
    u32 buf[4];
    buf[0] = 0;
    buf[1] = 0;
    buf[2] = 0;
    buf[3] = 0;
    func_0212a360(buf);
    return func_02106300(p, buf);
}

u32 func_02057180(u32 v) {
    u32 r = func_020571c8(v);
    switch ((v & 0x1c000000) >> 26) {
    case 2:
        r >>= 2;
        break;
    case 3:
        r >>= 1;
        break;
    case 5:
        r >>= 2;
        break;
    case 7:
        r <<= 1;
        break;
    }
    return r;
}

extern u16 data_020dbe94[];

u32 func_020571c8(u32 v) {
    return data_020dbe94[(v & 0x700000) >> 20] * data_020dbe94[(v & 0x3800000) >> 23];
}

// ---- Camera-follow style singleton (vtable 0x020dc034) ----

struct Unk_020dc034_Cc {
    /* 0x00 */ u8 unk_00[0x8e];
    /* 0x8e */ s16 unk_8e;
};

class Unk_020dc034_Dtor {
public:
    ~Unk_020dc034_Dtor();
    u8 unk_00[4];
};

class Unk_020dc034;

extern "C" {
extern Unk_020dc034 *data_021c5a38;
extern u8 data_021c5a28[];
extern u8 data_020ca684[];
extern Unk_02057304_Vec3 data_021c5a78;
extern u32 data_021c5a54;
extern u32 data_021c5a5c;
extern u32 data_021c5a4c;
extern s32 data_021c5a50;
extern s32 data_021c5a48;
extern u8 data_021c5b10[];
void func_0204f3b4(s32 a);
s32 func_020e9650(void *a, void *b);
void func_020e761c(s32 *p, s32 target, s32 step);
void func_020e93a0(void *v, s32 a);
void func_01ffca8c(void *a, void *b, void *c);
}

class Unk_020dc034 : public Unk_020d8c7c {
public:
    ~Unk_020dc034();

    void func_02057450(void);
    void func_020574cc(void);
    void func_020575f8(void);
    void func_02057724(void);
    void func_02057800(void);
    void func_0205781c(void);
    void func_02057824(void);
    void func_0205783c(void);

    s32 func_02058cfc(s32 a, s32 b);
    s32 func_02058fec(s32 a);
    BOOL func_02058f5c(void);
    s32 func_02058f9c(s32 a, s32 b);
    s32 func_0205902c(s32 a);
    s32 func_02059068(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
    void func_02059184(void);
    void func_02058d34(u32 v);
    void func_02058d3c(Unk_02057304_Vec3 *out);
    void func_02058614(void);

    /* 0x050 */ u16 unk_50;
    /* 0x052 */ u16 unk_52;
    /* 0x054 */ u32 unk_54;
    /* 0x058 */ u8 unk_58;
    /* 0x059 */ u8 unk_59[7];
    /* 0x060 */ Unk_02057304_Vec3 unk_60;
    /* 0x06c */ Unk_02057304_Vec3 unk_6c;
    /* 0x078 */ Unk_02057304_Vec3 unk_78;
    /* 0x084 */ Unk_02057304_Vec3 unk_84;
    /* 0x090 */ Unk_02057304_Vec3 unk_90;
    /* 0x09c */ u8 unk_9c[0xc];
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ s32 unk_ac;
    /* 0x0b0 */ s32 unk_b0;
    /* 0x0b4 */ u8 unk_b4[8];
    /* 0x0bc */ s32 unk_bc;
    /* 0x0c0 */ u32 unk_c0;
    /* 0x0c4 */ s32 unk_c4;
    /* 0x0c8 */ u8 unk_c8;
    /* 0x0c9 */ u8 unk_c9[3];
    /* 0x0cc */ Unk_020dc034_Cc *unk_cc;
    /* 0x0d0 */ u32 unk_d0;
    /* 0x0d4 */ u8 unk_d4;
    /* 0x0d5 */ u8 unk_d5;
    /* 0x0d6 */ u16 unk_d6;
    /* 0x0d8 */ u8 unk_d8;
    /* 0x0d9 */ u8 unk_d9;
    /* 0x0da */ u8 unk_da;
    /* 0x0db */ u8 unk_db;
    /* 0x0dc */ Unk_020dc034_Dtor unk_dc;
};

Unk_020dc034::~Unk_020dc034() {
}

extern "C" {
s32 func_020573f4(s32 a);
s32 func_02057250(s32 a, s32 b) {
    s32 r = 0;
    if (data_021c5a38) {
        r = data_021c5a38->func_02058cfc(a, b);
    }
    return r;
}

void func_02057278(u16 *out) {
    *out = 0xfff1;
    if (data_021c5a38) {
        *out = data_021c5a38->unk_50;
    }
}

BOOL func_02057294(void) {
    BOOL r = FALSE;
    if (data_021c5a38) {
        if (data_021c5a38->unk_c8 != 0) {
            r = TRUE;
        }
    }
    return r;
}

BOOL func_020572b0(u32 a) {
    BOOL r = FALSE;
    Unk_020dc034 *g = data_021c5a38;
    if (g) {
        if ((g->unk_c8 == a && g->unk_d9 == 1) || g->unk_da == a) {
            r = TRUE;
        }
    }
    return r;
}

s32 func_020572e0(s32 a) {
    s32 r = 0;
    if (data_021c5a38) {
        r = data_021c5a38->func_02058fec(a);
    }
    return r;
}

BOOL func_02057304(Unk_02057304_Vec3 *out) {
    BOOL r = FALSE;
    Unk_020dc034 *g = data_021c5a38;
    if (g) {
        Unk_02057304_Vec3 *pv = &g->unk_60;
        out->x = pv->x;
        out->y = pv->y;
        out->z = pv->z;
        r = TRUE;
    }
    return r;
}

struct Unk_02057328_Obj {
    u8 unk_00[0x5c];
    Unk_02057304_Vec3 unk_5c;
};

BOOL func_02057328(Unk_02057328_Obj *p) {
    BOOL r = FALSE;
    if (p) {
        Unk_020dc034 *g = data_021c5a38;
        if (g) {
            if (func_020e9650(&p->unk_5c, &g->unk_60) <= g->unk_bc) {
                r = TRUE;
            } else if (g->func_02058f5c()) {
                if (data_021c5a38->unk_d5 == 0) {
                    r = TRUE;
                }
            }
        }
    }
    return r;
}

void func_02057378(s32 a) {
    if (data_021c5a38) {
        if (func_020573f4(a) == 1) {
            if (data_021c5a38->unk_c4 != -1) {
                func_0204f3b4(data_021c5a38->unk_c4);
            }
            data_021c5a38->func_02059184();
        }
    }
}

u8 func_020573b4(void) {
    if (data_021c5a38) {
        return data_021c5a38->unk_58;
    }
    return 0xc;
}

s32 func_020573cc(s32 a, s32 b) {
    s32 r = 0;
    if (data_021c5a38) {
        r = data_021c5a38->func_02058f9c(a, b);
    }
    return r;
}

s32 func_020573f4(s32 a) {
    s32 r = 0;
    if (data_021c5a38) {
        r = data_021c5a38->func_0205902c(a);
    }
    return r;
}

s32 func_02057418(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f) {
    s32 r = 0;
    if (data_021c5a38) {
        r = data_021c5a38->func_02059068(a, b, c, d, e, f);
    }
    return r;
}

}

static inline s32 Unk_020574cc_Abs(s32 v) {
    return v < 0 ? -v : v;
}

void Unk_020dc034::func_02057450(void) {
    static void (Unk_020dc034::*tbl[3])(void) = {
        &Unk_020dc034::func_02057724,
        &Unk_020dc034::func_020575f8,
        &Unk_020dc034::func_020574cc,
    };
    u32 state = unk_d4;
    if (state < 3) {
        (this->*tbl[state])();
    }
}

void Unk_020dc034::func_020574cc(void) {
    static s32 step = Unk_020574cc_Abs(0x1000 / data_021c5a28[1]);
    s32 tmp = unk_a8;
    s32 n = data_020ca684[2];
    if (unk_d6 >= n) {
        return;
    }
    func_02058d3c(&unk_60);
    func_020e761c(&tmp, 0, step);
    s32 t2 = tmp;
    unk_a8 = t2;
    unk_ac = t2;
    unk_b0 = t2;
    func_020e761c(&unk_84.x, 0, unk_90.x);
    func_020e761c(&unk_84.y, 0, unk_90.y);
    func_020e761c(&unk_84.z, 0, unk_90.z);
    if (unk_cc) {
        unk_78.x = unk_84.x;
        unk_78.y = unk_84.y;
        unk_78.z = unk_84.z;
        func_020e93a0(&unk_78, unk_cc->unk_8e);
    }
    func_01ffca8c(&unk_60, &unk_78, &unk_60);
    unk_d6++;
    if (unk_d6 >= n) {
        unk_d4 = 3;
        func_02058d34(0);
    }
}

void Unk_020dc034::func_020575f8(void) {
    s32 c, b, a;
    s32 n = data_020ca684[1];
    if (unk_d6 >= n) {
        return;
    }
    func_02058d3c(&unk_6c);
    if (unk_cc) {
        unk_78.x = data_021c5a78.x;
        unk_78.y = data_021c5a78.y;
        unk_78.z = data_021c5a78.z;
        func_020e93a0(&unk_78, unk_cc->unk_8e);
    }
    func_01ffca8c(&unk_6c, &unk_78, &unk_6c);
    func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
    func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
    func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
    unk_d6++;
    if (unk_d6 >= n) {
        unk_6c.x = 0;
        unk_6c.y = 0;
        unk_6c.z = 0;
        unk_84.x = data_021c5a78.x;
        unk_84.y = data_021c5a78.y;
        unk_84.z = data_021c5a78.z;
        unk_78.x = 0;
        unk_78.y = 0;
        unk_78.z = 0;
        a = Unk_020574cc_Abs(unk_84.z / 8);
        b = Unk_020574cc_Abs(unk_84.y / 8);
        c = Unk_020574cc_Abs(unk_84.x / 8);
        unk_90.x = c;
        unk_90.y = b;
        unk_90.z = a;
        unk_d4 = 2;
    }
}

void Unk_020dc034::func_02057724(void) {
    s32 c, b, a;
    s32 n = data_020ca684[0];
    if (unk_d6 >= n) {
        return;
    }
    unk_d6++;
    if (unk_d6 >= n) {
        func_02058d3c(&unk_6c);
        if (unk_cc) {
            unk_78.x = data_021c5a78.x;
            unk_78.y = data_021c5a78.y;
            unk_78.z = data_021c5a78.z;
            func_020e93a0(&unk_78, unk_cc->unk_8e);
        }
        func_01ffca8c(&unk_6c, &unk_78, &unk_6c);
        u32 d = data_021c5a28[0];
        a = Unk_020574cc_Abs((unk_6c.z - unk_60.z) / (s32)d);
        b = Unk_020574cc_Abs((unk_6c.y - unk_60.y) / (s32)d);
        c = Unk_020574cc_Abs((unk_6c.x - unk_60.x) / (s32)d);
        unk_90.x = c;
        unk_90.y = b;
        unk_90.z = a;
        unk_d4 = 1;
    }
}

void Unk_020dc034::func_02057800(void) {
    func_02058d34(1);
    unk_d6 = 0;
    unk_d4 = 0;
}

void Unk_020dc034::func_0205781c(void) {
    func_02058614();
}

void Unk_020dc034::func_02057824(void) {
    func_02058d34(1);
    unk_d6 = 0;
}

void Unk_020dc034::func_0205783c(void) {
    static s32 step = Unk_020574cc_Abs(0x1000 / 8);
    s32 tmp = unk_a8;
    if ((s32)unk_d6 >= 8) {
        return;
    }
    func_02058d3c(&unk_60);
    func_020e761c(&tmp, 0, step);
    s32 t2 = tmp;
    unk_a8 = t2;
    unk_ac = t2;
    unk_b0 = t2;
    func_020e761c(&unk_84.x, 0, unk_90.x);
    func_020e761c(&unk_84.y, 0, unk_90.y);
    func_020e761c(&unk_84.z, 0, unk_90.z);
    if (unk_cc) {
        unk_78.x = unk_84.x;
        unk_78.y = unk_84.y;
        unk_78.z = unk_84.z;
        func_020e93a0(&unk_78, unk_cc->unk_8e);
    }
    func_01ffca8c(&unk_60, &unk_78, &unk_60);
    unk_d6++;
    if ((s32)unk_d6 >= 8) {
        func_02058d34(0);
    }
}
