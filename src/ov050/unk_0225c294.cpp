#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

struct Unk_ov050_0225c9dc_Vec {
    s32 x, y, z;
};

extern "C" {

extern Unk_ov050_0225c9dc_Vec data_ov050_0225da34;
extern u32 data_021ed29c;
extern u32 data_0213a740[];
BOOL func_0206ed18();
u16 *func_0206eb9c();
s32 func_0204be70(u16 *p);
BOOL func_0209750c();
BOOL func_0209cef4();
s32 func_0208653c(u32 v);
void func_02015958(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02067a84(void *owner, void *buf, char *name);
extern char data_ov050_0225e1c4[];
extern char data_ov050_0225e1a4[];
void func_0204ee10(s32 *a, s32 *b, Unk_ov050_0225c9dc_Vec *v);
void func_0203a844();
void func_02094b0c(Unk_ov050_0225c9dc_Vec *v, s32 a, s32 b);
BOOL func_020951b8(s32 a);
struct Unk_020cbb18_Ov049 {
    u8 pad_00[0x64];
    u32 unk_64;
};
extern Unk_ov050_0225c9dc_Vec data_021f4880;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern Unk_020cbb18_Ov049 *data_020cbb18;
extern void *data_021c47c4;

void func_0201a6c0(void *self, u8 a, s32 b, s32 c, Unk_ov050_0225c9dc_Vec *v, s32 d, s32 e, u8 f);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, u16 i, u16 j);
void func_02019614(void *self, s32 a, u16 b);
BOOL func_02014220(void *self);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
Unk_020d77a4 *func_02015aac(void *self);
void func_02015ab0(void *self, s32 v);
BOOL func_020a62a0();
void func_0203d67c(void *self);
void func_0203d704(void *self, s32 a);
Unk_ov050_0225c9dc_Vec *func_020947f0(s32 a);
void func_0201ae00(Unk_ov050_0225c9dc_Vec *out, void *self, Unk_ov050_0225c9dc_Vec *v);
void func_0201a99c(void *self, s32 v);
void func_0201a9ec(void *self, Unk_ov050_0225c9dc_Vec *v);
void func_0204e328(void *g, void *v);
s32 func_020e972c(Unk_ov050_0225c9dc_Vec *a, void *b);
s32 func_020e96ec(Unk_ov050_0225c9dc_Vec *a, void *b);
s32 func_020e7518(void *p);
s32 func_020e7500(void *p);
s32 func_020e780c(s32 a, s32 b);
BOOL func_0204b2d4(void *p);
s32 func_0204b25c(void *p);
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
BOOL func_020ac8f4();
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

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    void func_0203e468(s32 v);
    u8 pad_04[0x58];
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
    virtual void vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
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
    s32 func_0201bd20(u32 id);
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

class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
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
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();

    u8 pad_04[0x38];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_ov050_0225e400;

struct Unk_ov050_0225c83c_Obj {
    u16 unk_00;
};

// Menu/dialog state machine member (vtable 0x0225e4b4), size 0xd0.
class Unk_ov050_0225e4b4 : public Unk_0202e2bc {
public:
    typedef void (Unk_ov050_0225e4b4::*Fn)();

    Unk_ov050_0225e4b4();
    virtual ~Unk_ov050_0225e4b4();
    virtual void vfunc_84();

    void func_ov050_0225c294();
    void func_ov050_0225c4fc(s32 idx);

    // out of range
    void func_ov050_0225c000(s32 v);
    void func_ov050_0225c0a0();
    void func_ov050_0225c1a8();

    s32 unk_ac;
    Unk_ov050_0225e400 *unk_b0;
    Fn unk_b4;
    s32 unk_bc;
    s32 unk_c0;
    u8 pad_c4[0xc];
};

class Unk_ov050_0225e400 : public Unk_020d8bc8 {
public:
    Unk_ov050_0225e400() {}
    virtual void vfunc_8c();
    virtual void vfunc_90();

    BOOL func_ov050_0225c5a8();
    BOOL func_ov050_0225c6c0();
    BOOL func_ov050_0225c700();
    BOOL func_ov050_0225c704();
    BOOL func_ov050_0225c708();
    BOOL func_ov050_0225c740();
    BOOL func_ov050_0225c780();
    BOOL func_ov050_0225c7bc();
    BOOL func_ov050_0225c7e0();
    BOOL func_ov050_0225c838();
    BOOL func_ov050_0225c83c();
    BOOL func_ov050_0225c94c();
    BOOL func_ov050_0225c950();
    BOOL func_ov050_0225c9a8();
    BOOL func_ov050_0225c9dc();
    BOOL func_ov050_0225ca98();
    BOOL func_ov050_0225caa8();
    BOOL func_ov050_0225cb18();
    BOOL func_ov050_0225cb4c();
    BOOL func_ov050_0225cb6c();

    // out of range
    BOOL func_ov050_02258ed0();
    BOOL func_ov050_02258ee8();
    BOOL func_ov050_02258f80();
    BOOL func_ov050_02259074();
    BOOL func_ov050_022590d8();
    void func_ov050_0225d1d4(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov050_0225e4b4 unk_658;
    u8 pad_728[0x72c - 0x728];
    u16 unk_72c;
    Unk_ov050_0225c83c_Obj unk_72e;
    u8 pad_730[0x739 - 0x730];
    u8 unk_739;
};

// ---------------------------------------------------------------------------------------------------------------------

BOOL Unk_ov050_0225e400::func_ov050_0225c5a8() {
    Unk_ov050_0225c9dc_Vec *pv = func_020947f0(4);
    Unk_ov050_0225c9dc_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    Unk_ov050_0225c9dc_Vec out;
    func_0201ae00(&out, this, &v);
    s32 t = func_0201bd20(4);
    func_0204e328(data_021c47c4, &unk_5c);
    if (t > 0x4000) {
        if (func_020197a8(&unk_564) == 1) {
            func_020196b4(&unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(&unk_564) == 2) {
            func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(&unk_350, &out);
    if (t <= 0x3000 || func_020e972c(&out, &unk_5c) != 0 || func_020e7518(&unk_739) == 0) {
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(4));
        func_ov050_0225d1d4(4);
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225c6c0() {
    unk_739 = 0x32;
    func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225c700() { return TRUE; }

BOOL Unk_ov050_0225e400::func_ov050_0225c704() { return TRUE; }

BOOL Unk_ov050_0225e400::func_ov050_0225c708() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov050_0225d1d4(0xd);
        } else {
            func_ov050_022590d8();
        }
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225c740() {
    s32 f = func_0201bc70(4);
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, f, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225c780() {
    s32 t = func_0201bc70(4);
    if (func_020e780c(unk_8e, t) >= data_020c6cc0) {
        func_ov050_0225d1d4(0xe);
    } else {
        func_ov050_022590d8();
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225c7bc() {
    func_02019614(&unk_564, 1, unk_72c);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225c7e0() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(&a, &b) && a == 4 && func_020a62a0()) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov050_0225d1d4(0xd);
        }
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225c838() { return TRUE; }

BOOL Unk_ov050_0225e400::func_ov050_0225c83c() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        u32 x, t;
        if (func_0201b9e8(&a, &b) && ((x = a), x == (t = data_020cbb18->unk_64)) && x == b) {
            func_0201b9fc(1, t, t);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            BOOL r;
            if (func_0204b2d4(&unk_72e)) {
                u16 tmp = 0xfff1;
                s32 p = func_0204b25c(&unk_72e);
                if (p == func_0204b25c(&tmp)) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            } else {
                if (unk_72e.unk_00 == 0xfff1) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            }
            if (r) {
                if (func_ov050_02258ed0()) {
                    unk_658.func_ov050_0225c000(5);
                } else {
                    unk_658.func_ov050_0225c000(0x13);
                }
            }
            func_ov050_0225d1d4(4);
        } else if (func_020a62a0() && b == 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov050_0225d1d4(0xd);
        }
    } else {
        func_ov050_022590d8();
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225c94c() { return TRUE; }

BOOL Unk_ov050_0225e400::func_ov050_0225c950() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_02019614(&unk_564, 1, unk_72c);
        }
    }
    func_0201a99c(&unk_350, func_0201bc70(4));
    func_0203d704(this, 0);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225c9a8() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225c9dc() {
    func_0209750c();
    Unk_ov050_0225c9dc_Vec *pv = func_020947f0(4);
    Unk_ov050_0225c9dc_Vec v0;
    v0.x = pv->x;
    v0.y = pv->y;
    v0.z = pv->z;
    s32 a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    Unk_ov050_0225c9dc_Vec v1;
    v1 = data_ov050_0225da34;
    s32 gx = v1.x;
    s32 gy = v1.y;
    s32 gz = v1.z;
    func_0204ee10(&a2, &a3, &v1);
    func_0204ee10(&a0, &a1, &v0);
    switch (unk_651) {
    case 0:
        if (func_02014220(&unk_618) == 0) {
            func_0203a844();
            unk_651 = 1;
        }
        break;
    case 1: {
        Unk_ov050_0225c9dc_Vec v2;
        v2.x = gx;
        v2.y = gy;
        v2.z = gz;
        func_02094b0c(&v2, 0x266, 4);
        unk_651 = 2;
        break;
    }
    case 2:
        if (func_020951b8(4) == 0) {
            func_0203d67c(this);
            func_ov050_0225d1d4(2);
        }
        break;
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225ca98() {
    unk_651 = 0;
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225caa8() {
    if (func_ov050_02259074()) {
        return TRUE;
    }
    if (func_ov050_02258f80()) {
        return TRUE;
    }
    if (func_ov050_02258ee8()) {
        return TRUE;
    }
    if (func_ov050_022590d8()) {
        return TRUE;
    }
    if (func_020197a8(&unk_564) == 0xa) {
        if (func_02019790(&unk_564)) {
            unk_72c = 0x18;
            func_ov050_0225d1d4(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cb18() {
    func_020196b4(&unk_564, 0xa, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cb4c() {
    func_0201a99c(&unk_350, func_0201bc70(4));
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cb6c() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Menu class

void Unk_ov050_0225e4b4::func_ov050_0225c4fc(s32 idx) {
    static Fn tbl[3] = {
        &Unk_ov050_0225e4b4::func_ov050_0225c294,
        &Unk_ov050_0225e4b4::func_ov050_0225c1a8,
        &Unk_ov050_0225e4b4::func_ov050_0225c0a0,
    };
    unk_b4 = tbl[idx];
}

void Unk_ov050_0225e4b4::vfunc_84() {
    if (unk_b4) {
        (this->*unk_b4)();
        unk_b4 = *(Fn *)data_0213a740;
    }
}

static inline BOOL Unk_ov050_0225c294_Rng(volatile u16 *p, u32 lo, u32 hi, BOOL r) {
    u32 v = *p;
    if (*p >= lo && v <= hi) r = TRUE;
    return r;
}

void Unk_ov050_0225e4b4::func_ov050_0225c294() {
    void *owner = unk_3c;
    struct {
        u8 cmd;
        u16 item;
        u16 pick;
    } l;
    l.cmd = 8;
    unk_c0 = 0;
    unk_bc = 0;
    if (func_0206ed18()) {
        u16 *list = func_0206eb9c();
        BOOL b1 = FALSE;
        BOOL b2 = FALSE;
        BOOL b3 = FALSE;
        l.item = 0xfff1;
        s32 i = b1;
        s32 neg = ~i;
        BOOL za = i;
        BOOL zb = i;
        goto test0;
    loop0:
        {
            u32 cur = list[i];
            if (cur == 0xfff1) goto done0;
            l.item = cur;
            BOOL r = za;
            u32 v = *(volatile u16 *)&l.item;
            if (l.item >= 0x136a && v <= 0x136a) r = TRUE;
            if (r || (v >= 0x1373 && v <= 0x1373) || (v >= 0x1375 && v <= 0x1375) || (v >= 0x1377 && v <= 0x1377) ||
                (v >= 0x1379 && v <= 0x1379) || (v >= 0x137b && v <= 0x137b)) {
                b1 = TRUE;
            }
            if (v >= 0x38e4 && v <= 0x3933) {
                b3 = TRUE;
                s32 idx;
                if (v >= 0x38e4 && v <= 0x3933) {
                    idx = (s32)(v - 0x38e4) >> 2;
                } else {
                    idx = neg;
                }
                if ((u32)idx < 0x14) {
                    l.pick = 0x3934 + idx * 4;
                } else {
                    l.pick = 0x3934;
                }
                unk_c0 += func_0204be70(&l.pick) / 4;
            } else if (func_0209750c()) {
                BOOL r2 = zb;
                u32 w = *(volatile u16 *)&l.item;
                if (l.item >= 0x1531 && w <= 0x153a) r2 = TRUE;
                if (r2) {
                    if (!func_0209cef4()) {
                        b2 = TRUE;
                    } else {
                        s32 m = func_0208653c(data_021ed29c);
                        unk_c0 += m * func_0204be70(&l.item);
                    }
                } else {
                    unk_c0 += func_0204be70(&l.item) / 4;
                }
            }
        }
        i++;
    test0:
        if (i < 15) goto loop0;
    done0:;
        if (b2 == TRUE) {
            l.cmd = 0xd;
        } else if (b1 == TRUE) {
            func_02015958(this, unk_c0, 0, 0xa, 1, 0);
            l.cmd = 0x11;
        } else if (b3 == TRUE) {
            l.cmd = 0x40;
            func_02015958(this, unk_c0, 0, 0xa, 1, 0);
        } else if (unk_c0 == 0) {
            l.cmd = 0xa;
        } else {
            l.cmd = 0xe;
            func_02015958(this, unk_c0, 0, 0xa, 1, 0);
        }
    } else {
        l.cmd = 8;
    }
    if (unk_b0->func_ov050_02258ed0()) {
        func_02067a84(owner, &l.cmd, data_ov050_0225e1c4);
    } else {
        func_02067a84(owner, &l.cmd, data_ov050_0225e1a4);
    }
}
