#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------- shared declarations
struct Unk_ov003_02212140_V3 {
    s32 x, y, z;
    Unk_ov003_02212140_V3() {}
};

struct Unk_ov003_02212140_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02212140_Pair {
    s32 a, b;
};

struct Unk_ov003_02212140_Obj {
    u8 pad_00[0x5c];
    s32 unk_5c;
    u8 pad_60[4];
    s32 unk_64;
    u8 pad_68[0x2d4 - 0x68];
    Unk_ov003_02212140_Bits unk_2d4;
    u8 pad_2d8[0x700 - 0x2d8];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    u8 unk_7d0[0x10];
    u8 pad_7e0[0x7ec - 0x7e0];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u8 pad_7fc[0x81c - 0x7fc];
    u16 unk_81c;
};

struct Unk_ov003_02212140_V3D : Unk_ov003_02212140_V3 {
    Unk_ov003_02212140_V3D() {}
    ~Unk_ov003_02212140_V3D() {}
};

typedef Unk_ov003_02212140_Obj Obj;
typedef Unk_ov003_02212140_V3 V3;
typedef Unk_ov003_02212140_V3D V3D;
typedef Unk_ov003_02212140_Pair Pair;

struct Unk_ov003_02212190_Gs {
    u8 pad_00[0x68];
    s32 unk_68;
};

enum Unk_ov003_0221227c_Limit { UNK_ov003_0221227c_5 = 5 };

extern "C" {
extern Unk_ov003_02212190_Gs *data_020cbb18;

Obj *func_02095774(s32 id);
void func_0203d79c();
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_02094574(s32 a, s32 b, s32 c);
s32 func_020729bc(Unk_ov003_02212190_Gs *g, s32 a);
s32 func_ov003_02208b18(Obj *o, s32 a, s32 b);
s32 func_ov003_0220605c(Obj *o, s32 a, s32 b);
s32 func_ov003_02211978(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203d878();
s32 func_0200ec44(Obj *o, s32 a);
s32 func_0200e1ac(Obj *o);
s32 func_ov003_0220dff0(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203d820();
s32 func_ov003_02206a1c(Obj *o, s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_02008770(Obj *o, s32 v, s32 a, s32 b);
s32 func_ov003_02207c08(Obj *o, u8 a, s32 b, s32 c);
s32 func_0200ec1c(Obj *o, s32 a);
void func_02034d84(s32 a);
s32 func_ov003_02207d9c(Obj *o, s32 a, s32 b);
s32 func_ov003_02207d08(Obj *o, s32 a, s32 b);
s32 func_ov003_02207efc(Obj *o, V3 v, s32 a, s32 b);
s32 func_ov003_02210d54(Obj *o, s32 a, s32 b);
s32 func_0200f660();
s32 func_ov003_02210628(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_0200ec30(Obj *o, s32 a);
s32 func_ov003_02211098(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_ov003_0221129c(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov003_02205e58(Obj *o, u8 *p, u32 c, s32 id, s32 e);
s32 func_ov003_0220c4ac(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0204ee10(s32 *a, s32 *b, V3 *c);
s32 func_ov003_022095e8(Obj *o, s32 a, Pair *p, u32 b, s32 c, s32 d);
s32 func_0200f45c(V3 *v);
void func_0204ed8c(V3 *a, u32 b, u32 c);
void func_02095180(s32 a, s32 b);
}

// ---------------------------------------------------------------- free functions on the big player object
extern "C" s32 func_ov003_02212140() {
    Obj *o = func_02095774(4);
    if (o) {
        func_0203d79c();
        if (o->unk_7ec != 0x77) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
        }
        func_02094574(0, 0, 4);
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_ov003_02212190(s32 a, s32 b) {
    Obj *o = func_02095774(b);
    if (b == 4) {
        b = data_020cbb18->unk_68;
    }
    if (o) {
        if (func_020729bc(data_020cbb18, b)) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            switch (a) {
            case 0:
                func_0203d79c();
                func_0200ce98(o, 3, 1, -1);
                break;
            case 1:
                func_ov003_02208b18(o, 6, -1);
                break;
            }
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_ov003_0221220c() {
    Obj *o = func_02095774(4);
    if (o) {
        if (o->unk_7ec == 0x89) {
            return 0;
        }
        return func_ov003_0220605c(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov003_02212240() {
    Obj *o = func_02095774(4);
    if (o) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        return func_ov003_02211978(o, 3, 5, -1);
    }
    return 0;
}

extern "C" s32 func_ov003_0221227c() {
    if (func_0203d878()) {
        return 0;
    }
    Obj *o = func_02095774(4);
    if (o) {
        if (func_0200ec44(o, 0xb)) {
            return 0;
        }
        Unk_ov003_0221227c_Limit k = UNK_ov003_0221227c_5;
        if (k <= func_0200e1ac(o)) {
            s32 st = o->unk_7ec;
            if (st != 0x4f) {
                return 0;
            }
            if (st == 0x4f) {
                func_ov003_0220dff0(o, 0, 6, -1);
                return 0;
            }
        }
        if (!func_0203d820()) {
            return 0;
        }
        return func_ov003_02206a1c(o, 5, -1);
    }
    return 0;
}

extern "C" s32 func_ov003_022122fc(V3 *p) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_02008770(o, func_020e7b98(p->x - o->unk_5c, p->z - o->unk_64), 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov003_02212338(s32 a) {
    Obj *o = func_02095774(4);
    if (o) {
        Unk_ov003_0221227c_Limit k = UNK_ov003_0221227c_5;
        if (k <= func_0200e1ac(o)) {
            return 0;
        }
        if (o->unk_7ec == 0x78) {
            return 0;
        }
        if (func_ov003_02207c08(o, a + 2, 7, -1)) {
            if (func_0200ec44(o, 0x1a)) {
                func_0200ec1c(o, 0x1a);
                func_02034d84(0x3f);
            }
            return 1;
        }
    }
    return 0;
}

extern "C" s32 func_ov003_022123a4(s32 a) {
    Obj *o = func_02095774(4);
    if (o) {
        switch (a) {
        case 1:
            return func_ov003_02207d9c(o, 6, -1);
        case 2:
            return func_ov003_02207d08(o, 6, -1);
        default:
            return 0;
        }
    }
    return 0;
}

extern "C" s32 func_ov003_022123e0(V3 *p) {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov003_02207efc(o, *p, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov003_0221240c() {
    Obj *o = func_02095774(4);
    if (o) {
        return func_ov003_02210d54(o, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov003_02212430(u32 a, s32 *b, s32 *c, s32 d) {
    Obj *o = func_02095774(4);
    if (o) {
        if (func_0200f660()) {
            return func_ov003_02210628(o, 0x39, ((u32)a << 26) >> 24, *b, *c, d, 6, -1);
        }
        func_0200ec30(o, 1);
        return func_ov003_02211098(o, a, *b, *c, d, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov003_0221249c(s32 *a, s32 *b, s16 *c) {
    Obj *o = func_02095774(4);
    if (o) {
        if (func_0200f660()) {
            return func_ov003_02210628(o, 0x38, 0, *a, *b, *c, 6, -1);
        }
        func_0200ec30(o, 1);
        return func_ov003_0221129c(o, *a, *b, *c, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov003_02212504(u8 a, s32 b, s32 c, s32 d) {
    Obj *o = func_02095774(4);
    if (o) {
        if (a) {
            return func_ov003_02205e58(o, &a, o->unk_7ec == 5 ? 1 : 0, 6, -1);
        }
        return func_ov003_0220c4ac(o, 1, 0, 0, 6, -1);
    }
    return 0;
}

extern "C" s32 func_ov003_0221255c(V3 *p, u16 *b) {
    Obj *o = func_02095774(4);
    if (o) {
        s32 x = 0;
        s32 y = 0;
        func_0204ee10(&x, &y, p);
        Pair pr;
        u32 t = *b;
        pr.a = x;
        pr.b = y;
        return func_ov003_022095e8(o, 1, &pr, t, 6, -1);
    }
    return 0;
}

static inline u16 Unk_ov003_022125ac_A(u32 x) {
    if (x < 0x38) {
        return x + 0x12e8;
    }
    return 0x12e8;
}

static inline u16 Unk_ov003_022125ac_B(u32 x) {
    if (x < 0x38) {
        return x + 0x12b0;
    }
    return 0x12b0;
}

static inline BOOL Unk_ov003_022125ac_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" u16 func_ov003_022125ac() {
    Obj *o = func_02095774(4);
    u16 r = 0xfff1;
    if (o) {
        switch (o->unk_7ec) {
        case 0x57: {
            u8 *q = o->unk_7d0;
            if (q[6] == 0) {
                r = Unk_ov003_022125ac_B(q[8]);
            }
            break;
        }
        case 0x54: {
            u8 *q = o->unk_7d0;
            if (q[4] == 0) {
                u32 x = q[3];
                if (x < 0x38) {
                    r = Unk_ov003_022125ac_A(x);
                }
            }
            break;
        }
        case 0x5f:
            if (Unk_ov003_022125ac_R(&o->unk_81c, 0x1549, 0x1549)) {
                r = o->unk_81c;
            }
            break;
        }
    }
    return r;
}

extern "C" s32 func_ov003_0221264c() {
    Obj *o = func_02095774(4);
    if (o) {
        if (o->unk_7ec == 6) {
            if (o->unk_7d0[0xd] == 1) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" s32 func_ov003_022127e0(V3 *a, V3 *b);

extern "C" s32 func_ov003_02212680(V3 *a) {
    Obj *o = func_02095774(4);
    if (o) {
        u32 t = o->unk_2d4.mid;
        s32 st = o->unk_700;
        if ((st == 0x67 && t == 5) || (st == 0x44 && t == 8)) {
            V3D v;
            func_0200f45c(&v);
            return func_ov003_022127e0(a, &v);
        }
    }
    return 0;
}

extern "C" s32 func_ov003_022126d0(V3 *a, s32 b) {
    Obj *o = func_02095774(b);
    if (o) {
        u32 t = o->unk_2d4.mid;
        s32 r = 0;
        V3D v;
        v.x = r;
        v.y = r;
        v.z = r;
        s32 st = o->unk_7ec;
        if (st == 0x49) {
            u8 *q = o->unk_7d0;
            func_0204ed8c(&v, q[0], q[1]);
            r = 8 - t;
        } else if (st == 0x5d) {
            u8 *q = o->unk_7d0;
            func_0204ed8c(&v, q[0], q[1]);
            r = 5 - t;
        }
        if (r > 0) {
            V3D w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            if (func_ov003_022127e0(a, &w)) {
                return r;
            }
        }
    }
    return 0;
}

extern "C" s32 func_ov003_02212758(V3 *a, s32 b) {
    Obj *o = func_02095774(b);
    if (o) {
        u32 t = o->unk_2d4.mid;
        s32 r = 0;
        V3D v;
        v.x = r;
        v.y = r;
        v.z = r;
        if (o->unk_7ec == 0x5e) {
            s32 *p = (s32 *)(o->unk_7d0);
            v.x = p[1];
            v.y = p[2];
            v.z = p[3];
            s32 st = o->unk_700;
            if (st == 0x4e) {
                r = 0x16 - t;
            } else if (st == 0x4b) {
                r = 9 - t;
            }
        }
        if (r > 0) {
            V3D w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            if (func_ov003_022127e0(a, &w)) {
                return r;
            }
        }
    }
    return 0;
}

extern "C" s32 func_ov003_022127e0(V3 *a, V3 *b) {
    s32 p[2], q[2];
    p[0] = 0;
    p[1] = 0;
    q[0] = 0;
    q[1] = 0;
    func_0204ee10(&p[0], &p[1], b);
    func_0204ee10(&q[0], &q[1], a);
    if (p[0] == q[0] && p[1] == q[1]) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov003_02212824(s32 a) {
    func_02095180(9, a);
}

// ---------------------------------------------------------------- actor class (vtable 0x02230c6c)
class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
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
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_s14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[4];
};

class Unk_ov003_02212830_Ctl {
public:
    u8 pad_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_ov003_02212888_Str {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();
};

struct Unk_ov003_02212888_Flags {
    u16 a : 2;
    u16 b : 2;
    u16 c : 4;
    u16 d : 1;
    u16 e : 7;
};

extern "C" {
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
BOOL func_0203d67c(void *p);
s32 func_02063b8c(s32 a);
void func_020b40f4(void *p);
void func_020b40dc(void *p);
void func_020b35f8(void *a, void *b, void *c);
void func_02065f90(Unk_020ddcf0 *a, s32 b, s32 c);
extern char data_ov003_02230d4c[];
extern u8 data_ov003_02230d5c[];
}

class Unk_ov003_02230c6c;
typedef void (Unk_ov003_02230c6c::*Unk_02212954_Fn)();
typedef BOOL (Unk_ov003_02230c6c::*Unk_022129d0_Fn)();

class Unk_ov003_02230c6c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov003_02230c6c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov003_02230c6c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);

    void func_ov003_02212830();
    BOOL func_ov003_02212860();
    void func_ov003_02212864();
    BOOL func_ov003_02212888();
    void func_ov003_0221294c();
    BOOL func_ov003_02212950();
    void func_ov003_02212954();
    BOOL func_ov003_022129d0(s32 m);

    /* 0x130 */ u8 pad_130[0x374 - 0x130];
    /* 0x374 */ Unk_ov003_02212888_Flags unk_374;
    /* 0x376 */ u8 pad_376[0x39c - 0x376];
    /* 0x39c */ s32 unk_39c;
};

void Unk_ov003_02230c6c::func_ov003_02212830() {
    if (unk_3c) {
        if (((Unk_ov003_02212830_Ctl *)unk_3c)->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov003_02230c6c::func_ov003_02212860() {
    return TRUE;
}

void Unk_ov003_02230c6c::func_ov003_02212864() {
    if (unk_3c) {
        if (((Unk_ov003_02212830_Ctl *)unk_3c)->unk_04) {
            func_ov003_022129d0(2);
        }
    }
}

BOOL Unk_ov003_02230c6c::func_ov003_02212888() {
    func_0203e488(this, this);
    s32 r;
    if (unk_374.d) {
        r = (unk_374.b & 3) * 3 + func_02063b8c(3);
    } else {
        r = (unk_374.b & 3) * 3 + 12 + func_02063b8c(3);
    }
    func_020a710c(data_ov003_02230d4c);
    unk_1e = r;
    ((Unk_ov003_02212830_Ctl *)unk_3c)->unk_08 = 1;
    u8 c = 0x26;
    u32 buf[0x46];
    func_020b40f4(buf);
    func_020b35f8(buf, &c, data_ov003_02230d5c);
    func_02065f90(&static_cast<Unk_020ddcf0 &>(*this), ((Unk_ov003_02212888_Str *)buf)->vfunc_0c(), 0);
    unk_374.d = 0;
    func_020b40dc(buf);
    return TRUE;
}

void Unk_ov003_02230c6c::func_ov003_0221294c() {}

BOOL Unk_ov003_02230c6c::func_ov003_02212950() {
    return TRUE;
}

void Unk_ov003_02230c6c::func_ov003_02212954() {
    static Unk_02212954_Fn tbl[3] = { &Unk_ov003_02230c6c::func_ov003_0221294c, &Unk_ov003_02230c6c::func_ov003_02212864, &Unk_ov003_02230c6c::func_ov003_02212830 };
    if (unk_39c < 3) {
        (this->*tbl[unk_39c])();
    }
}

BOOL Unk_ov003_02230c6c::func_ov003_022129d0(s32 m) {
    static Unk_022129d0_Fn tbl[3] = { (Unk_022129d0_Fn)&Unk_ov003_02230c6c::func_ov003_02212950, (Unk_022129d0_Fn)&Unk_ov003_02230c6c::func_ov003_02212888, (Unk_022129d0_Fn)&Unk_ov003_02230c6c::func_ov003_02212860 };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            unk_39c = m;
            return TRUE;
        }
    }
    return FALSE;
}
