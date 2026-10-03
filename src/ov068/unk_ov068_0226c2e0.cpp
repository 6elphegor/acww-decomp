// mwcc-version: 1.2/base
#include "types.h"
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define NpcTalkCtrl_requestTalk _ZN11NpcTalkCtrl11requestTalkEhh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define Unk_020d7710_setSubSceneKind _ZN12Unk_020d771015setSubSceneKindEjj
#define Unk_020d7710_openSubScene _ZN12Unk_020d771012openSubSceneEi
#define NpcAnimCtrl_playAnim _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcFaceAnim_resumeMouthMaterial _ZN11NpcFaceAnim19resumeMouthMaterialEv
#define NpcFaceAnim_setMouthTexture _ZN11NpcFaceAnim15setMouthTextureEj
#define NpcLookAt_setManualAngles _ZN9NpcLookAt15setManualAnglesEissss
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcLookAt_setPitchLimit _ZN9NpcLookAt13setPitchLimitEs
#define NpcMoveAnimSet_setRunAnim _ZN14NpcMoveAnimSet10setRunAnimEi
#define NpcMoveAnimSet_setWalkAnim _ZN14NpcMoveAnimSet11setWalkAnimEi
#define NpcMoveAnimSet_setStandAnim _ZN14NpcMoveAnimSet12setStandAnimEi
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_setNpcHandle _ZN8NpcActor12setNpcHandleEPt
#define ThreeLayerAnimModel_updateLayers3 _ZN19ThreeLayerAnimModel13updateLayers3Ev
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define TalkWindowState_setNamedSlot _ZN15TalkWindowState12setNamedSlotEiPvj
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define RoostGuestRoll_hasLateGuest _ZN14RoostGuestRoll12hasLateGuestEv
#define RoostGuestRoll_getAfternoonGuest _ZN14RoostGuestRoll17getAfternoonGuestEv
#define RoostGuestRoll_getNoonGuest _ZN14RoostGuestRoll12getNoonGuestEv
#define RoostGuestRoll_hasMorningGuest _ZN14RoostGuestRoll15hasMorningGuestEv
#define Unk_02097ff4_setFlag _ZN12Unk_02097ff47setFlagEj
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define SaveRecord4_isDateActive _ZN11SaveRecord412isDateActiveEv
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
    void setItemNameSlot(u32 a, u32 b, u32 c);
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
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[4];
    s32 unk_ac;
    u8 pad_b0[0x2a0 - 0xec - 0xb0];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(NpcAnimCtrl, 0x1c);
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
MEMBER(NpcSpeechState, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(CollisionState, 0x30);
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
struct NpcActionCtrl {
    NpcActionCtrl();
    ~NpcActionCtrl();
    void requestAction(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL NpcTalkCtrl_isBusy();
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

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual ~NpcActor();
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
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();
    virtual s32 vfunc_a8();

    s32 getPlayerActor(u32 v);

    u16 unk_ea;
    ThreeLayerAnimModel unk_ec;
    Unk_0201ad3c unk_2a0;
    NpcFaceAnim unk_2ac;
    NpcAnimCtrl unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    NpcSpeechState unk_418;
    Unk_0201a13c unk_420;
    CollisionState unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    NpcActionCtrl unk_564;
    Unk_02014254 unk_618;
};

class SpNpcActor : public NpcActor {
public:
    SpNpcActor() {}
    virtual ~SpNpcActor();
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

class SpNpcRoostGuest;

// Scene object at +0x65c of SpNpcRoostGuest (vtable 0x02270780)
class SpNpcRoostGuestTalk : public SpNpcTalkRequest {
public:
    SpNpcRoostGuestTalk();
    virtual ~SpNpcRoostGuestTalk();
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
    void setScript(s32 state);
    void func_ov068_0226cb54(s32 a);
    void func_ov068_0226cba4(s32 a);
    void func_ov068_0226cbe4(s32 a);
    void func_ov068_0226cbf8(s32 a);
    void func_ov068_0226ccd4();
    void func_ov068_0226ccf4();
    void func_ov068_0226cd18(s32 a);
    void func_ov068_0226cdcc(s32 a);
    s32 getTalkMode();
    void setTalkMode(s32 v);
    void attachOwner(Unk_ov068_0226ccd4_Owner *o);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ SpNpcRoostGuest *unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ BgmBeatPhase unk_b8;
};

class SpNpcRoostGuest : public SpNpcActor {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL checkPlayerSeated();
    u32 getGuest();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    /* 0x652 */ u16 unk_652;
    /* 0x654 */ s32 unk_654;
    /* 0x658 */ s32 unk_658;
    /* 0x65c */ SpNpcRoostGuestTalk unk_65c;
    /* 0x72c */ s32 unk_72c;
    /* 0x730 */ u8 unk_730[0x10];
    /* 0x740 */ u16 unk_740;
    /* 0x742 */ u8 unk_742;
    /* 0x743 */ u8 unk_743;
    /* 0x744 */ u8 unk_744;
};

typedef BOOL (SpNpcRoostGuest::*Unk_ov068_0226d39c_Fn)();
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

typedef void (SpNpcRoostGuestTalk::*Unk_ov068_02270780_Fn)();
typedef void (SpNpcRoostGuestTalk::*Unk_ov068_02270780_Fn1)(s32);
typedef void (SpNpcRoostGuestTalk::*Unk_ov068_0226cd18_Fn)();

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
void _ZN19SpNpcRoostGuestTalk19func_ov068_0226c870Ev();
void _ZN19SpNpcRoostGuestTalk19func_ov068_0226cb54Ei();
void _ZN15SpNpcRoostGuest9mainAct01Ev();
void _ZN15SpNpcRoostGuest10setupAct02Ev();
void _ZN19SpNpcRoostGuestTalk19func_ov068_0226cba4Ei();
void _ZN15SpNpcRoostGuest10setupAct01Ev();
void _ZN15SpNpcRoostGuest10setupAct04Ev();
void _ZN15SpNpcRoostGuest9mainAct03Ev();
void _ZN19SpNpcRoostGuestTalk19func_ov068_0226ccf4Ev();
void _ZN19SpNpcRoostGuestTalk19func_ov068_0226ccd4Ev();
void _ZN15SpNpcRoostGuest10setupAct03Ev();
void _ZN15SpNpcRoostGuest9mainAct02Ev();
void _ZN19SpNpcRoostGuestTalk19func_ov068_0226cbe4Ei();
void _ZN15SpNpcRoostGuest9mainAct00Ev();
void _ZN19SpNpcRoostGuestTalk19func_ov068_0226c63cEv();
void _ZN15SpNpcRoostGuest10setupAct00Ev();
void _ZN19SpNpcRoostGuestTalk19func_ov068_0226c9b0Ev();
void _ZN15SpNpcRoostGuest9mainAct04Ev();
void _ZN19SpNpcRoostGuestTalk19func_ov068_0226c530Ev();
void _ZN19SpNpcRoostGuestTalk19func_ov068_0226c4d8Ev();
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
extern Unk_ov068_Scene_Entry sSpNpcRoostGuestProfile;
SpNpcRoostGuest *SpNpcRoostGuest_Create();
extern char *data_ov068_02270554[6];
extern const char *sRoostGuestMsgFiles[9];
extern const char *sRoostGuestModelPaths[9];
extern const char *sRoostGuestTexPaths[9];
extern const u8 data_ov068_0226f1a8[4];
extern const u16 sRoostGuestNpcHandles[10];
extern Unk_ov068_0226d39c_Entry sSpNpcRoostGuestActTable[5];
extern Unk_ov068_02270780_Ent data_ov068_02270730[6];
}

namespace sA {
extern "C" {
extern u16 data_020c6cc8;

void PlayerData_GetCurrent();
Unk_ov068_0226c3b4_Vec *func_020947f0(s32 a);
void FieldPos_ToUnit(s32 *a, s32 *b, Unk_ov068_0226c3b4_Vec *v);
BOOL PlayerActor_IsInAction(s32 a, s32 b);
void TalkRequest_AddPlayerTalk7(void *p, s32 a);
BOOL func_020e7500(void *p);
void NpcLookAt_setManualAngles(void *self, s32 a, s16 b, s16 c, s16 d, s16 e);
void TalkWindowState_setNextMessage(TalkWindowState *self, u8 *cmd, const char *tbl);
BOOL Pocket_AddItem(u16 *p, s32 a);
void Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
void Bgm_Release(u16 a);
void LightSwitch_SetOff(s32 a, s32 b);
void LightSwitch_SetOn(s32 a, s32 b, s32 c);
Unk_ov068_0226c63c_Msg *Snd_GetBeatState();
void NpcFaceAnim_setMouthTexture(void *self, u32 a);
void NpcFaceAnim_resumeMouthMaterial(void *self);
void NpcActionCtrl_requestPlayAnim(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void NpcActionCtrl_requestStand(void *self, u32 a, u16 b);
void ThreeLayerAnimModel_updateLayers3(void *self);
void MI_CpuCopy8(void *src, void *dst, u32 n);
s32 *TalkWindow_Get(s32 a);
s32 func_02063b8c(s32 a);
s16 *func_0209c37c(s32 a, s32 b);
void Bgm_Request(s32 a, s32 b, s32 c, s32 d);
void *MenuCtrl_GetText();
void func_020a78a4(void *a, void *b, u32 c);
void MsgString_fromEncoded(void *a, void *b, s32 c, s32 d);
void TalkWindowState_setNamedSlot(TalkWindowState *self, s32 a, void *b, u32 c);
BOOL MenuCtrl_IsResultOk();
u32 MenuCtrl_GetIndex();
s32 Pocket_FindItem(u16 *p);
void Pocket_RemoveItem();
u32 TalkWindowState_getChoiceList(TalkWindowState *self);
u32 ChoiceList_getResult(u32 a);

void KkShowFx_Stop();
void KkShowFx_Update();
void RoomCamera_KkShowResetShot();
void KkShowFx_CallUnk1de4();
void RoomCamera_KkShowPickShot();
void KkShowFx_SetParam(s32 a);
void KkShowFx_CallUnk1f70();
BOOL KkShowFx_GetState();
void RoomCamera_KkShowWideShot();
void KkShowFx_Start();
}

}
namespace sB {
extern "C" {
void *PlayerData_GetCurrent();
void TalkRequest_SetTargetDone(void *p);
void NpcActor_setTalkRequest(void *p, void *q);
void NpcActor_setNpcHandle(void *p, u16 *q);
u32 NookShop_GetLevel(void *p);
void ProcBase_RequestDelete(void *p);
void Bgm_ReleasePriority(u32 a);
void Bgm_EnableHourChime();
void Bgm_DisableHourChime();
void Bgm_RequestSilence(u32 a, u32 b, u32 c);
void Camera_SetModeDefault();
s32 PlayerActor_IsInAction(s32 a, s32 b);
void PlayerActor_LocalRequestStandUp(s32 a);
void Camera_SetMode18();
void KkShowFx_Stop();
void CafeCoffeeSet_StartEffectB(void *p);
void CafeCoffeeSet_SetFlagEF8();
void func_02105f90(s32 a, s32 b);
void NpcAnimCtrl_playAnim(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *a, s32 b, s32 c);
void NpcActionCtrl_requestPlayAnim(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void NpcLookAt_setTarget(void *self, u8 a, s32 b, s32 c, void *v, s32 d, s32 e, u8 f);
void NpcLookAt_setManualAngles(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void NpcLookAt_setPitchLimit(void *self, s32 a);
void NpcTalkCtrl_requestTalk(void *self, u8 a, u8 b);
s32 NpcTalkCtrl_isBusy(void *self);
void NpcMoveAnimSet_setStandAnim(void *self, s32 a);
void NpcMoveAnimSet_setWalkAnim(void *self, s32 a);
void NpcMoveAnimSet_setRunAnim(void *self, s32 a);
void Clock_GetDateTime(void *p);
s32 CommManager_isSlotActive(void *g, s32 v);
s32 SaveRecord4_isDateActive(void *p);
s32 Clock_GetWeekday();
s32 RoostGuestRoll_hasLateGuest(void *p);
s32 RoostGuestRoll_getNoonGuest(void *p);
s32 RoostGuestRoll_getAfternoonGuest(void *p);
s32 RoostGuestRoll_hasMorningGuest(void *p);
s32 Actor_spawn(u32 a, u32 b, u32 c, u32 d, u32 e);
s32 Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
s32 func_02063b8c(s32 a);
s32 Pocket_FindItem(u16 *p);
s32 Unk_02097ff4_testFlag(void *p, s32 a);
void Unk_02097ff4_setFlag(void *p, s32 a);
void Unk_020d7710_setSubSceneKind(void *self, u32 a, u32 b);
void Unk_020d7710_openSubScene(void *self, u32 a);
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
extern u8 gCommManager[];
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
extern "C" u16 RoostGuest_PickKKSong(void *self);

extern "C" void *data_ov068_022703d4[2] = {(void *)_ZN15SpNpcRoostGuest9mainAct02Ev, 0};
extern "C" char data_ov068_0227062c[27] = "npc_sp/model/mof_tex.nsbtx";
extern "C" char data_ov068_02270648[27] = "npc_sp/model/end_tex.nsbtx";
extern "C" void *data_ov068_0227037c[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226c870Ev, 0};
extern "C" char data_ov068_0227047c[11] = "sp_npc_cf3";
extern "C" char data_ov068_02270584[27] = "npc_sp/model/pga_tex.nsbtx";
extern "C" void *data_ov068_0227039c[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226cba4Ei, 0};
extern "C" char data_ov068_02270494[23] = "npc_sp/model/pga.nsbmd";
extern "C" char data_ov068_02270374[4] = "m.5";
extern "C" void *data_ov068_02270414[2] = {(void *)_ZN15SpNpcRoostGuest9mainAct04Ev, 0};
extern "C" void *data_ov068_02270424[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226c4d8Ev, 0};
extern "C" void *data_ov068_02270394[2] = {(void *)_ZN15SpNpcRoostGuest10setupAct02Ev, 0};
extern "C" char data_ov068_0227036c[4] = "m.4";
extern "C" char data_ov068_022705a0[27] = "npc_sp/model/pgb_tex.nsbtx";
extern "C" char data_ov068_022704ac[23] = "npc_sp/model/pgb.nsbmd";


// ---------------------------------------------------------------------------------------------------------------------

extern "C" SpNpcRoostGuest *SpNpcRoostGuest_Create() {
    using namespace sB;
    return new SpNpcRoostGuest();
}

BOOL SpNpcRoostGuest::vfunc_04() {
    using namespace sB;
    Unk_ov068_0226ce70_Date d;
    u16 h;
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &unk_65c);
    unk_65c.attachOwner((Unk_ov068_0226ccd4_Owner *)this);
    unk_4cc.unk_45 = 0;
    d.a = 0;
    d.b = 0;
    Clock_GetDateTime(&d);
    u8 mo = ((u8 *)&d)[2];
    u8 dy = ((u8 *)&d)[1];
    unk_72c = 8;
    if (CommManager_isSlotActive(*(void **)gCommManager, *(s32 *)(*(u8 **)gCommManager + 0x64))) {
        return TRUE;
    }
    if (SaveRecord4_isDateActive(data_021ed315)) {
        return TRUE;
    }
    u8 *g = data_021e58a7;
    switch (Clock_GetWeekday()) {
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
            if (RoostGuestRoll_hasLateGuest(g)) {
                if (NookShop_GetLevel(&data_021ed104) == 3) {
                    unk_72c = 2;
                }
            }
        }
        break;
    }
    if (mo == 0xc || (mo == 0xd && dy < 0x1e)) {
        switch (RoostGuestRoll_getNoonGuest(g)) {
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
        switch (RoostGuestRoll_getAfternoonGuest(g)) {
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
    if (mo == 6 && dy < 0x37 && RoostGuestRoll_hasMorningGuest(g)) {
        unk_72c = 0;
    }
    h = sRoostGuestNpcHandles[unk_72c];
    NpcActor_setNpcHandle(this, &h);
    if (unk_72c == 7) {
        setInteractionRange(0x5000);
        unk_5c = 0xf000;
        unk_64 = 0x13000;
        unk_8e = 0;
        unk_94 = 0;
        NpcMoveAnimSet_setStandAnim(&unk_2a0, 0x102);
        NpcMoveAnimSet_setWalkAnim(&unk_2a0, 0x102);
        NpcMoveAnimSet_setRunAnim(&unk_2a0, 0x102);
        NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    } else {
        NpcMoveAnimSet_setStandAnim(&unk_2a0, 0x1e);
        NpcMoveAnimSet_setWalkAnim(&unk_2a0, 0x1e);
        NpcMoveAnimSet_setRunAnim(&unk_2a0, 0x1e);
        NpcLookAt_setPitchLimit(&unk_3b0, 0);
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::vfunc_00() {
    using namespace sB;
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    if (unk_72c == 7) {
        func_02105f90(*(s32 *)((u8 *)this + 0x148), 3);
    }
    changeAct(0);
    unk_4cc.unk_1c |= 2;
    if (unk_72c == 3) {
        NpcAnimCtrl_playAnim(&unk_334, this, 0x142, 0, 0, 0x1000, 0, 1);
        ThreeLayerAnimModel_AssignJointsToLayer2(&unk_ec, 0xc, 0xe);
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::vfunc_0c() {
    using namespace sB;
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    if (unk_72c == 7) {
        KkShowFx_Stop();
    }
    return TRUE;
}

u8 *SpNpcRoostGuest::getTexturePath() {
    using namespace sB;
    return (u8 *)sRoostGuestTexPaths[unk_72c];
}

u8 *SpNpcRoostGuest::getModelPath() {
    using namespace sB;
    return (u8 *)sRoostGuestModelPaths[unk_72c];
}

BOOL SpNpcRoostGuest::updateAct() {
    using namespace sB;
    BOOL result = FALSE;
    if (sSpNpcRoostGuestActTable[unk_658].b != NULL) {
        result = (this->*sSpNpcRoostGuestActTable[unk_658].b)();
    }
    return result;
}

void SpNpcRoostGuest::changeAct(s32 state) {
    using namespace sB;
    BOOL ok = TRUE;
    if (sSpNpcRoostGuestActTable[state].a != NULL) {
        ok = (this->*sSpNpcRoostGuestActTable[state].a)();
    }
    if (ok) {
        unk_658 = state;
    }
}

BOOL SpNpcRoostGuest::setupAct00() {
    using namespace sB;
    if (unk_72c == 7) {
        NpcLookAt_setTarget(&unk_3b0, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        NpcActionCtrl_requestPlayAnim(&unk_564, 1, 0x105, 0, data_020c6cc8, 0);
        NpcLookAt_setManualAngles(&unk_3b0, 0, -0xc18, 0, data_020c6cc4, data_020c6cbc);
    } else {
        NpcLookAt_setTarget(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::mainAct00() {
    using namespace sB;
    if (unk_72c == 8) {
        ProcBase_RequestDelete(this);
        return TRUE;
    }
    if (unk_72c == 7) {
        checkPlayerSeated();
    } else {
        CafeCoffeeSet_StartEffectB(this);
    }
    if (unk_72c == 6) {
        CafeCoffeeSet_SetFlagEF8();
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::setupAct01() {
    using namespace sB;
    if (unk_72c == 7) {
        NpcActionCtrl_requestPlayAnim(&unk_564, 1, 0x102, 0, data_020c6cc8, 0);
    }
    NpcLookAt_setTarget(&unk_3b0, 4, 0, 0, gVec3Zero, 4, data_020c6d1c, 0);
    NpcTalkCtrl_requestTalk(&unk_618, 0, 0);
    return TRUE;
}

BOOL SpNpcRoostGuest::mainAct01() {
    using namespace sB;
    if (NpcTalkCtrl_isBusy(&unk_618)) {
        return TRUE;
    }
    if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(4);
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::setupAct04() {
    using namespace sB; return TRUE; }

BOOL SpNpcRoostGuest::mainAct04() {
    using namespace sB; return TRUE; }

BOOL SpNpcRoostGuest::setupAct03() {
    using namespace sB; return TRUE; }

BOOL SpNpcRoostGuest::mainAct03() {
    using namespace sB;
    if (PlayerActor_IsInAction(0x28, 4)) {
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcRoostGuest::setupAct02() {
    using namespace sB;
    NpcActionCtrl_requestPlayAnim(&unk_564, 1, 0x102, 0, data_020c6cc8, 0);
    Camera_SetMode18();
    NpcLookAt_setManualAngles(&unk_3b0, 0, 0, 0x1000, data_020c6cc4, data_020c6cbc);
    NpcTalkCtrl_requestTalk(&unk_618, 0, 1);
    Bgm_RequestSilence(0x10, 0xf, 0);
    Bgm_DisableHourChime();
    return TRUE;
}

// ---- owner ----
BOOL SpNpcRoostGuest::mainAct02() {
    using namespace sB;
    if (NpcTalkCtrl_isBusy(&unk_618)) {
        return TRUE;
    }
    if (NpcTalkCtrl_isBusy(&unk_618) == 0) {
        TalkRequest_SetTargetDone(this);
        if (PlayerActor_IsInAction(0x28, 4)) {
            PlayerActor_LocalRequestStandUp(0);
        }
        Bgm_ReleasePriority(0x10);
        Bgm_EnableHourChime();
        Camera_SetModeDefault();
        changeAct(4);
    }
    return TRUE;
}

SpNpcRoostGuestTalk::SpNpcRoostGuestTalk() {
    func_020f8134(&unk_b8);
}

// ---------------------------------------------------------------------------------------------------------------------
SpNpcRoostGuestTalk::~SpNpcRoostGuestTalk() {}

void SpNpcRoostGuestTalk::attachOwner(Unk_ov068_0226ccd4_Owner *o) {
    using namespace sB;
    vfunc_08();
    unk_b0 = (SpNpcRoostGuest *)o;
}

void SpNpcRoostGuestTalk::setTalkMode(s32 v) {
    using namespace sB; unk_ac = v; }

s32 SpNpcRoostGuestTalk::getTalkMode() {
    using namespace sB; return unk_ac; }

void SpNpcRoostGuestTalk::vfunc_78(Unk_ov068_0226ce70_Out *out) {
    using namespace sB;
    u16 h0, h2, h4, h6;
    unk_b8.unk_00 = -1;
    unk_b8.unk_01 = -1;
    unk_b8.unk_02 = -1;
    unk_b8.unk_03 = -1;
    unk_b8.unk_04 = -1;
    void *p = PlayerData_GetCurrent();
    out->unk_00 = sRoostGuestMsgFiles[unk_b0->unk_72c];
    if (unk_b0->unk_72c == 7) {
        if (getTalkMode() == 0) {
            Unk_ov068_0226ce70_Date d;
            d.a = 0;
            d.b = 0;
            Clock_GetDateTime(&d);
            u8 m = ((u8 *)&d)[2];
            if (m < 0x14 && m >= 0x13) {
                h0 = 0x3530;
                s32 r = Pocket_FindItem(&h0);
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
            } else if (Talk_CheckAndSetPlayerFlag(0xd, 0) != 0) {
                h2 = 0x3530;
                s32 r = Pocket_FindItem(&h2);
                BOOL ok = FALSE;
                if (r != -1) {
                    ok = TRUE;
                }
                if (ok) {
                    out->unk_04 = 0xe;
                } else {
                    out->unk_04 = 0x12;
                }
            } else if (Unk_02097ff4_testFlag(p, 7) == 0) {
                out->unk_04 = 1;
                Unk_02097ff4_setFlag(p, 7);
            } else if (Talk_CheckAndSetPlayerFlag(0xc, 1) == 0) {
                out->unk_04 = 2;
            } else {
                out->unk_04 = 3;
            }
        } else {
            if (getTalkMode() == 1) {
                ItemName a;
                EncodedString16Buf b;
                func_020a78a4(&b, unk_b0->unk_730, 0x10);
                MsgString_fromEncoded(&a, &b, 0, 0);
                TalkWindowState_setNamedSlot(unk_3c, 0, &a, 7);
            } else if (getTalkMode() == 2) {
                h4 = unk_b0->unk_652;
                setItemNameSlot((u32)&h4, 1, 7);
                h6 = unk_b0->unk_652;
                setItemNameSlot((u32)&h6, 2, 7);
            }
            out->unk_04 = data_ov068_0226f1a8[unk_ac];
            out->unk_00 = sRoostGuestMsgFiles[unk_b0->unk_72c];
        }
    } else {
        if (Talk_CheckAndSetPlayerFlag(unk_b0->unk_72c + 0x21, 1) == 0) {
            out->unk_04 = func_02063b8c(3);
        } else {
            out->unk_04 = func_02063b8c(5) + 3;
        }
    }
}

void SpNpcRoostGuestTalk::vfunc_10(s32 a) {
    using namespace sB;
    if (unk_b0->unk_72c == 7) {
        func_ov068_0226cdcc(a);
    }
}

void SpNpcRoostGuestTalk::func_ov068_0226cdcc(s32 a) {
    using namespace sB;
    switch (unk_1e) {
    case 12:
    case 13: {
        u16 v = unk_b0->unk_652;
        setItemNameSlot((u32)&v, 1, 7);
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

void SpNpcRoostGuestTalk::vfunc_14(s32 a) {
    using namespace sB;
    if (unk_b0->unk_72c == 7) {
        func_ov068_0226cd18(a);
    }
}

void SpNpcRoostGuestTalk::func_ov068_0226cd18(s32 a) {
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

extern "C" const char *sRoostGuestTexPaths[9] = {data_ov068_02270584, data_ov068_022705a0, data_ov068_022705bc, data_ov068_022705d8, data_ov068_022705f4, data_ov068_02270610, data_ov068_0227062c, data_ov068_02270648, data_ov068_02270648};
extern "C" void *data_ov068_022703bc[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226ccf4Ev, 0};
extern "C" void *data_ov068_022703c4[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226ccd4Ev, 0};
extern const u16 sRoostGuestNpcHandles[10] = {0xd006, 0xd007, 0xd017, 0xd00d, 0xd014, 0xd024, 0xd011, 0xd01d, 0xd01d, 0x0000};
extern "C" char data_ov068_02270488[11] = "sp_npc_cf4";
extern "C" void *data_ov068_02270384[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226cb54Ei, 0};
extern "C" void *data_ov068_022703a4[2] = {(void *)_ZN15SpNpcRoostGuest10setupAct01Ev, 0};
extern "C" void *data_ov068_022703b4[2] = {(void *)_ZN15SpNpcRoostGuest9mainAct03Ev, 0};
extern "C" char data_ov068_022704f4[23] = "npc_sp/model/wip.nsbmd";
extern "C" Unk_ov068_Scene_Entry sSpNpcRoostGuestProfile = {(void *(*)())SpNpcRoostGuest_Create, 0x66, 0x6c, {0, 0x5000, 0x5000, 0x3e800}};
extern const u8 data_ov068_0226f1a8[4] = {0x00, 0x09, 0x06, 0x00};
extern "C" void *data_ov068_0227042c[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226ccd4Ev, 0};
extern "C" char data_ov068_02270470[11] = "sp_npc_cf2";


void SpNpcRoostGuestTalk::func_ov068_0226ccf4() {
    using namespace sB;
    Unk_020d7710_setSubSceneKind(this, 0xd, 0);
    Unk_020d7710_openSubScene(this, 2);
    setScript(1);
}

void SpNpcRoostGuestTalk::func_ov068_0226ccd4() {
    using namespace sB;
    unk_3c->unk_14 = 0;
    unk_b0->unk_740 = 0x2d;
    setScript(2);
}

void SpNpcRoostGuestTalk::vfunc_18(s32 a) {
    using namespace sA;
    if (unk_b0->unk_72c == 7) {
        func_ov068_0226cbf8(a);
    }
}

void SpNpcRoostGuestTalk::func_ov068_0226cbf8(s32 a) {
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

extern "C" void *data_ov068_022703dc[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226cbe4Ei, 0};
extern "C" char data_ov068_022705f4[27] = "npc_sp/model/wip_tex.nsbtx";
extern "C" void *data_ov068_022703f4[2] = {(void *)_ZN15SpNpcRoostGuest10setupAct00Ev, 0};
extern "C" char data_ov068_0227053c[23] = "npc_sp/model/end.nsbmd";
extern "C" char data_ov068_02270364[4] = "m.2";
extern "C" const char *sRoostGuestMsgFiles[9] = {data_ov068_0227044c, data_ov068_02270470, data_ov068_0227047c, data_ov068_02270488, data_ov068_02270458, data_ov068_02270440, data_ov068_02270464, data_ov068_02270434, data_ov068_02270464};
extern "C" void *data_ov068_0227038c[2] = {(void *)_ZN15SpNpcRoostGuest9mainAct01Ev, 0};
extern "C" const char *sRoostGuestModelPaths[9] = {data_ov068_02270494, data_ov068_022704ac, data_ov068_022704c4, data_ov068_022704dc, data_ov068_022704f4, data_ov068_0227050c, data_ov068_02270524, data_ov068_0227053c, data_ov068_0227053c};
extern "C" char data_ov068_02270370[4] = "m.1";
extern "C" char data_ov068_02270524[23] = "npc_sp/model/mof.nsbmd";
extern "C" char data_ov068_02270434[11] = "sp_npc_dog";
extern "C" char data_ov068_022704dc[23] = "npc_sp/model/ott.nsbmd";
extern "C" void *data_ov068_022703cc[2] = {(void *)_ZN15SpNpcRoostGuest10setupAct03Ev, 0};
extern "C" char data_ov068_022705bc[27] = "npc_sp/model/poo_tex.nsbtx";
extern "C" char data_ov068_022705d8[27] = "npc_sp/model/ott_tex.nsbtx";
extern "C" Unk_ov068_02270780_Ent data_ov068_02270730[6] = {{NULL, 0}, {*(Unk_ov068_02270780_Fn *)data_ov068_022703fc, 0}, {*(Unk_ov068_02270780_Fn *)data_ov068_0227037c, 1}, {*(Unk_ov068_02270780_Fn *)data_ov068_022703ec, 1}, {*(Unk_ov068_02270780_Fn *)data_ov068_0227041c, 1}, {*(Unk_ov068_02270780_Fn *)data_ov068_02270424, 1}};
extern "C" char data_ov068_02270464[11] = "sp_npc_cf7";
extern "C" char data_ov068_02270378[4] = "m.3";
extern "C" void *data_ov068_022703e4[2] = {(void *)_ZN15SpNpcRoostGuest9mainAct00Ev, 0};
extern "C" char data_ov068_02270610[27] = "npc_sp/model/xct_tex.nsbtx";
extern "C" char data_ov068_0227044c[11] = "sp_npc_cf1";
extern "C" void *data_ov068_0227041c[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226c530Ev, 0};
extern "C" char *data_ov068_02270554[6] = {data_ov068_02270368, data_ov068_02270370, data_ov068_02270364, data_ov068_02270378, data_ov068_0227036c, data_ov068_02270374};
extern "C" char data_ov068_02270440[11] = "sp_npc_cf6";
extern "C" void *data_ov068_022703fc[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226c9b0Ev, 0};
extern "C" char data_ov068_02270458[11] = "sp_npc_cf5";
extern "C" char data_ov068_0227050c[23] = "npc_sp/model/xct.nsbmd";
extern "C" char data_ov068_02270368[4] = "m.0";
extern "C" void *data_ov068_02270404[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226cbe4Ei, 0};
extern "C" void *data_ov068_0227040c[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226cbe4Ei, 0};
extern "C" void *data_ov068_022703ec[2] = {(void *)_ZN19SpNpcRoostGuestTalk19func_ov068_0226c63cEv, 0};
extern "C" void *data_ov068_022703ac[2] = {(void *)_ZN15SpNpcRoostGuest10setupAct04Ev, 0};
extern "C" Unk_ov068_0226d39c_Entry sSpNpcRoostGuestActTable[5] = {{*(Unk_ov068_0226d39c_Fn *)data_ov068_022703f4, *(Unk_ov068_0226d39c_Fn *)data_ov068_022703e4}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_022703a4, *(Unk_ov068_0226d39c_Fn *)data_ov068_0227038c}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_02270394, *(Unk_ov068_0226d39c_Fn *)data_ov068_022703d4}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_022703cc, *(Unk_ov068_0226d39c_Fn *)data_ov068_022703b4}, {*(Unk_ov068_0226d39c_Fn *)data_ov068_022703ac, *(Unk_ov068_0226d39c_Fn *)data_ov068_02270414}};
extern "C" char data_ov068_022704c4[23] = "npc_sp/model/poo.nsbmd";


void SpNpcRoostGuestTalk::func_ov068_0226cbe4(s32 a) {
    using namespace sA;
    if (a == 0) {
        unk_b0->unk_742 = 1;
    }
}

void SpNpcRoostGuestTalk::func_ov068_0226cba4(s32 a) {
    using namespace sA;
    u16 h0;
    u16 h1;
    if (a == 0) {
        h0 = 0x3530;
        if (Pocket_FindItem(&h0) != -1) {
            Pocket_RemoveItem();
            h1 = 0x4a34;
            Pocket_AddItem(&h1, 0);
        }
    }
}

void SpNpcRoostGuestTalk::func_ov068_0226cb54(s32 a) {
    using namespace sA;
    if (a == 0) {
        unk_b0->unk_744 = 1;
    } else {
        unk_b0->unk_744 = 0;
        unk_b0->unk_743 = 0;
        unk_b0->unk_652 = RoostGuest_PickKKSong(unk_b0);
    }
}

void SpNpcRoostGuestTalk::vfunc_80() {
    using namespace sA;
    s32 i = unk_b4;
    if (((u8 *)&data_ov068_02270730[0].flag)[i * 12] != 0) {
        Unk_ov068_02270780_Ent *e = &data_ov068_02270730[i];
        if (e->fn != 0) {
            (this->*e->fn)();
        }
    }
}

void SpNpcRoostGuestTalk::vfunc_84() {
    using namespace sA;
    s32 i = unk_b4;
    if (((u8 *)&data_ov068_02270730[0].flag)[i * 12] == 0) {
        Unk_ov068_02270780_Ent *e = &data_ov068_02270730[i];
        if (e->fn != 0) {
            (this->*e->fn)();
            setScript(0);
        }
    }
}

void SpNpcRoostGuestTalk::setScript(s32 state) {
    using namespace sA;
    unk_b4 = state;
}

void SpNpcRoostGuestTalk::func_ov068_0226c9b0() {
    using namespace sA;
    u8 cmd;
    u16 tmp;
    MI_CpuCopy8(MenuCtrl_GetText(), unk_b0->unk_730, 0x10);
    ItemName objA;
    EncodedString16Buf objB;
    func_020a78a4(&objB, unk_b0->unk_730, 0x10);
    MsgString_fromEncoded(&objA, &objB, 0, 0);
    TalkWindowState_setNamedSlot(unk_3c, 0, &objA, 7);
    if (MenuCtrl_IsResultOk()) {
        u32 v;
        u16 h;
        unk_b0->unk_743 = 0;
        v = MenuCtrl_GetIndex();
        if (v < 0x46) {
            h = v + 0x1323;
        } else {
            h = 0x1323;
        }
        unk_b0->unk_652 = h;
        tmp = unk_b0->unk_652;
        setItemNameSlot((u32)&tmp, 1, 7);
    } else {
        unk_b0->unk_743 = 1;
        unk_b0->unk_652 = RoostGuest_PickKKSong(unk_b0);
    }
    cmd = 8;
    TalkWindowState_setNextMessage(unk_3c, &cmd, sRoostGuestMsgFiles[unk_b0->unk_72c]);
}

void SpNpcRoostGuestTalk::func_ov068_0226c870() {
    using namespace sA;
    Unk_ov068_0226c870_Pad pad;
    s32 *q = TalkWindow_Get(0);
    if (q[1] == 5) {
        if (unk_b0->unk_740 == 0x2d) {
            LightSwitch_SetOff(0, 0x1e);
            LightSwitch_SetOn(1, 1, 0);
            NpcLookAt_setManualAngles(&unk_b0->unk_3b0, 0, -0xc18, 0, 0x276, 0x276);
        }
        if (func_020e7500(&unk_b0->unk_740) == 0) {
            RoomCamera_KkShowWideShot();
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
            Bgm_Request(0xf, (u16)unk_b0->unk_654, 0x7f, 0);
            unk_b8.unk_14 = 0;
            KkShowFx_Start();
            setScript(3);
        }
    }
}

void SpNpcRoostGuestTalk::func_ov068_0226c63c() {
    using namespace sA;
    Unk_ov068_0226c63c_Msg *p = Snd_GetBeatState();
    KkShowFx_Update();
    if (p != NULL) {
        if (p->unk_03 == 1 && unk_b8.unk_03 == 1) {
            goto end;
        }
        s32 t4 = p->unk_04;
        if (t4 != unk_b8.unk_04) {
            if (t4 == 2) {
                RoomCamera_KkShowResetShot();
                KkShowFx_CallUnk1de4();
            } else if ((u8)t4 <= 1) {
                RoomCamera_KkShowPickShot();
            }
        }
        s32 t1 = p->unk_01;
        if (t1 != unk_b8.unk_01) {
            if (t1 == -1) {
                NpcFaceAnim_setMouthTexture(&unk_b0->unk_2ac, (u32)data_ov068_02270368);
            } else {
                NpcFaceAnim_setMouthTexture(&unk_b0->unk_2ac, (u32)data_ov068_02270554[t1]);
            }
        }
        s32 t2 = p->unk_02;
        if (t2 != unk_b8.unk_02 || p->unk_00 != unk_b8.unk_00) {
            if (t2 == 1) {
                NpcLookAt_setManualAngles(&unk_b0->unk_3b0, 0, 0, 0, 0x100, 0x200);
            } else {
                NpcLookAt_setManualAngles(&unk_b0->unk_3b0, 0, -0xc18, 0, 0x100, 0x200);
            }
            u16 v = data_020c6cc8;
            if (unk_b8.unk_14 == 0) {
                v = 0x28;
                unk_b8.unk_14 = 1;
            }
            s32 t0 = p->unk_00;
            if (t0 == 3) {
                NpcActionCtrl_requestPlayAnim(&unk_b0->unk_564, 2, 0x103, 0, v, 0);
            } else if (t0 == 4) {
                NpcActionCtrl_requestPlayAnim(&unk_b0->unk_564, 2, 0x104, 0, v, 0);
            }
        }
        if ((u8)(s8)(p->unk_00 - 3) <= 1) {
            unk_b0->unk_ec.unk_a4 = 0;
            unk_b0->unk_ec.unk_ac = p->unk_08;
            ThreeLayerAnimModel_updateLayers3(&unk_b0->unk_ec);
            unk_b0->unk_ec.unk_ac = 0;
        }
        {
            s32 t3 = p->unk_03;
            if (t3 != unk_b8.unk_03) {
                if (t3 == 0) {
                    KkShowFx_Update();
                    KkShowFx_SetParam(0);
                    KkShowFx_CallUnk1f70();
                }
                if (p->unk_03 == 1) {
                    NpcFaceAnim_setMouthTexture(&unk_b0->unk_2ac, (u32)data_ov068_02270368);
                    NpcFaceAnim_resumeMouthMaterial(&unk_b0->unk_2ac);
                    NpcActionCtrl_requestStand(&unk_b0->unk_564, 2, 0x28);
                }
            }
        }
    }
end:
    KkShowFx_CallUnk1f70();
    MI_CpuCopy8(p, &unk_b8, 0x14);
    if (KkShowFx_GetState()) {
        unk_b0->unk_740 = 0x14;
        setScript(4);
    }
}

void SpNpcRoostGuestTalk::func_ov068_0226c530() {
    using namespace sA;
    u8 c0, c1, c2;
    u16 h;
    if (func_020e7500(&unk_b0->unk_740) == 0) {
        unk_b0->unk_742 = 0;
        if (unk_b0->unk_743 != 0) {
            c0 = 0xb;
            TalkWindowState_setNextMessage(unk_3c, &c0, sRoostGuestMsgFiles[unk_b0->unk_72c]);
        } else {
            h = unk_b0->unk_652;
            if (Pocket_AddItem(&h, 0) == 0) {
                c1 = 0xd;
                TalkWindowState_setNextMessage(unk_3c, &c1, sRoostGuestMsgFiles[unk_b0->unk_72c]);
            } else {
                Talk_CheckAndSetPlayerFlag(0xd, 1);
                c2 = 0xc;
                TalkWindowState_setNextMessage(unk_3c, &c2, sRoostGuestMsgFiles[unk_b0->unk_72c]);
            }
        }
        KkShowFx_Stop();
        Bgm_Release(unk_b0->unk_654);
        unk_b0->unk_740 = 0x1e;
        LightSwitch_SetOff(1, 1);
        LightSwitch_SetOn(0, 0x1e, 0);
        setScript(5);
    }
}

void SpNpcRoostGuestTalk::func_ov068_0226c4d8() {
    using namespace sA;
    if (func_020e7500(&unk_b0->unk_740) == 0) {
        NpcLookAt_setManualAngles(&unk_b0->unk_3b0, 0, 0, 0x1000, 0x276, 0x276);
        unk_3c->unk_08 = 1;
        setScript(0);
    }
}

BOOL SpNpcRoostGuest::vfunc_48() {
    using namespace sA;
    BOOL r = FALSE;
    if (unk_658 == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcRoostGuest::vfunc_4c(s32 mode) {
    using namespace sA;
    switch (mode) {
    case 0:
        unk_65c.vfunc_08();
        unk_65c.func_02015ab0(getPlayerActor(4));
        if (unk_72c == 7) {
            unk_65c.setTalkMode(0);
        }
        changeAct(1);
        break;
    case 1:
        unk_65c.vfunc_08();
        unk_65c.func_02015ab0(getPlayerActor(4));
        if (unk_744 != 0) {
            unk_65c.setTalkMode(1);
        } else {
            unk_65c.setTalkMode(2);
        }
        changeAct(3);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

BOOL SpNpcRoostGuest::checkPlayerSeated() {
    using namespace sA;
    if (unk_742 == 0) {
        return FALSE;
    }
    PlayerData_GetCurrent();
    Unk_ov068_0226c3b4_Vec v;
    v = *func_020947f0(4);
    s32 a = 0;
    s32 b = 0;
    FieldPos_ToUnit(&a, &b, &v);
    if (PlayerActor_IsInAction(0x25, 4) != 0 && a == 9 && b == 0xd) {
        TalkRequest_AddPlayerTalk7(this, 0);
    }
    return TRUE;
}

extern "C" u16 RoostGuest_PickKKSong(void *self) {
    using namespace sC;
    u16 arr[2];
    ItemPick_FromRange(&arr[0], 0x1323, 0x46, 0, 0, (u32)PlayerData_GetCurrent(), 0, 10, 0, 1);
    if (!Unk_ov068_0226c340_R(&arr[0])) {
        ItemPick_FromRange(&arr[1], 0x1323, 0x46, 0, 0, 0, 1, 10, 0, 1);
        arr[0] = arr[1];
    }
    return arr[0];
}

u32 SpNpcRoostGuest::getGuest() {
    return unk_72c;
}
