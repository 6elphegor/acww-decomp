// mwcc-version: 1.2/base
#include "types.h"
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define func_02014198 _ZN12Unk_02013b1013func_02014198Ehh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_02015170 _ZN12Unk_020d771013func_02015170Ejj
#define func_020151d0 _ZN12Unk_020d771013func_020151d0Ei
#define func_0201610c _ZN12Unk_0201635013func_0201610cEP16Unk_02015fe0_Objiiiiti
#define func_020195c8 _ZN12Unk_0201985813func_020195c8Eiijtt
#define func_02019614 _ZN12Unk_0201985813func_02019614Ejt
#define func_020199d0 _ZN12Unk_02019dd813func_020199d0Ev
#define func_020199e0 _ZN12Unk_02019dd813func_020199e0Ej
#define func_0201a664 _ZN12Unk_0201a33413func_0201a664Eissss
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_0201a730 _ZN12Unk_0201a33413func_0201a730Es
#define func_0201ad2c _ZN12Unk_0201ad2013func_0201ad2cEi
#define func_0201ad30 _ZN12Unk_0201ad2013func_0201ad30Ei
#define func_0201ad34 _ZN12Unk_0201ad2013func_0201ad34Ei
#define Unk_020d77a4_setTalkRequest _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c
#define Unk_020d77a4_setNpcHandle _ZN12Unk_020d77a412setNpcHandleEPt
#define func_020539a0 _ZN12Unk_020dbd7413func_020539a0Ev
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define TalkWindowState_setNamedSlot _ZN15TalkWindowState12setNamedSlotEiPvj
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define func_02072e88 _ZN12Unk_020cbb1813func_02072e88Ei
#define func_02085f7c _ZN12Unk_02085f7c13func_02085f7cEv
#define func_02085f90 _ZN12Unk_02085f7c13func_02085f90Ev
#define func_02085f98 _ZN12Unk_02085f7c13func_02085f98Ev
#define func_02085fa0 _ZN12Unk_02085f7c13func_02085fa0Ev
#define func_0209801c _ZN12Unk_02097ff413func_0209801cEj
#define func_02098044 _ZN12Unk_02097ff413func_02098044Ej
#define func_0209ea50 _ZN11SaveRecord413func_0209ea50Ev
#define MsgString_fromEncoded _ZN9MsgString11fromEncodedEP13EncodedStringii
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv

// Library base class (same as GameProc.h, but vfunc_08 takes the s32 the vtable symbol names).
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

struct Unk_0201bc1c;

struct Unk_ov083_Vec {
    s32 x, y, z;
};

struct Unk_ov068_0226ce70_Out {
    const char *unk_00;
    u8 unk_04;
};

struct ChoiceList {
    s32 ChoiceList_getResult();
};


struct TalkWindowState {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    s32 unk_14;
};

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(s32 a);
    virtual void vfunc_14(s32 a);
    virtual void vfunc_18(s32 a);
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
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
    virtual void vfunc_78(Unk_ov068_0226ce70_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    void func_0201578c(u32 a, u32 b, u32 c);
    ChoiceList *getChoiceList();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    TalkWindowState *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[4];
    s32 unk_ac;
    u8 pad_b0[0x2a0 - 0xec - 0xb0];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x44 - 0x20];
    u8 unk_44;
    u8 unk_45;
    u8 pad_46[2];
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
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

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
    void setInteractionRange(s32 v);
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
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

class Unk_020d77a4 : public Character {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void getSpecies();
    virtual void setShirt();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void addMood();
    virtual s32 vfunc_a8();

    s32 getPlayerActor(u32 v);

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
    virtual BOOL preDelete();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void getSpecies();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};


// ---------------------------------------------------------------- TU08 classes
struct Unk_ov068_0226ccd4_Owner;

struct Unk_ov068_0226ce70_Date {
    u32 a;
    u32 b;
};

// message block at +0xb8 of the sub-object (constructed by the autoload_2 function 0x020f8134)
struct BgmBeatPhase {
    s8 unk_00;
    s8 unk_01;
    s8 unk_02;
    s8 unk_03;
    s8 unk_04;
    u8 pad_05[3];
    s32 unk_08;
    u8 pad_0c[8];
    u8 unk_14;
    u8 pad_15[3];
};
extern "C" void func_020f8134(void *self);

class Unk_ov068_02270810;

// Scene object at +0x65c of Unk_ov068_02270810 (vtable 0x02270780)
class Unk_ov068_02270780 : public SpNpcTalkRequest {
public:
    Unk_ov068_02270780();
    virtual ~Unk_ov068_02270780();
    virtual void vfunc_10(s32 a);
    virtual void vfunc_14(s32 a);
    virtual void vfunc_18(s32 a);
    virtual void vfunc_78(Unk_ov068_0226ce70_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov068_0226c4d8();
    void func_ov068_0226c530();
    void func_ov068_0226c63c();
    void func_ov068_0226c870();
    void func_ov068_0226c9b0();
    void func_ov068_0226cab8(s32 state);
    void func_ov068_0226cb54(s32 a);
    void func_ov068_0226cba4(s32 a);
    void func_ov068_0226cbe4(s32 a);
    void func_ov068_0226cbf8(s32 a);
    void func_ov068_0226ccd4();
    void func_ov068_0226ccf4();
    void func_ov068_0226cd18(s32 a);
    void func_ov068_0226cdcc(s32 a);
    s32 func_ov068_0226d070();
    void func_ov068_0226d078(s32 v);
    void func_ov068_0226d080(Unk_ov068_0226ccd4_Owner *o);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov068_02270810 *unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ BgmBeatPhase unk_b8;
};

class Unk_ov068_02270810 : public Unk_020d8bc8 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL func_ov068_0226c3b4();
    u32 func_ov068_0226c334();
    BOOL func_ov068_0226d0f4();
    BOOL func_ov068_0226d150();
    BOOL func_ov068_0226d1d0();
    BOOL func_ov068_0226d1f0();
    BOOL func_ov068_0226d1f4();
    BOOL func_ov068_0226d1f8();
    BOOL func_ov068_0226d1fc();
    BOOL func_ov068_0226d238();
    BOOL func_ov068_0226d2b0();
    BOOL func_ov068_0226d2ec();
    void func_ov068_0226d39c(s32 state);

    /* 0x652 */ u16 unk_652;
    /* 0x654 */ s32 unk_654;
    /* 0x658 */ s32 unk_658;
    /* 0x65c */ Unk_ov068_02270780 unk_65c;
    /* 0x72c */ s32 unk_72c;
    /* 0x730 */ u8 unk_730[0x10];
    /* 0x740 */ u16 unk_740;
    /* 0x742 */ u8 unk_742;
    /* 0x743 */ u8 unk_743;
    /* 0x744 */ u8 unk_744;
};

typedef BOOL (Unk_ov068_02270810::*Unk_ov068_0226d39c_Fn)();
struct Unk_ov068_0226d39c_Entry {
    Unk_ov068_0226d39c_Fn a;
    Unk_ov068_0226d39c_Fn b;
};

typedef BgmBeatPhase Unk_ov068_0226c63c_Msg;

struct Unk_ov068_0226c3b4_Vec {
    s32 x, y, z;
};

struct ItemName {
    ItemName();
    ~ItemName();
    u32 pad[0x24 / 4];
};

struct EncodedString16Buf {
    EncodedString16Buf();
    ~EncodedString16Buf();
    u32 pad[0x20 / 4];
};

struct Unk_ov068_0226c870_Pad {
    s32 v[2];
    Unk_ov068_0226c870_Pad() {}
    ~Unk_ov068_0226c870_Pad() {}
};

typedef void (Unk_ov068_02270780::*Unk_ov068_02270780_Fn)();
typedef void (Unk_ov068_02270780::*Unk_ov068_02270780_Fn1)(s32);
typedef void (Unk_ov068_02270780::*Unk_ov068_0226cd18_Fn)();

struct Unk_ov068_02270780_Ent {
    Unk_ov068_02270780_Fn fn;
    u32 flag;
};

struct Unk_ov068_02270780_Stat {
    u32 id;
    Unk_ov068_02270780_Fn1 fn;
};

struct Unk_ov068_0226cd18_Ent {
    u32 id;
    Unk_ov068_0226cd18_Fn fn;
};

struct Unk_ov068_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};
extern "C" {
void _ZN18Unk_ov068_0227078019func_ov068_0226c870Ev();
void _ZN18Unk_ov068_0227078019func_ov068_0226cb54Ei();
void _ZN18Unk_ov068_0227081019func_ov068_0226d1fcEv();
void _ZN18Unk_ov068_0227081019func_ov068_0226d150Ev();
void _ZN18Unk_ov068_0227078019func_ov068_0226cba4Ei();
void _ZN18Unk_ov068_0227081019func_ov068_0226d238Ev();
void _ZN18Unk_ov068_0227081019func_ov068_0226d1f8Ev();
void _ZN18Unk_ov068_0227081019func_ov068_0226d1d0Ev();
void _ZN18Unk_ov068_0227078019func_ov068_0226ccf4Ev();
void _ZN18Unk_ov068_0227078019func_ov068_0226ccd4Ev();
void _ZN18Unk_ov068_0227081019func_ov068_0226d1f0Ev();
void _ZN18Unk_ov068_0227081019func_ov068_0226d0f4Ev();
void _ZN18Unk_ov068_0227078019func_ov068_0226cbe4Ei();
void _ZN18Unk_ov068_0227081019func_ov068_0226d2b0Ev();
void _ZN18Unk_ov068_0227078019func_ov068_0226c63cEv();
void _ZN18Unk_ov068_0227081019func_ov068_0226d2ecEv();
void _ZN18Unk_ov068_0227078019func_ov068_0226c9b0Ev();
void _ZN18Unk_ov068_0227081019func_ov068_0226d1f4Ev();
void _ZN18Unk_ov068_0227078019func_ov068_0226c530Ev();
void _ZN18Unk_ov068_0227078019func_ov068_0226c4d8Ev();
extern void *data_ov068_0227037c[2];
extern void *data_ov068_02270384[2];
extern void *data_ov068_0227038c[2];
extern void *data_ov068_02270394[2];
extern void *data_ov068_0227039c[2];
extern void *data_ov068_022703a4[2];
extern void *data_ov068_022703ac[2];
extern void *data_ov068_022703b4[2];
extern void *data_ov068_022703bc[2];
extern void *data_ov068_022703c4[2];
extern void *data_ov068_022703cc[2];
extern void *data_ov068_022703d4[2];
extern void *data_ov068_022703dc[2];
extern void *data_ov068_022703e4[2];
extern void *data_ov068_022703ec[2];
extern void *data_ov068_022703f4[2];
extern void *data_ov068_022703fc[2];
extern void *data_ov068_02270404[2];
extern void *data_ov068_0227040c[2];
extern void *data_ov068_02270414[2];
extern void *data_ov068_0227041c[2];
extern void *data_ov068_02270424[2];
extern void *data_ov068_0227042c[2];
extern char data_ov068_02270364[4];
extern char data_ov068_02270368[4];
extern char data_ov068_0227036c[4];
extern char data_ov068_02270370[4];
extern char data_ov068_02270374[4];
extern char data_ov068_02270378[4];
extern char data_ov068_02270434[11];
extern char data_ov068_02270440[11];
extern char data_ov068_0227044c[11];
extern char data_ov068_02270458[11];
extern char data_ov068_02270464[11];
extern char data_ov068_02270470[11];
extern char data_ov068_0227047c[11];
extern char data_ov068_02270488[11];
extern char data_ov068_02270494[23];
extern char data_ov068_02270584[27];
extern char data_ov068_022704ac[23];
extern char data_ov068_022705a0[27];
extern char data_ov068_022704c4[23];
extern char data_ov068_022705bc[27];
extern char data_ov068_022704dc[23];
extern char data_ov068_022705d8[27];
extern char data_ov068_022704f4[23];
extern char data_ov068_022705f4[27];
extern char data_ov068_0227050c[23];
extern char data_ov068_02270610[27];
extern char data_ov068_02270524[23];
extern char data_ov068_0227062c[27];
extern char data_ov068_0227053c[23];
extern char data_ov068_02270648[27];
extern Unk_ov068_Scene_Entry data_ov068_0227056c;
Unk_ov068_02270810 *func_ov068_0226d788();
extern char *data_ov068_02270554[6];
extern const char *data_ov068_02270664[9];
extern const char *data_ov068_02270688[9];
extern const char *data_ov068_022706d0[9];
extern const u8 data_ov068_0226f1a8[4];
extern const u16 data_ov068_0226f1ac[10];
extern Unk_ov068_0226d39c_Entry data_ov068_02271200[5];
extern Unk_ov068_02270780_Ent data_ov068_02270730[6];
}

namespace sA {
extern "C" {
extern u16 data_020c6cc8;

void PlayerData_GetCurrent();
Unk_ov068_0226c3b4_Vec *func_020947f0(s32 a);
void func_0204ee10(s32 *a, s32 *b, Unk_ov068_0226c3b4_Vec *v);
BOOL PlayerActor_IsInAction(s32 a, s32 b);
void TalkRequest_AddPlayerTalk7(void *p, s32 a);
BOOL func_020e7500(void *p);
void func_0201a664(void *self, s32 a, s16 b, s16 c, s16 d, s16 e);
void TalkWindowState_setNextMessage(TalkWindowState *self, u8 *cmd, const char *tbl);
BOOL func_02099014(u16 *p, s32 a);
void func_0202e1cc(s32 a, s32 b);
void func_02034d84(u16 a);
void func_02064460(s32 a, s32 b);
void func_02064478(s32 a, s32 b, s32 c);
Unk_ov068_0226c63c_Msg *Snd_GetBeatState();
void func_020199e0(void *self, u32 a);
void func_020199d0(void *self);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void func_02019614(void *self, u32 a, u16 b);
void func_020539a0(void *self);
void MI_CpuCopy8(void *src, void *dst, u32 n);
s32 *TalkWindow_Get(s32 a);
s32 func_02063b8c(s32 a);
s16 *func_0209c37c(s32 a, s32 b);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void *func_0206ecf0();
void func_020a78a4(void *a, void *b, u32 c);
void MsgString_fromEncoded(void *a, void *b, s32 c, s32 d);
void TalkWindowState_setNamedSlot(TalkWindowState *self, s32 a, void *b, u32 c);
BOOL func_0206ed18();
u32 func_0206ed38();
s32 func_02098eb0(u16 *p);
void func_02099064();
u32 TalkWindowState_getChoiceList(TalkWindowState *self);
u32 ChoiceList_getResult(u32 a);

void func_ov004_0223f350();
void func_ov004_0223f3cc();
void func_ov004_0223f850();
void func_ov004_0223f2f4();
void func_ov004_0223f860();
void func_ov004_0223f31c(s32 a);
void func_ov004_0223f3a4();
BOOL func_ov004_0223f2c8();
void func_ov004_0223f870();
void func_ov004_0223f3f4();
}

}
namespace sB {
extern "C" {
void *PlayerData_GetCurrent();
void TalkRequest_EndTalkWith(void *p);
void Unk_020d77a4_setTalkRequest(void *p, void *q);
void Unk_020d77a4_setNpcHandle(void *p, u16 *q);
u32 func_020ae02c(void *p);
void ProcBase_RequestDelete(void *p);
void func_02034d70(u32 a);
void func_02034d18();
void func_02034d04();
void func_02034dd0(u32 a, u32 b, u32 c);
void Camera_SetModeDefault();
s32 PlayerActor_IsInAction(s32 a, s32 b);
void func_ov004_02224a38(s32 a);
void func_ov004_0223f880();
void func_ov004_0223f350();
void func_ov004_022264b8(void *p);
void func_ov004_022264a0();
void func_02105f90(s32 a, s32 b);
void func_0201610c(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void func_02053848(void *a, s32 b, s32 c);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void func_0201a6c0(void *self, u8 a, s32 b, s32 c, void *v, s32 d, s32 e, u8 f);
void func_0201a664(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0201a730(void *self, s32 a);
void func_02014198(void *self, u8 a, u8 b);
s32 func_02014220(void *self);
void func_0201ad34(void *self, s32 a);
void func_0201ad30(void *self, s32 a);
void func_0201ad2c(void *self, s32 a);
void func_0209d498(void *p);
s32 func_02072e88(void *g, s32 v);
s32 func_0209ea50(void *p);
s32 func_0209cef4();
s32 func_02085f7c(void *p);
s32 func_02085f98(void *p);
s32 func_02085f90(void *p);
s32 func_02085fa0(void *p);
s32 Actor_spawn(u32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_0202e1cc(s32 a, s32 b);
s32 func_02063b8c(s32 a);
s32 func_02098eb0(u16 *p);
s32 func_02098044(void *p, s32 a);
void func_0209801c(void *p, s32 a);
void func_02015170(void *self, u32 a, u32 b);
void func_020151d0(void *self, u32 a);
void func_0201578c(void *self, u16 *p, s32 a, s32 b);
void TalkWindowState_setNamedSlot(void *self, s32 a, void *p, s32 b);
void func_020a78a4(void *dst, void *src, s32 n);
void MsgString_fromEncoded(void *a, void *b, s32 c, s32 d);
extern u16 data_020c6cc8;
extern s16 data_020c6cc4;
extern s16 data_020c6cbc;
extern s32 data_020c6d1c;
extern u32 gVec3Zero[];
extern u32 data_021ed104;
extern u8 data_021ed315[];
extern u8 data_021e58a7[];
extern u8 data_020cbb18[];
}

}

namespace sC {
extern "C" {
s32 PlayerData_GetCurrent();
s32 ItemPick_FromRange(u16 *out, u32 lo, u32 n, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
}
static inline BOOL Unk_ov068_0226c340_R(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= 0x1323 && a <= 0x1368) r = TRUE;
    return r;
}
}
extern "C" u16 func_ov068_0226c340(void *self);

extern "C" void *data_ov068_022703d4[2] = {(void *)_ZN18Unk_ov068_0227081019func_ov068_0226d0f4Ev, 0};
extern "C" char data_ov068_0227062c[27] = "npc_sp/model/mof_tex.nsbtx";
extern "C" char data_ov068_02270648[27] = "npc_sp/model/end_tex.nsbtx";
extern "C" void *data_ov068_0227037c[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226c870Ev, 0};
extern "C" char data_ov068_0227047c[11] = "sp_npc_cf3";
extern "C" char data_ov068_02270584[27] = "npc_sp/model/pga_tex.nsbtx";
extern "C" void *data_ov068_0227039c[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226cba4Ei, 0};
extern "C" char data_ov068_02270494[23] = "npc_sp/model/pga.nsbmd";
extern "C" char data_ov068_02270374[4] = "m.5";
extern "C" void *data_ov068_02270414[2] = {(void *)_ZN18Unk_ov068_0227081019func_ov068_0226d1f4Ev, 0};
extern "C" void *data_ov068_02270424[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226c4d8Ev, 0};
extern "C" void *data_ov068_02270394[2] = {(void *)_ZN18Unk_ov068_0227081019func_ov068_0226d150Ev, 0};
extern "C" char data_ov068_0227036c[4] = "m.4";
extern "C" char data_ov068_022705a0[27] = "npc_sp/model/pgb_tex.nsbtx";
extern "C" char data_ov068_022704ac[23] = "npc_sp/model/pgb.nsbmd";


// ---------------------------------------------------------------------------------------------------------------------

extern "C" Unk_ov068_02270810 *func_ov068_0226d788() {
    using namespace sB;
    return new Unk_ov068_02270810();
}

BOOL Unk_ov068_02270810::vfunc_04() {
    using namespace sB;
    Unk_ov068_0226ce70_Date d;
    u16 h;
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    Unk_020d77a4_setTalkRequest(this, &unk_65c);
    unk_65c.func_ov068_0226d080((Unk_ov068_0226ccd4_Owner *)this);
    unk_4cc.unk_45 = 0;
    d.a = 0;
    d.b = 0;
    func_0209d498(&d);
    u8 mo = ((u8 *)&d)[2];
    u8 dy = ((u8 *)&d)[1];
    unk_72c = 8;
    if (func_02072e88(*(void **)data_020cbb18, *(s32 *)(*(u8 **)data_020cbb18 + 0x64))) {
        return TRUE;
    }
    if (func_0209ea50(data_021ed315)) {
        return TRUE;
    }
    u8 *g = data_021e58a7;
    switch (func_0209cef4()) {
    case 6:
        if ((mo == 0x13 && dy >= 0x1e) || mo == 0x14 || mo == 0x15 || mo == 0x16 || (mo == 0x17 && dy <= 0x3b)) {
            unk_72c = 7;
            Actor_spawn(0x10, 0, 0, 0, 0);
        }
        break;
    case 0:
        if (mo == 0x15 && dy < 0x37) {
            unk_72c = 1;
        }
        break;
    default:
        if (mo == 0x15 && dy < 0x37) {
            unk_72c = 1;
        }
        if (mo == 0x17 && dy <= 0x3b) {
            if (func_02085f7c(g)) {
                if (func_020ae02c(&data_021ed104) == 3) {
                    unk_72c = 2;
                }
            }
        }
        break;
    }
    if (mo == 0xc || (mo == 0xd && dy < 0x1e)) {
        switch (func_02085f98(g)) {
        case 2:
            unk_72c = 5;
            break;
        case 1:
            unk_72c = 4;
            break;
        case 3:
            unk_72c = 6;
            break;
        case 4:
            unk_72c = 3;
            break;
        }
    }
    if ((mo == 0xe && dy >= 0x1e) || (mo == 0xf && dy <= 0x3b)) {
        switch (func_02085f90(g)) {
        case 2:
            unk_72c = 5;
            break;
        case 1:
            unk_72c = 4;
            break;
        case 3:
            unk_72c = 6;
            break;
        case 4:
            unk_72c = 3;
            break;
        }
    }
    if (mo == 6 && dy < 0x37 && func_02085fa0(g)) {
        unk_72c = 0;
    }
    h = data_ov068_0226f1ac[unk_72c];
    Unk_020d77a4_setNpcHandle(this, &h);
    if (unk_72c == 7) {
        setInteractionRange(0x5000);
        unk_5c = 0xf000;
        unk_64 = 0x13000;
        unk_8e = 0;
        unk_94 = 0;
        func_0201ad34(&unk_2a0, 0x102);
        func_0201ad30(&unk_2a0, 0x102);
        func_0201ad2c(&unk_2a0, 0x102);
        func_0201a6c0(&unk_3b0, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    } else {
        func_0201ad34(&unk_2a0, 0x1e);
        func_0201ad30(&unk_2a0, 0x1e);
        func_0201ad2c(&unk_2a0, 0x1e);
        func_0201a730(&unk_3b0, 0);
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::vfunc_00() {
    using namespace sB;
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    if (unk_72c == 7) {
        func_02105f90(*(s32 *)((u8 *)this + 0x148), 3);
    }
    func_ov068_0226d39c(0);
    unk_4cc.unk_1c |= 2;
    if (unk_72c == 3) {
        func_0201610c(&unk_334, this, 0x142, 0, 0, 0x1000, 0, 1);
        func_02053848(&unk_ec, 0xc, 0xe);
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::vfunc_0c() {
    using namespace sB;
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    if (unk_72c == 7) {
        func_ov004_0223f350();
    }
    return TRUE;
}

u8 *Unk_ov068_02270810::getTexturePath() {
    using namespace sB;
    return (u8 *)data_ov068_022706d0[unk_72c];
}

u8 *Unk_ov068_02270810::getModelPath() {
    using namespace sB;
    return (u8 *)data_ov068_02270688[unk_72c];
}

BOOL Unk_ov068_02270810::updateAct() {
    using namespace sB;
    BOOL result = FALSE;
    if (data_ov068_02271200[unk_658].b != NULL) {
        result = (this->*data_ov068_02271200[unk_658].b)();
    }
    return result;
}

void Unk_ov068_02270810::func_ov068_0226d39c(s32 state) {
    using namespace sB;
    BOOL ok = TRUE;
    if (data_ov068_02271200[state].a != NULL) {
        ok = (this->*data_ov068_02271200[state].a)();
    }
    if (ok) {
        unk_658 = state;
    }
}

BOOL Unk_ov068_02270810::func_ov068_0226d2ec() {
    using namespace sB;
    if (unk_72c == 7) {
        func_0201a6c0(&unk_3b0, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        func_020195c8(&unk_564, 1, 0x105, 0, data_020c6cc8, 0);
        func_0201a664(&unk_3b0, 0, -0xc18, 0, data_020c6cc4, data_020c6cbc);
    } else {
        func_0201a6c0(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d2b0() {
    using namespace sB;
    if (unk_72c == 8) {
        ProcBase_RequestDelete(this);
        return TRUE;
    }
    if (unk_72c == 7) {
        func_ov068_0226c3b4();
    } else {
        func_ov004_022264b8(this);
    }
    if (unk_72c == 6) {
        func_ov004_022264a0();
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d238() {
    using namespace sB;
    if (unk_72c == 7) {
        func_020195c8(&unk_564, 1, 0x102, 0, data_020c6cc8, 0);
    }
    func_0201a6c0(&unk_3b0, 4, 0, 0, gVec3Zero, 4, data_020c6d1c, 0);
    func_02014198(&unk_618, 0, 0);
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d1fc() {
    using namespace sB;
    if (func_02014220(&unk_618)) {
        return TRUE;
    }
    if (func_02014220(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        func_ov068_0226d39c(4);
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d1f8() {
    using namespace sB; return TRUE; }

BOOL Unk_ov068_02270810::func_ov068_0226d1f4() {
    using namespace sB; return TRUE; }

BOOL Unk_ov068_02270810::func_ov068_0226d1f0() {
    using namespace sB; return TRUE; }

BOOL Unk_ov068_02270810::func_ov068_0226d1d0() {
    using namespace sB;
    if (PlayerActor_IsInAction(0x28, 4)) {
        func_ov068_0226d39c(2);
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d150() {
    using namespace sB;
    func_020195c8(&unk_564, 1, 0x102, 0, data_020c6cc8, 0);
    func_ov004_0223f880();
    func_0201a664(&unk_3b0, 0, 0, 0x1000, data_020c6cc4, data_020c6cbc);
    func_02014198(&unk_618, 0, 1);
    func_02034dd0(0x10, 0xf, 0);
    func_02034d04();
    return TRUE;
}

// ---- owner ----
BOOL Unk_ov068_02270810::func_ov068_0226d0f4() {
    using namespace sB;
    if (func_02014220(&unk_618)) {
        return TRUE;
    }
    if (func_02014220(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        if (PlayerActor_IsInAction(0x28, 4)) {
            func_ov004_02224a38(0);
        }
        func_02034d70(0x10);
        func_02034d18();
        Camera_SetModeDefault();
        func_ov068_0226d39c(4);
    }
    return TRUE;
}

Unk_ov068_02270780::Unk_ov068_02270780() {
    func_020f8134(&unk_b8);
}

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov068_02270780::~Unk_ov068_02270780() {}

void Unk_ov068_02270780::func_ov068_0226d080(Unk_ov068_0226ccd4_Owner *o) {
    using namespace sB;
    vfunc_08();
    unk_b0 = (Unk_ov068_02270810 *)o;
}

void Unk_ov068_02270780::func_ov068_0226d078(s32 v) {
    using namespace sB; unk_ac = v; }

s32 Unk_ov068_02270780::func_ov068_0226d070() {
    using namespace sB; return unk_ac; }

void Unk_ov068_02270780::vfunc_78(Unk_ov068_0226ce70_Out *out) {
    using namespace sB;
    u16 h0, h2, h4, h6;
    unk_b8.unk_00 = -1;
    unk_b8.unk_01 = -1;
    unk_b8.unk_02 = -1;
    unk_b8.unk_03 = -1;
    unk_b8.unk_04 = -1;
    void *p = PlayerData_GetCurrent();
    out->unk_00 = data_ov068_02270664[unk_b0->unk_72c];
    if (unk_b0->unk_72c == 7) {
        if (func_ov068_0226d070() == 0) {
            Unk_ov068_0226ce70_Date d;
            d.a = 0;
            d.b = 0;
            func_0209d498(&d);
            u8 m = ((u8 *)&d)[2];
            if (m < 0x14 && m >= 0x13) {
                h0 = 0x3530;
                s32 r = func_02098eb0(&h0);
                BOOL ok = FALSE;
                if (r != -1) {
                    ok = TRUE;
                }
                if (ok) {
                    out->unk_04 = 0xe;
                } else {
                    out->unk_04 = 0x13;
                }
            } else if (unk_b0->unk_742 != 0) {
                out->unk_04 = 0;
            } else if (func_0202e1cc(0xd, 0) != 0) {
                h2 = 0x3530;
                s32 r = func_02098eb0(&h2);
                BOOL ok = FALSE;
                if (r != -1) {
                    ok = TRUE;
                }
                if (ok) {
                    out->unk_04 = 0xe;
                } else {
                    out->unk_04 = 0x12;
                }
            } else if (func_02098044(p, 7) == 0) {
                out->unk_04 = 1;
                func_0209801c(p, 7);
            } else if (func_0202e1cc(0xc, 1) == 0) {
                out->unk_04 = 2;
            } else {
                out->unk_04 = 3;
            }
        } else {
            if (func_ov068_0226d070() == 1) {
                ItemName a;
                EncodedString16Buf b;
                func_020a78a4(&b, unk_b0->unk_730, 0x10);
                MsgString_fromEncoded(&a, &b, 0, 0);
                TalkWindowState_setNamedSlot(unk_3c, 0, &a, 7);
            } else if (func_ov068_0226d070() == 2) {
                h4 = unk_b0->unk_652;
                func_0201578c((u32)&h4, 1, 7);
                h6 = unk_b0->unk_652;
                func_0201578c((u32)&h6, 2, 7);
            }
            out->unk_04 = data_ov068_0226f1a8[unk_ac];
            out->unk_00 = data_ov068_02270664[unk_b0->unk_72c];
        }
    } else {
        if (func_0202e1cc(unk_b0->unk_72c + 0x21, 1) == 0) {
            out->unk_04 = func_02063b8c(3);
        } else {
            out->unk_04 = func_02063b8c(5) + 3;
        }
    }
}

void Unk_ov068_02270780::vfunc_10(s32 a) {
    using namespace sB;
    if (unk_b0->unk_72c == 7) {
        func_ov068_0226cdcc(a);
    }
}

void Unk_ov068_02270780::func_ov068_0226cdcc(s32 a) {
    using namespace sB;
    switch (unk_1e) {
    case 12:
    case 13: {
        u16 v = unk_b0->unk_652;
        func_0201578c((u32)&v, 1, 7);
        break;
    }
    case 11: {
        ItemName a;
        EncodedString16Buf b;
        func_020a78a4(&b, unk_b0->unk_730, 0x10);
        MsgString_fromEncoded(&a, &b, 0, 0);
        TalkWindowState_setNamedSlot(unk_3c, 0, &a, 7);
        break;
    }
    }
}

void Unk_ov068_02270780::vfunc_14(s32 a) {
    using namespace sB;
    if (unk_b0->unk_72c == 7) {
        func_ov068_0226cd18(a);
    }
}

void Unk_ov068_02270780::func_ov068_0226cd18(s32 a) {
    using namespace sB;
    static Unk_ov068_0226cd18_Ent tbl[3] = {
        {7, *(Unk_ov068_0226cd18_Fn *)data_ov068_022703bc},
        {6, *(Unk_ov068_0226cd18_Fn *)data_ov068_022703c4},
        {9, *(Unk_ov068_0226cd18_Fn *)data_ov068_0227042c},
    };
    s32 i = 0;
    u8 *pc = &unk_1e;
    for (; (u32)i < 3; i++) {
        u32 off = i * 12;
        u32 id = tbl[i].id;
        if (id == *pc) {
            Unk_ov068_0226cd18_Ent *e = (Unk_ov068_0226cd18_Ent *)((u32)tbl + off);
            (this->*e->fn)();
        }
    }
}

extern "C" const char *data_ov068_022706d0[9] = {data_ov068_02270584, data_ov068_022705a0, data_ov068_022705bc, data_ov068_022705d8, data_ov068_022705f4, data_ov068_02270610, data_ov068_0227062c, data_ov068_02270648, data_ov068_02270648};
extern "C" void *data_ov068_022703bc[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226ccf4Ev, 0};
extern "C" void *data_ov068_022703c4[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226ccd4Ev, 0};
extern const u16 data_ov068_0226f1ac[10] = {0xd006, 0xd007, 0xd017, 0xd00d, 0xd014, 0xd024, 0xd011, 0xd01d, 0xd01d, 0x0000};
extern "C" char data_ov068_02270488[11] = "sp_npc_cf4";
extern "C" void *data_ov068_02270384[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226cb54Ei, 0};
extern "C" void *data_ov068_022703a4[2] = {(void *)_ZN18Unk_ov068_0227081019func_ov068_0226d238Ev, 0};
extern "C" void *data_ov068_022703b4[2] = {(void *)_ZN18Unk_ov068_0227081019func_ov068_0226d1d0Ev, 0};
extern "C" char data_ov068_022704f4[23] = "npc_sp/model/wip.nsbmd";
extern "C" Unk_ov068_Scene_Entry data_ov068_0227056c = {(void *(*)())func_ov068_0226d788, 0x66, 0x6c, {0, 0x5000, 0x5000, 0x3e800}};
extern const u8 data_ov068_0226f1a8[4] = {0x00, 0x09, 0x06, 0x00};
extern "C" void *data_ov068_0227042c[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226ccd4Ev, 0};
extern "C" char data_ov068_02270470[11] = "sp_npc_cf2";


void Unk_ov068_02270780::func_ov068_0226ccf4() {
    using namespace sB;
    func_02015170(this, 0xd, 0);
    func_020151d0(this, 2);
    func_ov068_0226cab8(1);
}

void Unk_ov068_02270780::func_ov068_0226ccd4() {
    using namespace sB;
    unk_3c->unk_14 = 0;
    unk_b0->unk_740 = 0x2d;
    func_ov068_0226cab8(2);
}

void Unk_ov068_02270780::vfunc_18(s32 a) {
    using namespace sA;
    if (unk_b0->unk_72c == 7) {
        func_ov068_0226cbf8(a);
    }
}

void Unk_ov068_02270780::func_ov068_0226cbf8(s32 a) {
    using namespace sA;
    static Unk_ov068_02270780_Stat tbl[5] = {
        {1, *(Unk_ov068_02270780_Fn1 *)data_ov068_022703dc},
        {2, *(Unk_ov068_02270780_Fn1 *)data_ov068_02270404},
        {3, *(Unk_ov068_02270780_Fn1 *)data_ov068_0227040c},
        {5, *(Unk_ov068_02270780_Fn1 *)data_ov068_02270384},
        {0xe, *(Unk_ov068_02270780_Fn1 *)data_ov068_0227039c},
    };
    u32 i = 0;
    u8 *pe = &unk_1e;
    goto test;
loop:
    u32 idv = tbl[i].id;
    u32 off = i * 12;
    if (idv == *pe) {
        u32 x = ChoiceList_getResult(TalkWindowState_getChoiceList(unk_3c));
        Unk_ov068_02270780_Fn1 *fp = (Unk_ov068_02270780_Fn1 *)((u8 *)tbl + off + 4);
        (this->*(*fp))(x);
    }
    i++;
test:
    if (i < 5) goto loop;
}

extern "C" void *data_ov068_022703dc[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226cbe4Ei, 0};
extern "C" char data_ov068_022705f4[27] = "npc_sp/model/wip_tex.nsbtx";
extern "C" void *data_ov068_022703f4[2] = {(void *)_ZN18Unk_ov068_0227081019func_ov068_0226d2ecEv, 0};
extern "C" char data_ov068_0227053c[23] = "npc_sp/model/end.nsbmd";
extern "C" char data_ov068_02270364[4] = "m.2";
extern "C" const char *data_ov068_02270664[9] = {data_ov068_0227044c, data_ov068_02270470, data_ov068_0227047c, data_ov068_02270488, data_ov068_02270458, data_ov068_02270440, data_ov068_02270464, data_ov068_02270434, data_ov068_02270464};
extern "C" void *data_ov068_0227038c[2] = {(void *)_ZN18Unk_ov068_0227081019func_ov068_0226d1fcEv, 0};
extern "C" const char *data_ov068_02270688[9] = {data_ov068_02270494, data_ov068_022704ac, data_ov068_022704c4, data_ov068_022704dc, data_ov068_022704f4, data_ov068_0227050c, data_ov068_02270524, data_ov068_0227053c, data_ov068_0227053c};
extern "C" char data_ov068_02270370[4] = "m.1";
extern "C" char data_ov068_02270524[23] = "npc_sp/model/mof.nsbmd";
extern "C" char data_ov068_02270434[11] = "sp_npc_dog";
extern "C" char data_ov068_022704dc[23] = "npc_sp/model/ott.nsbmd";
extern "C" void *data_ov068_022703cc[2] = {(void *)_ZN18Unk_ov068_0227081019func_ov068_0226d1f0Ev, 0};
extern "C" char data_ov068_022705bc[27] = "npc_sp/model/poo_tex.nsbtx";
extern "C" char data_ov068_022705d8[27] = "npc_sp/model/ott_tex.nsbtx";
extern "C" Unk_ov068_02270780_Ent data_ov068_02270730[6] = {{NULL, 0}, {*(Unk_ov068_02270780_Fn *)data_ov068_022703fc, 0}, {*(Unk_ov068_02270780_Fn *)data_ov068_0227037c, 1}, {*(Unk_ov068_02270780_Fn *)data_ov068_022703ec, 1}, {*(Unk_ov068_02270780_Fn *)data_ov068_0227041c, 1}, {*(Unk_ov068_02270780_Fn *)data_ov068_02270424, 1}};
extern "C" char data_ov068_02270464[11] = "sp_npc_cf7";
extern "C" char data_ov068_02270378[4] = "m.3";
extern "C" void *data_ov068_022703e4[2] = {(void *)_ZN18Unk_ov068_0227081019func_ov068_0226d2b0Ev, 0};
extern "C" char data_ov068_02270610[27] = "npc_sp/model/xct_tex.nsbtx";
extern "C" char data_ov068_0227044c[11] = "sp_npc_cf1";
extern "C" void *data_ov068_0227041c[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226c530Ev, 0};
extern "C" char *data_ov068_02270554[6] = {data_ov068_02270368, data_ov068_02270370, data_ov068_02270364, data_ov068_02270378, data_ov068_0227036c, data_ov068_02270374};
extern "C" char data_ov068_02270440[11] = "sp_npc_cf6";
extern "C" void *data_ov068_022703fc[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226c9b0Ev, 0};
extern "C" char data_ov068_02270458[11] = "sp_npc_cf5";
extern "C" char data_ov068_0227050c[23] = "npc_sp/model/xct.nsbmd";
extern "C" char data_ov068_02270368[4] = "m.0";
extern "C" void *data_ov068_02270404[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226cbe4Ei, 0};
extern "C" void *data_ov068_0227040c[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226cbe4Ei, 0};
extern "C" void *data_ov068_022703ec[2] = {(void *)_ZN18Unk_ov068_0227078019func_ov068_0226c63cEv, 0};
extern "C" void *data_ov068_022703ac[2] = {(void *)_ZN18Unk_ov068_0227081019func_ov068_0226d1f8Ev, 0};
extern "C" Unk_ov068_0226d39c_Entry data_ov068_02271200[5] = {{*(Unk_ov068_0226d39c_Fn *)data_ov068_022703f4, *(Unk_ov068_0226d39c_Fn *)data_ov068_022703e4}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_022703a4, *(Unk_ov068_0226d39c_Fn *)data_ov068_0227038c}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_02270394, *(Unk_ov068_0226d39c_Fn *)data_ov068_022703d4}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_022703cc, *(Unk_ov068_0226d39c_Fn *)data_ov068_022703b4}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_022703ac, *(Unk_ov068_0226d39c_Fn *)data_ov068_02270414}};
extern "C" char data_ov068_022704c4[23] = "npc_sp/model/poo.nsbmd";


void Unk_ov068_02270780::func_ov068_0226cbe4(s32 a) {
    using namespace sA;
    if (a == 0) {
        unk_b0->unk_742 = 1;
    }
}

void Unk_ov068_02270780::func_ov068_0226cba4(s32 a) {
    using namespace sA;
    u16 h0;
    u16 h1;
    if (a == 0) {
        h0 = 0x3530;
        if (func_02098eb0(&h0) != -1) {
            func_02099064();
            h1 = 0x4a34;
            func_02099014(&h1, 0);
        }
    }
}

void Unk_ov068_02270780::func_ov068_0226cb54(s32 a) {
    using namespace sA;
    if (a == 0) {
        unk_b0->unk_744 = 1;
    } else {
        unk_b0->unk_744 = 0;
        unk_b0->unk_743 = 0;
        unk_b0->unk_652 = func_ov068_0226c340(unk_b0);
    }
}

void Unk_ov068_02270780::vfunc_80() {
    using namespace sA;
    s32 i = unk_b4;
    if (((u8 *)&data_ov068_02270730[0].flag)[i * 12] != 0) {
        Unk_ov068_02270780_Ent *e = &data_ov068_02270730[i];
        if (e->fn != 0) {
            (this->*e->fn)();
        }
    }
}

void Unk_ov068_02270780::vfunc_84() {
    using namespace sA;
    s32 i = unk_b4;
    if (((u8 *)&data_ov068_02270730[0].flag)[i * 12] == 0) {
        Unk_ov068_02270780_Ent *e = &data_ov068_02270730[i];
        if (e->fn != 0) {
            (this->*e->fn)();
            func_ov068_0226cab8(0);
        }
    }
}

void Unk_ov068_02270780::func_ov068_0226cab8(s32 state) {
    using namespace sA;
    unk_b4 = state;
}

void Unk_ov068_02270780::func_ov068_0226c9b0() {
    using namespace sA;
    u8 cmd;
    u16 tmp;
    MI_CpuCopy8(func_0206ecf0(), unk_b0->unk_730, 0x10);
    ItemName objA;
    EncodedString16Buf objB;
    func_020a78a4(&objB, unk_b0->unk_730, 0x10);
    MsgString_fromEncoded(&objA, &objB, 0, 0);
    TalkWindowState_setNamedSlot(unk_3c, 0, &objA, 7);
    if (func_0206ed18()) {
        u32 v;
        u16 h;
        unk_b0->unk_743 = 0;
        v = func_0206ed38();
        if (v < 0x46) {
            h = v + 0x1323;
        } else {
            h = 0x1323;
        }
        unk_b0->unk_652 = h;
        tmp = unk_b0->unk_652;
        func_0201578c((u32)&tmp, 1, 7);
    } else {
        unk_b0->unk_743 = 1;
        unk_b0->unk_652 = func_ov068_0226c340(unk_b0);
    }
    cmd = 8;
    TalkWindowState_setNextMessage(unk_3c, &cmd, data_ov068_02270664[unk_b0->unk_72c]);
}

void Unk_ov068_02270780::func_ov068_0226c870() {
    using namespace sA;
    Unk_ov068_0226c870_Pad pad;
    s32 *q = TalkWindow_Get(0);
    if (q[1] == 5) {
        if (unk_b0->unk_740 == 0x2d) {
            func_02064460(0, 0x1e);
            func_02064478(1, 1, 0);
            func_0201a664(&unk_b0->unk_3b0, 0, -0xc18, 0, 0x276, 0x276);
        }
        if (func_020e7500(&unk_b0->unk_740) == 0) {
            func_ov004_0223f870();
            unk_b0->unk_654 = 0;
            if (unk_b0->unk_743 != 0) {
                unk_b0->unk_654 = func_02063b8c(3) + 0xa9;
                s16 *r = func_0209c37c(0, 0x4e);
                if (*r != 0) {
                    r = func_0209c37c(0, 0x4e);
                    s32 t = *r - 1;
                    if (t < 0) {
                        t = 0;
                    } else if (t > 3) {
                        t = 3;
                    }
                    unk_b0->unk_654 = t + 0xa9;
                }
            } else {
                u32 h = unk_b0->unk_652;
                s32 t;
                if (h >= 0x1323 && h <= 0x1368) {
                    t = h - 0x1323;
                } else {
                    t = -1;
                }
                unk_b0->unk_654 = t + 0x63;
            }
            func_02034e10(0xf, (u16)unk_b0->unk_654, 0x7f, 0);
            unk_b8.unk_14 = 0;
            func_ov004_0223f3f4();
            func_ov068_0226cab8(3);
        }
    }
}

void Unk_ov068_02270780::func_ov068_0226c63c() {
    using namespace sA;
    Unk_ov068_0226c63c_Msg *p = Snd_GetBeatState();
    func_ov004_0223f3cc();
    if (p != NULL) {
        if (p->unk_03 == 1 && unk_b8.unk_03 == 1) {
            goto end;
        }
        s32 t4 = p->unk_04;
        if (t4 != unk_b8.unk_04) {
            if (t4 == 2) {
                func_ov004_0223f850();
                func_ov004_0223f2f4();
            } else if ((u8)t4 <= 1) {
                func_ov004_0223f860();
            }
        }
        s32 t1 = p->unk_01;
        if (t1 != unk_b8.unk_01) {
            if (t1 == -1) {
                func_020199e0(&unk_b0->unk_2ac, (u32)data_ov068_02270368);
            } else {
                func_020199e0(&unk_b0->unk_2ac, (u32)data_ov068_02270554[t1]);
            }
        }
        s32 t2 = p->unk_02;
        if (t2 != unk_b8.unk_02 || p->unk_00 != unk_b8.unk_00) {
            if (t2 == 1) {
                func_0201a664(&unk_b0->unk_3b0, 0, 0, 0, 0x100, 0x200);
            } else {
                func_0201a664(&unk_b0->unk_3b0, 0, -0xc18, 0, 0x100, 0x200);
            }
            u16 v = data_020c6cc8;
            if (unk_b8.unk_14 == 0) {
                v = 0x28;
                unk_b8.unk_14 = 1;
            }
            s32 t0 = p->unk_00;
            if (t0 == 3) {
                func_020195c8(&unk_b0->unk_564, 2, 0x103, 0, v, 0);
            } else if (t0 == 4) {
                func_020195c8(&unk_b0->unk_564, 2, 0x104, 0, v, 0);
            }
        }
        if ((u8)(s8)(p->unk_00 - 3) <= 1) {
            unk_b0->unk_ec.unk_a4 = 0;
            unk_b0->unk_ec.unk_ac = p->unk_08;
            func_020539a0(&unk_b0->unk_ec);
            unk_b0->unk_ec.unk_ac = 0;
        }
        {
            s32 t3 = p->unk_03;
            if (t3 != unk_b8.unk_03) {
                if (t3 == 0) {
                    func_ov004_0223f3cc();
                    func_ov004_0223f31c(0);
                    func_ov004_0223f3a4();
                }
                if (p->unk_03 == 1) {
                    func_020199e0(&unk_b0->unk_2ac, (u32)data_ov068_02270368);
                    func_020199d0(&unk_b0->unk_2ac);
                    func_02019614(&unk_b0->unk_564, 2, 0x28);
                }
            }
        }
    }
end:
    func_ov004_0223f3a4();
    MI_CpuCopy8(p, &unk_b8, 0x14);
    if (func_ov004_0223f2c8()) {
        unk_b0->unk_740 = 0x14;
        func_ov068_0226cab8(4);
    }
}

void Unk_ov068_02270780::func_ov068_0226c530() {
    using namespace sA;
    u8 c0, c1, c2;
    u16 h;
    if (func_020e7500(&unk_b0->unk_740) == 0) {
        unk_b0->unk_742 = 0;
        if (unk_b0->unk_743 != 0) {
            c0 = 0xb;
            TalkWindowState_setNextMessage(unk_3c, &c0, data_ov068_02270664[unk_b0->unk_72c]);
        } else {
            h = unk_b0->unk_652;
            if (func_02099014(&h, 0) == 0) {
                c1 = 0xd;
                TalkWindowState_setNextMessage(unk_3c, &c1, data_ov068_02270664[unk_b0->unk_72c]);
            } else {
                func_0202e1cc(0xd, 1);
                c2 = 0xc;
                TalkWindowState_setNextMessage(unk_3c, &c2, data_ov068_02270664[unk_b0->unk_72c]);
            }
        }
        func_ov004_0223f350();
        func_02034d84(unk_b0->unk_654);
        unk_b0->unk_740 = 0x1e;
        func_02064460(1, 1);
        func_02064478(0, 0x1e, 0);
        func_ov068_0226cab8(5);
    }
}

void Unk_ov068_02270780::func_ov068_0226c4d8() {
    using namespace sA;
    if (func_020e7500(&unk_b0->unk_740) == 0) {
        func_0201a664(&unk_b0->unk_3b0, 0, 0, 0x1000, 0x276, 0x276);
        unk_3c->unk_08 = 1;
        func_ov068_0226cab8(0);
    }
}

BOOL Unk_ov068_02270810::vfunc_48() {
    using namespace sA;
    BOOL r = FALSE;
    if (unk_658 == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov068_02270810::vfunc_4c(s32 mode) {
    using namespace sA;
    switch (mode) {
    case 0:
        unk_65c.vfunc_08();
        unk_65c.func_02015ab0(getPlayerActor(4));
        if (unk_72c == 7) {
            unk_65c.func_ov068_0226d078(0);
        }
        func_ov068_0226d39c(1);
        break;
    case 1:
        unk_65c.vfunc_08();
        unk_65c.func_02015ab0(getPlayerActor(4));
        if (unk_744 != 0) {
            unk_65c.func_ov068_0226d078(1);
        } else {
            unk_65c.func_ov068_0226d078(2);
        }
        func_ov068_0226d39c(3);
        break;
    case 8:
        func_ov068_0226d39c(0);
        break;
    }
}

BOOL Unk_ov068_02270810::func_ov068_0226c3b4() {
    using namespace sA;
    if (unk_742 == 0) {
        return FALSE;
    }
    PlayerData_GetCurrent();
    Unk_ov068_0226c3b4_Vec v;
    v = *func_020947f0(4);
    s32 a = 0;
    s32 b = 0;
    func_0204ee10(&a, &b, &v);
    if (PlayerActor_IsInAction(0x25, 4) != 0 && a == 9 && b == 0xd) {
        TalkRequest_AddPlayerTalk7(this, 0);
    }
    return TRUE;
}

extern "C" u16 func_ov068_0226c340(void *self) {
    using namespace sC;
    u16 arr[2];
    ItemPick_FromRange(&arr[0], 0x1323, 0x46, 0, 0, (u32)PlayerData_GetCurrent(), 0, 10, 0, 1);
    if (!Unk_ov068_0226c340_R(&arr[0])) {
        ItemPick_FromRange(&arr[1], 0x1323, 0x46, 0, 0, 0, 1, 10, 0, 1);
        arr[0] = arr[1];
    }
    return arr[0];
}

u32 Unk_ov068_02270810::func_ov068_0226c334() {
    return unk_72c;
}
