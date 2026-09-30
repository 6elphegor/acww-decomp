#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;
class Unk_ov052_0225a900;

struct Unk_ov052_02258f34_Vec {
    s32 x, y, z;
};

struct Unk_ov052_02258f34_Pos {
    s32 x, y, z;
};

struct Unk_ov052_02258eac_Loc : Unk_ov052_02258f34_Vec {
    Unk_ov052_02258eac_Loc() {}
};

struct Unk_ov052_022595dc_Out {
    char *unk_00;
    u8 unk_04;
};

struct Unk_020cbb18_Ov052 {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Unk_020cbb18_Ov052 *data_020cbb18;
extern u8 data_021ef5d0[];
extern u8 data_021ef5cc[];
extern u16 data_021f47d8[];
extern s16 data_02135f44[];
extern u8 data_021ed284[];
extern char data_ov052_0225a810[];
extern u8 data_ov052_0225a5a8[][8];
extern u32 data_ov052_0225a5a4[][2];

void *func_020947f0(s32 a);
s32 func_0202ff64(void *p);
void func_0202ff44();
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
void func_0209d498(void *p);
void func_02015ab0(void *self, s32 v);
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
s32 func_02072e44(void *g);
void func_0201adc8(void *o, s32 v);
s32 func_0201ade4(void *o, s32 v);
void func_02099014(void *p, s32 v);
void func_020ac894(s32 a, s32 b, s32 c);
void *func_0209750c();
s32 func_0209888c(...);
void func_020862a8(void *a, s32 b);
void func_020862a0(void *a, void *b);
void func_02015958(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020aa514();
s32 func_02098ffc();
void func_02099064(s32 a);
void func_02014ce4(void *self, u16 *p, u32 a, u32 b, u32 c);
void func_02014e60(void *self, u16 *p, u32 a, u32 b, u32 c);
void func_02115fb4(void *p, s32 v, s32 n);
void func_02067a84(void *ctx, void *msg, void *tbl);
s32 func_02098044(void *h, s32 v);
void func_0209801c(void *h, s32 v);
s32 func_0202e1cc(s32 a, s32 b);
s32 func_02098eb0(u16 *p);
s32 func_020862f4(void *p);
s32 func_02094218(void *p);
void func_02086298(void *dst, void *src);
void func_0201578c(void *self, void *p, u32 a, u32 b);
s32 func_02128930(void *a, void *b, s32 n);
s32 func_020941e8(void *a, void *b);
void func_020157e8(void *self, void *p, u32 a);
s32 func_02063b8c(s32 a);
s32 func_0204be70(u16 *p);
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
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
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

struct Unk_02004b60 {
    u16 unk_00;
    Unk_02004b60();
    ~Unk_02004b60();
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

// Menu-state machine base
class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    s32 func_02015a5c();
};

// Dialog member at +0x658 (vtable 0x0225a870)
class Unk_ov052_0225a870 : public Unk_02015b54 {
public:
    virtual ~Unk_ov052_0225a870();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov052_022595dc_Out *out);

    s32 func_ov052_02259a88();
    void func_ov052_02259a90(s32 v);
    BOOL func_ov052_02259a18();
    void func_ov052_02259274();

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov052_0225a900 *unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 pad_bd[3];
};

class Unk_ov052_0225a900 : public Unk_020d8bc8 {
public:
    Unk_ov052_0225a900() {}
    virtual ~Unk_ov052_0225a900();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_58();

    BOOL func_ov052_02258e60();
    BOOL func_ov052_02258eac();
    BOOL func_ov052_02258f14();
    BOOL func_ov052_02258f34();
    void func_ov052_0225a2cc(s32 state);
    s32 func_ov052_02259b1c(u8 *p, s32 n);
    BOOL func_ov052_02259b50(u8 *p, s32 n);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov052_0225a870 unk_658;
    /* 0x718 */ u8 pad_718[2];
    /* 0x71a */ u16 unk_71a;
    /* 0x71c */ Unk_02004b60 unk_71c[3];
    /* 0x722 */ u8 pad_722[2];
    /* 0x724 */ s32 unk_724;
    /* 0x728 */ s32 unk_728;
    /* 0x72c */ u8 unk_72c;
    /* 0x72d */ u8 pad_72d;
    /* 0x72e */ u8 unk_72e;
    /* 0x72f */ u8 unk_72f[5];
    /* 0x734 */ u8 unk_734[5];
};

// ---------------------------------------------------------------------------------------------------------------------
// Owner object

Unk_ov052_0225a900::~Unk_ov052_0225a900() {}

BOOL Unk_ov052_0225a900::func_ov052_02258e60() {
    if (func_0203e2f4()) {
        return FALSE;
    }
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    func_0209d498(buf);
    if (((u8 *)buf)[2] < 6) {
        unk_658.func_ov052_02259a90(0xc);
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov052_0225a900::func_ov052_02258eac() {
    Unk_ov052_02258eac_Loc v;
    Unk_ov052_02258f34_Vec *src = (Unk_ov052_02258f34_Vec *)func_020947f0(4);
    *(Unk_ov052_02258f34_Vec *)&v = *src;
    if (func_0202ff64(&v)) {
        if (unk_72e == 0) {
            unk_658.func_ov052_02259a90(1);
        } else {
            unk_658.func_ov052_02259a90(2);
        }
        func_0203d704(this, 0);
        func_ov052_0225a2cc(0xa);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov052_0225a900::func_ov052_02258f14() {
    if (func_ov052_02258f34()) {
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov052_02258f34_Flags() {
    if (data_021ef5d0[0] && data_021ef5cc[0]) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov052_02258f34_Eq(u16 *p, u16 *k) {
    if (func_0204b2d4(p)) {
        *k = 0xfff1;
        s32 a = func_0204b25c(p);
        if (a == func_0204b25c(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

BOOL Unk_ov052_0225a900::func_ov052_02258f34() {
    u16 t[2];
    s32 bx, by;
    Unk_ov052_02258f34_Vec v;
    Unk_020d9670 *p = (Unk_020d9670 *)func_02095204(4);
    BOOL f = Unk_ov052_02258f34_Flags() ? TRUE : FALSE;
    if (p == 0 || func_0203e2f4() != 0 || func_02014220(&unk_618) != 0 || ((data_021f47d8[1] & 1) == 0 && f == 0)) {
        return FALSE;
    }
    Unk_ov052_02258f34_Pos *pv = (Unk_ov052_02258f34_Pos *)&p->unk_5c;
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
            Unk_ov052_02258f34_Vec v2;
            func_020b60b0(func_020b50b4(), &v2);
            func_0204ee10(&bx2, &by2, &v2);
            if (bx2 != bx || by2 != by) {
                return FALSE;
            }
        }
    }
    t[0] = *func_ov004_0223ed40(bx, by);
    if (Unk_ov052_02258f34_Eq(&t[0], &t[1])) {
        return FALSE;
    }
    unk_71a = t[0];
    unk_724 = bx;
    unk_728 = by;
    unk_72c = 0;
    return TRUE;
}

void Unk_ov052_0225a900::vfunc_4c(u32 cmd, u32 arg) {
    unk_558.unk_08 = arg;
    switch (cmd) {
    case 3:
        func_ov052_0225a2cc(8);
        break;
    case 1:
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(4));
        if (unk_658.func_ov052_02259a88() == 0) {
            func_ov052_0225a2cc(5);
        } else if (unk_658.func_ov052_02259a88() == 1 || unk_658.func_ov052_02259a88() == 2 ||
                   unk_658.func_ov052_02259a88() == 0xc) {
            func_ov052_0225a2cc(6);
        } else {
            func_ov052_0225a2cc(9);
        }
        break;
    case 0:
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(4));
        func_ov052_0225a2cc(5);
        break;
    case 8:
        if (unk_658.func_ov052_02259a88() == 1 || unk_658.func_ov052_02259a88() == 2) {
            Unk_ov052_02258f34_Vec v;
            Unk_ov052_02258f34_Vec *src = (Unk_ov052_02258f34_Vec *)func_020947f0(4);
            v = *src;
            if (func_0202ff64(&v)) {
                func_0202ff44();
            } else {
                func_ov052_0225a2cc(1);
            }
        } else if (unk_658.func_ov052_02259a88() == 0xc) {
            func_020b4bbc(func_020b4934(), 0);
        } else {
            func_ov052_0225a2cc(1);
        }
        break;
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    }
}

BOOL Unk_ov052_0225a900::vfunc_58() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov052_0225a900::vfunc_48() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc() != 0 || func_ov052_02258f14() != 0) {
        return FALSE;
    }
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Dialog

void Unk_ov052_0225a870::func_ov052_02259274() {
    func_0201adc8(unk_b0, unk_b4);
    func_02099014(&unk_b0->unk_71a, 0);
    func_020ac894(unk_b0->unk_724, unk_b0->unk_728, 0xf);
    u8 *const g = data_021ed284;
    func_020862a8(g, func_0209888c(func_0209750c()));
    func_020862a0(g, &unk_b0->unk_71a);
    func_02015958(this, unk_b4, 2, 10, 1, 0);
    unk_b0->unk_71a = 0xfff1;
    unk_b0->unk_72e = 1;
}

void Unk_ov052_0225a870::vfunc_18() {
    func_02015a5c();
    s32 t = func_020aa514();
    char *tbl = data_ov052_0225a810;
    u32 msg = 0xff;
    u16 v[2];
    switch (unk_1e) {
    case 0x2c:
        if (t == 0) {
            if (unk_b8 >= 0) {
                func_02099064(unk_b8);
                v[1] = 0x34a8;
                func_02014ce4(this, &v[1], 0, 5, 0);
            }
            msg = 0x2e;
        }
        break;
    case 7:
    case 0x12:
        if (t != 0) {
            if (func_0201ade4(unk_b0, 0xbb8) == 0) {
                msg = 0xa;
            } else if (unk_bc == 0) {
                msg = 8;
            } else {
                msg = 0xc;
            }
        }
        break;
    case 9:
        unk_bc = 1;
        if (t == 0) {
            msg = 0xc;
        }
        break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
        if (t == 0) {
            if (func_0201ade4(unk_b0, unk_b4) != 0) {
                if (func_02098ffc() >= 0) {
                    s32 idx = unk_b0->func_ov052_02259b1c(unk_b0->unk_734, 5);
                    unk_b0->unk_734[idx] = 1;
                    if (unk_b0->func_ov052_02259b50(unk_b0->unk_734, 5) == 0) {
                        func_02115fb4(unk_b0->unk_734, 0, 5);
                        unk_b0->unk_734[idx] = 1;
                    }
                    msg = (u8)(idx + 0x24);
                    break;
                }
                msg = 0x2a;
            } else {
                msg = 0x29;
            }
        }
        unk_b0->unk_71a = 0xfff1;
        break;
    }
    if (msg != 0xff) {
        *(u8 *)v = msg;
        func_02067a84(unk_3c, v, tbl);
    }
}

void Unk_ov052_0225a870::vfunc_14() {
    char *tbl = data_ov052_0225a810;
    u32 msg = 0xff;
    u16 v[4];
    void *h = func_0209750c();
    switch (unk_1e) {
    case 0x2e:
        v[1] = 0x36fc;
        func_02014e60(this, &v[1], 0, 5, 0);
        v[2] = 0x36fc;
        func_02099014(&v[2], 0);
        msg = 0x2f;
    case 0x2d:
        unk_b8 = -2;
        break;
    case 6:
        if (func_02098044(h, 0xc) == 0) {
            func_ov052_02259a90(3);
        } else {
            func_ov052_02259a90(10);
        }
        break;
    case 7:
        func_ov052_02259a90(4);
        break;
    case 0x10:
        v[3] = 0x149d;
        func_02014ce4(this, &v[3], 0, 5, 0);
        unk_b0->unk_71a = 0xfff1;
        msg = 0x11;
        func_0201adc8(unk_b0, 0xbb8);
        func_ov052_02259a90(7);
        func_0209801c(h, 0xc);
        func_0202e1cc(1, 1);
        break;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
        func_ov052_02259274();
        break;
    }
    if (msg != 0xff) {
        *(u8 *)v = msg;
        func_02067a84(unk_3c, v, tbl);
    }
}

static inline BOOL Unk_ov052_022595dc_Eq(u16 *p, u16 *k) {
    if (func_0204b2d4(p)) {
        *k = 0xfff1;
        s32 a = func_0204b25c(p);
        if (a == func_0204b25c(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov052_022595dc_Eq2(u16 *p, u16 *q) {
    if (func_0204b2d4(p)) {
        s32 a = func_0204b25c(p);
        return a == func_0204b25c(q) ? TRUE : FALSE;
    }
    return *p == *q ? TRUE : FALSE;
}

static inline BOOL Unk_ov052_022595dc_EqK(u16 *p, u16 *k) {
    if (func_0204b2d4(p)) {
        *k = 0xfff1;
        s32 a = func_0204b25c(p);
        return a == func_0204b25c(k) ? TRUE : FALSE;
    }
    return *p == 0xfff1 ? TRUE : FALSE;
}

void Unk_ov052_0225a870::vfunc_78(Unk_ov052_022595dc_Out *out) {
    u16 x, b, c, k1, k4, k2, k3;
    void *h = func_0209750c();
    if (unk_ac == 0xc) {
        out->unk_04 = data_ov052_0225a5a8[unk_ac][0];
        out->unk_00 = (char *)data_ov052_0225a5a4[unk_ac][0];
        return;
    }
    if (unk_ac != 0 && unk_ac != 1 && unk_ac != 2) {
        u16 *pp = &unk_b0->unk_71a;
        if (Unk_ov052_022595dc_Eq(pp, &k1)) {
            if (func_02098044(h, 0xc) != 0) {
                if (func_02072e44(data_020cbb18) == 0 && unk_b8 == -1) {
                    x = 0x34a8;
                    unk_b8 = func_02098eb0(&x);
                }
                if (unk_b8 >= 0) {
                    unk_ac = 5;
                } else if (func_ov052_02259a18()) {
                    unk_ac = 6;
                } else if (func_0202e1cc(1, 1) == 0) {
                    unk_ac = 7;
                } else {
                    if (func_02094218((void *)func_020862f4(data_021ed284)) != 0 &&
                        (func_02086298(&b, data_021ed284), !Unk_ov052_022595dc_Eq(&b, &k2))) {
                        func_02086298(&c, data_021ed284);
                        func_0201578c(this, &c, 0, 7);
                        u16 *r6 = (u16 *)func_0209888c(func_0209750c());
                        u16 *r7 = (u16 *)func_020862f4(data_021ed284);
                        if (!(r7[0] == r6[0] && func_02128930(r7 + 1, r6 + 1, 8) == 0 && func_020941e8(r7, r6) != 0)) {
                            func_020157e8(this, (void *)func_020862f4(data_021ed284), 1);
                            unk_ac = 8;
                        } else {
                            func_020157e8(this, (void *)func_0209888c(h), 1);
                            unk_ac = 9;
                        }
                    } else {
                        unk_ac = 0xa;
                    }
                }
            }
        }
    }
    if (unk_ac < 0 || unk_ac >= 0xd) {
        return;
    }
    out->unk_04 = data_ov052_0225a5a8[unk_ac][0];
    if (func_02098044(h, 0xc) != 0) {
        if (unk_ac == 0xa) {
            out->unk_04 = func_02063b8c(4) + 0x17;
            if (out->unk_04 == 0x1a) {
                out->unk_04 = 0x30;
            }
        }
        s32 hit = 0;
        if (!Unk_ov052_022595dc_Eq(&unk_b0->unk_71a, &k3)) {
            unk_b4 = func_0204be70(&unk_b0->unk_71a) * 2;
            func_0201578c(this, &unk_b0->unk_71a, 1, 7);
            func_02015958(this, unk_b4, 2, 10, 1, 0);
            s32 i;
            for (i = 0; i < 3; i++) {
                u16 *p, *q1;
                q1 = &unk_b0->unk_71c[i].unk_00;
                p = &unk_b0->unk_71a;
                if (Unk_ov052_022595dc_Eq2(p, q1)) {
                    out->unk_04 = 0x1d;
                    break;
                }
                u16 *q = &unk_b0->unk_71c[i].unk_00;
                if (Unk_ov052_022595dc_EqK(q, &k4)) {
                    hit = i;
                }
            }
            if (out->unk_04 != 0x1d) {
                s32 idx = unk_b0->func_ov052_02259b1c(unk_b0->unk_72f, 5);
                if (unk_b0->unk_72f[idx] == 0) {
                    unk_b0->unk_72f[idx] = 1;
                    *(u16 *)((u8 *)unk_b0 + 0x71c + hit * 2) = unk_b0->unk_71a;
                }
                if (unk_b0->func_ov052_02259b50(unk_b0->unk_72f, 5) == 0) {
                    func_02115fb4(unk_b0->unk_72f, 0, 5);
                    unk_b0->unk_72f[idx] = 1;
                    *(u16 *)((u8 *)unk_b0 + 0x71c + hit * 2) = unk_b0->unk_71a;
                }
                out->unk_04 = idx + 0x1e;
            }
        }
    }
    out->unk_00 = (char *)data_ov052_0225a5a4[unk_ac][0];
}
