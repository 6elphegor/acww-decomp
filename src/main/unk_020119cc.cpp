// mwcc-flags: -str reuse
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/Unk_0201acf8.h"
#include "actor/BlinkTimer.h"
#include "gfx/HudObjGfx.h"
#include "player/HeldToolModel.h"
#include "player/HeldItemModel.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcTalkCtrl.h"
#include "gfx/TwoLayerAnimModel.h"
#include "npc/NpcLookAt.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/NpcMoveCtrl.h"
#include "npc/NpcMoveAnimSet.h"
#include "npc/Unk_0201ad18.h"
#include "game/FxVec3.h"
#include "sys/ProcBase.h"
#include "npc/NpcResHandleView.h"
#include "gfx/MatTexPatAnim.h"
#include "npc/NpcActionCtrl.h"
#include "game/GroundInfo.h"
#include "talk/MsgString9B.h"
#include "talk/MsgString9C.h"
#include "talk/MsgString33.h"
#include "talk/MsgString25.h"
#include "npc/NpcFaceAnim.h"
#include "item/ItemName.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "npc/NpcEmotionFx.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "talk/ActorTalkRequest.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcFootstepFx.h"
#include "actor/NpcActor.h"
#include "nitro/mtx.h"
#include "gfx/NNSG3dRS.h"
#include "net/CommManager.h"


struct Unk_02006d14_TalkBase;

struct Unk_02006d14;






// unk_02011ec0.cpp
// Partial view of BlockMap (class in src/main/unk_0204cc1c.cpp): blocks, width/height, unitsX/unitsZ.
struct BlockMap {
    void *blocks;
    Vec2 size;
    Vec2 units;
};



// unk_02011ec0.cpp
// Opaque 0x28-byte block cell of the scene block map (class MapBlock in src/main/unk_02037358.cpp).
struct MapBlock {
    u8 data[0x28];
};


// unk_02012810.cpp
struct RouteGridPos {
    u32 x, z;
};

struct VillagerRoute;


// unk_020131a4.cpp
typedef Vec2 (VillagerRoute::*Unk_02013260_Fn)(u32 a, u32 b);

// unk_02012810.cpp
typedef s32 (VillagerRoute::*Unk_02012810_Fn)(VecFx32 *);

// unk_02012810.cpp
typedef s32 (VillagerRoute::*Unk_02012810_Fn0)();

// unk_02012810.cpp
struct VillagerRouteType {
    Unk_02012810_Fn arrivedCheck;
    Unk_02013260_Fn pickTarget;
    Unk_02012810_Fn tbl[2][3];
};

// unk_02012810.cpp
struct Unk_02012e08_Pos {
    u32 x, z;
    Unk_02012e08_Pos(const RouteGridPos &o) : x(o.x), z(o.z) {}
    Unk_02012e08_Pos(const Unk_02012e08_Pos &o) : x(o.x), z(o.z) {}
};

// unk_02012810.cpp
struct RouteJunction {
    u8 x, z;
    union {
        u8 b;
        struct { u8 lo : 4; u8 hi : 4; } f;
    };
};



// Villager route planner (0x9c bytes, FieldVillagerAi member in ov068): unit-grid path search over gSceneBlockMap
// (unk_02011ec0.cpp step / pick functions, unk_02012810.cpp planner and junction stack, unk_020131a4.cpp control).
struct VillagerRoute {
    /* 0x00 */ u32 stepMode;
    /* 0x04 */ u32 stepPhase;
    /* 0x08 */ u32 routeType;
    /* 0x0c */ Vec2 targetUnit;
    /* 0x14 */ s32 targetBlockX;
    /* 0x18 */ s32 targetBlockZ;
    /* 0x1c */ RouteGridPos waypoint;
    /* 0x24 */ s16 unk_24;
    /* 0x26 */ s16 unk_26;
    /* 0x28 */ VillagerRouteType *typeTable;
    /* 0x2c */ u8 junctions[90];
    /* 0x86 */ u8 pad_86[2];
    /* 0x88 */ u32 pathDir;
    /* 0x8c */ u32 pathMode;
    /* 0x90 */ u32 approachDir;
    /* 0x94 */ u32 lastUnitX;
    /* 0x98 */ u32 lastUnitZ;

    BOOL isInBlock(VecFx32 *v);
    BOOL isInBlockT4(VecFx32 *v);
    BOOL isInBlockT2(VecFx32 *v);
    BOOL stepToDoor(VecFx32 *p);
    BOOL isAtDoorT3(VecFx32 *p);
    BOOL isAtDoorT1(VecFx32 *p);
    BOOL stepCheckArrived(VecFx32 *p);
    BOOL stepWander(VecFx32 *p);
    BOOL stepAdjacentUnit(VecFx32 *p);
    BOOL pickAdjacent(VecFx32 *p, BlockMap *w);
    BOOL stepAlongPath(VecFx32 *p);
    BOOL advanceOnPath(VecFx32 *p, BlockMap *w);
    BOOL stepFollowPath(VecFx32 *p);
    BOOL followPathDir(VecFx32 *p, Vec2 *lim, BlockMap *w);
    BOOL isInAttr200Block(VecFx32 *v);

    s32 oppositeDirs(s32 v);
    s32 runStep(VecFx32 *v);
    u32 getStage();
    s32 findJunction(RouteGridPos *p);
    RouteJunction popJunction(RouteGridPos *p);
    void pushJunction(u32 hi, u32 lo, RouteGridPos *p);
    s32 scanDir(RouteGridPos *out, Unk_02012e08_Pos pos, u32 mask, RouteGridPos *lim, BlockMap *obj);
    u32 pickAdjacentUnit(VecFx32 *v, BlockMap *o);
    s32 scanForPath(VecFx32 *cand, RouteGridPos *p, VecXZ *d, s32 limit, RouteGridPos *q, s32 flag, BlockMap *o);
    u32 findNearestPath(RouteGridPos *out, VecFx32 *pos);
    void planStep(VecFx32 *pos);
    s32 countJunctions();
    void clearJunctions();
    s32 firstDir(s32 v);
    s32 isArrived(VecFx32 *v);

    BOOL isActive();
    void setStepMode(u32 v);
    void checkUnitChanged(u32 v);
    void markUnitUnset();
    void rememberUnit(u32 v);
    void start(u32 a, u32 idx, u32 b, u32 c);
    void reset();
    VillagerRoute* resetTarget();
};


// unk_020131a4.cpp
struct Unk_020133cc_Vec {
    s32 x;
    s32 y;
    s32 z;
    s32 Footstep_GetSeAtPos();
};

// unk_020131a4.cpp
struct Unk_02013474_Half { s16 a; s16 b; };

// unk_020131a4.cpp
struct Unk_02013778_Vec : Unk_020133cc_Vec {
    Unk_02013778_Vec() {}
};

// unk_020131a4.cpp
typedef void (NpcTalkCtrl::*Unk_02013474_Fn)(NpcActor*);


// unk_02013b10.cpp
struct Unk_02013b10_VecT : VecFx32 { Unk_02013b10_VecT() {} Unk_02013b10_VecT(const VecFx32 &o) { x = o.x; y = o.y; z = o.z; } void set(const VecFx32 &o) { x = o.x; y = o.y; z = o.z; } };


class NpcTalkCtrl;


// unk_02013b10.cpp
struct NpcTalkCtrlState {
    void (NpcTalkCtrl::*setupFn)(NpcActor *);
    void (NpcTalkCtrl::*mainFn)(NpcActor *);
};


// unk_02014420.cpp
typedef BOOL (ActorTalkRequest::*Unk_02014420_Fn)();

struct Actor;


// unk_02014d90.cpp
struct TalkSubSceneParams {
      s32 subSceneType;
      s32 menuPtrArg0;
      s32 menuPtrArg1;
      s32 menu12Arg;
      s32 pocketFilter;
      u16 pocketMask;
      u16 subSceneItem;
      s32 handOverKind;
      u8 pocketSelectMode;
      u8 pad_1d;
      u8 launcherMenu;
      u8 launcherIndex;
      u8 keepWindowClosed;
      u8 pad_21[0x2c - 0x21];
      u8 handOverMode;
      u8 pad_2d[3];
      s32 handOverVariant;
      s32 launcherText;
      s32 launcherTextSize;
      u8 focusNewSpeaker;
      u8 unk_3d;
      u8 pad_3e[2];
      s32 closeMode;
};


// unk_02014d90.cpp
typedef BOOL (ActorTalkRequest::*ActorTalkTaskFn)();

void operator delete(void *p);








// unk_02015fe0.cpp
typedef void (NpcActionCtrl::*Unk_02016360_Fn)(NpcActor *);

// unk_02016a44.cpp
struct Unk_02016a44_S0ec { u8 pad[4]; };

// unk_02016a44.cpp
struct Unk_02006d14_Prim {
    u8 pad_000[0x5c];
    s32 position;
    u8 pad_060[4];
    s32 positionZ;
    u8 pad_068[0x8e - 0x68];
    s16 rotY;
    u8 pad_090[0xec - 0x90];
};
// NpcActor view (also passed for the player by HeldToolModel): the model at +0xec, reached as a secondary base
struct Unk_02006d14_TalkBase {
    Unk_02016a44_S0ec unk_ec;
};
class Unk_02006d14 : public Unk_02006d14_Prim, public Unk_02006d14_TalkBase {
public:
    u8 pad_0f0[0x198 - 0xf0];
    u32 modelAnimFrameStep;
    u8 pad_19c[0x334 - 0x19c];
    NpcAnimCtrl animCtrl;
    NpcMoveCtrl moveCtrl;
    u8 pad_3a8[0x478 - 0x3a8];
    s32 headTopPosX;
    s32 headTopPosY;
    s32 headTopPosZ;
    u8 pad_484[0x514 - 0x484];
    SndSeEmitterKind1 seEmitter;
    u8 pad_558[0x628 - 0x558];
    void *curHeldTool;
};



// unk_02017d74.cpp
struct Unk_02017d74_Buf {
    s32 a;
    s32 b;
    s32 c;
};


// unk_02017d74.cpp
typedef void (NpcActionCtrl::*Unk_02017d74_Fn)(NpcActor *);


struct NpcEmotionEntry;



// unk_02018698.cpp

// unk_02018698.cpp
typedef VecFx32Ctor V;


struct NpcActionCtrl;

// unk_02019020.cpp
typedef void (NpcActionCtrl::*Unk_02019858_FnA)(u8 *owner);

// unk_02019020.cpp
typedef void (NpcActionCtrl::*Unk_02019858_FnB)(u8 *arg);

// unk_02019020.cpp
typedef void (NpcActionCtrl::*Unk_02019858_FnC)(u8 *arg);

// unk_02019020.cpp
struct NpcActionEntry {
    Unk_02019858_FnA setupFn;
    Unk_02019858_FnB mainFn;
    Unk_02019858_FnC postFn;
};













// unk_02019998.cpp
typedef void (NpcLookAt::*Unk_0201a1e0_Fn)(NpcActor *);







// unk_0201a334.cpp
struct NpcMoveModeEntry {
    s32 animKind;
    s16 defaultTurnSpeed;
    s16 pad_06;
    s32 speedPresetIdx;
    s32 arriveDistance;
    u8 keepAnimFrame;
    u8 pad_11[3];
};

class NpcLookAt;

class NpcMoveCtrl;

class NpcObstacleProbe;





// unk_0201ac80.cpp
struct Unk_0201b2b8_Bits { u32 lo : 12; u32 mid : 16; u32 hi : 4; };

// unk_0201ac80.cpp
struct Unk_0201b2b8_S { u8 b0; u8 pad; s16 h2; s16 h4; u16 h6; u16 h8; u16 ha; };




// unk_0201ac80.cpp
typedef VecFx32 V3;






// the direction table sRouteDirs (filled by __sinit)
struct Unk_021be028_Dir {
    s32 x, z;
    Unk_021be028_Dir(s32 a, s32 b) { x = a; z = b; }
};
struct NpcEmotionEntry {
    u32 introAnim;
    const u16 *introFxSlots;
    u32 introFxInfo;
    u32 loopAnim;
    const u16 *loopFxSlots;
    u32 loopFxInfo;
    u32 playFlags;
};
typedef void (NpcTalkCtrl::*Unk_02014040_Fn)(NpcActor *);


// ---- unk_02011580.cpp
namespace nA {
extern "C" {

extern const char data_020d6f7c[];
extern const char data_020d6f9c[];
extern const char data_020d6fbc[];
extern const char data_020d6fdc[];
extern const char data_020d6ff8[];
extern const char data_020d7018[];
extern const char data_020d7038[];
extern const char data_020d7058[];
extern u8 data_021bddc0[];
extern u8 sSceneHudKinds[];
extern u32 data_021bdd80[];
extern u32 data_020d6f54[];
extern HudObjGfx sHudObjGfx;
void FS_InitFile(void *p);
void *_ZN11HudObjGfxIo11freePaletteEv(void *p);
void *_ZN11HudObjGfxIo9freeCharsEv(void *p);
void _ZN11HudObjGfxIo21releaseSlideIconCharsEv(void *p);
void _ZN11HudObjGfxIo20uploadSlideIconCharsEv(void *p);
s32 _ZN11HudObjGfxIo18loadSlideIconCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo20releaseLinkIconCharsEv(void *p);
void _ZN11HudObjGfxIo19uploadLinkIconCharsEv(void *p);
s32 _ZN11HudObjGfxIo17loadLinkIconCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo23uploadCameraButtonCharsEi(void *p, u32 v);
s32 _ZN11HudObjGfxIo21loadCameraButtonCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo13uploadPaletteEi(void *p, u32 v);
void _ZN11HudObjGfxIo11uploadCharsEi(void *p, u32 v);
s32 _ZN11HudObjGfxIo13loadKindCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo15uploadKindCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo16releaseKindCharsEv(void *p);
s32 InputMode_IsTouch(void);
s32 Scene_GetCurrent(void);
s32 ChatBalloon_RefreshLabelsUnk(void);
void *Mem_AllocTail(u32 size);
void *FS_OpenFile(void *self, const char *path);
s32 FS_ReadFile(void *self, void *buf, u32 size);
s32 FS_CloseFile(void *self);
void MI_CpuFill8(void *dst, u32 v, u32 n);
s32 Hud_GetSceneHudKind(void);
void HudObjGfx_InitFile(void *p);
#define SndSeEmitter_dtorBase _ZN12SndSeEmitterD2Ev
void SndSeEmitter_dtorBase(void *p);
HeldItemModel *_ZN16NpcResHandleView16getHeldItemModelEv(void *p);
void HeldItemModel_SetAnimSpeed(HeldItemModel *p, u32 v);
BlendAnimModel *HeldItemModel_GetModel(HeldItemModel *p);
void Model_GetJointWorldMtx(Unk_02006d14_TalkBase *dst, void *src, u32 n);
void HeldItemModel_Draw(HeldItemModel *p, void *src);
void HeldItemModel_Update(HeldItemModel *p);
void _ZN12NpcResHandle7releaseEv(void *p);
void HeldItemModel_PlayAnim(HeldItemModel *p, u32 a, u32 b, u32 c);
inline BOOL Unk_02011c44_InRange(u32 id, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (id >= lo && id <= hi) r = TRUE;
    return r;
}
}
}

// ---- unk_02011ec0.cpp
namespace nB {
extern "C" {

void _ZN13VillagerRoute8planStepEP7VecFx32(void *self, VecFx32 *p);
void _ZN13VillagerRoute14clearJunctionsEv(void *self);
s32 _ZN13VillagerRoute8firstDirEi(void *self, s32 mask);
s32 _ZN13VillagerRoute9isArrivedEP7VecFx32(void *self, VecFx32 *p);
s32 _ZN13VillagerRoute16pickAdjacentUnitEP7VecFx32P8BlockMap(void *self);
void _ZN13VillagerRoute16checkUnitChangedEj(void *self);
void _ZN13VillagerRoute13markUnitUnsetEv(void *self);
void *_ZN16NpcResHandleView16getHeldItemModelEv(void *);
s32 HeldItemModel_PlayAnim(void *, u32, u32, u32);
void HeldItemModel_SetItem(void *, void *, u32);
void _ZN11NpcAnimCtrl16playHoldItemPoseEP8NpcActorPtPvt(void *, u32, void *, u32, u32);
s32 _ZN12NpcResHandle7acquireEv(void *);
s32 _ZN16NpcResHandleView12loadHeldItemEi(void *, u32);
void _ZN22NpcHeldItemModelHandleD1Ev(void *);
void _ZN22NpcHeldItemModelHandleC1Ev(void *);
extern BlockMap *gSceneBlockMap;
extern u8 gSaveVillagers[];
extern u8 gRandom[];
extern s16 data_02135f44[];
extern s32 sRouteDirs[];
s32 MapBlock_HasAnyAttr(void *, u32);
void *_ZN12MapBlockAcre8getUnk04Ev();
s32 Random_PickSetBit(u32, s32, s32);
s32 Random_GlobalBelow(u32);
u8 *_ZN20VillagerDataItemView11getHousePosEv(...);
s32 _ZN12VillagerData13getVillagerIdEv(void *);
s32 SaveVillagers_PickRandomExcept(void *, void *, u32);
void func_02133ef8(void *, u32);
void VillagerRoute_PickPathUnitInBlock(Vec2 *out, void *self, void *a, BlockMap *w);
void FieldPos_ToUnit(s32 *, s32 *, VecFx32 *);
void FieldPos_FromUnitCenter(VecFx32 *, s32, s32);
s32 BlockMap_BlockHasAllAttr(BlockMap *, s32, s32, u32);
s32 BlockMap_FindBlockAllAttr(BlockMap *, u32);
s32 Math_AngleXZ(VecFx32 *, VecFx32 *);
s32 Random_Next(void *);
s32 func_01ffcb0c(s32, s32);
void FieldPos_SnapToUnitCenter(VecFx32 *, VecFx32 *);
s32 TownMap_IsPosWalkable(VecFx32 *, s32);
s32 TownMap_IsUnitWalkable(s32, s32, BlockMap *);
s32 _ZN8BlockMap12getWalkLinksEii(BlockMap *, s32, s32);
static inline MapBlock *GetCell(BlockMap *w, u32 x, u32 y)
{
    if (x < (u32)w->size.x && (u32)w->size.y > y && w->blocks != NULL) {
        return (MapBlock *)w->blocks + (x + w->size.x * y);
    }
    return NULL;
}
static inline MapBlock *GetCellD(BlockMap *w, u32 x, u32 y, MapBlock *volatile *dflt)
{
    if (x < (u32)w->size.x && (u32)w->size.y > y && w->blocks != NULL) {
        return (MapBlock *)w->blocks + (x + w->size.x * y);
    }
    return *dflt;
}
void VillagerRoute_PickCoastBlock(Vec2 *out, void *self, VecFx32 *v);
void VillagerRoute_PickRandomBlock(Vec2 *out, void *self);
void VillagerRoute_PickOwnHouseBlock(Vec2 *out, void *self, u32 unused, NpcActor *obj);
void VillagerRoute_PickOwnHouseDoor(Vec2 *out, void *self, u32 unused, NpcActor *obj);
void VillagerRoute_PickOtherHouseBlock(Vec2 *out, void *self, u32 unused, NpcActor *obj);
void VillagerRoute_PickOtherHouseDoor(Vec2 *out, void *self, u32 unused, NpcActor *obj);
void VillagerRoute_PickAttr200Target(Vec2 *out, void *self);
}
}

// ---- unk_02012810.cpp
namespace nC {
extern "C" {
namespace nC2 { extern VecXZ sRouteDirs[4]; }
void _ZN13VillagerRoute12rememberUnitEj(void *self, VecFx32 *v);
extern s32 sRouteDirs[];
extern BlockMap *gSceneBlockMap;
s32 _ZN8BlockMap17getWalkLinksAtPosEPv(BlockMap *o, VecFx32 *v);
u32 BlockMap_GetBlockAttr(BlockMap *o, s32 x, s32 z);
s32 Vec_DistXZ(VecFx32 *a, VecFx32 *b);
void FieldPos_ToBlockUnit2(RouteGridPos *a, RouteGridPos *c, VecFx32 *v);
void FieldPos_FromBlockUnitCenter(VecFx32 *out, u32 a, u32 b, u32 c, u32 d);
s32 TownMap_IsUnitWalkable(u32 x, u32 z, BlockMap *o);
s32 Random_PickSetBit(u32 mask, s32 n, s32 max);
s32 _ZN8BlockMap12getWalkLinksEii(BlockMap *o, u32 x, u32 z);
void FieldUnit_FromBlockUnit(u32 *bx, u32 *bz, u32 x, u32 z, u32 a, u32 b);
s32 Random_GlobalBelow(s32 n);
void FieldPos_ToUnit(u32 *x, u32 *z, VecFx32 *v);
void FieldPos_FromUnitCenter(VecFx32 *out, u32 x, u32 z);
void *MI_CpuFill8(void *, int, u32);
void *MI_CpuCopy8(const void *, void *, u32);
void VillagerRoute_PickPathUnitInBlock(RouteGridPos *out, s32 unused, RouteGridPos *p, BlockMap *obj);
}
}

// ---- unk_020131a4.cpp
namespace nD {
extern "C" {

void _ZN13VillagerRoute8planStepEP7VecFx32(void *self, u32 v);
void _ZN13VillagerRoute14clearJunctionsEv(void *self);
void _ZN11NpcTalkCtrl7endTalkEP8NpcActor(void *self, NpcActor* p);
void _ZN11NpcTalkCtrl16startTalkMessageEP8NpcActor(void *self);
void _ZN11NpcTalkCtrl18updateSpeakerMouthEP8NpcActor(void *self, NpcActor* p);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN13NpcActionCtrl16requestTalkingOnEv(void *self);
void _ZN13NpcActionCtrl12requestAct07Eiiiit(void *self, u32 a, u32 b, u32 c, u32 d, u32 e);
s32 _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *self);
s32 _ZN13NpcActionCtrl12getEmotionIdEv(void *self);
s32 _ZN13NpcActionCtrl9getActionEv(void *self);
void _ZN14NpcSpeechState12stopSpeakingEv(void *self);
s32 _ZN11NpcMoveCtrl11getMoveModeEv(void *self);
NpcActor* _ZN16ActorTalkRequest15getSpeakerActorEv(void *self);
void _ZN16ActorTalkRequest11playEmotionEjj(void *self, u32 a, u32 b);
NpcActor* _ZN16ActorTalkRequest15getPartnerActorEv(void *self);
void _ZN16ActorTalkRequest4tickEv(void *self);
ActorTalkRequest* _ZN8NpcActor14getTalkRequestEv(void *self);
void _ZN9Character17detachTalkRequestEi(void *self, ActorTalkRequest* o);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *self, u32 v);
void Snd_SeEmitterPlayAlternate(void *self, s32 a, u32 b);
s32 Footstep_GetSeAtPos(void *self);
BOOL _ZN8BlockMap12getWalkLinksEii(void* p, u32 x, u32 y);
void FieldPos_FromUnitCenter(void* p, u32 x, u32 y);
void FieldPos_ToUnit(u32* a, u32* b, u32 c);
void MI_CpuFill8(void* p, u32 v, u32 n);
BOOL _ZN13VillagerRoute11scanForPathEP7VecFx32P12RouteGridPosP5VecXZiS3_iP8BlockMap(void* unused, void* p1, u32* pos, u32* step, s32 n, u32* bound, s32 flag, void* q);
extern VillagerRouteType sVillagerRouteTypes[];
s32 _ZN8NpcActor19getTeachableEmotionEv();
s32 Emotion_FindSlot(u32 v);
void Effect_Create(u32 a, void* b, void* c, u32 d);
static inline BOOL Unk_02013568_IsSet(u32 v, u32 m)
{
    if (v & m) return TRUE;
    return FALSE;
}
void Melody_Play();
void Camera_FocusOnPair(void* a, void* b);
void Camera_FocusOnPoint(void* a);
extern u16 data_020c6cc8;
void VillagerRoute_Destruct();
}
}

// ---- unk_02013b10.cpp
namespace nE {
extern "C" {

NpcActor *_ZN16ActorTalkRequest9getActorBEj(ActorTalkRequest *p, u8 idx);
s32 _ZN16ActorTalkRequest9startTaskEi(ActorTalkRequest *p, s32 a);
u32 Camera_IsBlending(void);
u32 Camera_GetBlendFramesLeft(void);
void _ZN14TalkMsgRequest17changeSpeakerNameEP9MsgStringj(ActorTalkRequest *p, MsgString9B *x, u8 *b);
void Camera_RetargetFocus(VecFx32 *v);
void _ZN14TalkMsgRequest14setSpeakerNameEPhj(ActorTalkRequest *o, s32 a, u8 *b);
void _ZN10MsgRequest11setFileNameEPKc(ActorTalkRequest *o, s32 a);
s32 _ZN15TalkWindowState14isVoicePlayingEv(TalkWindowState *p);
s32 _ZN13NpcActionCtrl17requestTalkingOffEv(void *p);
s32 _ZN13NpcActionCtrl16requestTalkingOnEv(void *p);
s32 _ZN13NpcActionCtrl9getActionEv(void *p);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *p);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void Melody_Play(void);
NpcActor *_ZN16ActorTalkRequest15getPartnerActorEv(ActorTalkRequest *o);
u8 *_ZN16ActorTalkRequest15getSpeakerActorEv(ActorTalkRequest *o);
void _ZN14NpcSpeechState12stopSpeakingEv(void *p);
void _ZN14NpcSpeechState13startSpeakingEv(void *p);
void _ZN9Character17detachTalkRequestEi(NpcActor *ctx, ActorTalkRequest *o);
void _ZN9Character17attachTalkRequestEi(NpcActor *ctx, ActorTalkRequest *o);
void _ZN16ActorTalkRequest11playEmotionEjj(ActorTalkRequest *o, s32 a, s32 b);
void _ZN16ActorTalkRequest4tickEv(ActorTalkRequest *o);
void Camera_FocusOnPair(VecFx32 *a, VecFx32 *b);
void Camera_FocusOnPoint(VecFx32 *a);
void Camera_SetModeDefault(void);
s32 PlayerActor_SetHeadTilt(s32 a, s32 b, s32 c);
u8 *_ZN8NpcActor16getSpeakerGenderEv(void *p);
extern u16 data_020c6cc8;
extern NpcTalkCtrlState sNpcTalkCtrlStates[5];
void NpcTalkCtrl_Destroy(void);
void _ZN11NpcTalkCtrlC1Ev(void);
}
}

// ---- unk_02014420.cpp
namespace nF {
extern "C" {

BOOL _ZN16ActorTalkRequest9startTaskEi(void *self, s32 cmd);
void _ZN16ActorTalkRequest19clearItemActionBusyEv(void *self);
void _ZN16ActorTalkRequest17setItemActionBusyEv(void *self);
void _ZN15TalkWindowState13unlockAdvanceEv(void *p);
void _ZN15TalkWindowState11lockAdvanceEv(void *p);
s32 _ZN13NpcActionCtrl9getActionEv(void *p);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *p);
BOOL _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, u32 i, s32 j);
BOOL _ZN13NpcActionCtrl15requestTakeItemEiPtjhjj(void *p, s32 a, u16 *b, u32 c, u32 d, u32 e, u32 f);
void Melody_Unpack(void *p, void *q);
void Melody_PlayEditPattern(u32 v);
void Melody_PlayRandom(u32 v);
extern u16 data_020c6cc8;
extern s32 data_020ddf8c;
extern u8 gMelodyEditPattern[];
}
}

// ---- unk_02014d90.cpp
namespace nG {
extern "C" {

void _ZN16ActorTalkRequest20requestSwitchSpeakerEh(void *self, s32 x);
u8 * _ZN16ActorTalkRequest8getActorEj(void *self, u32 x);
extern u16 data_020c6cc8;
extern u8 gVec3Zero[];
u32 _ZN13NpcActionCtrl9getActionEv(u8 *p);
u32 _ZN13NpcActionCtrl12isActionDoneEv(u8 *p);
BOOL _ZN13NpcActionCtrl15requestGiveItemEiPtjhjj(u8 *p, s32 a, u16 *b, u32 c, u32 d, u32 e, u32 f);
void _ZN15TalkWindowState13unlockAdvanceEv(void *p);
void _ZN15TalkWindowState11lockAdvanceEv(void *p);
BOOL MenuCtrl_IsFinished();
u16 MenuCtrl_BuildPocketMask(u32 p);
BOOL MenuCtrl_OpenPocketSelect(u32 a, u32 b);
BOOL MenuCtrl_OpenPostOffice();
BOOL MenuCtrl_OpenLauncher(u32 a);
BOOL MenuCtrl_OpenLauncherWithIndex(u32 a, u32 b);
BOOL MenuCtrl_OpenNearbyTowns(u32 a, u32 b);
BOOL MenuCtrl_RequestOpenMenu12(u32 a);
BOOL MenuCtrl_OpenLauncherWithText(u32 a, u32 b, u32 c);
u32 TalkRequest_GetPlayerId();
u32 PlayerActor_GetBodyPos();
s32 Math_AngleXZ(u32 a, u8 *b);
void PlayerActor_SetHeadTilt(u32 a, s16 b, u32 c);
void PlayerActor_RequestTurnTo(s32 a, u32 b);
void PlayerActor_SetNoFaceTalkTarget(u32 a, u32 b);
Actor *PlayerActor_GetCharacter(u32 a);
s32 _ZN8NpcActor10getAngleToEPS_(u8 *a, u8 *b);
s32 _ZN8NpcActor16getAngleToPlayerEj(u8 *a, u32 b);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, s32 f, u32 g, u32 h, u32 i, u32 j);
void _ZN9NpcLookAt9setTargetEhiiP7VecFx32iih(u8 *p, u32 a, u32 b, u8 *c, u8 *d, u32 e, u32 f, u32 g);
ActorTalkRequest *_ZN8NpcActor14getTalkRequestEv();
}
}

// ---- unk_020156ac.cpp
namespace nH {
extern "C" {

extern u32 gVec3Zero;
extern u16 data_020c6cc8;
s32 Scene_GetCurrent(void);
s32 Net_GetJoiningAid(void);
s32 PlayerActor_GetLocalSessionSlot(void);
s32 _ZN15TalkWindowState17setSlotFromStringEiii(TalkWindowState *a, u32 b, u32 c, u32 d);
s32 _ZN15TalkWindowState12setNamedSlotEiPvj(TalkWindowState *a, u32 b, void *c, u32 d);
s32 _ZN15TalkWindowState7setSlotEiPv(TalkWindowState *a, u32 b, void *c);
u32 _ZN15TalkWindowState13getChoiceListEv(u32 a);
void _ZN10VillagerId7getNameEj(u32 a, void *b);
void _ZN8PlayerId13getNameStringEP9MsgString(u32 a, void *b);
void TownId_GetNameString(u32 a, void *b);
void String_GetDayOrdinal(void *a, u32 b);
void String_GetMonthName(void *a, u32 b);
void String_FormatFixedPoint(void *a, s32 b, s32 c);
void String_FormatNumber(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void String_Load(void *a, u8 *b, u8 *c);
void _ZN9MsgString12appendStringEPS_(void *a, void *b);
void _ZN9NpcLookAt9setTargetEhiiP7VecFx32iih(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 Npc_GetVoiceType(void *p);
s32 _ZN16ActorTalkRequest7runTaskEv(void *p);
void _ZN16ActorTalkRequest10resetTasksEv(void *p);
void _ZN14NpcSpeechState12setMouthTypeEi(void *p, s32 a);
s32 _ZN14NpcSpeechState12getMouthTypeEv(void *p);
s32 _ZN14NpcSpeechState10isSpeakingEv(void *p);
s32 NpcFace_PickTalkMouth(void);
s32 _ZN13NpcActionCtrl9getActionEv(void *p);
void _ZN13NpcActionCtrl14requestEmotionEiht(void *p, u32 a, u8 b, u32 c);
s32 _ZN19ThreeLayerAnimModel19checkLayer3FinishedEv(void *p);
void _ZN19ThreeLayerAnimModel18playLayer3FromBaseEjj(void *p, u32 a, u32 b);
void _ZN19ThreeLayerAnimModel10playLayer3Ejjjjjji(void *p, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3);
void _ZN19ThreeLayerAnimModel20assignJointsToLayer3Ejj(void *p, u32 a, u32 b);
s32 *_ZN11NpcMoveCtrl17getCurSpeedPresetEv(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
void *_ZN12NpcResHandle16getBodyAnimLayerEj(void *p, u32 idx);
s32 _ZN12NpcResHandle7releaseEv(void *p);
s32 AnimSlotRef_GetAnimId(void *p);
s32 AnimSlotRef_GetData(void *p);
s32 AnimSlotRef_Load(void *p, u32 a, u32 b, u32 c);
s32 CharaAnim_GetJointGroup(u32 a);
s32 JointGroup_GetRangeCount(void);
u32 JointGroup_GetRangeFirst(s32 a, u32 b);
u32 JointGroup_GetRangeLast(s32 a, u32 b);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
s32 _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(void *a, void *b, u32 c, u32 d, u32 s0, u32 s1, u32 s2, u32 s3);
s32 func_021065dc(s32 a);
s32 func_021065f8(s32 a, s32 b);
ActorTalkRequest *_ZN8NpcActor14getTalkRequestEv(void);
s32 TalkRequest_GetPlayerId(void);
}
}

// ---- unk_02015fe0.cpp
namespace nI {
extern "C" {

BOOL Item_IsHoldable(u16 *p);
s32 CharaAnim_GetHoldPoseMode(void *p);
s32 CharaAnim_GetJointGroup(s32 a);
s32 JointGroup_GetRangeLast(s32 a, s32 b);
s32 JointGroup_GetRangeFirst(s32 a, s32 b);
s32 JointGroup_GetRangeCount(void);
s32 HeldItem_GetHandPose(u16 *p);
void _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *a, s32 b, s32 c);
void _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(void *a, s32 b, s32 c);
void BlendAnimModel_Play2(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
void _ZN19ThreeLayerAnimModel10playLayer3Ejjjjjji(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
s32 _ZN14NpcMoveAnimSet12getStandAnimEv(void *p);
s32 _ZN14NpcMoveAnimSet11getWalkAnimEv(void *p);
s32 _ZN14NpcMoveAnimSet10getRunAnimEv(void *p);
void _ZN11NpcAnimCtrl13syncMouthTypeEP8NpcActor(void *a, void *b);
s32 _ZN11NpcAnimCtrl9getAnimIdEj(void *a, s32 b);
s32 _ZN14NpcSpeechState12getMouthTypeEv(void *a);
void _ZN11NpcFaceAnim16setFaceAnimsFromEPvii(void *a, s32 b, s32 c, s32 d);
void *_ZN12NpcResHandle16getBodyAnimLayerEj(void *a, s32 b);
void AnimSlotRef_Load(void *a, s32 b, s32 c, s32 d);
void *AnimSlotRef_GetData(void *a);
void *func_021065dc(void *a);
void *func_021065f8(void *a, s32 b);
void _ZN11NpcAnimCtrl17setAnimSpeedFixedEh(void *a, s32 b);
BOOL _ZN12NpcResHandle7acquireEv(void *a);
void _ZN9AnimModel10attachAnimEv(void *a);
void _ZN5Model11setCallbackEiiiii(void *a, void *b, s32 c, s32 d, void *e, s32 f);
s32 _ZN11NpcAnimCtrl14hasTalkGestureEv(void *a);
void _ZN11NpcAnimCtrl15loadTalkGestureEv(void *a);
void NpcActor_JointCalcLayer3Cb(void);
void _ZN17NpcBodyAnimHandleD1Ev(void *a);
void _ZN17NpcBodyAnimHandleC1Ev(void *a);
BOOL _ZN8NpcActor15netReadPositionEPiPh(void *o, VecFx32 *v, s16 *a);
void _ZN11NpcMoveCtrl16aimAtDestinationEP9Character(void *a, void *b);
void _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(void *a, void *b, s32 c, s32 d, u32 e);
s32 _ZN11NpcMoveCtrl11getMoveModeEv(void *a);
void _ZN11NpcMoveCtrl14setTargetAngleEs(void *a, s32 b);
s32 _ZN11NpcMoveCtrl14getTargetAngleEv(void *a);
void _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(void *a, VecFx32 *v);
void _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(void *a, VecFx32 *v);
BOOL NpcActor_IsFrontAngle(s16 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 Math_Atan2(s32 a, s32 b);
extern u16 data_020c6cc8;
extern VecFx32 gVec3Zero;
static inline BOOL Unk_02015fe0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
}
}

// ---- unk_02016a44.cpp
namespace nJ {
extern "C" {

void _ZN13NpcActionCtrl13setActionDoneEi(void *self, s32 v);
void _ZN13NpcActionCtrl16setPendingActionEii(void *self, s32 a, s32 b);
NpcActionParams * _ZN13NpcActionCtrl12getCurParamsEv(void *self);
void NpcAction_PackItem(void *self, void *a, u16 *b);
extern volatile u16 data_020c6cc8;
extern u8 gVec3Zero[];
s32 func_01ffcb0c(s32 a, s32 b);
s32 Math_Atan2(s32 a, s32 b);
BOOL _ZN8NpcActor15netReadPositionEPiPh(Unk_02006d14 *o, s32 *v, s16 *a);
BOOL NpcActor_IsFrontAngle(s16 a);
void _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(NpcMoveCtrl *p, Unk_02006d14 *o, u32 a, u32 b, u32 c);
void _ZN11NpcMoveCtrl14setTargetAngleEs(NpcMoveCtrl *p, s32 a);
void _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(NpcMoveCtrl *p, void *v);
void _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(NpcMoveCtrl *p, void *v);
s32 _ZN11NpcAnimCtrl9getAnimIdEj(NpcAnimCtrl *p, u32 a);
BOOL _ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(NpcAnimCtrl *p, ...);
void _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(NpcAnimCtrl *p, Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void _ZN13HeldToolModel12playIdleAnimEjj(void *p, u32 a, u32 b);
void Effect_PlayById2(u32 a, void *p, u32 b, u32 c);
void Snd_SeEmitterPlayOneShotAlt(SndSeEmitterKind1 *p, u32 a, u32 b, u32 c);
void HandOverItem_End(Unk_02006d14 *o);
s32 Effect_End(s32 h);
void Effect_SetPosition(s32 h, void *a, s16 *b, u32 c);
s32 Effect_Create(u32 a, s32 *v, s16 *b, u32 c);
BOOL HandOverItem_RequestMode(u32 a, Unk_02006d14 *o);
s32 HandOverItem_IsModeActive(u32 a);
BOOL HandOverItem_IsActive();
void HandOverItem_SetNextMode(u32 a, Unk_02006d14 *o);
void PlayerActor_PlayLocalSe(u32 a);
BOOL HandOverItem_IsMaster(Unk_02006d14 *o);
BOOL PlayerActor_RequestAct32();
void _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(Unk_02016a44_S0ec *p, u32 a, u32 b);
void HandOverItem_GetItem(u16 *p);
void _ZN15NpcActionParams5clearEv(NpcActionParams *p);
}
}

// ---- unk_0201745c.cpp
namespace nK {
extern "C" {
namespace nK2 { BOOL _ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(void *p, void *q); }
extern volatile u16 data_020c6cc8;
extern u8 gVec3Zero[];
void *_ZN13NpcActionCtrl12getCurParamsEv(NpcActionCtrl *s);
BOOL HandOverItem_IsModeActive(u32 a);
void HandOverItem_SetNextMode(u32 a, void *p);
BOOL HandOverItem_SwitchMaster(void *p);
BOOL PlayerActor_LocalRequestAct37(void);
BOOL _ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(void *p);
s32 _ZN11NpcAnimCtrl9getAnimIdEj(void *p, u32 a);
BOOL HandOverItem_RequestMode(u32 a, void *p);
u32 HandOverItem_GetNextMode(void);
void _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
s32 _ZN13NpcActionCtrl13setActionDoneEi(NpcActionCtrl *s, u32 a);
void Snd_SeEmitterPlayOneShotAlt(void *a, u32 b, u32 c, u32 d);
void _ZN13HeldToolModel12playIdleAnimEjj(void *a, u32 b, u32 c);
void HandOverItem_End(void *p);
void Effect_End(s32 a);
s32 Effect_SetPosition(s32 a, void *b, void *c, u32 d);
s32 Effect_Create(u32 a, void *b, void *c, u32 d);
s32 Effect_PlayById2(u32 a, void *b, u32 c, u32 d);
BOOL HandOverItem_IsActive(void);
BOOL HandOverItem_IsMaster(void *p);
BOOL PlayerActor_RequestAct32(void);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *p, u32 a, u32 b);
BOOL HandOverItem_CanTake(void *p);
void _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(void *a, void *b, u32 c, u32 d, u32 e);
void _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(void *a, void *b);
void _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(void *a, void *b);
void _ZN13NpcActionCtrl11act0EStep19EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep18EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep17EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep16EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep15EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep14EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep13EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep12EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep11EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep10EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep09EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep08EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep07EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
BOOL _ZN13NpcActionCtrl15waitItemAnimEndEP12Unk_02006d14Ptjj(NpcActionCtrl *s, NpcActor *c, void *p, u32 a, u8 b);
void _ZN13NpcActionCtrl11act0EStep06EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
BOOL _ZN13NpcActionCtrl15waitItemAnimEndEP12Unk_02006d14Ptjj(NpcActionCtrl *s, NpcActor *c, void *p, u32 a, u8 b);
void _ZN13NpcActionCtrl11act0EStep05EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep04EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep03EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep02EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl11act0EStep01EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c);
}
}

// ---- unk_02017d74.cpp
namespace nL {
extern "C" {

extern volatile u16 data_020c6cc8;
extern u8 gVec3Zero[];
extern u32 sNpcGiveItemAnims[];
NpcActionParams *_ZN13NpcActionCtrl12getCurParamsEv(void *s);
BOOL HandOverItem_IsModeActive(u32 a);
void HandOverItem_SetNextMode(u32 a, void *p);
BOOL HandOverItem_SwitchMaster(void *p);
BOOL PlayerActor_LocalRequestAct37(void);
BOOL _ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(void *p);
BOOL HandOverItem_RequestMode(u32 a, void *p);
void _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
s32 _ZN13NpcActionCtrl13setActionDoneEi(void *s, u32 a);
void Snd_SeEmitterPlayOneShotAlt(void *a, u32 b, u32 c, u32 d);
void _ZN13HeldToolModel12playIdleAnimEjj(void *a, u32 b, u32 c);
BOOL HandOverItem_IsActive(void);
BOOL HandOverItem_IsMaster(void *p);
BOOL PlayerActor_RequestAct32(void);
BOOL HandOverItem_CanTake(void *p);
BOOL HandOverItem_GetPos(void *p);
void _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(void *a, void *b, u32 c, u32 d, u32 e);
void _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(void *a, void *b);
void _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(void *a, void *b);
void _ZN12Unk_0201acf813func_0201acf8Et(void *a, s32 b);
BOOL Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
s32 Scene_GetCurrent(void);
void PlayerActor_LocalRequestAct36(void *a, void *b, void *c, void *d, void *e);
void PlayerActor_RequestAct30(void *a, void *b, void *c, void *d, void *e);
void HandOverItem_Begin(void *a, s32 b, u32 c, s32 d, void *e, s32 f);
void NpcAction_PackAnim(void *a, s32 b, u32 c, u32 d, u32 e);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *s);
static inline BOOL Unk_02017d74_Is(u16 *p, u16 v) {
    if (Item_IsFurniture(p)) {
        u16 t = v;
        s32 x = Item_GetFurnitureIndex(p);
        return x == Item_GetFurnitureIndex(&t) ? TRUE : FALSE;
    }
    return *p == v ? TRUE : FALSE;
}
}
}

// ---- unk_02018698.cpp
namespace nM {
extern "C" {

extern volatile u16 data_020c6cc8;
extern u8 gVec3Zero[];
extern NpcEmotionEntry sEmotionTable[];
extern u32 sNpcAct07Anims[];
extern u16 sNpcAct07Ses[];
NpcActionParams *_ZN13NpcActionCtrl12getCurParamsEv(NpcActionCtrl *s);
s32 _ZN13NpcActionCtrl13setActionDoneEi(NpcActionCtrl *s, u32 a);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(NpcActionCtrl *s);
void _ZN13NpcActionCtrl9mainAct01EPh(NpcActionCtrl *s, NpcActor *c);
void _ZN13NpcActionCtrl10setupAct01EPh(NpcActionCtrl *s, NpcActor *c);
void NpcAction_PackTurn(void *p, s32 a, s32 b, u32 c);
void _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(void *a, void *b, u32 c, u32 d, u32 e);
void _ZN11NpcMoveCtrl16aimAtDestinationEP9Character(void *a, void *b);
void _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(void *a, void *b);
void _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(void *a, void *b);
void _ZN11NpcMoveCtrl14setTargetAngleEs(void *a, s32 b);
void _ZN12Unk_0201acf813func_0201acf8Et(void *a, s32 b);
BOOL _ZN12Unk_0201acf88getLevelEv(void *a);
BOOL _ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(void *p, void *q);
void _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
void _ZN13HeldToolModel12playIdleAnimEjj(void *a, u32 b, u32 c);
s32 _ZN13HeldToolModel12playWalkAnimEjj(void *a, u32 b, u32 c);
void Snd_PlayAuxSe(u32 a);
void Snd_SeEmitterPlayOneShotAlt(void *a, u32 b, u32 c, u32 d);
void _ZN12NpcEmotionFx10startEntryEP15NpcEmotionPhasei(void *a, void *b, u32 c);
void _ZN11NpcFaceAnim8blinkNowEv(void *a);
s32 _ZN11NpcMoveCtrl14getTargetAngleEv(void *a);
s32 _ZN11NpcMoveCtrl12getTurnSpeedEv(void *a);
s32 _ZN11NpcMoveCtrl15getDestinationBEv(void *a);
BOOL _ZN11NpcMoveCtrl10hasArrivedEP9Characteri(void *a, void *b, u32 c);
BOOL _ZN11NpcMoveCtrl10hasNextLegEv(void *a);
BOOL _ZN8NpcActor12isPosInFrontEPsP7VecFx32(void *a, s16 *out, s32 c);
BOOL NpcActor_IsFrontAngle(s16 v);
NpcEmotionEntry *Emotion_GetEntry(u32 i);
}
}

// ---- unk_02019020.cpp
namespace nN {
extern "C" {

void *MI_CpuFill8(void *dst, u32 value, u32 size);
void MI_CpuCopy8(const void *src, void *dst, u32 size);
u16 NetBuf_ReadU16(void *p);
void NetBuf_WriteU16(void *p, u16 v);
void NetBuf_UnpackPair20(void *p, u32 a, u32 b);
void NetBuf_PackPair20(void *p, u32 a, u32 b);
void _ZN11NpcMoveCtrl16aimAtDestinationEP9Character(void *p);
BOOL _ZN11NpcMoveCtrl10hasArrivedEP9Characteri(void *p, void *owner, u32 v);
BOOL _ZN11NpcMoveCtrl10hasNextLegEv(void *p);
void _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(void *p, void *v);
void _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(void *p, void *v);
void _ZN11NpcMoveCtrl14setTargetAngleEs(void *p, s32 v);
void _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(void *p, void *owner, s32 a, s32 b, u32 c);
void _ZN12Unk_0201acf813func_0201acf8Et(void *p, s32 v);
s32 _ZN14NpcSpeechState12getMouthTypeEv(void *p);
BOOL _ZN14NpcSpeechState10isSpeakingEv(void *p);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *p, u32 v);
BOOL BlinkTimer_Update(void *p);
s32 _ZN13MatTexPatAnim6updateEv(void *p);
extern u16 data_020c6cc8;
extern u32 gVec3Zero[3];
extern NpcActionEntry sNpcActionTable[];
void NpcAction_PackMove(u8 *out, u32 a, u32 b, u32 c, u32 s0, s16 s1, u16 s2);
void NpcAction_UnpackItem(u16 *out, void *in);
void NpcAction_PackItem(void *unused, void *p, u16 *v);
void NpcAction_UnpackAnim(u32 *a, u8 *b, u16 *c, u16 *d, u8 *src);
void NpcAction_PackAnim(u8 *p, u32 a, u32 b, u32 c, u16 d);
void NpcAction_UnpackTurn(void *a, void *b, u16 *c, u8 *d);
void NpcAction_PackTurn(u8 *out, u16 a, u16 b, u32 c);
void NpcAction_UnpackMove(u32 a, u32 b, u32 c, u32 d, void *s0, u16 *s1, u8 *out);
void NpcAction_PackMove(u8 *out, u32 a, u32 b, u32 c, u32 s0, s16 s1, u16 s2);
}
}

// ---- unk_02019998.cpp
namespace nO {
extern "C" {

s32 _ZN9NpcLookAt16calcClampedPitchEP7VecFx32S1_i(void *self, void *a, void *b, s32 c);
s32 _ZN9NpcLookAt14calcClampedYawEP7VecFx32S1_i(void *self, void *a, void *b, s32 c);
s32 _ZN9NpcLookAt7calcYawEP7VecFx32S1_i(void *self, void *a, void *b, s32 c);
BOOL NpcLookAt_GetHeadPos(void *self, void *a);
extern s32 sNpcTalkMouthAnims[];
s32 CharaAnim_GetEyeAnim(void *p);
s32 CharaAnim_GetMouthAnim(void *p);
void *_ZN19NpcTexPatHeapHandle11getFaceAnimEv(void *p);
void _ZN16CharaFaceAnimRef8loadAnimEiii(void *h, s32 a, s32 b, s32 c);
void *_ZN16CharaFaceAnimRef16getEyeAnimBufferEv(void *h);
void *_ZN16CharaFaceAnimRef18getMouthAnimBufferEv(void *h);
s32 NNS_G3dGetAnmByIdx(void *p, s32 v);
void _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(void *p, void *a, s32 b, s32 c, s32 d, s32 e);
void _ZN13MatTexPatAnim10applyFrameEv(void *p);
void _ZN13MatTexPatAnim7releaseEv(void *p);
void _ZN12NpcResHandle7releaseEv(void *p);
void BlinkTimer_BlinkNow(void *p);
void BlinkTimer_Clear(void *p);
void MatTexPatAnim_ResumeMaterial(void *p, void *q);
void _ZN13MatTexPatAnim13pauseMaterialEv(void *p, void *q);
BOOL _ZN13MatTexPatAnim14setMaterialTexEij(void *p, void *q, u32 r);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *p);
void *_ZN17NpcFaceAnimHandle15getTexPatBufRefEv(void *p);
BOOL _ZN12NpcResHandle7acquireEv(void *p);
void *_ZN22NpcHeldItemModelHandle16getTexPatHeapRefEv(void *p);
BOOL _ZN13MatTexPatAnim4initEPvS0_jS0_(void *p, s32 a, s32 b, s32 c, s32 d);
void NpcTexPatBufRef_LoadFile(void *a, s32 b);
s32 NpcTexPatBufRef_GetBuffer(void *a);
s32 _ZN20CharaFaceAnimWorkRef7getHeapEv(void *a);
BOOL NpcLookAt_IsWithin(s32 a, s32 b);
s32 NpcFace_PickTalkMouth();
s32 Random_GlobalBelow(s32 a);
s32 Snd_StopAuxSe();
s32 Snd_SeEmitterPlayHeld(s32 a, s32 b, s32 c, s32 d);
s32 Snd_SeEmitterPlayOneShot(s32 a, s32 b, s32 c, s32 d);
s32 Snd_PlayAuxSeHeld(u16 a);
s32 Snd_PlayAuxSe(u16 a);
u8 *Emotion_GetEntry(u32 a);
void Effect_SetPosition(s32 h, void *a, void *b, s32 c);
void Effect_End(s32 h);
s32 Effect_CreateWithParam(u32 id, u32 b, void *a, void *c);
void MI_CpuFill8(void *p, s32 v, s32 n);
void MI_CpuCopy8(void *src, void *dst, s32 n);
void Math_StepAngle(s16 *p, s32 target, s32 step);
s32 Vec_Distance(void *a, void *b);
s32 NpcFace_PickTalkMouth();
extern Unk_0201a1e0_Fn sNpcLookAtTypes[6];
BOOL NpcLookAt_IsWithin(s32 a, s32 b);
}
}

// ---- unk_0201a334.cpp
namespace nP {
extern "C" {

extern u8 gVec3Zero[];
extern u8 gFieldSceneKind;
extern s16 data_02135f44[];
extern VecFx32 sNpcObstacleProbeOffsets[];
extern NpcMoveModeEntry sNpcMoveModeTable[];
s32 NpcLookAt_GetHeadPos(NpcLookAt *self, VecFx32 *out);
Character *PlayerActor_GetCharacter(s32 h);
BOOL PlayerActor_GetHeadPos(VecFx32 *out, s32 h);
s32 Math_StepAngle(s16 *p, s32 v, s32 n);
s32 Vec_Distance(void *a, void *b);
s32 Vec_NotEqual(void *a, void *b);
s32 Vec_Equal(void *a, void *b);
s32 Math_Atan2(s32 a, s32 b);
s32 Math_AngleDiffAbs(s32 a, s32 b);
s32 Vec_DistXZ(void *a, void *b);
s32 Math_StepS32Alt(s32 *p, s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 Math_AngleXZ(void *a, void *b);
void _ZN5Actor14updatePositionEP13ActorCollider(void *a, void *b);
s32 _ZN9NpcLookAt16isWithinYawLimitEi(NpcLookAt *self, s32 v);
BOOL Npc_IsPosBlocked(VecFx32 *pos);
void Npc_RotateOffsetXZ(VecFx32 *out, VecFx32 *base, VecFx32 *off, u32 ang);
s32 Model_GetJointWorldMtx(Unk_02006d14_TalkBase *dst, void *src, u32 n);
s32 WorldCurve_FromCurved(void *v);
s32 Ground_GetExitAtPos(s32 id);
BOOL FtrMgr_GetSurfaceHeightAtPos(s32 id);
void _ZN10GroundInfo9initAtPosEP7VecFx32ii(void *buf, s32 id, s32 a, s32 b);
s32 _ZN14GroundInfoBase9getHeightEi(void *buf, s32 a);
s32 Collision_HasUnitShapeAt(s32 id);
void GroundInfo_Destruct(void *buf);
s32 _ZN11NpcAnimCtrl13isPlayingAnimEiPv(void *a, s32 b, void *c);
void _ZN11NpcAnimCtrl17playAnimKeepFrameEP8NpcActorjjj(void *a, void *b, s32 c, u32 d, s32 e);
void _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(void *a, void *b, s32 c, u32 d, s32 e, s32 f, s32 g, s32 h);
s32 NpcLookAt_GetHeadPos(NpcLookAt *self, VecFx32 *out);
static inline BOOL Unk_0201a834_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}
BOOL Npc_IsPosBlocked(VecFx32 *pos);
void Npc_RotateOffsetXZ(VecFx32 *out, VecFx32 *base, VecFx32 *off, u32 ang);
}
}

// ---- unk_0201ac80.cpp
namespace nQ {
extern "C" {

extern u8 sNpcMoveSpeedPresets[];
extern u8 data_020c6dcc[];
extern u32 data_020c6d84[];
extern u16 data_020c6cc8;
extern u8 *gSceneBlockMap;
extern u8 *gCommManager;
void _ZN11NpcMoveCtrl13applyMovementEP9Character(void *a, void *b);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData12getInventoryEv(void *p);
s32 PlayerInventory_AddBells(void *p, s32 v, s32 n);
s32 PlayerInventory_GetBellsRoom(void *p, s32 a, s32 b);
s32 PlayerInventory_CanAddBells(void *p, s32 v, s32 n, s32 m);
u32 _ZN8BlockMap17getWalkLinksAtPosEPv(void *g, VecFx32 *v);
void FieldPos_SnapToUnitCenter(VecFx32 *out, VecFx32 *in);
void Vec_Add(VecFx32 *out, VecFx32 *a, VecFx32 *b);
s32 Vec_DistXZ(VecFx32 *a, VecFx32 *b);
void Vec_Equal(VecFx32 *a, VecFx32 *b);
s32 TownMap_IsPosWalkable(VecFx32 *v, s32 a);
void func_02133ef8(void *p, u32 n);
s32 _ZN11CommManager8isOnlineEv(u8 *g);
VecFx32 *PlayerActor_GetBodyPos(u32 n);
s32 PlayerActor_SetNoFaceTalkTarget(s32 a, s32 b);
void WorldCurve_FromCurved(VecFx32 *out, VecFx32 *in);
void _ZN8NpcActor12releaseModelEv(void *p);
void _ZN11NpcFaceAnim7releaseEv(void *p);
void _ZN11NpcAnimCtrl7releaseEv(void *p);
void _ZN12SndSeEmitter11callStopAltEv(void *p);
void _ZN8NpcActor12netSendStateEjz(void *p, s32 v);
s32 _ZN17TwoLayerAnimModel11drawLayeredEj(void *p, s32 v);
void _ZN11NpcMoveCtrl12storeHeadMtxEP12Unk_02006d14(void *p, void *q);
s32 Model_GetJointWorldMtx(void *p, void *q, s32 v);
void CharaShadow_Draw(void *p, s32 a, s32 b, s32 c);
s32 _ZN8NpcActor10isNetOwnerEv(void *p);
s32 _ZN8NpcActor13netReadActionEPiS0_Ph(void *p, s32 *a, s32 *b, void *buf);
s32 _ZN13NpcActionCtrl9getActionEv(void *p);
s32 _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void _ZN13NpcActionCtrl12requestStandEjt(void *p, s32 a, s32 b);
void NpcAction_UnpackMove(s32 *a, s32 *b, s32 *c, s32 *d, s16 *e, u16 *f, void *buf);
void NpcAction_UnpackTurn(s16 *a, u16 *b, u16 *c, void *buf);
void NpcAction_UnpackAnim(u32 *a, void *b, u16 *c, u16 *d, void *buf);
void _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void NpcAction_UnpackItem(u16 *a, void *buf);
void _ZN13NpcActionCtrl12requestAct14EiPt(void *p, s32 a, u16 *b);
void _ZN11NpcTalkCtrl6updateEP8NpcActor(void *p, void *q);
void _ZN13NpcActionCtrl6updateEPh(void *p, void *q);
s32 _ZN11NpcAnimCtrl9getAnimIdEj(void *p, s32 a);
void _ZN12NpcEmotionFx6updateEPvsit(void *a, void *b, s32 c, s32 d, s32 e);
void _ZN11NpcMoveCtrl10updateTurnEP9Character(void *p, void *q);
s32 NetArea_IsLocalOwner();
void Collision_Move(void *a, void *b, void *c, s32 d, s32 e, void *f, s32 g);
s32 Ground_GetDefaultY(s32 a);
void _ZN9NpcLookAt6updateEP8NpcActor(void *p, void *q);
void _ZN16NpcObstacleProbe5clearEv(void *p);
void _ZN16NpcObstacleProbe5probeEP9Character(void *p, void *q);
u32 WorldCurve_ToCurved(void *a, void *b);
s32 _ZN5Actor15calcModelMatrixEPv(void *p, void *buf);
s32 _ZN8NpcActor15netIsTalkLockedEv(void *p);
void _ZN13ActorCollider6submitEv(void *p);
void _ZN13ActorCollider8resetHitEv(void *p);
void _ZN11NpcAnimCtrl6updateEP8NpcActor(void *p, void *q);
void _ZN19ThreeLayerAnimModel13updateLayers3Ev(void *p);
void _ZN12SndSeEmitter21callUpdateRelativeAltEP7VecFx32(void *p, VecFx32 *v);
void _ZN13HeldToolModel6updateEP12Unk_02006d14(s32 v, void *p);
void _ZN13NpcFootstepFx15updateFootstepsEP8NpcActor(void *p, void *q);
void _ZN11NpcFaceAnim6updateEPh(void *p, void *q);
void _ZN13NpcActionCtrl10postUpdateEPh(void *p, void *q);
void NpcActor_UpdateMovement(void *a, void *b);
void NpcActor_PayPlayer(void *self, s32 v);
s32 NpcActor_CheckPayoutFits(void *self, s32 v, s32 w);
void NpcActor_ChargePlayer(void *self, s32 v);
void NpcActor_CanPlayerPay(void *self, s32 v);
void NpcActor_FindFreeUnitNear(V3 *out, NpcActor *self, V3 *in);
}
}

// ---- unk_0201b690.cpp
namespace nR {
extern "C" {

extern CommManager *gCommManager;
extern u16 data_020c6cc8;
extern s32 data_020c6d60[];
extern s32 data_020c6d48[];
extern s32 data_020c6d20;
extern u8 sNpcAvoidOffsets[];
extern s32 gNpcModelHeap;
extern s16 data_02135f44[];
BOOL NetArea_IsLocalOwner();
s32 _ZN9Character10postCreateEi(void *self, s32 x);
BOOL _ZN9Character9preCreateEv(void *self);
s32 _ZN9Character13setAreaSyncedEv(void *self);
s32 _ZN9Character9setCharIdEj(void *self, u32 v);
BOOL _ZN11NpcMoveCtrl14setTargetAngleEs(void *p, s32 v);
void _ZN14NpcSpeechState5resetEv(void *p);
void _ZN12NpcEmotionFx5resetEv(void *p);
void _ZN11NpcMoveCtrl5resetEv(void *p);
void _ZN12SndSeEmitter11callInitAltEv(void *p);
void _ZN11NpcTalkCtrl5resetEv(void *p);
void _ZN13NpcFootstepFx14resetFootstepsEv(void *p);
void _ZN8NpcActor22resetLastTaughtEmotionEv(void *p);
void *MI_CpuFill8(void *dst, s32 v, u32 n);
void *MI_CpuCopy8(void *dst, const void *src, u32 n);
u8 Npc_GetInfoByte2(void *p);
u8 *NpcNetRecord_GetVar(void *p);
s32 Scene_GetCurrent();
void NpcNetRecord_SetState(void *a, s32 b, void *c, s32 d, void *e, void *f);
BOOL _ZN11CommManager12isSlotActiveEi(CommManager *g, s32 v);
BOOL _ZN11CommManager8isOnlineEv(CommManager *g);
void CommSyncVar_SetVar(s32 a, void *args, s32 b, s32 c);
void NpcNetRecord_SetSlots(void *a, u32 b, u32 c);
s32 NpcNetRecord_GetSlots(s32 a, s32 b, void *c);
s32 NpcNetRecord_SetSlotsAndSync(s32 a, s32 b, s32 c, void *d);
void NetBuf_UnpackPair20(void *a, void *b, void *c);
void _ZN16ActorTalkRequest13setOwnerActorEP8NpcActor(ActorTalkRequest *a, void *b);
s32 PlayerActor_GetCharacter(u32 id);
BOOL PlayerActor_GetSlotPosXZ(u8 *a, void *b, void *c, s32 d, u32 e);
s32 Math_AngleXZ(void *a, void *b);
s32 Vec_Distance(void *a, void *b);
BOOL Npc_IsPosBlocked(void *a);
void Npc_RotateOffsetXZ(void *out, void *a, void *b, s32 c);
s32 _ZN9NpcLookAt15getObstacleBitsEv(void *p);
void _ZN11CachedModel7releaseEv(void *p);
BOOL _ZN11CachedModel4loadEPvS0_(void *p, s32 a, s32 b);
BOOL NpcActor_IsFrontAngle(s32 x);
BOOL NpcActor_IsFrontAngle(s32 x);
BOOL Item_IsFurniture(void *p);
u32 Item_GetFurnitureIndex(void *p);
BOOL Scene_InMuseumRoom();
s32 Scene_GetMuseumRoom();
void JointCb_UseRestTranslation(void *self, u32 flags);
void MTX_RotY33_(MtxFx33 *m, s32 a, s32 b);
void MTX_RotX33_(MtxFx33 *m, s32 a, s32 b);
void MTX_Concat33(MtxFx33 *a, MtxFx33 *b, MtxFx33 *out);
s32 WorldCurve_Apply(VecFx32 *a, VecFx32 *b);
s32 WorldCurve_GetRadius();
void _ZN19ThreeLayerAnimModel21onJointCalcPostLayer3EP8NNSG3dRS(void *p, void *q);
void NpcActor_JointCalcLayer3Cb(NNSG3dRS *p);
void NpcActor_SetJointCallbackNext(NNSG3dRS *self);
void NpcActor_SetJointCallbackNext(NNSG3dRS *self);
void NpcActor_OnJointCalc(NNSG3dRS *self);
}
}

namespace nZ {
extern "C" {
extern const u16 data_020c6cbc[2];
extern const u16 data_020c6cc0[2];
extern const u16 data_020c6cc4[2];
extern const u16 data_020c6cc8[2];
extern const u16 data_020c6ccc[2];
extern const u16 data_020c6cd0[2];
extern const u16 data_020c6cd4[2];
extern const u16 data_020c6cd8[2];
extern const u16 data_020c6cdc[2];
extern const u16 data_020c6ce0[2];
extern const u16 data_020c6ce4[2];
extern const u16 data_020c6ce8[2];
extern const u16 data_020c6cec[2];
extern const u16 data_020c6cf0[2];
extern const u16 data_020c6cf4[2];
extern const u16 data_020c6cf8[2];
extern const u16 data_020c6cfc[2];
extern const u16 data_020c6d00[2];
extern const u16 data_020c6d04[2];
extern const u16 data_020c6d08[2];
extern const u16 data_020c6d0c[2];
extern const u16 data_020c6d10[2];
extern const u16 data_020c6d14[2];
extern const u16 data_020c6d18[2];
extern const u16 data_020c6d1c[2];
extern const u16 data_020c6d20[2];
extern const u16 data_020c6d24[2];
extern const u16 data_020c6d28[2];
extern const u16 data_020c6d2c[2];
extern const u16 data_020c6d30[2];
extern const u16 data_020c6d34[2];
extern const u16 data_020c6d38[2];
extern const u16 data_020c6d3c[2];
extern const u16 sNpcTalkMouthAnims[4];
extern const u16 data_020c6d48[4];
extern const u16 data_020c6d50[4];
extern const u16 data_020c6d58[4];
extern const u16 data_020c6d60[4];
extern const u16 sNpcGiveItemAnims[4];
extern const u16 data_020c6d70[4];
extern const u16 sNpcAct07Ses[5];
extern const u32 data_020c6d84[4];
extern const u32 sNpcAct07Anims[5];
extern const u32 sNpcMoveSpeedPresets[9];
extern const u32 data_020c6dcc[12];
extern const u32 sNpcMoveModeTable[25];
extern const NpcEmotionEntry sEmotionTable[60];
void _ZN13VillagerRoute9isInBlockEP7VecFx32(void);
void _ZN13VillagerRoute11isInBlockT4EP7VecFx32(void);
void _ZN13VillagerRoute10stepToDoorEP7VecFx32(void);
void _ZN13VillagerRoute10isAtDoorT3EP7VecFx32(void);
void _ZN13VillagerRoute11isInBlockT2EP7VecFx32(void);
void _ZN13VillagerRoute16stepCheckArrivedEP7VecFx32(void);
void _ZN13VillagerRoute10isAtDoorT1EP7VecFx32(void);
void _ZN13VillagerRoute16isInAttr200BlockEP7VecFx32(void);
void _ZN13VillagerRoute10stepWanderEP7VecFx32(void);
void _ZN13VillagerRoute16stepAdjacentUnitEP7VecFx32(void);
void _ZN13VillagerRoute13stepAlongPathEP7VecFx32(void);
void _ZN13VillagerRoute14stepFollowPathEP7VecFx32(void);
void _ZN11NpcTalkCtrl10mainState4EP8NpcActor(void);
void _ZN11NpcTalkCtrl11state4Step0EP8NpcActor(void);
void _ZN11NpcTalkCtrl10mainState3EP8NpcActor(void);
void _ZN11NpcTalkCtrl11setupState3EP8NpcActor(void);
void _ZN11NpcTalkCtrl10mainState1EP8NpcActor(void);
void _ZN11NpcTalkCtrl11state1Step2EP8NpcActor(void);
void _ZN11NpcTalkCtrl11state1Step1EP8NpcActor(void);
void _ZN11NpcTalkCtrl11state1Step0EP8NpcActor(void);
void _ZN11NpcTalkCtrl11setupState1EP8NpcActor(void);
void _ZN11NpcTalkCtrl11setupState4EP8NpcActor(void);
void _ZN11NpcTalkCtrl10mainState2EP8NpcActor(void);
void _ZN11NpcTalkCtrl11state2Step1EP8NpcActor(void);
void _ZN11NpcTalkCtrl11state2Step0EP8NpcActor(void);
void _ZN11NpcTalkCtrl11setupState2EP8NpcActor(void);
void _ZN11NpcTalkCtrl10mainState0EP8NpcActor(void);
void _ZN11NpcTalkCtrl11state0Step2EP8NpcActor(void);
void _ZN11NpcTalkCtrl11state0Step1EP8NpcActor(void);
void _ZN11NpcTalkCtrl11state0Step0EP8NpcActor(void);
void _ZN11NpcTalkCtrl11setupState0EP8NpcActor(void);
void _ZN16ActorTalkRequest17taskSwitchSpeakerEv(void);
void _ZN16ActorTalkRequest17switchSpeakerSwapEv(void);
void _ZN16ActorTalkRequest18switchSpeakerFocusEv(void);
void _ZN16ActorTalkRequest18switchSpeakerCloseEv(void);
void _ZN16ActorTalkRequest10taskMelodyEv(void);
void _ZN16ActorTalkRequest9melodyEndEv(void);
void _ZN16ActorTalkRequest10melodyWaitEv(void);
void _ZN16ActorTalkRequest11melodyStartEv(void);
void _ZN16ActorTalkRequest11taskEatItemEv(void);
void _ZN16ActorTalkRequest11eatItemWaitEv(void);
void _ZN16ActorTalkRequest12eatItemStartEv(void);
void _ZN16ActorTalkRequest13taskItemAct12Ev(void);
void _ZN16ActorTalkRequest13itemAct12WaitEv(void);
void _ZN16ActorTalkRequest14itemAct12StartEv(void);
void _ZN16ActorTalkRequest14taskReturnItemEv(void);
void _ZN16ActorTalkRequest14returnItemWaitEv(void);
void _ZN16ActorTalkRequest15returnItemStartEv(void);
void _ZN16ActorTalkRequest12taskKeepItemEv(void);
void _ZN16ActorTalkRequest12keepItemWaitEv(void);
void _ZN16ActorTalkRequest13keepItemStartEv(void);
void _ZN16ActorTalkRequest13taskItemAct0FEv(void);
void _ZN16ActorTalkRequest13itemAct0FWaitEv(void);
void _ZN16ActorTalkRequest14itemAct0FStartEv(void);
void _ZN16ActorTalkRequest12taskTakeItemEv(void);
void _ZN16ActorTalkRequest12takeItemWaitEv(void);
void _ZN16ActorTalkRequest13takeItemStartEv(void);
void _ZN16ActorTalkRequest12taskGiveItemEv(void);
void _ZN13NpcActionCtrl9mainAct15EP8NpcActor(void);
void _ZN13NpcActionCtrl10act15Step3EP8NpcActor(void);
void _ZN13NpcActionCtrl10act15Step2EP8NpcActor(void);
void _ZN13NpcActionCtrl10act15Step1EP8NpcActor(void);
void _ZN13NpcActionCtrl10act15Step0EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct15EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl9postAct14EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl10setupAct14EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl9postAct13EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl9mainAct13EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl10act13Step0EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl10setupAct13EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl9mainAct12EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl10act12Step1Ev(void);
void _ZN13NpcActionCtrl10act12Step0Ev(void);
void _ZN13NpcActionCtrl10setupAct12EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl9mainAct11EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl10act11Step2Ev(void);
void _ZN13NpcActionCtrl10act11Step1EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl10act11Step0EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl10setupAct11EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl9postAct10EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl10setupAct10EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl9postAct0FEP12Unk_02006d14(void);
void _ZN13NpcActionCtrl10setupAct0FEP12Unk_02006d14(void);
void _ZN13NpcActionCtrl9postAct0EEv(void);
void _ZN13NpcActionCtrl9mainAct0EEP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep19EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep18EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep17EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep16EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep15EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep14EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep13EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep12EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep11EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep10EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep09EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep08EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep07EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep06EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep05EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep04EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep03EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep02EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep01EP12Unk_02006d14(void);
void _ZN13NpcActionCtrl11act0EStep00EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct0EEP8NpcActor(void);
void _ZN13NpcActionCtrl9postAct0DEP8NpcActor(void);
void _ZN13NpcActionCtrl9mainAct0DEP8NpcActor(void);
void _ZN13NpcActionCtrl10act0DStep4EP8NpcActor(void);
void _ZN13NpcActionCtrl10act0DStep3EP8NpcActor(void);
void _ZN13NpcActionCtrl10act0DStep2EP8NpcActor(void);
void _ZN13NpcActionCtrl10act0DStep1EP8NpcActor(void);
void _ZN13NpcActionCtrl10act0DStep0EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct0DEP8NpcActor(void);
void _ZN13NpcActionCtrl9postAct0CEP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct0CEP8NpcActor(void);
void _ZN13NpcActionCtrl9postAct0BEP8NpcActor(void);
void _ZN13NpcActionCtrl9mainAct0BEP8NpcActor(void);
void _ZN13NpcActionCtrl10act0BStep0EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct0BEP8NpcActor(void);
void _ZN13NpcActionCtrl9postAct0AEP8NpcActor(void);
void _ZN13NpcActionCtrl9mainAct0AEP8NpcActor(void);
void _ZN13NpcActionCtrl10act0AStep0EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct0AEP8NpcActor(void);
void _ZN13NpcActionCtrl9mainAct09EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct09EP8NpcActor(void);
void _ZN13NpcActionCtrl9mainAct08EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct08EP8NpcActor(void);
void _ZN13NpcActionCtrl9postAct07EP8NpcActor(void);
void _ZN13NpcActionCtrl9mainAct07EP8NpcActor(void);
void _ZN13NpcActionCtrl10act07Step0EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct07EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct06EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct05EP8NpcActor(void);
void _ZN13NpcActionCtrl9mainAct05EP8NpcActor(void);
void _ZN13NpcActionCtrl10act05Step1EP8NpcActor(void);
void _ZN13NpcActionCtrl10act05Step0EP8NpcActor(void);
void _ZN13NpcActionCtrl9mainAct04EP8NpcActor(void);
void _ZN13NpcActionCtrl10act04Step1EP8NpcActor(void);
void _ZN13NpcActionCtrl10act04Step0EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct04EP8NpcActor(void);
void _ZN13NpcActionCtrl9mainAct03EP8NpcActor(void);
void _ZN13NpcActionCtrl10setupAct03EP8NpcActor(void);
void _ZN13NpcActionCtrl9mainAct02EPh(void);
void _ZN13NpcActionCtrl10setupAct02EPh(void);
void _ZN13NpcActionCtrl9mainAct01EPh(void);
void _ZN13NpcActionCtrl10setupAct01EPh(void);
void _ZN13NpcActionCtrl9mainAct00Ev(void);
void _ZN13NpcActionCtrl10setupAct00EPh(void);
void _ZN9NpcLookAt20approachManualAnglesEv(void);
void _ZN9NpcLookAt11lookAtPointEP8NpcActor(void);
void _ZN9NpcLookAt17lookAtTargetActorEP9Character(void);
void _ZN9NpcLookAt17lookAtLocalPlayerEP9Character(void);
void _ZN9NpcLookAt18lookAtTargetPlayerEP9Character(void);
void _ZN9NpcLookAt5relaxEv(void);
void _ZN16ActorTalkRequest12giveItemWaitEv(void);
void _ZN16ActorTalkRequest13giveItemStartEv(void);
void _ZN16ActorTalkRequest15taskCloseWindowEv(void);
void _ZN16ActorTalkRequest15closeWindowWaitEv(void);
void _ZN16ActorTalkRequest16closeWindowStartEv(void);
void _ZN16ActorTalkRequest16taskReopenWindowEv(void);
void _ZN16ActorTalkRequest12taskSubSceneEv(void);
void _ZN16ActorTalkRequest12subSceneWaitEv(void);
void _ZN16ActorTalkRequest12subSceneOpenEv(void);
void _ZN16ActorTalkRequest19subSceneCloseWindowEv(void);
void VillagerRoute_PickCoastBlock(void);
void VillagerRoute_PickRandomBlock(void);
void VillagerRoute_PickOwnHouseBlock(void);
void VillagerRoute_PickOwnHouseDoor(void);
void VillagerRoute_PickOtherHouseBlock(void);
void VillagerRoute_PickOtherHouseDoor(void);
void VillagerRoute_PickAttr200Target(void);
}
}
extern "C" {
extern void *data_020d7074[2];
extern void *data_020d707c[2];
extern void *data_020d7084[2];
extern void *data_020d708c[2];
extern void *data_020d7094[2];
extern void *data_020d709c[2];
extern void *data_020d70a4[2];
extern void *data_020d70ac[2];
extern void *data_020d70b4[2];
extern void *data_020d70bc[2];
extern void *data_020d70c4[2];
extern void *data_020d70cc[2];
extern void *data_020d70d4[2];
extern void *data_020d70dc[2];
extern void *data_020d70e4[2];
extern void *data_020d70ec[2];
extern void *data_020d70f4[2];
extern void *data_020d70fc[2];
extern void *data_020d7104[2];
extern void *data_020d710c[2];
extern void *data_020d7114[2];
extern void *data_020d711c[2];
extern void *data_020d7124[2];
extern void *data_020d712c[2];
extern void *data_020d7134[2];
extern void *data_020d713c[2];
extern void *data_020d7144[2];
extern void *data_020d714c[2];
extern void *data_020d7154[2];
extern void *data_020d715c[2];
extern void *data_020d7164[2];
extern void *data_020d716c[2];
extern void *data_020d7174[2];
extern void *data_020d717c[2];
extern void *data_020d7184[2];
extern void *data_020d718c[2];
extern void *data_020d7194[2];
extern void *data_020d719c[2];
extern void *data_020d71a4[2];
extern void *data_020d71ac[2];
extern void *data_020d71b4[2];
extern void *data_020d71bc[2];
extern void *data_020d71c4[2];
extern void *data_020d71cc[2];
extern void *data_020d71d4[2];
extern void *data_020d71dc[2];
extern void *data_020d71e4[2];
extern void *data_020d71ec[2];
extern void *data_020d71f4[2];
extern void *data_020d71fc[2];
extern void *data_020d7204[2];
extern void *data_020d720c[2];
extern void *data_020d7214[2];
extern void *data_020d721c[2];
extern void *data_020d7224[2];
extern void *data_020d722c[2];
extern void *data_020d7234[2];
extern void *data_020d723c[2];
extern void *data_020d7244[2];
extern void *data_020d724c[2];
extern void *data_020d7254[2];
extern void *data_020d725c[2];
extern void *data_020d7264[2];
extern void *data_020d726c[2];
extern void *data_020d7274[2];
extern void *data_020d727c[2];
extern void *data_020d7284[2];
extern void *data_020d728c[2];
extern void *data_020d7294[2];
extern void *data_020d729c[2];
extern void *data_020d72a4[2];
extern void *data_020d72ac[2];
extern void *data_020d72b4[2];
extern void *data_020d72bc[2];
extern void *data_020d72c4[2];
extern void *data_020d72cc[2];
extern void *data_020d72d4[2];
extern void *data_020d72dc[2];
extern void *data_020d72e4[2];
extern void *data_020d72ec[2];
extern void *data_020d72f4[2];
extern void *data_020d72fc[2];
extern void *data_020d7304[2];
extern void *data_020d730c[2];
extern void *data_020d7314[2];
extern void *data_020d731c[2];
extern void *data_020d7324[2];
extern void *data_020d732c[2];
extern void *data_020d7334[2];
extern void *data_020d733c[2];
extern void *data_020d7344[2];
extern void *data_020d734c[2];
extern void *data_020d7354[2];
extern void *data_020d735c[2];
extern void *data_020d7364[2];
extern void *data_020d736c[2];
extern void *data_020d7374[2];
extern void *data_020d737c[2];
extern void *data_020d7384[2];
extern void *data_020d738c[2];
extern void *data_020d7394[2];
extern void *data_020d739c[2];
extern void *data_020d73a4[2];
extern void *data_020d73ac[2];
extern void *data_020d73b4[2];
extern void *data_020d73bc[2];
extern void *data_020d73c4[2];
extern void *data_020d73cc[2];
extern void *data_020d73d4[2];
extern void *data_020d73dc[2];
extern void *data_020d73e4[2];
extern void *data_020d73ec[2];
extern void *data_020d73f4[2];
extern void *data_020d73fc[2];
extern void *data_020d7404[2];
extern void *data_020d740c[2];
extern void *data_020d7414[2];
extern void *data_020d741c[2];
extern void *data_020d7424[2];
extern void *data_020d742c[2];
extern void *data_020d7434[2];
extern void *data_020d743c[2];
extern void *data_020d7444[2];
extern void *data_020d744c[2];
extern void *data_020d7454[2];
extern void *data_020d745c[2];
extern void *data_020d7464[2];
extern void *data_020d746c[2];
extern void *data_020d7474[2];
extern void *data_020d747c[2];
extern void *data_020d7484[2];
extern void *data_020d748c[2];
extern void *data_020d7494[2];
extern void *data_020d749c[2];
extern void *data_020d74a4[2];
extern void *data_020d74ac[2];
extern void *data_020d74b4[2];
extern void *data_020d74bc[2];
extern void *data_020d74c4[2];
extern void *data_020d74cc[2];
extern void *data_020d74d4[2];
extern void *data_020d74dc[2];
extern void *data_020d74e4[2];
extern void *data_020d74ec[2];
extern void *data_020d74f4[2];
extern void *data_020d74fc[2];
extern void *data_020d7504[2];
extern void *data_020d750c[2];
extern void *data_020d7514[2];
extern void *data_020d751c[2];
extern void *data_020d7524[2];
extern void *data_020d752c[2];
extern void *data_020d7534[2];
extern void *data_020d753c[2];
extern void *data_020d7544[2];
extern void *data_020d754c[2];
extern void *data_020d7554[2];
extern void *data_020d755c[2];
extern void *data_020d7564[2];
extern void *data_020d756c[2];
extern void *data_020d7574[2];
extern void *data_020d757c[2];
extern void *data_020d7584[2];
extern void *data_020d758c[2];
extern void *data_020d7594[2];
extern void *data_020d759c[2];
extern void *data_020d75a4[2];
extern void *data_020d75ac[2];
extern void *data_020d75b4[2];
extern void *data_020d75bc[2];
extern void *data_020d75c4[2];
extern void *data_020d75cc[2];
extern void *data_020d75d4[2];
extern void *data_020d75dc[2];
extern void *data_020d75e4[2];
extern void *data_020d75ec[2];
extern void *data_020d75f4[2];
extern void *data_020d75fc[2];
extern void *data_020d7604[2];
extern void *data_020d760c[2];
extern void *data_020d7614[2];
extern void *data_020d761c[2];
extern void *data_020d7624[2];
extern void *data_020d762c[2];
extern void *data_020d7634[2];
extern void *data_020d763c[2];
extern void *data_020d7644[2];
extern void *data_020d764c[2];
extern void *data_020d7654[2];
extern void *data_020d765c[2];
extern void *data_020d7664[2];
extern void *data_020d766c[2];
extern void *data_020d7674[2];
extern void *data_020d767c[2];
extern void *data_020d7684[2];
extern void *data_020d768c[2];
extern void *data_020d7694[2];
extern void *data_020d769c[2];
extern void *data_020d76a4[2];
extern void *data_020d76ac[2];
extern void *data_020d76b4[2];
extern void *data_020d76bc[2];
extern void *data_020d76c4[2];
extern void *data_020d76cc[2];
extern void *data_020d76d4[2];
extern void *data_020d76dc[2];
extern void *data_020d76e4[2];
extern void *data_020d76ec[2];
extern void *data_020d76f4[2];
extern void *data_020d76fc[2];
extern void *data_020d7704[2];
}

namespace nR {
extern "C" void NpcActor_OnJointCalc(NNSG3dRS *self) {
    u32 idx = self->c[1];
    NpcActor *p = (NpcActor *)self->pRenderObj->ptrUser;
    u16 tmp[2];
    MtxFx33 mB;
    MtxFx33 mA;
    VecFx32 va;
    MtxFx33 mC;
    VecFx32 vb;
    if (p != NULL) {
        BOOL isX;
        if (Item_IsFurniture(&p->npcHandle) != 0) {
            tmp[0] = 0xd011;
            isX = Item_GetFurnitureIndex(&p->npcHandle) == Item_GetFurnitureIndex(&tmp[0]) ? TRUE : FALSE;
        } else {
            isX = p->npcHandle == 0xd011 ? TRUE : FALSE;
        }
        if (isX && (Scene_InMuseumRoom() == 0 || Scene_GetMuseumRoom() != 1)) {
            if (idx == 0x10) {
                u8 *base = self->pResNodeInfo;
                u16 off = *(u16 *)(base + 6);
                u8 *t = base + off;
                u32 n = *(u16 *)t;
                s32 o = *(s32 *)(t + n * idx + 4);
                s32 *v = (s32 *)(base + o);
                s32 *w = v + 1;
                NNSG3dJntAnmResult *d = self->pJntAnmResult;
                d->trans.x = v[1];
                d->trans.y = w[1];
                d->trans.z = w[2];
            }
        } else {
            JointCb_UseRestTranslation(self, 0x800);
        }
    }
    if (idx == (u32)data_020c6d20 && p != NULL && p->lookAt.lookType < 6) {
        MtxFx33 *m = (MtxFx33 *)&self->pJntAnmResult->rot;
        if (p->lookAt.pitch != 0) {
            u32 a = (u16)p->lookAt.pitch >> 4;
            MTX_RotY33_(&mA, data_02135f44[a * 2], data_02135f44[a * 2 + 1]);
            MTX_Concat33(m, &mA, m);
        }
        if (p->lookAt.yaw != 0) {
            u32 a = (u16)p->lookAt.yaw >> 4;
            MTX_RotX33_(&mB, data_02135f44[a * 2], data_02135f44[a * 2 + 1]);
            MTX_Concat33(m, &mB, m);
        }
    }
    if (idx == 0 && p != NULL) {
        BOOL isY;
        if (Item_IsFurniture(&p->npcHandle) != 0) {
            tmp[1] = 0xd016;
            isY = Item_GetFurnitureIndex(&p->npcHandle) == Item_GetFurnitureIndex(&tmp[1]) ? TRUE : FALSE;
        } else {
            isY = p->npcHandle == 0xd016 ? TRUE : FALSE;
        }
        if (isY) {
            NNSG3dJntAnmResult *d = self->pJntAnmResult;
            MtxFx33 *m = (MtxFx33 *)&d->rot;
            VecFx32 *pv = &d->trans;
            s32 r;
            va = *pv;
            vb = *pv;
            r = WorldCurve_Apply(&va, &vb);
            pv->z = va.z;
            pv->y = va.y - WorldCurve_GetRadius();
            if (r != 0) {
                u32 a = (u16)r >> 4;
                MTX_RotX33_(&mC, data_02135f44[a * 2], data_02135f44[a * 2 + 1]);
                MTX_Concat33(m, &mC, m);
            }
        }
    }
    if (p != NULL) {
        _ZN19ThreeLayerAnimModel21onJointCalcPostLayer3EP8NNSG3dRS(&p->model, self);
    }
    self->cbVecFunc[6] = (void *)NpcActor_SetJointCallbackNext;
    self->cbVecTiming[6] = 3;
}
}

namespace nR {
extern "C" void NpcActor_SetJointCallbackNext(NNSG3dRS *self) {
    self->cbVecFunc[6] = (void *)NpcActor_JointCalcLayer3Cb;
    self->cbVecTiming[6] = 1;
}
}

BOOL NpcActor::loadModel() {
    using namespace nR;
    s32 t = (s32)getModelPath();
    BOOL r = FALSE;
    if (_ZN11CachedModel4loadEPvS0_(&model, t, gNpcModelHeap) != 0) {
        r = TRUE;
    }
    return r;
}

void NpcActor::releaseModel() {
    using namespace nR;
    _ZN11CachedModel7releaseEv(&model);
}

u16 NpcActor::getNpcIndex() {
    using namespace nR;
    return npcIndex;
}

void NpcActor::setNpcIndex(u16 v) {
    using namespace nR;
    npcIndex = v;
}

void NpcActor::setNpcHandle(u16 *p) {
    using namespace nR;
    npcHandle = *p;
    setNpcIndex(npcHandle & 0xfff);
    _ZN9Character9setCharIdEj(this, getNpcIndex());
}

void NpcActor::setCollisionRadius(s32 v) {
    using namespace nR;
    collisionRadius = v;
}

namespace nR {
extern "C" BOOL NpcActor_IsFrontAngle(s32 x) {
    if (x < 0) {
        x = -x;
    }
    if (x < 0x4000) {
        return TRUE;
    }
    return FALSE;
}
}

BOOL NpcActor::isPosInFront(s16 *out, VecFx32 *pos) {
    using namespace nR;
    *out = Math_AngleXZ(&position, pos);
    return NpcActor_IsFrontAngle((s16)(*out - rotY));
}

s32 NpcActor::getDistanceTo(NpcActor *other) {
    using namespace nR;
    s32 r = 0;
    if (other != NULL) {
        r = Vec_Distance(&other->position, &position);
    }
    return r;
}

s32 NpcActor::getDistanceToPlayer(u32 id) {
    using namespace nR;
    return getDistanceTo((NpcActor *)PlayerActor_GetCharacter(id));
}

BOOL NpcActor::isNear(NpcActor *other, s32 n) {
    using namespace nR;
    BOOL r = FALSE;
    if (other != NULL) {
        s32 d = getDistanceTo(other);
        if (d < 0) {
            d = -d;
        }
        if (d < n) {
            r = TRUE;
        }
    }
    return r;
}

BOOL NpcActor::isPlayerNear(s32 n, u32 id) {
    using namespace nR;
    return isNear((NpcActor *)PlayerActor_GetCharacter(id), n);
}

s32 NpcActor::getAngleTo(NpcActor *other) {
    using namespace nR;
    s32 r = 0;
    if (other != NULL) {
        r = Math_AngleXZ(&position, &other->position);
    }
    return r;
}

s32 NpcActor::getAngleToPlayer(u32 id) {
    using namespace nR;
    s32 result = 0;
    u8 flag;
    VecFx32 vec;
    flag = 0;
    if (PlayerActor_GetSlotPosXZ(&flag, &vec, &vec.z, -1, id) != 0) {
        result = Math_AngleXZ(&position, &vec);
    } else {
        s32 p = PlayerActor_GetCharacter(id);
        if (p != 0) {
            result = getAngleTo((NpcActor *)p);
        }
    }
    return result;
}

s16 NpcActor::getRelativeAngleTo(NpcActor *other) {
    using namespace nR;
    return getAngleTo(other) - rotY;
}

u32 NpcActor::getPlayerActor(u32 id) {
    using namespace nR;
    return PlayerActor_GetCharacter(id);
}

void NpcActor::setTalkRequest(ActorTalkRequest *p) {
    using namespace nR;
    talkRequest = p;
    if (talkRequest != NULL) {
        _ZN16ActorTalkRequest13setOwnerActorEP8NpcActor(talkRequest, this);
    }
}

ActorTalkRequest *NpcActor::getTalkRequest() {
    using namespace nR;
    return talkRequest;
}

s32 NpcActor::getSpeakerGender() {
    using namespace nR;
    s32 r = 2;
    s32 v = getGender();
    switch (v) {
    case 0:
        r = 0;
        break;
    case 1:
        r = 1;
        break;
    }
    return r;
}

void NpcActor::setShirt(u16 *, BOOL) {
    using namespace nR;}

void NpcActor::onJoinTalk() {
    using namespace nR;}

void NpcActor::onLeaveTalk() {
    using namespace nR;}

BOOL NpcActor::getFreeOffsetPos(VecFx32 *out, void *p) {
    using namespace nR;
    BOOL result = FALSE;
    VecFx32 v;
    Npc_RotateOffsetXZ(&v, &position, p, moveAngleY);
    if (Npc_IsPosBlocked(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        result = TRUE;
    }
    return result;
}

s32 NpcActor::findAvoidPos(VecFx32 *out) {
    using namespace nR;
    s32 r = _ZN9NpcLookAt15getObstacleBitsEv(&obstacleProbe);
    s32 result = 0;
    VecFx32 *pv = (VecFx32 *)&position;
    *out = *pv;
    switch (r) {
    case 3:
        result = 1;
        break;
    case 1:
        if (getFreeOffsetPos(out, (sNpcAvoidOffsets + 0xc)) != 0) {
            result = 2;
        } else {
            result = 1;
        }
        break;
    case 2:
        if (getFreeOffsetPos(out, sNpcAvoidOffsets) != 0) {
            result = 2;
        } else {
            result = 1;
        }
        break;
    }
    return result;
}

s32 NpcActor::getAct0BAnimA() {
    using namespace nR;
    s32 i = getGender();
    if (i >= 2) {
        i = 0;
    }
    return data_020c6d48[i];
}

s32 NpcActor::getAct0BAnimB() {
    using namespace nR;
    s32 i = getGender();
    if (i >= 2) {
        i = 0;
    }
    return data_020c6d60[i];
}

u16 NpcActor::getEmotion0BlendFrames() {
    using namespace nR;
    return data_020c6cc8;
}

void NpcActor::addMood(u32, s32) {
    using namespace nR;}

BOOL NpcActor::isNetOwner() {
    using namespace nR;
    CommManager *g = gCommManager;
    if (_ZN11CommManager8isOnlineEv(g) != 0 && netSyncOff == 0) {
        u8 *p = NpcNetRecord_GetVar(&npcHandle);
        if (p != NULL && p[0] != 0) {
            if ((p[1] == 4 && NetArea_IsLocalOwner() != 0) || p[1] == g->myAid) {
                return TRUE;
            }
            return FALSE;
        }
        return FALSE;
    }
    return TRUE;
}

s32 NpcActor::netSetSlots(s32 a, s32 b, s32 c) {
    using namespace nR;
    return NpcNetRecord_SetSlotsAndSync(a, b, c, &npcHandle);
}

void NpcActor::netSetSlotsIfOwner(u32 a, u32 b, u32 c, ...) {
    using namespace nR;
    NpcNetRecord_SetSlots(&npcHandle, b, c);
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid) != 0) {
        if (isNetOwner() != 0) {
            s32 t = (npcHandle & 0xf000) >> 12;
            if (t == 0xe) {
                CommSyncVar_SetVar(getNpcIndex() + 0xc, &a, 0, 0);
            } else if (t == 0xd) {
                CommSyncVar_SetVar(getNpcIndex() + 0x20, &a, 0, 0);
            }
        }
    }
}

s32 NpcActor::netGetSlots(s32 a, s32 b) {
    using namespace nR;
    return NpcNetRecord_GetSlots(a, b, &npcHandle);
}

BOOL NpcActor::netIsTalkLocked() {
    using namespace nR;
    s32 a = 4;
    s32 b = 4;
    if (netGetSlots((s32)&a, (s32)&b) != 0) {
        if (b < 4) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

BOOL NpcActor::getNetUserBytes(u8 *src, u32 n) {
    using namespace nR;
    if (netSyncOff == 0) {
        u8 *p = NpcNetRecord_GetVar(&npcHandle);
        if (n > 4) {
            n = 4;
        }
        if (p != NULL) {
            MI_CpuCopy8(p + 0xb, src, n);
            return TRUE;
        }
    }
    return FALSE;
}

void NpcActor::setNetUserBytes(void *dst, s32 n) {
    using namespace nR;
    if (n > 4) {
        n = 4;
    }
    MI_CpuCopy8(dst, netUserBytes, n);
}

void NpcActor::netSendState(u32 a, ...) {
    using namespace nR;
    NpcNetRecord_SetState(&npcHandle, Scene_GetCurrent(), &position, rotY, &actionCtrl.netAction, netUserBytes);
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid) != 0) {
        if (isNetOwner() != 0) {
            s32 t = (npcHandle & 0xf000) >> 12;
            if (t == 0xe) {
                CommSyncVar_SetVar(getNpcIndex() + 0xc, &a, 0, 0);
            } else if (t == 0xd) {
                CommSyncVar_SetVar(getNpcIndex() + 0x20, &a, 0, 0);
            }
        }
    }
}

BOOL NpcActor::netReadPosition(s32 *a, u8 *b) {
    using namespace nR;
    if (netSyncOff == 0) {
        u8 *p = NpcNetRecord_GetVar(&npcHandle);
        if (p != NULL) {
            NetBuf_UnpackPair20(p + 4, a, a + 2);
            MI_CpuCopy8(p + 9, b, 2);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL NpcActor::netReadAction(s32 *a, s32 *b, u8 *c) {
    using namespace nR;
    u8 *p = NpcNetRecord_GetVar(&npcHandle);
    if (p != NULL) {
        *a = p[0xf];
        *b = p[0x10];
        MI_CpuCopy8(p + 0x11, c, 0xd);
        return TRUE;
    }
    return FALSE;
}

u8 NpcActor::isUpdating() {
    using namespace nR;
    return updateEnabled;
}

BOOL NpcActor::preCreate() {
    using namespace nR;
    u16 tmp;
    if (_ZN9Character9preCreateEv(this) == 0) {
        return FALSE;
    }
    tmp = param;
    setNpcHandle(&tmp);
    talkRequest = NULL;
    setCollisionRadius(0xd00);
    _ZN14NpcSpeechState5resetEv(&speechState);
    _ZN11NpcTalkCtrl5resetEv(&talkCtrl);
    _ZN12NpcEmotionFx5resetEv(&emotionFx);
    partnerPlayer = 0;
    _ZN11NpcMoveCtrl5resetEv(&moveCtrl);
    talkLockHeld = 0;
    MI_CpuFill8(netUserBytes, 0, 4);
    _ZN12SndSeEmitter11callInitAltEv(&seEmitter);
    emotionFx.seEmitter = (s32)&seEmitter;
    _ZN13NpcFootstepFx14resetFootstepsEv(&footstepFx);
    collisionEnabled = 1;
    shadowEnabled = 1;
    _ZN8NpcActor22resetLastTaughtEmotionEv(this);
    updateEnabled = 1;
    drawEnabled = 1;
    curHeldTool = 0;
    _ZN9Character13setAreaSyncedEv(this);
    return TRUE;
}

BOOL NpcActor::onCreate() {
    using namespace nR;
    if (NetArea_IsLocalOwner() != 0) {
        netSetSlots(1, gCommManager->myAid, 4);
    }
    if (loadModel() == 0) {
        return FALSE;
    }
    maxFallSpeed = 0xffffec00;
    gravity = 0;
    _ZN11NpcMoveCtrl14setTargetAngleEs(&moveCtrl, rotY);
    emotionFx.effectParam = Npc_GetInfoByte2(&npcHandle);
    return TRUE;
}

void NpcActor::postCreate(s32 x) {
    using namespace nR;
    if (x == 2) {
        if (NetArea_IsLocalOwner() == 0) {
            if ((collider.groups & 2) == 0) {
                collider.groups |= 2;
                talkLockHeld = 1;
            }
        }
        if (netSyncOff == 0) {
            netSendState(1);
        }
    }
    _ZN9Character10postCreateEi(this, x);
}

BOOL NpcActor::updateAct() {
    using namespace nR;
    return TRUE;
}

BOOL NpcActor::onExecute() {
    using namespace nQ;
    Unk_0201b2b8_S s;
    struct Unk_0201b2b8_L { s32 a, b, x, y, z; } L;
    Mtx43 t;
    u8 buf[0x10];
    VecFx32 v;
    s32 cur;

    NpcActor_UpdateMovement(&moveCtrl, this);
    updateAct();
    if (updateEnabled == 0) {
        return TRUE;
    }
    if (!isNetOwner()) {
        L.a = 0x16;
        L.b = 0;
        if (netReadAction(&L.a, &L.b, buf)) {
            if (L.b == 1 && (u32)L.a <= 2) {
                if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) != 0x15) {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0x15, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
                if ((u32)(L.a - 1) <= 1) {
                    actionCtrl.netMoveMode = L.a;
                } else {
                    actionCtrl.netMoveMode = 0;
                }
            } else {
                cur = L.a;
                if (cur != _ZN13NpcActionCtrl9getActionEv(&actionCtrl)) {
                    L.x = 0;
                    s.h2 = 0;
                    s.h4 = 0;
                    L.y = 0;
                    s.h6 = 0;
                    s.h8 = 0;
                    L.b = 3;
                    switch (cur) {
                    case 0:
                        _ZN13NpcActionCtrl12requestStandEjt(&actionCtrl, L.b, data_020c6cc8);
                        break;
                    case 1:
                    case 2:
                        NpcAction_UnpackMove(&L.x, &L.x, &L.y, &L.y, &s.h2, &s.h6, buf);
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, L.a, L.b, L.x, 0, s.h2, s.h4, L.y, 0, s.h6, 0);
                        break;
                    case 3:
                        NpcAction_UnpackTurn(&s.h2, (u16 *)&s.h4, &s.h6, buf);
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, L.a, L.b, L.x, 0, s.h2, s.h4, L.y, 0, s.h6, 0);
                        break;
                    case 12:
                        L.z = 0x137;
                        s.b0 = 0;
                        NpcAction_UnpackAnim((u32 *)&L.z, &s, &s.h6, &s.h8, buf);
                        _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, L.b, L.z, s.b0, s.h6, s.h8);
                        break;
                    case 20:
                        s.ha = 0xfff1;
                        NpcAction_UnpackItem(&s.ha, buf);
                        _ZN13NpcActionCtrl12requestAct14EiPt(&actionCtrl, L.b, &s.ha);
                        break;
                    }
                }
            }
        }
    }
    _ZN11NpcTalkCtrl6updateEP8NpcActor(&talkCtrl, this);
    _ZN13NpcActionCtrl6updateEPh(&actionCtrl, this);
    _ZN12NpcEmotionFx6updateEPvsit(&emotionFx, &jointPos[0], rotY, _ZN11NpcAnimCtrl9getAnimIdEj(&animCtrl, 0), ((Unk_0201b2b8_Bits *)&model.curFrame)->mid);
    _ZN11NpcMoveCtrl10updateTurnEP9Character(&moveCtrl, this);
    if (NetArea_IsLocalOwner() && collisionEnabled && collisionRadius > 0) {
        Collision_Move(&collisionState, &position, &prevPosition, rotY, collisionRadius, this, 0xf);
    }
    position.y = Ground_GetDefaultY(0);
    _ZN9NpcLookAt6updateEP8NpcActor(&lookAt, this);
    _ZN16NpcObstacleProbe5clearEv(&obstacleProbe);
    _ZN16NpcObstacleProbe5probeEP9Character(&obstacleProbe, this);
    drawTilt = WorldCurve_ToCurved(&drawPos, &position);
    _ZN5Actor15calcModelMatrixEPv(this, &t);
    (*(Mtx43 *)&model.mtx) = t;
    if (netIsTalkLocked()) {
        if ((collider.groups & 2) == 0 && NetArea_IsLocalOwner()) {
            collider.groups |= 2;
            talkLockHeld = 1;
        }
    } else if (talkLockHeld == 1 && NetArea_IsLocalOwner()) {
        collider.groups &= ~2;
        talkLockHeld = 0;
    }
    if (collisionEnabled) {
        _ZN13ActorCollider6submitEv(&collider);
    } else {
        _ZN13ActorCollider8resetHitEv(&collider);
    }
    _ZN11NpcAnimCtrl6updateEP8NpcActor(&animCtrl, this);
    _ZN19ThreeLayerAnimModel13updateLayers3Ev(&model);
    VecFx32 *pp = (VecFx32 *)&position;
    v.x = position.x;
    v.y = pp->y;
    v.z = pp->z;
    _ZN12SndSeEmitter21callUpdateRelativeAltEP7VecFx32(&seEmitter, &v);
    if (curHeldTool) {
        _ZN13HeldToolModel6updateEP12Unk_02006d14((s32)curHeldTool, this);
    }
    _ZN13NpcFootstepFx15updateFootstepsEP8NpcActor(&footstepFx, this);
    _ZN11NpcFaceAnim6updateEPh(&faceAnim, this);
    _ZN13NpcActionCtrl10postUpdateEPh(&actionCtrl, this);
    if (netSyncOff == 0) {
        netSendState(1);
    }
    return TRUE;
}

BOOL NpcActor::onDraw() {
    using namespace nQ;
    Mtx43 buf;
    VecFx32 t0, t1, t2;
    if (updateEnabled == 0) {
        VecFx32 *p = (VecFx32 *)&position;
        jointPos[0].x = position.x;
        jointPos[0].y = p->y;
        jointPos[0].z = p->z;
        jointPos[1].x = position.x;
        jointPos[1].y = p->y;
        jointPos[1].z = p->z;
        jointPos[2].x = position.x;
        jointPos[2].y = p->y;
        jointPos[2].z = p->z;
        return TRUE;
    }
    if (drawEnabled == 0) {
        VecFx32 *p = (VecFx32 *)&position;
        jointPos[0].x = position.x;
        jointPos[0].y = p->y;
        jointPos[0].z = p->z;
        jointPos[1].x = position.x;
        jointPos[1].y = p->y;
        jointPos[1].z = p->z;
        jointPos[2].x = position.x;
        jointPos[2].y = p->y;
        jointPos[2].z = p->z;
        return TRUE;
    }
    _ZN17TwoLayerAnimModel11drawLayeredEj(&model, 0);
    _ZN11NpcMoveCtrl12storeHeadMtxEP12Unk_02006d14(&lookAt, this);
    Model_GetJointWorldMtx(&model, &jointMtx, 0xb);
    Model_GetJointWorldMtx(&model, &buf, 0x10);
    t0 = *(VecFx32 *)&buf.m[9];
    WorldCurve_FromCurved((VecFx32 *)&jointPos[0], &t0);
    Model_GetJointWorldMtx(&model, &buf, 0x7);
    t1 = *(VecFx32 *)&buf.m[9];
    WorldCurve_FromCurved((VecFx32 *)&jointPos[1], &t1);
    Model_GetJointWorldMtx(&model, &buf, 0x4);
    t2 = *(VecFx32 *)&buf.m[9];
    WorldCurve_FromCurved((VecFx32 *)&jointPos[2], &t2);
    if (shadowEnabled != 0) {
        CharaShadow_Draw(&position, 0xb00, 0x4000, 0x1000);
    }
    return TRUE;
}

BOOL NpcActor::onDeleteRequest() {
    using namespace nQ;}

BOOL NpcActor::onDelete() {
    using namespace nQ;
    releaseModel();
    _ZN11NpcFaceAnim7releaseEv(&faceAnim);
    _ZN11NpcAnimCtrl7releaseEv(&animCtrl);
    _ZN12SndSeEmitter11callStopAltEv(&seEmitter);
    if (netSyncOff == 0) {
        netSendState(1);
    }
    return TRUE;
}

BOOL NpcActor::getHeldItemPos(VecFx32 *out) {
    using namespace nQ;
    s32 a = jointMtx.m[9];
    if (a == 0 && jointMtx.m[10] == 0 && jointMtx.m[11] == 0) {
        return FALSE;
    }
    out->x = a;
    out->y = jointMtx.m[10];
    out->z = jointMtx.m[11];
    WorldCurve_FromCurved(out, out);
    return TRUE;
}

void NpcActor::onInteractionEvent(u32 v, u8) {
    using namespace nQ;
    if (v == 8) {
        PlayerActor_SetNoFaceTalkTarget(0, 4);
    }
}

BOOL NpcActor::onToolHit(u16 *) {
    using namespace nQ; return 0; }

void *NpcActor::getVillagerData() {
    using namespace nQ; return 0; }

namespace nQ {
extern "C" void NpcActor_FindFreeUnitNear(V3 *out, NpcActor *self, V3 *in) {
    V3 a, b, cand1, cand2, arr[4], tmp, t1, t2, t3, t4;
    u32 m0, m1;
    s32 best, bestDist, d1, i1, dir0, dir1, best2, d, d0, i, j;
    u8 *g;
    s32 z0, z1, z2, z3;
    *out = *in;
    g = gSceneBlockMap;
    m0 = _ZN8BlockMap17getWalkLinksAtPosEPv(g, (V3 *)((u8 *)self + 0x5c));
    m1 = _ZN8BlockMap17getWalkLinksAtPosEPv(g, in);
    FieldPos_SnapToUnitCenter(&a, (V3 *)((u8 *)self + 0x5c));
    FieldPos_SnapToUnitCenter(&b, in);
    best = 0;
    a.y = 0;
    b.y = 0;
    if (m0 == 0) {
        bestDist = best;
        i1 = z0 = best;
        for (i1 = i1; i1 < 4; i1++) {
            Vec_Add(&t1, &a, (V3 *)(data_020c6dcc + i1 * 12));
            cand1 = t1;
            d1 = Vec_DistXZ((V3 *)((u8 *)self + 0x5c), &cand1);
            if (_ZN8BlockMap17getWalkLinksAtPosEPv(g, &cand1) && TownMap_IsPosWalkable(&cand1, z0)) {
                if (bestDist == 0 || bestDist > d1) {
                    bestDist = d1;
                    best = i1;
                }
            }
        }
        if (bestDist != 0) {
            Vec_Add(&t2, &a, (V3 *)(data_020c6dcc + best * 12));
            *out = t2;
        } else {
            *out = *in;
        }
    } else {
        best2 = best;
        d0 = Vec_DistXZ(in, &a);
        func_02133ef8(arr, 0x30);
        u32 ang = *(u16 *)((u8 *)self + 0x8e);
        if (ang >= 0xe000 || ang < 0x2000) {
            dir0 = 2;
            dir1 = 0;
        } else if (ang < 0x6000) {
            dir0 = 3;
            dir1 = 1;
        } else if (ang < 0xa000) {
            dir0 = 0;
            dir1 = 2;
        } else {
            dir0 = 1;
            dir1 = 3;
        }
        if (_ZN11CommManager8isOnlineEv(gCommManager)) {
            u32 k;
            z1 = 0;
            for (k = 0; k < 4; k++) {
                V3 *p = PlayerActor_GetBodyPos(k);
                if (p) {
                    FieldPos_SnapToUnitCenter(&tmp, p);
                    tmp.y = z1;
                    arr[k] = tmp;
                }
            }
        }
        z2 = z3 = 0;
        for (i = z2; i < 4; i++) {
            Vec_Add(&t3, &a, (V3 *)(data_020c6dcc + i * 12));
            cand2 = t3;
            d = Vec_DistXZ(in, &cand2);
            if (i == dir0) {
                d -= 0x2000;
            } else if (i == dir1) {
                d += 0x2000;
            }
            for (j = z2; j < 4; j++) {
                Vec_Equal(&cand2, &arr[j]);
            }
            if (TownMap_IsPosWalkable(&cand2, z3) && (m0 & data_020c6d84[i])) {
                if (best2 == 0 || best2 > d) {
                    best2 = d;
                    best = i;
                }
            }
        }
        if (m1 == 0 && best2 > d0) {
            *out = *(V3 *)((u8 *)self + 0x5c);
        } else {
            Vec_Add(&t4, &a, (V3 *)(data_020c6dcc + best * 12));
            *out = t4;
        }
    }
}
}

namespace nQ {
extern "C" void NpcActor_CanPlayerPay(void *self, s32 v) {
    PlayerInventory_CanAddBells(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), -v, 1, 0);
}
}

namespace nQ {
extern "C" void NpcActor_ChargePlayer(void *self, s32 v) {
    PlayerInventory_AddBells(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), -v, 1);
}
}

namespace nQ {
extern "C" s32 NpcActor_CheckPayoutFits(void *self, s32 v, s32 w) {
    void *p = PlayerData_GetCurrent() ? _ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()) : 0;
    s32 lo = p ? PlayerInventory_GetBellsRoom(p, 0, 0) : 0;
    s32 hi = p ? PlayerInventory_GetBellsRoom(p, 1, w) : 0;
    s32 r = 2;
    if (v <= lo) {
        r = 0;
    } else if (v <= hi) {
        r = 1;
    }
    return r;
}
}

namespace nQ {
extern "C" void NpcActor_PayPlayer(void *self, s32 v) {
    PlayerInventory_AddBells(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), v, 1);
}
}

NpcMoveAnimSet::NpcMoveAnimSet() {
    using namespace nQ;
    standAnim = 0;
    walkAnim = 1;
    runAnim = 2;
}

void NpcMoveAnimSet::func_0201ad38() {
    using namespace nQ;}

void NpcMoveAnimSet::setStandAnim(s32 v) {
    using namespace nQ; standAnim = v; }

void NpcMoveAnimSet::setWalkAnim(s32 v) {
    using namespace nQ; walkAnim = v; }

void NpcMoveAnimSet::setRunAnim(s32 v) {
    using namespace nQ; runAnim = v; }

s32 NpcMoveAnimSet::getStandAnim() {
    using namespace nQ; return standAnim; }

s32 NpcMoveAnimSet::getWalkAnim() {
    using namespace nQ; return walkAnim; }

s32 NpcMoveAnimSet::getRunAnim() {
    using namespace nQ; return runAnim; }

Unk_0201ad18::Unk_0201ad18() {
    using namespace nQ;
    unk_00 = 0;
    unk_02 = 0;
}

s32 Unk_0201acf8::getLevel() {
    using namespace nQ;
    s32 r = 2;
    u32 v = unk_00;
    if (v < 100) {
        r = 0;
    } else if (v < 0x320) {
        r = 1;
    }
    return r;
}

void Unk_0201acf8::func_0201acf8(u16 v) {
    using namespace nQ; unk_02 = v; }

NpcMoveCtrl::NpcMoveCtrl() {
    using namespace nQ;
    curSpeedPreset.x = 0x1000;
    curSpeedPreset.y = 0;
    curSpeedPreset.z = 0;
    moveMode = 5;
    waypoint.x = 0;
    waypoint.y = 0;
    waypoint.z = 0;
    destination.x = 0;
    destination.y = 0;
    destination.z = 0;
    keepAnimFrame = 0;
    turnMode = 0;
}

void NpcMoveCtrl::func_0201acc8() {
    using namespace nQ;}

void NpcMoveCtrl::reset() {
    using namespace nQ;
    curSpeedPreset.x = 0x1000;
    curSpeedPreset.y = 0;
    curSpeedPreset.z = 0;
    moveMode = 5;
    waypoint.x = 0;
    waypoint.y = 0;
    waypoint.z = 0;
    destination.x = 0;
    destination.y = 0;
    destination.z = 0;
    keepAnimFrame = 0;
    turnMode = 0;
    MI_CpuCopy8(sNpcMoveSpeedPresets, speedPresets, 0x24);
}

namespace nQ {
extern "C" void NpcActor_UpdateMovement(void *a, void *b) { _ZN11NpcMoveCtrl13applyMovementEP9Character(a, b); }
}

void NpcMoveCtrl::applyMovement(Character *scene) {
    using namespace nP;
    s32 lo = curSpeedPreset.x;
    if (lo == 0) {
        scene->speed = 0;
    } else {
        s32 hi = curSpeedPreset.y;
        if (hi >= lo) {
            hi = curSpeedPreset.z;
        }
        Math_StepS32Alt(&scene->speed, lo, hi);
        s32 ang = Math_AngleXZ((VecFx32 *)&scene->position, &destination);
        if (ang == scene->moveAngleY) {
            s32 d = Vec_DistXZ(&destination, (VecFx32 *)&scene->position);
            if (d < scene->speed) {
                scene->speed = d;
            }
        }
    }
    _ZN5Actor14updatePositionEP13ActorCollider(scene, (u8 *)scene + 0x4cc);
}

void NpcMoveCtrl::setMoveMode(Character *scene, s32 mode, s16 ang, u16 extra) {
    using namespace nP;
    if (mode < 0 || mode >= 5) {
        mode = 0;
    }
    NpcMoveModeEntry *e = &sNpcMoveModeTable[mode];
    VecFx32 *src = &speedPresets[e->speedPresetIdx];
    curSpeedPreset.x = src->x;
    curSpeedPreset.y = src->y;
    curSpeedPreset.z = src->z;
    if (ang == 0) {
        turnSpeed = e->defaultTurnSpeed;
    } else {
        turnSpeed = ang;
    }
    arriveDistance = e->arriveDistance;
    if (mode != 4) {
        if ((keepAnimFrame == 1 && e->keepAnimFrame == 1) || _ZN11NpcAnimCtrl13isPlayingAnimEiPv((u8 *)scene + 0x334, e->animKind, (u8 *)scene + 0x2a0)) {
            _ZN11NpcAnimCtrl17playAnimKeepFrameEP8NpcActorjjj((u8 *)scene + 0x334, scene, e->animKind, extra, 0);
        } else {
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti((u8 *)scene + 0x334, scene, e->animKind, extra, 0, 0x1000, 0, 0);
        }
    }
    moveMode = mode;
    keepAnimFrame = e->keepAnimFrame;
}

s32 NpcMoveCtrl::getMoveMode() {
    using namespace nP;
    return moveMode;
}

void NpcMoveCtrl::aimAtDestination(Character *scene) {
    using namespace nP;
    targetAngle = Math_AngleXZ((VecFx32 *)&scene->position, &destination);
}

s32 NpcMoveCtrl::stepAngle(s16 *p, s16 target, s16 step, u8 mode) {
    using namespace nP;
    s32 lim;
    s32 r;
    s16 t;
    if (step < 0) {
        lim = (s16)-step;
    } else {
        lim = step;
    }
    r = 0;
    if (step != 0) {
        switch (mode) {
        case 1:
        case 2:
            if (Math_AngleDiffAbs(target, *p) <= lim) {
                if ((s16)(*p - target) > 0) {
                    step = (s16)-step;
                }
            } else {
                if (mode == 1) {
                    step = (s16)lim;
                } else {
                    step = (s16)-lim;
                }
            }
            break;
        default:
            if ((s16)(*p - target) > 0) {
                step = (s16)-step;
            }
            break;
        }
        *p = *p + step;
        s32 x = *p - target;
        s32 d = (s16)x;
        if (d < 0) { d = (s16)-d; }
        s32 m = step < 0 ? (s32)(s16)-step : step;
        if (d <= m && (s16)x * step >= 0) {
            *p = target;
            r = 1;
        }
    } else if (*p == target) {
        r = 1;
    }
    return r;
}

void NpcMoveCtrl::updateTurn(Character *scene) {
    using namespace nP;
    if (getMoveMode() == 4) {
        scene->moveAngleY = targetAngle;
    } else {
        stepAngle(&scene->moveAngleY, targetAngle, turnSpeed, turnMode);
        *(s16 *)((u8 *)scene + 0x8e) = scene->moveAngleY;
    }
}

void NpcMoveCtrl::setWaypoint(VecFx32 *v) {
    using namespace nP;
    if (Vec_Equal(&waypoint, &destination)) {
        setDestination(v);
    }
    waypoint.x = v->x;
    waypoint.y = v->y;
    waypoint.z = v->z;
}

VecFx32 *NpcMoveCtrl::getDestinationB() {
    using namespace nP;
    return &destination;
}

BOOL NpcMoveCtrl::hasArrived(Character *scene, s32 which) {
    using namespace nP;
    VecFx32 v;
    BOOL r;
    VecFx32 *sp = (VecFx32 *)&scene->position;
    v.x = sp->x;
    v.y = sp->y;
    v.z = sp->z;
    r = FALSE;
    v.y = 0;
    s32 d;
    if (which != 0) {
        d = Vec_Distance(&v, &waypoint);
    } else {
        d = Vec_Distance(&v, &destination);
    }
    if (d < arriveDistance) {
        r = TRUE;
    }
    return r;
}

void NpcMoveCtrl::setTargetAngle(s16 v) {
    using namespace nP;
    targetAngle = v;
}

s32 NpcMoveCtrl::getTargetAngle() {
    using namespace nP;
    return targetAngle;
}

s32 NpcMoveCtrl::getTurnSpeed() {
    using namespace nP;
    return turnSpeed;
}

void NpcMoveCtrl::setDestination(VecFx32 *v) {
    using namespace nP;
    destination.x = v->x;
    destination.y = v->y;
    destination.z = v->z;
}

VecFx32 *NpcMoveCtrl::getDestination() {
    using namespace nP;
    return &destination;
}

s32 NpcMoveCtrl::hasNextLeg() {
    using namespace nP;
    return Vec_NotEqual(&waypoint, &destination);
}

namespace nP {
extern "C" void Npc_RotateOffsetXZ(VecFx32 *out, VecFx32 *base, VecFx32 *off, u32 ang) {
    s32 i = ((u16)ang >> 4) << 1;
    s32 s = data_02135f44[i];
    s32 c = data_02135f44[i + 1];
    s32 a = func_01ffcb0c(off->x, c);
    out->x = base->x + a + func_01ffcb0c(off->z, s);
    out->y = 0;
    s32 d = func_01ffcb0c(off->x, s);
    out->z = base->z - d + func_01ffcb0c(off->z, c);
}
}

void NpcMoveCtrl::resetDestination() {
    using namespace nP;
    destination.x = waypoint.x;
    destination.y = waypoint.y;
    destination.z = waypoint.z;
}

void NpcMoveCtrl::setSpeedPreset(s32 idx, s32 x, s32 y, s32 z) {
    using namespace nP;
    if (idx >= 1 && idx < 3) {
        VecFx32 *e = &speedPresets[idx];
        e->x = x;
        e->y = y;
        e->z = z;
    }
}

void NpcMoveCtrl::getCurSpeedPreset() {
    using namespace nP;
}

void NpcMoveCtrl::setTurnMode(u8 v) {
    using namespace nP;
    turnMode = v;
}

NpcObstacleProbe::NpcObstacleProbe() {
    using namespace nP;
    blockedBits = 0;
}

void NpcObstacleProbe::clear() {
    using namespace nP;
    blockedBits = 0;
}

namespace nP {
extern "C" BOOL Npc_IsPosBlocked(VecFx32 *pos) {
    u32 buf[16];
    if (Unk_0201a834_IsOne(gFieldSceneKind)) {
        if (Ground_GetExitAtPos((s32)pos) != -1) {
            return TRUE;
        }
        if (FtrMgr_GetSurfaceHeightAtPos((s32)pos)) {
            return TRUE;
        }
        return FALSE;
    }
    _ZN10GroundInfo9initAtPosEP7VecFx32ii(buf, (s32)pos, 0, 0);
    s32 r;
    if (buf[12] != 0 || _ZN14GroundInfoBase9getHeightEi(buf, 1) > 0 || Collision_HasUnitShapeAt((s32)pos)) {
        r = 1;
    } else {
        r = 0;
    }
    GroundInfo_Destruct(buf);
    return r;
}
}

void NpcObstacleProbe::probe(Character *scene) {
    using namespace nP;
    for (s32 i = 0; i < 2; i++) {
        VecFx32 v;
        Npc_RotateOffsetXZ(&v, (VecFx32 *)&scene->position, &sNpcObstacleProbeOffsets[i], *(s16 *)((u8 *)scene + 0x94));
        if (Npc_IsPosBlocked(&v)) {
            blockedBits |= 1 << i;
        }
    }
}

u8 NpcLookAt::getObstacleBits() {
    using namespace nP;
    return lookType;
}

NpcLookAt::NpcLookAt() {
    using namespace nP;
    lookType = 1;
    targetActor = 0;
    targetPos.x = 0;
    targetPos.y = 0;
    targetPos.z = 0;
    priority = 0;
    pitch = 0;
    pitchStep = 0x200;
    manualPitch = 0;
    pitchLimit = 0x1a00;
    yaw = 0;
    yawStep = 0x400;
    manualYaw = 0;
    yawLimit = 0x3000;
    disabled = 0;
    onTarget = 0;
    maxDistance = 0x8000;
    useYawLimit = 1;
    targetPlayer = 4;
}

void NpcLookAt::clearTargetActor() {
    using namespace nP;
    targetActor = 0;
}

void NpcLookAt::disable() {
    using namespace nP;
    disabled = 1;
}

void NpcMoveCtrl::storeHeadMtx(Unk_02006d14 *p) {
    using namespace nP;
    if (p != 0) {
        Unk_02006d14_TalkBase &s = *p;
        Model_GetJointWorldMtx(&s, (u8 *)this + 0x2c, 0xf);
    }
}

namespace nP {
extern "C" s32 NpcLookAt_GetHeadPos(NpcLookAt *self, VecFx32 *out) {
    s32 r = 0;
    s32 x = self->headPos.x;
    if (x != 0 || self->headPos.y != 0 || self->headPos.z != 0) {
        out->x = x;
        out->y = self->headPos.y;
        out->z = self->headPos.z;
        WorldCurve_FromCurved(out);
        r = 1;
    }
    return r;
}
}

void NpcLookAt::setPitchLimit(s16 v) {
    using namespace nP;
    pitchLimit = v;
}

void NpcLookAt::setTargetPos(VecFx32 *v) {
    using namespace nP;
    targetPos.x = v->x;
    targetPos.y = v->y;
    targetPos.z = v->z;
}

void NpcLookAt::setTarget(u8 type, s32 pri, s32 tgt, VecFx32 *v, s32 h, s32 lim, u8 flag) {
    using namespace nP;
    if (disabled == 0 && priority != 4 && pri >= priority) {
        lookType = type;
        targetActor = (Character *)tgt;
        targetPos.x = v->x;
        targetPos.y = v->y;
        targetPos.z = v->z;
        priority = pri;
        onTarget = 0;
        maxDistance = lim;
        useYawLimit = flag;
        targetPlayer = h;
        manualPitch = 0;
        manualYaw = 0;
        pitchStep = 0x200;
        yawStep = 0x400;
    }
}

void NpcLookAt::setManualAngles(s32 pri, s16 a, s16 b, s16 c, s16 d) {
    using namespace nP;
    if (disabled == 0 && priority != 4 && pri >= priority) {
        lookType = 5;
        targetActor = 0;
        targetPos.x = 0;
        targetPos.y = 0;
        targetPos.z = 0;
        priority = pri;
        onTarget = 0;
        maxDistance = 0x8000;
        useYawLimit = 1;
        targetPlayer = 4;
        manualPitch = a;
        manualYaw = b;
        pitchStep = c;
        yawStep = d;
    }
}

BOOL NpcLookAt::canSeeTarget(Character *scene) {
    using namespace nP;
    volatile VecFx32 z;
    VecFx32 *p = 0;
    z.x = 0;
    z.y = 0;
    z.z = 0;
    switch (lookType) {
    case 1: {
        Character *t = PlayerActor_GetCharacter(targetPlayer);
        if (t != 0) {
            p = (VecFx32 *)&t->position;
        }
        break;
    }
    case 3:
        p = &targetPos;
        break;
    }
    if (p != 0 && Vec_NotEqual(p, gVec3Zero) != 0) {
        s32 d = Vec_Distance(p, (VecFx32 *)&scene->position);
        if (maxDistance == 0 || (d < 0 ? -d : d) < maxDistance) {
            s32 ang = calcYaw(p, (VecFx32 *)&scene->position, scene->rotY);
            if (useYawLimit == 0 || _ZN9NpcLookAt16isWithinYawLimitEi(this, ang) != 0) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

s32 NpcLookAt::calcYaw(VecFx32 *a, VecFx32 *b, s32 c) {
    using namespace nP;
    return (s16)(Math_AngleXZ(b, a) - c);
}

s32 NpcLookAt::calcPitch(VecFx32 *a, VecFx32 *b, s32 c) {
    using namespace nP;
    s32 d = Vec_Distance(a, b);
    return (s16)(Math_Atan2(a->y - b->y, d) - c);
}

s32 NpcLookAt::calcClampedYaw(VecFx32 *a, VecFx32 *b, s32 c) {
    using namespace nP;
    return clampYaw(calcYaw(a, b, c));
}

s32 NpcLookAt::clampYaw(s32 v) {
    using namespace nP;
    s32 m = v < 0 ? -v : v;
    s32 lim = yawLimit;
    if (m > lim) {
        if (v > 0) {
            v = lim;
        } else {
            v = (s16)-lim;
        }
    }
    return v;
}

s32 NpcLookAt::calcClampedPitch(VecFx32 *a, VecFx32 *b, s32 c) {
    using namespace nP;
    return clampPitch(calcPitch(a, b, c));
}

s32 NpcLookAt::clampPitch(s32 v) {
    using namespace nP;
    s32 m = v < 0 ? -v : v;
    s32 lim = pitchLimit;
    if (m > lim) {
        if (v >= 0) {
            v = lim;
        } else {
            v = (s16)-lim;
        }
    }
    return v;
}

void NpcLookAt::lookAtActor(Character *scene, Character *tgt, VecFx32 *v, s32 limit, u8 flag) {
    using namespace nP;
    VecFx32 *tp = (VecFx32 *)&tgt->position;
    VecFx32 *sp = (VecFx32 *)&scene->position;
    s32 a = 0;
    s32 b = 0;
    onTarget = 0;
    if (tp != 0) {
        s32 d = Vec_Distance(tp, sp);
        if (limit == 0 || (d < 0 ? -d : d) < limit) {
            s32 ang = calcYaw(tp, sp, scene->rotY);
            if (!flag || _ZN9NpcLookAt16isWithinYawLimitEi(this, ang)) {
                VecFx32 w;
                if (NpcLookAt_GetHeadPos((NpcLookAt *)this, &w)) {
                    a = calcClampedPitch(v, &w, 0);
                }
                b = clampYaw(ang);
                onTarget = 1;
            }
        }
    }
    if (yaw != b) {
        Math_StepAngle(&yaw, b, yawStep);
    }
    if (pitch != a) {
        Math_StepAngle(&pitch, a, pitchStep);
    }
    if (yaw != b || pitch != a) {
        onTarget = 0;
    }
}

void NpcLookAt::relax() {
    using namespace nP;
    if (yaw != 0) {
        Math_StepAngle(&yaw, 0, yawStep);
    }
    if (pitch != 0) {
        Math_StepAngle(&pitch, 0, pitchStep);
    }
}

void NpcLookAt::lookAtPlayer(Character *scene, s32 h, s32 limit, u8 flag) {
    using namespace nP;
    Character *t = PlayerActor_GetCharacter(h);
    if (t != 0) {
        VecFx32 v;
        if (PlayerActor_GetHeadPos(&v, h)) {
            VecFx32 w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            lookAtActor(scene, t, &w, limit, flag);
        }
    }
}

void NpcLookAt::lookAtTargetPlayer(Character *scene) {
    using namespace nP;
    lookAtPlayer(scene, targetPlayer, maxDistance, useYawLimit);
}

void NpcLookAt::lookAtLocalPlayer(Character *scene) {
    using namespace nP;
    lookAtPlayer(scene, 4, maxDistance, useYawLimit);
}

void NpcLookAt::lookAtTargetActor(Character *scene) {
    using namespace nP;
    if (targetActor != 0) {
        VecFx32 v;
        if (NpcLookAt_GetHeadPos((NpcLookAt *)((u8 *)targetActor + 0x3b0), &v)) {
            VecFx32 w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            lookAtActor(scene, (Character *)targetActor, &w, maxDistance, useYawLimit);
        }
    }
}

void NpcLookAt::lookAtPoint(NpcActor *o) {
    using namespace nO;
    s32 r6 = 0;
    s32 r7 = 0;
    u8 sp[12];
    s32 d = Vec_Distance(&targetPos, (VecFx32 *)&o->position);
    s32 lim;
    onTarget = 0;
    lim = maxDistance;
    if (lim == 0 || (d < 0 ? -d : d) < lim) {
        s32 t = nO::_ZN9NpcLookAt7calcYawEP7VecFx32S1_i(this, &targetPos, (VecFx32 *)&o->position, o->rotY);
        if (useYawLimit == 0 || isWithinYawLimit(t)) {
            r6 = nO::_ZN9NpcLookAt14calcClampedYawEP7VecFx32S1_i(this, &targetPos, (VecFx32 *)&o->position, o->rotY);
            if (nO::NpcLookAt_GetHeadPos(this, sp)) {
                r7 = nO::_ZN9NpcLookAt16calcClampedPitchEP7VecFx32S1_i(this, &targetPos, sp, o->rotX);
                onTarget = 1;
            }
        }
    }
    if (yaw != r6) {
        Math_StepAngle(&yaw, r6, yawStep);
    }
    if (pitch != r7) {
        Math_StepAngle(&pitch, r7, pitchStep);
    }
    if (yaw != r6 || pitch != r7) {
        onTarget = 0;
    }
}

void NpcLookAt::approachManualAngles() {
    using namespace nO;
    if (yaw != manualYaw) {
        Math_StepAngle(&yaw, manualYaw, yawStep);
    }
    if (pitch != manualPitch) {
        Math_StepAngle(&pitch, manualPitch, pitchStep);
    }
}

void NpcLookAt::update(NpcActor *base) {
    using namespace nO;
    if (disabled == 0 && lookType < 6) {
        Unk_0201a1e0_Fn *pf = &sNpcLookAtTypes[lookType];
        NpcLookAt *t = &base->lookAt;
        (t->**pf)(base);
    }
}

namespace nO {
extern "C" BOOL NpcLookAt_IsWithin(s32 a, s32 b) {
    if (a < 0) {
        a = -a;
    }
    if (a < b) {
        return TRUE;
    }
    return FALSE;
}
}

BOOL NpcLookAt::isWithinYawLimit(s32 v) {
    using namespace nO;
    return NpcLookAt_IsWithin(v, yawLimit);
}

BOOL NpcLookAt::isOnTarget() {
    using namespace nO;
    if (disabled == 0 && onTarget == 1) {
        return TRUE;
    }
    return FALSE;
}

NpcSpeechState::NpcSpeechState() {
    using namespace nO;
    reset();
}

NpcSpeechState::~NpcSpeechState() {
    using namespace nO;}

void NpcSpeechState::reset() {
    using namespace nO;
    speaking = 0;
    mouthType = 2;
}

void NpcSpeechState::startSpeaking() {
    using namespace nO;
    speaking = 1;
}

void NpcSpeechState::stopSpeaking() {
    using namespace nO;
    speaking = 0;
}

BOOL NpcSpeechState::isSpeaking() {
    using namespace nO;
    if (speaking == 1) {
        return TRUE;
    }
    return FALSE;
}

void NpcSpeechState::setMouthType(s32 v) {
    using namespace nO;
    mouthType = v;
}

s32 NpcSpeechState::getMouthType() {
    using namespace nO;
    return mouthType;
}

namespace nO {
extern "C" s32 NpcFace_PickTalkMouth() {
    s32 r = Random_GlobalBelow(4);
    s32 v = 1;
    if (r & v) {
        v = 0;
    }
    return v;
}
}

NpcEmotionFx::NpcEmotionFx() {
    using namespace nO;}

NpcEmotionFx::~NpcEmotionFx() {
    using namespace nO;}

void NpcEmotionFx::reset() {
    using namespace nO;
    MI_CpuFill8(this, 0xff, 0x10);
    clearSlots(slots, 2);
    slotAnimId = 0x137;
    seMode = 2;
    emotionId = 0x3c;
    effectParam = 0;
    useGlobalSe = 0;
}

void NpcEmotionFx::clearSlots(void *p, s32 n) {
    using namespace nO;
    NpcEmotionFxSlot *q = (NpcEmotionFxSlot *)p;
    s32 zero = 0;
    for (s32 i = 0; i < n; i++) {
        MI_CpuFill8(q, zero, 4);
        q->effectId = ~zero;
        q++;
    }
}

void NpcEmotionFx::copySlots(void *dst, void *src, s32 n) {
    using namespace nO;
    MI_CpuCopy8(src, dst, n << 2);
}

s32 NpcEmotionFx::findFreeHandle() {
    using namespace nO;
    s32 r, i;
    i = 0;
    r = ~i;
    for (; i < 4; i++) {
        if (effects[i] == r) {
            r = i;
            break;
        }
    }
    return r;
}

void NpcEmotionFx::setSlots(void *a, u32 b, s32 c) {
    using namespace nO;
    clearSlots(slots, 2);
    copySlots(slots, a, b);
    slotAnimId = c;
}

void NpcEmotionFx::startEntry(NpcEmotionPhase *tbl, s32 idx) {
    using namespace nO;
    NpcEmotionPhase *e = &tbl[idx];
    if (e->killPrevFx != 0) {
        killEffects();
    }
    if (e->fxSlots != 0) {
        setSlots(e->fxSlots, e->numFxSlots, e->animId);
        entryPart = idx;
    }
}

void NpcEmotionFx::playSound(NpcEmotionFxSlot *s) {
    using namespace nO;
    u8 *bank = Emotion_GetEntry(emotionId);
    if (s->repeat == 1 || seMode == 2) {
        seMode = bank[0x19];
        if (seMode == 1) {
            if (useGlobalSe == 0) {
                Snd_SeEmitterPlayHeld(seEmitter, emotionId + 0x84, 0x7f, 0);
            } else {
                Snd_PlayAuxSeHeld(emotionId + 0x84);
            }
        } else {
            if (useGlobalSe == 0) {
                Snd_SeEmitterPlayOneShot(seEmitter, emotionId + 0x84, 0x7f, 0);
            } else {
                Snd_PlayAuxSe(emotionId + 0x84);
            }
        }
    }
}

void NpcEmotionFx::keepSound() {
    using namespace nO;
    if (seMode == 1 && useGlobalSe == 0) {
        Snd_SeEmitterPlayHeld(seEmitter, emotionId + 0x84, 0x7f, 0);
    }
}

void NpcEmotionFx::stopSound() {
    using namespace nO;
    if (seMode == 1 && useGlobalSe != 0) {
        Snd_StopAuxSe();
    }
    seMode = 2;
}

void NpcEmotionFx::updateSlot(void *a, s16 b, s32 c, u16 d, s32 j) {
    using namespace nO;
    NpcEmotionFxSlot *s = &slots[j];
    s32 id = s->effectId;
    if (id >= 0 && id < 0x66) {
        if (slotAnimId == c && slotAnimId != 0x137) {
            u16 dd = d;
            if (s->triggerFrame == dd) {
                s32 k = findFreeHandle();
                if (k != ~0) {
                    effects[k] = Effect_CreateWithParam((u16)s->effectId, effectParam, a, &b);
                    if (s->repeat == 0) {
                        clearSlots(s, 1);
                    }
                }
            }
            u8 *bank = Emotion_GetEntry(emotionId);
            s32 bv = *(s16 *)(bank + entryPart * 12 + 10);
            if (bv == dd) {
                playSound(s);
            }
        }
    }
}

void NpcEmotionFx::killEffects() {
    using namespace nO;
    s32 zero = 0;
    for (s32 i = 0; i < 4; i++) {
        if (effects[i] != ~zero) {
            Effect_End(effects[i]);
            effects[i] = ~zero;
        }
    }
    stopSound();
}

void NpcEmotionFx::update(void *a, s16 b, s32 c, u16 d) {
    using namespace nO;
    keepSound();
    s32 zero = 0;
    for (s32 i = 0; i < 4; i++) {
        if (effects[i] != ~zero) {
            Effect_SetPosition(effects[i], a, &b, zero);
        }
    }
    for (s32 j = 0; j < 2; j++) {
        updateSlot(a, b, c, d, j);
    }
}

void NpcEmotionFx::stop() {
    using namespace nO;
    killEffects();
}

NpcFaceAnim::NpcFaceAnim() {
    using namespace nO;
    loaded = 0;
    eyeAnimId = 0x16f;
    mouthAnimId = 0x16f;
    savedMouthAnimId = 0x16f;
    talkMouthVariant = 2;
}

NpcFaceAnim::~NpcFaceAnim() {
    using namespace nO;}

BOOL NpcFaceAnim::isLoaded() {
    using namespace nO;
    if (loaded) {
        return TRUE;
    }
    return FALSE;
}

s32 NpcFaceAnim::getMouthAnim() {
    using namespace nO;
    return mouthAnimId;
}

BOOL NpcFaceAnim::load(NpcActor *o) {
    using namespace nO;
    void *r6 = o->getTexturePath();
    if (_ZN17NpcFaceAnimHandle15getTexPatBufRefEv(&texPatBuf) == 0 && r6 != 0) {
        if (!_ZN12NpcResHandle7acquireEv(&texPatBuf)) {
            return FALSE;
        }
        void *a = _ZN17NpcFaceAnimHandle15getTexPatBufRefEv(&texPatBuf);
        NpcTexPatBufRef_LoadFile(a, (s32)r6);
        if (!_ZN12NpcResHandle7acquireEv(&texPatHeap)) {
            return FALSE;
        }
        void *h = _ZN22NpcHeldItemModelHandle16getTexPatHeapRefEv(&texPatHeap);
        s32 fl = (s32)o->model.resMdl;
        s32 x = NpcTexPatBufRef_GetBuffer(a);
        if (!_ZN13MatTexPatAnim4initEPvS0_jS0_(&eyeTexAnim, fl, x, 1, _ZN20CharaFaceAnimWorkRef7getHeapEv(h))) {
            return FALSE;
        }
        s32 fl2 = (s32)o->model.resMdl;
        s32 y = NpcTexPatBufRef_GetBuffer(a);
        if (!_ZN13MatTexPatAnim4initEPvS0_jS0_(&mouthTexAnim, fl2, y, 1, _ZN20CharaFaceAnimWorkRef7getHeapEv(h))) {
            return FALSE;
        }
        if (!_ZN12NpcResHandle7acquireEv(&faceAnimRef)) {
            return FALSE;
        }
        eyeAnimId = 0x16f;
        mouthAnimId = 0x16f;
        BlinkTimer_Clear(this);
        loaded = 1;
    }
    return TRUE;
}

BOOL NpcFaceAnim::isTalkMouthAnim(s32 v) {
    using namespace nO;
    switch (v) {
    case 0x137:
    case 0x138:
        return TRUE;
    }
    return FALSE;
}

void NpcFaceAnim::pickTalkMouthVariant() {
    using namespace nO;
    talkMouthVariant = NpcFace_PickTalkMouth();
}

s32 NpcFaceAnim::getTalkMouthStartFrame(s32 v) {
    using namespace nO;
    s32 r = 0;
    if (v == 1) {
        r = 5;
    }
    return r;
}

BOOL NpcFaceAnim::isTalkMouthCycleDone(s32 a, s32 b, s32 c) {
    using namespace nO;
    s32 r = 0;
    if (a == 0) {
        if (b == 5) {
            return 1;
        }
    } else if (b >= c - 0x1000) {
        r = 1;
    }
    return r;
}

void NpcFaceAnim::randomizeTalkMouth() {
    using namespace nO;
    if (isTalkMouthAnim(mouthAnimId)) {
        pickTalkMouthVariant();
        mouthTexAnim.curFrame = getTalkMouthStartFrame(talkMouthVariant) << 12;
    }
}

BOOL NpcFaceAnim::isMouthCycleDone() {
    using namespace nO;
    BOOL r = FALSE;
    if (isTalkMouthAnim(mouthAnimId)) {
        r = isTalkMouthCycleDone(talkMouthVariant, (u32)(mouthTexAnim.curFrame << 4) >> 16, (u32)(mouthTexAnim.numFrames << 4) >> 16);
    } else if (_ZN13AnimFrameCtrl10isFinishedEv(&mouthTexAnim)) {
        r = TRUE;
    }
    return r;
}

void NpcFaceAnim::setMouthAnim(s32 v, u32 w) {
    using namespace nO;
    if (isLoaded()) {
        void *h = _ZN19NpcTexPatHeapHandle11getFaceAnimEv(&faceAnimRef);
        _ZN16CharaFaceAnimRef8loadAnimEiii(h, v, 1, 0);
        _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(&mouthTexAnim, _ZN16CharaFaceAnimRef18getMouthAnimBufferEv(h), 0, 0, w, 0x1000);
        mouthTexAnim.curFrame = 0;
        mouthAnimId = v;
        randomizeTalkMouth();
        _ZN13MatTexPatAnim10applyFrameEv(&mouthTexAnim);
    }
}

void NpcFaceAnim::startTalkMouth(s32 i) {
    using namespace nO;
    if (i >= 0 && i < 2) {
        if (!isTalkMouthAnim(mouthAnimId)) {
            savedMouthAnimId = mouthAnimId;
        }
        setMouthAnim(sNpcTalkMouthAnims[i], 0);
    }
}

void NpcFaceAnim::restoreMouthAnim() {
    using namespace nO;
    if (savedMouthAnimId == 0x16f) {
        savedMouthAnimId = 0xba;
    }
    setMouthAnim(savedMouthAnimId, 0);
    savedMouthAnimId = 0x16f;
}

void NpcFaceAnim::setFaceAnims(s32 t, s32 u, s32 x, s32 mode) {
    using namespace nO;
    if (isLoaded()) {
        void *h = _ZN19NpcTexPatHeapHandle11getFaceAnimEv(&faceAnimRef);
        if (t != 0 || eyeAnimId != t) {
            _ZN16CharaFaceAnimRef8loadAnimEiii(h, t, 1, 0);
            NNS_G3dGetAnmByIdx(_ZN16CharaFaceAnimRef16getEyeAnimBufferEv(h), 0);
            _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(&eyeTexAnim, _ZN16CharaFaceAnimRef16getEyeAnimBufferEv(h), 0, 0, x, 0x1000);
            eyeAnimId = t;
            eyeTexAnim.curFrame = 0;
            _ZN13MatTexPatAnim10applyFrameEv(&eyeTexAnim);
        }
        if (mode == 2 || !isTalkMouthAnim(mouthAnimId)) {
            setMouthAnim(u, 0);
        } else {
            savedMouthAnimId = u;
        }
    }
}

void NpcFaceAnim::setFaceAnimsFrom(void *a, s32 b, s32 c) {
    using namespace nO;
    if (isLoaded()) {
        s32 t = CharaAnim_GetEyeAnim(a);
        s32 u = CharaAnim_GetMouthAnim(a);
        if (t == 0x16f) {
            t = 0;
        }
        if (u == 0x16f) {
            u = 0xba;
        }
        setFaceAnims(t, u, b, c);
    }
}

BOOL NpcFaceAnim::setMaterialTex(void *m, void *q, u32 r) {
    using namespace nO;
    if (isLoaded()) {
        _ZN13MatTexPatAnim13pauseMaterialEv(m, q);
        if (_ZN13MatTexPatAnim14setMaterialTexEij(m, q, r)) {
            return TRUE;
        }
        MatTexPatAnim_ResumeMaterial(m, q);
    }
    return FALSE;
}

BOOL NpcFaceAnim::setMouthTexture(u32 a) {
    using namespace nO;
    return setMaterialTex(&mouthTexAnim, ((u8 *)"m"), a);
}

void NpcFaceAnim::resumeMouthMaterial() {
    using namespace nO;
    MatTexPatAnim_ResumeMaterial(&mouthTexAnim, ((u8 *)"m"));
}

void NpcFaceAnim::blinkNow() {
    using namespace nO;
    BlinkTimer_BlinkNow(this);
}

void NpcFaceAnim::release() {
    using namespace nO;
    _ZN13MatTexPatAnim7releaseEv(&eyeTexAnim);
    _ZN13MatTexPatAnim7releaseEv(&mouthTexAnim);
    _ZN12NpcResHandle7releaseEv(&texPatBuf);
    _ZN12NpcResHandle7releaseEv(&faceAnimRef);
    _ZN12NpcResHandle7releaseEv(&texPatHeap);
}

void NpcFaceAnim::update(u8 *o) {
    using namespace nN;
    if (isLoaded()) {
        if (eyeAnimId == 0) {
            if (!_ZN13AnimFrameCtrl14hasPassedFrameEi(&eyeTexAnim, 0) || BlinkTimer_Update(this)) {
                _ZN13MatTexPatAnim6updateEv(&eyeTexAnim);
            }
        } else {
            _ZN13MatTexPatAnim6updateEv(&eyeTexAnim);
        }
        if (_ZN14NpcSpeechState12getMouthTypeEv(o + 0x418) < 2) {
            if (_ZN14NpcSpeechState10isSpeakingEv(o + 0x418)) {
                if (!isTalkMouthAnim(mouthAnimId)) {
                    startTalkMouth(_ZN14NpcSpeechState12getMouthTypeEv(o + 0x418));
                    randomizeTalkMouth();
                } else if (isMouthCycleDone()) {
                    randomizeTalkMouth();
                }
            } else if (isTalkMouthAnim(mouthAnimId)) {
                if (isMouthCycleDone()) {
                    restoreMouthAnim();
                }
            }
        } else if (isTalkMouthAnim(mouthAnimId)) {
            restoreMouthAnim();
        }
        _ZN13MatTexPatAnim6updateEv(&mouthTexAnim);
    }
}

NpcActionCtrl::NpcActionCtrl() {
    using namespace nN;
    pendingParams.item = 0xfff1;
    curParams.item = 0xfff1;
    action = 0x16;
    actionEntry = NULL;
    priority = 0;
    clearPendingAction();
    setActionDone(1);
    unk_99 = 0;
    moveMode = 0;
    unk_a0 = 0;
    emotionEntry = 0;
    emotionIntro = 1;
    emotionId = 0;
    act07Variant = 5;
    itemEffect = -1;
}

void NpcActionCtrl::func_02019854() {
    using namespace nN;
}

void *NpcActionParams::clear() {
    using namespace nN;
    return MI_CpuFill8(this, 0, 0x34);
}

void NpcActionParams::copyFrom(NpcActionParams *src) {
    using namespace nN;
    MI_CpuCopy8(src, this, 0x34);
    handOverPartner = src->handOverPartner;
}

void NpcActionCtrl::startAction(u8 *o, s32 a, s32 b, s32 s0, s32 s1, s16 s2, s32 s3, s32 s4) {
    using namespace nN;
    NpcActionParams *p = &pendingParams;
    setPendingAction(a, b);
    p->clear();
    p->waypointX = s0;
    p->waypointZ = s1;
    if (s3 == 0 && s4 == 0) {
        p->destX = s0;
        p->destZ = s1;
    } else {
        p->destX = s3;
        p->destZ = s4;
    }
    p->targetAngle = s2;
    p->blendFrames = data_020c6cc8;
    curParams.copyFrom(&pendingParams);
    MI_CpuFill8(&netAction, 0, 0xf);
    isTalking = 0;
    talkingRequest = 0;
    changeAction(o, pendingAction, pendingPriority);
}

s32 NpcActionCtrl::getAction() {
    using namespace nN;
    return action;
}

u8 NpcActionCtrl::getEmotionId() {
    using namespace nN;
    return emotionId;
}

BOOL NpcActionCtrl::isActionDone() {
    using namespace nN;
    if (actionDone == 1) {
        return TRUE;
    }
    return FALSE;
}

NpcActionParams *NpcActionCtrl::getCurParams() {
    using namespace nN;
    return &curParams;
}

void NpcActionCtrl::changeAction(u8 *o, s32 idx, s32 state) {
    using namespace nN;
    action = idx;
    if (idx < 0 || idx >= 0x16) {
        action = 0;
    }
    priority = state;
    actionEntry = &sNpcActionTable[action];
    actStep = 0;
    if (actionEntry != NULL) {
        (this->*(actionEntry->setupFn))(o);
    }
}

void NpcActionCtrl::clearPendingAction() {
    using namespace nN;
    setPendingAction(0x16, 0);
    pendingParams.clear();
}

void NpcActionCtrl::setPendingAction(s32 a, s32 b) {
    using namespace nN;
    pendingAction = a;
    pendingPriority = b;
}

BOOL NpcActionCtrl::requestAction(u32 a, s32 b, s32 c, s32 s0, s16 s1, s16 s2, s32 s3, s32 s4, u16 s5, u16 s6) {
    using namespace nN;
    BOOL r = FALSE;
    if (b >= pendingPriority || pendingPriority == 3) {
        if (a != 0xc) {
            NpcActionParams *p = &pendingParams;
            setPendingAction(a, b);
            p->clear();
            p->waypointX = c;
            p->waypointZ = s0;
            if (s3 == 0 && s4 == 0) {
                p->destX = c;
                p->destZ = s0;
            } else {
                p->destX = s3;
                p->destZ = s4;
            }
            p->targetAngle = s2;
            p->turnSpeed = s1;
            p->blendFrames = s5;
            p->animStartFrame = s6;
            r = TRUE;
        }
    }
    return r;
}

BOOL NpcActionCtrl::requestAct07(s32 a, s32 b, s32 c, s32 d, u16 e) {
    using namespace nN;
    BOOL r = FALSE;
    if (requestAction(7, a, 0, 0, b, c, 0, 0, e, 0)) {
        pendingParams.act07Variant = d;
        r = TRUE;
    }
    return r;
}

BOOL NpcActionCtrl::requestEmotion(s32 a, u8 b, u16 c) {
    using namespace nN;
    BOOL r = FALSE;
    if (requestAction(8, a, 0, 0, 0, 0, 0, 0, c, 0)) {
        pendingParams.emotionId = b;
        r = TRUE;
    }
    return r;
}

void NpcActionCtrl::requestStand(u32 a, u16 b) {
    using namespace nN;
    requestAction(0, a, 0, 0, 0, 0, 0, 0, b, 0);
}

BOOL NpcActionCtrl::requestPlayAnim(s32 a, s32 b, u32 c, u16 s0, u16 s1) {
    using namespace nN;
    BOOL r = FALSE;
    if (a >= pendingPriority || pendingPriority == 3) {
        NpcActionParams *p = &pendingParams;
        setPendingAction(0xc, a);
        p->clear();
        p->animId = b;
        p->animPlayMode = c;
        p->blendFrames = s0;
        p->animStartFrame = s1;
        r = TRUE;
    }
    return r;
}

BOOL NpcActionCtrl::requestGiveItem(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2) {
    using namespace nN;
    BOOL r = FALSE;
    if (a >= pendingPriority || pendingPriority == 3) {
        NpcActionParams *p = &pendingParams;
        setPendingAction(0xd, a);
        p->clear();
        p->item = *b;
        p->handOverKind = c;
        p->handOverMode = s0;
        p->handOverVariant = s1;
        p->handOverPartner = s2;
        r = TRUE;
    }
    return r;
}

BOOL NpcActionCtrl::requestTakeItem(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2) {
    using namespace nN;
    BOOL r = FALSE;
    if (a >= pendingPriority || pendingPriority == 3) {
        NpcActionParams *p = &pendingParams;
        setPendingAction(0xe, a);
        p->clear();
        p->item = *b;
        p->handOverKind = c;
        p->handOverMode = s0;
        p->handOverVariant = s1;
        p->handOverPartner = s2;
        r = TRUE;
    }
    return r;
}

void NpcActionCtrl::requestTalkingOn() {
    using namespace nN; talkingRequest = 1; }

void NpcActionCtrl::requestTalkingOff() {
    using namespace nN; talkingRequest = 2; }

void NpcActionCtrl::setTalking() {
    using namespace nN; isTalking = 1; }

void NpcActionCtrl::clearTalking() {
    using namespace nN; isTalking = 0; }

void NpcActionCtrl::applyPendingAction(u8 *arg) {
    using namespace nN;
    if (pendingPriority != 0) {
        if (pendingPriority >= priority || isActionDone() || priority == 3) {
            curParams.copyFrom(&pendingParams);
            changeAction(arg, pendingAction, pendingPriority);
        }
    }
    u8 t = talkingRequest;
    if (t == 1) {
        setTalking();
        talkingRequest = 0;
    } else if (t == 2) {
        clearTalking();
        talkingRequest = 0;
    }
    clearPendingAction();
}

void NpcActionCtrl::setActionDone(s32 v) {
    using namespace nN;
    actionDone = v;
}

namespace nN {
extern "C" void NpcAction_PackMove(u8 *out, u32 a, u32 b, u32 c, u32 s0, s16 s1, u16 s2) {
    NetBuf_PackPair20(out, a, b);
    NetBuf_PackPair20(out + 5, c, s0);
    MI_CpuCopy8(&s1, out + 10, 2);
    out[12] = s2;
}
}

namespace nN {
extern "C" void NpcAction_UnpackMove(u32 a, u32 b, u32 c, u32 d, void *s0, u16 *s1, u8 *out) {
    NetBuf_UnpackPair20(out, a, b);
    NetBuf_UnpackPair20(out + 5, c, d);
    MI_CpuCopy8(out + 10, s0, 2);
    *s1 = out[12];
}
}

namespace nN {
extern "C" void NpcAction_PackTurn(u8 *out, u16 a, u16 b, u32 c) {
    MI_CpuCopy8(&a, out, 2);
    MI_CpuCopy8(&b, out + 2, 2);
    out[4] = c;
}
}

namespace nN {
extern "C" void NpcAction_UnpackTurn(void *a, void *b, u16 *c, u8 *d) {
    MI_CpuCopy8(d, a, 2);
    MI_CpuCopy8(d + 2, b, 2);
    *c = d[4];
}
}

namespace nN {
extern "C" void NpcAction_PackAnim(u8 *p, u32 a, u32 b, u32 c, u16 d) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
}
}

namespace nN {
extern "C" void NpcAction_UnpackAnim(u32 *a, u8 *b, u16 *c, u16 *d, u8 *src) {
    *a = src[0];
    *b = src[1];
    *c = src[2];
    *d = src[3];
}
}

namespace nN {
extern "C" void NpcAction_PackItem(void *unused, void *p, u16 *v) {
    NetBuf_WriteU16(p, *v);
}
}

namespace nN {
extern "C" void NpcAction_UnpackItem(u16 *out, void *in) {
    *out = NetBuf_ReadU16(in);
}
}

void NpcActionCtrl::update(u8 *arg) {
    using namespace nN;
    applyPendingAction(arg);
    NpcActionEntry *e = actionEntry;
    if (e != NULL && e->mainFn != NULL) {
        (this->*(e->mainFn))(arg);
    }
    if (isActionDone()) {
        priority = 0;
    }
}

void NpcActionCtrl::postUpdate(u8 *arg) {
    using namespace nN;
    if (actionEntry != NULL && actionEntry->postFn != NULL) {
        (this->*(actionEntry->postFn))(arg);
    }
    if (isActionDone()) {
        priority = 0;
    }
}

s32 NpcActionCtrl::setupAct00(u8 *o) {
    using namespace nN;
    NpcActionParams *c = getCurParams();
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(o + 0x350, o, 0, 0, c->blendFrames);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(o + 0x350, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(o + 0x350, gVec3Zero);
    _ZN11NpcMoveCtrl14setTargetAngleEs(o + 0x350, *(s16 *)(o + 0x8e));
    _ZN12Unk_0201acf813func_0201acf8Et(o + 0x3aa, -2);
    if (*(u32 *)(o + 0x628) != 0) {
        ((HeldToolModel *)*(u32 *)(o + 0x628))->playIdleAnim(data_020c6cc8, 0);
    }
    netAction = action;
    netPriority = priority;
    setActionDone(0);
    return 0;
}

void NpcActionCtrl::mainAct00() {
    using namespace nN;
    setActionDone(1);
}

s32 NpcActionCtrl::setupAct01(u8 *o) {
    using namespace nN;
    NpcActionParams *c = getCurParams();
    VecFx32Ctor v0(c->waypointX, 0, c->waypointZ);
    VecFx32Ctor v1(c->destX, 0, c->destZ);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(o + 0x350, &v0);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(o + 0x350, &v1);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(o + 0x350, o, 1, c->turnSpeed, c->blendFrames);
    _ZN12Unk_0201acf813func_0201acf8Et(o + 0x3aa, 1);
    if (*(u32 *)(o + 0x628) != 0) {
        ((HeldToolModel *)*(u32 *)(o + 0x628))->playWalkAnim(data_020c6cc8, 0);
    }
    netAction = action;
    netPriority = priority;
    NpcAction_PackMove(&netArgs[0], c->waypointX, c->waypointZ, c->destX, c->destZ, c->turnSpeed, c->blendFrames);
    setActionDone(0);
    return 0;
}

void NpcActionCtrl::mainAct01(u8 *o) {
    using namespace nN;
    _ZN11NpcMoveCtrl16aimAtDestinationEP9Character(o + 0x350);
    if (_ZN11NpcMoveCtrl10hasArrivedEP9Characteri(o + 0x350, o, 0)) {
        if (_ZN11NpcMoveCtrl10hasNextLegEv(o + 0x350)) {
            NpcActionParams *c = getCurParams();
            requestAction(1, 1, c->waypointX, c->waypointZ, 0, 0, 0, 0, data_020c6cc8, 0);
        } else {
            setActionDone(1);
        }
    }
}

s32 NpcActionCtrl::setupAct02(u8 *o) {
    using namespace nN;
    NpcActionParams *c = getCurParams();
    VecFx32Ctor v0(c->waypointX, 0, c->waypointZ);
    VecFx32Ctor v1(c->destX, 0, c->destZ);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(o + 0x350, &v0);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(o + 0x350, &v1);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(o + 0x350, o, 2, c->turnSpeed, c->blendFrames);
    _ZN12Unk_0201acf813func_0201acf8Et(o + 0x3aa, 1);
    if (*(u32 *)(o + 0x628) != 0) {
        ((HeldToolModel *)*(u32 *)(o + 0x628))->playWalkAnim(data_020c6cc8, 0);
    }
    netAction = action;
    netPriority = priority;
    NpcAction_PackMove(&netArgs[0], c->waypointX, c->waypointZ, c->destX, c->destZ, c->turnSpeed, c->blendFrames);
    setActionDone(0);
    return 0;
}

void NpcActionCtrl::mainAct02(u8 *o) {
    using namespace nN;
    _ZN11NpcMoveCtrl16aimAtDestinationEP9Character(o + 0x350);
    if (_ZN11NpcMoveCtrl10hasArrivedEP9Characteri(o + 0x350, o, 0)) {
        if (_ZN11NpcMoveCtrl10hasNextLegEv(o + 0x350)) {
            NpcActionParams *c = getCurParams();
            requestAction(1, 1, c->waypointX, c->waypointZ, 0, 0, 0, 0, data_020c6cc8, 0);
        } else {
            setActionDone(1);
        }
    }
}

s32 NpcActionCtrl::setupAct03(NpcActor *c) {
    using namespace nM;
    NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 3, d->turnSpeed, d->blendFrames);
    _ZN11NpcMoveCtrl14setTargetAngleEs(&c->moveCtrl, d->targetAngle);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(&c->unk_3aa, -2);
    if (c->curHeldTool) {
        _ZN13HeldToolModel12playWalkAnimEjj(c->curHeldTool, data_020c6cc8, 0);
    }
    netAction = action;
    netPriority = priority;
    NpcAction_PackTurn(netArgs, d->turnSpeed, d->targetAngle, d->blendFrames);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 0;
}

void NpcActionCtrl::mainAct03(NpcActor *c) {
    using namespace nM;
    if (c->rotY == _ZN11NpcMoveCtrl14getTargetAngleEv(&c->moveCtrl)) {
        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 0, 0, _ZN13NpcActionCtrl12getCurParamsEv(this)->blendFrames);
        _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

s32 NpcActionCtrl::setupAct04(NpcActor *c) {
    using namespace nM;
    NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    V v1(d->waypointX, 0, d->waypointZ);
    V v2(d->destX, 0, d->destZ);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 3, d->turnSpeed, d->blendFrames);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, &v1);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, &v2);
    _ZN11NpcMoveCtrl14setTargetAngleEs(&c->moveCtrl, d->targetAngle);
    _ZN12Unk_0201acf813func_0201acf8Et(&c->unk_3aa, -2);
    if (c->curHeldTool) {
        _ZN13HeldToolModel12playWalkAnimEjj(c->curHeldTool, data_020c6cc8, 0);
    }
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 0;
}

void NpcActionCtrl::act04Step0(NpcActor *c) {
    using namespace nM;
    if (c->rotY == _ZN11NpcMoveCtrl14getTargetAngleEv(&c->moveCtrl)) {
        _ZN13NpcActionCtrl10setupAct01EPh(this, c);
        actStep = 1;
    }
}

void NpcActionCtrl::act04Step1(NpcActor *c) {
    using namespace nM;
    _ZN13NpcActionCtrl9mainAct01EPh(this, c);
}

namespace nZ {
extern "C" {
const u16 data_020c6d70[4] = {0x49, 0x13, 0x4a, 0x1d};
void *data_020d734c[2] = {(void *)_ZN13VillagerRoute13stepAlongPathEP7VecFx32, 0};
void *data_020d71b4[2] = {(void *)_ZN13VillagerRoute16stepCheckArrivedEP7VecFx32, 0};
void *data_020d768c[2] = {(void *)_ZN13NpcActionCtrl9postAct0BEP8NpcActor, 0};
const u16 data_020c6ce0[2] = {0x4b, 0x1};
void *data_020d73e4[2] = {(void *)_ZN13NpcActionCtrl11act0EStep09EP12Unk_02006d14, 0};
void *data_020d72ac[2] = {(void *)_ZN11NpcTalkCtrl10mainState4EP8NpcActor, 0};
void *data_020d7334[2] = {(void *)_ZN13VillagerRoute14stepFollowPathEP7VecFx32, 0};
void *data_020d7234[2] = {(void *)_ZN11NpcTalkCtrl10mainState0EP8NpcActor, 0};
void *data_020d72ec[2] = {(void *)_ZN13NpcActionCtrl10act13Step0EP12Unk_02006d14, 0};
void *data_020d75fc[2] = {(void *)_ZN13NpcActionCtrl9postAct14EP12Unk_02006d14, 0};
void *data_020d7124[2] = {(void *)_ZN13VillagerRoute13stepAlongPathEP7VecFx32, 0};
void *data_020d765c[2] = {(void *)_ZN13NpcActionCtrl10setupAct0EEP8NpcActor, 0};
FxVec3 sNpcAvoidOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};
void *data_020d7384[2] = {(void *)_ZN16ActorTalkRequest16taskReopenWindowEv, 0};
void *data_020d742c[2] = {(void *)_ZN13NpcActionCtrl11act0EStep00EP8NpcActor, 0};
void *data_020d76d4[2] = {(void *)_ZN13NpcActionCtrl9mainAct04EP8NpcActor, 0};
void *data_020d76e4[2] = {(void *)_ZN13NpcActionCtrl9mainAct07EP8NpcActor, 0};
void *data_020d70cc[2] = {(void *)_ZN16ActorTalkRequest14itemAct12StartEv, 0};
void *data_020d738c[2] = {(void *)_ZN11NpcTalkCtrl11state2Step1EP8NpcActor, 0};
void *data_020d73b4[2] = {(void *)_ZN13NpcActionCtrl11act0EStep15EP12Unk_02006d14, 0};
void *data_020d73d4[2] = {(void *)_ZN13NpcActionCtrl11act0EStep11EP12Unk_02006d14, 0};
FxVec3 sNpcObstacleProbeOffsets[2] = {FxVec3(0x700, 0, 0xf00), FxVec3(-0x700, 0, 0xf00)};
void *data_020d741c[2] = {(void *)_ZN13NpcActionCtrl11act0EStep02EP12Unk_02006d14, 0};
void *data_020d7274[2] = {(void *)_ZN11NpcTalkCtrl11setupState3EP8NpcActor, 0};
void *data_020d72f4[2] = {(void *)_ZN13NpcActionCtrl10act15Step3EP8NpcActor, 0};
void *data_020d731c[2] = {(void *)_ZN11NpcTalkCtrl11state0Step2EP8NpcActor, 0};
void *data_020d743c[2] = {(void *)_ZN11NpcTalkCtrl11state0Step1EP8NpcActor, 0};
void *data_020d7084[2] = {(void *)_ZN13NpcActionCtrl10setupAct01EPh, 0};
void *data_020d70ac[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d7464[2] = {(void *)_ZN13NpcActionCtrl9mainAct02EPh, 0};
const u16 data_020c6cd4[2] = {0x63, 0x12};
void *data_020d73f4[2] = {(void *)VillagerRoute_PickOwnHouseDoor, 0};
const u32 data_020c6dcc[12] = {0x0, 0x0, 0xffffe000, 0xffffe000, 0x0, 0x0, 0x0, 0x0, 0x2000, 0x2000, 0x0, 0x0};
void *data_020d7494[2] = {(void *)_ZN16ActorTalkRequest14taskReturnItemEv, 0};
const u16 data_020c6cbc[2] = {0x400, 0x0};
const u16 data_020c6cec[2] = {0x59, 0x0};
void *data_020d7704[2] = {(void *)_ZN13NpcActionCtrl9mainAct05EP8NpcActor, 0};
void *data_020d76fc[2] = {(void *)_ZN13NpcActionCtrl10setupAct06EP8NpcActor, 0};
void *data_020d76f4[2] = {(void *)_ZN13NpcActionCtrl9mainAct05EP8NpcActor, 0};
void *data_020d76ec[2] = {(void *)_ZN13NpcActionCtrl10setupAct07EP8NpcActor, 0};
const u16 data_020c6d08[2] = {0x57, 0x103};
void *data_020d76dc[2] = {(void *)_ZN13NpcActionCtrl9postAct07EP8NpcActor, 0};
void *data_020d74e4[2] = {(void *)_ZN13VillagerRoute10stepToDoorEP7VecFx32, 0};
void *data_020d76cc[2] = {(void *)_ZN13NpcActionCtrl9mainAct08EP8NpcActor, 0};
void *data_020d76c4[2] = {(void *)_ZN13NpcActionCtrl10setupAct09EP8NpcActor, 0};
void *data_020d76bc[2] = {(void *)_ZN13NpcActionCtrl9mainAct09EP8NpcActor, 0};
void *data_020d76b4[2] = {(void *)_ZN9NpcLookAt17lookAtTargetActorEP9Character, 0};
void *data_020d76ac[2] = {(void *)_ZN13NpcActionCtrl9mainAct0AEP8NpcActor, 0};
void *data_020d76a4[2] = {(void *)_ZN13NpcActionCtrl9postAct0AEP8NpcActor, 0};
void *data_020d769c[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d7694[2] = {(void *)_ZN13VillagerRoute16stepAdjacentUnitEP7VecFx32, 0};
const u16 data_020c6cc8[2] = {0x4, 0x0};
const u16 data_020c6d00[2] = {0x3b, 0x0};
void *data_020d7614[2] = {(void *)_ZN13NpcActionCtrl10setupAct12EP12Unk_02006d14, 0};
void *data_020d761c[2] = {(void *)_ZN13NpcActionCtrl9mainAct11EP12Unk_02006d14, 0};
const u16 data_020c6cd8[2] = {0x46, 0x0};
void *data_020d766c[2] = {(void *)_ZN13NpcActionCtrl9mainAct0DEP8NpcActor, 0};
const u16 data_020c6d04[2] = {0x63, 0x100};
void *data_020d762c[2] = {(void *)_ZN13NpcActionCtrl9postAct10EP12Unk_02006d14, 0};
void *data_020d7644[2] = {(void *)_ZN13NpcActionCtrl10setupAct0FEP12Unk_02006d14, 0};
void *data_020d764c[2] = {(void *)_ZN13NpcActionCtrl9postAct0EEv, 0};
const u16 data_020c6cf0[2] = {0xeb85, 0x0};
const u16 data_020c6d24[2] = {0x50, 0x9};
const u16 data_020c6cc0[2] = {0x3000, 0x0};
void *data_020d7664[2] = {(void *)_ZN16ActorTalkRequest13takeItemStartEv, 0};
const u32 data_020c6d84[4] = {0x1, 0x2, 0x4, 0x8};
void *data_020d7684[2] = {(void *)_ZN13NpcActionCtrl10setupAct0CEP8NpcActor, 0};
const u16 data_020c6d28[2] = {0x53, 0x0};
void *data_020d722c[2] = {(void *)_ZN13VillagerRoute11isInBlockT2EP7VecFx32, 0};
const u32 sNpcMoveSpeedPresets[9] = {0x0, 0x0, 0x0, 0x100, 0x19, 0x33, 0x199, 0x66, 0x99};
void *data_020d7224[2] = {(void *)_ZN11NpcTalkCtrl11setupState0EP8NpcActor, 0};
void *data_020d75f4[2] = {(void *)_ZN13NpcActionCtrl10setupAct14EP12Unk_02006d14, 0};
void *data_020d75ec[2] = {(void *)_ZN13VillagerRoute16stepCheckArrivedEP7VecFx32, 0};
const u16 data_020c6cd0[2] = {0x5e, 0x0};
void *data_020d7214[2] = {(void *)_ZN13NpcActionCtrl10setupAct05EP8NpcActor, 0};
void *data_020d75d4[2] = {(void *)_ZN16ActorTalkRequest12takeItemWaitEv, 0};
void *data_020d75cc[2] = {(void *)_ZN13NpcActionCtrl10act04Step0EP8NpcActor, 0};
void *data_020d75c4[2] = {(void *)_ZN13NpcActionCtrl10act04Step1EP8NpcActor, 0};
void *data_020d75bc[2] = {(void *)_ZN13VillagerRoute11isInBlockT4EP7VecFx32, 0};
void *data_020d75b4[2] = {(void *)_ZN16ActorTalkRequest12giveItemWaitEv, 0};
void *data_020d75ac[2] = {(void *)_ZN13NpcActionCtrl10act15Step2EP8NpcActor, 0};
void *data_020d75a4[2] = {(void *)_ZN13NpcActionCtrl10act05Step1EP8NpcActor, 0};
void *data_020d71f4[2] = {(void *)_ZN13NpcActionCtrl10act05Step0EP8NpcActor, 0};
void *data_020d7594[2] = {(void *)_ZN11NpcTalkCtrl11state4Step0EP8NpcActor, 0};
void *data_020d758c[2] = {(void *)_ZN16ActorTalkRequest13itemAct0FWaitEv, 0};
}
}

void NpcActionCtrl::mainAct04(NpcActor *c) {
    using namespace nM;
    static void (NpcActionCtrl::*tbl[])(NpcActor *) = {*(void (NpcActionCtrl::**)(NpcActor *))data_020d75cc, *(void (NpcActionCtrl::**)(NpcActor *))data_020d75c4};
    if (actStep < 2) {
        (this->*tbl[actStep])(c);
    }
}

s32 NpcActionCtrl::setupMoveTurnFirst(NpcActor *c, s32 a, s16 b) {
    using namespace nM;
    s16 out;
    NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    V v1(d->waypointX, 0, d->waypointZ);
    V v2(d->destX, 0, d->destZ);
    moveMode = a;
    unk_a0 = b;
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, &v1);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, &v2);
    if (_ZN8NpcActor12isPosInFrontEPsP7VecFx32(c, &out, _ZN11NpcMoveCtrl15getDestinationBEv(&c->moveCtrl))) {
        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, moveMode, d->turnSpeed, d->blendFrames);
        actStep = 1;
    } else {
        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 3, d->turnSpeed, d->blendFrames);
        _ZN11NpcMoveCtrl14setTargetAngleEs(&c->moveCtrl, out);
        c->speed = 0;
        actStep = 0;
    }
    if (c->curHeldTool) {
        _ZN13HeldToolModel12playWalkAnimEjj(c->curHeldTool, data_020c6cc8, 0);
    }
    _ZN12Unk_0201acf813func_0201acf8Et(&c->unk_3aa, unk_a0);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 0;
}

void NpcActionCtrl::act05Step0(NpcActor *c) {
    using namespace nM;
    if (NpcActor_IsFrontAngle(_ZN11NpcMoveCtrl14getTargetAngleEv(&c->moveCtrl) - c->rotY)) {
        s32 t = _ZN11NpcMoveCtrl12getTurnSpeedEv(&c->moveCtrl);
        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, moveMode, t, data_020c6cc8);
        actStep = 1;
    }
}

void NpcActionCtrl::act05Step1(NpcActor *c) {
    using namespace nM;
    s16 out;
    s32 r = _ZN11NpcMoveCtrl15getDestinationBEv(&c->moveCtrl);
    _ZN11NpcMoveCtrl16aimAtDestinationEP9Character(&c->moveCtrl, c);
    if (_ZN11NpcMoveCtrl10hasArrivedEP9Characteri(&c->moveCtrl, c, 0)) {
        if (_ZN11NpcMoveCtrl10hasNextLegEv(&c->moveCtrl)) {
            _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, (void *)r);
        } else {
            _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        }
    } else if (!_ZN8NpcActor12isPosInFrontEPsP7VecFx32(c, &out, r)) {
        u16 v = data_020c6cc8;
        s32 t = _ZN11NpcMoveCtrl12getTurnSpeedEv(&c->moveCtrl);
        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 3, t, data_020c6cc8);
        _ZN11NpcMoveCtrl14setTargetAngleEs(&c->moveCtrl, out);
        actStep = 0;
        c->speed = 0;
        if (c->curHeldTool) {
            _ZN13HeldToolModel12playWalkAnimEjj(c->curHeldTool, v, 0);
        }
    }
}

namespace nZ {
extern "C" {
void *data_020d7574[2] = {(void *)_ZN13VillagerRoute13stepAlongPathEP7VecFx32, 0};
void *data_020d756c[2] = {(void *)_ZN13NpcActionCtrl10setupAct10EP12Unk_02006d14, 0};
void *data_020d7564[2] = {(void *)_ZN16ActorTalkRequest15closeWindowWaitEv, 0};
void *data_020d755c[2] = {(void *)_ZN13NpcActionCtrl10act15Step1EP8NpcActor, 0};
void *data_020d7554[2] = {(void *)_ZN13VillagerRoute16stepAdjacentUnitEP7VecFx32, 0};
void *data_020d754c[2] = {(void *)_ZN16ActorTalkRequest16closeWindowStartEv, 0};
void *data_020d7544[2] = {(void *)_ZN13NpcActionCtrl9postAct0DEP8NpcActor, 0};
void *data_020d753c[2] = {(void *)_ZN13VillagerRoute14stepFollowPathEP7VecFx32, 0};
const u16 data_020c6d3c[2] = {0x54, 0x5};
void *data_020d71bc[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
}
}

void NpcActionCtrl::mainAct05(NpcActor *c) {
    using namespace nM;
    static void (NpcActionCtrl::*tbl[])(NpcActor *) = {*(void (NpcActionCtrl::**)(NpcActor *))data_020d71f4, *(void (NpcActionCtrl::**)(NpcActor *))data_020d75a4};
    if (actStep < 2) {
        (this->*tbl[actStep])(c);
    }
}

s32 NpcActionCtrl::setupAct05(NpcActor *c) {
    using namespace nM;
    return setupMoveTurnFirst(c, 1, 1);
}

s32 NpcActionCtrl::setupAct06(NpcActor *c) {
    using namespace nM;
    return setupMoveTurnFirst(c, 2, 2);
}

s32 NpcActionCtrl::setupAct07(NpcActor *c) {
    using namespace nM;
    NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 3, d->turnSpeed, d->blendFrames);
    _ZN11NpcMoveCtrl14setTargetAngleEs(&c->moveCtrl, d->targetAngle);
    _ZN12Unk_0201acf813func_0201acf8Et(&c->unk_3aa, -2);
    if (c->curHeldTool) {
        _ZN13HeldToolModel12playWalkAnimEjj(c->curHeldTool, d->blendFrames, 0);
    }
    act07Variant = d->act07Variant;
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 0;
}

void NpcActionCtrl::act07Step0(NpcActor *c) {
    using namespace nM;
    if (c->rotY == _ZN11NpcMoveCtrl14getTargetAngleEv(&c->moveCtrl)) {
        if (act07Variant >= 5) {
            act07Variant = 0;
        }
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, sNpcAct07Anims[act07Variant], data_020c6cc8, 1, 0x1000, 0, 0);
        if (c->curHeldTool) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
        }
        Snd_SeEmitterPlayOneShotAlt(&c->seEmitter, sNpcAct07Ses[act07Variant], 0x7f, 0);
        actStep = 1;
    }
}

namespace nZ {
extern "C" {
void *data_020d7514[2] = {(void *)_ZN13NpcActionCtrl10setupAct0BEP8NpcActor, 0};
void *data_020d750c[2] = {(void *)_ZN16ActorTalkRequest19subSceneCloseWindowEv, 0};
void *data_020d7504[2] = {(void *)_ZN13VillagerRoute13stepAlongPathEP7VecFx32, 0};
void *data_020d74fc[2] = {(void *)_ZN13NpcActionCtrl10setupAct0AEP8NpcActor, 0};
void *data_020d74f4[2] = {(void *)_ZN13VillagerRoute10stepToDoorEP7VecFx32, 0};
const u32 sNpcAct07Anims[5] = {0xda, 0xdb, 0xdc, 0xdd, 0xde};
void *data_020d7194[2] = {(void *)_ZN16ActorTalkRequest13itemAct12WaitEv, 0};
void *data_020d70bc[2] = {(void *)_ZN13VillagerRoute14stepFollowPathEP7VecFx32, 0};
void *data_020d74d4[2] = {(void *)_ZN16ActorTalkRequest17taskSwitchSpeakerEv, 0};
void *data_020d74cc[2] = {(void *)_ZN13NpcActionCtrl10setupAct08EP8NpcActor, 0};
void *data_020d74c4[2] = {(void *)_ZN16ActorTalkRequest10taskMelodyEv, 0};
const u16 sNpcAct07Ses[5] = {0x45, 0x46, 0x47, 0x48, 0x49};
}
}

void NpcActionCtrl::mainAct07(NpcActor *c) {
    using namespace nM;
    static void (NpcActionCtrl::*tbl[])(NpcActor *) = {*(void (NpcActionCtrl::**)(NpcActor *))data_020d708c};
    if (actStep < 1) {
        (this->*tbl[actStep])(c);
    }
}

void NpcActionCtrl::postAct07(NpcActor *c) {
    using namespace nM;
    if (actStep >= 1) {
        if (!_ZN13NpcActionCtrl12isActionDoneEv(this)) {
            if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl, c)) {
                _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
            }
        }
    }
}

namespace nM {
extern "C" NpcEmotionEntry *Emotion_GetEntry(u32 i) {
    if (i < 0x3c) {
        return &sEmotionTable[i];
    }
    return 0;
}
}

s32 NpcActionCtrl::setupAct08(NpcActor *c) {
    using namespace nM;
    u32 i = _ZN13NpcActionCtrl12getCurParamsEv(this)->emotionId;
    u32 v = data_020c6cc8;
    if (i >= 0x3c) {
        i = 0;
    }
    emotionId = i;
    if (i == 0) {
        _ZN11NpcFaceAnim8blinkNowEv(&c->faceAnim);
        v = c->getEmotion0BlendFrames();
    }
    emotionEntry = (NpcEmotionEntry *)&sEmotionTable[i];
    emotionIntro = *(u8 *)&emotionEntry->playFlags;
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, emotionEntry->introAnim, v, emotionIntro, 0x1000, 0, 0);
    if (c->curHeldTool) {
        _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
    }
    c->emotionFx.emotionId = i;
    _ZN12NpcEmotionFx10startEntryEP15NpcEmotionPhasei(&c->emotionFx, emotionEntry, 0);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 1;
}

void NpcActionCtrl::mainAct08(NpcActor *c) {
    using namespace nM;
    NpcEmotionEntry *t = emotionEntry;
    if (t != 0) {
        if (emotionIntro == 1) {
            if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl, c)) {
                NpcEmotionEntry *r = emotionEntry;
                s32 *pv = (s32 *)&r->loopAnim;
                if ((s32)r->loopAnim < 0x137) {
                    u16 v = data_020c6cc8;
                    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, *pv, data_020c6cc8, 0, 0x1000, 0, 0);
                    if (c->curHeldTool) {
                        _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
                    }
                    c->emotionFx.emotionId = emotionId;
                    _ZN12NpcEmotionFx10startEntryEP15NpcEmotionPhasei(&c->emotionFx, emotionEntry, 1);
                    emotionIntro = 0;
                } else if (r->loopAnim == 0x137) {
                    _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
                }
            }
        } else {
            if (t->introAnim == 0) {
                if ((((u32)c->model.curFrame << 4) >> 16) == 0) {
                    _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
                }
            }
        }
    }
}

s32 NpcActionCtrl::setupAct09(NpcActor *c) {
    using namespace nM;
    NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 0, 0, d->blendFrames);
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0xd8, d->blendFrames, 0, 0x1000, 0, 0);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(&c->unk_3aa, -2);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 0;
}

void NpcActionCtrl::mainAct09(NpcActor *c) {
    using namespace nM;
    if ((((u32)c->model.curFrame << 4) >> 16) == 0) {
        if (!_ZN12Unk_0201acf88getLevelEv(&c->unk_3aa)) {
            _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        }
    }
}

s32 NpcActionCtrl::setupAct0A(NpcActor *c) {
    using namespace nM;
    NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 0, 0, d->blendFrames);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(&c->unk_3aa, -2);
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x77, d->blendFrames, 1, 0x1000, 0, 0);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    Snd_PlayAuxSe(0xa0);
    actStep = 0;
    return 0;
}

void NpcActionCtrl::act0AStep0(NpcActor *c) {
    using namespace nL;
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x78, data_020c6cc8, 1, 0x1000, 0, 0);
        actStep = 1;
    }
}

namespace nZ {
extern "C" {
void *data_020d70d4[2] = {(void *)_ZN13VillagerRoute16stepAdjacentUnitEP7VecFx32, 0};
}
}

void NpcActionCtrl::mainAct0A(NpcActor *c) {
    using namespace nL;
    static Unk_02017d74_Fn tbl[1] = {*(Unk_02017d74_Fn *)data_020d7484};
    if (actStep < 1) {
        (this->*tbl[actStep])(c);
    }
}

void NpcActionCtrl::postAct0A(NpcActor *c) {
    using namespace nL;
    if (actStep >= 1) {
        if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
            _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        }
    }
}

BOOL NpcActionCtrl::setupAct0B(NpcActor *c) {
    using namespace nL;
    u32 r = c->getAct0BAnimA();
    NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 0, 0, d->blendFrames);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(&c->unk_3aa, -2);
    u16 v = data_020c6cc8;
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, r, data_020c6cc8, 1, 0x1000, 0, 0);
    if (c->curHeldTool) {
        _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
    }
    actStep = 0;
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return FALSE;
}

void NpcActionCtrl::act0BStep0(NpcActor *c) {
    using namespace nL;
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        u32 r = c->getAct0BAnimB();
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, r, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->curHeldTool) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
        }
        actStep = 1;
    }
}

namespace nZ {
extern "C" {
const u16 data_020c6d10[2] = {0x61, 0x0};
void *data_020d748c[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
const u16 data_020c6d1c[2] = {0x8000, 0x0};
const u16 data_020c6d2c[2] = {0x5a, 0x0};
void *data_020d7474[2] = {(void *)_ZN16ActorTalkRequest13taskItemAct0FEv, 0};
void *data_020d746c[2] = {(void *)_ZN13NpcActionCtrl10act0BStep0EP8NpcActor, 0};
void *data_020d715c[2] = {(void *)_ZN16ActorTalkRequest9melodyEndEv, 0};
}
}

void NpcActionCtrl::mainAct0B(NpcActor *c) {
    using namespace nL;
    static Unk_02017d74_Fn tbl[1] = {*(Unk_02017d74_Fn *)data_020d746c};
    if (actStep < 1) {
        (this->*tbl[actStep])(c);
    }
}

void NpcActionCtrl::postAct0B(NpcActor *c) {
    using namespace nL;
    if (actStep >= 1) {
        if (!_ZN13NpcActionCtrl12isActionDoneEv(this)) {
            s32 a = ((u32)c->model.curFrame << 4) >> 16;
            s32 b = (c->model.numFrames << 4) >> 16;
            if (a >= b - 0x1000) {
                _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
            }
        }
    }
}

BOOL NpcActionCtrl::setupAct0C(NpcActor *c) {
    using namespace nL;
    NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 0, 0, data_020c6cc8);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(&c->unk_3aa, -2);
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, d->animId, d->blendFrames, d->animPlayMode, 0x1000, d->animStartFrame, 0);
    netAction = action;
    netPriority = priority;
    NpcAction_PackAnim(netArgs, d->animId, d->animPlayMode, d->blendFrames, d->animStartFrame);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return TRUE;
}

void NpcActionCtrl::postAct0C(NpcActor *c) {
    using namespace nL;
    BOOL r = FALSE;
    switch (c->model.playMode) {
    case 0:
    case 2:
        if ((((u32)c->model.curFrame << 4) >> 16) == 0) {
            r = TRUE;
        }
        break;
    case 1:
    case 3:
        r = _ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl);
        break;
    }
    if (r) {
        _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

BOOL NpcActionCtrl::setupAct0D(NpcActor *c) {
    using namespace nL;
    NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 0, 0, d->blendFrames);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(&c->unk_3aa, -2);
    u16 v = data_020c6cc8;
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, sNpcGiveItemAnims[d->handOverVariant], data_020c6cc8, 1, 0x1000, 0, 0);
    if (c->curHeldTool) {
        _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
    }
    Snd_SeEmitterPlayOneShotAlt(&c->seEmitter, 0x4f, 0x7f, 0);
    HandOverItem_Begin(&d->item, d->handOverKind, d->handOverMode, d->handOverVariant, c, d->handOverPartner);
    HandOverItem_RequestMode(1, c);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    if (d->handOverVariant == 1) {
        actStep = 4;
    } else {
        actStep = 0;
    }
    return TRUE;
}

void NpcActionCtrl::act0DStep0(NpcActor *c) {
    using namespace nL;
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        if (PlayerActor_RequestAct32()) {
            u16 v = data_020c6cc8;
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x23, data_020c6cc8, 0, 0x1000, 0, 0);
            if (c->curHeldTool) {
                _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
            }
            actStep = 1;
        }
    } else if ((((u32)c->model.curFrame << 4) >> 16) == 8) {
        Snd_SeEmitterPlayOneShotAlt(&c->seEmitter, 0x63, 0x7f, 0);
    }
}

void NpcActionCtrl::act0DStep1(NpcActor *c) {
    using namespace nL;
    if (!HandOverItem_IsMaster(c)) {
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->curHeldTool) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
        }
        actStep = 2;
    }
}

void NpcActionCtrl::act0DStep2(NpcActor *c) {
    using namespace nL;
    if (!HandOverItem_IsActive()) {
        _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        actStep = 5;
    }
}

void NpcActionCtrl::act0DStep3(NpcActor *c) {
    using namespace nL;
    if ((((u32)c->model.curFrame << 4) >> 16) == 0x17) {
        HandOverItem_RequestMode(2, c);
        actStep = 4;
    }
}

void NpcActionCtrl::act0DStep4(NpcActor *c) {
    using namespace nL;
    if (!HandOverItem_IsModeActive(1)) {
        NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
        HandOverItem_SetNextMode(9, c);
        if (HandOverItem_SwitchMaster((void *)d->handOverPartner)) {
            if (PlayerActor_LocalRequestAct37()) {
                actStep = 2;
            }
        }
    } else if ((((u32)c->model.curFrame << 4) >> 16) == 8) {
        Snd_SeEmitterPlayOneShotAlt(&c->seEmitter, 0x63, 0x7f, 0);
    }
}

namespace nZ {
extern "C" {
void *data_020d7454[2] = {(void *)_ZN13NpcActionCtrl10act0DStep1EP8NpcActor, 0};
void *data_020d714c[2] = {(void *)_ZN13NpcActionCtrl10act0DStep3EP8NpcActor, 0};
const u16 data_020c6d38[2] = {0x45, 0x2};
void *data_020d7104[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d710c[2] = {(void *)_ZN9NpcLookAt5relaxEv, 0};
void *data_020d7114[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
}
}

void NpcActionCtrl::mainAct0D(NpcActor *c) {
    using namespace nL;
    static Unk_02017d74_Fn tbl[5] = {*(Unk_02017d74_Fn *)data_020d745c, *(Unk_02017d74_Fn *)data_020d7454, *(Unk_02017d74_Fn *)data_020d744c, *(Unk_02017d74_Fn *)data_020d714c, *(Unk_02017d74_Fn *)data_020d711c};
    if (actStep < 5) {
        (this->*tbl[actStep])(c);
    }
}

void NpcActionCtrl::postAct0D(NpcActor *c) {
    using namespace nL;
}

BOOL NpcActionCtrl::setupAct0E(NpcActor *c) {
    using namespace nL;
    NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 0, 0, d->blendFrames);
    _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(&c->unk_3aa, -2);
    if (d->handOverVariant == 1) {
        PlayerActor_LocalRequestAct36(&d->item, &d->handOverKind, &d->handOverMode, &d->handOverVariant, c);
        actStep = 0xd;
    } else {
        PlayerActor_RequestAct30(&d->item, &d->handOverKind, &d->handOverMode, &d->handOverVariant, c);
        actStep = 0;
    }
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return TRUE;
}

void NpcActionCtrl::act0EStep00(NpcActor *c) {
    using namespace nL;
    if (HandOverItem_IsModeActive(2)) {
        NpcActionParams *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
        if (Unk_02017d74_Is((u16 *)((u8 *)c + 0xea), 0xd00c) || HandOverItem_CanTake(c)) {
            u16 v = data_020c6cc8;
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x25, data_020c6cc8, 1, 0x1000, 0, 0);
            if (c->curHeldTool) {
                _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
            }
            actStep = 2;
        } else if (Unk_02017d74_Is(&d->item, 0x1565) && d->handOverKind == 0 && (Scene_GetCurrent() == 9 || Scene_GetCurrent() == 0x10)) {
            if (HandOverItem_SwitchMaster(c)) {
                u16 v = data_020c6cc8;
                _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x25, data_020c6cc8, 1, 0x1000, 0, 0);
                if (c->curHeldTool) {
                    _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
                }
                actStep = 2;
            }
        } else {
            Unk_02017d74_Buf buf;
            if (HandOverItem_GetPos(&buf)) {
                buf.b = 0;
                _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, &buf);
                _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, &buf);
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 1, 0, data_020c6cc8);
                actStep = 1;
            }
        }
    }
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep01EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (HandOverItem_CanTake(c)) {
        u16 v = data_020c6cc8;
        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&c->moveCtrl, c, 0, 0, v);
        _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&c->moveCtrl, gVec3Zero);
        _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&c->moveCtrl, gVec3Zero);
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x25, v, 1, 0x1000, 0, 0);
        if (c->curHeldTool) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
        }
        s->actStep = 2;
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep02EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        if (HandOverItem_SwitchMaster(c)) {
            if (HandOverItem_RequestMode(3, c)) {
                s->actStep = 3;
            }
        }
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep03EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (!HandOverItem_IsModeActive(3)) {
        if (HandOverItem_RequestMode(4, c)) {
            u16 v = data_020c6cc8;
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x26, data_020c6cc8, 1, 0x1000, 0, 0);
            if (c->curHeldTool) {
                _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
            }
            s->actStep = 4;
        }
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep04EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    s16 t;
    s32 v[3];
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        switch (HandOverItem_GetNextMode()) {
        case 6:
            HandOverItem_End(c);
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x28, data_020c6cc8, 1, 0x1000, 0, 0);
            Effect_PlayById2(0x61, (u8 *)c + 0x5c, 0, 0);
            Snd_SeEmitterPlayOneShotAlt(&c->seEmitter, 0x76, 0x7f, 0);
            s->actStep = 6;
            break;
        case 7:
            if (HandOverItem_RequestMode(7, c)) {
                _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x26, data_020c6cc8, 3, 0x1000, 0, 0);
                s->actStep = 7;
            }
            break;
        case 5:
            if (HandOverItem_RequestMode(5, c)) {
                _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x27, data_020c6cc8, 1, 0x1000, 0, 0);
                Snd_SeEmitterPlayOneShotAlt(&c->seEmitter, 0x4f, 0x7f, 0);
                s->actStep = 5;
            }
            break;
        case 10:
            if (HandOverItem_RequestMode(10, c)) {
                _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
                _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x139, 0, 0, 0x1000, 0, 1);
                ThreeLayerAnimModel_AssignJointsToLayer2((u8 *)c + 0xec, 9, 14);
                _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
                s->actStep = 0x14;
            }
            break;
        case 11:
            if (HandOverItem_RequestMode(11, c)) {
                v[0] = c->jointPos[0].x;
                v[1] = c->jointPos[0].y;
                v[2] = c->jointPos[0].z;
                t = c->rotY;
                _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x29, data_020c6cc8, 1, 0x1000, 0, 0);
                s->itemEffect = Effect_Create(0x40, v, &t, 0);
                s->actStep = 0xb;
            }
            break;
        case 8:
        case 9:
        default:
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x24, data_020c6cc8, 0, 0x1000, 0, 0);
            _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
            s->actStep = 0x14;
            break;
        }
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep05EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->curHeldTool) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
        }
        HandOverItem_End(c);
        if (s->itemEffect != -1) {
            Effect_End(s->itemEffect);
        }
        _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
        s->actStep = 0x14;
    } else if (s->itemEffect != -1) {
        Effect_SetPosition(s->itemEffect, &c->jointPos[0], &c->rotY, 0);
    }
}
}

namespace nK {
extern "C" BOOL _ZN13NpcActionCtrl15waitItemAnimEndEP12Unk_02006d14Ptjj(NpcActionCtrl *s, NpcActor *c, void *p, u32 a, u8 b) {
    if (a == (u32)_ZN11NpcAnimCtrl9getAnimIdEj(&c->animCtrl, 0)) {
        if (nK2::_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl, c)) {
            u16 v = data_020c6cc8;
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
            if (c->curHeldTool) {
                _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
            }
            return TRUE;
        } else {
            switch (((u32)c->model.curFrame << 4) >> 16) {
            case 8:
                c->setShirt((u16 *)p, b);
                break;
            case 0xd:
                Effect_Create(0x22, (u8 *)c + 0x5c, 0, 0);
                break;
            case 3: {
                s16 t = c->rotY;
                Effect_Create(0x28, (u8 *)c + 0x490, &t, 0);
                Effect_Create(0x28, (u8 *)c + 0x484, &t, 0);
                break;
            }
            }
        }
    }
    return FALSE;
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep06EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    void *r = _ZN13NpcActionCtrl12getCurParamsEv(s);
    if (_ZN13NpcActionCtrl15waitItemAnimEndEP12Unk_02006d14Ptjj(s, c, (u8 *)r + 0x22, 0x28, 1)) {
        _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
        s->actStep = 0x14;
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep07EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        if (PlayerActor_RequestAct32()) {
            u16 v = data_020c6cc8;
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x23, data_020c6cc8, 0, 0x1000, 0, 0);
            if (c->curHeldTool) {
                _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
            }
            s->actStep = 8;
        }
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep08EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (!HandOverItem_IsMaster(c)) {
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->curHeldTool) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
        }
        s->actStep = 9;
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep09EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (!HandOverItem_IsActive()) {
        _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
        s->actStep = 0x14;
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep10EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if ((((u32)c->model.curFrame << 4) >> 16) == 0) {
        _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
        s->actStep = 0x14;
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep11EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x2a, 0, 1, 0x1000, 0, 0);
        if (s->itemEffect != -1) {
            Effect_End(s->itemEffect);
        }
        s->actStep = 0xc;
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep12EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->curHeldTool) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->curHeldTool, v, 0);
        }
        HandOverItem_End(c);
        _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
        s->actStep = 0x14;
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep13EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (HandOverItem_IsModeActive(1)) {
        s->actStep = 0xe;
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep14EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (!HandOverItem_IsModeActive(1)) {
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x2c, data_020c6cc8, 1, 0x1000, 0, 0);
        s->actStep = 0xf;
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep15EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        if (HandOverItem_SwitchMaster(c)) {
            if (HandOverItem_RequestMode(3, c)) {
                s->actStep = 0x10;
            }
        }
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep16EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (!HandOverItem_IsModeActive(3)) {
        if (HandOverItem_RequestMode(4, c)) {
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x2d, data_020c6cc8, 1, 0x1000, 0, 0);
            s->actStep = 0x11;
        }
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep17EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        u32 r = HandOverItem_GetNextMode();
        switch (r) {
        case 7:
            if (HandOverItem_RequestMode(7, c)) {
                _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x2d, data_020c6cc8, 3, 0x1000, 0, 0);
                s->actStep = 0x12;
            }
            break;
        case 5:
            if (HandOverItem_RequestMode(5, c)) {
                _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x2e, data_020c6cc8, 1, 0x1000, 0, 0);
                Snd_SeEmitterPlayOneShotAlt(&c->seEmitter, 0x4f, 0x7f, 0);
                s->actStep = 5;
            }
            break;
        default:
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0x24, data_020c6cc8, 0, 0x1000, 0, 0);
            _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
            s->actStep = 0x14;
            break;
        }
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep18EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&c->animCtrl)) {
        if (HandOverItem_RequestMode(2, c)) {
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&c->animCtrl, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
            s->actStep = 0x13;
        }
    }
}
}

namespace nK {
extern "C" void _ZN13NpcActionCtrl11act0EStep19EP12Unk_02006d14(NpcActionCtrl *s, NpcActor *c) {
    void *r = _ZN13NpcActionCtrl12getCurParamsEv(s);
    if (!HandOverItem_IsModeActive(2)) {
        HandOverItem_SetNextMode(9, c);
        if (HandOverItem_SwitchMaster(*(void **)((u8 *)r + 0x28))) {
            if (PlayerActor_LocalRequestAct37()) {
                s->actStep = 9;
            }
        }
    }
}
}

namespace nZ {
extern "C" {
const u32 sNpcMoveModeTable[25] = {0x0, 0x100, 0x0, 0x100, 0x0, 0x1, 0x200, 0x1, 0x100, 0x1, 0x2, 0x400, 0x2, 0x400, 0x1, 0x1, 0x800, 0x0, 0x100, 0x1, 0x0, 0x100, 0x1, 0x100, 0x0};
void *data_020d7414[2] = {(void *)_ZN13NpcActionCtrl11act0EStep03EP12Unk_02006d14, 0};
void *data_020d740c[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d7404[2] = {(void *)_ZN16ActorTalkRequest12taskGiveItemEv, 0};
void *data_020d73fc[2] = {(void *)_ZN13NpcActionCtrl11act0EStep06EP12Unk_02006d14, 0};
void *data_020d717c[2] = {(void *)_ZN16ActorTalkRequest11eatItemWaitEv, 0};
void *data_020d73ec[2] = {(void *)_ZN13NpcActionCtrl11act0EStep08EP12Unk_02006d14, 0};
void *data_020d723c[2] = {(void *)_ZN11NpcTalkCtrl11setupState1EP8NpcActor, 0};
void *data_020d73dc[2] = {(void *)_ZN13NpcActionCtrl11act0EStep10EP12Unk_02006d14, 0};
void *data_020d7244[2] = {(void *)VillagerRoute_PickOtherHouseBlock, 0};
void *data_020d73cc[2] = {(void *)_ZN13NpcActionCtrl11act0EStep12EP12Unk_02006d14, 0};
void *data_020d73c4[2] = {(void *)_ZN13NpcActionCtrl11act0EStep13EP12Unk_02006d14, 0};
void *data_020d73bc[2] = {(void *)_ZN13NpcActionCtrl11act0EStep14EP12Unk_02006d14, 0};
const u16 data_020c6d14[2] = {0x48, 0x0};
void *data_020d73ac[2] = {(void *)_ZN13NpcActionCtrl11act0EStep16EP12Unk_02006d14, 0};
void *data_020d73a4[2] = {(void *)_ZN13NpcActionCtrl11act0EStep17EP12Unk_02006d14, 0};
void *data_020d739c[2] = {(void *)_ZN13NpcActionCtrl11act0EStep18EP12Unk_02006d14, 0};
void *data_020d7394[2] = {(void *)_ZN13NpcActionCtrl11act0EStep19EP12Unk_02006d14, 0};
void *data_020d7294[2] = {(void *)_ZN11NpcTalkCtrl10mainState3EP8NpcActor, 0};
const u16 data_020c6d30[2] = {0x63, 0x0};
void *data_020d737c[2] = {(void *)_ZN13NpcActionCtrl10act11Step0EP12Unk_02006d14, 0};
void *data_020d7374[2] = {(void *)_ZN13NpcActionCtrl10act11Step1EP12Unk_02006d14, 0};
void *data_020d736c[2] = {(void *)_ZN13NpcActionCtrl10act11Step2Ev, 0};
void *data_020d72b4[2] = {(void *)_ZN13NpcActionCtrl10act12Step1Ev, 0};
void *data_020d735c[2] = {(void *)_ZN16ActorTalkRequest12taskSubSceneEv, 0};
}
}

void NpcActionCtrl::mainAct0E(Unk_02006d14 *o) {
    using namespace nJ;
    static void (NpcActionCtrl::*tbl[20])(Unk_02006d14 *) = {*(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d742c, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d7424, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d741c, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d7414, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d7184, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d719c, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73fc, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d721c, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73ec, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73e4, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73dc, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73d4, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73cc, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73c4, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73bc, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73b4, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73ac, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d73a4, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d739c, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d7394};
    if (actStep < 20) {
        (this->*tbl[actStep])(o);
    }
}

void NpcActionCtrl::postAct0E() {
    using namespace nJ;
}

BOOL NpcActionCtrl::setupAct0F(Unk_02006d14 *o) {
    using namespace nJ;
    NpcActionParams *s = nJ::_ZN13NpcActionCtrl12getCurParamsEv(this);
    u16 v;
    HandOverItem_GetItem(&v);
    s->item = v;
    if (HandOverItem_IsActive()) {
        HandOverItem_End(o);
    }
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&o->animCtrl, o, 0x28, data_020c6cc8, 1, 0x1000, 0, 0);
    Effect_PlayById2(0x61, &o->position, 0, 0);
    Snd_SeEmitterPlayOneShotAlt(&o->seEmitter, 0x76, 0x7f, 0);
    nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    netAction = 0x14;
    netPriority = priority;
    nJ::NpcAction_PackItem(this, netArgs, &s->item);
    return TRUE;
}

void NpcActionCtrl::postAct0F(Unk_02006d14 *o) {
    using namespace nJ;
    NpcActionParams *s = nJ::_ZN13NpcActionCtrl12getCurParamsEv(this);
    if (waitItemAnimEnd(o, &s->item, 0x28, 1)) {
        nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

BOOL NpcActionCtrl::setupAct10(Unk_02006d14 *o) {
    using namespace nJ;
    if (HandOverItem_IsActive()) {
        if (HandOverItem_RequestMode(5, o)) {
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&o->animCtrl, o, 0x27, data_020c6cc8, 1, 0x1000, 0, 0);
            Snd_SeEmitterPlayOneShotAlt(&o->seEmitter, 0x4f, 0x7f, 0);
            if (_ZN11NpcAnimCtrl9getAnimIdEj(&o->animCtrl, 1) == 0x139) {
                _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(&o->unk_ec, 0, 0);
            }
            nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
        }
    }
    return TRUE;
}

void NpcActionCtrl::postAct10(Unk_02006d14 *o) {
    using namespace nJ;
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&o->animCtrl)) {
        HandOverItem_End(o);
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&o->animCtrl, o, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

BOOL NpcActionCtrl::setupAct11(Unk_02006d14 *o) {
    using namespace nJ;
    if (HandOverItem_IsActive()) {
        if (HandOverItem_RequestMode(7, o)) {
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&o->animCtrl, o, 0x26, data_020c6cc8, 3, 0x1000, 0, 0);
            if (_ZN11NpcAnimCtrl9getAnimIdEj(&o->animCtrl, 1) == 0x139) {
                _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(&o->unk_ec, 0, 0);
            }
            HandOverItem_SetNextMode(5, o);
            nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
        }
    }
    return TRUE;
}

void NpcActionCtrl::act11Step0(Unk_02006d14 *o) {
    using namespace nJ;
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&o->animCtrl)) {
        if (PlayerActor_RequestAct32()) {
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&o->animCtrl, o, 0x23, data_020c6cc8, 0, 0x1000, 0, 0);
            actStep = 1;
        }
    }
}

void NpcActionCtrl::act11Step1(Unk_02006d14 *o) {
    using namespace nJ;
    if (!HandOverItem_IsMaster(o)) {
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&o->animCtrl, o, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        actStep = 2;
    }
}

void NpcActionCtrl::act11Step2() {
    using namespace nJ;
    if (!HandOverItem_IsActive()) {
        nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        actStep = 3;
    }
}

namespace nZ {
extern "C" {
void *data_020d7344[2] = {(void *)_ZN11NpcTalkCtrl11state2Step0EP8NpcActor, 0};
void *data_020d733c[2] = {(void *)_ZN9NpcLookAt17lookAtLocalPlayerEP9Character, 0};
void *data_020d72d4[2] = {(void *)_ZN13VillagerRoute13stepAlongPathEP7VecFx32, 0};
void *data_020d732c[2] = {(void *)_ZN13VillagerRoute10isAtDoorT3EP7VecFx32, 0};
}
}

void NpcActionCtrl::mainAct11(Unk_02006d14 *o) {
    using namespace nJ;
    static void (NpcActionCtrl::*tbl[3])(Unk_02006d14 *) = {*(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d737c, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d7374, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d736c};
    if (actStep < 3) {
        (this->*tbl[actStep])(o);
    }
}

BOOL NpcActionCtrl::setupAct12(Unk_02006d14 *o) {
    using namespace nJ;
    if (HandOverItem_IsActive()) {
        if (HandOverItem_RequestMode(8, o)) {
            HandOverItem_SetNextMode(8, o);
            actStep = 0;
            nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
            PlayerActor_PlayLocalSe(0x72);
        }
    }
    return TRUE;
}

void NpcActionCtrl::act12Step0() {
    using namespace nJ;
    if (HandOverItem_IsModeActive(8) != 0) {
        actStep = 1;
    }
}

void NpcActionCtrl::act12Step1() {
    using namespace nJ;
    if (HandOverItem_IsModeActive(8) == 0) {
        actStep = 2;
        nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

namespace nZ {
extern "C" {
void *data_020d730c[2] = {(void *)_ZN13NpcActionCtrl9mainAct03EP8NpcActor, 0};
void *data_020d7324[2] = {(void *)_ZN13NpcActionCtrl10act15Step0EP8NpcActor, 0};
void *data_020d7364[2] = {(void *)_ZN11NpcTalkCtrl11setupState4EP8NpcActor, 0};
}
}

void NpcActionCtrl::mainAct12(Unk_02006d14 *o) {
    using namespace nJ;
    static void (NpcActionCtrl::*tbl[2])(Unk_02006d14 *) = {*(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d7354, *(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d72b4};
    if (actStep < 2) {
        (this->*tbl[actStep])(o);
    }
}

BOOL NpcActionCtrl::setupAct13(Unk_02006d14 *o) {
    using namespace nJ;
    s32 v[3];
    s16 ang;
    v[0] = o->headTopPosX;
    v[1] = o->headTopPosY;
    v[2] = o->headTopPosZ;
    ang = o->rotY;
    HandOverItem_RequestMode(0xb, o);
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&o->animCtrl, o, 0x29, data_020c6cc8, 1, 0x1000, 0, 0);
    itemEffect = Effect_Create(0x40, v, &ang, 0);
    Snd_SeEmitterPlayOneShotAlt(&o->seEmitter, 0x6f, 0x7f, 0);
    nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return TRUE;
}

void NpcActionCtrl::act13Step0(Unk_02006d14 *o) {
    using namespace nJ;
    if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&o->animCtrl)) {
        _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&o->animCtrl, o, 0x2a, 0, 1, 0x1000, 0, 0);
        if (itemEffect != -1) {
            Effect_End(itemEffect);
        }
        actStep = 1;
    } else {
        if (itemEffect != -1) {
            Effect_SetPosition(itemEffect, &o->headTopPosX, &o->rotY, 0);
        }
    }
}

void NpcActionCtrl::mainAct13(Unk_02006d14 *o) {
    using namespace nJ;
    static void (NpcActionCtrl::*tbl[1])(Unk_02006d14 *) = {*(void (NpcActionCtrl::**)(Unk_02006d14 *))data_020d72ec};
    if (actStep < 1) {
        (this->*tbl[actStep])(o);
    }
}

void NpcActionCtrl::postAct13(Unk_02006d14 *o) {
    using namespace nJ;
    if (_ZN11NpcAnimCtrl9getAnimIdEj(&o->animCtrl, 0) == 0x2a) {
        if (_ZN11NpcAnimCtrl14isAnimFinishedEP8NpcActor(&o->animCtrl, o)) {
            HandOverItem_End(o);
            _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&o->animCtrl, o, 0, data_020c6cc8, 0, 0x1000, 0, 0);
            nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        }
    }
}

s32 NpcActionCtrl::requestAct14(s32 a, u16 *p) {
    using namespace nJ;
    s32 r = 0;
    if (a >= pendingPriority || pendingPriority == 3) {
        NpcActionParams *q = &pendingParams;
        nJ::_ZN13NpcActionCtrl16setPendingActionEii(this, 0x14, a);
        _ZN15NpcActionParams5clearEv(q);
        q->item = *p;
        r = 1;
    }
    return r;
}

BOOL NpcActionCtrl::setupAct14(Unk_02006d14 *o) {
    using namespace nJ;
    nJ::_ZN13NpcActionCtrl12getCurParamsEv(this);
    u16 t = data_020c6cc8;
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(&o->animCtrl, o, 6, data_020c6cc8, 1, 0x1000, 0, 0);
    if (o->curHeldTool) {
        _ZN13HeldToolModel12playIdleAnimEjj(o->curHeldTool, t, 0);
    }
    Effect_PlayById2(0x61, &o->position, 0, 0);
    Snd_SeEmitterPlayOneShotAlt(&o->seEmitter, 0x76, 0x7f, 0);
    nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return TRUE;
}

BOOL NpcActionCtrl::postAct14(Unk_02006d14 *o) {
    using namespace nJ;
    NpcActionParams *s = nJ::_ZN13NpcActionCtrl12getCurParamsEv(this);
    if (waitItemAnimEnd(o, &s->item, 6, 0)) {
        nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

BOOL NpcActionCtrl::setupAct15(Unk_02006d14 *o) {
    using namespace nJ;
    s32 v[3];
    s16 ang;
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    ang = o->rotY;
    if (_ZN8NpcActor15netReadPositionEPiPh(o, v, &ang)) {
        s32 dx = v[0] - o->position;
        s32 dz = v[2] - o->positionZ;
        s32 d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            if (ang != o->rotY) {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 3, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
                actStep = 2;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 0, 0, data_020c6cc8);
                actStep = 0;
            }
            _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, gVec3Zero);
            _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, gVec3Zero);
        } else {
            s32 a = Math_Atan2(dx, dz);
            if (NpcActor_IsFrontAngle((s16)(a - ang))) {
                if (netMoveMode == 2) {
                    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 2, 0, data_020c6cc8);
                } else {
                    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 1, 0, data_020c6cc8);
                }
                actStep = 1;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 4, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, a);
                actStep = 3;
            }
            _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, v);
            _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, v);
        }
    } else {
        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 0, 0, data_020c6cc8);
        _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, gVec3Zero);
        _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, gVec3Zero);
        actStep = 0;
    }
    return TRUE;
}

void NpcActionCtrl::act15Step0(NpcActor *o) {
    using namespace nI;
    VecFx32 pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->rotY;
    if (_ZN8NpcActor15netReadPositionEPiPh(o, &pos, &ang)) {
        dx = pos.x - o->position.x;
        dz = pos.z - o->position.z;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            if (ang != o->rotY) {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 3, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
                actStep = 2;
            } else if (_ZN11NpcMoveCtrl11getMoveModeEv(&o->moveCtrl)) {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 0, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, &gVec3Zero);
                _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, &gVec3Zero);
            }
        } else {
            s32 a = Math_Atan2(dx, dz);
            if (NpcActor_IsFrontAngle(a - ang)) {
                if (netMoveMode == 2) {
                    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 2, 0, data_020c6cc8);
                } else {
                    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 1, 0, data_020c6cc8);
                }
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
                actStep = 1;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 4, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, a);
                actStep = 3;
            }
            _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, &pos);
            _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, &pos);
        }
    }
}

void NpcActionCtrl::act15Step1(NpcActor *o) {
    using namespace nI;
    VecFx32 pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->rotY;
    _ZN11NpcMoveCtrl16aimAtDestinationEP9Character(&o->moveCtrl, o);
    if (_ZN8NpcActor15netReadPositionEPiPh(o, &pos, &ang)) {
        dx = pos.x - o->position.x;
        dz = pos.z - o->position.z;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            if (ang != o->rotY) {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 3, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
                actStep = 2;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 0, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
                _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, &gVec3Zero);
                _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, &gVec3Zero);
                actStep = 0;
            }
        } else {
            if (!NpcActor_IsFrontAngle(Math_Atan2(dx, dz) - ang)) {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 3, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
                actStep = 2;
            } else {
                if (_ZN11NpcMoveCtrl11getMoveModeEv(&o->moveCtrl) == 1) {
                    if (netMoveMode == 2) {
                        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 2, 0, data_020c6cc8);
                    }
                } else if (_ZN11NpcMoveCtrl11getMoveModeEv(&o->moveCtrl) == 2) {
                    if (netMoveMode == 1) {
                        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 1, 0, data_020c6cc8);
                    }
                }
                _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, &pos);
                _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, &pos);
            }
        }
    } else {
        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 0, 0, data_020c6cc8);
        _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
        _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, &gVec3Zero);
        _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, &gVec3Zero);
        actStep = 0;
    }
}

void NpcActionCtrl::act15Step2(NpcActor *o) {
    using namespace nI;
    VecFx32 pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->rotY;
    if (_ZN8NpcActor15netReadPositionEPiPh(o, &pos, &ang)) {
        dx = pos.x - o->position.x;
        dz = pos.z - o->position.z;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            s16 a = ang;
            if (a != _ZN11NpcMoveCtrl14getTargetAngleEv(&o->moveCtrl)) {
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, a);
            } else {
                s32 c = _ZN11NpcMoveCtrl14getTargetAngleEv(&o->moveCtrl);
                if (c == o->rotY) actStep = 0;
            }
        } else {
            s32 a = Math_Atan2(dx, dz);
            if (NpcActor_IsFrontAngle(a - ang)) {
                if (netMoveMode == 2) {
                    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 2, 0, data_020c6cc8);
                } else {
                    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 1, 0, data_020c6cc8);
                }
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
                actStep = 1;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 4, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, a);
                actStep = 3;
            }
            _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, &pos);
            _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, &pos);
        }
    } else {
        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 0, 0, data_020c6cc8);
        _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
        _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, &gVec3Zero);
        _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, &gVec3Zero);
        actStep = 0;
    }
}

void NpcActionCtrl::act15Step3(NpcActor *o) {
    using namespace nI;
    VecFx32 pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->rotY;
    _ZN11NpcMoveCtrl16aimAtDestinationEP9Character(&o->moveCtrl, o);
    if (_ZN8NpcActor15netReadPositionEPiPh(o, &pos, &ang)) {
        dx = pos.x - o->position.x;
        dz = pos.z - o->position.z;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d == 0) {
            o->moveAngleY = o->rotY;
            if (ang != o->rotY) {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 3, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
                actStep = 2;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 0, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
                _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, &gVec3Zero);
                _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, &gVec3Zero);
                actStep = 0;
            }
        } else if (d >= 0x29) {
            s32 a = Math_Atan2(dx, dz);
            if (NpcActor_IsFrontAngle(a - ang)) {
                if (netMoveMode == 2) {
                    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 2, 0, data_020c6cc8);
                } else {
                    _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 1, 0, data_020c6cc8);
                }
                o->moveAngleY = o->rotY;
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
                actStep = 1;
            } else {
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, a);
            }
            _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, &pos);
            _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, &pos);
        }
    } else {
        _ZN11NpcMoveCtrl11setMoveModeEP9Characterist(&o->moveCtrl, o, 0, 0, data_020c6cc8);
        _ZN11NpcMoveCtrl14setTargetAngleEs(&o->moveCtrl, ang);
        _ZN11NpcMoveCtrl11setWaypointEP7VecFx32(&o->moveCtrl, &gVec3Zero);
        _ZN11NpcMoveCtrl14setDestinationEP7VecFx32(&o->moveCtrl, &gVec3Zero);
        actStep = 0;
    }
}

namespace nZ {
extern "C" {
void *data_020d7434[2] = {(void *)_ZN16ActorTalkRequest18switchSpeakerCloseEv, 0};
void *data_020d7444[2] = {(void *)_ZN16ActorTalkRequest12taskTakeItemEv, 0};
void *data_020d745c[2] = {(void *)_ZN13NpcActionCtrl10act0DStep0EP8NpcActor, 0};
}
}

void NpcActionCtrl::mainAct15(NpcActor *o) {
    using namespace nI;
    static Unk_02016360_Fn tbl[4] = {*(Unk_02016360_Fn *)data_020d7324, *(Unk_02016360_Fn *)data_020d755c, *(Unk_02016360_Fn *)data_020d75ac, *(Unk_02016360_Fn *)data_020d72f4};
    if (actStep < 4) {
        (this->*tbl[actStep])(o);
    }
}

NpcAnimCtrl::NpcAnimCtrl() {
    using namespace nI;
    _ZN17NpcBodyAnimHandleC1Ev(this);
}

NpcAnimCtrl::~NpcAnimCtrl() {
    using namespace nI;
    _ZN17NpcBodyAnimHandleD1Ev(this);
}

BOOL NpcAnimCtrl::initForActor(NpcActor *o, s32 a) {
    using namespace nI;
    _ZN11NpcAnimCtrl17setAnimSpeedFixedEh(this, 0);
    animSpeedScale = a;
    if (!_ZN12NpcResHandle7acquireEv(this)) return FALSE;
    playAnim(o, 0, 0, 0, 0x1000, 0, 0);
    _ZN9AnimModel10attachAnimEv(&o->model);
    _ZN5Model11setCallbackEiiiii(&o->model, (void *)NpcActor_JointCalcLayer3Cb, 6, 1, o, 0);
    talkGestureVariant = 2;
    if (!_ZN11NpcAnimCtrl14hasTalkGestureEv(this)) _ZN11NpcAnimCtrl15loadTalkGestureEv(this);
    talkGestureActive = 0;
    return TRUE;
}

void *NpcAnimCtrl::getAnimResource(s32 a, s32 b) {
    using namespace nI;
    void *p = _ZN12NpcResHandle16getBodyAnimLayerEj(this, b);
    void *r = 0;
    if (p) {
        AnimSlotRef_Load(p, a, 0, 0);
        void *q = AnimSlotRef_GetData(p);
        q = func_021065dc(q);
        r = func_021065f8(q, 0);
    }
    return r;
}

s32 NpcAnimCtrl::resolveAnimId(s32 mode, void *p) {
    using namespace nI;
    switch (mode) {
    case 0:
        mode = _ZN14NpcMoveAnimSet12getStandAnimEv(p);
        break;
    case 1:
        mode = _ZN14NpcMoveAnimSet11getWalkAnimEv(p);
        break;
    case 2:
        mode = _ZN14NpcMoveAnimSet10getRunAnimEv(p);
        break;
    }
    return mode;
}

BOOL NpcAnimCtrl::isPlayingAnim(s32 mode, void *p) {
    using namespace nI;
    s32 a = resolveAnimId(mode, p);
    s32 b = _ZN11NpcAnimCtrl9getAnimIdEj(this, 0);
    if (a == b) return TRUE;
    return FALSE;
}

void NpcAnimCtrl::playAnim(NpcActor *o, s32 kind, s32 a3, s32 a4, s32 a5, u16 a6, s32 mode) {
    using namespace nI;
    u32 v;
    if (a6 == 0) {
        switch (a4) {
        case 2:
        case 3:
            v = 0xffff;
            goto vdone;
        }
    }
    v = a6;
vdone:
    if (mode >= 0 && mode < 3)
    switch (mode) {
    case 0: {
        s32 size = resolveAnimId(kind, &o->moveAnimSet);
        if (size != _ZN14NpcMoveAnimSet12getStandAnimEv(&o->moveAnimSet) || !isPlayingAnim(size, &o->moveAnimSet)) {
            void *r = getAnimResource(size, mode);
            if (r) {
                BlendAnimModel_Play2(&o->model, r, a3, a4, a5, v, 0);
            }
        }
        _ZN11NpcAnimCtrl13syncMouthTypeEP8NpcActor(this, o);
        s32 t = _ZN11NpcAnimCtrl9getAnimIdEj(this, 0);
        s32 u = _ZN14NpcSpeechState12getMouthTypeEv(&o->speechState);
        _ZN11NpcFaceAnim16setFaceAnimsFromEPvii(&o->faceAnim, t, a4, u);
        break;
    }
    case 1: {
        void *r = getAnimResource(kind, mode);
        if (r) {
            _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(&o->model, r, a3, a4, a5, v, 0, 0);
        }
        break;
    }
    case 2: {
        void *r = getAnimResource(kind, mode);
        if (r) {
            _ZN19ThreeLayerAnimModel10playLayer3Ejjjjjji(&o->model, r, a3, a4, a5, v, 0, 0);
        }
        break;
    }
    }
}

void NpcAnimCtrl::playHoldItemPose(NpcActor *o, u16 *p, void *q, u16 x) {
    using namespace nI;
    if (Item_IsHoldable(p)) {
        if (CharaAnim_GetHoldPoseMode(q) != 3) {
            if (Unk_02015fe0_R(p, 0x1369, 0x1369)) {
                void *r = getAnimResource(0x13f, 1);
                if (r) {
                    _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(&o->model, r, x, 0, 0x1000, 0, 0, 0);
                    ThreeLayerAnimModel_AssignJointsToLayer2(&o->model, 0xc, 0xe);
                }
            } else {
                s32 id = HeldItem_GetHandPose(p);
                if (id != 0x144) {
                    void *r = getAnimResource(id, 1);
                    if (r) {
                        _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(&o->model, r, x, 0, 0x1000, 0, 0, 0);
                        s32 t = CharaAnim_GetJointGroup(id);
                        if (t < 4) {
                            u32 n = JointGroup_GetRangeCount();
                            for (u32 i = 0; i < n; i++) {
                                s32 a = JointGroup_GetRangeFirst(t, i);
                                ThreeLayerAnimModel_AssignJointsToLayer2(&o->model, a, JointGroup_GetRangeLast(t, i));
                            }
                        } else {
                            _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(&o->model, 0, 0);
                        }
                    }
                } else {
                    _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(&o->model, 0, 0);
                }
            }
        } else {
            _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(&o->model, 0, 0);
        }
    } else {
        _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(&o->model, 0, 0);
    }
}

BOOL NpcAnimCtrl::hasTalkGesture() {
    using namespace nH;
    if (getAnimId(2) == 0x143) {
        return TRUE;
    }
    return FALSE;
}

void NpcAnimCtrl::loadTalkGesture() {
    using namespace nH;
    void *p = _ZN12NpcResHandle16getBodyAnimLayerEj(this, 2);
    if (p != NULL) {
        AnimSlotRef_Load(p, 0x143, 0, 0);
    }
}

u32 NpcAnimCtrl::getTalkGestureData() {
    using namespace nH;
    u32 r = 0;
    if (hasTalkGesture()) {
        void *p = _ZN12NpcResHandle16getBodyAnimLayerEj(this, 2);
        if (p != NULL) {
            r = func_021065f8(func_021065dc(AnimSlotRef_GetData(p)), r);
        }
    }
    return r;
}

void NpcAnimCtrl::playTalkGesture(NpcActor *scene, u32 a, u32 b) {
    using namespace nH;
    u32 r1 = getTalkGestureData();
    if (r1 != 0) {
        _ZN19ThreeLayerAnimModel10playLayer3Ejjjjjji(((void *)((u8 *)(scene) + (0xec))), r1, 0, 1, 0x1000, a, b, 0);
        s32 t = CharaAnim_GetJointGroup(0x143);
        if (t < 4) {
            u32 n = JointGroup_GetRangeCount();
            for (u32 i = 0; i < n; i++) {
                u32 x = JointGroup_GetRangeFirst(t, i);
                _ZN19ThreeLayerAnimModel20assignJointsToLayer3Ejj(((void *)((u8 *)(scene) + (0xec))), x, JointGroup_GetRangeLast(t, i));
            }
        } else {
            stopTalkGesture(scene);
        }
    } else {
        stopTalkGesture(scene);
    }
}

void NpcAnimCtrl::stopTalkGesture(NpcActor *scene) {
    using namespace nH;
    _ZN19ThreeLayerAnimModel18playLayer3FromBaseEjj(((void *)((u8 *)(scene) + (0xec))), 0, 0);
}

void NpcAnimCtrl::setAnimSpeedFixed(u8 v) {
    using namespace nH;
    animSpeedFixed = v;
}

void NpcAnimCtrl::playAnimKeepFrame(NpcActor *scene, u32 c, u32 d, u32 e) {
    using namespace nH;
    _ZN11NpcAnimCtrl8playAnimEP8NpcActoriiiiti(this, scene, c, d, 0, *(u32 *)((void *)((u8 *)(scene) + (0x198))), (*(u32 *)((void *)((u8 *)(scene) + (0x190))) << 4) >> 16, e);
}

BOOL NpcAnimCtrl::isAnimFinished(NpcActor *scene) {
    using namespace nH;
    if (_ZN13AnimFrameCtrl10isFinishedEv(((void *)((u8 *)(scene) + (0x188)))) != 0) {
        return TRUE;
    }
    return FALSE;
}

s32 NpcAnimCtrl::getAnimId(u32 idx) {
    using namespace nH;
    if (_ZN12NpcResHandle16getBodyAnimLayerEj(this, idx) != NULL) {
        return AnimSlotRef_GetAnimId(_ZN12NpcResHandle16getBodyAnimLayerEj(this, idx));
    }
    return 0x144;
}

void NpcAnimCtrl::updateAnimSpeed(NpcActor *scene) {
    using namespace nH;
    s32 v = *(s32 *)((void *)((u8 *)(scene) + (0x98)));
    if (v == 0) {
        animSpeed = 0x1000;
    } else if (*_ZN11NpcMoveCtrl17getCurSpeedPresetEv(((void *)((u8 *)(scene) + (0x350)))) == 0) {
        animSpeed = 0x1000;
    } else {
        animSpeed = func_01ffcb0c(v, animSpeedScale);
    }
    if (animSpeed <= *(s32 *)((void *)((u8 *)(scene) + (0x18c)))) {
        *(s32 *)((void *)((u8 *)(scene) + (0x198))) = animSpeed;
    }
}

s32 NpcAnimCtrl::getTalkGestureStart(u32 k) {
    using namespace nH;
    s32 r = 0;
    if (k == 1) {
        r = 6;
    }
    return r;
}

s32 NpcAnimCtrl::getTalkGestureEnd(u32 k) {
    using namespace nH;
    s32 r = 7;
    if (k == 1) {
        r = 0xc;
    }
    return r;
}

void NpcAnimCtrl::update(NpcActor *scene) {
    using namespace nH;
    if (hasTalkGesture()) {
        if (_ZN14NpcSpeechState12getMouthTypeEv(((void *)((u8 *)(scene) + (0x418)))) < 2) {
            if (_ZN14NpcSpeechState10isSpeakingEv(((void *)((u8 *)(scene) + (0x418))))) {
                if (talkGestureActive != 0) {
                    if (_ZN19ThreeLayerAnimModel19checkLayer3FinishedEv(((void *)((u8 *)(scene) + (0xec)))) == 0) {
                        goto tail;
                    }
                }
                talkGestureVariant = NpcFace_PickTalkMouth();
                s32 a = getTalkGestureStart(talkGestureVariant);
                s32 b = getTalkGestureEnd(talkGestureVariant);
                playTalkGesture(scene, a, b);
                talkGestureActive = 1;
            } else if (talkGestureActive == 1) {
                if (_ZN19ThreeLayerAnimModel19checkLayer3FinishedEv(((void *)((u8 *)(scene) + (0xec)))) != 0) {
                    stopTalkGesture(scene);
                    talkGestureActive = 0;
                }
            }
        } else if (talkGestureActive == 1) {
            stopTalkGesture(scene);
            talkGestureActive = 0;
        }
    }
tail:
    if (animSpeedFixed == 0) {
        updateAnimSpeed(scene);
    }
}

s32 NpcAnimCtrl::release() {
    using namespace nH;
    return _ZN12NpcResHandle7releaseEv(this);
}

void NpcAnimCtrl::syncMouthType(NpcActor *scene) {
    using namespace nH;
    s32 r = getAnimId(0);
    s32 k = 0;
    switch (r) {
    case 0x45:
    case 0x47:
    case 0x49:
    case 0x4b:
    case 0x4d:
    case 0x4f:
    case 0x51:
    case 0x53:
    case 0x55:
    case 0x57:
    case 0x59:
    case 0x5b:
    case 0x5d:
    case 0x5f:
    case 0x61:
    case 0x63:
    case 0x65:
    case 0x67:
    case 0x69:
    case 0x6e:
    case 0x70:
    case 0x72:
    case 0x75:
    case 0x77:
    case 0x79:
    case 0x7b:
    case 0x7c:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x84:
    case 0x86:
    case 0x88:
    case 0x8a:
    case 0x8c:
    case 0x8d:
    case 0x8f:
    case 0x91:
    case 0x93:
    case 0x94:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9c:
    case 0x9f:
    case 0xa1:
    case 0xa3:
    case 0xa5:
    case 0xa7:

    case 0x144:
        k = 2;
        break;
    case 0x46:
    case 0x48:
    case 0x4c:
    case 0x4e:
    case 0x50:
    case 0x52:
    case 0x54:
    case 0x56:
    case 0x5a:
    case 0x60:
    case 0x62:
    case 0x64:
    case 0x68:
    case 0x6c:
    case 0x6d:
    case 0x71:
    case 0x76:
    case 0x78:
    case 0x83:
    case 0x85:
    case 0x87:
    case 0x8b:
    case 0x96:
    case 0x9b:
    case 0x9d:
    case 0x9e:
    case 0xa0:
    case 0xa2:
    case 0xa4:
    case 0xa8:
    case 0xe6:
    case 0xea:
        k = 1;
        break;
    }
    _ZN14NpcSpeechState12setMouthTypeEi(((void *)((u8 *)(scene) + (0x418))), k);
}

ActorTalkRequest::ActorTalkRequest() {
    using namespace nH;
    subSceneItem = 0xfff1;
    talkPlayer = 0;
    ownerActor = NULL;
    partnerActor = NULL;
    lastEmotion = 0;
    taskId = 0xc;
    _ZN16ActorTalkRequest10resetTasksEv(this);
}

ActorTalkRequest::~ActorTalkRequest() {
    using namespace nH;
}

void ActorTalkRequest::resetMsg() {
    using namespace nH;
    TalkMsgRequest::resetMsg();
    talkPlayer = 0;
    partnerActor = NULL;
    actionActorIndex = 0;
    speakerIndex = 0;
    lastEmotion = 0;
    clearItemActionBusy();
    _ZN16ActorTalkRequest10resetTasksEv(this);
}

void ActorTalkRequest::update() {
    using namespace nH;
}

void ActorTalkRequest::tick() {
    using namespace nH;
    update();
    _ZN16ActorTalkRequest7runTaskEv(this);
}

void ActorTalkRequest::runDeferred() {
    using namespace nH;
}

void ActorTalkRequest::setTalkPlayer(u32 a) {
    using namespace nH;
    talkPlayer = a;
}

void *ActorTalkRequest::getTalkPlayer() {
    using namespace nH;
    return (void *)talkPlayer;
}

void ActorTalkRequest::setPartnerActor(NpcActor *p) {
    using namespace nH;
    partnerActor = p;
    if (partnerActor != NULL) {
        ActorTalkRequest *q = _ZN8NpcActor14getTalkRequestEv();
        if (q != NULL) {
            q->resetMsg();
            partnerActor->onJoinTalk();
        }
    }
}

NpcActor *ActorTalkRequest::getPartnerActor() {
    using namespace nH;
    return partnerActor;
}

void ActorTalkRequest::setOwnerActor(NpcActor *p) {
    using namespace nH;
    ownerActor = p;
}

ChoiceList *ActorTalkRequest::getChoiceList() {
    using namespace nH;
    ChoiceList *r = 0;
    if (window != 0) {
        r = (ChoiceList *)_ZN15TalkWindowState13getChoiceListEv((u32)window);
    }
    return r;
}

s32 ActorTalkRequest::getVoiceType() {
    using namespace nH;
    switch (speakerIndex) {
    case 0:
        if (ownerActor != NULL) {
            return Npc_GetVoiceType(((void *)((u8 *)(ownerActor) + (0xea))));
        }
        break;
    case 1:
        if (partnerActor != NULL) {
            return Npc_GetVoiceType(((void *)((u8 *)(partnerActor) + (0xea))));
        }
        break;
    }
    return 5;
}

void ActorTalkRequest::playEmotion(u32 a, u32 b) {
    using namespace nH;
    NpcActor *o = getActor(b);
    if (o != NULL) {
        ActorTalkRequest *p = _ZN8NpcActor14getTalkRequestEv();
        if (p != NULL) {
            if (!p->isItemActionBusy()) {
                if (p->lastEmotion == a) {
                    if (_ZN13NpcActionCtrl9getActionEv(((void *)((u8 *)(o) + (0x564)))) == 8) {
                        return;
                    }
                }
                _ZN13NpcActionCtrl14requestEmotionEiht(((void *)((u8 *)(o) + (0x564))), 2, a, data_020c6cc8);
                p->lastEmotion = a;
            }
        }
    }
}

void ActorTalkRequest::onEventTag(u32 a) {
    using namespace nH;
    playEmotion(a, actionActorIndex);
}

void ActorTalkRequest::setItemActionBusy() {
    using namespace nH;
    itemActionBusy = 1;
}

void ActorTalkRequest::clearItemActionBusy() {
    using namespace nH;
    itemActionBusy = 0;
}

BOOL ActorTalkRequest::isItemActionBusy() {
    using namespace nH;
    if (itemActionBusy == 1) {
        return TRUE;
    }
    return FALSE;
}

void ActorTalkRequest::setNumberSlot(s32 a, u32 b, s32 c, s32 d, s32 e) {
    using namespace nH;
    if (a >= 0) {
        MsgString25 loc;
        String_FormatNumber(&loc, a, c, d, e, 0);
        _ZN15TalkWindowState7setSlotEiPv(window, b, &loc);
    }
}

void ActorTalkRequest::setNumberNamedSlot(s32 a, u32 b, s32 c, u8 d, s32 e, s32 f) {
    using namespace nH;
    if (a >= 0) {
        MsgString25 loc;
        u32 flag = 7;
        String_FormatNumber(&loc, a, c, e, f, 0);
        if (d != 0) {
            MsgString33 str;
            u8 ch = 0x1c;
            String_Load(&str, &ch, ((u8 *)"st_general"));
            _ZN9MsgString12appendStringEPS_(&loc, &str);
            flag = 0;
        }
        _ZN15TalkWindowState12setNamedSlotEiPvj(window, b, &loc, flag);
    }
}

void ActorTalkRequest::setFixedPointSlot(s32 a, u32 b, s32 c) {
    using namespace nH;
    if (a >= 0) {
        MsgString25 local;
        String_FormatFixedPoint(&local, a, c);
        _ZN15TalkWindowState7setSlotEiPv(window, b, &local);
    }
}

void ActorTalkRequest::setMonthSlot(u32 a, u32 b) {
    using namespace nH;
    MsgString33 local;
    String_GetMonthName(&local, a);
    _ZN15TalkWindowState7setSlotEiPv(window, b, &local);
}

void ActorTalkRequest::setDaySlot(u32 a, u32 b) {
    using namespace nH;
    MsgString33 local;
    String_GetDayOrdinal(&local, a);
    _ZN15TalkWindowState7setSlotEiPv(window, b, &local);
}

void ActorTalkRequest::setTownNameSlot(u32 a, u32 b) {
    using namespace nH;
    MsgString9C local;
    TownId_GetNameString(a, &local);
    _ZN15TalkWindowState7setSlotEiPv(window, b, &local);
}

void ActorTalkRequest::setPlayerNameSlot(u32 a, u32 b) {
    using namespace nH;
    MsgString9B local;
    _ZN8PlayerId13getNameStringEP9MsgString(a, &local);
    _ZN15TalkWindowState7setSlotEiPv(window, b, &local);
}

void ActorTalkRequest::setVillagerNameSlot(u32 a, u32 b) {
    using namespace nH;
    MsgString9B local;
    _ZN10VillagerId7getNameEj(a, &local);
    _ZN15TalkWindowState7setSlotEiPv(window, b, &local);
}

void ActorTalkRequest::setItemNameSlot(u32 a, u32 b, u32 c) {
    using namespace nH;
    ItemName local((u16 *)a);
    _ZN15TalkWindowState12setNamedSlotEiPvj(window, b, &local, c);
}

void ActorTalkRequest::setSlotFromString(u32 a, u32 b, u32 c) {
    using namespace nH;
    _ZN15TalkWindowState17setSlotFromStringEiii(window, a, b, c);
}

void ActorTalkRequest::onConditionTag(u32 condition, u32 branchCount) {
    using namespace nH;
}

void ActorTalkRequest::onTag09_0() {
    using namespace nH;
    actionActorIndex = 2;
}

void ActorTalkRequest::onTag09_1() {
    using namespace nH;
    actionActorIndex = 0;
}

void ActorTalkRequest::onTag09_2() {
    using namespace nH;
    actionActorIndex = 1;
}

NpcActor *ActorTalkRequest::getActor(u32 idx) {
    using namespace nH;
    switch (idx) {
    case 0:
        return ownerActor;
    case 1:
        return partnerActor;
    }
    return NULL;
}

NpcActor *ActorTalkRequest::getActionActor() {
    using namespace nH;
    return getActor(actionActorIndex);
}

NpcActor *ActorTalkRequest::getActorB(u32 idx) {
    using namespace nH;
    switch (idx) {
    case 0:
        return ownerActor;
    case 1:
        return partnerActor;
    }
    return NULL;
}

NpcActor *ActorTalkRequest::getSpeakerActor() {
    using namespace nH;
    return getActorB(speakerIndex);
}

u8 ActorTalkRequest::getSpeakerIndex() {
    using namespace nH;
    return speakerIndex;
}

namespace nH {
extern "C" s32 TalkRequest_GetPlayerId(void) {
    if (Scene_GetCurrent() == 0x2f) {
        return Net_GetJoiningAid();
    }
    return PlayerActor_GetLocalSessionSlot();
}
}

void ActorTalkRequest::onTag09_3() {
    using namespace nH;
    NpcActor *p = getActor(actionActorIndex);
    if (p != NULL) {
        _ZN9NpcLookAt9setTargetEhiiP7VecFx32iih(((void *)((u8 *)(p) + (0x3b0))), 4, 0, 0, (s32)&gVec3Zero, TalkRequest_GetPlayerId(), 0, 0);
    }
}

void ActorTalkRequest::onTag09_4() {
    using namespace nG;
    u8 *p5 = nG::_ZN16ActorTalkRequest8getActorEj(this, actionActorIndex);
    if (p5 != NULL) {
        ActorTalkRequest *h = _ZN8NpcActor14getTalkRequestEv();
        u32 u = TalkRequest_GetPlayerId();
        s32 v = _ZN8NpcActor16getAngleToPlayerEj(p5, u);
        if (h != NULL) {
            h->onEventTag(0);
        }
        _ZN9NpcLookAt9setTargetEhiiP7VecFx32iih(p5 + 0x3b0, 4, 0, NULL, gVec3Zero, u, 0, 0);
        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p5 + 0x564, 3, 2, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
    }
}

void ActorTalkRequest::makePlayerLookAt(u8 *p) {
    using namespace nG;
    u32 a = TalkRequest_GetPlayerId();
    u32 b = PlayerActor_GetBodyPos();
    if (b != 0) {
        s32 s = Math_AngleXZ(b, p + 0x5c);
        s16 d = s - PlayerActor_GetCharacter(4)->rotY;
        PlayerActor_SetHeadTilt(0, d, a);
    }
}

void ActorTalkRequest::makePlayerTurnTo(u8 *p) {
    using namespace nG;
    u32 a = TalkRequest_GetPlayerId();
    u32 b = PlayerActor_GetBodyPos();
    if (b != 0) {
        s32 s = Math_AngleXZ(b, p + 0x5c);
        PlayerActor_SetHeadTilt(0, 0, a);
        PlayerActor_RequestTurnTo(s, a);
        PlayerActor_SetNoFaceTalkTarget(1, a);
    }
}

void ActorTalkRequest::onTag09_5() {
    using namespace nG;
    u8 *p4 = nG::_ZN16ActorTalkRequest8getActorEj(this, 0);
    if (p4 != NULL) {
        u8 s = actionActorIndex;
        switch (s) {
        case 1: {
            u8 *p = nG::_ZN16ActorTalkRequest8getActorEj(this, s);
            if (p != NULL) {
                _ZN9NpcLookAt9setTargetEhiiP7VecFx32iih(p + 0x3b0, 2, 0, p4, gVec3Zero, 4, 0, 0);
            }
            break;
        }
        case 2:
            makePlayerLookAt(p4);
            break;
        }
    }
}

void ActorTalkRequest::onTag09_6() {
    using namespace nG;
    u8 *p7 = nG::_ZN16ActorTalkRequest8getActorEj(this, 0);
    if (p7 != NULL) {
        u8 s = actionActorIndex;
        switch (s) {
        case 1: {
            u8 *p4 = nG::_ZN16ActorTalkRequest8getActorEj(this, s);
            if (p4 != NULL) {
                ActorTalkRequest *h = _ZN8NpcActor14getTalkRequestEv();
                s32 v = _ZN8NpcActor10getAngleToEPS_(p4, p7);
                onTag09_5();
                if (h != NULL) {
                    h->onEventTag(0);
                }
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p4 + 0x564, 3, 2, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
            }
            break;
        }
        case 2:
            makePlayerTurnTo(p7);
            break;
        }
    }
}

void ActorTalkRequest::onTag09_7() {
    using namespace nG;
    u8 *p4 = nG::_ZN16ActorTalkRequest8getActorEj(this, 1);
    if (p4 != NULL) {
        u8 s = actionActorIndex;
        switch (s) {
        case 0: {
            u8 *p = nG::_ZN16ActorTalkRequest8getActorEj(this, s);
            if (p != NULL) {
                _ZN9NpcLookAt9setTargetEhiiP7VecFx32iih(p + 0x3b0, 2, 0, p4, gVec3Zero, 4, 0, 0);
            }
            break;
        }
        case 2:
            makePlayerLookAt(p4);
            break;
        }
    }
}

void ActorTalkRequest::onTag09_8() {
    using namespace nG;
    u8 *p7 = nG::_ZN16ActorTalkRequest8getActorEj(this, 1);
    if (p7 != NULL) {
        u8 s = actionActorIndex;
        switch (s) {
        case 0: {
            u8 *p4 = nG::_ZN16ActorTalkRequest8getActorEj(this, s);
            if (p4 != NULL) {
                ActorTalkRequest *h = _ZN8NpcActor14getTalkRequestEv();
                s32 v = _ZN8NpcActor10getAngleToEPS_(p4, p7);
                onTag09_7();
                if (h != NULL) {
                    h->onEventTag(0);
                }
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p4 + 0x564, 3, 2, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
            }
            break;
        }
        case 2:
            makePlayerTurnTo(p7);
            break;
        }
    }
}

void ActorTalkRequest::onTag09_9() {
    using namespace nG;
    nG::_ZN16ActorTalkRequest20requestSwitchSpeakerEh(this, 1);
}

void ActorTalkRequest::resetTasks() {
    using namespace nG;
    taskId = 12;
    taskStep = 0;
    taskRunning = 0;
    initSubSceneParams((TalkSubSceneParams *)&subSceneType);
}

void ActorTalkRequest::initSubSceneParams(TalkSubSceneParams *p) {
    using namespace nG;
    p->subSceneType = 8;
    p->menuPtrArg0 = 0;
    p->menuPtrArg1 = 0;
    p->menu12Arg = 0;
    p->pocketMask = 0;
    p->pocketFilter = 0;
    p->pocketSelectMode = 13;
    p->subSceneItem = 0xfff1;
    p->handOverKind = 0;
    p->launcherMenu = 0x45;
    p->launcherIndex = 0;
    p->keepWindowClosed = 2;
    p->handOverMode = 12;
    p->handOverVariant = 2;
    p->focusNewSpeaker = 1;
    p->launcherText = 0;
    p->launcherTextSize = 0;
    p->unk_3d = 0;
    p->closeMode = 0;
}

BOOL ActorTalkRequest::startTask(s32 x) {
    using namespace nG;
    BOOL result = FALSE;
    if (taskId == 12 || isTaskRunning() == 0) {
        taskId = x;
        taskStep = 0;
        result = TRUE;
        taskRunning = result;
    }
    return result;
}

BOOL ActorTalkRequest::isTaskRunning() {
    using namespace nG;
    if (taskRunning != 0) {
        return TRUE;
    }
    return FALSE;
}

namespace nZ {
extern "C" {
void *data_020d749c[2] = {(void *)_ZN11NpcTalkCtrl11state1Step0EP8NpcActor, 0};
void *data_020d74ac[2] = {(void *)_ZN16ActorTalkRequest13taskItemAct12Ev, 0};
void *data_020d74b4[2] = {(void *)_ZN16ActorTalkRequest11taskEatItemEv, 0};
}
}

void ActorTalkRequest::runTask() {
    using namespace nG;
    static ActorTalkTaskFn tbl[12] = {*(ActorTalkTaskFn *)data_020d735c, *(ActorTalkTaskFn *)data_020d7384, *(ActorTalkTaskFn *)data_020d720c, *(ActorTalkTaskFn *)data_020d7404, *(ActorTalkTaskFn *)data_020d7444, *(ActorTalkTaskFn *)data_020d7474, *(ActorTalkTaskFn *)data_020d747c, *(ActorTalkTaskFn *)data_020d7494, *(ActorTalkTaskFn *)data_020d74ac, *(ActorTalkTaskFn *)data_020d74b4, *(ActorTalkTaskFn *)data_020d74c4, *(ActorTalkTaskFn *)data_020d74d4};
    if ((s32)taskId < 12) {
        if ((this->*tbl[taskId])()) {
            s32 old = taskId;
            taskRunning = 0;
            taskId = 12;
            onTaskDone(old);
        }
    }
}

void ActorTalkRequest::onTaskDone(u32 id) {
    using namespace nG;
}

BOOL ActorTalkRequest::openSubScene(s32 x) {
    using namespace nG;
    BOOL result = FALSE;
    if (startTask(0)) {
        subSceneType = x;
        result = TRUE;
    }
    return result;
}

void ActorTalkRequest::setPocketItem(u32 a, u32 b, u32 c) {
    using namespace nG;
    pocketMask = a;
    pocketFilter = 0;
    pocketSelectMode = b;
    subSceneItem = 0xfff1;
    keepWindowClosed = c;
}

void ActorTalkRequest::setPocketFilter(u32 a, u32 b, u32 c) {
    using namespace nG;
    pocketMask = 0;
    pocketFilter = a;
    pocketSelectMode = b;
    subSceneItem = 0xfff1;
    keepWindowClosed = c;
}

void ActorTalkRequest::setSubSceneKind(u32 a, u32 b) {
    using namespace nG;
    launcherMenu = a;
    keepWindowClosed = b;
}

void ActorTalkRequest::setSubSceneKindArg(u32 a, u32 b, u32 c) {
    using namespace nG;
    launcherMenu = a;
    launcherIndex = b;
    keepWindowClosed = c;
}

void ActorTalkRequest::setSelectionList(u32 a, u32 b, u32 c) {
    using namespace nG;
    menuPtrArg0 = a;
    menuPtrArg1 = b;
    keepWindowClosed = c;
}

void ActorTalkRequest::setMenu12Arg(u32 a, u32 b) {
    using namespace nG;
    menu12Arg = a;
    keepWindowClosed = b;
}

void ActorTalkRequest::setSubSceneKind2(u32 a, u32 b, u32 c, u8 d) {
    using namespace nG;
    launcherMenu = a;
    launcherText = b;
    launcherTextSize = c;
    keepWindowClosed = d;
}

BOOL ActorTalkRequest::subSceneCloseWindow() {
    using namespace nG;
    if (window != NULL) {
        window->openMode = 1;
        taskStep = 1;
    }
    return FALSE;
}

BOOL ActorTalkRequest::subSceneOpen() {
    using namespace nG;
    if (window != NULL && window->state == 5) {
        BOOL r = FALSE;
        switch (subSceneType) {
        case 0: {
            u16 v = pocketMask;
            if (pocketFilter != 0) {
                v = MenuCtrl_BuildPocketMask(pocketFilter);
            }
            r = MenuCtrl_OpenPocketSelect(v, pocketSelectMode);
            break;
        }
        case 1:
            keepWindowClosed = 1;
            r = MenuCtrl_OpenPostOffice();
            break;
        case 2:
            r = MenuCtrl_OpenLauncher(launcherMenu);
            break;
        case 3:
            r = MenuCtrl_OpenLauncherWithIndex(launcherMenu, launcherIndex);
            break;
        case 4:
            r = MenuCtrl_OpenNearbyTowns(menuPtrArg0, menuPtrArg1);
            break;
        case 5:
            r = MenuCtrl_RequestOpenMenu12(menu12Arg);
            break;
        case 6:
            r = MenuCtrl_OpenLauncherWithText(launcherMenu, launcherText, launcherTextSize);
            break;
        case 7:
            if (keepWindowClosed != 1) {
                window->nextState = 1;
            }
            taskStep = 3;
            return TRUE;
        }
        if (r) {
            taskStep = 2;
        }
    }
    return FALSE;
}

BOOL ActorTalkRequest::subSceneWait() {
    using namespace nG;
    BOOL result = FALSE;
    if (MenuCtrl_IsFinished()) {
        if (keepWindowClosed != 1) {
            window->nextState = 1;
        }
        taskStep = 3;
        result = TRUE;
    }
    return result;
}

namespace nZ {
extern "C" {
void *data_020d752c[2] = {(void *)_ZN16ActorTalkRequest12subSceneWaitEv, 0};
void *data_020d7534[2] = {(void *)_ZN11NpcTalkCtrl11state2Step1EP8NpcActor, 0};
void *data_020d7584[2] = {(void *)_ZN16ActorTalkRequest13giveItemStartEv, 0};
void *data_020d759c[2] = {(void *)_ZN16ActorTalkRequest14itemAct0FStartEv, 0};
}
}

BOOL ActorTalkRequest::taskSubScene() {
    using namespace nG;
    static ActorTalkTaskFn tbl[3] = {*(ActorTalkTaskFn *)data_020d750c, *(ActorTalkTaskFn *)data_020d7524, *(ActorTalkTaskFn *)data_020d752c};
    BOOL r = FALSE;
    u8 i = taskStep;
    if (i < 3) {
        r = (this->*tbl[i])();
    }
    return r;
}

BOOL ActorTalkRequest::requestReopenWindow() {
    using namespace nG;
    return startTask(1);
}

BOOL ActorTalkRequest::taskReopenWindow() {
    using namespace nG;
    BOOL result = FALSE;
    if (window != NULL && window->state == 5) {
        result = TRUE;
        window->nextState = result;
    }
    return result;
}

BOOL ActorTalkRequest::requestCloseWindow(u32 x) {
    using namespace nG;
    if (startTask(2)) {
        closeMode = x;
        return TRUE;
    }
    return FALSE;
}

BOOL ActorTalkRequest::closeWindowStart() {
    using namespace nG;
    if (window != NULL) {
        window->openMode = closeMode;
        taskStep = 1;
    }
    return FALSE;
}

BOOL ActorTalkRequest::closeWindowWait() {
    using namespace nG;
    BOOL result = FALSE;
    if (window != NULL && window->state == 5) {
        result = TRUE;
    }
    return result;
}

namespace nZ {
extern "C" {
void *data_020d7624[2] = {(void *)_ZN13NpcActionCtrl10setupAct15EP12Unk_02006d14, 0};
void *data_020d7634[2] = {(void *)_ZN13NpcActionCtrl9mainAct15EP8NpcActor, 0};
}
}

BOOL ActorTalkRequest::taskCloseWindow() {
    using namespace nG;
    static ActorTalkTaskFn tbl[2] = {*(ActorTalkTaskFn *)data_020d754c, *(ActorTalkTaskFn *)data_020d7564};
    BOOL r = FALSE;
    u8 i = taskStep;
    if (i < 2) {
        r = (this->*tbl[i])();
    }
    return r;
}

BOOL ActorTalkRequest::requestGiveItem(u16 *p, u32 b, u32 c, u32 d) {
    using namespace nG;
    BOOL result = FALSE;
    if (startTask(3)) {
        subSceneItem = *p;
        handOverKind = b;
        handOverMode = c;
        handOverVariant = d;
        result = TRUE;
    }
    return result;
}

BOOL ActorTalkRequest::giveItemStart() {
    using namespace nG;
    if (ownerActor != NULL) {
        if (window != NULL) {
            _ZN15TalkWindowState11lockAdvanceEv(window);
        }
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)ownerActor + 0x564) == 8 && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)ownerActor + 0x564) == 0) {
            onEventTag(0);
        } else if (window != NULL) {
            if (_ZN13NpcActionCtrl15requestGiveItemEiPtjhjj((u8 *)ownerActor + 0x564, 4, &subSceneItem, handOverKind, handOverMode, handOverVariant, talkPlayer)) {
                taskStep = 1;
            }
        }
    }
    return FALSE;
}

BOOL ActorTalkRequest::giveItemWait() {
    using namespace nG;
    BOOL result = FALSE;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)ownerActor + 0x564) == 13 && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)ownerActor + 0x564) != 0) {
            _ZN15TalkWindowState13unlockAdvanceEv(window);
            taskStep = 2;
            result = TRUE;
        }
    }
    return result;
}

namespace nZ {
extern "C" {
void *data_020d7674[2] = {(void *)_ZN13NpcActionCtrl10setupAct0DEP8NpcActor, 0};
}
}

BOOL ActorTalkRequest::taskGiveItem() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d7584, *(Unk_02014420_Fn *)data_020d75b4};
    BOOL r = 0;
    if (taskStep < 2) {
        r = (this->*tbl[taskStep])();
    }
    return r;
}

BOOL ActorTalkRequest::requestTakeItem(u16 *a, u32 b, u32 c, u32 d) {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN16ActorTalkRequest9startTaskEi(this, 4)) {
        subSceneItem = *a;
        handOverKind = b;
        handOverMode = c;
        handOverVariant = d;
        r = 1;
    }
    return r;
}

BOOL ActorTalkRequest::takeItemStart() {
    using namespace nF;
    if (ownerActor != NULL) {
        if (window != NULL) {
            _ZN15TalkWindowState11lockAdvanceEv(window);
        }
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)ownerActor + 0x564) == 8 && !_ZN13NpcActionCtrl12isActionDoneEv((u8 *)ownerActor + 0x564)) {
            onEventTag(0);
        } else if (window != NULL) {
            if (_ZN13NpcActionCtrl15requestTakeItemEiPtjhjj((u8 *)ownerActor + 0x564, 4, &subSceneItem, handOverKind, handOverMode, handOverVariant, talkPlayer)) {
                nF::_ZN16ActorTalkRequest17setItemActionBusyEv(this);
                taskStep = 1;
            }
        }
    }
    return 0;
}

BOOL ActorTalkRequest::takeItemWait() {
    using namespace nF;
    BOOL r = 0;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)ownerActor + 0x564) == 0xe && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)ownerActor + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(window);
            if (handOverMode != 4) {
                nF::_ZN16ActorTalkRequest19clearItemActionBusyEv(this);
            }
            taskStep = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
void *data_020d7604[2] = {(void *)_ZN13NpcActionCtrl10setupAct13EP12Unk_02006d14, 0};
void *data_020d721c[2] = {(void *)_ZN13NpcActionCtrl11act0EStep07EP12Unk_02006d14, 0};
const u16 data_020c6d48[4] = {0xe2, 0x0, 0xe0, 0x0};
void *data_020d720c[2] = {(void *)_ZN16ActorTalkRequest15taskCloseWindowEv, 0};
void *data_020d7204[2] = {(void *)_ZN13VillagerRoute16isInAttr200BlockEP7VecFx32, 0};
void *data_020d71fc[2] = {(void *)_ZN13NpcActionCtrl10setupAct00EPh, 0};
const u16 data_020c6d0c[2] = {0x5f, 0x19};
void *data_020d71ec[2] = {(void *)VillagerRoute_PickAttr200Target, 0};
void *data_020d71e4[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d71dc[2] = {(void *)VillagerRoute_PickOwnHouseBlock, 0};
void *data_020d71d4[2] = {(void *)_ZN16ActorTalkRequest13keepItemStartEv, 0};
void *data_020d71cc[2] = {(void *)_ZN16ActorTalkRequest12keepItemWaitEv, 0};
}
}

BOOL ActorTalkRequest::taskTakeItem() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d7664, *(Unk_02014420_Fn *)data_020d75d4};
    BOOL r = 0;
    if (taskStep < 2) {
        r = (this->*tbl[taskStep])();
    }
    return r;
}

BOOL ActorTalkRequest::requestItemAct0F() {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN16ActorTalkRequest9startTaskEi(this, 5)) {
        r = 1;
    }
    return r;
}

BOOL ActorTalkRequest::itemAct0FStart() {
    using namespace nF;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl13requestActionEjiiissiitt((u8 *)ownerActor + 0x564, 0xf, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            _ZN15TalkWindowState11lockAdvanceEv(window);
            taskStep = 1;
        }
    }
    return 0;
}

BOOL ActorTalkRequest::itemAct0FWait() {
    using namespace nF;
    BOOL r = 0;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)ownerActor + 0x564) == 0xf && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)ownerActor + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(window);
            nF::_ZN16ActorTalkRequest19clearItemActionBusyEv(this);
            taskStep = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
void *data_020d7094[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d71ac[2] = {(void *)_ZN16ActorTalkRequest14returnItemWaitEv, 0};
void *data_020d71a4[2] = {(void *)_ZN13VillagerRoute13stepAlongPathEP7VecFx32, 0};
void *data_020d74ec[2] = {(void *)_ZN13VillagerRoute14stepFollowPathEP7VecFx32, 0};
const u16 data_020c6cdc[2] = {0x4c, 0x0};
void *data_020d718c[2] = {(void *)_ZN13VillagerRoute10isAtDoorT1EP7VecFx32, 0};
}
}

BOOL ActorTalkRequest::taskItemAct0F() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d759c, *(Unk_02014420_Fn *)data_020d758c};
    BOOL r = 0;
    if (taskStep < 2) {
        r = (this->*tbl[taskStep])();
    }
    return r;
}

BOOL ActorTalkRequest::requestKeepItem() {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN16ActorTalkRequest9startTaskEi(this, 6)) {
        r = 1;
    }
    return r;
}

BOOL ActorTalkRequest::keepItemStart() {
    using namespace nF;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl13requestActionEjiiissiitt((u8 *)ownerActor + 0x564, 0x10, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            nF::_ZN16ActorTalkRequest17setItemActionBusyEv(this);
            _ZN15TalkWindowState11lockAdvanceEv(window);
            taskStep = 1;
        }
    }
    return 0;
}

BOOL ActorTalkRequest::keepItemWait() {
    using namespace nF;
    BOOL r = 0;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)ownerActor + 0x564) == 0x10 && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)ownerActor + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(window);
            nF::_ZN16ActorTalkRequest19clearItemActionBusyEv(this);
            taskStep = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
void *data_020d70dc[2] = {(void *)VillagerRoute_PickCoastBlock, 0};
void *data_020d7174[2] = {(void *)_ZN13VillagerRoute14stepFollowPathEP7VecFx32, 0};
void *data_020d716c[2] = {(void *)_ZN16ActorTalkRequest11melodyStartEv, 0};
void *data_020d7164[2] = {(void *)_ZN16ActorTalkRequest10melodyWaitEv, 0};
void *data_020d70ec[2] = {(void *)_ZN16ActorTalkRequest12eatItemStartEv, 0};
void *data_020d7154[2] = {(void *)_ZN13VillagerRoute14stepFollowPathEP7VecFx32, 0};
}
}

BOOL ActorTalkRequest::taskKeepItem() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d71d4, *(Unk_02014420_Fn *)data_020d71cc};
    BOOL r = 0;
    if (taskStep < 2) {
        r = (this->*tbl[taskStep])();
    }
    return r;
}

BOOL ActorTalkRequest::requestReturnItem() {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN16ActorTalkRequest9startTaskEi(this, 7)) {
        r = 1;
    }
    return r;
}

BOOL ActorTalkRequest::returnItemStart() {
    using namespace nF;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl13requestActionEjiiissiitt((u8 *)ownerActor + 0x564, 0x11, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            nF::_ZN16ActorTalkRequest17setItemActionBusyEv(this);
            _ZN15TalkWindowState11lockAdvanceEv(window);
            taskStep = 1;
        }
    }
    return 0;
}

BOOL ActorTalkRequest::returnItemWait() {
    using namespace nF;
    BOOL r = 0;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)ownerActor + 0x564) == 0x11 && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)ownerActor + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(window);
            nF::_ZN16ActorTalkRequest19clearItemActionBusyEv(this);
            taskStep = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
void *data_020d711c[2] = {(void *)_ZN13NpcActionCtrl10act0DStep4EP8NpcActor, 0};
void *data_020d7424[2] = {(void *)_ZN13NpcActionCtrl11act0EStep01EP12Unk_02006d14, 0};
const u16 data_020c6cf8[2] = {0x5d, 0x0};
}
}

BOOL ActorTalkRequest::taskReturnItem() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d70b4, *(Unk_02014420_Fn *)data_020d71ac};
    BOOL r = 0;
    if (taskStep < 2) {
        r = (this->*tbl[taskStep])();
    }
    return r;
}

BOOL ActorTalkRequest::requestItemAct12() {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN16ActorTalkRequest9startTaskEi(this, 8)) {
        r = 1;
    }
    return r;
}

BOOL ActorTalkRequest::itemAct12Start() {
    using namespace nF;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl13requestActionEjiiissiitt((u8 *)ownerActor + 0x564, 0x12, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            _ZN15TalkWindowState11lockAdvanceEv(window);
            taskStep = 1;
        }
    }
    return 0;
}

BOOL ActorTalkRequest::itemAct12Wait() {
    using namespace nF;
    BOOL r = 0;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)ownerActor + 0x564) == 0x12 && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)ownerActor + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(window);
            taskStep = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
const u16 data_020c6ccc[2] = {0x4d, 0x0};
void *data_020d724c[2] = {(void *)_ZN13VillagerRoute9isInBlockEP7VecFx32, 0};
void *data_020d7254[2] = {(void *)_ZN11NpcTalkCtrl10mainState1EP8NpcActor, 0};
void *data_020d725c[2] = {(void *)_ZN11NpcTalkCtrl11setupState2EP8NpcActor, 0};
void *data_020d727c[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d7284[2] = {(void *)VillagerRoute_PickRandomBlock, 0};
const u16 data_020c6d18[2] = {0x44, 0x0};
}
}

BOOL ActorTalkRequest::taskItemAct12() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d70cc, *(Unk_02014420_Fn *)data_020d7194};
    BOOL r = 0;
    if (taskStep < 2) {
        r = (this->*tbl[taskStep])();
    }
    return r;
}

BOOL ActorTalkRequest::requestEatItem() {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN16ActorTalkRequest9startTaskEi(this, 9)) {
        r = 1;
    }
    return r;
}

BOOL ActorTalkRequest::eatItemStart() {
    using namespace nF;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl13requestActionEjiiissiitt((u8 *)ownerActor + 0x564, 0x13, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            _ZN15TalkWindowState11lockAdvanceEv(window);
            taskStep = 1;
        }
    }
    return 0;
}

BOOL ActorTalkRequest::eatItemWait() {
    using namespace nF;
    BOOL r = 0;
    if (ownerActor != NULL && window != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)ownerActor + 0x564) == 0x13 && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)ownerActor + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(window);
            nF::_ZN16ActorTalkRequest19clearItemActionBusyEv(this);
            taskStep = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
void *data_020d7354[2] = {(void *)_ZN13NpcActionCtrl10act12Step0Ev, 0};
void *data_020d72cc[2] = {(void *)_ZN9NpcLookAt18lookAtTargetPlayerEP9Character, 0};
void *data_020d72dc[2] = {(void *)_ZN9NpcLookAt20approachManualAnglesEv, 0};
void *data_020d72fc[2] = {(void *)_ZN9NpcLookAt11lookAtPointEP8NpcActor, 0};
void *data_020d7304[2] = {(void *)_ZN13NpcActionCtrl10setupAct03EP8NpcActor, 0};
}
}

BOOL ActorTalkRequest::taskEatItem() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d70ec, *(Unk_02014420_Fn *)data_020d717c};
    BOOL r = 0;
    if (taskStep < 2) {
        r = (this->*tbl[taskStep])();
    }
    return r;
}

BOOL ActorTalkRequest::requestPlayMelody(Vec2 *p) {
    using namespace nF;
    if (nF::_ZN16ActorTalkRequest9startTaskEi(this, 10)) {
        *(long long *)&melodyPattern = *(long long *)p;
        randomMelody = 0;
        return TRUE;
    }
    return FALSE;
}

BOOL ActorTalkRequest::requestPlayRandomMelody() {
    using namespace nF;
    if (nF::_ZN16ActorTalkRequest9startTaskEi(this, 10)) {
        randomMelody = 1;
        return TRUE;
    }
    return FALSE;
}

BOOL ActorTalkRequest::melodyStart() {
    using namespace nF;
    u32 v;
    void *tbl = gMelodyEditPattern;
    if (ownerActor != NULL) {
        v = ownerActor->getSpecies();
    } else {
        v = 0;
    }
    if (v != 0xffff) {
        if (window != NULL) {
            _ZN15TalkWindowState11lockAdvanceEv(window);
        }
        if (randomMelody == 0) {
            Melody_Unpack(&melodyPattern, tbl);
            Melody_PlayEditPattern((u16)v);
        } else {
            Melody_PlayRandom((u16)v);
        }
        taskStep = 1;
        return 0;
    }
    taskStep = 3;
    return 1;
}

BOOL ActorTalkRequest::melodyWait() {
    using namespace nF;
    if (data_020ddf8c != -1) {
        taskStep = 2;
    }
    return 0;
}

BOOL ActorTalkRequest::melodyEnd() {
    using namespace nF;
    if (data_020ddf8c != -1) {
        return 0;
    }
    if (window != NULL) {
        _ZN15TalkWindowState13unlockAdvanceEv(window);
    }
    taskStep = 3;
    return 1;
}

namespace nZ {
extern "C" {
const u16 data_020c6d20[2] = {0xf, 0x0};
void *data_020d744c[2] = {(void *)_ZN13NpcActionCtrl10act0DStep2EP8NpcActor, 0};
void *data_020d747c[2] = {(void *)_ZN16ActorTalkRequest12taskKeepItemEv, 0};
void *data_020d7484[2] = {(void *)_ZN13NpcActionCtrl10act0AStep0EP8NpcActor, 0};
void *data_020d74bc[2] = {(void *)_ZN11NpcTalkCtrl11state1Step1EP8NpcActor, 0};
void *data_020d74dc[2] = {(void *)_ZN11NpcTalkCtrl11state1Step2EP8NpcActor, 0};
void *data_020d757c[2] = {(void *)_ZN13NpcActionCtrl10setupAct11EP12Unk_02006d14, 0};
void *data_020d75dc[2] = {(void *)_ZN13NpcActionCtrl9mainAct13EP12Unk_02006d14, 0};
void *data_020d760c[2] = {(void *)_ZN13NpcActionCtrl9mainAct12EP12Unk_02006d14, 0};
const u16 data_020c6ce8[2] = {0x43, 0x0};
void *data_020d7654[2] = {(void *)_ZN13NpcActionCtrl9mainAct0EEP12Unk_02006d14, 0};
void *data_020d767c[2] = {(void *)_ZN13NpcActionCtrl9postAct0CEP8NpcActor, 0};
const u16 sNpcTalkMouthAnims[4] = {0x137, 0x0, 0x138, 0x0};
const u16 data_020c6cfc[2] = {0x4e, 0x0};
const u16 data_020c6d58[4] = {0x55, 0x0, 0x56, 0x0};
const u16 data_020c6d60[4] = {0xe3, 0x0, 0xe1, 0x0};
const u16 data_020c6ce4[2] = {0x47, 0x6};
void *data_020d707c[2] = {(void *)_ZN13VillagerRoute9isInBlockEP7VecFx32, 0};
void *data_020d71c4[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d709c[2] = {(void *)_ZN13NpcActionCtrl9mainAct01EPh, 0};
void *data_020d70b4[2] = {(void *)_ZN16ActorTalkRequest15returnItemStartEv, 0};
void *data_020d719c[2] = {(void *)_ZN13NpcActionCtrl11act0EStep05EP12Unk_02006d14, 0};
}
}

BOOL ActorTalkRequest::taskMelody() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d716c, *(Unk_02014420_Fn *)data_020d7164, *(Unk_02014420_Fn *)data_020d715c};
    if (taskStep < 3) {
        return (this->*tbl[taskStep])();
    }
    return 0;
}

BOOL ActorTalkRequest::requestSwitchSpeaker(u8 v) {
    using namespace nE;
    if (_ZN16ActorTalkRequest9startTaskEi(this, 0xb)) {
        focusNewSpeaker = v;
        return TRUE;
    }
    return FALSE;
}

BOOL ActorTalkRequest::switchSpeakerClose() {
    using namespace nE;
    TalkWindowState *q = window;
    if (q != 0) {
        q->openMode = 2;
        if (focusNewSpeaker != 0) taskStep = 1;
        else taskStep = 2;
    }
    return FALSE;
}

BOOL ActorTalkRequest::switchSpeakerFocus() {
    using namespace nE;
    TalkWindowState *q = window;
    if (q != 0 && q->state == 5) {
        NpcActor *e = _ZN16ActorTalkRequest9getActorBEj(this, (speakerIndex + 1) & 1);
        if (e != 0) {
            VecFx32 v;
            VecFx32 *pv = (VecFx32 *)&e->position;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            v.y += 0x2000;
            Camera_RetargetFocus(&v);
        }
        taskStep = 2;
    }
    return FALSE;
}

BOOL ActorTalkRequest::switchSpeakerSwap() {
    using namespace nE;
    TalkWindowState *q = window;
    if (q != 0 && q->state == 5) {
        if (Camera_IsBlending() == 0 || Camera_GetBlendFramesLeft() < 0x11) {
            NpcActor *e = _ZN16ActorTalkRequest9getActorBEj(this, speakerIndex);
            if (e) _ZN14NpcSpeechState12stopSpeakingEv((u8 *)e + 0x418);
            speakerIndex = (speakerIndex + 1) & 1;
            NpcActor *n = _ZN16ActorTalkRequest9getActorBEj(this, speakerIndex);
            if (n != 0) {
                MsgString9B x;
                n->getName((u32)&x);
                _ZN14TalkMsgRequest17changeSpeakerNameEP9MsgStringj(this, &x, _ZN8NpcActor16getSpeakerGenderEv(n));
                window->nextState = 1;
                taskStep = 3;
                return TRUE;
            }
        }
    }
    return FALSE;
}

namespace nZ {
extern "C" {
void *data_020d70e4[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
}
}

BOOL ActorTalkRequest::taskSwitchSpeaker() {
    using namespace nE;
    static BOOL (ActorTalkRequest::*tbl[3])() = {*(BOOL (ActorTalkRequest::**)())data_020d7434, *(BOOL (ActorTalkRequest::**)())data_020d7134, *(BOOL (ActorTalkRequest::**)())data_020d7144};
    if (taskStep < 3) return (this->*tbl[taskStep])();
    return FALSE;
}

namespace nE {
extern "C" void _ZN11NpcTalkCtrlC1Ev(void) {}
}

namespace nE {
extern "C" void NpcTalkCtrl_Destroy(void) {}
}

void NpcTalkCtrl::reset() {
    using namespace nE;
    state = 5;
    requestedState = 5;
    step = 0;
    turnSpeed = 0;
    turnAngle = 0;
    clearActorFlagOnEnd = 0;
    act07Variant = 5;
    stopAction = 1;
    keepCamera = 0;
    unk_0e = 0;
}

BOOL NpcTalkCtrl::isBusy() {
    using namespace nE;
    if (requestedState < 5 || state < 5) return TRUE;
    return FALSE;
}

void NpcTalkCtrl::updateSpeakerMouth(NpcActor *ctx) {
    using namespace nE;
    ActorTalkRequest *o = ctx->talkRequest;
    if (o != 0 && o->window != 0) {
        u8 *e = _ZN16ActorTalkRequest15getSpeakerActorEv(o);
        if (e != 0) {
            if (_ZN15TalkWindowState14isVoicePlayingEv(o->window)) _ZN14NpcSpeechState13startSpeakingEv(e + 0x418);
            else _ZN14NpcSpeechState12stopSpeakingEv(e + 0x418);
        }
    }
}

BOOL NpcTalkCtrl::requestTurnAndTalk(s16 d, s16 e, u8 g) {
    using namespace nE;
    return request(0, 0, d, e, 1, g);
}

BOOL NpcTalkCtrl::requestTalk(u8 f, u8 g) {
    using namespace nE;
    return request(1, 0, 0, 0, f, g);
}

BOOL NpcTalkCtrl::requestState4(u32 c, s32 d, s16 e, u8 g) {
    using namespace nE;
    return request(4, c, d, e, 1, g);
}

BOOL NpcTalkCtrl::request(u8 b, u32 c, s16 d, s16 e, u8 f, u8 g) {
    using namespace nE;
    BOOL r = FALSE;
    if (requestedState == 5) {
        requestedState = b;
        turnSpeed = d;
        turnAngle = e;
        act07Variant = c;
        stopAction = f;
        keepCamera = g;
        r = TRUE;
    }
    return r;
}

void NpcTalkCtrl::startTalkMessage(NpcActor *ctx) {
    using namespace nE;
    ActorTalkRequest *o = ctx->talkRequest;
    if (o != 0) {
        struct { s32 pad; TalkStartMsg msg; } out;
        MsgString9B x;
        ctx->getName((u32)&x);
        MsgString9B *px = &x;
        s32 r = (s32)px->data();
        _ZN14TalkMsgRequest14setSpeakerNameEPhj(o, r, _ZN8NpcActor16getSpeakerGenderEv(ctx));
        _ZN9Character17attachTalkRequestEi(ctx, o);
        o->start(&out.msg);
        _ZN10MsgRequest11setFileNameEPKc(o, (s32)out.msg.msgKey);
        o->msgIndex = out.msg.msgIndex;
        o->window->nextState = 1;
    }
}

void NpcTalkCtrl::applyRequest(NpcActor *ctx) {
    using namespace nE;
    u8 b = requestedState;
    if (b < 5 && state == 5) {
        state = b;
        step = 0;
        unk_0e = 0;
        (this->*sNpcTalkCtrlStates[state].setupFn)(ctx);
        requestedState = 5;
    }
}

void NpcTalkCtrl::update(NpcActor *ctx) {
    using namespace nE;
    applyRequest(ctx);
    if (state < 5) (this->*sNpcTalkCtrlStates[state].mainFn)(ctx);
}

void NpcTalkCtrl::endTalk(NpcActor *ctx) {
    using namespace nE;
    ActorTalkRequest *o = ctx->talkRequest;
    if (o != 0 && _ZN16ActorTalkRequest15getPartnerActorEv(o) != 0) _ZN16ActorTalkRequest15getPartnerActorEv(o)->onLeaveTalk();
    if (keepCamera == 0) Camera_SetModeDefault();
    if (clearActorFlagOnEnd == 1) ctx->collider.groups &= ~2;
    PlayerActor_SetHeadTilt(0, 0, 4);
}

void NpcTalkCtrl::setupState0(NpcActor *ctx) {
    using namespace nE;
    volatile VecFx32 v;
    VecFx32 w;
    VecFx32 *pv = (VecFx32 *)&ctx->position;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&ctx->actionCtrl, 3, 2, 0, 0, turnSpeed, turnAngle, 0, 0, data_020c6cc8, 0);
    if (keepCamera == 0) {
        ActorTalkRequest *o = ctx->talkRequest;
        if (o != 0 && _ZN16ActorTalkRequest15getPartnerActorEv(o) != 0) {
            VecFx32 *pw = (VecFx32 *)&_ZN16ActorTalkRequest15getPartnerActorEv(o)->position;
            w.x = pw->x;
            w.y = pw->y;
            w.z = pw->z;
            v.y += 0x2000;
            w.y += 0x2000;
            Camera_FocusOnPair((VecFx32 *)&v, &w);
        } else {
            v.y += 0x2000;
            Camera_FocusOnPoint((VecFx32 *)&v);
        }
    }
    if (!(ctx->collider.groups & 2)) clearActorFlagOnEnd = 1;
    ctx->collider.groups |= 2;
    if (ctx->canPlayTalkMelody()) {
        if (ctx->getSpecies() != 0xffff) Melody_Play();
        ctx->onTalkMelodyPlayed();
    }
    step = 0;
}

void NpcTalkCtrl::state0Step0(NpcActor *ctx) {
    using namespace nE;
    if (turnAngle == ctx->rotY) {
        if (_ZN13NpcActionCtrl9getActionEv(&ctx->actionCtrl) == 3) {
            if (_ZN13NpcActionCtrl12isActionDoneEv(&ctx->actionCtrl)) {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(&ctx->actionCtrl, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                startTalkMessage(ctx);
                step = 1;
            }
        }
    }
}

void NpcTalkCtrl::state0Step1(NpcActor *ctx) {
    using namespace nE;
    ActorTalkRequest *o = ctx->talkRequest;
    s32 a, b;
    if (o != 0 && o->window != 0) {
        if (o->window->state == 0) {
            o->runDeferred();
            _ZN9Character17detachTalkRequestEi(ctx, o);
            u8 *e = _ZN16ActorTalkRequest15getSpeakerActorEv(o);
            if (e) _ZN14NpcSpeechState12stopSpeakingEv(e + 0x418);
            a = 0;
            if (_ZN16ActorTalkRequest15getPartnerActorEv(o) != 0 && _ZN13NpcActionCtrl9getActionEv(&_ZN16ActorTalkRequest15getPartnerActorEv(o)->actionCtrl) == 8 && _ZN13NpcActionCtrl12isActionDoneEv(&_ZN16ActorTalkRequest15getPartnerActorEv(o)->actionCtrl) == 0) a = 1;
            b = 0;
            if (_ZN13NpcActionCtrl9getActionEv(&ctx->actionCtrl) == 8 && _ZN13NpcActionCtrl12isActionDoneEv(&ctx->actionCtrl) == 0) b = 1;
            if (a != 0 || b != 0) {
                if (b != 0) _ZN16ActorTalkRequest11playEmotionEjj(o, 0, 0);
                if (a != 0) _ZN16ActorTalkRequest11playEmotionEjj(o, 0, 1);
                step = 2;
            } else {
                endTalk(ctx);
                step = 3;
                state = 5;
            }
        } else {
            _ZN16ActorTalkRequest4tickEv(o);
            updateSpeakerMouth(ctx);
        }
    }
}

void NpcTalkCtrl::state0Step2(NpcActor *ctx) {
    using namespace nE;
    ActorTalkRequest *o = ctx->talkRequest;
    if (o != 0 && _ZN16ActorTalkRequest15getPartnerActorEv(o) != 0 && _ZN13NpcActionCtrl9getActionEv(&_ZN16ActorTalkRequest15getPartnerActorEv(o)->actionCtrl) == 8 && _ZN13NpcActionCtrl12isActionDoneEv(&_ZN16ActorTalkRequest15getPartnerActorEv(o)->actionCtrl) == 0) return;
    if (_ZN13NpcActionCtrl9getActionEv(&ctx->actionCtrl) == 8 && _ZN13NpcActionCtrl12isActionDoneEv(&ctx->actionCtrl) == 0) return;
    endTalk(ctx);
    step = 3;
    state = 5;
}

namespace nZ {
extern "C" {
const u16 data_020c6cf4[2] = {0x4f, 0x0};
void *data_020d7134[2] = {(void *)_ZN16ActorTalkRequest18switchSpeakerFocusEv, 0};
void *data_020d7144[2] = {(void *)_ZN16ActorTalkRequest17switchSpeakerSwapEv, 0};
const u16 data_020c6d34[2] = {0x58, 0x6};
void *data_020d7264[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d728c[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d729c[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
Unk_0201a1e0_Fn sNpcLookAtTypes[6] = {
    *(Unk_0201a1e0_Fn *)data_020d710c,
    *(Unk_0201a1e0_Fn *)data_020d733c,
    *(Unk_0201a1e0_Fn *)data_020d76b4,
    *(Unk_0201a1e0_Fn *)data_020d72fc,
    *(Unk_0201a1e0_Fn *)data_020d72cc,
    *(Unk_0201a1e0_Fn *)data_020d72dc,
};
void *data_020d72e4[2] = {(void *)_ZN13VillagerRoute16stepAdjacentUnitEP7VecFx32, 0};
}
}

void NpcTalkCtrl::mainState0(NpcActor *ctx) {
    using namespace nE;
    static void (NpcTalkCtrl::*tbl[3])(NpcActor *) = {*(void (NpcTalkCtrl::**)(NpcActor *))data_020d72a4, *(void (NpcTalkCtrl::**)(NpcActor *))data_020d743c, *(void (NpcTalkCtrl::**)(NpcActor *))data_020d731c};
    if (step < 3) (this->*tbl[step])(ctx);
}

void NpcTalkCtrl::setupState2(NpcActor *ctx) {
    using namespace nE;
    volatile VecFx32 v;
    VecFx32 *pv = (VecFx32 *)&ctx->position;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&ctx->actionCtrl, 3, 2, 0, 0, turnSpeed, turnAngle, 0, 0, data_020c6cc8, 0);
    if (!(ctx->collider.groups & 2)) clearActorFlagOnEnd = 1;
    ctx->collider.groups |= 2;
    if (ctx->canPlayTalkMelody()) {
        if (ctx->getSpecies() != 0xffff) Melody_Play();
        ctx->onTalkMelodyPlayed();
    }
    step = 0;
}

void NpcTalkCtrl::state2Step0(NpcActor *ctx) {
    using namespace nE;
    if (_ZN13NpcActionCtrl9getActionEv(&ctx->actionCtrl) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&ctx->actionCtrl)) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&ctx->actionCtrl, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            _ZN13NpcActionCtrl16requestTalkingOnEv(&ctx->actionCtrl);
            step = 1;
        }
    }
}

void NpcTalkCtrl::state2Step1(NpcActor *ctx) {
    using namespace nE;
    if (unk_0e) {
        _ZN13NpcActionCtrl17requestTalkingOffEv(&ctx->actionCtrl);
        step = 2;
        state = 5;
    }
}

void NpcTalkCtrl::mainState2(NpcActor *ctx) {
    using namespace nE;
    static void (NpcTalkCtrl::*tbl[2])(NpcActor *) = {*(void (NpcTalkCtrl::**)(NpcActor *))data_020d7344, *(void (NpcTalkCtrl::**)(NpcActor *))data_020d738c};
    if (step < 2) (this->*tbl[step])(ctx);
}

void NpcTalkCtrl::setupState1(NpcActor* p) {
    using namespace nD;
    Unk_020133cc_Vec pos;
    Unk_020133cc_Vec* pv = (Unk_020133cc_Vec *)&p->position;
    pos = *pv;
    if (stopAction != 0) {
        nD::_ZN13NpcActionCtrl13requestActionEjiiissiitt(&p->actionCtrl, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    }
    step = 0;
    if (keepCamera == 0) {
        ActorTalkRequest* r6 = p->talkRequest;
        if (r6 != NULL && nD::_ZN16ActorTalkRequest15getPartnerActorEv(r6) != NULL) {
            Unk_020133cc_Vec w;
            w = *(Unk_020133cc_Vec *)&nD::_ZN16ActorTalkRequest15getPartnerActorEv(r6)->position;
            pos.y += 0x2000;
            w.y += 0x2000;
            Camera_FocusOnPair(&pos, &w);
        } else {
            pos.y += 0x2000;
            Camera_FocusOnPoint(&pos);
        }
    }
    if (!(p->collider.groups & 2)) {
        clearActorFlagOnEnd = 1;
    }
    p->collider.groups |= 2;
    if (p->canPlayTalkMelody()) {
        if (p->getSpecies() != 0xffff) {
            Melody_Play();
        }
        p->onTalkMelodyPlayed();
    }
}

void NpcTalkCtrl::state1Step0(NpcActor* p) {
    using namespace nD;
    nD::_ZN11NpcTalkCtrl16startTalkMessageEP8NpcActor(this);
    step = 1;
}

void NpcTalkCtrl::state1Step1(NpcActor* p) {
    using namespace nD;
    ActorTalkRequest* r4 = p->talkRequest;
    if (r4 != NULL) {
        if (r4->window != NULL) {
            if (r4->window->state == 0) {
                r4->runDeferred();
                nD::_ZN9Character17detachTalkRequestEi(p, r4);
                NpcActor* t = nD::_ZN16ActorTalkRequest15getSpeakerActorEv(r4);
                if (t != NULL) {
                    nD::_ZN14NpcSpeechState12stopSpeakingEv(&t->speechState);
                }
                BOOL a = FALSE;
                if (nD::_ZN16ActorTalkRequest15getPartnerActorEv(r4) != NULL && nD::_ZN13NpcActionCtrl9getActionEv(&nD::_ZN16ActorTalkRequest15getPartnerActorEv(r4)->actionCtrl) == 8 && nD::_ZN13NpcActionCtrl12isActionDoneEv(&nD::_ZN16ActorTalkRequest15getPartnerActorEv(r4)->actionCtrl) == 0) {
                    a = TRUE;
                }
                BOOL b = FALSE;
                if (nD::_ZN13NpcActionCtrl9getActionEv(&p->actionCtrl) == 8 && nD::_ZN13NpcActionCtrl12isActionDoneEv(&p->actionCtrl) == 0) {
                    b = TRUE;
                }
                if (a || b) {
                    if (b) nD::_ZN16ActorTalkRequest11playEmotionEjj(r4, 0, 0);
                    if (a) nD::_ZN16ActorTalkRequest11playEmotionEjj(r4, 0, 1);
                    step = 2;
                } else {
                    nD::_ZN11NpcTalkCtrl7endTalkEP8NpcActor(this, p);
                    step = 1;
                    state = 5;
                }
            } else {
                nD::_ZN16ActorTalkRequest4tickEv(r4);
                nD::_ZN11NpcTalkCtrl18updateSpeakerMouthEP8NpcActor(this, p);
            }
        }
    }
}

void NpcTalkCtrl::state1Step2(NpcActor* p) {
    using namespace nD;
    ActorTalkRequest* r6 = p->talkRequest;
    if (r6 != NULL && nD::_ZN16ActorTalkRequest15getPartnerActorEv(r6) != NULL && nD::_ZN13NpcActionCtrl9getActionEv(&nD::_ZN16ActorTalkRequest15getPartnerActorEv(r6)->actionCtrl) == 8 && nD::_ZN13NpcActionCtrl12isActionDoneEv(&nD::_ZN16ActorTalkRequest15getPartnerActorEv(r6)->actionCtrl) == 0) {
        return;
    }
    if (nD::_ZN13NpcActionCtrl9getActionEv(&p->actionCtrl) == 8 && nD::_ZN13NpcActionCtrl12isActionDoneEv(&p->actionCtrl) == 0) {
        return;
    }
    nD::_ZN11NpcTalkCtrl7endTalkEP8NpcActor(this, p);
    step = 1;
    state = 5;
}

namespace nZ {
extern "C" {
void *data_020d751c[2] = {(void *)_ZN13NpcActionCtrl9mainAct0BEP8NpcActor, 0};
}
}

void NpcTalkCtrl::mainState1(NpcActor* p) {
    using namespace nD;
    static Unk_02013474_Fn tbl[3] = {*(Unk_02013474_Fn *)data_020d749c, *(Unk_02013474_Fn *)data_020d74bc, *(Unk_02013474_Fn *)data_020d74dc};
    if (step < 3) {
        (this->*tbl[step])(p);
    }
}

void NpcTalkCtrl::setupState3(NpcActor* p) {
    using namespace nD;
    Unk_02013778_Vec pos;
    Unk_020133cc_Vec* pv = (Unk_020133cc_Vec *)&p->position;
    *(Unk_020133cc_Vec*)&pos = *pv;
    if (stopAction != 0) {
        nD::_ZN13NpcActionCtrl13requestActionEjiiissiitt(&p->actionCtrl, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    }
    nD::_ZN13NpcActionCtrl16requestTalkingOnEv(&p->actionCtrl);
    if (!(p->collider.groups & 2)) {
        clearActorFlagOnEnd = 1;
    }
    p->collider.groups |= 2;
    if (p->canPlayTalkMelody()) {
        if (p->getSpecies() != 0xffff) {
            Melody_Play();
        }
        p->onTalkMelodyPlayed();
    }
    step = 0;
}

void NpcTalkCtrl::mainState3(NpcActor* p) {
    using namespace nD;
    static Unk_02013474_Fn tbl[1] = {*(Unk_02013474_Fn *)data_020d7534};
    if (step < 1) {
        (this->*tbl[step])(p);
    }
}

void NpcTalkCtrl::setupState4(NpcActor* p) {
    using namespace nD;
    nD::_ZN13NpcActionCtrl12requestAct07Eiiiit(&p->actionCtrl, 2, (u16)turnSpeed, (u16)turnAngle, act07Variant, data_020c6cc8);
    if (!(p->collider.groups & 2)) {
        clearActorFlagOnEnd = 1;
    }
    p->collider.groups |= 2;
    step = 0;
}

void NpcTalkCtrl::state4Step0(NpcActor* p) {
    using namespace nD;
    if (nD::_ZN13NpcActionCtrl9getActionEv(&p->actionCtrl) == 7) {
        if (nD::_ZN13NpcActionCtrl12isActionDoneEv(&p->actionCtrl) != 0) {
            nD::_ZN13NpcActionCtrl13requestActionEjiiissiitt(&p->actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            if (clearActorFlagOnEnd == 1) {
                p->collider.groups &= ~2;
            }
            step = 1;
            state = 5;
        }
    }
}

namespace nZ {
extern "C" {
const u16 sNpcGiveItemAnims[4] = {0x22, 0x0, 0x2b, 0x0};
void *data_020d7074[2] = {(void *)_ZN13NpcActionCtrl9mainAct00Ev, 0};
void *data_020d70a4[2] = {(void *)_ZN13NpcActionCtrl10setupAct02EPh, 0};
void *data_020d70c4[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
NpcActionEntry sNpcActionTable[22] = {
    *(Unk_02019858_FnA *)data_020d71fc, *(Unk_02019858_FnB *)data_020d7074, 0,
    *(Unk_02019858_FnA *)data_020d7084, *(Unk_02019858_FnB *)data_020d709c, 0,
    *(Unk_02019858_FnA *)data_020d70a4, *(Unk_02019858_FnB *)data_020d7464, 0,
    *(Unk_02019858_FnA *)data_020d7304, *(Unk_02019858_FnB *)data_020d730c, 0,
    *(Unk_02019858_FnA *)data_020d7314, *(Unk_02019858_FnB *)data_020d76d4, 0,
    *(Unk_02019858_FnA *)data_020d7214, *(Unk_02019858_FnB *)data_020d7704, 0,
    *(Unk_02019858_FnA *)data_020d76fc, *(Unk_02019858_FnB *)data_020d76f4, 0,
    *(Unk_02019858_FnA *)data_020d76ec, *(Unk_02019858_FnB *)data_020d76e4, *(Unk_02019858_FnC *)data_020d76dc,
    *(Unk_02019858_FnA *)data_020d74cc, *(Unk_02019858_FnB *)data_020d76cc, 0,
    *(Unk_02019858_FnA *)data_020d76c4, *(Unk_02019858_FnB *)data_020d76bc, 0,
    *(Unk_02019858_FnA *)data_020d74fc, *(Unk_02019858_FnB *)data_020d76ac, *(Unk_02019858_FnC *)data_020d76a4,
    *(Unk_02019858_FnA *)data_020d7514, *(Unk_02019858_FnB *)data_020d751c, *(Unk_02019858_FnC *)data_020d768c,
    *(Unk_02019858_FnA *)data_020d7684, 0, *(Unk_02019858_FnC *)data_020d767c,
    *(Unk_02019858_FnA *)data_020d7674, *(Unk_02019858_FnB *)data_020d766c, *(Unk_02019858_FnC *)data_020d7544,
    *(Unk_02019858_FnA *)data_020d765c, *(Unk_02019858_FnB *)data_020d7654, *(Unk_02019858_FnC *)data_020d764c,
    *(Unk_02019858_FnA *)data_020d7644, 0, *(Unk_02019858_FnC *)data_020d763c,
    *(Unk_02019858_FnA *)data_020d756c, 0, *(Unk_02019858_FnC *)data_020d762c,
    *(Unk_02019858_FnA *)data_020d757c, *(Unk_02019858_FnB *)data_020d761c, 0,
    *(Unk_02019858_FnA *)data_020d7614, *(Unk_02019858_FnB *)data_020d760c, 0,
    *(Unk_02019858_FnA *)data_020d7604, *(Unk_02019858_FnB *)data_020d75dc, *(Unk_02019858_FnC *)data_020d75e4,
    *(Unk_02019858_FnA *)data_020d75f4, 0, *(Unk_02019858_FnC *)data_020d75fc,
    *(Unk_02019858_FnA *)data_020d7624, *(Unk_02019858_FnB *)data_020d7634, 0,
};
void *data_020d70f4[2] = {(void *)VillagerRoute_PickOtherHouseDoor, 0};
void *data_020d70fc[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d712c[2] = {(void *)_ZN13VillagerRoute13stepAlongPathEP7VecFx32, 0};
void *data_020d726c[2] = {(void *)_ZN11NpcTalkCtrl10mainState2EP8NpcActor, 0};
void *data_020d72a4[2] = {(void *)_ZN11NpcTalkCtrl11state0Step0EP8NpcActor, 0};
NpcTalkCtrlState sNpcTalkCtrlStates[5] = {
    *(Unk_02014040_Fn *)data_020d7224, *(Unk_02014040_Fn *)data_020d7234,
    *(Unk_02014040_Fn *)data_020d723c, *(Unk_02014040_Fn *)data_020d7254,
    *(Unk_02014040_Fn *)data_020d725c, *(Unk_02014040_Fn *)data_020d726c,
    *(Unk_02014040_Fn *)data_020d7274, *(Unk_02014040_Fn *)data_020d7294,
    *(Unk_02014040_Fn *)data_020d7364, *(Unk_02014040_Fn *)data_020d72ac,
};
const NpcEmotionEntry sEmotionTable[60] = {
    {0x0, 0, 0xffff0100, 0x137, 0, 0xffff0100, 0x0},
    {0x45, data_020c6d34, 0x60101, 0x46, 0, 0xffff0000, 0x1},
    {0x47, data_020c6ce8, 0x101, 0x48, 0, 0xffff0000, 0x1},
    {0x49, data_020c6d18, 0x101, 0x4a, 0, 0xffff0000, 0x101},
    {0x4b, data_020c6d38, 0x20101, 0x4c, 0, 0xffff0000, 0x1},
    {0x4d, 0, 0xffff0100, 0x4e, data_020c6d08, 0x30101, 0x1},
    {0x4f, data_020c6cdc, 0x101, 0x50, 0, 0xffff0000, 0x101},
    {0x51, data_020c6d14, 0x101, 0x52, 0, 0xffff0000, 0x101},
    {0x53, data_020c6d3c, 0x50101, 0x54, 0, 0xffff0000, 0x101},
    {0x55, data_020c6cec, 0x101, 0x56, 0, 0xffff0000, 0x1},
    {0x57, data_020c6d28, 0x101, 0x58, 0, 0xffff0000, 0x101},
    {0x59, data_020c6cd8, 0x101, 0x5a, 0, 0xffff0000, 0x1},
    {0x5b, data_020c6d24, 0x90101, 0x5c, 0, 0xffff0000, 0x1},
    {0x5d, data_020c6d2c, 0x101, 0x5e, 0, 0xffff0000, 0x1},
    {0x5f, data_020c6d58, 0x102, 0x60, 0, 0xffff0000, 0x1},
    {0x61, data_020c6d10, 0x101, 0x62, 0, 0xffff0000, 0x1},
    {0x63, data_020c6cf8, 0x101, 0x64, 0, 0xffff0000, 0x1},
    {0x65, data_020c6ce4, 0x60101, 0x66, 0, 0xffff0000, 0x1},
    {0x67, data_020c6d70, 0x102, 0x68, data_020c6ce0, 0xffff0001, 0x1},
    {0x69, data_020c6cd0, 0x101, 0x6a, 0, 0xffff0000, 0x1},
    {0x6b, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0x6c, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0x6d, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0x6e, data_020c6cfc, 0x101, 0x6f, 0, 0xffff0000, 0x101},
    {0x70, data_020c6d50, 0x30102, 0x71, 0, 0xffff0000, 0x1},
    {0x72, data_020c6d30, 0x101, 0x73, 0, 0xffff0100, 0x1},
    {0x74, data_020c6d04, 0x101, 0x137, 0, 0xffff0000, 0x0},
    {0x75, data_020c6d30, 0x101, 0x76, 0, 0xffff0100, 0x1},
    {0x77, data_020c6d0c, 0x101, 0x78, 0, 0xffff0000, 0x1},
    {0x79, data_020c6cf4, 0x101, 0x7a, 0, 0xffff0000, 0x1},
    {0x7b, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x1},
    {0x7c, data_020c6d30, 0x101, 0x7d, 0, 0xffff0100, 0x1},
    {0x7e, data_020c6d30, 0x101, 0x137, 0, 0x100, 0x1},
    {0x7f, data_020c6cd4, 0x120101, 0x80, 0, 0x100, 0x1},
    {0x81, data_020c6d30, 0x101, 0x82, 0, 0x100, 0x1},
    {0x83, data_020c6d30, 0x101, 0x137, 0, 0x100, 0x0},
    {0x84, data_020c6d38, 0x20101, 0x85, 0, 0xffff0000, 0x1},
    {0x86, data_020c6cd8, 0x101, 0x87, 0, 0xffff0000, 0x1},
    {0x88, data_020c6d30, 0x101, 0x89, 0, 0xffff0000, 0x101},
    {0x8a, data_020c6d00, 0x101, 0x8b, 0, 0xffff0000, 0x1},
    {0x8c, data_020c6d30, 0x101, 0x137, 0, 0x100, 0x1},
    {0x9c, 0, 0x100, 0x9d, data_020c6d08, 0x30101, 0x1},
    {0x9e, data_020c6d30, 0x101, 0x137, 0, 0x100, 0x0},
    {0x9f, data_020c6cec, 0x101, 0xa0, 0, 0xffff0000, 0x1},
    {0xa1, data_020c6cf4, 0x101, 0xa2, 0, 0xffff0000, 0x1},
    {0xa3, data_020c6d30, 0x101, 0xa4, 0, 0x100, 0x1},
    {0xa5, data_020c6d30, 0x101, 0xa6, 0, 0x100, 0x1},
    {0xa7, data_020c6d30, 0x101, 0xa8, 0, 0x100, 0x1},
    {0x8d, data_020c6d30, 0x101, 0x8e, 0, 0x100, 0x1},
    {0x8f, data_020c6d30, 0x101, 0x90, 0, 0xffff0000, 0x1},
    {0x91, data_020c6d30, 0x101, 0x92, 0, 0xffff0000, 0x101},
    {0x93, data_020c6d30, 0x101, 0x94, 0, 0xffff0100, 0x1},
    {0x95, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0x96, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0x97, data_020c6d30, 0x101, 0x98, 0, 0xffff0000, 0x101},
    {0x99, data_020c6d30, 0x101, 0x9a, 0, 0xffff0100, 0x1},
    {0x9b, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0xa9, data_020c6d38, 0x20101, 0xaa, 0, 0xffff0000, 0x1},
    {0xab, data_020c6d30, 0x101, 0xac, 0, 0xffff0000, 0x101},
    {0x4f, data_020c6ccc, 0x101, 0x50, 0, 0xffff0000, 0x101},
};
const u16 data_020c6cc4[2] = {0x200, 0x0};
void *data_020d7524[2] = {(void *)_ZN16ActorTalkRequest12subSceneOpenEv, 0};
void *data_020d763c[2] = {(void *)_ZN13NpcActionCtrl9postAct0FEP12Unk_02006d14, 0};
const u16 data_020c6d50[4] = {0x51, 0x6, 0x52, 0x3};
void *data_020d708c[2] = {(void *)_ZN13NpcActionCtrl10act07Step0EP8NpcActor, 0};
}
}

void NpcTalkCtrl::mainState4(NpcActor* p) {
    using namespace nD;
    static Unk_02013474_Fn tbl[1] = {*(Unk_02013474_Fn *)data_020d7594};
    if (step < 3) {
        (this->*tbl[step])(p);
    }
}

NpcFootstepFx::NpcFootstepFx() {
    using namespace nD;
    footstepsEnabled = 0;
}

void NpcFootstepFx::func_020135e0() {
    using namespace nD;
}

void NpcFootstepFx::resetFootsteps() {
    using namespace nD;
    disableFootsteps();
    prevMoveMode = 5;
}

void NpcFootstepFx::enableFootsteps() {
    using namespace nD;
    footstepsEnabled = 1;
}

void NpcFootstepFx::disableFootsteps() {
    using namespace nD;
    footstepsEnabled = 0;
}

void NpcFootstepFx::playFootstepSe(NpcActor* p) {
    using namespace nD;
    u32 f = p->actorFlags;
    if (!(Unk_02013568_IsSet(f, 4) && Unk_02013568_IsSet(f, 2))) {
        if (footstepsEnabled != 0) {
            nD::Snd_SeEmitterPlayAlternate(&p->seEmitter, nD::Footstep_GetSeAtPos(&p->position), 0);
        }
    }
}

void NpcFootstepFx::updateFootsteps(NpcActor* p) {
    using namespace nD;
    s32 st = nD::_ZN11NpcMoveCtrl11getMoveModeEv(&p->moveCtrl);
    if (footstepsEnabled != 0 && (u32)(st - 1) <= 2) {
        Unk_02013474_Half h;
        h.a = p->rotY;
        if (prevMoveMode == 0) {
            Effect_Create(0x28, &p->jointPos[2], &h, 0);
            Effect_Create(0x28, &p->jointPos[1], &h, 0);
        } else {
            BOOL r4 = nD::_ZN13AnimFrameCtrl14hasPassedFrameEi(&(AnimFrameCtrl &)p->model, 1);
            BOOL r0 = nD::_ZN13AnimFrameCtrl14hasPassedFrameEi(&(AnimFrameCtrl &)p->model, 9);
            if (r4 != 0 || r0 != 0) {
                Unk_020133cc_Vec v;
                v.x = (r4 ? &p->jointPos[2] : &p->jointPos[1])->x;
                v.y = (r4 ? &p->jointPos[2] : &p->jointPos[1])->y;
                v.z = (r4 ? &p->jointPos[2] : &p->jointPos[1])->z;
                h.b = p->rotY + 0x8000;
                v.y = p->position.y;
                if (st == 2) Effect_Create(0, &v, &h.b, 0);
                Effect_Create(0x28, &v, &h, 0);
                playFootstepSe(p);
            }
        }
    }
    prevMoveMode = st;
}

void NpcActor::resetLastTaughtEmotion() {
    using namespace nD;
    lastTaughtEmotion = -1;
}

void NpcActor::setLastTaughtEmotion(s16 v) {
    using namespace nD;
    lastTaughtEmotion = v;
}

s16 NpcActor::getLastTaughtEmotion() {
    using namespace nD;
    return lastTaughtEmotion;
}

s32 NpcActor::getNewEmotionToLearn() {
    using namespace nD;
    s32 result = -1;
    if (nD::_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl)) {
        if (nD::_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 8) {
            if (nD::_ZN8NpcActor14getTalkRequestEv(this) != NULL && nD::_ZN16ActorTalkRequest15getPartnerActorEv(nD::_ZN8NpcActor14getTalkRequestEv(this)) == NULL) {
                s32 v = nD::_ZN13NpcActionCtrl12getEmotionIdEv(&actionCtrl);
                if (v > 0 && v < 0x3c && v != getLastTaughtEmotion()) {
                    if (Emotion_FindSlot((u8)v) == -1) {
                        result = v;
                        setLastTaughtEmotion((u8)v);
                    }
                }
            }
        }
    }
    return result;
}

s32 NpcActor::getTeachableEmotion() {
    using namespace nD;
    return -1;
}

VillagerRoute* VillagerRoute::resetTarget() {
    using namespace nD;
    targetUnit.x = 0;
    targetUnit.y = 0;
    targetBlockX = 0;
    targetBlockZ = 0;
    waypoint.x = 0;
    waypoint.z = 0;
    lastUnitX = 0;
    lastUnitZ = 0;
    return this;
}

namespace nD {
extern "C" void VillagerRoute_Destruct() {
}
}

void VillagerRoute::reset() {
    using namespace nD;
    MI_CpuFill8(this, 0, 0x9c);
    stepMode = 2;
    routeType = 7;
    unk_24 = -1;
    unk_26 = -1;
    pathMode = 2;
    approachDir = 4;
}

void VillagerRoute::start(u32 a, u32 idx, u32 b, u32 c) {
    using namespace nD;
    if (idx < 7) {
        reset();
        routeType = idx;
        stepMode = b;
        typeTable = &sVillagerRouteTypes[routeType];
        if (typeTable->pickTarget) {
            targetUnit = (this->*(typeTable->pickTarget))(a, c);
            s32 y = targetUnit.y;
            targetBlockX = targetUnit.x >> 4;
            targetBlockZ = y >> 4;
            nD::_ZN13VillagerRoute8planStepEP7VecFx32(this, a);
        }
    }
}

void VillagerRoute::rememberUnit(u32 v) {
    using namespace nD;
    FieldPos_ToUnit(&lastUnitX, &lastUnitZ, v);
}

void VillagerRoute::markUnitUnset() {
    using namespace nD;
    if (lastUnitX == 0 && lastUnitZ == 0) {
        lastUnitX = 0xff;
        lastUnitZ = 0xff;
    }
}

void VillagerRoute::checkUnitChanged(u32 v) {
    using namespace nD;
    u32 a = 0;
    u32 b = 0;
    FieldPos_ToUnit(&a, &b, v);
    if (lastUnitX != 0 && lastUnitZ != 0 && (lastUnitX != a || lastUnitZ != b)) {
        stepPhase = 3;
        nD::_ZN13VillagerRoute14clearJunctionsEv(this);
        pathDir = 0;
        pathMode = 2;
        nD::_ZN13VillagerRoute8planStepEP7VecFx32(this, v);
        approachDir = 4;
    }
}

void VillagerRoute::setStepMode(u32 v) {
    using namespace nD;
    stepMode = v;
}

BOOL VillagerRoute::isActive() {
    using namespace nD;
    if (routeType < 7) return TRUE;
    return FALSE;
}

namespace nD {
extern "C" BOOL _ZN13VillagerRoute11scanForPathEP7VecFx32P12RouteGridPosP5VecXZiS3_iP8BlockMap(void* unused, void* p1, u32* pos, u32* step, s32 n, u32* bound, s32 flag, void* q) {
    s32 i;
    u32 x = pos[0];
    u32 y = pos[1];
    s32 cnt = 0;
    s32 zero = 0;
    for (i = 0; i < n; i++) {
        x += step[0];
        y += step[1];
        if (x >= bound[0] || y >= bound[1]) continue;
        if (flag != 0) {
            GroundInfo o(x, y, zero, zero);
            if (o.waterKind != 0) cnt++; else cnt = zero;
            if (cnt >= 4) break;
        }
        if (_ZN8BlockMap12getWalkLinksEii(q, x, y)) {
            FieldPos_FromUnitCenter(p1, x, y);
            return TRUE;
        }
    }
    return FALSE;
}
}

u32 VillagerRoute::pickAdjacentUnit(VecFx32 *v, BlockMap *o) {
    using namespace nC;
    u8 mask = 0;
    RouteGridPos a, c, out;
    s32 n, i;
    u32 dir;
    a.x = 0;
    a.z = 0;
    c.x = 0;
    c.z = 0;
    out.x = 0;
    out.z = 0;
    n = 0;
    FieldPos_ToBlockUnit2(&a, &c, v);
    for (i = 0; i < 4; i++) {
        u32 x = c.x + ((VecXZ *)sRouteDirs)[i].x;
        u32 z = c.z + ((VecXZ *)sRouteDirs)[i].z;
        if (x < 16 && z < 16) {
            FieldUnit_FromBlockUnit(&out.x, &out.z, a.x, a.z, x, z);
            if (TownMap_IsUnitWalkable(out.x, out.z, o) != 0) {
                mask = mask | (1 << i);
                n++;
            }
        }
    }
    dir = Random_PickSetBit(mask, n, 4);
    if (dir < 4) {
        s32 off = dir * 8;
        FieldPos_FromBlockUnitCenter(v, a.x, a.z, c.x + *(s32 *)((u8 *)sRouteDirs + off), c.z + *(s32 *)((u8 *)(sRouteDirs + 1) + off));
        return dir;
    }
    return 4;
}

u32 VillagerRoute::findNearestPath(RouteGridPos *out, VecFx32 *pos) {
    using namespace nC;
    VecFx32 best;
    VecFx32 cand[4];
    u8 mask;
    BlockMap *o;
    RouteGridPos p, q;
    s32 dir;
    s32 x0, z0, x1, z1, flag, off, bestd;
    o = gSceneBlockMap;
    best.x = pos->x;
    best.y = pos->y;
    best.z = pos->z;
    mask = 0;
    p.x = 0;
    p.z = 0;
    q.x = 0;
    q.z = 0;
    dir = 4;
    if (o == 0) {
        return 4;
    }
    FieldPos_ToUnit(&p.x, &p.z, pos);
    RouteGridPos *pq = (RouteGridPos *)&o->units;
    q.x = pq->x;
    q.z = pq->z;
    if (_ZN8BlockMap17getWalkLinksAtPosEPv(o, pos) != 0) {
        return 4;
    }
    for (s32 i = 0; i < 4; i++) {
        cand[i].x = pos->x;
        cand[i].y = pos->y;
        cand[i].z = pos->z;
    }
    FieldPos_ToUnit(&p.x, &p.z, pos);
    flag = (BlockMap_GetBlockAttr(o, pos->x >> 17, pos->z >> 17) & 0x7f000) != 0 ? 1 : 0;
    x0 = p.x & 0xfff0;
    z0 = p.z & 0xfff0;
    x1 = x0 + 16;
    z1 = z0 + 16;
    if (scanForPath(&cand[0], &p, ((VecXZ *)sRouteDirs), p.z - z0, &q, flag, o)) {
        mask |= 1;
    }
    if (scanForPath(&cand[2], &p, &nC2::sRouteDirs[2], z1 - p.z, &q, flag, o)) {
        mask |= 4;
    }
    if (scanForPath(&cand[1], &p, &nC2::sRouteDirs[1], p.x - x0, &q, flag, o)) {
        mask |= 2;
    }
    if (scanForPath(&cand[3], &p, &nC2::sRouteDirs[3], x1 - p.x, &q, flag, o)) {
        mask |= 8;
    }
    if (mask != 0) {
        bestd = -4096;
        for (s32 i = 0; i < 4; i++) {
            s32 d;
            VecFx32 *pc = cand;
            d = Vec_DistXZ(pos, &pc[i]);
            if (((mask >> i) & 1) != 0) {
                if (bestd < 0 || d < bestd) {
                    best = pc[i];
                    bestd = d;
                    dir = i;
                }
            }
        }
    } else {
        u32 r = pickAdjacentUnit(&best, o);
        if (r < 4) {
            dir = r;
        }
    }
    FieldPos_ToUnit(&out->x, &out->z, &best);

    return dir;
}

s32 VillagerRoute::isArrived(VecFx32 *v) {
    using namespace nC;
    VillagerRouteType *t = typeTable;
    if (t != 0) {
        if (t->arrivedCheck != 0) {
            return (this->*(t->arrivedCheck))(v);
        }
    }
    return 0;
}

s32 VillagerRoute::firstDir(s32 v) {
    using namespace nC;
    if (v != 0) {
        for (s32 i = 0; i < 4; i++) {
            if (((v >> i) & 1) != 0) {
                return i;
            }
        }
    }
    return 4;
}

s32 VillagerRoute::scanDir(RouteGridPos *out, Unk_02012e08_Pos pos, u32 mask, RouteGridPos *lim, BlockMap *obj) {
    using namespace nC;
    s32 m, dx, dz;
    s32 d = firstDir(mask);
    if (d < 4) {
        dx = sRouteDirs[d * 2];
        dz = (sRouteDirs + 1)[d * 2];
        m = ~(mask | oppositeDirs(mask));
        s32 cnt = 0;
        while (pos.x < lim->x && pos.z < lim->z) {
            pos.x += dx;
            pos.z += dz;
            cnt++;
            s32 r = _ZN8BlockMap12getWalkLinksEii(obj, pos.x, pos.z);
            if (r == 0) {
                u32 z = pos.z - dz;
                out->x = pos.x - dx;
                out->z = z;
                return -(cnt - 1);
            }
            if ((r & m) != 0) {
                out->x = pos.x;
                out->z = pos.z;
                return cnt;
            }
        }
    }
    return 0;
}

void VillagerRoute::clearJunctions() {
    using namespace nC;
    MI_CpuFill8(junctions, 0, 90);
}

s32 VillagerRoute::countJunctions() {
    using namespace nC;
    u8 *e = junctions;
    for (s32 i = 0; i < 29; e += 3, i++) {
        if (((u32)(e[2] << 24) >> 28) == 0) {
            return i;
        }
    }
    return 29;
}

void VillagerRoute::pushJunction(u32 hi, u32 lo, RouteGridPos *p) {
    using namespace nC;
    s32 n = countJunctions();
    u8 *e = junctions + n * 3;
    for (; n > 0; n--) {
        MI_CpuCopy8(e - 3, e, 3);
        e -= 3;
    }
    e[2] = (e[2] & ~0xf0) | (((u8)(hi & 0xf) & 0xf) << 4);
    e[2] = (e[2] & ~0xf) | ((u8)(lo & 0xf) & 0xf);
    e[0] = p->x;
    e[1] = p->z;
}

s32 VillagerRoute::findJunction(RouteGridPos *p) {
    using namespace nC;
    u8 *e = junctions;
    for (s32 i = 0; i < 30; e += 3, i++) {
        if (p->x == e[0] && p->z == e[1]) {
            return i;
        }
    }
    return -1;
}

RouteJunction VillagerRoute::popJunction(RouteGridPos *p) {
    using namespace nC;
    s32 idx = findJunction(p);
    RouteJunction out;
    MI_CpuFill8(&out, 0, 3);
    if (idx != -1) {
        u8 *a = junctions;
        u8 *b = a + idx * 3;
        MI_CpuCopy8(b, &out, 3);
        b += 3;
        for (s32 i = idx; i < 29; i++) {
            MI_CpuCopy8(b, a, 3);
            b += 3;
            a += 3;
        }
        MI_CpuFill8(junctions + (29 - idx) * 3, 0, (idx + 1) * 3);
    }
    return out;
}

u32 VillagerRoute::getStage() {
    using namespace nC;
    return routeType;
}

s32 VillagerRoute::runStep(VecFx32 *v) {
    using namespace nC;
    VillagerRouteType *t = typeTable;
    if (t != 0 && stepMode < 2 && stepPhase < 3) {
        Unk_02012810_Fn *pf = &t->tbl[stepMode][stepPhase];
        if (*pf != 0) {
            s32 r = (this->*(*pf))(v);
            if (stepMode == 1) {
                nC::_ZN13VillagerRoute12rememberUnitEj(this, v);
            }
            return r;
        }
    }
    return 0;
}

namespace nC {
extern "C" void VillagerRoute_PickPathUnitInBlock(RouteGridPos *out, s32 unused, RouteGridPos *p, BlockMap *obj) {
    u32 bx = 0, bz = 0;
    u16 mask[16];
    s32 cnt = 0;
    s32 z, x;
    MI_CpuFill8(mask, 0, 32);
    FieldUnit_FromBlockUnit(&bx, &bz, p->x, p->z, 0, 0);
    for (z = 0; z < 16; z++) {
        for (x = 0; x < 16; x++) {
            if (_ZN8BlockMap12getWalkLinksEii(obj, bx + x, bz + z) != 0) {
                mask[z] |= 1 << x;
                cnt++;
            }
        }
    }
    if (cnt > 0) {
        s32 k = Random_GlobalBelow(cnt);
        u16 *row;
        s32 xx, zz;
        for (zz = 0; zz < 16; zz++) {
            for (xx = 0, row = &mask[zz]; xx < 16; xx++) {
                if (((*row >> xx) & 1) != 0) {
                    if (k == 0) {
                        out->x = 0;
                        out->z = 0;
                        out->x = bx + xx;
                        out->z = bz + zz;
                        return;
                    }
                    k--;
                }
            }
        }
    }
    out->x = 0;
    out->z = 0;
}
}

s32 VillagerRoute::oppositeDirs(s32 v) {
    using namespace nC;
    if (v != 0) {
        v = v << 2;
        if ((v & 0xf) == 0) {
            v = (v >> 4) & 0xf;
        }
        return v;
    }
    return 0;
}

void VillagerRoute::planStep(VecFx32 *pos) {
    using namespace nC;
    BlockMap *o = gSceneBlockMap;
    s32 dirs, found;
    s32 lo2, present, dirs2, cand, bestd, i, hi, lo, w, bx, bz;
    RouteGridPos q, p, r;
    VecFx32 uv, tv;

    if (o == 0) {
        return;
    }
    present = _ZN8BlockMap17getWalkLinksAtPosEPv(o, pos);
    if (present == 0) {
        approachDir = findNearestPath(&waypoint, pos);
        stepPhase = 0;
        clearJunctions();
        pathDir = 0;
        pathMode = 2;
        return;
    }
    dirs2 = dirs = oppositeDirs(pathDir);
    RouteGridPos *pq = (RouteGridPos *)&o->units;
    q.x = pq->x;
    q.z = pq->z;
    bx = 0;
    p.x = 0;
    p.z = 0;
    bz = 0;
    found = 0;
    r.x = 0;
    r.z = 0;
    bestd = -4096;
    FieldPos_ToUnit(&p.x, &p.z, pos);
    if ((present & ~dirs) == 0) {
        if (scanDir(&r, p, dirs, &q, o)) {
            waypoint.x = r.x;
            waypoint.z = r.z;
            pathMode = 1;
            pathDir = dirs;
        }
    } else if (pathMode != 1) {
        hi = found;
        lo = pathDir;
        if (findJunction(&p) != -1) {
            RouteJunction e1 = popJunction(&p);
            hi = e1.f.hi;
            lo = e1.f.lo;
            dirs2 = dirs2 | hi;
        }
        FieldPos_FromUnitCenter(&tv, targetUnit.x, targetUnit.y);
        for (i = 0; i < 4; i++) {
            if (((dirs2 >> i) & 1) == 0) {
                cand = present & (1 << i);
                if (cand != 0) {
                    if (scanDir(&r, p, cand, &q, o)) {
                        s32 d;
                        FieldPos_FromUnitCenter(&uv, r.x, r.z);
                        d = Vec_DistXZ(&tv, &uv);
                        if (bestd < 0 || d < bestd) {
                            bx = r.x;
                            bz = r.z;
                            bestd = d;
                            found = cand;
                        }
                    }
                }
            }
        }
        if (found != 0) {
            if (pathMode == 0) {
                pushJunction(hi | found, lo, &p);
            }
            waypoint.x = bx;
            waypoint.z = bz;
            pathMode = 0;
            pathDir = found;
        } else {
                if (scanDir(&r, p, dirs, &q, o)) {
                waypoint.x = r.x;
                waypoint.z = r.z;
                pathMode = 1;
                pathDir = dirs;
            }
        }
        stepPhase = 1;
    } else if (pathMode == 1) {
        s32 cand2, j;
        RouteJunction e2 = popJunction(&p);
        lo2 = e2.f.lo;
        w = oppositeDirs(lo2);
        FieldPos_FromUnitCenter(&tv, targetUnit.x, targetUnit.y);
        dirs = dirs | w;
        for (j = 0; j < 4; j++) {
            if (((dirs >> j) & 1) == 0) {
                cand2 = present & (1 << j);
                if (cand2 != 0) {
                    if (scanDir(&r, p, cand2, &q, o)) {
                        s32 d;
                        FieldPos_FromUnitCenter(&uv, r.x, r.z);
                        d = Vec_DistXZ(&tv, &uv);
                        if (bestd < 0 || d < bestd) {
                            bx = r.x;
                            bz = r.z;
                            bestd = d;
                            found = cand2;
                        }
                    }
                }
            }
        }
        if (found != 0) {
            if (lo2 == 0) {
                lo2 = pathDir;
            }
            waypoint.x = bx;
            waypoint.z = bz;
            pushJunction(e2.f.hi | found, lo2, &p);
            pathMode = 0;
            pathDir = found;
        } else {
                if (scanDir(&r, p, w, &q, o)) {
                waypoint.x = r.x;
                waypoint.z = r.z;
                pathMode = 1;
                pathDir = w;
            }
        }
        stepPhase = 1;
    }
    approachDir = 4;
}

BOOL VillagerRoute::followPathDir(VecFx32 *p, Vec2 *lim, BlockMap *w) {
    using namespace nB;
    nB::_ZN13VillagerRoute16checkUnitChangedEj(this);
    if ((u32)approachDir < 4) {
        Vec2 *tbl = (Vec2 *)sRouteDirs;
        Vec2 *e = &tbl[approachDir];
        s32 dx = tbl[approachDir].x;
        s32 dz = e->y;
        u32 a = 0;
        u32 b = 0;
        FieldPos_ToUnit((s32 *)&a, (s32 *)&b, p);
        for (; a < (u32)lim->x && b < (u32)lim->y;) {
            a += dx;
            b += dz;
            BOOL eq = FALSE;
            if (waypoint.x == a && waypoint.z == b) eq = TRUE;
            if (eq || _ZN8BlockMap12getWalkLinksEii(w, a, b)) {
                FieldPos_FromUnitCenter(p, a, b);
                nB::_ZN13VillagerRoute8planStepEP7VecFx32(this, p);
                break;
            }
            if (TownMap_IsUnitWalkable(a, b, w)) {
                FieldPos_FromUnitCenter(p, a, b);
                break;
            }
        }
    } else {
        nB::_ZN13VillagerRoute14clearJunctionsEv(this);
        pathDir = 0;
        pathMode = 2;
        nB::_ZN13VillagerRoute8planStepEP7VecFx32(this, p);
    }
    return FALSE;
}

BOOL VillagerRoute::stepFollowPath(VecFx32 *p) {
    using namespace nB;
    BlockMap *world = gSceneBlockMap;
    if (world) {
        Vec2 lim;
        Vec2 *sz = &world->units;
        lim = *sz;
        followPathDir(p, &lim, world);
        if (nB::_ZN13VillagerRoute9isArrivedEP7VecFx32(this, p)) {
            stepPhase = 2;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL VillagerRoute::advanceOnPath(VecFx32 *p, BlockMap *w) {
    using namespace nB;
    nB::_ZN13VillagerRoute16checkUnitChangedEj(this);
    s32 flag = pathDir;
    if (flag != 0) {
        s32 k = nB::_ZN13VillagerRoute8firstDirEi(this, flag);
        s32 a = 0;
        s32 b = 0;
        FieldPos_ToUnit(&a, &b, p);
        a += sRouteDirs[k * 2];
        b += (sRouteDirs + 1)[k * 2];
        if (!_ZN8BlockMap12getWalkLinksEii(w, a, b)) {
            FieldPos_FromUnitCenter(p, a, b);
            nB::_ZN13VillagerRoute14clearJunctionsEv(this);
            pathDir = 0;
            pathMode = 2;
            nB::_ZN13VillagerRoute8planStepEP7VecFx32(this, p);
            approachDir = 4;
            return FALSE;
        }
        FieldPos_FromUnitCenter(p, a, b);
        if (a == waypoint.x && b == waypoint.z) {
            nB::_ZN13VillagerRoute8planStepEP7VecFx32(this, p);
        }
        return FALSE;
    }
    nB::_ZN13VillagerRoute14clearJunctionsEv(this);
    pathDir = 0;
    pathMode = 2;
    nB::_ZN13VillagerRoute8planStepEP7VecFx32(this, p);
    return FALSE;
}

BOOL VillagerRoute::stepAlongPath(VecFx32 *p) {
    using namespace nB;
    BlockMap *world = gSceneBlockMap;
    if (world) {
        advanceOnPath(p, world);
        if (nB::_ZN13VillagerRoute9isArrivedEP7VecFx32(this, p)) {
            stepPhase = 2;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL VillagerRoute::pickAdjacent(VecFx32 *p, BlockMap *w) {
    using namespace nB;
    nB::_ZN13VillagerRoute16pickAdjacentUnitEP7VecFx32P8BlockMap(this);
    return FALSE;
}

BOOL VillagerRoute::stepAdjacentUnit(VecFx32 *p) {
    using namespace nB;
    BlockMap *world = gSceneBlockMap;
    if (world) {
        pickAdjacent(p, world);
        if (!nB::_ZN13VillagerRoute9isArrivedEP7VecFx32(this, p)) {
            nB::_ZN13VillagerRoute14clearJunctionsEv(this);
            pathDir = 0;
            pathMode = 2;
            nB::_ZN13VillagerRoute8planStepEP7VecFx32(this, p);
        } else {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL VillagerRoute::stepWander(VecFx32 *p) {
    using namespace nB;
    u16 mag = 0x7fff;
    s32 mode = Random_GlobalBelow(4);
    s32 base;
    volatile s32 i;
    volatile s32 len;
    volatile s32 zero0;
    volatile s32 zero1;
    VecFx32 tmp;
    FieldPos_FromUnitCenter(&tmp, targetUnit.x, targetUnit.y);
    if (mode == 0) {
        base = Math_AngleXZ(p, &tmp);
        mag = 0x1000;
    } else if (mode == 1) {
        base = (s16)Random_Next(gRandom);
    } else {
        base = (s16)Random_Next(gRandom);
        mag >>= 1;
    }
    i = 0;
    zero0 = 0;
    zero1 = 0;
    for (; i < 10; i++) {
        len = (Random_GlobalBelow(5) + 3) << 13;
        s32 r6 = (s16)Random_GlobalBelow(mag);
        if (Random_GlobalBelow(2)) {
            r6 = (s16)(r6 * ~zero1);
        }
        r6 = ((u16)(s16)(r6 + base) >> 4) << 1;
        tmp.x = p->x + func_01ffcb0c(len, data_02135f44[r6]);
        tmp.z = p->z + func_01ffcb0c(len, data_02135f44[r6 + 1]);
        FieldPos_SnapToUnitCenter(&tmp, &tmp);
        if (TownMap_IsPosWalkable(&tmp, zero0)) {
            p->x = tmp.x;
            p->z = tmp.z;
            break;
        }
        if ((i & 1) && mag != 0xffff) {
            mag = (u16)(mag + 0x1000);
        }
    }
    nB::_ZN13VillagerRoute13markUnitUnsetEv(this);
    if (nB::_ZN13VillagerRoute9isArrivedEP7VecFx32(this, p)) {
        stepPhase = 2;
        return TRUE;
    }
    return FALSE;
}

namespace nB {
extern "C" void VillagerRoute_PickAttr200Target(Vec2 *out, void *self) {
    BlockMap *world = gSceneBlockMap;
    out->x = 0;
    out->y = 0;
    if (world && BlockMap_FindBlockAllAttr(world, 0x200)) {
        Vec2 t;
        VillagerRoute_PickPathUnitInBlock(&t, self, _ZN12MapBlockAcre8getUnk04Ev(), world);
        *out = t;
    }
}
}

BOOL VillagerRoute::isInAttr200Block(VecFx32 *v) {
    using namespace nB;
    BlockMap *world = gSceneBlockMap;
    BOOL r = FALSE;
    if (world != NULL) {
        s32 x = v->x >> 17;
        s32 z = v->z >> 17;
        BOOL c = BlockMap_BlockHasAllAttr(world, x, z, 0x200);
        if (c) {
            r = TRUE;
        }
    }
    return r;
}

namespace nB {
extern "C" void VillagerRoute_PickOtherHouseDoor(Vec2 *out, void *self, u32 unused, NpcActor *obj) {
    out->x = 0;
    out->y = 0;
    if (obj->getVillagerData()) {
        s32 key;
        func_02133ef8(&key, 4);
        key = _ZN12VillagerData13getVillagerIdEv(obj->getVillagerData());
        if (SaveVillagers_PickRandomExcept(gSaveVillagers, &key, 1)) {
            u8 *p = _ZN20VillagerDataItemView11getHousePosEv();
            s32 z = p[1] + 1;
            out->x = p[0];
            out->y = z;
        }
    }
}
}

BOOL VillagerRoute::isAtDoorT1(VecFx32 *p) {
    using namespace nB;
    s32 a = 0;
    s32 b = 0;
    FieldPos_ToUnit(&a, &b, p);
    if (a == targetUnit.x && b == targetUnit.y) return TRUE;
    return FALSE;
}

BOOL VillagerRoute::stepCheckArrived(VecFx32 *p) {
    using namespace nB;
    if (!nB::_ZN13VillagerRoute9isArrivedEP7VecFx32(this, p)) {
        nB::_ZN13VillagerRoute14clearJunctionsEv(this);
        pathDir = 0;
        pathMode = 2;
        nB::_ZN13VillagerRoute8planStepEP7VecFx32(this, p);
        return FALSE;
    }
    return TRUE;
}

namespace nB {
extern "C" void VillagerRoute_PickOtherHouseBlock(Vec2 *out, void *self, u32 unused, NpcActor *obj) {
    BlockMap *world = gSceneBlockMap;
    out->x = 0;
    out->y = 0;
    if (world && obj->getVillagerData()) {
        s32 key;
        func_02133ef8(&key, 4);
        key = _ZN12VillagerData13getVillagerIdEv(obj->getVillagerData());
        if (SaveVillagers_PickRandomExcept(gSaveVillagers, &key, 1)) {
            u8 *p = _ZN20VillagerDataItemView11getHousePosEv();
            Vec2 pos;
            pos.x = 0;
            pos.y = 0;
            s32 y = p[1];
            pos.x = p[0] >> 4;
            pos.y = y >> 4;
            Vec2 t;
            VillagerRoute_PickPathUnitInBlock(&t, self, &pos, world);
            *out = t;
        }
    }
}
}

BOOL VillagerRoute::isInBlockT2(VecFx32 *v) {
    using namespace nB;
    s32 z = v->z >> 17;
    s32 x = v->x >> 17;
    if (x == targetBlockX && z == targetBlockZ) return TRUE;
    return FALSE;
}

namespace nB {
extern "C" void VillagerRoute_PickOwnHouseDoor(Vec2 *out, void *self, u32 unused, NpcActor *obj) {
    out->x = 0;
    out->y = 0;
    if (obj->getVillagerData()) {
        u8 *p = _ZN20VillagerDataItemView11getHousePosEv(obj->getVillagerData());
        s32 z = p[1] + 1;
        out->x = p[0];
        out->y = z;
    }
}
}

BOOL VillagerRoute::isAtDoorT3(VecFx32 *p) {
    using namespace nB;
    s32 a = 0;
    s32 b = 0;
    FieldPos_ToUnit(&a, &b, p);
    if (a == targetUnit.x && b == targetUnit.y) return TRUE;
    return FALSE;
}

BOOL VillagerRoute::stepToDoor(VecFx32 *p) {
    using namespace nB;
    s32 a = 0;
    s32 b = 0;
    FieldPos_ToUnit(&a, &b, p);
    if (a == targetUnit.x && b >= targetUnit.y && b <= targetUnit.y + 1) {
        FieldPos_FromUnitCenter(p, ((volatile Vec2 &)targetUnit).x, ((volatile Vec2 &)targetUnit).y);
    } else if (a >= targetUnit.x - 3 && a <= targetUnit.x + 4 && b >= targetUnit.y && b <= targetUnit.y + 5) {
        a = targetUnit.x;
        b = targetUnit.y + Random_GlobalBelow(2);
        FieldPos_FromUnitCenter(p, a, b);
    } else {
        stepWander(p);
    }
    nB::_ZN13VillagerRoute13markUnitUnsetEv(this);
    if (nB::_ZN13VillagerRoute9isArrivedEP7VecFx32(this, p)) {
        stepPhase = 2;
        return TRUE;
    }
    return FALSE;
}

namespace nB {
extern "C" void VillagerRoute_PickOwnHouseBlock(Vec2 *out, void *self, u32 unused, NpcActor *obj) {
    BlockMap *world = gSceneBlockMap;
    out->x = 0;
    out->y = 0;
    if (world && obj->getVillagerData()) {
        u8 *p = _ZN20VillagerDataItemView11getHousePosEv(obj->getVillagerData());
        Vec2 pos;
        pos.x = 0;
        pos.y = 0;
        s32 y = p[1];
        pos.x = p[0] >> 4;
        pos.y = y >> 4;
        Vec2 t;
        VillagerRoute_PickPathUnitInBlock(&t, self, &pos, world);
        *out = t;
    }
}
}

BOOL VillagerRoute::isInBlockT4(VecFx32 *v) {
    using namespace nB;
    s32 z = v->z >> 17;
    s32 x = v->x >> 17;
    if (x == targetBlockX && z == targetBlockZ) return TRUE;
    return FALSE;
}

namespace nB {
extern "C" void VillagerRoute_PickRandomBlock(Vec2 *out, void *self) {
    BlockMap *world = gSceneBlockMap;
    Vec2 pos;
    out->x = 0;
    out->y = 0;
    if (world) {
        Vec2 *size = &world->size;
        Vec2 szcopy;
        szcopy = *size;
        s32 w = szcopy.x;
        s32 h = size->y;
        pos.x = 0;
        pos.y = 0;
        if (w >= 3) {
            pos.x = Random_GlobalBelow(w - 2) + 1;
        }
        if (h >= 3) {
            pos.y = Random_GlobalBelow(h - 2) + 1;
            Vec2 t;
            VillagerRoute_PickPathUnitInBlock(&t, self, &pos, world);
            *out = t;
        }
    }
}
}

BOOL VillagerRoute::isInBlock(VecFx32 *v) {
    using namespace nB;
    s32 z = v->z >> 17;
    s32 x = v->x >> 17;
    if (x == targetBlockX && z == targetBlockZ) return TRUE;
    return FALSE;
}

namespace nB {
extern "C" void VillagerRoute_PickCoastBlock(Vec2 *out, void *self, VecFx32 *v) {
    BlockMap *world = gSceneBlockMap;
    u8 mask = 0;
    out->x = 0;
    out->y = 0;
    if (world) {
        Vec2 *size = &world->size;
        Vec2 szcopy;
        s32 count;
        s32 total;
        s32 sz;
        szcopy = *size;
        sz = szcopy.x;
        count = 0;
        total = 0;
        if (size->y > 4 && sz <= 8) {
            s32 px = v->x >> 17;
            s32 pz = v->z >> 17;
            s32 i;
            for (i = 1; i < sz - 1; i++) {
                if (i != px || pz != 4) {
                    MapBlock *c = GetCell(world, i, 4);
                    if (c && MapBlock_HasAnyAttr(c, 8)) {
                        mask |= 1 << (i - 1);
                        count++;
                    }
                }
                total++;
            }
        }
        u32 idx = Random_PickSetBit(mask, count, total);
        if (idx < (u32)total) {
            MapBlock *c = GetCell(world, idx + 1, 4);
            if (c) {
                Vec2 t;
                VillagerRoute_PickPathUnitInBlock(&t, self, _ZN12MapBlockAcre8getUnk04Ev(), world);
                *out = t;
            }
        }
    }
}
}

HeldToolModel *HeldToolModel::init() {
    using namespace nB;
    heldItem = 0xfff1;
    _ZN22NpcHeldItemModelHandleC1Ev(&modelHandle);
    heldItem = 0xfff1;
    return this;
}

HeldToolModel *HeldToolModel::destroy() {
    using namespace nB;
    _ZN22NpcHeldItemModelHandleD1Ev(&modelHandle);
    return this;
}

BOOL HeldToolModel::load(u32 a) {
    using namespace nB;
    if (!_ZN12NpcResHandle7acquireEv(&modelHandle)) return FALSE;
    if (!_ZN16NpcResHandleView12loadHeldItemEi(&modelHandle, a)) return FALSE;
    heldItem = 0xfff1;
    return TRUE;
}

BOOL HeldToolModel::attach(u32 a, u16 *b, u32 c, u16 d) {
    using namespace nB;
    void *p = _ZN16NpcResHandleView16getHeldItemModelEv(&modelHandle);
    if (p) {
        HeldItemModel_SetItem(p, b, 0);
        _ZN11NpcAnimCtrl16playHoldItemPoseEP8NpcActorPtPvt((void *)(a + 0x334), a, b, c, d);
        heldItem = *b;
        return TRUE;
    }
    return FALSE;
}

void HeldToolModel::playAnim(u32 a, u32 b, u32 c) {
    using namespace nA;
    HeldItemModel *r = _ZN16NpcResHandleView16getHeldItemModelEv(&modelHandle);
    if (r) HeldItemModel_PlayAnim(r, a, b, c);
}

void HeldToolModel::playIdleAnimFor(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->heldItem;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) {
        playAnim(0, a, b);
    } else if (Unk_02011c44_InRange(id, 0x1374, 0x1374) || Unk_02011c44_InRange(id, 0x1375, 0x1375)) {
        playAnim(0x13, 0, 0);
    } else if (Unk_02011c44_InRange(id, 0x1380, 0x139f)) {
        playAnim(0x25, 0, 0);
    }
}

void HeldToolModel::playIdleAnim(u32 a, u32 b) {
    using namespace nA;
    if (heldItem != 0xfff1) playIdleAnimFor(this, a, b);
}

void HeldToolModel::playWalkAnimFor(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->heldItem;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) playAnim(1, a, b);
}

void HeldToolModel::playWalkAnim(u32 a, u32 b) {
    using namespace nA;
    if (heldItem != 0xfff1) playWalkAnimFor(this, a, b);
}

void HeldToolModel::playPitfallFallAnimFor(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->heldItem;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) playAnim(0xf, a, b);
}

void HeldToolModel::playPitfallFallAnim(u32 a, u32 b) {
    using namespace nA;
    if (heldItem != 0xfff1) playPitfallFallAnimFor(this, a, b);
}

void HeldToolModel::playPitfallHoleAnimFor(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->heldItem;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) playAnim(0x10, a, b);
}

void HeldToolModel::playPitfallHoleAnim(u32 a, u32 b) {
    using namespace nA;
    if (heldItem != 0xfff1) playPitfallHoleAnimFor(this, a, b);
}

void HeldToolModel::playPitfallStuckAnimFor(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->heldItem;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) playAnim(0x11, a, b);
}

void HeldToolModel::playPitfallStuckAnim(u32 a, u32 b) {
    using namespace nA;
    if (heldItem != 0xfff1) playPitfallStuckAnimFor(this, a, b);
}

void HeldToolModel::playPitfallClimbOutAnimFor(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->heldItem;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) playAnim(0x12, a, b);
}

void HeldToolModel::playPitfallClimbOutAnim(u32 a, u32 b) {
    using namespace nA;
    if (heldItem != 0xfff1) playPitfallClimbOutAnimFor(this, a, b);
}

void HeldToolModel::release() {
    using namespace nA; _ZN12NpcResHandle7releaseEv(&modelHandle); }

void HeldToolModel::update(Unk_02006d14 *p) {
    using namespace nA;
    HeldItemModel *r = _ZN16NpcResHandleView16getHeldItemModelEv(&modelHandle);
    if (r) {
        u32 v = p->modelAnimFrameStep;
        AnimFrameCtrl &s = *HeldItemModel_GetModel(r);
        s.frameStep = v;
        HeldItemModel_Update(r);
    }
}

void HeldToolModel::draw(Unk_02006d14 *p) {
    using namespace nA;
    if (visible != 0) {
        HeldItemModel *r = _ZN16NpcResHandleView16getHeldItemModelEv(&modelHandle);
        if (p) {
            Unk_02006d14_TalkBase &s = *p;
            Model_GetJointWorldMtx(&s, handMtx, 0xe);
        }
        if (r) HeldItemModel_Draw(r, handMtx);
    }
}

u32 HeldToolModel::getAnimSpeed() {
    using namespace nA;
    HeldItemModel *r = _ZN16NpcResHandleView16getHeldItemModelEv(&modelHandle);
    if (r) return r->scale;
    return 0;
}

void HeldToolModel::setAnimSpeed(u32 v) {
    using namespace nA;
    HeldItemModel *r = _ZN16NpcResHandleView16getHeldItemModelEv(&modelHandle);
    if (r) r->scale = v;
}

BlendAnimModel *HeldToolModel::getModel() {
    using namespace nA;
    HeldItemModel *r = _ZN16NpcResHandleView16getHeldItemModelEv(&modelHandle);
    if (r) return HeldItemModel_GetModel(r);
    return 0;
}

void HeldToolModel::setModelAnimSpeed(u32 v) {
    using namespace nA;
    HeldItemModel *r = _ZN16NpcResHandleView16getHeldItemModelEv(&modelHandle);
    if (r) HeldItemModel_SetAnimSpeed(r, v);
}

inline SndSeEmitterKind1::~SndSeEmitterKind1() {}

inline NpcActor::~NpcActor() {}

namespace nZ {
extern "C" {
void *data_020d713c[2] = {(void *)_ZN13VillagerRoute16stepAdjacentUnitEP7VecFx32, 0};
void *data_020d72bc[2] = {(void *)_ZN13VillagerRoute14stepFollowPathEP7VecFx32, 0};
void *data_020d7314[2] = {(void *)_ZN13NpcActionCtrl10setupAct04EP8NpcActor, 0};
void *data_020d75e4[2] = {(void *)_ZN13NpcActionCtrl9postAct13EP12Unk_02006d14, 0};
Unk_02013260_Fn sVillagerRouteTypes[7][8] = {
    *(Unk_02013260_Fn *)data_020d7204, *(Unk_02013260_Fn *)data_020d71ec, *(Unk_02013260_Fn *)data_020d71e4, *(Unk_02013260_Fn *)data_020d7094, *(Unk_02013260_Fn *)data_020d71c4, *(Unk_02013260_Fn *)data_020d70bc, *(Unk_02013260_Fn *)data_020d71a4, *(Unk_02013260_Fn *)data_020d70d4,
    *(Unk_02013260_Fn *)data_020d718c, *(Unk_02013260_Fn *)data_020d70f4, *(Unk_02013260_Fn *)data_020d748c, *(Unk_02013260_Fn *)data_020d7104, *(Unk_02013260_Fn *)data_020d7114, *(Unk_02013260_Fn *)data_020d7154, *(Unk_02013260_Fn *)data_020d712c, *(Unk_02013260_Fn *)data_020d71b4,
    *(Unk_02013260_Fn *)data_020d722c, *(Unk_02013260_Fn *)data_020d7244, *(Unk_02013260_Fn *)data_020d7264, *(Unk_02013260_Fn *)data_020d727c, *(Unk_02013260_Fn *)data_020d729c, *(Unk_02013260_Fn *)data_020d72bc, *(Unk_02013260_Fn *)data_020d72d4, *(Unk_02013260_Fn *)data_020d72e4,
    *(Unk_02013260_Fn *)data_020d732c, *(Unk_02013260_Fn *)data_020d73f4, *(Unk_02013260_Fn *)data_020d74a4, *(Unk_02013260_Fn *)data_020d74e4, *(Unk_02013260_Fn *)data_020d74f4, *(Unk_02013260_Fn *)data_020d753c, *(Unk_02013260_Fn *)data_020d7574, *(Unk_02013260_Fn *)data_020d75ec,
    *(Unk_02013260_Fn *)data_020d75bc, *(Unk_02013260_Fn *)data_020d71dc, *(Unk_02013260_Fn *)data_020d70ac, *(Unk_02013260_Fn *)data_020d70c4, *(Unk_02013260_Fn *)data_020d70e4, *(Unk_02013260_Fn *)data_020d7174, *(Unk_02013260_Fn *)data_020d7124, *(Unk_02013260_Fn *)data_020d713c,
    *(Unk_02013260_Fn *)data_020d724c, *(Unk_02013260_Fn *)data_020d7284, *(Unk_02013260_Fn *)data_020d72c4, *(Unk_02013260_Fn *)data_020d769c, *(Unk_02013260_Fn *)data_020d740c, *(Unk_02013260_Fn *)data_020d74ec, *(Unk_02013260_Fn *)data_020d7504, *(Unk_02013260_Fn *)data_020d7694,
    *(Unk_02013260_Fn *)data_020d707c, *(Unk_02013260_Fn *)data_020d70dc, *(Unk_02013260_Fn *)data_020d70fc, *(Unk_02013260_Fn *)data_020d71bc, *(Unk_02013260_Fn *)data_020d728c, *(Unk_02013260_Fn *)data_020d7334, *(Unk_02013260_Fn *)data_020d734c, *(Unk_02013260_Fn *)data_020d7554,
};
void *data_020d7184[2] = {(void *)_ZN13NpcActionCtrl11act0EStep04EP12Unk_02006d14, 0};
void *data_020d72c4[2] = {(void *)_ZN13VillagerRoute10stepWanderEP7VecFx32, 0};
void *data_020d74a4[2] = {(void *)_ZN13VillagerRoute10stepToDoorEP7VecFx32, 0};
Unk_021be028_Dir sRouteDirs[4] = {Unk_021be028_Dir(0, -1), Unk_021be028_Dir(-1, 0), Unk_021be028_Dir(0, 1), Unk_021be028_Dir(1, 0)};
}
}
