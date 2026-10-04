// mwcc-version: 1.2/sp2
// ov003 TU07 (helper 02214e04 + actor 022312f4): .text 0x02214dfc-0x022150ec
#include "types.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "gfx/MatTexVramTask.h"

// shared_actor.h.txt -- declarations shared by the ov003 actor units (class family of ov009 BuildingActor).
// Written by the agent that owns ov003 TU06/07/09/10/11/12 (all 1.2/sp2).  Paste unchanged after `#include "types.h"`
// (do NOT include GameProc.h: the chain below is an own copy whose slot names are the real symbol names).
//
// Vtable of every actor (original vtable symbol minus 8 bytes, 0x150 bytes):
//   primary slots 0x00..0xb8 (0xbc bytes), then 8 bytes secondary header, then the secondary vtable of TalkMsgRequest
//   (D1, D0, 08..74).  Primary slot -> symbol:
//     00 ov009::vfunc_00      04 Character::vfunc_04   08 Character::postCreate(s32)   0c Base::vfunc_0c
//     10 ov009::vfunc_10      14 Actor::vfunc_14   18 Base::vfunc_18
//     1c ov009::vfunc_1c   (symbols.txt names it vfunc_24, ALIAS NEEDED)   20 ov009::vfunc_20(u32) (symbols: vfunc_28Ej, ALIAS)
//     24 Base::vfunc_24       28 ov009::vfunc_28 (symbols: vfunc_30Ev, ALIAS)   2c Actor::postDraw   30..3c Base
//     40 D1 44 D0   48 ov009::vfunc_48(Character*)   4c ov009::vfunc_4c(u32,u8)   50 ov009::vfunc_50
//     54/58/5c Character   60 ov009::vfunc_60(u32,void*)   64/68 ov009   6c ov009::vfunc_6c(s32)   70 ov009::vfunc_70
//     74 ov009::func_ov009_0225ca98   78..b0 ov009::vfunc_78..b0   b4 / b8 ov009::vfunc_b4/b8 (symbols: func_ov009_0225b884 /
//     func_ov009_0225b880, ALIAS)
// Aliases (zero-size labels, tools/pipeline/alias.py) the coordinator must add; <existing> -> <new>:
//   ov009  _ZN13BuildingActor10preExecuteEv           -> _ZN13BuildingActor10preExecuteEv        (0x0225db04)
//   ov009  _ZN13BuildingActor7preDrawEj           -> _ZN13BuildingActor8vfunc_20Ej        (0x0225da90)
//   ov009  _ZN13BuildingActor7preDrawEv           -> _ZN13BuildingActor7preDrawEv        (0x0225d9e4)
//   ov009  func_ov009_0225b884                           -> _ZN13BuildingActor8vfunc_b4Ev        (0x0225b884)
//   ov009  func_ov009_0225b880                           -> _ZN13BuildingActor8vfunc_b8Ev        (0x0225b880)
//   main   TalkMsgRequest slots: the unit uses the TalkMsgRequest slot names (onMessageStart ... onTalkEnd); no
//          primary-chain class of the family declares a method of these names.
//   ov003  0x0221445c is _ZThn236_N13BuildingActor12onMessageEndEv, the thunk of ov009::onMessageEnd in slot 0x14 of the secondary
//          vtable.  Every unit of the family names that slot onMessageEnd, so each emits the thunk as a link-once function and
//          the linker keeps the copy of the first unit in link order (unk_ov003_022141bc.cpp), as in the original.
// Notes:
//  * The ctor of a derived class calls BuildingActor::BuildingActor() (ov009 symbol C2 0x0225deec).
//  * Names a derived class must not reuse for its own members: unk_130 .. unk_2a4 below.




class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 status);
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL postDraw(s32 status);
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void setCharId(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slot names are TalkMsgRequest's; slot 0x14
// (onMessageEnd) is overridden by BuildingActor.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();

    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};


class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void onMessageStart();
    // Slot 0x14 has the name of BuildingActor::onMessageEnd, which overrides it: the vtable then names the shared
    // thunk _ZThn236_N13BuildingActor12onMessageEndEv (0x0221445c).  The compiler also emits a link-once copy of the
    // thunk in this unit; the linker keeps the first one (unk_ov003_022141bc.cpp) and drops this one.
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onConditionTag();
    virtual void onEventTag(u32 a);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();

    void setSpeakerName(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};



class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
    virtual BOOL vfunc_00();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void onMessageEnd();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 getBtaAnim(u32 a);
    void getResources();
    void updateMatrix();

    /* 0x130 */ u8 doorState;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 itemId;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *modelRes;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk baseMatrix;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 gridX;
    /* 0x22c */ u32 gridZ;
    /* 0x230 */ u8 exitDelay;
    /* 0x231 */ u8 colliderFlags;
    /* 0x232 */ Unk_ov003_Flags entryFlags;
    /* 0x233 */ u8 visitRefused;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 entryState;
    /* 0x27c */ u8 closedTalk;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 warpTimer;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *colliders;
    /* 0x28c */ u8 colliderCount;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_Vec entryPos;
    /* 0x2b0 */
};


struct GateHouseFlagTexture {
    GateHouseFlagTexture();
    ~GateHouseFlagTexture();
    BOOL apply(void *res, void *b);
    void cancelUpload();

    MatTexVramTask vramTask;
    u8 clothTex[4];
};

extern "C" {
extern u8 gSaveTownFlag[];
void ClothTex_Destruct(void *);
void ClothTex_Construct(void *);
BOOL ClothTex_LoadPattern(void *a, void *b);
void *ClothTex_GetTex(void *);
void *_ZN19TownStyleRecordView11getTownFlagEv(void *);
s32 TownFlag_GetPattern(s32);
void TownFlag_SetPattern(s32, void *);
s32 _ZN8TownFlag13getGateDesignEv(void *);
void _ZN9AnimModel8stepAnimEv(void *);
void FieldPos_ToUnit(s32 *, s32 *, s32 *);
BOOL Ground_SetQuadrantsBlocked(s32, s32, s32);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 Field_GetStructureTexSuffix();
u32 GateHouse_GetModelName();
s32 GateHouse_GetDesign();
void GateHouse_Create();
}
#define TownStyleRecordView_getTownFlag _ZN19TownStyleRecordView11getTownFlagEv
#define TownFlag_getGateDesign _ZN8TownFlag13getGateDesignEv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv

class GateHouse : public BuildingActor {
public:
    GateHouse();
    virtual ~GateHouse();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_70();
    virtual BOOL vfunc_94();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();

    /* 0x2b0 */ GateHouseFlagTexture flagTexture;
    /* 0x2dc */ u8 pad_2dc[0x59c - 0x2dc];
};


extern "C" {
char data_ov003_02235228[0x24];
char data_ov003_0223524c[0x24];
char data_ov003_02235204[0x24];
}

// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov003_SceneEntry sGateHouseProfile;
extern "C" char data_ov003_022312a4[12];
extern "C" u32 sGateHouseModelNames[3];
extern "C" char data_ov003_022312b0[12];
extern "C" char data_ov003_022312bc[12];

extern "C" void GateHouse_Create() {
    new GateHouse;
}

GateHouse::GateHouse() {
}

GateHouse::~GateHouse() {
}

BOOL GateHouse::vfunc_70() {
    void *t = modelRes;
    flagTexture.apply(t, (void *)TownFlag_GetPattern((s32)TownStyleRecordView_getTownFlag(gSaveTownFlag)));
    s32 x;
    s32 y;
    FieldPos_ToUnit(&x, &y, position);
    s32 i;
    for (i = -2; i <= 2; i++) {
        Ground_SetQuadrantsBlocked(x + i, y - 1, 0xf);
    }
    return TRUE;
}

BOOL GateHouse::onExecute() {
    AnimModel_stepAnim(unk_138);
    return TRUE;
}

BOOL GateHouse::onDraw() {
    return TRUE;
}

BOOL GateHouse::vfunc_0c() {
    flagTexture.cancelUpload();
    return TRUE;
}

extern "C" s32 GateHouse_GetDesign() {
    return TownFlag_getGateDesign(TownStyleRecordView_getTownFlag(gSaveTownFlag));
}

extern "C" u32 GateHouse_GetModelName() {
    return sGateHouseModelNames[GateHouse_GetDesign()];
}

extern "C" Unk_ov003_SceneEntry sGateHouseProfile = { (void *(*)())GateHouse_Create, 0x1c, 0x22, 0, 0xc8000, 0x12c000, 0x258000 };

char *GateHouse::vfunc_a4() {
    u32 x = GateHouse_GetModelName();
    s32 y = Field_GetStructureTexSuffix();
    func_020639e8(data_ov003_02235228, "/str/chkp/%s%c.arc", x, y);
    return data_ov003_02235228;
}

char *GateHouse::vfunc_a8() {
    u32 x = GateHouse_GetModelName();
    s32 y = Field_GetStructureTexSuffix();
    func_020639e8(data_ov003_02235204, "/str/chkp/%s%c.nsbtx", x, y);
    return data_ov003_02235204;
}

char *GateHouse::vfunc_ac() {
    u32 x = GateHouse_GetModelName();
    s32 y = Field_GetStructureTexSuffix();
    func_020639e8(data_ov003_0223524c, "/str/chkp/%s%c_lt.nsbtx", x, y);
    return data_ov003_0223524c;
}

BOOL GateHouse::vfunc_94() {
    return FALSE;
}

extern "C" BOOL GateHouse_ApplyTownFlag(GateHouse *self) {
    void *t = self->modelRes;
    self->flagTexture.apply(t, (void *)TownFlag_GetPattern((s32)TownStyleRecordView_getTownFlag(gSaveTownFlag)));
    return TRUE;
}

GateHouseFlagTexture::GateHouseFlagTexture() {
    ClothTex_Construct(clothTex);
}

GateHouseFlagTexture::~GateHouseFlagTexture() {
    ClothTex_Destruct(clothTex);
}

BOOL GateHouseFlagTexture::apply(void *res, void *b) {
    if (ClothTex_LoadPattern(clothTex, b)) {
        if (vramTask.request(res, (u32) "w", ClothTex_GetTex(clothTex), 0, 0)) {
            TownFlag_SetPattern((s32)TownStyleRecordView_getTownFlag(gSaveTownFlag), b);
            return TRUE;
        }
    }
    return FALSE;
}

void GateHouseFlagTexture::cancelUpload() {
    vramTask.cancel();
}

extern "C" u32 sGateHouseModelNames[3] = { (u32)data_ov003_022312bc, (u32)data_ov003_022312b0, (u32)data_ov003_022312a4 };
extern "C" char data_ov003_022312a4[12] = "obj_check2";
extern "C" char data_ov003_022312b0[12] = "obj_check1";
extern "C" char data_ov003_022312bc[12] = "obj_check0";




