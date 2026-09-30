#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov085_02271eb0;
class Unk_ov085_02271e1c;

struct Unk_ov085_Vec {
    s32 x, y, z;
};

struct Unk_020aa3b8 {
    s32 func_020aa514();
};

struct Unk_02065dc8_Obj1c {
    u32 v[7];
    Unk_02065dc8_Obj1c();
    ~Unk_02065dc8_Obj1c();
};

extern "C" {
void *func_0209750c();
void *func_0209865c(void *p);
s32 func_02098eb0(u16 *p);
void func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
void func_02014e60(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_02014ce4(void *p, u16 *q, s32 a, s32 b, s32 c);
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
BOOL func_0201bcbc(void *p, void *q);
void func_0203d67c(void *p);
void func_0201610c(void *self, void *owner, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02053848(void *self, s32 a, s32 b);
u32 func_0203f42c(s32 a);
void func_020856a4(void *p, s32 a);
void func_02085860(void *p);
void *func_0207bf60(void *tbl, s32 idx);
void *func_020805c4(void *p);
BOOL func_020030b4(void *p);
void func_02002fc8(void *p, Unk_02065dc8_Obj1c *o);
void func_02085870(void *a, void *b);
void func_0208582c(void *a, void *b);
void *func_0208586c(void *a);
void *func_02085828(void *a);
void *func_0204bdb8();
s32 func_0209888c(...);
void *func_0207bbb8(void *p, s32 v);
void func_0203ce4c(s32 a, Unk_02065dc8_Obj1c *o);
void func_02076fc8(u32 a, u8 *b);
void func_020794f4(void *p);
BOOL func_0209e170(void *p, s32 v);
void func_0209e148(void *p, s32 v);
void *func_020aa5f4(void *p);
void *func_020aa560(void *p, s32 i);
void *func_020aa7a0(void *p);
void func_020a7bd8(void *p, Unk_02065dc8_Obj1c *o);
void func_020aa784(void *p, u8 *b);
void *func_020aa3ac(s32 v);
void func_020aa780(void *p, void *q);
void func_020aa72c(void *p);
void func_020aa4cc(void *p, s32 i);
void func_020aa4b8(void *p);
s32 func_0207bb7c(void *p);
extern u16 data_020c6cc8;
extern u8 data_021ed24c[];
extern u8 data_021dfd8c[];
extern u8 data_021d7350[];
extern u8 data_ov085_02271dc8[];
extern u8 data_ov085_02271df8[];
extern u8 data_ov085_02271f5c[];
extern u8 data_ov085_02271f6c[];
extern u8 data_ov085_02271f7c[];
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
    void func_02067a3c(s32 idx, void *p);
    void *func_020679b4();
    void func_020679c0(s32 v);
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


struct Unk_ov085_02271728_Out {
    u32 a;
    u8 b;
};

class Unk_ov085_02271e1c : public Unk_020d8b38 {
public:
    Unk_ov085_02271e1c();
    virtual ~Unk_ov085_02271e1c();
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
    virtual void vfunc_78(Unk_ov085_02271728_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();

    void func_ov085_02271878(Unk_ov085_02271eb0 *owner);

    Unk_ov085_02271eb0 *unk_ac;
    s32 unk_b0;
    u8 unk_b4;
    u8 pad_b5[3];
    s32 unk_b8[5];
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
    Unk_ov085_Vec *func_0201a978();
    BOOL func_0201a9a0(void *owner, s32 v);
    void func_0201a97c(Unk_ov085_Vec *v);
    BOOL func_0201a968();
    void func_0201a8f0();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); s32 func_0201a7e8(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
    s32 func_0201acfc();
};
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
    ~Unk_0201a794();
    void func_0201a6c0(s32 a, s32 b, s32 c, Unk_ov085_Vec *d, s32 e, s32 f, s32 g);
};
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
    void func_020135c4();
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
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov085_02271eb0 : public Unk_020d8bc8 {
public:
    Unk_ov085_02271eb0() {}
    virtual ~Unk_ov085_02271eb0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov085_02271a0c();
    BOOL func_ov085_02271a10();
    BOOL func_ov085_02271a3c();
    BOOL func_ov085_02271a74();
    BOOL func_ov085_02271a78();
    void func_ov085_02271aac(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov085_02271e1c unk_658;
    u8 unk_724;
};

struct Unk_ov085_02271fa0_Ent {
    BOOL (Unk_ov085_02271eb0::*enter)();
    BOOL (Unk_ov085_02271eb0::*exit)();
};
extern "C" {
extern Unk_ov085_02271fa0_Ent data_ov085_02271fa0[];
}

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov085_02271eb0::~Unk_ov085_02271eb0() {}

void Unk_ov085_02271eb0::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov085_02271aac(1);
        break;
    case 8:
        func_ov085_02271aac(0);
        break;
    }
}

BOOL Unk_ov085_02271eb0::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov085_02271e1c::vfunc_18() {
    u8 b0, b1;
    u16 h;
    s32 t = func_02015a5c()->func_020aa514();
    u8 *s = data_ov085_02271f5c;
    u32 msg = 0xff;
    s32 c = unk_b0;
    if (c >= 0) {
        s = data_ov085_02271f6c;
        if (unk_1e == 0 && t == 0) {
            if (c >= 0) {
                func_02099064(c);
                h = 0x37e0;
                func_02014ce4(this, &h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b0 = msg;
            unk_3c->func_02067a84(&b0, s);
        }
    } else {
        s32 k = unk_1e;
        switch (k) {
        case 4:
            if (t == 0) {
                msg = (u8)(func_02063b8c(2) + 7);
            } else {
                msg = (u8)(func_02063b8c(2) + 5);
            }
            break;
        case 7:
        case 8:
        case 0x14:
        case 0x15: {
            s32 *p = &unk_b8[t];
            if (*p >= 0) {
                u8 *g = data_021ed24c;
                Unk_02065dc8_Obj1c o;
                void *e = func_0207bf60(data_021dfd8c, *p);
                if (func_020030b4(func_020805c4(e))) {
                    func_02002fc8(func_020805c4(e), &o);
                    unk_3c->func_02067a3c(0, &o);
                }
                if (func_02063b8c(2) == 0) {
                    func_02085870(g, func_020805c4(e));
                }
                func_0208582c(g, func_020805c4(e));
                msg = (u8)(func_02063b8c(2) + 9);
            } else if (k != 0x14) {
                msg = 0x14;
            } else {
                msg = 0x15;
            }
            break;
        }
        }
        if (msg != 0xff) {
            b1 = msg;
            unk_3c->func_02067a84(&b1, s);
        }
    }
}

void Unk_ov085_02271e1c::vfunc_14() {
    u8 b0, b1;
    u16 h0, h1;
    u8 *s = data_ov085_02271f5c;
    u32 msg = 0xff;
    if (unk_b0 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_b0 = -2;
        }
        switch (unk_1e) {
        case 2:
            h0 = 0x1559;
            func_02014e60(this, &h0, 0, 5, 0);
            h1 = 0x1559;
            func_02099014(&h1, 0);
            b0 = 4;
            unk_3c->func_02067a84(&b0, data_ov085_02271f6c);
            break;
        }
    } else {
        if (unk_1e == 0xf) {
            void *r = func_0208586c(data_021ed24c);
            Unk_02065dc8_Obj1c o;
            if (func_020030b4(r) == 0) {
                void *b = func_0204bdb8();
                func_0209750c();
                void *q = func_0207bbb8((u8 *)b + 0x8a3c, func_0209888c());
                if (func_020030b4(func_020805c4(q))) {
                    func_02085870(data_021ed24c, func_020805c4(q));
                    r = func_0208586c(data_021ed24c);
                }
            }
            func_02002fc8(r, &o);
            func_0203ce4c(0, &o);
            unk_3c->func_02067a3c(1, &o);
            func_02076fc8(func_02063b8c(2), data_ov085_02271f7c);
            func_020794f4(data_021dfd8c);
            msg = 0x10;
        }
        switch (unk_1e) {
        case 7:
        case 8:
        case 0x14:
        case 0x15:
            vfunc_88();
            break;
        }
        if (msg != 0xff) {
            b1 = msg;
            unk_3c->func_02067a84(&b1, s);
        }
    }
}

void Unk_ov085_02271e1c::vfunc_78(Unk_ov085_02271728_Out *out) {
    u16 h;
    func_0209865c(func_0209750c());
    out->a = (u32)data_ov085_02271f5c;
    if (unk_b0 == -1) {
        h = 0x37e0;
        unk_b0 = func_02098eb0(&h);
        if (unk_b0 >= 0) {
            out->a = (u32)data_ov085_02271f6c;
            out->b = 0;
            return;
        }
    }
    if (unk_ac->unk_724 == 6) {
        if (func_0209e170(data_021d7350, 0x11)) {
            void *g = func_0208586c(data_021ed24c);
            if (func_020030b4(g)) {
                Unk_02065dc8_Obj1c o;
                func_02002fc8(g, &o);
                unk_3c->func_02067a3c(1, &o);
            }
            out->b = func_02063b8c(3) + 0x11;
        } else {
            out->b = 0xf;
            func_0209e148(data_021d7350, 0x11);
        }
    } else {
        void *g = func_02085828(data_021ed24c);
        if (func_020030b4(g)) {
            Unk_02065dc8_Obj1c o;
            func_02002fc8(g, &o);
            unk_3c->func_02067a3c(0, &o);
            out->b = func_02063b8c(4) + 0xb;
        } else {
            out->b = 4;
            if (!func_0202e1cc(0x1f, 1)) {
                switch (unk_ac->unk_724) {
                case 0:
                    out->b = 0;
                    break;
                case 1:
                case 2:
                    out->b = 1;
                    break;
                case 3:
                case 4:
                    out->b = 2;
                    break;
                case 5:
                    out->b = 3;
                    break;
                }
            }
        }
    }
}

void Unk_ov085_02271e1c::func_ov085_02271878(Unk_ov085_02271eb0 *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
}

Unk_ov085_02271e1c::~Unk_ov085_02271e1c() {}

Unk_ov085_02271e1c::Unk_ov085_02271e1c() {}

void Unk_ov085_02271e1c::vfunc_88() {
    u8 b;
    void *r7 = unk_3c->func_020679b4();
    s32 i, n, r6;
    b = 0x3d;
    Unk_02065dc8_Obj1c o;
    func_020aa5f4(r7);
    for (i = 0; i < 5; i++) {
        unk_b8[i] = -1;
    }
    if (!func_020030b4(func_020805c4(func_0207bf60(data_021dfd8c, unk_b4)))) {
        unk_b4 = 0;
    }
    r6 = unk_b4;
    n = 0;
    for (; r6 < 8 && n < 4; r6++) {
        void *g = func_0207bf60(data_021dfd8c, r6);
        if (func_020030b4(func_020805c4(g))) {
            func_02002fc8(func_020805c4(g), &o);
            func_020a7bd8(func_020aa7a0(func_020aa560(r7, n)), &o);
            unk_b8[n] = r6;
            n++;
        }
    }
    unk_b4 = r6;
    if (unk_b4 >= 8) {
        unk_b4 = 0;
    }
    if (func_0207bb7c(data_021dfd8c) > 4) {
        void *p = func_020aa560(r7, n);
        func_020aa784(p, &b);
        func_020aa780(p, func_020aa3ac(0));
        func_020aa72c(p);
        n++;
    }
    func_020aa4cc(r7, n);
    if (func_0207bb7c(data_021dfd8c) > 4) {
        func_020aa4b8(r7);
    }
    unk_3c->func_020679c0(1);
}

BOOL Unk_ov085_02271eb0::func_ov085_02271a0c() { return TRUE; }

BOOL Unk_ov085_02271eb0::func_ov085_02271a10() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov085_02271aac(2);
    }
    return TRUE;
}

BOOL Unk_ov085_02271eb0::func_ov085_02271a3c() {
    void *p = unk_658.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    return TRUE;
}

BOOL Unk_ov085_02271eb0::func_ov085_02271a74() { return TRUE; }

BOOL Unk_ov085_02271eb0::func_ov085_02271a78() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov085_02271eb0::func_ov085_02271aac(s32 state) {
    BOOL ok = TRUE;
    if (data_ov085_02271fa0[state].enter != NULL) {
        ok = (this->*data_ov085_02271fa0[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov085_02271eb0::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov085_02271fa0[unk_654].exit != NULL) {
        result = (this->*data_ov085_02271fa0[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov085_02271eb0::vfunc_70() { return data_ov085_02271dc8; }

u8 *Unk_ov085_02271eb0::vfunc_6c() { return data_ov085_02271df8; }

BOOL Unk_ov085_02271eb0::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov085_02271aac(0);
    func_0201610c(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    func_02053848(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    unk_724 = func_0203f42c(0x11);
    u8 *const g = data_021ed24c;
    func_020856a4(g, 1);
    if (!func_0202e1cc(0x1f, 0)) {
        func_02085860(g);
    }
    return TRUE;
}

BOOL Unk_ov085_02271eb0::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov085_02271878(this);
    return TRUE;
}

extern "C" Unk_ov085_02271eb0 *func_ov085_02271c10() {
    return new Unk_ov085_02271eb0();
}
