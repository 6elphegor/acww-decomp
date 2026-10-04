#include "types.h"
#include "gfx/VecFx32.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcFootstepFx.h"
#include "sys/ProcBase.h"
#include "npc/NpcTalkCtrl.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "snd/SndSeEmitterKind1.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"

// The NpcActor destructor (and its seEmitter member's) is inlined into the derived destructor in this file.
inline SndSeEmitterKind1::~SndSeEmitterKind1() {}
inline NpcActor::~NpcActor() {}


extern "C" {
extern u32 data_020d6f54[];
extern u32 gCommManager;
extern u32 gVec3Zero;
extern const s32 data_020c6cf0;
extern u8 gFieldSceneKind;
}

s32 sSpNpcWalkAnimSpeedScale = data_020c6cf0 - 0x8000;

extern "C" {
void Proc_CreateRoot();
s32 Proc_CreateChild(u32 a, void *b, u32 c, u32 d);
s32 func_0211c618(s32 *out);
void ProcBase_RequestDelete();
void _ZN8ProcBase10postCreateEi(void *self, int a);
s32 SpNpc_GetInfoByte0(u16 *p);
void Npc_GetName(u32 a, u16 *p);
}

// ---- SpNpcActor (scene object derived from NpcActor) ----

#define SndSeEmitter_dtorBase _ZN12SndSeEmitterD2Ev
extern "C" void SndSeEmitter_dtorBase(void *p);





extern "C" {
void NpcRegistry_RemoveSpNpc(void *p);
BOOL _ZN11CommManager8isOnlineEv(u32 v);
BOOL NetArea_IsLocalOwner();
BOOL Vec_NotEqual(void *a, void *b);
void *_ZN17NpcClothTexHandle19getSpNpcAnimHeapRefEv(void *p);
BOOL _ZN12NpcResHandle7acquireEv(void *p);
void _ZN12NpcResHandle7releaseEv(void *p);
BOOL _ZN11NpcFaceAnim4loadEP8NpcActor(void *p, void *q);
BOOL _ZN11NpcAnimCtrl12initForActorEP8NpcActori(void *p, void *q, s32 r);
void _ZN13NpcActionCtrl11startActionEPhiiiisii(void *p, void *q, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void _ZN19ActorFollowCollider13setupForActorEPviijjjhi(void *p, void *q, s32 a, s32 b, s32 c, s32 d, s32 e, u32 f, s32 g);
BOOL NpcRegistry_AddSpNpc(void *p, void *q);
void _ZN13NpcFootstepFx15enableFootstepsEv(void *p);
s32 _ZN8NpcActor15netReadPositionEPiPh(void *self, void *a, void *b);
s32 SpNpcAnimHeapRef_GetHeap(void *p);
BOOL _ZN11CachedModel16allocJointRecordEPv(void *p, s32 v);
BOOL _ZN19ThreeLayerAnimModel16allocLayer3AnimsEj(void *p, s32 v);
}

static inline BOOL Unk_0202e318_IsOne(u8 v) {
    if (v == 1) {
        return TRUE;
    }
    return FALSE;
}


SpNpcActor::~SpNpcActor() {}

BOOL SpNpcActor::loadAnimSet() {
    void *p = _ZN17NpcClothTexHandle19getSpNpcAnimHeapRefEv(&animHeapHandle);
    if (!_ZN11CachedModel16allocJointRecordEPv(&model, SpNpcAnimHeapRef_GetHeap(p))) {
        return FALSE;
    }
    if (_ZN19ThreeLayerAnimModel16allocLayer3AnimsEj(&model, SpNpcAnimHeapRef_GetHeap(p))) {
        return TRUE;
    }
    return FALSE;
}

void SpNpcActor::setColliderSize(s32 a, s32 b) {
    colliderRadius = a;
    colliderHeight = b;
}

BOOL SpNpcActor::preCreate() {
    if (!NpcActor::preCreate()) {
        return FALSE;
    }
    setColliderSize(0x1000, 0x2000);
    talkMelodyPlayed = 0;
    return TRUE;
}

BOOL SpNpcActor::onCreate() {
    if (!NpcActor::onCreate()) {
        return FALSE;
    }
    if (!NetArea_IsLocalOwner() && _ZN11CommManager8isOnlineEv(gCommManager) && !netSyncOff) {
        VecFx32 v;
        s16 s;
        v.x = 0;
        v.y = 0;
        v.z = 0;
        s = 0;
        if (_ZN8NpcActor15netReadPositionEPiPh(this, &v, &s) && Vec_NotEqual(&v, &gVec3Zero)) {
            VecFx32 *p = (VecFx32 *)&position;
            p->x = v.x;
            p->y = v.y;
            p->z = v.z;
            rotY = s;
            moveAngleY = s;
        }
    }
    if (!_ZN17NpcClothTexHandle19getSpNpcAnimHeapRefEv(&animHeapHandle)) {
        if (!_ZN12NpcResHandle7acquireEv(&animHeapHandle)) {
            return FALSE;
        }
        if (!loadAnimSet()) {
            return FALSE;
        }
    }
    if (!_ZN11NpcFaceAnim4loadEP8NpcActor(&faceAnim, this)) {
        return FALSE;
    }
    if (!_ZN11NpcAnimCtrl12initForActorEP8NpcActori(&animCtrl, this, getWalkAnimSpeedScale())) {
        return FALSE;
    }
    _ZN13NpcActionCtrl11startActionEPhiiiisii(&actionCtrl, this, 0, 1, 0, 0, 0, 0, 0);
    _ZN19ActorFollowCollider13setupForActorEPviijjjhi(&collider, this, colliderRadius, colliderHeight, 8, 0x2fc, 3, (u8)getNpcIndex(), 0x1000);
    if (!NpcRegistry_AddSpNpc(this, &npcHandle)) {
        return FALSE;
    }
    _ZN13NpcFootstepFx15enableFootstepsEv(&footstepFx);
    return TRUE;
}

BOOL SpNpcActor::preDelete() {
    if (!NpcActor::preDelete()) {
        return FALSE;
    }
    NpcRegistry_RemoveSpNpc(&npcHandle);
    return TRUE;
}

BOOL SpNpcActor::onDelete() {
    if (!NpcActor::onDelete()) {
        return FALSE;
    }
    _ZN12NpcResHandle7releaseEv(&animHeapHandle);
    return TRUE;
}

void SpNpcActor::getName(u32 a) { Npc_GetName(a, &npcHandle); }

u32 SpNpcActor::getGender() { return SpNpc_GetInfoByte0(&npcHandle); }

BOOL SpNpcActor::canPlayTalkMelody() {
    if (!Unk_0202e318_IsOne(gFieldSceneKind) || talkMelodyPlayed == 0) {
        return TRUE;
    }
    return FALSE;
}

void SpNpcActor::onTalkMelodyPlayed() { talkMelodyPlayed = 1; }

u16 SpNpcActor::getSpecies() {
    u16 v = npcHandle;
    if (((v & 0xf000) >> 12) == 0xd) {
        return (v & 0xfff) + 0xc8;
    }
    return 0xffff;
}

BOOL SpNpcActor::getWalkAnimSpeedScale() { return sSpNpcWalkAnimSpeedScale; }

