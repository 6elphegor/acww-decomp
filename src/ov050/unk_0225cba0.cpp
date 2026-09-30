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
    u8 pad_04[4];
    s32 unk_08;
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
    s32 func_0201bd20(u32 id);
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
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov050_0225cba0();
    BOOL func_ov050_0225cba4();
    BOOL func_ov050_0225cbd4();
    BOOL func_ov050_0225cc00();
    BOOL func_ov050_0225cc04();
    BOOL func_ov050_0225cc08();
    BOOL func_ov050_0225cc0c();
    BOOL func_ov050_0225cc68();
    BOOL func_ov050_0225ccb8();
    BOOL func_ov050_0225cd18();
    BOOL func_ov050_0225cd90();
    BOOL func_ov050_0225cec4();
    BOOL func_ov050_0225cef8();
    BOOL func_ov050_0225cfec();
    BOOL func_ov050_0225d020();
    BOOL func_ov050_0225d118();
    BOOL func_ov050_0225d188();
    BOOL func_ov050_0225d19c();

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
    /* 0x724 */ u8 pad_724[4];
    /* 0x728 */ u8 unk_728;
    /* 0x729 */ u8 pad_729;
    /* 0x72a */ u16 unk_72a;
    /* 0x72c */ u16 unk_72c;
    /* 0x72e */ u16 unk_72e;
    /* 0x730 */ s32 unk_730;
    /* 0x734 */ s32 unk_734;
    /* 0x738 */ u8 unk_738;
};

struct Unk_ov050_0225d1d4_Ent {
    BOOL (Unk_ov050_0225e400::*enter)();
    BOOL (Unk_ov050_0225e400::*exit)();
};

struct Unk_ov050_0225cd90_Vec {
    s32 x, y, z;
};

extern "C" {
extern u16 data_020c6cc8;
extern Unk_ov050_0225d1d4_Ent data_ov050_0225e8a8[];
extern Unk_ov050_0225d1d4_Ent data_ov050_0225e8b0[];
extern u8 *data_ov050_0225e1fc[];
extern u8 *data_ov050_0225e1e8[];
extern u8 *data_021c1b3c;

void func_02019614(void *self, s32 a, u32 b);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, u16 i, u16 j);
s32 func_020197a8(void *self);
s32 func_02019790(void *self);
Unk_020d77a4 *func_02015aac(void *self);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
s32 func_0202e18c(void *owner, void *buf, s32 n);
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
s32 func_020851bc(void *p, s32 a);
s32 func_020aca44();
s32 func_02063b8c(s32 a);
void func_0203d67c(void *self);
s32 func_02086f84(void *p);
s32 func_02086f80(void *p);
s32 func_02086f68(void *p);
s32 func_0209d020();
s32 func_02095154(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e7500(void *p);
s32 func_020e96ec(Unk_ov050_0225cd90_Vec *a, void *b);
s32 func_020e972c(Unk_ov050_0225cd90_Vec *a, void *b);
void func_0201ae00(Unk_ov050_0225cd90_Vec *out, void *self, Unk_ov050_0225cd90_Vec *v);
void func_0201a9ec(void *self, Unk_ov050_0225cd90_Vec *v);
void func_02099db4(void *a, s32 b);
void *func_0209a4f0();
void func_0202ffb0(s32 a);
s32 func_0209ad68(void *p);
u32 func_0209abc4(void *p);
u32 func_0209ac64(void *p);
void func_02035f30(void *p);
s32 func_020b50dc();
}

// ---------------------------------------------------------------------------------------------------------------------

BOOL Unk_ov050_0225e400::func_ov050_0225cba0() { return TRUE; }

BOOL Unk_ov050_0225e400::func_ov050_0225cba4() {
    unk_72c = data_020c6cc8;
    func_02019614(&unk_564, 1, unk_72c);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cbd4() {
    u8 *o = func_02002d3c(func_ov050_02259398(), 0);
    if (*(s32 *)(o + 0x654) == 1) {
        func_ov050_0225d1d4(1);
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cc00() { return TRUE; }
BOOL Unk_ov050_0225e400::func_ov050_0225cc04() { return TRUE; }
BOOL Unk_ov050_0225e400::func_ov050_0225cc08() { return TRUE; }

BOOL Unk_ov050_0225e400::func_ov050_0225cc0c() {
    if (func_02014220(&unk_618) == 0) {
        void *h = func_02085184(func_020850e0());
        if (func_ov050_02258e7c() && func_02086f38(h)) {
            func_020b4bbc(func_020b4934(), 1);
        } else {
            func_020b4bbc(func_020b4934(), 0);
        }
        func_ov050_0225d1d4(6);
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cc68() {
    Unk_020d77a4 *p = func_02015aac(&unk_658);
    s32 r = 0;
    if (p) {
        r = func_0201bcbc(p);
    }
    func_020141b4(&unk_618, 0, r, 1);
    if (func_ov050_02258ed0()) {
        func_02086f84(func_02085184(func_020850e0()));
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225ccb8() {
    if (func_02014220(&unk_618)) {
        return TRUE;
    }
    if (unk_738 && func_020aca44() == 0) {
        return TRUE;
    }
    if (func_020851bc(func_020850e0(), 5)) {
        func_020b4bbc(func_020b4934(), 0);
    } else {
        func_0203d67c(this);
    }
    func_ov050_0225d1d4(6);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cd18() {
    s32 v;
    Unk_020d77a4 *p = func_02015aac(&unk_658);
    s32 r = 0;
    if (p) {
        r = func_0201bcbc(p);
    }
    func_020141b4(&unk_618, 0, r, 0);
    void *h = func_0209750c();
    func_0209865c(h);
    if (func_02098044(h, 1)) {
        return TRUE;
    }
    if (func_ov050_02258ed0() && func_0202e18c(this, &v, 3)) {
        unk_728 = 1;
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cd90() {
    if (func_02095154(0x8b, 4) || func_02095154(0x8c, 4)) {
        func_ov050_0225d1d4(1);
        return TRUE;
    }
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
    Unk_ov050_0225cd90_Vec *pv = (Unk_ov050_0225cd90_Vec *)func_020947f0(4);
    Unk_ov050_0225cd90_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 t = func_0201bd20(4);
    Unk_ov050_0225cd90_Vec out;
    func_0201ae00(&out, this, &v);
    s32 s = func_ov050_02258e58();
    if (t > func_ov050_02258e34()) {
        if (func_020197a8(&unk_564) == 1) {
            func_020196b4(&unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(&unk_564) == 2) {
            func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(&unk_350, &out);
    if (t <= s || func_020e972c(&out, &unk_5c) != 0) {
        func_ov050_0225d1d4(1);
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cec4() {
    func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cef8() {
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
    Unk_ov050_0225cd90_Vec *pv = (Unk_ov050_0225cd90_Vec *)func_020947f0(4);
    Unk_ov050_0225cd90_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 t = func_0201bd20(4);
    s32 b = func_0201bc70(4);
    func_020e780c(unk_8e, b);
    s32 s = func_ov050_02258e58();
    Unk_ov050_0225cd90_Vec out;
    func_0201ae00(&out, this, &v);
    if (func_02095154(0x8b, 4) || func_02095154(0x8c, 4)) {
        return TRUE;
    }
    if (t > s) {
        if (func_020e96ec(&out, &unk_5c)) {
            func_ov050_0225d1d4(3);
            return TRUE;
        }
    }
    unk_350.func_0201a99c(b);
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov050_0225d1d4(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225cfec() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225d020() {
    Unk_ov050_0225cd90_Vec *pv = (Unk_ov050_0225cd90_Vec *)func_020947f0(4);
    Unk_ov050_0225cd90_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 t = func_0201bd20(4);
    s32 a = func_0201bc70(4);
    s32 k = func_020e780c(unk_8e, a);
    s32 s = func_ov050_02258e58();
    Unk_ov050_0225cd90_Vec out;
    func_0201ae00(&out, this, &v);
    if (func_02095154(0x8b, 4) || func_02095154(0x8c, 4)) {
        return TRUE;
    }
    if (t > s && func_020e96ec(&out, &unk_5c)) {
        func_ov050_0225d1d4(3);
    } else if (k > 0x2000) {
        func_ov050_0225d1d4(2);
    }
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
    if (unk_728 && func_020e7500(&unk_72a) == 0) {
        func_ov050_0225d1d4(7);
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225d118() {
    s32 v;
    func_02019614(&unk_564, 1, unk_72c);
    unk_72a = func_02063b8c(5) * 20 + 100;
    unk_72c = data_020c6cc8;
    if (func_ov050_02258ed0() && func_0202e18c(this, &v, 3)) {
        unk_728 = 1;
    } else {
        unk_728 = 0;
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225d188() {
    func_0203d704(this, 0);
    return TRUE;
}

BOOL Unk_ov050_0225e400::func_ov050_0225d19c() {
    if (func_ov050_02258ed0()) {
        unk_658.func_ov050_0225c000(0);
    } else if (func_ov050_02258e7c()) {
        unk_658.func_ov050_0225c000(0x11);
    }
    return TRUE;
}

void Unk_ov050_0225e400::func_ov050_0225d1d4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov050_0225e8a8[state].enter) {
        ok = (this->*data_ov050_0225e8a8[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov050_0225e400::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov050_0225e8b0[unk_654].enter) {
        r = (this->*data_ov050_0225e8a8[unk_654].exit)();
    }
    return r;
}

u8 *Unk_ov050_0225e400::vfunc_70() {
    s32 r = 0;
    if (func_ov050_02258e7c()) {
        r = 4;
    } else {
        switch (unk_08) {
        case 0xd019:
            r = 0;
            break;
        case 0xd01a:
            r = 1;
            break;
        case 0xd01b:
            r = 2;
            break;
        case 0xd01c:
            r = 3;
            break;
        }
    }
    return data_ov050_0225e1fc[r];
}

u8 *Unk_ov050_0225e400::vfunc_6c() {
    s32 r = 0;
    if (func_ov050_02258e7c()) {
        r = 4;
    } else {
        switch (unk_08) {
        case 0xd019:
            r = 0;
            break;
        case 0xd01a:
            r = 1;
            break;
        case 0xd01b:
            r = 2;
            break;
        case 0xd01c:
            r = 3;
            break;
        }
    }
    return data_ov050_0225e1e8[r];
}

BOOL Unk_ov050_0225e400::vfunc_00() {
    s32 v;
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        unk_4cc.unk_1c |= 2;
        if (func_020a62a0()) {
            func_02086f80(func_02085184(func_020850e0()));
            if (func_0209d020()) {
                func_02086f68(func_02085184(func_020850e0()));
            }
            unk_8e = 0;
            unk_94 = 0;
            func_ov050_0225d1d4(0xd);
        } else {
            func_ov050_0225d1d4(8);
        }
        return TRUE;
    }
    func_02086f80(func_02085184(func_020850e0()));
    if (func_0209d020()) {
        func_02086f68(func_02085184(func_020850e0()));
    }
    void *h = func_02085184(func_020850e0());
    void *p = func_0209750c();
    void *q = func_0209865c(p);
    if (func_02098044(p, 1)) {
        func_02099db4(q, 0);
        void *m = func_0209a4f0();
        func_0202ffb0(1);
        unk_658.func_ov050_0225c000(5);
        func_02086f68(h);
        if (func_02086f38(h)) {
            func_02035f30(data_021c1b3c + 0x2a0);
        }
        if (func_0209ad68(m) && (func_0209abc4(m) >= 1 || func_0209ac64(m) >= 0xc)) {
            func_ov050_0225d1d4(1);
        } else {
            func_ov050_0225d1d4(0);
        }
        return TRUE;
    }
    if (func_ov050_02258ea0() && func_020b50dc() == 0x1d) {
        func_02086f68(h);
        func_ov050_0225d1d4(0);
    } else if (func_ov050_02258eb8() && func_020b50dc() == 0x1d) {
        func_ov050_0225d1d4(0xa);
    } else if (func_ov050_02258ed0() && func_020b50dc() == 0) {
        func_02086f68(h);
        func_ov050_0225d1d4(0);
    } else {
        if (func_020b50dc() != 0x1e) {
            func_02086f68(h);
        }
        func_ov050_0225d1d4(1);
    }
    func_0202ffb0(0);
    if (func_ov050_02258ed0()) {
        if (func_02086f38(h)) {
            func_02035f30(data_021c1b3c + 0x2a0);
        }
        if (func_0202e18c(this, &v, 3)) {
            unk_728 = 1;
        }
    }
    return TRUE;
}
