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

class FleaMarketSellerVillager;

#define VillagerId_makeFileName _ZN10VillagerId12makeFileNameEPvjj
#define func_020135c4 _ZN12Unk_0201347413func_020135c4Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_0201578c _ZN16ActorTalkRequest13func_0201578cEjjj
#define func_02015958 _ZN16ActorTalkRequest13func_02015958Eijiii
#define ActorTalkRequest_getChoiceList _ZN16ActorTalkRequest13getChoiceListEv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201a99c _ZN12Unk_0201a8c413func_0201a99cEs
#define func_0201a9ec _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3
#define Unk_020d77a4_setTalkRequest _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c
#define Unk_020d77a4_getPlayerActor _ZN12Unk_020d77a414getPlayerActorEj
#define Unk_020d77a4_getAngleToPlayer _ZN12Unk_020d77a416getAngleToPlayerEj
#define Unk_020d77a4_getAngleTo _ZN12Unk_020d77a410getAngleToEPS_
#define Unk_020d77a4_getDistanceToPlayer _ZN12Unk_020d77a419getDistanceToPlayerEj
#define Unk_020d77a4_getNpcIndex _ZN12Unk_020d77a411getNpcIndexEv
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define func_0204e328 _ZN8BlockMap13func_0204e328EPv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define VillagerDataProfileView_getShirt _ZN23VillagerDataProfileView8getShirtEv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define VillagerMemory_getFriendship _ZN14VillagerMemory13getFriendshipEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define FtrActor_findOwnTile _ZN8FtrActor11findOwnTileEPiS0_ii
#define func_ov004_022355d8 _ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii
#define func_ov004_02235624 _ZN18Unk_ov004_0223570819func_ov004_02235624Eiii
typedef BOOL (FleaMarketSellerVillager::*Unk_ov004_022187b8_Fn)();

struct Unk_ov004_022187b8_Ent {
    Unk_ov004_022187b8_Fn a;
    Unk_ov004_022187b8_Fn b;
};

struct Unk_ov004_022187fc_Ent {
    Unk_ov004_022187b8_Fn a;
    u8 pad[8];
};

struct Unk_ov004_0221823c_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221841c_Vec {
    s32 x, y, z;
    Unk_ov004_0221841c_Vec() {}
    ~Unk_ov004_0221841c_Vec() {}
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

struct Unk_ov004_0224c4e4_Out {
    void *unk_00;
    u8 unk_04;
};

extern "C" {
extern u16 data_020c6cc8;
extern void *gSceneBlockMap;
extern s32 gCurrentHeap;
extern u8 gTouchPrevHeld;
extern u8 gTouchPrevChanged;
extern u8 data_020e416c;
extern u16 gPad[];
extern s16 data_02135f44[];
extern void *gCommManager;
extern Unk_ov004_022187b8_Ent sFleaMarketSellerActTable[8];
extern u8 data_ov004_022506c8[0x28];
extern u8 data_ov004_022506f0[0x28];

Unk_ov004_0221823c_Vec *func_020947f0(u32);
void func_0201ae00(void *, void *, void *);
s32 Unk_020d77a4_getDistanceToPlayer(void *, u32);
s32 Unk_020d77a4_getAngleToPlayer(void *, u32);
s32 Unk_020d77a4_getPlayerActor(void *, u32);
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
s32 TalkRequest_EndTalkWith(void *);
void TalkRequest_AddPlayerTalk6(void *, u32);
void func_020141b4(void *, u32, s32, u32);
s32 Unk_020d77a4_getAngleTo(void *, void *);
void NpcActor_ChargePlayer(void *, s32);
void func_02099014(void *, s32);
void func_ov004_022344dc(void);
void func_0207e400(void *, void *, s32, s32);
s32 Item_IsFurniture(void *);
u32 Item_GetFurnitureIndex(void *);
void func_ov004_02235d04(void);
void func_020135c4(void *);
void func_020b50dc(void);
s32 func_020b5178(void);
void func_0202ffb0(u32);
s32 Unk_020d77a4_getNpcIndex(void *);
s32 FgData_GetVillagerLayout(void *, s32, s32);
void Unk_020d77a4_setTalkRequest(void *, void *);
void VillagerTalk_begin(void *, void *, u32);
void Mem_Free(s32);
s32 FtrInfo_GetUnk05(void);
void *VillagerDataProfileView_getShirt(void *o);
void *func_0207e310(void *o);
void *VillagerData_getVillagerId(void *o);
void *func_02095204(u32 a);
s32 func_0202ff64(void *p);
s32 TalkRequest_IsActive();
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
void FieldPos_ToUnit(s32 *x, s32 *y, void *v);
void *func_ov004_02235718();
s32 func_ov004_02235624(void *g, s32 x, s32 y, u32 z);
void *func_ov004_022355d8(void *g, s32 x, s32 y, u32 z);
u16 Item_MakeFurniture(void *p, u32 a);
void FtrActor_findOwnTile(void *o, s32 *x, s32 *y, u32 a, u32 b);
void *func_020b50b4();
void func_020b60b0(void *a, void *b);
void *func_020b6048(void *a, u32 b, u32 c);
s32 func_0207e3b8(void *o, s32 *xy, u32 a, u32 b);
void *ChoiceList_getResult(void *o);
u32 VillagerId_makeFileName(void *a, void *b, u32 c, const void *d);
void *FtrActor_GetFtrIndex();
s32 func_02098ffc();
void TalkWindowState_setNextMessage(void *a, u8 *b, void *c);
void Hud_Hide();
u32 func_02063b8c(u32 a);
void *PlayerData_GetCurrent();
void *PlayerData_getPlayerId(void *o);
void *func_0207f55c(void *o, void *a);
void *Villager_FindMemory(void *o, void *a);
void func_02080ecc(void *o, u32 a, u32 b, u32 c);
s32 VillagerMemory_getFriendship(void *o);
void func_ov004_022180e0(void *o);
s32 Item_GetPrice(void *o);
void func_02015958(void *o, s32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_0207e7a8(void *o, u16 *p);
s32 NpcActor_CanPlayerPay(void *o, s32 a);
void func_0201578c(void *o, void *a, u32 b, u32 c);
void *ActorTalkRequest_getChoiceList(void *o);
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
    virtual void vfunc_4c(s32 a);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_58();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xd4 - 0x90];
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

// Dialog sub-object at +0x8a4 of FleaMarketSellerVillager. Its vtable (0x0224c4e4) names every slot after the class that last overrides it;
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
    virtual void vfunc_78(Unk_ov004_0224c4e4_Out *out);
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

class FleaMarketSellerVillagerTalk : public VillagerTalk {
public:
    FleaMarketSellerVillagerTalk();
    virtual ~FleaMarketSellerVillagerTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov004_0224c4e4_Out *out);

    void sellFurniture();
    void attachOwner(FleaMarketSellerVillager *owner);

    /* 0x1a0 */ FleaMarketSellerVillager *unk_1a0;
    /* 0x1a4 */ s32 unk_1a4;
};

class FleaMarketSellerVillager : public VillagerActor {
public:
    FleaMarketSellerVillager()
        : unk_894(0xfff1), unk_898(0), unk_89c(0) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    BOOL checkPlayerLeaving();
    BOOL requestTradeTalk();
    BOOL checkFurnitureTap();
    BOOL mainAct07();
    BOOL setupAct07();
    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 idx);

    /* 0x894 */ u16 unk_894;
    /* 0x896 */ u16 pad_896;
    /* 0x898 */ s32 unk_898;
    /* 0x89c */ s32 unk_89c;
    /* 0x8a0 */ s32 unk_8a0;
    /* 0x8a4 */ FleaMarketSellerVillagerTalk unk_8a4;
    /* 0xa4c */ u8 unk_a4c;
    /* 0xa4d */ u8 unk_a4d;
    /* 0xa4e */ u8 unk_a4e;
    /* 0xa4f */ u8 pad_a4f;
    /* 0xa50 */ s32 unk_a50;
    /* 0xa54 */ s32 unk_a54;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" FleaMarketSellerVillager *FleaMarketSellerVillager_Create();
extern "C" Unk_ov004_SceneEntry sFleaMarketSellerVillagerProfile = {(void *(*)())FleaMarketSellerVillager_Create, 0x86, 0x8a, 2, 0x5000, 0x5000, 0x3e800};
extern "C" {
u8 data_ov004_022506c8[0x28];
u8 data_ov004_022506f0[0x28];
void _ZN24FleaMarketSellerVillager10setupAct00Ev();
void _ZN24FleaMarketSellerVillager9mainAct00Ev();
void _ZN24FleaMarketSellerVillager10setupAct01Ev();
void _ZN24FleaMarketSellerVillager9mainAct01Ev();
void _ZN24FleaMarketSellerVillager9mainAct02Ev();
void _ZN24FleaMarketSellerVillager10setupAct03Ev();
void _ZN24FleaMarketSellerVillager9mainAct03Ev();
void _ZN24FleaMarketSellerVillager10setupAct04Ev();
void _ZN24FleaMarketSellerVillager9mainAct04Ev();
void _ZN24FleaMarketSellerVillager10setupAct05Ev();
void _ZN24FleaMarketSellerVillager9mainAct05Ev();
void _ZN24FleaMarketSellerVillager10setupAct06Ev();
void _ZN24FleaMarketSellerVillager9mainAct06Ev();
void _ZN24FleaMarketSellerVillager10setupAct07Ev();
void _ZN24FleaMarketSellerVillager9mainAct07Ev();
// ptmf constants (named: their order cannot be reproduced natively), defined in the order that gives the original layout
void *data_ov004_0224c464[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct04Ev, 0};
void *data_ov004_0224c44c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct00Ev, 0};
void *data_ov004_0224c4bc[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct00Ev, 0};
void *data_ov004_0224c4b4[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct01Ev, 0};
void *data_ov004_0224c4ac[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct06Ev, 0};
void *data_ov004_0224c4a4[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct02Ev, 0};
void *data_ov004_0224c49c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct03Ev, 0};
void *data_ov004_0224c494[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct03Ev, 0};
void *data_ov004_0224c454[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct07Ev, 0};
void *data_ov004_0224c48c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct04Ev, 0};
void *data_ov004_0224c47c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct05Ev, 0};
void *data_ov004_0224c474[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct05Ev, 0};
void *data_ov004_0224c46c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct06Ev, 0};
void *data_ov004_0224c45c[2] = {(void *)_ZN24FleaMarketSellerVillager10setupAct07Ev, 0};
void *data_ov004_0224c484[2] = {(void *)_ZN24FleaMarketSellerVillager9mainAct01Ev, 0};
}
#define PM(x) (*(Unk_ov004_022187b8_Fn *)(x))
extern "C" Unk_ov004_022187b8_Ent sFleaMarketSellerActTable[8] = {
    {PM(data_ov004_0224c44c), PM(data_ov004_0224c4bc)},
    {PM(data_ov004_0224c4b4), PM(data_ov004_0224c484)},
    {0, PM(data_ov004_0224c4a4)},
    {PM(data_ov004_0224c49c), PM(data_ov004_0224c494)},
    {PM(data_ov004_0224c48c), PM(data_ov004_0224c464)},
    {PM(data_ov004_0224c47c), PM(data_ov004_0224c474)},
    {PM(data_ov004_0224c46c), PM(data_ov004_0224c4ac)},
    {PM(data_ov004_0224c45c), PM(data_ov004_0224c454)}};
#define data_ov004_02250720 ((Unk_ov004_022187fc_Ent *)((u8 *)sFleaMarketSellerActTable + 8))

// ---------------------------------------------------------------------------------------------------------------------
static inline BOOL Unk_ov004_02217954_Both() {
    if (gTouchPrevHeld != 0 && gTouchPrevChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" FleaMarketSellerVillager *FleaMarketSellerVillager_Create() {
    return new FleaMarketSellerVillager;
}

BOOL FleaMarketSellerVillager::vfunc_04() {
    if (!VillagerActor::vfunc_04()) {
        return FALSE;
    }
    Unk_020d77a4_setTalkRequest(this, &unk_8a4);
    unk_8a4.attachOwner(this);
    return TRUE;
}

BOOL FleaMarketSellerVillager::vfunc_00() {
    if (!VillagerActor::vfunc_00()) {
        return FALSE;
    }
    func_ov004_02235d04();
    unk_894 = 0xfff1;
    func_020135c4(&unk_558);
    func_020b50dc();
    if (func_020b5178()) {
        changeAct(4);
    } else {
        changeAct(0);
    }
    func_0202ffb0(0);
    unk_a54 = 0;
    unk_a50 = FgData_GetVillagerLayout(&unk_a54, Unk_020d77a4_getNpcIndex(this), gCurrentHeap);
    return TRUE;
}

BOOL FleaMarketSellerVillager::vfunc_0c() {
    if (!VillagerActor::vfunc_0c()) {
        return FALSE;
    }
    if (unk_a50 != 0) {
        Mem_Free(unk_a50);
        unk_a50 = 0;
        unk_a54 = 0;
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::updateAct() {
    BOOL r = FALSE;
    if (data_ov004_02250720[unk_8a0].a) {
        r = (this->*sFleaMarketSellerActTable[unk_8a0].b)();
    }
    return r;
}

void FleaMarketSellerVillager::changeAct(s32 idx) {
    BOOL r = TRUE;
    if (sFleaMarketSellerActTable[idx].a) {
        r = (this->*sFleaMarketSellerActTable[idx].a)();
    }
    if (r) {
        unk_8a0 = idx;
    }
}

BOOL FleaMarketSellerVillager::setupAct00() {
    unk_a4c = 0;
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct00() {
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct04() {
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct04() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4, r6;
    Unk_ov004_0221823c_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    r6 = Unk_020d77a4_getDistanceToPlayer(this, 4);
    r4 = func_020e780c(unk_8e, Unk_020d77a4_getAngleToPlayer(this, 4));
    func_0201ae00(&b, this, &a);
    if (r6 > 0x3000 && func_020e96ec(&b, &unk_5c) != 0) {
        changeAct(6);
    } else {
        if (r4 > 0x2000) {
            changeAct(5);
        }
    }
    if (checkPlayerLeaving()) {
        return TRUE;
    }
    requestTradeTalk();
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct05() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct05() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4, r6;
    if (checkPlayerLeaving()) {
        return TRUE;
    }
    if (requestTradeTalk()) {
        return TRUE;
    }
    Unk_ov004_0221823c_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    r4 = Unk_020d77a4_getDistanceToPlayer(this, 4);
    r6 = Unk_020d77a4_getAngleToPlayer(this, 4);
    func_0201ae00(&b, this, &a);
    if (r4 > 0x3000 && func_020e96ec(&b, &unk_5c) != 0) {
        changeAct(6);
        return TRUE;
    }
    func_0201a99c(&unk_350, r6);
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564) != 0) {
            changeAct(4);
        }
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct06() {
    func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct06() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4;
    if (checkPlayerLeaving()) {
        return TRUE;
    }
    if (requestTradeTalk()) {
        return TRUE;
    }
    Unk_ov004_0221823c_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    r4 = Unk_020d77a4_getDistanceToPlayer(this, 4);
    func_0201ae00(&b, this, &a);
    if (r4 > 0x4000) {
        if (func_020197a8(&unk_564) == 1) {
            func_020196b4(&unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(&unk_564) == 2) {
            func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(&unk_350, &b);
    if (r4 <= 0x3000 || func_020e972c(&b, &unk_5c) != 0) {
        changeAct(4);
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct03() {
    void *t = func_02015aac(&unk_8a4);
    s32 r = 0;
    if (t != 0) {
        r = Unk_020d77a4_getAngleTo(this, t);
    }
    func_020141b4(&unk_618, 0, r, 1);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct03() {
    Unk_ov004_0221841c_Vec a;
    Unk_ov004_0221823c_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    if (func_02014220(&unk_618) == 0) {
        func_020b4bbc(func_020b4934(), 0);
        changeAct(2);
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct01() {
    void *t = func_02015aac(&unk_8a4);
    s32 r = 0;
    if (t != 0) {
        r = Unk_020d77a4_getAngleTo(this, t);
    }
    func_020141b4(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct01() {
    if (func_02014220(&unk_618) == 0) {
        if (unk_a4c == 0) {
            unk_a4c = 1;
        }
        unk_894 = 0xfff1;
        TalkRequest_EndTalkWith(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::mainAct02() {
    return TRUE;
}

BOOL FleaMarketSellerVillager::setupAct07() {
    unk_a4d = 0x32;
    func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

// ---- FleaMarketSellerVillager ----

BOOL FleaMarketSellerVillager::mainAct07() {
    Unk_ov004_0221823c_Vec a, b;
    s32 r4;
    Unk_ov004_0221823c_Vec *p = func_020947f0(4);
    a.x = p->x;
    a.y = p->y;
    a.z = p->z;
    func_0201ae00(&b, this, &a);
    r4 = Unk_020d77a4_getDistanceToPlayer(this, 4);
    func_0204e328(gSceneBlockMap, &unk_5c);
    if (r4 > 0x4000) {
        if (func_020197a8(&unk_564) == 1) {
            func_020196b4(&unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(&unk_564) == 2) {
            func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(&unk_350, &b);
    if (r4 <= 0x3000 || func_020e972c(&b, &unk_5c) != 0 || func_020e7518(&unk_a4d) == 0) {
        VillagerTalk *pb = &unk_8a4;
        pb->vfunc_08();
        func_02015ab0(&unk_8a4, Unk_020d77a4_getPlayerActor(this, 4));
        changeAct(1);
    }
    return TRUE;
}

FleaMarketSellerVillagerTalk::FleaMarketSellerVillagerTalk() {
}

FleaMarketSellerVillagerTalk::~FleaMarketSellerVillagerTalk() {
}

void FleaMarketSellerVillagerTalk::attachOwner(FleaMarketSellerVillager *owner) {
    vfunc_08();
    VillagerTalk_begin(this, owner, 0x11);
    unk_1a0 = owner;
}

// ---- FleaMarketSellerVillagerTalk ----

void FleaMarketSellerVillagerTalk::sellFurniture() {
    u16 *p = &unk_1a0->unk_894;
    BOOL same;
    if (Item_IsFurniture(p)) {
        u16 t = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t)) {
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
        NpcActor_ChargePlayer(unk_1a0, unk_1a4);
        func_02099014(&unk_1a0->unk_894, 0);
        FleaMarketSellerVillager *o = unk_1a0;
        if (func_ov004_02235624(func_ov004_02235718(), o->unk_898, o->unk_89c, 0) != -1) {
            func_ov004_022344dc();
            if (unk_1a0->vfunc_64()) {
                FleaMarketSellerVillager *q = unk_1a0;
                func_0207e400(q->vfunc_64(), &q->unk_898, q->unk_a50, q->unk_a54);
            }
        }
        unk_1a0->unk_894 = 0xfff1;
    }
}

void FleaMarketSellerVillagerTalk::vfunc_78(Unk_ov004_0224c4e4_Out *out) {
    void *r7 = func_0207f55c(unk_1a0->unk_82c, PlayerData_getPlayerId(PlayerData_GetCurrent()));
    if (r7) {
        func_02080ecc(r7, 0, 0, 0);
    }
    if (unk_1a0->unk_a4c == 3) {
        VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, "ev_fmarket2");
        out->unk_00 = data_ov004_022506f0;
        out->unk_04 = func_02063b8c(3) + 3;
        return;
    }
    u16 *q = &unk_1a0->unk_894;
    u16 w;
    u16 t;
    BOOL eq;
    if (Item_IsFurniture(q)) {
        t = 0xfff1;
        eq = Item_GetFurnitureIndex(q) == Item_GetFurnitureIndex(&t) ? TRUE : FALSE;
    } else {
        eq = *q == 0xfff1 ? TRUE : FALSE;
    }
    if (!eq) {
        s32 r6 = 0;
        func_0201578c(this, &unk_1a0->unk_894, r6, 7);
        unk_1a4 = Item_GetPrice(&unk_1a0->unk_894);
        if (unk_1a4 < 10) {
            unk_1a4 = 10;
        }
        if (PlayerData_GetCurrent()) {
            r7 = Villager_FindMemory(unk_1a0->unk_82c, PlayerData_getPlayerId(PlayerData_GetCurrent()));
        }
        if (r7) {
            r6 = VillagerMemory_getFriendship(r7);
        }
        s32 d = 0xff - r6;
        float f;
        if (d > 0) {
            f = 0.5f + (float)(d << 12);
        } else {
            f = (float)(d << 12) - 0.5f;
        }
        s32 v = (s32)f;
        unk_1a4 = FX_Div(func_01ffcb0c(unk_1a4, v), 0x200000);
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
        if (!(unk_1a0->unk_898 != -1 && func_02098ffc() != -1 && r6 > 3 && NpcActor_CanPlayerPay(unk_1a0, unk_1a4))) {
            VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, "q11_trade4");
        } else {
            VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, "q11_trade3");
        }
        out->unk_00 = data_ov004_022506f0;
        out->unk_04 = func_02063b8c(3);
    } else {
        switch (unk_1a0->unk_a4c) {
        case 0:
            VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, "ev_fmarket2");
            out->unk_04 = func_02063b8c(3);
            break;
        case 1:
            VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, "q11_trade1");
            out->unk_04 = func_02063b8c(3);
            break;
        case 2:
            VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022506f0, 0x28, "ev_fmarket2");
            out->unk_04 = func_02063b8c(3) + 6;
            break;
        }
        out->unk_00 = data_ov004_022506f0;
    }
}

BOOL FleaMarketSellerVillager::vfunc_7c() {
    BOOL f = data_020e416c == 1 ? TRUE : FALSE;
    if (!f || unk_a4e == 0) {
        return TRUE;
    }
    return FALSE;
}

void FleaMarketSellerVillager::vfunc_80() { unk_a4e = 1; }

// ---------------------------------------------------------------------------------------------------------------------
void FleaMarketSellerVillagerTalk::vfunc_14() {}

void FleaMarketSellerVillagerTalk::vfunc_18() {
    void *r6 = ChoiceList_getResult(ActorTalkRequest_getChoiceList(this));
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
                VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022506c8, 0x28, "q11_trade2");
                Hud_Hide();
                unk_1a0->unk_a4c = 2;
            } else {
                VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022506c8, 0x28, "q_no");
            }
            break;
        }
    } else if (unk_1a0->unk_a4c == 2) {
        switch (unk_1e) {
        case 0:
        case 1:
        case 2:
            if (r6 == 0) {
                VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022506c8, 0x28, "q11_yes");
                sellFurniture();
            } else {
                VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a0->unk_82c), data_ov004_022506c8, 0x28, "q11_no");
            }
            s = data_ov004_022506c8;
            r4 = (u8)func_02063b8c(3);
            break;
        }
    }
    if (r4 != 0xff) {
        u8 b = r4;
        TalkWindowState_setNextMessage(unk_3c, &b, s);
    }
}

BOOL FleaMarketSellerVillager::vfunc_48() {
    if (func_02014220(&unk_618) != 0 || requestTradeTalk()) {
        return FALSE;
    }
    return TRUE;
}

BOOL FleaMarketSellerVillager::vfunc_58() {
    if (func_02014220(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void FleaMarketSellerVillager::vfunc_4c(s32 a) {
    switch (a) {
    case 1:
        unk_8a4.vfunc_08();
        func_02015ab0(&unk_8a4, Unk_020d77a4_getPlayerActor(this, 4));
        if (unk_a4c == 0) {
            changeAct(1);
        } else if (unk_a4c == 3) {
            changeAct(3);
        } else {
            changeAct(7);
        }
        break;
    case 0:
        unk_8a4.vfunc_08();
        func_02015ab0(&unk_8a4, Unk_020d77a4_getPlayerActor(this, 4));
        changeAct(1);
        break;
    case 8:
        changeAct(4);
        break;
    }
}

BOOL FleaMarketSellerVillager::checkFurnitureTap() {
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
    if (p != NULL && TalkRequest_IsActive() == 0 && func_02014220(&unk_618) == 0 && ((gPad[1] & 1) != 0 || flag)) {
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
    FieldPos_ToUnit(&hx, &hy, &v0);
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
            FieldPos_ToUnit(&ax, &ay, &v1);
            if (ax != hx || ay != hy) {
                return FALSE;
            }
        }
    }
    void *c2 = func_ov004_022355d8(func_ov004_02235718(), hx, hy, 0);
    if (c2 == NULL) {
        return FALSE;
    }
    r[0] = Item_MakeFurniture(FtrActor_GetFtrIndex(), 0);
    x2 = hx;
    y2 = hy;
    FtrActor_findOwnTile(c2, &x2, &y2, 0, 0);
    hx = x2;
    hy = y2;
    unk_894 = r[0];
    if (vfunc_64()) {
        if (func_0207e3b8(vfunc_64(), &hx, unk_a50, unk_a54)) {
            BOOL e1;
            if (Item_IsFurniture(&unk_894)) {
                r[1] = 0x409c;
                e1 = Item_GetFurnitureIndex(&unk_894) == Item_GetFurnitureIndex(&r[1]) ? TRUE : FALSE;
            } else {
                e1 = unk_894 == 0x409c ? TRUE : FALSE;
            }
            if (e1) {
                goto fail;
            }
            BOOL e2;
            if (Item_IsFurniture(&unk_894)) {
                r[2] = 0x40a0;
                e2 = Item_GetFurnitureIndex(&unk_894) == Item_GetFurnitureIndex(&r[2]) ? TRUE : FALSE;
            } else {
                e2 = unk_894 == 0x40a0 ? TRUE : FALSE;
            }
            if (e2) {
                goto fail;
            }
            BOOL e3;
            if (Item_IsFurniture(&unk_894)) {
                r[3] = 0x3820;
                e3 = Item_GetFurnitureIndex(&unk_894) == Item_GetFurnitureIndex(&r[3]) ? TRUE : FALSE;
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

BOOL FleaMarketSellerVillager::requestTradeTalk() {
    if (checkFurnitureTap()) {
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL FleaMarketSellerVillager::checkPlayerLeaving() {
    struct V { s32 x, y, z; } v;
    s32 *s = (s32 *)func_020947f0(4);
    v.x = s[0];
    v.y = s[1];
    v.z = s[2];
    if (func_0202ff64(&v)) {
        unk_a4c = 3;
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

