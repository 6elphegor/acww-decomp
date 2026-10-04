// mwcc-version: 1.2/sp2
#include "types.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"






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
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual VecFx32 *getInteractionPos();
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
    virtual BOOL vfunc_ac();
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

struct Unk_ov003_022173a8_Glob {
    u8 pad[0x58];
    u32 nativeFruit;
};

extern "C" {
extern Unk_ov003_022173a8_Glob data_021ed150;

void ObjShadow_DrawSign(void *p);
s32 Field_GetSpawnedKind1Count();
void _ZN8ItemNameC1EPt(void *self, u16 *p);
void _ZN8ItemNameD1Ev(void *self);
}


// ============================================================ class TownSign
class TownSign : public BuildingActor {
public:
    TownSign();
    virtual ~TownSign();

    virtual BOOL onDraw();
    virtual BOOL vfunc_70();
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();

    /* 0x2b0 */ u16 signIndex;
    /* 0x2b2 */ u16 pad_2b2;
};

extern "C" void TownSign_Create() {
    new TownSign;
}

TownSign::TownSign() {
}

TownSign::~TownSign() {
}

BOOL TownSign::vfunc_70() {
    signIndex = Field_GetSpawnedKind1Count();
    return TRUE;
}

BOOL TownSign::onDraw() {
    ObjShadow_DrawSign(&position);
    return TRUE;
}

void TownSign::vfunc_78() {
    u16 v[2];
    u32 obj[9];
    setFileName("obj_etc_board");
    msgIndex = signIndex % 14 + 1;
    u16 w;
    if (data_021ed150.nativeFruit < 5) {
        w = data_021ed150.nativeFruit + 0x1518;
    } else {
        w = 0x1518;
    }
    v[1] = w;
    _ZN8ItemNameC1EPt(obj, &v[1]);
    unk_3c->setSlot(1, obj);
    _ZN8ItemNameD1Ev(obj);
}

BOOL TownSign::vfunc_8c() {
    return FALSE;
}

extern "C" Unk_ov003_SceneEntry sTownSignProfile = {(void *(*)())TownSign_Create, 0x20, 0x26, 0, 0xc8000, 0x12c000, 0x258000};
