#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov078_022724ec;
class Unk_ov078_0227245c;

struct Unk_ov078_Vec {
    s32 x, y, z;
};

struct Unk_020aa3b8 {
    s32 func_020aa514();
};

struct Unk_0202368c_Obj {
    u32 v[2];
};

struct Unk_02065dc8_Obj1c {
    u32 v[7];
    Unk_02065dc8_Obj1c();
    ~Unk_02065dc8_Obj1c();
};

extern "C" {
void *func_0209750c();
void *func_0209865c(void *p);
void *func_02099864(void *p);
void *func_0209a108(void *p);
void func_0209a10c(void *p);
u16 *func_0209ab94(void *p);
s32 func_0209ad68(void *p);
s32 func_0209abc4(void *p);
s32 func_0209a05c(void *p);
s32 func_0209a0dc(void *p, void *q);
void func_0209abb4(void *p, s32 v);
s32 func_02098ffc();
s32 func_02098eb0(u16 *p);
void func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
s32 func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
void func_02014e60(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_02014ce4(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_0201578c(void *p, u16 *q, s32 a, s32 b);
void func_0206338c(Unk_0202368c_Obj *o, s32 a, s32 b);
void func_02063388(Unk_0202368c_Obj *o);
void func_02062f94(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0203ffa4(s32 v);
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
s32 func_02002bdc(void *p, void *q);
BOOL func_0201bd84(s32 v);
void func_020e7518(void *p);
BOOL func_0201bcbc(void *p, void *q);
u32 func_020e7fa8(void *p);
extern u16 data_020c6cc8;
extern u8 data_ov078_02272598[];
extern u32 data_021c7c88[];
extern Unk_ov078_Vec data_021f4880;
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
    s32 func_02067a3c(s32 idx, void *p);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void *func_02015aac();
    void func_02015ab0(void *p);
    Unk_020aa3b8 *func_02015a5c();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

struct Unk_0203442c {
    u16 unk_00;
    Unk_0203442c();
    ~Unk_0203442c();
};

struct Unk_ov078_022717d8_Out {
    u32 a;
    u8 b;
};

class Unk_ov078_0227245c : public Unk_020d8b38 {
public:
    Unk_ov078_0227245c();
    virtual ~Unk_ov078_0227245c();
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
    virtual void vfunc_78(Unk_ov078_022717d8_Out *out);

    void func_ov078_02271934(Unk_ov078_022724ec *owner);

    Unk_ov078_022724ec *unk_ac;
    s32 unk_b0;
    Unk_0203442c unk_b4[2];
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
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
    Unk_ov078_Vec *func_0201a978();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
    s32 func_0201acfc();
};
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
    void func_020135bc();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    BOOL func_02019790();
    s32 func_020197a8();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
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
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
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
    void *func_0201bc4c(u32 v);

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

class Unk_ov078_022724ec : public Unk_020d8bc8 {
public:
    Unk_ov078_022724ec() {}
    virtual ~Unk_ov078_022724ec();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov078_02271a08();
    BOOL func_ov078_02271a0c();
    BOOL func_ov078_02271a48();
    BOOL func_ov078_02271a64();
    BOOL func_ov078_02271ab4();
    BOOL func_ov078_02271cfc();
    BOOL func_ov078_02271eec();
    BOOL func_ov078_02271e5c(s32 *a, s32 *b);
    void func_ov078_02272030(s32 state);

    u8 unk_651;
    s32 unk_654;
    Unk_ov078_0227245c unk_658;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov078_022724ec::~Unk_ov078_022724ec() {}

void Unk_ov078_022724ec::vfunc_4c(s32 v) {
    switch (v) {
    case 1:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov078_02272030(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov078_02272030(4);
        break;
    case 0:
        func_ov078_02272030(0);
        break;
    case 8:
        func_ov078_02272030(2);
        break;
    }
}

BOOL Unk_ov078_022724ec::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov078_0227245c::vfunc_18() {
    u8 b;
    u16 h[2];
    s32 t = func_02015a5c()->func_020aa514();
    u8 msg;
    u8 *s;
    h[0] = 0xfff1;
    s = data_ov078_02272598;
    msg = 0;
    switch (unk_1e) {
    case 2:
    case 4:
        if (t == 0) {
            if (func_02098ffc() < 0) {
                msg = 0x1d;
            } else {
                msg = 5;
            }
        }
        break;
    case 0xd:
    case 0x13:
        if (t == 0) {
            h[0] = unk_b4[0].unk_00;
        } else {
            h[0] = unk_b4[1].unk_00;
        }
        func_02014e60(this, &h[0], 0, 5, 0);
        func_02099014(&h[0], 0);
        msg = 0xe;
        break;
    case 0x14:
        if (t == 0) {
            if (unk_b0 >= 0) {
                func_02099064(unk_b0);
                h[1] = 0x13ac;
                func_02014ce4(this, &h[1], 0, 5, 0);
            }
            msg = 0x16;
        }
        break;
    }
    if (msg != 0) {
        b = msg;
        unk_3c->func_02067a84(&b, s);
    }
}

void Unk_ov078_0227245c::vfunc_14() {
    u8 b;
    u16 h[4];
    Unk_0202368c_Obj o1, o2;
    void *g;
    u16 *p;
    u8 msg;
    u8 *s;
    h[0] = 0xfff1;
    Unk_02065dc8_Obj1c o3;
    g = func_02099864(func_0209865c(func_0209750c()));
    s = data_ov078_02272598;
    msg = 0;
    switch (unk_1e) {
    case 5:
    case 10:
        if (func_02098ffc() < 0) {
            msg = 0x1d;
            break;
        }
        if (unk_1e == 5) {
            func_0209a10c(g);
        }
        p = func_0209ab94(func_0209a108(g));
        {
            BOOL r;
            if (func_0204b2d4(p)) {
                h[3] = 0x155f;
                if (func_0204b25c(p) == func_0204b25c(&h[3])) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            } else {
                if (*p == 0x155f) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            }
            if (r) {
                msg = 6;
            } else {
                msg = 7;
            }
        }
        if (unk_1e != 10) {
            break;
        }
    case 6:
    case 7:
        func_02099014(func_0209ab94(func_0209a108(g)), 2);
        func_02014e60(this, func_0209ab94(func_0209a108(g)), 2, 5, 0);
        if (func_0209a0dc(g, &o3)) {
            unk_3c->func_02067a3c(0, &o3);
        }
        if (unk_1e != 10) {
            msg = 8;
        } else {
            msg = 0xb;
        }
        break;
    case 0xc:
        func_0206338c(&o1, 4, 0x23);
        func_02062f94(&h[1], &o1, msg, msg, 1, 1, msg);
        unk_b4[0].unk_00 = h[1];
        func_02063388(&o1);
        func_0201578c(this, &unk_b4[0].unk_00, 1, 7);
        func_0206338c(&o2, 3, 0x23);
        func_02062f94(&h[2], &o2, msg, msg, 1, 1, msg);
        unk_b4[1].unk_00 = h[2];
        func_02063388(&o2);
        func_0201578c(this, &unk_b4[1].unk_00, 2, 7);
        msg = 0xd;
        break;
    case 0xe:
        func_0209abb4(func_0209a108(g), 3);
        func_0203ffa4(0x3e);
        break;
    case 0x15:
        unk_b0 = -2;
        break;
    case 0x16:
        h[0] = 0x37e0;
        msg = 0x17;
        if (func_02063b8c(2) == 0) {
            h[0] = 0x34a8;
            msg = 0x18;
        }
        unk_b0 = -2;
        func_0201578c(this, &h[0], 0, 7);
        func_02014e60(this, &h[0], 0, 5, 0);
        func_02099014(&h[0], 0);
        break;
    }
    if (msg != 0) {
        b = msg;
        unk_3c->func_02067a84(&b, s);
    }
}

void Unk_ov078_0227245c::vfunc_78(Unk_ov078_022717d8_Out *out) {
    u16 h;
    void *g = func_02099864(func_0209865c(func_0209750c()));
    Unk_02065dc8_Obj1c o;
    out->a = (u32)data_ov078_02272598;
    if (unk_b0 == -1) {
        h = 0x13ac;
        unk_b0 = func_02098eb0(&h);
    }
    if (unk_b0 >= 0) {
        out->b = 0x14;
        return;
    }
    if (func_0209ad68(func_0209a108(g)) != 0 && func_0209abc4(func_0209a108(g)) == 3) {
        out->b = 0;
        return;
    }
    if (!func_0202e1cc(0xb, 1)) {
        out->b = 1;
        return;
    }
    if (func_0209ad68(func_0209a108(g)) == 0) {
        out->b = 4;
        return;
    }
    if (func_0209ad68(func_0209a108(g)) != 0 && func_0209abc4(func_0209a108(g)) == 0) {
        if (func_0209a0dc(g, &o)) {
            unk_3c->func_02067a3c(0, &o);
        }
        out->b = 9;
        return;
    }
    if (func_02098ffc() < 0) {
        out->b = 0x12;
        return;
    }
    if (func_0209a05c(g)) {
        if (func_0209a0dc(g, &o)) {
            unk_3c->func_02067a3c(0, &o);
        }
        out->b = 0xa;
    } else if (func_0209abc4(func_0209a108(g)) == 1) {
        func_0209abb4(func_0209a108(g), 2);
        out->b = 0xc;
    }
}

void Unk_ov078_0227245c::func_ov078_02271934(Unk_ov078_022724ec *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
    for (s32 i = 0; i < 2; i++) {
        unk_b4[i].unk_00 = 0xfff1;
    }
}

Unk_ov078_0227245c::~Unk_ov078_0227245c() {}

Unk_ov078_0227245c::Unk_ov078_0227245c() {}

BOOL Unk_ov078_022724ec::func_ov078_02271a08() { return TRUE; }

BOOL Unk_ov078_022724ec::func_ov078_02271a0c() {
    void *p = unk_658.func_02015aac();
    s32 x = unk_8e;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    return TRUE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271a48() {
    if (func_ov078_02271eec()) {
        func_ov078_02272030(2);
    }
    return TRUE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271a64() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_651 = 0;
    unk_558.func_020135bc();
    return TRUE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271ab4() {
    Unk_02019858 *p = &unk_564;
    Unk_ov078_Vec v, w;
    s32 r6 = func_ov078_02271eec();
    func_020e7518(&unk_651);
    if (r6 != 0) {
        if (func_ov078_02271cfc() == 0) {
            if (p->func_02019790() != 0) {
                if (unk_3aa.func_0201acfc() == 2) {
                    p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((func_020e7fa8(data_021c7c88) & 7) == 0) {
                    v.x = data_021f4880.x;
                    v.y = data_021f4880.y;
                    v.z = data_021f4880.z;
                    if (func_ov078_02271e5c(&v.x, &v.z)) {
                        r6 = func_02002bdc(&unk_5c, &v);
                        if (func_0201bd84((s16)(r6 - unk_8e))) {
                            r6 = 1;
                            if (func_02063b8c(4) == 0) {
                                r6 = 2;
                            }
                            if (r6 != unk_564.func_020197a8()) {
                                p->func_020196b4(r6, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_651 = 0x64;
                            }
                        } else if (unk_564.func_020197a8() != 4) {
                            p->func_020196b4(4, 1, v.x, v.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            unk_651 = 0x50;
                        }
                    } else {
                        p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (unk_98 != 0) {
                if (unk_564.func_020197a8() == 1 || unk_564.func_020197a8() == 2 || unk_564.func_020197a8() == 4) {
                    if (unk_651 == 0) {
                        p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        Unk_ov078_Vec *q = unk_350.func_0201a978();
                        w.x = q->x;
                        w.y = q->y;
                        w.z = q->z;
                        if (func_0201bd84((s16)(func_02002bdc(&unk_5c, &w) - unk_8e)) == 0) {
                            p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        }
                    }
                }
            }
        }
    } else if (unk_98 != 0) {
        func_ov078_02272030(3);
    }
    return FALSE;
}
