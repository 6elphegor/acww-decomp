#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov088_022726ac;
class Unk_ov088_02272618;
struct Unk_020868cc;

struct Unk_ov088_Vec {
    s32 x, y, z;
};

struct Unk_020aa72c {
    void func_020aa72c();
    void func_020aa780(const void *p);
    void func_020aa784(const u8 *p);
    u8 *func_020aa7a0();
};

struct Unk_020aa3b8 {
    s32 func_020aa514();
    void func_020aa4b8();
    void func_020aa4cc(s32 v);
    Unk_020aa72c *func_020aa560(s32 i);
    void func_020aa5f4();
};

struct Unk_020aa8e0 {
    u8 unk_00[0x34];
    Unk_020aa8e0();
    ~Unk_020aa8e0();
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
u32 func_020e7518(void *p);
BOOL func_0201bcbc(void *p, void *q);
u32 func_020e7fa8(void *p);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 data_021c3070;
extern Unk_ov088_Vec data_021c309c;
extern s16 data_02135f44[];
extern Unk_ov088_Vec data_ov088_022725f0;
extern Unk_ov088_Vec data_ov088_022725fc;
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204edd8(Unk_ov088_Vec *a, Unk_ov088_Vec *b);
BOOL func_02077f40(Unk_ov088_Vec *a, s32 b);
BOOL func_0201a834(void *p);
void func_0201a900(void *out, Unk_ov088_Vec *a, Unk_ov088_Vec *b, s32 c);
void func_0203d67c(void *p);
void *func_020850e0();
Unk_020868cc *func_0208516c(void *p);
extern u8 data_ov088_02272408[];
extern u8 data_ov088_02272438[];

extern u8 data_ov088_02272598[];
extern u32 data_021c7c88[];
extern Unk_ov088_Vec data_021f4880;
}

struct Unk_020868cc {
    void func_020868dc(s32 a, s32 b);
};

struct Unk_020660f8 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xc];
    s32 unk_14;
    void func_02067a84(u8 *a, void *b);
    s32 func_02067a3c(s32 idx, void *p);
    void func_02067a1c(s32 idx, u8 *p, void *s);
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

struct Unk_ov088_022717d8_Out {
    u32 a;
    u8 b;
};

struct Unk_ov088_022725d4_Ent {
    void (Unk_ov088_02272618::*fn)();
    u8 flag;
};

class Unk_ov088_02272618 : public Unk_020d8b38 {
public:
    Unk_ov088_02272618();
    virtual ~Unk_ov088_02272618();
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
    virtual void vfunc_78(Unk_ov088_022717d8_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88(s32 v);

    void func_ov088_02271654(Unk_ov088_022726ac *owner);
    void func_ov088_022716e8();
    void func_ov088_02271714();
    void func_ov088_022717e8();
    void func_ov088_02271824();
    void func_ov088_022718cc(s32 state);
    s32 func_ov088_02271ac0(u8 *p, s32 n);
    s32 func_ov088_02271afc(u8 *p, s32 n);

    s32 unk_ac;
    u8 unk_b0;
    Unk_ov088_022726ac *unk_b4;
    u8 unk_b8;
    u8 unk_b9[0x1e];
    u8 unk_d7[5];
};

extern "C" {
void func_0203f094(s32 a, s32 b);
s32 func_020133cc(void *p);
s32 func_0201344c(void *p);
u32 func_0203f07c(s32 i);
s32 func_0203f0b4();
s32 func_0203f0c0();
s32 func_02098044(void *p, u32 v);
void func_0209801c(void *p, u32 v);
void func_02115fb4(void *p, s32 v, u32 n);
void func_02014f74(void *p);
Unk_020aa3b8 *func_020679b4(Unk_020660f8 *p);
void func_020679c0(Unk_020660f8 *p, s32 v);
void func_020b35f8(void *a, u8 *b, u8 *c);
void func_020a7bd8(void *a, void *b);
void *func_020aa3ac(s32 v);
extern u8 data_ov088_02272758[];
extern u8 data_ov088_02272768[];
extern u8 data_ov088_02272774[];
extern Unk_ov088_022725d4_Ent data_ov088_022725d4[];
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
    Unk_ov088_Vec *func_0201a978();
    BOOL func_0201a9a0(void *owner, s32 v);
    void func_0201a97c(Unk_ov088_Vec *v);
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
    void func_0201a6c0(s32 a, s32 b, s32 c, Unk_ov088_Vec *d, s32 e, s32 f, s32 g);
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
    virtual s32 vfunc_a0();
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

class Unk_ov088_022726ac : public Unk_020d8bc8 {
public:
    Unk_ov088_022726ac() {}
    virtual ~Unk_ov088_022726ac();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual s32 vfunc_a0();
    virtual s32 vfunc_a8();

    void func_ov088_02271414(s32 a, s32 b);
    BOOL func_ov088_02271b1c();
    BOOL func_ov088_02271b20();
    BOOL func_ov088_02271b5c();
    BOOL func_ov088_02271b78();
    BOOL func_ov088_02271bc8();
    BOOL func_ov088_02271e10();
    BOOL func_ov088_02271f70(s32 *a, s32 *b);
    BOOL func_ov088_02272000();
    void func_ov088_02272144(s32 state);

    u8 pad_651[0x658 - 0x651];
    Unk_ov088_02272618 unk_658;
    u8 unk_734;
    u8 unk_735;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov088_022726ac::~Unk_ov088_022726ac() {}

void Unk_ov088_022726ac::func_ov088_02271414(s32 a, s32 b) {
    func_0203f094(a, b);
    func_0203ffa4(0x43);
}

s32 Unk_ov088_022726ac::vfunc_a0() {
    if (unk_735 != 0) {
        return func_020133cc(this);
    }
    return -1;
}

void Unk_ov088_022726ac::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        func_ov088_02272144(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov088_02272144(4);
        break;
    case 8:
        func_ov088_02272144(2);
        break;
    }
}

BOOL Unk_ov088_022726ac::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov088_02272618::vfunc_18() {
    u8 b[3];
    u8 *s;
    s32 t = func_02015a5c()->func_020aa514();
    u32 msg;
    s = data_ov088_02272758;
    msg = 0xff;
    switch (unk_1e) {
    case 0x17:
    case 0x18: {
        u8 v = *(u8 *)((u8 *)this + t + 0xd7);
        msg = (u8)(v + 0x1c);
        unk_b8 = v;
        break;
    }
    case 0x1a:
        if (t == 4) {
            msg = 0x1b;
        } else {
            b[0] = func_0203f07c(t);
            unk_3c->func_02067a1c(1, &b[0], data_ov088_02272768);
            unk_b4->func_ov088_02271414(t, unk_b8);
            b[1] = unk_b8;
            unk_3c->func_02067a1c(0, &b[1], data_ov088_02272768);
            msg = 0x1c;
        }
        break;
    }
    if (msg != 0xff) {
        b[2] = msg;
        unk_3c->func_02067a84(&b[2], s);
    }
}

void Unk_ov088_02272618::vfunc_14() {
    s32 t = unk_1e;
    if (t >= 0x1d && t <= 0x39) {
        unk_3c->unk_14 = 0;
        func_ov088_022718cc(3);
    }
    switch (unk_1e) {
    case 0xb:
        unk_3c->unk_14 = 0;
        func_ov088_022718cc(1);
        break;
    case 0x17:
    case 0x18:
        unk_b8 = unk_1e;
        func_ov088_022718cc(2);
        break;
    case 0x19: {
        s32 r = func_0203f0b4();
        if (r != -1) {
            unk_b4->func_ov088_02271414(r, unk_b8);
        }
        break;
    }
    case 0x1a:
        vfunc_88(2);
        break;
    }
}

void Unk_ov088_02272618::vfunc_78(Unk_ov088_022717d8_Out *out) {
    out->a = (u32)data_ov088_02272758;
    out->b = 1;
    if (func_02098044(func_0209750c(), 0x10) == 1) {
        if (func_0202e1cc(0xe, 0) == 0) {
            out->b = func_02063b8c(2) + 0x13;
        } else if (func_0203f0c0() == 1) {
            out->b = func_02063b8c(3) + 0xd;
        } else {
            out->b = func_02063b8c(3) + 0x10;
        }
    }
}

void Unk_ov088_02272618::func_ov088_02271654(Unk_ov088_022726ac *owner) {
    vfunc_08();
    unk_b4 = owner;
    unk_b4->unk_735 = 0;
    func_02115fb4(&unk_b9[0], 0, 0x1e);
    func_02115fb4(&unk_d7[0], 0xff, 5);
}

Unk_ov088_02272618::~Unk_ov088_02272618() {}

Unk_ov088_02272618::Unk_ov088_02272618() {}

void Unk_ov088_02272618::func_ov088_022716e8() {
    if (func_020e7518(&unk_b4->unk_734) == 0) {
        func_ov088_022718cc(0);
        func_02014f74(this);
    }
}

void Unk_ov088_02272618::func_ov088_02271714() {
    Unk_020660f8 *r4 = unk_3c;
    if (r4->unk_04 == 5) {
        u8 b[2];
        if (unk_b4->unk_735 == 0) {
            unk_b4->unk_735 = 0x34;
        }
        if (func_0201344c(unk_b4) == -1) {
            if (func_020e7518(&unk_b4->unk_735) > 2) {
                return;
            }
        }
        b[0] = 0x19;
        if (unk_b4->unk_735 <= 2) {
            b[0] = 0x18;
        } else {
            func_0202e1cc(0xe, 1);
            if (func_0203f0b4() == -1) {
                b[0] = 0x1a;
            }
        }
        b[1] = unk_b8;
        unk_3c->func_02067a1c(0, &b[1], data_ov088_02272768);
        unk_b4->unk_735 = 0;
        unk_b4->unk_734 = 0x14;
        r4->func_02067a84(&b[0], data_ov088_02272758);
        func_ov088_022718cc(4);
    }
}

void Unk_ov088_02272618::func_ov088_022717e8() {
    if (unk_b8 == 0x17) {
        vfunc_88(0);
    } else {
        vfunc_88(1);
    }
    unk_b8 = 0xff;
    func_ov088_022718cc(0);
}

void Unk_ov088_02272618::func_ov088_02271824() {
    Unk_020660f8 *r4 = unk_3c;
    if (r4->unk_04 == 5) {
        u8 b[2];
        unk_b4->unk_735 = 0x14;
        if (func_0201344c(unk_b4) != -1) {
            b[1] = 0x17;
            unk_3c->func_02067a1c(0, &b[1], data_ov088_02272768);
            unk_b4->unk_735 = 0;
            unk_b4->unk_734 = 0x14;
            func_0209801c(func_0209750c(), 0x10);
            b[0] = 0xc;
            unk_b4->func_ov088_02271414(0, 0x17);
            r4->func_02067a84(&b[0], data_ov088_02272758);
            func_0202e1cc(0xe, 1);
            func_ov088_022718cc(4);
        }
    }
}

void Unk_ov088_02272618::func_ov088_022718cc(s32 state) {
    unk_ac = state;
    unk_b0 = 0;
}

void Unk_ov088_02272618::vfunc_84() {
    if (data_ov088_022725d4[unk_ac].flag == 0) {
        if (data_ov088_022725d4[unk_ac].fn != NULL) {
            (this->*data_ov088_022725d4[unk_ac].fn)();
            func_ov088_022718cc(0);
        }
    }
}

void Unk_ov088_02272618::vfunc_80() {
    if (data_ov088_022725d4[unk_ac].flag != 0) {
        if (data_ov088_022725d4[unk_ac].fn != NULL) {
            (this->*data_ov088_022725d4[unk_ac].fn)();
        }
    }
}

void Unk_ov088_02272618::vfunc_88(s32 mode) {
    Unk_020aa3b8 *g;
    Unk_020aa72c *slot;
    s32 z;
    u8 b[2];
    s32 i;
    u32 r6;
    func_0209750c();
    g = func_020679b4(unk_3c);
    b[0] = 0;
    Unk_02065dc8_Obj1c o;
    b[1] = 5;
    Unk_020aa8e0 str;
    g->func_020aa5f4();
    r6 = 1;
    unk_b9[0] = r6;
    for (i = 0; i < func_0203f0c0(); i++) {
        unk_b9[func_0203f07c(i)] = r6;
    }
    i = 0;
    z = 0;
    do {
        if (mode == 0) {
            r6 = func_ov088_02271ac0(&unk_b9[0], 0x1e);
            if (r6 != -1) {
                if (unk_b9[r6] == 0) {
                    unk_b9[r6] = 1;
                }
            } else {
                r6 = 1;
            }
            unk_d7[i] = r6;
        } else if (mode == 1) {
            r6 = unk_d7[i];
        } else {
            r6 = func_0203f07c(i);
        }
        slot = g->func_020aa560(i);
        b[1] = r6;
        if (mode != 2) {
            func_020b35f8(&str, &b[1], data_ov088_02272774);
        } else {
            func_020b35f8(&str, &b[1], data_ov088_02272768);
        }
        func_020a7bd8(slot->func_020aa7a0(), &str);
        i++;
    } while (i < 4);
    if (mode == 2) {
        slot = g->func_020aa560(i);
        b[1] = 5;
        slot->func_020aa784(&b[1]);
        slot->func_020aa780(func_020aa3ac(1));
        slot->func_020aa72c();
        g->func_020aa4cc(i + 1);
        g->func_020aa4b8();
    } else {
        g->func_020aa4cc(i);
    }
    func_020679c0(unk_3c, 1);
}

s32 Unk_ov088_02272618::func_ov088_02271ac0(u8 *p, s32 n) {
    s32 r;
    s32 c = func_ov088_02271afc(p, n);
    r = 0;
    if (c <= 0) {
        return -1;
    }
    s32 k = func_02063b8c(c);
    s32 i;
    for (i = 0; i <= n; p++, i++) {
        if (*p == 0) {
            if (k == 0) {
                r = i;
                break;
            }
            k--;
        }
    }
    return r;
}

BOOL Unk_ov088_022726ac::func_ov088_02271b1c() { return TRUE; }

BOOL Unk_ov088_022726ac::func_ov088_02271b20() {
    void *p = unk_658.func_02015aac();
    s32 x = unk_8e;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    return TRUE;
}

BOOL Unk_ov088_022726ac::func_ov088_02271b5c() {
    if (func_ov088_02272000()) {
        func_ov088_02272144(2);
    }
    return TRUE;
}

BOOL Unk_ov088_022726ac::func_ov088_02271b78() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_734 = 0;
    unk_558.func_020135bc();
    return TRUE;
}

BOOL Unk_ov088_022726ac::func_ov088_02271bc8() {
    Unk_02019858 *p = &unk_564;
    Unk_ov088_Vec v, w;
    s32 r6 = func_ov088_02272000();
    func_020e7518(&unk_734);
    if (r6 != 0) {
        if (func_ov088_02271e10() == 0) {
            if (p->func_02019790() != 0) {
                if (unk_3aa.func_0201acfc() == 2) {
                    p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((func_020e7fa8(data_021c7c88) & 7) == 0) {
                    v.x = data_021f4880.x;
                    v.y = data_021f4880.y;
                    v.z = data_021f4880.z;
                    if (func_ov088_02271f70(&v.x, &v.z)) {
                        r6 = func_02002bdc(&unk_5c, &v);
                        if (func_0201bd84((s16)(r6 - unk_8e))) {
                            r6 = 1;
                            if (func_02063b8c(4) == 0) {
                                r6 = 2;
                            }
                            if (r6 != unk_564.func_020197a8()) {
                                p->func_020196b4(r6, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_734 = 0x64;
                            }
                        } else if (unk_564.func_020197a8() != 4) {
                            p->func_020196b4(4, 1, v.x, v.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            unk_734 = 0x50;
                        }
                    } else {
                        p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (unk_98 != 0) {
                if (unk_564.func_020197a8() == 1 || unk_564.func_020197a8() == 2 || unk_564.func_020197a8() == 4) {
                    if (unk_734 == 0) {
                        p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        Unk_ov088_Vec *q = unk_350.func_0201a978();
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
        func_ov088_02272144(3);
    }
    return FALSE;
}

s32 Unk_ov088_02272618::func_ov088_02271afc(u8 *p, s32 n) {
    s32 c = 0;
    s32 i;
    for (i = 0; i < n; p++, i++) {
        if (*p == 0) {
            c++;
        }
    }
    return c;
}
