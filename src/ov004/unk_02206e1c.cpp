#include "types.h"
#include "Unk_020d8c7c.h"

// ---- helper types ----
struct Unk_ov004_02206558 {
    u32 count;
    struct {
        s32 x;
        s32 y;
    } e[4];
};

struct Unk_ov004_02206520_Vec2 {
    s32 x, y;
};

struct Unk_ov004_022071cc_Pkt {
    u16 a : 9;
    u16 b : 7;
    u16 x : 4;
    u16 y : 4;
    u16 f : 1;
    u16 id : 6;
    u16 pad : 1;
};

struct Unk_ov004_02206ec8_Ctx {
    u8 pad_00[0xb8];
    u32 *unk_b8;
};

class Unk_ov004_02206418 {
public:
    Unk_ov004_02206418();
    ~Unk_ov004_02206418();
    u32 unk_00[2];
    u32 unk_08[2];
    u32 unk_10[2];
    u32 unk_18[2];
    u32 unk_20[2];
    u32 unk_28;
};

class Unk_020dbe04 {
public:
    Unk_020dbe04();
    virtual ~Unk_020dbe04();
    u8 unk_04[0x30];
};

class Unk_020dbe7c {
public:
    Unk_020dbe7c();
    virtual ~Unk_020dbe7c();
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class Unk_020dbe4c : public Unk_020dbe7c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
    u32 unk_18;
    u32 unk_1c;
};

class Unk_ov004_02248804 : public Unk_020dbe4c {
public:
    Unk_ov004_02248804();
    virtual ~Unk_ov004_02248804();
    virtual void vfunc_08();
    u32 func_ov004_02206e74();
};

class Unk_ov004_02206e38 {
public:
    Unk_ov004_02206e38();
    ~Unk_ov004_02206e38();
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    Unk_020dbe04 unk_10;
    Unk_ov004_02206418 unk_44;
    u16 unk_70;
    u8 unk_72;
};

// ---- actor hierarchy ----
struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *unk_04;
    u32 unk_08;
    void *unk_0c;
};

struct Unk_0203e4f0_Vec {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_0203e4f0_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_ov004_0224882c : public Unk_020d9670 {
public:
    virtual void vfunc_60();
    virtual void vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b);
    virtual void vfunc_68();
    virtual void vfunc_6c(s32 a, void *b);

    BOOL func_ov004_02206f8c();
    void func_ov004_02206fa0(s32 a);
    void func_ov004_02206fe0(Unk_0203e4f0_Vec *v);
    void func_ov004_02207004();
    void func_ov004_02207038(s32 a);
    BOOL func_ov004_0220711c(s32 *ox, s32 *oy, s32 a, s32 b);
    u16 func_ov004_022071cc(s32 a, s32 b);
    BOOL func_ov004_022072b4(s32 a, s32 b);
    BOOL func_ov004_02207598(s32 a);
    BOOL func_ov004_022075a4(s32 a);
    BOOL func_ov004_022075b0();
    void func_ov004_022076b0();
    void func_ov004_02207704();

    /* 0xec */ u8 pad_ec[0x188 - 0xec];
    /* 0x188 */ u8 unk_188[0x284 - 0x188];
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[0x73c - 0x285];
    /* 0x73c */ u8 unk_73c[2];
    /* 0x73e */ s8 unk_73e;
    /* 0x73f */ s8 unk_73f;
    /* 0x740 */ u8 unk_740;
    /* 0x741 */ u8 pad_741[3];
    /* 0x744 */ u8 unk_744[0x1c];
    /* 0x760 */ u8 unk_760[8];
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ u8 pad_76c[0x779 - 0x76c];
    /* 0x779 */ u8 unk_779;
    /* 0x77a */ u8 pad_77a[2];
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ u8 pad_780[4];
    /* 0x784 */ s32 unk_784;
    /* 0x788 */ u8 unk_788;
    /* 0x789 */ u8 pad_789[7];
    /* 0x790 */ s32 unk_790;
};

// ---- externs ----
extern "C" {
extern s32 data_020c8cbc;
extern void *data_021c47c4;
extern u8 data_020e416c;

s32 func_ov004_02205998(void *p, s32 v);
u32 func_ov004_02205994(void *p);
void func_ov004_02206558(Unk_ov004_02206558 *c);
void func_ov004_02206554(Unk_ov004_02206558 *c);
Unk_ov004_02206520_Vec2 *func_ov004_02206520(Unk_ov004_02206558 *c, u32 i);
u32 func_ov004_0220652c(Unk_ov004_02206558 *c);
void func_ov004_02207c40(void *self, Unk_ov004_02206558 *c, s32 a, s32 b);
void func_ov004_02207100(void *v, u32 x);
void func_ov004_02208910(void *self, void *out, s32 a);
void func_ov004_022088c0(void *self, void *out);
u32 func_ov004_022087a4(void *self);
void func_ov004_0223717c(void *a, void *b);
void func_ov004_022078d8(void *self, s32 a, s32 b, s32 c, s32 d);
void func_ov004_02207ac4(void *self, s32 a, s32 b);
BOOL func_020b52f8(void);
BOOL func_ov004_02208894(void);
void *func_02095204(u32 id);
BOOL func_ov004_0220607c(void *p, void *self);
void func_0204ee10(s32 *x, s32 *y, void *v);
void func_01ffca8c(void *out, s32 s, void *v);
void *func_ov004_02235718(void);
void *func_ov004_022355d8(void *a, s32 x, s32 y, u32 f);
BOOL func_02031284(s32 x, s32 y);
BOOL func_ov004_022057f0(void);
s32 func_0202ffdc(void *v);
BOOL func_ov004_02234f6c(void *v);
u16 *func_ov004_0222aaa0(void);
u32 func_02061950(u16 *p);
u32 func_02031060(u32 a);
BOOL func_ov004_02207838(void);
BOOL func_ov004_02205c7c(void *p);
s32 func_ov004_02234c2c(void *fn);
void func_02064460(u32 a, u32 b);
BOOL func_ov004_022057bc(void *self);
s32 func_020516a4(u32 a, u32 b);
BOOL func_ov004_02205bcc(void *p, u32 a, u32 b, u32 c);
void func_ov004_02209dd8(s32 a);
s32 func_ov004_02205b14(void *p);
s32 func_ov004_02209c44(void);
s32 func_ov004_02209c58(void);
s32 func_ov004_02209cf0(void);
s32 func_ov004_02209d10(void);

void func_0209028c(u32 id, void *v, u32 a, u32 b);
void *func_020947f0(u32 id);
void *func_02002bdc(void *v, void *cam);
void func_0204ed8c(void *out, s32 x, s32 y);
s32 func_020e9650(void *cam, void *v);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u8 layer);
BOOL func_0204b2d4(u16 *p);
u32 func_0204b248(u32 a, u32 b);
u32 func_020b52d0(void);
void *func_ov004_0223584c(void);
u32 func_ov004_02235740(void *a, void *self);
u32 func_020b50e8(void);
void func_020b1e74(void *p);
void func_020b1ddc(void *p);
}

// ---- functions ----
Unk_ov004_02206e38::~Unk_ov004_02206e38() {
}

Unk_ov004_02206e38::Unk_ov004_02206e38() : unk_70(0xfff1) {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_70 = 0xfff1;
    unk_72 = 0;
}

u32 Unk_ov004_02248804::func_ov004_02206e74() {
    return unk_18;
}

Unk_ov004_02248804::~Unk_ov004_02248804() {
}

Unk_ov004_02248804::Unk_ov004_02248804() {
}

void Unk_ov004_0224882c::vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b) {
    if (func_ov004_02205998(unk_760, a)) {
        u32 v = func_ov004_02205994(unk_760);
        *b->unk_b8 = v;
    }
}

void Unk_ov004_0224882c::vfunc_6c(s32 a, void *b) {
    if (unk_740 != 0) {
        if (unk_73e == a) {
            func_020b1e74(b);
        } else if (unk_73f == a) {
            func_020b1ddc(b);
        }
    }
}

void Unk_ov004_0224882c::vfunc_68() {
}

void Unk_ov004_0224882c::vfunc_60() {
}

extern "C" void func_ov004_02206f3c(u16 *out, Unk_ov004_0224882c *o) {
    if (o->unk_77c == 0x1c) {
        *out = 0xfff1;
    } else {
        *out = func_0204b248(func_ov004_022087a4(o), 0);
    }
}

extern "C" s32 func_ov004_02206f6c(void) {
    return func_ov004_02209c44();
}

extern "C" s32 func_ov004_02206f74(void) {
    return func_ov004_02209c58();
}

extern "C" s32 func_ov004_02206f7c(void) {
    return func_ov004_02209cf0();
}

extern "C" s32 func_ov004_02206f84(void) {
    return func_ov004_02209d10();
}

BOOL Unk_ov004_0224882c::func_ov004_02206f8c() {
    if (unk_768 == 2) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224882c::func_ov004_02206fe0(Unk_0203e4f0_Vec *v) {
    Unk_0203e4f0_Vec t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    func_0209028c(0x3d, &t, 0, 0);
}

void Unk_ov004_0224882c::func_ov004_02206fa0(s32 a) {
    s32 p[3];
    s32 q[3];
    s32 r[3];
    func_ov004_02208910(this, p, a);
    func_ov004_022088c0(this, q);
    s32 y = unk_5c[1];
    r[0] = (p[0] + q[0]) >> 1;
    r[1] = y;
    r[2] = (p[2] + q[2]) >> 1;
    func_ov004_02206fe0((Unk_0203e4f0_Vec *)r);
}

void Unk_ov004_0224882c::func_ov004_02207004() {
    void *cam = func_020947f0(4);
    if (cam) {
        Unk_0203e4f0_Vec v;
        func_ov004_022088c0(this, &v);
        func_ov004_02207100(&v, (u32)func_02002bdc(&v, cam));
    }
}

void Unk_ov004_0224882c::func_ov004_02207038(s32 a) {
    void *cam = func_020947f0(4);
    if (cam) {
        Unk_ov004_02206558 c;
        Unk_0203e4f0_Vec v1;
        Unk_0203e4f0_Vec v2;
        func_ov004_02206558(&c);
        func_ov004_02207c40(this, &c, 0, 0);
        s32 hi = 0;
        s32 hiIdx = ~hi;
        s32 loIdx = hiIdx;
        s32 lo = data_020c8cbc;
        u32 i;
        for (i = 0; i < func_ov004_0220652c(&c); i++) {
            Unk_ov004_02206520_Vec2 *e1 = func_ov004_02206520(&c, i);
            Unk_ov004_02206520_Vec2 *e2 = func_ov004_02206520(&c, i);
            func_0204ed8c(&v1, e1->x, e2->y);
            s32 d = func_020e9650(cam, &v1);
            if (d > hi) {
                hiIdx = i;
                hi = d;
            }
            if (d < lo) {
                loIdx = i;
                lo = d;
            }
        }
        if (a == 0) {
            hiIdx = loIdx;
        }
        if (hiIdx != -1) {
            Unk_ov004_02206520_Vec2 *p = func_ov004_02206520(&c, hiIdx);
            Unk_ov004_02206520_Vec2 *q = func_ov004_02206520(&c, hiIdx);
            func_0204ed8c(&v2, p->x, q->y);
            func_ov004_02207100(&v2, (u32)func_02002bdc(&v2, cam));
        }
        func_ov004_02206554(&c);
    }
}

extern "C" void func_ov004_02207100(void *a, u32 x) {
    u16 s[3];
    s[0] = 0;
    s[1] = x;
    s[2] = 0;
    func_ov004_0223717c(a, s);
}

BOOL Unk_ov004_0224882c::func_ov004_0220711c(s32 *ox, s32 *oy, s32 a, s32 b) {
    Unk_ov004_02206558 c;
    func_ov004_02206558(&c);
    func_ov004_02207c40(this, &c, a, *(s16 *)&b);
    void *grid = data_021c47c4;
    u32 i;
    for (i = 0; i < func_ov004_0220652c(&c); i++) {
        s32 y, x, hx, hy;
        u8 layer;
        layer = unk_284;
        y = func_ov004_02206520(&c, i)->y;
        x = func_ov004_02206520(&c, i)->x;
        hx = x >> 4;
        hy = y >> 4;
        u16 *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
        if (cell) {
            if (func_0204b2d4(cell)) {
                *ox = func_ov004_02206520(&c, i)->x;
                *oy = func_ov004_02206520(&c, i)->y;
                func_ov004_02206554(&c);
                return TRUE;
            }
        }
    }
    func_ov004_02206554(&c);
    return FALSE;
}

u16 Unk_ov004_0224882c::func_ov004_022071cc(s32 a, s32 b) {
    Unk_ov004_022071cc_Pkt p;
    s32 x;
    s32 y;
    if (func_020b52d0() != 0 || func_ov004_02206f8c()) {
        (*(u16 *)&p) = ((*(u16 *)&p) & 0xfffffe00) | ((u16)func_ov004_02235740(func_ov004_0223584c(), this) & 0x1ff);
        (*(u16 *)&p) = ((*(u16 *)&p) & 0xffff01ff) | ((func_020b50e8() & 0x7f) << 9);
        return (*(u16 *)&p);
    } else {
        if (func_ov004_0220711c(&x, &y, a, b)) {
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & ~0xf) | ((u16)(x & 0xf) & 0xf);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & ~0xf0) | (((u16)(y & 0xf) & 0xf) << 4);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & 0xfffffeff) | (((u16)(unk_284 & 1) & 1) << 8);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & 0xffff81ff) | ((func_020b50e8() & 0x3f) << 9);
            return (((u16 *)&p)[1]);
        }
        return 0;
    }
}

static inline BOOL Unk_ov004_02207650_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

static inline BOOL Unk_ov004_02207650_InRange(u16 *p) {
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= 0x1144 && v <= 0x1187) {
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov004_0224882c::func_ov004_02207598(s32 a) {
    return func_ov004_022072b4(a, 0);
}

BOOL Unk_ov004_0224882c::func_ov004_022075a4(s32 a) {
    return func_ov004_022072b4(0, a);
}

BOOL Unk_ov004_0224882c::func_ov004_022075b0() {
    Unk_ov004_02206558 c;
    func_ov004_02206558(&c);
    func_ov004_02207c40(this, &c, 0, 0);
    void *grid = data_021c47c4;
    if (unk_284 == 0 && unk_784 == 1) {
        u32 i;
        for (i = 0; i < func_ov004_0220652c(&c); i++) {
            s32 y = func_ov004_02206520(&c, i)->y;
            s32 x = func_ov004_02206520(&c, i)->x;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (cell && *cell != 0xfff1) {
                func_ov004_02206554(&c);
                return TRUE;
            }
        }
    }
    func_ov004_02206554(&c);
    return FALSE;
}

extern "C" s32 func_ov004_02207650(void) {
    if (Unk_ov004_02207650_IsOne(data_020e416c)) {
        u16 *p = func_ov004_0222aaa0();
        if (Unk_ov004_02207650_InRange(p)) {
            s32 q = func_02031060(func_02061950(p));
            if (q != 0xffff) {
                return q;
            }
        }
        return 0x4c1;
    }
    return 0xffff;
}

void Unk_ov004_0224882c::func_ov004_022076b0() {
    if (func_ov004_02206f84()) {
        if (func_ov004_02207838()) {
            if (func_ov004_02205c7c(unk_73c)) {
                if (func_ov004_02234c2c((void *)func_ov004_02209d10) == 1) {
                    func_02064460(0, 1);
                    if (func_ov004_022057bc(this)) {
                        func_020516a4(func_020b50e8(), 0);
                    }
                }
            }
        }
    }
}

void Unk_ov004_0224882c::func_ov004_02207704() {
    if (func_ov004_02206f84()) {
        if (func_ov004_02207838()) {
            u32 b = func_ov004_02205c7c(unk_73c);
            u32 f = unk_790 == 1 ? 1 : 0;
            if (func_ov004_02205bcc(unk_744, b, 1, f)) {
                s32 m = func_ov004_02234c2c((void *)func_ov004_02209d10);
                if (func_ov004_02205c7c(unk_73c)) {
                    if (m == 1) {
                        func_ov004_02209dd8(unk_790);
                        func_020516a4(func_020b50e8(), 1);
                    }
                } else if (m == 0) {
                    func_02064460(0, 8);
                    func_020516a4(func_020b50e8(), 0);
                }
            }
        }
    }
    func_ov004_02205b14(unk_744);
}

#define UNK_OV004_022072B4_FAIL()                              \
    {                                                          \
        func_ov004_022078d8(this, 0, 0, 0, 0);                 \
        func_ov004_02206554(&c2);                              \
        func_ov004_02206554(&c1);                              \
        return FALSE;                                          \
    }

BOOL Unk_ov004_0224882c::func_ov004_022072b4(s32 a, s32 b) {
    s32 x0, y0, x1, y1;
    Unk_0203e4f0_Vec v1;
    Unk_0203e4f0_Vec v2;
    Unk_ov004_02206558 c1;
    Unk_ov004_02206558 c2;
    Unk_ov004_0224882c *obj;
    s32 y;
    s32 y2;
    void *grid;
    u16 *cell1;
    s32 x2;
    s32 x;
    if (unk_779 != 0) {
        return FALSE;
    }
    if (!func_020b52f8()) {
        return FALSE;
    }
    if (!func_ov004_02208894()) {
        return FALSE;
    }
    grid = data_021c47c4;
    u8 *cam = (u8 *)func_02095204(4);
    if (unk_284 == 1) {
        return FALSE;
    }
    if (grid == 0 || cam == 0) {
        return FALSE;
    }
    if (!func_ov004_0220607c(unk_188, this)) {
        return FALSE;
    }
    Unk_0203e4f0_Vec *pp = (Unk_0203e4f0_Vec *)(cam + 0x5c);
    v1.x = pp->x;
    v1.y = pp->y;
    v1.z = pp->z;
    func_0204ee10(&x0, &y0, &v1);
    v2.x = v1.x;
    v2.y = v1.y;
    v2.z = v1.z;
    if (a) {
        func_01ffca8c(&v2, a, &v2);
    }
    func_0204ee10(&x1, &y1, &v2);
    obj = (Unk_ov004_0224882c *)func_ov004_022355d8(func_ov004_02235718(), x1, y1, 0);
    func_ov004_02207ac4(this, 0, 0);
    func_ov004_02206558(&c1);
    func_ov004_02207c40(this, &c1, a, b);
    func_ov004_02206558(&c2);
    func_ov004_02207c40(this, &c2, a, b >> 1);
    u32 i;
    for (i = 0; i < func_ov004_0220652c(&c1); i++) {
        x = func_ov004_02206520(&c1, i)->x;
        y = func_ov004_02206520(&c1, i)->y;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        cell1 = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (a == 0 && x0 == x && y0 == y) UNK_OV004_022072B4_FAIL()
        if (a == 0) {
            y2 = func_ov004_02206520(&c2, i)->y;
            x2 = func_ov004_02206520(&c2, i)->x;
            s32 hx2 = x2 >> 4;
            s32 hy2 = y2 >> 4;
            u16 *cell2 = func_0204ebd8(grid, hx2, hy2, x2 - (hx2 << 4), y2 - (hy2 << 4), 0);
            if (cell2 && *cell2 != 0xfff1) UNK_OV004_022072B4_FAIL()
        }
        if (cell1 && *cell1 != 0xfff1) UNK_OV004_022072B4_FAIL()
        if (!func_02031284(x, y)) UNK_OV004_022072B4_FAIL()
        if (func_ov004_022355d8(func_ov004_02235718(), x, y, 1) && func_ov004_022057f0()) UNK_OV004_022072B4_FAIL()
        if (b == 0) {
            if ((obj && obj->unk_788 == 0 && obj != this) || func_0202ffdc(&v2) != -1 || func_ov004_02234f6c(&v2)) UNK_OV004_022072B4_FAIL()
        }
    }
    func_ov004_022078d8(this, 0, 0, 0, 0);
    func_ov004_02206554(&c2);
    func_ov004_02206554(&c1);
    return TRUE;
}
