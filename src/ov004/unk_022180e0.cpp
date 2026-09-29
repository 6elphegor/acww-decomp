#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_0221823c_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221841c_Vec {
    s32 x, y, z;
    Unk_ov004_0221841c_Vec() {}
    ~Unk_ov004_0221841c_Vec() {}
};

extern "C" {
extern u16 data_020c6cc8;
extern void *data_021c47c4;
extern s32 data_021f482c;
Unk_ov004_0221823c_Vec *func_020947f0(u32);
void func_0201ae00(void *, void *, void *);
s32 func_0201bd20(void *, u32);
s32 func_0201bc70(void *, u32);
s32 func_0201bc4c(void *, u32);
void func_0201a99c(void *, s32);
void func_0201a9ec(void *, void *);
void func_0204e328(void *, void *);
s32 func_020e972c(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e7518(void *);
s32 func_020e780c(s32, s32);
s32 func_020197a8(void *);
s32 func_02019790(void *);
s32 func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_02014220(void *);
s32 func_020b4934(void);
void func_020b4bbc(s32, s32);
void *func_02015aac(void *);
void func_02015ab0(void *, s32);
s32 func_0203d67c(void *);
s32 func_0203d704(void *, u32);
void func_020141b4(void *, u32, s32, u32);
s32 func_0201bcbc(void *, void *);
void func_0201adc8(void *, s32);
void func_02099014(void *, s32);
s32 func_ov004_02235718(void);
s32 func_ov004_02235624(s32, s32, s32, s32);
void func_ov004_022344dc(void);
void func_0207e400(s32, void *, s32, s32);
s32 func_0204b2d4(void *);
u32 func_0204b25c(void *);
void func_ov004_02235d04(void);
void func_020135c4(void *);
void func_020b50dc(void);
s32 func_020b5178(void);
void func_0202ffb0(u32);
s32 func_0201bdec(void *);
s32 func_0204cc1c(void *, s32, s32);
void func_0201bc28(void *, void *);
s32 func_ov004_022178f0(void *);
s32 func_ov004_02217934(void *);
void func_ov004_022196ec(void *);
void func_ov004_022087a4(void *);
void func_0202d388(void *, void *, u32);
void func_020e8558(s32);
s32 func_02053248(void);
}

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
};

class Unk_020d8938 : public Unk_02015b54 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
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
    virtual void *vfunc_64();
    virtual u32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    u8 pad_04[0x1a0 - 4];
};

class Unk_ov004_0224c574;

class Unk_ov004_0224c4e4 : public Unk_020d8938 {
public:
    Unk_ov004_0224c4e4();
    virtual ~Unk_ov004_0224c4e4();

    void func_ov004_022180e0();
    void func_ov004_022181c4(Unk_ov004_0224c574 *owner);

    /* 0x1a0 */ Unk_ov004_0224c574 *unk_1a0;
};

class Unk_020d89c8 : public Unk_020d8c7c_Base {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual BOOL vfunc_64();

    /* 0x004 */ u8 pad_004[0x5c - 4];
    /* 0x05c */ s32 unk_5c[3];
    /* 0x068 */ u8 pad_068[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_090[0x350 - 0x90];
    /* 0x350 */ u8 f_350[0x558 - 0x350];
    /* 0x558 */ u8 f_558[0x564 - 0x558];
    /* 0x564 */ u8 f_564[0x618 - 0x564];
    /* 0x618 */ u8 f_618[0x894 - 0x618];
};

class Unk_ov004_0224c574;
typedef BOOL (Unk_ov004_0224c574::*Unk_ov004_022187b8_Fn)();

struct Unk_ov004_022187b8_Ent {
    Unk_ov004_022187b8_Fn a;
    Unk_ov004_022187b8_Fn b;
};

struct Unk_ov004_022187fc_Ent {
    Unk_ov004_022187b8_Fn a;
    u8 pad[8];
};

extern "C" {
extern Unk_ov004_022187b8_Ent data_ov004_02250718[];
extern Unk_ov004_022187fc_Ent data_ov004_02250720[];
}

class Unk_ov004_0224c574 : public Unk_020d89c8 {
public:
    Unk_ov004_0224c574()
        : unk_894(0xfff1), unk_898(0), unk_89c(0) {}
    virtual ~Unk_ov004_0224c574();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();

    BOOL func_ov004_0221823c();
    BOOL func_ov004_02218354();
    BOOL func_ov004_02218394();
    BOOL func_ov004_02218398();
    BOOL func_ov004_022183e4();
    BOOL func_ov004_0221841c();
    BOOL func_ov004_02218460();
    BOOL func_ov004_02218498();
    BOOL func_ov004_02218588();
    BOOL func_ov004_022185bc();
    BOOL func_ov004_0221866c();
    BOOL func_ov004_022186a0();
    BOOL func_ov004_02218734();
    BOOL func_ov004_02218768();
    BOOL func_ov004_0221877c();
    void func_ov004_022187b8(s32 idx);

    /* 0x894 */ u16 unk_894;
    /* 0x896 */ u16 pad_896;
    /* 0x898 */ s32 unk_898;
    /* 0x89c */ s32 unk_89c;
    /* 0x8a0 */ s32 unk_8a0;
    /* 0x8a4 */ Unk_ov004_0224c4e4 unk_8a4;
    /* 0xa48 */ u8 pad_a48[4];
    /* 0xa4c */ u8 unk_a4c;
    /* 0xa4d */ u8 unk_a4d;
    /* 0xa4e */ u8 pad_a4e[2];
    /* 0xa50 */ s32 unk_a50;
    /* 0xa54 */ s32 unk_a54;
};

class Unk_ov004_0224c7d0 : public Unk_020d89c8 {
public:
    virtual ~Unk_ov004_0224c7d0();

    void func_ov004_022189dc(void *arg);

    /* 0x894 */ u8 pad_894[0x914 - 0x894];
    /* 0x914 */ u8 unk_914[0xad0 - 0x914];
    /* 0xad0 */ s32 unk_ad0;
};

// ---- Unk_ov004_0224c4e4 ----

void Unk_ov004_0224c4e4::func_ov004_022180e0() {
    u16 *p = &unk_1a0->unk_894;
    BOOL same;
    if (func_0204b2d4(p)) {
        u16 t = 0xfff1;
        if (func_0204b25c(p) == func_0204b25c(&t)) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    }
    if (!same) {
        func_0201adc8(unk_1a0, *(s32 *)((u8 *)this + 0x1a4));
        func_02099014(&unk_1a0->unk_894, 0);
        Unk_ov004_0224c574 *o = unk_1a0;
        if (func_ov004_02235624(func_ov004_02235718(), o->unk_898, o->unk_89c, 0) != -1) {
            func_ov004_022344dc();
            if (unk_1a0->vfunc_64()) {
                Unk_ov004_0224c574 *q = unk_1a0;
                func_0207e400(q->vfunc_64(), &q->unk_898, q->unk_a50, q->unk_a54);
            }
        }
        unk_1a0->unk_894 = 0xfff1;
    }
}

void Unk_ov004_0224c4e4::func_ov004_022181c4(Unk_ov004_0224c574 *owner) {
    vfunc_08();
    func_0202d388(this, owner, 0x11);
    unk_1a0 = owner;
}

// ---- Unk_ov004_0224c574 ----

BOOL Unk_ov004_0224c574::func_ov004_0221823c() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4;
    Unk_ov004_0221823c_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    func_0201ae00(&b, this, &a);
    r4 = func_0201bd20(this, 4);
    func_0204e328(data_021c47c4, unk_5c);
    if (r4 > 0x4000) {
        if (func_020197a8(f_564) == 1) {
            func_020196b4(f_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(f_564) == 2) {
            func_020196b4(f_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(f_350, &b);
    if (r4 <= 0x3000 || func_020e972c(&b, unk_5c) != 0 || func_020e7518(&unk_a4d) == 0) {
        Unk_020d8938 *pb = &unk_8a4;
        pb->vfunc_08();
        func_02015ab0(&unk_8a4, func_0201bc4c(this, 4));
        func_ov004_022187b8(1);
    }
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_02218354() {
    unk_a4d = 0x32;
    func_020196b4(f_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_02218394() {
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_02218398() {
    if (func_02014220(f_618) == 0) {
        if (unk_a4c == 0) {
            unk_a4c = 1;
        }
        unk_894 = 0xfff1;
        func_0203d67c(this);
        func_ov004_022187b8(2);
    }
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_022183e4() {
    void *t = func_02015aac(&unk_8a4);
    s32 r = 0;
    if (t != 0) {
        r = func_0201bcbc(this, t);
    }
    func_020141b4(f_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_0221841c() {
    Unk_ov004_0221841c_Vec a;
    Unk_ov004_0221823c_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    if (func_02014220(f_618) == 0) {
        func_020b4bbc(func_020b4934(), 0);
        func_ov004_022187b8(2);
    }
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_02218460() {
    void *t = func_02015aac(&unk_8a4);
    s32 r = 0;
    if (t != 0) {
        r = func_0201bcbc(this, t);
    }
    func_020141b4(f_618, 0, r, 1);
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_02218498() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4;
    if (func_ov004_022178f0(this)) {
        return TRUE;
    }
    if (func_ov004_02217934(this)) {
        return TRUE;
    }
    Unk_ov004_0221823c_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    r4 = func_0201bd20(this, 4);
    func_0201ae00(&b, this, &a);
    if (r4 > 0x4000) {
        if (func_020197a8(f_564) == 1) {
            func_020196b4(f_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(f_564) == 2) {
            func_020196b4(f_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(f_350, &b);
    if (r4 <= 0x3000 || func_020e972c(&b, unk_5c) != 0) {
        func_ov004_022187b8(4);
    }
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_02218588() {
    func_020196b4(f_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_022185bc() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4, r6;
    if (func_ov004_022178f0(this)) {
        return TRUE;
    }
    if (func_ov004_02217934(this)) {
        return TRUE;
    }
    Unk_ov004_0221823c_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    r4 = func_0201bd20(this, 4);
    r6 = func_0201bc70(this, 4);
    func_0201ae00(&b, this, &a);
    if (r4 > 0x3000 && func_020e96ec(&b, unk_5c) != 0) {
        func_ov004_022187b8(6);
        return TRUE;
    }
    func_0201a99c(f_350, r6);
    if (func_020197a8(f_564) == 3) {
        if (func_02019790(f_564) != 0) {
            func_ov004_022187b8(4);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_0221866c() {
    func_020196b4(f_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_022186a0() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4, r6;
    Unk_ov004_0221823c_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    r6 = func_0201bd20(this, 4);
    r4 = func_020e780c(unk_8e, func_0201bc70(this, 4));
    func_0201ae00(&b, this, &a);
    if (r6 > 0x3000 && func_020e96ec(&b, unk_5c) != 0) {
        func_ov004_022187b8(6);
    } else {
        if (r4 > 0x2000) {
            func_ov004_022187b8(5);
        }
    }
    if (func_ov004_022178f0(this)) {
        return TRUE;
    }
    func_ov004_02217934(this);
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_02218734() {
    func_020196b4(f_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_02218768() {
    func_0203d704(this, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c574::func_ov004_0221877c() {
    unk_a4c = 0;
    func_020196b4(f_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov004_0224c574::func_ov004_022187b8(s32 idx) {
    BOOL r = TRUE;
    if (data_ov004_02250718[idx].a) {
        r = (this->*data_ov004_02250718[idx].a)();
    }
    if (r) {
        unk_8a0 = idx;
    }
}

BOOL Unk_ov004_0224c574::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov004_02250720[unk_8a0].a) {
        r = (this->*data_ov004_02250718[unk_8a0].b)();
    }
    return r;
}

BOOL Unk_ov004_0224c574::vfunc_0c() {
    if (!Unk_020d89c8::vfunc_0c()) {
        return FALSE;
    }
    if (unk_a50 != 0) {
        func_020e8558(unk_a50);
        unk_a50 = 0;
        unk_a54 = 0;
    }
    return TRUE;
}

BOOL Unk_ov004_0224c574::vfunc_00() {
    if (!Unk_020d89c8::vfunc_00()) {
        return FALSE;
    }
    func_ov004_02235d04();
    unk_894 = 0xfff1;
    func_020135c4(f_558);
    func_020b50dc();
    if (func_020b5178()) {
        func_ov004_022187b8(4);
    } else {
        func_ov004_022187b8(0);
    }
    func_0202ffb0(0);
    unk_a54 = 0;
    unk_a50 = func_0204cc1c(&unk_a54, func_0201bdec(this), data_021f482c);
    return TRUE;
}

BOOL Unk_ov004_0224c574::vfunc_04() {
    if (!Unk_020d89c8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(this, &unk_8a4);
    unk_8a4.func_ov004_022181c4(this);
    return TRUE;
}

extern "C" Unk_ov004_0224c574 *func_ov004_02218934() {
    return new Unk_ov004_0224c574;
}

Unk_ov004_0224c4e4::Unk_ov004_0224c4e4() {
}

Unk_ov004_0224c4e4::~Unk_ov004_0224c4e4() {
}

// ---- Unk_ov004_0224c7d0 ----

Unk_ov004_0224c7d0::~Unk_ov004_0224c7d0() {
    func_ov004_022196ec(unk_914);
}

void Unk_ov004_0224c7d0::func_ov004_022189dc(void *arg) {
    func_ov004_022087a4(arg);
    switch (func_02053248()) {
    case 0:
        unk_ad0 = 0x3000;
        break;
    case 1:
        unk_ad0 = 0x4000;
        break;
    case 2:
        unk_ad0 = 0x4000;
        break;
    }
}
