#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;
class Unk_ov050_0225e400;

struct Unk_ov050_022590f8_Vec {
    s32 x, y, z;
};

struct Unk_ov050_022590f8_Pos {
    s32 x, y, z;
};

struct Unk_ov050_02258f80_Loc : Unk_ov050_022590f8_Vec {
    Unk_ov050_02258f80_Loc() {}
};

struct Unk_020cbb18_Ov050 {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Unk_020cbb18_Ov050 *data_020cbb18;
extern u8 data_021ef5d0[];
extern u8 data_021ef5cc[];
extern u16 data_021f47d8[];
extern s16 data_02135f44[];
extern Unk_ov050_022590f8_Vec data_ov050_0225da28;
extern s32 data_ov050_0225da7c[][2];

s32 func_02072e44(void *g);
s16 *func_0209c37c(s32 a, s32 b);
void *func_020947f0(s32 a);
s32 func_0202ff64(void *p);
void func_0203d704(void *self, s32 a);
void *func_02095204(s32 a);
s32 func_0203e2f4();
s32 func_02014220(void *self);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204ee10(s32 *bx, s32 *by, void *pos);
void *func_ov004_02235718();
void *func_ov004_022355d8(void *self, s32 a, s32 b, s32 c);
void *func_020b50b4();
void *func_020b6048(void *a, s32 b, s32 c);
void func_020b60b0(void *a, void *b);
u16 *func_ov004_0223ed40(s32 a, s32 b);
s32 func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_020626a8(u16 *p);
s32 func_0202e148(void *p);
void *func_0209750c();
void *func_0209865c(void *h);
s32 func_02098044(void *h, s32 v);
void *func_020850e0();
void *func_02085184(void *p);
s32 func_02086f38(void *p);
u8 *func_02002d3c(s32 a, s32 b);
void func_020e9960(void *out, void *a, void *b);
s32 func_01ffc854(void *v);
s32 func_020a62a0();
void func_02015ab0(void *self, s32 v);
}

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_02053d3c {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_02053d3c();
    ~Unk_02053d3c();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
    void func_0201a99c(s32 v);
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_020323b0, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct Unk_02082014 { u8 unk_00[8]; Unk_02082014(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    void func_0203e468(s32 v);
    u8 pad_04[8];
    u16 unk_0c;
    u8 pad_0e[0x5c - 0xe];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xea - 0x96];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual BOOL vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    BOOL func_0201b9bc();
    void func_0201b964(void *dst, s32 n);
    BOOL func_0201b980(u8 *src, u32 n);
    s32 func_0201b9e8(s32 *a, s32 *b);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    BOOL func_0201ba88();
    void func_0201bc28(void *p);
    s32 func_0201bc4c(u32 id);
    s32 func_0201bc70(u32 id);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);

    u16 unk_ea;
    Unk_02053d3c unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_020323b0 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
};

// Dialog member at +0x658 (vtable 0x0225e4b4)
class Unk_ov050_0225e4b4 : public Unk_02015b54 {
public:
    virtual ~Unk_ov050_0225e4b4();

    s32 func_ov050_0225bff8();
    void func_ov050_0225c000(s32 v);

    /* 0x04 */ u8 pad_04[0xcc - 4];
};

class Unk_ov050_0225e400 : public Unk_020d8bc8 {
public:
    Unk_ov050_0225e400() {}
    virtual ~Unk_ov050_0225e400();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_58();

    s32 func_ov050_02258e34();
    s32 func_ov050_02258e58();
    BOOL func_ov050_02258e7c();
    BOOL func_ov050_02258ea0();
    BOOL func_ov050_02258eb8();
    BOOL func_ov050_02258ed0();
    BOOL func_ov050_02258ee8();
    BOOL func_ov050_02258f80();
    BOOL func_ov050_02259074();
    BOOL func_ov050_022590d8();
    BOOL func_ov050_022590f8();
    s32 func_ov050_02259398();
    BOOL func_ov050_022593b0();
    void func_ov050_0225d1d4(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov050_0225e4b4 unk_658;
    /* 0x724 */ u8 pad_724[0x72e - 0x724];
    /* 0x72e */ u16 unk_72e;
    /* 0x730 */ s32 unk_730;
    /* 0x734 */ s32 unk_734;
    /* 0x738 */ u8 unk_738;
};

static inline BOOL Unk_ov050_02258ea0_Eq(u16 v, u16 k) {
    if (v == k) {
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------------------------------------------------------------

Unk_ov050_0225e400::~Unk_ov050_0225e400() {}

s32 Unk_ov050_0225e400::func_ov050_02258e34() {
    if (func_ov050_02258e7c()) {
        func_ov050_022593b0();
        return 0x4000;
    }
    return 0x4000;
}

s32 Unk_ov050_0225e400::func_ov050_02258e58() {
    if (func_ov050_02258e7c()) {
        func_ov050_022593b0();
        return 0x3000;
    }
    return 0x3000;
}

BOOL Unk_ov050_0225e400::func_ov050_02258e7c() {
    if (func_ov050_02258ea0() || func_ov050_02258eb8()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov050_0225e400::func_ov050_02258ea0() {
    if (Unk_ov050_02258ea0_Eq(unk_0c, 0x74)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov050_0225e400::func_ov050_02258eb8() {
    if (Unk_ov050_02258ea0_Eq(unk_0c, 0x75)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov050_0225e400::func_ov050_02258ed0() {
    if (Unk_ov050_02258ea0_Eq(unk_0c, 0x76)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov050_0225e400::func_ov050_02258ee8() {
    if (func_0203e2f4()) {
        return FALSE;
    }
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        return FALSE;
    }
    if (func_02098044(func_0209750c(), 1)) {
        return FALSE;
    }
    if (func_02086f38(func_02085184(func_020850e0()))) {
        if (func_ov050_02258ed0()) {
            unk_658.func_ov050_0225c000(6);
        } else if (func_ov050_02258ea0()) {
            unk_658.func_ov050_0225c000(0x1d);
        }
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov050_0225e400::func_ov050_02258f80() {
    Unk_ov050_02258f80_Loc v;
    Unk_ov050_022590f8_Vec *src = (Unk_ov050_022590f8_Vec *)func_020947f0(4);
    *(Unk_ov050_022590f8_Vec *)&v = *src;
    if (unk_658.func_ov050_0225bff8() != 1 && unk_658.func_ov050_0225bff8() != 0x12) {
        if (func_ov050_02258e7c() && func_ov050_022593b0() == 0) {
            if (func_0202ff64(&v)) {
                unk_350.func_0201a99c(func_0201bc70(4));
            }
            return FALSE;
        }
        if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
            return FALSE;
        }
        void *p = func_0209750c();
        func_0209865c(p);
        if (func_02098044(p, 1)) {
            return FALSE;
        }
    }
    if (func_0202ff64(&v)) {
        if (func_ov050_02258e7c()) {
            unk_658.func_ov050_0225c000(0x12);
        } else {
            unk_658.func_ov050_0225c000(1);
        }
        func_0203d704(this, 0);
        func_ov050_0225d1d4(0x12);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov050_0225e400::func_ov050_02259074() {
    void *p = func_0209750c();
    func_0209865c(p);
    if (func_02098044(p, 1)) {
        Unk_ov050_02258f80_Loc v;
        Unk_ov050_022590f8_Vec *src = (Unk_ov050_022590f8_Vec *)func_020947f0(4);
        *(Unk_ov050_022590f8_Vec *)&v = *src;
        if (v.z < data_ov050_0225da28.z && v.x > data_ov050_0225da28.x) {
            unk_658.func_ov050_0225c000(0x1e);
            func_0203d704(this, 0);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov050_0225e400::func_ov050_022590d8() {
    if (func_ov050_022590f8()) {
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov050_022590f8_Flags() {
    if (data_021ef5d0[0] && data_021ef5cc[0]) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov050_022590f8_Eq(u16 *p, u16 *k) {
    if (func_0204b2d4(p)) {
        *k = 0xfff1;
        s32 a = func_0204b25c(p);
        if (a == func_0204b25c(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

BOOL Unk_ov050_0225e400::func_ov050_022590f8() {
    u16 t[2];
    s32 bx, by;
    Unk_ov050_022590f8_Vec v;
    Unk_020d9670 *p = (Unk_020d9670 *)func_02095204(4);
    BOOL f = Unk_ov050_022590f8_Flags() ? TRUE : FALSE;
    if (p == 0 || func_0203e2f4() != 0 || func_02014220(&unk_618) != 0 || ((data_021f47d8[1] & 1) == 0 && f == 0)) {
        return FALSE;
    }
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        if (func_ov050_02258ea0()) {
            return FALSE;
        }
    } else if (func_ov050_02258e7c()) {
        if (func_ov050_022593b0() == 0) {
            return FALSE;
        }
    }
    unk_72e = 0xfff1;
    Unk_ov050_022590f8_Pos *pv = (Unk_ov050_022590f8_Pos *)&p->unk_5c;
    v.x = p->unk_5c;
    v.y = pv->y;
    v.z = pv->z;
    u32 ang = p->unk_8e;
    bx = 0;
    by = 0;
    s32 idx = ((u16)ang >> 4) * 2;
    v.x += func_01ffcb0c(0x2000, data_02135f44[idx]);
    v.z += func_01ffcb0c(0x2000, data_02135f44[idx + 1]);
    func_0204ee10(&bx, &by, &v);
    if (f) {
        void *o = func_ov004_022355d8(func_ov004_02235718(), bx, by, 0);
        if (o != 0) {
            if (o != func_020b6048(func_020b50b4(), 0, 0)) {
                return FALSE;
            }
        } else {
            s32 bx2 = 0, by2 = 0;
            Unk_ov050_022590f8_Vec v2;
            func_020b60b0(func_020b50b4(), &v2);
            func_0204ee10(&bx2, &by2, &v2);
            if (bx2 != bx || by2 != by) {
                return FALSE;
            }
        }
    }
    t[0] = *func_ov004_0223ed40(bx, by);
    if (Unk_ov050_022590f8_Eq(&t[0], &t[1])) {
        return FALSE;
    }
    s32 f2 = 0;
    s32 kind = 5;
    if (func_ov050_02258e7c()) {
        f2 = 1;
    }
    {
        BOOL r = FALSE;
        volatile u16 *pt = &t[0];
        u32 x = *pt;
        u32 y = *pt;
        if (y < 0x1100 || x > 0x1143) {
        } else {
            r = TRUE;
        }
        if (r != 0 || (x >= 0x1144 && x <= 0x1187)) {
            kind = 0;
        } else if (x >= 0x1000 && x <= 0x10ff) {
            kind = 1;
        } else if (x >= 0x1521 && x <= 0x1530) {
            if (func_0202e148(func_0209750c())) {
                kind = 2;
            } else {
                kind = 3;
            }
        } else if (func_020626a8(&t[0])) {
            kind = 4;
        }
    }
    unk_658.func_ov050_0225c000(data_ov050_0225da7c[kind][f2]);
    unk_72e = t[0];
    unk_730 = bx;
    unk_734 = by;
    unk_738 = 0;
    return TRUE;
}

void Unk_ov050_0225e400::vfunc_4c(u32 cmd, u32 arg) {
    Unk_020cbb18_Ov050 *g;
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, arg);
            func_ov050_0225d1d4(0xf);
        } else if (func_0201ba88()) {
            u32 t = data_020cbb18->unk_64;
            func_0201b9fc(1, t, t);
            func_ov050_0225d1d4(0xf);
        }
        break;
    case 1:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov050_0225d1d4(9);
        } else if (func_0201ba88()) {
            g = data_020cbb18;
            func_0201b9fc(1, g->unk_64, g->unk_64);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            if (unk_658.func_ov050_0225bff8() == 0 || unk_658.func_ov050_0225bff8() == 0x11) {
                func_ov050_0225d1d4(4);
            } else if (unk_658.func_ov050_0225bff8() == 1 || unk_658.func_ov050_0225bff8() == 0x12 ||
                       unk_658.func_ov050_0225bff8() == 6 || unk_658.func_ov050_0225bff8() == 0x1d) {
                func_ov050_0225d1d4(5);
            } else if (func_02072e44(g) != 0 || *func_0209c37c(0, 0x4a) != 0) {
                unk_658.vfunc_08();
                func_02015ab0(&unk_658, func_0201bc4c(4));
                func_ov050_0225d1d4(4);
            } else {
                func_ov050_0225d1d4(0x10);
            }
        }
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov050_0225d1d4(9);
        } else if (func_0201ba88()) {
            func_0201b9fc(1, data_020cbb18->unk_64, data_020cbb18->unk_64);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            if (func_ov050_02258ed0()) {
                unk_658.func_ov050_0225c000(5);
            } else {
                unk_658.func_ov050_0225c000(0x13);
            }
            func_ov050_0225d1d4(4);
        }
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                g = data_020cbb18;
                func_0201b9fc(1, g->unk_64, 4);
                if (unk_658.func_ov050_0225bff8() == 1 || unk_658.func_ov050_0225bff8() == 0x12 ||
                    unk_658.func_ov050_0225bff8() == 6 || unk_658.func_ov050_0225bff8() == 0x1d) {
                } else if (func_02072e44(g) != 0 || *func_0209c37c(0, 0x4a) != 0) {
                    func_ov050_0225d1d4(0xd);
                } else {
                    func_ov050_0225d1d4(1);
                }
            } else {
                func_0201b9fc(1, 4, data_020cbb18->unk_64);
                func_ov050_0225d1d4(8);
            }
        }
        break;
    case 4:
        if (func_0201b9bc()) {
            if (func_0201ba88()) {
                a = 4;
                b = 4;
                if (func_0201b9e8(&a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        func_0201b9fc(1, data_020cbb18->unk_64, 4);
                        func_ov050_0225d1d4(0xd);
                    }
                }
            }
        }
        break;
    }
}

s32 Unk_ov050_0225e400::func_ov050_02259398() {
    if (func_ov050_02258ea0()) {
        return 0x75;
    }
    return 0x74;
}

BOOL Unk_ov050_0225e400::func_ov050_022593b0() {
    if (func_ov050_02258e7c()) {
        Unk_ov050_022590f8_Vec a;
        Unk_ov050_022590f8_Vec *src = (Unk_ov050_022590f8_Vec *)func_020947f0(4);
        *(Unk_ov050_022590f8_Vec *)&a = *src;
        u8 *o = func_02002d3c(func_ov050_02259398(), 0);
        if (o != 0) {
            Unk_ov050_022590f8_Vec b;
            Unk_ov050_022590f8_Pos *pv = (Unk_ov050_022590f8_Pos *)(o + 0x5c);
            b.x = *(s32 *)(o + 0x5c);
            b.y = pv->y;
            b.z = pv->z;
            Unk_ov050_022590f8_Vec d1, d2;
            func_020e9960(&d1, &a, &b);
            s32 l1 = func_01ffc854(&d1);
            func_020e9960(&d2, &a, &unk_5c);
            if (func_01ffc854(&d2) < l1) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
