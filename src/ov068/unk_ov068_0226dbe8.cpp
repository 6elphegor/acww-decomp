// mwcc-version: 1.2/base
#include "types.h"
#define func_0200301c _ZN12Unk_02002fc813func_0200301cEPvjj
#define func_020135c4 _ZN12Unk_0201347413func_020135c4Ev
#define func_02014198 _ZN12Unk_02013b1013func_02014198Ehh
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_02019614 _ZN12Unk_0201985813func_02019614Ejt
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_0201a8d0 _ZN12Unk_0201a8c413func_0201a8d0Eiiii
#define func_0201b138 _ZN12Unk_020d77a46onDrawEv
#define func_0201bb3c _ZN12Unk_020d77a413func_0201bb3cEP16Unk_020d77a4_Vec
#define func_0201bc28 _ZN12Unk_020d77a413func_0201bc28EP12Unk_0201bc1c
#define func_0201bcbc _ZN12Unk_020d77a413func_0201bcbcEPS_
#define func_0202d928 _ZN12Unk_020d89c89preDeleteEv
#define func_0202d948 _ZN12Unk_020d89c88vfunc_00Ev
#define func_0202dab0 _ZN12Unk_020d89c88vfunc_04Ev
#define func_020805c4 _ZN12VillagerData13func_020805c4Ev
#define func_0209865c _ZN10PlayerData13func_0209865cEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define func_0209abb4 _ZN12Unk_0209ada413func_0209abb4Eh
#define func_0209abc4 _ZN12Unk_0209ada413func_0209abc4Ev
#define func_02135558 __register_global_object
#define func_ov003_02216ba4 _ZN18Unk_ov003_02231e4c19func_ov003_02216ba4Ev
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class Unk_020660f8 {
public:
    void func_02067a3c(s32 a, void *p);
    void func_02067a84(u8 *a, void *p);
    void func_02067abc(u8 *a, void *p);

    u32 unk_00;
    s32 unk_04;
};

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
struct Unk_020135e4 { Unk_020135e4(); ~Unk_020135e4(); u8 pad[8]; u8 unk_08; u8 pad_09[2]; u8 unk_0b; };
struct Unk_02019858 { Unk_02019858(); ~Unk_02019858(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); ~Unk_02014254(); u32 pad[0x28 / 4]; };

class SndSeEmitter {
public:
    SndSeEmitter();
    virtual ~SndSeEmitter();
    u32 pad[0x40 / 4];
};
class Unk_020f4080 : public SndSeEmitter {
public:
    Unk_020f4080();
    ~Unk_020f4080() {}
};

struct Unk_0202d7f4 {
    Unk_0202d7f4();
    ~Unk_0202d7f4();
    u32 pad[0x34 / 4];
};
class Unk_0202d5e8 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    u32 pad[(0x1a0 - 4) / 4];
    u8 unk_1a0;
    u8 pad_1a1[3];
};
struct Unk_02082088 { Unk_02082088(); ~Unk_02082088(); u32 pad[2]; };
struct Unk_0201c078 { Unk_0201c078(); ~Unk_0201c078(); u32 pad[0x5c / 4]; };

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Unk_020d77a4_Vec3;

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u32 pad_04[0x58 / 4];
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    u32 unk_68;
    u32 pad_6c;
    u32 unk_70;
    u32 pad_74[(0x8c - 0x74) / 4];
    s16 unk_8c, unk_8e, unk_90, unk_92, unk_94, unk_96;
    u32 pad_98[(0xd4 - 0x98) / 4];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Character {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
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
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void *vfunc_64();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
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
    /* 0x64c */ Unk_0202d7f4 unk_64c;
    /* 0x680 */ Unk_0202d5e8 unk_680;
    /* 0x824 */ Unk_02082088 unk_824;
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ void *unk_830;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ Unk_0201c078 unk_838;
};

// Dialog sub-object at +0x914 of Unk_ov004_0224c7d0. Its vtable (0x0224c740) names every slot after the class that last overrides it;
// declared here slot by slot so that each slot mangles to that symbol.
class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14(u32 v);
    virtual void vfunc_18(u32 v);
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void vfunc_30(u32 v);
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
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
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_1c();
    virtual void vfunc_64();
    virtual void vfunc_74();
};

class Unk_020d7710 : public Unk_020ddcf0 {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
};

struct Unk_020d8938_Tbl;
class Unk_020d8938 : public Unk_020d7710 {
public:
    void func_0202d1d4(Unk_020d8938_Tbl *t);
    void func_0202d388(Unk_020d89c8 *owner, u32 idx);
    Unk_020d8938();
    virtual ~Unk_020d8938();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14(u32 v);
    virtual void vfunc_18(u32 v);
    virtual void vfunc_78(void *arg);
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void vfunc_30(u32 v);
    virtual void vfunc_64_alt();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_ac[0x1a0 - 0xac];
};


// ---------------------------------------------------------------- TU10 classes
class Unk_ov068_02270afc;

struct Unk_ov068_02270a6c_Out {
    void *unk_00;
    u8 unk_04;
};

struct Unk_ov068_02270a6c_Buf {
    u8 b[16];
};

struct Unk_ov068_02270a6c_Bits {
    u8 lo : 3;
    u8 hi : 5;
};

struct Unk_ov068_02270afc_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02270afc_Pair {
    s16 a, b;
};

struct Unk_ov068_0226eda4_V {
    s32 a, b;
};

// Grid header (data_021c47c4 points at one)
struct Unk_ov068_0226ee74_Grid {
    void *cells;
    u8 *w;
    u8 *h;
};

struct Unk_ov068_0226eee0_P0 {
    u8 pad[0x88];
};
struct Unk_ov068_0226eee0_Q0 {
    u8 pad[0xc];
};
struct Unk_ov068_0226eee0_Q1 {
    u32 pad;
};
struct Unk_ov068_0226eee0_Mid : Unk_ov068_0226eee0_Q0, Unk_ov068_0226eee0_Q1 {};
struct Unk_ov068_0226eee0_Top : Unk_ov068_0226eee0_P0, Unk_ov068_0226eee0_Mid {};

typedef void (Unk_ov068_02270afc::*Unk_ov068_02270afc_Fn)();
typedef BOOL (Unk_ov068_02270afc::*Unk_ov068_02270afc_BFn)();

struct Unk_ov068_022708fc_Color {
    u8 a, b, c, d;
    Unk_ov068_022708fc_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

struct Unk_ov068_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

class EncodedString {
public:
    virtual ~EncodedString();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

class MsgString {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    void fromEncoded(EncodedString *dst, s32 a, s32 b);
};

class EncodedString16Buf : public EncodedString {
public:
    EncodedString16Buf(u8 *src);
    virtual ~EncodedString16Buf();
    u8 pad[0x1c];
};

class MsgString33 : public MsgString {
public:
    MsgString33();
    virtual ~MsgString33();
    u8 pad[0x30];
};

#define SPEAK(str) func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov068_022712e0, 0x28, (void *)str)

// Menu/dialog sub-object at +0x898 of the owner (vtable 0x02270a6c)
class Unk_ov068_02270a6c : public Unk_020d8938 {
public:
    inline Unk_ov068_02270a6c() {}
    virtual void vfunc_10(u32 a);
    virtual void vfunc_14(u32 a);
    virtual void vfunc_18(u32 a);
    virtual void vfunc_78(void *arg);

    void func_ov068_0226eb90(Unk_ov068_02270afc *owner);

    /* 0x1a0 */ Unk_ov068_02270afc *unk_1a0;
};

// Owner (vtable 0x02270afc, size 0xa74)
class Unk_ov068_02270afc : public Unk_020d89c8 {
public:
    inline Unk_ov068_02270afc() {}    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    void func_ov068_0226dca4();
    BOOL func_ov068_0226dd14();
    void func_ov068_0226dd18();
    BOOL func_ov068_0226dd38();
    void func_ov068_0226dd3c();
    BOOL func_ov068_0226dd48();
    void func_ov068_0226dda4();
    BOOL func_ov068_0226dda8();
    void func_ov068_0226ddac();
    BOOL func_ov068_0226e0cc();
    void func_ov068_0226e12c();
    BOOL func_ov068_0226e1cc();
    void func_ov068_0226e20c();
    BOOL func_ov068_0226e228();
    void func_ov068_0226e268();
    BOOL func_ov068_0226e2f4();
    void func_ov068_0226e354();
    BOOL func_ov068_0226e390();
    void func_ov068_0226e3b8();
    BOOL func_ov068_0226e3f4();
    void func_ov068_0226e490();
    BOOL func_ov068_0226e4dc();
    void func_ov068_0226e54c();
    BOOL func_ov068_0226e638(s32 idx);
    void func_ov068_0226ee18();
    void func_ov068_0226ee3c();
    void func_ov068_0226ee74();
    BOOL func_ov068_0226ef58();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ Unk_ov068_02270a6c unk_898;
    /* 0xa3c */ Unk_ov068_02270afc_BFn unk_a3c;
    /* 0xa44 */ u32 unk_a44;
    /* 0xa48 */ u8 unk_a48;
    /* 0xa49 */ u8 pad_a49;
    /* 0xa4a */ u16 unk_a4a;
    /* 0xa4c */ u32 unk_a4c;
    /* 0xa50 */ u8 unk_a50;
    /* 0xa51 */ u8 unk_a51;
    /* 0xa52 */ u8 unk_a52;
    /* 0xa53 */ u8 pad_a53;
    /* 0xa54 */ u8 unk_a54;
    /* 0xa55 */ u8 pad_a55;
    /* 0xa56 */ s16 unk_a56;
    /* 0xa58 */ u8 unk_a58;
    /* 0xa59 */ s8 unk_a59;
    /* 0xa5a */ s16 unk_a5a;
    /* 0xa5c */ s32 unk_a5c;
    /* 0xa60 */ s32 unk_a60;
    /* 0xa64 */ s32 unk_a64;
    /* 0xa68 */ s32 unk_a68;
    /* 0xa6c */ s32 unk_a6c;
    /* 0xa70 */ s32 unk_a70;
};
extern "C" {
void _ZN18Unk_ov068_02270afc19func_ov068_0226e354Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e268Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e1ccEv();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e3f4Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226ef58Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e20cEv();
void _ZN18Unk_ov068_02270afc19func_ov068_0226dca4Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e12cEv();
void _ZN18Unk_ov068_02270afc19func_ov068_0226dd48Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226dd38Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226ddacEv();
void _ZN18Unk_ov068_02270afc19func_ov068_0226dda8Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e0ccEv();
void _ZN18Unk_ov068_02270afc19func_ov068_0226dd14Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e228Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e2f4Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e390Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226dda4Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e4dcEv();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e3b8Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226dd18Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226e490Ev();
void _ZN18Unk_ov068_02270afc19func_ov068_0226dd3cEv();
extern void *data_ov068_0227097c[2];
extern void *data_ov068_02270984[2];
extern void *data_ov068_0227098c[2];
extern void *data_ov068_02270994[2];
extern void *data_ov068_0227099c[2];
extern void *data_ov068_022709a4[2];
extern void *data_ov068_022709ac[2];
extern void *data_ov068_022709b4[2];
extern void *data_ov068_022709bc[2];
extern void *data_ov068_022709c4[2];
extern void *data_ov068_022709cc[2];
extern void *data_ov068_022709d4[2];
extern void *data_ov068_022709dc[2];
extern void *data_ov068_022709e4[2];
extern void *data_ov068_022709ec[2];
extern void *data_ov068_022709f4[2];
extern void *data_ov068_022709fc[2];
extern void *data_ov068_02270a04[2];
extern void *data_ov068_02270a0c[2];
extern void *data_ov068_02270a14[2];
extern void *data_ov068_02270a1c[2];
extern void *data_ov068_02270a24[2];
extern void *data_ov068_02270a2c[2];
extern void *data_ov068_02270a34[2];
extern Unk_ov068_02270afc *data_ov068_022712ac;
extern u8 data_ov068_022712b8[0x28];
extern u8 data_ov068_022712e0[0x28];
extern Unk_ov068_02270a6c_Buf data_ov068_02270a3c;
Unk_ov068_02270afc *func_ov068_0226f0a8();
}

extern "C" {
void func_ov068_0226ebb0(void *);
BOOL func_ov068_0226ebcc(void *);
void func_ov068_0226ebf0(void *);
BOOL func_ov068_0226ec14(void *);
void func_ov068_0226ec38(void *);
BOOL func_ov068_0226ec5c(void *);
void func_ov068_0226ed88(void *);
BOOL func_ov068_0226eda4(void *);
}
#define data_0213a740 __ptmf_null
extern "C" Unk_ov068_02270afc_BFn __ptmf_null;

namespace sA {
extern "C" {
void _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(void *self, void *v);
void func_02135558(void *obj, void (*dtor)(void *), void *dso);
extern u16 data_020c6cc8;
extern s32 data_020c8cbc;

void func_020e761c(void *dst, s32 v, s32 n);
void NNS_G3dMdlSetMdlAlpha(void *o, u32 i, u32 v);
s32 func_02063b8c(s32 n);
s32 func_020e9650(void *a, void *b);
s32 func_020e96ec(void *a, void *b);
void *func_02095204(s32 n);
void *func_020947f0(s32 n);
BOOL func_0202ff64(void *v);
u32 func_0201bcbc(void *p, void *q);
s32 func_0201bb3c(void *p, void *out);
void func_020b101c();
void *func_020b4934();
void func_020b4a08(void *o, s32 v);
void func_020b4bbc(void *o, s32 v);
void *func_0207e310(void *o);
void func_020785a8(void *o);
void func_0203d67c(void *p);
BOOL func_0203d704(void *p, s32 a);
s32 func_ov003_02216ba4(void *a, void *b, s32 c);
s32 func_02014220(void *);
void func_020141b4(void *, s32, s32, s32);
s32 func_020197a8(void *);
s32 func_02019614(void *, s32, u32);
s32 func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_02019790(void *);
}
}
namespace sB {
extern "C" {
void _ZN12Unk_0201a8c413func_0201a99cEs(void *self, s32 a);
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern s32 data_020c8cb4;
extern s32 data_020c8cb8;
extern u8 gVec3Zero[];

s32 func_02019614(void *, s32, u32);
void func_0201a6c0(void *, u32, s32, s32, void *, s32, s32, u8);
void func_0202ffb0(s32);
s32 func_02014220(void *);
void func_0203d704(void *, s32);
Unk_ov068_02270afc_Vec *func_020947f0(s32);
s32 func_0202ff64(void *);
void func_0201a8d0(void *, s32, s32, s32, s32);
s32 func_0203d67c(void *);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_02019790(void *);
void func_02003e70(void *, s32, s32, s32);
void func_020b0e60();
void func_02014198(void *, s32, s32);
void func_0205b124(void *);
s32 func_0205afdc(void *, void *);
void func_020b1028();
void *func_0207e310(void *);
void func_020785e8(void *, s32);
void func_0205b120(void *);
Unk_020d89c8 *func_02095204(s32);
s32 func_020e9650(void *, void *);
}

extern "C" {
extern u8 data_021be7e0[];
extern u8 data_021be810[];
extern u8 data_021edb5c;
void func_0200301c(void *, void *, u32, void *);
void *func_020805c4(void *);
u32 func_02063b8c(s32);
void Snd_PlaySe(s32);
s32 func_02003098(void *);
s32 func_ov004_02234b0c(s32);
void *PlayerData_GetCurrent();
void *func_0209865c(void *);
}

}
namespace sC {
extern "C" {
extern Unk_ov068_0226ee74_Grid *data_021c47c4;


void *PlayerData_GetCurrent();
u8 *func_0209865c(void *);
s32 func_0209abb4(void *, s32);
s32 func_0209abc4(void *);
s32 func_02063b8c(s32);
void MI_CpuCopy8(void *, void *, u32);
void func_0209d258(void *, s32);
void func_0209d498(void *);
s32 func_0209d3d0(void *, void *, s32);
s32 func_0201a8d0(void *, s32, s32, s32, s32);
s32 func_02014220(void *);
void *PlayerData_getPlayerId(void *);
void *func_0207f55c(void *, void *);
void func_02080ecc(void *, s32, s32, s32);
s32 func_02037558(void *, s32, s32, s32);
s32 Item_IsFurnitureOrF031();
void func_0203002c(s32, s32);
s32 func_0202d928(void *);
s32 func_0202d948(void *);
void func_020135c4(void *);
void func_020b50dc();
s32 func_020b5198();
void func_020b1028();
void func_0205b124(void *);
void func_0205b120(void *);
void *func_0205afdc(void *, void *);
s32 func_0201b138(void *);
s32 func_0202dab0(void *);
void func_0201bc28(void *, void *);
}

}

extern "C" void *data_ov068_02270a24[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226ef58Ev, 0};
extern "C" void *data_ov068_022709bc[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226dd48Ev, 0};
extern "C" void *data_ov068_022709cc[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226ddacEv, 0};
extern "C" {
Unk_ov068_02270afc *data_ov068_022712ac;
}


extern "C" Unk_ov068_02270afc *func_ov068_0226f0a8() {
    using namespace sC;
    return new Unk_ov068_02270afc;
}

BOOL Unk_ov068_02270afc::vfunc_04() {
    using namespace sC;
    if (func_0202dab0(this) == 0) {
        return FALSE;
    }
    data_ov068_022712ac = this;
    func_0201bc28(this, &unk_898);
    unk_898.func_ov068_0226eb90(this);
    return TRUE;
}

BOOL Unk_ov068_02270afc::vfunc_00() {
    using namespace sC;
    if (func_0202d948(this) == 0) {
        return FALSE;
    }
    unk_a3c = *(Unk_ov068_02270afc_BFn *)data_ov068_02270a24;
    func_ov068_0226ee74();
    func_020135c4(&unk_558);
    unk_a56 = -1;
    unk_a54 = 3;
    unk_a58 = 0xb0;
    func_020b50dc();
    if (func_020b5198() != 0) {
        func_ov068_0226e638(0);
    } else if (func_ov068_0226ec5c(&unk_898) != 0) {
        u32 buf[6];
        func_020b1028();
        unk_a56 = (func_02063b8c(0x14) + 0x28) * 0x3c;
        unk_a54 = func_02063b8c(4) + 2;
        func_0205b124(buf);
        unk_a4c = (u32)func_0205afdc(buf, &unk_a44);
        func_ov068_0226e638(6);
        func_0205b120(buf);
    } else {
        unk_a56 = (func_02063b8c(0x28) + 0x3c) * 0x3c;
        unk_a54 = func_02063b8c(4) + 7;
        func_ov068_0226e638(0);
    }
    return TRUE;
}

BOOL Unk_ov068_02270afc::func_ov068_0226ef58() {
    using namespace sC;
    if (func_0201b138(this) != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_02270afc::onDraw() {
    using namespace sC;
    if (unk_a3c) {
        return (this->*unk_a3c)();
    }
    return TRUE;
}

BOOL Unk_ov068_02270afc::preDelete() {
    using namespace sC;
    if (func_0202d928(this) == 0) {
        return FALSE;
    }
    Unk_ov068_0226eee0_Top *t = (Unk_ov068_0226eee0_Top *)func_0209865c(PlayerData_GetCurrent());
    Unk_ov068_0226eee0_Mid &m = *t;
    Unk_ov068_0226eee0_Q1 &q = m;
    if (func_0209abc4(&q) == 1) {
        Unk_ov068_0226eee0_Q1 &q2 = m;
        func_0209abb4(&q2, 2);
    }
    data_ov068_022712ac = NULL;
    return TRUE;
}

BOOL Unk_ov068_02270afc::vfunc_68() {
    using namespace sC;
    func_ov068_0226e54c();
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226ee74() {
    using namespace sC;
    Unk_ov068_0226ee74_Grid *g = data_021c47c4;
    void *grid;
    s32 y, x;
    s32 z;
    if (g->w > (u8 *)0 && g->h > (u8 *)0 && g->cells != NULL) {
        grid = g->cells;
    } else {
        grid = NULL;
    }
    y = 0;
    z = 0;
    for (; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            if (func_02037558(grid, x, y, z) != 0) {
                if (Item_IsFurnitureOrF031() != 0) {
                    func_0203002c(x, y);
                }
            }
        }
    }
}

void Unk_ov068_02270afc::func_ov068_0226ee3c() {
    using namespace sC;
    void *p = PlayerData_GetCurrent();
    if (p != NULL) {
        if (unk_82c != NULL) {
            func_02080ecc(func_0207f55c(unk_82c, PlayerData_getPlayerId(p)), 0, 0, 0);
        }
    }
}

void Unk_ov068_02270afc::func_ov068_0226ee18() {
    using namespace sC;
    func_0201a8d0(&unk_350, 1, 0x100, 0x19, 0x33);
}

extern "C" BOOL func_ov068_0226eda4(void *) {
    using namespace sC;
    Unk_ov068_0226eda4_V a, b, c;
    MI_CpuCopy8(func_0209865c(PlayerData_GetCurrent()) + 0xa0, &a, 8);
    MI_CpuCopy8(&a, &b, 8);
    func_0209d258(&b, 0x1e);
    c.a = 0;
    c.b = 0;
    func_0209d498(&c);
    if (func_0209d3d0(&a, &c, 0x3e) == -1 || func_0209d3d0(&a, &c, 0x3e) == 0) {
        if (func_0209d3d0(&c, &b, 0x3e) == -1) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_ov068_0226ed88(void *) {
    using namespace sC;
    func_0209abb4(func_0209865c(PlayerData_GetCurrent()) + 0x94, 4);
}

BOOL Unk_ov068_02270afc::vfunc_48() {
    using namespace sC;
    if (func_02014220(&unk_618) != 0) {
        return FALSE;
    }
    if ((u32)(unk_894 - 5) <= 1) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270afc::vfunc_4c(u32 idx, u32 v) {
    using namespace sC;
    switch (idx) {
    case 3:
        unk_558.unk_08 = v;
        if (unk_894 != 0) {
            if (unk_894 == 5) {
                unk_a56 = (func_02063b8c(0x28) + 0x3c) * 0x3c;
            }
            func_ov068_0226e638(7);
        }
        break;
    case 0:
        unk_558.unk_08 = v;
        unk_898.func_ov068_0226eb90(this);
        func_ov068_0226e638(8);
        break;
    case 1:
        unk_558.unk_08 = v;
        unk_898.func_ov068_0226eb90(this);
        if (unk_894 == 0) {
            func_ov068_0226e638(1);
        } else {
            func_ov068_0226e638(8);
        }
        break;
    case 8:
        unk_a58 = 0x14;
        func_ov068_0226ee3c();
        if (unk_894 != 0xa && unk_894 != 5) {
            func_ov068_0226e638(6);
        }
        break;
    case 4:
        func_ov068_0226e638(6);
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    }
}

extern "C" BOOL func_ov068_0226ec5c(void *) {
    using namespace sC;
    if (func_0209abc4(func_0209865c(PlayerData_GetCurrent()) + 0x94) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov068_0226ec38(void *p) {
    using namespace sC;
    if (func_ov068_0226ec5c(p) == 0) {
        func_0209abb4(func_0209865c(PlayerData_GetCurrent()) + 0x94, 1);
    }
}

extern "C" BOOL func_ov068_0226ec14(void *) {
    using namespace sC;
    if ((u32)func_0209abc4(func_0209865c(PlayerData_GetCurrent()) + 0x94) > 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov068_0226ebf0(void *p) {
    using namespace sC;
    if (func_ov068_0226ec14(p) == 0) {
        func_0209abb4(func_0209865c(PlayerData_GetCurrent()) + 0x94, 2);
    }
}

extern "C" BOOL func_ov068_0226ebcc(void *) {
    using namespace sC;
    if (func_0209abc4(func_0209865c(PlayerData_GetCurrent()) + 0x94) == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov068_0226ebb0(void *) {
    using namespace sC;
    func_0209abb4(func_0209865c(PlayerData_GetCurrent()) + 0x94, 3);
}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov068_02270a6c::func_ov068_0226eb90(Unk_ov068_02270afc *owner) {
    using namespace sC;
    func_0202d388((Unk_020d89c8 *)owner, 0x11);
    unk_1a0 = owner;
}

void Unk_ov068_02270a6c::vfunc_78(void *arg) {
    using namespace sB;
    Unk_ov068_02270a6c_Out *out = (Unk_ov068_02270a6c_Out *)arg;
    out->unk_00 = data_ov068_022712e0;
    if (unk_1a0->unk_894 == 1) {
        unk_1a0->unk_a52 = 1;
        SPEAK((void *)"q10_call");
        out->unk_04 = func_02063b8c(3);
        func_ov068_0226ec38(this);
        return;
    }
    if (unk_1a0->unk_a50 != 0 && unk_1a0->unk_a51 != 0) {
        unk_1a0->unk_a50 = 0;
    }
    if (unk_1a0->unk_a50 != 0) {
        unk_1a0->unk_a52 = 6;
        SPEAK((void *)"q10_back");
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = func_02063b8c(3);
        return;
    }
    if (unk_1a0->unk_a51 != 0) {
        unk_1a0->unk_a52 = 8;
        SPEAK((void *)"q10_wait");
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = func_02063b8c(2);
        return;
    }
    if (func_ov068_0226ec14(this) == 0) {
        unk_1a0->unk_a52 = 2;
        SPEAK((void *)"q10_door");
        out->unk_04 = func_02063b8c(3);
        func_ov068_0226ebf0(this);
        return;
    }
    if (func_ov068_0226ebcc(this)) {
        unk_1a0->unk_a52 = 5;
        SPEAK((void *)"q10_first");
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = func_02063b8c(3);
        func_ov068_0226ebb0(this);
        return;
    }
    if (unk_1a0->unk_a54 != 0) {
        unk_1a0->unk_a54 = unk_1a0->unk_a54 - 1;
    }
    u32 rnd = func_02063b8c(100);
    s32 v = func_ov004_02234b0c(func_02003098(func_020805c4(unk_1a0->unk_82c)));
    u32 n = unk_1a0->unk_a44;
    if (n >= 5) {
        n = 5;
    }
    Unk_ov068_02270a6c_Buf buf = data_ov068_02270a3c;
    for (u32 i = n; i < 16; i++) {
        buf.b[i] = 0;
    }
    EncodedString16Buf obj1(buf.b);
    MsgString33 obj2;
    obj2.fromEncoded(&obj1, 0, 0);
    unk_3c->func_02067a3c(3, &obj2);
    if (rnd < 30 && v != -1) {
        unk_1a0->unk_a52 = 3;
        SPEAK((void *)"q10_furniture");
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = v;
        return;
    }
    if (rnd < 50) {
        unk_1a0->unk_a52 = 4;
        SPEAK((void *)"q10_layout");
        out->unk_00 = data_ov068_022712e0;
        u32 f = unk_1a0->unk_a4c;
        if (f & 1) {
            out->unk_04 = func_02063b8c(2);
        } else if (f & 2) {
            out->unk_04 = func_02063b8c(2) + 2;
        } else if ((f & 4) == 0) {
            out->unk_04 = func_02063b8c(2) + 4;
        } else if (f & 0x10) {
            out->unk_04 = 10;
        } else if (f & 0x20) {
            out->unk_04 = func_02063b8c(2) + 8;
        } else {
            out->unk_04 = func_02063b8c(2) + 6;
        }
        ((Unk_ov068_02270a6c_Bits *)((u8 *)func_0209865c(PlayerData_GetCurrent()) + 0xa8))->lo = n;
    } else if (rnd < 70) {
        unk_1a0->unk_a52 = 0;
        func_0202d1d4((Unk_020d8938_Tbl *)data_021be7e0);
        Unk_020d8938::vfunc_78(out);
    } else {
        unk_1a0->unk_a52 = 0;
        func_0202d1d4((Unk_020d8938_Tbl *)data_021be810);
        Unk_020d8938::vfunc_78(out);
    }
}

void Unk_ov068_02270a6c::vfunc_10(u32 a) {
    using namespace sB;
    if (unk_1a0->unk_a52 == 0) {
        Unk_020d8938::vfunc_10(a);
    }
}

void Unk_ov068_02270a6c::vfunc_14(u32 a) {
    using namespace sB;
    u8 buf[2];
    Unk_ov068_02270afc *o = unk_1a0;
    u32 st = o->unk_a52;
    if (st == 0) {
        Unk_020d8938::vfunc_14(a);
    } else if (o != 0) {
        if (st == 1) {
            o->func_ov068_0226e638(2);
        } else if (st == 6 || st == 8) {
            o->unk_a52 = 7;
            func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov068_022712b8, 0x28, (void *)"q_bye");
            buf[0] = func_02063b8c(3);
            unk_1a0->unk_898.unk_3c->func_02067abc(buf, data_ov068_022712b8);
        } else if (st == 7) {
            buf[1] = data_021edb5c;
            unk_1a0->unk_898.unk_3c->func_02067a84(&buf[1], 0);
            unk_1a0->func_ov068_0226e638(10);
            Snd_PlaySe(0x5f);
        }
    }
}

void Unk_ov068_02270a6c::vfunc_18(u32 a) {
    using namespace sB;
    if (unk_1a0->unk_a52 == 0) {
        Unk_020d8938::vfunc_18(a);
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e638(s32 idx) {
    using namespace sB;
    static Unk_ov068_02270afc_BFn tbl[11] = {
        *(Unk_ov068_02270afc_BFn *)data_ov068_02270a0c,
        *(Unk_ov068_02270afc_BFn *)data_ov068_02270994,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709fc,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709f4,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709ec,
        *(Unk_ov068_02270afc_BFn *)data_ov068_0227098c,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709dc,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709d4,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709bc,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709c4,
        *(Unk_ov068_02270afc_BFn *)data_ov068_022709e4,
    };
    if (idx < 11) {
        if ((this->*tbl[idx])()) {
            unk_894 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void *data_ov068_02270a2c[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e490Ev, 0};
extern "C" void *data_ov068_02270a34[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226dd3cEv, 0};
extern "C" void *data_ov068_022709fc[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e390Ev, 0};
extern "C" Unk_ov068_022708fc_Color data_ov068_022712a8(0x1f, 0x14, 0x14, 0x1f);
extern "C" void *data_ov068_02270a1c[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226dd18Ev, 0};
extern "C" void *data_ov068_02270a14[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e3b8Ev, 0};
extern "C" void *data_ov068_02270a0c[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e4dcEv, 0};
extern "C" void *data_ov068_02270994[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e3f4Ev, 0};
extern "C" {
u8 data_ov068_022712e0[0x28];
}
extern "C" void *data_ov068_022709f4[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e2f4Ev, 0};
extern "C" void *data_ov068_022709ec[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e228Ev, 0};
extern "C" void *data_ov068_0227098c[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e1ccEv, 0};
extern "C" void *data_ov068_022709dc[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e0ccEv, 0};
extern "C" void *data_ov068_022709b4[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e12cEv, 0};
extern "C" Unk_ov068_Scene_Entry data_ov068_02270a4c = {(void *(*)())func_ov068_0226f0a8, 0x82, 0x86, {2, 0x5000, 0x5000, 0x3e800}};
extern "C" void *data_ov068_022709c4[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226dd38Ev, 0};
extern "C" Unk_ov068_022708fc_Color data_ov068_02271298(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov068_022708fc_Color data_ov068_022712b0(0x1f, 0x1f, 0x14, 0x1f);
extern "C" void *data_ov068_022709e4[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226dd14Ev, 0};
extern "C" void *data_ov068_02270a04[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226dda4Ev, 0};
extern "C" void *data_ov068_0227099c[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226ef58Ev, 0};
extern "C" void *data_ov068_0227097c[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e354Ev, 0};
extern "C" Unk_ov068_022708fc_Color data_ov068_022712a0(0x14, 0x1f, 0x14, 0x1f);
extern "C" void *data_ov068_022709a4[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e20cEv, 0};
extern "C" Unk_ov068_022708fc_Color data_ov068_0227129c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov068_02270a6c_Buf data_ov068_02270a3c = {{0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
extern "C" void *data_ov068_022709d4[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226dda8Ev, 0};
extern "C" Unk_ov068_022708fc_Color data_ov068_022712a4(0x14, 0x18, 0x18, 0x1f);
extern "C" {
u8 data_ov068_022712b8[0x28];
}
extern "C" void *data_ov068_02270984[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226e268Ev, 0};


void Unk_ov068_02270afc::func_ov068_0226e54c() {
    using namespace sB;
    static Unk_ov068_02270afc_Fn tbl[11] = {
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270a2c,
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270a14,
        *(Unk_ov068_02270afc_Fn *)data_ov068_0227097c,
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270984,
        *(Unk_ov068_02270afc_Fn *)data_ov068_022709a4,
        *(Unk_ov068_02270afc_Fn *)data_ov068_022709b4,
        *(Unk_ov068_02270afc_Fn *)data_ov068_022709cc,
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270a04,
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270a34,
        *(Unk_ov068_02270afc_Fn *)data_ov068_02270a1c,
        *(Unk_ov068_02270afc_Fn *)data_ov068_022709ac,
    };
    if (unk_894 < 11) {
        (this->*tbl[unk_894])();
    }
}

extern "C" void *data_ov068_022709ac[2] = {(void *)_ZN18Unk_ov068_02270afc19func_ov068_0226dca4Ev, 0};


BOOL Unk_ov068_02270afc::func_ov068_0226e4dc() {
    using namespace sB;
    unk_5c = data_020c8cb4;
    unk_64 = data_020c8cb8 - 0x1000;
    Unk_ov068_02270afc_Pair &q = *(Unk_ov068_02270afc_Pair *)&unk_92;
    q.b = -0x8000;
    unk_8e = q.b;
    _ZN12Unk_0201a8c413func_0201a99cEs(&unk_350, -0x8000);
    unk_a3c = data_0213a740;
    unk_4cc.unk_44 = 0;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226e490() {
    using namespace sB;
    if (func_ov068_0226eda4(this)) {
        Unk_020d89c8 *p = func_02095204(4);
        if (p) {
            Unk_ov068_02270afc_Vec v;
            Unk_ov068_02270afc_Vec *pv = (Unk_ov068_02270afc_Vec *)&p->unk_5c;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (func_020e9650(&v, &unk_5c) > 0x4e66) {
                func_0203d704(this, 0);
            }
        }
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e3f4() {
    using namespace sB;
    u32 loc[6];
    unk_a3c = data_0213a740;
    unk_4cc.unk_44 = 0;
    func_0202ffb0(0);
    func_0205b124(loc);
    unk_a4c = func_0205afdc(loc, &unk_a44);
    func_020b1028();
    if (vfunc_64()) {
        func_020785e8(func_0207e310(vfunc_64()), 2);
    }
    unk_a59 = 30;
    func_02003e70(&unk_514, 0x4ca, 0x7f, 0);
    func_0205b120(loc);
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226e3b8() {
    using namespace sB;
    if (unk_a59 > 0) {
        unk_a59 = unk_a59 - 1;
    }
    if (unk_a59 == 0) {
        func_02014198(&unk_618, 0, 1);
        unk_a59 = -1;
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e390() {
    using namespace sB;
    unk_a3c = data_0213a740;
    unk_4cc.unk_44 = 1;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226e354() {
    using namespace sB;
    if (unk_898.unk_3c->unk_04 == 0) {
        func_02003e70(&unk_514, 0x4cb, 0x7f, 0);
        func_020b0e60();
        func_ov068_0226e638(3);
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e2f4() {
    using namespace sB;
    unk_a68 = unk_5c;
    unk_a6c = unk_60;
    unk_a70 = unk_64;
    unk_a70 = unk_a70 - 0x2000;
    unk_a3c = data_0213a740;
    unk_4cc.unk_44 = 1;
    unk_a48 = 0x28;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226e268() {
    using namespace sB;
    if (unk_a48 == 1) {
        unk_a3c = *(Unk_ov068_02270afc_BFn *)data_ov068_0227099c;
        func_020196b4(&unk_564, 1, 2, unk_a68, unk_a70, 0, 0, 0, 0, 0, 0);
    } else if (unk_a48 == 0) {
        if (func_02019790(&unk_564)) {
            func_ov068_0226e638(4);
        }
    }
    if (unk_a48 != 0) {
        unk_a48 = unk_a48 - 1;
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e228() {
    using namespace sB;
    if (func_02014220(&unk_618)) {
        return func_02019614(&unk_564, 2, data_020c6cc8);
    } else {
        return func_02019614(&unk_564, 1, data_020c6cc8);
    }
}

void Unk_ov068_02270afc::func_ov068_0226e20c() {
    using namespace sB;
    if (func_ov068_0226e638(5)) {
        func_0203d67c(this);
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e1cc() {
    using namespace sB;
    unk_a4a = 5;
    func_0201a8d0(&unk_350, 1, 0x148, 0x25, 0x25);
    unk_a56 = 0x258;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226e12c() {
    using namespace sB;
    if (func_02014220(&unk_618) == 0) {
        if (unk_a56 == 0 || unk_a54 == 0) {
            if (unk_a58 == 0) {
                func_0203d704(this, 0);
                unk_a50 = 1;
                return;
            } else if (unk_a58 != 0) {
                unk_a58 = unk_a58 - 1;
            }
        }
        if (unk_a56 > 0) {
            unk_a56 = unk_a56 - 1;
        }
    }
    Unk_ov068_02270afc_Vec *p = func_020947f0(4);
    if (p) {
        Unk_ov068_02270afc_Vec v;
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
        if (func_0202ff64(&v)) {
            func_0203d704(this, 0);
            unk_a51 = 1;
        }
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e0cc() {
    using namespace sB;
    if (func_02019614(&unk_564, 1, data_020c6cc8)) {
        func_0201a6c0(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        func_0202ffb0(0);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270afc::func_ov068_0226ddac() {
    using namespace sA;
    Unk_ov068_02270afc_Vec v;
    Unk_ov068_02270afc_Vec tmp;
    Unk_ov068_02270afc_Vec *pv = (Unk_ov068_02270afc_Vec *)func_020947f0(4);
    if (unk_894 == 6) {
        if (func_02014220(&unk_618) == 0) {
            if (unk_a56 == 0 || unk_a54 == 0) {
                if (unk_a58 == 0) {
                    func_0203d704(this, 0);
                    unk_a50 = 1;
                    return;
                }
                if (unk_a58 > 0) {
                    unk_a58--;
                }
            }
            if (unk_a56 > 0) {
                unk_a56--;
            }
        }
    }
    if (unk_894 == 6) {
        if (pv != NULL) {
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (func_0202ff64(&v)) {
                func_0203d704(this, 0);
                unk_a51 = 1;
                return;
            }
        }
    }
    s32 d = data_020c8cbc;
    if (pv != NULL) {
        d = func_020e9650(pv, &unk_5c);
    }
    if ((*((u8 *)this + 0x508)) != 0 || (unk_894 != 6 && d < 0x2334)) {
        if (func_020197a8(&unk_564) == 1 || unk_894 == 3) {
            if (func_02019614(&unk_564, 2, data_020c6cc8)) {
                func_ov068_0226ee18();
                return;
            }
        }
    }
    if (func_020197a8(&unk_564) == 0) {
        if (unk_a4a != 0) {
            unk_a4a--;
        }
        if (unk_a4a == 0) {
            unk_a5a = func_ov003_02216ba4(&unk_a68, &unk_5c, unk_8e);
            unk_a5c = unk_a68;
            unk_a60 = unk_a6c;
            unk_a64 = unk_a70;
            if (unk_a5a != unk_8e) {
                if (!func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_a5a, 0, 0, data_020c6cc8, 0)) {
                    return;
                }
                unk_a4a = func_02063b8c(0x46) + 0x14;
            } else {
                if (!func_020196b4(&unk_564, 1, 1, unk_a68, unk_a70, 0, 0, 0, 0, data_020c6cc8, 0)) {
                    return;
                }
                unk_a4a = func_02063b8c(0x50) + 0x14;
            }
        } else {
            if (func_02019790(&unk_564)) {
                func_02019614(&unk_564, 1, data_020c6cc8);
            }
        }
    } else if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_020196b4(&unk_564, 1, 1, unk_a68, unk_a70, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else if (func_020197a8(&unk_564) == 1) {
        switch (func_0201bb3c(this, &tmp)) {
        case 1:
            if (func_02019614(&unk_564, 1, data_020c6cc8)) {
                func_ov068_0226ee18();
            }
            break;
        case 2:
            unk_a5c = tmp.x;
            unk_a60 = tmp.y;
            unk_a64 = tmp.z;
            _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(&unk_350, &unk_a5c);
            break;
        default:
            if (func_020e96ec(&unk_a5c, &unk_a68) != 0) {
                unk_a5c = unk_a68;
                unk_a60 = unk_a6c;
                unk_a64 = unk_a70;
                _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(&unk_350, &unk_a68);
            } else if (func_020e9650(&unk_a68, &unk_5c) < 0x200) {
                func_02019614(&unk_564, 1, data_020c6cc8);
                func_ov068_0226ee18();
            }
            break;
        }
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226dda8() {
    using namespace sA;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226dda4() {
    using namespace sA;}

BOOL Unk_ov068_02270afc::func_ov068_0226dd48() {
    using namespace sA;
    void *p = func_02095204(4);
    if (p != NULL) {
        u32 x = func_0201bcbc(this, p);
        if (unk_a50 != 0 || unk_a51 != 0) {
            func_020141b4(&unk_618, 0, x, 1);
        } else {
            func_020141b4(&unk_618, 0, x, 0);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270afc::func_ov068_0226dd3c() {
    using namespace sA;
    func_ov068_0226e638(9);
}

BOOL Unk_ov068_02270afc::func_ov068_0226dd38() {
    using namespace sA;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226dd18() {
    using namespace sA;
    if (unk_898.unk_3c != NULL) {
        if (unk_898.unk_3c->unk_04 == 0) {
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226dd14() {
    using namespace sA;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226dca4() {
    using namespace sA;
    if (unk_898.unk_3c != NULL) {
        if (unk_898.unk_3c->unk_04 == 0) {
            func_020b101c();
            if (vfunc_64() != NULL) {
                func_020785a8(func_0207e310(vfunc_64()));
            }
            func_ov068_0226ed88(this);
            if (unk_a50 != 0) {
                func_020b4a08(func_020b4934(), 0);
                func_020b4bbc(func_020b4934(), 6);
            } else {
                func_020b4bbc(func_020b4934(), 0);
            }
        }
    }
}

void Unk_ov068_02270afc::vfunc_80() {
    using namespace sA;
    (*((u8 *)this + 0x893)) = 1;
}

BOOL Unk_ov068_02270afc::vfunc_7c() {
    using namespace sA;
    if ((*((u8 *)this + 0x893)) == 0) {
        return TRUE;
    }
    return FALSE;
}
