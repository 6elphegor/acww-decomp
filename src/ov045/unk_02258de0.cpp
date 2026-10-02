#define vfunc_08() vfunc_08(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08

// Real (mangled) names of other modules' functions that the unit calls as plain functions taking the object first.
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv
#define func_02098784 _ZN12Unk_0209865c13func_02098784Eh
#define func_020805c4 _ZN12Unk_0208086013func_020805c4Ev
#define func_020030b4 _ZN12Unk_02002fc813func_020030b4Ev
#define func_02072e88 _ZN12Unk_020cbb1813func_02072e88Ei
#define func_02080da4 _ZN12Unk_0208091c13func_02080da4Ei
#define func_02080dd8 _ZN12Unk_0208091c13func_02080dd8Ev
#define func_020aa514 _ZN12Unk_020aa3b813func_020aa514Ev
#define unk_618_func_02014198 _ZN12Unk_02013b1013func_02014198Ehh
#define unk_618_func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define unk_564_func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_020197a0 _ZN12Unk_0201985813func_020197a0Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define base_vfunc_38 _ZN12Unk_020d77148vfunc_38Ej

class Unk_ov045_02259eb0;
class Unk_ov045_02259e20;

extern "C" {
void *func_0209750c();
u32 func_02063b8c(u32 n);
void func_0203d67c(void *p);
void func_0203d704(void *p, s32 a);
void *func_020947f0(s32);
s32 func_0209d498(void *);
void func_0204ee10(s32 *, s32 *, void *);
s32 func_0206ed18();
s32 func_0206ecf0();
void func_020a78a4(void *, s32, s32);
s32 func_020aa514();
s32 func_0201ade4(void *, s32);
void func_0201adc8(void *, s32);
s32 func_0202e1cc(...);
void func_02034dd0(u32, s32, s32);
void func_02034d70(u32);
void *func_0209888c(void *self);
void func_02098784(void *self, s32 kind);
void func_02079d64(void *, void *);
void func_02079e9c(void *);
void *func_0207be2c(void *, s32, s32, void *);
void *func_0207f88c(void *, void *);
void *func_0207f86c(void *, void *);
void *func_020805c4(void *self);
s32 func_020030b4(void *self);
void *func_0207e310(void *);
s32 func_02072e88(void *self, s32 v);
s32 func_0207856c(void *);
void func_02078550(void *, s32);
void func_0207854c(void *, s32);
void func_02078568(void *, s32);
void func_02080da4(void *self, s32 v);
void *func_02080dd8(void *self);
void func_0207787c(void *, void *, void *);
s32 func_020197a0(void *self);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_ov004_02228ee0();
void func_ov004_02228ec0();
void func_ov004_02228ea0();
s32 func_ov004_02228e84();
void unk_618_func_02014198(void *self, u8 a, u8 b);
BOOL unk_618_func_02014220(void *self);
void unk_564_func_020196b4(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void base_vfunc_38(void *self, u32 a);
void *func_020b4934();
s32 func_020b4bbc(void *, s32);
s32 func_020553cc(void *p, void *q, s32 v);
s32 func_020e7518(void *p);
s32 func_02090330(u32 kind, void *a, s32 b, s32 c);
void func_020902f8(s32 id);
void func_020902d4(s32 id, void *pos, s32 a, s32 b);
extern u16 data_020c6cc8;
extern u8 data_021d7350[];
extern u8 *data_020cbb18;
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
    void func_02067a3c(s32 a, void *b);
};

// ---------------------------------------------------------------------------------------------------------------------
// Chain for the vtable of Unk_ov045_02259e20. Its constructor and destructor call Unk_020d7714's, so that is the most
// derived base; symbols.txt names the slots after Unk_020ddcf0 (root, declares every slot), Unk_020d7710 (names
// shifted by one slot) and Unk_020d7714.
class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
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
    virtual void vfunc_38(s32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d7714 : public Unk_020ddcf0 {
public:
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_6c();
    virtual void vfunc_7c();
    void *func_02015aac();
    void func_02015a5c();
    void func_02015ab0(u32 a);
};

class Unk_020d7710 : public Unk_020d7714 {
public:
    Unk_020d7710();
    virtual ~Unk_020d7710();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    void func_02015170(u32 a, u32 b);
    void func_020151d0(s32 a);
};

struct Unk_ov045_022590e4_Msg {
    u32 unk_00;
    u8 unk_04;
};

// ---------------------------------------------------------------------------------------------------------------------
// Message buffer classes (see src/main/unk_02062fd4.cpp)

class Unk_020e2a60 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    u8 unk_04[10];
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7aa0(Unk_020e2a60 *dst, s32 a, s32 b);

    u8 unk_04[14];
};

// vtable 0x02259dd4, data at +0x12, 0x24 bytes
class Unk_ov045_02259dd4 : public Unk_020e2a78 {
public:
    Unk_ov045_02259dd4();
    virtual ~Unk_ov045_02259dd4();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u8 unk_12[0x24 - 0x12];
};

// vtable 0x02259dec, data at +0xe, 0x24 bytes
class Unk_ov045_02259dec : public Unk_020e2a60 {
public:
    Unk_ov045_02259dec();
    virtual ~Unk_ov045_02259dec();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u8 unk_0e[0x24 - 0xe];
};

// ---------------------------------------------------------------------------------------------------------------------
// Dialog

class Unk_ov045_02259e20 : public Unk_020d7710 {
public:
    Unk_ov045_02259e20();
    virtual ~Unk_ov045_02259e20();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_38(s32 a);
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov045_022590e4();
    void func_ov045_0225916c(s32 v);
    void func_ov045_02259654(Unk_ov045_02259eb0 *o);

    s32 unk_ac;
    Unk_ov045_02259eb0 *unk_b0;
};

// ---------------------------------------------------------------------------------------------------------------------
// Owner object

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
    ~Unk_020dbd74();
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
MEMBER(Unk_02032238, 0x30);
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
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

struct Unk_020d77a4_Vec3;
struct Unk_0201bc1c;

class Unk_020d5d84 : public Unk_020d8c7c_Base {
public:
    BOOL vfunc_14();
    BOOL vfunc_20();
    BOOL vfunc_28();
    BOOL vfunc_2c();
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    BOOL vfunc_1c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual void vfunc_58(void *p);
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
    virtual ~Unk_020d77a4();
    virtual void vfunc_08(s32 a);
    BOOL vfunc_18();
    BOOL vfunc_24();
    BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
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

    void func_0201bc28(Unk_0201bc1c *p);
    u32 func_0201bc4c(u32 a);
    BOOL func_0201bcbc(Unk_020d77a4 *p);
    void func_0201bd9c(s32 v);

    u16 unk_ea;
    Unk_020dbd74 unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
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
    virtual void vfunc_74(u32 a);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

struct Unk_ov045_02259070_Rec {
    s32 a, b, c;
};

struct Unk_ov045_02258ee4_Ent {
    u8 a;
    s32 b;
};

struct Unk_ov045_02258fd8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov045_02259eb0 : public Unk_020d8bc8 {
public:
    Unk_ov045_02259eb0() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    s32 func_ov045_02258ee4();
    void func_ov045_02258f64();
    BOOL func_ov045_02259004();
    BOOL func_ov045_02259724();
    BOOL func_ov045_02259728();
    BOOL func_ov045_0225972c();
    BOOL func_ov045_0225975c();
    BOOL func_ov045_02259760();
    BOOL func_ov045_0225978c();
    BOOL func_ov045_022597c0();
    BOOL func_ov045_022597dc();
    void func_ov045_02259810(s32 state);

    s32 unk_654;
    s32 unk_658;
    u8 unk_65c[0x30];
    Unk_ov045_02259e20 unk_68c;
    u8 unk_740;
    u8 unk_741;
    u8 pad_742[2];
    s32 unk_744;
    u8 unk_748;
    u8 pad_749[3];
    s32 unk_74c;
    s32 unk_750;
    u8 unk_754;
    u8 pad_755[3];
};

typedef void (Unk_ov045_02259e20::*Unk_ov045_02259e20_Fn)();

struct Unk_ov045_02259e20_Ent {
    Unk_ov045_02259e20_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov045_02259810_Ent {
    BOOL (Unk_ov045_02259eb0::*enter)();
    BOOL (Unk_ov045_02259eb0::*exit)();
};

struct Unk_ov045_SceneEntry {
    Unk_ov045_02259eb0 *(*factory)();
    u16 a;
    u16 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
};

extern "C" {
extern const Unk_ov045_02258ee4_Ent data_ov045_02259b68[17];
extern const Unk_ov045_02258ee4_Ent data_ov045_02259bf0[21];
extern void *data_ov045_02259d40;
extern u8 data_ov045_02259d8c[];
extern u8 data_ov045_02259d9c[];
extern u8 data_ov045_02259dfc[];
extern Unk_ov045_02259eb0 *data_ov045_02259f60;
extern Unk_ov045_02259e20_Ent data_ov045_02259f64[2];
extern Unk_ov045_02259810_Ent data_ov045_02259f7c[4];
extern Unk_ov045_02259eb0 *func_ov045_02259a50();
u32 func_ov045_02258fd8();
u8 *func_ov045_02258ff0();
}







extern "C" Unk_ov045_02259eb0 *func_ov045_02259a50() { return new Unk_ov045_02259eb0; }

u8 data_ov045_02259d9c[23] = "npc_sp/model/bpt.nsbmd";
u8 data_ov045_02259dfc[27] = "npc_sp/model/bpt_tex.nsbtx";
// Data order: this unit is placed object by object (see object_order.txt).
const Unk_ov045_02258ee4_Ent data_ov045_02259b68[17] = {
    {0x00, 0}, {0x01, 0}, {0x02, 0}, {0x03, 0}, {0x04, 0}, {0x05, 0}, {0x06, 0}, {0x07, 0}, {0x08, 0},
    {0x0a, 0}, {0x0b, 0}, {0x0e, 0}, {0x11, 0}, {0x12, 1}, {0x13, 0}, {0x14, 0}, {0x15, 0},
};
void *data_ov045_02259d40 = data_ov045_02259d8c;
u8 data_ov045_02259d8c[15] = "sp_npc_panther";
Unk_ov045_02259e20_Ent data_ov045_02259f64[2] = {
    {NULL, 0},
    {&Unk_ov045_02259e20::func_ov045_022590e4, 0},
};
Unk_ov045_02259810_Ent data_ov045_02259f7c[4] = {
    {&Unk_ov045_02259eb0::func_ov045_022597dc, &Unk_ov045_02259eb0::func_ov045_022597c0},
    {&Unk_ov045_02259eb0::func_ov045_0225978c, &Unk_ov045_02259eb0::func_ov045_02259760},
    {&Unk_ov045_02259eb0::func_ov045_02259728, &Unk_ov045_02259eb0::func_ov045_02259724},
    {&Unk_ov045_02259eb0::func_ov045_0225975c, &Unk_ov045_02259eb0::func_ov045_0225972c},
};
const Unk_ov045_02258ee4_Ent data_ov045_02259bf0[21] = {
    {0x00, 1}, {0x01, 1}, {0x02, 1}, {0x03, 1}, {0x04, 1}, {0x05, 1}, {0x06, 1}, {0x08, 1}, {0x09, 1}, {0x0a, 1},
    {0x0c, 0}, {0x0c, 1}, {0x0d, 0}, {0x0e, 1}, {0x0f, 0}, {0x10, 0}, {0x10, 1}, {0x12, 0}, {0x13, 1}, {0x14, 1},
    {0x15, 1},
};
Unk_ov045_02259eb0 *data_ov045_02259f60;
extern "C" Unk_ov045_SceneEntry data_ov045_02259db4 = {func_ov045_02259a50, 0x70, 0x76, 2, 0x5000, 0x5000, 0x3e800};
BOOL Unk_ov045_02259eb0::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28((Unk_0201bc1c *)&unk_68c);
    unk_68c.func_ov045_02259654(this);
    func_0201bd9c(0x100);
    func_0203e468(0x5000);
    unk_654 = -1;
    unk_754 = 0;
    return TRUE;
}

BOOL Unk_ov045_02259eb0::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    data_ov045_02259f60 = this;
    func_ov045_02259810(0);
    unk_4cc.unk_1c |= 2;
    unk_740 = 0xff;
    unk_741 = 0xff;
    return TRUE;
}

BOOL Unk_ov045_02259eb0::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    data_ov045_02259f60 = 0;
    return TRUE;
}

BOOL Unk_ov045_02259eb0::vfunc_24() {
    if (!Unk_020d77a4::vfunc_24()) {
        return FALSE;
    }
    func_020553cc(&unk_ec, &unk_65c, 0xe);
    func_ov004_02228e84();
    return TRUE;
}

u8 *Unk_ov045_02259eb0::vfunc_6c() { return data_ov045_02259dfc; }

u8 *Unk_ov045_02259eb0::vfunc_70() { return data_ov045_02259d9c; }

BOOL Unk_ov045_02259eb0::vfunc_68() {
    s32 t = func_020197a0(&unk_564);
    if (t != 0x1e && t != 0x20) {
    } else if (func_02019790(&unk_564)) {
        unk_68c.vfunc_38(0);
    }
    if (unk_654 == -1) {
        if (t == 0x21 && ((((u32)unk_ec.unk_a4 << 4) >> 16)) >= 0x12) {
            unk_654 = func_02090330(0x3d, (u8 *)this + 0x478, 0, 0);
            unk_754 = 0x16;
        }
    } else if (func_020e7518(&unk_754) == 0) {
        func_020902f8(unk_654);
        unk_654 = -1;
    } else {
        func_020902d4(unk_654, (u8 *)this + 0x478, 0, 0);
    }
    BOOL r = FALSE;
    if (data_ov045_02259f7c[unk_658].exit) {
        r = (this->*data_ov045_02259f7c[unk_658].exit)();
    }
    return r;
}

void Unk_ov045_02259eb0::func_ov045_02259810(s32 state) {
    BOOL ok = TRUE;
    if (data_ov045_02259f7c[state].enter) {
        ok = (this->*data_ov045_02259f7c[state].enter)();
    }
    if (ok) {
        unk_658 = state;
    }
}

BOOL Unk_ov045_02259eb0::func_ov045_022597dc() {
    unk_564_func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov045_02259eb0::func_ov045_022597c0() {
    if (func_ov045_02259004()) {
        func_0203d704(this, 0);
    }
    return TRUE;
}

BOOL Unk_ov045_02259eb0::func_ov045_0225978c() {
    Unk_020d77a4 *p = (Unk_020d77a4 *)unk_68c.func_02015aac();
    if (p) {
        func_0201bcbc(p);
    }
    unk_618_func_02014198(&unk_618, 1, 0);
    return TRUE;
}

BOOL Unk_ov045_02259eb0::func_ov045_02259760() {
    if (!unk_618_func_02014220(&unk_618)) {
        func_0203d67c(this);
        func_ov045_02259810(2);
    }
    return TRUE;
}

BOOL Unk_ov045_02259eb0::func_ov045_0225975c() { return TRUE; }

BOOL Unk_ov045_02259eb0::func_ov045_0225972c() {
    if (!unk_618_func_02014220(&unk_618)) {
        func_020b4bbc(func_020b4934(), 0);
        func_ov045_02259810(2);
    }
    return TRUE;
}

BOOL Unk_ov045_02259eb0::func_ov045_02259728() { return TRUE; }

BOOL Unk_ov045_02259eb0::func_ov045_02259724() { return TRUE; }

Unk_ov045_02259e20::Unk_ov045_02259e20() {}

Unk_ov045_02259e20::~Unk_ov045_02259e20() {}

void Unk_ov045_02259e20::vfunc_38(s32 a) {
    if (a != func_020197a0(&unk_b0->unk_564) || func_020197a8(&unk_b0->unk_564) != 8) {
        switch (a) {
        case 0x1e:
            func_ov004_02228ee0();
            break;
        case 0x1f:
            func_02034d70(0x10);
            func_ov004_02228ec0();
            break;
        case 0x20:
            func_ov004_02228ea0();
            break;
        }
    }
    base_vfunc_38(this, a);
}

void Unk_ov045_02259e20::func_ov045_02259654(Unk_ov045_02259eb0 *o) {
    vfunc_08();
    unk_b0 = o;
}

void Unk_ov045_02259e20::vfunc_78(void *arg) {
    Unk_ov045_022590e4_Msg *out = (Unk_ov045_022590e4_Msg *)arg;
    out->unk_00 = (u32)data_ov045_02259d40;
    s32 a = func_0202e1cc(4, 0);
    s32 b = func_0202e1cc(5, 0);
    s32 c = func_0202e1cc(6, 0);
    if (b == 0 || a == 0) {
        if (b == 0) {
            out->unk_04 = 1;
        } else {
            out->unk_04 = 5;
        }
    } else {
        if (c == 0) {
            out->unk_04 = 0x11;
        } else {
            out->unk_04 = 0x19;
        }
    }
    if (unk_b0->func_ov045_02259004()) {
        out->unk_04 = 0x13;
    }
}

void Unk_ov045_02259e20::vfunc_14() {
    void *h = func_0209750c();
    u8 *gp = data_021d7350;
    u32 sel = 0xff;
    switch (unk_1e) {
    case 9:
    case 11:
        func_02015170(0x13, 0);
        func_020151d0(2);
        func_ov045_0225916c(1);
        break;
    case 14:
        unk_b0->func_ov045_02258f64();
        sel = unk_b0->unk_740;
        break;
    case 16:
        if (func_0201ade4(unk_b0, 0x64)) {
            func_0201adc8(unk_b0, 0x64);
        }
        sel = 0x16;
        break;
    case 19:
        unk_b0->func_ov045_02259810(3);
        break;
    case 24:
        if (func_0201ade4(unk_b0, 10000)) {
            func_0201adc8(unk_b0, 10000);
        }
        func_02098784(h, 0);
        func_0202e1cc(6, 1);
        sel = 0x16;
        break;
    case 10:
    case 12:
    case 13:
    case 15:
    case 17:
    case 18:
    case 20:
    case 21:
    case 22:
    case 23:
        break;
    }
    u32 cur = unk_b0->unk_741;
    if (cur != 0xff) {
        if (cur == unk_1e) {
            s32 kind;
            void *arg;
            void *p;
            void *q;
            void *w;
            void *r5;
            sel = 0x10;
            kind = unk_b0->func_ov045_02258ee4();
            arg = func_0209888c(func_0209750c());
            switch (unk_b0->unk_744) {
            case 0:
                func_02098784(h, kind);
                if (kind == 1) {
                    func_02079d64((gp + 0x8a3c), arg);
                } else if (kind == 2) {
                    func_02079e9c((gp + 0x8a3c));
                }
                break;
            case 1:
                p = func_0207be2c((gp + 0x8a3c), unk_b0->unk_750, 10, func_0209888c(h));
                if (p != 0) {
                    q = func_0207f88c(p, arg);
                    w = func_0207f86c(p, q);
                    if (func_020030b4(func_020805c4(p)) != 0) {
                        r5 = func_0207e310(p);
                    } else {
                        r5 = 0;
                    }
                    if (w != 0) {
                        switch (kind) {
                        case 1: {
                            u8 *g = data_020cbb18;
                            if (func_02072e88(g, *(s32 *)(g + 0x64)) == 0 && r5 != 0) {
                                if (func_0207856c(r5) == 1) {
                                    func_02078550(r5, 0xe10);
                                } else {
                                    func_0207854c(r5, 0xe10);
                                }
                                func_02078568(r5, 1);
                            }
                            func_02080da4(w, 10);
                            func_0207787c(p, q, func_02080dd8(w));
                            break;
                        }
                        case 2: {
                            u8 *g = data_020cbb18;
                            if (func_02072e88(g, *(s32 *)(g + 0x64)) == 0 && r5 != 0) {
                                if (func_0207856c(r5) == 4) {
                                    func_02078550(r5, 0x4b0);
                                } else {
                                    func_0207854c(r5, 0x4b0);
                                }
                                func_02078568(r5, 4);
                            }
                            func_02080da4(w, -3);
                            func_0207787c(p, q, func_02080dd8(w));
                            break;
                        }
                        }
                    }
                }
                break;
            }
            unk_b0->unk_741 = 0xff;
            unk_b0->unk_740 = 0xff;
        }
        if (unk_b0->unk_740 == unk_1e) {
            sel = unk_b0->unk_741;
        }
    }
    if (sel != 0xff) {
        u8 buf = sel;
        unk_3c->func_02067a84(&buf, data_ov045_02259d40);
    }
}

void Unk_ov045_02259e20::vfunc_10() {
    if (unk_1e == 0xe || unk_1e == 0x17) {
        func_02034dd0(0x10, 0, 0);
    }
}

void Unk_ov045_02259e20::vfunc_18() {
    u8 buf;
    u32 sel;
    s32 st;
    func_02015a5c();
    st = func_020aa514();
    sel = 0xff;
    switch (unk_1e) {
    case 1:
    case 3:
    case 5:
        if (st == 0) {
            if (func_0201ade4(unk_b0, 0x64) == 0) {
                sel = 6;
            } else {
                sel = 7;
            }
        } else if (unk_1e == 5 && st == 1) {
            sel = 0x14;
        }
        break;
    case 7:
    case 8:
        if (st == 0) {
            if (func_0202e1cc(5, 0)) {
                sel = 8;
            } else {
                sel = 0xd;
                unk_b0->unk_744 = 0;
                func_0202e1cc(5, 1);
            }
        } else if (st == 1) {
            if (func_0202e1cc(4, 0)) {
                sel = 8;
            } else {
                sel = 9;
            }
        }
        break;
    case 10:
        if (st == 0) {
            sel = 0xc;
            unk_b0->unk_744 = 1;
            func_0202e1cc(4, 1);
        } else {
            sel = 0xb;
        }
        break;
    case 0x14:
        if (st == 0) {
            if (func_0201ade4(unk_b0, 10000) == 0) {
                sel = 0x15;
            } else {
                sel = 0x17;
            }
        }
        break;
    }
    if (sel != 0xff) {
        buf = sel;
        unk_3c->func_02067a84(&buf, data_ov045_02259d40);
    }
}

void Unk_ov045_02259e20::vfunc_80() {
    s32 i = unk_ac;
    if (data_ov045_02259f64[i].flag != 0) {
        if (data_ov045_02259f64[i].fn != 0) {
            (this->*data_ov045_02259f64[i].fn)();
        }
    }
}

void Unk_ov045_02259e20::vfunc_84() {
    s32 i = unk_ac;
    if (data_ov045_02259f64[i].flag == 0) {
        if (data_ov045_02259f64[i].fn != 0) {
            (this->*data_ov045_02259f64[i].fn)();
            func_ov045_0225916c(0);
        }
    }
}

void Unk_ov045_02259e20::func_ov045_0225916c(s32 v) {
    unk_ac = v;
}

// ---------------------------------------------------------------------------------------------------------------------
// Dialog

void Unk_ov045_02259e20::func_ov045_022590e4() {
    u8 msg;
    void *o = unk_3c;
    msg = 0xb;
    if (func_0206ed18()) {
        unk_b0->unk_750 = func_0206ecf0();
        Unk_ov045_02259dd4 src;
        Unk_ov045_02259dec dst;
        func_020a78a4(&dst, unk_b0->unk_750, 0x10);
        src.func_020a7aa0(&dst, 0, 0);
        unk_3c->func_02067a3c(0, &src);
        msg = 0xa;
    }
    ((Unk_020660f8 *)o)->func_02067a84(&msg, data_ov045_02259d40);
}

BOOL Unk_ov045_02259eb0::vfunc_48() {
    BOOL r = FALSE;
    Unk_ov045_02259070_Rec *src = (Unk_ov045_02259070_Rec *)func_020947f0(4);
    Unk_ov045_02259070_Rec rec;
    s32 bx, by;
    rec.a = src->a;
    rec.b = src->b;
    rec.c = src->c;
    bx = r;
    by = r;
    func_0204ee10(&bx, &by, &rec);
    if (unk_658 == 0) {
        s32 x = unk_5c;
        if (rec.a > x - 0x1000 && rec.a < x + 0x1000) {
            s32 z = unk_64;
            if (rec.c > z + 0x2000 && rec.c < z + 0x4000) {
                r = TRUE;
            }
        }
    }
    return r;
}

void Unk_ov045_02259eb0::vfunc_4c(s32 cmd, u32 b) {
    switch (cmd) {
    case 0:
    case 1:
        unk_68c.vfunc_08();
        unk_68c.func_02015ab0(func_0201bc4c(4));
        func_ov045_02259810(1);
        break;
    case 8:
        func_ov045_02259810(0);
        break;
    }
}

BOOL Unk_ov045_02259eb0::func_ov045_02259004() {
    u32 z[2];
    z[0] = 0;
    z[1] = 0;
    func_0209d498(z);
    if (((u8 *)z)[2] < 6) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u8 *func_ov045_02258ff0() {
    return (u8 *)data_ov045_02259f60 + 0x65c;
}

extern "C" u32 func_ov045_02258fd8() {
    return ((Unk_ov045_02258fd8_Bits *)((u8 *)data_ov045_02259f60 + 0x190))->mid;
}

void Unk_ov045_02259eb0::func_ov045_02258f64() {
    unk_748 = func_02063b8c(0x16);
    if (func_02063b8c(2) == 0) {
        unk_74c = 0;
    } else {
        unk_74c = 1;
    }
    s32 t = func_02063b8c(2);
    s32 k = unk_748 * 2 + 0x1a;
    k += t;
    unk_740 = k + unk_74c * 0x2c;
    unk_741 = unk_748 + 0x72 + unk_74c * 0x16;
}

// ---------------------------------------------------------------------------------------------------------------------
// Owner object

s32 Unk_ov045_02259eb0::func_ov045_02258ee4() {
    u8 i;
    for (i = 0; i < 0x11; i++) {
        if (unk_748 == data_ov045_02259b68[i].a && unk_74c == data_ov045_02259b68[i].b) {
            return 1;
        }
    }
    for (i = 0; i < 0x15; i++) {
        if (unk_748 == data_ov045_02259bf0[i].a && unk_74c == data_ov045_02259bf0[i].b) {
            return 2;
        }
    }
    return 0;
}

Unk_ov045_02259dd4::Unk_ov045_02259dd4() {}

Unk_ov045_02259dd4::~Unk_ov045_02259dd4() {}

u32 Unk_ov045_02259dd4::vfunc_08() { return 0x11; }

u8 *Unk_ov045_02259dd4::vfunc_0c() { return (u8 *)this + 0x12; }

Unk_ov045_02259dec::Unk_ov045_02259dec() {}

// ---------------------------------------------------------------------------------------------------------------------
// Message buffer classes

Unk_ov045_02259dec::~Unk_ov045_02259dec() {}

u32 Unk_ov045_02259dec::vfunc_08() { return 0x10; }

u8 *Unk_ov045_02259dec::vfunc_0c() { return (u8 *)this + 0xe; }

