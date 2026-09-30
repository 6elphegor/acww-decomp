#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

struct Unk_ov053_02259784_Vec {
    s32 x, y, z;
};

extern "C" {
extern volatile u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern u8 data_021f4880[];
extern void *data_020cbb18;
extern Unk_ov053_02259784_Vec data_ov053_0225a1a0;
extern Unk_ov053_02259784_Vec data_ov053_0225a1bc[];
extern s32 data_ov053_0225a1c4[];
extern Unk_ov053_02259784_Vec data_ov053_0225a1d4[];
extern s32 data_ov053_0225a1dc[];
extern u8 data_ov053_0225a404[];
extern u8 data_ov053_0225a434[];

s32 func_020195c8(void *, s32, s32, s32, u32, s32);
s32 func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, u32, s32);
s32 func_020197a8(void *);
BOOL func_02019790(void *);
void func_0201a9ec(void *self, Unk_ov053_02259784_Vec *v);
void func_0201a6c0(void *self, u8 a, s32 b, s32 c, void *v, s32 d, s32 e, u8 f);
void func_0201a8d0(void *self, s32 a, s32 b, s32 c, s32 d);
s32 func_02002bdc(void *a, void *b);
BOOL func_02014220(void *self);
void func_020141b4(void *p, s32 a, s32 b, s32 c);
Unk_020d77a4 *func_02015aac(void *self);
s32 func_020e7518(void *);
void func_02034d70(u32);
void func_0208a58c();
BOOL func_02095154(s32 a, s32 b);
BOOL func_ov004_02224a38(s32 a);
BOOL func_ov004_0223fb64(Unk_ov053_02259784_Vec *v);
void func_0203d67c(void *self);
void func_0203d704(void *self, s32 a);
void *func_020b4934();
s32 func_020b4bbc(void *, s32);
void func_0203a844();
BOOL func_02072e44(void *g);
void func_0202ffb0(s32 a);
s32 func_020b50dc();
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
    virtual BOOL vfunc_24();
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
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

// Dialog member at +0x658 of the owner (vtable 0x0225a4c8; other methods live in ov053_000).
class Unk_ov053_0225a4c8 {
public:
    Unk_ov053_0225a4c8();
    s32 func_ov053_02259568();
    void func_ov053_02259570(s32 v);
    void func_ov053_02259578(void *owner);
    u8 func_ov053_02259ed4();
    u8 func_ov053_02259edc();

    u32 pad_00[0xbc / 4];
};

class Unk_ov053_0225a558 : public Unk_020d8bc8 {
public:
    Unk_ov053_0225a558() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov053_02259784();
    BOOL func_ov053_022597bc();
    BOOL func_ov053_022598e0();
    BOOL func_ov053_02259954();
    BOOL func_ov053_02259a50();
    BOOL func_ov053_02259ab0();
    BOOL func_ov053_02259bac();
    BOOL func_ov053_02259bf0();
    BOOL func_ov053_02259c20();
    BOOL func_ov053_02259c5c();
    BOOL func_ov053_02259c60();
    BOOL func_ov053_02259c64();
    BOOL func_ov053_02259d70();
    BOOL func_ov053_02259e44();
    BOOL func_ov053_02259e70();
    BOOL func_ov053_02259ea4();
    BOOL func_ov053_02259eb8();
    void func_ov053_02259ee4(s32 state);

    s32 unk_654;
    Unk_ov053_0225a4c8 unk_658;
    u8 unk_714;
    u8 unk_715;
    u8 unk_716;
    u8 unk_717;
    s16 unk_718;
};

struct Unk_ov053_02259ee4_Ent {
    BOOL (Unk_ov053_0225a558::*enter)();
    BOOL (Unk_ov053_0225a558::*exit)();
};

extern "C" {
extern Unk_ov053_02259ee4_Ent data_ov053_0225a624[];
extern Unk_ov053_02259ee4_Ent data_ov053_0225a62c[];
BOOL func_ov053_02258e48(Unk_ov053_0225a558 *self);
BOOL func_ov053_02258f18(Unk_ov053_0225a558 *self);
BOOL func_ov053_02258ec4(Unk_ov053_0225a558 *self);
BOOL func_ov053_02258e7c(Unk_ov053_0225a558 *self);
}

// ---------------------------------------------------------------------------------------------------------------------

BOOL Unk_ov053_0225a558::func_ov053_02259784() {
    unk_716 = 0x64;
    func_020195c8(&unk_564, 1, 0xf1, 1, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022597bc() {
    if (func_020197a8(&unk_564) == 6) {
        Unk_ov053_02259784_Vec *r = &data_ov053_0225a1bc[unk_715];
        Unk_ov053_02259784_Vec v;
        v.x = r->x;
        v.y = r->y;
        v.z = r->z;
        func_0201a9ec(&unk_350, &v);
        if (func_02019790(&unk_564)) {
            unk_715++;
            u32 t = data_020c6cc8;
            u32 off = *(volatile u8 *)&unk_715 * 0xc;
            func_020196b4(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1bc + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            if (unk_715 >= 2) {
                func_020196b4(&unk_564, 3, 1, 0, 0, 0, -0x4000, 0, 0, t, 0);
            }
        }
    }
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            u32 off = unk_715;
            if (off >= 2) {
                func_ov053_02259ee4(8);
            } else {
                off = off * 0xc;
                func_020196b4(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1bc + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022598e0() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    unk_715 = 0;
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, 0x4000, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259954() {
    if (func_020197a8(&unk_564) == 6) {
        Unk_ov053_02259784_Vec *r = &data_ov053_0225a1d4[unk_715];
        Unk_ov053_02259784_Vec v;
        v.x = r->x;
        v.y = r->y;
        v.z = r->z;
        func_0201a9ec(&unk_350, &v);
        if (func_02019790(&unk_564)) {
            unk_715++;
            u32 off = *(volatile u8 *)&unk_715 * 0xc;
            func_020196b4(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1d4 + off), *(s32 *)((u8 *)data_ov053_0225a1dc + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            if (unk_715 >= 2) {
                func_ov053_02259ee4(2);
            }
        }
    }
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            u32 off = unk_715;
            off = off * 0xc;
            func_020196b4(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1d4 + off), *(s32 *)((u8 *)data_ov053_0225a1dc + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259a50() {
    unk_715 = 0;
    Unk_ov053_02259784_Vec v;
    Unk_ov053_02259784_Vec *p = data_ov053_0225a1d4;
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    s32 r = func_02002bdc(&unk_5c, &v);
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, r, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259ab0() {
    if (func_020197a8(&unk_564) == 6) {
        Unk_ov053_02259784_Vec *r = &data_ov053_0225a1bc[unk_715];
        Unk_ov053_02259784_Vec v;
        v.x = r->x;
        v.y = r->y;
        v.z = r->z;
        func_0201a9ec(&unk_350, &v);
        if (func_02019790(&unk_564)) {
            unk_715++;
            u32 off = *(volatile u8 *)&unk_715 * 0xc;
            func_020196b4(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1bc + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            if (unk_715 >= 2) {
                func_ov053_02259ee4(4);
            }
        }
    }
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            u32 off = unk_715;
            off = off * 0xc;
            func_020196b4(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1bc + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259bac() {
    unk_715 = 0;
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, 0x4000, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259bf0() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov053_02259ee4(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259c20() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_718, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259c5c() { return TRUE; }

BOOL Unk_ov053_0225a558::func_ov053_02259c60() { return TRUE; }

BOOL Unk_ov053_0225a558::func_ov053_02259c64() {
    if (func_020e7518(&unk_717) == 1) {
        func_02034d70(0xe);
    }
    if (func_02014220(&unk_618) == 0) {
        s32 prev = unk_654;
        func_0208a58c();
        if (unk_658.func_ov053_02259568() == 4 || unk_658.func_ov053_02259568() == 3) {
            func_ov053_02259ee4(7);
        } else if (unk_658.func_ov053_02259568() == 5 && func_ov053_02258e48(this)) {
            unk_658.func_ov053_02259570(9);
            func_ov053_02259ee4(6);
            return TRUE;
        } else {
            if (func_02095154(0x28, 4)) {
                if (func_ov004_02224a38(0)) {
                    func_0203d67c(this);
                    func_ov053_02259ee4(3);
                }
            } else if (unk_658.func_ov053_02259568() == 10) {
                if (func_02014220(&unk_618) == 0) {
                    func_020b4bbc(func_020b4934(), 0);
                    func_ov053_02259ee4(3);
                }
            } else {
                func_0203d67c(this);
                func_ov053_02259ee4(3);
            }
        }
        if (prev != unk_654) {
            if (unk_658.func_ov053_02259568() == 5) {
                func_0203a844();
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259d70() {
    func_0201a6c0(&unk_3b0, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    Unk_020d77a4 *p = func_02015aac(&unk_658);
    s32 r4 = 0;
    if (p) {
        r4 = func_0201bcbc(p);
    }
    if (unk_658.func_ov053_02259568() == 5) {
        Unk_ov053_02259784_Vec v;
        Unk_ov053_02259784_Vec *pv = (Unk_ov053_02259784_Vec *)&unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        v.y += 0x2000;
        func_ov004_0223fb64(&v);
        unk_717 = 0x1f;
    }
    if (unk_658.func_ov053_02259568() == 5 || unk_658.func_ov053_02259568() == 8 || unk_658.func_ov053_02259568() == 10) {
        func_020141b4(&unk_618, 0, r4, 1);
        return TRUE;
    } else {
        func_020141b4(&unk_618, 0, r4, 0);
        return TRUE;
    }
}

BOOL Unk_ov053_0225a558::func_ov053_02259e44() {
    if (func_ov053_02258f18(this)) {
        return TRUE;
    }
    if (func_ov053_02258ec4(this)) {
        return TRUE;
    }
    func_ov053_02258e7c(this);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259e70() {
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259ea4() {
    func_0203d704(this, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259eb8() {
    unk_658.func_ov053_02259570(0);
    return TRUE;
}

u8 Unk_ov053_0225a4c8::func_ov053_02259ed4() {
    return ((u8 *)this)[0xb7];
}

u8 Unk_ov053_0225a4c8::func_ov053_02259edc() {
    return ((u8 *)this)[0xb6];
}

void Unk_ov053_0225a558::func_ov053_02259ee4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov053_0225a624[state].enter) {
        ok = (this->*data_ov053_0225a624[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov053_0225a558::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov053_0225a62c[unk_654].enter) {
        r = (this->*data_ov053_0225a624[unk_654].exit)();
    }
    return r;
}

u8 *Unk_ov053_0225a558::vfunc_70() { return data_ov053_0225a404; }
u8 *Unk_ov053_0225a558::vfunc_6c() { return data_ov053_0225a434; }

BOOL Unk_ov053_0225a558::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    void *g = data_020cbb18;
    if (func_02072e44(g) == 0) {
        func_0202ffb0(0);
    }
    unk_718 = 0;
    unk_4cc.unk_1c |= 2;
    unk_715 = 0;
    if (func_02072e44(g)) {
        func_ov053_02259ee4(1);
        return TRUE;
    }
    if (func_020b50dc() == 0x1d) {
        func_ov053_02259ee4(0);
    } else {
        func_ov053_02259ee4(1);
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov053_02259578(this);
    func_0201bd9c(0x100);
    Unk_ov053_02259784_Vec *d = &data_ov053_0225a1a0;
    func_0201a8d0(&unk_350, 2, d->x, d->y, d->z);
    return TRUE;
}

extern "C" Unk_ov053_0225a558 *func_ov053_0225a068() { return new Unk_ov053_0225a558; }
