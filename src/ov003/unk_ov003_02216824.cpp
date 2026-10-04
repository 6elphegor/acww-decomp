// mwcc-version: 1.2/sp2
#include "types.h"
#include "field/Unk_ov003_Flags.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "gfx/AnimFrameCtrl.h"
#include "talk/TalkWindowState.h"
#include "gfx/Unk_ov009_0225bc88_Blk.h"
#include "sys/ProcBase.h"
#include "gfx/ModelAnim.h"
#include "item/PlayerMailbox.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/Model.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"











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
    virtual void vfunc_74();
    virtual s32 vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void onMessageEnd(u32 attr);
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
    virtual BOOL vfunc_b8(void *a);

    void *getBtaAnim(u32 a);
    void makeCurvedMatrix(Unk_ov009_0225bc88_Blk *out);
    void updateMatrix();

    /* 0x12e */ u16 unk_12e;    // in TalkMsgRequest's tail padding (door-close SE delay in ov009)
    /* 0x130 */ u8 doorState;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 itemId;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *modelRes;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov009_0225bc88_Blk baseMatrix;
    /* 0x1cc */ u8 pad_1cc[0x1d4 - 0x1cc];
    /* 0x1d4 */ u8 unk_1d4[0x1f0 - 0x1d4];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 gridX;
    /* 0x22c */ u32 gridZ;
    /* 0x230 */ u8 exitDelay;
    /* 0x231 */ u8 colliderFlags;
    /* 0x232 */ Unk_ov003_Flags entryFlags;
    /* 0x233 */ u8 visitRefused;
    /* 0x234 */ u8 unk_234[0x278 - 0x234];
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

// ---- main-module helper classes ----



// Member at +0x2d4: the original constructs it with the base-object constructor (C1 here; the member is built with the complete-object ctor at 0x020b6a94), which a member declaration
// cannot do, so it is raw storage plus explicit calls through the real symbol names.
struct TouchPickSphere {
    u8 pad[0x1c];
};

class BuildingSeEmitter {
public:
    void playSe(u32 a);
};

struct Unk_ov003_02231e4c_Color {
    u8 a, b, c, d;
    Unk_ov003_02231e4c_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};


struct Unk_ov003_02216824_Rec {
    u32 pad_00;
    u16 numFrame;
};


extern "C" {
extern void *gFieldStructureHeap;
extern void *gCommManager;
extern u8 data_021f47e0[];

BOOL Building_RequestState(void *o, s32 v);
BOOL BuildingState_Set(u32 a, s32 b);
BOOL TalkRequest_SetTargetDone(void *p);
void _ZN14BlendAnimModel8initAnimEiiitt(void *self, void *a, s32 b, s32 c, u16 d, u16 e);
void _ZN9AnimModel8stepAnimEv(void *self);
void _ZN9ModelAnim7replaceEiiiit(void *self, void *a, void *b, s32 c, s32 d, u16 e);
BOOL MenuCtrl_IsFinished();
BOOL PlayerActor_LocalRequestMailboxWaitOrClose(s32 a);
BOOL MenuCtrl_OpenLauncher(u32 a);
s32 Ground_GetDefaultY(s32 a);
BOOL PlayerActor_LocalRequestMailboxOpen(void *p);
u32 WorldCurve_ToCurved(void *out, void *in);
void func_020e8528(void *m, s32 a, s32 b, s32 c);
void *PlayerData_GetCurrent();
PlayerMailbox *PlayerData_GetMailbox(void *p);
BOOL _ZN10LetterView8getStateEv();
s32 func_020e9650(void *a, void *b);
s32 func_020e780c(s32 a, s32 b);
void *Scene_GetTouchPicker();
void _ZN11TouchPicker10pushSphereEP15TouchPickSphere(void *self, void *o);
BOOL _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih(void *self, void *o, void *a, s32 b, s32 c, u8 d);
u32 BuildingList_IndexOf(void *p);
BOOL Scene_InTown();
BOOL _ZN11CommManager8isOnlineEv(void *self);
BOOL _ZN11CommManager7isMyAidEj(void *self, u32 a);
u32 BuildingState_Get(u32 a);
void Mailbox_Create();
void _ZN15TouchPickSphereC1Ev(TouchPickSphere *self);
void _ZN15TouchPickSphereD1Ev(TouchPickSphere *self);
void _ZN9Character18clearTalkStartModeEv(void *self, void *a);
}

// ============================================================ class Mailbox
class Mailbox : public BuildingActor {
public:
    Mailbox();
    virtual ~Mailbox();

    virtual BOOL onExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual BOOL vfunc_b0();
    virtual BOOL vfunc_b8(void *a);

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
    /* 0x2d4 */ TouchPickSphere touchSphere;
    /* 0x2f0 */ u8 canUse;
    /* 0x2f1 */ u8 pad_2f1[3];
};

typedef void (Mailbox::*Unk_ov003_02216c20_Fn)();
typedef BOOL (Mailbox::*Unk_ov003_02216cf8_Fn)();
typedef s32 (Mailbox::*Unk_ov003_02231e4c_Fn)();

// colour constants (sinit store order = definition order), then the registration entry
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235380(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_0223537c(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235390(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235394(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_0223538c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235388(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov003_SceneEntry sMailboxProfile = {(void *(*)())Mailbox_Create, 0x24, 0x2a, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" void Mailbox_Create() {
    new Mailbox;
}

Mailbox::Mailbox() {
    _ZN15TouchPickSphereC1Ev(&touchSphere);
}

Mailbox::~Mailbox() {
    _ZN15TouchPickSphereD1Ev(&touchSphere);
}

BOOL Mailbox::vfunc_70() {
    if (getBtaAnim(0)) {
        if (matAnim.allocMatAnm((u32)modelRes, gFieldStructureHeap)) {
            matAnim.init((s32)getBtaAnim(0), 1, 0x1000, 0);
            matAnim.addToRenderObj((u32)((Model *)unk_138)->getRenderObj());
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
    _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih(Scene_GetTouchPicker(), &touchSphere, &v, 0x1000, 7, b);
    canUse = 1;
    if (!Scene_InTown()) {
        canUse = 0;
    } else {
        void *g = gCommManager;
        if (_ZN11CommManager8isOnlineEv(g)) {
            if (!_ZN11CommManager7isMyAidEj(g, 0)) {
                canUse = 0;
            }
        }
    }
    setUseState(0);
    if (isUsable()) {
        vfunc_6c(0);
    } else {
        vfunc_6c(BuildingState_Get(itemId));
    }
    return TRUE;
}

BOOL Mailbox::onExecute() {
    updateUseState();
    _ZN11TouchPicker10pushSphereEP15TouchPickSphere(Scene_GetTouchPicker(), &touchSphere);
    return TRUE;
}

BOOL Mailbox::vfunc_b0() {
    return FALSE;
}

BOOL Mailbox::vfunc_48(void *a) {
    _ZN9Character18clearTalkStartModeEv(this, a);
    if (!isUsable()) {
        return FALSE;
    }
    if (doorState == 2 && a) {
        if (func_020e9650((u8 *)a + 0x5c, &position) < 0x2333) {
            if (func_020e780c((s16)(rotY + 0x8000), *(s16 *)((u8 *)a + 0x8e)) < 0x1200) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Mailbox::vfunc_4c(u32 a, u8 b) {
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
                if (p->getLetter(i)) {
                    if (_ZN10LetterView8getStateEv()) {
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

BOOL Mailbox::vfunc_b8(void *a) {
    struct {
        s32 a, b, c;
    } v;
    s32 z = position.z - 0x1000;
    v.a = position.x + 0x2000;
    v.b = 0;
    v.c = z;
    drawTilt = WorldCurve_ToCurved(&drawPos, &v);
    makeCurvedMatrix((Unk_ov009_0225bc88_Blk *)a);
    *(Unk_ov009_0225bc88_Blk *)data_021f47e0 = *(Unk_ov009_0225bc88_Blk *)a;
    func_020e8528(data_021f47e0, (s32)0xffffe000, 0, 0x1000);
    *(Unk_ov009_0225bc88_Blk *)a = *(Unk_ov009_0225bc88_Blk *)data_021f47e0;
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
}

s32 Mailbox::vfunc_6c(s32 idx) {
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

void Mailbox::vfunc_74() {
    static Unk_ov003_02216c20_Fn tbl[7] = {
        &Mailbox::execNoMail, &Mailbox::execMailArrive,
        &Mailbox::execHasMail, &Mailbox::execLidOpen,
        &Mailbox::execLidOpened, &Mailbox::execLidClose,
        &Mailbox::execMailGone};
    if (doorState < 7) {
        (this->*tbl[doorState])();
    }
    if (matAnim.hasPassedFrame(0x12)) {
        ((BuildingSeEmitter *)unk_234)->playSe(0x7de);
    }
}

BOOL Mailbox::enterNoMail() {
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 1, 0x1000, 0, 0);
    void *r4 = ((Model *)unk_138)->getRenderObj();
    void *r2 = getBtaAnim(0);
    _ZN9ModelAnim7replaceEiiiit(&matAnim, r4, r2, 1, 0x1000, 0);
    return TRUE;
}

void Mailbox::execNoMail() {
    if (countLetters()) {
        Building_RequestState(this, 1);
    }
}

BOOL Mailbox::enterMailArrive() {
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 1, 0x1000, 0, 0);
    return TRUE;
}

void Mailbox::execMailArrive() {
    if (isUsable() && ((AnimFrameCtrl *)unk_1d4)->isFinished()) {
        Building_RequestState(this, 2);
    } else {
        _ZN9AnimModel8stepAnimEv(unk_138);
    }
}

BOOL Mailbox::enterHasMail() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_64();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 1, 0x1000, a->numFrame - 1, 0);
    void *r5 = ((Model *)unk_138)->getRenderObj();
    void *r2 = getBtaAnim(0);
    _ZN9ModelAnim7replaceEiiiit(&matAnim, r5, r2, 0, 0x1000, 0);
    return TRUE;
}

void Mailbox::execHasMail() {
    matAnim.step();
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
}

BOOL Mailbox::enterLidOpen() {
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_68();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 1, 0x1000, 0, 0);
    ((BuildingSeEmitter *)unk_234)->playSe(0x819);
    return TRUE;
}

void Mailbox::execLidOpen() {
    _ZN9AnimModel8stepAnimEv(unk_138);
    matAnim.step();
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
    if (isUsable() && ((AnimFrameCtrl *)unk_1d4)->isFinished()) {
        Building_RequestState(this, 4);
    }
}

BOOL Mailbox::enterLidOpened() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_68();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_68();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 1, 0x1000, a->numFrame - 1, 0);
    return TRUE;
}

void Mailbox::execLidOpened() {
    matAnim.step();
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
}

BOOL Mailbox::enterLidClose() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_68();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_68();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 3, 0x1000, a->numFrame - 1, 0);
    ((BuildingSeEmitter *)unk_234)->playSe(0x81a);
    return TRUE;
}

void Mailbox::execLidClose() {
    if (isUsable() && ((AnimFrameCtrl *)unk_1d4)->isFinished()) {
        if (countLetters() == 0) {
            Building_RequestState(this, 6);
        } else {
            Building_RequestState(this, 2);
        }
    } else {
        _ZN9AnimModel8stepAnimEv(unk_138);
    }
    matAnim.step();
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
}

BOOL Mailbox::enterMailGone() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_64();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 3, 0x1000, a->numFrame - 1, 0);
    ((BuildingSeEmitter *)unk_234)->playSe(0x81b);
    return TRUE;
}

// ---- state methods
void Mailbox::execMailGone() {
    if (isUsable() && ((AnimFrameCtrl *)unk_1d4)->isFinished()) {
        Building_RequestState(this, 0);
    } else {
        _ZN9AnimModel8stepAnimEv(unk_138);
    }
    matAnim.step();
    *(s32 *)matAnim.anmObj = matAnim.curFrame;
}

