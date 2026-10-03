#include "types.h"
#include "Unk_020d8c7c.h"

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
    u16 unk_0c;
};
extern "C" Unk_0208e9d4_Ptr *gActorDefaultParent;

class CommManager {
public:
    BOOL isOnline();
};
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

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
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

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ u8 unk_20;
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

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ u64 unk_30;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 unk_39;
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

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ u8 unk_28;
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
    s16 unk_04;
    s16 unk_06;
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
    if (unk_0c == 0) {
        unk_28 = 0;
    } else {
        s32 i;
        if (unk_0c == 1) {
            i = 0x43;
        } else {
            i = 0x44;
        }
        unk_14.setSeq((SpriteAnimSeq *)data_020d5b0c[i]);
        unk_14.setPlayOnce(1);
        unk_14.restart();
        unk_28 = 1;
    }
}

void TalkBusyIcon::requestShow(u32 v) {
    unk_13 = 1;
    unk_1c = v;
}

void TalkBusyIcon::requestHide() {
    unk_13 = 0;
}

TalkBusyIcon::TalkBusyIcon() {
    unk_0c = 0;
    unk_10 = 0;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_18 = 0;
    unk_1c = 0;
    unk_20 = 0;
}

TalkBusyIcon::~TalkBusyIcon() {
    stopSe();
}

void TalkBusyIcon::draw() {
    if (unk_0c != 0) {
        s32 x = unk_14 + getOriginX();
        s32 y = unk_18 + getOriginY();
        u32 h0 = *data_020d5d0c[0];
        u32 h1 = *data_020d5d0c[4];
        Oam_DrawCell(0, h0, x, y, -1, -1, 0x1000, 0x1000, unk_10, -1, 0, 0);
        Oam_DrawCell(0, h1, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        if (unk_12 != 0) {
            Oam_DrawCell(0, h0, x, y, -1, -1, 0x1000, 0x1000, unk_10, 2, 0, 0);
            Oam_DrawCell(0, h1, x, y, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
        }
    }
}

void TalkBusyIcon::vfunc_0c() {
    static Unk_020e10dc_Fn tbl[2] = {&TalkBusyIcon::updateHidden, &TalkBusyIcon::updateShown};
    unk_10 += 0x1111;
    (this->*tbl[unk_0c])();
}

void TalkBusyIcon::init() { enterHidden(); }

void TalkBusyIcon::exit() {}

void TalkBusyIcon::callUpdate() { vfunc_0c(); }

// ---- TalkBusyIcon ----
void TalkBusyIcon::callDraw() { draw(); }

void TalkBusyIcon::setPos(s32 a, s32 b) {
    unk_14 = a;
    unk_18 = b;
}

void TalkBusyIcon::enterHidden() { unk_0c = 0; }

void TalkBusyIcon::updateHidden() {
    if (unk_13 != 0) {
        enterShown();
    }
}

void TalkBusyIcon::enterShown() {
    unk_0c = 1;
    startSe();
    if (unk_12 != 0) {
        Gfx2d_SetMainObjWinPlanes(0x10);
        Gfx2d_EnableMainWindows(4);
    }
}

void TalkBusyIcon::updateShown() {
    if (unk_13 == 0) {
        stopSe();
        if (unk_12 != 0) {
            Gfx2d_DisableMainWindows(4);
        }
        enterHidden();
    }
}

void TalkBusyIcon::startSe() {
    u16 v = sBusyIconSe[unk_1c];
    unk_20 = 1;
    func_02004008(v);
}

void TalkBusyIcon::stopSe() {
    u16 v = sBusyIconSe[unk_1c];
    if (unk_20 != 0) {
        unk_20 = 0;
        Snd_StopSe(v, 1);
    }
}

TransitionCommIcon::TransitionCommIcon() : unk_20(0), unk_24(0), unk_28(0), unk_2c(0), unk_30(0), unk_38(0), unk_39(0) {}

TransitionCommIcon::~TransitionCommIcon() {}

void TransitionCommIcon::draw() {
    if (unk_38 != 0) {
        if (unk_39 == 0) {
            s32 x = getOriginX();
            s32 y = getOriginY();
            u32 h = (u32)unk_0c.getCell();
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
    (this->*tbl[unk_20])();
}

extern "C" void TransitionCommIcon_RequestShow(u32 i) {
    u32 t = gActorDefaultParent->unk_0c;
    BOOL e = gCommManager->isOnline();
    if (t != 5 && e) {
        sTransitionCommIcon.unk_24 = sCommIconShowDelays[i];
    }
}

extern "C" void TransitionCommIcon_RequestHide(u32 i) {
    if (gActorDefaultParent->unk_0c != 5) {
        sTransitionCommIcon.unk_28 = sCommIconHideDelays[i];
    }
}

extern "C" void TransitionCommIcon_Resume() {
    if (sTransitionCommIcon.unk_20 != 0) {
        Gfx2d_SetMainObjWinPlanes(0x10);
        Gfx2d_EnableMainWindows(4);
    }
    sTransitionCommIcon.unk_39 = 0;
}

extern "C" void TransitionCommIcon_ResumeWinOut() {
    if (sTransitionCommIcon.unk_20 != 0) {
        Gfx2d_SetMainObjWinPlanes(0x10);
        Gfx2d_SetMainWinOutPlanes(4);
        Gfx2d_EnableMainWindows(4);
    }
    sTransitionCommIcon.unk_39 = 0;
}

extern "C" void TransitionCommIcon_Suspend() { sTransitionCommIcon.unk_39 = 1; }

extern "C" void TransitionCommIcon_Init() { sTransitionCommIcon.init(); }

extern "C" void TransitionCommIcon_Exit() { sTransitionCommIcon.exit(); }

extern "C" void TransitionCommIcon_Update() { sTransitionCommIcon.callUpdate(); }

extern "C" void TransitionCommIcon_Draw() { sTransitionCommIcon.callDraw(); }

void TransitionCommIcon::init() {
    setupAnim();
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_38 = 0;
    unk_39 = 0;
}

void TransitionCommIcon::exit() { enterHidden(); }

void TransitionCommIcon::callUpdate() { vfunc_0c(); }

// ---- TransitionCommIcon ----
void TransitionCommIcon::callDraw() { draw(); }

void TransitionCommIcon::enterHidden() {
    unk_20 = 0;
    unk_24 = 0;
    unk_38 = 0;
}

void TransitionCommIcon::updateHidden() {
    if (unk_24 > 0) {
        unk_24--;
        if (unk_24 <= 0) {
            enterShown();
        }
    }
}

void TransitionCommIcon::enterShown() {
    unk_20 = 1;
    unk_28 = 0;
    Gfx2d_SetMainObjWinPlanes(0x10);
    Gfx2d_EnableMainWindows(4);
    u64 t = OS_GetTick();
    unk_2c = 1;
    unk_30 = t + 0x1991b;
    unk_38 = 1;
}

void TransitionCommIcon::updateShown() {
    u64 now = OS_GetTick();
    if (now >= unk_30) {
        if (unk_2c == 0) {
            unk_30 = now + 0x1991b;
            unk_38 = 1;
            unk_2c = 1;
        } else if (unk_2c == 1) {
            unk_30 = now + 0x1991b;
            unk_38 = 0;
            unk_2c = 2;
        } else if (unk_2c == 2) {
            unk_30 = now + 0x1991b;
            unk_38 = 1;
            unk_2c = 3;
        } else if (unk_2c == 3) {
            unk_30 = now + 0x4cb51;
            unk_38 = 0;
            unk_2c = 0;
        }
    }
    if (unk_28 > 0) {
        unk_28--;
        if (unk_28 <= 0) {
            Gfx2d_DisableMainWindows(4);
            enterHidden();
        }
    }
}

void TransitionCommIcon::setupAnim() {
    unk_0c.setSeq((SpriteAnimSeq *)data_020d5d34);
    unk_0c.setPlayOnce(1);
    unk_0c.restart();
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
