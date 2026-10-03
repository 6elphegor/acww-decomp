// mwcc-version: 1.2/base
// ov068 TU01 (.text 0x0225f1a0-0x0226647c): owner actor Unk_ov068_0226fb80 (vtable 0x0226fb78) and its state classes, 214 functions of 12 old files.
// Layout of this file: classes (declared once, global) / per-old-file prototype+extern views in namespaces ns_<file> (function bodies start with
// `using namespace ns_<file>;`) / data definitions in namespace nsD (creation order, see below) / functions in descending address order.
// X_func_ov068_<addr> = free-call names (explicit this) of this unit's own methods (mangled symbols).
// DATA: the function-local static ptmf tables of the old files (guard + table + @N constants) are written as named globals
// data_ov068_<addr> (the guard idiom `gv = guard; if (!(gv & 1)) { copy constants; guard = gv | 1; }` compiles to the identical code);
// with every object named the heapsort order of .data/.bss/.rodata is set by the order of the definitions in nsD (solved by inverting the heapsort),
// the registration entry data_ov068_0226fb60 is defined inside ns_02265d34 (next to the factory it points to), the vtable comes last.
#include "types.h"
#define X_func_ov068_0225f5f4 _ZN18Unk_ov068_0225f23c19func_ov068_0225f5f4EP18Unk_ov068_0226fb80jiiPviih
#define X_func_ov068_0225f630 _ZN18Unk_ov068_0225f23c19func_ov068_0225f630EP18Unk_ov068_0226fb80
#define X_func_ov068_0225f670 _ZN18Unk_ov068_0225f23c19func_ov068_0225f670EP18Unk_ov068_0226fb80
#define X_func_ov068_0225f6b0 _ZN18Unk_ov068_0225f23c19func_ov068_0225f6b0Ev
#define X_func_ov068_0225f838 _ZN18Unk_ov068_0225f83819func_ov068_0225f838Ej
#define X_func_ov068_0225f83c _ZN18Unk_ov068_0225f83819func_ov068_0225f83cEv
#define X_func_ov068_0225f840 _ZN18Unk_ov068_0225f83819func_ov068_0225f840EP18Unk_ov068_0226fb80
#define X_func_ov068_0225f8f0 _ZN18Unk_ov068_0225f83819func_ov068_0225f8f0Ev
#define X_func_ov068_0225f900 _ZN18Unk_ov068_0225f83819func_ov068_0225f900Ev
#define X_func_ov068_0226581c _ZN25Unk_ov068_0225f1a0_Obj8b419func_ov068_0226581cEv
#define X_func_ov068_02265dc8 _ZN18Unk_ov068_0226fb8019func_ov068_02265dc8Ev
#define X_func_ov068_02265e6c _ZN18Unk_ov068_0226fb8019func_ov068_02265e6cEv
#define X_func_ov068_02265f58 _ZN18Unk_ov068_0226fb8019func_ov068_02265f58Ev
#define X_func_ov068_02265fb4 _ZN18Unk_ov068_0226fb8019func_ov068_02265fb4Ev
#define VillagerId_isValid _ZN10VillagerId7isValidEv
#define func_02011b60 _ZN12Unk_02011b6013func_02011b60Ej
#define func_02011b7c _ZN12Unk_02011b6013func_02011b7cEv
#define func_02011b98 _ZN12Unk_02011b6013func_02011b98Ej
#define func_02011bb0 _ZN12Unk_02011b6013func_02011bb0Ev
#define func_02011bcc _ZN12Unk_02011b6013func_02011bccEP12Unk_02006d14
#define func_02011c38 _ZN12Unk_02011b6013func_02011c38Ev
#define func_02011c44 _ZN12Unk_02011b6013func_02011c44Ejj
#define func_02011c9c _ZN12Unk_02011b6013func_02011c9cEjj
#define func_02011cf4 _ZN12Unk_02011b6013func_02011cf4Ejj
#define func_02011d4c _ZN12Unk_02011b6013func_02011d4cEjj
#define func_02011dfc _ZN12Unk_02011b6013func_02011dfcEjj
#define func_02011e9c _ZN12Unk_02011b6013func_02011e9cEjjj
#define func_02011ec0 _ZN12Unk_02011b6013func_02011ec0EjPtjt
#define func_02011f08 _ZN12Unk_02011b6013func_02011f08Ej
#define func_02011f54 _ZN12Unk_02011b6013func_02011f54Ev
#define func_02012c58 _ZN12Unk_0201281013func_02012c58EP16Unk_02012810_Vec
#define func_02012cb8 _ZN12Unk_0201281013func_02012cb8Ev
#define func_0201324c _ZN12Unk_0201326013func_0201324cEv
#define func_0201325c _ZN12Unk_0201326013func_0201325cEj
#define func_02013300 _ZN12Unk_0201326013func_02013300Ejjjj
#define func_02013374 _ZN12Unk_0201326013func_02013374Ev
#define func_020133a8 _ZN12Unk_0201326013func_020133a8Ev
#define func_02013464 _ZN19Unk_020133cc_Player13func_02013464Ev
#define func_02013568 _ZN12Unk_0201347413func_02013568EP19Unk_020133cc_Player
#define func_020135bc _ZN12Unk_0201347413func_020135bcEv
#define func_020135c4 _ZN12Unk_0201347413func_020135c4Ev
#define func_02014170 _ZN12Unk_02013b1013func_02014170Ejish
#define func_02014198 _ZN12Unk_02013b1013func_02014198Ehh
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_02015a80 _ZN16ActorTalkRequest13func_02015a80EP18Unk_02015b8c_Scene
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define func_02015e48 _ZN12Unk_02015b8c13func_02015e48Ej
#define func_02015ec4 _ZN12Unk_02015b8c13func_02015ec4Eh
#define func_02015fe0 _ZN12Unk_0201635013func_02015fe0EP16Unk_02015fe0_ObjPtPvt
#define func_02016c80 _ZN12Unk_02016a4413func_02016c80EiPt
#define func_020195c8 _ZN12Unk_0201985813func_020195c8Eiijtt
#define func_02019614 _ZN12Unk_0201985813func_02019614Ejt
#define func_02019638 _ZN12Unk_0201985813func_02019638Eiht
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a0 _ZN12Unk_0201985813func_020197a0Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201a040 _ZN12Unk_02019e2c13func_0201a040EP18Unk_02019e2c_Entryi
#define func_0201a1a4 _ZN12Unk_0201a13c13func_0201a1a4Ev
#define func_0201a5d0 _ZN12Unk_0201a33413func_0201a5d0EP18Unk_0201a334_Scene
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_0201a720 _ZN12Unk_0201a33413func_0201a720EP17Unk_0201a334_Vec3
#define func_0201a8f0 _ZN12Unk_0201a8c413func_0201a8f0Ev
#define func_0201a968 _ZN12Unk_0201a8c413func_0201a968Ev
#define func_0201a978 _ZN12Unk_0201a8c413func_0201a978Ev
#define func_0201a97c _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3
#define func_0201a99c _ZN12Unk_0201a8c413func_0201a99cEs
#define func_0201a9a0 _ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei
#define func_0201a9ec _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3
#define func_0201acfc _ZN12Unk_0201acf813func_0201acfcEv
#define func_0201b08c _ZN12Unk_020d77a48vfunc_4cEi
#define func_0201b138 _ZN12Unk_020d77a46onDrawEv
#define func_0201bb3c _ZN12Unk_020d77a413func_0201bb3cEP16Unk_020d77a4_Vec
#define Unk_020d77a4_setTalkRequest _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c
#define Unk_020d77a4_getPlayerActor _ZN12Unk_020d77a414getPlayerActorEj
#define Unk_020d77a4_getRelativeAngleTo _ZN12Unk_020d77a418getRelativeAngleToEPS_
#define Unk_020d77a4_getAngleToPlayer _ZN12Unk_020d77a416getAngleToPlayerEj
#define Unk_020d77a4_getAngleTo _ZN12Unk_020d77a410getAngleToEPS_
#define Unk_020d77a4_isPlayerNear _ZN12Unk_020d77a412isPlayerNearEij
#define Unk_020d77a4_isNear _ZN12Unk_020d77a46isNearEPS_i
#define Unk_020d77a4_getDistanceToPlayer _ZN12Unk_020d77a419getDistanceToPlayerEj
#define Unk_020d77a4_getDistanceTo _ZN12Unk_020d77a413getDistanceToEPS_
#define func_0201bd9c _ZN12Unk_020d77a413func_0201bd9cEi
#define Unk_020d77a4_getNpcIndex _ZN12Unk_020d77a411getNpcIndexEv
#define VillagerMood_update _ZN12VillagerMood6updateEP12VillagerTalk
#define VillagerMood_disableEffects _ZN12VillagerMood14disableEffectsEv
#define VillagerMood_enableEffects _ZN12VillagerMood13enableEffectsEv
#define VillagerMood_requestApply _ZN12VillagerMood12requestApplyEv
#define VillagerMood_addMood _ZN12VillagerMood7addMoodEji
#define func_0201c784 _ZN12VillagerTalk13func_0201c784Ev
#define VillagerTalk_hasPartner _ZN12VillagerTalk10hasPartnerEv
#define func_0201c7e0 _ZN12VillagerTalk13func_0201c7e0Ev
#define func_0201c7ec _ZN12VillagerTalk13func_0201c7ecEh
#define VillagerTalk_getPartner _ZN12VillagerTalk10getPartnerEv
#define VillagerTalk_setPartner _ZN12VillagerTalk10setPartnerEj
#define func_0202bcdc _ZN18VillagerTalkTopics13func_0202bcdcEPhPvj
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define VillagerTalk_setSpeakerStateUnk _ZN12VillagerTalk18setSpeakerStateUnkEPv
#define VillagerActor_isFlag834 _ZN13VillagerActor9isFlag834Ev
#define VillagerActor_clearFlag834 _ZN13VillagerActor12clearFlag834Ev
#define VillagerActor_setFlag834 _ZN13VillagerActor10setFlag834Ev
#define func_0202d8ec _ZN13VillagerActor8vfunc_0cEv
#define func_0202d948 _ZN13VillagerActor8vfunc_00Ev
#define func_0202dab0 _ZN13VillagerActor8vfunc_04Ev
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define func_0203e42c _ZN9Character13func_0203e42cEv
#define func_0203e450 _ZN9Character13func_0203e450Ev
#define Character_isInFacingArcOf _ZN9Character15isInFacingArcOfEPS_ss
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define func_02071b00 _ZN19AbleSistersPatterns13func_02071b00Eh
#define func_02071e8c _ZN7Pattern13func_02071e8cEPS_
#define VillagerDataItemView_getHousePos _ZN20VillagerDataItemView11getHousePosEv
#define VillagerDataProfileView_getCatchphrase _ZN23VillagerDataProfileView14getCatchphraseEPvS0_
#define VillagerDataProfileView_setUmbrella _ZN23VillagerDataProfileView11setUmbrellaEPt
#define VillagerDataProfileView_setShirt _ZN23VillagerDataProfileView8setShirtEPt
#define VillagerDataProfileView_getShirt _ZN23VillagerDataProfileView8getShirtEv
#define VillagerData_getPattern _ZN12VillagerData10getPatternEv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define VillagerMemory_getFriendship _ZN14VillagerMemory13getFriendshipEv
#define func_02085810 _ZN12Unk_0208581013func_02085810Ev
#define func_02085814 _ZN12Unk_0208581013func_02085814Ei
#define func_02085870 _ZN12Unk_0208581013func_02085870EP16Unk_02085810_Rec
#define func_02088d38 _ZN12Unk_020e0d0813func_02088d38Ej
#define func_02094218 _ZN8PlayerId13func_02094218Ev
#define func_02098044 _ZN12Unk_02097ff413func_02098044Ej
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define func_0209b1f0 _ZN12Unk_0209b3bc13func_0209b1f0EPvj
#define func_0209b354 _ZN12Unk_0209b3bc13func_0209b354Ev
#define MsgString_equals _ZN9MsgString6equalsEPS_
class Unk_ov068_0226fb80;
class Unk_ov068_Owner;
class Unk_ov068_02263a40;
class Unk_ov068_0225f1a0_Obj8b4;
typedef void (Unk_ov068_02263a40::*Unk_ov068_02263b90_Fn)(Unk_ov068_Owner *);
typedef void (Unk_ov068_0225f1a0_Obj8b4::*Unk_ov068_0225f1a0_Fn)(Unk_ov068_0226fb80 *);
typedef BOOL (Unk_ov068_0226fb80::*Unk_ov068_0226fb80_Fn)();
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

extern "C" s32 func_01ffcb0c(s32, s32);
extern "C" void func_02011f54(void *);
class Unk_ov068_0226fb80;
class Unk_ov068_Owner;
class Unk_ov068_0225f1a0_Obj8b4;

struct Unk_ov068_0225f23c_Vec {
    s32 x, y, z;
};

struct Unk_ov068_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

struct Unk_ov068_0225f858_Vec {
    s32 a, b, c;
};

struct Unk_ov068_022661c8_Blk {
    u32 v[12];
};

typedef BOOL (Unk_ov068_0226fb80::*Unk_ov068_0226fb80_Fn)();
typedef void (Unk_ov068_0225f1a0_Obj8b4::*Unk_ov068_0225f1a0_Fn)(Unk_ov068_0226fb80 *);

struct Unk_ov068_0225f1a0_Ent {
    Unk_ov068_0225f1a0_Fn a;
    Unk_ov068_0225f1a0_Fn b;
};

// Sub-object at +0x894 of Unk_ov068_0226fb80 (0x20 bytes)
class Unk_ov068_0225f23c {
public:
    void func_ov068_0225f23c(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f328(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f384(Unk_ov068_0226fb80 *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v);
    BOOL func_ov068_0225f3c0(s32 a, s32 b);
    s32 func_ov068_0225f3e4(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim);
    BOOL func_ov068_0225f430(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim);
    void func_ov068_0225f460(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f4c4(Unk_ov068_0226fb80 *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v);
    BOOL func_ov068_0225f4fc(u32 a, s32 b);
    s32 func_ov068_0225f52c(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim);
    s32 func_ov068_0225f56c(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim);
    void func_ov068_0225f5a4(Unk_ov068_0226fb80 *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e);
    void func_ov068_0225f5dc();
    void func_ov068_0225f5f4(Unk_ov068_0226fb80 *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e);
    void func_ov068_0225f630(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f670(Unk_ov068_0226fb80 *o);
    ~Unk_ov068_0225f23c();
    void func_ov068_0225f6b0();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 pad_09[3];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u16 unk_14;
    /* 0x16 */ u8 pad_16[2];
    /* 0x18 */ Unk_ov068_0226fb80_Fn unk_18;
};

// Small timer object at +0x9f0
class Unk_ov068_0225f838 {
public:
    void func_ov068_0225f838(u32 v);
    u32 func_ov068_0225f83c();
    void func_ov068_0225f840(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f858(Unk_ov068_0226fb80 *o);
    void func_ov068_0225f8f0();
    ~Unk_ov068_0225f838();
    void func_ov068_0225f900();

    /* 0x00 */ s8 unk_00;
    /* 0x01 */ u8 pad_01;
    /* 0x02 */ u16 unk_02;
};

// State-machine member at +0x8b4 of Unk_ov068_0226fb80 (0xfc bytes)
class Unk_ov068_0225f1a0_Obj8b4 {
public:
    ~Unk_ov068_0225f1a0_Obj8b4();
    Unk_ov068_0225f1a0_Obj8b4 *func_ov068_0226581c();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_ov068_0225f1a0_Ent *unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s16 unk_2c;
    /* 0x2e */ u8 pad_2e[6];
    /* 0x34 */ s16 unk_34;
    /* 0x36 */ s16 unk_36;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 unk_3a;
    /* 0x3c */ u8 unk_3c[0xd8 - 0x3c];
    /* 0xd8 */ s16 unk_d8;
    /* 0xda */ s16 unk_da;
    /* 0xdc */ s16 unk_dc;
    /* 0xde */ s16 unk_de;
    /* 0xe0 */ u8 unk_e0;
    /* 0xe1 */ u8 pad_e1[3];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u8 pad_e8[0xf4 - 0xe8];
    /* 0xf4 */ s32 unk_f4;
    /* 0xf8 */ s32 unk_f8;
};

// Member at +0x9b0 (0x40 bytes)
class Unk_02011b60 {
public:
    ~Unk_02011b60();
    u32 pad[0x3c / 4];
    u8 unk_3c;
    u8 pad_3d[3];
};

// Menu object referenced from +0x9f4
class Unk_ov068_0225f904_Menu {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
};

// Sub-object at +0x680 (has a vtable)
class Unk_ov068_0226fb80_Sub680 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    u8 pad[0x1a4 - 4];
};

// Owner base (VillagerActor), size 0x894
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
};

class Unk_020d77a4 : public Character {
public:
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual BOOL vfunc_60(u16 *p);
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
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 getSpecies();
    virtual void setShirt(u16 *p, BOOL flag);
    virtual void addMood(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(u32 idx);
    virtual BOOL vfunc_bc();

    /* 0x004 */ u8 pad_04[0x58];
    /* 0x05c */ Unk_ov068_0225f23c_Vec unk_5c;
    /* 0x068 */ Unk_ov068_0225f23c_Vec unk_68;
    /* 0x074 */ u8 pad_74[0x150 - 0x74];
    /* 0x150 */ Unk_ov068_022661c8_Blk unk_150;
    /* 0x180 */ u8 pad_180[0x3b0 - 0x180];
    /* 0x3b0 */ u8 unk_3b0[0x5c];
    /* 0x40c */ s32 unk_40c;
    /* 0x410 */ u8 pad_410[0x478 - 0x410];
    /* 0x478 */ Unk_ov068_0225f23c_Vec unk_478;
    /* 0x484 */ Unk_ov068_0225f23c_Vec unk_484;
    /* 0x490 */ Unk_ov068_0225f23c_Vec unk_490;
    /* 0x49c */ u8 pad_49c[0x4cc - 0x49c];
    /* 0x4cc */ u8 unk_4cc[0x508 - 0x4cc];
    /* 0x508 */ u8 unk_508;
    /* 0x509 */ u8 pad_509[0x560 - 0x509];
    /* 0x560 */ u8 unk_560;
    /* 0x561 */ u8 unk_561;
    /* 0x562 */ u8 unk_562;
    /* 0x563 */ u8 pad_563[0x618 - 0x563];
    /* 0x618 */ u8 unk_618[0x10];
    /* 0x628 */ void *unk_628;
    /* 0x62c */ u8 pad_62c[0x680 - 0x62c];
    /* 0x680 */ Unk_ov068_0226fb80_Sub680 unk_680;
    /* 0x824 */ u8 pad_824[0x82c - 0x824];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[8];
    /* 0x838 */ u8 unk_838[0x5b];
    /* 0x893 */ u8 unk_893;
};

// Vtable 0x0226fb80
class Unk_ov068_0226fb80 : public VillagerActor {
public:
    inline Unk_ov068_0226fb80() {
        unk_894.func_ov068_0225f6b0();
        unk_8b4.func_ov068_0226581c();
        func_02011f54(&unk_9b0);
        unk_9f0.func_ov068_0225f900();
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_60(u16 *p);
    virtual BOOL updateAct();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_b0();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(u32 idx);
    virtual BOOL vfunc_bc();

    void func_ov068_02265d34();
    void func_ov068_02265dc8();
    void func_ov068_02265e6c();
    BOOL func_ov068_02265ee8();
    s32 func_ov068_02265f58();
    void func_ov068_02265fb4();
    BOOL func_ov068_022661c8();

    /* 0x894 */ Unk_ov068_0225f23c unk_894;
    /* 0x8b4 */ Unk_ov068_0225f1a0_Obj8b4 unk_8b4;
    /* 0x9b0 */ Unk_02011b60 unk_9b0;
    /* 0x9f0 */ Unk_ov068_0225f838 unk_9f0;
    /* 0x9f4 */ Unk_ov068_0225f904_Menu *unk_9f4;
    /* 0x9f8 */ s32 unk_9f8;
    /* 0x9fc */ s32 unk_9fc;
    /* 0xa00 */ u8 unk_a00;
    /* 0xa01 */ u8 unk_a01;
    /* 0xa02 */ u16 unk_a02;
    /* 0xa04 */ u8 unk_a04;
    /* 0xa05 */ u8 unk_a05;
    /* 0xa06 */ u8 pad_a06[2];
    /* 0xa08 */ s32 unk_a08;
};

// Owner stand-in used by the state classes (only its vtable is used)
class Unk_ov068_Owner {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual BOOL vfunc_48(s32 a);
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
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
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual void vfunc_b0();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(void *o);
    virtual s32 vfunc_bc();
};

class Unk_ov068_0225fd54 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[4];
    /* 0x28 */ u8 *unk_28;
    /* 0x2c */ s16 unk_2c;
    /* 0x2e */ u8 pad_2e[2];
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s16 unk_34;
    /* 0x36 */ s16 unk_36;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 unk_3a;
    /* 0x3c */ u8 unk_3c[0xd8 - 0x3c];
    /* 0xd8 */ s16 unk_d8;
    /* 0xda */ s16 unk_da;
    /* 0xdc */ s16 unk_dc;
    /* 0xde */ s16 unk_de;
    /* 0xe0 */ u8 unk_e0;
    /* 0xe1 */ u8 pad_e1[0xf4 - 0xe1];
    /* 0xf4 */ u32 unk_f4;
    /* 0xf8 */ u32 unk_f8;

    s32 func_ov068_0225fd54(Unk_ov068_Owner *o);
    void func_ov068_0225fdc0(Unk_ov068_Owner *o);
    void func_ov068_0225fe28(Unk_ov068_Owner *o);
    BOOL func_ov068_0225fe70(Unk_ov068_Owner *o);
    s32 func_ov068_0225ff18(Unk_ov068_Owner *o);
    void func_ov068_0225ff84(Unk_ov068_Owner *o);
    void func_ov068_0225ff88(Unk_ov068_Owner *o);
    BOOL func_ov068_0225fff4(Unk_ov068_Owner *o);
    s32 func_ov068_02260068(Unk_ov068_Owner *o);
    void func_ov068_022600e4(Unk_ov068_Owner *o);
    void func_ov068_022600e8(Unk_ov068_Owner *o);
    void func_ov068_02260160(Unk_ov068_Owner *o);
    BOOL func_ov068_022601f0(Unk_ov068_Owner *o);
    s32 func_ov068_02260290(Unk_ov068_Owner *o);
    void func_ov068_022602fc(Unk_ov068_Owner *o);
    void func_ov068_02260324(Unk_ov068_Owner *o);
    BOOL func_ov068_02260374(Unk_ov068_Owner *o);
    s32 func_ov068_02260450(Unk_ov068_Owner *o);
    void func_ov068_022604cc(Unk_ov068_Owner *o);
    void func_ov068_022604fc(Unk_ov068_Owner *o);
    void func_ov068_0226054c(Unk_ov068_Owner *o);
    BOOL func_ov068_022605f4(Unk_ov068_Owner *o);
    s32 func_ov068_0226071c(Unk_ov068_Owner *o);
    BOOL func_ov068_02260780(Unk_ov068_Owner *o);
    s32 func_ov068_02260944(Unk_ov068_Owner *o);
    void func_ov068_022609e0(Unk_ov068_Owner *o);
    void func_ov068_02260a64(Unk_ov068_Owner *o);
    void func_ov068_02260c14(Unk_ov068_Owner *o);
    void func_ov068_02260cdc(Unk_ov068_Owner *o);
    void func_ov068_02260dcc(Unk_ov068_Owner *o);
    BOOL func_ov068_02260ed4(Unk_ov068_Owner *o);
    BOOL func_ov068_02264008(Unk_ov068_Owner *o);
    s32 func_ov068_0226410c(Unk_ov068_Owner *o);
    void func_ov068_02264188(Unk_ov068_Owner *o);
    void func_ov068_0226424c(Unk_ov068_Owner *o);
    void func_ov068_022642c4(Unk_ov068_Owner *o);
    BOOL func_ov068_0226433c(Unk_ov068_Owner *o);
    BOOL func_ov068_022643d0(Unk_ov068_Owner *o);
    BOOL func_ov068_022644fc(Unk_ov068_Owner *o);
    BOOL func_ov068_022645dc(Unk_ov068_Owner *o);
    BOOL func_ov068_022648bc(Unk_ov068_Owner *o);
};

struct Unk_ov068_02260780_Vec {
    s32 x, y, z;
};

struct Unk_ov068_022605f4_Vec : Unk_ov068_02260780_Vec {
    Unk_ov068_022605f4_Vec() {}
    ~Unk_ov068_022605f4_Vec() {}
};

struct Unk_ov068_02260780_Own {
    u8 pad_00[0x5c];
    Unk_ov068_02260780_Vec unk_5c;
};

struct Unk_ov068_02260f90_V3 {
    s32 x, y, z;
};

struct Unk_ov068_02261644_V3 {
    s32 x, y, z;
    Unk_ov068_02261644_V3() {}
    ~Unk_ov068_02261644_V3() {}
    Unk_ov068_02261644_V3(const Unk_ov068_02261644_V3 &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

class Unk_ov068_02260f90 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;

    s32 func_ov068_02260f90(Unk_ov068_Owner *o);
    void func_ov068_02260ffc(Unk_ov068_Owner *o);
    void func_ov068_02261084(Unk_ov068_Owner *o);
    BOOL func_ov068_02261118(Unk_ov068_Owner *o);
};

class Unk_ov068_02261290 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;

    s32 func_ov068_02261290(Unk_ov068_Owner *o);
    void func_ov068_022612fc(Unk_ov068_Owner *o);
    void func_ov068_02261394(Unk_ov068_Owner *o);
    BOOL func_ov068_02261444(Unk_ov068_Owner *o);
};

class Unk_ov068_02261574 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;

    s32 func_ov068_02261574(Unk_ov068_Owner *o);
    void func_ov068_022615f0(Unk_ov068_Owner *o);
    void func_ov068_02261644(Unk_ov068_Owner *o);
    void func_ov068_022616c4(Unk_ov068_Owner *o);
    BOOL func_ov068_02261714(Unk_ov068_Owner *o);
};

class Unk_ov068_0226179c {
public:
    s32 func_ov068_0226179c(Unk_ov068_Owner *o);
    BOOL func_ov068_022617b8(Unk_ov068_Owner *o);
};

struct Unk_ov068_02261cd4_Vec {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_ov068_02261cd4_Pad {
    u8 pad_00[0x5c];
};

struct Unk_ov068_02261cd4_Tgt : Unk_ov068_02261cd4_Pad, Unk_ov068_02261cd4_Vec {
};

struct Unk_ov068_02262044_Ent {
    u16 a;
    u8 b;
    u8 c;
};

struct Unk_ov068_02262044_Vec {
    s32 x, y, z;
};

class Unk_ov068_02261900 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[0xe4 - 0x24];
    /* 0xe4 */ Unk_ov068_02261cd4_Tgt *unk_e4;
    /* 0xe8 */ s32 unk_e8;
    /* 0xec */ s32 unk_ec;
    /* 0xf0 */ s32 unk_f0;
    /* 0xf4 */ u32 unk_f4;

    s32 func_ov068_02261900(Unk_ov068_Owner *o);
    void func_ov068_0226196c(Unk_ov068_Owner *o);
    void func_ov068_022619e8(Unk_ov068_Owner *o);
    BOOL func_ov068_02261a2c(Unk_ov068_Owner *o);
    s32 func_ov068_02261ab4(Unk_ov068_Owner *o);
    BOOL func_ov068_02261ab8(Unk_ov068_Owner *o);
    s32 func_ov068_02261ae8(Unk_ov068_Owner *o);
    void func_ov068_02261b4c(Unk_ov068_Owner *o);
    BOOL func_ov068_02261b90(Unk_ov068_Owner *o);
    s32 func_ov068_02261c38(Unk_ov068_Owner *o);
    void func_ov068_02261cd4(Unk_ov068_Owner *o);
    void func_ov068_02261db0(Unk_ov068_Owner *o);
    void func_ov068_02261e10(Unk_ov068_Owner *o);
    void func_ov068_02261f08(Unk_ov068_Owner *o);
    void func_ov068_02262044(Unk_ov068_Owner *o);
    BOOL func_ov068_0226218c(Unk_ov068_Owner *o, s32 r);
    BOOL func_ov068_022621d4(Unk_ov068_Owner *o);
    BOOL func_ov068_022621fc(Unk_ov068_Owner *o);
};

class Unk_ov068_02262294 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;

    void func_ov068_02262300(Unk_ov068_Owner *o);
    void func_ov068_02262304(Unk_ov068_Owner *o);
    BOOL func_ov068_02262338(Unk_ov068_Owner *o);
    s32 func_ov068_02262294(Unk_ov068_Owner *o);
};

class Unk_ov068_02262414 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[4];
    /* 0x28 */ u8 *unk_28;
    /* 0x2c */ s16 unk_2c;
    /* 0x2e */ u8 pad_2e[2];
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s16 unk_34;
    /* 0x36 */ s16 unk_36;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 unk_3a;
    /* 0x3c */ u8 unk_3c[0xd8 - 0x3c];
    /* 0xd8 */ s16 unk_d8;
    /* 0xda */ s16 unk_da;
    /* 0xdc */ s16 unk_dc;
    /* 0xde */ s16 unk_de;
    /* 0xe0 */ u8 unk_e0;
    /* 0xe1 */ u8 pad_e1[0xf4 - 0xe1];
    /* 0xf4 */ u32 unk_f4;
    /* 0xf8 */ u32 unk_f8;

    s32 func_ov068_02262414(Unk_ov068_Owner *o);
    void func_ov068_022624a4(Unk_ov068_Owner *o);
    void func_ov068_022624f8(Unk_ov068_Owner *o);
    void func_ov068_02262548(Unk_ov068_Owner *o);
    void func_ov068_02262648(Unk_ov068_Owner *o);
    BOOL func_ov068_02262994(Unk_ov068_Owner *o, s32 v);
    BOOL func_ov068_022629e0(Unk_ov068_Owner *o, s32 v);
    s32 func_ov068_02262a58(Unk_ov068_Owner *o);
    BOOL func_ov068_02262a9c(Unk_ov068_Owner *o);
    void func_ov068_02262ad4(Unk_ov068_Owner *o);
    BOOL func_ov068_02262b78(Unk_ov068_Owner *o);
    // out-of-range
    BOOL func_ov068_02262c20(Unk_ov068_Owner *o);
    BOOL func_ov068_02262da0(Unk_ov068_Owner *o);
    BOOL func_ov068_02262e5c(Unk_ov068_Owner *o);
    BOOL func_ov068_02262fd8(Unk_ov068_Owner *o);
    BOOL func_ov068_022632dc(Unk_ov068_Owner *o);
    BOOL func_ov068_02263494(Unk_ov068_Owner *o);
    BOOL func_ov068_02263518(Unk_ov068_Owner *o);
};

class EncodedString10 {
public:
    u32 v[7];
    EncodedString10();
    ~EncodedString10();
};

class MsgString11 {
public:
    u32 v[8];
    MsgString11();
    ~MsgString11();
};

struct Unk_ov068_02262c20_Blk {
    u32 b[0x80];
};

struct Unk_ov068_02262c20_B8 {
    u8 b[8];
};

struct Unk_ov068_02262c20_B16 {
    u8 b[16];
};

struct Unk_ov068_02263aac_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov068_0226392c_V3 {
    s32 x, y, z;
};

class Unk_ov068_022638c0 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;

    s32 func_ov068_022638c0(Unk_ov068_Owner *o);
    void func_ov068_0226392c(Unk_ov068_Owner *o);
    void func_ov068_02263930(Unk_ov068_Owner *o);
    BOOL func_ov068_02263978(Unk_ov068_Owner *o);
};

class Unk_ov068_02263a40 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[0x34 - 0x1d];
    /* 0x34 */ s16 unk_34;
    /* 0x36 */ u8 pad_36[0xf8 - 0x36];
    /* 0xf8 */ s32 unk_f8;

    s32 func_ov068_02263a40(Unk_ov068_Owner *o);
    void func_ov068_02263aac(Unk_ov068_Owner *o);
    void func_ov068_02263b90(Unk_ov068_Owner *o);
    BOOL func_ov068_02263c20(Unk_ov068_Owner *o);
};

class Unk_ov068_02263cf0 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;

    s32 func_ov068_02263cf0(Unk_ov068_Owner *o);
    void func_ov068_02263d5c(Unk_ov068_Owner *o);
    void func_ov068_02263d6c(Unk_ov068_Owner *o);
    BOOL func_ov068_02263d74(Unk_ov068_Owner *o);
};

class Unk_ov068_02263e4c {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[4];
    /* 0x28 */ u8 *unk_28;
    /* 0x2c */ s16 unk_2c;
    /* 0x2e */ u8 pad_2e[2];
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s16 unk_34;
    /* 0x36 */ s16 unk_36;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 unk_3a;
    /* 0x3c */ u8 unk_3c[0xd8 - 0x3c];
    /* 0xd8 */ s16 unk_d8;
    /* 0xda */ s16 unk_da;
    /* 0xdc */ s16 unk_dc;
    /* 0xde */ s16 unk_de;
    /* 0xe0 */ u8 unk_e0;
    /* 0xe1 */ u8 pad_e1[0xf4 - 0xe1];
    /* 0xf4 */ u32 unk_f4;
    /* 0xf8 */ u32 unk_f8;

    s32 func_ov068_02263e4c(Unk_ov068_Owner *o);
    void func_ov068_02263eb8(Unk_ov068_Owner *o);
    void func_ov068_02264000(Unk_ov068_Owner *o);
};

struct Unk_ov068_02264188_V3 {
    s32 x, y, z;
};

struct Unk_ov068_022644fc_P {
    u32 a, b;
};

struct Unk_ov068_022644fc_W {
    Unk_ov068_022644fc_P p;
};

struct Unk_ov068_022649f4_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02264ab4_P2 {
    s32 x, y;
};

class Unk_ov068_Owner_649 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
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
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual void vfunc_b0();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(void *o);
    virtual BOOL vfunc_bc();

    /* 0x004 */ u8 pad_04[0x5c - 4];
    /* 0x05c */ Unk_ov068_022649f4_Vec unk_5c;
    /* 0x068 */ u8 pad_68[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_90[4];
    /* 0x094 */ s16 unk_94;
    /* 0x096 */ u8 pad_96[2];
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ u8 pad_9c[0x350 - 0x9c];
    /* 0x350 */ u8 unk_350[0x60];
    /* 0x3b0 */ u8 unk_3b0[0x5c];
    /* 0x40c */ u8 pad_40c[0x564 - 0x40c];
    /* 0x564 */ u8 unk_564[0x82c - 0x564];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[0x8b4 - 0x830];
    /* 0x8b4 */ u8 unk_8b4[0xa01 - 0x8b4];
    /* 0xa01 */ u8 unk_a01;
};

struct Unk_ov068_0226506c_Flags {
    u8 pad : 1;
    u8 f1 : 1;
};

struct Unk_ov068_02265270_Flags {
    u8 pad : 1;
    u8 f1 : 1;
};

struct Unk_ov068_02265324_Flags {
    u8 pad_00[0x1d];
    u8 unk_1d_0 : 1;
    u8 unk_1d_1 : 1;
};

struct Unk_ov068_0226546c_Rect {
    s32 x0, w, z0, h;
};

struct Unk_ov068_02265434_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02265bcc_Vec {
    s32 x, y, z;
    Unk_ov068_02265bcc_Vec() {}
    ~Unk_ov068_02265bcc_Vec() {}
};

struct Unk_ov068_02265bcc_Src {
    s32 x, y, z;
};

struct Unk_ov068_02265a40_Buf {
    u8 b[8];
};

struct Unk_ov068_0226fa68_Pair {
    s32 a, b;
};

struct Unk_ov068_0226fa68_Nest {
    Unk_ov068_0226fa68_Pair p;
};

struct Unk_ov068_02265d34_Vec2 {
    s32 a, b;
};

struct Unk_ov068_0226647c_Cam {
    /* 0x000 */ u8 pad_000[0x174];
    /* 0x174 */ s16 unk_174;
    /* 0x176 */ u8 pad_176[0x21c - 0x176];
    /* 0x21c */ s16 unk_21c;
    /* 0x21e */ s16 unk_21e;
    /* 0x220 */ u16 unk_220;
    /* 0x222 */ u16 unk_222;
    /* 0x224 */ u8 unk_224;
    /* 0x225 */ u8 unk_225;
};

struct Unk_ov068_0226647c_Row {
    u16 a;
    u16 b;
    s16 c;
    s16 pad;
    s32 d;
};

struct Unk_ov068_02265ee8_Obj {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ Unk_ov068_0225f23c_Vec unk_5c;
    /* 0x68 */ u8 pad_68[0x94 - 0x68];
    /* 0x94 */ s16 unk_94;
    /* 0x96 */ u8 pad_96[2];
    /* 0x98 */ s32 unk_98;
};
namespace ns_0225f1a0 {
extern "C" {
extern s32 data_020c6d1c;
extern u8 gVec3Zero[];
s32 func_ov003_0221ffe8(s32);
s32 func_ov003_0221ffb8(void *, s32);
s32 func_ov003_02227ed4(u8 *, u8);
s32 func_ov003_02227e08(void *, u8);
s32 func_020e9650(void *, void *);
s32 func_0201a5d0(void *, void *);
void func_0201a6c0(void *, u32, s32, s32, void *, s32, s32, u8);
void func_0201a720(void *, void *);
u32 func_ov068_0226594c(void *);
s32 VillagerTalk_hasPartner(void *);
s32 func_0201c784(void *);
void *VillagerTalk_getPartner(void *);
void VillagerTalk_setPartner(void *, u32);
void func_0201c7ec(void *, u32);
void VillagerMood_requestApply(void *);
s32 func_ov068_02265670(void *, void *);
void func_ov068_022656a8(void *, void *, s32);
void func_ov068_022655b4(void *);
void func_ov068_02265698(void *);
s32 func_ov068_022655a4(void *, s32);
s32 func_ov068_022655c0(void *);
s32 func_ov068_02265918(void *);
void func_ov068_02265994(void *);
void *X_func_ov068_02265f58(void *);
void *PlayerData_GetCurrent();
s32 func_02080f94(void *);
s32 Unk_020d77a4_isPlayerNear(void *, s32, u32);
s32 func_02014220(void *);
s32 VillagerTalk_begin(void *, void *, s32);
void *Unk_020d77a4_getPlayerActor(void *, s32);
void func_02015ab0(void *, void *);
void func_02015a80(void *, void *);
void func_020784a8();
void func_0207c20c(void *);
s32 func_0207e278(void *);
void *VillagerDataItemView_getHousePos(void *);
void func_0204ed8c(void *, u32, u32);
s32 func_02078294();
s32 func_0207e334(void *);
s32 func_02078498();
void func_0207c190(void *, s32);
s32 func_0203e450(void *);
s32 func_0201b08c(void *, u32, u32);
void func_0207ce00(void *);
s32 func_0207ce24(void *);
s32 func_02063b8c(s32);
void func_020902b0(s32, void *, s32, s32);
}
}

namespace ns_0225fc60 {
extern "C" {
extern s16 data_ov068_02270c20;
extern s16 data_020c6cc0;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
s32 func_ov068_0226594c(void *);
s32 func_ov068_022655a4(void *, s32);
s32 func_ov068_02264a64(void *);
s32 func_ov068_022656a8(void *, void *, s32);
s32 func_ov068_022656a4(void *, s32);
s32 func_ov068_02263738(void *, void *, s32, s32, s32);
void func_ov068_02265994(void *);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
s32 VillagerActor_isFlag834(void *);
void VillagerActor_clearFlag834(void *);
s32 Unk_020d77a4_isNear(void *, s32, s32);
s32 Character_isInFacingArcOf(void *, s32, s32, s32);
s32 func_02014220(void *);
void *func_020951ec(s32);
s32 Unk_020d77a4_getRelativeAngleTo(void *, void *);
s32 func_020197a8(void *);
s32 func_020197a0(void *);
s32 func_02019790(void *);
void func_02019614(void *, s32, u32);
void func_02019638(void *, s32, s32, u32);
void func_02015ec4(void *, s32);
s32 func_02015e48(void *, s32);
void *func_02015aac(void *);
void func_020135c4(void *);
s32 func_02013464(void *);
s32 Unk_020d77a4_getAngleToPlayer(void *, s32);
s32 Unk_020d77a4_getAngleTo(void *, void *);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void VillagerMood_disableEffects(void *);
void VillagerTalk_setPartner(void *, s32);
void func_0201c7ec(void *, s32);
void func_0203e450(void *);
void TalkRequest_EndTalkWith(void *);
void TalkRequest_AddPlayerTalk6(void *, s32);
void func_0203e42c(void *);
void func_0207c1e8(s32);
void func_020141b4(void *, s32, s32, s32);
}
extern "C" BOOL _ZN18Unk_ov068_0226fb8028acceptsInteractionOutOfRangeEPv(Unk_ov068_Owner *o, s32 x);
extern "C" BOOL _ZN18Unk_ov068_0226fb808vfunc_48Ev(u8 *o);
typedef void (Unk_ov068_0225fd54::*Fn_225fd54)(Unk_ov068_Owner *);
extern "C" {
extern Fn_225fd54 data_ov068_02270d2c[2];
extern u32 data_ov068_02270c48;
extern void *data_ov068_0226f938[2];
extern void *data_ov068_0226f9f0[2];
}
typedef void (Unk_ov068_0225fd54::*Fn_225ff18)(Unk_ov068_Owner *);
extern "C" {
extern Fn_225ff18 data_ov068_02270ccc[2];
extern u32 data_ov068_02270c54;
extern void *data_ov068_0226fb30[2];
extern void *data_ov068_0226f800[2];
}
typedef void (Unk_ov068_0225fd54::*Fn_2260068)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2260068 data_ov068_02270d84[3];
extern u32 data_ov068_02270c60;
extern void *data_ov068_0226f9b8[2];
extern void *data_ov068_0226fa18[2];
extern void *data_ov068_0226fa48[2];
}
typedef void (Unk_ov068_0225fd54::*Fn_2260290)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2260290 data_ov068_02270cfc[2];
extern u32 data_ov068_02270c6c;
extern void *data_ov068_0226f8a0[2];
extern void *data_ov068_0226f908[2];
}
typedef void (Unk_ov068_0225fd54::*Fn_2260450)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2260450 data_ov068_02270d54[3];
extern u32 data_ov068_02270c58;
extern void *data_ov068_0226f810[2];
extern void *data_ov068_0226f828[2];
extern void *data_ov068_0226f850[2];
}
}

namespace ns_022605f4 {
extern "C" {
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
void func_ov068_02265994(void *);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
s32 func_ov068_022656a8(void *, void *, s32);
void func_ov003_0221950c(s32, void *);
void func_ov003_02219bf0(s32, void *);
void func_02015ec4(void *, s32);
void VillagerActor_clearFlag834(void *);
void VillagerActor_setFlag834(void *);
void func_020135c4(void *);
void func_020135bc(void *);
void func_02011dfc(void *, u32, s32);
void func_02011c44(void *, u32, s32);
void func_02011c9c(void *, u32, s32);
void func_02011b60(void *, s32);
void func_02011cf4(void *, u32, s32);
void func_02011d4c(void *, u32, s32);
void TalkRequest_AddPlayerTalk6(void *, s32);
void func_0203e42c(void *);
void *func_020951ec(s32);
s32 Unk_020d77a4_getRelativeAngleTo(void *, void *);
void func_020195c8(void *, s32, s32, s32, u32, s32);
void VillagerMood_disableEffects(void *);
void func_020902f8(s32);
void func_020902d4(s32, void *, s32, s32);
s32 func_02090330(s32, void *, s32, s32);
void func_020902b0(s32, void *, s32, s32);
void func_0202d864(void *, void *);
void func_020339bc(void *, void *, s32, s32);
void func_02033988(void *);
void func_02003ddc(void *, s32, s32, s32);
s32 func_02015e48(void *, s32);
s32 func_02019790(void *);
void func_02015fe0(void *, void *, void *, s32, s32);
s32 AnimFrameCtrl_isFinished(void *);
void func_0204edd8(void *, void *);
}
extern "C" void func_ov068_02260e64(s32 *p, s32 target, s32 a, s32 spd, s32 min);
typedef void (Unk_ov068_0225fd54::*Fn_226071c)(Unk_ov068_Owner *);
extern "C" {
extern Fn_226071c data_ov068_02270c84[1];
extern u32 data_ov068_02270c38;
extern void *data_ov068_0226fa78[2];
}
typedef void (Unk_ov068_0225fd54::*Fn_2260944)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2260944 data_ov068_02270de4[5];
extern u32 data_ov068_02270c2c;
extern void *data_ov068_0226f9e0[2];
extern void *data_ov068_0226fa10[2];
extern void *data_ov068_0226fa30[2];
extern void *data_ov068_0226fa40[2];
extern void *data_ov068_0226fa58[2];
}
extern "C" void func_ov068_02260e64(s32 *p, s32 target, s32 a, s32 spd, s32 min);
}

namespace ns_02260f90 {
extern "C" {
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
extern void *data_021c47c4;
s32 func_ov068_02265670(void *, void *);
s32 func_ov068_022656a8(void *, void *, s32);
void func_ov068_02265994(void *);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
s32 func_02015e48(void *, s32);
s32 func_02019790(void *);
s32 func_020197a8(void *);
void func_02011ec0(void *, void *, void *, s32, s32);
s32 func_02011bb0(void *);
void func_02011b98(void *, s32);
void func_02011e9c(void *, s32, s32, s32);
void *func_02011b7c(void *);
void AnimFrameCtrl_setup(void *, s32, s32, s32, s32);
void func_020195c8(void *, s32, s32, s32, u32, s32);
void func_02003ddc(void *, s32, s32, s32);
void func_0202d864(void *);
void VillagerActor_setFlag834(void *);
void VillagerTalk_setSpeakerStateUnk(void *, void *);
void VillagerMood_disableEffects(void *);
void func_02015fe0(void *, void *, void *, s32, s32);
void TalkRequest_EndTalkWith(void *);
void func_02019614(void *, s32, u32);
void func_0203d93c(void);
void TalkRequest_AddPlayerTalk6(void *, s32);
void PlayerActor_SetSlotFlag(s32, s32);
void Camera_SetModeDefault(void);
s32 func_02014220(void *);
void *func_02015aac(void *);
s32 Unk_020d77a4_getAngleTo(void *, void *);
void func_020135c4(void *);
void func_020141b4(void *, s32, s32, s32);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0204ea88(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void func_0204ed70(Unk_ov068_02260f90_V3 *, s32, s32, s32, s32);
s16 Math_AngleXZ(Unk_ov068_02260f90_V3 *, Unk_ov068_02260f90_V3 *);
void func_0201a99c(void *, s32);
void func_02034dd0(s32, s32, s32);
void func_0207824c(s32);
void func_0203d948(void);
}
static inline BOOL Unk_ov068_02261118_InRange(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (!(b < 0x1380 || a > 0x139f)) {
        r = TRUE;
    }
    return r;
}
typedef void (Unk_ov068_02260f90::*Fn_2260f90)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2260f90 data_ov068_02270d0c[2];
extern u32 data_ov068_02270c64;
extern void *data_ov068_0226f978[2];
extern void *data_ov068_0226f9a0[2];
}
typedef void (Unk_ov068_02261290::*Fn_2261290)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2261290 data_ov068_02270cec[2];
extern u32 data_ov068_02270c74;
extern void *data_ov068_0226f8d8[2];
extern void *data_ov068_0226f900[2];
}
typedef void (Unk_ov068_02261574::*Fn_2261574)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2261574 data_ov068_02270d6c[3];
extern u32 data_ov068_02270c68;
extern void *data_ov068_0226f860[2];
extern void *data_ov068_0226f8d0[2];
extern void *data_ov068_0226f880[2];
}
}

namespace ns_02261900 {
extern "C" {
extern s16 data_ov068_0226f0e4;
extern s16 data_ov068_02270c24;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
extern Unk_ov068_02262044_Ent data_ov068_0226f164[];
s32 X_func_ov068_0225f83c(void *);
void X_func_ov068_0225f838(...);
s32 func_ov068_022656a8(void *, void *, s32);
s32 func_ov068_02264aa0(void *, void *);
void func_ov068_02265994(void *);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
s32 func_020197a8(void *);
s32 func_02019790(void *);
void func_02019614(void *, s32, u32);
s32 Unk_020d77a4_getAngleToPlayer(void *, s32);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void VillagerActor_clearFlag834(void *);
void VillagerActor_setFlag834(void *);
void VillagerMood_enableEffects(void *);
s32 VillagerTalk_hasPartner(void *);
s32 Unk_020d77a4_getDistanceTo(void *, void *);
s32 Unk_020d77a4_getRelativeAngleTo(void *, void *);
s32 Unk_020d77a4_getAngleTo(void *, void *);
s32 func_020e96a4(void *, void *);
void func_0201a9ec(void *, void *);
s32 func_02015e48(void *, s32);
s32 func_02063b8c(s32);
void func_02090330(u32, void *, void *, s32);
void func_02003ddc(void *, s32, s32, s32);
void func_0207c1e8(s32);
void func_0207c190(s32, s32);
void *func_020951ec(s32);
void func_020195c8(void *, s32, s32, s32, u32, s32);
}
typedef void (Unk_ov068_02261900::*Fn_2261900)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2261900 data_ov068_02270cbc[2];
extern u32 data_ov068_02270c34;
extern void *data_ov068_0226f920[2];
extern void *data_ov068_0226f840[2];
}
typedef void (Unk_ov068_02261900::*Fn_2261ae8)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2261ae8 data_ov068_02270c7c[1];
extern u32 data_ov068_02270c4c;
extern void *data_ov068_0226f808[2];
}
typedef void (Unk_ov068_02261900::*Fn_2261c38)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2261c38 data_ov068_02270dbc[5];
extern u32 data_ov068_02270c40;
extern void *data_ov068_0226fa70[2];
extern void *data_ov068_0226fa88[2];
extern void *data_ov068_0226faa8[2];
extern void *data_ov068_0226fae8[2];
extern void *data_ov068_0226fb28[2];
}
}

namespace ns_02262294 {
extern "C" {
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
extern u8 data_021dfd8c[];
extern u8 data_ov068_0226f100[];
extern u8 data_ov068_0226f154[];
extern u8 data_ov068_0226f15c[];
extern s32 data_ov068_0226f178[];
s32 func_02014220(void *);
void TalkRequest_EndTalkWith(void *);
s32 func_ov068_022656a4(void *, s32);
void *func_020951ec(s32);
void *X_func_ov068_02265f58(void *);
s32 VillagerMemory_getFriendship(void *);
s32 VillagerData_getVillagerId(s32);
s32 VillagerId_GetPersonality(s32);
s32 Unk_020d77a4_getAngleTo(void *, void *);
void func_ov068_02265994(void *);
void func_ov003_02212240();
void func_02014170(void *, s32, s32, s32, s32);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
Unk_ov068_Owner *VillagerTalk_getPartner(void *);
void VillagerTalk_setPartner(void *, s32);
void func_0201c7ec(void *, s32);
s32 func_ov068_02265670(void *, void *);
s32 func_ov068_022656a8(void *, void *, s32);
s32 func_ov068_022655b4(void *);
s32 func_020197a8(void *);
s32 func_02019790(void *);
s32 func_020197a0(void *);
void VillagerMood_requestApply(void *);
void VillagerActor_setFlag834(void *);
s32 MI_CpuCopy8(void *, void *, s32);
s32 func_0202ce44(void *, s32);
s32 VillagerActor_isFlag834(void *);
s32 func_ov068_02264aa0(void *, void *);
s32 func_0201c7e0(void *);
s32 func_ov068_02263738(void *, void *, s32, s32, s32);
s32 func_ov068_02263704(void *, void *, void *, s32, s32, s32);
s32 PlayerData_GetCurrent();
s32 func_02063b8c(s32);
void func_02019638(void *, s32, s32, u32);
void func_02019614(void *, s32, u32);
s32 func_ov068_02263840(void *, void *);
s32 func_0207abd8(void *, s32, s32);
s32 PlayerData_getPlayerId(...);
s32 func_02094218(s32);
s32 Villager_FindMemory(s32, s32);
s32 Unk_020d77a4_getDistanceTo(void *, void *);
s32 func_020e9650(void *, void *);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void VillagerMood_enableEffects(void *);
void VillagerActor_clearFlag834(void *);
}
typedef void (Unk_ov068_02262294::*Fn_2262294)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2262294 data_ov068_02270d1c[2];
extern u32 data_ov068_02270c28;
extern void *data_ov068_0226fa50[2];
extern void *data_ov068_0226fa60[2];
}
typedef void (Unk_ov068_02262414::*Fn_2262414)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2262414 data_ov068_02270d9c[4];
extern u32 data_ov068_02270c78;
extern void *data_ov068_0226fa08[2];
extern void *data_ov068_0226fa20[2];
extern void *data_ov068_0226fa28[2];
extern void *data_ov068_0226fa38[2];
}
typedef BOOL (Unk_ov068_02262414::*Fn_2262548)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2262548 data_ov068_02270e0c[7];
extern u32 data_ov068_02270c3c;
extern void *data_ov068_0226f970[2];
extern void *data_ov068_0226f980[2];
extern void *data_ov068_0226f998[2];
extern void *data_ov068_0226f9a8[2];
extern void *data_ov068_0226f9b0[2];
extern void *data_ov068_0226f9c0[2];
extern void *data_ov068_0226f9d8[2];
}
}

namespace ns_02262c20 {
extern "C" {
extern u32 data_021dfd8c[];
extern u8 data_ov068_0226f0e8[];
extern u8 data_ov068_0226f0f0[];
extern u8 data_ov068_0226f0f8[];
extern u8 data_ov068_0226f104[];
extern u8 data_ov068_0226f10c[];
extern u8 data_ov068_0226f114[];
extern u8 data_ov068_0226f124[];
extern u8 data_ov068_0226f12c[];
extern u8 data_ov068_0226f144[];
extern u8 data_ov068_0226f14c[];
Unk_ov068_Owner *VillagerTalk_getPartner(void *);
s32 func_ov068_02263668(void *, void *, void *, s32, s32);
u16 *VillagerDataProfileView_getShirt(void *);
u8 *VillagerData_getPattern(void *);
u8 *VillagerData_getVillagerId(void *);
u8 *func_ov068_02263600(void *, void *);
void func_0207cb94(void *, void *);
void func_0207f264(void *, void *, s32);
void func_ov068_022637c0(void *, void *, void *);
void func_ov068_02263738(void *, void *, s32, s32, s32);
void func_ov068_02263704(void *, void *, void *, s32, s32, s32);
void func_ov068_02263768(void *, void *, void *);
void VillagerDataProfileView_setShirt(void *, u16 *);
void func_02016c80(void *, s32, u16 *);
s32 VillagerId_GetSpecies(void *);
s32 Villager_GetDefaultCatchphraseEncoded(void *, s32);
void func_0207fb34(void *, void *);
void func_0207fb4c(void *, void *);
void *func_0207e310(void *);
u16 *func_0207850c(void *);
void Villager_GetDefaultUmbrella(u16 *, void *);
void VillagerDataProfileView_setUmbrella(void *, u16 *);
void func_0207fd3c(u16 *, void *);
s32 Item_IsFurniture(void *);
s32 Item_GetFurnitureIndex(void *);
s32 func_02071e8c(void *, void *);
s32 VillagerId_isValid(void *);
s32 memcmp(void *, void *, s32);
void *SaveVillagers_Get(void *, s32);
s32 func_0207e278(void *);
s32 Random_PickSetBit(s32, s32, s32);
s32 SaveVillagers_IsValidIndex(s32);
void VillagerDataProfileView_getCatchphrase(void *, void *, s32);
s32 MsgString_equals(void *, void *);
s32 func_0207abd8(void *, s32, s32);
}
static inline BOOL Unk_ov068_02262c20_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x12a8 && *p <= 0x12af) {
        r = TRUE;
    }
    return r;
}
static inline BOOL Unk_ov068_02262e5c_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1380 && *p <= 0x139f) {
        r = TRUE;
    }
    return r;
}
}

namespace ns_02263600 {
extern "C" {
extern u8 data_021e6e4c[];
extern u8 data_021dfd8c[];
extern u8 gVec3Zero[];
extern u32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov068_02263b90_Fn data_ov068_0226f910;
void *func_02071b00(void *, u8);
s32 func_02071e8c(void *, void *);
u32 Random_PickSetBit(u32, u32, u32);
s32 PlayerData_GetCurrent();
void *PlayerData_getPlayerId(...);
s32 func_02094218(void *);
void *Villager_FindMemory(u32, void *);
s32 VillagerMemory_getFriendship(void *);
s32 func_02063b8c(s32);
s32 VillagerMood_addMood(void *, s32, s32);
void VillagerMood_requestApply(void *);
s32 VillagerData_getVillagerId(void *);
void *SaveVillagers_PickRandomExcept(void *, void *, s32);
void func_02133ef8(void *, s32);
Unk_ov068_Owner *VillagerTalk_getPartner(void *);
s32 SaveVillagers_FindIndex(void *, s32);
s32 func_0207ac2c(void *, s32, s32);
void func_0207ab90(void *, s32, s32, s32);
s32 func_02014220(void *);
void TalkRequest_EndTalkWith(void *);
void VillagerTalk_setPartner(void *, s32);
void func_0201c7ec(void *, s32);
void func_ov068_02265994(void *);
void func_02013464(void *);
s32 VillagerTalk_hasPartner(void *);
void func_02014198(void *, s32, s32);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
void *func_02015aac(void *);
s32 Unk_020d77a4_getAngleTo(void *, void *);
void func_020141b4(void *, s32, s32, s32);
s32 func_02015e48(void *, s32);
s32 func_02019790(void *);
void func_0201bd9c(void *, s32);
void func_0202d864(void *, void *);
s32 func_ov068_022656a8(void *, void *, s32);
s32 func_ov068_022656a4(void *, s32);
s32 func_02013568(void *, void *);
void *func_0207e310(void *);
void func_0207e334(void *);
s32 func_ov003_02218ce4();
void func_020195c8(void *, s32, s32, s32, s32, s32);
void func_020785e8(void *, s32);
void func_0207857c(void *, s32);
void *VillagerDataItemView_getHousePos(void *);
void func_0204ed8c(void *, u32, u32);
void func_0201a99c(void *);
void VillagerActor_setFlag834(void *);
void VillagerMood_disableEffects(void *);
void func_02019614(void *, s32, u32);
s32 func_020785ec(void *);
s32 func_0207e278(void *);
s32 func_0207c618(void *, s32);
s32 func_ov068_02265434(void *, void *);
void *func_020951ec(s32);
s32 Unk_020d77a4_isNear(void *, void *, s32);
void func_02013374(void *);
void X_func_ov068_02265fb4(void *);
void func_0207c298(void *, s32);
void *func_ov068_02263600(void *unused, void *x);
s32 func_ov068_02263668(void *unused, u32 *a, u32 *b, u32 c, u32 d);
void func_ov068_02263704(void *a, void *b, u8 *tbl, s32 n, u8 p5, u8 p6);
void func_ov068_02263738(void *a, void *o, s32 x, s32 y, u8 flag);
void func_ov068_02263768(void *a, s32 unused, s8 *t);
void func_ov068_022637c0(void *a, void *o, s8 *t);
void func_ov068_02263808(void *a, void *r1, void *r2, s8 *t);
s32 func_ov068_02263840(void *a, void *o);
s32 func_ov068_02263880(void *a, void *b);
}
extern "C" void *func_ov068_02263600(void *unused, void *x);
extern "C" s32 func_ov068_02263668(void *unused, u32 *a, u32 *b, u32 c, u32 d);
extern "C" void func_ov068_02263704(void *a, void *b, u8 *tbl, s32 n, u8 p5, u8 p6);
extern "C" void func_ov068_02263738(void *a, void *o, s32 x, s32 y, u8 flag);
extern "C" void func_ov068_02263768(void *a, s32 unused, s8 *t);
extern "C" void func_ov068_022637c0(void *a, void *o, s8 *t);
extern "C" void func_ov068_02263808(void *a, void *r1, void *r2, s8 *t);
extern "C" s32 func_ov068_02263840(void *a, void *o);
extern "C" s32 func_ov068_02263880(void *a, void *b);
typedef void (Unk_ov068_022638c0::*Fn_22638c0)(Unk_ov068_Owner *);
extern "C" {
extern Fn_22638c0 data_ov068_02270cdc[2];
extern u32 data_ov068_02270c5c;
extern void *data_ov068_0226f858[2];
extern void *data_ov068_0226f8e0[2];
}
typedef void (Unk_ov068_02263a40::*Fn_2263a40)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2263a40 data_ov068_02270cac[2];
extern u32 data_ov068_02270c50;
extern void *data_ov068_0226f838[2];
extern void *data_ov068_0226f848[2];
}
typedef void (Unk_ov068_02263cf0::*Fn_2263cf0)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2263cf0 data_ov068_02270c9c[2];
extern u32 data_ov068_02270c70;
extern void *data_ov068_0226f930[2];
extern void *data_ov068_0226f820[2];
}
typedef void (Unk_ov068_02263e4c::*Fn_2263e4c)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2263e4c data_ov068_02270c8c[2];
extern u32 data_ov068_02270c44;
extern void *data_ov068_0226f950[2];
extern void *data_ov068_0226f948[2];
}
}

namespace ns_02264000 {
extern "C" {
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
extern u8 data_ov068_0226f13c[];
extern u8 data_ov068_0226f0f4[];
extern s16 data_ov068_0226f0e4[];
extern u32 __ptmf_null[];
extern u8 gRandom[];
}
extern "C" {
void *PlayerData_GetCurrent();
s32 func_02098044(void *, s32);
void *func_0207e310();
void func_ov068_02265994(void *);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
void X_func_ov068_0225f630(void *, void *);
s32 X_func_ov068_0225f83c(void *);
void func_02019614(void *, s32, u32);
void func_020785e8(void *, s32);
void func_0207857c(void *, s32);
s32 func_0207c618(void *, s32);
void func_0207e4f4(void *);
void VillagerActor_setFlag834(void *);
s32 func_02063b8c(s32);
void VillagerMood_disableEffects(void *);
s32 func_02015e48(void *, s32);
s32 func_02019790(void *);
s32 func_020197a8(void *);
s32 func_020197a0(void *);
void func_ov068_022656a8(void *, void *, s32);
void func_ov068_022656a4(void *, s32);
void *VillagerDataItemView_getHousePos(void *);
void func_0204ed8c(void *, u32, u32);
void func_020e761c(void *, s32, s32);
void func_02013568(void *, void *);
void *func_0207e334(void *);
s32 func_ov003_02218d0c(void *);
void func_020195c8(void *, s32, s32, s32, u32, s32);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, u32, s32);
void func_020135bc(void *);
s32 func_ov068_02265434(void *, void *);
s32 func_0202bcdc(void *, void *, void *, s32);
void func_ov068_022659dc(void *);
void func_0207c298(void *, s32);
s32 func_0201324c(void *);
void func_ov068_02265324(void *, s32, void *);
s32 func_ov068_02265270(void *, void *);
s32 func_ov068_022652d0(void *, void *);
s32 func_02012cb8(void *);
void func_02013300(void *, void *, s32, s32, void *);
s32 func_02012c58(void *, void *);
void func_0201325c(void *, s32);
s32 func_0201acfc(void *);
s32 Random_Next(void *);
s32 func_ov068_0226506c(void *, void *, void *);
s32 func_ov068_02265114(void *, void *, s32);
s32 func_ov068_0226517c(void *, void *, void *);
s16 Math_AngleXZ(void *, void *);
s32 NpcActor_IsFrontAngle(s32);
s32 func_ov068_0226594c(void *);
s32 func_0201a5d0(void *, void *);
s32 func_ov068_0226519c(void *, void *);
void *func_0201a978(void *);
void func_0202d864(void *, void *);
s32 func_ov068_02264ab4(void *, void *);
s32 func_ov068_02264aa0(void *, void *);
s32 func_ov068_022655e0(void *, void *);
s32 func_ov068_02264ee0(void *, void *);
s32 func_ov068_02264b9c(void *, void *);
s32 func_ov068_022649f4(void *, void *);
s32 func_ov068_02264ffc(void *, void *);
}
typedef void (Unk_ov068_0225fd54::*Fn_226410c)(Unk_ov068_Owner *);
extern "C" {
extern Fn_226410c data_ov068_02270d3c[3];
extern u32 data_ov068_02270c30;
extern void *data_ov068_0226fae0[2];
extern void *data_ov068_0226fb10[2];
extern void *data_ov068_0226fb20[2];
}
}

namespace ns_022649f4 {
extern "C" {
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern void *data_021c47c4;
extern u8 gVec3Zero[];
u32 func_ov068_0226594c(void *);
u32 func_ov003_022125ac();
s32 Unk_020d77a4_getDistanceToPlayer(void *, s32);
s32 func_0201a5d0(void *, void *);
s32 func_0201a1a4(void *);
void func_0204ee10(s32 *, s32 *, void *);
void func_0204edd8(void *, void *);
s32 func_020e9650(void *, void *);
s32 Unk_020d77a4_getNpcIndex(void *);
s32 func_02042e98(s32, void *);
s32 func_02042d10();
void func_02042820(s32);
void *func_0204ebd8(void *, s32, s32, s32, s32, s32);
s32 func_0204e88c(void *, s32, s32);
s32 func_02063b8c(s32);
void VillagerTalk_setPartner(void *, void *);
void func_0201c7ec(void *, u32);
void func_ov068_02265698(void *);
void func_ov068_022656a8(void *, void *, s32);
void func_ov068_022656a4(void *, s32);
void *NpcRegistry_GetVillager(s32);
void *VillagerData_getVillagerId(void *);
s32 memcmp(void *, void *, s32);
s32 Math_AngleXZ(void *, void *);
s32 func_0201a1cc(s32, s32);
s32 func_0201a9a0(void *, void *, s32);
s32 func_0201bb3c(void *, void *);
void func_02019614(void *, s32, u32);
void func_0201a97c(void *, void *);
s32 func_0201a968(void *);
void func_0201a8f0(void *);
s32 func_02012cb8(void *);
void *func_0207e310(void *);
s32 func_0201324c(void *);
void func_ov068_02265324(void *, s32, void *);
s32 func_02012c58(void *, void *);
s32 TalkRequest_IsTalking();
void *func_020951ec(s32);
void *TalkRequest_GetTalkTarget();
void func_020e9960(void *, void *, void *);
void func_020e9768(void *, s32);
void func_01ffd070(void *, void *, void *);
void func_020e93a0(void *, s32);
s32 func_020e96ec(void *, void *);
s32 func_01ffcb0c(s32, s32);
void *VillagerDataItemView_getHousePos(void *);
void func_0204ed8c(void *, u32, u32);
void *PlayerData_GetCurrent();
s32 func_02098044(void *, s32);
s32 func_0207c618(void *, s32);
s32 func_ov068_022651e0(void *, void *, Unk_ov068_022649f4_Vec *);
s32 func_ov068_02264a64(void *);
s32 func_ov068_02264aa0(void *, Unk_ov068_Owner_649 *);
s32 func_ov068_02264b30(void *, Unk_ov068_02264ab4_P2 *);
void *func_ov068_02264f4c(void *, Unk_ov068_Owner_649 *);
void X_func_ov068_02265dc8(void *);
s32 func_020197a8(void *);
s32 func_02019790(void *);
s32 func_020b8fe8(s32);
s32 VillagerId_isValid(void *);
s32 func_02078574(void *);
void func_0209d498(void *);
void func_0202d864(u16 *, void *);
void VillagerTalk_setSpeakerStateUnk(void *, u16 *);
s32 func_0209b3b0(s32);
void func_0209adbc(u16 *, s32);
void Villager_GetUmbrella(u16 *, void *);
s32 Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
}
static inline BOOL Unk_ov068_02264b30_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1566 && *p <= 0x1566) {
        r = TRUE;
    }
    return r;
}
static inline BOOL Unk_ov068_02264b9c_InRange(u16 *p, s32 i, u32 lo, u32 hi) {
    BOOL r = FALSE;
    volatile u16 *q = p;
    u32 h = q[i];
    u32 l = q[i];
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}
static inline BOOL Unk_ov068_02264b9c_Same(u16 *a, u16 *b) {
    if (Item_IsFurniture(a) != 0) {
        if (Item_GetFurnitureIndex(a) == Item_GetFurnitureIndex(b)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*a == *b) {
        return TRUE;
    }
    return FALSE;
}
static inline BOOL Unk_ov068_022652d0_B(BOOL v) {
    if (v != 0) {
        return TRUE;
    }
    return FALSE;
}
extern "C" BOOL func_ov068_022649f4(Unk_ov068_0225fd54 *self, Unk_ov068_Owner_649 *o);
extern "C" s32 func_ov068_02264a64(void *self);
extern "C" s32 func_ov068_02264aa0(void *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL func_ov068_02264ab4(void *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL func_ov068_02264b30(void *self, Unk_ov068_02264ab4_P2 *v);
extern "C" BOOL func_ov068_02264b9c(Unk_ov068_0225fd54 *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL func_ov068_02264ee0(Unk_ov068_0225fd54 *self, Unk_ov068_Owner_649 *o);
extern "C" void *func_ov068_02264f4c(void *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL func_ov068_02264ffc(void *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL func_ov068_0226506c(Unk_ov068_0225fd54 *self, Unk_ov068_022649f4_Vec *out, Unk_ov068_Owner_649 *o);
extern "C" BOOL func_ov068_02265114(void *self, void *v, s32 lim);
extern "C" s32 func_ov068_0226517c(void *self, void *a, void *b);
extern "C" s32 func_ov068_0226519c(void *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL func_ov068_022651e0(void *self, void *a, Unk_ov068_022649f4_Vec *b);
extern "C" BOOL func_ov068_02265270(Unk_ov068_0225fd54 *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL func_ov068_022652d0(void *self, Unk_ov068_Owner_649 *o);
}

namespace ns_02265324 {
extern "C" {
extern s32 data_020c6d1c;
extern u8 gVec3Zero[];
s32 func_ov003_0221ffe8(s32);
s32 func_ov003_0221ffb8(void *, s32);
s32 func_ov003_02227ed4(u8 *, u8);
s32 func_ov003_02227e08(void *, u8);
s32 func_020e9650(void *, void *);
s32 func_0201a5d0(void *, void *);
void func_0201a6c0(void *, u32, s32, s32, void *, s32, s32, u8);
void func_0201a720(void *, void *);
s32 VillagerTalk_hasPartner(void *);
s32 func_0201c784(void *);
void *VillagerTalk_getPartner(void *);
void VillagerTalk_setPartner(void *, u32);
void func_0201c7ec(void *, u32);
void VillagerMood_requestApply(void *);
void *X_func_ov068_02265f58(void *);
void *PlayerData_GetCurrent();
s32 func_02080f94(void *);
s32 Unk_020d77a4_isPlayerNear(void *, s32, u32);
s32 func_02014220(void *);
s32 VillagerTalk_begin(void *, void *, s32);
void *Unk_020d77a4_getPlayerActor(void *, s32);
void func_02015ab0(void *, void *);
void func_02015a80(void *, void *);
void func_020784a8();
void func_0207c20c(void *);
s32 func_0207e278(void *);
void *VillagerDataItemView_getHousePos(void *);
void func_0204ed8c(void *, u32, u32);
s32 func_02078294();
s32 func_0207e334(void *);
s32 func_02078498();
void func_0207c190(void *, s32);
s32 func_0203e450(void *);
s32 func_0201b08c(void *, u32, u32);
void func_0207ce00(void *);
s32 func_0207ce24(void *);
s32 func_02063b8c(s32);
void func_020902b0(s32, void *, s32, s32);
extern s32 data_ov068_0226f16c[];
extern u32 gCamera;
extern Unk_ov068_02265434_Vec gCameraLookAt;
extern Unk_ov068_0226fa68_Pair data_ov068_0226fa68;
extern u16 data_020c6cc8;
extern s32 data_ov068_0226f0fc;
extern s16 data_ov068_02270c24;
extern Unk_ov068_0225f1a0_Ent data_ov068_02270e44[];
extern u8 data_ov068_0226f11c[];
extern u8 data_ov068_0226f134[];
extern u8 data_021ed24c[];
extern u32 data_021c47c4;
void *func_0207e310(void *);
s32 func_02098044(void *, s32);
void func_0209d498(void *);
void *VillagerData_getVillagerId(void *);
s32 VillagerId_GetPersonality(void *);
s32 func_02081288(s32, void *);
s32 VillagerId_isValid(void *);
s32 func_02078574(void *);
s32 func_02013300(void *, void *, s32, s32, void *);
s32 func_0201324c(void *);
s32 func_02063b8c(s32);
s32 func_02012cb8(void *);
void func_02019614(void *, s32, u32);
void func_020135c4(void *);
void func_0201325c(void *, u32);
void VillagerActor_clearFlag834(void *);
void VillagerMood_enableEffects(void *);
void func_020133a4(void *);
void func_020133a8(void *);
void func_02013374(void *);
void *func_020951ec(s32);
s32 func_0207c22c(void *, s32);
s32 func_020b5164();
s32 Unk_020d77a4_getDistanceTo(void *, void *);
s32 Unk_020d77a4_getRelativeAngleTo(void *, void *);
s32 func_ov068_02264a64(void *, u32);
s32 func_02014220(void *);
void func_020784b8(void *, s32);
void X_func_ov068_02265e6c(void *);
void VillagerMood_update(void *, void *);
s32 func_020784f4(void *);
s32 func_0207856c(void *);
s32 func_020197a8(void *);
s32 func_020197a0(void *);
s32 func_02018984(s32);
void func_0201a040(void *, s32);
s32 TalkRequest_IsTalking();
s32 func_0201c784(void *);
void X_func_ov068_0225f630(void *, void *);
s32 Villager_GetPlan(void *);
s32 func_0209a610(s32);
s32 func_0209b354(s32);
s32 func_0202ce44(void *, s32);
s32 func_0202c35c(void *, s32, s32, s32, s32, s32, s32);
s32 func_0202c84c(void *, s32, s32, s32, s32, s32);
s32 func_02085618(void *);
s32 func_02085810(void *);
void func_02085870(void *, void *);
void func_02085814(void *, s32);
void func_02085820(void *, void *);
s32 func_0204ec14(u32, s32, s32, s32);
s32 func_020b8fe8();
void *func_0207850c(void *);
void func_02078504(void *, void *);
void func_0209adbc(void *, s32);
s32 Item_IsFurniture(void *);
s32 Item_GetFurnitureIndex(void *);
void Villager_GetUmbrella(void *, void *);
void func_ov068_022656a8(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o, s32 idx);
void *func_ov068_02265918(Unk_ov068_0226fb80 *o);
void func_ov068_02265994(Unk_ov068_0226fb80 *o);
s32 func_ov068_022653ec(Unk_ov068_0225f1a0_Obj8b4 *self);
s32 func_ov068_0226546c(Unk_ov068_0226546c_Rect *r, Unk_ov068_02265434_Vec *a, Unk_ov068_02265434_Vec *b);
void func_ov068_02265690(Unk_ov068_0225f1a0_Obj8b4 *self);
void func_ov068_022656a4(Unk_ov068_0225f1a0_Obj8b4 *self, s32 v);
void func_ov068_022656f4(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o);
void func_ov068_02265a40(Unk_ov068_0226fb80 *o, u8 *b);
void func_ov068_02265b0c(Unk_ov068_0226fb80 *o, u8 *b);
s32 func_ov068_02265bcc(Unk_ov068_0226fb80 *o);
s32 func_ov068_022655a4(Unk_ov068_0225f1a0_Obj8b4 *self, s32 v);
}
static inline BOOL Unk_ov068_02265a40_R(volatile u16 *p, u32 lo, u32 hi) {
    u32 a = *p;
    u32 b = *p;
    BOOL r = FALSE;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}
static inline BOOL Unk_ov068_02265c24_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
extern "C" void func_ov068_02265324(Unk_ov068_0225f1a0_Obj8b4 *self, s32 a, Unk_ov068_0226fb80 *o);
extern "C" s32 func_ov068_022653ec(Unk_ov068_0225f1a0_Obj8b4 *self);
extern "C" s32 func_ov068_02265434(Unk_ov068_0226546c_Rect *r, Unk_ov068_0226fb80 *o);
extern "C" s32 func_ov068_0226546c(Unk_ov068_0226546c_Rect *r, Unk_ov068_02265434_Vec *a, Unk_ov068_02265434_Vec *b);
extern "C" s32 func_ov068_022654c0(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o);
extern "C" void func_ov068_02265588(Unk_ov068_0225f1a0_Obj8b4 *self);
extern "C" void func_ov068_022655b4(Unk_ov068_0225f1a0_Obj8b4 *self);
extern "C" s32 func_ov068_022655c0(Unk_ov068_0225f1a0_Obj8b4 *self);
extern "C" s32 func_ov068_022655a4(Unk_ov068_0225f1a0_Obj8b4 *self, s32 v);
extern "C" s32 func_ov068_022655e0(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o);
extern "C" s32 func_ov068_02265670(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o);
extern "C" void func_ov068_02265690(Unk_ov068_0225f1a0_Obj8b4 *self);
extern "C" void func_ov068_02265698(Unk_ov068_0225f1a0_Obj8b4 *self);
extern "C" void func_ov068_022656a4(Unk_ov068_0225f1a0_Obj8b4 *self, s32 v);
extern "C" void func_ov068_022656a8(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o, s32 idx);
extern "C" void func_ov068_022656f4(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o);
extern "C" void *func_ov068_02265918(Unk_ov068_0226fb80 *o);
extern "C" u32 func_ov068_0226594c(Unk_ov068_0226fb80 *o);
extern "C" void func_ov068_02265994(Unk_ov068_0226fb80 *o);
extern "C" void func_ov068_022659dc(Unk_ov068_0226fb80 *o);
extern "C" void func_ov068_02265a40(Unk_ov068_0226fb80 *o, u8 *b);
extern "C" void func_ov068_02265b0c(Unk_ov068_0226fb80 *o, u8 *b);
extern "C" s32 func_ov068_02265bcc(Unk_ov068_0226fb80 *o);
extern "C" void func_ov068_02265c24(Unk_ov068_0226fb80 *o);
}

namespace ns_02265d34 {
extern "C" {
extern Unk_ov068_0226fb80_Fn data_ov068_0226f870;
extern u16 data_ov068_0226f0ec;
extern u16 data_020c6cc8;
extern Unk_ov068_022661c8_Blk data_021cb69c;
extern Unk_ov068_0226647c_Row data_020c8d0c[];
extern s16 data_02135f44[];
void X_func_ov068_0225f838(void *, ...);
s32 X_func_ov068_0225f83c(void *);
void X_func_ov068_0225f840(void *, void *);
void X_func_ov068_0225f8f0(void *);
void X_func_ov068_0225f900(void *);
void X_func_ov068_0225f6b0(void *);
void X_func_ov068_0225f670(void *, void *);
void func_ov068_02265588(void *);
void func_ov068_022656a8(void *, void *, s32);
void X_func_ov068_0226581c(void *);
void func_ov068_02265c24(void *);
void *VillagerData_getVillagerId(void *);
s32 VillagerId_isValid(void *);
u8 *func_0207e310(void *);
s32 func_02078574(void *);
void *Villager_GetPlan(void *);
void *func_0209a610(void *);
void func_0209d498(void *);
s32 func_0209b3b0(s32);
s32 func_0209b354(void *);
s32 func_0209b1f0(void *, void *, s32);
s32 func_0201c784(void *);
s32 func_02063b8c(s32);
void func_02078570(void *, s32);
s32 func_02014220(void *);
s32 func_02088d38(void *, s32);
void *func_020951ec(s32);
s32 Math_AngleXZ(void *, void *);
void *PlayerData_GetCurrent();
void *PlayerData_getPlayerId(void *);
BOOL func_02094218(void *);
BOOL Villager_FindMemory(void *, void *);
void func_0202d864(void *, void *);
void func_02011ec0(void *, void *, void *, s32, s32);
void func_02011dfc(void *, u32, s32);
void func_02011b98(void *, s32);
void func_0207c1e8(void *);
s32 func_0207ce24(void *);
s32 func_0202d8ec(void *);
void func_02011c38(void *);
void func_020902f8(s32);
s32 func_0201b138(void *);
void func_02011bcc(void *, void *);
s32 func_0202d948(void *);
s32 func_02078234();
s32 func_0207e334(void *);
s32 func_02078294();
u32 func_0207e278(void *);
s32 func_0202dab0(void *);
void Unk_020d77a4_setTalkRequest(void *, void *);
s32 func_02011f08(void *, void *);
s32 func_020785ec(void *);
void func_02011f54(void *);
s32 func_020e7500(void *);
s32 func_01ffcb0c(s32, s32);
}
static inline BOOL Unk_ov068_02266320_IsZero(s32 v) {
    return v == 0 ? TRUE : FALSE;
}
extern "C" s32 func_ov068_0226647c(Unk_ov068_0226647c_Cam *c);
extern "C" void func_ov068_022665c8(Unk_ov068_0226647c_Cam *c, s32 idx);
extern "C" void func_ov068_02266624(Unk_ov068_0226647c_Cam *c, s32 idx);
extern "C" Unk_ov068_0226fb80 *func_ov068_02266424();
}

namespace nsD {
extern "C" {
extern s16 data_020c6cc0;
extern s16 data_020c905c;
void _ZN18Unk_ov068_0225fd5419func_ov068_0225fd54EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0225fdc0EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0225fe28EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0225fe70EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0225ff18EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0225ff84EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0225ff88EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0225fff4EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260068EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022600e4EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022600e8EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260160EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022601f0EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260290EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022602fcEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260324EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260374EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260450EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022604ccEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022604fcEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0226054cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022605f4EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0226071cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260780EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260944EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022609e0EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260a64EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260c14EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260cdcEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260dccEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02260ed4EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02264008EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0226410cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_02264188EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0226424cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022642c4EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_0226433cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022643d0EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022644fcEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0225fd5419func_ov068_022645dcEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02260f9019func_ov068_02260f90EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02260f9019func_ov068_02260ffcEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02260f9019func_ov068_02261084EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02260f9019func_ov068_02261118EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226129019func_ov068_02261290EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226129019func_ov068_022612fcEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226129019func_ov068_02261394EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226129019func_ov068_02261444EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226157419func_ov068_02261574EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226157419func_ov068_022615f0EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226157419func_ov068_02261644EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226157419func_ov068_022616c4EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226157419func_ov068_02261714EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226179c19func_ov068_0226179cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226179c19func_ov068_022617b8EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261900EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_0226196cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_022619e8EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261a2cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261ab4EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261ab8EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261ae8EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261b4cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261b90EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261c38EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261cd4EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261db0EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261e10EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02261f08EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_02262044EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226190019func_ov068_022621fcEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226229419func_ov068_02262294EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226229419func_ov068_02262300EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226229419func_ov068_02262304EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226229419func_ov068_02262338EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_02262414EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_022624a4EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_022624f8EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_02262648EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_02262ad4EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_02262b78EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_02262c20EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_02262da0EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_02262e5cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_02262fd8EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_022632dcEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_02263494EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226241419func_ov068_02263518EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_022638c019func_ov068_022638c0EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_022638c019func_ov068_0226392cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_022638c019func_ov068_02263930EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_022638c019func_ov068_02263978EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263a4019func_ov068_02263a40EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263a4019func_ov068_02263aacEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263a4019func_ov068_02263b90EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263a4019func_ov068_02263c20EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263cf019func_ov068_02263cf0EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263cf019func_ov068_02263d5cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263cf019func_ov068_02263d6cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263cf019func_ov068_02263d74EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263e4c19func_ov068_02263e4cEP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263e4c19func_ov068_02263eb8EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_02263e4c19func_ov068_02264000EP15Unk_ov068_Owner();
void _ZN18Unk_ov068_0226fb8019func_ov068_022661c8Ev();
extern void *data_ov068_0226f800[2];
extern void *data_ov068_0226f808[2];
extern void *data_ov068_0226f810[2];
extern void *data_ov068_0226f818[2];
extern void *data_ov068_0226f820[2];
extern void *data_ov068_0226f828[2];
extern void *data_ov068_0226f830[2];
extern void *data_ov068_0226f838[2];
extern void *data_ov068_0226f840[2];
extern void *data_ov068_0226f848[2];
extern void *data_ov068_0226f850[2];
extern void *data_ov068_0226f858[2];
extern void *data_ov068_0226f860[2];
extern void *data_ov068_0226f868[2];
extern void *data_ov068_0226f870[2];
extern void *data_ov068_0226f878[2];
extern void *data_ov068_0226f880[2];
extern void *data_ov068_0226f888[2];
extern void *data_ov068_0226f890[2];
extern void *data_ov068_0226f898[2];
extern void *data_ov068_0226f8a0[2];
extern void *data_ov068_0226f8a8[2];
extern void *data_ov068_0226f8b0[2];
extern void *data_ov068_0226f8b8[2];
extern void *data_ov068_0226f8c0[2];
extern void *data_ov068_0226f8c8[2];
extern void *data_ov068_0226f8d0[2];
extern void *data_ov068_0226f8d8[2];
extern void *data_ov068_0226f8e0[2];
extern void *data_ov068_0226f8e8[2];
extern void *data_ov068_0226f8f0[2];
extern void *data_ov068_0226f8f8[2];
extern void *data_ov068_0226f900[2];
extern void *data_ov068_0226f908[2];
extern void *data_ov068_0226f910[2];
extern void *data_ov068_0226f918[2];
extern void *data_ov068_0226f920[2];
extern void *data_ov068_0226f928[2];
extern void *data_ov068_0226f930[2];
extern void *data_ov068_0226f938[2];
extern void *data_ov068_0226f940[2];
extern void *data_ov068_0226f948[2];
extern void *data_ov068_0226f950[2];
extern void *data_ov068_0226f958[2];
extern void *data_ov068_0226f960[2];
extern void *data_ov068_0226f968[2];
extern void *data_ov068_0226f970[2];
extern void *data_ov068_0226f978[2];
extern void *data_ov068_0226f980[2];
extern void *data_ov068_0226f988[2];
extern void *data_ov068_0226f990[2];
extern void *data_ov068_0226f998[2];
extern void *data_ov068_0226f9a0[2];
extern void *data_ov068_0226f9a8[2];
extern void *data_ov068_0226f9b0[2];
extern void *data_ov068_0226f9b8[2];
extern void *data_ov068_0226f9c0[2];
extern void *data_ov068_0226f9c8[2];
extern void *data_ov068_0226f9d0[2];
extern void *data_ov068_0226f9d8[2];
extern void *data_ov068_0226f9e0[2];
extern void *data_ov068_0226f9e8[2];
extern void *data_ov068_0226f9f0[2];
extern void *data_ov068_0226f9f8[2];
extern void *data_ov068_0226fa00[2];
extern void *data_ov068_0226fa08[2];
extern void *data_ov068_0226fa10[2];
extern void *data_ov068_0226fa18[2];
extern void *data_ov068_0226fa20[2];
extern void *data_ov068_0226fa28[2];
extern void *data_ov068_0226fa30[2];
extern void *data_ov068_0226fa38[2];
extern void *data_ov068_0226fa40[2];
extern void *data_ov068_0226fa48[2];
extern void *data_ov068_0226fa50[2];
extern void *data_ov068_0226fa58[2];
extern void *data_ov068_0226fa60[2];
extern void *data_ov068_0226fa68[2];
extern void *data_ov068_0226fa70[2];
extern void *data_ov068_0226fa78[2];
extern void *data_ov068_0226fa80[2];
extern void *data_ov068_0226fa88[2];
extern void *data_ov068_0226fa90[2];
extern void *data_ov068_0226fa98[2];
extern void *data_ov068_0226faa0[2];
extern void *data_ov068_0226faa8[2];
extern void *data_ov068_0226fab0[2];
extern void *data_ov068_0226fab8[2];
extern void *data_ov068_0226fac0[2];
extern void *data_ov068_0226fac8[2];
extern void *data_ov068_0226fad0[2];
extern void *data_ov068_0226fad8[2];
extern void *data_ov068_0226fae0[2];
extern void *data_ov068_0226fae8[2];
extern void *data_ov068_0226faf0[2];
extern void *data_ov068_0226faf8[2];
extern void *data_ov068_0226fb00[2];
extern void *data_ov068_0226fb08[2];
extern void *data_ov068_0226fb10[2];
extern void *data_ov068_0226fb18[2];
extern void *data_ov068_0226fb20[2];
extern void *data_ov068_0226fb28[2];
extern void *data_ov068_0226fb30[2];
extern void *data_ov068_0226fb38[2];
extern void *data_ov068_0226fb40[2];
extern void *data_ov068_0226fb48[2];
extern void *data_ov068_0226fb50[2];
extern void *data_ov068_0226fb58[2];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa10[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260cdcEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c28;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f958[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261900EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f104[8] = {0xc8, 0xbc, 0xd8, 0xec, 0x00, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f980[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_02263494EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f100[4] = {0x02, 0x03, 0x01, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f938[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0225fe28EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f900[2] = {(void *)_ZN18Unk_ov068_0226129019func_ov068_022612fcEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f970[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_02263518EP15Unk_ov068_Owner, 0};
}
}
namespace ns_02265324 {
extern "C" {
void *data_ov068_0226f878[2] = {(void *)func_ov068_022654c0, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f850[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022604ccEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f910[2] = {(void *)_ZN18Unk_ov068_0226fb8019func_ov068_022661c8Ev, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f0e4[4] = {0x64, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270d6c[6];
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270ccc[4];
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f134[8] = {0x0a, 0x0a, 0x05, 0x05, 0x46, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c60;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb58[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261ae8EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f12c[8] = {0xf6, 0xee, 0xe4, 0xf2, 0xfe, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f920[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_022619e8EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270d9c[8];
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270cdc[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f830[2] = {(void *)_ZN18Unk_ov068_022638c019func_ov068_022638c0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
Unk_ov068_0225f1a0_Ent data_ov068_02270e44[8] = {
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f878, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f868},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f890, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f888},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f898, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fb40},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f8a8, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f8b0},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f8b8, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fb50},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f8c0, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f830},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f8c8, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f818},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f8e8, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f8f0}};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f10c[8] = {0x02, 0x08, 0x10, 0x0a, 0x06, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f960[2] = {(void *)_ZN18Unk_ov068_02263cf019func_ov068_02263d74EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c78;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb48[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_02262414EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9e0[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260dccEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb38[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261ab4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb30[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0225ff88EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f0f8[4] = {0x01, 0x03, 0x02, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb20[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02264188EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
Unk_ov068_0225f1a0_Ent data_ov068_02270ec4[8] = {
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f8f8, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fb58},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f918, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fb48},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f928, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fb38},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f940, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f958},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f960, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fb18},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f968, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fb08},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fb00, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226faf8},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226faf0, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f988}};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c84[2];
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f0fc[4] = {0xb0, 0x04, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270d0c[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb00[2] = {(void *)_ZN18Unk_ov068_0226157419func_ov068_02261714EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226faf8[2] = {(void *)_ZN18Unk_ov068_0226157419func_ov068_02261574EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226faf0[2] = {(void *)_ZN18Unk_ov068_0226129019func_ov068_02261444EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa68[2] = {(void *)_ZN18Unk_ov068_0226fb8019func_ov068_022661c8Ev, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fae0[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022642c4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c5c;
}
}
namespace nsD {
extern "C" {
Unk_ov068_0225f1a0_Ent data_ov068_02270f44[8] = {
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f990, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fad8},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fad0, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fac8},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fac0, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fab8},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fab0, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f9c8},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f9d0, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226faa0},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fa98, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fa90},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f9e8, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fa80},
    {*(Unk_ov068_0225f1a0_Fn *)data_ov068_0226f9f8, *(Unk_ov068_0225f1a0_Fn *)data_ov068_0226fa00}};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270d1c[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226faa8[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261e10EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fab0[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022605f4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fac0[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260780EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fac8[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260944EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c40;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb08[2] = {(void *)_ZN18Unk_ov068_0226179c19func_ov068_0226179cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb28[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261cd4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb40[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0226410cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa90[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260290EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa88[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261f08EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa80[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0225ff18EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f15c[8] = {0x14, 0x15, 0x16, 0x19, 0x1b, 0x04, 0x0b, 0x1d};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa78[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022609e0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c4c;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8b8[2] = {(void *)_ZN18Unk_ov068_02263a4019func_ov068_02263c20EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f808[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261b4cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa58[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022609e0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c74;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa50[2] = {(void *)_ZN18Unk_ov068_0226229419func_ov068_02262304EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa48[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022600e4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c70;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa38[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_022624a4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c44;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f898[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0226433cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f14c[8] = {0x02, 0x0e, 0x1c, 0x12, 0x0a, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c9c[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f890[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022644fcEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f0f4[4] = {0x07, 0x0e, 0x24, 0x2b};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f0e8[4] = {0x02, 0x03, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270dbc[10];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f840[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_0226196cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
s16 data_ov068_02270c24 = data_020c6cc0;
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f144[8] = {0x01, 0x02, 0x06, 0x04, 0x02, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f114[8] = {0x01, 0x02, 0x0c, 0x04, 0x02, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270d3c[6];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9d8[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_02262c20EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9d0[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022601f0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9c8[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260450EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270d54[6];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9b8[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260160EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9b0[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_02262e5cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9a8[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_02262fd8EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9a0[2] = {(void *)_ZN18Unk_ov068_02260f9019func_ov068_02260ffcEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f13c[8] = {0x00, 0x14, 0x46, 0x14, 0x1e, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f998[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_022632dcEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f990[2] = {(void *)_ZN18Unk_ov068_02260f9019func_ov068_02261118EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f988[2] = {(void *)_ZN18Unk_ov068_0226129019func_ov068_02261290EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8f0[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261c38EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f978[2] = {(void *)_ZN18Unk_ov068_02260f9019func_ov068_02261084EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c64;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f968[2] = {(void *)_ZN18Unk_ov068_0226179c19func_ov068_022617b8EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f124[8] = {0xfa, 0xf6, 0xf0, 0xf8, 0xfe, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f154[8] = {0x0f, 0x0a, 0x0f, 0x14, 0x0a, 0x0f, 0x0f, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f918[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_02262b78EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c30;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f928[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261ab8EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f858[2] = {(void *)_ZN18Unk_ov068_022638c019func_ov068_02263930EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f860[2] = {(void *)_ZN18Unk_ov068_0226157419func_ov068_022616c4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c3c;
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270cec[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9f8[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0225fe70EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270cfc[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb18[2] = {(void *)_ZN18Unk_ov068_02263cf019func_ov068_02263cf0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa28[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_022624f8EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa60[2] = {(void *)_ZN18Unk_ov068_0226229419func_ov068_02262300EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c48;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa98[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260374EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fad0[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260ed4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fab8[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0226071cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fad8[2] = {(void *)_ZN18Unk_ov068_02260f9019func_ov068_02260f90EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb10[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0226424cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c34;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8d0[2] = {(void *)_ZN18Unk_ov068_0226157419func_ov068_02261644EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8c8[2] = {(void *)_ZN18Unk_ov068_0226229419func_ov068_02262338EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8c0[2] = {(void *)_ZN18Unk_ov068_022638c019func_ov068_02263978EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c58;
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270e0c[14];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8a8[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02264008EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8a0[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260324EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f820[2] = {(void *)_ZN18Unk_ov068_02263cf019func_ov068_02263d5cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa20[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_02262648EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f838[2] = {(void *)_ZN18Unk_ov068_02263a4019func_ov068_02263b90EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270cac[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f848[2] = {(void *)_ZN18Unk_ov068_02263a4019func_ov068_02263aacEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c68;
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f16c[12] = {0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f870[2] = {(void *)_ZN18Unk_ov068_0226fb8019func_ov068_022661c8Ev, 0};
}
}
namespace ns_02265d34 {
extern "C" {
Unk_ov068_Scene_Entry data_ov068_0226fb60 = {(void *(*)())func_ov068_02266424, 0x84, 0x88, {2, 0x5000, 0x5000, 0x3e800}};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f880[2] = {(void *)_ZN18Unk_ov068_0226157419func_ov068_022615f0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8d8[2] = {(void *)_ZN18Unk_ov068_0226129019func_ov068_02261394EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8e8[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_022621fcEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f178[20] = {0xf0, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f908[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022602fcEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c50;
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270d84[6];
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270de4[10];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f948[2] = {(void *)_ZN18Unk_ov068_02263e4c19func_ov068_02263eb8EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9e8[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0225fff4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa08[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_02262ad4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa18[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022600e8EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa70[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02262044EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f164[8] = {0x45, 0x00, 0x04, 0x00, 0x4f, 0x00, 0x1d, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fae8[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261db0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270d2c[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f800[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0225ff84EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c38;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8b0[2] = {(void *)_ZN18Unk_ov068_02263e4c19func_ov068_02263e4cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c8c[4];
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f11c[8] = {0x0a, 0x05, 0x05, 0x00, 0x50, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa00[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0225fd54EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270cbc[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9c0[2] = {(void *)_ZN18Unk_ov068_0226241419func_ov068_02262da0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8e0[2] = {(void *)_ZN18Unk_ov068_022638c019func_ov068_0226392cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8f8[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261b90EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c54;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f930[2] = {(void *)_ZN18Unk_ov068_02263cf019func_ov068_02263d6cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f940[2] = {(void *)_ZN18Unk_ov068_0226190019func_ov068_02261a2cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa30[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260c14EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226faa0[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260068EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f0f0[4] = {0x01, 0x03, 0x02, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f810[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0226054cEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f818[2] = {(void *)_ZN18Unk_ov068_0226229419func_ov068_02262294EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f888[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022643d0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f868[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022645dcEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c2c;
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c6c;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa40[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_02260a64EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 data_ov068_02270c7c[2];
}
}
namespace nsD {
extern "C" {
s16 data_ov068_02270c20 = data_020c905c;
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f0ec[4] = {0x58, 0x02, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f950[2] = {(void *)_ZN18Unk_ov068_02263e4c19func_ov068_02264000EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb50[2] = {(void *)_ZN18Unk_ov068_02263a4019func_ov068_02263a40EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f828[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_022604fcEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9f0[2] = {(void *)_ZN18Unk_ov068_0225fd5419func_ov068_0225fdc0EP15Unk_ov068_Owner, 0};
}
}
namespace ns_02265d34 {
extern "C" {
extern "C" Unk_ov068_0226fb80 *func_ov068_02266424() {
    return new Unk_ov068_0226fb80();
}
}
}

BOOL Unk_ov068_0226fb80::vfunc_a8() {
    using namespace ns_02265d34;
    BOOL r = FALSE;
    BOOL f = FALSE;
    if (unk_82c != NULL) {
        if (func_0207e310(unk_82c) != NULL) {
            f = TRUE;
        }
    }
    if (f) {
        if (func_020785ec(func_0207e310(unk_82c)) == 1) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_ov068_0226fb80::vfunc_04() {
    using namespace ns_02265d34;
    if (func_0202dab0(this) == 0) {
        return FALSE;
    }
    Unk_020d77a4_setTalkRequest(this, &unk_680);
    unk_680.vfunc_08();
    unk_9f4 = NULL;
    unk_9f8 = 0;
    unk_a08 = 3;
    u16 buf = 0xfff1;
    if (Unk_ov068_02266320_IsZero(func_02011f08((&unk_9b0), &buf))) {
        return FALSE;
    }
    unk_628 = (&unk_9b0);
    unk_9fc = -1;
    unk_a00 = 0;
    unk_a01 = 0;
    unk_a02 = 0;
    unk_a04 = 0xff;
    unk_a05 = 0;
    func_ov068_02265d34();
    func_ov068_02265c24(this);
    return TRUE;
}

BOOL Unk_ov068_0226fb80::vfunc_00() {
    using namespace ns_02265d34;
    void *a = vfunc_64();
    if (func_0202d948(this) == 0) {
        return FALSE;
    }
    unk_894.unk_18 = data_ov068_0226f870;
    X_func_ov068_0225f670((&unk_894), this);
    s32 t = func_02078234();
    func_ov068_02265588((&unk_8b4));
    if (t == func_0207e334(a)) {
        func_ov068_022656a8((&unk_8b4), this, 0xd);
    } else if (func_02078294() == func_0207e334(a)) {
        func_ov068_022656a8((&unk_8b4), this, 0xc);
    } else {
        switch (func_0207e278(a)) {
        case 0: {
            u16 buf;
            func_ov068_022656a8((&unk_8b4), this, 0);
            func_0202d864(&buf, this);
            if (buf != 0xfff1) {
                func_ov068_02265fb4();
            }
            break;
        }
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            func_ov068_022656a8((&unk_8b4), this, 0xc);
            break;
        default:
            func_ov068_022656a8((&unk_8b4), this, 3);
            break;
        }
    }
    X_func_ov068_0225f8f0((&unk_9f0));
    return TRUE;
}

BOOL Unk_ov068_0226fb80::func_ov068_022661c8() {
    using namespace ns_02265d34;
    data_021cb69c = unk_150;
    if (func_0201b138(this) == 0) {
        return FALSE;
    }
    func_02011bcc((&unk_9b0), this);
    return TRUE;
}

BOOL Unk_ov068_0226fb80::onDraw() {
    using namespace ns_02265d34;
    BOOL r = TRUE;
    if (unk_894.unk_18 != 0) {
        r = (this->*unk_894.unk_18)();
    } else {
        Unk_ov068_0225f23c_Vec *pv = &unk_5c;
        unk_478.x = unk_5c.x;
        unk_478.y = pv->y;
        unk_478.z = pv->z;
        unk_484.x = unk_5c.x;
        unk_484.y = pv->y;
        unk_484.z = pv->z;
        unk_490.x = unk_5c.x;
        unk_490.y = pv->y;
        unk_490.z = pv->z;
    }
    return r;
}

BOOL Unk_ov068_0226fb80::vfunc_0c() {
    using namespace ns_02265d34;
    if (func_0202d8ec(this) == 0) {
        return FALSE;
    }
    func_02011c38((&unk_9b0));
    unk_628 = NULL;
    if (unk_9fc != -1) {
        func_020902f8(unk_9fc);
        unk_9fc = -1;
    }
    return TRUE;
}

BOOL Unk_ov068_0226fb80::vfunc_60(u16 *p) {
    using namespace ns_02265d34;
    BOOL result = FALSE;
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= 0x1376 && v <= 0x1376) {
        r = TRUE;
    }
    if (r || (v >= 0x1377 && v <= 0x1377)) {
        if (vfunc_64() != NULL) {
            func_0207c1e8(vfunc_64());
        }
        if (func_0207ce24(unk_82c) != 0) {
            X_func_ov068_0225f840((&unk_9f0), this);
            X_func_ov068_0225f838((&unk_9f0), data_ov068_0226f0ec);
            result = TRUE;
        } else if (func_ov068_02265f58() != 0) {
            unk_a01 = 1;
        }
    }
    return result;
}

BOOL Unk_ov068_0226fb80::vfunc_b0() {
    using namespace ns_02265d34;
    if (X_func_ov068_0225f83c((&unk_9f0)) != 0) {
        X_func_ov068_0225f838((&unk_9f0), 0);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_0226fb80::func_ov068_02265fb4() {
    using namespace ns_02265d34;
    u16 a;
    u16 b;
    func_0202d864(&a, this);
    if (a != 0xfff1) {
        func_0202d864(&b, this);
        func_02011ec0((&unk_9b0), this, &b, 0, 0);
        func_02011dfc((&unk_9b0), data_020c6cc8, 0);
        func_02011b98((&unk_9b0), 0x1000);
        unk_9b0.unk_3c = 1;
    }
}

s32 Unk_ov068_0226fb80::func_ov068_02265f58() {
    using namespace ns_02265d34;
    void *x;
    void *p;
    if (PlayerData_GetCurrent() != NULL) {
        x = PlayerData_getPlayerId(PlayerData_GetCurrent());
    } else {
        x = NULL;
    }
    p = vfunc_64();
    if (x != NULL && func_02094218(x) && p != NULL && VillagerId_isValid(VillagerData_getVillagerId(p)) != 0) {
        return Villager_FindMemory(p, x);
    }
    return 0;
}

BOOL Unk_ov068_0226fb80::func_ov068_02265ee8() {
    using namespace ns_02265d34;
    if (unk_508 != 0 && func_02088d38(unk_4cc, 4) != 0) {
        Unk_ov068_02265ee8_Obj *p = (Unk_ov068_02265ee8_Obj *)func_020951ec(4);
        if (p != NULL && p->unk_98 != 0) {
            s16 d = Math_AngleXZ(&p->unk_5c, &unk_5c) - p->unk_94;
            if (d < 0) {
                d = -d;
            }
            if (d < 0x31c6) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov068_0226fb80::func_ov068_02265e6c() {
    using namespace ns_02265d34;
    if (unk_562 != 0 && unk_561 != 0 && unk_894.unk_18 != 0 && func_02014220(unk_618) == 0 && func_ov068_02265f58() != 0) {
        if (func_ov068_02265ee8()) {
            unk_a02++;
            if ((s32)unk_a02 >= 100) {
                unk_a02 = 100;
            }
        } else {
            unk_a02 = 0;
        }
    } else {
        unk_a02 = 0;
    }
}

void Unk_ov068_0226fb80::func_ov068_02265dc8() {
    using namespace ns_02265d34;
    void *a = vfunc_64();
    if (a != NULL) {
        if (VillagerId_isValid(VillagerData_getVillagerId(a)) != 0) {
            s32 r5 = 8;
            void *p = func_0209a610(Villager_GetPlan(a));
            s32 r4 = func_0209b354(p);
            s32 r7 = func_02063b8c(100);
            Unk_ov068_02265d34_Vec2 buf;
            buf.a = 0;
            buf.b = 0;
            func_0209d498(&buf);
            if (r7 < 30) {
                if (func_0209b1f0(p, &buf, 3) != 0) {
                    r4 = (u8)func_02063b8c(r5);
                }
            }
            if (func_0209b3b0(r4) != 0 || r4 == 8) {
                r5 = r4;
            }
            switch (func_0201c784(this)) {
            case 3:
                r5 = 1;
                break;
            case 4:
                r5 = 0;
                break;
            case 5:
                r5 = 5;
                break;
            }
            func_02078570(func_0207e310(a), r5);
        }
    }
}

void Unk_ov068_0226fb80::func_ov068_02265d34() {
    using namespace ns_02265d34;
    void *a = vfunc_64();
    if (a != NULL) {
        if (VillagerId_isValid(VillagerData_getVillagerId(a)) != 0) {
            s32 t = func_02078574(func_0207e310(a));
            void *p = func_0209a610(Villager_GetPlan(a));
            Unk_ov068_02265d34_Vec2 buf;
            buf.a = 0;
            buf.b = 0;
            func_0209d498(&buf);
            if (func_0209b3b0(t) != 0 || t == 8) {
                if (t == func_0209b354(p) || func_0209b1f0(p, &buf, 3) != 0) {
                    if (func_0201c784(this) != 3 && func_0201c784(this) != 4 && func_0201c784(this) != 5) {
                        return;
                    }
                }
            }
            func_ov068_02265dc8();
        }
    }
}

namespace ns_02265324 {
extern "C" {
void func_ov068_02265c24(Unk_ov068_0226fb80 *o) {
    void *p = o->vfunc_64();
    if (p != 0 && VillagerId_isValid(VillagerData_getVillagerId(p)) != 0) {
        u16 v;
        u16 w;
        u32 z;
        void *r4 = func_0207e310(p);
        s32 r5 = func_02078574(r4);
        s32 r7 = func_020b8fe8();
        if (r7 != 1) {
            if (Unk_ov068_02265c24_R((u16 *)func_0207850c(r4), 0x1380, 0x139f)) {
                w = 0xfff1;
                func_02078504(r4, &w);
            }
        }
        if (!Unk_ov068_02265c24_R((u16 *)func_0207850c(r4), 0x1380, 0x139f)) {
            func_0209adbc(&v, r5);
            u16 *q = (u16 *)func_0207850c(r4);
            BOOL eq;
            if (Item_IsFurniture(q) != 0) {
                s32 x = Item_GetFurnitureIndex(q);
                if (x == Item_GetFurnitureIndex(&v)) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            } else {
                if (*q == v) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            }
            if (eq == 0) {
                func_02078504(r4, &v);
            }
        }
        if (Unk_ov068_02265c24_R((u16 *)func_0207850c(r4), 0x1378, 0x1378) && r7 == 1) {
            Villager_GetUmbrella(&z, p);
            func_02078504(r4, &z);
        }
    }
}
}
}

namespace ns_02265324 {
extern "C" {
s32 func_ov068_02265bcc(Unk_ov068_0226fb80 *o) {
    s32 t = func_0201c784(o);
    if ((u8)(t + 0xfd) <= 1) {
        u8 *p = (u8 *)func_020951ec(4);
        u32 g = data_021c47c4;
        if (p != 0 && g != 0) {
            Unk_ov068_02265bcc_Vec v;
            Unk_ov068_02265bcc_Src *pv = (Unk_ov068_02265bcc_Src *)(p + 0x5c);
            v.x = *(s32 *)(p + 0x5c);
            v.y = pv->y;
            v.z = pv->z;
            if (func_0204ec14(g, v.x >> 17, v.z >> 17, 0x200) == 0) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_02265b0c(Unk_ov068_0226fb80 *o, u8 *b) {
    u8 *t = data_ov068_0226f11c;
    u8 *g = data_021ed24c;
    if (func_0209b354(func_0209a610(Villager_GetPlan(o->vfunc_64()))) == 0) {
        t = data_ov068_0226f134;
    }
    s32 idx = func_0202ce44(t, 5);
    if ((u32)idx < 4) {
        u16 v = 0xfff1;
        if (func_0202c84c(&v, idx, idx + 1, b[2], b[2], b[4]) != 0) {
            BOOL k = FALSE;
            u32 v0 = v;
            if (*(volatile u16 *)&v >= 0x12b0 && v0 <= 0x12e7) {
                k = TRUE;
            }
            if (k) {
                s32 x = func_02085618(&v);
                s32 y = func_02085810(g);
                if ((x >> 12) > (y >> 12)) {
                    void *w = VillagerData_getVillagerId(o->vfunc_64());
                    func_02085870(g, w);
                    func_02085814(g, x);
                    func_02085820(g, &v);
                }
            }
        }
    }
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_02265a40(Unk_ov068_0226fb80 *o, u8 *b) {
    u8 *t = data_ov068_0226f11c;
    u8 *g = data_021ed24c;
    if (func_0209b354(func_0209a610(Villager_GetPlan(o->vfunc_64()))) == 1) {
        t = data_ov068_0226f134;
    }
    s32 idx = func_0202ce44(t, 5);
    if ((u32)idx < 4) {
        u16 v = 0xfff1;
        if (func_0202c35c(&v, idx, idx + 1, b[4], b[3], b[2], b[2]) != 0) {
            BOOL k = FALSE;
            u32 v0 = v;
            if (*(volatile u16 *)&v >= 0x12e8 && v0 <= 0x131f) {
                k = TRUE;
            }
            if (k) {
                s32 x = func_02085618(&v);
                s32 ty = func_02085810(g) * 10;
                s32 tx = x * 10;
                if ((tx >> 12) > (ty >> 12)) {
                    void *w = VillagerData_getVillagerId(o->vfunc_64());
                    func_02085870(g, w);
                    func_02085814(g, x);
                    func_02085820(g, &v);
                }
            }
        }
    }
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_022659dc(Unk_ov068_0226fb80 *o) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    func_0209d498(buf);
    if (*(u8 *)((u8 *)o + 0xa04) != ((u8 *)buf)[1]) {
        if (TalkRequest_IsTalking() == 0) {
            if (func_ov068_02265bcc(o) != 0) {
                s32 r = func_0201c784(o);
                if (r != 3) {
                    if (r == 4) {
                        func_ov068_02265b0c(o, (u8 *)buf);
                    }
                } else {
                    func_ov068_02265a40(o, (u8 *)buf);
                }
            }
        }
        *(u8 *)((u8 *)o + 0xa04) = ((u8 *)buf)[1];
    }
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_02265994(Unk_ov068_0226fb80 *o) {
    if (func_020197a8((u8 *)o + 0x564) == 8) {
        if (func_020197a0((u8 *)o + 0x564) != 0) {
            s32 r = func_02018984(0);
            if (r != 0) {
                *(u8 *)((u8 *)o + 0x445) = 0;
                func_0201a040((u8 *)o + 0x420, r);
            }
        }
    }
}
}
}

namespace ns_02265324 {
extern "C" {
u32 func_ov068_0226594c(Unk_ov068_0226fb80 *o) {
    void *p;
    void *q;
    s32 r;
    if (o->vfunc_64() != 0 && VillagerId_isValid(VillagerData_getVillagerId(o->vfunc_64())) != 0) {
        q = func_0207e310(o->vfunc_64());
    } else {
        q = 0;
    }
    if (q != 0) {
        r = func_0207856c(q);
    } else {
        r = 0;
    }
    return (u8)r;
}
}
}

namespace ns_02265324 {
extern "C" {
void *func_ov068_02265918(Unk_ov068_0226fb80 *o) {
    void *p = o->vfunc_64();
    void *q;
    void *r;
    if (p != 0 && VillagerId_isValid(VillagerData_getVillagerId(p)) != 0 && (q = func_0207e310(p)) != 0) {
        r = (void *)func_020784f4(q);
    } else {
        r = 0;
    }
    return r;
}
}
}

BOOL Unk_ov068_0226fb80::updateAct() {
    using namespace ns_02265324;
    func_ov068_02265e6c();
    void *p = func_ov068_02265918(this);
    if (p != 0) {
        func_020784b8(p, func_02014220((u8 *)this + 0x618));
    }
    func_ov068_022656f4(&unk_8b4, this);
    unk_9f0.func_ov068_0225f858(this);
    VillagerMood_update(unk_838, this);
    unk_894.func_ov068_0225f23c(this);
    *(u8 *)((u8 *)this + 0xa01) = 0;
    return TRUE;
}

Unk_ov068_0225f1a0_Obj8b4 *Unk_ov068_0225f1a0_Obj8b4::func_ov068_0226581c() {
    using namespace ns_02265324;
    func_020133a8(unk_3c);
    unk_e4 = 0;
    unk_18 = 0x18;
    unk_00 = 0x10000;
    unk_04 = 0x10000;
    unk_08 = 0x1a000;
    unk_0c = 0xa000;
    unk_24 = 0;
    func_02013374(unk_3c);
    unk_20 = 0;
    unk_d8 = -1;
    unk_da = 0;
    unk_f4 = 0;
    unk_f8 = 0;
    unk_28 = 0;
    unk_34 = 0;
    unk_36 = -1;
    unk_2c = 0;
    unk_38 = 0;
    unk_3a = 0;
    unk_dc = 0;
    unk_de = 0;
    unk_e0 = 0;
    return this;
}

Unk_ov068_0225f1a0_Obj8b4::~Unk_ov068_0225f1a0_Obj8b4() {
    using namespace ns_02265324;
    func_020133a4(unk_3c);
}

namespace ns_02265324 {
extern "C" {
void func_ov068_022656f4(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o) {
    if (self->unk_e0 != 0) {
        if (func_ov068_02264a64(self, self->unk_e0) == 0) {
            self->unk_e0 = 0;
        }
    }
    if (self->unk_14 != 0) {
        (self->*(self->unk_14->b))(o);
    }
    if (self->unk_20 > 0) {
        self->unk_20--;
    }
    if (self->unk_d8 > 0) {
        self->unk_d8--;
    }
    if (self->unk_da > 0) {
        self->unk_da--;
    }
    if (self->unk_dc > 0) {
        self->unk_dc--;
    }
    if (self->unk_de > 0) {
        self->unk_de--;
    }
    if (self->unk_24 > 0) {
        self->unk_24--;
    }
    if (self->unk_3a != 0) {
        self->unk_3a--;
    }
    if (func_02014220((u8 *)o + 0x618) == 0) {
        if (self->unk_f4 > 0) {
            self->unk_f4--;
        } else if (self->unk_f8 > 0) {
            self->unk_f8--;
        }
        if (self->unk_34 > 0) {
            self->unk_34--;
        }
        if (self->unk_36 > 0) {
            self->unk_36--;
        }
    }
    if (self->unk_2c > 0) {
        self->unk_2c--;
    }
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_022656a8(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o, s32 idx) {
    if (idx >= 0 && idx < 0x18) {
        self->unk_10 = idx;
        self->unk_14 = &data_ov068_02270e44[self->unk_10];
        self->unk_1c = 0;
        if (self->unk_14 != 0) {
            if (self->unk_14->a != 0) {
                (self->*(self->unk_14->a))(o);
            }
        }
    }
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_022656a4(Unk_ov068_0225f1a0_Obj8b4 *self, s32 v) {
    self->unk_18 = v;
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_02265698(Unk_ov068_0225f1a0_Obj8b4 *self) {
    func_ov068_022656a4(self, self->unk_10);
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_02265690(Unk_ov068_0225f1a0_Obj8b4 *self) {
    self->unk_18 = 0x18;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 func_ov068_02265670(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o) {
    s32 r = 0;
    if (self->unk_18 < 0x18) {
        func_ov068_022656a8(self, o, self->unk_18);
        func_ov068_02265690(self);
        r = 1;
    }
    return r;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 func_ov068_022655e0(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o) {
    void *p = func_020951ec(4);
    BOOL k;
    s32 kr;
    if (o->vfunc_64() != 0) {
        kr = func_0207c22c(o->vfunc_64(), 0);
    } else {
        kr = 0;
    }
    if (kr != 0) {
        k = TRUE;
    } else {
        k = FALSE;
    }
    s32 res = 0;
    if (func_020b5164() == 0) {
        if (self->unk_f4 <= 0 && k != 0 && p != 0) {
            if (Unk_020d77a4_getDistanceTo(o, p) <= 0x7000) {
                s32 d = Unk_020d77a4_getRelativeAngleTo(o, p);
                s32 lim = data_ov068_02270c24;
                if (d >= -lim && d <= lim) {
                    res = 1;
                }
            }
        }
    }
    return res;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 func_ov068_022655c0(Unk_ov068_0225f1a0_Obj8b4 *self) {
    if (func_ov068_022655a4(self, 0) != 0 && self->unk_24 == 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_022655b4(Unk_ov068_0225f1a0_Obj8b4 *self) {
    self->unk_24 = data_ov068_0226f0fc;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 func_ov068_022655a4(Unk_ov068_0225f1a0_Obj8b4 *self, s32 v) {
    if (self->unk_10 == v) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_02265588(Unk_ov068_0225f1a0_Obj8b4 *self) {
    self->unk_34 = func_02063b8c(0x1770);
    self->unk_36 = -1;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 func_ov068_022654c0(Unk_ov068_0225f1a0_Obj8b4 *self, Unk_ov068_0226fb80 *o) {
    func_ov068_02265994(o);
    *(Unk_ov068_0226fa68_Nest *)((u8 *)o + 0x8ac) = *(Unk_ov068_0226fa68_Nest *)&data_ov068_0226fa68;
    func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
    func_020135c4((u8 *)o + 0x558);
    X_func_ov068_0225f630((u8 *)o + 0x894, o);
    if (func_0201324c(self->unk_3c) != 0) {
        func_0201325c(self->unk_3c, 0);
    } else {
        func_ov068_02265324(self, 0, o);
        self->unk_d8 = -1;
        self->unk_da = 0;
    }
    VillagerActor_clearFlag834(o);
    *(u8 *)((u8 *)o + 0x561) = 1;
    *(u8 *)((u8 *)o + 0x562) = 1;
    self->unk_f8 = -1;
    *(u8 *)((u8 *)o + 0x9ec) = 1;
    VillagerMood_enableEffects((u8 *)o + 0x838);
    return TRUE;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 func_ov068_0226546c(Unk_ov068_0226546c_Rect *r, Unk_ov068_02265434_Vec *a, Unk_ov068_02265434_Vec *b) {
    s32 ret = 0;
    BOOL k2 = FALSE;
    BOOL k1 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - r->x0 && bx < ax + r->w) {
        k1 = TRUE;
    }
    if (k1) {
        if (b->z > a->z - r->z0) {
            k2 = TRUE;
        }
    }
    if (k2) {
        if (b->z < a->z + r->h) {
            ret = 1;
        }
    }
    return ret;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 func_ov068_02265434(Unk_ov068_0226546c_Rect *r, Unk_ov068_0226fb80 *o) {
    Unk_ov068_02265434_Vec *pb = (Unk_ov068_02265434_Vec *)&o->unk_5c;
    s32 res = 0;
    if (gCamera != 0) {
        Unk_ov068_02265434_Vec v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        res = func_ov068_0226546c(r, &v, pb);
    }
    return res;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 func_ov068_022653ec(Unk_ov068_0225f1a0_Obj8b4 *self) {
    s32 k;
    if (func_0201324c(self->unk_3c) != 0) {
        k = 2;
    } else {
        k = 3;
    }
    s32 i = func_02063b8c(k);
    s32 r5 = data_ov068_0226f16c[i];
    if (r5 == func_02012cb8(self->unk_3c)) {
        s32 n = i + 1;
        if (n >= 3) {
            n = 0;
        }
        r5 = data_ov068_0226f16c[n];
    }
    return r5;
}
}
}

namespace ns_02265324 {
extern "C" {
void func_ov068_02265324(Unk_ov068_0225f1a0_Obj8b4 *self, s32 a, Unk_ov068_0226fb80 *o) {
    void *x = o->vfunc_64();
    s32 r4 = 7;
    if (x != 0) {
        Unk_ov068_02265324_Flags *f = (Unk_ov068_02265324_Flags *)func_0207e310(x);
        if (f->unk_1d_1 != 0) {
            r4 = 3;
        } else {
            s32 r6;
            void *t = PlayerData_GetCurrent();
            if (t != 0) {
                r6 = func_02098044(t, 1);
            } else {
                r6 = 0;
            }
            u32 buf[2];
            buf[0] = 0;
            buf[1] = 0;
            func_0209d498(buf);
            if (!(r6 != 0 ? TRUE : FALSE)) {
                if (func_02081288(VillagerId_GetPersonality(VillagerData_getVillagerId(x)), buf) != 0) {
                    r4 = 3;
                    goto done;
                }
            }
            r6 = 7;
            if (VillagerId_isValid(VillagerData_getVillagerId(x)) != 0) {
                if (func_0207e310(x) != 0) {
                    r6 = func_02078574(func_0207e310(x));
                }
            }
            if (r6 == 6) {
                r4 = 6;
            }
        }
    }
done:
    if (r4 == 7) {
        r4 = func_ov068_022653ec(self);
    }
    func_02013300(self->unk_3c, &o->unk_5c, r4, a, o);
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_022652d0(void *self, Unk_ov068_Owner_649 *o) {
    void *a = PlayerData_GetCurrent();
    s32 t;
    if (a != 0) {
        t = func_02098044(a, 1);
    } else {
        t = 0;
    }
    BOOL f = Unk_ov068_022652d0_B(t);
    void *p = o->vfunc_64();
    BOOL r = TRUE;
    Unk_ov068_0226506c_Flags *fl = (Unk_ov068_0226506c_Flags *)((u8 *)func_0207e310(p) + 0x1d);
    if (fl->f1 == 0 && (f != 0 || func_0207c618(p, 0) == 0)) {
        r = FALSE;
    }
    return r;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_02265270(Unk_ov068_0225fd54 *self, Unk_ov068_Owner_649 *o) {
    BOOL r;
    if (func_0201324c(self->unk_3c) != 0 && func_02012cb8(self->unk_3c) == 3) {
        u8 *p = (u8 *)VillagerDataItemView_getHousePos(o->vfunc_64());
        Unk_ov068_022649f4_Vec t;
        func_0204ed8c(&t, p[0], p[1] + 1);
        if (func_020e9650(&t, &o->unk_5c) < 0x800) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        r = FALSE;
    }
    return r;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_022651e0(void *self, void *a, Unk_ov068_022649f4_Vec *b) {
    if (TalkRequest_IsTalking() != 0) {
        if (func_020e96ec(b, gVec3Zero) != 0) {
            u8 *p = (u8 *)func_020951ec(4);
            u8 *q = (u8 *)TalkRequest_GetTalkTarget();
            if (p != 0 && q != 0) {
                Unk_ov068_022649f4_Vec t1;
                Unk_ov068_022649f4_Vec t2;
                func_020e9960(&t1, p + 0x5c, a);
                func_020e9960(&t2, q + 0x5c, a);
                s32 x = func_01ffcb0c(b->x, t1.z);
                x -= func_01ffcb0c(b->z, t1.x);
                s32 y = func_01ffcb0c(b->x, t2.z);
                y -= func_01ffcb0c(b->z, t2.x);
                if (func_01ffcb0c(x, y) <= 0) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}
}
}

namespace ns_022649f4 {
extern "C" {
s32 func_ov068_0226519c(void *self, Unk_ov068_Owner_649 *o) {
    if (o->unk_98 != 0) {
        Unk_ov068_022649f4_Vec t;
        t.x = 0;
        t.y = 0;
        t.z = 0x1000;
        func_020e93a0(&t, o->unk_94);
        return func_ov068_022651e0(self, &o->unk_5c, &t);
    }
    return 0;
}
}
}

namespace ns_022649f4 {
extern "C" {
s32 func_ov068_0226517c(void *self, void *a, void *b) {
    Unk_ov068_022649f4_Vec t;
    func_020e9960(&t, a, b);
    return func_ov068_022651e0(self, b, &t);
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_02265114(void *self, void *v, s32 lim) {
    if (TalkRequest_IsTalking() != 0) {
        u8 *a = (u8 *)func_020951ec(4);
        u8 *b = (u8 *)TalkRequest_GetTalkTarget();
        if (a != 0 && b != 0) {
            Unk_ov068_022649f4_Vec t1;
            Unk_ov068_022649f4_Vec t2;
            func_020e9960(&t1, a + 0x5c, b + 0x5c);
            func_020e9768(&t1, 1);
            func_01ffd070(&t2, a + 0x5c, &t1);
            s32 d = func_020e9650(v, &t2);
            if (d < 0) {
                d = -d;
            }
            if (d <= lim) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_0226506c(Unk_ov068_0225fd54 *self, Unk_ov068_022649f4_Vec *out, Unk_ov068_Owner_649 *o) {
    if (o->vfunc_64() != 0) {
        Unk_ov068_0226506c_Flags *fl = (Unk_ov068_0226506c_Flags *)((u8 *)func_0207e310(o->vfunc_64()) + 0x1d);
        if (fl->f1 != 0) {
            if (func_02012cb8(self->unk_3c) != 3) {
                self->unk_d8 = 0;
            }
        }
    }
    if (func_0201324c(self->unk_3c) == 0 || self->unk_d8 == 0) {
        func_ov068_02265324(self, 0, o);
        self->unk_d8 = -1;
        self->unk_da = 0;
    }
    Unk_ov068_022649f4_Vec *pv = &o->unk_5c;
    out->x = pv->x;
    out->y = pv->y;
    out->z = pv->z;
    if (func_02012c58(self->unk_3c, out) != 0) {
        if (self->unk_d8 == -1) {
            self->unk_d8 = 0x1770;
        }
    }
    return TRUE;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_02264ffc(void *self, Unk_ov068_Owner_649 *o) {
    BOOL r;
    u8 *r7 = o->unk_564;
    u8 *r6 = o->unk_350;
    u8 buf[12];
    r = FALSE;
    if (func_0201a9a0(r6, o, 1) == 0) {
        switch (func_0201bb3c(o, buf)) {
        case 1:
            func_02019614(r7, 1, data_020c6cc8);
            r = TRUE;
            break;
        case 2:
            func_0201a97c(r6, buf);
            break;
        }
    } else {
        if (func_0201a968(r6) != 0) {
            func_0201a8f0(r6);
        }
    }
    return r;
}
}
}

namespace ns_022649f4 {
extern "C" {
void *func_ov068_02264f4c(void *self, Unk_ov068_Owner_649 *o) {
    Unk_ov068_Owner_649 *s = o;
    void *pos = o;
    s16 lim = data_020c6cc0;
    Unk_ov068_Owner_649 *e;
    s32 i;
    pos = &o->unk_5c;
    for (i = 0; i < 8; i++) {
        e = (Unk_ov068_Owner_649 *)NpcRegistry_GetVillager(i);
        if (e == 0) {
            continue;
        }
        if (e->unk_82c == 0) {
            continue;
        }
        u16 *a = (u16 *)VillagerData_getVillagerId(s->unk_82c);
        u16 *b = (u16 *)VillagerData_getVillagerId(e->unk_82c);
        if (b[0] == a[0]) {
            if (memcmp(b + 1, a + 1, 8) == 0) {
                if (((u8 *)b)[0xb] == ((u8 *)a)[0xb]) {
                    continue;
                }
            }
        }
        if (func_020e9650(pos, &e->unk_5c) >= 0x3000) {
            continue;
        }
        s32 d = Math_AngleXZ(pos, &e->unk_5c);
        if (func_0201a1cc((s16)(d - s->unk_8e), lim) != 0) {
            return e;
        }
    }
    return 0;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_02264ee0(Unk_ov068_0225fd54 *self, Unk_ov068_Owner_649 *o) {
    if (func_02063b8c(5) == 0) {
        if (o->vfunc_b4() != 0) {
            Unk_ov068_Owner_649 *t = (Unk_ov068_Owner_649 *)func_ov068_02264f4c(self, o);
            if (t != 0) {
                if (t->vfunc_b8(o) != 0) {
                    VillagerTalk_setPartner(o, t);
                    func_0201c7ec(o, 0);
                    func_ov068_02265698(self);
                    func_ov068_022656a8(o->unk_8b4, o, 9);
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_02264b9c(Unk_ov068_0225fd54 *self, Unk_ov068_Owner_649 *o) {
    struct {
        u16 h[13];
        s32 z[2];
    } l;
    s32 id;
#define W (*(volatile u16 *)&l.h[0])
    void *p;
    s32 m;

    if (func_020197a8(o->unk_564) != 0) {
        goto fail;
    }
    if (func_02019790(o->unk_564) == 0) {
        goto fail;
    }
    p = o->vfunc_64();
    l.z[0] = 0;
    l.z[1] = 0;
    id = 7;
    m = func_020b8fe8(7);
    if (p != 0) {
        if (VillagerId_isValid(VillagerData_getVillagerId(p)) != 0) {
            if (func_0207e310(p) != 0) {
                id = func_02078574(func_0207e310(p));
            }
        }
    }
    func_0209d498(l.z);
    s16 t = self->unk_34;
    if (t == 0 || self->unk_36 == 0) {
        if (t == 0) {
            X_func_ov068_02265dc8(o);
            if (p != 0) {
                if (VillagerId_isValid(VillagerData_getVillagerId(p)) != 0) {
                    if (func_0207e310(p) != 0) {
                        id = func_02078574(func_0207e310(p));
                    }
                }
            }
            self->unk_34 = 0x2ee0;
        }
        func_0202d864(&l.h[1], o);
        if (l.h[1] == 0xfff1) {
            W = 0xfff1;
            if (func_0209b3b0(id) != 0) {
                func_0209adbc(&l.h[2], id);
                W =l.h[2];
            }
            {
                u16 a0 = W;
                u16 b0 = W;
                if (b0 == 0xfff1 || (a0 >= 0x1378 && a0 <= 0x1378)) {
                    if (m == 1) {
                        Villager_GetUmbrella(&l.h[3], p);
                        W =l.h[3];
                    }
                }
            }
            self->unk_36 = -1;
            if (W == 0xfff1) {
                goto fail;
            }
            VillagerTalk_setSpeakerStateUnk(o, &l.h[0]);
            func_ov068_022656a8(self, o, 0xf);
            func_ov068_022656a4(self, 0);
            return TRUE;
        }
        func_0202d864(&l.h[4], o);
        if (Unk_ov068_02264b9c_InRange(l.h, 4, 0x1380, 0x139f)) {
            if (m == 1) {
                goto fail;
            }
            self->unk_36 = 0x12c;
            func_ov068_022656a8(self, o, 0x10);
            func_ov068_022656a4(self, 0);
            return TRUE;
        }
        func_0209adbc(&l.h[5], id);
        func_0202d864(&l.h[6], o);
        if (Unk_ov068_02264b9c_Same(&l.h[5], &l.h[6]) == 0) {
            func_ov068_022656a8(self, o, 0x10);
            func_ov068_022656a4(self, 0);
            self->unk_36 = 0x12c;
            return TRUE;
        }
        self->unk_36 = -1;
    } else {
        func_0202d864(&l.h[7], o);
        if (l.h[7] == 0xfff1) {
            if (m != 1) {
                goto fail;
            }
            Villager_GetUmbrella(&l.h[8], p);
            VillagerTalk_setSpeakerStateUnk(o, &l.h[8]);
            func_ov068_022656a8(self, o, 0xf);
            func_ov068_022656a4(self, 0);
            self->unk_36 = -1;
            return TRUE;
        }
        func_0202d864(&l.h[9], o);
        if (Unk_ov068_02264b9c_InRange(l.h, 9, 0x1380, 0x139f)) {
            if (m == 1) {
                goto fail;
            }
            self->unk_36 = 0x12c;
            func_ov068_022656a8(self, o, 0x10);
            func_ov068_022656a4(self, 0);
            return TRUE;
        }
        func_0202d864(&l.h[10], o);
        BOOL f = FALSE;
        volatile u16 *q = l.h;
        u32 hh = q[10];
        u32 ll = q[10];
        if (ll >= 0x1378 && hh <= 0x1378) {
            f = TRUE;
        }
        if (f) {
            if (m == 1) {
                func_ov068_022656a8(self, o, 0x10);
                func_ov068_022656a4(self, 0);
                self->unk_36 = 0x12c;
                return TRUE;
            }
        }
        func_0202d864(&l.h[11], o);
        func_0209adbc(&l.h[12], id);
        if (Unk_ov068_02264b9c_Same(&l.h[11], &l.h[12])) {
            goto fail;
        }
        func_ov068_022656a8(self, o, 0x10);
        func_ov068_022656a4(self, 0);
        self->unk_36 = 0x12c;
        return TRUE;
    }
fail:
    return FALSE;
#undef W
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_02264b30(void *self, Unk_ov068_02264ab4_P2 *v) {
    void *g = data_021c47c4;
    if (g != 0) {
        s32 x = v->x;
        s32 y = v->y;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *c = (u16 *)func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (c != 0) {
            BOOL r = FALSE;
            if (Unk_ov068_02264b30_InRange(c)) {
                if (func_0204e88c(g, v->x, v->y) != 0) {
                    r = TRUE;
                }
            }
            return r;
        }
    }
    return FALSE;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_02264ab4(void *self, Unk_ov068_Owner_649 *o) {
    BOOL r;
    Unk_ov068_022649f4_Vec *p = &o->unk_5c;
    s32 a, b;
    Unk_ov068_02264ab4_P2 q;
    Unk_ov068_022649f4_Vec t;
    r = FALSE;
    a = r;
    b = r;
    func_0204ee10(&a, &b, p);
    if (func_ov068_02264b30(self, (Unk_ov068_02264ab4_P2 *)&a) != 0) {
        func_0204edd8(&t, p);
        if (func_020e9650(&t, p) <= 0xb00) {
            q.x = a;
            q.y = b;
            s32 idx = func_02042e98((s8)Unk_020d77a4_getNpcIndex(o), &q);
            if (idx >= 0) {
                if (func_02042d10() == 1) {
                    r = TRUE;
                }
                func_02042820(idx);
            }
        }
    }
    return r;
}
}
}

namespace ns_022649f4 {
extern "C" {
s32 func_ov068_02264aa0(void *self, Unk_ov068_Owner_649 *o) {
    if (o->unk_a01 != 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_022649f4 {
extern "C" {
s32 func_ov068_02264a64(void *self) {
    u32 v = func_ov003_022125ac();
    if ((v >= 0x12e8 && v <= 0x131f) || (v >= 0x12b0 && v <= 0x12e7)) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL func_ov068_022649f4(Unk_ov068_0225fd54 *self, Unk_ov068_Owner_649 *o) {
    u32 r = func_ov068_0226594c(o);
    if (self->unk_e0 == 0) {
        switch (r) {
        case 0:
        case 1:
            if (func_ov068_02264a64(self) != 0) {
                if (o->unk_3b0[0] == 1) {
                    if (Unk_020d77a4_getDistanceToPlayer(o, 4) <= 0x6000) {
                        if (func_0201a5d0(o->unk_3b0, o) != 0) {
                            if (func_0201a1a4(o->unk_3b0) != 0) {
                                return TRUE;
                            }
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}
}
}

BOOL Unk_ov068_0225fd54::func_ov068_022648bc(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    BOOL r = FALSE;
    if (func_ov068_02265270(this, o) != 0) {
        u16 v;
        func_0202d864(&v, o);
        if (v != 0xfff1) {
            func_ov068_022656a8(this, o, 0x10);
            func_ov068_022656a4(this, 2);
        } else {
            func_ov068_022656a8(this, o, 2);
        }
        r = TRUE;
    } else if (func_ov068_02264ab4(this, o) != 0) {
        func_ov068_022656a8(this, o, 0x11);
        r = TRUE;
    } else if (*(u16 *)((u8 *)o + 0xa02) >= data_ov068_0226f0e4[r]) {
        func_ov068_022656a8(this, o, 0x15);
        r = TRUE;
    } else if (func_ov068_02264aa0(this, o) != 0) {
        func_ov068_022656a8(this, o, 0x13);
        r = TRUE;
    } else if (func_ov068_022655e0(this, o) != 0) {
        func_ov068_022656a8(this, o, 7);
        r = TRUE;
    } else if (func_ov068_02264ee0(this, o) != 0) {
        r = TRUE;
    } else if (X_func_ov068_0225f83c((u8 *)o + 0x9f0) != 0) {
        func_ov068_022656a8(this, o, 0xb);
        r = TRUE;
    } else if (func_ov068_02264b9c(this, o) != 0) {
        r = TRUE;
    } else if (func_ov068_022649f4(this, o) != 0) {
        func_ov068_022656a8(this, o, 0x17);
        r = TRUE;
    } else if (*(u32 *)((u8 *)o + 0x98) != 0) {
        if (func_ov068_02264ffc(this, o) != 0) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_ov068_0225fd54::func_ov068_022645dc(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    u8 *r6 = (u8 *)o + 0x564;
    Unk_ov068_02264188_V3 va, vb;
    if (func_ov068_02265434(this, o) != 0) {
    if (func_ov068_022648bc(o) != 0) {
        goto end;
    }
    if (func_02019790(r6) != 0) {
        if (unk_dc > 0) {
            u32 t;
            u32 u;
            if (*(s32 *)((u8 *)o + 0x894) != 0) {
                goto reset;
            }
            t = *(u32 *)((u8 *)o + 0x898);
            if (t != 0 && t != 1) {
                goto reset;
            }
            u = *(u16 *)((u8 *)o + 0x8a8);
            if ((s32)u < 0xf) {
                goto reset;
            }
            if (u == 0) {
                goto skip;
            }
            if (func_0201a5d0((u8 *)o + 0x3b0, o) != 0) {
                goto skip;
            }
        reset:
            unk_dc = 0;
            unk_de = 0x4b0;
            X_func_ov068_0225f630((u8 *)o + 0x894, o);
        skip:;
        }
        if (func_020197a8(r6) == 0 && unk_dc != 0) {
            goto end;
        }
        unk_dc = 0;
        if (func_0201acfc((u8 *)o + 0x3aa) == 2) {
            func_02019614(r6, 1, data_020c6cc8);
            goto end;
        }
        if ((Random_Next(gRandom) & 7) == 0) {
            u8 *r7 = (u8 *)o + 0x5c;
            va.x = *(s32 *)gVec3Zero;
            va.y = *(s32 *)(gVec3Zero + 4);
            va.z = *(s32 *)(gVec3Zero + 8);
            if (func_ov068_0226506c(this, &va, o) != 0) {
                if (func_ov068_02265114(this, r7, 0xc000) != 0) {
                    if (func_ov068_0226517c(this, &va, r7) != 0) {
                        goto fail;
                    }
                }
                s32 d = Math_AngleXZ(r7, &va);
                if (NpcActor_IsFrontAngle((s16)(d - *(s16 *)((u8 *)o + 0x8e))) != 0) {
                    s32 m = 1;
                    if (func_02063b8c(4) == 0 && func_ov068_0226594c(o) == 0) {
                        m = 2;
                    }
                    func_020196b4(r6, m, 1, va.x, va.z, 0, 0, 0, 0, data_020c6cc8, 0);
                    unk_20 = 0x100;
                } else {
                    func_020196b4(r6, 4, 1, va.x, va.z, 0, d, 0, 0, data_020c6cc8, 0);
                    unk_20 = 0x128;
                }
                goto end;
            }
        fail:
            func_02019614(r6, 1, data_020c6cc8);
            goto end;
        }
        func_02019614(r6, 1, data_020c6cc8);
        goto end;
    }
    if (*(u32 *)((u8 *)o + 0x98) != 0) {
        if (func_020197a8((u8 *)o + 0x564) == 1 || func_020197a8((u8 *)o + 0x564) == 2 ||
            func_020197a8((u8 *)o + 0x564) == 4) {
            if (unk_20 == 0) {
                func_02019614(r6, 1, data_020c6cc8);
                goto end;
            }
            if (unk_de == 0 && *(u32 *)((u8 *)o + 0x894) == 0 && ((u8 *)0 + *(u32 *)((u8 *)o + 0x898)) <= (u8 *)1 &&
                (s32)*(u16 *)((u8 *)o + 0x8a8) > 0xf) {
                func_02019614(r6, 1, data_020c6cc8);
                unk_dc = func_02063b8c(200) + 0xa0;
                unk_de = 0x4b0;
                goto end;
            }
            if (func_ov068_02265114(this, (u8 *)o + 0x5c, 0x8000) != 0 && func_ov068_0226519c(this, o) != 0) {
                func_02019614(r6, 1, data_020c6cc8);
                goto end;
            }
            s32 *pv = (s32 *)func_0201a978((u8 *)o + 0x350);
            vb.x = pv[0];
            vb.y = pv[1];
            vb.z = pv[2];
            s32 d = Math_AngleXZ((u8 *)o + 0x5c, &vb);
            if (NpcActor_IsFrontAngle((s16)(d - *(s16 *)((u8 *)o + 0x8e))) == 0) {
                func_02019614(r6, 1, data_020c6cc8);
            }
        }
    }
    } else {
        func_ov068_022656a8(this, o, 1);
    }
end:
    return FALSE;
}

BOOL Unk_ov068_0225fd54::func_ov068_022644fc(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    func_ov068_02265994(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
    unk_20 = 0;
    *(Unk_ov068_022644fc_W *)((u8 *)o + 0x8ac) = *(Unk_ov068_022644fc_W *)__ptmf_null;
    func_020135bc((u8 *)o + 0x558);
    unk_da = 0;
    unk_f8 = 0x384;
    if (func_0201324c((u8 *)this + 0x3c) != 0) {
        func_0201325c((u8 *)this + 0x3c, 1);
    } else {
        func_ov068_02265324(this, 1, o);
        unk_d8 = -1;
        unk_da = 0;
    }
    *((u8 *)o + 0x9ec) = 0;
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

BOOL Unk_ov068_0225fd54::func_ov068_022643d0(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    if (func_ov068_02265434(this, o) != 0) {
        func_ov068_022656a8(this, o, 0);
    } else {
        func_0202bcdc(o, data_ov068_0226f13c, data_ov068_0226f0f4, 1);
        func_ov068_022659dc(o);
        if (unk_f8 == 0) {
            if ((s32)o->vfunc_64() != 0) {
                func_0207c298((void *)o->vfunc_64(), 0);
            }
            unk_f8 = 0x384;
        }
        if (func_0201324c((u8 *)this + 0x3c) == 0 || unk_d8 == 0) {
            func_ov068_02265324(this, 1, o);
            unk_d8 = -1;
            unk_da = 0;
        }
        if (func_0201324c((u8 *)this + 0x3c) != 0) {
            if (func_ov068_02265270(this, o) != 0) {
                func_ov068_022656a8(this, o, 3);
            } else {
                if (func_02012cb8((u8 *)this + 0x3c) != 3 && func_ov068_022652d0(this, o) != 0) {
                    func_02013300((u8 *)this + 0x3c, (u8 *)o + 0x5c, 3, 1, o);
                    unk_da = 0;
                }
                if (unk_da == 0) {
                    if (func_02012c58((u8 *)this + 0x3c, (u8 *)o + 0x5c) != 0 && unk_d8 == -1) {
                        unk_d8 = 0x1770;
                    }
                    unk_da = 0x28;
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov068_0225fd54::func_ov068_0226433c(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    func_ov068_02265994(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    func_020196b4((u8 *)o + 0x564, 3, 2, 0, 0, 0, 0xffff8000, 0, 0, data_020c6cc8, 0);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    VillagerActor_setFlag834(o);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void Unk_ov068_0225fd54::func_ov068_022642c4(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    if (func_020197a8((u8 *)o + 0x564) == 3) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            if (func_ov003_02218d0c(func_0207e334((void *)o->vfunc_64())) != 0) {
                VillagerDataItemView_getHousePos((void *)o->vfunc_64());
                func_020195c8((u8 *)o + 0x564, 2, 0x3b, 1, data_020c6cc8, 0);
                *((u8 *)o + 0x511) = 0;
                unk_1c = 2;
            }
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_0226424c(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    if (func_020197a8((u8 *)o + 0x564) == 1) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            if (func_ov003_02218d0c(func_0207e334((void *)o->vfunc_64())) != 0) {
                VillagerDataItemView_getHousePos((void *)o->vfunc_64());
                func_020195c8((u8 *)o + 0x564, 2, 0x3b, 1, data_020c6cc8, 0);
                *((u8 *)o + 0x511) = 0;
                unk_1c = 2;
            }
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_02264188(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    Unk_ov068_02264188_V3 v;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x3b) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            func_ov068_022656a8(this, o, 3);
            return;
        }
    }
    u8 *p = (u8 *)VillagerDataItemView_getHousePos((void *)o->vfunc_64());
    func_0204ed8c(&v, p[0], p[1] + 1);
    func_020e761c((u8 *)o + 0x5c, v.x, 0x400);
    func_020e761c((u8 *)o + 0x64, v.z, 0x400);
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x3b) {
        // switch {8,12,22,27,34}: mwcc's own lowering gives a different compare tree, so it is hand-written
        s32 k = (s32)((*(u32 *)((u8 *)o + 0x190) << 4) >> 16);
        if (k > 22) goto hi;
        if (k >= 22) goto hit;
        if (k > 12) goto end;
        if (k < 8) goto end;
        switch (k) {
        case 8:
        case 12:
            goto hit;
        }
        goto end;
    hi:
        if (k > 27) goto hi2;
        switch (k) {
        case 27:
            goto hit;
        }
        goto end;
    hi2:
        if (k != 34) goto end;
    hit:
        func_02013568((u8 *)o + 0x558, o);
    }
end:;
}

s32 Unk_ov068_0225fd54::func_ov068_0226410c(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    u32 gv_ = data_ov068_02270c30;
    if ((gv_ & 1) == 0) {
        data_ov068_02270d3c[0] = *(Fn_226410c *)data_ov068_0226fae0;
        data_ov068_02270d3c[1] = *(Fn_226410c *)data_ov068_0226fb10;
        data_ov068_02270d3c[2] = *(Fn_226410c *)data_ov068_0226fb20;
        data_ov068_02270c30 = gv_ | 1;
    }
    if (unk_1c < 3) {
        (this->*data_ov068_02270d3c[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_0225fd54::func_ov068_02264008(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    void *p = PlayerData_GetCurrent();
    s32 r7;
    if (p != 0) {
        r7 = func_02098044(p, 1);
    } else {
        r7 = 0;
    }
    void *a = (void *)o->vfunc_64();
    u8 *r4 = (u8 *)func_0207e310();
    func_ov068_02265994(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
    func_020785e8(r4, 0);
    r4[0x1d] = r4[0x1d] & ~2;
    BOOL f;
    if (r7 != 0) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    if (f == 0 && func_0207c618(a, 0) != 0) {
        func_0207857c(r4, 2);
    } else {
        func_0207857c(r4, 0);
    }
    func_0207e4f4(a);
    VillagerActor_setFlag834(o);
    unk_20 = func_02063b8c(0x28) + 0x258;
    *((u8 *)o + 0x562) = 0;
    unk_f8 = 0x384;
    VillagerMood_disableEffects((u8 *)o + 0x838);
    *((u8 *)o + 0x9ec) = 0;
    return TRUE;
}

void Unk_ov068_02263e4c::func_ov068_02264000(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    unk_1c = 1;
}

void Unk_ov068_02263e4c::func_ov068_02263eb8(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    void *ow = o->vfunc_64();
    BOOL r = FALSE;
    *((u8 *)o + 0x561) = r;
    if (func_0207e278(ow) == 2) {
        if (func_0207c618(ow, r) == 0) {
            if (func_0207e310(ow) != 0) {
                func_0207857c(func_0207e310(ow), r);
                unk_20 = func_02063b8c(0x28) + 0x258;
            }
            r = TRUE;
        }
    } else if (unk_20 == 0) {
        r = TRUE;
    }
    if (r != 0) {
        if (func_ov068_02265434(this, o) != 0) {
            if (Unk_020d77a4_isNear(o, func_020951ec(4), 0x6000) == 0) {
                func_02013374(unk_3c);
                func_ov068_022656a8(this, o, 4);
            }
        } else {
            void *x = func_0207e310(ow);
            u8 *y = (u8 *)VillagerDataItemView_getHousePos(ow);
            func_020785e8(x, 1);
            func_0207857c(x, 0);
            func_0204ed8c((u8 *)o + 0x5c, y[0], y[1] + 1);
            Unk_ov068_0226392c_V3 *s = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x5c);
            Unk_ov068_0226392c_V3 *d = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x68);
            *d = *s;
            func_02013374(unk_3c);
            func_ov068_022656a8(this, o, 0);
            u16 buf;
            func_0202d864(&buf, o);
            if (buf != 0xfff1) {
                X_func_ov068_02265fb4(o);
            }
        }
    } else if (unk_f8 == 0) {
        if (o->vfunc_64() != 0) {
            func_0207c298(o->vfunc_64(), 0);
        }
        unk_f8 = 0x384;
    }
}

s32 Unk_ov068_02263e4c::func_ov068_02263e4c(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    u32 gv_ = data_ov068_02270c44;
    if ((gv_ & 1) == 0) {
        data_ov068_02270c8c[0] = *(Fn_2263e4c *)data_ov068_0226f950;
        data_ov068_02270c8c[1] = *(Fn_2263e4c *)data_ov068_0226f948;
        data_ov068_02270c44 = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270c8c[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_02263cf0::func_ov068_02263d74(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    void *ow = o->vfunc_64();
    u8 *r4 = (u8 *)func_0207e310(ow);
    u8 *t = (u8 *)VillagerDataItemView_getHousePos(ow);
    func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    if (func_020785ec(r4) == 1) {
        func_020785e8(r4, 0);
    }
    r4[0x1d] &= ~2;
    VillagerActor_setFlag834(o);
    *((u8 *)o + 0x562) = 0;
    *((u8 *)o + 0x563) = 1;
    func_0204ed8c((u8 *)o + 0x5c, t[0], t[1]);
    Unk_ov068_0226392c_V3 *s = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x5c);
    Unk_ov068_0226392c_V3 *d = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x68);
    *d = *s;
    *((u8 *)o + 0x9ec) = 0;
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void Unk_ov068_02263cf0::func_ov068_02263d6c(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    unk_1c = 1;
}

void Unk_ov068_02263cf0::func_ov068_02263d5c(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    *((u8 *)o + 0x561) = 0;
    unk_1c = 2;
}

s32 Unk_ov068_02263cf0::func_ov068_02263cf0(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    u32 gv_ = data_ov068_02270c70;
    if ((gv_ & 1) == 0) {
        data_ov068_02270c9c[0] = *(Fn_2263cf0 *)data_ov068_0226f930;
        data_ov068_02270c9c[1] = *(Fn_2263cf0 *)data_ov068_0226f820;
        data_ov068_02270c70 = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270c9c[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_02263a40::func_ov068_02263c20(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    u8 *t = (u8 *)VillagerDataItemView_getHousePos(o->vfunc_64());
    func_ov068_02265994(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    func_0204ed8c((u8 *)o + 0x5c, t[0], t[1] + 1);
    *(u16 *)((u8 *)o + 0x8e) = 0;
    *(u16 *)((u8 *)o + 0x94) = 0;
    func_0201a99c((u8 *)o + 0x350);
    *(s32 *)((u8 *)o + 0x64) += 0x1000;
    Unk_ov068_0226392c_V3 *s = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x5c);
    Unk_ov068_0226392c_V3 *d = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x68);
    *d = *s;
    VillagerActor_setFlag834(o);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    unk_f8 = -1;
    *((u8 *)o + 0x9ec) = 0;
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void Unk_ov068_02263a40::func_ov068_02263b90(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    void *ow = o->vfunc_64();
    void *r6 = func_0207e310(ow);
    func_0207e334(ow);
    if (func_ov003_02218ce4() != 0) {
        func_020195c8((u8 *)o + 0x564, 2, 0x3d, 1, 1, 0);
        *(Unk_ov068_02263b90_Fn *)((u8 *)o + 0x8ac) = data_ov068_0226f910;
        func_020785e8(r6, 1);
        func_0207857c(r6, 0);
        *((u8 *)o + 0x561) = 1;
        *((u8 *)o + 0x562) = 1;
        func_0201bd9c(o, 0);
        unk_1c = 1;
    }
}

void Unk_ov068_02263a40::func_ov068_02263aac(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x3d) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            u16 buf;
            *((u8 *)o + 0x511) = 1;
            func_0201bd9c(o, 0xd00);
            *(u32 *)((u8 *)o + 0x4e8) &= ~2;
            func_0202d864(&buf, o);
            if (buf != 0xfff1) {
                func_ov068_022656a8(this, o, 0xf);
                func_ov068_022656a4(this, 0);
                unk_34 += 0x12c;
            } else {
                func_ov068_022656a8(this, o, 0);
            }
        } else {
            s32 t = ((Unk_ov068_02263aac_Bits *)((u8 *)o + 0x190))->mid;
            if (t <= 0x1c) {
                if (t >= 0x1c) goto hit;
                if (t <= 0x11) {
                    if (t < 0xd) goto done;
                    if (t == 0xd) goto hit;
                    switch (t) { case 0x11: goto hit; default: goto done; }
                } else {
                    switch (t) { case 0x17: goto hit; default: goto done; }
                }
            } else {
                if (t <= 0x25) {
                    switch (t) { case 0x25: goto hit; default: goto done; }
                }
                if (t != 0x28) goto done;
            }
        hit:
            func_02013568((u8 *)o + 0x558, o);
        done:;
        }
    }
}

s32 Unk_ov068_02263a40::func_ov068_02263a40(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    u32 gv_ = data_ov068_02270c50;
    if ((gv_ & 1) == 0) {
        data_ov068_02270cac[0] = *(Fn_2263a40 *)data_ov068_0226f838;
        data_ov068_02270cac[1] = *(Fn_2263a40 *)data_ov068_0226f848;
        data_ov068_02270c50 = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270cac[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_022638c0::func_ov068_02263978(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    func_ov068_02265994(o);
    func_02013464(o);
    if (VillagerTalk_hasPartner(o) != 0) {
        func_02014198((u8 *)o + 0x618, 1, 0);
    } else if (*((u8 *)o + 0xa00) != 0) {
        func_02014198((u8 *)o + 0x618, 0, 0);
        X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    } else {
        void *p = func_02015aac((u8 *)o + 0x680);
        s32 v = 0;
        if (p != 0) {
            v = Unk_020d77a4_getAngleTo(o, p);
        }
        X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        func_020141b4((u8 *)o + 0x618, 0, v, 0);
    }
    return TRUE;
}

void Unk_ov068_022638c0::func_ov068_02263930(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    if (func_02014220((u8 *)o + 0x618) == 0) {
        VillagerMood_requestApply((u8 *)o + 0x838);
        TalkRequest_EndTalkWith(o);
        VillagerTalk_setPartner(o, 0);
        func_0201c7ec(o, 0);
        unk_1c = 1;
    }
}

void Unk_ov068_022638c0::func_ov068_0226392c(Unk_ov068_Owner *o) {
    using namespace ns_02263600;}

s32 Unk_ov068_022638c0::func_ov068_022638c0(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    u32 gv_ = data_ov068_02270c5c;
    if ((gv_ & 1) == 0) {
        data_ov068_02270cdc[0] = *(Fn_22638c0 *)data_ov068_0226f858;
        data_ov068_02270cdc[1] = *(Fn_22638c0 *)data_ov068_0226f8e0;
        data_ov068_02270c5c = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270cdc[unk_1c])(o);
    }
    return 0;
}

namespace ns_02263600 {
extern "C" {
s32 func_ov068_02263880(void *a, void *b) {
    void *g = data_021dfd8c;
    s32 res = 2;
    if (g != 0) {
        s32 a1 = SaveVillagers_FindIndex(g, (s32)a);
        s32 a2 = SaveVillagers_FindIndex(g, (s32)b);
        s32 r = func_0207ac2c(g, a1, a2);
        if (r < 5) {
            res = r;
        }
    }
    return res;
}
}
}

namespace ns_02263600 {
extern "C" {
s32 func_ov068_02263840(void *a, void *o) {
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    void *x = ((Unk_ov068_Owner *)o)->vfunc_64();
    void *y = p->vfunc_64();
    void *a1 = (void *)VillagerData_getVillagerId(x);
    void *a2 = (void *)VillagerData_getVillagerId(y);
    return func_ov068_02263880(a1, a2);
}
}
}

namespace ns_02263600 {
extern "C" {
void func_ov068_02263808(void *a, void *r1, void *r2, s8 *t) {
    void *g = data_021dfd8c;
    if (g != 0) {
        s32 k = func_ov068_02263880(r1, r2);
        if (k < 5) {
            func_0207ab90(g, (s32)r1, (s32)r2, t[k]);
        }
    }
}
}
}

namespace ns_02263600 {
extern "C" {
void func_ov068_022637c0(void *a, void *o, s8 *t) {
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    void *x = ((Unk_ov068_Owner *)o)->vfunc_64();
    void *y = p->vfunc_64();
    s32 a1 = VillagerData_getVillagerId(x);
    s32 a2 = VillagerData_getVillagerId(y);
    func_ov068_02263808(a, (void *)a1, (void *)a2, t);
}
}
}

namespace ns_02263600 {
extern "C" {
void func_ov068_02263768(void *a, s32 unused, s8 *t) {
    void *g = data_021dfd8c;
    if (g != 0) {
        void *q = SaveVillagers_PickRandomExcept(g, 0, 0);
        if (q != 0) {
            void *r4 = (void *)VillagerData_getVillagerId(q);
            u32 buf;
            func_02133ef8(&buf, 4);
            buf = (u32)r4;
            void *q2 = SaveVillagers_PickRandomExcept(g, &buf, 1);
            if (q2 != 0) {
                func_ov068_02263808(a, r4, (void *)VillagerData_getVillagerId(q2), t);
            }
        }
    }
}
}
}

namespace ns_02263600 {
extern "C" {
void func_ov068_02263738(void *a, void *o, s32 x, s32 y, u8 flag) {
    VillagerMood_addMood((u8 *)o + 0x838, x, y);
    if (flag != 0) {
        VillagerMood_requestApply((u8 *)o + 0x838);
    }
}
}
}

namespace ns_02263600 {
extern "C" {
void func_ov068_02263704(void *a, void *b, u8 *tbl, s32 n, u8 p5, u8 p6) {
    u8 v = tbl[func_02063b8c(n)];
    if (v == 0) {
        p5 = 0;
    }
    func_ov068_02263738(a, b, v, p5, p6);
}
}
}

namespace ns_02263600 {
extern "C" {
s32 func_ov068_02263668(void *unused, u32 *a, u32 *b, u32 c, u32 d) {
    void *g;
    if (PlayerData_GetCurrent() != 0) {
        g = PlayerData_getPlayerId(PlayerData_GetCurrent());
    } else {
        g = 0;
    }
    if (g != 0 && func_02094218(g) != 0) {
        s32 va = -128;
        s32 vb = -128;
        void *p1 = Villager_FindMemory(c, g);
        void *p2 = Villager_FindMemory(d, g);
        if (p1 != 0) {
            va = VillagerMemory_getFriendship(p1);
        }
        if (p2 != 0) {
            vb = VillagerMemory_getFriendship(p2);
        }
        if (va > vb || (va == vb && func_02063b8c(2) == 0)) {
            *a = c;
            *b = d;
            return 0;
        }
        *a = d;
        *b = c;
        return 1;
    }
    *a = c;
    *b = d;
    return 0;
}
}
}

namespace ns_02263600 {
extern "C" {
void *func_ov068_02263600(void *unused, void *x) {
    if ((u32)data_021e6e4c != 0) {
        u32 i; u16 mask; u32 cnt; mask = 0; cnt = 0; i = 0;
        goto test0;
    loop0:
        if (x == 0 || func_02071e8c(func_02071b00(data_021e6e4c, i), x) == 0) {
            mask |= 1 << i;
            cnt++;
        }
        i++;
    test0:
        if (i < 8) goto loop0;
        u32 r = Random_PickSetBit(mask, cnt, 8);
        if (r < 8) {
            return func_02071b00(data_021e6e4c, r);
        }
    }
    return 0;
}
}
}

BOOL Unk_ov068_02262414::func_ov068_02263518(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    s32 vx = (s32)o->vfunc_64();
    s32 vy = (s32)other->vfunc_64();
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    func_ov068_02263668(this, &a, &b, x, y);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    func_ov068_02263768(this, o, data_ov068_0226f10c);
    switch (func_0207abd8(data_021dfd8c, vx, vy)) {
    case 0:
    case 1:
        func_ov068_02263738(this, o, 1, 2, 1);
        func_ov068_02263738(this, other, 1, 2, 1);
        break;
    case 2:
        break;
    case 3:
    case 4:
        func_ov068_02263704(this, o, data_ov068_0226f0e8, 2, 2, 1);
        func_ov068_02263704(this, other, data_ov068_0226f0e8, 2, 2, 1);
        break;
    }
    unk_1c = 3;
    return TRUE;
}

BOOL Unk_ov068_02262414::func_ov068_02263494(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    func_ov068_02263668(this, &a, &b, x, y);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    func_ov068_02263768(this, o, data_ov068_0226f124);
    func_ov068_02263738(this, o, 0, 0, 1);
    func_ov068_02263738(this, other, 0, 0, 1);
    unk_1c = 3;
    return TRUE;
}

BOOL Unk_ov068_02262414::func_ov068_022632dc(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    func_ov068_02263668(this, &a, &b, x, y);
    MsgString11 s1;
    MsgString11 s2;
    VillagerDataProfileView_getCatchphrase(a, &s1, 0);
    VillagerDataProfileView_getCatchphrase(b, &s2, 0);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    if (MsgString_equals(&s1, &s2) != 0) {
        u8 *r6 = VillagerData_getVillagerId(a);
        u8 *r7 = VillagerData_getVillagerId(b);
        b = 0;
        if ((u32)data_021dfd8c != 0) {
            void *e;
            u32 mask = 0, cnt = 0;
            s32 i = 0;
            for (i = 0; i < 8; i++) {
                e = SaveVillagers_Get(data_021dfd8c, i);
                if (e != 0) {
                    u8 *q = VillagerData_getVillagerId(e);
                    if (VillagerId_isValid(q) != 0) {
                        BOOL t1 = FALSE, t2 = FALSE;
                        u32 t = *(u16 *)q;
                        if (t == *(u16 *)r6) {
                            if (memcmp(q + 2, r6 + 2, 8) == 0) {
                                t2 = TRUE;
                            }
                        }
                        if (t2) {
                            if (q[0xb] == r6[0xb]) {
                                t1 = TRUE;
                            }
                        }
                        if (t1 == 0) {
                            if (t == *(u16 *)r7 && memcmp(q + 2, r7 + 2, 8) == 0 && q[0xb] == r7[0xb]) {
                            } else {
                                VillagerDataProfileView_getCatchphrase(e, &s2, 0);
                                if (MsgString_equals(&s1, &s2) == 0) {
                                    mask |= 1 << i;
                                    mask = (u8)mask;
                                    cnt++;
                                }
                            }
                        }
                    }
                }
            }
            s32 m = Random_PickSetBit(mask, cnt, 8);
            if (SaveVillagers_IsValidIndex(m) != 0) {
                b = SaveVillagers_Get(data_021dfd8c, m);
            }
        }
    }
    if (b != 0) {
        func_0207fb4c(b, &s1);
    }
    func_ov068_02263768(this, o, data_ov068_0226f14c);
    func_ov068_02263738(this, o, 1, 2, 1);
    func_ov068_02263738(this, other, 1, 2, 1);
    unk_1c = 3;
    return TRUE;
}

BOOL Unk_ov068_02262414::func_ov068_02262fd8(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    u16 h0, h1;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    if (func_ov068_02263668(this, &a, &b, x, y) == 0) {
        unk_28 = (u8 *)other;
    } else {
        unk_28 = (u8 *)o;
    }
    BOOL ok = TRUE;
    if (Unk_ov068_02262c20_InRange(VillagerDataProfileView_getShirt(a))) {
    u8 *rec = VillagerData_getPattern(a);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    if (Unk_ov068_02262c20_InRange(VillagerDataProfileView_getShirt(b)) && func_02071e8c(VillagerData_getPattern(b), rec) != 0) {
        u8 *r7 = VillagerData_getVillagerId(a);
        u8 *p10 = VillagerData_getVillagerId(b);
        ok = FALSE;
        b = 0;
        if ((u32)data_021dfd8c != 0) {
            void *e;
            u32 mask = 0, cnt = 0;
            s32 i = 0;
            for (i = 0; i < 8; i++) {
                e = SaveVillagers_Get(data_021dfd8c, i);
                if (e != 0) {
                    u8 *q = VillagerData_getVillagerId(e);
                    if (VillagerId_isValid(q) != 0) {
                        BOOL s1 = FALSE, s2 = FALSE;
                        u32 t = *(u16 *)q;
                        if (t == *(u16 *)r7) {
                            if (memcmp(q + 2, r7 + 2, 8) == 0) {
                                s2 = TRUE;
                            }
                        }
                        if (s2) {
                            if (q[0xb] == r7[0xb]) {
                                s1 = TRUE;
                            }
                        }
                        if (s1 == 0) {
                            if (t == *(u16 *)p10 && memcmp(q + 2, p10 + 2, 8) == 0 && q[0xb] == p10[0xb]) {
                            } else {
                                if (!Unk_ov068_02262c20_InRange(VillagerDataProfileView_getShirt(e)) ||
                                    func_02071e8c(VillagerData_getPattern(e), rec) == 0) {
                                    if (func_0207e278(e) != 0) {
                                        mask |= 1 << i;
                                        mask = (u8)mask;
                                        cnt++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            s32 m = Random_PickSetBit(mask, cnt, 8);
            if (SaveVillagers_IsValidIndex(m) != 0) {
                b = SaveVillagers_Get(data_021dfd8c, m);
            }
        }
    }
    if (b != 0) {
        u8 *dst = VillagerData_getPattern(b);
        *(Unk_ov068_02262c20_Blk *)dst = *(Unk_ov068_02262c20_Blk *)rec;
        *(u16 *)(dst + 0x200) = *(u16 *)(rec + 0x200);
        *(Unk_ov068_02262c20_B8 *)(dst + 0x202) = *(Unk_ov068_02262c20_B8 *)(rec + 0x202);
        *(u16 *)(dst + 0x20a) = *(u16 *)(rec + 0x20a);
        *(Unk_ov068_02262c20_B8 *)(dst + 0x20c) = *(Unk_ov068_02262c20_B8 *)(rec + 0x20c);
        *(s8 *)(dst + 0x214) = *(s8 *)(rec + 0x214);
        *(u8 *)(dst + 0x215) = *(u8 *)(rec + 0x215);
        *(Unk_ov068_02262c20_B16 *)(dst + 0x216) = *(Unk_ov068_02262c20_B16 *)(rec + 0x216);
        *(u8 *)(dst + 0x226) = *(u8 *)(rec + 0x226);
        h0 = 0x12a8;
        VillagerDataProfileView_setShirt(b, &h0);
    }
    func_ov068_022637c0(this, o, data_ov068_0226f114);
    if (ok && b != 0) {
        func_ov068_02263738(this, o, 1, 2, 0);
        func_ov068_02263738(this, other, 1, 2, 0);
        h1 = 0x12a8;
        func_02016c80(unk_28 + 0x564, 1, &h1);
        unk_1c = 2;
    } else {
        func_ov068_02263738(this, o, 1, 2, 1);
        func_ov068_02263738(this, other, 1, 2, 1);
        unk_1c = 3;
    }
    return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_02262414::func_ov068_02262e5c(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    u16 v0 = 0xfff1;
    u16 v1, v2;
    void *a = 0;
    void *b = 0;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    s32 r = func_ov068_02263668(this, &a, &b, x, y);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    if (r == 0) {
        unk_28 = (u8 *)o;
    } else {
        unk_28 = (u8 *)other;
    }
    func_ov068_02263768(this, o, data_ov068_0226f104);
    if (Unk_ov068_02262e5c_InRange(func_0207850c(func_0207e310(a))) == 0) {
        Villager_GetDefaultUmbrella(&v1, a);
        v0 = v1;
        VillagerDataProfileView_setUmbrella(a, &v0);
    }
    func_0207fd3c(&v2, a);
    v0 = v2;
    u16 *p = VillagerDataProfileView_getShirt(a);
    BOOL same;
    if (Item_IsFurniture(p) != 0) {
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v0)) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    } else {
        if (*p == v0) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    }
    if (same == 0) {
        func_ov068_02263704(this, o, data_ov068_0226f0f0, 4, 2, 0);
        func_ov068_02263704(this, other, data_ov068_0226f0f0, 4, 2, 0);
        VillagerDataProfileView_setShirt(a, &v0);
        func_02016c80(unk_28 + 0x564, 1, &v0);
        unk_1c = 2;
    } else {
        func_ov068_02263704(this, o, data_ov068_0226f0f0, 4, 2, 1);
        func_ov068_02263704(this, other, data_ov068_0226f0f0, 4, 2, 1);
        unk_1c = 3;
    }
    return TRUE;
}

BOOL Unk_ov068_02262414::func_ov068_02262da0(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    func_ov068_02263668(this, &a, &b, x, y);
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    func_ov068_02263768(this, o, data_ov068_0226f12c);
    EncodedString10 obj;
    if (Villager_GetDefaultCatchphraseEncoded(&obj, VillagerId_GetSpecies(VillagerData_getVillagerId(b))) != 0) {
        func_0207fb34(b, &obj);
    }
    func_ov068_02263704(this, o, data_ov068_0226f0f8, 4, 2, 1);
    func_ov068_02263704(this, other, data_ov068_0226f0f8, 4, 2, 1);
    unk_1c = 3;
    return TRUE;
}

BOOL Unk_ov068_02262414::func_ov068_02262c20(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    u16 h0, h1;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    if (func_ov068_02263668(this, &a, &b, x, y) == 0) {
        unk_28 = (u8 *)o;
    } else {
        unk_28 = (u8 *)other;
    }
    u8 *rec = 0;
    if (Unk_ov068_02262c20_InRange(VillagerDataProfileView_getShirt(a))) {
        rec = VillagerData_getPattern(a);
    }
    rec = func_ov068_02263600(this, rec);
    if (rec != 0) {
    func_0207cb94(b, a);
    func_0207f264(b, a, 0);
    func_ov068_022637c0(this, o, data_ov068_0226f144);
    func_ov068_02263738(this, unk_28, 1, 2, 0);
    u8 *dst = VillagerData_getPattern(a);
    *(Unk_ov068_02262c20_Blk *)dst = *(Unk_ov068_02262c20_Blk *)rec;
    *(u16 *)(dst + 0x200) = *(u16 *)(rec + 0x200);
    *(Unk_ov068_02262c20_B8 *)(dst + 0x202) = *(Unk_ov068_02262c20_B8 *)(rec + 0x202);
    *(u16 *)(dst + 0x20a) = *(u16 *)(rec + 0x20a);
    *(Unk_ov068_02262c20_B8 *)(dst + 0x20c) = *(Unk_ov068_02262c20_B8 *)(rec + 0x20c);
    *(s8 *)(dst + 0x214) = *(s8 *)(rec + 0x214);
    *(u8 *)(dst + 0x215) = *(u8 *)(rec + 0x215);
    *(Unk_ov068_02262c20_B16 *)(dst + 0x216) = *(Unk_ov068_02262c20_B16 *)(rec + 0x216);
    *(u8 *)(dst + 0x226) = *(u8 *)(rec + 0x226);
    h0 = 0x12a8;
    VillagerDataProfileView_setShirt(a, &h0);
    h1 = 0x12a8;
    func_02016c80(unk_28 + 0x564, 1, &h1);
    unk_1c = 2;
    return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_02262414::func_ov068_02262b78(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    s32 v = Unk_020d77a4_getAngleTo(o, p);
    func_ov068_02265994(o);
    func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 2, 0, (s32)p, gVec3Zero, 4, data_020c6d1c, 1);
    unk_1c = 0;
    VillagerActor_clearFlag834(o);
    func_ov068_02263738(this, o, 0, 0, 1);
    VillagerMood_enableEffects((u8 *)o + 0x838);
    return TRUE;
}

void Unk_ov068_02262414::func_ov068_02262ad4(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        unk_1c = 1;
        s32 t = func_ov068_02263840(this, o);
        if (t < 5) {
            unk_20 = data_ov068_0226f178[t];
        } else {
            unk_20 = 100;
        }
    } else if (func_ov068_02264aa0(this, o) != 0) {
        Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
        if (p != 0 && p->vfunc_bc() != 0) {
            VillagerTalk_setPartner(o, 0);
            func_0201c7ec(o, 0);
            func_ov068_022656a8(this, o, 0x13);
            func_ov068_022655b4(this);
        }
    }
}

BOOL Unk_ov068_02262414::func_ov068_02262a9c(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    s32 d = 0;
    if (p != 0) {
        d = func_020e9650((u8 *)o + 0x5c, (u8 *)p + 0x5c);
    }
    if (d > 0 && d < 0x3c00) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov068_02262414::func_ov068_02262a58(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    s32 r = 0;
    void *a = func_020951ec(4);
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    if (a != 0 && p != 0) {
        r = Unk_020d77a4_getDistanceTo(o, a);
        s32 b = Unk_020d77a4_getDistanceTo(p, a);
        if (r >= b) {
            r = b;
        }
    }
    return r;
}

BOOL Unk_ov068_02262414::func_ov068_022629e0(Unk_ov068_Owner *o, s32 v) {
    using namespace ns_02262294;
    s32 h;
    if (PlayerData_GetCurrent() != 0) {
        h = PlayerData_getPlayerId(PlayerData_GetCurrent());
    } else {
        h = 0;
    }
    if (h != 0 && func_02094218(h) != 0) {
        Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
        s32 a = Villager_FindMemory((s32)o->vfunc_64(), h);
        s32 b = Villager_FindMemory((s32)p->vfunc_64(), h);
        if (a == 0 || b == 0) {
            if (v < 0x6000) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

BOOL Unk_ov068_02262414::func_ov068_02262994(Unk_ov068_Owner *o, s32 v) {
    using namespace ns_02262294;
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    s32 a = (s32)o->vfunc_64();
    s32 b = (s32)p->vfunc_64();
    if (func_0207abd8(data_021dfd8c, a, b) >= 4) {
        if (v < 0x6000) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_ov068_02262414::func_ov068_02262648(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    s32 a;
    s32 b;
    s32 t;
    if (func_ov068_02264aa0(this, o) != 0 && VillagerActor_isFlag834(o) == 0 && p != 0 && p->vfunc_bc() != 0) {
        VillagerTalk_setPartner(o, 0);
        func_0201c7ec(o, 0);
        func_ov068_022656a8(this, o, 0x13);
        func_ov068_022655b4(this);
        return;
    }
    if (func_0201c7e0(o) == 0) {
        t = func_ov068_02262a58(o);
        if (func_ov068_022629e0(o, t) != 0) {
            VillagerActor_setFlag834(o);
            if (p != 0) {
                VillagerActor_setFlag834(p);
            }
            unk_1c = 3;
            return;
        }
        if (func_ov068_02262994(o, t) != 0) {
            VillagerActor_setFlag834(o);
            if (p != 0) {
                VillagerActor_setFlag834(p);
            }
            unk_1c = 3;
            func_ov068_02263738(this, o, 2, 1, 1);
            if (p != 0) {
                func_ov068_02263738(this, p, 2, 1, 1);
            }
            return;
        }
        if (func_ov068_02262a9c(o) == 0) {
            VillagerActor_setFlag834(o);
            if (p != 0) {
                VillagerActor_setFlag834(p);
            }
            unk_1c = 3;
            return;
        }
        a = 0;
        if (func_02019790((u8 *)o + 0x564) != 0) {
            if (func_020197a8((u8 *)o + 0x564) != 8 || func_020197a0((u8 *)o + 0x564) == 0) {
                a = 1;
            }
        }
        b = 0;
        if (func_02019790((u8 *)p + 0x564) != 0) {
            if (func_020197a8((u8 *)o + 0x564) != 8 || func_020197a0((u8 *)o + 0x564) == 0) {
                b = 1;
            }
        }
        if (unk_20 == 0) {
            if (a != 0) {
                if (b == 0) {
                    return;
                }
                if (PlayerData_GetCurrent() == 0) {
                    if (func_02063b8c(2) == 0) {
                        func_ov068_02263704(this, o, data_ov068_0226f100, 4, 2, 1);
                        func_ov068_02263704(this, p, data_ov068_0226f100, 4, 2, 1);
                    }
                    unk_1c = 3;
                } else {
                    func_ov068_02262548(o);
                }
            } else {
                if (func_020197a8((u8 *)o + 0x564) != 8) {
                    return;
                }
                if (func_020197a0((u8 *)o + 0x564) == 0) {
                    return;
                }
                if (*((u8 *)o + 0x19c) != 0 && func_02019790((u8 *)o + 0x564) != 0) {
                    goto doit1;
                } else if (*((u8 *)o + 0x19c) == 0) {
                    if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 0 || func_02019790((u8 *)o + 0x564) != 0) {
                        goto doit1;
                    }
                }
                return;
            doit1:
                func_02019638((u8 *)o + 0x564, 1, 0, data_020c6cc8);
            }
        } else {
            if (a != 0) {
                if (unk_20 >= 0x14 && func_02063b8c(0x20) == 0) {
                    func_02019638((u8 *)o + 0x564, 1, data_ov068_0226f15c[func_02063b8c(8)], data_020c6cc8);
                }
            } else {
                if (func_020197a8((u8 *)o + 0x564) == 8 && func_020197a0((u8 *)o + 0x564) != 0) {
                    if (*((u8 *)o + 0x19c) != 0 && func_02019790((u8 *)o + 0x564) != 0) {
                        goto doit2;
                    } else if (*((u8 *)o + 0x19c) == 0) {
                        if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 0 || func_02019790((u8 *)o + 0x564) != 0) {
                            goto doit2;
                        }
                    }
                    goto skip2;
                doit2:
                    func_02019638((u8 *)o + 0x564, 1, 0, data_020c6cc8);
                skip2:;
                }
            }
            if (b != 0 && unk_20 >= 0x14 && func_02063b8c(0x20) == 0) {
                func_02019638((u8 *)p + 0x564, 1, data_ov068_0226f15c[func_02063b8c(8)], data_020c6cc8);
            }
        }
    } else {
        if (func_020197a8((u8 *)o + 0x564) == 8 && func_020197a0((u8 *)o + 0x564) != 0) {
            if (*((u8 *)o + 0x19c) != 0 && func_02019790((u8 *)o + 0x564) != 0) {
                goto doit3;
            } else if (*((u8 *)o + 0x19c) == 0) {
                if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 0 || func_02019790((u8 *)o + 0x564) != 0) {
                    goto doit3;
                }
            }
            return;
        doit3:
            func_02019638((u8 *)o + 0x564, 1, 0, data_020c6cc8);
        }
    }
}

void Unk_ov068_02262414::func_ov068_02262548(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    u32 gv_ = data_ov068_02270c3c;
    if ((gv_ & 1) == 0) {
        data_ov068_02270e0c[0] = *(Fn_2262548 *)data_ov068_0226f970;
        data_ov068_02270e0c[1] = *(Fn_2262548 *)data_ov068_0226f980;
        data_ov068_02270e0c[2] = *(Fn_2262548 *)data_ov068_0226f998;
        data_ov068_02270e0c[3] = *(Fn_2262548 *)data_ov068_0226f9a8;
        data_ov068_02270e0c[4] = *(Fn_2262548 *)data_ov068_0226f9b0;
        data_ov068_02270e0c[5] = *(Fn_2262548 *)data_ov068_0226f9c0;
        data_ov068_02270e0c[6] = *(Fn_2262548 *)data_ov068_0226f9d8;
        data_ov068_02270c3c = gv_ | 1;
    }
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    VillagerActor_setFlag834(o);
    VillagerActor_setFlag834(p);
    u8 buf[7];
    MI_CpuCopy8(data_ov068_0226f154, buf, 7);
    s32 z = 0;
    s32 i;
    for (i = 0; i < 7; i++) {
        u32 k = func_0202ce44(buf, 7);
        if (k < 7) {
            if ((this->*data_ov068_02270e0c[k])(o) != 0) {
                break;
            }
            buf[k] = z;
        }
    }
    if (i == 7) {
        unk_1c = 3;
    }
}

void Unk_ov068_02262414::func_ov068_022624f8(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    if (func_020197a8(unk_28 + 0x564) == 0x14 && func_02019790(unk_28 + 0x564) != 0) {
        VillagerMood_requestApply((u8 *)o + 0x838);
        VillagerMood_requestApply((u8 *)VillagerTalk_getPartner(o) + 0x838);
        unk_1c = 3;
    }
}

void Unk_ov068_02262414::func_ov068_022624a4(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    if (p != 0) {
        if (p->vfunc_bc() != 0) {
            VillagerTalk_setPartner(o, 0);
            func_0201c7ec(o, 0);
            if (func_ov068_02265670(this, o) == 0) {
                func_ov068_022656a8(this, o, 0);
            }
            func_ov068_022655b4(this);
        }
    }
}

s32 Unk_ov068_02262414::func_ov068_02262414(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    u32 gv_ = data_ov068_02270c78;
    if ((gv_ & 1) == 0) {
        data_ov068_02270d9c[0] = *(Fn_2262414 *)data_ov068_0226fa08;
        data_ov068_02270d9c[1] = *(Fn_2262414 *)data_ov068_0226fa20;
        data_ov068_02270d9c[2] = *(Fn_2262414 *)data_ov068_0226fa28;
        data_ov068_02270d9c[3] = *(Fn_2262414 *)data_ov068_0226fa38;
        data_ov068_02270c78 = gv_ | 1;
    }
    if (unk_1c < 4) {
        (this->*data_ov068_02270d9c[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_02262294::func_ov068_02262338(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    void *p = func_020951ec(4);
    s32 v = 0;
    s32 st = *(s32 *)((u8 *)o + 0x82c);
    void *q = X_func_ov068_02265f58(o);
    s32 x = v;
    s32 t;
    if (q != 0) {
        x = VillagerMemory_getFriendship(q);
    }
    if (x >= 0) {
        t = VillagerId_GetPersonality(VillagerData_getVillagerId(st));
        if (t == 0 || t == 3) {
            st = 1;
        } else {
            st = 0;
        }
    } else {
        t = VillagerId_GetPersonality(VillagerData_getVillagerId(st));
        switch (t) {
        case 0:
        case 3:
            st = 2;
            break;
        case 1:
        case 4:
            st = 3;
            break;
        case 2:
        default:
            st = 4;
            break;
        }
    }
    if (p != 0) {
        v = Unk_020d77a4_getAngleTo(o, p);
    }
    func_ov068_02265994(o);
    func_ov003_02212240();
    func_02014170((u8 *)o + 0x618, st, 0, v, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

void Unk_ov068_02262294::func_ov068_02262304(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    if (func_02014220((u8 *)o + 0x618) == 0) {
        TalkRequest_EndTalkWith(o);
        func_ov068_022656a4(this, 0);
        unk_1c = 1;
    }
}

void Unk_ov068_02262294::func_ov068_02262300(Unk_ov068_Owner *o) {
    using namespace ns_02262294;}

s32 Unk_ov068_02262294::func_ov068_02262294(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    u32 gv_ = data_ov068_02270c28;
    if ((gv_ & 1) == 0) {
        data_ov068_02270d1c[0] = *(Fn_2262294 *)data_ov068_0226fa50;
        data_ov068_02270d1c[1] = *(Fn_2262294 *)data_ov068_0226fa60;
        data_ov068_02270c28 = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270d1c[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_02261900::func_ov068_022621fc(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    func_ov068_02265994(o);
    unk_e4 = (Unk_ov068_02261cd4_Tgt *)func_020951ec(4);
    Unk_ov068_02261cd4_Vec *pv = (Unk_ov068_02261cd4_Vec *)((u8 *)o + 0x5c);
    unk_e8 = *(s32 *)((u8 *)o + 0x5c);
    unk_ec = pv->y;
    unk_f0 = pv->z;
    func_020195c8((u8 *)o + 0x564, 1, 0xdf, 1, data_020c6cc8, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    unk_1c = 0;
    VillagerActor_clearFlag834(o);
    return TRUE;
}

BOOL Unk_ov068_02261900::func_ov068_022621d4(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (func_020e96a4((u8 *)o + 0x5c, &unk_e8) <= 0xc000) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_02261900::func_ov068_0226218c(Unk_ov068_Owner *o, s32 r) {
    using namespace ns_02261900;
    BOOL res = FALSE;
    if (Unk_020d77a4_getDistanceTo(o, unk_e4) <= r) {
        s32 v = Unk_020d77a4_getRelativeAngleTo(o, unk_e4);
        s32 lim = data_ov068_02270c24;
        if (v >= -lim && v <= lim) {
            res = TRUE;
        }
    }
    return res;
}

void Unk_ov068_02261900::func_ov068_02262044(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (unk_e4 != 0) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            if (func_ov068_0226218c(o, 0x3000) != 0) {
                func_020196b4((u8 *)o + 0x564, 0xb, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                unk_1c = 2;
                unk_20 = 0xc8;
            } else {
                Unk_ov068_02261cd4_Tgt *p = unk_e4;
                Unk_ov068_02261cd4_Vec *pv = (Unk_ov068_02261cd4_Vec *)((u8 *)p + 0x5c);
                func_020196b4((u8 *)o + 0x564, 2, 1, pv->x, pv->z, 0, 0, 0, 0, data_020c6cc8, 0);
                unk_1c = 1;
                unk_20 = 0xc8;
            }
        } else if (func_02015e48((u8 *)o + 0x334, 0) == 0xdf && ((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 9) {
            Unk_ov068_02262044_Vec v;
            s16 h;
            v.x = *(s32 *)((u8 *)o + 0x478);
            v.y = *(s32 *)((u8 *)o + 0x47c);
            v.z = *(s32 *)((u8 *)o + 0x480);
            h = *(s16 *)((u8 *)o + 0x8e);
            Unk_ov068_02262044_Ent *e = &data_ov068_0226f164[func_02063b8c(2)];
            func_02090330(e->a, &v, &h, 0);
            func_02003ddc((u8 *)o + 0x514, e->b + 0x84, 0x7f, 0);
        }
    } else {
        func_ov068_022656a8(this, o, 0);
        unk_f4 = 0x4b0;
        if ((s32)o->vfunc_64() != 0) {
            func_0207c190((s32)o->vfunc_64(), -1);
        }
    }
}

void Unk_ov068_02261900::func_ov068_02261f08(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    void *q = (u8 *)o + 0x350;
    if (unk_e4 != 0) {
        if (func_ov068_0226218c(o, 0x3000) != 0) {
            func_020196b4((u8 *)o + 0x564, 0xb, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_1c = 2;
            unk_20 = 0xc8;
        } else if (*(u16 *)((u8 *)o + 0xa02) >= data_ov068_0226f0e4) {
            func_ov068_022656a8(this, o, 0x15);
        } else if (func_ov068_02264aa0(this, o) != 0) {
            func_ov068_022656a8(this, o, 0x13);
        } else if (unk_20 == 0) {
            func_ov068_022656a8(this, o, 0);
            unk_f4 = 0x4b0;
            if ((s32)o->vfunc_64() != 0) {
                func_0207c1e8((s32)o->vfunc_64());
            }
        } else if (func_ov068_022621d4(o) != 0) {
            func_0201a9ec(q, (u8 *)unk_e4 + 0x5c);
        } else {
            func_ov068_022656a8(this, o, 0);
            unk_f4 = 0x4b0;
            if ((s32)o->vfunc_64() != 0) {
                func_0207c1e8((s32)o->vfunc_64());
            }
        }
    } else {
        func_ov068_022656a8(this, o, 0);
        unk_f4 = 0x4b0;
        if ((s32)o->vfunc_64() != 0) {
            func_0207c190((s32)o->vfunc_64(), -1);
        }
    }
}

void Unk_ov068_02261900::func_ov068_02261e10(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (unk_e4 != 0) {
        if (func_ov068_0226218c(o, 0x5000) == 0) {
            s32 t = Unk_020d77a4_getAngleTo(o, unk_e4);
            func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
            unk_1c = 3;
        } else if (*(u16 *)((u8 *)o + 0xa02) >= data_ov068_0226f0e4) {
            func_ov068_022656a8(this, o, 0x15);
        } else if (func_ov068_02264aa0(this, o) != 0) {
            func_ov068_022656a8(this, o, 0x13);
        } else if (unk_20 == 0) {
            func_ov068_022656a8(this, o, 0);
            unk_f4 = 0x4b0;
            if ((s32)o->vfunc_64() != 0) {
                func_0207c1e8((s32)o->vfunc_64());
            }
        }
    } else {
        func_ov068_022656a8(this, o, 0);
        unk_f4 = 0x4b0;
        if ((s32)o->vfunc_64() != 0) {
            func_0207c190((s32)o->vfunc_64(), -1);
        }
    }
}

void Unk_ov068_02261900::func_ov068_02261db0(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        unk_1c = 4;
        unk_20 = 10;
    } else if (func_ov068_02264aa0(this, o) != 0) {
        func_ov068_022656a8(this, o, 0x13);
    }
}

void Unk_ov068_02261900::func_ov068_02261cd4(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (*(u16 *)((u8 *)o + 0xa02) >= data_ov068_0226f0e4) {
        func_ov068_022656a8(this, o, 0x15);
    } else if (func_ov068_02264aa0(this, o) != 0) {
        func_ov068_022656a8(this, o, 0x13);
    } else if (unk_20 == 0) {
        if (func_ov068_0226218c(o, 0x3000) != 0) {
            func_020196b4((u8 *)o + 0x564, 0xb, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_1c = 2;
            unk_20 = 0xc8;
        } else if (func_020197a8((u8 *)o + 0x564) == 0 && func_02019790((u8 *)o + 0x564) != 0) {
            Unk_ov068_02261cd4_Tgt *p = unk_e4;
            Unk_ov068_02261cd4_Vec *pv = (Unk_ov068_02261cd4_Vec *)((u8 *)p + 0x5c);
            func_020196b4((u8 *)o + 0x564, 2, 1, pv->x, pv->z, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_1c = 1;
            unk_20 = 0xc8;
        }
    }
}

s32 Unk_ov068_02261900::func_ov068_02261c38(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    u32 gv_ = data_ov068_02270c40;
    if ((gv_ & 1) == 0) {
        data_ov068_02270dbc[0] = *(Fn_2261c38 *)data_ov068_0226fa70;
        data_ov068_02270dbc[1] = *(Fn_2261c38 *)data_ov068_0226fa88;
        data_ov068_02270dbc[2] = *(Fn_2261c38 *)data_ov068_0226faa8;
        data_ov068_02270dbc[3] = *(Fn_2261c38 *)data_ov068_0226fae8;
        data_ov068_02270dbc[4] = *(Fn_2261c38 *)data_ov068_0226fb28;
        data_ov068_02270c40 = gv_ | 1;
    }
    if (unk_1c < 5) {
        (this->*data_ov068_02270dbc[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_02261900::func_ov068_02261b90(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    func_ov068_02265994(o);
    if (VillagerTalk_hasPartner(o) != 0 || *(s32 *)((u8 *)o + 0xa08) != 3 || *(u8 *)((u8 *)o + 0xa00) != 0) {
        unk_1c = 1;
    } else {
        s32 t = Unk_020d77a4_getAngleToPlayer(o, *(u8 *)((u8 *)o + 0x560));
        func_020196b4((u8 *)o + 0x564, 3, 2, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
        X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        unk_1c = 0;
    }
    return TRUE;
}

void Unk_ov068_02261900::func_ov068_02261b4c(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 2, data_020c6cc8);
        unk_1c = 1;
    }
}

s32 Unk_ov068_02261900::func_ov068_02261ae8(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    u32 gv_ = data_ov068_02270c4c;
    if ((gv_ & 1) == 0) {
        data_ov068_02270c7c[0] = *(Fn_2261ae8 *)data_ov068_0226f808;
        data_ov068_02270c4c = gv_ | 1;
    }
    if (unk_1c < 1) {
        (this->*data_ov068_02270c7c[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_02261900::func_ov068_02261ab8(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    func_ov068_02265994(o);
    func_02019614((u8 *)o + 0x564, 2, data_020c6cc8);
    VillagerActor_setFlag834(o);
    return TRUE;
}

s32 Unk_ov068_02261900::func_ov068_02261ab4(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    return 0;
}

BOOL Unk_ov068_02261900::func_ov068_02261a2c(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    s32 t = Unk_020d77a4_getAngleToPlayer(o, 4);
    func_ov068_02265994(o);
    func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    VillagerActor_clearFlag834(o);
    VillagerMood_enableEffects((u8 *)o + 0x838);
    return TRUE;
}

void Unk_ov068_02261900::func_ov068_022619e8(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        unk_1c = 1;
    }
}

void Unk_ov068_02261900::func_ov068_0226196c(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (X_func_ov068_0225f83c((u8 *)o + 0x9f0) == 0) {
        unk_1c = 2;
        func_ov068_022656a8(this, o, 0);
    } else if (*(u16 *)((u8 *)o + 0xa02) >= data_ov068_0226f0e4) {
        X_func_ov068_0225f838((u8 *)o + 0x9f0, 0);
        func_ov068_022656a8(this, o, 0x15);
    } else if (func_ov068_02264aa0(this, o) != 0) {
        X_func_ov068_0225f838((u8 *)o + 0x9f0, 0);
        func_ov068_022656a8(this, o, 0x13);
    }
}

s32 Unk_ov068_02261900::func_ov068_02261900(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    u32 gv_ = data_ov068_02270c34;
    if ((gv_ & 1) == 0) {
        data_ov068_02270cbc[0] = *(Fn_2261900 *)data_ov068_0226f920;
        data_ov068_02270cbc[1] = *(Fn_2261900 *)data_ov068_0226f840;
        data_ov068_02270c34 = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270cbc[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_0226179c::func_ov068_022617b8(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    void *g = data_021c47c4;
    u16 s[2];
    s32 a = 0, b = 0, c = 0, d = 0;
    if (g != 0) {
        s[0] = 0x5014;
        s[1] = 0x501a;
        if (func_0204ea88(g, &a, &b, &c, &d, &s[0], &s[1], 1, 0) != 0) {
            Unk_ov068_02260f90_V3 q, p;
            p.x = 0;
            p.y = 0;
            p.z = 0;
            func_0204ed70(&p, a, b, c, d);
            q.x = p.x;
            q.y = p.y;
            q.z = p.z;
            q.x -= 0x2000;
            q.z += 0x8000;
            q.y = 0;
            Unk_ov068_02260f90_V3 *pv = (Unk_ov068_02260f90_V3 *)((u8 *)o + 0x5c);
            *pv = q;
            Unk_ov068_02260f90_V3 *pw = (Unk_ov068_02260f90_V3 *)((u8 *)o + 0x68);
            *pw = *pv;
            *(s16 *)((u8 *)o + 0x8e) = Math_AngleXZ(&q, &p);
            *(s16 *)((u8 *)o + 0x94) = *(s16 *)((u8 *)o + 0x8e);
            func_0201a99c((u8 *)o + 0x350, *(s16 *)((u8 *)o + 0x8e));
        }
    }
    *(s32 *)((u8 *)o + 0xa08) = 0;
    func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    func_02034dd0(0x12, 0xf, 0);
    func_0207824c(-1);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    func_0203d948();
    return TRUE;
}

s32 Unk_ov068_0226179c::func_ov068_0226179c(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    TalkRequest_AddPlayerTalk6(o, 0);
    PlayerActor_SetSlotFlag(0x1d, 4);
    return 0;
}

BOOL Unk_ov068_02261574::func_ov068_02261714(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    void *p = func_02015aac((u8 *)o + 0x680);
    s32 v = 0;
    if (p != 0) {
        v = Unk_020d77a4_getAngleTo(o, p);
    }
    func_020135c4((u8 *)o + 0x558);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    func_020141b4((u8 *)o + 0x618, 0, v, 1);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    unk_1c = 0;
    return TRUE;
}

void Unk_ov068_02261574::func_ov068_022616c4(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (func_02014220((u8 *)o + 0x618) == 0) {
        Camera_SetModeDefault();
        func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        unk_1c = 1;
    }
}

void Unk_ov068_02261574::func_ov068_02261644(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        Unk_ov068_02261644_V3 *pv = (Unk_ov068_02261644_V3 *)((u8 *)o + 0x5c);
        Unk_ov068_02261644_V3 vv(*pv);
        vv.x -= 0x2000;
        vv.z += 0x8000;
        func_020196b4((u8 *)o + 0x564, 2, 1, vv.x, vv.z, 0, 0, 0, 0, data_020c6cc8, 0);
        unk_20 = 0xc8;
        unk_1c = 2;
    }
}

void Unk_ov068_02261574::func_ov068_022615f0(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if ((func_020197a8((u8 *)o + 0x564) == 2 && func_02019790((u8 *)o + 0x564) != 0) || unk_20 == 0) {
        TalkRequest_EndTalkWith(o);
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        func_0203d93c();
        unk_1c = 3;
    }
}

s32 Unk_ov068_02261574::func_ov068_02261574(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    u32 gv_ = data_ov068_02270c68;
    if ((gv_ & 1) == 0) {
        data_ov068_02270d6c[0] = *(Fn_2261574 *)data_ov068_0226f860;
        data_ov068_02270d6c[1] = *(Fn_2261574 *)data_ov068_0226f8d0;
        data_ov068_02270d6c[2] = *(Fn_2261574 *)data_ov068_0226f880;
        data_ov068_02270c68 = gv_ | 1;
    }
    if (unk_1c < 3) {
        (this->*data_ov068_02270d6c[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_02261290::func_ov068_02261444(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    u16 pos[2];
    func_0202d864(pos);
    func_ov068_02265994(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    if (Unk_ov068_02261118_InRange(&pos[0])) {
        u16 w = data_020c6cc8;
        func_020195c8((u8 *)o + 0x564, 1, 0xcd, 1, w, 0);
        func_02011ec0((u8 *)o + 0x9b0, o, pos, 0xcd, w);
        func_02011e9c((u8 *)o + 0x9b0, 0x26, w, 1);
        func_02011b98((u8 *)o + 0x9b0, 0x1000);
        *((u8 *)o + 0x9ec) = 0;
        unk_1c = 1;
    } else {
        u16 w = data_020c6cc8;
        func_020195c8((u8 *)o + 0x564, 1, 0xd6, 3, w, 0);
        func_02011ec0((u8 *)o + 0x9b0, o, pos, 0xd6, w);
        func_02011b98((u8 *)o + 0x9b0, 0);
        *((u8 *)o + 0x9ec) = 1;
        unk_1c = 0;
    }
    VillagerActor_setFlag834(o);
    func_02003ddc((u8 *)o + 0x514, 0x4f, 0x7f, 0);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void Unk_ov068_02261290::func_ov068_02261394(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0xd6) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            unk_1c = 2;
            if (func_ov068_02265670(this, o) == 0) {
                func_ov068_022656a8(this, o, 0);
            }
        } else if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) < 8) {
            s32 v = func_02011bb0((u8 *)o + 0x9b0);
            if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 7) {
                func_02015fe0((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0, 7);
            }
            if (v != 0x1000) {
                v += 0x249;
                if (v > 0x1000) {
                    v = 0x1000;
                }
            }
            func_02011b98((u8 *)o + 0x9b0, v);
        }
    }
}

void Unk_ov068_02261290::func_ov068_022612fc(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0xcd) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            func_02015fe0((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0, 7);
            unk_1c = 2;
            if (func_ov068_02265670(this, o) == 0) {
                func_ov068_022656a8(this, o, 0);
            }
        } else if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 7) {
            *((u8 *)o + 0x9ec) = 1;
            func_02003ddc((u8 *)o + 0x514, 0x857, 0x7f, 0);
        }
    }
}

s32 Unk_ov068_02261290::func_ov068_02261290(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    u32 gv_ = data_ov068_02270c74;
    if ((gv_ & 1) == 0) {
        data_ov068_02270cec[0] = *(Fn_2261290 *)data_ov068_0226f8d8;
        data_ov068_02270cec[1] = *(Fn_2261290 *)data_ov068_0226f900;
        data_ov068_02270c74 = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270cec[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_02260f90::func_ov068_02261118(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    u16 pos[2];
    func_0202d864(pos);
    func_ov068_02265994(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    if (Unk_ov068_02261118_InRange(&pos[0])) {
        u16 w = data_020c6cc8;
        func_020195c8((u8 *)o + 0x564, 1, 0xcd, 3, w, 0);
        func_02011ec0((u8 *)o + 0x9b0, o, pos, 0xcd, w);
        func_02011e9c((u8 *)o + 0x9b0, 0x26, 1, 3);
        void *p = func_02011b7c((u8 *)o + 0x9b0);
        if (p != 0) {
            u32 bits = (*(u32 *)((u8 *)p + 0xa0) << 4) >> 16;
            AnimFrameCtrl_setup((u8 *)p + 0x9c, bits, 3, 0x1000, (u16)(bits - 1));
        }
        func_02011b98((u8 *)o + 0x9b0, 0x1000);
        func_02003ddc((u8 *)o + 0x514, 0x858, 0x7f, 0);
        unk_1c = 1;
    } else {
        u16 w = data_020c6cc8;
        func_020195c8((u8 *)o + 0x564, 1, 0xd6, 1, w, 0);
        func_02011ec0((u8 *)o + 0x9b0, o, pos, 0xd6, w);
        func_02011b98((u8 *)o + 0x9b0, 0x1000);
        *((u8 *)o + 0x9ec) = 1;
        unk_1c = 0;
    }
    VillagerActor_setFlag834(o);
    func_02003ddc((u8 *)o + 0x514, 0x4f, 0x7f, 0);
    pos[1] = 0xfff1;
    VillagerTalk_setSpeakerStateUnk(o, &pos[1]);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void Unk_ov068_02260f90::func_ov068_02261084(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0xd6) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            u16 t[1];
            t[0] = 0xfff1;
            func_02011ec0((u8 *)o + 0x9b0, o, t, 0, 3);
            unk_1c = 2;
            if (func_ov068_02265670(this, o) == 0) {
                func_ov068_022656a8(this, o, 0);
            }
        } else {
            s32 v = func_02011bb0((u8 *)o + 0x9b0);
            if (v != 0) {
                v -= 0x249;
                if (v < 0) {
                    v = 0;
                }
            }
            func_02011b98((u8 *)o + 0x9b0, v);
        }
    }
}

void Unk_ov068_02260f90::func_ov068_02260ffc(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0xcd) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            unk_1c = 2;
            if (func_ov068_02265670(this, o) == 0) {
                func_ov068_022656a8(this, o, 0);
            }
        } else if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 5) {
            u16 t[1];
            t[0] = 0xfff1;
            func_02011ec0((u8 *)o + 0x9b0, o, t, 0, 3);
            *((u8 *)o + 0x9ec) = 0;
        }
    }
}

s32 Unk_ov068_02260f90::func_ov068_02260f90(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    u32 gv_ = data_ov068_02270c64;
    if ((gv_ & 1) == 0) {
        data_ov068_02270d0c[0] = *(Fn_2260f90 *)data_ov068_0226f978;
        data_ov068_02270d0c[1] = *(Fn_2260f90 *)data_ov068_0226f9a0;
        data_ov068_02270c64 = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270d0c[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_0225fd54::func_ov068_02260ed4(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    func_ov068_02265994(o);
    u32 t = data_020c6cc8;
    func_020195c8((u8 *)o + 0x564, 1, 0x127, 0, t, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    func_02011d4c((u8 *)o + 0x9b0, t, 0);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    VillagerActor_setFlag834(o);
    func_020135bc((u8 *)o + 0x558);
    func_02003ddc((u8 *)o + 0x514, 0x7ee, 0x7f, 0);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

namespace ns_022605f4 {
extern "C" {
extern "C" void func_ov068_02260e64(s32 *p, s32 target, s32 a, s32 spd, s32 min) {
    s32 cur = *p;
    if (cur != target) {
        s32 d = target - cur;
        s32 ad;
        if (d < 0) {
            ad = -d;
        } else {
            ad = d;
        }
        if (ad < min) {
            *p = target;
        } else {
            s32 q = func_01ffcb0c(d, a);
            s32 aq;
            if (q < 0) {
                aq = -q;
            } else {
                aq = q;
            }
            if (aq > spd) {
                if (q >= 0) {
                    *p = *p + spd;
                } else {
                    *p = *p - spd;
                }
            } else if (aq < min) {
                if (q >= 0) {
                    *p = *p + min;
                } else {
                    *p = *p - min;
                }
            } else {
                *p = *p + q;
            }
        }
    }
}
}
}

void Unk_ov068_0225fd54::func_ov068_02260dcc(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x127) {
        Unk_ov068_02260780_Vec *pp = &((Unk_ov068_02260780_Own *)o)->unk_5c;
        Unk_ov068_02260780_Vec loc;
        func_0204edd8(&loc, pp);
        func_ov068_02260e64(&pp->x, loc.x, 0xe66, 0x1ec, 0x31);
        func_ov068_02260e64(&pp->z, loc.z, 0xe66, 0x1ec, 0x31);
        *(u8 *)((u8 *)o + 0x19c) = 1;
        if (pp->x == loc.x && pp->z == loc.z) {
            if (AnimFrameCtrl_isFinished((u8 *)o + 0x188) != 0) {
                func_ov068_02260cdc(o);
            } else {
                unk_1c = 1;
            }
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_02260cdc(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x127) {
        if (AnimFrameCtrl_isFinished((u8 *)o + 0x188) != 0) {
            u32 t = data_020c6cc8;
            func_020195c8((u8 *)o + 0x564, 1, 0x128, 1, t, 0);
            Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
            Unk_ov068_02260780_Vec *pv = &ow->unk_5c;
            Unk_ov068_02260780_Vec v;
            v.x = ow->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            u32 obj[16];
            func_020339bc(obj, &v, 0, 0);
            s32 r = obj[13];
            Unk_ov068_02260780_Vec v2;
            v2.x = v.x;
            v2.y = v.y;
            v2.z = v.z;
            func_ov003_02219bf0(0, &v2);
            if (r == 0x13) {
                func_020902b0(0x8f, &v, 0, 0);
            } else {
                func_020902b0(0x8e, &v, 0, 0);
            }
            func_02003ddc((u8 *)o + 0x514, 0x7e8, 0x7f, 0);
            func_02011cf4((u8 *)o + 0x9b0, t, 1);
            func_02015fe0((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0x128, 3);
            unk_1c = 2;
            func_02033988(obj);
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_02260c14(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x128) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            unk_30 = 0x1400;
            u32 t = data_020c6cc8;
            func_020195c8((u8 *)o + 0x564, 1, 0x129, 0, t, 0);
            *(s32 *)((u8 *)o + 0x198) = unk_30;
            func_02015ec4((u8 *)o + 0x334, 1);
            func_02011c9c((u8 *)o + 0x9b0, t, 0);
            func_02011b60((u8 *)o + 0x9b0, unk_30);
            unk_2c = 0x64;
            Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
            Unk_ov068_02260780_Vec *pv = &ow->unk_5c;
            Unk_ov068_02260780_Vec v;
            v.x = ow->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            *(s32 *)((u8 *)o + 0x9fc) = func_02090330(0x4c, &v, 0, 0);
            *(u8 *)((u8 *)o + 0xa00) = 1;
            VillagerActor_clearFlag834(o);
            unk_1c = 3;
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_02260a64(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x129) {
        if (unk_2c == 0) {
            func_02015ec4((u8 *)o + 0x334, 0);
            VillagerActor_setFlag834(o);
            *(u8 *)((u8 *)o + 0xa00) = 0;
            if (*(s32 *)((u8 *)o + 0x9fc) != -1) {
                func_020902f8(*(s32 *)((u8 *)o + 0x9fc));
                *(s32 *)((u8 *)o + 0x9fc) = -1;
            }
            u16 pos[2];
            func_0202d864(pos, o);
            BOOL k = FALSE;
            u32 v0 = pos[0];
            if (*(volatile u16 *)&pos[0] >= 0x1376 && v0 <= 0x1376) {
                k = TRUE;
            }
            if (k || (v0 >= 0x1377 && v0 <= 0x1377) || (v0 >= 0x1380 && v0 <= 0x139f) ||
                (v0 >= 0x1374 && v0 <= 0x1374) || (v0 >= 0x1375 && v0 <= 0x1375)) {
                u32 t = data_020c6cc8;
                func_020195c8((u8 *)o + 0x564, 1, 0x12b, 1, t, 0);
                func_02011c44((u8 *)o + 0x9b0, t, 0);
            } else {
                func_020195c8((u8 *)o + 0x564, 1, 0x12a, 1, data_020c6cc8, 0);
            }
            Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
            Unk_ov068_02260780_Vec *pv = &ow->unk_5c;
            Unk_ov068_02260780_Vec v;
            v.x = ow->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            u32 obj[16];
            func_020339bc(obj, &v, 0, 0);
            s32 r = obj[13];
            Unk_ov068_02260780_Vec v2;
            v2.x = v.x;
            v2.y = v.y;
            v2.z = v.z;
            func_ov003_0221950c(0, &v2);
            if (r == 0x13) {
                func_020902b0(0x91, &v, 0, 0);
            } else {
                func_020902b0(0x90, &v, 0, 0);
            }
            func_02003ddc((u8 *)o + 0x514, 0x7e9, 0x7f, 0);
            unk_1c = 4;
            func_02033988(obj);
        } else {
            *(s32 *)((u8 *)o + 0x198) = unk_30;
            if (*(s32 *)((u8 *)o + 0x9fc) != -1) {
                func_020902d4(*(s32 *)((u8 *)o + 0x9fc), (u8 *)o + 0x5c, 0, 0);
            }
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_022609e0(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x12b || func_02015e48((u8 *)o + 0x334, 0) == 0x12a) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            *(u32 *)((u8 *)o + 0x4e8) &= ~2;
            unk_1c = 5;
            func_02015fe0((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0, 3);
            func_ov068_022656a8(this, o, 0);
        }
    }
}

s32 Unk_ov068_0225fd54::func_ov068_02260944(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    u32 gv_ = data_ov068_02270c2c;
    if ((gv_ & 1) == 0) {
        data_ov068_02270de4[0] = *(Fn_2260944 *)data_ov068_0226f9e0;
        data_ov068_02270de4[1] = *(Fn_2260944 *)data_ov068_0226fa10;
        data_ov068_02270de4[2] = *(Fn_2260944 *)data_ov068_0226fa30;
        data_ov068_02270de4[3] = *(Fn_2260944 *)data_ov068_0226fa40;
        data_ov068_02270de4[4] = *(Fn_2260944 *)data_ov068_0226fa58;
        data_ov068_02270c2c = gv_ | 1;
    }
    if (unk_1c < 5) {
        (this->*data_ov068_02270de4[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_0225fd54::func_ov068_02260780(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    func_ov068_02265994(o);
    func_02015ec4((u8 *)o + 0x334, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    func_020135bc((u8 *)o + 0x558);
    VillagerActor_setFlag834(o);
    *(u8 *)((u8 *)o + 0xa00) = 0;
    if (*(s32 *)((u8 *)o + 0x9fc) != -1) {
        func_020902f8(*(s32 *)((u8 *)o + 0x9fc));
        *(s32 *)((u8 *)o + 0x9fc) = -1;
    }
    u16 pos[2];
    func_0202d864(pos, o);
    BOOL k = FALSE;
    u32 v0 = pos[0];
    if (*(volatile u16 *)&pos[0] >= 0x1376 && v0 <= 0x1376) {
        k = TRUE;
    }
    if (k || (v0 >= 0x1377 && v0 <= 0x1377) || (v0 >= 0x1380 && v0 <= 0x139f) ||
        (v0 >= 0x1374 && v0 <= 0x1374) || (v0 >= 0x1375 && v0 <= 0x1375)) {
        u32 t = data_020c6cc8;
        func_020195c8((u8 *)o + 0x564, 1, 0x12b, 1, t, 0);
        func_02011c44((u8 *)o + 0x9b0, t, 0);
    } else {
        func_020195c8((u8 *)o + 0x564, 1, 0x12a, 1, data_020c6cc8, 0);
    }
    Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
    Unk_ov068_02260780_Vec *pv = &ow->unk_5c;
    Unk_ov068_02260780_Vec v;
    v.x = ow->unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    u32 obj[16];
    func_020339bc(obj, &v, 0, 0);
    s32 r = obj[13];
    Unk_ov068_02260780_Vec v2;
    v2.x = v.x;
    v2.y = v.y;
    v2.z = v.z;
    func_ov003_0221950c(0, &v2);
    if (r == 0x13) {
        func_020902b0(0x91, &v, 0, 0);
    } else {
        func_020902b0(0x90, &v, 0, 0);
    }
    func_02003ddc((u8 *)o + 0x514, 0x7e9, 0x7f, 0);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    func_02033988(obj);
    return TRUE;
}

s32 Unk_ov068_0225fd54::func_ov068_0226071c(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    u32 gv_ = data_ov068_02270c38;
    if ((gv_ & 1) == 0) {
        data_ov068_02270c84[0] = *(Fn_226071c *)data_ov068_0226fa78;
        data_ov068_02270c38 = gv_ | 1;
    }
    if (unk_1c < 1) {
        (this->*data_ov068_02270c84[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_0225fd54::func_ov068_022605f4(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    func_ov068_02265994(o);
    func_02015ec4((u8 *)o + 0x334, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    VillagerActor_clearFlag834(o);
    func_020135c4((u8 *)o + 0x558);
    u32 r, t;
    t = data_020c6cc8;
    func_02011dfc((u8 *)o + 0x9b0, t, 0);
    if (unk_3a == 0) {
        unk_38 = 0;
    }
    unk_38 = unk_38 + 1;
    r = 0xeb;
    if (unk_38 >= 3) {
        r = 0xec;
        TalkRequest_AddPlayerTalk6(o, 0);
        *(s32 *)((u8 *)o + 0xa08) = 1;
        func_0203e42c(o);
        unk_38 = 3;
    } else {
        Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
        Unk_ov068_02260780_Vec *pv = &ow->unk_5c;
        Unk_ov068_022605f4_Vec v;
        v.x = ow->unk_5c.x;
        v.y = pv->y;
        v.z = pv->z;
        void *p = func_020951ec(4);
        if (p != 0) {
            s32 d = Unk_020d77a4_getRelativeAngleTo(o, p);
            if (d < 0) {
                d = (s16)-d;
            }
            if (d < data_020c6cc0) {
                r = 0xec;
            }
        }
    }
    func_020195c8((u8 *)o + 0x564, 1, r, 1, t, 0);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void Unk_ov068_0225fd54::func_ov068_0226054c(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0xeb || func_02015e48((u8 *)o + 0x334, 0) == 0xec) {
        if (unk_38 >= 3) {
            TalkRequest_AddPlayerTalk6(o, 0);
        }
        if (func_02019790((u8 *)o + 0x564) != 0) {
            if (unk_38 >= 3) {
                s32 t = Unk_020d77a4_getAngleToPlayer(o, 4);
                func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
                unk_1c = 1;
            } else {
                func_0203e450(o);
                func_ov068_022656a8(this, o, 0);
                unk_3a = 0x4b0;
            }
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_022604fc(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    TalkRequest_AddPlayerTalk6(o, 0);
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        unk_20 = 0x28;
        unk_1c = 2;
    }
}

void Unk_ov068_0225fd54::func_ov068_022604cc(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (unk_20 == 0) {
        unk_3a = 0x4b0;
        func_ov068_022656a8(this, o, 0);
        func_0203e450(o);
    } else {
        TalkRequest_AddPlayerTalk6(o, 0);
    }
}

s32 Unk_ov068_0225fd54::func_ov068_02260450(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    u32 gv_ = data_ov068_02270c58;
    if ((gv_ & 1) == 0) {
        data_ov068_02270d54[0] = *(Fn_2260450 *)data_ov068_0226f810;
        data_ov068_02270d54[1] = *(Fn_2260450 *)data_ov068_0226f828;
        data_ov068_02270d54[2] = *(Fn_2260450 *)data_ov068_0226f850;
        data_ov068_02270c58 = gv_ | 1;
    }
    if (unk_1c < 3) {
        (this->*data_ov068_02270d54[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_0225fd54::func_ov068_02260374(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    func_ov068_02265994(o);
    func_02015ec4((u8 *)o + 0x334, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    VillagerActor_clearFlag834(o);
    func_020135c4((u8 *)o + 0x558);
    s32 t = Unk_020d77a4_getAngleToPlayer(o, 4);
    func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    *(u16 *)((u8 *)o + 0xa02) = 0;
    TalkRequest_AddPlayerTalk6(o, 0);
    *(s32 *)((u8 *)o + 0xa08) = 2;
    func_0203e42c(o);
    unk_1c = 0;
    VillagerMood_disableEffects((u8 *)o + 0x838);
    if ((s32)o->vfunc_64() != 0) {
        func_0207c1e8((s32)o->vfunc_64());
    }
    return TRUE;
}

void Unk_ov068_0225fd54::func_ov068_02260324(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    TalkRequest_AddPlayerTalk6(o, 0);
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        unk_20 = 0x28;
        unk_1c = 1;
    }
}

void Unk_ov068_0225fd54::func_ov068_022602fc(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (unk_20 == 0) {
        func_ov068_022656a8(this, o, 0);
        func_0203e450(o);
    } else {
        TalkRequest_AddPlayerTalk6(o, 0);
    }
}

s32 Unk_ov068_0225fd54::func_ov068_02260290(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    u32 gv_ = data_ov068_02270c6c;
    if ((gv_ & 1) == 0) {
        data_ov068_02270cfc[0] = *(Fn_2260290 *)data_ov068_0226f8a0;
        data_ov068_02270cfc[1] = *(Fn_2260290 *)data_ov068_0226f908;
        data_ov068_02270c6c = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270cfc[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_0225fd54::func_ov068_022601f0(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    func_02013464(o);
    if (func_02015e48((u8 *)o + 0x334, 0) != 0xec || func_02019790((u8 *)o + 0x564) != 0) {
        void *p = func_02015aac((u8 *)o + 0x680);
        s32 v = 0;
        if (p != 0) {
            v = Unk_020d77a4_getAngleTo(o, p);
        }
        X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        func_020141b4((u8 *)o + 0x618, 0, v, 0);
        unk_1c = 1;
    } else {
        unk_1c = 0;
    }
    return TRUE;
}

void Unk_ov068_0225fd54::func_ov068_02260160(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (func_02015e48((u8 *)o + 0x334, 0) != 0xec || func_02019790((u8 *)o + 0x564) != 0) {
        void *p = func_02015aac((u8 *)o + 0x680);
        s32 v = 0;
        if (p != 0) {
            v = Unk_020d77a4_getAngleTo(o, p);
        }
        X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        func_020141b4((u8 *)o + 0x618, 0, v, 0);
        unk_1c = 1;
    }
}

void Unk_ov068_0225fd54::func_ov068_022600e8(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (func_02014220((u8 *)o + 0x618) == 0) {
        func_ov068_02263738(this, o, 4, 1, 1);
        func_0203e450(o);
        TalkRequest_EndTalkWith(o);
        VillagerTalk_setPartner(o, 0);
        func_0201c7ec(o, 0);
        func_ov068_022656a4(this, 0);
        unk_38 = 0;
        unk_3a = 0;
        *(s32 *)((u8 *)o + 0xa08) = 3;
        unk_f4 = 0x4b0;
        unk_1c = 2;
    }
}

void Unk_ov068_0225fd54::func_ov068_022600e4(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;}

s32 Unk_ov068_0225fd54::func_ov068_02260068(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    u32 gv_ = data_ov068_02270c60;
    if ((gv_ & 1) == 0) {
        data_ov068_02270d84[0] = *(Fn_2260068 *)data_ov068_0226f9b8;
        data_ov068_02270d84[1] = *(Fn_2260068 *)data_ov068_0226fa18;
        data_ov068_02270d84[2] = *(Fn_2260068 *)data_ov068_0226fa48;
        data_ov068_02270c60 = gv_ | 1;
    }
    if (unk_1c < 3) {
        (this->*data_ov068_02270d84[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_0225fd54::func_ov068_0225fff4(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    void *p = func_02015aac((u8 *)o + 0x680);
    s32 v = 0;
    func_02013464(o);
    if (p != 0) {
        v = Unk_020d77a4_getAngleTo(o, p);
    }
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    func_020141b4((u8 *)o + 0x618, 0, v, 0);
    return TRUE;
}

void Unk_ov068_0225fd54::func_ov068_0225ff88(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (func_02014220((u8 *)o + 0x618) == 0) {
        func_ov068_02263738(this, o, 4, 1, 1);
        func_0203e450(o);
        TalkRequest_EndTalkWith(o);
        VillagerTalk_setPartner(o, 0);
        func_ov068_022656a4(this, 0);
        func_0201c7ec(o, 0);
        *(s32 *)((u8 *)o + 0xa08) = 3;
        unk_f4 = 0x4b0;
        unk_1c = 1;
    }
}

void Unk_ov068_0225fd54::func_ov068_0225ff84(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;}

s32 Unk_ov068_0225fd54::func_ov068_0225ff18(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    u32 gv_ = data_ov068_02270c54;
    if ((gv_ & 1) == 0) {
        data_ov068_02270ccc[0] = *(Fn_225ff18 *)data_ov068_0226fb30;
        data_ov068_02270ccc[1] = *(Fn_225ff18 *)data_ov068_0226f800;
        data_ov068_02270c54 = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270ccc[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_0225fd54::func_ov068_0225fe70(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    func_ov068_02265994(o);
    func_02015ec4((u8 *)o + 0x334, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    VillagerActor_clearFlag834(o);
    func_020135c4((u8 *)o + 0x558);
    s32 t = Unk_020d77a4_getAngleToPlayer(o, 4);
    func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    unk_1c = 0;
    unk_e0 = 1;
    return TRUE;
}

void Unk_ov068_0225fd54::func_ov068_0225fe28(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019638((u8 *)o + 0x564, 1, 0x1a, data_020c6cc8);
        unk_20 = 0x14;
        unk_1c = 1;
    }
}

void Unk_ov068_0225fd54::func_ov068_0225fdc0(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (func_020197a8((u8 *)o + 0x564) == 8 && func_020197a0((u8 *)o + 0x564) == 0x1a && unk_20 == 0 &&
        func_ov068_02264a64(this) == 0 && ((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        func_ov068_022656a8(this, o, 0);
    }
}

s32 Unk_ov068_0225fd54::func_ov068_0225fd54(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    u32 gv_ = data_ov068_02270c48;
    if ((gv_ & 1) == 0) {
        data_ov068_02270d2c[0] = *(Fn_225fd54 *)data_ov068_0226f938;
        data_ov068_02270d2c[1] = *(Fn_225fd54 *)data_ov068_0226f9f0;
        data_ov068_02270c48 = gv_ | 1;
    }
    if (unk_1c < 2) {
        (this->*data_ov068_02270d2c[unk_1c])(o);
    }
    return 0;
}

namespace ns_0225fc60 {
extern "C" {
BOOL _ZN18Unk_ov068_0226fb808vfunc_48Ev(u8 *o) {
    if (func_02014220(o + 0x618) != 0 || VillagerActor_isFlag834(o) != 0) {
        return FALSE;
    }
    if (o[0xa00] != 0) {
        void *p = func_020951ec(4);
        if (p != 0) {
            s32 v = Unk_020d77a4_getRelativeAngleTo(o, p);
            if (v < 0) {
                v = (s16)-v;
            }
            if (v > data_020c6cc0) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
}
}

namespace ns_0225fc60 {
extern "C" {
BOOL _ZN18Unk_ov068_0226fb8028acceptsInteractionOutOfRangeEPv(Unk_ov068_Owner *o, s32 x) {
    s16 k = data_ov068_02270c20;
    u32 v = func_ov068_0226594c(o);
    BOOL r = FALSE;
    if (o->vfunc_48(x) != 0 && VillagerActor_isFlag834(o) == 0 && func_ov068_022655a4((u8 *)o + 0x8b4, r) != 0 && v <= 1 &&
        Unk_020d77a4_isNear(o, x, 0x5000) == 0 && Unk_020d77a4_isNear(o, x, 0xe000) != 0 && Character_isInFacingArcOf(o, x, (s16)-k, k) != 0) {
        r = TRUE;
    }
    return r;
}
}
}

void Unk_ov068_0226fb80::vfunc_4c(u32 idx, u32 v) {
    using namespace ns_0225f1a0;
    switch (idx) {
    case 3:
        unk_560 = v;
        if (VillagerTalk_hasPartner(this)) {
            unk_9f8 = 1;
            unk_9f4 = (Unk_ov068_0225f904_Menu *)VillagerTalk_getPartner(this);
            unk_9f4->vfunc_8c();
        } else if (func_ov068_022655a4(&unk_8b4, 7)) {
            unk_9f8 = 2;
        } else if (unk_a00) {
            unk_9f8 = 0xe;
        } else {
            switch (func_0201c784(this)) {
            case 1:
                unk_9f8 = 3;
                break;
            case 2:
                unk_9f8 = 4;
                break;
            case 0:
                unk_9f8 = 5;
                break;
            case 3:
                unk_9f8 = 6;
                break;
            case 4:
                unk_9f8 = 7;
                break;
            case 5:
                unk_9f8 = 8;
                break;
            case 6:
                unk_9f8 = 9;
                break;
            case 7:
                unk_9f8 = 10;
                break;
            case 8:
            case 9:
                unk_9f8 = 11;
                break;
            default:
                unk_9f8 = 0;
                break;
            }
        }
        if (unk_9f8 == 0) {
            if (func_ov068_02265918(this)) {
                func_020784a8();
            }
        }
        func_ov068_022656a8(&unk_8b4, this, 8);
        break;
    case 1: {
        s32 r6 = 5;
        switch (unk_a08) {
        case 0:
            r6 = 0xe;
            unk_9f8 = 0xd;
            break;
        case 1:
            r6 = 0x14;
            unk_9f8 = 0xf;
            break;
        case 2:
            r6 = 0x16;
            unk_9f8 = 0x10;
            break;
        }
        VillagerTalk_begin((&unk_680), this, unk_9f8);
        func_02015ab0((&unk_680), Unk_020d77a4_getPlayerActor(this, 4));
        func_ov068_022656a8(&unk_8b4, this, r6);
        break;
    }
    case 0:
        unk_560 = v;
        VillagerTalk_begin((&unk_680), this, unk_9f8);
        func_02015ab0((&unk_680), Unk_020d77a4_getPlayerActor(this, 4));
        if (unk_9f4) {
            func_02015a80((&unk_680), unk_9f4);
        }
        func_ov068_022656a8(&unk_8b4, this, 5);
        if (unk_9f8 == 2) {
            if (vfunc_64()) {
                func_0207c20c(vfunc_64());
            }
        }
        unk_9f4 = NULL;
        unk_9f8 = 0;
        break;
    case 5:
        unk_560 = v;
        func_ov068_02265698(&unk_8b4);
        func_ov068_022656a8(&unk_8b4, this, 6);
        break;
    case 8: {
        s32 t;
        void *q;
        s32 sv;
        if (unk_a08 == 0) {
            t = func_0207e278(vfunc_64());
            q = VillagerDataItemView_getHousePos(vfunc_64());
            func_0204ed8c(&unk_5c, ((u8 *)q)[0], ((u8 *)q)[1]);
            { Unk_ov068_0225f23c_Vec *sp = &unk_5c; Unk_ov068_0225f23c_Vec *d = &unk_68; d->x = sp->x; d->y = sp->y; d->z = sp->z; }
            sv = func_02078294();
            if (sv == func_0207e334(vfunc_64()) || (u32)(t - 3) <= 4) {
                func_ov068_022656a8(&unk_8b4, this, 0xc);
            } else {
                func_ov068_022656a8(&unk_8b4, this, 3);
            }
            unk_a08 = 3;
        } else if (unk_a08 == 2) {
            func_ov068_022656a8(&unk_8b4, this, 0);
            unk_a08 = 3;
        } else if (unk_a00) {
            func_ov068_022656a8(&unk_8b4, this, 0x12);
        } else {
            if (func_ov068_02265670(&unk_8b4, this) == 0) {
                func_ov068_022656a8(&unk_8b4, this, 0);
            }
            if (func_ov068_02265918(this)) {
                func_02078498();
            }
        }
        func_0203e450(this);
        if (vfunc_64()) {
            func_0207c190(vfunc_64(), -3);
        }
        break;
    }
    case 4:
        if (unk_a00) {
            func_ov068_022656a8(&unk_8b4, this, 0x12);
        } else {
            if (func_ov068_02265670(&unk_8b4, this) == 0) {
                func_ov068_022656a8(&unk_8b4, this, 0);
            }
        }
        break;
    }
    func_0201b08c(this, idx, v);
}

void Unk_ov068_0225f838::func_ov068_0225f900() {
    using namespace ns_0225f1a0;
}

Unk_ov068_0225f838::~Unk_ov068_0225f838() {
    using namespace ns_0225f1a0;
}

void Unk_ov068_0225f838::func_ov068_0225f8f0() {
    using namespace ns_0225f1a0;
    unk_00 = -1;
    unk_02 = 0;
}

void Unk_ov068_0225f838::func_ov068_0225f858(Unk_ov068_0226fb80 *o) {
    using namespace ns_0225f1a0;
    Unk_ov068_0225f858_Vec buf;
    if (unk_00 > 0) {
        unk_00 = unk_00 - 1;
    }
    if (unk_02 != 0) {
        unk_02 = unk_02 - 1;
    }
    if (unk_00 == 0) {
        buf.a = o->unk_478.x;
        buf.b = o->unk_478.y;
        buf.c = o->unk_478.z;
        func_020902b0(0x81, &buf, 0, 0);
        if (func_0207ce24(o->unk_82c)) {
            unk_00 = func_02063b8c(0xf) + 0xf;
        } else {
            unk_00 = -1;
        }
    } else if (unk_00 == -1) {
        if (func_0207ce24(o->unk_82c)) {
            unk_00 = func_02063b8c(10) + 0xf;
        }
    }
}

void Unk_ov068_0225f838::func_ov068_0225f840(Unk_ov068_0226fb80 *o) {
    using namespace ns_0225f1a0;
    unk_00 = -1;
    func_0207ce00(o->unk_82c);
}

u32 Unk_ov068_0225f838::func_ov068_0225f83c() {
    using namespace ns_0225f1a0;
    return unk_02;
}

void Unk_ov068_0225f838::func_ov068_0225f838(u32 v) {
    using namespace ns_0225f1a0;
    unk_02 = v;
}

BOOL Unk_ov068_0226fb80::vfunc_b4() {
    using namespace ns_0225f1a0;
    void *p = (void *)func_ov068_02265f58();
    if (PlayerData_GetCurrent()) {
        p = (void *)func_ov068_02265f58();
    }
    if ((p == NULL && Unk_020d77a4_isPlayerNear(this, 0x6000, 4) == 0) || (p != NULL && func_02080f94(p) != 0)) {
        if (func_02014220(unk_618) == 0) {
            if (func_ov068_022655c0(&unk_8b4) != 0) {
                if (VillagerTalk_hasPartner(this) == 0) {
                    if (func_0201c784(this) == 0xb) {
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov068_0226fb80::vfunc_b8(u32 idx) {
    using namespace ns_0225f1a0;
    if (vfunc_b4()) {
        VillagerTalk_setPartner(this, idx);
        func_0201c7ec(this, 1);
        func_ov068_02265698(&unk_8b4);
        func_ov068_022656a8(&unk_8b4, this, 9);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov068_0226fb80::vfunc_bc() {
    using namespace ns_0225f1a0;
    if (VillagerTalk_hasPartner(this)) {
        func_ov068_02265994(this);
        if (func_ov068_02265670(&unk_8b4, this) == 0) {
            func_ov068_022656a8(&unk_8b4, this, 0);
        }
        func_ov068_022655b4(&unk_8b4);
        VillagerTalk_setPartner(this, 0);
        func_0201c7ec(this, 0);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_0226fb80::vfunc_8c() {
    using namespace ns_0225f1a0;
    func_ov068_022656a8(&unk_8b4, this, 10);
}

void Unk_ov068_0226fb80::vfunc_90() {
    using namespace ns_0225f1a0;
    VillagerMood_requestApply(unk_838);
    if (func_ov068_02265670(&unk_8b4, this) == 0) {
        func_ov068_022656a8(&unk_8b4, this, 0);
    }
    VillagerTalk_setPartner(this, 0);
    func_0201c7ec(this, 0);
    func_ov068_022655b4(&unk_8b4);
}

void Unk_ov068_0225f23c::func_ov068_0225f6b0() {
    using namespace ns_0225f1a0;
}

Unk_ov068_0225f23c::~Unk_ov068_0225f23c() {
    using namespace ns_0225f1a0;
}

void Unk_ov068_0225f23c::func_ov068_0225f670(Unk_ov068_0226fb80 *o) {
    using namespace ns_0225f1a0;
    func_ov068_0225f5f4(o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    unk_04 = 2;
    unk_0c = -1;
    unk_10 = -1;
}

void Unk_ov068_0225f23c::func_ov068_0225f630(Unk_ov068_0226fb80 *o) {
    using namespace ns_0225f1a0;
    unk_00 = 0;
    func_ov068_0225f5a4(o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    unk_04 = 2;
    unk_0c = -1;
    unk_10 = -1;
    unk_14 = 0;
}

void Unk_ov068_0225f23c::func_ov068_0225f5f4(Unk_ov068_0226fb80 *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e) {
    using namespace ns_0225f1a0;
    unk_00 = 1;
    func_ov068_0225f5a4(o, idx, a, b, v, c, d, e);
    unk_04 = 3;
    unk_0c = -1;
    unk_10 = -1;
    unk_14 = 0;
}

void Unk_ov068_0225f23c::func_ov068_0225f5dc() {
    using namespace ns_0225f1a0;
    unk_14++;
    if (unk_14 > 0x960) {
        unk_14 = 0x960;
    }
}

void Unk_ov068_0225f23c::func_ov068_0225f5a4(Unk_ov068_0226fb80 *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e) {
    using namespace ns_0225f1a0;
    func_0201a6c0(o->unk_3b0, idx, a, b, v, c, d, e);
    unk_08 = idx;
}

s32 Unk_ov068_0225f23c::func_ov068_0225f56c(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    using namespace ns_0225f1a0;
    s32 t = func_ov003_02227e08(v, i);
    if (t != -1 && func_020e9650(p, v) < lim) {
        return t;
    }
    return -1;
}

s32 Unk_ov068_0225f23c::func_ov068_0225f52c(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    using namespace ns_0225f1a0;
    s32 i;
    s32 t;
    for (i = 0; i < 8; i++) {
        t = func_ov068_0225f56c(v, i, p, lim);
        if (t != -1) {
            *out = i;
            return t;
        }
    }
    return -1;
}

BOOL Unk_ov068_0225f23c::func_ov068_0225f4fc(u32 a, s32 b) {
    using namespace ns_0225f1a0;
    u8 buf[1];
    if (b != -1) {
        s32 t;
        buf[0] = 0;
        t = func_ov003_02227ed4(buf, a);
        if (t == b) {
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov068_0225f23c::func_ov068_0225f4c4(Unk_ov068_0226fb80 *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v) {
    using namespace ns_0225f1a0;
    unk_0c = a;
    unk_10 = b;
    func_ov068_0225f5a4(o, 3, 0, 0, v, 4, data_020c6d1c, 1);
    unk_04 = 0;
    unk_14 = 0;
}

void Unk_ov068_0225f23c::func_ov068_0225f460(Unk_ov068_0226fb80 *o) {
    using namespace ns_0225f1a0;
    Unk_ov068_0225f23c_Vec buf;
    if (func_ov068_0225f4fc(unk_0c, unk_10)) {
        s32 r = func_ov068_0225f56c(&buf, unk_0c, &o->unk_5c, o->unk_40c);
        if (r != -1 && r == unk_10) {
            func_0201a720(o->unk_3b0, &buf);
        } else {
            func_ov068_0225f630(o);
        }
    } else {
        func_ov068_0225f630(o);
    }
}

BOOL Unk_ov068_0225f23c::func_ov068_0225f430(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    using namespace ns_0225f1a0;
    if (func_ov003_0221ffb8(v, i) && func_020e9650(p, v) < lim) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov068_0225f23c::func_ov068_0225f3e4(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    using namespace ns_0225f1a0;
    s32 i;
    s32 t;
    for (i = 0; i < 6; i++) {
        t = func_ov003_0221ffe8(i);
        if (t != -1) {
            if (func_ov068_0225f430(v, i, p, lim)) {
                *out = i;
                return t;
            }
        }
    }
    return -1;
}

BOOL Unk_ov068_0225f23c::func_ov068_0225f3c0(s32 a, s32 b) {
    using namespace ns_0225f1a0;
    s32 t = func_ov003_0221ffe8(a);
    if (t != -1 && b == t) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_0225f23c::func_ov068_0225f384(Unk_ov068_0226fb80 *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v) {
    using namespace ns_0225f1a0;
    unk_0c = a;
    unk_10 = b;
    func_ov068_0225f5a4(o, 3, 0, 0, v, 4, data_020c6d1c, 1);
    unk_04 = 1;
    unk_14 = 0;
}

void Unk_ov068_0225f23c::func_ov068_0225f328(Unk_ov068_0226fb80 *o) {
    using namespace ns_0225f1a0;
    Unk_ov068_0225f23c_Vec buf;
    if (func_ov068_0225f3c0(unk_0c, unk_10)) {
        if (func_ov068_0225f430(&buf, unk_0c, &o->unk_5c, o->unk_40c)) {
            func_0201a720(o->unk_3b0, &buf);
        } else {
            func_ov068_0225f630(o);
        }
    } else {
        func_ov068_0225f630(o);
    }
}

void Unk_ov068_0225f23c::func_ov068_0225f23c(Unk_ov068_0226fb80 *o) {
    using namespace ns_0225f1a0;
    s32 idx;
    Unk_ov068_0225f23c_Vec buf;
    if (unk_00 == 0) {
        u8 a = unk_08;
        u8 b = o->unk_3b0[0];
        if (a == b) {
            switch (a) {
            case 1:
                if (func_ov068_0226594c(o) <= 1) {
                    if (func_0201a5d0(o->unk_3b0, o) == 0) {
                        s32 r;
                        idx = -1;
                        r = func_ov068_0225f52c(&buf, &idx, &o->unk_5c, 0x5000);
                        if (r != -1) {
                            func_ov068_0225f4c4(o, idx, r, &buf);
                        } else {
                            idx = -1;
                            r = func_ov068_0225f3e4(&buf, &idx, &o->unk_5c, 0x5000);
                            if (r != -1) {
                                func_ov068_0225f384(o, idx, r, &buf);
                            }
                        }
                    }
                }
                break;
            case 3:
                if (func_0201a5d0(o->unk_3b0, o)) {
                    func_ov068_0225f5dc();
                }
                switch (unk_04) {
                case 0:
                    func_ov068_0225f460(o);
                    break;
                case 1:
                    func_ov068_0225f328(o);
                    break;
                default:
                    func_ov068_0225f630(o);
                    break;
                }
                break;
            }
        } else {
            unk_00 = 1;
            unk_04 = 3;
        }
    }
}
