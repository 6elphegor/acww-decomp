#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov051_0225a2dc;
class Unk_ov051_0225a1a4;

extern "C" {
extern u8 data_ov051_02259e74[];
extern u8 data_ov051_02259e78[];
extern u8 data_ov051_02259e7c[];
extern u8 data_ov051_02259e80[];
extern u32 data_ov051_02259e84[];
extern char *data_ov051_02259f60[];
extern Unk_ov051_0225a2dc *data_ov051_0225a520;
extern u8 data_020d0544[];
extern u8 data_021edb5c[];

s32 func_02015e48(void *self, s32 a);
void *func_0209750c();
void *func_0209888c(void *h);
u32 func_0209411c(void *h);
void func_02094124(void *h, s32 a);
s32 func_020a0304();
s32 func_020a0318();
s32 func_020a02f0();
void func_02067a84(void *ctx, void *msg, void *tbl);
void func_0209b5c8(u32 a);
void *func_020679b4(void *ctx);
s32 func_020aa514(void *h);
void func_02098850(void *h, u32 a);
void func_020987fc(void *h, u32 a);
void func_02098824(void *h, u32 a);
void func_02098720(void *h, u16 *p);
}

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_ov051_02258e50_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_02053d3c {
    u8 pad_00[0xa4];
    Unk_ov051_02258e50_Bits unk_a4;
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
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, s32 b);
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
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
};

struct Unk_ov051_02258e68_Rec {
    u8 a;
    u8 b;
    u16 c;
};

class Unk_ov051_0225a1a4 : public Unk_02015b54 {
public:
    virtual ~Unk_ov051_0225a1a4();
    virtual void vfunc_14();
    virtual void vfunc_18();

    u8 func_ov051_02258fa8(u32 v);
    void func_ov051_02258fc8(u32 sel);
    void func_ov051_02259040(u32 sel);
    void func_ov051_02259088(u32 sel);
    void func_ov051_022590ec(u32 sel);
    void func_ov051_0225912c(u32 sel);
    void func_ov051_0225915c(u32 sel);
    void func_ov051_022591e8(u32 sel);
    void func_ov051_02259274(u32 sel);
    void func_ov051_02259520();
    void func_ov051_022595dc();
    void func_ov051_02259604();
    void func_ov051_02259654();
    void func_ov051_02259698();
    void func_ov051_022596dc();
    void func_ov051_02259704();
    void func_ov051_02259754();
    void func_ov051_02259780();
    void func_ov051_022597a4();
    void func_ov051_022597c8();

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ Unk_ov051_0225a2dc *unk_ac;
};

class Unk_ov051_0225a2dc : public Unk_020d8bc8 {
public:
    Unk_ov051_0225a2dc() {}
    virtual ~Unk_ov051_0225a2dc();

    void func_ov051_02259be4(s32 v);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov051_0225a1a4 unk_658;
    /* 0x708 */ u8 pad_708[0x710 - 0x708];
    /* 0x710 */ s32 unk_710;
};

// ---------------------------------------------------------------------------------------------------------------------

Unk_ov051_0225a2dc::~Unk_ov051_0225a2dc() {}

extern "C" void func_ov051_02258e34() {
    func_02015e48(&data_ov051_0225a520->unk_334, 0);
}

extern "C" u32 func_ov051_02258e50() {
    return data_ov051_0225a520->unk_ec.unk_a4.mid;
}

struct Unk_ov051_02258e68_Ent {
    u32 id;
    void (Unk_ov051_0225a1a4::*fn)(u32);
};

void Unk_ov051_0225a1a4::vfunc_18() {
    static Unk_ov051_02258e68_Ent tbl[14] = {
        {0x05, &Unk_ov051_0225a1a4::func_ov051_02259088},
        {0x03, &Unk_ov051_0225a1a4::func_ov051_02259088},
        {0x28, &Unk_ov051_0225a1a4::func_ov051_02259088},
        {0x0b, &Unk_ov051_0225a1a4::func_ov051_0225915c},
        {0x0c, &Unk_ov051_0225a1a4::func_ov051_022591e8},
        {0x15, &Unk_ov051_0225a1a4::func_ov051_0225912c},
        {0x16, &Unk_ov051_0225a1a4::func_ov051_0225912c},
        {0x19, &Unk_ov051_0225a1a4::func_ov051_02259040},
        {0x1a, &Unk_ov051_0225a1a4::func_ov051_02259040},
        {0x1f, &Unk_ov051_0225a1a4::func_ov051_02258fc8},
        {0x20, &Unk_ov051_0225a1a4::func_ov051_02258fc8},
        {0x11, &Unk_ov051_0225a1a4::func_ov051_02259274},
        {0x12, &Unk_ov051_0225a1a4::func_ov051_02259274},
        {0x30, &Unk_ov051_0225a1a4::func_ov051_022590ec},
    };
    u32 i = 0;
    u8 *idp = &unk_1e;
    goto test0;
loop0:
    u32 off = i * 12;
    u32 id = *(u32 *)((u8 *)tbl + off);
    if (id == *idp) {
        u32 arg = func_020aa514(func_020679b4(unk_3c));
        (this->*((Unk_ov051_02258e68_Ent *)((u32)tbl + off))->fn)(arg);
    }
    i++;
test0:
    if (i < 0xe) goto loop0;
}

struct Unk_ov051_022592e8_Ent {
    u32 id;
    void (Unk_ov051_0225a1a4::*fn)();
};

void Unk_ov051_0225a1a4::vfunc_14() {
    static Unk_ov051_022592e8_Ent tbl[32] = {
        {0x01, &Unk_ov051_0225a1a4::func_ov051_022597c8},
        {0x04, &Unk_ov051_0225a1a4::func_ov051_022597c8},
        {0x08, &Unk_ov051_0225a1a4::func_ov051_022597a4},
        {0x0a, &Unk_ov051_0225a1a4::func_ov051_022597a4},
        {0x29, &Unk_ov051_0225a1a4::func_ov051_022597a4},
        {0x0f, &Unk_ov051_0225a1a4::func_ov051_02259780},
        {0x10, &Unk_ov051_0225a1a4::func_ov051_02259780},
        {0x13, &Unk_ov051_0225a1a4::func_ov051_02259780},
        {0x14, &Unk_ov051_0225a1a4::func_ov051_02259780},
        {0x25, &Unk_ov051_0225a1a4::func_ov051_02259520},
        {0x26, &Unk_ov051_0225a1a4::func_ov051_02259520},
        {0x06, &Unk_ov051_0225a1a4::func_ov051_02259754},
        {0x07, &Unk_ov051_0225a1a4::func_ov051_02259754},
        {0x1b, &Unk_ov051_0225a1a4::func_ov051_02259704},
        {0x1c, &Unk_ov051_0225a1a4::func_ov051_02259704},
        {0x1d, &Unk_ov051_0225a1a4::func_ov051_02259704},
        {0x1e, &Unk_ov051_0225a1a4::func_ov051_02259704},
        {0x2b, &Unk_ov051_0225a1a4::func_ov051_022596dc},
        {0x2c, &Unk_ov051_0225a1a4::func_ov051_022596dc},
        {0x2d, &Unk_ov051_0225a1a4::func_ov051_022596dc},
        {0x2e, &Unk_ov051_0225a1a4::func_ov051_022596dc},
        {0x0d, &Unk_ov051_0225a1a4::func_ov051_02259698},
        {0x0e, &Unk_ov051_0225a1a4::func_ov051_02259654},
        {0x17, &Unk_ov051_0225a1a4::func_ov051_02259604},
        {0x18, &Unk_ov051_0225a1a4::func_ov051_02259604},
        {0x21, &Unk_ov051_0225a1a4::func_ov051_022595dc},
        {0x22, &Unk_ov051_0225a1a4::func_ov051_022595dc},
        {0x23, &Unk_ov051_0225a1a4::func_ov051_022595dc},
        {0x24, &Unk_ov051_0225a1a4::func_ov051_022595dc},
        {0x2f, &Unk_ov051_0225a1a4::func_ov051_022595dc},
        {0x31, &Unk_ov051_0225a1a4::func_ov051_022595dc},
        {0x32, &Unk_ov051_0225a1a4::func_ov051_022595dc},
    };
    u32 i = 0;
    u8 *idp = &unk_1e;
    goto test0;
loop0:
    u32 id = tbl[i].id;
    if (id == *idp) {
        (this->*((Unk_ov051_022592e8_Ent *)((u32)tbl + i * 12))->fn)();
    }
    i++;
test0:
    if (i < 0x20) goto loop0;
}

u8 Unk_ov051_0225a1a4::func_ov051_02258fa8(u32 v) {
    u8 r = (u8)func_0209411c(func_0209888c(func_0209750c()));
    return (u8)(v + r);
}

void Unk_ov051_0225a1a4::func_ov051_02258fc8(u32 sel) {
    u8 msg;
    u32 v;
    if (func_020a0318()) {
        v = func_ov051_02258fa8(data_ov051_02259e74[sel]);
    } else if (sel == 0) {
        if (func_0209411c(func_0209888c(func_0209750c())) == 0) {
            v = 0x21;
        } else {
            v = 0x2f;
        }
    } else {
        v = func_ov051_02258fa8(0x23);
    }
    msg = v;
    func_02067a84(unk_3c, &msg, data_ov051_02259f60[0]);
    if (sel == 1) {
        unk_ac->unk_710++;
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259040(u32 sel) {
    u8 msg;
    msg = func_ov051_02258fa8(data_ov051_02259e78[sel]);
    func_02067a84(unk_3c, &msg, data_ov051_02259f60[0]);
    if (sel == 1) {
        unk_ac->unk_710 += 2;
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259088(u32 sel) {
    u8 msg;
    u32 v;
    if (func_020a02f0()) {
        v = *(u8 *)(func_0209411c(func_0209888c(func_0209750c())) + ((u32)data_ov051_02259e80 + sel * 2));
    } else {
        v = data_ov051_02259e7c[sel];
    }
    msg = v;
    func_02067a84(unk_3c, &msg, data_ov051_02259f60[0]);
    if (sel == 1) {
        unk_ac->unk_710 += 4;
    }
}

void Unk_ov051_0225a1a4::func_ov051_022590ec(u32 sel) {
    u8 msg[2];
    switch (sel) {
    case 0:
        msg[0] = 0x31;
        func_02067a84(unk_3c, &msg[0], data_ov051_02259f60[0]);
        break;
    case 1:
        msg[1] = 0x32;
        func_02067a84(unk_3c, &msg[1], data_ov051_02259f60[0]);
        break;
    }
}

void Unk_ov051_0225a1a4::func_ov051_0225912c(u32 sel) {
    u8 msg;
    msg = func_ov051_02258fa8(0x17);
    func_02067a84(unk_3c, &msg, data_ov051_02259f60[0]);
    func_0209b5c8(sel);
}

void Unk_ov051_0225a1a4::func_ov051_0225915c(u32 sel) {
    u8 msg[3];
    switch (sel) {
    case 0:
        func_02094124(func_0209888c(func_0209750c()), 1);
        if (func_020a0304()) {
            msg[0] = func_ov051_02258fa8(0x19);
            func_02067a84(unk_3c, &msg[0], data_ov051_02259f60[0]);
        } else {
            msg[1] = func_ov051_02258fa8(0xf);
            func_02067a84(unk_3c, &msg[1], data_ov051_02259f60[0]);
        }
        break;
    case 1:
        func_02094124(func_0209888c(func_0209750c()), 0);
        msg[2] = 0xd;
        func_02067a84(unk_3c, &msg[2], data_ov051_02259f60[0]);
        break;
    }
}

void Unk_ov051_0225a1a4::func_ov051_022591e8(u32 sel) {
    u8 msg[3];
    switch (sel) {
    case 0:
        func_02094124(func_0209888c(func_0209750c()), 0);
        if (func_020a0304()) {
            msg[0] = func_ov051_02258fa8(0x19);
            func_02067a84(unk_3c, &msg[0], data_ov051_02259f60[0]);
        } else {
            msg[1] = func_ov051_02258fa8(0xf);
            func_02067a84(unk_3c, &msg[1], data_ov051_02259f60[0]);
        }
        break;
    case 1:
        func_02094124(func_0209888c(func_0209750c()), 1);
        msg[2] = 0xe;
        func_02067a84(unk_3c, &msg[2], data_ov051_02259f60[0]);
        break;
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259274(u32 sel) {
    u8 msg[3];
    switch (sel) {
    case 0:
        if (func_020a02f0()) {
            msg[0] = func_ov051_02258fa8(0x15);
            func_02067a84(unk_3c, &msg[0], data_ov051_02259f60[0]);
        } else {
            msg[1] = func_ov051_02258fa8(0x19);
            func_02067a84(unk_3c, &msg[1], data_ov051_02259f60[0]);
        }
        break;
    case 1:
        msg[2] = func_ov051_02258fa8(0x13);
        func_02067a84(unk_3c, &msg[2], data_ov051_02259f60[0]);
        break;
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259520() {
    if (func_020a0304() || func_020a0318()) {
        void *h = func_0209750c();
        u32 res = func_0209411c(func_0209888c(h));
        u32 off4;
        u32 v;
        u32 r1;
        if (res == 0) {
            off4 = res << 2;
            v = *(u32 *)(off4 + ((u32)data_ov051_02259e84 + (u32)(unk_ac->unk_710 << 3)));
            r1 = (u8)v;
        } else {
            off4 = res << 2;
            v = *(u32 *)(off4 + ((u32)data_ov051_02259e84 + (u32)(unk_ac->unk_710 << 3)));
            r1 = (u8)(v + 8);
        }
        u8 *base = data_020d0544 + (v << 3);
        Unk_ov051_02258e68_Rec *e = (Unk_ov051_02258e68_Rec *)(base + off4);
        u16 c;
        func_02098850(h, r1);
        func_020987fc(h, e->b);
        func_02098824(h, base[off4]);
        c = e->c;
        func_02098720(h, &c);
    }
    func_02067a84(unk_3c, data_021edb5c, 0);
    unk_ac->func_ov051_02259be4(4);
}

void Unk_ov051_0225a1a4::func_ov051_022595dc() {
    u8 msg;
    msg = func_ov051_02258fa8(0x25);
    func_02067a84(unk_3c, &msg, data_ov051_02259f60[0]);
}

void Unk_ov051_0225a1a4::func_ov051_02259604() {
    u8 msg[2];
    if (func_020a02f0()) {
        msg[0] = func_ov051_02258fa8(0x25);
        func_02067a84(unk_3c, &msg[0], data_ov051_02259f60[0]);
    } else {
        msg[1] = func_ov051_02258fa8(0x1f);
        func_02067a84(unk_3c, &msg[1], data_ov051_02259f60[0]);
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259654() {
    u8 msg[2];
    if (func_020a0304()) {
        msg[0] = 0x1a;
        func_02067a84(unk_3c, &msg[0], data_ov051_02259f60[0]);
    } else {
        msg[1] = 0x10;
        func_02067a84(unk_3c, &msg[1], data_ov051_02259f60[0]);
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259698() {
    u8 msg[2];
    if (func_020a0304()) {
        msg[0] = 0x19;
        func_02067a84(unk_3c, &msg[0], data_ov051_02259f60[0]);
    } else {
        msg[1] = 0xf;
        func_02067a84(unk_3c, &msg[1], data_ov051_02259f60[0]);
    }
}

void Unk_ov051_0225a1a4::func_ov051_022596dc() {
    u8 msg;
    msg = func_ov051_02258fa8(0xf);
    func_02067a84(unk_3c, &msg, data_ov051_02259f60[0]);
}
