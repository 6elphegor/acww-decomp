#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
extern void *data_020cbb18;
extern u8 data_020e416c;
extern u8 data_021ef5d0;
extern u8 data_021ef5cc;
extern u16 data_021f47d8[];
extern s16 data_02135f44[];
extern u8 data_ov004_0224c314[];
extern u8 data_ov004_02240094[];
extern u8 data_ov004_02240090[];
extern u8 data_ov004_022506c8[];
extern u8 data_ov004_0224c634[];
extern u8 data_ov004_0224c640[];
extern u8 data_ov004_0224c648[];
extern u8 data_ov004_0224c650[];
extern u8 data_ov004_022506f0[];
extern u8 data_ov004_0224c658[];
extern u8 data_ov004_0224c664[];
extern u8 data_ov004_0224c670[];
extern u8 data_ov004_0224c67c[];

u32 func_02072e44(void *g);
s32 func_02072e88(void *g, u32 v);
u32 func_02015e48(void *o, u32 v);
void *func_0207fd9c(void *o);
u16 *func_0202d648(void *o);
s32 func_0204b2d4(void *p);
u32 func_0204b25c(void *p);
void func_0201c078(void *o, void *owner);
void func_0202bcdc(void *o, void *a, void *b, u32 c);
void func_0203d704(void *o, u32 a);
void func_02083f44(void *o);
void func_0208403c(void *o);
void func_020135c4(void *o);
u32 func_0201bc4c(void *o, u32 a);
void func_02015ab0(void *o, u32 a);
void *func_0207e310(void *o);
u32 func_020785ec(void *o);
void func_020785e8(void *o, u32 a);
void *func_020805c4(void *o);
u32 func_020030b4(void *o);
void *func_020784f4(void *o);
void func_020784e0(void *o);
void *func_020947f0(u32 a);
s32 func_0202ff64(void *p);
void *func_02095204(u32 a);
s32 func_0203e2f4();
u32 func_02014220(void *o);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
void func_0204ee10(s32 *x, s32 *y, void *v);
void *func_ov004_02235718();
s32 func_ov004_02235624(void *g, s32 x, s32 y, u32 z);
void *func_ov004_022355d8(void *g, s32 x, s32 y, u32 z);
u16 func_0204b248(void *p, u32 a);
void func_ov004_0220711c(void *o, s32 *x, s32 *y, u32 a, u32 b);
void *func_020b50b4();
void func_020b60b0(void *a, void *b);
void *func_020b6048(void *a, u32 b, u32 c);
s32 func_0207e3b8(void *o, s32 *xy, u32 a, u32 b);
void func_ov004_0221757c(void *m, void *owner);
void func_ov004_02217530(void *m, void *owner, u32 s);
void func_ov004_0221820c(void *m);
void *func_02015a5c(void *o);
void *func_020aa514(void *o);
u32 func_0200301c(void *a, void *b, u32 c, void *d);
void *func_ov004_022087a4();
s32 func_02098ffc();
void func_02067a84(void *a, u8 *b, void *c);
void func_0208a598();
u32 func_02063b8c(u32 a);
void *func_0209750c();
void *func_0209888c(void *o);
void *func_0207f55c(void *o, void *a);
void *func_0207f854(void *o, void *a);
void func_02080ecc(void *o, u32 a, u32 b, u32 c);
s32 func_02080dd8(void *o);
void func_ov004_022180e0(void *o);
s32 func_0204be70(void *o);
void func_02015958(void *o, s32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_0207e7a8(void *o, u16 *p);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_0201ade4(void *o, s32 a);
void func_0201578c(void *o, void *a, u32 b, u32 c);
u32 func_02132a4c(s32 a);
}

// Members of the scene object, named after their constructors.
struct Unk_02053d3c {
    Unk_02053d3c();
    ~Unk_02053d3c();
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

struct Unk_0202d7f4 {
    Unk_0202d7f4();
    ~Unk_0202d7f4();
    void func_0202d664(void *owner, u16 *p);
    u32 pad[0x34 / 4];
};
class Unk_0202d5e8 : public Unk_020d8c7c_Base {
public:
    Unk_0202d5e8();
    u32 pad[(0x1a0 - 4) / 4];
    u8 unk_1a0;
    u8 pad_1a1[3];
};
struct Unk_02082088 { Unk_02082088(); ~Unk_02082088(); u32 pad[2]; };
struct Unk_0201c078 { Unk_0201c078(); ~Unk_0201c078(); u32 pad[0x5c / 4]; };

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u32 pad_68[0x6c / 4];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
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

    BOOL func_0201ba88();
    void func_0201bc28(void *p);

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
    virtual BOOL vfunc_00();
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

// ---------------------------------------------------------------------------------------------------------------------
// Class A: vtable 0x0224c38c (factory func_ov004_0221785c), size 0x8d8.
struct Unk_ov004_022175bc {
    Unk_ov004_022175bc();
    ~Unk_ov004_022175bc();
    u32 pad_00[2];
    s32 unk_08;
    u32 pad_0c;
    s32 unk_10;
};

struct Unk_ov004_0208403c {
    Unk_ov004_0208403c();
    u32 pad[0x20 / 4];
};

class Unk_ov004_0224c38c : public Unk_020d89c8 {
public:
    Unk_ov004_0224c38c() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    BOOL func_ov004_02217708();

    typedef BOOL (Unk_ov004_0224c38c::*Fn)();
    /* 0x894 */ Fn unk_894;
    /* 0x89c */ Unk_ov004_022175bc unk_89c;
    /* 0x8b0 */ Unk_ov004_0208403c unk_8b0;
    /* 0x8d0 */ u8 unk_8d0;
    /* 0x8d4 */ u32 unk_8d4;
};

// ---------------------------------------------------------------------------------------------------------------------
// Class D: vtable 0x0224c4e4, member of class B at +0x8a4 (size 0x1a8).
class Unk_ov004_0224c574;
struct Unk_ov004_0224c4e4_Out {
    void *unk_00;
    u8 unk_04;
};

class Unk_ov004_0224c4e4 {
public:
    virtual ~Unk_ov004_0224c4e4();
    virtual void vfunc_08();

    void func_ov004_02217cf8();
    void func_ov004_02217dfc();
    void func_ov004_02217e38(Unk_ov004_0224c4e4_Out *out);

    u32 pad_04[(0x1e - 4) / 4];
    u8 pad_18[2];
    u8 unk_1e;
    u8 pad_1f;
    u32 pad_20[(0x3c - 0x20) / 4];
    void *unk_3c;
    u32 pad_40[(0x1a0 - 0x40) / 4];
    Unk_ov004_0224c574 *unk_1a0;
    s32 unk_1a4;
};

// Class B: vtable 0x0224c574, size 0xa58.
class Unk_ov004_0224c574 : public Unk_020d89c8 {
public:
    virtual ~Unk_ov004_0224c574();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    BOOL func_ov004_022178f0();
    BOOL func_ov004_02217934();
    BOOL func_ov004_02217954();
    void func_ov004_022187b8(u32 a);

    /* 0x894 */ u16 unk_894;
    u16 pad_896;
    /* 0x898 */ s32 unk_898;
    /* 0x89c */ s32 unk_89c;
    u32 pad_8a0;
    /* 0x8a4 */ Unk_ov004_0224c4e4 unk_8a4;
    /* 0xa4c */ u8 unk_a4c;
    u8 pad_a4d;
    /* 0xa4e */ u8 unk_a4e;
    u8 pad_a4f;
    /* 0xa50 */ u32 unk_a50;
    /* 0xa54 */ u32 unk_a54;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" void func_ov004_022175b8() {}

BOOL Unk_ov004_0224c38c::vfunc_68() {
    func_ov004_0221757c(&unk_89c, this);
    if (func_02072e44(data_020cbb18)) {
        if (func_02015e48(&unk_334, 0) != 6) {
            if (vfunc_64()) {
                u16 *p = (u16 *)func_0207fd9c(vfunc_64());
                u16 *q = func_0202d648(&unk_64c);
                BOOL eq;
                if (func_0204b2d4(q)) {
                    eq = func_0204b25c(q) == func_0204b25c(p) ? TRUE : FALSE;
                } else {
                    eq = *q == *p ? TRUE : FALSE;
                }
                if (!eq) {
                    u16 *w = (u16 *)func_0207fd9c(vfunc_64());
                    BOOL in = FALSE;
                    u16 v = *w;
                    if (v >= 0x11a8 && v <= 0x12a7) {
                        in = TRUE;
                    }
                    if (in) {
                        unk_64c.func_0202d664(this, (u16 *)func_0207fd9c(vfunc_64()));
                    }
                }
            }
        }
    }
    func_0201c078(&unk_838, this);
    return TRUE;
}

void Unk_ov004_0224c38c::vfunc_80() { unk_8d0 = 1; }

BOOL Unk_ov004_0224c38c::vfunc_7c() {
    if (unk_8d0 == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c38c::vfunc_24() {
    BOOL r = TRUE;
    if (unk_894) {
        r = (this->*unk_894)();
    }
    return r;
}

BOOL Unk_ov004_0224c38c::func_ov004_02217708() {
    if (Unk_020d77a4::vfunc_24()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c38c::vfunc_00() {
    if (!Unk_020d89c8::vfunc_00()) {
        return FALSE;
    }
    unk_894 = *(Fn *)data_ov004_0224c314;
    func_020135c4(&unk_558);
    if (func_0201ba88()) {
        func_ov004_02217530(&unk_89c, this, 0);
        func_0202bcdc(this, data_ov004_02240094, data_ov004_02240090, 0);
    } else {
        func_ov004_02217530(&unk_89c, this, 3);
    }
    u32 *g = (u32 *)data_020cbb18;
    if (!func_02072e88(g, g[0x64 / 4])) {
        if (vfunc_64()) {
            if (func_020785ec(func_0207e310(vfunc_64())) == 1) {
                func_020785e8(func_0207e310(vfunc_64()), 0);
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224c38c::vfunc_04() {
    if (!Unk_020d89c8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_680);
    unk_680.vfunc_08();
    func_02083f44(&unk_8b0);
    unk_8d4 = 0;
    unk_8d0 = 0;
    void *p = vfunc_64();
    if (p) {
        if (func_020030b4(func_020805c4(p))) {
            void *t = func_0207e310(p);
            if (t) {
                func_020784e0(func_020784f4(t));
            }
        }
    }
    return TRUE;
}

extern "C" Unk_ov004_0224c38c *func_ov004_0221785c() {
    return new Unk_ov004_0224c38c;
}

Unk_ov004_022175bc::Unk_ov004_022175bc() {
    unk_08 = 5;
    unk_10 = 0;
}

// ---------------------------------------------------------------------------------------------------------------------
BOOL Unk_ov004_0224c574::func_ov004_022178f0() {
    struct V { s32 x, y, z; } v;
    s32 *s = (s32 *)func_020947f0(4);
    v.x = s[0];
    v.y = s[1];
    v.z = s[2];
    if (func_0202ff64(&v)) {
        unk_a4c = 3;
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c574::func_ov004_02217934() {
    if (func_ov004_02217954()) {
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c574::vfunc_58() {
    if (func_02014220(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c574::vfunc_48() {
    if (func_02014220(&unk_618) != 0 || func_ov004_02217934()) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov004_0224c574::vfunc_80() { unk_a4e = 1; }

BOOL Unk_ov004_0224c574::vfunc_7c() {
    BOOL f = data_020e416c == 1 ? TRUE : FALSE;
    if (!f || unk_a4e == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c574::vfunc_4c(s32 a) {
    switch (a) {
    case 1:
        unk_8a4.vfunc_08();
        func_02015ab0(&unk_8a4, func_0201bc4c(this, 4));
        if (unk_a4c == 0) {
            func_ov004_022187b8(1);
        } else if (unk_a4c == 3) {
            func_ov004_022187b8(3);
        } else {
            func_ov004_022187b8(7);
        }
        break;
    case 0:
        unk_8a4.vfunc_08();
        func_02015ab0(&unk_8a4, func_0201bc4c(this, 4));
        func_ov004_022187b8(1);
        break;
    case 8:
        func_ov004_022187b8(4);
        break;
    }
}

Unk_ov004_0224c574::~Unk_ov004_0224c574() {}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov004_0224c4e4::func_ov004_02217dfc() {}

void Unk_ov004_0224c4e4::func_ov004_02217cf8() {
    void *r6 = func_020aa514(func_02015a5c(this));
    u32 r4 = 0xff;
    u8 *s;
    if (unk_1a0->unk_a4c == 1) {
        switch (unk_1e) {
        case 0:
        case 1:
        case 2:
            s = data_ov004_022506c8;
            r4 = (u8)func_02063b8c(3);
            if (r6 == 0) {
                func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022506c8, 0x28, data_ov004_0224c634);
                func_0208a598();
                unk_1a0->unk_a4c = 2;
            } else {
                func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022506c8, 0x28, data_ov004_0224c640);
            }
            break;
        }
    } else if (unk_1a0->unk_a4c == 2) {
        switch (unk_1e) {
        case 0:
        case 1:
        case 2:
            if (r6 == 0) {
                func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022506c8, 0x28, data_ov004_0224c648);
                func_ov004_022180e0(this);
            } else {
                func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022506c8, 0x28, data_ov004_0224c650);
            }
            s = data_ov004_022506c8;
            r4 = (u8)func_02063b8c(3);
            break;
        }
    }
    if (r4 != 0xff) {
        u8 b = r4;
        func_02067a84(unk_3c, &b, s);
    }
}

void Unk_ov004_0224c4e4::func_ov004_02217e38(Unk_ov004_0224c4e4_Out *out) {
    void *r7 = func_0207f55c(unk_1a0->unk_82c, func_0209888c(func_0209750c()));
    if (r7) {
        func_02080ecc(r7, 0, 0, 0);
    }
    if (unk_1a0->unk_a4c == 3) {
        func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, data_ov004_0224c658);
        out->unk_00 = data_ov004_022506f0;
        out->unk_04 = func_02063b8c(3) + 3;
        return;
    }
    u16 *q = &unk_1a0->unk_894;
    u16 w;
    u16 t;
    BOOL eq;
    if (func_0204b2d4(q)) {
        t = 0xfff1;
        eq = func_0204b25c(q) == func_0204b25c(&t) ? TRUE : FALSE;
    } else {
        eq = *q == 0xfff1 ? TRUE : FALSE;
    }
    if (!eq) {
        s32 r6 = 0;
        func_0201578c(this, &unk_1a0->unk_894, r6, 7);
        unk_1a4 = func_0204be70(&unk_1a0->unk_894);
        if (unk_1a4 < 10) {
            unk_1a4 = 10;
        }
        if (func_0209750c()) {
            r7 = func_0207f854(unk_1a0->unk_82c, func_0209888c(func_0209750c()));
        }
        if (r7) {
            r6 = func_02080dd8(r7);
        }
        s32 d = 0xff - r6;
        float f;
        if (d > 0) {
            f = 0.5f + (float)(d << 12);
        } else {
            f = (float)(d << 12) - 0.5f;
        }
        s32 v = (s32)f;
        unk_1a4 = func_01ffc5a4(func_01ffcb0c(unk_1a4, v), 0x200000);
        r6 = unk_1a4;
        s32 k = r6 / 10 * 10;
        if (r6 - k >= 5) {
            k += 10;
        }
        unk_1a4 = k;
        func_02015958(this, unk_1a4, 3, 10, 1, 0);
        r6 = 0;
        if (unk_1a0->unk_82c) {
            w = 0xfff1;
            r6 = 10 - func_0207e7a8(unk_1a0->unk_82c, &w);
        }
        if (!(unk_1a0->unk_898 != -1 && func_02098ffc() != -1 && r6 > 3 && func_0201ade4(unk_1a0, unk_1a4))) {
            func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, data_ov004_0224c664);
        } else {
            func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, data_ov004_0224c670);
        }
        out->unk_00 = data_ov004_022506f0;
        out->unk_04 = func_02063b8c(3);
    } else {
        switch (unk_1a0->unk_a4c) {
        case 0:
            func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, data_ov004_0224c658);
            out->unk_04 = func_02063b8c(3);
            break;
        case 1:
            func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, data_ov004_0224c67c);
            out->unk_04 = func_02063b8c(3);
            break;
        case 2:
            func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, data_ov004_0224c658);
            out->unk_04 = func_02063b8c(3) + 6;
            break;
        }
        out->unk_00 = data_ov004_022506f0;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
static inline BOOL Unk_ov004_02217954_Both() {
    if (data_021ef5d0 != 0 && data_021ef5cc != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c574::func_ov004_02217954() {
    struct Unk_ov004_02217954_V { s32 x, y, z; };
    u16 r[4];
    s32 hx, hy;
    s32 ax, ay;
    s32 x2, y2;
    Unk_ov004_02217954_V v0;
    Unk_ov004_02217954_V v1;
    u8 *p = (u8 *)func_02095204(4);
    BOOL flag = Unk_ov004_02217954_Both() ? TRUE : FALSE;
    if (unk_a4c != 2) {
        return FALSE;
    }
    if (p != NULL && func_0203e2f4() == 0 && func_02014220(&unk_618) == 0 && ((data_021f47d8[1] & 1) != 0 || flag)) {
    } else {
        return FALSE;
    }
    Unk_ov004_02217954_V *pv = (Unk_ov004_02217954_V *)(p + 0x5c);
    v0.x = *(s32 *)(p + 0x5c);
    v0.y = pv->y;
    v0.z = pv->z;
    s32 idx = ((*(u16 *)(p + 0x8e)) >> 4) * 2;
    v0.x = v0.x + func_01ffcb0c(0x2000, data_02135f44[idx * 1]);
    v0.z = v0.z + func_01ffcb0c(0x2000, data_02135f44[idx + 1]);
    hx = 0;
    hy = 0;
    func_0204ee10(&hx, &hy, &v0);
    if (flag) {
        s32 t = func_ov004_02235624(func_ov004_02235718(), hx, hy, 0);
        BOOL z = FALSE;
        if (t == -1) {
            return z;
        }
        void *c = func_ov004_022355d8(func_ov004_02235718(), hx, hy, 0);
        if (c != NULL) {
            if (c != func_020b6048(func_020b50b4(), 0, 0)) {
                return FALSE;
            }
        } else {
            ax = 0;
            ay = 0;
            func_020b60b0(func_020b50b4(), &v1);
            func_0204ee10(&ax, &ay, &v1);
            if (ax != hx || ay != hy) {
                return FALSE;
            }
        }
    }
    void *c2 = func_ov004_022355d8(func_ov004_02235718(), hx, hy, 0);
    if (c2 == NULL) {
        return FALSE;
    }
    r[0] = func_0204b248(func_ov004_022087a4(), 0);
    x2 = hx;
    y2 = hy;
    func_ov004_0220711c(c2, &x2, &y2, 0, 0);
    hx = x2;
    hy = y2;
    unk_894 = r[0];
    if (vfunc_64()) {
        if (func_0207e3b8(vfunc_64(), &hx, unk_a50, unk_a54)) {
            BOOL e1;
            if (func_0204b2d4(&unk_894)) {
                r[1] = 0x409c;
                e1 = func_0204b25c(&unk_894) == func_0204b25c(&r[1]) ? TRUE : FALSE;
            } else {
                e1 = unk_894 == 0x409c ? TRUE : FALSE;
            }
            if (e1) {
                goto fail;
            }
            BOOL e2;
            if (func_0204b2d4(&unk_894)) {
                r[2] = 0x40a0;
                e2 = func_0204b25c(&unk_894) == func_0204b25c(&r[2]) ? TRUE : FALSE;
            } else {
                e2 = unk_894 == 0x40a0 ? TRUE : FALSE;
            }
            if (e2) {
                goto fail;
            }
            BOOL e3;
            if (func_0204b2d4(&unk_894)) {
                r[3] = 0x3820;
                e3 = func_0204b25c(&unk_894) == func_0204b25c(&r[3]) ? TRUE : FALSE;
            } else {
                e3 = unk_894 == 0x3820 ? TRUE : FALSE;
            }
            if (e3) {
                goto fail;
            }
            unk_898 = hx;
            unk_89c = hy;
            goto done;
        }
    }
fail:
    unk_898 = -1;
    unk_89c = -1;
done:
    return TRUE;
}
