// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
#include "types.h"
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

class FleaMarketBuyerVillagerTalk;
class FleaMarketBuyerVillager;

#define VillagerId_makeFileName _ZN10VillagerId12makeFileNameEPvjj
#define func_020135c4 _ZN12Unk_0201347413func_020135c4Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_02014e60 _ZN12Unk_020d771013func_02014e60EPtjjj
#define func_02015170 _ZN12Unk_020d771013func_02015170Ejj
#define func_020151d0 _ZN12Unk_020d771013func_020151d0Ei
#define func_0201578c _ZN16ActorTalkRequest13func_0201578cEjjj
#define func_02015958 _ZN16ActorTalkRequest13func_02015958Eijiii
#define ActorTalkRequest_getChoiceList _ZN16ActorTalkRequest13getChoiceListEv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201a784 _ZN12Unk_0201a33413func_0201a784Ev
#define func_0201a9ec _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3
#define Unk_020d77a4_setTalkRequest _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c
#define Unk_020d77a4_getPlayerActor _ZN12Unk_020d77a414getPlayerActorEj
#define Unk_020d77a4_getAngleTo _ZN12Unk_020d77a410getAngleToEPS_
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define func_02080950 _ZN14VillagerMemory13func_02080950Ev
#define VillagerMemory_setReceivedItem _ZN14VillagerMemory15setReceivedItemEPt
#define VillagerMemory_getFriendship _ZN14VillagerMemory13getFriendshipEv
#define func_02094218 _ZN8PlayerId13func_02094218Ev
#define func_02098750 _ZN10PlayerData13func_02098750Ev
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define func_021319d0 _fadd
#define func_021329d0 _ffix
#define func_02132a4c _fflt
#define func_02132c80 _fsub
#define func_ov004_02235624 _ZN18Unk_ov004_0223570819func_ov004_02235624Eiii
#define func_ov004_02235720 _ZN18Unk_ov004_0223583c19func_ov004_02235720Ej
#define func_ov004_02235788 _ZN18Unk_ov004_0223583c19func_ov004_02235788Ev
typedef void (FleaMarketBuyerVillagerTalk::*Unk_ov004_0224c740_Fn)();
typedef BOOL (FleaMarketBuyerVillager::*Unk_ov004_0224c7d0_Fn)();

struct Unk_ov004_0224c740_Ent {
    Unk_ov004_0224c740_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov004_0224c7d0_Ent {
    Unk_ov004_0224c7d0_Fn a;
    Unk_ov004_0224c7d0_Fn b;
};

struct Unk_ov004_022191f8_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov004_02218cdc_Rec {
    s32 a, b, c;
};

struct Unk_ov004_0221946c_Vec {
    s32 x, y, z;
    Unk_ov004_0221946c_Vec() {}
    ~Unk_ov004_0221946c_Vec() {}
};

struct Unk_ov004_02219e0c_V {
    s32 x, y, z;
};
struct Unk_ov004_02219e0c_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02219e0c_V unk_5c;
};

struct Unk_ov004_SceneEntry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

extern "C" {
extern u16 data_020c6cc8;
extern s16 data_02135f44[];
extern u8 gTalkMsgIndexEnd[];
extern u8 data_020e416c[];
extern Unk_ov004_0224c740_Ent sFleaMarketBuyerTalkScripts[2];
extern Unk_ov004_0224c7d0_Ent sFleaMarketBuyerActTable[9];
extern u8 data_ov004_022507b0[0x28];
extern u8 data_ov004_022507d8[0x28];
extern u8 data_ov004_02250800[0x28];
extern u8 data_ov004_02250828[0x28];

void *func_ov004_0223584c();
void *func_ov004_02235720(void *, s32);
s32 func_ov004_02234440(s32);
void *FtrActor_GetFtrIndex(...);
void FtrActor_GetCenter(void *, void *);
void *func_ov004_02235788(...);
void func_ov004_02235d04();
void func_ov004_022344dc(s32);
void *func_ov004_02235718();
s32 func_ov004_02235624(void *, s32, s32, s32);

u32 Item_MakeFurniture(void *, u32);
s32 Item_IsFurniture(void *);
u32 Item_GetFurnitureIndex(void *);
u32 Item_FindMoneyBagForAmount(void *, u32, u32);
s32 func_02063b8c(s32);
void *func_020947f0(s32);
s32 func_0202ff64(void *);
void func_0202ff44();
void func_0202ffb0(s32);
void TalkRequest_AddPlayerTalk6(void *, s32);
s32 TalkRequest_IsActive();
void Clock_GetDateTime(void *);
s32 DateTime_DiffMinutes(void *, void *);
void func_020b1028();
void func_02015ab0(void *, s32);
s32 Unk_020d77a4_getPlayerActor(void *, s32);
void *ActorTalkRequest_getChoiceList(void *);
s32 ChoiceList_getResult();
void *VillagerData_getVillagerId(void *);
void VillagerId_makeFileName(void *, const void *, u32, const void *);
void func_02015170(void *, s32, s32);
void func_020151d0(void *, s32);
void func_02014e60(void *, void *, s32, s32, s32);
void *PlayerData_GetCurrent();
void *func_02098750(void *);
void *PlayerData_getPlayerId(void *);
s32 NpcActor_CheckPayoutFits(void *, void *, s32);
void NpcActor_PayPlayer(void *, void *);
s32 func_02097a90(void *, void *, s32, s32);
void TalkWindowState_setNextMessage(void *, void *, const void *);
void Hud_Show();
void func_0207c5e0(void *, void *);
void *func_0207f55c(void *, void *);
s32 func_02080ecc(void *, s32, s32, s32);
void func_0201578c(void *, void *, s32, s32);
s32 func_02014220(void *);
void *func_0207f58c(void *);
void VillagerMemory_setReceivedItem(void *, void *);
void func_0207cfb8(void *, void *);
s32 func_0206ec6c();
s32 func_0206ed18();
s32 Item_GetPrice(void *);
s32 Villager_FindMemory(void *, void *);
s32 VillagerMemory_getFriendship(s32);
s32 func_02132a4c(s32);
s32 func_021319d0(s32, s32);
s32 func_02132c80(s32, s32);
s32 func_021329d0(s32);
s32 FX_Div(s32, s32);
s32 func_01ffcb0c(s32, s32);
s32 func_0206e8e8();
void func_02015958(void *, s32, u32, s32, s32, s32);
s32 Hud_Hide();
void TalkRequest_EndTalkWith(void *);
void func_020b4bbc(s32, s32);
s32 func_020b4934();
void func_020b4a08(s32, s32);
s32 func_020e9650(void *, void *);
void func_0201ae00(void *, void *, void *);
s32 func_020197a8(void *);
s32 func_02019790(void *);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0201a9ec(void *, void *);
s32 func_020e972c(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e780c(s32, s32);
void FieldPos_ToUnit(s32 *, s32 *, s32 *);
s32 Math_AngleXZ(void *, void *);
s32 func_02015aac(void *);
s32 Unk_020d77a4_getAngleTo(void *, s32);
void func_020141b4(void *, s32, s32, s32);
u32 *TalkWindow_Get(s32);
u32 func_020e7518(void *);
void func_02003e70(void *, u32, u32, u32);
s32 func_020b0e60();
void func_020b101c();
void func_0207821c(s32);
void *func_02095204(s32);
s32 func_020785a8(void *);
void *func_0207e310(void *);
void func_020785e8(void *, u32);
void func_020135c4(void *);
void func_0201a784(void *);
s32 func_02094218(void *);
s32 func_02080950(s32);
void Unk_020d77a4_setTalkRequest(void *, void *);
void VillagerTalk_begin(void *, void *, u32);
s32 FtrInfo_GetUnk05();
void func_020b50dc();
s32 func_020b5178();
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
struct VillagerMood { VillagerMood(); ~VillagerMood(); u32 pad[0x5c / 4]; };

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
    virtual void vfunc_4c(s32 a, u32 b);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_58();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
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
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 getSpecies();
    virtual void setShirt(u16 *p, BOOL flag);
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

class VillagerActor : public Unk_020d77a4 {
public:
    VillagerActor();
    virtual ~VillagerActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void *vfunc_64();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual u16 getSpecies();
    virtual void setShirt(u16 *p, BOOL flag);
    virtual void addMood(u32 a, s32 b);
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
    /* 0x838 */ VillagerMood unk_838;
};

// Dialog sub-object at +0x914 of FleaMarketBuyerVillager. Its vtable (0x0224c740) names every slot after the class that last overrides it;
// declared here slot by slot so that each slot mangles to that symbol.
class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void onActionTag4(u32 v);
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
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void vfunc_1c();
    virtual void vfunc_64();
    virtual void vfunc_74();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
};

class VillagerTalk : public Unk_020d7710 {
public:
    VillagerTalk();
    virtual ~VillagerTalk();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void onActionTag4(u32 v);
    virtual void vfunc_64_alt();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_ac[0x1a0 - 0xac];
};

class FleaMarketBuyerVillagerTalk : public VillagerTalk {
public:
    FleaMarketBuyerVillagerTalk();
    virtual ~FleaMarketBuyerVillagerTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void clearOffer();
    void completePurchase();
    void offerPrice();
    void setScript(s32 v);
    void attachOwner(VillagerActor *owner);

    /* 0x1a0 */ FleaMarketBuyerVillager *unk_1a0;
    /* 0x1a4 */ s32 unk_1a4;
    /* 0x1a8 */ s32 unk_1a8;
};

class FleaMarketBuyerVillager : public VillagerActor {
public:
    FleaMarketBuyerVillager() : unk_894(0xfff1) {
        unk_ac8[0] = 0;
        unk_ac8[1] = 0;
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    void setViewDistance(void *arg);
    void pushViewedFurniture(u32 v);
    BOOL isFurnitureForSale(s32 idx);
    BOOL pickFurnitureToView();
    BOOL checkLeave();
    BOOL mainAct08();
    BOOL setupAct08();
    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct07();
    BOOL setupAct07();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void func_ov004_02219ef4();
    void changeAct(s32 idx);

    /* 0x894 */ u16 unk_894;
    /* 0x896 */ u8 pad_896[2];
    /* 0x898 */ u32 unk_898[3];
    /* 0x8a4 */ s32 unk_8a4;
    /* 0x8a8 */ u8 unk_8a8[100];
    /* 0x90c */ s32 unk_90c;
    /* 0x910 */ s32 unk_910;
    /* 0x914 */ FleaMarketBuyerVillagerTalk unk_914;
    /* 0xac0 */ u8 unk_ac0;
    /* 0xac1 */ u8 pad_ac1[3];
    /* 0xac4 */ s32 unk_ac4;
    /* 0xac8 */ u32 unk_ac8[2];
    /* 0xad0 */ s32 unk_ad0;
    /* 0xad4 */ u8 unk_ad4;
    /* 0xad5 */ u8 unk_ad5;
    /* 0xad6 */ u8 unk_ad6;
    /* 0xad7 */ u8 unk_ad7;
    /* 0xad8 */ u8 unk_ad8;
    /* 0xad9 */ u8 pad_ad9[3];
    /* 0xadc */ s32 unk_adc;
    /* 0xae0 */ s32 unk_ae0;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" FleaMarketBuyerVillager *FleaMarketBuyerVillager_Create();
extern "C" Unk_ov004_SceneEntry sFleaMarketBuyerVillagerProfile = {(void *(*)())FleaMarketBuyerVillager_Create, 0x87, 0x8b, 2, 0x5000, 0x5000, 0x3e800};
extern "C" {
u8 data_ov004_02250828[0x28];
u8 data_ov004_022507b0[0x28];
u8 data_ov004_022507d8[0x28];
u8 data_ov004_02250800[0x28];
void _ZN23FleaMarketBuyerVillager9mainAct01Ev();
void _ZN23FleaMarketBuyerVillager10setupAct00Ev();
void _ZN23FleaMarketBuyerVillager10setupAct01Ev();
void _ZN27FleaMarketBuyerVillagerTalk10offerPriceEv();
void _ZN23FleaMarketBuyerVillager10setupAct06Ev();
void _ZN23FleaMarketBuyerVillager9mainAct08Ev();
void _ZN23FleaMarketBuyerVillager10setupAct08Ev();
void _ZN23FleaMarketBuyerVillager9mainAct07Ev();
void _ZN23FleaMarketBuyerVillager10setupAct07Ev();
void _ZN23FleaMarketBuyerVillager9mainAct06Ev();
void _ZN23FleaMarketBuyerVillager9mainAct00Ev();
void _ZN23FleaMarketBuyerVillager10setupAct05Ev();
void _ZN23FleaMarketBuyerVillager9mainAct05Ev();
void _ZN23FleaMarketBuyerVillager9mainAct04Ev();
void _ZN23FleaMarketBuyerVillager10setupAct04Ev();
void _ZN23FleaMarketBuyerVillager9mainAct03Ev();
void _ZN23FleaMarketBuyerVillager10setupAct03Ev();
void _ZN23FleaMarketBuyerVillager9mainAct02Ev();
void _ZN23FleaMarketBuyerVillager10setupAct02Ev();
// ptmf constants (named: their order cannot be reproduced natively), defined in the order that gives the original layout
void *data_ov004_0224c6b0[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct08Ev, 0};
void *data_ov004_0224c688[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct01Ev, 0};
void *data_ov004_0224c690[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct00Ev, 0};
void *data_ov004_0224c718[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct02Ev, 0};
void *data_ov004_0224c710[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct02Ev, 0};
void *data_ov004_0224c708[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct03Ev, 0};
void *data_ov004_0224c700[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct03Ev, 0};
void *data_ov004_0224c6f8[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct04Ev, 0};
void *data_ov004_0224c6f0[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct04Ev, 0};
void *data_ov004_0224c698[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct01Ev, 0};
void *data_ov004_0224c6d8[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct00Ev, 0};
void *data_ov004_0224c6a8[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct06Ev, 0};
void *data_ov004_0224c6d0[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct06Ev, 0};
void *data_ov004_0224c6c8[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct07Ev, 0};
void *data_ov004_0224c6c0[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct07Ev, 0};
void *data_ov004_0224c6b8[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct08Ev, 0};
void *data_ov004_0224c6e8[2] = {(void *)_ZN23FleaMarketBuyerVillager9mainAct05Ev, 0};
void *data_ov004_0224c6e0[2] = {(void *)_ZN23FleaMarketBuyerVillager10setupAct05Ev, 0};
void *data_ov004_0224c6a0[2] = {(void *)_ZN27FleaMarketBuyerVillagerTalk10offerPriceEv, 0};
}
#define PMA(x) (*(Unk_ov004_0224c740_Fn *)(x))
#define PMB(x) (*(Unk_ov004_0224c7d0_Fn *)(x))
extern "C" Unk_ov004_0224c740_Ent sFleaMarketBuyerTalkScripts[2] = {
    {0, 0, {0, 0, 0}},
    {PMA(data_ov004_0224c6a0), 0, {0, 0, 0}}};
extern "C" Unk_ov004_0224c7d0_Ent sFleaMarketBuyerActTable[9] = {
    {PMB(data_ov004_0224c690), PMB(data_ov004_0224c6d8)},
    {PMB(data_ov004_0224c698), PMB(data_ov004_0224c688)},
    {PMB(data_ov004_0224c718), PMB(data_ov004_0224c710)},
    {PMB(data_ov004_0224c708), PMB(data_ov004_0224c700)},
    {PMB(data_ov004_0224c6f8), PMB(data_ov004_0224c6f0)},
    {PMB(data_ov004_0224c6e0), PMB(data_ov004_0224c6e8)},
    {PMB(data_ov004_0224c6a8), PMB(data_ov004_0224c6d0)},
    {PMB(data_ov004_0224c6c8), PMB(data_ov004_0224c6c0)},
    {PMB(data_ov004_0224c6b8), PMB(data_ov004_0224c6b0)}};
#define data_ov004_02250858 ((Unk_ov004_0224c7d0_Ent *)((u8 *)sFleaMarketBuyerActTable + 8))

static inline BOOL Unk_ov004_02218a48_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov004_02218a48_Eq(u16 *p, u32 k) {
    u16 t;
    if (Item_IsFurniture(p)) {
        t = k;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == k) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_022191cc_Is1(u8 *p) {
    if (*p == 1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_02219378_Chk(u16 *p) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        u16 v = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

static inline BOOL Unk_ov004_0221946c_Chk(u16 *p, u16 *vp) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        *vp = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(vp)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

extern "C" FleaMarketBuyerVillager *FleaMarketBuyerVillager_Create() {
    return new FleaMarketBuyerVillager;
}

BOOL FleaMarketBuyerVillager::vfunc_04() {
    if (!VillagerActor::vfunc_04()) {
        return FALSE;
    }
    Unk_020d77a4_setTalkRequest(this, &unk_914);
    unk_914.attachOwner(this);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::vfunc_00() {
    if (!VillagerActor::vfunc_00()) {
        return FALSE;
    }
    unk_894 = 0xfff1;
    func_020135c4(&unk_558);
    unk_898[0] = unk_5c;
    unk_898[1] = unk_60;
    unk_898[2] = unk_64;
    unk_ad0 = 0x3000;
    s32 i;
    for (i = 0; i < 100; i++) {
        unk_8a8[i] = 0xff;
    }
    func_0201a784(&unk_3b0);
    void *o;
    if (PlayerData_GetCurrent()) {
        o = PlayerData_getPlayerId(PlayerData_GetCurrent());
    } else {
        o = 0;
    }
    func_020b50dc();
    if (func_020b5178() != 0 ||
        (vfunc_64() && o && func_02094218(o) && Villager_FindMemory(vfunc_64(), o) &&
         func_02080950(Villager_FindMemory(vfunc_64(), o)))) {
        unk_adc = (s32)func_ov004_02235788(func_ov004_0223584c());
        func_020b1028();
        func_0202ffb0(0);
        func_ov004_02235d04();
        Clock_GetDateTime(unk_ac8);
        unk_ac0 = 2;
        changeAct(3);
    } else {
        unk_5c = 0x10000;
        unk_68 = 0x10000;
        unk_64 = 0x23000;
        unk_70 = 0x23000;
        unk_ad7 = 100;
        unk_ae0 = 1;
        changeAct(0);
    }
    if (vfunc_64()) {
        func_020785e8(func_0207e310(vfunc_64()), 2);
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::vfunc_0c() {
    if (!VillagerActor::vfunc_0c()) {
        return FALSE;
    }
    if (unk_ac0 == 6 || unk_ac0 == 4) {
        func_020b101c();
        func_0207821c(-1);
    }
    if (vfunc_64()) {
        func_020785a8(func_0207e310(vfunc_64()));
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::onDraw() {
    if (unk_ac0 != 0) {
        Unk_020d77a4::onDraw();
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::updateAct() {
    BOOL r = FALSE;
    if (data_ov004_02250858[unk_90c].a) {
        r = (this->*sFleaMarketBuyerActTable[unk_90c].b)();
    }
    return r;
}

void FleaMarketBuyerVillager::changeAct(s32 idx) {
    BOOL ok = TRUE;
    if (sFleaMarketBuyerActTable[idx].a) {
        ok = (this->*sFleaMarketBuyerActTable[idx].a)();
    }
    if (ok) {
        unk_910 = unk_90c;
        unk_90c = idx;
    }
}

void FleaMarketBuyerVillager::func_ov004_02219ef4() {
    func_02003e70(&unk_514, 0x4cb, 0x7f, 0);
    func_020b0e60();
}

BOOL FleaMarketBuyerVillager::setupAct00() {
    unk_ac0 = 0;
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct00() {
    if (unk_ad5 == 0) {
        if (func_020e7518(&unk_ad7)) {
            return TRUE;
        }
        if (func_02063b8c(0x65) > 0x19) {
            unk_ad7 = 100;
            return TRUE;
        }
        Unk_ov004_02219e0c_Obj *p = (Unk_ov004_02219e0c_Obj *)func_02095204(4);
        if (p) {
            Unk_ov004_02219e0c_V v;
            Unk_ov004_02219e0c_V *pv = &p->unk_5c;
            v.x = p->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            if (func_020e9650(&v, &unk_5c) > 0x8000) {
                func_02003e70(&unk_514, 0x4ca, 0x7f, 0);
                unk_ad5 = 0x1e;
            }
        }
    }
    if (unk_ad5 != 0) {
        TalkRequest_AddPlayerTalk6(this, 0);
        if (unk_ad5 > 1) {
            func_020e7518(&unk_ad5);
        }
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct01() {
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct01() {
    u32 *p = TalkWindow_Get(0);
    if (p) {
        if (p[1] != 0) {
            return TRUE;
        }
    }
    if (unk_ad4 == 0x28) {
        func_ov004_02219ef4();
    }
    unk_8c = 0;
    unk_8e = -0x8000;
    unk_90 = 0;
    unk_92 = 0;
    unk_94 = -0x8000;
    unk_96 = 0;
    if (func_020e7518(&unk_ad4)) {
        if (unk_ad4 == 8) {
            unk_5c = 0x10000;
            unk_68 = 0x10000;
            unk_64 = 0x1f000;
            unk_70 = 0x1f000;
        }
        return TRUE;
    }
    changeAct(2);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct02() {
    unk_ad4 = 0;
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct02() {
    unk_8c = 0;
    unk_8e = -0x8000;
    unk_90 = 0;
    unk_92 = 0;
    unk_94 = -0x8000;
    unk_96 = 0;
    u8 c = unk_ad4;
    if (c == 1) {
        func_020196b4(&unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        TalkRequest_EndTalkWith(this);
        changeAct(8);
        return TRUE;
    } else if (c == 0) {
        Unk_ov004_0221946c_Vec v;
        v.x = 0;
        v.y = 0;
        v.z = 0;
        s32 g = func_01ffcb0c(0x4000, data_02135f44[(*(u16 *)&unk_8e >> 4) * 2]);
        v.x = g + unk_5c;
        g = func_01ffcb0c(0x4000, data_02135f44[(*(u16 *)&unk_8e >> 4) * 2 + 1]);
        v.z = g + unk_64;
        func_020196b4(&unk_564, 1, 2, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
        unk_ad4 = 30;
        return TRUE;
    } else {
        unk_ad4 = c - 1;
        return TRUE;
    }
}

BOOL FleaMarketBuyerVillager::setupAct03() {
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct03() {
    if (checkLeave()) {
        return TRUE;
    }
    if (unk_ac0 != 2) {
        return TRUE;
    }
    if (pickFurnitureToView()) {
        s32 r6 = func_020e9650(&unk_5c, unk_898);
        u32 loc0[3];
        func_0201ae00(loc0, this, unk_898);
        s32 r1 = Math_AngleXZ(&unk_5c, unk_898);
        s32 r4 = func_020e780c(unk_8e, r1);
        if (r6 > unk_ad0 && func_020e96ec(loc0, &unk_5c)) {
            changeAct(5);
        } else if (r4 > 0x2000) {
            changeAct(4);
        }
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct04() {
    func_020e9650(&unk_5c, unk_898);
    u32 loc1c[3];
    func_0201ae00(loc1c, this, unk_898);
    s32 r = Math_AngleXZ(&unk_5c, unk_898);
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, r, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct04() {
    if (checkLeave()) {
        return TRUE;
    }
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            changeAct(3);
        }
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct05() {
    func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct05() {
    s32 xy[2];
    u32 loc24[3];
    Unk_ov004_0221946c_Vec v;
    if (checkLeave()) {
        return TRUE;
    }
    s32 r4 = func_020e9650(&unk_5c, unk_898);
    func_0201ae00(loc24, this, unk_898);
    if (r4 > unk_ad0 + 0x1000) {
        if (func_020197a8(&unk_564) == 1) {
            func_020196b4(&unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(&unk_564) == 2) {
            func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(&unk_350, loc24);
    if (r4 <= unk_ad0 || func_020e972c(loc24, &unk_5c)) {
        changeAct(3);
    }
    v.x = unk_5c;
    v.y = unk_60;
    v.z = unk_64;
    s32 h = *(u16 *)&unk_8e;
    xy[0] = 0;
    xy[1] = 0;
    s32 idx = (h >> 4) * 2;
    s32 g = func_01ffcb0c(0x2000, data_02135f44[idx]);
    v.x = v.x + g;
    g = func_01ffcb0c(0x2000, data_02135f44[idx + 1]);
    v.z = v.z + g;
    FieldPos_ToUnit(&xy[0], &xy[1], &v.x);
    s32 r4b = func_ov004_02235624(func_ov004_02235718(), xy[0], xy[1], 0);
    s32 r6 = func_ov004_02235624(func_ov004_02235718(), xy[0], xy[1], 1);
    if (isFurnitureForSale(r6)) {
        void *o = func_ov004_02235720(func_ov004_0223584c(), r6);
        unk_894 = Item_MakeFurniture(FtrActor_GetFtrIndex(), 0);
        FtrActor_GetCenter(o, unk_898);
        setViewDistance(o);
        pushViewedFurniture(r6);
        unk_8a4 = r6;
    } else if (isFurnitureForSale(r4b)) {
        void *o = func_ov004_02235720(func_ov004_0223584c(), r4b);
        unk_894 = Item_MakeFurniture(FtrActor_GetFtrIndex(), 0);
        FtrActor_GetCenter(o, unk_898);
        setViewDistance(o);
        pushViewedFurniture(r4b);
        unk_8a4 = r4b;
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct07() {
    s32 a = func_02015aac(&unk_914);
    s32 b = 0;
    if (a) {
        b = Unk_020d77a4_getAngleTo(this, a);
    }
    func_020141b4(&unk_618, 0, b, 1);
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct07() {
    Unk_ov004_0221946c_Vec v;
    s32 *q = (s32 *)func_020947f0(4);
    v.x = q[0];
    v.y = q[1];
    v.z = q[2];
    if (!func_02014220(&unk_618)) {
        if (unk_ac0 == 5) {
            func_020b4bbc(func_020b4934(), 0);
        } else {
            func_020b4a08(func_020b4934(), 0);
            func_020b4bbc(func_020b4934(), 6);
        }
        changeAct(8);
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct06() {
    s32 a = func_02015aac(&unk_914);
    s32 b = 0;
    if (a) {
        b = Unk_020d77a4_getAngleTo(this, a);
    }
    s32 z = 0;
    unk_ac4 = z;
    if (unk_ac0) {
        func_020141b4(&unk_618, z, b, z);
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::mainAct06() {
    u8 s = unk_ad5;
    if (s != 0) {
        if (s == 1) {
            s32 a = func_02015aac(&unk_914);
            s32 b = 0;
            if (a) {
                b = Unk_020d77a4_getAngleTo(this, a);
            }
            func_020141b4(&unk_618, 0, b, 1);
        }
        func_020e7518(&unk_ad5);
        return TRUE;
    }
    Clock_GetDateTime(unk_ac8);
    if (!func_02014220(&unk_618)) {
        TalkRequest_EndTalkWith(this);
        if (unk_ac0 == 1) {
            unk_ac0 = 2;
            unk_ae0 = 0;
        }
        changeAct(8);
    }
    return TRUE;
}

BOOL FleaMarketBuyerVillager::setupAct08() { return TRUE; }

BOOL FleaMarketBuyerVillager::mainAct08() { return TRUE; }

FleaMarketBuyerVillagerTalk::FleaMarketBuyerVillagerTalk() {}

FleaMarketBuyerVillagerTalk::~FleaMarketBuyerVillagerTalk() {}

void FleaMarketBuyerVillagerTalk::attachOwner(VillagerActor *owner) {
    vfunc_08();
    VillagerTalk_begin(this, owner, 0x11);
    unk_1a0 = (FleaMarketBuyerVillager *)owner;
}

void FleaMarketBuyerVillagerTalk::vfunc_80() {
    s32 i = unk_1a8;
    if (sFleaMarketBuyerTalkScripts[i].flag != 0) {
        if (sFleaMarketBuyerTalkScripts[i].fn) {
            (this->*sFleaMarketBuyerTalkScripts[i].fn)();
        }
    }
}

void FleaMarketBuyerVillagerTalk::vfunc_84() {
    s32 i = unk_1a8;
    if (sFleaMarketBuyerTalkScripts[i].flag == 0) {
        if (sFleaMarketBuyerTalkScripts[i].fn) {
            (this->*sFleaMarketBuyerTalkScripts[i].fn)();
            setScript(0);
        }
    }
}

void FleaMarketBuyerVillagerTalk::setScript(s32 v) { unk_1a8 = v; }

void FleaMarketBuyerVillagerTalk::offerPrice() {
    u32 sp8 = (u32)unk_3c;
    u16 buf[2];
    ((u8 *)buf)[0] = func_02063b8c(2) + 8;
    unk_1a4 = 0;
    if (func_0206ec6c()) {
        if (func_0206ed18()) {
            s32 r6 = 0;
            s32 r4 = r6;
            u16 *p = &unk_1a0->unk_894;
            if (!Unk_ov004_0221946c_Chk(p, &buf[1])) {
                unk_1a4 = Item_GetPrice(&unk_1a0->unk_894);
                if (PlayerData_GetCurrent()) {
                    r6 = Villager_FindMemory(unk_1a0->unk_82c, (void *)PlayerData_getPlayerId(PlayerData_GetCurrent()));
                }
                if (r6) {
                    r4 = VillagerMemory_getFriendship(r6);
                }
                r4 += 0xff;
                if (r4 > 0) {
                    r4 = func_021319d0(0x3f000000, func_02132a4c(r4 << 12));
                } else {
                    r4 = func_02132c80(func_02132a4c(r4 << 12), 0x3f000000);
                }
                r4 = FX_Div(func_021329d0(r4), 0x200000);
                func_02015958(this, func_0206e8e8(), 0, 10, 1, 0);
                r4 = func_01ffcb0c(unk_1a4, r4);
                if (r4 <= 10) {
                    r4 = 10;
                }
                if (func_0206e8e8() > r4) {
                    ((u8 *)buf)[0] = func_02063b8c(2) + 10;
                } else {
                    unk_1a4 = func_0206e8e8();
                    ((u8 *)buf)[0] = func_02063b8c(2) + 12;
                    Hud_Hide();
                }
            }
        }
        VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022507b0, 0x28, "ev_fmarket3");
        TalkWindowState_setNextMessage((void *)sp8, buf, data_ov004_022507b0);
        setScript(0);
    }
}

void FleaMarketBuyerVillagerTalk::completePurchase() {
    u16 *p = &unk_1a0->unk_894;
    if (!Unk_ov004_02219378_Chk(p)) {
        if (unk_1a0->unk_8a4 != -1) {
            if (VillagerData_getVillagerId(unk_1a0->unk_82c)) {
                void *t = func_0207f58c(unk_1a0->unk_82c);
                if (t) {
                    VillagerMemory_setReceivedItem(t, &unk_1a0->unk_894);
                }
                func_0207cfb8(unk_1a0->unk_82c, &unk_1a0->unk_894);
            }
            func_ov004_022344dc(unk_1a0->unk_8a4);
            s32 i = 0;
            s32 m1 = ~i;
            unk_1a0->unk_8a4 = m1;
            unk_1a0->unk_894 = 0xfff1;
            unk_1a0->unk_ad8++;
            for (; i < 100; i++) {
                unk_1a0->unk_8a8[i] = 0xff;
            }
        }
    }
}

void FleaMarketBuyerVillagerTalk::vfunc_78(void *arg) {
    Unk_ov004_022191f8_Out *out = (Unk_ov004_022191f8_Out *)arg;
    u16 tmp;
    void *q = PlayerData_getPlayerId(PlayerData_GetCurrent());
    void *o = func_0207f55c(unk_1a0->unk_82c, q);
    if (o != 0) {
        func_02080ecc(o, 0, 0, 0);
    }
    FleaMarketBuyerVillager *b = unk_1a0;
    u32 st = b->unk_ac0;
    if (st == 5) {
        VillagerId_makeFileName(VillagerData_getVillagerId(b->unk_82c), data_ov004_02250800, 0x28, "q10_wait");
        out->unk_00 = (u32)data_ov004_02250800;
        out->unk_04 = func_02063b8c(3);
    } else if (st == 3) {
        VillagerId_makeFileName(VillagerData_getVillagerId(b->unk_82c), data_ov004_02250800, 0x28, "ev_fmarket3");
        out->unk_00 = (u32)data_ov004_02250800;
        out->unk_04 = func_02063b8c(2) + 2;
    } else {
        switch (st) {
        case 0:
            VillagerId_makeFileName(VillagerData_getVillagerId(b->unk_82c), data_ov004_02250800, 0x28, "q10_call");
            out->unk_04 = func_02063b8c(3);
            break;
        case 1:
            VillagerId_makeFileName(VillagerData_getVillagerId(b->unk_82c), data_ov004_02250800, 0x28, "ev_fmarket3");
            out->unk_04 = func_02063b8c(2);
            break;
        case 2: {
            VillagerId_makeFileName(VillagerData_getVillagerId(b->unk_82c), data_ov004_02250800, 0x28, "ev_fmarket3");
            u16 *p = &unk_1a0->unk_894;
            BOOL eq;
            if (Item_IsFurniture(p)) {
                tmp = 0xfff1;
                if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&tmp)) {
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
            if (eq || unk_1a0->unk_910 == 5) {
                out->unk_04 = func_02063b8c(2) + 4;
            } else {
                func_0201578c(this, &unk_1a0->unk_894, 0, 7);
                out->unk_04 = func_02063b8c(2) + 6;
            }
            break;
        }
        }
        out->unk_00 = (u32)data_ov004_02250800;
    }
}

BOOL FleaMarketBuyerVillager::vfunc_7c() {
    if (Unk_ov004_022191cc_Is1(data_020e416c) == 0 || unk_ad6 == 0) {
        return TRUE;
    }
    return FALSE;
}

void FleaMarketBuyerVillager::vfunc_80() {
    unk_ad6 = 1;
}

void FleaMarketBuyerVillagerTalk::vfunc_14() {
    u8 buf;
    FleaMarketBuyerVillager *b = unk_1a0;
    u32 st = b->unk_ac0;
    if (st == 5 || st == 3) {
        if (st == 5) {
            b->unk_ac0 = 6;
        } else {
            b->unk_ac0 = 4;
        }
        VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_02250828, 0x28, "q_bye");
        buf = func_02063b8c(3);
        TalkWindowState_setNextMessage(unk_3c, &buf, data_ov004_02250828);
    } else {
        switch (unk_1e) {
        case 0:
        case 1:
        case 2:
            if (st == 6 || st == 1) {
                TalkWindowState_setNextMessage(unk_3c, gTalkMsgIndexEnd, 0);
            } else if (st == 0) {
                void *q;
                if (PlayerData_GetCurrent() != 0) {
                    q = PlayerData_getPlayerId(PlayerData_GetCurrent());
                } else {
                    q = 0;
                }
                void *o = unk_1a0->unk_82c;
                if (o != 0 && q != 0) {
                    func_0207c5e0(o, q);
                }
                FleaMarketBuyerVillager **pp = &unk_1a0;
                (*pp)->unk_ac0 = 1;
                (*pp)->unk_ad4 = 0x28;
                TalkWindowState_setNextMessage(unk_3c, gTalkMsgIndexEnd, 0);
                unk_1a0->changeAct(1);
            }
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 10:
        case 11:
        case 12:
        case 13:
            break;
        case 8:
        case 9:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            Hud_Show();
            break;
        }
    }
}

void FleaMarketBuyerVillagerTalk::clearOffer() {
    unk_1a0->unk_894 = 0xfff1;
}

void FleaMarketBuyerVillagerTalk::vfunc_18() {
    u8 buf;
    u16 tmp;
    u32 sel;
    s32 st;
    ActorTalkRequest_getChoiceList(this);
    st = ChoiceList_getResult();
    sel = 0xff;
    FleaMarketBuyerVillager *b = unk_1a0;
    if (b->unk_ac0 == 2) {
        switch (unk_1e) {
        case 6:
        case 7:
        case 10:
        case 11:
            VillagerId_makeFileName(VillagerData_getVillagerId(b->unk_82c), data_ov004_022507d8, 0x28, "ev_fmarket3");
            if (st == 0) {
                func_02015170(this, 0x38, 0);
                func_020151d0(this, 2);
                setScript(1);
            } else {
                sel = (u8)(func_02063b8c(2) + 8);
                clearOffer();
            }
            break;
        case 8:
        case 9:
            break;
        case 12:
        case 13:
            VillagerId_makeFileName(VillagerData_getVillagerId(b->unk_82c), data_ov004_022507d8, 0x28, "ev_fmarket3");
            if (st == 0) {
                void *r7 = func_02098750(PlayerData_GetCurrent());
                st = NpcActor_CheckPayoutFits(unk_1a0, (void *)unk_1a4, 0);
                tmp = Item_FindMoneyBagForAmount((void *)unk_1a4, 0, 0);
                if (tmp == 0xfff1) {
                    tmp = 0x1492;
                }
                if (func_02097a90(r7, (void *)unk_1a4, 1, 0) == 0) {
                    sel = (u8)(func_02063b8c(2) + 0x12);
                } else {
                    switch (st) {
                    case 0:
                        func_02014e60(this, &tmp, 0, 5, 0);
                        NpcActor_PayPlayer(unk_1a0, (void *)unk_1a4);
                        sel = (u8)(func_02063b8c(2) + 0xe);
                        completePurchase();
                        break;
                    case 1:
                        func_02014e60(this, &tmp, 0, 5, 0);
                        sel = (u8)(func_02063b8c(2) + 0xe);
                        NpcActor_PayPlayer(unk_1a0, (void *)unk_1a4);
                        completePurchase();
                        break;
                    case 2:
                        break;
                    }
                }
            } else {
                sel = (u8)(func_02063b8c(2) + 0x10);
                clearOffer();
            }
            break;
        }
        if (sel != 0xff) {
            buf = sel;
            TalkWindowState_setNextMessage(unk_3c, &buf, data_ov004_022507d8);
        }
    }
}

BOOL FleaMarketBuyerVillager::vfunc_48() {
    if (func_02014220(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL FleaMarketBuyerVillager::vfunc_58() {
    if (func_02014220(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void FleaMarketBuyerVillager::vfunc_4c(s32 cmd, u32 b) {
    switch (cmd) {
    case 1:
        unk_914.vfunc_08();
        func_02015ab0(&unk_914, Unk_020d77a4_getPlayerActor(this, 4));
        if (unk_ac0 == 5 || unk_ac0 == 3) {
            changeAct(7);
        } else {
            changeAct(6);
        }
        if (unk_ac0 == 0) {
            func_ov004_0223584c();
            unk_adc = (s32)func_ov004_02235788();
            func_020b1028();
            func_0202ffb0(0);
            func_ov004_02235d04();
            Clock_GetDateTime(unk_ac8);
        }
        break;
    case 0:
        unk_914.vfunc_08();
        func_02015ab0(&unk_914, Unk_020d77a4_getPlayerActor(this, 4));
        changeAct(6);
        break;
    case 8:
        if (unk_ac0 == 6) {
            Unk_ov004_02218cdc_Rec rec;
            Unk_ov004_02218cdc_Rec *src = (Unk_ov004_02218cdc_Rec *)func_020947f0(4);
            rec.a = src->a;
            rec.b = src->b;
            rec.c = src->c;
            if (func_0202ff64(&rec)) {
                func_0202ff44();
                break;
            }
        }
        changeAct(3);
        break;
    }
}

BOOL FleaMarketBuyerVillager::checkLeave() {
    Unk_ov004_02218cdc_Rec rec;
    u32 z[2];
    Unk_ov004_02218cdc_Rec *src = (Unk_ov004_02218cdc_Rec *)func_020947f0(4);
    rec.a = src->a;
    rec.b = src->b;
    rec.c = src->c;
    if (func_0202ff64(&rec)) {
        unk_ac0 = 5;
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    if (TalkRequest_IsActive()) {
        return FALSE;
    }
    {
        if (unk_ac4 != 0) {
            unk_ac4 = unk_ac4 - 1;
            if (unk_ac4 == 1) {
                unk_ac0 = 3;
                TalkRequest_AddPlayerTalk6(this, 0);
                return TRUE;
            }
        }
    }
    z[0] = 0;
    z[1] = 0;
    Clock_GetDateTime(z);
    s32 n = DateTime_DiffMinutes(unk_ac8, z);
    {
        if (unk_ae0 != 0) {
            unk_ae0 = unk_ae0 + 1;
        }
    }
    if (n >= 0x3c || unk_ae0 > 0x258) {
        unk_ac0 = 3;
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL FleaMarketBuyerVillager::pickFurnitureToView() {
    if (!Unk_ov004_02218a48_Eq(&unk_894, 0xfff1)) {
        return TRUE;
    }
    if (unk_adc == 0 || unk_ad8 >= 3) {
        if (unk_ac4 == 0) {
            unk_ac4 = 0x258;
        }
        return FALSE;
    }
    s32 start = func_02063b8c(unk_adc);
    s32 i = start;
    do {
        if (isFurnitureForSale(i)) {
            void *e = func_ov004_02235720(func_ov004_0223584c(), i);
            unk_894 = Item_MakeFurniture(FtrActor_GetFtrIndex(e), 0);
            FtrActor_GetCenter(e, unk_898);
            setViewDistance(e);
            pushViewedFurniture(i);
            unk_8a4 = i;
            goto ok;
        }
        i++;
        if (i >= unk_adc) {
            i = 0;
        }
    } while (i != start);
    if (unk_ac4 == 0) {
        unk_ac4 = 0x258;
    }
    return FALSE;
ok:
    return TRUE;
}

BOOL FleaMarketBuyerVillager::isFurnitureForSale(s32 idx) {
    u16 v;
    void *p = func_ov004_02235720(func_ov004_0223584c(), idx);
    if (p == 0) {
        return FALSE;
    }
    if (func_ov004_02234440(idx) == 0) {
        return FALSE;
    }
    v = Item_MakeFurniture(FtrActor_GetFtrIndex(p), 0);
    BOOL r0 = FALSE;
    volatile u16 *pv = &v;
    u32 w = *pv;
    u32 w2 = *pv;
    if (w2 >= 0x3d84 && w <= 0x3e03) {
        r0 = TRUE;
    }
    if (r0 || (w >= 0x3ea4 && w <= 0x3f23) || (w >= 0x4224 && w <= 0x42a3) ||
        (w >= 0x3f24 && w <= 0x3fa3) || Unk_ov004_02218a48_Eq(&v, 0x409c) || Unk_ov004_02218a48_Eq(&v, 0x40a0) ||
        Unk_ov004_02218a48_Eq(&v, 0x3820)) {
        return FALSE;
    }
    {
        s32 i;
        for (i = 0; i < 100; i++) {
            if (idx == unk_8a8[i]) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

void FleaMarketBuyerVillager::pushViewedFurniture(u32 v) {
    s32 i;
    for (i = 0; i < 99; i++) {
        unk_8a8[i] = unk_8a8[i + 1];
    }
    unk_8a8[99] = v;
}

void FleaMarketBuyerVillager::setViewDistance(void *arg) {
    FtrActor_GetFtrIndex(arg);
    switch (FtrInfo_GetUnk05()) {
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

