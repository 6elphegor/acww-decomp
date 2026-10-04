#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"

extern "C" {
void Oam_DrawCell(u32 a, u32 h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 Gfx2d_SetMainObjWinPlanes(u32 a);
s32 Gfx2d_SetMainWinOutPlanes(u32 a);
s32 Gfx2d_EnableMainWindows(u32 a);
s32 Gfx2d_DisableMainWindows(u32 a);
s32 Snd_StopSe(u32 a, u32 b);
void func_02004008(u32 a);
s32 TalkRequestFlags_IsSceneHold();
extern u32 data_020d5b0c[][2];
extern u8 data_020d5d34[];
extern u32 *data_020d5d0c[];
}
extern "C" u64 OS_GetTick(void);

extern const u8 sCommIconShowDelays[4];
extern const u8 sCommIconHideDelays[4];
extern const u16 sBusyIconSe[2];


struct Unk_0208e9d4_Ptr {
    u8 pad[0xc];
    u16 profile;
};
extern "C" Unk_0208e9d4_Ptr *gActorDefaultParent;

extern "C" CommManager *gCommManager;

struct SpriteAnimSeq;

class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void *getCell();
    void setSeq(SpriteAnimSeq *p);
    void setPlayOnce(s32 v);
    void restart();

    /* 0x00 */ u8 unk_00[0x14];
};

class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);
    s32 getOriginY();
    s32 getOriginX();

    /* 0x04 */ s32 originX;
    /* 0x08 */ s32 originY;
};

class TalkBusyIcon : public UiWidget {
public:
    TalkBusyIcon();
    virtual ~TalkBusyIcon();
    virtual void draw();
    virtual void vfunc_0c();
    void stopSe();
    void startSe();
    void updateShown();
    void enterShown();
    void updateHidden();
    void enterHidden();
    void setPos(s32 a, s32 b);
    void callDraw();
    void callUpdate();
    void exit();
    void init();
    void requestHide();
    void requestShow(u32 v);

    /* 0x0c */ s32 state;
    /* 0x10 */ u16 rotation;
    /* 0x12 */ u8 objWindow;
    /* 0x13 */ u8 showRequested;
    /* 0x14 */ s32 posX;
    /* 0x18 */ s32 posY;
    /* 0x1c */ s32 seIndex;
    /* 0x20 */ u8 sePlaying;
};

class TransitionCommIcon : public UiWidget {
public:
    TransitionCommIcon();
    virtual ~TransitionCommIcon();
    virtual void draw();
    virtual void vfunc_0c();
    void updateShown();
    void setupAnim();
    void enterShown();
    void updateHidden();
    void enterHidden();
    void callDraw();
    void callUpdate();
    void exit();
    void init();

    /* 0x0c */ SpriteAnim anim;
    /* 0x20 */ s32 state;
    /* 0x24 */ s32 showDelay;
    /* 0x28 */ s32 hideDelay;
    /* 0x2c */ s32 blinkPhase;
    /* 0x30 */ u64 blinkDeadline;
    /* 0x38 */ u8 blinkOn;
    /* 0x39 */ u8 suspended;
};

class TransitionCommIconProc : public GameProc {
public:
    TransitionCommIconProc();
    virtual ~TransitionCommIconProc();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
};

// Vtable at 0x020e1164 belongs to the next unit; only the members used here
class InputModeIcon : public UiWidget {
public:
    InputModeIcon();
    virtual ~InputModeIcon();
    virtual void draw();
    virtual void vfunc_0c();

    void startModeAnim();
    BOOL isDrawBlocked();
    void exit();
    void init();

    /* 0x0c */ s32 inputMode;
    /* 0x10 */ s32 shownMode;
    /* 0x14 */ SpriteAnim anim;
    /* 0x28 */ u8 isVisible;
};

extern "C" TransitionCommIconProc *TransitionCommIconProc_Create();

extern TransitionCommIcon sTransitionCommIcon;

extern "C" {
void TransitionCommIcon_Draw();
void TransitionCommIcon_Update();
void TransitionCommIcon_Exit();
void TransitionCommIcon_Init();
}

typedef void (TransitionCommIcon::*Unk_020e10f8_Fn)();

typedef void (TalkBusyIcon::*Unk_020e10dc_Fn)();

struct Unk_020e10bc_Rec {
    TransitionCommIconProc *(*fn)();
    s16 executePriority;
    s16 drawPriority;
};
extern Unk_020e10bc_Rec sTransitionCommIconProfile;

BOOL InputModeIcon::isDrawBlocked() {
    BOOL r = FALSE;
    if (TalkRequestFlags_IsSceneHold()) {
        r = TRUE;
    }
    return r;
}

void InputModeIcon::init() {}

void InputModeIcon::exit() {}

void InputModeIcon::startModeAnim() {
    if (inputMode == 0) {
        isVisible = 0;
    } else {
        s32 i;
        if (inputMode == 1) {
            i = 0x43;
        } else {
            i = 0x44;
        }
        anim.setSeq((SpriteAnimSeq *)data_020d5b0c[i]);
        anim.setPlayOnce(1);
        anim.restart();
        isVisible = 1;
    }
}

void TalkBusyIcon::requestShow(u32 v) {
    showRequested = 1;
    seIndex = v;
}

void TalkBusyIcon::requestHide() {
    showRequested = 0;
}

TalkBusyIcon::TalkBusyIcon() {
    state = 0;
    rotation = 0;
    objWindow = 0;
    showRequested = 0;
    posX = 0;
    posY = 0;
    seIndex = 0;
    sePlaying = 0;
}

TalkBusyIcon::~TalkBusyIcon() {
    stopSe();
}

void TalkBusyIcon::draw() {
    if (state != 0) {
        s32 x = posX + getOriginX();
        s32 y = posY + getOriginY();
        u32 h0 = *data_020d5d0c[0];
        u32 h1 = *data_020d5d0c[4];
        Oam_DrawCell(0, h0, x, y, -1, -1, 0x1000, 0x1000, rotation, -1, 0, 0);
        Oam_DrawCell(0, h1, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        if (objWindow != 0) {
            Oam_DrawCell(0, h0, x, y, -1, -1, 0x1000, 0x1000, rotation, 2, 0, 0);
            Oam_DrawCell(0, h1, x, y, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
        }
    }
}

void TalkBusyIcon::vfunc_0c() {
    static Unk_020e10dc_Fn tbl[2] = {&TalkBusyIcon::updateHidden, &TalkBusyIcon::updateShown};
    rotation += 0x1111;
    (this->*tbl[state])();
}

void TalkBusyIcon::init() { enterHidden(); }

void TalkBusyIcon::exit() {}

void TalkBusyIcon::callUpdate() { vfunc_0c(); }

// ---- TalkBusyIcon ----
void TalkBusyIcon::callDraw() { draw(); }

void TalkBusyIcon::setPos(s32 a, s32 b) {
    posX = a;
    posY = b;
}

void TalkBusyIcon::enterHidden() { state = 0; }

void TalkBusyIcon::updateHidden() {
    if (showRequested != 0) {
        enterShown();
    }
}

void TalkBusyIcon::enterShown() {
    state = 1;
    startSe();
    if (objWindow != 0) {
        Gfx2d_SetMainObjWinPlanes(0x10);
        Gfx2d_EnableMainWindows(4);
    }
}

void TalkBusyIcon::updateShown() {
    if (showRequested == 0) {
        stopSe();
        if (objWindow != 0) {
            Gfx2d_DisableMainWindows(4);
        }
        enterHidden();
    }
}

void TalkBusyIcon::startSe() {
    u16 v = sBusyIconSe[seIndex];
    sePlaying = 1;
    func_02004008(v);
}

void TalkBusyIcon::stopSe() {
    u16 v = sBusyIconSe[seIndex];
    if (sePlaying != 0) {
        sePlaying = 0;
        Snd_StopSe(v, 1);
    }
}

TransitionCommIcon::TransitionCommIcon() : state(0), showDelay(0), hideDelay(0), blinkPhase(0), blinkDeadline(0), blinkOn(0), suspended(0) {}

TransitionCommIcon::~TransitionCommIcon() {}

void TransitionCommIcon::draw() {
    if (blinkOn != 0) {
        if (suspended == 0) {
            s32 x = getOriginX();
            s32 y = getOriginY();
            u32 h = (u32)anim.getCell();
            Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
        }
    }
}

const u16 sBusyIconSe[2] = {4, 5};
const u8 sCommIconShowDelays[4] = {8, 8, 8, 1};
const u8 sCommIconHideDelays[4] = {5, 5, 5, 1};

void TransitionCommIcon::vfunc_0c() {
    static Unk_020e10f8_Fn tbl[2] = {&TransitionCommIcon::updateHidden, &TransitionCommIcon::updateShown};
    (this->*tbl[state])();
}

extern "C" void TransitionCommIcon_RequestShow(u32 i) {
    u32 t = gActorDefaultParent->profile;
    BOOL e = gCommManager->isOnline();
    if (t != 5 && e) {
        sTransitionCommIcon.showDelay = sCommIconShowDelays[i];
    }
}

extern "C" void TransitionCommIcon_RequestHide(u32 i) {
    if (gActorDefaultParent->profile != 5) {
        sTransitionCommIcon.hideDelay = sCommIconHideDelays[i];
    }
}

extern "C" void TransitionCommIcon_Resume() {
    if (sTransitionCommIcon.state != 0) {
        Gfx2d_SetMainObjWinPlanes(0x10);
        Gfx2d_EnableMainWindows(4);
    }
    sTransitionCommIcon.suspended = 0;
}

extern "C" void TransitionCommIcon_ResumeWinOut() {
    if (sTransitionCommIcon.state != 0) {
        Gfx2d_SetMainObjWinPlanes(0x10);
        Gfx2d_SetMainWinOutPlanes(4);
        Gfx2d_EnableMainWindows(4);
    }
    sTransitionCommIcon.suspended = 0;
}

extern "C" void TransitionCommIcon_Suspend() { sTransitionCommIcon.suspended = 1; }

extern "C" void TransitionCommIcon_Init() { sTransitionCommIcon.init(); }

extern "C" void TransitionCommIcon_Exit() { sTransitionCommIcon.exit(); }

extern "C" void TransitionCommIcon_Update() { sTransitionCommIcon.callUpdate(); }

extern "C" void TransitionCommIcon_Draw() { sTransitionCommIcon.callDraw(); }

void TransitionCommIcon::init() {
    setupAnim();
    showDelay = 0;
    hideDelay = 0;
    blinkPhase = 0;
    blinkDeadline = 0;
    blinkOn = 0;
    suspended = 0;
}

void TransitionCommIcon::exit() { enterHidden(); }

void TransitionCommIcon::callUpdate() { vfunc_0c(); }

// ---- TransitionCommIcon ----
void TransitionCommIcon::callDraw() { draw(); }

void TransitionCommIcon::enterHidden() {
    state = 0;
    showDelay = 0;
    blinkOn = 0;
}

void TransitionCommIcon::updateHidden() {
    if (showDelay > 0) {
        showDelay--;
        if (showDelay <= 0) {
            enterShown();
        }
    }
}

void TransitionCommIcon::enterShown() {
    state = 1;
    hideDelay = 0;
    Gfx2d_SetMainObjWinPlanes(0x10);
    Gfx2d_EnableMainWindows(4);
    u64 t = OS_GetTick();
    blinkPhase = 1;
    blinkDeadline = t + 0x1991b;
    blinkOn = 1;
}

void TransitionCommIcon::updateShown() {
    u64 now = OS_GetTick();
    if (now >= blinkDeadline) {
        if (blinkPhase == 0) {
            blinkDeadline = now + 0x1991b;
            blinkOn = 1;
            blinkPhase = 1;
        } else if (blinkPhase == 1) {
            blinkDeadline = now + 0x1991b;
            blinkOn = 0;
            blinkPhase = 2;
        } else if (blinkPhase == 2) {
            blinkDeadline = now + 0x1991b;
            blinkOn = 1;
            blinkPhase = 3;
        } else if (blinkPhase == 3) {
            blinkDeadline = now + 0x4cb51;
            blinkOn = 0;
            blinkPhase = 0;
        }
    }
    if (hideDelay > 0) {
        hideDelay--;
        if (hideDelay <= 0) {
            Gfx2d_DisableMainWindows(4);
            enterHidden();
        }
    }
}

void TransitionCommIcon::setupAnim() {
    anim.setSeq((SpriteAnimSeq *)data_020d5d34);
    anim.setPlayOnce(1);
    anim.restart();
}

extern "C" TransitionCommIconProc *TransitionCommIconProc_Create() { return new TransitionCommIconProc(); }

TransitionCommIconProc::TransitionCommIconProc() {}

TransitionCommIconProc::~TransitionCommIconProc() {}

BOOL TransitionCommIconProc::vfunc_00() {
    TransitionCommIcon_Init();
    return TRUE;
}

BOOL TransitionCommIconProc::vfunc_0c() {
    TransitionCommIcon_Exit();
    return TRUE;
}

BOOL TransitionCommIconProc::onExecute() {
    TransitionCommIcon_Update();
    return TRUE;
}

BOOL TransitionCommIconProc::onDraw() {
    TransitionCommIcon_Draw();
    return TRUE;
}


TransitionCommIcon sTransitionCommIcon;
Unk_020e10bc_Rec sTransitionCommIconProfile = {TransitionCommIconProc_Create, 0xcc, 0xc8};
