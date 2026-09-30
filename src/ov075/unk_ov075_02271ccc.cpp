#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov075_Vec3 {
    s32 x, y, z;
};

struct Unk_ov075_022714e4_Out {
    const char *unk_00;
    u8 unk_04;
};

class Unk_ov075_022723bc;
class Unk_ov075_0227232c;

extern "C" {
extern u8 data_ov075_022722c0[];
extern u8 data_ov075_02272308[];
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u8 data_021f4880[];

void *func_020850e0();
void *func_02085174(void *p);
s32 func_02086eb0(void *p);
void func_02086ec4(void *p, void *q);
void func_02086edc(void *p);
s32 func_0202e360();
s32 func_0202e3a4();
s32 func_0202e514();
s32 func_02040c88();
void func_020195c8(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_0201ad34(void *p, s32 v);
void func_0201a6c0(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_ov075_02271e78(void *self, s32 state);
}

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
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
    virtual void vfunc_78(Unk_ov075_022714e4_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_02015a5c();
    void func_02015ab0(u32 a);
    u32 func_02015aac();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_ov075_0227232c : public Unk_020d8b38 {
public:
    Unk_ov075_0227232c();
    virtual ~Unk_ov075_0227232c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov075_022714e4_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov075_02271524(void *owner);
    void func_ov075_02271590();
    void func_ov075_02271704(s32 v);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb4 */ u8 *unk_b4;
};

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
    u8 pad_00[9];
    u8 unk_09;
    u8 pad_0a[2];
    Unk_020135e4();
    ~Unk_020135e4();
    void func_020135c4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    u8 unk_00[0x28];
};
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
    u8 pad_04[0x58];
    Unk_ov075_Vec3 unk_5c;
    Unk_ov075_Vec3 unk_68;
    u8 pad_74[0x8e - 0x74];
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
    virtual void vfunc_4c(s32 a);
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

    void func_0201bc28(void *p);

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
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov075_022723bc : public Unk_020d8bc8 {
public:
    Unk_ov075_022723bc() {}
    virtual ~Unk_ov075_022723bc();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual s32 vfunc_a8();

    BOOL func_ov075_022717a8();
    BOOL func_ov075_02271800();
    BOOL func_ov075_022717ac();
    BOOL func_ov075_022717d8();
    BOOL func_ov075_02271804();
    BOOL func_ov075_0227188c();
    BOOL func_ov075_02271aa4();
    BOOL func_ov075_02271ac8();
    BOOL func_ov075_02271bc8(Unk_ov075_Vec3 *out, void *p);
    BOOL func_ov075_02271c04(s32 *px, s32 *pz);
    s32 func_ov075_02271c94();
    BOOL func_ov075_02271d24();
    BOOL func_ov075_02271da4();
    BOOL func_ov075_02271df8();
    BOOL func_ov075_02271e08();
    BOOL func_ov075_02271e0c();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov075_0227232c unk_658;
    /* 0x710 */ u32 unk_710;
    /* 0x714 */ u8 unk_714;
    /* 0x715 */ u8 unk_715;
};

struct Unk_ov075_02271e78_Ent {
    BOOL (Unk_ov075_022723bc::*enter)();
    BOOL (Unk_ov075_022723bc::*exit)();
};

extern "C" {
extern Unk_ov075_02271e78_Ent data_ov075_022724c8[];
}

// ---------------------------------------------------------------------------------------------------------------------
extern "C" s32 func_ov075_02271ccc(void *self, void *a, void *b) {
    Unk_ov075_Vec3 *pa = (Unk_ov075_Vec3 *)a;
    Unk_ov075_Vec3 *pb = (Unk_ov075_Vec3 *)b;
    s32 r = 0;
    BOOL f2 = FALSE;
    BOOL f1 = FALSE;
    s32 ax = pa->x;
    s32 bx = pb->x;
    if (bx > ax - 0x10000 && bx < ax + 0x10000) {
        f1 = TRUE;
    }
    if (f1) {
        s32 bz = pb->z;
        s32 az = pa->z;
        if (bz > az - 0x1a000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        s32 bz = pb->z;
        s32 az = pa->z;
        if (bz < az + 0xa000) {
            r = 1;
        }
    }
    return r;
}

BOOL Unk_ov075_022723bc::func_ov075_02271d24() {
    unk_715 = 0;
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_558.func_020135c4();
    unk_558.func_020135c4();
    func_0201a6c0(&unk_3b0, 1, 0, 0, (s32)data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271da4() {
    void *r5 = func_02085174(func_020850e0());
    if (func_02086eb0(r5) != 0) {
        func_02086ec4(r5, &unk_5c);
        Unk_ov075_Vec3 *s = &unk_5c;
        Unk_ov075_Vec3 *d = &unk_68;
        d->x = unk_5c.x;
        d->y = s->y;
        d->z = s->z;
        unk_558.unk_09 = 1;
        func_ov075_02271e78(this, 0);
    }
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271df8() {
    unk_558.unk_09 = 0;
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271e08() {
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271e0c() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, (s32)data_021f4880, 4, data_020c6d1c, 1);
    func_020195c8(&unk_564, 1, 0xef, 1, data_020c6cc8, 0);
    func_0201ad34(&unk_2a0, 0xef);
    return TRUE;
}

extern "C" void func_ov075_02271e78(void *self, s32 state) {
    Unk_ov075_022723bc *o = (Unk_ov075_022723bc *)self;
    BOOL ok = TRUE;
    if (data_ov075_022724c8[state].enter != NULL) {
        ok = (o->*data_ov075_022724c8[state].enter)();
    }
    if (ok) {
        o->unk_654 = state;
    }
}

BOOL Unk_ov075_022723bc::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov075_022724c8[unk_654].exit != NULL) {
        result = (this->*data_ov075_022724c8[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov075_022723bc::vfunc_70() { return data_ov075_022722c0; }

u8 *Unk_ov075_022723bc::vfunc_6c() { return data_ov075_02272308; }

BOOL Unk_ov075_022723bc::vfunc_0c() {
    if (func_0202e360() == 0) {
        return FALSE;
    }
    if (func_02040c88() == 0) {
        func_02086edc(func_02085174(func_020850e0()));
    }
    return TRUE;
}

s32 Unk_ov075_022723bc::vfunc_a8() { return data_020c6cf0; }

BOOL Unk_ov075_022723bc::vfunc_00() {
    if (func_0202e3a4() == 0) {
        return FALSE;
    }
    if (func_02086eb0(func_02085174(func_020850e0())) != 0) {
        func_ov075_02271e78(this, 0);
    } else {
        func_ov075_02271e78(this, 4);
    }
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

BOOL Unk_ov075_022723bc::vfunc_04() {
    if (func_0202e514() == 0) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov075_02271524(this);
    return TRUE;
}

extern "C" Unk_ov075_022723bc *func_ov075_02271fcc() {
    return new Unk_ov075_022723bc();
}
