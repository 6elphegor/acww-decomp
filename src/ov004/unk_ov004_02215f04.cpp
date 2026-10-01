// mwcc-version: 1.2/base
// ov004 TU07: .text 0x02215f04-0x02216ccc (classes Unk_ov004_0224c228 and its member Unk_ov004_0224c198)
#include "types.h"
// The no-argument vfunc_08 of the base is widened locally: Unk_020d77a4::vfunc_08 takes one argument.
#define vfunc_08() vfunc_08(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_08

extern "C" {
struct Unk_ov004_02215c94_V {
    s32 x, y, z;
};
struct Unk_ov004_02215c94_S : Unk_ov004_02215c94_V {
    Unk_ov004_02215c94_S(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    ~Unk_ov004_02215c94_S() {}
};
}

struct Unk_020d77a4_Vec3 {
    s32 x, y, z;
};

// ---------------------------------------------------------------------------------------------------------------------
// Class chain of Unk_ov004_0224c228 (vtable 0x0224c228). Every slot's final overrider carries the name the symbols use.
class Unk_020d5d84 : public Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual void vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);

    u32 pad_04[0x58 / 4];
    s32 unk_5c[3];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xe0 - 0x90];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    virtual BOOL vfunc_24();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
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

    u16 pad_e0[5];
    u16 unk_ea;
    u8 unk_ec[0x350 - 0xec];
    u8 unk_350[0x3b0 - 0x350];
    u8 unk_3b0[0x558 - 0x3b0];
    u8 unk_558[0xc];
    u8 unk_564[0x618 - 0x564];
    u8 unk_618[0x640 - 0x618];
};

class Unk_020d89c8 : public Unk_020d77a4 {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_0c();
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
    virtual void vfunc_b4();
    virtual void vfunc_b8();
    virtual void vfunc_bc();

    /* 0x640 */ u32 unk_640;
    /* 0x644 */ u32 unk_644;
    /* 0x648 */ u32 unk_648;
    /* 0x64c */ u8 unk_64c[0x680 - 0x64c];
    /* 0x680 */ u8 unk_680[0x824 - 0x680];
    /* 0x824 */ u8 unk_824[8];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ void *unk_830;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ u8 unk_838[0x894 - 0x838];
};

// ---------------------------------------------------------------------------------------------------------------------
// Member Unk_ov004_0224c198 (at +0x898 of the menu): a menu state holder with the owner at +0x1a0. Its vtable
// 0x0224c198 names its slots after four library classes; the chain below reproduces which class owns which slot.
class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60x();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
};

class Unk_020d7710 : public Unk_02015b54 {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60x();
};

class Unk_020d7714 : public Unk_020d7710 {
public:
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_6c();
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_1c();
    virtual void vfunc_64();
    virtual void vfunc_74();
};

struct Unk_ov004_0221572c_Sub {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    u8 pad_0c[8];
    /* 0x14 */ s32 unk_14;
};

class Unk_020d8938 : public Unk_020ddcf0 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
    virtual void vfunc_60();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    u8 pad_04[0x1e - 4];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov004_0221572c_Sub *unk_3c;
    u8 pad_40[0x1a0 - 0x40];
};

class Unk_ov004_0224c228;

class Unk_ov004_0224c198 : public Unk_020d8938 {
public:
    Unk_ov004_0224c198() {}
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);

    void func_ov004_022168c0(Unk_020d89c8 *owner);
    void func_ov004_022168e0();
    BOOL func_ov004_022168f8();
    void *func_ov004_0221691c();

    Unk_ov004_0224c228 *unk_1a0;
};

typedef void (Unk_ov004_0224c228::*Unk_ov004_0224c228_VFn)();
typedef BOOL (Unk_ov004_0224c228::*Unk_ov004_0224c228_BFn)();

class Unk_ov004_0224c228 : public Unk_020d89c8 {
public:
    Unk_ov004_0224c228() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    void func_ov004_02215fc0();
    void func_ov004_02215fe4();
    void func_ov004_02216024();
    void func_ov004_0221605c();
    void func_ov004_02216100();
    void func_ov004_022161a4();
    void func_ov004_022162f0();
    void func_ov004_02216634();
    BOOL func_ov004_02215fe0();
    BOOL func_ov004_02216148();
    BOOL func_ov004_02215ff0();
    BOOL func_ov004_022160a4();
    BOOL func_ov004_02216028();
    BOOL func_ov004_0221622c();
    BOOL func_ov004_022165dc();
    BOOL func_ov004_022166e8(s32 idx);
    void func_ov004_02216a0c();
    void func_ov004_02216a44();
    BOOL func_ov004_02216b08();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ Unk_ov004_0224c198 unk_898;
    /* 0xa3c */ Unk_ov004_0224c228_BFn unk_a3c;
    /* 0xa44 */ u8 unk_a44;
    /* 0xa45 */ u8 pad_a45;
    /* 0xa46 */ u16 unk_a46;
    /* 0xa48 */ s16 unk_a48;
    /* 0xa4a */ u16 unk_a4a;
    /* 0xa4c */ Unk_020d77a4_Vec3 unk_a4c;
    /* 0xa58 */ Unk_020d77a4_Vec3 unk_a58;
};

// Menu of TU06, seen from here: only what the code in this unit touches.
class Unk_ov004_0224c034 : public Unk_020d89c8 {
public:
    BOOL func_ov004_02215208(s32 idx);

    /* 0x894 */ s32 unk_894;
};

typedef Unk_020d77a4_Vec3 Unk_ov004_Vec3;

struct Unk_0204e858_Grid {
    void *cells;
    u32 w, h;
};

struct Unk_ov004_022162f0_Actor {
    u8 pad[0x5c];
    Unk_ov004_Vec3 pos;
};

#define func_0200301c _ZN12Unk_02002fc813func_0200301cEPvjj
#define func_020135c4 _ZN12Unk_0201347413func_020135c4Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_020157b8 _ZN12Unk_020d771413func_020157b8Ejj
#define func_02019614 _ZN12Unk_0201985813func_02019614Ejt
#define func_02019638 _ZN12Unk_0201985813func_02019638Eiht
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_0201a9ec _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3
#define func_0201bb3c _ZN12Unk_020d77a413func_0201bb3cEP16Unk_020d77a4_Vec
#define func_0201bc28 _ZN12Unk_020d77a413func_0201bc28EP12Unk_0201bc1c
#define func_0201bcbc _ZN12Unk_020d77a413func_0201bcbcEPS_
#define func_0202d388 _ZN12Unk_020d893813func_0202d388EP12Unk_020d89c8j
#define func_020805c4 _ZN12Unk_0208086013func_020805c4Ev
#define func_02080a74 _ZN12Unk_0208091c13func_02080a74Ev
#define func_02080a98 _ZN12Unk_0208091c13func_02080a98Ev
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv

extern "C" {
extern s32 data_020c8cbc;
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern u8 data_021f4880[];
extern u8 data_021d7350[];
extern u8 data_021dfd8c[];
extern Unk_0204e858_Grid *data_021c47c4;
Unk_ov004_0224c034 *func_ov004_02215eac(...);
s32 func_020e9650(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e7b98(s32, s32);
s32 func_020e780c(s32, s32);
s32 func_020197a8(void *);
s32 func_02019790(void *);
s32 func_02019614(void *, u32, u32);
s32 func_020196b4(void *, u32, s32, s32, s32, s16, s16, s32, s32, u16, u16);
void func_0201a9ec(void *, void *);
s32 func_0201bb3c(void *, void *);
s32 func_0201a6c0(void *, u32, s32, s32, void *, s32, s32, u32);
s32 func_02063b8c(s32);
s32 func_02014220(void *);
void func_020135c4(void *);
void func_0203a680(void *);
void func_0203a844();
s32 func_02080ecc(void *, s32, s32, s32);
void *func_0207f55c(void *, void *);
void *func_0209750c();
void *func_0209888c(void *);
void *func_020805c4(void *);
s32 func_02080a74(void *);
void func_02080a98(void *);
s32 func_02037558(void *, s32, s32, s32);
s32 func_0204b288();
void func_0203002c(s32, s32);
s32 func_02031154(s32, s32);
void func_0204ed8c(void *, s32, s32);
void func_0204ee10(s32 *, s32 *, void *);
void func_0200301c(void *, void *, u32, u32);
void *func_020b51d4();
s32 func_0207bf84(void *, void *);
void *func_0207bf60(void *, void *);
s32 func_020157b8(void *, void *, u32);
s32 func_0201bd20(void *, u32);
s32 func_02002bdc(void *, void *);
void func_020141b4(void *, s32, s32, s32);
void *func_02095204(s32);
s32 func_0201bcbc(void *, void *);
s32 func_02019638(void *, s32, s32, u32);
void func_02067a84(void *, void *, s32);
s32 func_0206ea84(void *);
s32 func_0206ead4(s32, u32);
s32 func_0203d67c(void *);
s32 func_0203d704(void *, u32);
extern u8 data_021edb5c[];
extern u8 data_ov004_0225042c[];
void *func_020679b4(void *);
s32 func_020aa514(void *);
void func_02067abc(void *, void *, s32);
void func_02014e60(void *, void *, s32, s32, s32);
void func_02099014(void *, s32);
void *func_02080dd8(void *);
void func_02080da4(void *, s8);
void func_0201578c(void *, void *, s32, s32);
void func_0206338c(void *, s32, s32);
void func_02063388(void *);
void func_02062f94(u16 *, void *, s32, s32, s32, s32, s32);
void func_0206277c(u16 *, void *, s32);
void *func_0208175c(s32);
s32 func_02081780();
s32 func_0206ec6c();
s32 func_0206ed18();
void *func_0206ed38();
u16 func_02099048();
s32 func_0204be70(u16 *);
void func_02099064(void *);
void func_02014ce4(void *, void *, s32, s32, s32);
void *func_0207e268(void *);
u32 func_0209a610(void *);
u32 func_0209b354(u32);
s32 func_0204b2d4(void *);
void func_0202d388(void *, void *, u32);
s32 func_0202d948(void *self);
s32 func_0202dab0(void *self);
s32 func_0202d928(void *self);
void func_01ffd070(Unk_ov004_02215c94_V *out, void *a, void *b);
void func_0201bc28(void *self, void *p);
void *func_0201bc4c(void *self, s32 n);
void func_02015ab0(void *p, void *q);
s32 func_02080a64(void *p);
s32 func_02080a40(void *p);
s32 func_02080a2c(void *p);
s32 func_02080a04(void *p);
s32 func_0201b138(void *p);
s32 func_0204b25c(u16 *p);
extern s32 data_020c8cb4;
extern s32 data_020c8cb8;
s32 func_ov004_02215e84();
}

struct Unk_ov004_SceneEntry {
    Unk_ov004_0224c228 *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

struct Unk_ov004_Quad {
    u8 a, b, c, d;
    Unk_ov004_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" Unk_ov004_0224c228 *func_ov004_02216c90();
extern "C" void _ZN18Unk_ov004_0224c22819func_ov004_02216b08Ev();
extern "C" void *data_ov004_0224c158[2];
extern "C" Unk_ov004_Quad data_ov004_02250588(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250598(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_0225057c(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250580(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_0225058c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250594(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov004_SceneEntry data_ov004_0224c178 = { func_ov004_02216c90, 0x81, 0x85, 2, 0x5000, 0x5000, 0x3e800 };
extern "C" {
Unk_ov004_0224c228 *data_ov004_02250584;
}
extern "C" void *data_ov004_0224c158[2] = { (void *)_ZN18Unk_ov004_0224c22819func_ov004_02216b08Ev, 0 };
extern "C" {
u8 data_ov004_022505a0[0x28];
}

extern "C" Unk_ov004_0224c034 *data_ov004_022503d8;
extern "C" s32 func_ov004_02216ba4(Unk_ov004_Vec3 *out, Unk_ov004_Vec3 *in, s32 angle);

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();
    u32 pad[8];
};

extern "C" Unk_ov004_0224c228 *func_ov004_02216c90() {
    return new Unk_ov004_0224c228;
}

extern "C" Unk_ov004_0224c228 *func_ov004_02216c84() {
    return data_ov004_02250584;
}

extern "C" s32 func_ov004_02216ba4(Unk_ov004_Vec3 *out, Unk_ov004_Vec3 *in, s32 angle) {
    s32 gx, gy;
    s32 count, y, x, z;
    func_0204ee10(&gx, &gy, in);
    count = 0;
    y = count;
    z = count;
    do {
        x = z;
        do {
            if (x != gx && y != gy) {
                if (func_02031154(x, y)) {
                    count++;
                }
            }
            x++;
        } while (x < 16);
        y++;
    } while (y < 14);
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    if (count != 0) {
        s32 pick = func_02063b8c(count);
        s32 k = 0;
        for (y = 0; y < 14; y++) {
            for (x = 0; x < 16; x++) {
                if (x != gx && y != gy) {
                    if (func_02031154(x, y)) {
                        if (k == pick) {
                            func_0204ed8c(out, x, y);
                            s32 d = func_020e7b98(out->x - in->x, out->z - in->z);
                            if (func_020e780c(angle, d) < 0x2000) {
                                d = angle;
                            }
                            return d;
                        }
                        k++;
                    }
                }
            }
        }
    }
    return angle;
}

BOOL Unk_ov004_0224c228::vfunc_04() {
    if (!Unk_020d89c8::vfunc_04()) {
        return FALSE;
    }
    data_ov004_02250584 = this;
    func_0201bc28(this, &unk_898);
    unk_898.func_ov004_022168c0(this);
    func_ov004_022166e8(0);
    return TRUE;
}

BOOL Unk_ov004_0224c228::vfunc_00() {
    if (!Unk_020d89c8::vfunc_00()) {
        return FALSE;
    }
    unk_a3c = *(Unk_ov004_0224c228_BFn *)data_ov004_0224c158;
    func_ov004_02216a44();
    func_020135c4(unk_558);
    return TRUE;
}

BOOL Unk_ov004_0224c228::func_ov004_02216b08() {
    if (Unk_020d77a4::vfunc_24()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c228::vfunc_24() {
    if (unk_a3c) {
        return (this->*unk_a3c)();
    }
    return TRUE;
}

BOOL Unk_ov004_0224c228::vfunc_10() {
    if (!Unk_020d89c8::vfunc_10()) {
        return FALSE;
    }
    data_ov004_02250584 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224c228::vfunc_68() {
    func_ov004_02216634();
    return TRUE;
}

void Unk_ov004_0224c228::func_ov004_02216a44() {
    Unk_0204e858_Grid *g = data_021c47c4;
    void *c;
    s32 y, x;
    if ((u8 *)g->w > (u8 *)0 && (u8 *)g->h > (u8 *)0 && g->cells) {
        c = g->cells;
    } else {
        c = 0;
    }
    y = 0;
    volatile s32 z = 0;
    for (; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            if (func_02037558(c, x, y, z)) {
                if (func_0204b288()) {
                    func_0203002c(x, y);
                }
            }
        }
    }
}

void Unk_ov004_0224c228::func_ov004_02216a0c() {
    void *p = func_0209750c();
    if (p) {
        if (unk_82c) {
            void *r = func_0209888c(p);
            func_02080ecc(func_0207f55c(unk_82c, r), 0, 0, 0);
        }
    }
}

BOOL Unk_ov004_0224c228::vfunc_48() {
    if (func_02014220(unk_618)) {
        return FALSE;
    }
    if (unk_894 <= 3) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c228::vfunc_4c(s32 a, u32 b) {
    Unk_ov004_Vec3 v;
    v.x = unk_5c[0];
    v.y = unk_5c[1];
    v.z = unk_5c[2];
    v.y += 0x2000;
    switch (a) {
    case 3:
        *((u8 *)this + 0x560) = b;
        func_ov004_022166e8(4);
        break;
    case 0:
        *((u8 *)this + 0x560) = b;
        func_0203a680(&v);
        func_ov004_022166e8(5);
        break;
    case 8:
        func_ov004_02216a0c();
        func_0203a844();
        func_ov004_022166e8(0);
        break;
    case 4:
        func_ov004_022166e8(0);
        break;
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
}

void *Unk_ov004_0224c198::func_ov004_0221691c() {
    Unk_ov004_0224c228 *o = unk_1a0;
    if (o && o->unk_82c) {
        void *r = func_0209888c(func_0209750c());
        return func_0207f55c(unk_1a0->unk_82c, r);
    }
    return 0;
}

BOOL Unk_ov004_0224c198::func_ov004_022168f8() {
    void *p = func_ov004_0221691c();
    if (p) {
        if (func_02080a74(p)) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c198::func_ov004_022168e0() {
    void *p = func_ov004_0221691c();
    if (p) {
        func_02080a98(p);
    }
}

void Unk_ov004_0224c198::func_ov004_022168c0(Unk_020d89c8 *owner) {
    func_0202d388(this, owner, 0x11);
    unk_1a0 = (Unk_ov004_0224c228 *)owner;
}

void Unk_ov004_0224c198::vfunc_78(void *arg) {
    Unk_ov004_0224c228 *o = unk_1a0;
    u32 *out = (u32 *)arg;
    func_0200301c(func_020805c4(o->unk_82c), data_ov004_022505a0, 0x28, (u32)"ev_nbirth");
    out[0] = (u32)data_ov004_022505a0;
    s32 r6 = 2;
    if (func_ov004_022168f8()) {
        r6 = 0;
    } else if (func_ov004_02215e84()) {
        r6 = 1;
    }
    func_ov004_022168e0();
    switch (r6) {
    case 0:
        ((u8 *)arg)[4] = func_02063b8c(2) + 0x1a;
        break;
    case 1:
        ((u8 *)arg)[4] = func_02063b8c(4) + 0x1e;
        break;
    default:
        ((u8 *)arg)[4] = func_02063b8c(2) + 0x1c;
        break;
    }
    o = unk_1a0;
    if (*(void **)((u8 *)o + 0x8d4)) {
        u8 *const g = data_021d7350;
        void *p = func_020b51d4();
        if (func_0207bf84(data_021dfd8c, p)) {
            Unk_020e1c64 loc;
            func_020157b8((u8 *)unk_1a0 + 0x898, func_020805c4(func_0207bf60(g + 0x8a3c, p)), 1);
        }
        Unk_ov004_0224c228 *o2 = unk_1a0;
        if (o2) {
            void *m = o2->unk_82c;
            if (m) {
                func_020157b8((u8 *)unk_1a0 + 0x898, func_020805c4(m), 0);
            }
        }
    }
}

void Unk_ov004_0224c198::vfunc_10() {}

void Unk_ov004_0224c198::vfunc_14() {}

void Unk_ov004_0224c198::vfunc_18() {}

BOOL Unk_ov004_0224c228::func_ov004_022166e8(s32 idx) {
    static Unk_ov004_0224c228_BFn tbl[7] = {
        &Unk_ov004_0224c228::func_ov004_022165dc, &Unk_ov004_0224c228::func_ov004_0221622c,
        &Unk_ov004_0224c228::func_ov004_02216148, &Unk_ov004_0224c228::func_ov004_022160a4,
        &Unk_ov004_0224c228::func_ov004_02216028, &Unk_ov004_0224c228::func_ov004_02215ff0,
        &Unk_ov004_0224c228::func_ov004_02215fe0,
    };
    if (idx < 7) {
        if ((this->*tbl[idx])()) {
            unk_894 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224c228::func_ov004_02216634() {
    static Unk_ov004_0224c228_VFn tbl[7] = {
        &Unk_ov004_0224c228::func_ov004_022162f0, &Unk_ov004_0224c228::func_ov004_022161a4,
        &Unk_ov004_0224c228::func_ov004_02216100, &Unk_ov004_0224c228::func_ov004_0221605c,
        &Unk_ov004_0224c228::func_ov004_02216024, &Unk_ov004_0224c228::func_ov004_02215fe4,
        &Unk_ov004_0224c228::func_ov004_02215fc0,
    };
    s32 s = unk_894;
    if (s < 7) {
        (this->*tbl[s])();
    }
}

BOOL Unk_ov004_0224c228::func_ov004_022165dc() {
    if (func_02019614(unk_564, 1, data_020c6cc8)) {
        func_0201a6c0(unk_3b0, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c228::func_ov004_022162f0() {
    Unk_ov004_Vec3 v;
    Unk_ov004_022162f0_Actor *a = (Unk_ov004_022162f0_Actor *)func_ov004_02215eac(this);
    s32 d;
    if (a) {
        d = func_020e9650(&a->pos, unk_5c);
    } else {
        d = data_020c8cbc;
    }
    if (unk_a46 != 0) {
        unk_a46--;
    }
    if (unk_3b0[0x508 - 0x3b0] != 0) {
        if (func_020197a8(unk_564) == 1) {
            if (func_02019614(unk_564, 1, data_020c6cc8)) {
                goto end;
            }
        }
    }
    if (d < 0x3334) {
        if (func_ov004_022166e8(1)) {
            goto end;
        }
    }
    if (func_020197a8(unk_564) == 0) {
        if (unk_a4a != 0) {
            unk_a4a--;
        }
        if (unk_a4a == 0) {
            unk_a48 = func_ov004_02216ba4(&unk_a58, (Unk_ov004_Vec3 *)unk_5c, unk_8e);
            unk_a4c.x = unk_a58.x;
            unk_a4c.y = unk_a58.y;
            unk_a4c.z = unk_a58.z;
            if (a && d >= 0x6000 && func_02063b8c(2) == 0) {
                d = func_020e7b98(a->pos.x - unk_5c[0], a->pos.z - unk_5c[2]);
                s32 df = func_020e780c(unk_8e, d);
                Unk_ov004_Vec3 *pa = &a->pos;
                s32 xx = *(volatile s32 *)&a->pos.x;
                Unk_ov004_Vec3 *pq = &unk_a58;
                pq->x = xx;
                unk_a58.y = pa->y;
                unk_a58.z = pa->z;
                unk_a4c.x = pq->x;
                unk_a4c.y = pq->y;
                unk_a4c.z = pq->z;
                if (df >= 0x2000) {
                    unk_a48 = d;
                }
            }
            s16 t = unk_a48;
            if (t != unk_8e) {
                if (!func_020196b4(unk_564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0)) {
                    goto end;
                }
                unk_a4a = func_02063b8c(0x46) + 0x14;
            } else {
                if (!func_020196b4(unk_564, 1, 1, unk_a58.x, unk_a58.z, 0, 0, 0, 0, data_020c6cc8, 0)) {
                    goto end;
                }
                unk_a4a = func_02063b8c(0x50) + 0x14;
            }
        } else {
            if (func_02019790(unk_564)) {
                func_02019614(unk_564, 1, data_020c6cc8);
            }
        }
    } else {
        if (func_020197a8(unk_564) == 3) {
            if (func_02019790(unk_564)) {
                func_020196b4(unk_564, 1, 1, unk_a58.x, unk_a58.z, 0, 0, 0, 0, data_020c6cc8, 0);
            }
        } else if (func_020197a8(unk_564) == 1) {
            switch (func_0201bb3c(this, &v)) {
            case 1:
                func_02019614(unk_564, 1, data_020c6cc8);
                break;
            case 2: {
                Unk_ov004_Vec3 *pv = &unk_a4c;
                pv->x = v.x;
                unk_a4c.y = v.y;
                unk_a4c.z = v.z;
                func_0201a9ec(unk_350, &unk_a4c);
                break;
            }
            default:
                if (func_020e96ec(&unk_a4c, &unk_a58)) {
                    Unk_ov004_Vec3 *pw = &unk_a58;
                    unk_a4c.x = pw->x;
                    unk_a4c.y = unk_a58.y;
                    unk_a4c.z = unk_a58.z;
                    func_0201a9ec(unk_350, pw);
                } else if (func_020e9650(&unk_a58, unk_5c) < 0x200) {
                    func_02019614(unk_564, 1, data_020c6cc8);
                }
                break;
            }
        }
    }
end:;
}

BOOL Unk_ov004_0224c228::func_ov004_0221622c() {
    if (unk_a46 == 0) {
        void *p = &unk_564;
        Unk_ov004_0224c034 *o = func_ov004_02215eac();
        if (o != NULL) {
            unk_a48 = func_020e7b98(o->unk_5c[0] - unk_5c[0], o->unk_5c[2] - unk_5c[2]);
            Unk_ov004_0224c034 *g = data_ov004_022503d8;
            BOOL r;
            if (g != NULL && (u32)g->unk_894 <= 1) {
                r = g->func_ov004_02215208(1);
            } else {
                r = FALSE;
            }
            if (r) {
                func_020196b4(p, 3, 1, 0, 0, 0, unk_a48, 0, 0, data_020c6cc8, 0);
                func_0201a6c0(&unk_3b0, 2, 0, (s32)o, data_021f4880, 4, data_020c6d1c, 1);
                return TRUE;
            }
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

BOOL Unk_ov004_0224c228::func_ov004_02216028() {
    if ((u32)(unk_894 - 1) <= 2) {
        func_02019638(&unk_564, 2, 0, data_020c6cc8);
    }
    return TRUE;
}

void Unk_ov004_0224c228::func_ov004_02216024() {}

BOOL Unk_ov004_0224c228::func_ov004_02215ff0() {
    void *p = func_02095204(4);
    if (p != NULL) {
        func_020141b4(&unk_618, 0, func_0201bcbc(this, p), 0);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c228::func_ov004_02215fe4() { func_ov004_022166e8(6); }

BOOL Unk_ov004_0224c228::func_ov004_02215fe0() { return TRUE; }

void Unk_ov004_0224c228::func_ov004_02215fc0() {
    void *p = *(void **)((u8 *)this + 0x8d4);
    if (p != NULL && *(u32 *)((u8 *)p + 4) == 0) {
        func_0203d67c(this);
    }
}

void Unk_ov004_0224c228::vfunc_80() {
    *((u8 *)this + 0x893) = 1;
}

BOOL Unk_ov004_0224c228::vfunc_7c() {
    if (*((u8 *)this + 0x893) == 0) {
        return TRUE;
    }
    return FALSE;
}

