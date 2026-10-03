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

class SickVillager;

#define VillagerId_makeFileName _ZN10VillagerId12makeFileNameEPvjj
#define func_020135c4 _ZN12Unk_0201347413func_020135c4Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_02014ce4 _ZN12Unk_0201442013func_02014ce4EPtjjj
#define func_020157e8 _ZN16ActorTalkRequest13func_020157e8Ejj
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define func_02019614 _ZN12Unk_0201985813func_02019614Ejt
#define func_02019638 _ZN12Unk_0201985813func_02019638Eiht
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_0201a8d0 _ZN12Unk_0201a8c413func_0201a8d0Eiiii
#define func_0201a9ec _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3
#define func_0201ad30 _ZN12Unk_0201ad2013func_0201ad30Ei
#define func_0201ad34 _ZN12Unk_0201ad2013func_0201ad34Ei
#define func_0201b138 _ZN12Unk_020d77a46onDrawEv
#define func_0201bb3c _ZN12Unk_020d77a413func_0201bb3cEP16Unk_020d77a4_Vec
#define Unk_020d77a4_setTalkRequest _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c
#define Unk_020d77a4_getPlayerActor _ZN12Unk_020d77a414getPlayerActorEj
#define Unk_020d77a4_getAngleTo _ZN12Unk_020d77a410getAngleToEPS_
#define func_0201c3e8 _ZN12VillagerMood13func_0201c3e8EP12VillagerTalk
#define func_0201c574 _ZN12VillagerMood13func_0201c574EP12VillagerTalk
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define func_0202d928 _ZN13VillagerActor9preDeleteEv
#define func_0202d948 _ZN13VillagerActor8vfunc_00Ev
#define func_0202dab0 _ZN13VillagerActor8vfunc_04Ev
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define TalkWindowState_openChoices _ZN15TalkWindowState11openChoicesEi
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define func_02099678 _ZN12Unk_020994cc13func_02099678EP16Unk_020994cc_Ent
#define func_02099690 _ZN12Unk_020994cc13func_02099690Ev
#define func_02099700 _ZN12Unk_020994cc13func_02099700Ev
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define ChoiceList_loadTexts _ZN10ChoiceList9loadTextsEv
#define ChoiceList_setEntry _ZN10ChoiceList8setEntryEiPKhiS1_PKci
#define ChoiceList_reset _ZN10ChoiceList5resetEii
class SickVillagerTalk;

typedef BOOL (SickVillager::*Unk_ov004_0224cb98_BFn)();
typedef void (SickVillager::*Unk_ov004_0224cb98_VFn)();

struct Unk_ov004_0221a650_Msg {
    u32 unk_00;
    s32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

struct Unk_ov004_0221af1c_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov004_0221a7d4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221afc4_Msg {
    u8 pad_00[8];
    s32 unk_08;
};

struct Unk_ov004_0221b1e8_Map {
    u8 *unk_00;
    u8 *unk_04;
    u8 *unk_08;
};

struct Unk_ov004_0221b0f0_Vec {
    s32 x, y, z;
    Unk_ov004_0221b0f0_Vec() {}
    ~Unk_ov004_0221b0f0_Vec() {}
};

struct Unk_ov004_Col {
    u8 r, g, b, a;
    Unk_ov004_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
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

extern SickVillager *sSickVillager;
extern "C" {
extern u16 data_020c6cc8;
extern u32 gFrameCounter;
extern u8 data_021dfd8c[];
extern u8 gTalkMsgIndexNone[];
extern u8 gVec3Zero[];
extern s32 data_020c6d1c;
extern Unk_ov004_0221b1e8_Map *gSceneBlockMap;
extern void *data_ov004_0224ca60[2];
extern void *data_ov004_0224ca68[2];
extern void *data_ov004_0224ca70[2];
extern void *data_ov004_0224ca78[2];
extern void *data_ov004_0224ca80[2];
extern void *data_ov004_0224ca88[2];
extern void *data_ov004_0224ca90[2];
extern void *data_ov004_0224ca98[2];
extern void *data_ov004_0224caa0[2];
extern void *data_ov004_0224caa8[2];
extern void *data_ov004_0224cab0[2];
extern void *data_ov004_0224cab8[2];
extern void *data_ov004_0224cac0[2];
extern void *data_ov004_0224cac8[2];
extern void *data_ov004_0224cad0[2];
extern void *data_ov004_0224cad8[2];
extern void *data_ov004_0224cae0[2];
extern u8 data_ov004_0225095c[0x28];
extern u8 data_ov004_02250984[0x28];

void *TalkWindowState_getChoiceList(void *);
s32 ChoiceList_getResult(void *);
void ChoiceList_reset(void *, s32, s32);
void ChoiceList_setEntry(void *, s32, void *, s32, const void *, s32, s32);
void ChoiceList_loadTexts(void *);
void TalkWindowState_openChoices(void *, s32);
s32 TalkWindowState_setNextMessage(void *, void *, const void *);
void *VillagerData_getVillagerId(void *);
void VillagerId_makeFileName(void *, const void *, s32, const void *);
s32 func_0206ea84(void *);
s32 func_0206ead4(s32, u32);
s32 TalkRequest_EndTalkWith(void *);
void *func_02095204(u32);
s32 Unk_020d77a4_getAngleTo(void *, void *);
void func_020141b4(void *, u32, s32, u32);
s32 func_02019638(void *, u32, u32, u32);
s32 func_02019614(void *, u32, u32);
s32 func_020197a8(void *);
s32 func_02019790(void *);
s32 func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0201c3e8(void *, void *);
s32 func_0201bb3c(void *, void *);
void func_0201a9ec(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e9650(void *, void *);
s32 func_02063b8c(s32);
u16 Room_PickRandomWalkTarget(void *, void *, s32);
void *SaveVillagers_GetUnk3830(void *);
void *func_02099700(void *);
void func_020157e8(void *, void *, s32);
s32 Snd_PlaySe(s32);
BOOL SickVillager_IsMedicine(u16 *p, s32 x);
BOOL SickVillager_HasCurrentVisitor(void *o);
void SickVillager_SetCurrentVisitor();
s32 func_0206ec6c();
s32 func_0206ed18();
s32 func_0206ed38();
s32 func_02099064();
void func_02014ce4(void *, void *, s32, s32, s32);
void *PlayerData_GetCurrent();
void *PlayerData_getPlayerId(void *);
void func_02099678(void *, void *);
s32 func_02099690(void *);
void VillagerTalk_begin(void *, void *, u32);
void func_02015ab0(void *, s32);
s32 Unk_020d77a4_getPlayerActor(void *, s32);
s32 func_02014220(void *);
void *func_0207f55c(void *, void *);
void func_02080ecc(void *, s32, s32, s32);
s32 MapBlock_GetItemPtr(void *, s32, s32, s32);
s32 Item_IsFurnitureOrF031();
void func_0203002c(s32, s32);
void func_0201c574(void *, void *);
s32 func_0202d928();
s32 func_0202d948(void *);
s32 func_0202dab0(void *);
void func_020135c4(void *);
s32 func_0201b138(void *);
void Unk_020d77a4_setTalkRequest(void *, void *);
s32 func_0201ad30(void *, s32);
s32 func_0201ad34(void *, s32);
void func_0201a8d0(void *, s32, s32, s32, s32);
void func_0201a6c0(void *, s32, s32, s32, void *, s32, s32, s32);
s32 Item_IsFurniture(void *);
u32 Item_GetFurnitureIndex(void *);
}

// Members of the scene object, named after their constructors.
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
struct Unk_02088d00 { Unk_02088d00(); ~Unk_02088d00(); u32 pad[0x3c / 4]; u8 unk_3c; u8 pad_3d[3]; u32 pad_40; u8 unk_44; u8 pad_45[3]; };
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
struct VillagerMood { VillagerMood(); ~VillagerMood(); u8 pad[0x5b]; u8 unk_5b; };
class Unk_02084038 {
public:
    Unk_02084038();
    ~Unk_02084038();
    u32 pad[0x20 / 4];
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
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
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
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual s32 vfunc_18();
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
    virtual void vfunc_78(Unk_ov004_0221af1c_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84(u32 a);
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
    virtual void vfunc_84(u32 a);
    u8 pad_ac[0x1a0 - 0xac];
};

class SickVillagerTalk : public VillagerTalk {
public:
    SickVillagerTalk() {}
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual s32 vfunc_18();
    virtual void vfunc_78(Unk_ov004_0221af1c_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84(u32 a);

    void attachOwner(SickVillager *owner);
    u8 getSickStage();

    /* 0x1a0 */ u8 unk_1a0;
    /* 0x1a1 */ u8 pad_1a1[3];
    /* 0x1a4 */ SickVillager *unk_1a4;
};

class SickVillager : public VillagerActor {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL updateAct();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    BOOL changeAct(s32 s);
    void execAct();
    void mainAct07();
    BOOL setupAct07();
    void mainAct06();
    BOOL setupAct06();
    void mainAct05();
    BOOL setupAct05();
    void mainAct04();
    BOOL setupAct04();
    void mainAct03();
    BOOL setupAct03();
    void mainAct02();
    BOOL setupAct02();
    void mainAct01();
    BOOL setupAct01();
    void mainAct00();
    BOOL setupAct00();
    void func_ov004_0221b1b0();
    void blockFurnitureCells();
    BOOL drawModel();

    /* 0x894 */ u8 unk_894;
    /* 0x895 */ u8 unk_895;
    /* 0x896 */ u8 unk_896;
    /* 0x897 */ u8 pad_897;
    /* 0x898 */ u32 unk_898;
    /* 0x89c */ SickVillagerTalk unk_89c;
    /* 0xa44 */ Unk_ov004_0224cb98_BFn unk_a44;
    /* 0xa4c */ Unk_02084038 unk_a4c;
    /* 0xa6c */ s16 unk_a6c;
    /* 0xa6e */ u16 unk_a6e;
    /* 0xa70 */ Unk_ov004_0221a7d4_Vec unk_a70;
    /* 0xa7c */ Unk_ov004_0221a7d4_Vec unk_a7c;
    /* 0xa88 */ u8 unk_a88;
    /* 0xa89 */ u8 pad_a89[3];
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" SickVillager *SickVillager_Create();
extern "C" {
void _ZN12SickVillager9mainAct05Ev();
void _ZN12SickVillager9drawModelEv();
void _ZN12SickVillager9mainAct00Ev();
void _ZN12SickVillager9mainAct06Ev();
void _ZN12SickVillager10setupAct07Ev();
void _ZN12SickVillager9mainAct07Ev();
void _ZN12SickVillager10setupAct02Ev();
void _ZN12SickVillager9mainAct02Ev();
void _ZN12SickVillager10setupAct03Ev();
void _ZN12SickVillager10setupAct04Ev();
void _ZN12SickVillager10setupAct01Ev();
void _ZN12SickVillager10setupAct00Ev();
void _ZN12SickVillager9mainAct01Ev();
void _ZN12SickVillager9mainAct03Ev();
void _ZN12SickVillager10setupAct05Ev();
void _ZN12SickVillager10setupAct06Ev();
void _ZN12SickVillager9mainAct04Ev();
}
#define PMV(x) (*(Unk_ov004_0224cb98_VFn *)(x))
#define PMB(x) (*(Unk_ov004_0224cb98_BFn *)(x))
// Definition order (colours, ptmf constants, buffers, entry) reproduces the original object order; see notes.txt.
Unk_ov004_Col data_ov004_02250938(31, 20, 20, 31);
Unk_ov004_Col data_ov004_02250940(20, 20, 31, 31);
extern "C" {
u8 data_ov004_0225095c[0x28];
}
Unk_ov004_Col data_ov004_02250948(31, 31, 20, 31);
extern "C" void *data_ov004_0224ca60[2] = {(void *)_ZN12SickVillager9mainAct05Ev, 0};
Unk_ov004_Col data_ov004_02250944(20, 31, 20, 31);
extern "C" void *data_ov004_0224cae0[2] = {(void *)_ZN12SickVillager9mainAct04Ev, 0};
extern "C" void *data_ov004_0224cad8[2] = {(void *)_ZN12SickVillager10setupAct06Ev, 0};
extern "C" void *data_ov004_0224ca70[2] = {(void *)_ZN12SickVillager9mainAct00Ev, 0};
extern "C" void *data_ov004_0224ca78[2] = {(void *)_ZN12SickVillager9mainAct06Ev, 0};
extern "C" void *data_ov004_0224cac0[2] = {(void *)_ZN12SickVillager9mainAct01Ev, 0};
Unk_ov004_Col data_ov004_02250954(20, 31, 31, 31);
extern "C" void *data_ov004_0224cab0[2] = {(void *)_ZN12SickVillager10setupAct01Ev, 0};
extern "C" void *data_ov004_0224ca90[2] = {(void *)_ZN12SickVillager10setupAct02Ev, 0};
Unk_ov004_Col data_ov004_02250958(20, 24, 24, 31);
extern "C" void *data_ov004_0224caa0[2] = {(void *)_ZN12SickVillager10setupAct03Ev, 0};
extern "C" void *data_ov004_0224cab8[2] = {(void *)_ZN12SickVillager10setupAct00Ev, 0};
extern "C" void *data_ov004_0224cac8[2] = {(void *)_ZN12SickVillager9mainAct03Ev, 0};

static inline BOOL Unk_ov004_0221b3f8_Chk(u16 *p) {
    u16 v;
    BOOL r;
    if (Item_IsFurniture(p)) {
        v = 0x155e;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == 0x155e) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

extern "C" SickVillager *SickVillager_Create() {
    return new SickVillager;
}

extern "C" BOOL SickVillager_IsMedicine(u16 *p, s32 x) {
    if (x == 0) {
        if (Unk_ov004_0221b3f8_Chk(p)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SickVillager::vfunc_04() {
    if (func_0202dab0(this) == 0) {
        return FALSE;
    }
    sSickVillager = this;
    Unk_020d77a4_setTalkRequest(this, &unk_89c);
    unk_89c.attachOwner(this);
    u8 *p = (u8 *)SaveVillagers_GetUnk3830(data_021dfd8c);
    *((u8 *)this + 0xa3c) = p[0x8e];
    if (unk_89c.getSickStage() > 1) {
        func_0201ad30(&unk_2a0, 0xea);
        func_0201ad34(&unk_2a0, 0xe9);
        func_0201a8d0(&unk_350, 1, 0xa4, 0x10, 0x10);
        func_0201a6c0(&unk_3b0, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        unk_838.unk_5b = 1;
    } else {
        func_0201a8d0(&unk_350, 1, 0xcd, 0x14, 0x14);
        unk_838.unk_5b = 0;
    }
    changeAct(0);
    return TRUE;
}

BOOL SickVillager::vfunc_00() {
    if (func_0202d948(this) == 0) {
        return FALSE;
    }
    unk_a44 = PMB(data_ov004_0224ca68);
    blockFurnitureCells();
    func_020135c4(&unk_558);
    return TRUE;
}

BOOL SickVillager::drawModel() {
    if (func_0201b138(this)) {
        return TRUE;
    }
    return FALSE;
}

BOOL SickVillager::onDraw() {
    if (unk_a44) {
        return (this->*unk_a44)();
    }
    return TRUE;
}

BOOL SickVillager::preDelete() {
    if (func_0202d928() == 0) {
        return FALSE;
    }
    sSickVillager = 0;
    return TRUE;
}

BOOL SickVillager::updateAct() {
    execAct();
    func_0201c574(&unk_838, this);
    return TRUE;
}

void SickVillager::blockFurnitureCells() {
    Unk_ov004_0221b1e8_Map *m = gSceneBlockMap;
    void *p;
    if (m->unk_04 > (u8 *)0 && m->unk_08 > (u8 *)0 && (p = m->unk_00) != 0) {
    } else {
        p = 0;
    }
    s32 y = 0;
    s32 z = 0;
    for (; y < 16; y++) {
        for (s32 x = 0; x < 16; x++) {
            if (MapBlock_GetItemPtr(p, x, y, z)) {
                if (Item_IsFurnitureOrF031()) {
                    func_0203002c(x, y);
                }
            }
        }
    }
}

void SickVillager::func_ov004_0221b1b0() {
    void *p = PlayerData_GetCurrent();
    if (p) {
        if (unk_82c) {
            void *g = PlayerData_getPlayerId(p);
            void *t = func_0207f55c(unk_82c, g);
            func_02080ecc(t, 0, 0, 0);
        }
    }
}

BOOL SickVillager::vfunc_48() {
    if (func_02014220(&unk_618)) {
        return FALSE;
    }
    if (unk_898 > 1) {
        return FALSE;
    }
    return TRUE;
}

void SickVillager::vfunc_4c(u32 idx, u32 v) {
    Unk_ov004_0221b0f0_Vec vec;
    vec.x = unk_5c;
    vec.y = unk_60;
    vec.z = unk_64;
    vec.y += 0x2000;
    switch (idx) {
    case 3:
        unk_558.unk_08 = v;
        changeAct(2);
        break;
    case 0:
        unk_558.unk_08 = v;
        func_02015ab0(&unk_89c, Unk_020d77a4_getPlayerActor(this, 4));
        changeAct(3);
        break;
    case 8:
        func_ov004_0221b1b0();
        changeAct(0);
        break;
    case 4:
        changeAct(0);
        break;
    }
}

u8 SickVillagerTalk::getSickStage() { return unk_1a0; }

extern "C" BOOL SickVillager_HasCurrentVisitor(void *o) {
    if (func_02099690(SaveVillagers_GetUnk3830(data_021dfd8c))) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void SickVillager_SetCurrentVisitor() {
    void *p = SaveVillagers_GetUnk3830(data_021dfd8c);
    func_02099678(p, PlayerData_getPlayerId(PlayerData_GetCurrent()));
}

void SickVillagerTalk::attachOwner(SickVillager *owner) {
    VillagerTalk_begin(this, owner, 0x11);
    unk_1a4 = owner;
}

void SickVillagerTalk::vfunc_84(u32 a) {
    if (a == 4) {
        SickVillager_SetCurrentVisitor();
        ((Unk_ov004_0221afc4_Msg *)unk_3c)->unk_08 = 1;
    }
}

void SickVillagerTalk::vfunc_80() {
    u8 buf[4];
    SickVillager *o = unk_1a4;
    if (o->unk_898 == 6) {
        if (func_0206ec6c()) {
            if (func_0206ed18() == 0) {
                ((Unk_ov004_0221afc4_Msg *)unk_3c)->unk_08 = 1;
                buf[0] = func_02063b8c(3) + 13;
                TalkWindowState_setNextMessage(unk_3c, buf, 0);
                unk_1a4->changeAct(4);
            } else {
                func_0206ed38();
                func_02099064();
                buf[1] = func_02063b8c(3) + 16;
                TalkWindowState_setNextMessage(unk_3c, &buf[1], 0);
                *(u16 *)(buf + 2) = 0x155e;
                func_02014ce4(this, buf + 2, 0, 6, 0);
                unk_1a4->changeAct(7);
            }
        }
    }
}

void SickVillagerTalk::vfunc_78(Unk_ov004_0221af1c_Out *out) {
    out->unk_00 = (u32)data_ov004_0225095c;
    getSickStage();
    if (unk_1a4->unk_838.unk_5b == 0) {
        VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a4->unk_82c), data_ov004_0225095c, 0x28, "q12_ask1_2");
    } else {
        VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a4->unk_82c), data_ov004_0225095c, 0x28, "q12_ask3_5");
    }
    unk_1a4->unk_895 = 0;
    if (SickVillager_HasCurrentVisitor(this)) {
        out->unk_04 = func_02063b8c(3) + 3;
        unk_1a4->unk_894 = 1;
    } else {
        out->unk_04 = func_02063b8c(3);
        unk_1a4->unk_894 = 0;
    }
}

void SickVillagerTalk::vfunc_10() {
    void *p = SaveVillagers_GetUnk3830(data_021dfd8c);
    if (p != 0) {
        if (func_02099700(p) != 0) {
            func_020157e8(this, func_02099700(p), 0);
        }
    }
}

void SickVillagerTalk::vfunc_14() {
    u8 b[6];
    SickVillager *o = unk_1a4;
    if (o->unk_895 == 0) {
        switch (unk_1e) {
        case 0:
        case 1:
        case 2: {
            void *h = TalkWindowState_getChoiceList(unk_3c);
            if (h == 0) break;
            ChoiceList_reset(h, 3, 2);
            b[0] = 0x15;
            ChoiceList_setEntry(h, 0, &b[0], 0, gTalkMsgIndexNone, 0, 0);
            b[1] = 0x16;
            ChoiceList_setEntry(h, 1, &b[1], 0, gTalkMsgIndexNone, 0, 0);
            b[2] = func_02063b8c(10) + 10;
            ChoiceList_setEntry(h, 2, &b[2], 0, gTalkMsgIndexNone, 0, 0);
            ChoiceList_loadTexts(h);
            TalkWindowState_openChoices(unk_3c, 1);
            break;
        }
        case 3:
        case 4:
        case 5: {
            void *h = TalkWindowState_getChoiceList(unk_3c);
            if (h == 0) break;
            ChoiceList_reset(h, 2, 1);
            b[3] = 0x17;
            ChoiceList_setEntry(h, 0, &b[3], 0, gTalkMsgIndexNone, 0, 0);
            b[4] = func_02063b8c(10) + 0x78;
            ChoiceList_setEntry(h, 1, &b[4], 0, gTalkMsgIndexNone, 0, 0);
            ChoiceList_loadTexts(h);
            TalkWindowState_openChoices(unk_3c, 1);
            break;
        }
        }
    } else {
        switch (unk_1e) {
        case 7:
        case 8:
        case 9:
            o->changeAct(5);
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        case 16:
        case 17:
        case 18:
            Snd_PlaySe(0x5f);
            break;
        }
    }
}

s32 SickVillagerTalk::vfunc_18() {
    u8 buf[6];
    s32 t = ChoiceList_getResult(TalkWindowState_getChoiceList(unk_1a4->unk_89c.unk_3c));
    if (unk_1a4->unk_838.unk_5b == 0) {
        VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a4->unk_82c), data_ov004_02250984, 0x28, "q12_sick1_2");
        unk_1a4->unk_895 = 1;
    } else {
        VillagerId_makeFileName(VillagerData_getVillagerId(unk_1a4->unk_82c), data_ov004_02250984, 0x28, "q12_sick3_5");
        unk_1a4->unk_895 = 1;
    }
    if (unk_1a4->unk_894 == 0) {
        switch (t) {
        case 0:
            if (func_0206ea84((void *)SickVillager_IsMedicine) != 0) {
                buf[0] = func_02063b8c(3) + 7;
                TalkWindowState_setNextMessage(unk_1a4->unk_89c.unk_3c, &buf[0], data_ov004_02250984);
            } else {
                buf[1] = func_02063b8c(3) + 10;
                TalkWindowState_setNextMessage(unk_1a4->unk_89c.unk_3c, &buf[1], data_ov004_02250984);
            }
            break;
        case 1:
            buf[2] = func_02063b8c(4);
            TalkWindowState_setNextMessage(unk_1a4->unk_89c.unk_3c, &buf[2], data_ov004_02250984);
            break;
        default:
            buf[3] = func_02063b8c(3) + 4;
            TalkWindowState_setNextMessage(unk_1a4->unk_89c.unk_3c, &buf[3], data_ov004_02250984);
            break;
        }
    } else {
        if (t == 0) {
            buf[4] = func_02063b8c(3) + 0x13;
            TalkWindowState_setNextMessage(unk_1a4->unk_89c.unk_3c, &buf[4], data_ov004_02250984);
        } else {
            buf[5] = func_02063b8c(3) + 4;
            TalkWindowState_setNextMessage(unk_1a4->unk_89c.unk_3c, &buf[5], data_ov004_02250984);
        }
    }
}

BOOL SickVillager::changeAct(s32 s) {
    static Unk_ov004_0224cb98_BFn tbl[8] = {
        PMB(data_ov004_0224cab8), PMB(data_ov004_0224cab0),
        PMB(data_ov004_0224ca90), PMB(data_ov004_0224caa0),
        PMB(data_ov004_0224caa8), PMB(data_ov004_0224cad0),
        PMB(data_ov004_0224cad8), PMB(data_ov004_0224ca80),
    };
    if (s < 8) {
        if ((this->*tbl[s])()) {
            unk_898 = s;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void *data_ov004_0224ca68[2] = {(void *)_ZN12SickVillager9drawModelEv, 0};
extern "C" void *data_ov004_0224ca80[2] = {(void *)_ZN12SickVillager10setupAct07Ev, 0};
extern "C" Unk_ov004_SceneEntry sSickVillagerProfile = {(void *(*)())SickVillager_Create, 0x83, 0x87, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov004_0224ca98[2] = {(void *)_ZN12SickVillager9mainAct02Ev, 0};
extern "C" void *data_ov004_0224caa8[2] = {(void *)_ZN12SickVillager10setupAct04Ev, 0};
extern "C" void *data_ov004_0224cad0[2] = {(void *)_ZN12SickVillager10setupAct05Ev, 0};
SickVillager *sSickVillager;
extern "C" {
u8 data_ov004_02250984[0x28];
}
extern "C" void *data_ov004_0224ca88[2] = {(void *)_ZN12SickVillager9mainAct07Ev, 0};

void SickVillager::execAct() {
    static Unk_ov004_0224cb98_VFn tbl[8] = {
        PMV(data_ov004_0224ca70), PMV(data_ov004_0224cac0),
        PMV(data_ov004_0224ca98), PMV(data_ov004_0224cac8),
        PMV(data_ov004_0224cae0), PMV(data_ov004_0224ca60),
        PMV(data_ov004_0224ca78), PMV(data_ov004_0224ca88),
    };
    s32 s = unk_898;
    if (s < 8) {
        (this->*tbl[s])();
    }
}

BOOL SickVillager::setupAct00() {
    return func_02019614(&unk_564, 1, data_020c6cc8);
}

void SickVillager::mainAct00() {
    Unk_ov004_0221a7d4_Vec v;
    if (unk_838.unk_5b != 0) {
        if (func_020197a8(&unk_564) == 1) {
            if (gFrameCounter % 14 == 0) {
                func_0201c3e8(&unk_838, this);
            }
        }
    }
    if (unk_4cc.unk_3c != 0) {
        if (func_020197a8(&unk_564) == 1) {
            if (changeAct(1)) {
                return;
            }
        }
    }
    if (func_020197a8(&unk_564) == 0) {
        if (unk_a6e != 0) {
            unk_a6e--;
        }
        if (unk_a6e == 0) {
            unk_a6c = Room_PickRandomWalkTarget(&unk_a7c, (u8 *)this + 0x5c, unk_8e);
            unk_a70.x = unk_a7c.x;
            unk_a70.y = unk_a7c.y;
            unk_a70.z = unk_a7c.z;
            if (unk_a6c != unk_8e) {
                if (func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_a6c, 0, 0, data_020c6cc8, 0) == 0) {
                    return;
                }
                if (unk_838.unk_5b != 0) {
                    unk_a6e = func_02063b8c(0x46) + 0x32;
                } else {
                    unk_a6e = func_02063b8c(0x46) + 0x14;
                }
            } else {
                if (func_020196b4(&unk_564, 1, 1, unk_a7c.x, unk_a7c.z, 0, 0, 0, 0, data_020c6cc8, 0) == 0) {
                    return;
                }
                if (unk_838.unk_5b != 0) {
                    unk_a6e = func_02063b8c(0x46) + 0x32;
                } else {
                    unk_a6e = func_02063b8c(0x50) + 0x14;
                }
            }
        } else {
            if (func_02019790(&unk_564) != 0) {
                func_02019614(&unk_564, 1, data_020c6cc8);
            }
        }
    } else {
        if (func_020197a8(&unk_564) == 3) {
            if (func_02019790(&unk_564) != 0) {
                func_020196b4(&unk_564, 1, 1, unk_a7c.x, unk_a7c.z, 0, 0, 0, 0, data_020c6cc8, 0);
            }
        } else if (func_020197a8(&unk_564) == 1) {
            switch (func_0201bb3c(this, &v)) {
            case 1:
                func_02019614(&unk_564, 1, data_020c6cc8);
                break;
            case 2:
                unk_a70 = v;
                func_0201a9ec(&unk_350, &unk_a70);
                break;
            default:
                if (func_020e96ec(&unk_a70, &unk_a7c) != 0) {
                    unk_a70 = unk_a7c;
                    func_0201a9ec(&unk_350, &unk_a7c);
                } else if (func_020e9650(&unk_a7c, (u8 *)this + 0x5c) < 0x200) {
                    changeAct(1);
                }
                break;
            }
        }
    }
}

BOOL SickVillager::setupAct01() {
    if (func_02019614(&unk_564, 1, data_020c6cc8)) {
        unk_a88 = 0x46;
        return TRUE;
    }
    return FALSE;
}

void SickVillager::mainAct01() {
    switch (unk_a88) {
    case 0x45:
        func_02019638(&unk_564, 1, 7, data_020c6cc8);
        break;
    case 1:
        func_02019638(&unk_564, 1, 0, data_020c6cc8);
        unk_a6e = func_02063b8c(0x14) + 0x14;
        break;
    case 0:
        if (changeAct(0)) {
            return;
        }
        break;
    }
    if (unk_a88 != 0) {
        unk_a88--;
    }
}

BOOL SickVillager::setupAct02() {
    if (unk_898 == 1) {
        func_02019638(&unk_564, 2, 0, data_020c6cc8);
    }
    return TRUE;
}

void SickVillager::mainAct02() {}

BOOL SickVillager::setupAct03() {
    BOOL r;
    void *o = func_02095204(4);
    if (o != 0) {
        func_020141b4(&unk_618, 0, Unk_020d77a4_getAngleTo(this, o), 0);
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

void SickVillager::mainAct03() {
    changeAct(4);
}

BOOL SickVillager::setupAct04() { return TRUE; }

void SickVillager::mainAct04() {
    Unk_ov004_0221a650_Msg *o = (Unk_ov004_0221a650_Msg *)unk_89c.unk_3c;
    if (o != 0) {
        if (o->unk_04 == 0) {
            TalkRequest_EndTalkWith(this);
        }
    }
}

BOOL SickVillager::setupAct05() {
    ((Unk_ov004_0221a650_Msg *)unk_89c.unk_3c)->unk_14 = 1;
    return TRUE;
}

void SickVillager::mainAct05() {
    Unk_ov004_0221a650_Msg *m = (Unk_ov004_0221a650_Msg *)unk_89c.unk_3c;
    if (m->unk_04 == 5) {
        if (func_0206ead4(func_0206ea84((void *)SickVillager_IsMedicine), 0xd) != 0) {
            changeAct(6);
        }
    }
}

BOOL SickVillager::setupAct06() { return TRUE; }

void SickVillager::mainAct06() {}

BOOL SickVillager::setupAct07() { return TRUE; }

void SickVillager::mainAct07() {
    changeAct(4);
}

void SickVillager::vfunc_80() { unk_896 = 1; }

BOOL SickVillager::vfunc_7c() {
    if (unk_896 == 0) {
        return TRUE;
    }
    return FALSE;
}

