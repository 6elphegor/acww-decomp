// mwcc-version: 1.2/sp2
// ov003 TU12 (actor 02231c14): .text 0x022165d0-0x02216824
#include "types.h"
#include "gfx/VecFx32.h"
#include "actor/ActorProfile.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "room/HouseData.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"

// shared_actor.h.txt -- declarations shared by the ov003 actor units (class family of ov009 BuildingActor).
// Written by the agent that owns ov003 TU06/07/09/10/11/12 (all 1.2/sp2).  Paste unchanged after `#include "types.h"`
// (do NOT include GameProc.h: the chain below is an own copy whose slot names are the real symbol names).
//
// Vtable of every actor (original vtable symbol minus 8 bytes, 0x150 bytes):
//   primary slots 0x00..0xb8 (0xbc bytes), then 8 bytes secondary header, then the secondary vtable of TalkMsgRequest
//   (D1, D0, 08..74).  Primary slot -> symbol:
//     00 ov009::vfunc_00      04 Character::preCreate   08 Character::postCreate(s32)   0c Base::vfunc_0c
//     10 ov009::vfunc_10      14 Actor::postDelete   18 Base::vfunc_18
//     1c ov009::vfunc_1c   (symbols.txt names it vfunc_24, ALIAS NEEDED)   20 ov009::vfunc_20(u32) (symbols: vfunc_28Ej, ALIAS)
//     24 Base::vfunc_24       28 ov009::vfunc_28 (symbols: vfunc_30Ev, ALIAS)   2c Actor::postDraw   30..3c Base
//     40 D1 44 D0   48 ov009::vfunc_48(Character*)   4c ov009::vfunc_4c(u32,u8)   50 ov009::vfunc_50
//     54/58/5c Character   60 ov009::vfunc_60(u32,void*)   64/68 ov009   6c ov009::vfunc_6c(s32)   70 ov009::vfunc_70
//     74 ov009::func_ov009_0225ca98   78..b0 ov009::vfunc_78..b0   b4 / b8 ov009::vfunc_b4/b8 (symbols: BuildingActor::getSoundPos /
//     BuildingActor::calcCustomBaseMatrix, ALIAS)
// Aliases (zero-size labels, tools/pipeline/alias.py) the coordinator must add; <existing> -> <new>:
//   ov009  _ZN13BuildingActor10preExecuteEv           -> _ZN13BuildingActor10preExecuteEv        (0x0225db04)
//   ov009  _ZN13BuildingActor11postExecuteEj           -> _ZN13BuildingActor11postExecuteEj        (0x0225da90)
//   ov009  _ZN13BuildingActor7preDrawEv           -> _ZN13BuildingActor7preDrawEv        (0x0225d9e4)
//   ov009  BuildingActor::getSoundPos                           -> _ZN13BuildingActor11getSoundPosEv        (0x0225b884)
//   ov009  BuildingActor::calcCustomBaseMatrix                           -> _ZN13BuildingActor20calcCustomBaseMatrixEv        (0x0225b880)
//   main   TalkMsgRequest slots: the unit uses the TalkMsgRequest slot names (onMessageStart ... onTalkEnd); no
//          primary-chain class of the family declares a method of these names.
//   ov003  0x0221445c is _ZThn236_N13BuildingActor12onMessageEndEv, the thunk of ov009::onMessageEnd in slot 0x14 of the secondary
//          vtable.  Every unit of the family names that slot onMessageEnd, so each emits the thunk as a link-once function and
//          the linker keeps the copy of the first unit in link order (unk_ov003_022141bc.cpp), as in the original.
// Notes:
//  * The ctor of a derived class calls BuildingActor::BuildingActor() (ov009 symbol C2 0x0225deec).
//  * Names a derived class must not reuse for its own members: unk_130 .. unk_2a4 below.














extern "C" {
extern u32 gCurrentHeap;
extern void *gFieldStructureHeap;
extern HouseData gSaveHouse;
extern const s8 sHexDigits[];
extern char data_ov003_02235358[];

s32 PlayerData_GetCurrentIndex();
s32 PlayerData_IsResidentIndex();
void *File_LoadAlloc(char *a, u32 b, s32 c, s32 *out);
void *NNS_G3dGetTex(void *p);
BOOL Gfx3d_LoadTex(void *p, u32 a);
void *Gfx3d_CopyTex(void *p, void *a);
void Mem_Free(void *p);
void NNS_G3dBindMdlTex(void *a, void *b);
void NNS_G3dBindMdlPltt(void *a, void *b);
void _ZN5Actor5spawnEPvS0_S0_S0_S0_(s32 a, s32 b, void *c, s32 d, s32 e);
s32 Str_SPrintf(char *buf, const char *fmt, ...);
BOOL _ZN13BuildingActor10getDoorPosEP7VecFx32Ps(void *self, void *v, s16 *ang);

BuildingActor *BuildingList_FindByItem(u32 a);
u32 Field_GetStructureTexSuffix();
void PlayerHouse_Create();
u8 PlayerHouse_GetTexIndex();
char *PlayerHouse_GetTexPath();
}
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_

class PlayerHouse : public BuildingActor {
public:
    PlayerHouse();
    virtual ~PlayerHouse();
    virtual BOOL onDraw();
    virtual BOOL initBuilding();
    virtual BOOL isOpen();
    virtual BOOL usesDoorApproach();
    virtual BOOL playsDoorMelody();
    virtual BOOL areLightsOn();

    void bindHouseTex();
    void loadHouseTex();

    /* 0x2b0 */ void *roofTex;
    /* 0x2b4 */ void *extraTex;
};


extern "C" const s8 sHexDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
extern "C" ActorProfile sPlayerHouseProfile = { (void *(*)())PlayerHouse_Create, 0x1f, 0x25, 0, 0xc8000, 0x12c000, 0x258000 };
extern "C" {
char data_ov003_02235358[0x20];
}

extern "C" void PlayerHouse_Create() {
    new PlayerHouse();
}

PlayerHouse::PlayerHouse() {}

PlayerHouse::~PlayerHouse() {}

BOOL PlayerHouse::initBuilding() {
    VecFx32 v;
    s16 ang;
    loadHouseTex();
    bindHouseTex();
    if (_ZN13BuildingActor10getDoorPosEP7VecFx32Ps(this, &v, &ang)) {
        v.x -= 0x2000;
        v.z += 0x1000;
        Actor_spawn(0x24, 0x501d, &v, 0, 0);
    }
    return TRUE;
}

BOOL PlayerHouse::onDraw() {
    BuildingActor *o = BuildingList_FindByItem(0x501d);
    if (o) {
        o->updateMatrix();
    }
    return TRUE;
}

extern "C" u8 PlayerHouse_GetTexIndex() { return gSaveHouse.getRoofColor(); }

extern "C" char *PlayerHouse_GetTexPath() {
    u32 i = PlayerHouse_GetTexIndex();
    u32 c = Field_GetStructureTexSuffix();
    Str_SPrintf(data_ov003_02235358, "/str/plHsTex/home%c%c.nsbtx", sHexDigits[i & 0xf], c);
    return data_ov003_02235358;
}

void PlayerHouse::loadHouseTex() {
    void *r4 = File_LoadAlloc(PlayerHouse_GetTexPath(), gCurrentHeap, -4, 0);
    roofTex = NNS_G3dGetTex(r4);
    if (Gfx3d_LoadTex(roofTex, 0)) {
        roofTex = Gfx3d_CopyTex(roofTex, gFieldStructureHeap);
    }
    Mem_Free(r4);
}

void PlayerHouse::bindHouseTex() {
    if (roofTex) {
        NNS_G3dBindMdlTex(modelRes, roofTex);
    }
    if (extraTex) {
        NNS_G3dBindMdlTex(modelRes, extraTex);
        NNS_G3dBindMdlPltt(modelRes, extraTex);
    }
}

BOOL PlayerHouse::usesDoorApproach() {
    PlayerData_GetCurrentIndex();
    if (PlayerData_IsResidentIndex() == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL PlayerHouse::areLightsOn() { return gSaveHouse.hasRoomFlags(); }

BOOL PlayerHouse::isOpen() { return TRUE; }

BOOL PlayerHouse::playsDoorMelody() { return TRUE; }

