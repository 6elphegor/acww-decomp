// mwcc-version: 1.2/base
// ov068 TU01 (.text 0x0225f1a0-0x0226647c): owner actor FieldVillager (vtable 0x0226fb78) and its state classes, 214 functions of 12 old files.
// Layout of this file: classes (declared once, global) / per-old-file prototype+extern views in namespaces ns_<file> (function bodies start with
// `using namespace ns_<file>;`) / data definitions in namespace nsD (creation order, see below) / functions in descending address order.
// X_func_ov068_<addr> = free-call names (explicit this) of this unit's own methods (mangled symbols).
// DATA: the function-local static ptmf tables of the old files (guard + table + @N constants) are written as named globals
// data_ov068_<addr> (the guard idiom `gv = guard; if (!(gv & 1)) { copy constants; guard = gv | 1; }` compiles to the identical code);
// with every object named the heapsort order of .data/.bss/.rodata is set by the order of the definitions in nsD (solved by inverting the heapsort),
// the registration entry sFieldVillagerProfile is defined inside ns_02265d34 (next to the factory it points to), the vtable comes last.
#include "types.h"
#include "gfx/Unk_ov068_0226647c_Cam.h"
#include "actor/Unk_ov068_SceneEntry.h"
#include "player/HeldToolModel.h"
#include "sys/ProcBase.h"
#include "talk/MsgString11.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/EncodedString10.h"
#include "actor/NpcActor.h"
#include "actor/VillagerActor.h"
#define X_func_ov068_0225f5f4 _ZN17FieldVillagerLook17setLookModeLockedEP13FieldVillagerjiiPviih
#define X_func_ov068_0225f630 _ZN17FieldVillagerLook9resetLookEP13FieldVillager
#define X_func_ov068_0225f670 _ZN17FieldVillagerLook4initEP13FieldVillager
#define X_func_ov068_0225f6b0 _ZN17FieldVillagerLook9constructEv
#define X_func_ov068_0225f838 _ZN20FieldVillagerFxTimer12setHoldCountEj
#define X_func_ov068_0225f83c _ZN20FieldVillagerFxTimer12getHoldCountEv
#define X_func_ov068_0225f840 _ZN20FieldVillagerFxTimer4stopEP13FieldVillager
#define X_func_ov068_0225f8f0 _ZN20FieldVillagerFxTimer5clearEv
#define X_func_ov068_0225f900 _ZN20FieldVillagerFxTimer9constructEv
#define X_func_ov068_0226581c _ZN15FieldVillagerAi6initAiEv
#define X_func_ov068_02265dc8 _ZN13FieldVillager14chooseActivityEv
#define X_func_ov068_02265e6c _ZN13FieldVillager16updateStareTimerEv
#define X_func_ov068_02265f58 _ZN13FieldVillager15getPlayerMemoryEv
#define X_func_ov068_02265fb4 _ZN13FieldVillager19attachHeldItemModelEv
#define VillagerId_isValid _ZN10VillagerId7isValidEv
#define func_02011b60 _ZN13HeldToolModel13func_02011b60Ej
#define func_02011b7c _ZN13HeldToolModel13func_02011b7cEv
#define HeldToolModel_setAnimSpeed _ZN13HeldToolModel12setAnimSpeedEj
#define HeldToolModel_getAnimSpeed _ZN13HeldToolModel12getAnimSpeedEv
#define HeldToolModel_draw _ZN13HeldToolModel4drawEP12Unk_02006d14
#define HeldToolModel_release _ZN13HeldToolModel7releaseEv
#define func_02011c44 _ZN13HeldToolModel13func_02011c44Ejj
#define func_02011c9c _ZN13HeldToolModel13func_02011c9cEjj
#define func_02011cf4 _ZN13HeldToolModel13func_02011cf4Ejj
#define func_02011d4c _ZN13HeldToolModel13func_02011d4cEjj
#define HeldToolModel_playIdleAnim _ZN13HeldToolModel12playIdleAnimEjj
#define HeldToolModel_playAnim _ZN13HeldToolModel8playAnimEjjj
#define HeldToolModel_attach _ZN13HeldToolModel6attachEjPtjt
#define HeldToolModel_load _ZN13HeldToolModel4loadEj
#define HeldToolModel_init _ZN13HeldToolModel4initEv
#define Unk_02012810_runStep _ZN12Unk_020128107runStepEP16Unk_02012810_Vec
#define Unk_02012810_getStage _ZN12Unk_020128108getStageEv
#define VillagerRoute_isActive _ZN13VillagerRoute8isActiveEv
#define VillagerRoute_setStepMode _ZN13VillagerRoute11setStepModeEj
#define VillagerRoute_start _ZN13VillagerRoute5startEjjjj
#define VillagerRoute_reset _ZN13VillagerRoute5resetEv
#define VillagerRoute_resetTarget _ZN13VillagerRoute11resetTargetEv
#define Unk_020133cc_Player_resetLastTaughtEmotion _ZN19Unk_020133cc_Player22resetLastTaughtEmotionEv
#define Unk_02013474_playFootstepSe _ZN12Unk_0201347414playFootstepSeEP19Unk_020133cc_Player
#define Unk_02013474_disableFootsteps _ZN12Unk_0201347416disableFootstepsEv
#define Unk_02013474_enableFootsteps _ZN12Unk_0201347415enableFootstepsEv
#define NpcTalkCtrl_requestState4 _ZN11NpcTalkCtrl13requestState4Ejish
#define NpcTalkCtrl_requestTalk _ZN11NpcTalkCtrl11requestTalkEhh
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define ActorTalkRequest_setPartnerActor _ZN16ActorTalkRequest15setPartnerActorEP18Unk_02015b8c_Scene
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define Unk_02015b8c_getAnimId _ZN12Unk_02015b8c9getAnimIdEj
#define Unk_02015b8c_setAnimSpeedFixed _ZN12Unk_02015b8c17setAnimSpeedFixedEh
#define NpcAnimCtrl_playHoldItemPose _ZN11NpcAnimCtrl16playHoldItemPoseEP16Unk_02015fe0_ObjPtPvt
#define Unk_02016a44_requestAct14 _ZN12Unk_02016a4412requestAct14EiPt
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestEmotion _ZN13NpcActionCtrl14requestEmotionEiht
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getEmotionId _ZN13NpcActionCtrl12getEmotionIdEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcEmotionFx_startEntry _ZN12NpcEmotionFx10startEntryEP15NpcEmotionPhasei
#define Unk_0201a13c_isOnTarget _ZN12Unk_0201a13c10isOnTargetEv
#define NpcLookAt_canSeeTarget _ZN9NpcLookAt12canSeeTargetEP18Unk_0201a334_Scene
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcLookAt_setTargetPos _ZN9NpcLookAt12setTargetPosEP17Unk_0201a334_Vec3
#define NpcMoveCtrl_resetDestination _ZN11NpcMoveCtrl16resetDestinationEv
#define NpcMoveCtrl_hasNextLeg _ZN11NpcMoveCtrl10hasNextLegEv
#define NpcMoveCtrl_getDestination _ZN11NpcMoveCtrl14getDestinationEv
#define NpcMoveCtrl_setDestination _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3
#define NpcMoveCtrl_setTargetAngle _ZN11NpcMoveCtrl14setTargetAngleEs
#define NpcMoveCtrl_hasArrived _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei
#define NpcMoveCtrl_setWaypoint _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3
#define func_0201acfc _ZN12Unk_0201acf813func_0201acfcEv
#define func_0201b08c _ZN8NpcActor8vfunc_4cEi
#define func_0201b138 _ZN8NpcActor6onDrawEv
#define NpcActor_findAvoidPos _ZN8NpcActor12findAvoidPosEP16Unk_020d77a4_Vec
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getRelativeAngleTo _ZN8NpcActor18getRelativeAngleToEPS_
#define NpcActor_getAngleToPlayer _ZN8NpcActor16getAngleToPlayerEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define NpcActor_isPlayerNear _ZN8NpcActor12isPlayerNearEij
#define NpcActor_isNear _ZN8NpcActor6isNearEPS_i
#define NpcActor_getDistanceToPlayer _ZN8NpcActor19getDistanceToPlayerEj
#define NpcActor_getDistanceTo _ZN8NpcActor13getDistanceToEPS_
#define NpcActor_setCollisionRadius _ZN8NpcActor18setCollisionRadiusEi
#define NpcActor_getNpcIndex _ZN8NpcActor11getNpcIndexEv
#define VillagerMood_update _ZN12VillagerMood6updateEP12VillagerTalk
#define VillagerMood_disableEffects _ZN12VillagerMood14disableEffectsEv
#define VillagerMood_enableEffects _ZN12VillagerMood13enableEffectsEv
#define VillagerMood_requestApply _ZN12VillagerMood12requestApplyEv
#define VillagerMood_addMood _ZN12VillagerMood7addMoodEji
#define VillagerTalk_getEventKind _ZN12VillagerTalk12getEventKindEv
#define VillagerTalk_hasPartner _ZN12VillagerTalk10hasPartnerEv
#define VillagerTalk_isInvitedByPartner _ZN12VillagerTalk18isInvitedByPartnerEv
#define VillagerTalk_setInvitedByPartner _ZN12VillagerTalk19setInvitedByPartnerEh
#define VillagerTalk_getPartner _ZN12VillagerTalk10getPartnerEv
#define VillagerTalk_setPartner _ZN12VillagerTalk10setPartnerEj
#define VillagerTalkTopics_updateCatchPlans _ZN18VillagerTalkTopics16updateCatchPlansEPhPvj
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define VillagerTalk_setSpeakerStateUnk _ZN12VillagerTalk18setSpeakerStateUnkEPv
#define VillagerActor_isFlag834 _ZN13VillagerActor9isFlag834Ev
#define VillagerActor_clearFlag834 _ZN13VillagerActor12clearFlag834Ev
#define VillagerActor_setFlag834 _ZN13VillagerActor10setFlag834Ev
#define func_0202d8ec _ZN13VillagerActor8vfunc_0cEv
#define func_0202d948 _ZN13VillagerActor8vfunc_00Ev
#define func_0202dab0 _ZN13VillagerActor8vfunc_04Ev
#define GroundInfo_initAtPos _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii
#define Character_clearTalkStartMode _ZN9Character18clearTalkStartModeEv
#define Character_setTalkStartMode0 _ZN9Character17setTalkStartMode0Ev
#define Character_isInFacingArcOf _ZN9Character15isInFacingArcOfEPS_ss
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AbleSistersPatterns_getPattern _ZN19AbleSistersPatterns10getPatternEh
#define Pattern_equals _ZN7Pattern6equalsEPS_
#define VillagerDataItemView_getHousePos _ZN20VillagerDataItemView11getHousePosEv
#define VillagerDataProfileView_getCatchphrase _ZN23VillagerDataProfileView14getCatchphraseEPvS0_
#define VillagerDataProfileView_setUmbrella _ZN23VillagerDataProfileView11setUmbrellaEPt
#define VillagerDataProfileView_setShirt _ZN23VillagerDataProfileView8setShirtEPt
#define VillagerDataProfileView_getShirt _ZN23VillagerDataProfileView8getShirtEv
#define VillagerData_getPattern _ZN12VillagerData10getPatternEv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define VillagerMemory_getFriendship _ZN14VillagerMemory13getFriendshipEv
#define ContestRecord_getSize _ZN13ContestRecord7getSizeEv
#define ContestRecord_setSize _ZN13ContestRecord7setSizeEi
#define ContestRecord_setHolderVillager _ZN13ContestRecord17setHolderVillagerEP16Unk_02085810_Rec
#define ActorCollider_isHitByGroup _ZN13ActorCollider12isHitByGroupEj
#define PlayerId_isValid _ZN8PlayerId7isValidEv
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define VillagerPlan_isTrendOlderThan _ZN12VillagerPlan16isTrendOlderThanEPvj
#define VillagerPlan_getState _ZN12VillagerPlan8getStateEv
#define MsgString_equals _ZN9MsgString6equalsEPS_
class FieldVillager;
class Unk_ov068_Owner;
class FieldVillagerAiLeaveHouse;
class FieldVillagerAi;
typedef void (FieldVillagerAiLeaveHouse::*Unk_ov068_02263b90_Fn)(Unk_ov068_Owner *);
typedef void (FieldVillagerAi::*Unk_ov068_0225f1a0_Fn)(FieldVillager *);
typedef BOOL (FieldVillager::*Unk_ov068_0226fb80_Fn)();

extern "C" s32 func_01ffcb0c(s32, s32);
extern "C" void HeldToolModel_init(void *);
class FieldVillager;
class Unk_ov068_Owner;
class FieldVillagerAi;

struct Unk_ov068_0225f23c_Vec {
    s32 x, y, z;
};


struct Unk_ov068_0225f858_Vec {
    s32 a, b, c;
};

struct Unk_ov068_022661c8_Blk {
    u32 v[12];
};

typedef BOOL (FieldVillager::*Unk_ov068_0226fb80_Fn)();
typedef void (FieldVillagerAi::*Unk_ov068_0225f1a0_Fn)(FieldVillager *);

struct Unk_ov068_0225f1a0_Ent {
    Unk_ov068_0225f1a0_Fn a;
    Unk_ov068_0225f1a0_Fn b;
};

// Sub-object at +0x894 of FieldVillager (0x20 bytes)
class FieldVillagerLook {
public:
    void update(FieldVillager *o);
    void trackFish(FieldVillager *o);
    void startLookAtFish(FieldVillager *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v);
    BOOL isSameFish(s32 a, s32 b);
    s32 findFishNear(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim);
    BOOL getFishPosIfNear(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim);
    void trackInsect(FieldVillager *o);
    void startLookAtInsect(FieldVillager *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v);
    BOOL isSameInsect(u32 a, s32 b);
    s32 findInsectNear(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim);
    s32 getInsectIfNear(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim);
    void setLookMode(FieldVillager *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e);
    void tickLookTime();
    void setLookModeLocked(FieldVillager *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e);
    void resetLook(FieldVillager *o);
    void init(FieldVillager *o);
    ~FieldVillagerLook();
    void construct();

    /* 0x00 */ s32 isLocked;
    /* 0x04 */ s32 targetKind;
    /* 0x08 */ u8 lookMode;
    /* 0x09 */ u8 pad_09[3];
    /* 0x0c */ s32 targetSlot;
    /* 0x10 */ s32 targetId;
    /* 0x14 */ u16 lookTime;
    /* 0x16 */ u8 pad_16[2];
    /* 0x18 */ Unk_ov068_0226fb80_Fn drawFn;
};

// Small timer object at +0x9f0
class FieldVillagerFxTimer {
public:
    void setHoldCount(u32 v);
    u32 getHoldCount();
    void stop(FieldVillager *o);
    void update(FieldVillager *o);
    void clear();
    ~FieldVillagerFxTimer();
    void construct();

    /* 0x00 */ s8 fleaEffectTimer;
    /* 0x01 */ u8 pad_01;
    /* 0x02 */ u16 holdCount;
};

// State-machine member at +0x8b4 of FieldVillager (0xfc bytes)
class FieldVillagerAi {
public:
    ~FieldVillagerAi();
    FieldVillagerAi *initAi();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 state;
    /* 0x14 */ Unk_ov068_0225f1a0_Ent *stateEntry;
    /* 0x18 */ s32 resumeState;
    /* 0x1c */ u8 step;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 stateTimer;
    /* 0x24 */ s32 cooldown;
    /* 0x28 */ s32 chatTarget;
    /* 0x2c */ s16 pitfallTimer;
    /* 0x2e */ u8 pad_2e[6];
    /* 0x34 */ s16 activityTimer;
    /* 0x36 */ s16 heldItemCheckTimer;
    /* 0x38 */ u8 hitCount;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 hitResetTimer;
    /* 0x3c */ u8 route[0xd8 - 0x3c];
    /* 0xd8 */ s16 routeTimeout;
    /* 0xda */ s16 routeStepTimer;
    /* 0xdc */ s16 lookStopTimer;
    /* 0xde */ s16 lookStopCooldown;
    /* 0xe0 */ u8 isAdmiringCatch;
    /* 0xe1 */ u8 pad_e1[3];
    /* 0xe4 */ s32 approachTarget;
    /* 0xe8 */ u8 pad_e8[0xf4 - 0xe8];
    /* 0xf4 */ s32 seekPlayerCooldown;
    /* 0xf8 */ s32 talkUrgeTimer;
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


struct Unk_020d77a4_Vec3;




// Vtable 0x0226fb80
class FieldVillager : public VillagerActor {
public:
    inline FieldVillager() {
        look.construct();
        ai.initAi();
        HeldToolModel_init(&heldTool);
        fleaFx.construct();
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48(void *other);
    virtual void vfunc_4c(u32 idx, u8 v);
    virtual BOOL acceptsInteractionOutOfRange(void *p);
    virtual BOOL onToolHit(u16 *p);
    virtual BOOL updateAct();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_b0();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(u32 idx);
    virtual BOOL vfunc_bc();

    void refreshActivity();
    void chooseActivity();
    void updateStareTimer();
    BOOL isPlayerFacing();
    s32 getPlayerMemory();
    void attachHeldItemModel();
    BOOL drawDefault();

    /* 0x894 */ FieldVillagerLook look;
    /* 0x8b4 */ FieldVillagerAi ai;
    /* 0x9b0 */ HeldToolModel heldTool;
    /* 0x9f0 */ FieldVillagerFxTimer fleaFx;
    /* 0x9f4 */ Unk_ov068_0225f904_Menu *talkPartner;
    /* 0x9f8 */ s32 talkType;
    /* 0x9fc */ s32 pitfallEffect;
    /* 0xa00 */ u8 isInPitfall;
    /* 0xa01 */ u8 wasHitByNet;
    /* 0xa02 */ u16 pushFrames;
    /* 0xa04 */ u8 lastCatchSimMinute;
    /* 0xa05 */ u8 unk_a05;
    /* 0xa06 */ u8 pad_a06[2];
    /* 0xa08 */ s32 talkReason;
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

class FieldVillagerAiStates {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 stateTimer;
    /* 0x24 */ u8 pad_24[4];
    /* 0x28 */ u8 *chatTarget;
    /* 0x2c */ s16 pitfallTimer;
    /* 0x2e */ u8 pad_2e[2];
    /* 0x30 */ s32 pitfallAnimSpeed;
    /* 0x34 */ s16 activityTimer;
    /* 0x36 */ s16 heldItemCheckTimer;
    /* 0x38 */ u8 hitCount;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 hitResetTimer;
    /* 0x3c */ u8 route[0xd8 - 0x3c];
    /* 0xd8 */ s16 routeTimeout;
    /* 0xda */ s16 routeStepTimer;
    /* 0xdc */ s16 lookStopTimer;
    /* 0xde */ s16 lookStopCooldown;
    /* 0xe0 */ u8 isAdmiringCatch;
    /* 0xe1 */ u8 pad_e1[0xf4 - 0xe1];
    /* 0xf4 */ u32 seekPlayerCooldown;
    /* 0xf8 */ u32 talkUrgeTimer;

    s32 execAdmireCatch(Unk_ov068_Owner *o);
    void admireCatchStep1(Unk_ov068_Owner *o);
    void admireCatchStep0(Unk_ov068_Owner *o);
    BOOL enterAdmireCatch(Unk_ov068_Owner *o);
    s32 execPushTalk(Unk_ov068_Owner *o);
    void pushTalkStep1(Unk_ov068_Owner *o);
    void pushTalkStep0(Unk_ov068_Owner *o);
    BOOL enterPushTalk(Unk_ov068_Owner *o);
    s32 execHitTalk(Unk_ov068_Owner *o);
    void hitTalkStep2(Unk_ov068_Owner *o);
    void hitTalkStep1(Unk_ov068_Owner *o);
    void hitTalkStep0(Unk_ov068_Owner *o);
    BOOL enterHitTalk(Unk_ov068_Owner *o);
    s32 execPushed(Unk_ov068_Owner *o);
    void pushedStep1(Unk_ov068_Owner *o);
    void pushedStep0(Unk_ov068_Owner *o);
    BOOL enterPushed(Unk_ov068_Owner *o);
    s32 execHitByNet(Unk_ov068_Owner *o);
    void hitByNetStep2(Unk_ov068_Owner *o);
    void hitByNetStep1(Unk_ov068_Owner *o);
    void hitByNetStep0(Unk_ov068_Owner *o);
    BOOL enterHitByNet(Unk_ov068_Owner *o);
    s32 execPitfallClimbOut(Unk_ov068_Owner *o);
    BOOL enterPitfallClimbOut(Unk_ov068_Owner *o);
    s32 execPitfall(Unk_ov068_Owner *o);
    void pitfallStep4(Unk_ov068_Owner *o);
    void pitfallStep3(Unk_ov068_Owner *o);
    void pitfallStep2(Unk_ov068_Owner *o);
    void pitfallStep1(Unk_ov068_Owner *o);
    void pitfallStep0(Unk_ov068_Owner *o);
    BOOL enterPitfall(Unk_ov068_Owner *o);
    BOOL enterInHouse(Unk_ov068_Owner *o);
    s32 execGoInHouse(Unk_ov068_Owner *o);
    void goInHouseStep2(Unk_ov068_Owner *o);
    void goInHouseStep1(Unk_ov068_Owner *o);
    void goInHouseStep0(Unk_ov068_Owner *o);
    BOOL enterGoInHouse(Unk_ov068_Owner *o);
    BOOL execOffscreen(Unk_ov068_Owner *o);
    BOOL enterOffscreen(Unk_ov068_Owner *o);
    BOOL execWander(Unk_ov068_Owner *o);
    BOOL checkWanderEvents(Unk_ov068_Owner *o);
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
    Unk_ov068_02260780_Vec position;
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

class FieldVillagerAiPutAway {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 stateTimer;

    s32 execPutAwayItem(Unk_ov068_Owner *o);
    void putAwayItemStep1(Unk_ov068_Owner *o);
    void putAwayItemStep0(Unk_ov068_Owner *o);
    BOOL enterPutAwayItem(Unk_ov068_Owner *o);
};

class FieldVillagerAiTakeOut {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;

    s32 execTakeOutItem(Unk_ov068_Owner *o);
    void takeOutItemStep1(Unk_ov068_Owner *o);
    void takeOutItemStep0(Unk_ov068_Owner *o);
    BOOL enterTakeOutItem(Unk_ov068_Owner *o);
};

class FieldVillagerAiBirthdayInvite {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 stateTimer;

    s32 execBirthdayInvite(Unk_ov068_Owner *o);
    void birthdayInviteStep2(Unk_ov068_Owner *o);
    void birthdayInviteStep1(Unk_ov068_Owner *o);
    void birthdayInviteStep0(Unk_ov068_Owner *o);
    BOOL enterBirthdayInvite(Unk_ov068_Owner *o);
};

class FieldVillagerAiBirthdayWait {
public:
    s32 execBirthdayWait(Unk_ov068_Owner *o);
    BOOL enterBirthdayWait(Unk_ov068_Owner *o);
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

class FieldVillagerAiPlayerStates {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 stateTimer;
    /* 0x24 */ u8 pad_24[0xe4 - 0x24];
    /* 0xe4 */ Unk_ov068_02261cd4_Tgt *approachTarget;
    /* 0xe8 */ s32 approachStartX;
    /* 0xec */ s32 approachStartY;
    /* 0xf0 */ s32 approachStartZ;
    /* 0xf4 */ u32 seekPlayerCooldown;

    s32 execFleaRemoved(Unk_ov068_Owner *o);
    void fleaRemovedStep1(Unk_ov068_Owner *o);
    void fleaRemovedStep0(Unk_ov068_Owner *o);
    BOOL enterFleaRemoved(Unk_ov068_Owner *o);
    s32 execJoinTalk(Unk_ov068_Owner *o);
    BOOL enterJoinTalk(Unk_ov068_Owner *o);
    s32 execFaceTalker(Unk_ov068_Owner *o);
    void faceTalkerStep0(Unk_ov068_Owner *o);
    BOOL enterFaceTalker(Unk_ov068_Owner *o);
    s32 execApproach(Unk_ov068_Owner *o);
    void approachStep4(Unk_ov068_Owner *o);
    void approachStep3(Unk_ov068_Owner *o);
    void approachStep2(Unk_ov068_Owner *o);
    void approachStep1(Unk_ov068_Owner *o);
    void approachStep0(Unk_ov068_Owner *o);
    BOOL isTargetInFront(Unk_ov068_Owner *o, s32 r);
    BOOL isNearApproachStart(Unk_ov068_Owner *o);
    BOOL enterApproach(Unk_ov068_Owner *o);
};

class FieldVillagerAiReaction {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;

    void reactionStep1(Unk_ov068_Owner *o);
    void reactionStep0(Unk_ov068_Owner *o);
    BOOL enterReaction(Unk_ov068_Owner *o);
    s32 execReaction(Unk_ov068_Owner *o);
};

class FieldVillagerAiChat {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 stateTimer;
    /* 0x24 */ u8 pad_24[4];
    /* 0x28 */ u8 *chatTarget;
    /* 0x2c */ s16 pitfallTimer;
    /* 0x2e */ u8 pad_2e[2];
    /* 0x30 */ s32 pitfallAnimSpeed;
    /* 0x34 */ s16 activityTimer;
    /* 0x36 */ s16 heldItemCheckTimer;
    /* 0x38 */ u8 hitCount;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 hitResetTimer;
    /* 0x3c */ u8 route[0xd8 - 0x3c];
    /* 0xd8 */ s16 routeTimeout;
    /* 0xda */ s16 routeStepTimer;
    /* 0xdc */ s16 lookStopTimer;
    /* 0xde */ s16 lookStopCooldown;
    /* 0xe0 */ u8 isAdmiringCatch;
    /* 0xe1 */ u8 pad_e1[0xf4 - 0xe1];
    /* 0xf4 */ u32 seekPlayerCooldown;
    /* 0xf8 */ u32 talkUrgeTimer;

    s32 execChat(Unk_ov068_Owner *o);
    void chatStep3(Unk_ov068_Owner *o);
    void chatStep2(Unk_ov068_Owner *o);
    void pickChatOutcome(Unk_ov068_Owner *o);
    void chatStep1(Unk_ov068_Owner *o);
    BOOL isEnemyPairWithPlayerNear(Unk_ov068_Owner *o, s32 v);
    BOOL isStrangerPlayerNear(Unk_ov068_Owner *o, s32 v);
    s32 getPlayerDistance(Unk_ov068_Owner *o);
    BOOL isPartnerNear(Unk_ov068_Owner *o);
    void chatStep0(Unk_ov068_Owner *o);
    BOOL enterChat(Unk_ov068_Owner *o);
    // out-of-range
    BOOL tryChatAdoptAblePattern(Unk_ov068_Owner *o);
    BOOL tryChatRevertCatchphrase(Unk_ov068_Owner *o);
    BOOL tryChatRevertClothes(Unk_ov068_Owner *o);
    BOOL tryChatSpreadShirt(Unk_ov068_Owner *o);
    BOOL tryChatSpreadCatchphrase(Unk_ov068_Owner *o);
    BOOL tryChatNeutral(Unk_ov068_Owner *o);
    BOOL tryChatMoodByRelation(Unk_ov068_Owner *o);
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

class FieldVillagerAiTalk {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;

    s32 execTalk(Unk_ov068_Owner *o);
    void talkStep1(Unk_ov068_Owner *o);
    void talkStep0(Unk_ov068_Owner *o);
    BOOL enterTalk(Unk_ov068_Owner *o);
};

class FieldVillagerAiLeaveHouse {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;
    /* 0x1d */ u8 pad_1d[0x34 - 0x1d];
    /* 0x34 */ s16 activityTimer;
    /* 0x36 */ u8 pad_36[0xf8 - 0x36];
    /* 0xf8 */ s32 talkUrgeTimer;

    s32 execLeaveHouse(Unk_ov068_Owner *o);
    void leaveHouseStep1(Unk_ov068_Owner *o);
    void leaveHouseStep0(Unk_ov068_Owner *o);
    BOOL enterLeaveHouse(Unk_ov068_Owner *o);
};

class FieldVillagerAiAbsent {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;

    s32 execAbsent(Unk_ov068_Owner *o);
    void absentStep1(Unk_ov068_Owner *o);
    void absentStep0(Unk_ov068_Owner *o);
    BOOL enterAbsent(Unk_ov068_Owner *o);
};

class FieldVillagerAiInHouse {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 step;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 stateTimer;
    /* 0x24 */ u8 pad_24[4];
    /* 0x28 */ u8 *chatTarget;
    /* 0x2c */ s16 pitfallTimer;
    /* 0x2e */ u8 pad_2e[2];
    /* 0x30 */ s32 pitfallAnimSpeed;
    /* 0x34 */ s16 activityTimer;
    /* 0x36 */ s16 heldItemCheckTimer;
    /* 0x38 */ u8 hitCount;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 hitResetTimer;
    /* 0x3c */ u8 route[0xd8 - 0x3c];
    /* 0xd8 */ s16 routeTimeout;
    /* 0xda */ s16 routeStepTimer;
    /* 0xdc */ s16 lookStopTimer;
    /* 0xde */ s16 lookStopCooldown;
    /* 0xe0 */ u8 isAdmiringCatch;
    /* 0xe1 */ u8 pad_e1[0xf4 - 0xe1];
    /* 0xf4 */ u32 seekPlayerCooldown;
    /* 0xf8 */ u32 talkUrgeTimer;

    s32 execInHouse(Unk_ov068_Owner *o);
    void inHouseStep1(Unk_ov068_Owner *o);
    void inHouseStep0(Unk_ov068_Owner *o);
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
    /* 0x05c */ Unk_ov068_022649f4_Vec position;
    /* 0x068 */ u8 pad_68[0x8e - 0x68];
    /* 0x08e */ s16 rotY;
    /* 0x090 */ u8 pad_90[4];
    /* 0x094 */ s16 moveAngleY;
    /* 0x096 */ u8 pad_96[2];
    /* 0x098 */ s32 speed;
    /* 0x09c */ u8 pad_9c[0x350 - 0x9c];
    /* 0x350 */ u8 moveCtrl[0x60];
    /* 0x3b0 */ u8 lookAt[0x5c];
    /* 0x40c */ u8 pad_40c[0x564 - 0x40c];
    /* 0x564 */ u8 actionCtrl[0x82c - 0x564];
    /* 0x82c */ void *villagerData;
    /* 0x830 */ u8 pad_830[0x8b4 - 0x830];
    /* 0x8b4 */ u8 ai[0xa01 - 0x8b4];
    /* 0xa01 */ u8 wasHitByNet;
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



struct Unk_ov068_02265ee8_Obj {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ Unk_ov068_0225f23c_Vec position;
    /* 0x68 */ u8 pad_68[0x94 - 0x68];
    /* 0x94 */ s16 moveAngleY;
    /* 0x96 */ u8 pad_96[2];
    /* 0x98 */ s32 speed;
};
namespace ns_0225f1a0 {
extern "C" {
extern s32 data_020c6d1c;
extern u8 gVec3Zero[];
s32 FishShadow_GetFishId(s32);
s32 FishShadow_GetPos(void *, s32);
s32 FieldInsect_GetKindAndAlarm(u8 *, u8);
s32 FieldInsect_GetPosAndKind(void *, u8);
s32 func_020e9650(void *, void *);
s32 NpcLookAt_canSeeTarget(void *, void *);
void NpcLookAt_setTarget(void *, u32, s32, s32, void *, s32, s32, u8);
void NpcLookAt_setTargetPos(void *, void *);
u32 FieldVillager_GetMood(void *);
s32 VillagerTalk_hasPartner(void *);
s32 VillagerTalk_getEventKind(void *);
void *VillagerTalk_getPartner(void *);
void VillagerTalk_setPartner(void *, u32);
void VillagerTalk_setInvitedByPartner(void *, u32);
void VillagerMood_requestApply(void *);
s32 FieldVillagerAi_Resume(void *, void *);
void FieldVillagerAi_ChangeState(void *, void *, s32);
void FieldVillagerAi_StartCooldown(void *);
void FieldVillagerAi_SaveResumeState(void *);
s32 FieldVillagerAi_IsState(void *, s32);
s32 FieldVillagerAi_IsFreeIdle(void *);
s32 FieldVillager_GetTalkRepeat(void *);
void FieldVillager_StopEmotion(void *);
void *X_func_ov068_02265f58(void *);
void *PlayerData_GetCurrent();
s32 VillagerMemory_IsUsed(void *);
s32 NpcActor_isPlayerNear(void *, s32, u32);
s32 NpcTalkCtrl_isBusy(void *);
s32 VillagerTalk_begin(void *, void *, s32);
void *NpcActor_getPlayerActor(void *, s32);
void func_02015ab0(void *, void *);
void ActorTalkRequest_setPartnerActor(void *, void *);
void TalkRepeat_Count();
void Villager_ClearTalkUrge(void *);
s32 Villager_GetWhereabouts(void *);
void *VillagerDataItemView_getHousePos(void *);
void FieldPos_FromUnitCenter(void *, u32, u32);
s32 VillagerStates_GetBirthdayHost();
s32 Villager_GetIndex(void *);
s32 TalkRepeat_StartWindow();
void Villager_AddTalkUrge(void *, s32);
s32 Character_setTalkStartMode0(void *);
s32 func_0201b08c(void *, u32, u32);
void Villager_RemoveFlea(void *);
s32 Villager_HasFlea(void *);
s32 Random_GlobalBelow(s32);
void Effect_PlayById(s32, void *, s32, s32);
}
}

namespace ns_0225fc60 {
extern "C" {
extern s16 sTalkFacingArc;
extern s16 data_020c6cc0;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
s32 FieldVillager_GetMood(void *);
s32 FieldVillagerAi_IsState(void *, s32);
s32 FieldVillagerAi_IsPlayerShowingCatch(void *);
s32 FieldVillagerAi_ChangeState(void *, void *, s32);
s32 FieldVillagerAi_SetResumeState(void *, s32);
s32 FieldVillagerAi_AddMood(void *, void *, s32, s32, s32);
void FieldVillager_StopEmotion(void *);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
s32 VillagerActor_isFlag834(void *);
void VillagerActor_clearFlag834(void *);
s32 NpcActor_isNear(void *, s32, s32);
s32 Character_isInFacingArcOf(void *, s32, s32, s32);
s32 NpcTalkCtrl_isBusy(void *);
void *PlayerActor_GetCharacter(s32);
s32 NpcActor_getRelativeAngleTo(void *, void *);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_getEmotionId(void *);
s32 NpcActionCtrl_isActionDone(void *);
void NpcActionCtrl_requestStand(void *, s32, u32);
void NpcActionCtrl_requestEmotion(void *, s32, s32, u32);
void Unk_02015b8c_setAnimSpeedFixed(void *, s32);
s32 Unk_02015b8c_getAnimId(void *, s32);
void *func_02015aac(void *);
void Unk_02013474_enableFootsteps(void *);
s32 Unk_020133cc_Player_resetLastTaughtEmotion(void *);
s32 NpcActor_getAngleToPlayer(void *, s32);
s32 NpcActor_getAngleTo(void *, void *);
void NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void VillagerMood_disableEffects(void *);
void VillagerTalk_setPartner(void *, s32);
void VillagerTalk_setInvitedByPartner(void *, s32);
void Character_setTalkStartMode0(void *);
void TalkRequest_SetTargetDone(void *);
void TalkRequest_AddPlayerTalk6(void *, s32);
void Character_clearTalkStartMode(void *);
void Villager_HalveTalkUrge(s32);
void NpcTalkCtrl_requestTurnAndTalk(void *, s32, s32, s32);
}
extern "C" BOOL _ZN13FieldVillager28acceptsInteractionOutOfRangeEPv(Unk_ov068_Owner *o, s32 x);
extern "C" BOOL _ZN13FieldVillager8vfunc_48EPv(u8 *o);
typedef void (FieldVillagerAiStates::*Fn_225fd54)(Unk_ov068_Owner *);
extern "C" {
extern Fn_225fd54 sAdmireCatchSteps[2];
extern u32 sAdmireCatchStepsGuard;
extern void *data_ov068_0226f938[2];
extern void *data_ov068_0226f9f0[2];
}
typedef void (FieldVillagerAiStates::*Fn_225ff18)(Unk_ov068_Owner *);
extern "C" {
extern Fn_225ff18 sPushTalkSteps[2];
extern u32 sPushTalkStepsGuard;
extern void *data_ov068_0226fb30[2];
extern void *data_ov068_0226f800[2];
}
typedef void (FieldVillagerAiStates::*Fn_2260068)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2260068 sHitTalkSteps[3];
extern u32 sHitTalkStepsGuard;
extern void *data_ov068_0226f9b8[2];
extern void *data_ov068_0226fa18[2];
extern void *data_ov068_0226fa48[2];
}
typedef void (FieldVillagerAiStates::*Fn_2260290)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2260290 sPushedSteps[2];
extern u32 sPushedStepsGuard;
extern void *data_ov068_0226f8a0[2];
extern void *data_ov068_0226f908[2];
}
typedef void (FieldVillagerAiStates::*Fn_2260450)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2260450 sHitByNetSteps[3];
extern u32 sHitByNetStepsGuard;
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
void FieldVillager_StopEmotion(void *);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
s32 FieldVillagerAi_ChangeState(void *, void *, s32);
void FieldItemFx_StartPitfallClose(s32, void *);
void FieldItemFx_StartPitfallHole(s32, void *);
void Unk_02015b8c_setAnimSpeedFixed(void *, s32);
void VillagerActor_clearFlag834(void *);
void VillagerActor_setFlag834(void *);
void Unk_02013474_enableFootsteps(void *);
void Unk_02013474_disableFootsteps(void *);
void HeldToolModel_playIdleAnim(void *, u32, s32);
void func_02011c44(void *, u32, s32);
void func_02011c9c(void *, u32, s32);
void func_02011b60(void *, s32);
void func_02011cf4(void *, u32, s32);
void func_02011d4c(void *, u32, s32);
void TalkRequest_AddPlayerTalk6(void *, s32);
void Character_clearTalkStartMode(void *);
void *PlayerActor_GetCharacter(s32);
s32 NpcActor_getRelativeAngleTo(void *, void *);
void NpcActionCtrl_requestPlayAnim(void *, s32, s32, s32, u32, s32);
void VillagerMood_disableEffects(void *);
void Effect_End(s32);
void Effect_SetPosition(s32, void *, s32, s32);
s32 Effect_Create(s32, void *, s32, s32);
void Effect_PlayById(s32, void *, s32, s32);
void Npc_GetStateHeldItem(void *, void *);
void GroundInfo_initAtPos(void *, void *, s32, s32);
void GroundInfo_Destruct(void *);
void func_02003ddc(void *, s32, s32, s32);
s32 Unk_02015b8c_getAnimId(void *, s32);
s32 NpcActionCtrl_isActionDone(void *);
void NpcAnimCtrl_playHoldItemPose(void *, void *, void *, s32, s32);
s32 AnimFrameCtrl_isFinished(void *);
void FieldPos_SnapToUnitCenter(void *, void *);
}
extern "C" void FieldVillager_StepToward(s32 *p, s32 target, s32 a, s32 spd, s32 min);
typedef void (FieldVillagerAiStates::*Fn_226071c)(Unk_ov068_Owner *);
extern "C" {
extern Fn_226071c sPitfallClimbOutSteps[1];
extern u32 sPitfallClimbOutStepsGuard;
extern void *data_ov068_0226fa78[2];
}
typedef void (FieldVillagerAiStates::*Fn_2260944)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2260944 sPitfallSteps[5];
extern u32 sPitfallStepsGuard;
extern void *data_ov068_0226f9e0[2];
extern void *data_ov068_0226fa10[2];
extern void *data_ov068_0226fa30[2];
extern void *data_ov068_0226fa40[2];
extern void *data_ov068_0226fa58[2];
}
extern "C" void FieldVillager_StepToward(s32 *p, s32 target, s32 a, s32 spd, s32 min);
}

namespace ns_02260f90 {
extern "C" {
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
extern void *gSceneBlockMap;
s32 FieldVillagerAi_Resume(void *, void *);
s32 FieldVillagerAi_ChangeState(void *, void *, s32);
void FieldVillager_StopEmotion(void *);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
s32 Unk_02015b8c_getAnimId(void *, s32);
s32 NpcActionCtrl_isActionDone(void *);
s32 NpcActionCtrl_getAction(void *);
void HeldToolModel_attach(void *, void *, void *, s32, s32);
s32 HeldToolModel_getAnimSpeed(void *);
void HeldToolModel_setAnimSpeed(void *, s32);
void HeldToolModel_playAnim(void *, s32, s32, s32);
void *func_02011b7c(void *);
void AnimFrameCtrl_setup(void *, s32, s32, s32, s32);
void NpcActionCtrl_requestPlayAnim(void *, s32, s32, s32, u32, s32);
void func_02003ddc(void *, s32, s32, s32);
void Npc_GetStateHeldItem(void *);
void VillagerActor_setFlag834(void *);
void VillagerTalk_setSpeakerStateUnk(void *, void *);
void VillagerMood_disableEffects(void *);
void NpcAnimCtrl_playHoldItemPose(void *, void *, void *, s32, s32);
void TalkRequest_SetTargetDone(void *);
void NpcActionCtrl_requestStand(void *, s32, u32);
void TalkRequestFlags_ClearEventWarpBlock(void);
void TalkRequest_AddPlayerTalk6(void *, s32);
void PlayerActor_SetSlotFlag(s32, s32);
void Camera_SetModeDefault(void);
s32 NpcTalkCtrl_isBusy(void *);
void *func_02015aac(void *);
s32 NpcActor_getAngleTo(void *, void *);
void Unk_02013474_enableFootsteps(void *);
void NpcTalkCtrl_requestTurnAndTalk(void *, s32, s32, s32);
void NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 BlockMap_FindItemAllAttr(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void FieldPos_FromBlockUnit(Unk_ov068_02260f90_V3 *, s32, s32, s32, s32);
s16 Math_AngleXZ(Unk_ov068_02260f90_V3 *, Unk_ov068_02260f90_V3 *);
void NpcMoveCtrl_setTargetAngle(void *, s32);
void Bgm_RequestSilence(s32, s32, s32);
void VillagerStates_SetBirthdayVisitor(s32);
void TalkRequestFlags_SetEventWarpBlock(void);
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
typedef void (FieldVillagerAiPutAway::*Fn_2260f90)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2260f90 sPutAwayItemSteps[2];
extern u32 sPutAwayItemStepsGuard;
extern void *data_ov068_0226f978[2];
extern void *data_ov068_0226f9a0[2];
}
typedef void (FieldVillagerAiTakeOut::*Fn_2261290)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2261290 sTakeOutItemSteps[2];
extern u32 sTakeOutItemStepsGuard;
extern void *data_ov068_0226f8d8[2];
extern void *data_ov068_0226f900[2];
}
typedef void (FieldVillagerAiBirthdayInvite::*Fn_2261574)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2261574 sBirthdayInviteSteps[3];
extern u32 sBirthdayInviteStepsGuard;
extern void *data_ov068_0226f860[2];
extern void *data_ov068_0226f8d0[2];
extern void *data_ov068_0226f880[2];
}
}

namespace ns_02261900 {
extern "C" {
extern s16 sFieldVillagerPushLimit;
extern s16 sSeePlayerArc;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
extern Unk_ov068_02262044_Ent sApproachAnimFx[];
s32 X_func_ov068_0225f83c(void *);
void X_func_ov068_0225f838(...);
s32 FieldVillagerAi_ChangeState(void *, void *, s32);
s32 FieldVillagerAi_WasHitByNet(void *, void *);
void FieldVillager_StopEmotion(void *);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_isActionDone(void *);
void NpcActionCtrl_requestStand(void *, s32, u32);
s32 NpcActor_getAngleToPlayer(void *, s32);
void NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void VillagerActor_clearFlag834(void *);
void VillagerActor_setFlag834(void *);
void VillagerMood_enableEffects(void *);
s32 VillagerTalk_hasPartner(void *);
s32 NpcActor_getDistanceTo(void *, void *);
s32 NpcActor_getRelativeAngleTo(void *, void *);
s32 NpcActor_getAngleTo(void *, void *);
s32 func_020e96a4(void *, void *);
void NpcMoveCtrl_setWaypoint(void *, void *);
s32 Unk_02015b8c_getAnimId(void *, s32);
s32 Random_GlobalBelow(s32);
void Effect_Create(u32, void *, void *, s32);
void func_02003ddc(void *, s32, s32, s32);
void Villager_HalveTalkUrge(s32);
void Villager_AddTalkUrge(s32, s32);
void *PlayerActor_GetCharacter(s32);
void NpcActionCtrl_requestPlayAnim(void *, s32, s32, s32, u32, s32);
}
typedef void (FieldVillagerAiPlayerStates::*Fn_2261900)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2261900 sFleaRemovedSteps[2];
extern u32 sFleaRemovedStepsGuard;
extern void *data_ov068_0226f920[2];
extern void *data_ov068_0226f840[2];
}
typedef void (FieldVillagerAiPlayerStates::*Fn_2261ae8)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2261ae8 sFaceTalkerSteps[1];
extern u32 sFaceTalkerStepsGuard;
extern void *data_ov068_0226f808[2];
}
typedef void (FieldVillagerAiPlayerStates::*Fn_2261c38)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2261c38 sApproachSteps[5];
extern u32 sApproachStepsGuard;
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
extern u8 gSaveVillagers[];
extern u8 sChatNoPlayerMoods[];
extern u8 sChatTopicWeights[];
extern u8 sChatEmotions[];
extern s32 sChatDurations[];
s32 NpcTalkCtrl_isBusy(void *);
void TalkRequest_SetTargetDone(void *);
s32 FieldVillagerAi_SetResumeState(void *, s32);
void *PlayerActor_GetCharacter(s32);
void *X_func_ov068_02265f58(void *);
s32 VillagerMemory_getFriendship(void *);
s32 VillagerData_getVillagerId(s32);
s32 VillagerId_GetPersonality(s32);
s32 NpcActor_getAngleTo(void *, void *);
void FieldVillager_StopEmotion(void *);
void PlayerActor_LocalRequestAct11();
void NpcTalkCtrl_requestState4(void *, s32, s32, s32, s32);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
Unk_ov068_Owner *VillagerTalk_getPartner(void *);
void VillagerTalk_setPartner(void *, s32);
void VillagerTalk_setInvitedByPartner(void *, s32);
s32 FieldVillagerAi_Resume(void *, void *);
s32 FieldVillagerAi_ChangeState(void *, void *, s32);
s32 FieldVillagerAi_StartCooldown(void *);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_isActionDone(void *);
s32 NpcActionCtrl_getEmotionId(void *);
void VillagerMood_requestApply(void *);
void VillagerActor_setFlag834(void *);
s32 MI_CpuCopy8(void *, void *, s32);
s32 Talk_PickWeightedIndex(void *, s32);
s32 VillagerActor_isFlag834(void *);
s32 FieldVillagerAi_WasHitByNet(void *, void *);
s32 VillagerTalk_isInvitedByPartner(void *);
s32 FieldVillagerAi_AddMood(void *, void *, s32, s32, s32);
s32 FieldVillagerAi_AddRandomMood(void *, void *, void *, s32, s32, s32);
s32 PlayerData_GetCurrent();
s32 Random_GlobalBelow(s32);
void NpcActionCtrl_requestEmotion(void *, s32, s32, u32);
void NpcActionCtrl_requestStand(void *, s32, u32);
s32 FieldVillagerAi_GetPartnerRelationLevel(void *, void *);
s32 SaveVillagers_GetRelationLevelOf(void *, s32, s32);
s32 PlayerData_getPlayerId(...);
s32 PlayerId_isValid(s32);
s32 Villager_FindMemory(s32, s32);
s32 NpcActor_getDistanceTo(void *, void *);
s32 func_020e9650(void *, void *);
void NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void VillagerMood_enableEffects(void *);
void VillagerActor_clearFlag834(void *);
}
typedef void (FieldVillagerAiReaction::*Fn_2262294)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2262294 sReactionSteps[2];
extern u32 sReactionStepsGuard;
extern void *data_ov068_0226fa50[2];
extern void *data_ov068_0226fa60[2];
}
typedef void (FieldVillagerAiChat::*Fn_2262414)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2262414 sChatSteps[4];
extern u32 sChatStepsGuard;
extern void *data_ov068_0226fa08[2];
extern void *data_ov068_0226fa20[2];
extern void *data_ov068_0226fa28[2];
extern void *data_ov068_0226fa38[2];
}
typedef BOOL (FieldVillagerAiChat::*Fn_2262548)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2262548 sChatOutcomes[7];
extern u32 sChatOutcomesGuard;
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
extern u32 gSaveVillagers[];
extern u8 sChatBadMoods[];
extern u8 sChatClothesMoods[];
extern u8 sChatCatchphraseMoods[];
extern u8 sChatRevertClothesDeltas[];
extern u8 sChatMoodByRelationDeltas[];
extern u8 sChatSpreadShirtDeltas[];
extern u8 sChatNeutralDeltas[];
extern u8 sChatRevertCatchphraseDeltas[];
extern u8 sChatAblePatternDeltas[];
extern u8 sChatSpreadCatchphraseDeltas[];
Unk_ov068_Owner *VillagerTalk_getPartner(void *);
s32 FieldVillagerAi_OrderByFriendship(void *, void *, void *, s32, s32);
u16 *VillagerDataProfileView_getShirt(void *);
u8 *VillagerData_getPattern(void *);
u8 *VillagerData_getVillagerId(void *);
u8 *FieldVillagerAi_PickOtherAblePattern(void *, void *);
void Villager_ShareTrendWith(void *, void *);
void Villagers_ShareNickname(void *, void *, s32);
void FieldVillagerAi_AddPartnerRelation(void *, void *, void *);
void FieldVillagerAi_AddMood(void *, void *, s32, s32, s32);
void FieldVillagerAi_AddRandomMood(void *, void *, void *, s32, s32, s32);
void FieldVillagerAi_AddRandomPairRelation(void *, void *, void *);
void VillagerDataProfileView_setShirt(void *, u16 *);
void Unk_02016a44_requestAct14(void *, s32, u16 *);
s32 VillagerId_GetSpecies(void *);
s32 Villager_GetDefaultCatchphraseEncoded(void *, s32);
void Villager_SetCatchphraseEncoded(void *, void *);
void Villager_SetCatchphraseFromMsg(void *, void *);
void *Villager_GetState(void *);
u16 *VillagerState_GetHeldItem(void *);
void Villager_GetDefaultUmbrella(u16 *, void *);
void VillagerDataProfileView_setUmbrella(void *, u16 *);
void Villager_GetDefaultShirt(u16 *, void *);
s32 Item_IsFurniture(void *);
s32 Item_GetFurnitureIndex(void *);
s32 Pattern_equals(void *, void *);
s32 VillagerId_isValid(void *);
s32 memcmp(void *, void *, s32);
void *SaveVillagers_Get(void *, s32);
s32 Villager_GetWhereabouts(void *);
s32 Random_PickSetBit(s32, s32, s32);
s32 SaveVillagers_IsValidIndex(s32);
void VillagerDataProfileView_getCatchphrase(void *, void *, s32);
s32 MsgString_equals(void *, void *);
s32 SaveVillagers_GetRelationLevelOf(void *, s32, s32);
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
extern u8 gSaveAbleSistersPatterns[];
extern u8 gSaveVillagers[];
extern u8 gVec3Zero[];
extern u32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov068_02263b90_Fn data_ov068_0226f910;
void *AbleSistersPatterns_getPattern(void *, u8);
s32 Pattern_equals(void *, void *);
u32 Random_PickSetBit(u32, u32, u32);
s32 PlayerData_GetCurrent();
void *PlayerData_getPlayerId(...);
s32 PlayerId_isValid(void *);
void *Villager_FindMemory(u32, void *);
s32 VillagerMemory_getFriendship(void *);
s32 Random_GlobalBelow(s32);
s32 VillagerMood_addMood(void *, s32, s32);
void VillagerMood_requestApply(void *);
s32 VillagerData_getVillagerId(void *);
void *SaveVillagers_PickRandomExcept(void *, void *, s32);
void func_02133ef8(void *, s32);
Unk_ov068_Owner *VillagerTalk_getPartner(void *);
s32 SaveVillagers_FindIndex(void *, s32);
s32 SaveVillagers_GetRelationLevel(void *, s32, s32);
void SaveVillagers_AddRelation(void *, s32, s32, s32);
s32 NpcTalkCtrl_isBusy(void *);
void TalkRequest_SetTargetDone(void *);
void VillagerTalk_setPartner(void *, s32);
void VillagerTalk_setInvitedByPartner(void *, s32);
void FieldVillager_StopEmotion(void *);
void Unk_020133cc_Player_resetLastTaughtEmotion(void *);
s32 VillagerTalk_hasPartner(void *);
void NpcTalkCtrl_requestTalk(void *, s32, s32);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
void *func_02015aac(void *);
s32 NpcActor_getAngleTo(void *, void *);
void NpcTalkCtrl_requestTurnAndTalk(void *, s32, s32, s32);
s32 Unk_02015b8c_getAnimId(void *, s32);
s32 NpcActionCtrl_isActionDone(void *);
void NpcActor_setCollisionRadius(void *, s32);
void Npc_GetStateHeldItem(void *, void *);
s32 FieldVillagerAi_ChangeState(void *, void *, s32);
s32 FieldVillagerAi_SetResumeState(void *, s32);
s32 Unk_02013474_playFootstepSe(void *, void *);
void *Villager_GetState(void *);
void Villager_GetIndex(void *);
s32 VillagerHouse_TryOpenDoorForExit();
void NpcActionCtrl_requestPlayAnim(void *, s32, s32, s32, s32, s32);
void VillagerState_SetRole(void *, s32);
void VillagerState_SetPresence(void *, s32);
void *VillagerDataItemView_getHousePos(void *);
void FieldPos_FromUnitCenter(void *, u32, u32);
void NpcMoveCtrl_setTargetAngle(void *);
void VillagerActor_setFlag834(void *);
void VillagerMood_disableEffects(void *);
void NpcActionCtrl_requestStand(void *, s32, u32);
s32 VillagerState_GetRole(void *);
s32 Villager_GetWhereabouts(void *);
s32 Villager_IsAsleep(void *, s32);
s32 FieldVillager_IsNearCameraFocus(void *, void *);
void *PlayerActor_GetCharacter(s32);
s32 NpcActor_isNear(void *, void *, s32);
void VillagerRoute_reset(void *);
void X_func_ov068_02265fb4(void *);
void Villager_RaiseTalkUrge(void *, s32);
void *FieldVillagerAi_PickOtherAblePattern(void *unused, void *x);
s32 FieldVillagerAi_OrderByFriendship(void *unused, u32 *a, u32 *b, u32 c, u32 d);
void FieldVillagerAi_AddRandomMood(void *a, void *b, u8 *tbl, s32 n, u8 p5, u8 p6);
void FieldVillagerAi_AddMood(void *a, void *o, s32 x, s32 y, u8 flag);
void FieldVillagerAi_AddRandomPairRelation(void *a, s32 unused, s8 *t);
void FieldVillagerAi_AddPartnerRelation(void *a, void *o, s8 *t);
void FieldVillagerAi_AddRelationByLevel(void *a, void *r1, void *r2, s8 *t);
s32 FieldVillagerAi_GetPartnerRelationLevel(void *a, void *o);
s32 FieldVillagerAi_GetRelationLevel(void *a, void *b);
}
extern "C" void *FieldVillagerAi_PickOtherAblePattern(void *unused, void *x);
extern "C" s32 FieldVillagerAi_OrderByFriendship(void *unused, u32 *a, u32 *b, u32 c, u32 d);
extern "C" void FieldVillagerAi_AddRandomMood(void *a, void *b, u8 *tbl, s32 n, u8 p5, u8 p6);
extern "C" void FieldVillagerAi_AddMood(void *a, void *o, s32 x, s32 y, u8 flag);
extern "C" void FieldVillagerAi_AddRandomPairRelation(void *a, s32 unused, s8 *t);
extern "C" void FieldVillagerAi_AddPartnerRelation(void *a, void *o, s8 *t);
extern "C" void FieldVillagerAi_AddRelationByLevel(void *a, void *r1, void *r2, s8 *t);
extern "C" s32 FieldVillagerAi_GetPartnerRelationLevel(void *a, void *o);
extern "C" s32 FieldVillagerAi_GetRelationLevel(void *a, void *b);
typedef void (FieldVillagerAiTalk::*Fn_22638c0)(Unk_ov068_Owner *);
extern "C" {
extern Fn_22638c0 sTalkSteps[2];
extern u32 sTalkStepsGuard;
extern void *data_ov068_0226f858[2];
extern void *data_ov068_0226f8e0[2];
}
typedef void (FieldVillagerAiLeaveHouse::*Fn_2263a40)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2263a40 sLeaveHouseSteps[2];
extern u32 sLeaveHouseStepsGuard;
extern void *data_ov068_0226f838[2];
extern void *data_ov068_0226f848[2];
}
typedef void (FieldVillagerAiAbsent::*Fn_2263cf0)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2263cf0 sAbsentSteps[2];
extern u32 sAbsentStepsGuard;
extern void *data_ov068_0226f930[2];
extern void *data_ov068_0226f820[2];
}
typedef void (FieldVillagerAiInHouse::*Fn_2263e4c)(Unk_ov068_Owner *);
extern "C" {
extern Fn_2263e4c sInHouseSteps[2];
extern u32 sInHouseStepsGuard;
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
extern s16 sFieldVillagerPushLimit[];
extern u32 __ptmf_null[];
extern u8 gRandom[];
}
extern "C" {
void *PlayerData_GetCurrent();
s32 Unk_02097ff4_testFlag(void *, s32);
void *Villager_GetState();
void FieldVillager_StopEmotion(void *);
void X_func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
void X_func_ov068_0225f630(void *, void *);
s32 X_func_ov068_0225f83c(void *);
void NpcActionCtrl_requestStand(void *, s32, u32);
void VillagerState_SetRole(void *, s32);
void VillagerState_SetPresence(void *, s32);
s32 Villager_IsAsleep(void *, s32);
void Villager_PlaceReceivedItems(void *);
void VillagerActor_setFlag834(void *);
s32 Random_GlobalBelow(s32);
void VillagerMood_disableEffects(void *);
s32 Unk_02015b8c_getAnimId(void *, s32);
s32 NpcActionCtrl_isActionDone(void *);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_getEmotionId(void *);
void FieldVillagerAi_ChangeState(void *, void *, s32);
void FieldVillagerAi_SetResumeState(void *, s32);
void *VillagerDataItemView_getHousePos(void *);
void FieldPos_FromUnitCenter(void *, u32, u32);
void func_020e761c(void *, s32, s32);
void Unk_02013474_playFootstepSe(void *, void *);
void *Villager_GetIndex(void *);
s32 VillagerHouse_TryOpenDoorForEntry(void *);
void NpcActionCtrl_requestPlayAnim(void *, s32, s32, s32, u32, s32);
void NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, u32, s32);
void Unk_02013474_disableFootsteps(void *);
s32 FieldVillager_IsNearCameraFocus(void *, void *);
s32 VillagerTalkTopics_updateCatchPlans(void *, void *, void *, s32);
void FieldVillager_UpdateCatchSim(void *);
void Villager_RaiseTalkUrge(void *, s32);
s32 VillagerRoute_isActive(void *);
void FieldVillagerAi_StartRoute(void *, s32, void *);
s32 FieldVillagerAi_IsAtHomeDoor(void *, void *);
s32 FieldVillagerAi_ShouldGoHome(void *, void *);
s32 Unk_02012810_getStage(void *);
void VillagerRoute_start(void *, void *, s32, s32, void *);
s32 Unk_02012810_runStep(void *, void *);
void VillagerRoute_setStepMode(void *, s32);
s32 func_0201acfc(void *);
s32 Random_Next(void *);
s32 FieldVillagerAi_GetRouteTarget(void *, void *, void *);
s32 FieldVillagerAi_IsNearPlayerTalkSpot(void *, void *, s32);
s32 FieldVillagerAi_PathCrossesPlayerTalk(void *, void *, void *);
s16 Math_AngleXZ(void *, void *);
s32 NpcActor_IsFrontAngle(s32);
s32 FieldVillager_GetMood(void *);
s32 NpcLookAt_canSeeTarget(void *, void *);
s32 FieldVillagerAi_HeadingCrossesPlayerTalk(void *, void *);
void *NpcMoveCtrl_getDestination(void *);
void Npc_GetStateHeldItem(void *, void *);
s32 FieldVillagerAi_TryFallInPitfall(void *, void *);
s32 FieldVillagerAi_WasHitByNet(void *, void *);
s32 FieldVillagerAi_CanSeePlayer(void *, void *);
s32 FieldVillagerAi_TryStartChat(void *, void *);
s32 FieldVillagerAi_CheckHeldItemChange(void *, void *);
s32 FieldVillagerAi_ShouldAdmireCatch(void *, void *);
s32 FieldVillagerAi_HandleBlockedMove(void *, void *);
}
typedef void (FieldVillagerAiStates::*Fn_226410c)(Unk_ov068_Owner *);
extern "C" {
extern Fn_226410c sGoInHouseSteps[3];
extern u32 sGoInHouseStepsGuard;
extern void *data_ov068_0226fae0[2];
extern void *data_ov068_0226fb10[2];
extern void *data_ov068_0226fb20[2];
}
}

namespace ns_022649f4 {
extern "C" {
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern void *gSceneBlockMap;
extern u8 gVec3Zero[];
u32 FieldVillager_GetMood(void *);
u32 PlayerActor_GetLocalShownItem();
s32 NpcActor_getDistanceToPlayer(void *, s32);
s32 NpcLookAt_canSeeTarget(void *, void *);
s32 Unk_0201a13c_isOnTarget(void *);
void FieldPos_ToUnit(s32 *, s32 *, void *);
void FieldPos_SnapToUnitCenter(void *, void *);
s32 func_020e9650(void *, void *);
s32 NpcActor_getNpcIndex(void *);
s32 FieldAction_RequestPitfallAt(s32, void *);
s32 FieldAction_PollResult();
void FieldAction_Release(s32);
void *BlockMap_GetItemPtr(void *, s32, s32, s32, s32, s32);
s32 BlockMap_IsBuriedAtUnit(void *, s32, s32);
s32 Random_GlobalBelow(s32);
void VillagerTalk_setPartner(void *, void *);
void VillagerTalk_setInvitedByPartner(void *, u32);
void FieldVillagerAi_SaveResumeState(void *);
void FieldVillagerAi_ChangeState(void *, void *, s32);
void FieldVillagerAi_SetResumeState(void *, s32);
void *NpcRegistry_GetVillager(s32);
void *VillagerData_getVillagerId(void *);
s32 memcmp(void *, void *, s32);
s32 Math_AngleXZ(void *, void *);
s32 NpcLookAt_IsWithin(s32, s32);
s32 NpcMoveCtrl_hasArrived(void *, void *, s32);
s32 NpcActor_findAvoidPos(void *, void *);
void NpcActionCtrl_requestStand(void *, s32, u32);
void NpcMoveCtrl_setDestination(void *, void *);
s32 NpcMoveCtrl_hasNextLeg(void *);
void NpcMoveCtrl_resetDestination(void *);
s32 Unk_02012810_getStage(void *);
void *Villager_GetState(void *);
s32 VillagerRoute_isActive(void *);
void FieldVillagerAi_StartRoute(void *, s32, void *);
s32 Unk_02012810_runStep(void *, void *);
s32 TalkRequest_IsTalking();
void *PlayerActor_GetCharacter(s32);
void *TalkRequest_GetTalkTarget();
void func_020e9960(void *, void *, void *);
void func_020e9768(void *, s32);
void func_01ffd070(void *, void *, void *);
void func_020e93a0(void *, s32);
s32 func_020e96ec(void *, void *);
s32 func_01ffcb0c(s32, s32);
void *VillagerDataItemView_getHousePos(void *);
void FieldPos_FromUnitCenter(void *, u32, u32);
void *PlayerData_GetCurrent();
s32 Unk_02097ff4_testFlag(void *, s32);
s32 Villager_IsAsleep(void *, s32);
s32 FieldVillagerAi_DirCrossesPlayerTalk(void *, void *, Unk_ov068_022649f4_Vec *);
s32 FieldVillagerAi_IsPlayerShowingCatch(void *);
s32 FieldVillagerAi_WasHitByNet(void *, Unk_ov068_Owner_649 *);
s32 FieldVillagerAi_IsBuriedPitfallAt(void *, Unk_ov068_02264ab4_P2 *);
void *FieldVillagerAi_FindChatPartner(void *, Unk_ov068_Owner_649 *);
void X_func_ov068_02265dc8(void *);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_isActionDone(void *);
s32 Weather_GetFallingPrecip(s32);
s32 VillagerId_isValid(void *);
s32 VillagerState_GetActivity(void *);
void Clock_GetDateTime(void *);
void Npc_GetStateHeldItem(u16 *, void *);
void VillagerTalk_setSpeakerStateUnk(void *, u16 *);
s32 Trend_IsValid(s32);
void Trend_GetToolItem(u16 *, s32);
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
extern "C" BOOL FieldVillagerAi_ShouldAdmireCatch(FieldVillagerAiStates *self, Unk_ov068_Owner_649 *o);
extern "C" s32 FieldVillagerAi_IsPlayerShowingCatch(void *self);
extern "C" s32 FieldVillagerAi_WasHitByNet(void *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL FieldVillagerAi_TryFallInPitfall(void *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL FieldVillagerAi_IsBuriedPitfallAt(void *self, Unk_ov068_02264ab4_P2 *v);
extern "C" BOOL FieldVillagerAi_CheckHeldItemChange(FieldVillagerAiStates *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL FieldVillagerAi_TryStartChat(FieldVillagerAiStates *self, Unk_ov068_Owner_649 *o);
extern "C" void *FieldVillagerAi_FindChatPartner(void *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL FieldVillagerAi_HandleBlockedMove(void *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL FieldVillagerAi_GetRouteTarget(FieldVillagerAiStates *self, Unk_ov068_022649f4_Vec *out, Unk_ov068_Owner_649 *o);
extern "C" BOOL FieldVillagerAi_IsNearPlayerTalkSpot(void *self, void *v, s32 lim);
extern "C" s32 FieldVillagerAi_PathCrossesPlayerTalk(void *self, void *a, void *b);
extern "C" s32 FieldVillagerAi_HeadingCrossesPlayerTalk(void *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL FieldVillagerAi_DirCrossesPlayerTalk(void *self, void *a, Unk_ov068_022649f4_Vec *b);
extern "C" BOOL FieldVillagerAi_IsAtHomeDoor(FieldVillagerAiStates *self, Unk_ov068_Owner_649 *o);
extern "C" BOOL FieldVillagerAi_ShouldGoHome(void *self, Unk_ov068_Owner_649 *o);
}

namespace ns_02265324 {
extern "C" {
extern s32 data_020c6d1c;
extern u8 gVec3Zero[];
s32 FishShadow_GetFishId(s32);
s32 FishShadow_GetPos(void *, s32);
s32 FieldInsect_GetKindAndAlarm(u8 *, u8);
s32 FieldInsect_GetPosAndKind(void *, u8);
s32 func_020e9650(void *, void *);
s32 NpcLookAt_canSeeTarget(void *, void *);
void NpcLookAt_setTarget(void *, u32, s32, s32, void *, s32, s32, u8);
void NpcLookAt_setTargetPos(void *, void *);
s32 VillagerTalk_hasPartner(void *);
s32 VillagerTalk_getEventKind(void *);
void *VillagerTalk_getPartner(void *);
void VillagerTalk_setPartner(void *, u32);
void VillagerTalk_setInvitedByPartner(void *, u32);
void VillagerMood_requestApply(void *);
void *X_func_ov068_02265f58(void *);
void *PlayerData_GetCurrent();
s32 VillagerMemory_IsUsed(void *);
s32 NpcActor_isPlayerNear(void *, s32, u32);
s32 NpcTalkCtrl_isBusy(void *);
s32 VillagerTalk_begin(void *, void *, s32);
void *NpcActor_getPlayerActor(void *, s32);
void func_02015ab0(void *, void *);
void ActorTalkRequest_setPartnerActor(void *, void *);
void TalkRepeat_Count();
void Villager_ClearTalkUrge(void *);
s32 Villager_GetWhereabouts(void *);
void *VillagerDataItemView_getHousePos(void *);
void FieldPos_FromUnitCenter(void *, u32, u32);
s32 VillagerStates_GetBirthdayHost();
s32 Villager_GetIndex(void *);
s32 TalkRepeat_StartWindow();
void Villager_AddTalkUrge(void *, s32);
s32 Character_setTalkStartMode0(void *);
s32 func_0201b08c(void *, u32, u32);
void Villager_RemoveFlea(void *);
s32 Villager_HasFlea(void *);
s32 Random_GlobalBelow(s32);
void Effect_PlayById(s32, void *, s32, s32);
extern s32 sRandomRouteTypes[];
extern u32 gCamera;
extern Unk_ov068_02265434_Vec gCameraLookAt;
extern Unk_ov068_0226fa68_Pair data_ov068_0226fa68;
extern u16 data_020c6cc8;
extern s32 sFieldVillagerAiCooldown;
extern s16 sSeePlayerArc;
extern Unk_ov068_0225f1a0_Ent sFieldVillagerAiTable[];
extern u8 sSimCatchClassWeights[];
extern u8 sSimCatchClassWeightsPlanned[];
extern u8 gContestRecord[];
extern u32 gSceneBlockMap;
void *Villager_GetState(void *);
s32 Unk_02097ff4_testFlag(void *, s32);
void Clock_GetDateTime(void *);
void *VillagerData_getVillagerId(void *);
s32 VillagerId_GetPersonality(void *);
s32 Personality_IsAsleep(s32, void *);
s32 VillagerId_isValid(void *);
s32 VillagerState_GetActivity(void *);
s32 VillagerRoute_start(void *, void *, s32, s32, void *);
s32 VillagerRoute_isActive(void *);
s32 Random_GlobalBelow(s32);
s32 Unk_02012810_getStage(void *);
void NpcActionCtrl_requestStand(void *, s32, u32);
void Unk_02013474_enableFootsteps(void *);
void VillagerRoute_setStepMode(void *, u32);
void VillagerActor_clearFlag834(void *);
void VillagerMood_enableEffects(void *);
void func_020133a4(void *);
void VillagerRoute_resetTarget(void *);
void VillagerRoute_reset(void *);
void *PlayerActor_GetCharacter(s32);
s32 Villager_IsTalkUrgeFull(void *, s32);
s32 Scene_InTownUnk31();
s32 NpcActor_getDistanceTo(void *, void *);
s32 NpcActor_getRelativeAngleTo(void *, void *);
s32 FieldVillagerAi_IsPlayerShowingCatch(void *, u32);
s32 NpcTalkCtrl_isBusy(void *);
void TalkRepeat_Tick(void *, s32);
void X_func_ov068_02265e6c(void *);
void VillagerMood_update(void *, void *);
s32 VillagerState_GetTalkRepeat(void *);
s32 VillagerState_GetMood(void *);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_getEmotionId(void *);
s32 Emotion_GetEntry(s32);
void NpcEmotionFx_startEntry(void *, s32);
s32 TalkRequest_IsTalking();
s32 VillagerTalk_getEventKind(void *);
void X_func_ov068_0225f630(void *, void *);
s32 Villager_GetPlan(void *);
s32 VillagerPlanBlock_GetPlan(s32);
s32 VillagerPlan_getState(s32);
s32 Talk_PickWeightedIndex(void *, s32);
s32 FishPick_PickForDate(void *, s32, s32, s32, s32, s32, s32);
s32 InsectPick_PickForMonth(void *, s32, s32, s32, s32, s32);
s32 Contest_GetCatchSize(void *);
s32 ContestRecord_getSize(void *);
void ContestRecord_setHolderVillager(void *, void *);
void ContestRecord_setSize(void *, s32);
void ContestRecord_SetItem(void *, void *);
s32 BlockMap_BlockHasAllAttr(u32, s32, s32, s32);
s32 Weather_GetFallingPrecip();
void *VillagerState_GetHeldItem(void *);
void VillagerState_SetHeldItem(void *, void *);
void Trend_GetToolItem(void *, s32);
s32 Item_IsFurniture(void *);
s32 Item_GetFurnitureIndex(void *);
void Villager_GetUmbrella(void *, void *);
void FieldVillagerAi_ChangeState(FieldVillagerAi *self, FieldVillager *o, s32 idx);
void *FieldVillager_GetTalkRepeat(FieldVillager *o);
void FieldVillager_StopEmotion(FieldVillager *o);
s32 FieldVillagerAi_PickRandomRouteType(FieldVillagerAi *self);
s32 FieldVillager_IsInRect(Unk_ov068_0226546c_Rect *r, Unk_ov068_02265434_Vec *a, Unk_ov068_02265434_Vec *b);
void FieldVillagerAi_ClearResumeState(FieldVillagerAi *self);
void FieldVillagerAi_SetResumeState(FieldVillagerAi *self, s32 v);
void FieldVillagerAi_Update(FieldVillagerAi *self, FieldVillager *o);
void FieldVillager_SimulateFishCatch(FieldVillager *o, u8 *b);
void FieldVillager_SimulateInsectCatch(FieldVillager *o, u8 *b);
s32 FieldVillager_CanSimulateCatch(FieldVillager *o);
s32 FieldVillagerAi_IsState(FieldVillagerAi *self, s32 v);
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
extern "C" void FieldVillagerAi_StartRoute(FieldVillagerAi *self, s32 a, FieldVillager *o);
extern "C" s32 FieldVillagerAi_PickRandomRouteType(FieldVillagerAi *self);
extern "C" s32 FieldVillager_IsNearCameraFocus(Unk_ov068_0226546c_Rect *r, FieldVillager *o);
extern "C" s32 FieldVillager_IsInRect(Unk_ov068_0226546c_Rect *r, Unk_ov068_02265434_Vec *a, Unk_ov068_02265434_Vec *b);
extern "C" s32 FieldVillagerAi_EnterWander(FieldVillagerAi *self, FieldVillager *o);
extern "C" void FieldVillagerAi_InitTimers(FieldVillagerAi *self);
extern "C" void FieldVillagerAi_StartCooldown(FieldVillagerAi *self);
extern "C" s32 FieldVillagerAi_IsFreeIdle(FieldVillagerAi *self);
extern "C" s32 FieldVillagerAi_IsState(FieldVillagerAi *self, s32 v);
extern "C" s32 FieldVillagerAi_CanSeePlayer(FieldVillagerAi *self, FieldVillager *o);
extern "C" s32 FieldVillagerAi_Resume(FieldVillagerAi *self, FieldVillager *o);
extern "C" void FieldVillagerAi_ClearResumeState(FieldVillagerAi *self);
extern "C" void FieldVillagerAi_SaveResumeState(FieldVillagerAi *self);
extern "C" void FieldVillagerAi_SetResumeState(FieldVillagerAi *self, s32 v);
extern "C" void FieldVillagerAi_ChangeState(FieldVillagerAi *self, FieldVillager *o, s32 idx);
extern "C" void FieldVillagerAi_Update(FieldVillagerAi *self, FieldVillager *o);
extern "C" void *FieldVillager_GetTalkRepeat(FieldVillager *o);
extern "C" u32 FieldVillager_GetMood(FieldVillager *o);
extern "C" void FieldVillager_StopEmotion(FieldVillager *o);
extern "C" void FieldVillager_UpdateCatchSim(FieldVillager *o);
extern "C" void FieldVillager_SimulateFishCatch(FieldVillager *o, u8 *b);
extern "C" void FieldVillager_SimulateInsectCatch(FieldVillager *o, u8 *b);
extern "C" s32 FieldVillager_CanSimulateCatch(FieldVillager *o);
extern "C" void FieldVillager_UpdateUmbrella(FieldVillager *o);
}

namespace ns_02265d34 {
extern "C" {
extern Unk_ov068_0226fb80_Fn data_ov068_0226f870;
extern u16 sFleaRemovedHoldFrames;
extern u16 data_020c6cc8;
extern Unk_ov068_022661c8_Blk data_021cb69c;
extern Unk_ov068_0226647c_Row kCameraSwayPatterns[];
extern s16 data_02135f44[];
void X_func_ov068_0225f838(void *, ...);
s32 X_func_ov068_0225f83c(void *);
void X_func_ov068_0225f840(void *, void *);
void X_func_ov068_0225f8f0(void *);
void X_func_ov068_0225f900(void *);
void X_func_ov068_0225f6b0(void *);
void X_func_ov068_0225f670(void *, void *);
void FieldVillagerAi_InitTimers(void *);
void FieldVillagerAi_ChangeState(void *, void *, s32);
void X_func_ov068_0226581c(void *);
void FieldVillager_UpdateUmbrella(void *);
void *VillagerData_getVillagerId(void *);
s32 VillagerId_isValid(void *);
u8 *Villager_GetState(void *);
s32 VillagerState_GetActivity(void *);
void *Villager_GetPlan(void *);
void *VillagerPlanBlock_GetPlan(void *);
void Clock_GetDateTime(void *);
s32 Trend_IsValid(s32);
s32 VillagerPlan_getState(void *);
s32 VillagerPlan_isTrendOlderThan(void *, void *, s32);
s32 VillagerTalk_getEventKind(void *);
s32 Random_GlobalBelow(s32);
void VillagerState_SetActivity(void *, s32);
s32 NpcTalkCtrl_isBusy(void *);
s32 ActorCollider_isHitByGroup(void *, s32);
void *PlayerActor_GetCharacter(s32);
s32 Math_AngleXZ(void *, void *);
void *PlayerData_GetCurrent();
void *PlayerData_getPlayerId(void *);
BOOL PlayerId_isValid(void *);
BOOL Villager_FindMemory(void *, void *);
void Npc_GetStateHeldItem(void *, void *);
void HeldToolModel_attach(void *, void *, void *, s32, s32);
void HeldToolModel_playIdleAnim(void *, u32, s32);
void HeldToolModel_setAnimSpeed(void *, s32);
void Villager_HalveTalkUrge(void *);
s32 Villager_HasFlea(void *);
s32 func_0202d8ec(void *);
void HeldToolModel_release(void *);
void Effect_End(s32);
s32 func_0201b138(void *);
void HeldToolModel_draw(void *, void *);
s32 func_0202d948(void *);
s32 VillagerStates_GetBirthdayVisitor();
s32 Villager_GetIndex(void *);
s32 VillagerStates_GetBirthdayHost();
u32 Villager_GetWhereabouts(void *);
s32 func_0202dab0(void *);
void NpcActor_setTalkRequest(void *, void *);
s32 HeldToolModel_load(void *, void *);
s32 VillagerState_GetRole(void *);
void HeldToolModel_init(void *);
s32 func_020e7500(void *);
s32 func_01ffcb0c(s32, s32);
}
static inline BOOL Unk_ov068_02266320_IsZero(s32 v) {
    return v == 0 ? TRUE : FALSE;
}
extern "C" s32 Camera_UpdateSway(Unk_ov068_0226647c_Cam *c);
extern "C" void Camera_SetSwayPattern2(Unk_ov068_0226647c_Cam *c, s32 idx);
extern "C" void Camera_SetSwayPattern(Unk_ov068_0226647c_Cam *c, s32 idx);
extern "C" FieldVillager *FieldVillager_Create();
}

namespace nsD {
extern "C" {
extern s16 data_020c6cc0;
extern s16 data_020c905c;
void _ZN21FieldVillagerAiStates15execAdmireCatchEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates16admireCatchStep1EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates16admireCatchStep0EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates16enterAdmireCatchEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12execPushTalkEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates13pushTalkStep1EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates13pushTalkStep0EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates13enterPushTalkEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates11execHitTalkEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12hitTalkStep2EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12hitTalkStep1EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12hitTalkStep0EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12enterHitTalkEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates10execPushedEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates11pushedStep1EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates11pushedStep0EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates11enterPushedEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12execHitByNetEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates13hitByNetStep2EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates13hitByNetStep1EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates13hitByNetStep0EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates13enterHitByNetEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates19execPitfallClimbOutEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates20enterPitfallClimbOutEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates11execPitfallEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12pitfallStep4EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12pitfallStep3EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12pitfallStep2EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12pitfallStep1EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12pitfallStep0EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12enterPitfallEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates12enterInHouseEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates13execGoInHouseEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates14goInHouseStep2EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates14goInHouseStep1EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates14goInHouseStep0EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates14enterGoInHouseEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates13execOffscreenEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates14enterOffscreenEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiStates10execWanderEP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiPutAway15execPutAwayItemEP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiPutAway16putAwayItemStep1EP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiPutAway16putAwayItemStep0EP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiPutAway16enterPutAwayItemEP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiTakeOut15execTakeOutItemEP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiTakeOut16takeOutItemStep1EP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiTakeOut16takeOutItemStep0EP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiTakeOut16enterTakeOutItemEP15Unk_ov068_Owner();
void _ZN29FieldVillagerAiBirthdayInvite18execBirthdayInviteEP15Unk_ov068_Owner();
void _ZN29FieldVillagerAiBirthdayInvite19birthdayInviteStep2EP15Unk_ov068_Owner();
void _ZN29FieldVillagerAiBirthdayInvite19birthdayInviteStep1EP15Unk_ov068_Owner();
void _ZN29FieldVillagerAiBirthdayInvite19birthdayInviteStep0EP15Unk_ov068_Owner();
void _ZN29FieldVillagerAiBirthdayInvite19enterBirthdayInviteEP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiBirthdayWait16execBirthdayWaitEP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiBirthdayWait17enterBirthdayWaitEP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates15execFleaRemovedEP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates16fleaRemovedStep1EP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates16fleaRemovedStep0EP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates16enterFleaRemovedEP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates12execJoinTalkEP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates13enterJoinTalkEP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates14execFaceTalkerEP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates15faceTalkerStep0EP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates15enterFaceTalkerEP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates12execApproachEP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates13approachStep4EP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates13approachStep3EP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates13approachStep2EP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates13approachStep1EP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates13approachStep0EP15Unk_ov068_Owner();
void _ZN27FieldVillagerAiPlayerStates13enterApproachEP15Unk_ov068_Owner();
void _ZN23FieldVillagerAiReaction12execReactionEP15Unk_ov068_Owner();
void _ZN23FieldVillagerAiReaction13reactionStep1EP15Unk_ov068_Owner();
void _ZN23FieldVillagerAiReaction13reactionStep0EP15Unk_ov068_Owner();
void _ZN23FieldVillagerAiReaction13enterReactionEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat8execChatEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat9chatStep3EP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat9chatStep2EP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat9chatStep1EP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat9chatStep0EP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat9enterChatEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat23tryChatAdoptAblePatternEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat24tryChatRevertCatchphraseEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat20tryChatRevertClothesEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat18tryChatSpreadShirtEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat24tryChatSpreadCatchphraseEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat14tryChatNeutralEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiChat21tryChatMoodByRelationEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiTalk8execTalkEP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiTalk9talkStep1EP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiTalk9talkStep0EP15Unk_ov068_Owner();
void _ZN19FieldVillagerAiTalk9enterTalkEP15Unk_ov068_Owner();
void _ZN25FieldVillagerAiLeaveHouse14execLeaveHouseEP15Unk_ov068_Owner();
void _ZN25FieldVillagerAiLeaveHouse15leaveHouseStep1EP15Unk_ov068_Owner();
void _ZN25FieldVillagerAiLeaveHouse15leaveHouseStep0EP15Unk_ov068_Owner();
void _ZN25FieldVillagerAiLeaveHouse15enterLeaveHouseEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiAbsent10execAbsentEP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiAbsent11absentStep1EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiAbsent11absentStep0EP15Unk_ov068_Owner();
void _ZN21FieldVillagerAiAbsent11enterAbsentEP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiInHouse11execInHouseEP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiInHouse12inHouseStep1EP15Unk_ov068_Owner();
void _ZN22FieldVillagerAiInHouse12inHouseStep0EP15Unk_ov068_Owner();
void _ZN13FieldVillager11drawDefaultEv();
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
void *data_ov068_0226fa10[2] = {(void *)_ZN21FieldVillagerAiStates12pitfallStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sReactionStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f958[2] = {(void *)_ZN27FieldVillagerAiPlayerStates15execFleaRemovedEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatRevertClothesDeltas[8] = {0xc8, 0xbc, 0xd8, 0xec, 0x00, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f980[2] = {(void *)_ZN19FieldVillagerAiChat14tryChatNeutralEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatNoPlayerMoods[4] = {0x02, 0x03, 0x01, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f938[2] = {(void *)_ZN21FieldVillagerAiStates16admireCatchStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f900[2] = {(void *)_ZN22FieldVillagerAiTakeOut16takeOutItemStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f970[2] = {(void *)_ZN19FieldVillagerAiChat21tryChatMoodByRelationEP15Unk_ov068_Owner, 0};
}
}
namespace ns_02265324 {
extern "C" {
void *data_ov068_0226f878[2] = {(void *)FieldVillagerAi_EnterWander, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f850[2] = {(void *)_ZN21FieldVillagerAiStates13hitByNetStep2EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f910[2] = {(void *)_ZN13FieldVillager11drawDefaultEv, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sFieldVillagerPushLimit[4] = {0x64, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 sBirthdayInviteSteps[6];
}
}
namespace nsD {
extern "C" {
u32 sPushTalkSteps[4];
}
}
namespace nsD {
extern "C" {
extern const u8 sSimCatchClassWeightsPlanned[8] = {0x0a, 0x0a, 0x05, 0x05, 0x46, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 sHitTalkStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb58[2] = {(void *)_ZN27FieldVillagerAiPlayerStates14execFaceTalkerEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatRevertCatchphraseDeltas[8] = {0xf6, 0xee, 0xe4, 0xf2, 0xfe, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f920[2] = {(void *)_ZN27FieldVillagerAiPlayerStates16fleaRemovedStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sChatSteps[8];
}
}
namespace nsD {
extern "C" {
u32 sTalkSteps[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f830[2] = {(void *)_ZN19FieldVillagerAiTalk8execTalkEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
Unk_ov068_0225f1a0_Ent sFieldVillagerAiTable[8] = {
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
extern const u8 sChatMoodByRelationDeltas[8] = {0x02, 0x08, 0x10, 0x0a, 0x06, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f960[2] = {(void *)_ZN21FieldVillagerAiAbsent11enterAbsentEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sChatStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb48[2] = {(void *)_ZN19FieldVillagerAiChat8execChatEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9e0[2] = {(void *)_ZN21FieldVillagerAiStates12pitfallStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb38[2] = {(void *)_ZN27FieldVillagerAiPlayerStates12execJoinTalkEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb30[2] = {(void *)_ZN21FieldVillagerAiStates13pushTalkStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatCatchphraseMoods[4] = {0x01, 0x03, 0x02, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb20[2] = {(void *)_ZN21FieldVillagerAiStates14goInHouseStep2EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
Unk_ov068_0225f1a0_Ent sFieldVillagerAiTable2[8] = {
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
u32 sPitfallClimbOutSteps[2];
}
}
namespace nsD {
extern "C" {
extern const u8 sFieldVillagerAiCooldown[4] = {0xb0, 0x04, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 sPutAwayItemSteps[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb00[2] = {(void *)_ZN29FieldVillagerAiBirthdayInvite19enterBirthdayInviteEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226faf8[2] = {(void *)_ZN29FieldVillagerAiBirthdayInvite18execBirthdayInviteEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226faf0[2] = {(void *)_ZN22FieldVillagerAiTakeOut16enterTakeOutItemEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa68[2] = {(void *)_ZN13FieldVillager11drawDefaultEv, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fae0[2] = {(void *)_ZN21FieldVillagerAiStates14goInHouseStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sTalkStepsGuard;
}
}
namespace nsD {
extern "C" {
Unk_ov068_0225f1a0_Ent sFieldVillagerAiTable3[8] = {
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
u32 sReactionSteps[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226faa8[2] = {(void *)_ZN27FieldVillagerAiPlayerStates13approachStep2EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fab0[2] = {(void *)_ZN21FieldVillagerAiStates13enterHitByNetEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fac0[2] = {(void *)_ZN21FieldVillagerAiStates20enterPitfallClimbOutEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fac8[2] = {(void *)_ZN21FieldVillagerAiStates11execPitfallEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sApproachStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb08[2] = {(void *)_ZN27FieldVillagerAiBirthdayWait16execBirthdayWaitEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb28[2] = {(void *)_ZN27FieldVillagerAiPlayerStates13approachStep4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb40[2] = {(void *)_ZN21FieldVillagerAiStates13execGoInHouseEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa90[2] = {(void *)_ZN21FieldVillagerAiStates10execPushedEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa88[2] = {(void *)_ZN27FieldVillagerAiPlayerStates13approachStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa80[2] = {(void *)_ZN21FieldVillagerAiStates12execPushTalkEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatEmotions[8] = {0x14, 0x15, 0x16, 0x19, 0x1b, 0x04, 0x0b, 0x1d};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa78[2] = {(void *)_ZN21FieldVillagerAiStates12pitfallStep4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sFaceTalkerStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8b8[2] = {(void *)_ZN25FieldVillagerAiLeaveHouse15enterLeaveHouseEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f808[2] = {(void *)_ZN27FieldVillagerAiPlayerStates15faceTalkerStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa58[2] = {(void *)_ZN21FieldVillagerAiStates12pitfallStep4EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sTakeOutItemStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa50[2] = {(void *)_ZN23FieldVillagerAiReaction13reactionStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa48[2] = {(void *)_ZN21FieldVillagerAiStates12hitTalkStep2EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sAbsentStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa38[2] = {(void *)_ZN19FieldVillagerAiChat9chatStep3EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sInHouseStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f898[2] = {(void *)_ZN21FieldVillagerAiStates14enterGoInHouseEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatSpreadCatchphraseDeltas[8] = {0x02, 0x0e, 0x1c, 0x12, 0x0a, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 sAbsentSteps[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f890[2] = {(void *)_ZN21FieldVillagerAiStates14enterOffscreenEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f0f4[4] = {0x07, 0x0e, 0x24, 0x2b};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatBadMoods[4] = {0x02, 0x03, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 sApproachSteps[10];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f840[2] = {(void *)_ZN27FieldVillagerAiPlayerStates16fleaRemovedStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
s16 sSeePlayerArc = data_020c6cc0;
}
}
namespace nsD {
extern "C" {
extern const u8 sChatAblePatternDeltas[8] = {0x01, 0x02, 0x06, 0x04, 0x02, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatSpreadShirtDeltas[8] = {0x01, 0x02, 0x0c, 0x04, 0x02, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
u32 sGoInHouseSteps[6];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9d8[2] = {(void *)_ZN19FieldVillagerAiChat23tryChatAdoptAblePatternEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9d0[2] = {(void *)_ZN21FieldVillagerAiStates12enterHitTalkEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9c8[2] = {(void *)_ZN21FieldVillagerAiStates12execHitByNetEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sHitByNetSteps[6];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9b8[2] = {(void *)_ZN21FieldVillagerAiStates12hitTalkStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9b0[2] = {(void *)_ZN19FieldVillagerAiChat20tryChatRevertClothesEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9a8[2] = {(void *)_ZN19FieldVillagerAiChat18tryChatSpreadShirtEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9a0[2] = {(void *)_ZN22FieldVillagerAiPutAway16putAwayItemStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 data_ov068_0226f13c[8] = {0x00, 0x14, 0x46, 0x14, 0x1e, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f998[2] = {(void *)_ZN19FieldVillagerAiChat24tryChatSpreadCatchphraseEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f990[2] = {(void *)_ZN22FieldVillagerAiPutAway16enterPutAwayItemEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f988[2] = {(void *)_ZN22FieldVillagerAiTakeOut15execTakeOutItemEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8f0[2] = {(void *)_ZN27FieldVillagerAiPlayerStates12execApproachEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f978[2] = {(void *)_ZN22FieldVillagerAiPutAway16putAwayItemStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sPutAwayItemStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f968[2] = {(void *)_ZN27FieldVillagerAiBirthdayWait17enterBirthdayWaitEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatNeutralDeltas[8] = {0xfa, 0xf6, 0xf0, 0xf8, 0xfe, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatTopicWeights[8] = {0x0f, 0x0a, 0x0f, 0x14, 0x0a, 0x0f, 0x0f, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f918[2] = {(void *)_ZN19FieldVillagerAiChat9enterChatEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sGoInHouseStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f928[2] = {(void *)_ZN27FieldVillagerAiPlayerStates13enterJoinTalkEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f858[2] = {(void *)_ZN19FieldVillagerAiTalk9talkStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f860[2] = {(void *)_ZN29FieldVillagerAiBirthdayInvite19birthdayInviteStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sChatOutcomesGuard;
}
}
namespace nsD {
extern "C" {
u32 sTakeOutItemSteps[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9f8[2] = {(void *)_ZN21FieldVillagerAiStates16enterAdmireCatchEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sPushedSteps[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb18[2] = {(void *)_ZN21FieldVillagerAiAbsent10execAbsentEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa28[2] = {(void *)_ZN19FieldVillagerAiChat9chatStep2EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa60[2] = {(void *)_ZN23FieldVillagerAiReaction13reactionStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sAdmireCatchStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa98[2] = {(void *)_ZN21FieldVillagerAiStates11enterPushedEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fad0[2] = {(void *)_ZN21FieldVillagerAiStates12enterPitfallEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fab8[2] = {(void *)_ZN21FieldVillagerAiStates19execPitfallClimbOutEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fad8[2] = {(void *)_ZN22FieldVillagerAiPutAway15execPutAwayItemEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb10[2] = {(void *)_ZN21FieldVillagerAiStates14goInHouseStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sFleaRemovedStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8d0[2] = {(void *)_ZN29FieldVillagerAiBirthdayInvite19birthdayInviteStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8c8[2] = {(void *)_ZN23FieldVillagerAiReaction13enterReactionEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8c0[2] = {(void *)_ZN19FieldVillagerAiTalk9enterTalkEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sHitByNetStepsGuard;
}
}
namespace nsD {
extern "C" {
u32 sChatOutcomes[14];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8a8[2] = {(void *)_ZN21FieldVillagerAiStates12enterInHouseEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8a0[2] = {(void *)_ZN21FieldVillagerAiStates11pushedStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f820[2] = {(void *)_ZN21FieldVillagerAiAbsent11absentStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa20[2] = {(void *)_ZN19FieldVillagerAiChat9chatStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f838[2] = {(void *)_ZN25FieldVillagerAiLeaveHouse15leaveHouseStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sLeaveHouseSteps[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f848[2] = {(void *)_ZN25FieldVillagerAiLeaveHouse15leaveHouseStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sBirthdayInviteStepsGuard;
}
}
namespace nsD {
extern "C" {
extern const u8 sRandomRouteTypes[12] = {0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f870[2] = {(void *)_ZN13FieldVillager11drawDefaultEv, 0};
}
}
namespace ns_02265d34 {
extern "C" {
Unk_ov068_Scene_Entry sFieldVillagerProfile = {(void *(*)())FieldVillager_Create, 0x84, 0x88, 2, 0x5000, 0x5000, 0x3e800};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f880[2] = {(void *)_ZN29FieldVillagerAiBirthdayInvite19birthdayInviteStep2EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8d8[2] = {(void *)_ZN22FieldVillagerAiTakeOut16takeOutItemStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8e8[2] = {(void *)_ZN27FieldVillagerAiPlayerStates13enterApproachEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatDurations[20] = {0xf0, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f908[2] = {(void *)_ZN21FieldVillagerAiStates11pushedStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sLeaveHouseStepsGuard;
}
}
namespace nsD {
extern "C" {
u32 sHitTalkSteps[6];
}
}
namespace nsD {
extern "C" {
u32 sPitfallSteps[10];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f948[2] = {(void *)_ZN22FieldVillagerAiInHouse12inHouseStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9e8[2] = {(void *)_ZN21FieldVillagerAiStates13enterPushTalkEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa08[2] = {(void *)_ZN19FieldVillagerAiChat9chatStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa18[2] = {(void *)_ZN21FieldVillagerAiStates12hitTalkStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa70[2] = {(void *)_ZN27FieldVillagerAiPlayerStates13approachStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sApproachAnimFx[8] = {0x45, 0x00, 0x04, 0x00, 0x4f, 0x00, 0x1d, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fae8[2] = {(void *)_ZN27FieldVillagerAiPlayerStates13approachStep3EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sAdmireCatchSteps[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f800[2] = {(void *)_ZN21FieldVillagerAiStates13pushTalkStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sPitfallClimbOutStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8b0[2] = {(void *)_ZN22FieldVillagerAiInHouse11execInHouseEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sInHouseSteps[4];
}
}
namespace nsD {
extern "C" {
extern const u8 sSimCatchClassWeights[8] = {0x0a, 0x05, 0x05, 0x00, 0x50, 0x00, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa00[2] = {(void *)_ZN21FieldVillagerAiStates15execAdmireCatchEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sFleaRemovedSteps[4];
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9c0[2] = {(void *)_ZN19FieldVillagerAiChat24tryChatRevertCatchphraseEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8e0[2] = {(void *)_ZN19FieldVillagerAiTalk9talkStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f8f8[2] = {(void *)_ZN27FieldVillagerAiPlayerStates15enterFaceTalkerEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sPushTalkStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f930[2] = {(void *)_ZN21FieldVillagerAiAbsent11absentStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f940[2] = {(void *)_ZN27FieldVillagerAiPlayerStates16enterFleaRemovedEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa30[2] = {(void *)_ZN21FieldVillagerAiStates12pitfallStep2EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226faa0[2] = {(void *)_ZN21FieldVillagerAiStates11execHitTalkEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
extern const u8 sChatClothesMoods[4] = {0x01, 0x03, 0x02, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f810[2] = {(void *)_ZN21FieldVillagerAiStates13hitByNetStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f818[2] = {(void *)_ZN23FieldVillagerAiReaction12execReactionEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f888[2] = {(void *)_ZN21FieldVillagerAiStates13execOffscreenEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f868[2] = {(void *)_ZN21FieldVillagerAiStates10execWanderEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sPitfallStepsGuard;
}
}
namespace nsD {
extern "C" {
u32 sPushedStepsGuard;
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fa40[2] = {(void *)_ZN21FieldVillagerAiStates12pitfallStep3EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
u32 sFaceTalkerSteps[2];
}
}
namespace nsD {
extern "C" {
s16 sTalkFacingArc = data_020c905c;
}
}
namespace nsD {
extern "C" {
extern const u8 sFleaRemovedHoldFrames[4] = {0x58, 0x02, 0x00, 0x00};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f950[2] = {(void *)_ZN22FieldVillagerAiInHouse12inHouseStep0EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226fb50[2] = {(void *)_ZN25FieldVillagerAiLeaveHouse14execLeaveHouseEP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f828[2] = {(void *)_ZN21FieldVillagerAiStates13hitByNetStep1EP15Unk_ov068_Owner, 0};
}
}
namespace nsD {
extern "C" {
void *data_ov068_0226f9f0[2] = {(void *)_ZN21FieldVillagerAiStates16admireCatchStep1EP15Unk_ov068_Owner, 0};
}
}
namespace ns_02265d34 {
extern "C" {
extern "C" FieldVillager *FieldVillager_Create() {
    return new FieldVillager();
}
}
}

BOOL FieldVillager::vfunc_a8() {
    using namespace ns_02265d34;
    BOOL r = FALSE;
    BOOL f = FALSE;
    if (villagerData != NULL) {
        if (Villager_GetState(villagerData) != NULL) {
            f = TRUE;
        }
    }
    if (f) {
        if (VillagerState_GetRole(Villager_GetState(villagerData)) == 1) {
            r = TRUE;
        }
    }
    return r;
}

BOOL FieldVillager::vfunc_04() {
    using namespace ns_02265d34;
    if (func_0202dab0(this) == 0) {
        return FALSE;
    }
    NpcActor_setTalkRequest(this, &villagerTalk);
    villagerTalk.obj.vfunc_08();
    talkPartner = NULL;
    talkType = 0;
    talkReason = 3;
    u16 buf = 0xfff1;
    if (Unk_ov068_02266320_IsZero(HeldToolModel_load((&heldTool), &buf))) {
        return FALSE;
    }
    curHeldTool = (&heldTool);
    pitfallEffect = -1;
    isInPitfall = 0;
    wasHitByNet = 0;
    pushFrames = 0;
    lastCatchSimMinute = 0xff;
    unk_a05 = 0;
    refreshActivity();
    FieldVillager_UpdateUmbrella(this);
    return TRUE;
}

BOOL FieldVillager::vfunc_00() {
    using namespace ns_02265d34;
    void *a = vfunc_64();
    if (func_0202d948(this) == 0) {
        return FALSE;
    }
    look.drawFn = data_ov068_0226f870;
    X_func_ov068_0225f670((&look), this);
    s32 t = VillagerStates_GetBirthdayVisitor();
    FieldVillagerAi_InitTimers((&ai));
    if (t == Villager_GetIndex(a)) {
        FieldVillagerAi_ChangeState((&ai), this, 0xd);
    } else if (VillagerStates_GetBirthdayHost() == Villager_GetIndex(a)) {
        FieldVillagerAi_ChangeState((&ai), this, 0xc);
    } else {
        switch (Villager_GetWhereabouts(a)) {
        case 0: {
            u16 buf;
            FieldVillagerAi_ChangeState((&ai), this, 0);
            Npc_GetStateHeldItem(&buf, this);
            if (buf != 0xfff1) {
                attachHeldItemModel();
            }
            break;
        }
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            FieldVillagerAi_ChangeState((&ai), this, 0xc);
            break;
        default:
            FieldVillagerAi_ChangeState((&ai), this, 3);
            break;
        }
    }
    X_func_ov068_0225f8f0((&fleaFx));
    return TRUE;
}

BOOL FieldVillager::drawDefault() {
    using namespace ns_02265d34;
    data_021cb69c = *(Unk_ov068_022661c8_Blk *)((u8 *)&model + 0x150 - 0xec);
    if (func_0201b138(this) == 0) {
        return FALSE;
    }
    HeldToolModel_draw((&heldTool), this);
    return TRUE;
}

BOOL FieldVillager::onDraw() {
    using namespace ns_02265d34;
    BOOL r = TRUE;
    if (look.drawFn != 0) {
        r = (this->*look.drawFn)();
    } else {
        Unk_ov068_0225f23c_Vec *pv = (Unk_ov068_0225f23c_Vec *)&position;
        jointPos[0].x = position.x;
        jointPos[0].y = pv->y;
        jointPos[0].z = pv->z;
        jointPos[1].x = position.x;
        jointPos[1].y = pv->y;
        jointPos[1].z = pv->z;
        jointPos[2].x = position.x;
        jointPos[2].y = pv->y;
        jointPos[2].z = pv->z;
    }
    return r;
}

BOOL FieldVillager::vfunc_0c() {
    using namespace ns_02265d34;
    if (func_0202d8ec(this) == 0) {
        return FALSE;
    }
    HeldToolModel_release((&heldTool));
    curHeldTool = NULL;
    if (pitfallEffect != -1) {
        Effect_End(pitfallEffect);
        pitfallEffect = -1;
    }
    return TRUE;
}

BOOL FieldVillager::onToolHit(u16 *p) {
    using namespace ns_02265d34;
    BOOL result = FALSE;
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= 0x1376 && v <= 0x1376) {
        r = TRUE;
    }
    if (r || (v >= 0x1377 && v <= 0x1377)) {
        if (vfunc_64() != NULL) {
            Villager_HalveTalkUrge(vfunc_64());
        }
        if (Villager_HasFlea(villagerData) != 0) {
            X_func_ov068_0225f840((&fleaFx), this);
            X_func_ov068_0225f838((&fleaFx), sFleaRemovedHoldFrames);
            result = TRUE;
        } else if (getPlayerMemory() != 0) {
            wasHitByNet = 1;
        }
    }
    return result;
}

BOOL FieldVillager::vfunc_b0() {
    using namespace ns_02265d34;
    if (X_func_ov068_0225f83c((&fleaFx)) != 0) {
        X_func_ov068_0225f838((&fleaFx), 0);
        return TRUE;
    }
    return FALSE;
}

void FieldVillager::attachHeldItemModel() {
    using namespace ns_02265d34;
    u16 a;
    u16 b;
    Npc_GetStateHeldItem(&a, this);
    if (a != 0xfff1) {
        Npc_GetStateHeldItem(&b, this);
        HeldToolModel_attach((&heldTool), this, &b, 0, 0);
        HeldToolModel_playIdleAnim((&heldTool), data_020c6cc8, 0);
        HeldToolModel_setAnimSpeed((&heldTool), 0x1000);
        heldTool.visible = 1;
    }
}

s32 FieldVillager::getPlayerMemory() {
    using namespace ns_02265d34;
    void *x;
    void *p;
    if (PlayerData_GetCurrent() != NULL) {
        x = PlayerData_getPlayerId(PlayerData_GetCurrent());
    } else {
        x = NULL;
    }
    p = vfunc_64();
    if (x != NULL && PlayerId_isValid(x) && p != NULL && VillagerId_isValid(VillagerData_getVillagerId(p)) != 0) {
        return Villager_FindMemory(p, x);
    }
    return 0;
}

BOOL FieldVillager::isPlayerFacing() {
    using namespace ns_02265d34;
    if (collider.isHit != 0 && ActorCollider_isHitByGroup(&collider, 4) != 0) {
        Unk_ov068_02265ee8_Obj *p = (Unk_ov068_02265ee8_Obj *)PlayerActor_GetCharacter(4);
        if (p != NULL && p->speed != 0) {
            s16 d = Math_AngleXZ(&p->position, &position) - p->moveAngleY;
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

void FieldVillager::updateStareTimer() {
    using namespace ns_02265d34;
    if (drawEnabled != 0 && updateEnabled != 0 && look.drawFn != 0 && NpcTalkCtrl_isBusy(&talkCtrl) == 0 && getPlayerMemory() != 0) {
        if (isPlayerFacing()) {
            pushFrames++;
            if ((s32)pushFrames >= 100) {
                pushFrames = 100;
            }
        } else {
            pushFrames = 0;
        }
    } else {
        pushFrames = 0;
    }
}

void FieldVillager::chooseActivity() {
    using namespace ns_02265d34;
    void *a = vfunc_64();
    if (a != NULL) {
        if (VillagerId_isValid(VillagerData_getVillagerId(a)) != 0) {
            s32 r5 = 8;
            void *p = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
            s32 r4 = VillagerPlan_getState(p);
            s32 r7 = Random_GlobalBelow(100);
            Unk_ov068_02265d34_Vec2 buf;
            buf.a = 0;
            buf.b = 0;
            Clock_GetDateTime(&buf);
            if (r7 < 30) {
                if (VillagerPlan_isTrendOlderThan(p, &buf, 3) != 0) {
                    r4 = (u8)Random_GlobalBelow(r5);
                }
            }
            if (Trend_IsValid(r4) != 0 || r4 == 8) {
                r5 = r4;
            }
            switch (VillagerTalk_getEventKind(this)) {
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
            VillagerState_SetActivity(Villager_GetState(a), r5);
        }
    }
}

void FieldVillager::refreshActivity() {
    using namespace ns_02265d34;
    void *a = vfunc_64();
    if (a != NULL) {
        if (VillagerId_isValid(VillagerData_getVillagerId(a)) != 0) {
            s32 t = VillagerState_GetActivity(Villager_GetState(a));
            void *p = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
            Unk_ov068_02265d34_Vec2 buf;
            buf.a = 0;
            buf.b = 0;
            Clock_GetDateTime(&buf);
            if (Trend_IsValid(t) != 0 || t == 8) {
                if (t == VillagerPlan_getState(p) || VillagerPlan_isTrendOlderThan(p, &buf, 3) != 0) {
                    if (VillagerTalk_getEventKind(this) != 3 && VillagerTalk_getEventKind(this) != 4 && VillagerTalk_getEventKind(this) != 5) {
                        return;
                    }
                }
            }
            chooseActivity();
        }
    }
}

namespace ns_02265324 {
extern "C" {
void FieldVillager_UpdateUmbrella(FieldVillager *o) {
    void *p = o->vfunc_64();
    if (p != 0 && VillagerId_isValid(VillagerData_getVillagerId(p)) != 0) {
        u16 v;
        u16 w;
        u32 z;
        void *r4 = Villager_GetState(p);
        s32 r5 = VillagerState_GetActivity(r4);
        s32 r7 = Weather_GetFallingPrecip();
        if (r7 != 1) {
            if (Unk_ov068_02265c24_R((u16 *)VillagerState_GetHeldItem(r4), 0x1380, 0x139f)) {
                w = 0xfff1;
                VillagerState_SetHeldItem(r4, &w);
            }
        }
        if (!Unk_ov068_02265c24_R((u16 *)VillagerState_GetHeldItem(r4), 0x1380, 0x139f)) {
            Trend_GetToolItem(&v, r5);
            u16 *q = (u16 *)VillagerState_GetHeldItem(r4);
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
                VillagerState_SetHeldItem(r4, &v);
            }
        }
        if (Unk_ov068_02265c24_R((u16 *)VillagerState_GetHeldItem(r4), 0x1378, 0x1378) && r7 == 1) {
            Villager_GetUmbrella(&z, p);
            VillagerState_SetHeldItem(r4, &z);
        }
    }
}
}
}

namespace ns_02265324 {
extern "C" {
s32 FieldVillager_CanSimulateCatch(FieldVillager *o) {
    s32 t = VillagerTalk_getEventKind(o);
    if ((u8)(t + 0xfd) <= 1) {
        u8 *p = (u8 *)PlayerActor_GetCharacter(4);
        u32 g = gSceneBlockMap;
        if (p != 0 && g != 0) {
            Unk_ov068_02265bcc_Vec v;
            Unk_ov068_02265bcc_Src *pv = (Unk_ov068_02265bcc_Src *)(p + 0x5c);
            v.x = *(s32 *)(p + 0x5c);
            v.y = pv->y;
            v.z = pv->z;
            if (BlockMap_BlockHasAllAttr(g, v.x >> 17, v.z >> 17, 0x200) == 0) {
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
void FieldVillager_SimulateInsectCatch(FieldVillager *o, u8 *b) {
    u8 *t = sSimCatchClassWeights;
    u8 *g = gContestRecord;
    if (VillagerPlan_getState(VillagerPlanBlock_GetPlan(Villager_GetPlan(o->vfunc_64()))) == 0) {
        t = sSimCatchClassWeightsPlanned;
    }
    s32 idx = Talk_PickWeightedIndex(t, 5);
    if ((u32)idx < 4) {
        u16 v = 0xfff1;
        if (InsectPick_PickForMonth(&v, idx, idx + 1, b[2], b[2], b[4]) != 0) {
            BOOL k = FALSE;
            u32 v0 = v;
            if (*(volatile u16 *)&v >= 0x12b0 && v0 <= 0x12e7) {
                k = TRUE;
            }
            if (k) {
                s32 x = Contest_GetCatchSize(&v);
                s32 y = ContestRecord_getSize(g);
                if ((x >> 12) > (y >> 12)) {
                    void *w = VillagerData_getVillagerId(o->vfunc_64());
                    ContestRecord_setHolderVillager(g, w);
                    ContestRecord_setSize(g, x);
                    ContestRecord_SetItem(g, &v);
                }
            }
        }
    }
}
}
}

namespace ns_02265324 {
extern "C" {
void FieldVillager_SimulateFishCatch(FieldVillager *o, u8 *b) {
    u8 *t = sSimCatchClassWeights;
    u8 *g = gContestRecord;
    if (VillagerPlan_getState(VillagerPlanBlock_GetPlan(Villager_GetPlan(o->vfunc_64()))) == 1) {
        t = sSimCatchClassWeightsPlanned;
    }
    s32 idx = Talk_PickWeightedIndex(t, 5);
    if ((u32)idx < 4) {
        u16 v = 0xfff1;
        if (FishPick_PickForDate(&v, idx, idx + 1, b[4], b[3], b[2], b[2]) != 0) {
            BOOL k = FALSE;
            u32 v0 = v;
            if (*(volatile u16 *)&v >= 0x12e8 && v0 <= 0x131f) {
                k = TRUE;
            }
            if (k) {
                s32 x = Contest_GetCatchSize(&v);
                s32 ty = ContestRecord_getSize(g) * 10;
                s32 tx = x * 10;
                if ((tx >> 12) > (ty >> 12)) {
                    void *w = VillagerData_getVillagerId(o->vfunc_64());
                    ContestRecord_setHolderVillager(g, w);
                    ContestRecord_setSize(g, x);
                    ContestRecord_SetItem(g, &v);
                }
            }
        }
    }
}
}
}

namespace ns_02265324 {
extern "C" {
void FieldVillager_UpdateCatchSim(FieldVillager *o) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    Clock_GetDateTime(buf);
    if (*(u8 *)((u8 *)o + 0xa04) != ((u8 *)buf)[1]) {
        if (TalkRequest_IsTalking() == 0) {
            if (FieldVillager_CanSimulateCatch(o) != 0) {
                s32 r = VillagerTalk_getEventKind(o);
                if (r != 3) {
                    if (r == 4) {
                        FieldVillager_SimulateInsectCatch(o, (u8 *)buf);
                    }
                } else {
                    FieldVillager_SimulateFishCatch(o, (u8 *)buf);
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
void FieldVillager_StopEmotion(FieldVillager *o) {
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 8) {
        if (NpcActionCtrl_getEmotionId((u8 *)o + 0x564) != 0) {
            s32 r = Emotion_GetEntry(0);
            if (r != 0) {
                *(u8 *)((u8 *)o + 0x445) = 0;
                NpcEmotionFx_startEntry((u8 *)o + 0x420, r);
            }
        }
    }
}
}
}

namespace ns_02265324 {
extern "C" {
u32 FieldVillager_GetMood(FieldVillager *o) {
    void *p;
    void *q;
    s32 r;
    if (o->vfunc_64() != 0 && VillagerId_isValid(VillagerData_getVillagerId(o->vfunc_64())) != 0) {
        q = Villager_GetState(o->vfunc_64());
    } else {
        q = 0;
    }
    if (q != 0) {
        r = VillagerState_GetMood(q);
    } else {
        r = 0;
    }
    return (u8)r;
}
}
}

namespace ns_02265324 {
extern "C" {
void *FieldVillager_GetTalkRepeat(FieldVillager *o) {
    void *p = o->vfunc_64();
    void *q;
    void *r;
    if (p != 0 && VillagerId_isValid(VillagerData_getVillagerId(p)) != 0 && (q = Villager_GetState(p)) != 0) {
        r = (void *)VillagerState_GetTalkRepeat(q);
    } else {
        r = 0;
    }
    return r;
}
}
}

BOOL FieldVillager::updateAct() {
    using namespace ns_02265324;
    updateStareTimer();
    void *p = FieldVillager_GetTalkRepeat(this);
    if (p != 0) {
        TalkRepeat_Tick(p, NpcTalkCtrl_isBusy((u8 *)this + 0x618));
    }
    FieldVillagerAi_Update(&ai, this);
    fleaFx.update(this);
    VillagerMood_update(&mood, this);
    look.update(this);
    *(u8 *)((u8 *)this + 0xa01) = 0;
    return TRUE;
}

FieldVillagerAi *FieldVillagerAi::initAi() {
    using namespace ns_02265324;
    VillagerRoute_resetTarget(route);
    approachTarget = 0;
    resumeState = 0x18;
    unk_00 = 0x10000;
    unk_04 = 0x10000;
    unk_08 = 0x1a000;
    unk_0c = 0xa000;
    cooldown = 0;
    VillagerRoute_reset(route);
    stateTimer = 0;
    routeTimeout = -1;
    routeStepTimer = 0;
    seekPlayerCooldown = 0;
    talkUrgeTimer = 0;
    chatTarget = 0;
    activityTimer = 0;
    heldItemCheckTimer = -1;
    pitfallTimer = 0;
    hitCount = 0;
    hitResetTimer = 0;
    lookStopTimer = 0;
    lookStopCooldown = 0;
    isAdmiringCatch = 0;
    return this;
}

FieldVillagerAi::~FieldVillagerAi() {
    using namespace ns_02265324;
    func_020133a4(route);
}

namespace ns_02265324 {
extern "C" {
void FieldVillagerAi_Update(FieldVillagerAi *self, FieldVillager *o) {
    if (self->isAdmiringCatch != 0) {
        if (FieldVillagerAi_IsPlayerShowingCatch(self, self->isAdmiringCatch) == 0) {
            self->isAdmiringCatch = 0;
        }
    }
    if (self->stateEntry != 0) {
        (self->*(self->stateEntry->b))(o);
    }
    if (self->stateTimer > 0) {
        self->stateTimer--;
    }
    if (self->routeTimeout > 0) {
        self->routeTimeout--;
    }
    if (self->routeStepTimer > 0) {
        self->routeStepTimer--;
    }
    if (self->lookStopTimer > 0) {
        self->lookStopTimer--;
    }
    if (self->lookStopCooldown > 0) {
        self->lookStopCooldown--;
    }
    if (self->cooldown > 0) {
        self->cooldown--;
    }
    if (self->hitResetTimer != 0) {
        self->hitResetTimer--;
    }
    if (NpcTalkCtrl_isBusy((u8 *)o + 0x618) == 0) {
        if (self->seekPlayerCooldown > 0) {
            self->seekPlayerCooldown--;
        } else if (self->talkUrgeTimer > 0) {
            self->talkUrgeTimer--;
        }
        if (self->activityTimer > 0) {
            self->activityTimer--;
        }
        if (self->heldItemCheckTimer > 0) {
            self->heldItemCheckTimer--;
        }
    }
    if (self->pitfallTimer > 0) {
        self->pitfallTimer--;
    }
}
}
}

namespace ns_02265324 {
extern "C" {
void FieldVillagerAi_ChangeState(FieldVillagerAi *self, FieldVillager *o, s32 idx) {
    if (idx >= 0 && idx < 0x18) {
        self->state = idx;
        self->stateEntry = &sFieldVillagerAiTable[self->state];
        self->step = 0;
        if (self->stateEntry != 0) {
            if (self->stateEntry->a != 0) {
                (self->*(self->stateEntry->a))(o);
            }
        }
    }
}
}
}

namespace ns_02265324 {
extern "C" {
void FieldVillagerAi_SetResumeState(FieldVillagerAi *self, s32 v) {
    self->resumeState = v;
}
}
}

namespace ns_02265324 {
extern "C" {
void FieldVillagerAi_SaveResumeState(FieldVillagerAi *self) {
    FieldVillagerAi_SetResumeState(self, self->state);
}
}
}

namespace ns_02265324 {
extern "C" {
void FieldVillagerAi_ClearResumeState(FieldVillagerAi *self) {
    self->resumeState = 0x18;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 FieldVillagerAi_Resume(FieldVillagerAi *self, FieldVillager *o) {
    s32 r = 0;
    if (self->resumeState < 0x18) {
        FieldVillagerAi_ChangeState(self, o, self->resumeState);
        FieldVillagerAi_ClearResumeState(self);
        r = 1;
    }
    return r;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 FieldVillagerAi_CanSeePlayer(FieldVillagerAi *self, FieldVillager *o) {
    void *p = PlayerActor_GetCharacter(4);
    BOOL k;
    s32 kr;
    if (o->vfunc_64() != 0) {
        kr = Villager_IsTalkUrgeFull(o->vfunc_64(), 0);
    } else {
        kr = 0;
    }
    if (kr != 0) {
        k = TRUE;
    } else {
        k = FALSE;
    }
    s32 res = 0;
    if (Scene_InTownUnk31() == 0) {
        if (self->seekPlayerCooldown <= 0 && k != 0 && p != 0) {
            if (NpcActor_getDistanceTo(o, p) <= 0x7000) {
                s32 d = NpcActor_getRelativeAngleTo(o, p);
                s32 lim = sSeePlayerArc;
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
s32 FieldVillagerAi_IsFreeIdle(FieldVillagerAi *self) {
    if (FieldVillagerAi_IsState(self, 0) != 0 && self->cooldown == 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_02265324 {
extern "C" {
void FieldVillagerAi_StartCooldown(FieldVillagerAi *self) {
    self->cooldown = sFieldVillagerAiCooldown;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 FieldVillagerAi_IsState(FieldVillagerAi *self, s32 v) {
    if (self->state == v) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_02265324 {
extern "C" {
void FieldVillagerAi_InitTimers(FieldVillagerAi *self) {
    self->activityTimer = Random_GlobalBelow(0x1770);
    self->heldItemCheckTimer = -1;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 FieldVillagerAi_EnterWander(FieldVillagerAi *self, FieldVillager *o) {
    FieldVillager_StopEmotion(o);
    *(Unk_ov068_0226fa68_Nest *)((u8 *)o + 0x8ac) = *(Unk_ov068_0226fa68_Nest *)&data_ov068_0226fa68;
    NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
    Unk_02013474_enableFootsteps((u8 *)o + 0x558);
    X_func_ov068_0225f630((u8 *)o + 0x894, o);
    if (VillagerRoute_isActive(self->route) != 0) {
        VillagerRoute_setStepMode(self->route, 0);
    } else {
        FieldVillagerAi_StartRoute(self, 0, o);
        self->routeTimeout = -1;
        self->routeStepTimer = 0;
    }
    VillagerActor_clearFlag834(o);
    *(u8 *)((u8 *)o + 0x561) = 1;
    *(u8 *)((u8 *)o + 0x562) = 1;
    self->talkUrgeTimer = -1;
    *(u8 *)((u8 *)o + 0x9ec) = 1;
    VillagerMood_enableEffects((u8 *)o + 0x838);
    return TRUE;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 FieldVillager_IsInRect(Unk_ov068_0226546c_Rect *r, Unk_ov068_02265434_Vec *a, Unk_ov068_02265434_Vec *b) {
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
s32 FieldVillager_IsNearCameraFocus(Unk_ov068_0226546c_Rect *r, FieldVillager *o) {
    Unk_ov068_02265434_Vec *pb = (Unk_ov068_02265434_Vec *)&o->position;
    s32 res = 0;
    if (gCamera != 0) {
        Unk_ov068_02265434_Vec v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        res = FieldVillager_IsInRect(r, &v, pb);
    }
    return res;
}
}
}

namespace ns_02265324 {
extern "C" {
s32 FieldVillagerAi_PickRandomRouteType(FieldVillagerAi *self) {
    s32 k;
    if (VillagerRoute_isActive(self->route) != 0) {
        k = 2;
    } else {
        k = 3;
    }
    s32 i = Random_GlobalBelow(k);
    s32 r5 = sRandomRouteTypes[i];
    if (r5 == Unk_02012810_getStage(self->route)) {
        s32 n = i + 1;
        if (n >= 3) {
            n = 0;
        }
        r5 = sRandomRouteTypes[n];
    }
    return r5;
}
}
}

namespace ns_02265324 {
extern "C" {
void FieldVillagerAi_StartRoute(FieldVillagerAi *self, s32 a, FieldVillager *o) {
    void *x = o->vfunc_64();
    s32 r4 = 7;
    if (x != 0) {
        Unk_ov068_02265324_Flags *f = (Unk_ov068_02265324_Flags *)Villager_GetState(x);
        if (f->unk_1d_1 != 0) {
            r4 = 3;
        } else {
            s32 r6;
            void *t = PlayerData_GetCurrent();
            if (t != 0) {
                r6 = Unk_02097ff4_testFlag(t, 1);
            } else {
                r6 = 0;
            }
            u32 buf[2];
            buf[0] = 0;
            buf[1] = 0;
            Clock_GetDateTime(buf);
            if (!(r6 != 0 ? TRUE : FALSE)) {
                if (Personality_IsAsleep(VillagerId_GetPersonality(VillagerData_getVillagerId(x)), buf) != 0) {
                    r4 = 3;
                    goto done;
                }
            }
            r6 = 7;
            if (VillagerId_isValid(VillagerData_getVillagerId(x)) != 0) {
                if (Villager_GetState(x) != 0) {
                    r6 = VillagerState_GetActivity(Villager_GetState(x));
                }
            }
            if (r6 == 6) {
                r4 = 6;
            }
        }
    }
done:
    if (r4 == 7) {
        r4 = FieldVillagerAi_PickRandomRouteType(self);
    }
    VillagerRoute_start(self->route, &o->position, r4, a, o);
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL FieldVillagerAi_ShouldGoHome(void *self, Unk_ov068_Owner_649 *o) {
    void *a = PlayerData_GetCurrent();
    s32 t;
    if (a != 0) {
        t = Unk_02097ff4_testFlag(a, 1);
    } else {
        t = 0;
    }
    BOOL f = Unk_ov068_022652d0_B(t);
    void *p = o->vfunc_64();
    BOOL r = TRUE;
    Unk_ov068_0226506c_Flags *fl = (Unk_ov068_0226506c_Flags *)((u8 *)Villager_GetState(p) + 0x1d);
    if (fl->f1 == 0 && (f != 0 || Villager_IsAsleep(p, 0) == 0)) {
        r = FALSE;
    }
    return r;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL FieldVillagerAi_IsAtHomeDoor(FieldVillagerAiStates *self, Unk_ov068_Owner_649 *o) {
    BOOL r;
    if (VillagerRoute_isActive(self->route) != 0 && Unk_02012810_getStage(self->route) == 3) {
        u8 *p = (u8 *)VillagerDataItemView_getHousePos(o->vfunc_64());
        Unk_ov068_022649f4_Vec t;
        FieldPos_FromUnitCenter(&t, p[0], p[1] + 1);
        if (func_020e9650(&t, &o->position) < 0x800) {
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
BOOL FieldVillagerAi_DirCrossesPlayerTalk(void *self, void *a, Unk_ov068_022649f4_Vec *b) {
    if (TalkRequest_IsTalking() != 0) {
        if (func_020e96ec(b, gVec3Zero) != 0) {
            u8 *p = (u8 *)PlayerActor_GetCharacter(4);
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
s32 FieldVillagerAi_HeadingCrossesPlayerTalk(void *self, Unk_ov068_Owner_649 *o) {
    if (o->speed != 0) {
        Unk_ov068_022649f4_Vec t;
        t.x = 0;
        t.y = 0;
        t.z = 0x1000;
        func_020e93a0(&t, o->moveAngleY);
        return FieldVillagerAi_DirCrossesPlayerTalk(self, &o->position, &t);
    }
    return 0;
}
}
}

namespace ns_022649f4 {
extern "C" {
s32 FieldVillagerAi_PathCrossesPlayerTalk(void *self, void *a, void *b) {
    Unk_ov068_022649f4_Vec t;
    func_020e9960(&t, a, b);
    return FieldVillagerAi_DirCrossesPlayerTalk(self, b, &t);
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL FieldVillagerAi_IsNearPlayerTalkSpot(void *self, void *v, s32 lim) {
    if (TalkRequest_IsTalking() != 0) {
        u8 *a = (u8 *)PlayerActor_GetCharacter(4);
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
BOOL FieldVillagerAi_GetRouteTarget(FieldVillagerAiStates *self, Unk_ov068_022649f4_Vec *out, Unk_ov068_Owner_649 *o) {
    if (o->vfunc_64() != 0) {
        Unk_ov068_0226506c_Flags *fl = (Unk_ov068_0226506c_Flags *)((u8 *)Villager_GetState(o->vfunc_64()) + 0x1d);
        if (fl->f1 != 0) {
            if (Unk_02012810_getStage(self->route) != 3) {
                self->routeTimeout = 0;
            }
        }
    }
    if (VillagerRoute_isActive(self->route) == 0 || self->routeTimeout == 0) {
        FieldVillagerAi_StartRoute(self, 0, o);
        self->routeTimeout = -1;
        self->routeStepTimer = 0;
    }
    Unk_ov068_022649f4_Vec *pv = &o->position;
    out->x = pv->x;
    out->y = pv->y;
    out->z = pv->z;
    if (Unk_02012810_runStep(self->route, out) != 0) {
        if (self->routeTimeout == -1) {
            self->routeTimeout = 0x1770;
        }
    }
    return TRUE;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL FieldVillagerAi_HandleBlockedMove(void *self, Unk_ov068_Owner_649 *o) {
    BOOL r;
    u8 *r7 = o->actionCtrl;
    u8 *r6 = o->moveCtrl;
    u8 buf[12];
    r = FALSE;
    if (NpcMoveCtrl_hasArrived(r6, o, 1) == 0) {
        switch (NpcActor_findAvoidPos(o, buf)) {
        case 1:
            NpcActionCtrl_requestStand(r7, 1, data_020c6cc8);
            r = TRUE;
            break;
        case 2:
            NpcMoveCtrl_setDestination(r6, buf);
            break;
        }
    } else {
        if (NpcMoveCtrl_hasNextLeg(r6) != 0) {
            NpcMoveCtrl_resetDestination(r6);
        }
    }
    return r;
}
}
}

namespace ns_022649f4 {
extern "C" {
void *FieldVillagerAi_FindChatPartner(void *self, Unk_ov068_Owner_649 *o) {
    Unk_ov068_Owner_649 *s = o;
    void *pos = o;
    s16 lim = data_020c6cc0;
    Unk_ov068_Owner_649 *e;
    s32 i;
    pos = &o->position;
    for (i = 0; i < 8; i++) {
        e = (Unk_ov068_Owner_649 *)NpcRegistry_GetVillager(i);
        if (e == 0) {
            continue;
        }
        if (e->villagerData == 0) {
            continue;
        }
        u16 *a = (u16 *)VillagerData_getVillagerId(s->villagerData);
        u16 *b = (u16 *)VillagerData_getVillagerId(e->villagerData);
        if (b[0] == a[0]) {
            if (memcmp(b + 1, a + 1, 8) == 0) {
                if (((u8 *)b)[0xb] == ((u8 *)a)[0xb]) {
                    continue;
                }
            }
        }
        if (func_020e9650(pos, &e->position) >= 0x3000) {
            continue;
        }
        s32 d = Math_AngleXZ(pos, &e->position);
        if (NpcLookAt_IsWithin((s16)(d - s->rotY), lim) != 0) {
            return e;
        }
    }
    return 0;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL FieldVillagerAi_TryStartChat(FieldVillagerAiStates *self, Unk_ov068_Owner_649 *o) {
    if (Random_GlobalBelow(5) == 0) {
        if (o->vfunc_b4() != 0) {
            Unk_ov068_Owner_649 *t = (Unk_ov068_Owner_649 *)FieldVillagerAi_FindChatPartner(self, o);
            if (t != 0) {
                if (t->vfunc_b8(o) != 0) {
                    VillagerTalk_setPartner(o, t);
                    VillagerTalk_setInvitedByPartner(o, 0);
                    FieldVillagerAi_SaveResumeState(self);
                    FieldVillagerAi_ChangeState(o->ai, o, 9);
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
BOOL FieldVillagerAi_CheckHeldItemChange(FieldVillagerAiStates *self, Unk_ov068_Owner_649 *o) {
    struct {
        u16 h[13];
        s32 z[2];
    } l;
    s32 id;
#define W (*(volatile u16 *)&l.h[0])
    void *p;
    s32 m;

    if (NpcActionCtrl_getAction(o->actionCtrl) != 0) {
        goto fail;
    }
    if (NpcActionCtrl_isActionDone(o->actionCtrl) == 0) {
        goto fail;
    }
    p = o->vfunc_64();
    l.z[0] = 0;
    l.z[1] = 0;
    id = 7;
    m = Weather_GetFallingPrecip(7);
    if (p != 0) {
        if (VillagerId_isValid(VillagerData_getVillagerId(p)) != 0) {
            if (Villager_GetState(p) != 0) {
                id = VillagerState_GetActivity(Villager_GetState(p));
            }
        }
    }
    Clock_GetDateTime(l.z);
    s16 t = self->activityTimer;
    if (t == 0 || self->heldItemCheckTimer == 0) {
        if (t == 0) {
            X_func_ov068_02265dc8(o);
            if (p != 0) {
                if (VillagerId_isValid(VillagerData_getVillagerId(p)) != 0) {
                    if (Villager_GetState(p) != 0) {
                        id = VillagerState_GetActivity(Villager_GetState(p));
                    }
                }
            }
            self->activityTimer = 0x2ee0;
        }
        Npc_GetStateHeldItem(&l.h[1], o);
        if (l.h[1] == 0xfff1) {
            W = 0xfff1;
            if (Trend_IsValid(id) != 0) {
                Trend_GetToolItem(&l.h[2], id);
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
            self->heldItemCheckTimer = -1;
            if (W == 0xfff1) {
                goto fail;
            }
            VillagerTalk_setSpeakerStateUnk(o, &l.h[0]);
            FieldVillagerAi_ChangeState(self, o, 0xf);
            FieldVillagerAi_SetResumeState(self, 0);
            return TRUE;
        }
        Npc_GetStateHeldItem(&l.h[4], o);
        if (Unk_ov068_02264b9c_InRange(l.h, 4, 0x1380, 0x139f)) {
            if (m == 1) {
                goto fail;
            }
            self->heldItemCheckTimer = 0x12c;
            FieldVillagerAi_ChangeState(self, o, 0x10);
            FieldVillagerAi_SetResumeState(self, 0);
            return TRUE;
        }
        Trend_GetToolItem(&l.h[5], id);
        Npc_GetStateHeldItem(&l.h[6], o);
        if (Unk_ov068_02264b9c_Same(&l.h[5], &l.h[6]) == 0) {
            FieldVillagerAi_ChangeState(self, o, 0x10);
            FieldVillagerAi_SetResumeState(self, 0);
            self->heldItemCheckTimer = 0x12c;
            return TRUE;
        }
        self->heldItemCheckTimer = -1;
    } else {
        Npc_GetStateHeldItem(&l.h[7], o);
        if (l.h[7] == 0xfff1) {
            if (m != 1) {
                goto fail;
            }
            Villager_GetUmbrella(&l.h[8], p);
            VillagerTalk_setSpeakerStateUnk(o, &l.h[8]);
            FieldVillagerAi_ChangeState(self, o, 0xf);
            FieldVillagerAi_SetResumeState(self, 0);
            self->heldItemCheckTimer = -1;
            return TRUE;
        }
        Npc_GetStateHeldItem(&l.h[9], o);
        if (Unk_ov068_02264b9c_InRange(l.h, 9, 0x1380, 0x139f)) {
            if (m == 1) {
                goto fail;
            }
            self->heldItemCheckTimer = 0x12c;
            FieldVillagerAi_ChangeState(self, o, 0x10);
            FieldVillagerAi_SetResumeState(self, 0);
            return TRUE;
        }
        Npc_GetStateHeldItem(&l.h[10], o);
        BOOL f = FALSE;
        volatile u16 *q = l.h;
        u32 hh = q[10];
        u32 ll = q[10];
        if (ll >= 0x1378 && hh <= 0x1378) {
            f = TRUE;
        }
        if (f) {
            if (m == 1) {
                FieldVillagerAi_ChangeState(self, o, 0x10);
                FieldVillagerAi_SetResumeState(self, 0);
                self->heldItemCheckTimer = 0x12c;
                return TRUE;
            }
        }
        Npc_GetStateHeldItem(&l.h[11], o);
        Trend_GetToolItem(&l.h[12], id);
        if (Unk_ov068_02264b9c_Same(&l.h[11], &l.h[12])) {
            goto fail;
        }
        FieldVillagerAi_ChangeState(self, o, 0x10);
        FieldVillagerAi_SetResumeState(self, 0);
        self->heldItemCheckTimer = 0x12c;
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
BOOL FieldVillagerAi_IsBuriedPitfallAt(void *self, Unk_ov068_02264ab4_P2 *v) {
    void *g = gSceneBlockMap;
    if (g != 0) {
        s32 x = v->x;
        s32 y = v->y;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *c = (u16 *)BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (c != 0) {
            BOOL r = FALSE;
            if (Unk_ov068_02264b30_InRange(c)) {
                if (BlockMap_IsBuriedAtUnit(g, v->x, v->y) != 0) {
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
BOOL FieldVillagerAi_TryFallInPitfall(void *self, Unk_ov068_Owner_649 *o) {
    BOOL r;
    Unk_ov068_022649f4_Vec *p = &o->position;
    s32 a, b;
    Unk_ov068_02264ab4_P2 q;
    Unk_ov068_022649f4_Vec t;
    r = FALSE;
    a = r;
    b = r;
    FieldPos_ToUnit(&a, &b, p);
    if (FieldVillagerAi_IsBuriedPitfallAt(self, (Unk_ov068_02264ab4_P2 *)&a) != 0) {
        FieldPos_SnapToUnitCenter(&t, p);
        if (func_020e9650(&t, p) <= 0xb00) {
            q.x = a;
            q.y = b;
            s32 idx = FieldAction_RequestPitfallAt((s8)NpcActor_getNpcIndex(o), &q);
            if (idx >= 0) {
                if (FieldAction_PollResult() == 1) {
                    r = TRUE;
                }
                FieldAction_Release(idx);
            }
        }
    }
    return r;
}
}
}

namespace ns_022649f4 {
extern "C" {
s32 FieldVillagerAi_WasHitByNet(void *self, Unk_ov068_Owner_649 *o) {
    if (o->wasHitByNet != 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_022649f4 {
extern "C" {
s32 FieldVillagerAi_IsPlayerShowingCatch(void *self) {
    u32 v = PlayerActor_GetLocalShownItem();
    if ((v >= 0x12e8 && v <= 0x131f) || (v >= 0x12b0 && v <= 0x12e7)) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_022649f4 {
extern "C" {
BOOL FieldVillagerAi_ShouldAdmireCatch(FieldVillagerAiStates *self, Unk_ov068_Owner_649 *o) {
    u32 r = FieldVillager_GetMood(o);
    if (self->isAdmiringCatch == 0) {
        switch (r) {
        case 0:
        case 1:
            if (FieldVillagerAi_IsPlayerShowingCatch(self) != 0) {
                if (o->lookAt[0] == 1) {
                    if (NpcActor_getDistanceToPlayer(o, 4) <= 0x6000) {
                        if (NpcLookAt_canSeeTarget(o->lookAt, o) != 0) {
                            if (Unk_0201a13c_isOnTarget(o->lookAt) != 0) {
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

BOOL FieldVillagerAiStates::checkWanderEvents(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    BOOL r = FALSE;
    if (FieldVillagerAi_IsAtHomeDoor(this, o) != 0) {
        u16 v;
        Npc_GetStateHeldItem(&v, o);
        if (v != 0xfff1) {
            FieldVillagerAi_ChangeState(this, o, 0x10);
            FieldVillagerAi_SetResumeState(this, 2);
        } else {
            FieldVillagerAi_ChangeState(this, o, 2);
        }
        r = TRUE;
    } else if (FieldVillagerAi_TryFallInPitfall(this, o) != 0) {
        FieldVillagerAi_ChangeState(this, o, 0x11);
        r = TRUE;
    } else if (*(u16 *)((u8 *)o + 0xa02) >= sFieldVillagerPushLimit[r]) {
        FieldVillagerAi_ChangeState(this, o, 0x15);
        r = TRUE;
    } else if (FieldVillagerAi_WasHitByNet(this, o) != 0) {
        FieldVillagerAi_ChangeState(this, o, 0x13);
        r = TRUE;
    } else if (FieldVillagerAi_CanSeePlayer(this, o) != 0) {
        FieldVillagerAi_ChangeState(this, o, 7);
        r = TRUE;
    } else if (FieldVillagerAi_TryStartChat(this, o) != 0) {
        r = TRUE;
    } else if (X_func_ov068_0225f83c((u8 *)o + 0x9f0) != 0) {
        FieldVillagerAi_ChangeState(this, o, 0xb);
        r = TRUE;
    } else if (FieldVillagerAi_CheckHeldItemChange(this, o) != 0) {
        r = TRUE;
    } else if (FieldVillagerAi_ShouldAdmireCatch(this, o) != 0) {
        FieldVillagerAi_ChangeState(this, o, 0x17);
        r = TRUE;
    } else if (*(u32 *)((u8 *)o + 0x98) != 0) {
        if (FieldVillagerAi_HandleBlockedMove(this, o) != 0) {
            r = TRUE;
        }
    }
    return r;
}

BOOL FieldVillagerAiStates::execWander(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    u8 *r6 = (u8 *)o + 0x564;
    Unk_ov068_02264188_V3 va, vb;
    if (FieldVillager_IsNearCameraFocus(this, o) != 0) {
    if (checkWanderEvents(o) != 0) {
        goto end;
    }
    if (NpcActionCtrl_isActionDone(r6) != 0) {
        if (lookStopTimer > 0) {
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
            if (NpcLookAt_canSeeTarget((u8 *)o + 0x3b0, o) != 0) {
                goto skip;
            }
        reset:
            lookStopTimer = 0;
            lookStopCooldown = 0x4b0;
            X_func_ov068_0225f630((u8 *)o + 0x894, o);
        skip:;
        }
        if (NpcActionCtrl_getAction(r6) == 0 && lookStopTimer != 0) {
            goto end;
        }
        lookStopTimer = 0;
        if (func_0201acfc((u8 *)o + 0x3aa) == 2) {
            NpcActionCtrl_requestStand(r6, 1, data_020c6cc8);
            goto end;
        }
        if ((Random_Next(gRandom) & 7) == 0) {
            u8 *r7 = (u8 *)o + 0x5c;
            va.x = *(s32 *)gVec3Zero;
            va.y = *(s32 *)(gVec3Zero + 4);
            va.z = *(s32 *)(gVec3Zero + 8);
            if (FieldVillagerAi_GetRouteTarget(this, &va, o) != 0) {
                if (FieldVillagerAi_IsNearPlayerTalkSpot(this, r7, 0xc000) != 0) {
                    if (FieldVillagerAi_PathCrossesPlayerTalk(this, &va, r7) != 0) {
                        goto fail;
                    }
                }
                s32 d = Math_AngleXZ(r7, &va);
                if (NpcActor_IsFrontAngle((s16)(d - *(s16 *)((u8 *)o + 0x8e))) != 0) {
                    s32 m = 1;
                    if (Random_GlobalBelow(4) == 0 && FieldVillager_GetMood(o) == 0) {
                        m = 2;
                    }
                    NpcActionCtrl_requestAction(r6, m, 1, va.x, va.z, 0, 0, 0, 0, data_020c6cc8, 0);
                    stateTimer = 0x100;
                } else {
                    NpcActionCtrl_requestAction(r6, 4, 1, va.x, va.z, 0, d, 0, 0, data_020c6cc8, 0);
                    stateTimer = 0x128;
                }
                goto end;
            }
        fail:
            NpcActionCtrl_requestStand(r6, 1, data_020c6cc8);
            goto end;
        }
        NpcActionCtrl_requestStand(r6, 1, data_020c6cc8);
        goto end;
    }
    if (*(u32 *)((u8 *)o + 0x98) != 0) {
        if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 1 || NpcActionCtrl_getAction((u8 *)o + 0x564) == 2 ||
            NpcActionCtrl_getAction((u8 *)o + 0x564) == 4) {
            if (stateTimer == 0) {
                NpcActionCtrl_requestStand(r6, 1, data_020c6cc8);
                goto end;
            }
            if (lookStopCooldown == 0 && *(u32 *)((u8 *)o + 0x894) == 0 && ((u8 *)0 + *(u32 *)((u8 *)o + 0x898)) <= (u8 *)1 &&
                (s32)*(u16 *)((u8 *)o + 0x8a8) > 0xf) {
                NpcActionCtrl_requestStand(r6, 1, data_020c6cc8);
                lookStopTimer = Random_GlobalBelow(200) + 0xa0;
                lookStopCooldown = 0x4b0;
                goto end;
            }
            if (FieldVillagerAi_IsNearPlayerTalkSpot(this, (u8 *)o + 0x5c, 0x8000) != 0 && FieldVillagerAi_HeadingCrossesPlayerTalk(this, o) != 0) {
                NpcActionCtrl_requestStand(r6, 1, data_020c6cc8);
                goto end;
            }
            s32 *pv = (s32 *)NpcMoveCtrl_getDestination((u8 *)o + 0x350);
            vb.x = pv[0];
            vb.y = pv[1];
            vb.z = pv[2];
            s32 d = Math_AngleXZ((u8 *)o + 0x5c, &vb);
            if (NpcActor_IsFrontAngle((s16)(d - *(s16 *)((u8 *)o + 0x8e))) == 0) {
                NpcActionCtrl_requestStand(r6, 1, data_020c6cc8);
            }
        }
    }
    } else {
        FieldVillagerAi_ChangeState(this, o, 1);
    }
end:
    return FALSE;
}

BOOL FieldVillagerAiStates::enterOffscreen(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    FieldVillager_StopEmotion(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
    stateTimer = 0;
    *(Unk_ov068_022644fc_W *)((u8 *)o + 0x8ac) = *(Unk_ov068_022644fc_W *)__ptmf_null;
    Unk_02013474_disableFootsteps((u8 *)o + 0x558);
    routeStepTimer = 0;
    talkUrgeTimer = 0x384;
    if (VillagerRoute_isActive((u8 *)this + 0x3c) != 0) {
        VillagerRoute_setStepMode((u8 *)this + 0x3c, 1);
    } else {
        FieldVillagerAi_StartRoute(this, 1, o);
        routeTimeout = -1;
        routeStepTimer = 0;
    }
    *((u8 *)o + 0x9ec) = 0;
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

BOOL FieldVillagerAiStates::execOffscreen(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    if (FieldVillager_IsNearCameraFocus(this, o) != 0) {
        FieldVillagerAi_ChangeState(this, o, 0);
    } else {
        VillagerTalkTopics_updateCatchPlans(o, data_ov068_0226f13c, data_ov068_0226f0f4, 1);
        FieldVillager_UpdateCatchSim(o);
        if (talkUrgeTimer == 0) {
            if ((s32)o->vfunc_64() != 0) {
                Villager_RaiseTalkUrge((void *)o->vfunc_64(), 0);
            }
            talkUrgeTimer = 0x384;
        }
        if (VillagerRoute_isActive((u8 *)this + 0x3c) == 0 || routeTimeout == 0) {
            FieldVillagerAi_StartRoute(this, 1, o);
            routeTimeout = -1;
            routeStepTimer = 0;
        }
        if (VillagerRoute_isActive((u8 *)this + 0x3c) != 0) {
            if (FieldVillagerAi_IsAtHomeDoor(this, o) != 0) {
                FieldVillagerAi_ChangeState(this, o, 3);
            } else {
                if (Unk_02012810_getStage((u8 *)this + 0x3c) != 3 && FieldVillagerAi_ShouldGoHome(this, o) != 0) {
                    VillagerRoute_start((u8 *)this + 0x3c, (u8 *)o + 0x5c, 3, 1, o);
                    routeStepTimer = 0;
                }
                if (routeStepTimer == 0) {
                    if (Unk_02012810_runStep((u8 *)this + 0x3c, (u8 *)o + 0x5c) != 0 && routeTimeout == -1) {
                        routeTimeout = 0x1770;
                    }
                    routeStepTimer = 0x28;
                }
            }
        }
    }
    return TRUE;
}

BOOL FieldVillagerAiStates::enterGoInHouse(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    FieldVillager_StopEmotion(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    NpcActionCtrl_requestAction((u8 *)o + 0x564, 3, 2, 0, 0, 0, 0xffff8000, 0, 0, data_020c6cc8, 0);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    VillagerActor_setFlag834(o);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void FieldVillagerAiStates::goInHouseStep0(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 3) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            if (VillagerHouse_TryOpenDoorForEntry(Villager_GetIndex((void *)o->vfunc_64())) != 0) {
                VillagerDataItemView_getHousePos((void *)o->vfunc_64());
                NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 2, 0x3b, 1, data_020c6cc8, 0);
                *((u8 *)o + 0x511) = 0;
                step = 2;
            }
        }
    }
}

void FieldVillagerAiStates::goInHouseStep1(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 1) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            if (VillagerHouse_TryOpenDoorForEntry(Villager_GetIndex((void *)o->vfunc_64())) != 0) {
                VillagerDataItemView_getHousePos((void *)o->vfunc_64());
                NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 2, 0x3b, 1, data_020c6cc8, 0);
                *((u8 *)o + 0x511) = 0;
                step = 2;
            }
        }
    }
}

void FieldVillagerAiStates::goInHouseStep2(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    Unk_ov068_02264188_V3 v;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0x3b) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            FieldVillagerAi_ChangeState(this, o, 3);
            return;
        }
    }
    u8 *p = (u8 *)VillagerDataItemView_getHousePos((void *)o->vfunc_64());
    FieldPos_FromUnitCenter(&v, p[0], p[1] + 1);
    func_020e761c((u8 *)o + 0x5c, v.x, 0x400);
    func_020e761c((u8 *)o + 0x64, v.z, 0x400);
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0x3b) {
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
        Unk_02013474_playFootstepSe((u8 *)o + 0x558, o);
    }
end:;
}

s32 FieldVillagerAiStates::execGoInHouse(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    u32 gv_ = sGoInHouseStepsGuard;
    if ((gv_ & 1) == 0) {
        sGoInHouseSteps[0] = *(Fn_226410c *)data_ov068_0226fae0;
        sGoInHouseSteps[1] = *(Fn_226410c *)data_ov068_0226fb10;
        sGoInHouseSteps[2] = *(Fn_226410c *)data_ov068_0226fb20;
        sGoInHouseStepsGuard = gv_ | 1;
    }
    if (step < 3) {
        (this->*sGoInHouseSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiStates::enterInHouse(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    void *p = PlayerData_GetCurrent();
    s32 r7;
    if (p != 0) {
        r7 = Unk_02097ff4_testFlag(p, 1);
    } else {
        r7 = 0;
    }
    void *a = (void *)o->vfunc_64();
    u8 *r4 = (u8 *)Villager_GetState();
    FieldVillager_StopEmotion(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
    VillagerState_SetRole(r4, 0);
    r4[0x1d] = r4[0x1d] & ~2;
    BOOL f;
    if (r7 != 0) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    if (f == 0 && Villager_IsAsleep(a, 0) != 0) {
        VillagerState_SetPresence(r4, 2);
    } else {
        VillagerState_SetPresence(r4, 0);
    }
    Villager_PlaceReceivedItems(a);
    VillagerActor_setFlag834(o);
    stateTimer = Random_GlobalBelow(0x28) + 0x258;
    *((u8 *)o + 0x562) = 0;
    talkUrgeTimer = 0x384;
    VillagerMood_disableEffects((u8 *)o + 0x838);
    *((u8 *)o + 0x9ec) = 0;
    return TRUE;
}

void FieldVillagerAiInHouse::inHouseStep0(Unk_ov068_Owner *o) {
    using namespace ns_02264000;
    step = 1;
}

void FieldVillagerAiInHouse::inHouseStep1(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    void *ow = o->vfunc_64();
    BOOL r = FALSE;
    *((u8 *)o + 0x561) = r;
    if (Villager_GetWhereabouts(ow) == 2) {
        if (Villager_IsAsleep(ow, r) == 0) {
            if (Villager_GetState(ow) != 0) {
                VillagerState_SetPresence(Villager_GetState(ow), r);
                stateTimer = Random_GlobalBelow(0x28) + 0x258;
            }
            r = TRUE;
        }
    } else if (stateTimer == 0) {
        r = TRUE;
    }
    if (r != 0) {
        if (FieldVillager_IsNearCameraFocus(this, o) != 0) {
            if (NpcActor_isNear(o, PlayerActor_GetCharacter(4), 0x6000) == 0) {
                VillagerRoute_reset(route);
                FieldVillagerAi_ChangeState(this, o, 4);
            }
        } else {
            void *x = Villager_GetState(ow);
            u8 *y = (u8 *)VillagerDataItemView_getHousePos(ow);
            VillagerState_SetRole(x, 1);
            VillagerState_SetPresence(x, 0);
            FieldPos_FromUnitCenter((u8 *)o + 0x5c, y[0], y[1] + 1);
            Unk_ov068_0226392c_V3 *s = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x5c);
            Unk_ov068_0226392c_V3 *d = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x68);
            *d = *s;
            VillagerRoute_reset(route);
            FieldVillagerAi_ChangeState(this, o, 0);
            u16 buf;
            Npc_GetStateHeldItem(&buf, o);
            if (buf != 0xfff1) {
                X_func_ov068_02265fb4(o);
            }
        }
    } else if (talkUrgeTimer == 0) {
        if (o->vfunc_64() != 0) {
            Villager_RaiseTalkUrge(o->vfunc_64(), 0);
        }
        talkUrgeTimer = 0x384;
    }
}

s32 FieldVillagerAiInHouse::execInHouse(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    u32 gv_ = sInHouseStepsGuard;
    if ((gv_ & 1) == 0) {
        sInHouseSteps[0] = *(Fn_2263e4c *)data_ov068_0226f950;
        sInHouseSteps[1] = *(Fn_2263e4c *)data_ov068_0226f948;
        sInHouseStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sInHouseSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiAbsent::enterAbsent(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    void *ow = o->vfunc_64();
    u8 *r4 = (u8 *)Villager_GetState(ow);
    u8 *t = (u8 *)VillagerDataItemView_getHousePos(ow);
    NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    if (VillagerState_GetRole(r4) == 1) {
        VillagerState_SetRole(r4, 0);
    }
    r4[0x1d] &= ~2;
    VillagerActor_setFlag834(o);
    *((u8 *)o + 0x562) = 0;
    *((u8 *)o + 0x563) = 1;
    FieldPos_FromUnitCenter((u8 *)o + 0x5c, t[0], t[1]);
    Unk_ov068_0226392c_V3 *s = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x5c);
    Unk_ov068_0226392c_V3 *d = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x68);
    *d = *s;
    *((u8 *)o + 0x9ec) = 0;
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void FieldVillagerAiAbsent::absentStep0(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    step = 1;
}

void FieldVillagerAiAbsent::absentStep1(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    *((u8 *)o + 0x561) = 0;
    step = 2;
}

s32 FieldVillagerAiAbsent::execAbsent(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    u32 gv_ = sAbsentStepsGuard;
    if ((gv_ & 1) == 0) {
        sAbsentSteps[0] = *(Fn_2263cf0 *)data_ov068_0226f930;
        sAbsentSteps[1] = *(Fn_2263cf0 *)data_ov068_0226f820;
        sAbsentStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sAbsentSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiLeaveHouse::enterLeaveHouse(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    u8 *t = (u8 *)VillagerDataItemView_getHousePos(o->vfunc_64());
    FieldVillager_StopEmotion(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    FieldPos_FromUnitCenter((u8 *)o + 0x5c, t[0], t[1] + 1);
    *(u16 *)((u8 *)o + 0x8e) = 0;
    *(u16 *)((u8 *)o + 0x94) = 0;
    NpcMoveCtrl_setTargetAngle((u8 *)o + 0x350);
    *(s32 *)((u8 *)o + 0x64) += 0x1000;
    Unk_ov068_0226392c_V3 *s = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x5c);
    Unk_ov068_0226392c_V3 *d = (Unk_ov068_0226392c_V3 *)((u8 *)o + 0x68);
    *d = *s;
    VillagerActor_setFlag834(o);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    talkUrgeTimer = -1;
    *((u8 *)o + 0x9ec) = 0;
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void FieldVillagerAiLeaveHouse::leaveHouseStep0(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    void *ow = o->vfunc_64();
    void *r6 = Villager_GetState(ow);
    Villager_GetIndex(ow);
    if (VillagerHouse_TryOpenDoorForExit() != 0) {
        NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 2, 0x3d, 1, 1, 0);
        *(Unk_ov068_02263b90_Fn *)((u8 *)o + 0x8ac) = data_ov068_0226f910;
        VillagerState_SetRole(r6, 1);
        VillagerState_SetPresence(r6, 0);
        *((u8 *)o + 0x561) = 1;
        *((u8 *)o + 0x562) = 1;
        NpcActor_setCollisionRadius(o, 0);
        step = 1;
    }
}

void FieldVillagerAiLeaveHouse::leaveHouseStep1(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0x3d) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            u16 buf;
            *((u8 *)o + 0x511) = 1;
            NpcActor_setCollisionRadius(o, 0xd00);
            *(u32 *)((u8 *)o + 0x4e8) &= ~2;
            Npc_GetStateHeldItem(&buf, o);
            if (buf != 0xfff1) {
                FieldVillagerAi_ChangeState(this, o, 0xf);
                FieldVillagerAi_SetResumeState(this, 0);
                activityTimer += 0x12c;
            } else {
                FieldVillagerAi_ChangeState(this, o, 0);
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
            Unk_02013474_playFootstepSe((u8 *)o + 0x558, o);
        done:;
        }
    }
}

s32 FieldVillagerAiLeaveHouse::execLeaveHouse(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    u32 gv_ = sLeaveHouseStepsGuard;
    if ((gv_ & 1) == 0) {
        sLeaveHouseSteps[0] = *(Fn_2263a40 *)data_ov068_0226f838;
        sLeaveHouseSteps[1] = *(Fn_2263a40 *)data_ov068_0226f848;
        sLeaveHouseStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sLeaveHouseSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiTalk::enterTalk(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    FieldVillager_StopEmotion(o);
    Unk_020133cc_Player_resetLastTaughtEmotion(o);
    if (VillagerTalk_hasPartner(o) != 0) {
        NpcTalkCtrl_requestTalk((u8 *)o + 0x618, 1, 0);
    } else if (*((u8 *)o + 0xa00) != 0) {
        NpcTalkCtrl_requestTalk((u8 *)o + 0x618, 0, 0);
        X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    } else {
        void *p = func_02015aac((u8 *)o + 0x680);
        s32 v = 0;
        if (p != 0) {
            v = NpcActor_getAngleTo(o, p);
        }
        X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        NpcTalkCtrl_requestTurnAndTalk((u8 *)o + 0x618, 0, v, 0);
    }
    return TRUE;
}

void FieldVillagerAiTalk::talkStep0(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    if (NpcTalkCtrl_isBusy((u8 *)o + 0x618) == 0) {
        VillagerMood_requestApply((u8 *)o + 0x838);
        TalkRequest_SetTargetDone(o);
        VillagerTalk_setPartner(o, 0);
        VillagerTalk_setInvitedByPartner(o, 0);
        step = 1;
    }
}

void FieldVillagerAiTalk::talkStep1(Unk_ov068_Owner *o) {
    using namespace ns_02263600;}

s32 FieldVillagerAiTalk::execTalk(Unk_ov068_Owner *o) {
    using namespace ns_02263600;
    u32 gv_ = sTalkStepsGuard;
    if ((gv_ & 1) == 0) {
        sTalkSteps[0] = *(Fn_22638c0 *)data_ov068_0226f858;
        sTalkSteps[1] = *(Fn_22638c0 *)data_ov068_0226f8e0;
        sTalkStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sTalkSteps[step])(o);
    }
    return 0;
}

namespace ns_02263600 {
extern "C" {
s32 FieldVillagerAi_GetRelationLevel(void *a, void *b) {
    void *g = gSaveVillagers;
    s32 res = 2;
    if (g != 0) {
        s32 a1 = SaveVillagers_FindIndex(g, (s32)a);
        s32 a2 = SaveVillagers_FindIndex(g, (s32)b);
        s32 r = SaveVillagers_GetRelationLevel(g, a1, a2);
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
s32 FieldVillagerAi_GetPartnerRelationLevel(void *a, void *o) {
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    void *x = ((Unk_ov068_Owner *)o)->vfunc_64();
    void *y = p->vfunc_64();
    void *a1 = (void *)VillagerData_getVillagerId(x);
    void *a2 = (void *)VillagerData_getVillagerId(y);
    return FieldVillagerAi_GetRelationLevel(a1, a2);
}
}
}

namespace ns_02263600 {
extern "C" {
void FieldVillagerAi_AddRelationByLevel(void *a, void *r1, void *r2, s8 *t) {
    void *g = gSaveVillagers;
    if (g != 0) {
        s32 k = FieldVillagerAi_GetRelationLevel(r1, r2);
        if (k < 5) {
            SaveVillagers_AddRelation(g, (s32)r1, (s32)r2, t[k]);
        }
    }
}
}
}

namespace ns_02263600 {
extern "C" {
void FieldVillagerAi_AddPartnerRelation(void *a, void *o, s8 *t) {
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    void *x = ((Unk_ov068_Owner *)o)->vfunc_64();
    void *y = p->vfunc_64();
    s32 a1 = VillagerData_getVillagerId(x);
    s32 a2 = VillagerData_getVillagerId(y);
    FieldVillagerAi_AddRelationByLevel(a, (void *)a1, (void *)a2, t);
}
}
}

namespace ns_02263600 {
extern "C" {
void FieldVillagerAi_AddRandomPairRelation(void *a, s32 unused, s8 *t) {
    void *g = gSaveVillagers;
    if (g != 0) {
        void *q = SaveVillagers_PickRandomExcept(g, 0, 0);
        if (q != 0) {
            void *r4 = (void *)VillagerData_getVillagerId(q);
            u32 buf;
            func_02133ef8(&buf, 4);
            buf = (u32)r4;
            void *q2 = SaveVillagers_PickRandomExcept(g, &buf, 1);
            if (q2 != 0) {
                FieldVillagerAi_AddRelationByLevel(a, r4, (void *)VillagerData_getVillagerId(q2), t);
            }
        }
    }
}
}
}

namespace ns_02263600 {
extern "C" {
void FieldVillagerAi_AddMood(void *a, void *o, s32 x, s32 y, u8 flag) {
    VillagerMood_addMood((u8 *)o + 0x838, x, y);
    if (flag != 0) {
        VillagerMood_requestApply((u8 *)o + 0x838);
    }
}
}
}

namespace ns_02263600 {
extern "C" {
void FieldVillagerAi_AddRandomMood(void *a, void *b, u8 *tbl, s32 n, u8 p5, u8 p6) {
    u8 v = tbl[Random_GlobalBelow(n)];
    if (v == 0) {
        p5 = 0;
    }
    FieldVillagerAi_AddMood(a, b, v, p5, p6);
}
}
}

namespace ns_02263600 {
extern "C" {
s32 FieldVillagerAi_OrderByFriendship(void *unused, u32 *a, u32 *b, u32 c, u32 d) {
    void *g;
    if (PlayerData_GetCurrent() != 0) {
        g = PlayerData_getPlayerId(PlayerData_GetCurrent());
    } else {
        g = 0;
    }
    if (g != 0 && PlayerId_isValid(g) != 0) {
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
        if (va > vb || (va == vb && Random_GlobalBelow(2) == 0)) {
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
void *FieldVillagerAi_PickOtherAblePattern(void *unused, void *x) {
    if ((u32)gSaveAbleSistersPatterns != 0) {
        u32 i; u16 mask; u32 cnt; mask = 0; cnt = 0; i = 0;
        goto test0;
    loop0:
        if (x == 0 || Pattern_equals(AbleSistersPatterns_getPattern(gSaveAbleSistersPatterns, i), x) == 0) {
            mask |= 1 << i;
            cnt++;
        }
        i++;
    test0:
        if (i < 8) goto loop0;
        u32 r = Random_PickSetBit(mask, cnt, 8);
        if (r < 8) {
            return AbleSistersPatterns_getPattern(gSaveAbleSistersPatterns, r);
        }
    }
    return 0;
}
}
}

BOOL FieldVillagerAiChat::tryChatMoodByRelation(Unk_ov068_Owner *o) {
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
    FieldVillagerAi_OrderByFriendship(this, &a, &b, x, y);
    Villager_ShareTrendWith(b, a);
    Villagers_ShareNickname(b, a, 0);
    FieldVillagerAi_AddRandomPairRelation(this, o, sChatMoodByRelationDeltas);
    switch (SaveVillagers_GetRelationLevelOf(gSaveVillagers, vx, vy)) {
    case 0:
    case 1:
        FieldVillagerAi_AddMood(this, o, 1, 2, 1);
        FieldVillagerAi_AddMood(this, other, 1, 2, 1);
        break;
    case 2:
        break;
    case 3:
    case 4:
        FieldVillagerAi_AddRandomMood(this, o, sChatBadMoods, 2, 2, 1);
        FieldVillagerAi_AddRandomMood(this, other, sChatBadMoods, 2, 2, 1);
        break;
    }
    step = 3;
    return TRUE;
}

BOOL FieldVillagerAiChat::tryChatNeutral(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    FieldVillagerAi_OrderByFriendship(this, &a, &b, x, y);
    Villager_ShareTrendWith(b, a);
    Villagers_ShareNickname(b, a, 0);
    FieldVillagerAi_AddRandomPairRelation(this, o, sChatNeutralDeltas);
    FieldVillagerAi_AddMood(this, o, 0, 0, 1);
    FieldVillagerAi_AddMood(this, other, 0, 0, 1);
    step = 3;
    return TRUE;
}

BOOL FieldVillagerAiChat::tryChatSpreadCatchphrase(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    FieldVillagerAi_OrderByFriendship(this, &a, &b, x, y);
    MsgString11 s1;
    MsgString11 s2;
    VillagerDataProfileView_getCatchphrase(a, &s1, 0);
    VillagerDataProfileView_getCatchphrase(b, &s2, 0);
    Villager_ShareTrendWith(b, a);
    Villagers_ShareNickname(b, a, 0);
    if (MsgString_equals(&s1, &s2) != 0) {
        u8 *r6 = VillagerData_getVillagerId(a);
        u8 *r7 = VillagerData_getVillagerId(b);
        b = 0;
        if ((u32)gSaveVillagers != 0) {
            void *e;
            u32 mask = 0, cnt = 0;
            s32 i = 0;
            for (i = 0; i < 8; i++) {
                e = SaveVillagers_Get(gSaveVillagers, i);
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
                b = SaveVillagers_Get(gSaveVillagers, m);
            }
        }
    }
    if (b != 0) {
        Villager_SetCatchphraseFromMsg(b, &s1);
    }
    FieldVillagerAi_AddRandomPairRelation(this, o, sChatSpreadCatchphraseDeltas);
    FieldVillagerAi_AddMood(this, o, 1, 2, 1);
    FieldVillagerAi_AddMood(this, other, 1, 2, 1);
    step = 3;
    return TRUE;
}

BOOL FieldVillagerAiChat::tryChatSpreadShirt(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    u16 h0, h1;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    if (FieldVillagerAi_OrderByFriendship(this, &a, &b, x, y) == 0) {
        chatTarget = (u8 *)other;
    } else {
        chatTarget = (u8 *)o;
    }
    BOOL ok = TRUE;
    if (Unk_ov068_02262c20_InRange(VillagerDataProfileView_getShirt(a))) {
    u8 *rec = VillagerData_getPattern(a);
    Villager_ShareTrendWith(b, a);
    Villagers_ShareNickname(b, a, 0);
    if (Unk_ov068_02262c20_InRange(VillagerDataProfileView_getShirt(b)) && Pattern_equals(VillagerData_getPattern(b), rec) != 0) {
        u8 *r7 = VillagerData_getVillagerId(a);
        u8 *p10 = VillagerData_getVillagerId(b);
        ok = FALSE;
        b = 0;
        if ((u32)gSaveVillagers != 0) {
            void *e;
            u32 mask = 0, cnt = 0;
            s32 i = 0;
            for (i = 0; i < 8; i++) {
                e = SaveVillagers_Get(gSaveVillagers, i);
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
                                    Pattern_equals(VillagerData_getPattern(e), rec) == 0) {
                                    if (Villager_GetWhereabouts(e) != 0) {
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
                b = SaveVillagers_Get(gSaveVillagers, m);
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
    FieldVillagerAi_AddPartnerRelation(this, o, sChatSpreadShirtDeltas);
    if (ok && b != 0) {
        FieldVillagerAi_AddMood(this, o, 1, 2, 0);
        FieldVillagerAi_AddMood(this, other, 1, 2, 0);
        h1 = 0x12a8;
        Unk_02016a44_requestAct14(chatTarget + 0x564, 1, &h1);
        step = 2;
    } else {
        FieldVillagerAi_AddMood(this, o, 1, 2, 1);
        FieldVillagerAi_AddMood(this, other, 1, 2, 1);
        step = 3;
    }
    return TRUE;
    }
    return FALSE;
}

BOOL FieldVillagerAiChat::tryChatRevertClothes(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    u16 v0 = 0xfff1;
    u16 v1, v2;
    void *a = 0;
    void *b = 0;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    s32 r = FieldVillagerAi_OrderByFriendship(this, &a, &b, x, y);
    Villager_ShareTrendWith(b, a);
    Villagers_ShareNickname(b, a, 0);
    if (r == 0) {
        chatTarget = (u8 *)o;
    } else {
        chatTarget = (u8 *)other;
    }
    FieldVillagerAi_AddRandomPairRelation(this, o, sChatRevertClothesDeltas);
    if (Unk_ov068_02262e5c_InRange(VillagerState_GetHeldItem(Villager_GetState(a))) == 0) {
        Villager_GetDefaultUmbrella(&v1, a);
        v0 = v1;
        VillagerDataProfileView_setUmbrella(a, &v0);
    }
    Villager_GetDefaultShirt(&v2, a);
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
        FieldVillagerAi_AddRandomMood(this, o, sChatClothesMoods, 4, 2, 0);
        FieldVillagerAi_AddRandomMood(this, other, sChatClothesMoods, 4, 2, 0);
        VillagerDataProfileView_setShirt(a, &v0);
        Unk_02016a44_requestAct14(chatTarget + 0x564, 1, &v0);
        step = 2;
    } else {
        FieldVillagerAi_AddRandomMood(this, o, sChatClothesMoods, 4, 2, 1);
        FieldVillagerAi_AddRandomMood(this, other, sChatClothesMoods, 4, 2, 1);
        step = 3;
    }
    return TRUE;
}

BOOL FieldVillagerAiChat::tryChatRevertCatchphrase(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    FieldVillagerAi_OrderByFriendship(this, &a, &b, x, y);
    Villager_ShareTrendWith(b, a);
    Villagers_ShareNickname(b, a, 0);
    FieldVillagerAi_AddRandomPairRelation(this, o, sChatRevertCatchphraseDeltas);
    EncodedString10 obj;
    if (Villager_GetDefaultCatchphraseEncoded(&obj, VillagerId_GetSpecies(VillagerData_getVillagerId(b))) != 0) {
        Villager_SetCatchphraseEncoded(b, &obj);
    }
    FieldVillagerAi_AddRandomMood(this, o, sChatCatchphraseMoods, 4, 2, 1);
    FieldVillagerAi_AddRandomMood(this, other, sChatCatchphraseMoods, 4, 2, 1);
    step = 3;
    return TRUE;
}

BOOL FieldVillagerAiChat::tryChatAdoptAblePattern(Unk_ov068_Owner *o) {
    using namespace ns_02262c20;
    u16 h0, h1;
    void *a;
    void *b;
    Unk_ov068_Owner *other = VillagerTalk_getPartner(o);
    a = 0;
    b = 0;
    s32 x = (s32)o->vfunc_64();
    s32 y = (s32)other->vfunc_64();
    if (FieldVillagerAi_OrderByFriendship(this, &a, &b, x, y) == 0) {
        chatTarget = (u8 *)o;
    } else {
        chatTarget = (u8 *)other;
    }
    u8 *rec = 0;
    if (Unk_ov068_02262c20_InRange(VillagerDataProfileView_getShirt(a))) {
        rec = VillagerData_getPattern(a);
    }
    rec = FieldVillagerAi_PickOtherAblePattern(this, rec);
    if (rec != 0) {
    Villager_ShareTrendWith(b, a);
    Villagers_ShareNickname(b, a, 0);
    FieldVillagerAi_AddPartnerRelation(this, o, sChatAblePatternDeltas);
    FieldVillagerAi_AddMood(this, chatTarget, 1, 2, 0);
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
    Unk_02016a44_requestAct14(chatTarget + 0x564, 1, &h1);
    step = 2;
    return TRUE;
    }
    return FALSE;
}

BOOL FieldVillagerAiChat::enterChat(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    s32 v = NpcActor_getAngleTo(o, p);
    FieldVillager_StopEmotion(o);
    NpcActionCtrl_requestAction((u8 *)o + 0x564, 3, 1, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 2, 0, (s32)p, gVec3Zero, 4, data_020c6d1c, 1);
    step = 0;
    VillagerActor_clearFlag834(o);
    FieldVillagerAi_AddMood(this, o, 0, 0, 1);
    VillagerMood_enableEffects((u8 *)o + 0x838);
    return TRUE;
}

void FieldVillagerAiChat::chatStep0(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 3 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
        NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
        step = 1;
        s32 t = FieldVillagerAi_GetPartnerRelationLevel(this, o);
        if (t < 5) {
            stateTimer = sChatDurations[t];
        } else {
            stateTimer = 100;
        }
    } else if (FieldVillagerAi_WasHitByNet(this, o) != 0) {
        Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
        if (p != 0 && p->vfunc_bc() != 0) {
            VillagerTalk_setPartner(o, 0);
            VillagerTalk_setInvitedByPartner(o, 0);
            FieldVillagerAi_ChangeState(this, o, 0x13);
            FieldVillagerAi_StartCooldown(this);
        }
    }
}

BOOL FieldVillagerAiChat::isPartnerNear(Unk_ov068_Owner *o) {
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

s32 FieldVillagerAiChat::getPlayerDistance(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    s32 r = 0;
    void *a = PlayerActor_GetCharacter(4);
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    if (a != 0 && p != 0) {
        r = NpcActor_getDistanceTo(o, a);
        s32 b = NpcActor_getDistanceTo(p, a);
        if (r >= b) {
            r = b;
        }
    }
    return r;
}

BOOL FieldVillagerAiChat::isStrangerPlayerNear(Unk_ov068_Owner *o, s32 v) {
    using namespace ns_02262294;
    s32 h;
    if (PlayerData_GetCurrent() != 0) {
        h = PlayerData_getPlayerId(PlayerData_GetCurrent());
    } else {
        h = 0;
    }
    if (h != 0 && PlayerId_isValid(h) != 0) {
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

BOOL FieldVillagerAiChat::isEnemyPairWithPlayerNear(Unk_ov068_Owner *o, s32 v) {
    using namespace ns_02262294;
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    s32 a = (s32)o->vfunc_64();
    s32 b = (s32)p->vfunc_64();
    if (SaveVillagers_GetRelationLevelOf(gSaveVillagers, a, b) >= 4) {
        if (v < 0x6000) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void FieldVillagerAiChat::chatStep1(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    s32 a;
    s32 b;
    s32 t;
    if (FieldVillagerAi_WasHitByNet(this, o) != 0 && VillagerActor_isFlag834(o) == 0 && p != 0 && p->vfunc_bc() != 0) {
        VillagerTalk_setPartner(o, 0);
        VillagerTalk_setInvitedByPartner(o, 0);
        FieldVillagerAi_ChangeState(this, o, 0x13);
        FieldVillagerAi_StartCooldown(this);
        return;
    }
    if (VillagerTalk_isInvitedByPartner(o) == 0) {
        t = getPlayerDistance(o);
        if (isStrangerPlayerNear(o, t) != 0) {
            VillagerActor_setFlag834(o);
            if (p != 0) {
                VillagerActor_setFlag834(p);
            }
            step = 3;
            return;
        }
        if (isEnemyPairWithPlayerNear(o, t) != 0) {
            VillagerActor_setFlag834(o);
            if (p != 0) {
                VillagerActor_setFlag834(p);
            }
            step = 3;
            FieldVillagerAi_AddMood(this, o, 2, 1, 1);
            if (p != 0) {
                FieldVillagerAi_AddMood(this, p, 2, 1, 1);
            }
            return;
        }
        if (isPartnerNear(o) == 0) {
            VillagerActor_setFlag834(o);
            if (p != 0) {
                VillagerActor_setFlag834(p);
            }
            step = 3;
            return;
        }
        a = 0;
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            if (NpcActionCtrl_getAction((u8 *)o + 0x564) != 8 || NpcActionCtrl_getEmotionId((u8 *)o + 0x564) == 0) {
                a = 1;
            }
        }
        b = 0;
        if (NpcActionCtrl_isActionDone((u8 *)p + 0x564) != 0) {
            if (NpcActionCtrl_getAction((u8 *)o + 0x564) != 8 || NpcActionCtrl_getEmotionId((u8 *)o + 0x564) == 0) {
                b = 1;
            }
        }
        if (stateTimer == 0) {
            if (a != 0) {
                if (b == 0) {
                    return;
                }
                if (PlayerData_GetCurrent() == 0) {
                    if (Random_GlobalBelow(2) == 0) {
                        FieldVillagerAi_AddRandomMood(this, o, sChatNoPlayerMoods, 4, 2, 1);
                        FieldVillagerAi_AddRandomMood(this, p, sChatNoPlayerMoods, 4, 2, 1);
                    }
                    step = 3;
                } else {
                    pickChatOutcome(o);
                }
            } else {
                if (NpcActionCtrl_getAction((u8 *)o + 0x564) != 8) {
                    return;
                }
                if (NpcActionCtrl_getEmotionId((u8 *)o + 0x564) == 0) {
                    return;
                }
                if (*((u8 *)o + 0x19c) != 0 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
                    goto doit1;
                } else if (*((u8 *)o + 0x19c) == 0) {
                    if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 0 || NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
                        goto doit1;
                    }
                }
                return;
            doit1:
                NpcActionCtrl_requestEmotion((u8 *)o + 0x564, 1, 0, data_020c6cc8);
            }
        } else {
            if (a != 0) {
                if (stateTimer >= 0x14 && Random_GlobalBelow(0x20) == 0) {
                    NpcActionCtrl_requestEmotion((u8 *)o + 0x564, 1, sChatEmotions[Random_GlobalBelow(8)], data_020c6cc8);
                }
            } else {
                if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 8 && NpcActionCtrl_getEmotionId((u8 *)o + 0x564) != 0) {
                    if (*((u8 *)o + 0x19c) != 0 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
                        goto doit2;
                    } else if (*((u8 *)o + 0x19c) == 0) {
                        if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 0 || NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
                            goto doit2;
                        }
                    }
                    goto skip2;
                doit2:
                    NpcActionCtrl_requestEmotion((u8 *)o + 0x564, 1, 0, data_020c6cc8);
                skip2:;
                }
            }
            if (b != 0 && stateTimer >= 0x14 && Random_GlobalBelow(0x20) == 0) {
                NpcActionCtrl_requestEmotion((u8 *)p + 0x564, 1, sChatEmotions[Random_GlobalBelow(8)], data_020c6cc8);
            }
        }
    } else {
        if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 8 && NpcActionCtrl_getEmotionId((u8 *)o + 0x564) != 0) {
            if (*((u8 *)o + 0x19c) != 0 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
                goto doit3;
            } else if (*((u8 *)o + 0x19c) == 0) {
                if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 0 || NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
                    goto doit3;
                }
            }
            return;
        doit3:
            NpcActionCtrl_requestEmotion((u8 *)o + 0x564, 1, 0, data_020c6cc8);
        }
    }
}

void FieldVillagerAiChat::pickChatOutcome(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    u32 gv_ = sChatOutcomesGuard;
    if ((gv_ & 1) == 0) {
        sChatOutcomes[0] = *(Fn_2262548 *)data_ov068_0226f970;
        sChatOutcomes[1] = *(Fn_2262548 *)data_ov068_0226f980;
        sChatOutcomes[2] = *(Fn_2262548 *)data_ov068_0226f998;
        sChatOutcomes[3] = *(Fn_2262548 *)data_ov068_0226f9a8;
        sChatOutcomes[4] = *(Fn_2262548 *)data_ov068_0226f9b0;
        sChatOutcomes[5] = *(Fn_2262548 *)data_ov068_0226f9c0;
        sChatOutcomes[6] = *(Fn_2262548 *)data_ov068_0226f9d8;
        sChatOutcomesGuard = gv_ | 1;
    }
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    VillagerActor_setFlag834(o);
    VillagerActor_setFlag834(p);
    u8 buf[7];
    MI_CpuCopy8(sChatTopicWeights, buf, 7);
    s32 z = 0;
    s32 i;
    for (i = 0; i < 7; i++) {
        u32 k = Talk_PickWeightedIndex(buf, 7);
        if (k < 7) {
            if ((this->*sChatOutcomes[k])(o) != 0) {
                break;
            }
            buf[k] = z;
        }
    }
    if (i == 7) {
        step = 3;
    }
}

void FieldVillagerAiChat::chatStep2(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    if (NpcActionCtrl_getAction(chatTarget + 0x564) == 0x14 && NpcActionCtrl_isActionDone(chatTarget + 0x564) != 0) {
        VillagerMood_requestApply((u8 *)o + 0x838);
        VillagerMood_requestApply((u8 *)VillagerTalk_getPartner(o) + 0x838);
        step = 3;
    }
}

void FieldVillagerAiChat::chatStep3(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    Unk_ov068_Owner *p = VillagerTalk_getPartner(o);
    if (p != 0) {
        if (p->vfunc_bc() != 0) {
            VillagerTalk_setPartner(o, 0);
            VillagerTalk_setInvitedByPartner(o, 0);
            if (FieldVillagerAi_Resume(this, o) == 0) {
                FieldVillagerAi_ChangeState(this, o, 0);
            }
            FieldVillagerAi_StartCooldown(this);
        }
    }
}

s32 FieldVillagerAiChat::execChat(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    u32 gv_ = sChatStepsGuard;
    if ((gv_ & 1) == 0) {
        sChatSteps[0] = *(Fn_2262414 *)data_ov068_0226fa08;
        sChatSteps[1] = *(Fn_2262414 *)data_ov068_0226fa20;
        sChatSteps[2] = *(Fn_2262414 *)data_ov068_0226fa28;
        sChatSteps[3] = *(Fn_2262414 *)data_ov068_0226fa38;
        sChatStepsGuard = gv_ | 1;
    }
    if (step < 4) {
        (this->*sChatSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiReaction::enterReaction(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    void *p = PlayerActor_GetCharacter(4);
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
        v = NpcActor_getAngleTo(o, p);
    }
    FieldVillager_StopEmotion(o);
    PlayerActor_LocalRequestAct11();
    NpcTalkCtrl_requestState4((u8 *)o + 0x618, st, 0, v, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

void FieldVillagerAiReaction::reactionStep0(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    if (NpcTalkCtrl_isBusy((u8 *)o + 0x618) == 0) {
        TalkRequest_SetTargetDone(o);
        FieldVillagerAi_SetResumeState(this, 0);
        step = 1;
    }
}

void FieldVillagerAiReaction::reactionStep1(Unk_ov068_Owner *o) {
    using namespace ns_02262294;}

s32 FieldVillagerAiReaction::execReaction(Unk_ov068_Owner *o) {
    using namespace ns_02262294;
    u32 gv_ = sReactionStepsGuard;
    if ((gv_ & 1) == 0) {
        sReactionSteps[0] = *(Fn_2262294 *)data_ov068_0226fa50;
        sReactionSteps[1] = *(Fn_2262294 *)data_ov068_0226fa60;
        sReactionStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sReactionSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiPlayerStates::enterApproach(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    FieldVillager_StopEmotion(o);
    approachTarget = (Unk_ov068_02261cd4_Tgt *)PlayerActor_GetCharacter(4);
    Unk_ov068_02261cd4_Vec *pv = (Unk_ov068_02261cd4_Vec *)((u8 *)o + 0x5c);
    approachStartX = *(s32 *)((u8 *)o + 0x5c);
    approachStartY = pv->y;
    approachStartZ = pv->z;
    NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0xdf, 1, data_020c6cc8, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    step = 0;
    VillagerActor_clearFlag834(o);
    return TRUE;
}

BOOL FieldVillagerAiPlayerStates::isNearApproachStart(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (func_020e96a4((u8 *)o + 0x5c, &approachStartX) <= 0xc000) {
        return TRUE;
    }
    return FALSE;
}

BOOL FieldVillagerAiPlayerStates::isTargetInFront(Unk_ov068_Owner *o, s32 r) {
    using namespace ns_02261900;
    BOOL res = FALSE;
    if (NpcActor_getDistanceTo(o, approachTarget) <= r) {
        s32 v = NpcActor_getRelativeAngleTo(o, approachTarget);
        s32 lim = sSeePlayerArc;
        if (v >= -lim && v <= lim) {
            res = TRUE;
        }
    }
    return res;
}

void FieldVillagerAiPlayerStates::approachStep0(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (approachTarget != 0) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            if (isTargetInFront(o, 0x3000) != 0) {
                NpcActionCtrl_requestAction((u8 *)o + 0x564, 0xb, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                step = 2;
                stateTimer = 0xc8;
            } else {
                Unk_ov068_02261cd4_Tgt *p = approachTarget;
                Unk_ov068_02261cd4_Vec *pv = (Unk_ov068_02261cd4_Vec *)((u8 *)p + 0x5c);
                NpcActionCtrl_requestAction((u8 *)o + 0x564, 2, 1, pv->x, pv->z, 0, 0, 0, 0, data_020c6cc8, 0);
                step = 1;
                stateTimer = 0xc8;
            }
        } else if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0xdf && ((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 9) {
            Unk_ov068_02262044_Vec v;
            s16 h;
            v.x = *(s32 *)((u8 *)o + 0x478);
            v.y = *(s32 *)((u8 *)o + 0x47c);
            v.z = *(s32 *)((u8 *)o + 0x480);
            h = *(s16 *)((u8 *)o + 0x8e);
            Unk_ov068_02262044_Ent *e = &sApproachAnimFx[Random_GlobalBelow(2)];
            Effect_Create(e->a, &v, &h, 0);
            func_02003ddc((u8 *)o + 0x514, e->b + 0x84, 0x7f, 0);
        }
    } else {
        FieldVillagerAi_ChangeState(this, o, 0);
        seekPlayerCooldown = 0x4b0;
        if ((s32)o->vfunc_64() != 0) {
            Villager_AddTalkUrge((s32)o->vfunc_64(), -1);
        }
    }
}

void FieldVillagerAiPlayerStates::approachStep1(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    void *q = (u8 *)o + 0x350;
    if (approachTarget != 0) {
        if (isTargetInFront(o, 0x3000) != 0) {
            NpcActionCtrl_requestAction((u8 *)o + 0x564, 0xb, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            step = 2;
            stateTimer = 0xc8;
        } else if (*(u16 *)((u8 *)o + 0xa02) >= sFieldVillagerPushLimit) {
            FieldVillagerAi_ChangeState(this, o, 0x15);
        } else if (FieldVillagerAi_WasHitByNet(this, o) != 0) {
            FieldVillagerAi_ChangeState(this, o, 0x13);
        } else if (stateTimer == 0) {
            FieldVillagerAi_ChangeState(this, o, 0);
            seekPlayerCooldown = 0x4b0;
            if ((s32)o->vfunc_64() != 0) {
                Villager_HalveTalkUrge((s32)o->vfunc_64());
            }
        } else if (isNearApproachStart(o) != 0) {
            NpcMoveCtrl_setWaypoint(q, (u8 *)approachTarget + 0x5c);
        } else {
            FieldVillagerAi_ChangeState(this, o, 0);
            seekPlayerCooldown = 0x4b0;
            if ((s32)o->vfunc_64() != 0) {
                Villager_HalveTalkUrge((s32)o->vfunc_64());
            }
        }
    } else {
        FieldVillagerAi_ChangeState(this, o, 0);
        seekPlayerCooldown = 0x4b0;
        if ((s32)o->vfunc_64() != 0) {
            Villager_AddTalkUrge((s32)o->vfunc_64(), -1);
        }
    }
}

void FieldVillagerAiPlayerStates::approachStep2(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (approachTarget != 0) {
        if (isTargetInFront(o, 0x5000) == 0) {
            s32 t = NpcActor_getAngleTo(o, approachTarget);
            NpcActionCtrl_requestAction((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
            step = 3;
        } else if (*(u16 *)((u8 *)o + 0xa02) >= sFieldVillagerPushLimit) {
            FieldVillagerAi_ChangeState(this, o, 0x15);
        } else if (FieldVillagerAi_WasHitByNet(this, o) != 0) {
            FieldVillagerAi_ChangeState(this, o, 0x13);
        } else if (stateTimer == 0) {
            FieldVillagerAi_ChangeState(this, o, 0);
            seekPlayerCooldown = 0x4b0;
            if ((s32)o->vfunc_64() != 0) {
                Villager_HalveTalkUrge((s32)o->vfunc_64());
            }
        }
    } else {
        FieldVillagerAi_ChangeState(this, o, 0);
        seekPlayerCooldown = 0x4b0;
        if ((s32)o->vfunc_64() != 0) {
            Villager_AddTalkUrge((s32)o->vfunc_64(), -1);
        }
    }
}

void FieldVillagerAiPlayerStates::approachStep3(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 3 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
        NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
        step = 4;
        stateTimer = 10;
    } else if (FieldVillagerAi_WasHitByNet(this, o) != 0) {
        FieldVillagerAi_ChangeState(this, o, 0x13);
    }
}

void FieldVillagerAiPlayerStates::approachStep4(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (*(u16 *)((u8 *)o + 0xa02) >= sFieldVillagerPushLimit) {
        FieldVillagerAi_ChangeState(this, o, 0x15);
    } else if (FieldVillagerAi_WasHitByNet(this, o) != 0) {
        FieldVillagerAi_ChangeState(this, o, 0x13);
    } else if (stateTimer == 0) {
        if (isTargetInFront(o, 0x3000) != 0) {
            NpcActionCtrl_requestAction((u8 *)o + 0x564, 0xb, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            step = 2;
            stateTimer = 0xc8;
        } else if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 0 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            Unk_ov068_02261cd4_Tgt *p = approachTarget;
            Unk_ov068_02261cd4_Vec *pv = (Unk_ov068_02261cd4_Vec *)((u8 *)p + 0x5c);
            NpcActionCtrl_requestAction((u8 *)o + 0x564, 2, 1, pv->x, pv->z, 0, 0, 0, 0, data_020c6cc8, 0);
            step = 1;
            stateTimer = 0xc8;
        }
    }
}

s32 FieldVillagerAiPlayerStates::execApproach(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    u32 gv_ = sApproachStepsGuard;
    if ((gv_ & 1) == 0) {
        sApproachSteps[0] = *(Fn_2261c38 *)data_ov068_0226fa70;
        sApproachSteps[1] = *(Fn_2261c38 *)data_ov068_0226fa88;
        sApproachSteps[2] = *(Fn_2261c38 *)data_ov068_0226faa8;
        sApproachSteps[3] = *(Fn_2261c38 *)data_ov068_0226fae8;
        sApproachSteps[4] = *(Fn_2261c38 *)data_ov068_0226fb28;
        sApproachStepsGuard = gv_ | 1;
    }
    if (step < 5) {
        (this->*sApproachSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiPlayerStates::enterFaceTalker(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    FieldVillager_StopEmotion(o);
    if (VillagerTalk_hasPartner(o) != 0 || *(s32 *)((u8 *)o + 0xa08) != 3 || *(u8 *)((u8 *)o + 0xa00) != 0) {
        step = 1;
    } else {
        s32 t = NpcActor_getAngleToPlayer(o, *(u8 *)((u8 *)o + 0x560));
        NpcActionCtrl_requestAction((u8 *)o + 0x564, 3, 2, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
        X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        step = 0;
    }
    return TRUE;
}

void FieldVillagerAiPlayerStates::faceTalkerStep0(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 3 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
        NpcActionCtrl_requestStand((u8 *)o + 0x564, 2, data_020c6cc8);
        step = 1;
    }
}

s32 FieldVillagerAiPlayerStates::execFaceTalker(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    u32 gv_ = sFaceTalkerStepsGuard;
    if ((gv_ & 1) == 0) {
        sFaceTalkerSteps[0] = *(Fn_2261ae8 *)data_ov068_0226f808;
        sFaceTalkerStepsGuard = gv_ | 1;
    }
    if (step < 1) {
        (this->*sFaceTalkerSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiPlayerStates::enterJoinTalk(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    FieldVillager_StopEmotion(o);
    NpcActionCtrl_requestStand((u8 *)o + 0x564, 2, data_020c6cc8);
    VillagerActor_setFlag834(o);
    return TRUE;
}

s32 FieldVillagerAiPlayerStates::execJoinTalk(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    return 0;
}

BOOL FieldVillagerAiPlayerStates::enterFleaRemoved(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    s32 t = NpcActor_getAngleToPlayer(o, 4);
    FieldVillager_StopEmotion(o);
    NpcActionCtrl_requestAction((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    VillagerActor_clearFlag834(o);
    VillagerMood_enableEffects((u8 *)o + 0x838);
    return TRUE;
}

void FieldVillagerAiPlayerStates::fleaRemovedStep0(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 3 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
        NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
        step = 1;
    }
}

void FieldVillagerAiPlayerStates::fleaRemovedStep1(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    if (X_func_ov068_0225f83c((u8 *)o + 0x9f0) == 0) {
        step = 2;
        FieldVillagerAi_ChangeState(this, o, 0);
    } else if (*(u16 *)((u8 *)o + 0xa02) >= sFieldVillagerPushLimit) {
        X_func_ov068_0225f838((u8 *)o + 0x9f0, 0);
        FieldVillagerAi_ChangeState(this, o, 0x15);
    } else if (FieldVillagerAi_WasHitByNet(this, o) != 0) {
        X_func_ov068_0225f838((u8 *)o + 0x9f0, 0);
        FieldVillagerAi_ChangeState(this, o, 0x13);
    }
}

s32 FieldVillagerAiPlayerStates::execFleaRemoved(Unk_ov068_Owner *o) {
    using namespace ns_02261900;
    u32 gv_ = sFleaRemovedStepsGuard;
    if ((gv_ & 1) == 0) {
        sFleaRemovedSteps[0] = *(Fn_2261900 *)data_ov068_0226f920;
        sFleaRemovedSteps[1] = *(Fn_2261900 *)data_ov068_0226f840;
        sFleaRemovedStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sFleaRemovedSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiBirthdayWait::enterBirthdayWait(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    void *g = gSceneBlockMap;
    u16 s[2];
    s32 a = 0, b = 0, c = 0, d = 0;
    if (g != 0) {
        s[0] = 0x5014;
        s[1] = 0x501a;
        if (BlockMap_FindItemAllAttr(g, &a, &b, &c, &d, &s[0], &s[1], 1, 0) != 0) {
            Unk_ov068_02260f90_V3 q, p;
            p.x = 0;
            p.y = 0;
            p.z = 0;
            FieldPos_FromBlockUnit(&p, a, b, c, d);
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
            NpcMoveCtrl_setTargetAngle((u8 *)o + 0x350, *(s16 *)((u8 *)o + 0x8e));
        }
    }
    *(s32 *)((u8 *)o + 0xa08) = 0;
    NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    Bgm_RequestSilence(0x12, 0xf, 0);
    VillagerStates_SetBirthdayVisitor(-1);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    TalkRequestFlags_SetEventWarpBlock();
    return TRUE;
}

s32 FieldVillagerAiBirthdayWait::execBirthdayWait(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    TalkRequest_AddPlayerTalk6(o, 0);
    PlayerActor_SetSlotFlag(0x1d, 4);
    return 0;
}

BOOL FieldVillagerAiBirthdayInvite::enterBirthdayInvite(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    void *p = func_02015aac((u8 *)o + 0x680);
    s32 v = 0;
    if (p != 0) {
        v = NpcActor_getAngleTo(o, p);
    }
    Unk_02013474_enableFootsteps((u8 *)o + 0x558);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    NpcTalkCtrl_requestTurnAndTalk((u8 *)o + 0x618, 0, v, 1);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    step = 0;
    return TRUE;
}

void FieldVillagerAiBirthdayInvite::birthdayInviteStep0(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (NpcTalkCtrl_isBusy((u8 *)o + 0x618) == 0) {
        Camera_SetModeDefault();
        NpcActionCtrl_requestAction((u8 *)o + 0x564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        step = 1;
    }
}

void FieldVillagerAiBirthdayInvite::birthdayInviteStep1(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 3 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
        Unk_ov068_02261644_V3 *pv = (Unk_ov068_02261644_V3 *)((u8 *)o + 0x5c);
        Unk_ov068_02261644_V3 vv(*pv);
        vv.x -= 0x2000;
        vv.z += 0x8000;
        NpcActionCtrl_requestAction((u8 *)o + 0x564, 2, 1, vv.x, vv.z, 0, 0, 0, 0, data_020c6cc8, 0);
        stateTimer = 0xc8;
        step = 2;
    }
}

void FieldVillagerAiBirthdayInvite::birthdayInviteStep2(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if ((NpcActionCtrl_getAction((u8 *)o + 0x564) == 2 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) || stateTimer == 0) {
        TalkRequest_SetTargetDone(o);
        NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
        TalkRequestFlags_ClearEventWarpBlock();
        step = 3;
    }
}

s32 FieldVillagerAiBirthdayInvite::execBirthdayInvite(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    u32 gv_ = sBirthdayInviteStepsGuard;
    if ((gv_ & 1) == 0) {
        sBirthdayInviteSteps[0] = *(Fn_2261574 *)data_ov068_0226f860;
        sBirthdayInviteSteps[1] = *(Fn_2261574 *)data_ov068_0226f8d0;
        sBirthdayInviteSteps[2] = *(Fn_2261574 *)data_ov068_0226f880;
        sBirthdayInviteStepsGuard = gv_ | 1;
    }
    if (step < 3) {
        (this->*sBirthdayInviteSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiTakeOut::enterTakeOutItem(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    u16 pos[2];
    Npc_GetStateHeldItem(pos);
    FieldVillager_StopEmotion(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    if (Unk_ov068_02261118_InRange(&pos[0])) {
        u16 w = data_020c6cc8;
        NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0xcd, 1, w, 0);
        HeldToolModel_attach((u8 *)o + 0x9b0, o, pos, 0xcd, w);
        HeldToolModel_playAnim((u8 *)o + 0x9b0, 0x26, w, 1);
        HeldToolModel_setAnimSpeed((u8 *)o + 0x9b0, 0x1000);
        *((u8 *)o + 0x9ec) = 0;
        step = 1;
    } else {
        u16 w = data_020c6cc8;
        NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0xd6, 3, w, 0);
        HeldToolModel_attach((u8 *)o + 0x9b0, o, pos, 0xd6, w);
        HeldToolModel_setAnimSpeed((u8 *)o + 0x9b0, 0);
        *((u8 *)o + 0x9ec) = 1;
        step = 0;
    }
    VillagerActor_setFlag834(o);
    func_02003ddc((u8 *)o + 0x514, 0x4f, 0x7f, 0);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void FieldVillagerAiTakeOut::takeOutItemStep0(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0xd6) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            step = 2;
            if (FieldVillagerAi_Resume(this, o) == 0) {
                FieldVillagerAi_ChangeState(this, o, 0);
            }
        } else if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) < 8) {
            s32 v = HeldToolModel_getAnimSpeed((u8 *)o + 0x9b0);
            if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 7) {
                NpcAnimCtrl_playHoldItemPose((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0, 7);
            }
            if (v != 0x1000) {
                v += 0x249;
                if (v > 0x1000) {
                    v = 0x1000;
                }
            }
            HeldToolModel_setAnimSpeed((u8 *)o + 0x9b0, v);
        }
    }
}

void FieldVillagerAiTakeOut::takeOutItemStep1(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0xcd) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            NpcAnimCtrl_playHoldItemPose((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0, 7);
            step = 2;
            if (FieldVillagerAi_Resume(this, o) == 0) {
                FieldVillagerAi_ChangeState(this, o, 0);
            }
        } else if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 7) {
            *((u8 *)o + 0x9ec) = 1;
            func_02003ddc((u8 *)o + 0x514, 0x857, 0x7f, 0);
        }
    }
}

s32 FieldVillagerAiTakeOut::execTakeOutItem(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    u32 gv_ = sTakeOutItemStepsGuard;
    if ((gv_ & 1) == 0) {
        sTakeOutItemSteps[0] = *(Fn_2261290 *)data_ov068_0226f8d8;
        sTakeOutItemSteps[1] = *(Fn_2261290 *)data_ov068_0226f900;
        sTakeOutItemStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sTakeOutItemSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiPutAway::enterPutAwayItem(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    u16 pos[2];
    Npc_GetStateHeldItem(pos);
    FieldVillager_StopEmotion(o);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    if (Unk_ov068_02261118_InRange(&pos[0])) {
        u16 w = data_020c6cc8;
        NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0xcd, 3, w, 0);
        HeldToolModel_attach((u8 *)o + 0x9b0, o, pos, 0xcd, w);
        HeldToolModel_playAnim((u8 *)o + 0x9b0, 0x26, 1, 3);
        void *p = func_02011b7c((u8 *)o + 0x9b0);
        if (p != 0) {
            u32 bits = (*(u32 *)((u8 *)p + 0xa0) << 4) >> 16;
            AnimFrameCtrl_setup((u8 *)p + 0x9c, bits, 3, 0x1000, (u16)(bits - 1));
        }
        HeldToolModel_setAnimSpeed((u8 *)o + 0x9b0, 0x1000);
        func_02003ddc((u8 *)o + 0x514, 0x858, 0x7f, 0);
        step = 1;
    } else {
        u16 w = data_020c6cc8;
        NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0xd6, 1, w, 0);
        HeldToolModel_attach((u8 *)o + 0x9b0, o, pos, 0xd6, w);
        HeldToolModel_setAnimSpeed((u8 *)o + 0x9b0, 0x1000);
        *((u8 *)o + 0x9ec) = 1;
        step = 0;
    }
    VillagerActor_setFlag834(o);
    func_02003ddc((u8 *)o + 0x514, 0x4f, 0x7f, 0);
    pos[1] = 0xfff1;
    VillagerTalk_setSpeakerStateUnk(o, &pos[1]);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void FieldVillagerAiPutAway::putAwayItemStep0(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0xd6) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            u16 t[1];
            t[0] = 0xfff1;
            HeldToolModel_attach((u8 *)o + 0x9b0, o, t, 0, 3);
            step = 2;
            if (FieldVillagerAi_Resume(this, o) == 0) {
                FieldVillagerAi_ChangeState(this, o, 0);
            }
        } else {
            s32 v = HeldToolModel_getAnimSpeed((u8 *)o + 0x9b0);
            if (v != 0) {
                v -= 0x249;
                if (v < 0) {
                    v = 0;
                }
            }
            HeldToolModel_setAnimSpeed((u8 *)o + 0x9b0, v);
        }
    }
}

void FieldVillagerAiPutAway::putAwayItemStep1(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0xcd) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            step = 2;
            if (FieldVillagerAi_Resume(this, o) == 0) {
                FieldVillagerAi_ChangeState(this, o, 0);
            }
        } else if (((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 5) {
            u16 t[1];
            t[0] = 0xfff1;
            HeldToolModel_attach((u8 *)o + 0x9b0, o, t, 0, 3);
            *((u8 *)o + 0x9ec) = 0;
        }
    }
}

s32 FieldVillagerAiPutAway::execPutAwayItem(Unk_ov068_Owner *o) {
    using namespace ns_02260f90;
    u32 gv_ = sPutAwayItemStepsGuard;
    if ((gv_ & 1) == 0) {
        sPutAwayItemSteps[0] = *(Fn_2260f90 *)data_ov068_0226f978;
        sPutAwayItemSteps[1] = *(Fn_2260f90 *)data_ov068_0226f9a0;
        sPutAwayItemStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sPutAwayItemSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiStates::enterPitfall(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    FieldVillager_StopEmotion(o);
    u32 t = data_020c6cc8;
    NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0x127, 0, t, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    func_02011d4c((u8 *)o + 0x9b0, t, 0);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    VillagerActor_setFlag834(o);
    Unk_02013474_disableFootsteps((u8 *)o + 0x558);
    func_02003ddc((u8 *)o + 0x514, 0x7ee, 0x7f, 0);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

namespace ns_022605f4 {
extern "C" {
extern "C" void FieldVillager_StepToward(s32 *p, s32 target, s32 a, s32 spd, s32 min) {
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

void FieldVillagerAiStates::pitfallStep0(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0x127) {
        Unk_ov068_02260780_Vec *pp = &((Unk_ov068_02260780_Own *)o)->position;
        Unk_ov068_02260780_Vec loc;
        FieldPos_SnapToUnitCenter(&loc, pp);
        FieldVillager_StepToward(&pp->x, loc.x, 0xe66, 0x1ec, 0x31);
        FieldVillager_StepToward(&pp->z, loc.z, 0xe66, 0x1ec, 0x31);
        *(u8 *)((u8 *)o + 0x19c) = 1;
        if (pp->x == loc.x && pp->z == loc.z) {
            if (AnimFrameCtrl_isFinished((u8 *)o + 0x188) != 0) {
                pitfallStep1(o);
            } else {
                step = 1;
            }
        }
    }
}

void FieldVillagerAiStates::pitfallStep1(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0x127) {
        if (AnimFrameCtrl_isFinished((u8 *)o + 0x188) != 0) {
            u32 t = data_020c6cc8;
            NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0x128, 1, t, 0);
            Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
            Unk_ov068_02260780_Vec *pv = &ow->position;
            Unk_ov068_02260780_Vec v;
            v.x = ow->position.x;
            v.y = pv->y;
            v.z = pv->z;
            u32 obj[16];
            GroundInfo_initAtPos(obj, &v, 0, 0);
            s32 r = obj[13];
            Unk_ov068_02260780_Vec v2;
            v2.x = v.x;
            v2.y = v.y;
            v2.z = v.z;
            FieldItemFx_StartPitfallHole(0, &v2);
            if (r == 0x13) {
                Effect_PlayById(0x8f, &v, 0, 0);
            } else {
                Effect_PlayById(0x8e, &v, 0, 0);
            }
            func_02003ddc((u8 *)o + 0x514, 0x7e8, 0x7f, 0);
            func_02011cf4((u8 *)o + 0x9b0, t, 1);
            NpcAnimCtrl_playHoldItemPose((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0x128, 3);
            step = 2;
            GroundInfo_Destruct(obj);
        }
    }
}

void FieldVillagerAiStates::pitfallStep2(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0x128) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            pitfallAnimSpeed = 0x1400;
            u32 t = data_020c6cc8;
            NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0x129, 0, t, 0);
            *(s32 *)((u8 *)o + 0x198) = pitfallAnimSpeed;
            Unk_02015b8c_setAnimSpeedFixed((u8 *)o + 0x334, 1);
            func_02011c9c((u8 *)o + 0x9b0, t, 0);
            func_02011b60((u8 *)o + 0x9b0, pitfallAnimSpeed);
            pitfallTimer = 0x64;
            Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
            Unk_ov068_02260780_Vec *pv = &ow->position;
            Unk_ov068_02260780_Vec v;
            v.x = ow->position.x;
            v.y = pv->y;
            v.z = pv->z;
            *(s32 *)((u8 *)o + 0x9fc) = Effect_Create(0x4c, &v, 0, 0);
            *(u8 *)((u8 *)o + 0xa00) = 1;
            VillagerActor_clearFlag834(o);
            step = 3;
        }
    }
}

void FieldVillagerAiStates::pitfallStep3(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0x129) {
        if (pitfallTimer == 0) {
            Unk_02015b8c_setAnimSpeedFixed((u8 *)o + 0x334, 0);
            VillagerActor_setFlag834(o);
            *(u8 *)((u8 *)o + 0xa00) = 0;
            if (*(s32 *)((u8 *)o + 0x9fc) != -1) {
                Effect_End(*(s32 *)((u8 *)o + 0x9fc));
                *(s32 *)((u8 *)o + 0x9fc) = -1;
            }
            u16 pos[2];
            Npc_GetStateHeldItem(pos, o);
            BOOL k = FALSE;
            u32 v0 = pos[0];
            if (*(volatile u16 *)&pos[0] >= 0x1376 && v0 <= 0x1376) {
                k = TRUE;
            }
            if (k || (v0 >= 0x1377 && v0 <= 0x1377) || (v0 >= 0x1380 && v0 <= 0x139f) ||
                (v0 >= 0x1374 && v0 <= 0x1374) || (v0 >= 0x1375 && v0 <= 0x1375)) {
                u32 t = data_020c6cc8;
                NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0x12b, 1, t, 0);
                func_02011c44((u8 *)o + 0x9b0, t, 0);
            } else {
                NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0x12a, 1, data_020c6cc8, 0);
            }
            Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
            Unk_ov068_02260780_Vec *pv = &ow->position;
            Unk_ov068_02260780_Vec v;
            v.x = ow->position.x;
            v.y = pv->y;
            v.z = pv->z;
            u32 obj[16];
            GroundInfo_initAtPos(obj, &v, 0, 0);
            s32 r = obj[13];
            Unk_ov068_02260780_Vec v2;
            v2.x = v.x;
            v2.y = v.y;
            v2.z = v.z;
            FieldItemFx_StartPitfallClose(0, &v2);
            if (r == 0x13) {
                Effect_PlayById(0x91, &v, 0, 0);
            } else {
                Effect_PlayById(0x90, &v, 0, 0);
            }
            func_02003ddc((u8 *)o + 0x514, 0x7e9, 0x7f, 0);
            step = 4;
            GroundInfo_Destruct(obj);
        } else {
            *(s32 *)((u8 *)o + 0x198) = pitfallAnimSpeed;
            if (*(s32 *)((u8 *)o + 0x9fc) != -1) {
                Effect_SetPosition(*(s32 *)((u8 *)o + 0x9fc), (u8 *)o + 0x5c, 0, 0);
            }
        }
    }
}

void FieldVillagerAiStates::pitfallStep4(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0x12b || Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0x12a) {
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            *(u32 *)((u8 *)o + 0x4e8) &= ~2;
            step = 5;
            NpcAnimCtrl_playHoldItemPose((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0, 3);
            FieldVillagerAi_ChangeState(this, o, 0);
        }
    }
}

s32 FieldVillagerAiStates::execPitfall(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    u32 gv_ = sPitfallStepsGuard;
    if ((gv_ & 1) == 0) {
        sPitfallSteps[0] = *(Fn_2260944 *)data_ov068_0226f9e0;
        sPitfallSteps[1] = *(Fn_2260944 *)data_ov068_0226fa10;
        sPitfallSteps[2] = *(Fn_2260944 *)data_ov068_0226fa30;
        sPitfallSteps[3] = *(Fn_2260944 *)data_ov068_0226fa40;
        sPitfallSteps[4] = *(Fn_2260944 *)data_ov068_0226fa58;
        sPitfallStepsGuard = gv_ | 1;
    }
    if (step < 5) {
        (this->*sPitfallSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiStates::enterPitfallClimbOut(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    FieldVillager_StopEmotion(o);
    Unk_02015b8c_setAnimSpeedFixed((u8 *)o + 0x334, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    Unk_02013474_disableFootsteps((u8 *)o + 0x558);
    VillagerActor_setFlag834(o);
    *(u8 *)((u8 *)o + 0xa00) = 0;
    if (*(s32 *)((u8 *)o + 0x9fc) != -1) {
        Effect_End(*(s32 *)((u8 *)o + 0x9fc));
        *(s32 *)((u8 *)o + 0x9fc) = -1;
    }
    u16 pos[2];
    Npc_GetStateHeldItem(pos, o);
    BOOL k = FALSE;
    u32 v0 = pos[0];
    if (*(volatile u16 *)&pos[0] >= 0x1376 && v0 <= 0x1376) {
        k = TRUE;
    }
    if (k || (v0 >= 0x1377 && v0 <= 0x1377) || (v0 >= 0x1380 && v0 <= 0x139f) ||
        (v0 >= 0x1374 && v0 <= 0x1374) || (v0 >= 0x1375 && v0 <= 0x1375)) {
        u32 t = data_020c6cc8;
        NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0x12b, 1, t, 0);
        func_02011c44((u8 *)o + 0x9b0, t, 0);
    } else {
        NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, 0x12a, 1, data_020c6cc8, 0);
    }
    Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
    Unk_ov068_02260780_Vec *pv = &ow->position;
    Unk_ov068_02260780_Vec v;
    v.x = ow->position.x;
    v.y = pv->y;
    v.z = pv->z;
    u32 obj[16];
    GroundInfo_initAtPos(obj, &v, 0, 0);
    s32 r = obj[13];
    Unk_ov068_02260780_Vec v2;
    v2.x = v.x;
    v2.y = v.y;
    v2.z = v.z;
    FieldItemFx_StartPitfallClose(0, &v2);
    if (r == 0x13) {
        Effect_PlayById(0x91, &v, 0, 0);
    } else {
        Effect_PlayById(0x90, &v, 0, 0);
    }
    func_02003ddc((u8 *)o + 0x514, 0x7e9, 0x7f, 0);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    GroundInfo_Destruct(obj);
    return TRUE;
}

s32 FieldVillagerAiStates::execPitfallClimbOut(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    u32 gv_ = sPitfallClimbOutStepsGuard;
    if ((gv_ & 1) == 0) {
        sPitfallClimbOutSteps[0] = *(Fn_226071c *)data_ov068_0226fa78;
        sPitfallClimbOutStepsGuard = gv_ | 1;
    }
    if (step < 1) {
        (this->*sPitfallClimbOutSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiStates::enterHitByNet(Unk_ov068_Owner *o) {
    using namespace ns_022605f4;
    FieldVillager_StopEmotion(o);
    Unk_02015b8c_setAnimSpeedFixed((u8 *)o + 0x334, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    VillagerActor_clearFlag834(o);
    Unk_02013474_enableFootsteps((u8 *)o + 0x558);
    u32 r, t;
    t = data_020c6cc8;
    HeldToolModel_playIdleAnim((u8 *)o + 0x9b0, t, 0);
    if (hitResetTimer == 0) {
        hitCount = 0;
    }
    hitCount = hitCount + 1;
    r = 0xeb;
    if (hitCount >= 3) {
        r = 0xec;
        TalkRequest_AddPlayerTalk6(o, 0);
        *(s32 *)((u8 *)o + 0xa08) = 1;
        Character_clearTalkStartMode(o);
        hitCount = 3;
    } else {
        Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
        Unk_ov068_02260780_Vec *pv = &ow->position;
        Unk_ov068_022605f4_Vec v;
        v.x = ow->position.x;
        v.y = pv->y;
        v.z = pv->z;
        void *p = PlayerActor_GetCharacter(4);
        if (p != 0) {
            s32 d = NpcActor_getRelativeAngleTo(o, p);
            if (d < 0) {
                d = (s16)-d;
            }
            if (d < data_020c6cc0) {
                r = 0xec;
            }
        }
    }
    NpcActionCtrl_requestPlayAnim((u8 *)o + 0x564, 1, r, 1, t, 0);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    return TRUE;
}

void FieldVillagerAiStates::hitByNetStep0(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0xeb || Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) == 0xec) {
        if (hitCount >= 3) {
            TalkRequest_AddPlayerTalk6(o, 0);
        }
        if (NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
            if (hitCount >= 3) {
                s32 t = NpcActor_getAngleToPlayer(o, 4);
                NpcActionCtrl_requestAction((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
                step = 1;
            } else {
                Character_setTalkStartMode0(o);
                FieldVillagerAi_ChangeState(this, o, 0);
                hitResetTimer = 0x4b0;
            }
        }
    }
}

void FieldVillagerAiStates::hitByNetStep1(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    TalkRequest_AddPlayerTalk6(o, 0);
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 3 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
        NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
        stateTimer = 0x28;
        step = 2;
    }
}

void FieldVillagerAiStates::hitByNetStep2(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (stateTimer == 0) {
        hitResetTimer = 0x4b0;
        FieldVillagerAi_ChangeState(this, o, 0);
        Character_setTalkStartMode0(o);
    } else {
        TalkRequest_AddPlayerTalk6(o, 0);
    }
}

s32 FieldVillagerAiStates::execHitByNet(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    u32 gv_ = sHitByNetStepsGuard;
    if ((gv_ & 1) == 0) {
        sHitByNetSteps[0] = *(Fn_2260450 *)data_ov068_0226f810;
        sHitByNetSteps[1] = *(Fn_2260450 *)data_ov068_0226f828;
        sHitByNetSteps[2] = *(Fn_2260450 *)data_ov068_0226f850;
        sHitByNetStepsGuard = gv_ | 1;
    }
    if (step < 3) {
        (this->*sHitByNetSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiStates::enterPushed(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    FieldVillager_StopEmotion(o);
    Unk_02015b8c_setAnimSpeedFixed((u8 *)o + 0x334, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    VillagerActor_clearFlag834(o);
    Unk_02013474_enableFootsteps((u8 *)o + 0x558);
    s32 t = NpcActor_getAngleToPlayer(o, 4);
    NpcActionCtrl_requestAction((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    *(u16 *)((u8 *)o + 0xa02) = 0;
    TalkRequest_AddPlayerTalk6(o, 0);
    *(s32 *)((u8 *)o + 0xa08) = 2;
    Character_clearTalkStartMode(o);
    step = 0;
    VillagerMood_disableEffects((u8 *)o + 0x838);
    if ((s32)o->vfunc_64() != 0) {
        Villager_HalveTalkUrge((s32)o->vfunc_64());
    }
    return TRUE;
}

void FieldVillagerAiStates::pushedStep0(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    TalkRequest_AddPlayerTalk6(o, 0);
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 3 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
        NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
        stateTimer = 0x28;
        step = 1;
    }
}

void FieldVillagerAiStates::pushedStep1(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (stateTimer == 0) {
        FieldVillagerAi_ChangeState(this, o, 0);
        Character_setTalkStartMode0(o);
    } else {
        TalkRequest_AddPlayerTalk6(o, 0);
    }
}

s32 FieldVillagerAiStates::execPushed(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    u32 gv_ = sPushedStepsGuard;
    if ((gv_ & 1) == 0) {
        sPushedSteps[0] = *(Fn_2260290 *)data_ov068_0226f8a0;
        sPushedSteps[1] = *(Fn_2260290 *)data_ov068_0226f908;
        sPushedStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sPushedSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiStates::enterHitTalk(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    Unk_020133cc_Player_resetLastTaughtEmotion(o);
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) != 0xec || NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
        void *p = func_02015aac((u8 *)o + 0x680);
        s32 v = 0;
        if (p != 0) {
            v = NpcActor_getAngleTo(o, p);
        }
        X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        NpcTalkCtrl_requestTurnAndTalk((u8 *)o + 0x618, 0, v, 0);
        step = 1;
    } else {
        step = 0;
    }
    return TRUE;
}

void FieldVillagerAiStates::hitTalkStep0(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (Unk_02015b8c_getAnimId((u8 *)o + 0x334, 0) != 0xec || NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
        void *p = func_02015aac((u8 *)o + 0x680);
        s32 v = 0;
        if (p != 0) {
            v = NpcActor_getAngleTo(o, p);
        }
        X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        NpcTalkCtrl_requestTurnAndTalk((u8 *)o + 0x618, 0, v, 0);
        step = 1;
    }
}

void FieldVillagerAiStates::hitTalkStep1(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (NpcTalkCtrl_isBusy((u8 *)o + 0x618) == 0) {
        FieldVillagerAi_AddMood(this, o, 4, 1, 1);
        Character_setTalkStartMode0(o);
        TalkRequest_SetTargetDone(o);
        VillagerTalk_setPartner(o, 0);
        VillagerTalk_setInvitedByPartner(o, 0);
        FieldVillagerAi_SetResumeState(this, 0);
        hitCount = 0;
        hitResetTimer = 0;
        *(s32 *)((u8 *)o + 0xa08) = 3;
        seekPlayerCooldown = 0x4b0;
        step = 2;
    }
}

void FieldVillagerAiStates::hitTalkStep2(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;}

s32 FieldVillagerAiStates::execHitTalk(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    u32 gv_ = sHitTalkStepsGuard;
    if ((gv_ & 1) == 0) {
        sHitTalkSteps[0] = *(Fn_2260068 *)data_ov068_0226f9b8;
        sHitTalkSteps[1] = *(Fn_2260068 *)data_ov068_0226fa18;
        sHitTalkSteps[2] = *(Fn_2260068 *)data_ov068_0226fa48;
        sHitTalkStepsGuard = gv_ | 1;
    }
    if (step < 3) {
        (this->*sHitTalkSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiStates::enterPushTalk(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    void *p = func_02015aac((u8 *)o + 0x680);
    s32 v = 0;
    Unk_020133cc_Player_resetLastTaughtEmotion(o);
    if (p != 0) {
        v = NpcActor_getAngleTo(o, p);
    }
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    NpcTalkCtrl_requestTurnAndTalk((u8 *)o + 0x618, 0, v, 0);
    return TRUE;
}

void FieldVillagerAiStates::pushTalkStep0(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (NpcTalkCtrl_isBusy((u8 *)o + 0x618) == 0) {
        FieldVillagerAi_AddMood(this, o, 4, 1, 1);
        Character_setTalkStartMode0(o);
        TalkRequest_SetTargetDone(o);
        VillagerTalk_setPartner(o, 0);
        FieldVillagerAi_SetResumeState(this, 0);
        VillagerTalk_setInvitedByPartner(o, 0);
        *(s32 *)((u8 *)o + 0xa08) = 3;
        seekPlayerCooldown = 0x4b0;
        step = 1;
    }
}

void FieldVillagerAiStates::pushTalkStep1(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;}

s32 FieldVillagerAiStates::execPushTalk(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    u32 gv_ = sPushTalkStepsGuard;
    if ((gv_ & 1) == 0) {
        sPushTalkSteps[0] = *(Fn_225ff18 *)data_ov068_0226fb30;
        sPushTalkSteps[1] = *(Fn_225ff18 *)data_ov068_0226f800;
        sPushTalkStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sPushTalkSteps[step])(o);
    }
    return 0;
}

BOOL FieldVillagerAiStates::enterAdmireCatch(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    FieldVillager_StopEmotion(o);
    Unk_02015b8c_setAnimSpeedFixed((u8 *)o + 0x334, 0);
    X_func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    VillagerActor_clearFlag834(o);
    Unk_02013474_enableFootsteps((u8 *)o + 0x558);
    s32 t = NpcActor_getAngleToPlayer(o, 4);
    NpcActionCtrl_requestAction((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    VillagerMood_disableEffects((u8 *)o + 0x838);
    step = 0;
    isAdmiringCatch = 1;
    return TRUE;
}

void FieldVillagerAiStates::admireCatchStep0(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 3 && NpcActionCtrl_isActionDone((u8 *)o + 0x564) != 0) {
        NpcActionCtrl_requestEmotion((u8 *)o + 0x564, 1, 0x1a, data_020c6cc8);
        stateTimer = 0x14;
        step = 1;
    }
}

void FieldVillagerAiStates::admireCatchStep1(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    if (NpcActionCtrl_getAction((u8 *)o + 0x564) == 8 && NpcActionCtrl_getEmotionId((u8 *)o + 0x564) == 0x1a && stateTimer == 0 &&
        FieldVillagerAi_IsPlayerShowingCatch(this) == 0 && ((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 0) {
        NpcActionCtrl_requestStand((u8 *)o + 0x564, 1, data_020c6cc8);
        FieldVillagerAi_ChangeState(this, o, 0);
    }
}

s32 FieldVillagerAiStates::execAdmireCatch(Unk_ov068_Owner *o) {
    using namespace ns_0225fc60;
    u32 gv_ = sAdmireCatchStepsGuard;
    if ((gv_ & 1) == 0) {
        sAdmireCatchSteps[0] = *(Fn_225fd54 *)data_ov068_0226f938;
        sAdmireCatchSteps[1] = *(Fn_225fd54 *)data_ov068_0226f9f0;
        sAdmireCatchStepsGuard = gv_ | 1;
    }
    if (step < 2) {
        (this->*sAdmireCatchSteps[step])(o);
    }
    return 0;
}

namespace ns_0225fc60 {
extern "C" {
BOOL _ZN13FieldVillager8vfunc_48EPv(u8 *o) {
    if (NpcTalkCtrl_isBusy(o + 0x618) != 0 || VillagerActor_isFlag834(o) != 0) {
        return FALSE;
    }
    if (o[0xa00] != 0) {
        void *p = PlayerActor_GetCharacter(4);
        if (p != 0) {
            s32 v = NpcActor_getRelativeAngleTo(o, p);
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
BOOL _ZN13FieldVillager28acceptsInteractionOutOfRangeEPv(Unk_ov068_Owner *o, s32 x) {
    s16 k = sTalkFacingArc;
    u32 v = FieldVillager_GetMood(o);
    BOOL r = FALSE;
    if (o->vfunc_48(x) != 0 && VillagerActor_isFlag834(o) == 0 && FieldVillagerAi_IsState((u8 *)o + 0x8b4, r) != 0 && v <= 1 &&
        NpcActor_isNear(o, x, 0x5000) == 0 && NpcActor_isNear(o, x, 0xe000) != 0 && Character_isInFacingArcOf(o, x, (s16)-k, k) != 0) {
        r = TRUE;
    }
    return r;
}
}
}

void FieldVillager::vfunc_4c(u32 idx, u8 v) {
    using namespace ns_0225f1a0;
    switch (idx) {
    case 3:
        partnerPlayer = v;
        if (VillagerTalk_hasPartner(this)) {
            talkType = 1;
            talkPartner = (Unk_ov068_0225f904_Menu *)VillagerTalk_getPartner(this);
            talkPartner->vfunc_8c();
        } else if (FieldVillagerAi_IsState(&ai, 7)) {
            talkType = 2;
        } else if (isInPitfall) {
            talkType = 0xe;
        } else {
            switch (VillagerTalk_getEventKind(this)) {
            case 1:
                talkType = 3;
                break;
            case 2:
                talkType = 4;
                break;
            case 0:
                talkType = 5;
                break;
            case 3:
                talkType = 6;
                break;
            case 4:
                talkType = 7;
                break;
            case 5:
                talkType = 8;
                break;
            case 6:
                talkType = 9;
                break;
            case 7:
                talkType = 10;
                break;
            case 8:
            case 9:
                talkType = 11;
                break;
            default:
                talkType = 0;
                break;
            }
        }
        if (talkType == 0) {
            if (FieldVillager_GetTalkRepeat(this)) {
                TalkRepeat_Count();
            }
        }
        FieldVillagerAi_ChangeState(&ai, this, 8);
        break;
    case 1: {
        s32 r6 = 5;
        switch (talkReason) {
        case 0:
            r6 = 0xe;
            talkType = 0xd;
            break;
        case 1:
            r6 = 0x14;
            talkType = 0xf;
            break;
        case 2:
            r6 = 0x16;
            talkType = 0x10;
            break;
        }
        VillagerTalk_begin((&villagerTalk), this, talkType);
        func_02015ab0((&villagerTalk), NpcActor_getPlayerActor(this, 4));
        FieldVillagerAi_ChangeState(&ai, this, r6);
        break;
    }
    case 0:
        partnerPlayer = v;
        VillagerTalk_begin((&villagerTalk), this, talkType);
        func_02015ab0((&villagerTalk), NpcActor_getPlayerActor(this, 4));
        if (talkPartner) {
            ActorTalkRequest_setPartnerActor((&villagerTalk), talkPartner);
        }
        FieldVillagerAi_ChangeState(&ai, this, 5);
        if (talkType == 2) {
            if (vfunc_64()) {
                Villager_ClearTalkUrge(vfunc_64());
            }
        }
        talkPartner = NULL;
        talkType = 0;
        break;
    case 5:
        partnerPlayer = v;
        FieldVillagerAi_SaveResumeState(&ai);
        FieldVillagerAi_ChangeState(&ai, this, 6);
        break;
    case 8: {
        s32 t;
        void *q;
        s32 sv;
        if (talkReason == 0) {
            t = Villager_GetWhereabouts(vfunc_64());
            q = VillagerDataItemView_getHousePos(vfunc_64());
            FieldPos_FromUnitCenter(&position, ((u8 *)q)[0], ((u8 *)q)[1]);
            { Unk_ov068_0225f23c_Vec *sp = (Unk_ov068_0225f23c_Vec *)&position; Unk_ov068_0225f23c_Vec *d = (Unk_ov068_0225f23c_Vec *)&prevPosition; d->x = sp->x; d->y = sp->y; d->z = sp->z; }
            sv = VillagerStates_GetBirthdayHost();
            if (sv == Villager_GetIndex(vfunc_64()) || (u32)(t - 3) <= 4) {
                FieldVillagerAi_ChangeState(&ai, this, 0xc);
            } else {
                FieldVillagerAi_ChangeState(&ai, this, 3);
            }
            talkReason = 3;
        } else if (talkReason == 2) {
            FieldVillagerAi_ChangeState(&ai, this, 0);
            talkReason = 3;
        } else if (isInPitfall) {
            FieldVillagerAi_ChangeState(&ai, this, 0x12);
        } else {
            if (FieldVillagerAi_Resume(&ai, this) == 0) {
                FieldVillagerAi_ChangeState(&ai, this, 0);
            }
            if (FieldVillager_GetTalkRepeat(this)) {
                TalkRepeat_StartWindow();
            }
        }
        Character_setTalkStartMode0(this);
        if (vfunc_64()) {
            Villager_AddTalkUrge(vfunc_64(), -3);
        }
        break;
    }
    case 4:
        if (isInPitfall) {
            FieldVillagerAi_ChangeState(&ai, this, 0x12);
        } else {
            if (FieldVillagerAi_Resume(&ai, this) == 0) {
                FieldVillagerAi_ChangeState(&ai, this, 0);
            }
        }
        break;
    }
    func_0201b08c(this, idx, v);
}

void FieldVillagerFxTimer::construct() {
    using namespace ns_0225f1a0;
}

FieldVillagerFxTimer::~FieldVillagerFxTimer() {
    using namespace ns_0225f1a0;
}

void FieldVillagerFxTimer::clear() {
    using namespace ns_0225f1a0;
    fleaEffectTimer = -1;
    holdCount = 0;
}

void FieldVillagerFxTimer::update(FieldVillager *o) {
    using namespace ns_0225f1a0;
    Unk_ov068_0225f858_Vec buf;
    if (fleaEffectTimer > 0) {
        fleaEffectTimer = fleaEffectTimer - 1;
    }
    if (holdCount != 0) {
        holdCount = holdCount - 1;
    }
    if (fleaEffectTimer == 0) {
        buf.a = o->jointPos[0].x;
        buf.b = o->jointPos[0].y;
        buf.c = o->jointPos[0].z;
        Effect_PlayById(0x81, &buf, 0, 0);
        if (Villager_HasFlea(o->villagerData)) {
            fleaEffectTimer = Random_GlobalBelow(0xf) + 0xf;
        } else {
            fleaEffectTimer = -1;
        }
    } else if (fleaEffectTimer == -1) {
        if (Villager_HasFlea(o->villagerData)) {
            fleaEffectTimer = Random_GlobalBelow(10) + 0xf;
        }
    }
}

void FieldVillagerFxTimer::stop(FieldVillager *o) {
    using namespace ns_0225f1a0;
    fleaEffectTimer = -1;
    Villager_RemoveFlea(o->villagerData);
}

u32 FieldVillagerFxTimer::getHoldCount() {
    using namespace ns_0225f1a0;
    return holdCount;
}

void FieldVillagerFxTimer::setHoldCount(u32 v) {
    using namespace ns_0225f1a0;
    holdCount = v;
}

BOOL FieldVillager::vfunc_b4() {
    using namespace ns_0225f1a0;
    void *p = (void *)getPlayerMemory();
    if (PlayerData_GetCurrent()) {
        p = (void *)getPlayerMemory();
    }
    if ((p == NULL && NpcActor_isPlayerNear(this, 0x6000, 4) == 0) || (p != NULL && VillagerMemory_IsUsed(p) != 0)) {
        if (NpcTalkCtrl_isBusy(&talkCtrl) == 0) {
            if (FieldVillagerAi_IsFreeIdle(&ai) != 0) {
                if (VillagerTalk_hasPartner(this) == 0) {
                    if (VillagerTalk_getEventKind(this) == 0xb) {
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL FieldVillager::vfunc_b8(u32 idx) {
    using namespace ns_0225f1a0;
    if (vfunc_b4()) {
        VillagerTalk_setPartner(this, idx);
        VillagerTalk_setInvitedByPartner(this, 1);
        FieldVillagerAi_SaveResumeState(&ai);
        FieldVillagerAi_ChangeState(&ai, this, 9);
        return TRUE;
    }
    return FALSE;
}

BOOL FieldVillager::vfunc_bc() {
    using namespace ns_0225f1a0;
    if (VillagerTalk_hasPartner(this)) {
        FieldVillager_StopEmotion(this);
        if (FieldVillagerAi_Resume(&ai, this) == 0) {
            FieldVillagerAi_ChangeState(&ai, this, 0);
        }
        FieldVillagerAi_StartCooldown(&ai);
        VillagerTalk_setPartner(this, 0);
        VillagerTalk_setInvitedByPartner(this, 0);
        return TRUE;
    }
    return FALSE;
}

void FieldVillager::onJoinTalk() {
    using namespace ns_0225f1a0;
    FieldVillagerAi_ChangeState(&ai, this, 10);
}

void FieldVillager::onLeaveTalk() {
    using namespace ns_0225f1a0;
    VillagerMood_requestApply(&mood);
    if (FieldVillagerAi_Resume(&ai, this) == 0) {
        FieldVillagerAi_ChangeState(&ai, this, 0);
    }
    VillagerTalk_setPartner(this, 0);
    VillagerTalk_setInvitedByPartner(this, 0);
    FieldVillagerAi_StartCooldown(&ai);
}

void FieldVillagerLook::construct() {
    using namespace ns_0225f1a0;
}

FieldVillagerLook::~FieldVillagerLook() {
    using namespace ns_0225f1a0;
}

void FieldVillagerLook::init(FieldVillager *o) {
    using namespace ns_0225f1a0;
    setLookModeLocked(o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    targetKind = 2;
    targetSlot = -1;
    targetId = -1;
}

void FieldVillagerLook::resetLook(FieldVillager *o) {
    using namespace ns_0225f1a0;
    isLocked = 0;
    setLookMode(o, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    targetKind = 2;
    targetSlot = -1;
    targetId = -1;
    lookTime = 0;
}

void FieldVillagerLook::setLookModeLocked(FieldVillager *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e) {
    using namespace ns_0225f1a0;
    isLocked = 1;
    setLookMode(o, idx, a, b, v, c, d, e);
    targetKind = 3;
    targetSlot = -1;
    targetId = -1;
    lookTime = 0;
}

void FieldVillagerLook::tickLookTime() {
    using namespace ns_0225f1a0;
    lookTime++;
    if (lookTime > 0x960) {
        lookTime = 0x960;
    }
}

void FieldVillagerLook::setLookMode(FieldVillager *o, u32 idx, s32 a, s32 b, void *v, s32 c, s32 d, u8 e) {
    using namespace ns_0225f1a0;
    NpcLookAt_setTarget(&o->lookAt, idx, a, b, v, c, d, e);
    lookMode = idx;
}

s32 FieldVillagerLook::getInsectIfNear(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    using namespace ns_0225f1a0;
    s32 t = FieldInsect_GetPosAndKind(v, i);
    if (t != -1 && func_020e9650(p, v) < lim) {
        return t;
    }
    return -1;
}

s32 FieldVillagerLook::findInsectNear(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    using namespace ns_0225f1a0;
    s32 i;
    s32 t;
    for (i = 0; i < 8; i++) {
        t = getInsectIfNear(v, i, p, lim);
        if (t != -1) {
            *out = i;
            return t;
        }
    }
    return -1;
}

BOOL FieldVillagerLook::isSameInsect(u32 a, s32 b) {
    using namespace ns_0225f1a0;
    u8 buf[1];
    if (b != -1) {
        s32 t;
        buf[0] = 0;
        t = FieldInsect_GetKindAndAlarm(buf, a);
        if (t == b) {
            return TRUE;
        }
    }
    return FALSE;
}

void FieldVillagerLook::startLookAtInsect(FieldVillager *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v) {
    using namespace ns_0225f1a0;
    targetSlot = a;
    targetId = b;
    setLookMode(o, 3, 0, 0, v, 4, data_020c6d1c, 1);
    targetKind = 0;
    lookTime = 0;
}

void FieldVillagerLook::trackInsect(FieldVillager *o) {
    using namespace ns_0225f1a0;
    Unk_ov068_0225f23c_Vec buf;
    if (isSameInsect(targetSlot, targetId)) {
        s32 r = getInsectIfNear(&buf, targetSlot, (Unk_ov068_0225f23c_Vec *)&o->position, o->lookAt.maxDistance);
        if (r != -1 && r == targetId) {
            NpcLookAt_setTargetPos(&o->lookAt, &buf);
        } else {
            resetLook(o);
        }
    } else {
        resetLook(o);
    }
}

BOOL FieldVillagerLook::getFishPosIfNear(Unk_ov068_0225f23c_Vec *v, s32 i, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    using namespace ns_0225f1a0;
    if (FishShadow_GetPos(v, i) && func_020e9650(p, v) < lim) {
        return TRUE;
    }
    return FALSE;
}

s32 FieldVillagerLook::findFishNear(Unk_ov068_0225f23c_Vec *v, s32 *out, Unk_ov068_0225f23c_Vec *p, s32 lim) {
    using namespace ns_0225f1a0;
    s32 i;
    s32 t;
    for (i = 0; i < 6; i++) {
        t = FishShadow_GetFishId(i);
        if (t != -1) {
            if (getFishPosIfNear(v, i, p, lim)) {
                *out = i;
                return t;
            }
        }
    }
    return -1;
}

BOOL FieldVillagerLook::isSameFish(s32 a, s32 b) {
    using namespace ns_0225f1a0;
    s32 t = FishShadow_GetFishId(a);
    if (t != -1 && b == t) {
        return TRUE;
    }
    return FALSE;
}

void FieldVillagerLook::startLookAtFish(FieldVillager *o, s32 a, s32 b, Unk_ov068_0225f23c_Vec *v) {
    using namespace ns_0225f1a0;
    targetSlot = a;
    targetId = b;
    setLookMode(o, 3, 0, 0, v, 4, data_020c6d1c, 1);
    targetKind = 1;
    lookTime = 0;
}

void FieldVillagerLook::trackFish(FieldVillager *o) {
    using namespace ns_0225f1a0;
    Unk_ov068_0225f23c_Vec buf;
    if (isSameFish(targetSlot, targetId)) {
        if (getFishPosIfNear(&buf, targetSlot, (Unk_ov068_0225f23c_Vec *)&o->position, o->lookAt.maxDistance)) {
            NpcLookAt_setTargetPos(&o->lookAt, &buf);
        } else {
            resetLook(o);
        }
    } else {
        resetLook(o);
    }
}

void FieldVillagerLook::update(FieldVillager *o) {
    using namespace ns_0225f1a0;
    s32 idx;
    Unk_ov068_0225f23c_Vec buf;
    if (isLocked == 0) {
        u8 a = lookMode;
        u8 b = o->lookAt.lookType;
        if (a == b) {
            switch (a) {
            case 1:
                if (FieldVillager_GetMood(o) <= 1) {
                    if (NpcLookAt_canSeeTarget(&o->lookAt, o) == 0) {
                        s32 r;
                        idx = -1;
                        r = findInsectNear(&buf, &idx, (Unk_ov068_0225f23c_Vec *)&o->position, 0x5000);
                        if (r != -1) {
                            startLookAtInsect(o, idx, r, &buf);
                        } else {
                            idx = -1;
                            r = findFishNear(&buf, &idx, (Unk_ov068_0225f23c_Vec *)&o->position, 0x5000);
                            if (r != -1) {
                                startLookAtFish(o, idx, r, &buf);
                            }
                        }
                    }
                }
                break;
            case 3:
                if (NpcLookAt_canSeeTarget(&o->lookAt, o)) {
                    tickLookTime();
                }
                switch (targetKind) {
                case 0:
                    trackInsect(o);
                    break;
                case 1:
                    trackFish(o);
                    break;
                default:
                    resetLook(o);
                    break;
                }
                break;
            }
        } else {
            isLocked = 1;
            targetKind = 3;
        }
    }
}
