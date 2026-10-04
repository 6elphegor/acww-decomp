// mwcc-version: 1.2/sp2
#include "types.h"
#include "actor/ActorProfile.h"
#include "game/Unk_ov003_Vec.h"
#include "npc/VillagerId.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "talk/MsgString9B.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "game/TouchPickSphere.h"
#include "gfx/DebugColor.h"










struct Unk_02204930_Pad {
    s32 v;
    Unk_02204930_Pad() {}
    ~Unk_02204930_Pad() {}
};



struct TouchPicker;

extern "C" {
extern u8 gSaveVillagers[];
u8 *SaveVillagers_Get(u8 *p, s32 i);
VillagerId *_ZN12VillagerData13getVillagerIdEv(u8 *p);
void _ZN9Character17detachTalkRequestEi(void *self, TalkMsgRequest *sec);
void _ZN9Character17attachTalkRequestEi(void *self, TalkMsgRequest *sec);
BOOL _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih(TouchPicker *self, TouchPickSphere *o, s32 *a, s32 b, s32 c, u8 d);
BOOL TalkRequest_SetTargetDone(void *p);
s32 Vec_DistXZ(s32 *a, s32 *b);
s32 Math_AngleDiffAbs(s32 a, s32 b);
TouchPicker *Scene_GetTouchPicker();
void _ZN15TouchPickSphereC1Ev(TouchPickSphere *self);
void _ZN15TouchPickSphereD1Ev(TouchPickSphere *self);
void VillagerBoard_ResetTable();
}

class VillagerBoard;

// ---------------------------------------------------------------- VillagerBoard
class VillagerBoard : public Character, public TalkMsgRequest {
public:
    VillagerBoard();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~VillagerBoard();
    virtual BOOL acceptsInteraction(void *a);
    virtual void onInteractionEvent(u32 a, u8 b);

    void mainReadEnd();
    BOOL setupReadEnd();
    void mainRead();
    BOOL setupRead();
    void mainIdle();
    BOOL setupIdle();
    void runAct();
    BOOL changeAct(s32 m);

    /* 0x130 */ s32 act;
    /* 0x134 */ u32 touchSphere[0x1c / 4]; // a TouchPickSphere, built and destroyed by explicit C1/D1 calls
};

typedef void (VillagerBoard::*Unk_022049a8_Fn)();
typedef BOOL (VillagerBoard::*Unk_02204a24_Fn)();

extern "C" VillagerBoard *VillagerBoard_Create();

extern "C" VillagerBoard *sVillagerBoards[8];

extern "C" DebugColor data_ov003_02234f80(0x1f, 0x14, 0x14, 0x1f);
extern "C" DebugColor data_ov003_02234f64(0x14, 0x14, 0x1f, 0x1f);
extern "C" DebugColor data_ov003_02234f68(0x1f, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov003_02234f70(0x14, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov003_02234f6c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" DebugColor data_ov003_02234f74(0x14, 0x18, 0x18, 0x1f);
extern "C" {
u8 sVillagerBoardCount;
}

extern "C" VillagerBoard *VillagerBoard_Create() {
    return new VillagerBoard;
}

VillagerBoard::VillagerBoard() {
    _ZN15TouchPickSphereC1Ev((TouchPickSphere *)touchSphere);
}

VillagerBoard::~VillagerBoard() {
    _ZN15TouchPickSphereD1Ev((TouchPickSphere *)touchSphere);
}

BOOL VillagerBoard::onCreate() {
    VillagerBoard_ResetTable();
    setCharId((u16) * (s32 *)((u8 *)this + 8));
    changeAct(0);
    sVillagerBoards[*(s32 *)((u8 *)this + 8)] = this;
    sVillagerBoardCount++;
    return TRUE;
}

BOOL VillagerBoard::onExecute() {
    runAct();
    _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih(Scene_GetTouchPicker(), (TouchPickSphere *)touchSphere, &position.x, 0xc00, 9, *(s32 *)((u8 *)this + 8));
    return TRUE;
}

BOOL VillagerBoard::onDraw() {
    return TRUE;
}

BOOL VillagerBoard::onDelete() {
    sVillagerBoards[*(s32 *)((u8 *)this + 8)] = 0;
    sVillagerBoardCount--;
    return TRUE;
}

extern "C" void VillagerBoard_ResetTable() {
    if (sVillagerBoardCount == 0) {
        u32 i;
        for (i = 0; i < 8; i++) {
            sVillagerBoards[i] = 0;
        }
    }
}

BOOL VillagerBoard::acceptsInteraction(void *a) {
    clearTalkStartMode();
    Character *o = (Character *)a;
    if (o) {
        if (Vec_DistXZ(&o->position.x, &position.x) < 0x2333) {
            if (Math_AngleDiffAbs(-0x8000, o->rotY) <= 0x1100) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void VillagerBoard::onInteractionEvent(u32 a, u8 b) {
    switch (a) {
    case 0:
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

BOOL VillagerBoard::changeAct(s32 m) {
    static Unk_02204a24_Fn tbl[3] = { (Unk_02204a24_Fn)&VillagerBoard::setupIdle, (Unk_02204a24_Fn)&VillagerBoard::setupRead, (Unk_02204a24_Fn)&VillagerBoard::setupReadEnd };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            act = m;
            return TRUE;
        }
    }
    return FALSE;
}

void VillagerBoard::runAct() {
    static Unk_022049a8_Fn tbl[3] = { &VillagerBoard::mainIdle, &VillagerBoard::mainRead, &VillagerBoard::mainReadEnd };
    if (act < 3) {
        (this->*tbl[act])();
    }
}

extern "C" ActorProfile sVillagerBoardProfile = {(void *(*)())VillagerBoard_Create, 0x18, 0x1d, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" {
VillagerBoard *sVillagerBoards[8];
}

BOOL VillagerBoard::setupIdle() {
    return TRUE;
}

void VillagerBoard::mainIdle() {}

BOOL VillagerBoard::setupRead() {
    Unk_02204930_Pad pad;
    _ZN9Character17attachTalkRequestEi(this, this);
    setFileName("obj_etc_board");
    msgIndex = 0;
    ((TalkWindowState *)window)->nextState = 1;
    MsgString9B buf;
    _ZN12VillagerData13getVillagerIdEv(SaveVillagers_Get(gSaveVillagers, *(s32 *)((u8 *)this + 8)))->getName((u32)&buf);
    ((TalkWindowState *)window)->setSlot(0, &buf);
    return TRUE;
}

void VillagerBoard::mainRead() {
    if (window) {
        if (((TalkWindowState *)window)->state) {
            changeAct(2);
        }
    }
}

BOOL VillagerBoard::setupReadEnd() {
    return TRUE;
}

void VillagerBoard::mainReadEnd() {
    if (window) {
        if (((TalkWindowState *)window)->state == 0) {
            _ZN9Character17detachTalkRequestEi(this, this);
            TalkRequest_SetTargetDone(this);
        }
    }
}

// ================================================================
extern "C" VillagerBoard *VillagerBoard_Get(s32 i) {
    if (i >= 0 && i < 8) {
        return sVillagerBoards[i];
    }
    return 0;
}

