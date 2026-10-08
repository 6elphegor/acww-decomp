// mwcc-version: 1.2/sp2
#include "types.h"
#include "gfx/NNSG3dResAnmCommon.h"
#include "actor/ActorProfile.h"
#include "gfx/AnimFrameCtrl.h"
#include "talk/TalkWindowState.h"
#include "gfx/Mtx43.h"
#include "sys/ProcBase.h"
#include "gfx/ModelAnim.h"
#include "item/PlayerMailbox.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/Model.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "snd/BuildingSeEmitter.h"
#include "town/BuildingActor.h"
#include "game/TouchPickSphere.h"
#include "gfx/DebugColor.h"
#include "game/TouchPicker.h"
#include "gfx/AnimModel.h"
#include "gfx/TwoLayerAnimModel.h"
#include "item/LetterView.h"
#include "net/CommManager.h"
#define PROTO_LOCAL_PlayerData_GetCurrent  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_PlayerData_GetMailbox  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_WorldCurve_ToCurved  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_0205b7b0.h"
#include "proto/main/unk_0206e54c.h"
#include "proto/main/unk_020b0e60.h"
#include "proto/ov003/unk_ov003_02204ce8.h"
#include "proto/ov003/unk_ov003_02216824.h"
#include "proto/ov003/unk_ov003_022187fc.h"













// ---- main-module helper classes ----







extern "C" {
extern void *gCommManager;
extern u8 data_021f47e0[];

BOOL Building_RequestState(void *o, s32 v);
BOOL TalkRequest_SetTargetDone(void *p);
s32 Ground_GetDefaultY(s32 a);
BOOL PlayerActor_LocalRequestMailboxOpen(void *p);
u32 WorldCurve_ToCurved(void *out, void *in);
void Mtx43_Translate(void *m, s32 a, s32 b, s32 c);
void *PlayerData_GetCurrent();
PlayerMailbox *PlayerData_GetMailbox(void *p);
s32 Vec_DistXZ(void *a, void *b);
s32 Math_AngleDiffAbs(s32 a, s32 b);
void *Scene_GetTouchPicker();
BOOL Scene_InTown();
}

// ============================================================ class Mailbox
class Mailbox : public BuildingActor {
public:
    Mailbox();
    virtual ~Mailbox();

    virtual BOOL onExecute();
    virtual BOOL acceptsInteraction(void *a);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual s32 setDoorState(s32 a);
    virtual BOOL initBuilding();
    virtual void updateDoorState();
    virtual BOOL needsMatrixUpdate();
    virtual BOOL calcCustomBaseMatrix(Mtx43 *a);

    // state methods (old file 022164d0)
    void execMailGone();
    BOOL enterMailGone();
    void execLidClose();
    BOOL enterLidClose();
    void execLidOpened();
    BOOL enterLidOpened();
    void execLidOpen();
    BOOL enterLidOpen();
    void execHasMail();
    BOOL enterHasMail();
    void execMailArrive();
    BOOL enterMailArrive();
    void execNoMail();
    BOOL enterNoMail();
    s32 execUseClose();

    // old file 02216df0
    s32 enterUseClose();
    s32 execUseMenuWait();
    s32 enterUseMenuWait();
    s32 execUseMenu();
    s32 enterUseMenu();
    s32 execUseOpen();
    s32 enterUseOpen();
    s32 execUseIdle();
    s32 enterUseIdle();
    void updateUseState();
    s32 setUseState(s32 idx);
    u32 isUsable();
    s32 countLetters();

    /* 0x2b0 */ s32 useState;
    /* 0x2b4 */ ModelAnim matAnim;
    /* 0x2d4 */ u32 touchSphere[0x1c / 4]; // a TouchPickSphere, built and destroyed by explicit C1/D1 calls
    /* 0x2f0 */ u8 canUse;
    /* 0x2f1 */ u8 pad_2f1[3];
};

typedef void (Mailbox::*Unk_ov003_02216c20_Fn)();
typedef BOOL (Mailbox::*Unk_ov003_02216cf8_Fn)();
typedef s32 (Mailbox::*Unk_ov003_02231e4c_Fn)();

// colour constants (sinit store order = definition order), then the registration entry
extern "C" DebugColor data_ov003_02235380(0x1f, 0x14, 0x14, 0x1f);
extern "C" DebugColor data_ov003_0223537c(0x14, 0x14, 0x1f, 0x1f);
extern "C" DebugColor data_ov003_02235390(0x1f, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov003_02235394(0x14, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov003_0223538c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" DebugColor data_ov003_02235388(0x14, 0x18, 0x18, 0x1f);
extern "C" ActorProfile sMailboxProfile = {(void *(*)())Mailbox_Create, 0x24, 0x2a, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" void *Mailbox_Create() {
    return new Mailbox;
}

Mailbox::Mailbox() {
    new ((TouchPickSphere *)touchSphere) TouchPickSphere();
}

Mailbox::~Mailbox() {
    ((TouchPickSphere *)((void *)((TouchPickSphere *)touchSphere)))->~TouchPickSphere();
}

BOOL Mailbox::initBuilding() {
    if (getBtaAnim(0)) {
        if (matAnim.allocMatAnm((NNSG3dResMdl *)(modelRes), gFieldStructureHeap)) {
            matAnim.init((s32)getBtaAnim(0), 1, 0x1000, 0);
            matAnim.addToRenderObj(((Model *)model)->getRenderObj());
        }
    }
    u8 b = (u8)BuildingList_IndexOf(this);
    struct {
        s32 x, y, z;
    } v;
    v.x = position.x;
    v.y = position.y;
    v.z = position.z;
    v.y = v.y + 0x1000;
    ((TouchPicker *)(Scene_GetTouchPicker()))->addSphere((TouchPickSphere *)((TouchPickSphere *)touchSphere), (VecFx32 *)(&v), (VecFx32 *)(0x1000), 7, b);
    canUse = 1;
    if (!Scene_InTown()) {
        canUse = 0;
    } else {
        void *g = gCommManager;
        if (((CommManager *)(g))->isOnline()) {
            if (!((CommManager *)(g))->isMyAid(0)) {
                canUse = 0;
            }
        }
    }
    setUseState(0);
    if (isUsable()) {
        setDoorState(0);
    } else {
        setDoorState(BuildingState_Get(itemId));
    }
    return TRUE;
}

BOOL Mailbox::onExecute() {
    updateUseState();
    ((TouchPicker *)(Scene_GetTouchPicker()))->pushSphere((TouchPickSphere *)((TouchPickSphere *)touchSphere));
    return TRUE;
}

BOOL Mailbox::needsMatrixUpdate() {
    return FALSE;
}

BOOL Mailbox::acceptsInteraction(void *a) {
    ((Character *)(this))->clearTalkStartMode();
    if (!isUsable()) {
        return FALSE;
    }
    if (doorState == 2 && a) {
        if (Vec_DistXZ(&((Actor *)a)->position, &position) < 0x2333) {
            if (Math_AngleDiffAbs((s16)(rotY + 0x8000), ((Actor *)a)->rotY) < 0x1200) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Mailbox::onInteractionEvent(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        setUseState(1);
        break;
    case 8:
        setUseState(0);
        break;
    }
}

s32 Mailbox::countLetters() {
    if (isUsable()) {
        PlayerMailbox *p = PlayerData_GetMailbox(PlayerData_GetCurrent());
        if (p) {
            s32 n = 0;
            u32 i;
            for (i = n; i < 10; i++) {
                void *l = p->getLetter(i);
                if (l) {
                    if (((LetterView *)(l))->getState()) {
                        n++;
                    }
                }
            }
            return n;
        }
    }
    return 0;
}

u32 Mailbox::isUsable() {
    return canUse;
}

BOOL Mailbox::calcCustomBaseMatrix(Mtx43 *a) {
    struct {
        s32 a, b, c;
    } v;
    s32 z = position.z - 0x1000;
    v.a = position.x + 0x2000;
    v.b = 0;
    v.c = z;
    drawTilt = WorldCurve_ToCurved(&drawPos, &v);
    makeCurvedMatrix((Mtx43 *)a);
    *(Mtx43 *)data_021f47e0 = *(Mtx43 *)a;
    Mtx43_Translate(data_021f47e0, (s32)0xffffe000, 0, 0x1000);
    *(Mtx43 *)a = *(Mtx43 *)data_021f47e0;
    return TRUE;
}

s32 Mailbox::setUseState(s32 idx) {
    static Unk_ov003_02231e4c_Fn tbl[5] = {
        &Mailbox::enterUseIdle,
        &Mailbox::enterUseOpen,
        &Mailbox::enterUseMenu,
        &Mailbox::enterUseMenuWait,
        &Mailbox::enterUseClose,
    };
    if (idx < 5) {
        if ((this->*tbl[idx])()) {
            useState = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Mailbox::updateUseState() {
    static Unk_ov003_02231e4c_Fn tbl[5] = {
        &Mailbox::execUseIdle,
        &Mailbox::execUseOpen,
        &Mailbox::execUseMenu,
        &Mailbox::execUseMenuWait,
        &Mailbox::execUseClose,
    };
    if (useState < 5) {
        (this->*tbl[useState])();
    }
}

s32 Mailbox::enterUseIdle() {
    return TRUE;
}

s32 Mailbox::execUseIdle() {
    return 0; // the original returns whatever r0 holds; callers ignore it
}

s32 Mailbox::enterUseOpen() {
    struct {
        s32 a, b, c;
    } v;
    v.a = position.x;
    v.b = Ground_GetDefaultY(0);
    v.c = position.z + 0x2000;
    if (PlayerActor_LocalRequestMailboxOpen(&v)) {
        Building_RequestState(this, 3);
    }
    return TRUE;
}

s32 Mailbox::execUseOpen() {
    if (doorState == 4) {
        setUseState(2);
    }
    return 0; // the original returns whatever r0 holds; callers ignore it
}

s32 Mailbox::enterUseMenu() {
    if (MenuCtrl_OpenLauncher(0x27)) {
        return TRUE;
    }
    return FALSE;
}

s32 Mailbox::execUseMenu() {
    return setUseState(3);
}

s32 Mailbox::enterUseMenuWait() {
    return TRUE;
}

s32 Mailbox::execUseMenuWait() {
    if (MenuCtrl_IsFinished()) {
        if (PlayerActor_LocalRequestMailboxWaitOrClose(2)) {
            setUseState(4);
        }
    }
    return 0; // the original returns whatever r0 holds; callers ignore it
}

// ---- old file 02216df0
s32 Mailbox::enterUseClose() {
    Building_RequestState(this, 5);
    return TRUE;
}

s32 Mailbox::execUseClose() {
    u8 s = doorState;
    if (s == 0 || s == 2) {
        TalkRequest_SetTargetDone(this);
    }
    return 0; // the original returns whatever r0 holds; callers ignore it
}

s32 Mailbox::setDoorState(s32 idx) {
    static Unk_ov003_02216cf8_Fn tbl[7] = {
        &Mailbox::enterNoMail, &Mailbox::enterMailArrive,
        &Mailbox::enterHasMail, &Mailbox::enterLidOpen,
        &Mailbox::enterLidOpened, &Mailbox::enterLidClose,
        &Mailbox::enterMailGone};
    if ((u32)idx < 7) {
        if ((this->*tbl[idx])() && BuildingState_Set(itemId, idx)) {
            doorState = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Mailbox::updateDoorState() {
    static Unk_ov003_02216c20_Fn tbl[7] = {
        &Mailbox::execNoMail, &Mailbox::execMailArrive,
        &Mailbox::execHasMail, &Mailbox::execLidOpen,
        &Mailbox::execLidOpened, &Mailbox::execLidClose,
        &Mailbox::execMailGone};
    if (doorState < 7) {
        (this->*tbl[doorState])();
    }
    if (matAnim.hasPassedFrame(0x12)) {
        ((BuildingSeEmitter *)seEmitter)->playSe(0x7de);
    }
}

BOOL Mailbox::enterNoMail() {
    NNSG3dResAnmCommon *b = (NNSG3dResAnmCommon *)getDoorInAnim();
    ((BlendAnimModel *)(model))->initAnim(b, 1, 0x1000, 0, 0);
    void *r4 = ((Model *)model)->getRenderObj();
    void *r2 = getBtaAnim(0);
    ((ModelAnim *)(&matAnim))->replace((s32)(r4), (s32)(r2), 1, 0x1000, 0);
    return TRUE;
}

void Mailbox::execNoMail() {
    if (countLetters()) {
        Building_RequestState(this, 1);
    }
}

BOOL Mailbox::enterMailArrive() {
    NNSG3dResAnmCommon *b = (NNSG3dResAnmCommon *)getDoorInAnim();
    ((BlendAnimModel *)(model))->initAnim(b, 1, 0x1000, 0, 0);
    return TRUE;
}

void Mailbox::execMailArrive() {
    if (isUsable() && ((AnimFrameCtrl *)doorAnimCtrl)->isFinished()) {
        Building_RequestState(this, 2);
    } else {
        ((AnimModel *)(model))->stepAnim();
    }
}

BOOL Mailbox::enterHasMail() {
    NNSG3dResAnmCommon *a = (NNSG3dResAnmCommon *)getDoorInAnim();
    NNSG3dResAnmCommon *b = (NNSG3dResAnmCommon *)getDoorInAnim();
    ((BlendAnimModel *)(model))->initAnim(b, 1, 0x1000, a->numFrame - 1, 0);
    void *r5 = ((Model *)model)->getRenderObj();
    void *r2 = getBtaAnim(0);
    ((ModelAnim *)(&matAnim))->replace((s32)(r5), (s32)(r2), 0, 0x1000, 0);
    return TRUE;
}

void Mailbox::execHasMail() {
    matAnim.step();
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
}

BOOL Mailbox::enterLidOpen() {
    NNSG3dResAnmCommon *b = (NNSG3dResAnmCommon *)getDoorOutAnim();
    ((BlendAnimModel *)(model))->initAnim(b, 1, 0x1000, 0, 0);
    ((BuildingSeEmitter *)seEmitter)->playSe(0x819);
    return TRUE;
}

void Mailbox::execLidOpen() {
    ((AnimModel *)(model))->stepAnim();
    matAnim.step();
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
    if (isUsable() && ((AnimFrameCtrl *)doorAnimCtrl)->isFinished()) {
        Building_RequestState(this, 4);
    }
}

BOOL Mailbox::enterLidOpened() {
    NNSG3dResAnmCommon *a = (NNSG3dResAnmCommon *)getDoorOutAnim();
    NNSG3dResAnmCommon *b = (NNSG3dResAnmCommon *)getDoorOutAnim();
    ((BlendAnimModel *)(model))->initAnim(b, 1, 0x1000, a->numFrame - 1, 0);
    return TRUE;
}

void Mailbox::execLidOpened() {
    matAnim.step();
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
}

BOOL Mailbox::enterLidClose() {
    NNSG3dResAnmCommon *a = (NNSG3dResAnmCommon *)getDoorOutAnim();
    NNSG3dResAnmCommon *b = (NNSG3dResAnmCommon *)getDoorOutAnim();
    ((BlendAnimModel *)(model))->initAnim(b, 3, 0x1000, a->numFrame - 1, 0);
    ((BuildingSeEmitter *)seEmitter)->playSe(0x81a);
    return TRUE;
}

void Mailbox::execLidClose() {
    if (isUsable() && ((AnimFrameCtrl *)doorAnimCtrl)->isFinished()) {
        if (countLetters() == 0) {
            Building_RequestState(this, 6);
        } else {
            Building_RequestState(this, 2);
        }
    } else {
        ((AnimModel *)(model))->stepAnim();
    }
    matAnim.step();
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
}

BOOL Mailbox::enterMailGone() {
    NNSG3dResAnmCommon *a = (NNSG3dResAnmCommon *)getDoorInAnim();
    NNSG3dResAnmCommon *b = (NNSG3dResAnmCommon *)getDoorInAnim();
    ((BlendAnimModel *)(model))->initAnim(b, 3, 0x1000, a->numFrame - 1, 0);
    ((BuildingSeEmitter *)seEmitter)->playSe(0x81b);
    return TRUE;
}

// ---- state methods
void Mailbox::execMailGone() {
    if (isUsable() && ((AnimFrameCtrl *)doorAnimCtrl)->isFinished()) {
        Building_RequestState(this, 0);
    } else {
        ((AnimModel *)(model))->stepAnim();
    }
    matAnim.step();
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
}

