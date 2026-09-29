#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
struct Unk_ov004_02215c94_V {
    s32 x, y, z;
};
struct Unk_ov004_02215c94_S : Unk_ov004_02215c94_V {
    Unk_ov004_02215c94_S(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    ~Unk_ov004_02215c94_S() {}
};
s32 func_0202d948(void *self);
s32 func_0202dab0(void *self);
s32 func_0202d928(void *self);
void func_020135c4(void *p);
void func_01ffd070(Unk_ov004_02215c94_V *out, void *a, void *b);
s32 func_ov004_02234f6c(Unk_ov004_02215c94_V *v);
void func_0201bc28(void *self, void *p);
void *func_0201bc4c(void *self, s32 n);
void func_02015ab0(void *p, void *q);
void func_0203a680(void *p);
void func_0203a844();
void *func_0209750c();
s32 func_0209888c(...);
void *func_0207f55c(void *p, s32 v);
void func_02080ecc(void *p, s32 a, s32 b, s32 c);
s32 func_02080a64(void *p);
s32 func_02080a40(void *p);
s32 func_02080a98(void *p);
s32 func_02080a74(void *p);
s32 func_02080a2c(void *p);
s32 func_02080a04(void *p);
s32 func_02014220(void *p);
s32 func_0201b138(void *p);
s32 func_0204b2d4();
s32 func_0204b25c(u16 *p);
void *func_02095204(s32 n);
void func_020141b4(void *p, s32 a, s32 b, s32 c);
s32 func_0201bcbc(void *self, void *p);
s32 func_0203d67c(void *self);
s32 func_02019638(void *p, s32 a, s32 b, u32 c);
void func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_0201a6c0(void *p, s32 a, s32 b, void *c, void *d, s32 e, s32 f, s32 g);
s32 func_020e780c(s32 a, s32 b);
s32 func_02063b8c(s32 n);
s32 func_020e7b98(s32 a, s32 b);
extern u16 data_020c6cc8;
extern s32 data_020c8cb4;
extern s32 data_020c8cb8;
extern s32 data_020c6d1c;
extern u8 data_021f4880[];
}

// Members of the scene object, named after their constructors.
struct Unk_02053d3c {
    Unk_02053d3c();
    ~Unk_02053d3c();
    u32 func_02054b38(u32 a);
    u32 func_02053a14(u32 a);
    u32 pad[0x1b4 / 4];
};
struct Unk_0201ad3c { Unk_0201ad3c(); ~Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct Unk_02019dd8 { Unk_02019dd8(); ~Unk_02019dd8(); u32 pad[0x88 / 4]; };
struct Unk_02016350 { Unk_02016350(); ~Unk_02016350(); u32 pad[0x1c / 4]; };
struct Unk_0201accc { Unk_0201accc(); ~Unk_0201accc(); u32 pad[0x58 / 4]; };
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 { Unk_0201a794(); ~Unk_0201a794(); u32 pad[0x68 / 4]; };
struct Unk_0201a194 { Unk_0201a194(); ~Unk_0201a194(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); ~Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_020323b0 { Unk_020323b0(); ~Unk_020323b0(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); ~Unk_02088d00(); u32 pad[0x44 / 4]; u8 unk_44; u8 pad_45[3]; };
struct Unk_020135e4 { Unk_020135e4(); ~Unk_020135e4(); u8 pad[0xb]; u8 unk_0b; };
struct Unk_02019858 { Unk_02019858(); ~Unk_02019858(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); ~Unk_02014254(); u32 pad[0x28 / 4]; };

class Unk_020f43c8 {
public:
    Unk_020f43c8();
    virtual ~Unk_020f43c8();
    u32 pad[0x40 / 4];
};
class Unk_020f4080 : public Unk_020f43c8 {
public:
    Unk_020f4080();
    ~Unk_020f4080() {}
};

// Members added by the 0x020d89c8 class
struct Unk_0202d7f4 {
    Unk_0202d7f4();
    ~Unk_0202d7f4();
    void func_0202d664(void *owner, u16 *p);
    u32 pad[0x34 / 4];
};
struct Unk_0202d5e8 { Unk_0202d5e8(); ~Unk_0202d5e8(); u32 pad[0x1a0 / 4]; u8 unk_1a0; u8 pad_1a1[3]; };
struct Unk_02082088 {
    Unk_02082088();
    ~Unk_02082088();
    void *func_0208202c();
    u32 pad[2];
};
struct Unk_0201c078 {
    Unk_0201c078();
    ~Unk_0201c078();
    BOOL func_0201c6d4();
    void func_0201c614(u32 a, s32 b);
    void func_0201c704();
    u32 pad[0x5c / 4];
};
struct Unk_02082014 {
    Unk_02082014();
    void func_0208211c();
    u8 pad[0x10];
    u8 unk_10;
    u8 pad_11[3];
};

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
    u8 pad_04[0x1a0 - 4];
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xd4 - 0x90];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual BOOL vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();

    u16 func_0201bdec();

    u16 pad_e0[5];
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

class Unk_020d89c8 : public Unk_020d77a4 {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_04();
    virtual void *vfunc_64();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();

    /* 0x640 */ u32 unk_640;
    /* 0x644 */ u32 unk_644;
    /* 0x648 */ u32 unk_648;
    /* 0x64c */ Unk_0202d7f4 unk_64c;
    /* 0x680 */ Unk_0202d5e8 unk_680;
    /* 0x824 */ Unk_02082088 unk_824;
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ void *unk_830;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ Unk_0201c078 unk_838;
};

// Sub-object of Unk_ov004_0224c034 (+0x89c): a menu state holder with the owner at +0x1a0.
class Unk_ov004_0224bfa4 : public Unk_020d8938 {
public:
    Unk_ov004_0224bfa4() {}
    virtual ~Unk_ov004_0224bfa4();

    void *func_ov004_02215a50();
    void func_ov004_022159a4();
    u32 func_ov004_022159bc();
    void func_ov004_022159d8();
    BOOL func_ov004_022159f0();
    void func_ov004_02215a14();
    BOOL func_ov004_02215a2c();

    Unk_020d89c8 *unk_1a0;
};

class Unk_ov004_0224c034;
typedef BOOL (Unk_ov004_0224c034::*Unk_ov004_0224c034_Fn)();

class Unk_ov004_0224c034 : public Unk_020d89c8 {
public:
    Unk_ov004_0224c034() : unk_a48(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_68();

    BOOL func_ov004_02215c3c();
    void func_ov004_02215b9c();
    s32 func_ov004_02215208(s32 st);
    void func_ov004_022150f0();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ u32 pad_898;
    /* 0x89c */ Unk_ov004_0224bfa4 unk_89c;
    /* 0xa40 */ Unk_ov004_0224c034_Fn unk_a40;
    /* 0xa48 */ u16 unk_a48;
    u8 pad_a4a[0xa68 - 0xa4a];
};

extern "C" {
extern Unk_ov004_0224c034 *data_ov004_022503d8;
extern Unk_ov004_0224c034_Fn data_ov004_0224befc;
extern u32 data_ov004_022503c8;
Unk_ov004_0224c034 *func_ov004_02215eac();
void func_ov004_0221570c(void *a, void *b);
}

// Sub-object of Unk_ov004_0224c228 (+0x898).
class Unk_ov004_0224c198 : public Unk_020d8938 {
public:
    Unk_ov004_0224c198() {}
    virtual ~Unk_ov004_0224c198() {}
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    u32 pad_1a0[1];
};

class Unk_ov004_0224c228 : public Unk_020d89c8 {
public:
    virtual ~Unk_ov004_0224c228();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    BOOL func_ov004_02215fe0();
    BOOL func_ov004_02215fe4();
    BOOL func_ov004_02215ff0();
    void func_ov004_02215fc0();
    void func_ov004_02216024();
    BOOL func_ov004_02216028();
    void func_ov004_0221605c();
    BOOL func_ov004_022160a4();
    void func_ov004_02216100();
    BOOL func_ov004_02216148();
    void func_ov004_022161a4();
    BOOL func_ov004_0221622c();
    s32 func_ov004_022166e8(s32 st);

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ Unk_ov004_0224c198 unk_898;
    /* 0xa3c */ u32 pad_a3c[2];
    /* 0xa44 */ u8 unk_a44;
    u8 pad_a45;
    /* 0xa46 */ u16 unk_a46;
    /* 0xa48 */ s16 unk_a48;
};

// ---------------------------------------------------------------------------------------------------------------------
BOOL Unk_ov004_0224c034::vfunc_00() {
    if (!func_0202d948(this)) {
        return FALSE;
    }
    unk_a40 = data_ov004_0224befc;
    func_020135c4(&unk_558);
    return TRUE;
}

BOOL Unk_ov004_0224c034::vfunc_04() {
    if (!func_0202dab0(this)) {
        return FALSE;
    }
    unk_5c = data_020c8cb4 + 0x1000;
    unk_64 = data_020c8cb8 - 0x7000;
    static Unk_ov004_02215c94_S vs[6] = {
        Unk_ov004_02215c94_S(0, 0, 0), Unk_ov004_02215c94_S(-0x2000, 0, 0), Unk_ov004_02215c94_S(-0x4000, 0, 0),
        Unk_ov004_02215c94_S(0x2000, 0, 0), Unk_ov004_02215c94_S(0, 0, 0x2000), Unk_ov004_02215c94_S(-0x2000, 0, 0x2000)
    };
    u32 i;
    for (i = 0; i < 6; i++) {
        Unk_ov004_02215c94_V t;
        func_01ffd070(&t, &unk_5c, &vs[i]);
        if (!func_ov004_02234f6c(&t)) {
            unk_5c = t.x;
            unk_60 = t.y;
            unk_64 = t.z;
            break;
        }
    }
    unk_8e = 0;
    func_0201bc28(this, &unk_89c);
    func_ov004_0221570c(&unk_89c, this);
    if (!unk_89c.func_ov004_02215a2c()) {
        func_ov004_02215208(0);
    } else {
        func_ov004_02215208(7);
        unk_89c.func_ov004_02215a14();
    }
    data_ov004_022503d8 = this;
    return TRUE;
}

BOOL Unk_ov004_0224c034::vfunc_10() {
    if (!func_0202d928(this)) {
        return FALSE;
    }
    data_ov004_022503d8 = NULL;
    return TRUE;
}

BOOL Unk_ov004_0224c034::vfunc_24() {
    if (unk_a40) {
        return (this->*unk_a40)();
    }
    return TRUE;
}

BOOL Unk_ov004_0224c034::vfunc_48() {
    if (func_02014220(&unk_618)) {
        return FALSE;
    }
    if (unk_894 <= 3) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c034::vfunc_4c(s32 a, u32 b) {
    Unk_ov004_02215c94_V v;
    v.x = unk_5c;
    v.y = unk_60;
    v.z = unk_64;
    v.y = v.y + 0x2000;
    switch (a) {
    case 3:
        *((u8 *)this + 0x560) = b;
        func_ov004_02215208(4);
        break;
    case 0:
        *((u8 *)this + 0x560) = b;
        func_02015ab0(&unk_89c, func_0201bc4c(this, 4));
        func_0203a680(&v);
        func_ov004_02215208(5);
        break;
    case 1:
        *((u8 *)this + 0x560) = b;
        func_02015ab0(&unk_89c, func_0201bc4c(this, 4));
        func_0203a680(&v);
        func_ov004_02215208(8);
        break;
    case 8:
        func_0203a844();
        func_ov004_02215b9c();
        func_ov004_02215208(0);
        break;
    case 4:
        func_ov004_02215208(0);
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
}

BOOL Unk_ov004_0224c034::vfunc_58() {
    if (func_02014220(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c034::func_ov004_02215b9c() {
    void *o = func_0209750c();
    if (o != NULL && unk_82c != NULL) {
        s32 r = func_0209888c(o);
        void *p = func_0207f55c(unk_82c, r);
        func_02080ecc(p, 0, 0, 0);
    }
}

BOOL Unk_ov004_0224c034::vfunc_68() {
    func_ov004_022150f0();
    return TRUE;
}

BOOL Unk_ov004_0224c034::func_ov004_02215c3c() {
    if (func_0201b138(this)) {
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------------------------------------------------------------
extern "C" BOOL func_ov004_02215e2c(u16 *p, s32 flag) {
    if (flag == 0) {
        BOOL eq;
        if (func_0204b2d4()) {
            u16 v = 0xfff1;
            s32 a = func_0204b25c(p);
            if (a == func_0204b25c(&v)) {
                eq = TRUE;
            } else {
                eq = FALSE;
            }
        } else {
            if (*p == 0xfff1) {
                eq = TRUE;
            } else {
                eq = FALSE;
            }
        }
        if (eq == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov004_02215e84() {
    Unk_ov004_0224c034 *o = data_ov004_022503d8;
    if (o) {
        return o->unk_89c.func_ov004_022159bc();
    }
    return FALSE;
}

extern "C" Unk_ov004_0224c034 *func_ov004_02215eb8() {
    return new Unk_ov004_0224c034();
}


Unk_ov004_0224c228::~Unk_ov004_0224c228() {}

BOOL Unk_ov004_0224c228::vfunc_7c() {
    if (*((u8 *)this + 0x893) == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c228::vfunc_80() {
    *((u8 *)this + 0x893) = 1;
}

void Unk_ov004_0224c228::func_ov004_02215fc0() {
    void *p = *(void **)((u8 *)this + 0x8d4);
    if (p != NULL && *(u32 *)((u8 *)p + 4) == 0) {
        func_0203d67c(this);
    }
}

BOOL Unk_ov004_0224c228::func_ov004_02215fe0() { return TRUE; }

BOOL Unk_ov004_0224c228::func_ov004_02215fe4() { return func_ov004_022166e8(6); }

BOOL Unk_ov004_0224c228::func_ov004_02215ff0() {
    void *p = func_02095204(4);
    if (p != NULL) {
        func_020141b4(&unk_618, 0, func_0201bcbc(this, p), 0);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c228::func_ov004_02216024() {}

BOOL Unk_ov004_0224c228::func_ov004_02216028() {
    if ((u32)(unk_894 - 1) <= 2) {
        func_02019638(&unk_564, 2, 0, data_020c6cc8);
    }
    return TRUE;
}

void Unk_ov004_0224c228::func_ov004_0221605c() {
    if (unk_a44 != 0) {
        unk_a44--;
    }
    switch (unk_a44) {
    case 1:
        func_02019638(&unk_564, 1, 0, data_020c6cc8);
        break;
    case 0:
        func_ov004_022166e8(0);
    }
}

BOOL Unk_ov004_0224c228::func_ov004_022160a4() {
    Unk_ov004_0224c034 *o = data_ov004_022503d8;
    BOOL r;
    if (o != NULL && (u32)o->unk_894 <= 1) {
        r = o->func_ov004_02215208(3);
    } else {
        r = FALSE;
    }
    if (r) {
        if (func_02019638(&unk_564, 1, 0x1a, data_020c6cc8)) {
            unk_a44 = 0x32;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224c228::func_ov004_02216100() {
    if (unk_a44 != 0) {
        unk_a44--;
    }
    switch (unk_a44) {
    case 1:
        func_02019638(&unk_564, 1, 0, data_020c6cc8);
        break;
    case 0:
        func_ov004_022166e8(0);
    }
}

BOOL Unk_ov004_0224c228::func_ov004_02216148() {
    Unk_ov004_0224c034 *o = data_ov004_022503d8;
    BOOL r;
    if (o != NULL && (u32)o->unk_894 <= 1) {
        r = o->func_ov004_02215208(2);
    } else {
        r = FALSE;
    }
    if (r) {
        if (func_02019638(&unk_564, 1, 3, data_020c6cc8)) {
            unk_a44 = 0x1e;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224c228::func_ov004_022161a4() {
    s32 a = unk_a48;
    s32 b = (s16)(a + 0x8000);
    Unk_ov004_0224c034 *o = func_ov004_02215eac();
    if (o != NULL) {
        s32 da = func_020e780c(a, unk_8e);
        s32 db = func_020e780c(b, o->unk_8e);
        if (da <= 0x500 && db <= 0x500) {
            if (func_02063b8c(2)) {
                if (func_ov004_022166e8(3)) {
                    unk_a46 = 0x12c;
                }
            } else {
                if (func_ov004_022166e8(2)) {
                    unk_a46 = 0x12c;
                }
            }
        }
    }
}

BOOL Unk_ov004_0224c228::func_ov004_0221622c() {
    if (unk_a46 == 0) {
        void *p = &unk_564;
        Unk_ov004_0224c034 *o = func_ov004_02215eac();
        if (o != NULL) {
            unk_a48 = func_020e7b98(o->unk_5c - unk_5c, o->unk_64 - unk_64);
            Unk_ov004_0224c034 *g = data_ov004_022503d8;
            BOOL r;
            if (g != NULL && (u32)g->unk_894 <= 1) {
                r = g->func_ov004_02215208(1);
            } else {
                r = FALSE;
            }
            if (r) {
                func_020196b4(p, 3, 1, 0, 0, 0, unk_a48, 0, 0, data_020c6cc8, 0);
                func_0201a6c0(&unk_3b0, 2, 0, o, data_021f4880, 4, data_020c6d1c, 1);
                return TRUE;
            }
        }
    }
    return FALSE;
}

// ---------------------------------------------------------------------------------------------------------------------
void *Unk_ov004_0224bfa4::func_ov004_02215a50() {
    if (unk_1a0 != NULL && unk_1a0->unk_82c != NULL) {
        func_0209750c();
        s32 r = func_0209888c();
        return func_0207f55c(unk_1a0->unk_82c, r);
    }
    return NULL;
}

void Unk_ov004_0224bfa4::func_ov004_022159a4() {
    void *p = func_ov004_02215a50();
    if (p) {
        func_02080a64(p);
    }
}

u32 Unk_ov004_0224bfa4::func_ov004_022159bc() {
    void *p = func_ov004_02215a50();
    if (p) {
        return func_02080a40(p);
    }
    return 0;
}

void Unk_ov004_0224bfa4::func_ov004_022159d8() {
    void *p = func_ov004_02215a50();
    if (p) {
        func_02080a98(p);
    }
}

BOOL Unk_ov004_0224bfa4::func_ov004_022159f0() {
    void *p = func_ov004_02215a50();
    if (p) {
        if (func_02080a74(p) == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_ov004_0224bfa4::func_ov004_02215a14() {
    void *p = func_ov004_02215a50();
    if (p) {
        func_02080a2c(p);
    }
}

BOOL Unk_ov004_0224bfa4::func_ov004_02215a2c() {
    void *p = func_ov004_02215a50();
    if (p) {
        if (func_02080a04(p) == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" Unk_ov004_0224c034 *func_ov004_02215eac() { return data_ov004_022503d8; }

// Key functions of Unk_ov004_0224c198 (0x022167b4/b0/ac, outside this group); needed so D0/D1 are emitted here.
void Unk_ov004_0224c198::vfunc_10() {}
void Unk_ov004_0224c198::vfunc_14() {}
void Unk_ov004_0224c198::vfunc_18() {}
