#include "types.h"
#include "Unk_020d8c7c.h"

struct TitleChoiceSet {
    u8 *unk_00;
    u8 *unk_04;
    u8 unk_08;
};

class ChoiceEntry {
public:
    void setMsgIndex(const u8 *p);
    void setBmgName(const void *p);
    void loadText();
    void setValue(const u8 *p);
    void *getText();
};

class ChoiceList {
public:
    void clear();
    ChoiceEntry *getEntry(s32 i);
    void setCount(s32 v);
    s32 setCancelToLast();
    s32 getResult();
    void reset(s32 a, s32 b);
    void setEntry(s32 a, const u8 *b, s32 c, const u8 *d, const char *e, s32 f);
    void loadTexts();
};

class TalkMsgRequest;

class TalkWindowState {
public:
    ChoiceList *getChoiceList();
    void openChoices(s32 v);
    void setSlot(s32 a, void *b);
    void setNextMessage(u8 *a, void *b);
    void setSilent();
    void lockAdvance();
    void detachRequest();
    void attachRequest(TalkMsgRequest *p);

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class PlayerData {
public:
    void *getPlayerId();
};

class SaveData {
public:
    s32 isValid();
    BOOL testFlag(u32 a);
};

class Unk_02065554 {
public:
    u8 func_02065578();
};

class Unk_0208f238 {
public:
    s32 func_0208f15c();
};

class BgVramTask {
public:
    BgVramTask();
    virtual void vfunc_00();
    virtual void clear();
    BOOL requestChars(u32 a, u8 b, u32 c, u32 d, u32 e);
    void cancel();
    u8 unk_04[0x20];
};

class MsgString {
public:
    u8 copy(MsgString *other);
};

class PlayerId {
public:
    void func_020940d0(MsgString *p);
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u8 unk_04[0x18];
};

extern "C" {
TalkWindowState *TalkWindow_Get(s32 a);
void Gfx2d_HideLayer(s32 a);
void func_0203d4c4(s32 a);
void func_0203d4c8(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_LoadPaletteFile(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreen(void *a, s32 b, s32 c, s32 d);
void Gfx2d_LoadCharRange(void *a, s32 b, s32 c, s32 d, s32 e);
void File_LoadToBuffer(void *a, void *b, u32 n);
void MI_CpuCopy8(void *a, void *b, u32 n);
void MI_CpuFill8(void *a, s32 b, u32 n);
void Snd_PlaySe(s32 a);
u32 Clock_GetTimeOfDay();
void *func_0208f158(void *p);
BOOL func_020978c8(void *t, s32 i);
s32 func_020978a4(void *t);
void *PlayerData_GetResident(void *t, s32 i);
void SaveManager_SetEraseResidentSlot(s32 i);
void GameStart_SetNewTown();
void GameStart_SetNewResident();
void GameStart_SetMode3();
const void *Choice_GetBmgName(u32 i);

extern u8 data_021e7f8c[];
extern u8 data_021d735c[];
extern SaveData gSaveData;
extern u8 gTalkMsgIndexEnd;
extern u8 gScreenTransition;
extern void *gCurrentHeap;
}

class TitleScreen;

class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *s);
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual s32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov147_SceneEntry {
    TitleScreen *(*factory)();
    u16 unk_04;
    u16 unk_06;
};

typedef void (TitleScreen::*Unk_ov147_022933e8_Fn)();
struct TitleStateEntry {
    Unk_ov147_022933e8_Fn enter;
    Unk_ov147_022933e8_Fn update;
};

// Sub-object at +0x54 of the scene (vtable 0x022934a4, size 0x48)
class TitleTalk : public TalkMsgRequest {
public:
    TitleTalk();
    virtual ~TitleTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_70();

    void setOwner(void *owner);
    u8 getGreetingMsg();
    void chooseTagMode();
    void chooseResident();
    void chooseNeverMind();
    void chooseContinue();
    void chooseNewGame();
    void openResidentChoices();
    void openChoiceSet(TitleChoiceSet *d);

    /* 0x44 */ TitleScreen *unk_44;
};

// Object at +0xac of the scene (0x20 bytes, vtable 0x022935e8)
class TitleBlinkText {
public:
    TitleBlinkText();
    virtual ~TitleBlinkText();
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1c;

    void updateShown();
    void show();
    void updateDelay();
    void startDelay();
    void updateIdle();
    void setIdle();
    void clearBlend();
    void applyBlendAlpha();
    BOOL stepBlink();
    void resetBlink();
    BOOL isHidden();
    void requestHide();
    void requestVariant(s32 v);
    void update();
    void shutdown();
    void init();
};

extern "C" {
extern u32 sTitleLogoCharsWork[][8];
void _ZN14TitleBlinkTextD1Ev();
void _ZN14TitleBlinkText11updateShownEv();
void _ZN14TitleBlinkText11updateDelayEv();
void _ZN14TitleBlinkText10updateIdleEv();
extern u16 sTitleLogoScreen[];
extern u32 sTitleLogoChars[][8];
extern u32 sTitleLogoHideMasks[][8];
extern u32 sTitleLogoRevealMasks[][8];
extern u8 sTitleLogoMask2[];
extern const u8 sTitleGreetingMsgs[];
extern char *sTitleTalkFilePtr;
extern TitleStateEntry sTitleStates[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
extern u8 *data_021c1b3c;

void Scene_Request(s32 a, s32 b, s32 c, s32 d);
void *func_020b4934();
void func_020b4f58(void *a, s32 b, s32 c, s32 d);
void SaveManager_RequestAct1C();
void SaveManager_RequestAct05();
void SaveManager_RequestAct06();
void func_0203d52c();
void InputMode_SetButtons();
void InputMode_SetTouch();
BOOL func_020e7500(void *p);
void func_02034d84(s32 a);
void func_02034d70(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_0203d984();
void GameStart_SetupSave();
void func_0203cbb8();
void _ZN12Unk_0203c92c13func_0203c98cEv();
void func_0203d990();
s32 Main_TakeDwcInitResult();
s32 Save_CheckBackupError();
s32 func_0203d538();
void func_0203d520();
TitleScreen *TitleScreen_Create();

}

// Data definition order below (and at the end of the file) and the declaration order of vfunc_14's statics
// reproduce the original data/bss order (mwcc heapsorts by size over the reversed creation order).
extern "C" u32 sTitleLogoRevealMasks[15][8] = { 0 };
extern "C" char sTitleTalkFile[] = "sp_etc_sequence1";
extern "C" const u8 sTitleGreetingMsgs[4] = { 0x2d, 0x2e, 0x2f, 0x2f };

static inline BOOL Unk_ov147_02291b28_IsTwo(u8 v) {
    return v == 2 ? TRUE : FALSE;
}

static inline BOOL Unk_ov147_022924c0_IsTwo() {
    if (gScreenTransition == 2) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov147_0229281c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x022933e8, size 0xf4
class TitleScreen : public GameProc {
public:
    TitleScreen();
    virtual ~TitleScreen();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    void maskLogoCell(u32 *p, s32 x, s32 y);
    void maskLogoChar(u32 *p, s32 i);
    BOOL stepLogoHide();
    void startLogoHide();
    BOOL stepLogoReveal();
    void startLogoReveal();
    void hideLogo();
    void loadLogo();
    void updateWifiSettings();
    void enterWifiSettings();
    void updateTagMode();
    void enterTagMode();
    void updateImmigration();
    void enterImmigration();
    void updateStartGame();
    void enterStartGame();
    void updateContinue();
    void enterContinue();
    void updateEraseTown();
    void enterEraseTown();
    void updateEraseResident();
    void enterEraseResident();
    void updateBackToTitle();
    void enterBackToTitle();
    void updateTalking();
    void enterTalking();
    void updateOpenMenu();
    void enterOpenMenu();
    void updateIdleTimeout();
    void enterIdleTimeout();
    void updateWaitStart();
    void enterWaitStart();
    void changeState(s32 state);
    void func_ov147_022929c0();
    void stopBgm();
    void startBgm(BOOL flag);
    void dismissLogo();
    void skipLogoReveal();
    void updateLogo();

    /* 0x50 */ s32 unk_50;
    /* 0x54 */ TitleTalk unk_54;
    /* 0x9c */ u8 pad_9c[2];
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ u16 unk_a4;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u16 unk_a8;
    /* 0xaa */ u8 pad_aa[2];
    /* 0xac */ TitleBlinkText unk_ac;
    /* 0xcc */ BgVramTask unk_cc;
    /* 0xf0 */ u8 unk_f0;
    /* 0xf1 */ u8 pad_f1[3];
};
extern "C" TitleStateEntry sTitleStates[12] = {
    { &TitleScreen::enterWaitStart, &TitleScreen::updateWaitStart },
    { &TitleScreen::enterOpenMenu, &TitleScreen::updateOpenMenu },
    { &TitleScreen::enterTalking, &TitleScreen::updateTalking },
    { &TitleScreen::enterBackToTitle, &TitleScreen::updateBackToTitle },
    { &TitleScreen::enterEraseResident, &TitleScreen::updateEraseResident },
    { &TitleScreen::enterEraseTown, &TitleScreen::updateEraseTown },
    { &TitleScreen::enterContinue, &TitleScreen::updateContinue },
    { &TitleScreen::enterStartGame, &TitleScreen::updateStartGame },
    { &TitleScreen::enterWifiSettings, &TitleScreen::updateWifiSettings },
    { &TitleScreen::enterImmigration, &TitleScreen::updateImmigration },
    { &TitleScreen::enterTagMode, &TitleScreen::updateTagMode },
    { &TitleScreen::enterIdleTimeout, &TitleScreen::updateIdleTimeout },
};

extern "C" TitleScreen *TitleScreen_Create() { return new TitleScreen(); }

TitleScreen::TitleScreen() {}

TitleScreen::~TitleScreen() {}

BOOL TitleScreen::vfunc_00() {
    unk_54.setOwner(this);
    func_0203cbb8();
    _ZN12Unk_0203c92c13func_0203c98cEv();
    func_0203d990();
    if (Main_TakeDwcInitResult() == 3) {
        unk_f0 = 1;
    }
    changeState(0);
    unk_a6 = 0;
    unk_a7 = 0;
    unk_ac.init();
    if (Save_CheckBackupError() == 1) {
        unk_9e = 1;
    }
    startBgm(func_0203d538() != 0 ? TRUE : FALSE);
    if (func_0203d538() != 0) {
        unk_a6 = 6;
        func_0203d520();
    }
    return TRUE;
}

BOOL TitleScreen::vfunc_0c() {
    stopBgm();
    unk_ac.shutdown();
    unk_cc.cancel();
    func_0203d984();
    if (unk_50 == 7) {
        GameStart_SetupSave();
    }
    return TRUE;
}

BOOL TitleScreen::onExecute() {
    if (((TitleStateEntry *)((u8 *)sTitleStates + 8))[unk_50].enter) {
        (this->*sTitleStates[unk_50].update)();
    }
    updateLogo();
    unk_ac.update();
    return TRUE;
}

void TitleScreen::startBgm(BOOL flag) {
    if (unk_9f == 0) {
        if (flag) {
            func_02034dd0(1, 0xf, 0);
            unk_9f = 2;
        } else {
            func_02034e10(2, 0, 0x7f, 0);
            unk_9f = 1;
        }
    }
}

void TitleScreen::stopBgm() {
    u32 t = unk_9f;
    if (t != 0) {
        if (t == 1) {
            func_02034d84(0);
        } else if (t == 2) {
            func_02034d70(1);
        }
        func_02034dd0(1, 0xf, 0xf);
        unk_9f = 0;
    }
}

void TitleScreen::func_ov147_022929c0() {
    if (unk_9f == 1) {
        *(s32 *)(data_021c1b3c + 0x248) = 0xb;
    }
}

void TitleScreen::changeState(s32 state) {
    if (sTitleStates[state].enter) {
        (this->*sTitleStates[state].enter)();
    }
    unk_50 = state;
}

void TitleScreen::enterWaitStart() { unk_a8 = 0xe10; }

void TitleScreen::updateWaitStart() {
    if (gPad[1] != 0) {
        InputMode_SetButtons();
    } else if (Unk_ov147_0229281c_Both()) {
        InputMode_SetTouch();
    }
    u32 pad = gPad[1];
    if ((pad & 2) == 0 && (pad & 0x400) == 0 && (pad & 0x800) == 0) {
        if (unk_f0 != 0 || unk_9e != 0 || (pad & 8) != 0 || (pad & 1) != 0 || Unk_ov147_0229281c_Both()) {
            if (Unk_ov147_022924c0_IsTwo()) {
                u32 t = unk_a6;
                if (t != 0) {
                    if (t == 1) {
                        skipLogoReveal();
                        unk_a7 = 0xc;
                    } else if (unk_a7 == 0) {
                        dismissLogo();
                        unk_ac.requestHide();
                        changeState(1);
                    }
                }
            }
        }
    }
    if (unk_a7 != 0) {
        unk_a7 = *(volatile u8 *)&unk_a7 - 1;
        if (unk_a7 == 0) {
            unk_ac.requestVariant(0);
        }
    }
    if ((u8)(unk_a6 + 0xfc) <= 1) {
        if (func_020e7500(&unk_a8) == 0) {
            unk_ac.requestHide();
            changeState(0xb);
        }
    } else {
        unk_a8 = 0xe10;
    }
}

void TitleScreen::enterIdleTimeout() {}

void TitleScreen::updateIdleTimeout() {
    if (unk_ac.isHidden()) {
        func_0203d52c();
        func_020b4f58(func_020b4934(), 0x2c, 2, 2);
        stopBgm();
    }
}

void TitleScreen::enterOpenMenu() {}

void TitleScreen::updateOpenMenu() {
    if (unk_ac.isHidden()) {
        TalkWindowState *r = TalkWindow_Get(0);
        unk_54.vfunc_08();
        if (unk_f0 != 0) {
            unk_54.setFileName(sTitleTalkFilePtr);
            *((u8 *)this + 0x72) = 0x32;
            unk_f0 = 0;
        } else if (unk_9e != 0) {
            unk_54.setFileName("sp_etc_sequence2");
            *((u8 *)this + 0x72) = 9;
        } else if (gSaveData.testFlag(0x12)) {
            unk_54.setFileName(sTitleTalkFilePtr);
            *((u8 *)this + 0x72) = 0x24;
        } else {
            unk_54.setFileName(sTitleTalkFilePtr);
            *((u8 *)this + 0x72) = unk_54.getGreetingMsg();
        }
        r->attachRequest(&unk_54);
        r->unk_08 = 1;
        changeState(2);
    }
}

void TitleScreen::enterTalking() {}

void TitleScreen::updateTalking() {}

void TitleScreen::enterBackToTitle() {}

void TitleScreen::updateBackToTitle() {
    TalkWindowState *r = TalkWindow_Get(0);
    if (r->unk_04 == 0) {
        r->detachRequest();
        changeState(0);
        unk_ac.requestVariant(1);
    }
}

void TitleScreen::enterEraseResident() { func_ov147_022929c0(); }

void TitleScreen::updateEraseResident() {
    if (Unk_ov147_022924c0_IsTwo()) {
        TalkWindowState *r = TalkWindow_Get(0);
        if (r->unk_04 == 0) {
            r->detachRequest();
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
            SaveManager_RequestAct06();
            stopBgm();
        }
    }
}

void TitleScreen::enterEraseTown() { func_ov147_022929c0(); }

void TitleScreen::updateEraseTown() {
    if (Unk_ov147_022924c0_IsTwo()) {
        TalkWindowState *r = TalkWindow_Get(0);
        if (r->unk_04 == 0) {
            r->detachRequest();
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
            SaveManager_RequestAct05();
            stopBgm();
        }
    }
}

void TitleScreen::enterContinue() { func_ov147_022929c0(); }

void TitleScreen::updateContinue() {
    TalkWindowState *r = TalkWindow_Get(0);
    if (Unk_ov147_022924c0_IsTwo() && r->unk_04 == 0) {
        r->detachRequest();
        func_020b4f58(func_020b4934(), 6, 2, 2);
        stopBgm();
    }
}

void TitleScreen::enterStartGame() { func_ov147_022929c0(); }

void TitleScreen::updateStartGame() {
    if (Unk_ov147_022924c0_IsTwo()) {
        TalkWindowState *r = TalkWindow_Get(0);
        if (r->unk_04 == 0) {
            r->detachRequest();
            func_020b4f58(func_020b4934(), 0x2d, 2, 0);
            stopBgm();
        }
    }
}

void TitleScreen::enterImmigration() { func_ov147_022929c0(); }

void TitleScreen::updateImmigration() {
    if (Unk_ov147_022924c0_IsTwo()) {
        TalkWindowState *r = TalkWindow_Get(0);
        if (r->unk_04 == 0) {
            r->detachRequest();
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
            SaveManager_RequestAct1C();
            stopBgm();
        }
    }
}

void TitleScreen::enterTagMode() { func_ov147_022929c0(); }

void TitleScreen::updateTagMode() {
    TalkWindowState *r = TalkWindow_Get(0);
    if (Unk_ov147_022924c0_IsTwo() && r->unk_04 == 0) {
        r->detachRequest();
        func_020b4f58(func_020b4934(), 0x30, 2, 2);
        stopBgm();
    }
}

void TitleScreen::enterWifiSettings() { func_ov147_022929c0(); }

void TitleScreen::updateWifiSettings() {
    TalkWindowState *r = TalkWindow_Get(0);
    if (Unk_ov147_022924c0_IsTwo() && r->unk_04 == 0) {
        r->detachRequest();
        Scene_Request(2, 2, 0, 0);
        stopBgm();
    }
}

TitleTalk::TitleTalk() {}

TitleTalk::~TitleTalk() {}

// ---- TitleTalk ctor/dtor, TitleScreen (part 2) ----

void TitleTalk::setOwner(void *owner) { unk_44 = (TitleScreen *)owner; }

void TitleTalk::vfunc_14() {
    static u8 s258[4] = { 0x02, 0x0a, 0x0b, 0x05 };
    static u8 s260[4] = { 2, 0x37, 1, gTalkMsgIndexEnd };
    static u8 s250[4] = { 0x00, 0x0a, 0x0b, 0x05 };
    static u8 s268[4] = { gTalkMsgIndexEnd, 0x37, 1, gTalkMsgIndexEnd };
    static u8 s244[2] = { 0x12, 0x13 };
    static u8 s254[4] = { gTalkMsgIndexEnd, 0x37, 1, gTalkMsgIndexEnd };
    static u8 s27c[5] = { 0x01, 0x02, 0x0a, 0x0b, 0x05 };
    static u8 s284[5] = { gTalkMsgIndexEnd, 2, 0x37, 1, gTalkMsgIndexEnd };
    static u8 s274[4] = { 0x03, 0x18, 0x0e, 0x05 };
    static u8 s264[4] = { 0x09, 0x30, 0x00, 0x31 };
    static u8 s248[3] = { 0x18, 0x0e, 0x05 };
    static u8 s26c[4] = { 0x01, 0x0a, 0x0b, 0x05 };
    static u8 s25c[4] = { 0x03, 0x04, 0x0e, 0x05 };
    static u8 s278[4] = { 0x09, 0x03, 0x00, 0x31 };
    static u8 s28c[5] = { 0x03, 0x04, 0x18, 0x0e, 0x05 };
    static u8 s294[5] = { 0x09, 0x03, 0x30, 0x00, 0x31 };
    static u8 s24c[3] = { 0x30, 0x00, 0x31 };
    static u8 s240[2] = { gTalkMsgIndexEnd, 0x31 };
    static TitleChoiceSet descs[9] = {
        { s258, s260, 4 },
        { s250, s268, 4 },
        { s26c, s254, 4 },
        { s27c, s284, 5 },
        { s274, s264, 4 },
        { s248, s24c, 3 },
        { s25c, s278, 4 },
        { s28c, s294, 5 },
        { s244, s240, 2 },
    };
    TalkWindowState *r5 = TalkWindow_Get(0);
    s32 r6 = func_020978a4(data_021d735c);
    s32 r0 = gSaveData.isValid();
    TitleScreen *r2 = unk_44;
    if (r2->unk_9e != 0) {
        r5->lockAdvance();
        return;
    }
    switch (unk_1e) {
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x31:
        if (r6 <= 0 && r0 != 0) {
            openChoiceSet(&descs[0]);
        } else if (r0 == 0) {
            openChoiceSet(&descs[1]);
        } else if (r6 == 4) {
            openChoiceSet(&descs[2]);
        } else {
            openChoiceSet(&descs[3]);
        }
        break;
    case 1:
        if (r6 <= 0 && r0 != 0) {
            openChoiceSet(&descs[4]);
        } else if (r0 == 0) {
            openChoiceSet(&descs[5]);
        } else if (r6 == 4) {
            openChoiceSet(&descs[6]);
        } else {
            openChoiceSet(&descs[7]);
        }
        break;
    case 0x27:
        GameStart_SetNewResident();
        r5->setSilent();
        unk_44->changeState(7);
        break;
    case 3:
        openResidentChoices();
        break;
    case 6:
        r5->setNextMessage(&gTalkMsgIndexEnd, 0);
        unk_44->changeState(4);
        break;
    case 0xb:
        r5->setNextMessage(&gTalkMsgIndexEnd, 0);
        unk_44->changeState(5);
        break;
    case 5:
    case 0xa: {
        u8 v = 0x31;
        r5->setNextMessage(&v, sTitleTalkFilePtr);
        break;
    }
    case 0x37:
        r2->changeState(3);
        break;
    case 0:
        openChoiceSet(&descs[8]);
        break;
    case 0x30:
        openChoiceSet(&descs[8]);
        break;
    case 0x35:
        openChoiceSet(&descs[8]);
        break;
    case 0x24:
        r5->setSilent();
        r5->setNextMessage(&gTalkMsgIndexEnd, 0);
        GameStart_SetMode3();
        unk_44->changeState(7);
        break;
    case 0x32:
        r5->setNextMessage(&gTalkMsgIndexEnd, 0);
        unk_44->changeState(3);
        break;
    }
}

void TitleTalk::openChoiceSet(TitleChoiceSet *d) {
    TalkWindowState *sp0 = unk_3c;
    ChoiceList *sp10 = sp0->getChoiceList();
    u8 *r5 = d->unk_00;
    u8 *r6 = d->unk_04;
    u32 r7 = d->unk_08;
    sp10->reset(r7, r7 - 1);
    s32 r4;
    s32 z0 = 0;
    s32 z1 = 0;
    for (r4 = 0; r4 < (s32)r7; r4++) {
        s32 f = z0;
        u8 c = r5[r4];
        u8 t[2];
        if (c == 0x12 || c <= 1) {
            f = 1;
        }
        t[0] = c;
        t[1] = r6[r4];
        sp10->setEntry(r4, t, 1, &t[1], (const char *)z1, f);
    }
    sp10->loadTexts();
    sp0->openChoices(1);
}

void TitleTalk::openResidentChoices() {
    TalkWindowState *sp0 = unk_3c;
    ChoiceList *r6 = sp0->getChoiceList();
    r6->clear();
    s32 r5 = 0;
    s32 r4 = 0;
    u8 buf[3];
    for (r4 = 0; r4 < 4; r4++) {
        if (func_020978c8(data_021d735c, r4)) {
            Unk_020e1c64 o;
            ((PlayerId *)((PlayerData *)PlayerData_GetResident(data_021d735c, r4))->getPlayerId())->func_020940d0((MsgString *)&o);
            ChoiceEntry *r7 = r6->getEntry(r5);
            buf[0] = 4;
            r7->setValue(&buf[0]);
            ((MsgString *)r7->getText())->copy((MsgString *)&o);
            r5++;
        }
    }
    ChoiceEntry *p = r6->getEntry(r5);
    buf[1] = 0x10;
    p->setMsgIndex(&buf[1]);
    p->setBmgName(Choice_GetBmgName(1));
    buf[2] = 0;
    p->setValue(&buf[2]);
    p->loadText();
    r6->setCount(r5 + 1);
    r6->setCancelToLast();
    sp0->openChoices(1);
}

void TitleTalk::vfunc_70() {
    if (unk_1e == 0x24 || unk_1e == 0x27) {
        Snd_PlaySe(0x3a);
    }
}

void TitleTalk::vfunc_18() {
    typedef void (TitleTalk::*Fn)();
    TalkWindowState *sp0 = TalkWindow_Get(0);
    s32 r5 = sp0->getChoiceList()->getResult();
    s32 sp4 = func_020978a4(data_021d735c);
    s32 sp8 = gSaveData.isValid();
    static Fn t0[4] = { 0, &TitleTalk::chooseTagMode, 0, &TitleTalk::chooseNeverMind };
    static Fn t1[4] = { &TitleTalk::chooseNewGame, &TitleTalk::chooseTagMode, 0, &TitleTalk::chooseNeverMind };
    static Fn t2[4] = { &TitleTalk::chooseContinue, &TitleTalk::chooseTagMode, 0, &TitleTalk::chooseNeverMind };
    static Fn t3[5] = { &TitleTalk::chooseContinue, 0, &TitleTalk::chooseTagMode, 0, &TitleTalk::chooseNeverMind };
    static Fn *tbl[4] = { t0, t1, t2, t3 };
    s32 mode = 3;
    switch (unk_1e) {
    case 0:
        if (r5 == 0) {
            sp0->setNextMessage(&gTalkMsgIndexEnd, 0);
            unk_44->changeState(8);
        }
        break;
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x31:
        if (sp4 <= 0 && sp8 != 0) {
            mode = 0;
        } else if (sp8 == 0) {
            mode = 1;
        } else if (sp4 == 4) {
            mode = 2;
        }
        {
            Fn *row = tbl[mode];
            if (row[r5]) {
                (this->*row[r5])();
            }
        }
        break;
    case 0x30:
        if (r5 == 0) {
            sp0->setNextMessage(&gTalkMsgIndexEnd, 0);
            unk_44->changeState(9);
        }
        break;
    case 0x32:
    case 0x33:
    case 0x34:
        break;
    case 0x35:
        if (r5 == 0) {
            unk_3c->setNextMessage(&gTalkMsgIndexEnd, 0);
            unk_44->changeState(10);
        }
        break;
    case 3:
        chooseResident();
        break;
    }
}

void TitleTalk::chooseNewGame() {
    GameStart_SetNewTown();
    unk_44->changeState(7);
}

void TitleTalk::chooseContinue() {
    unk_44->changeState(6);
}

void TitleTalk::chooseNeverMind() {
    unk_44->changeState(3);
}

void TitleTalk::chooseResident() {
    TalkWindowState *r7 = TalkWindow_Get(0);
    s32 a = r7->getChoiceList()->getResult();
    u8 r6 = 0x31;
    s32 r5 = 0;
    s32 r4;
    for (r4 = 0; r4 < 4; r4++) {
        if (func_020978c8(data_021d735c, r4)) {
            if (a == r5) {
                SaveManager_SetEraseResidentSlot(r4);
                Unk_020e1c64 o;
                ((PlayerId *)((PlayerData *)PlayerData_GetResident(data_021d735c, r4))->getPlayerId())->func_020940d0((MsgString *)&o);
                r7->setSlot(0, &o);
                r6 = 4;
            }
            r5++;
        }
    }
    u8 v = r6;
    r7->setNextMessage(&v, sTitleTalkFilePtr);
}

// ---- TitleTalk ----

void TitleTalk::chooseTagMode() {
    u8 *g = data_021e7f8c;
    if (((Unk_02065554 *)func_0208f158(g))->func_02065578()) {
        if (((Unk_0208f238 *)g)->func_0208f15c() == 0) {
            u8 v = 0x35;
            unk_3c->setNextMessage(&v, 0);
        }
    }
}

u8 TitleTalk::getGreetingMsg() {
    return sTitleGreetingMsgs[Clock_GetTimeOfDay()];
}

void TitleScreen::loadLogo() {
    func_0203d4c8(1);
    Gfx2d_SetLayerControl(5, 0, 0, 0);
    Gfx2d_SetLayerPriority(5, 1);
    Gfx2d_LoadPaletteFile((void *)"menu/title/bg_us.bpl", (s32)gCurrentHeap, 5, 8, 8, 0xf);
    File_LoadToBuffer((void *)"menu/title/bg_us.bsc", sTitleLogoScreen, 0x800);
    Gfx2d_LoadScreen(sTitleLogoScreen, 5, 0x800, 0);
    File_LoadToBuffer((void *)"menu/title/bg_us.bch", sTitleLogoChars, 0x3800);
    MI_CpuFill8(sTitleLogoCharsWork, 0, 0x3800);
    File_LoadToBuffer((void *)"menu/title/mask0.bch", sTitleLogoHideMasks, 0xe0);
    File_LoadToBuffer((void *)"menu/title/mask1.bch", sTitleLogoRevealMasks, 0x1e0);
    File_LoadToBuffer((void *)"menu/title/mask2.bch", sTitleLogoMask2, 0x1e0);
    Gfx2d_LoadCharRange(sTitleLogoCharsWork, 5, 0x140, 0x140, 0x2ff);
}

void TitleScreen::updateLogo() {
    switch (unk_a6) {
    case 0:
        if (Unk_ov147_02291b28_IsTwo(gScreenTransition)) {
            loadLogo();
            startLogoReveal();
        }
        break;
    case 6:
        if (Unk_ov147_02291b28_IsTwo(gScreenTransition)) {
            unk_ac.requestVariant(1);
            unk_a8 = 0xe10;
            unk_a6 = 5;
        }
        break;
    case 1:
        if (stepLogoReveal()) {
            unk_a6 = 2;
            if (unk_a7 == 0) {
                unk_ac.requestVariant(0);
            }
        }
        break;
    case 2:
        if (unk_a4 != 0) {
            unk_a4 = *(volatile u16 *)&unk_a4 - 1;
        } else {
            startLogoHide();
            unk_ac.requestVariant(1);
        }
        break;
    case 3:
        if (stepLogoHide()) {
            unk_a6 = 4;
        }
        break;
    case 4:
    case 5:
        break;
    }
}

void TitleScreen::skipLogoReveal() {
    if (unk_a6 == 1) {
        unk_a0 = 0x64;
    }
}

void TitleScreen::dismissLogo() {
    if (unk_a6 == 2) {
        startLogoHide();
    } else {
        hideLogo();
    }
}

void TitleScreen::hideLogo() {
    Gfx2d_HideLayer(5);
    func_0203d4c4(1);
    unk_a6 = 5;
}

void TitleScreen::startLogoReveal() {
    unk_a6 = 1;
    unk_a0 = 0;
    unk_a4 = 0x4b0;
    MI_CpuFill8(sTitleLogoCharsWork, 0, 0x3800);
    Gfx2d_ShowLayer(5);
}

BOOL TitleScreen::stepLogoReveal() {
    s32 y;
    s32 r4 = unk_a0;
    if (r4 < 0x36) {
        r4 += 9;
        s32 r6 = 0;
        for (; r6 < 0xf && r4 >= 9; r6++, r4--) {
            u32 *p = sTitleLogoRevealMasks[r6];
            s32 x = r4;
            y = 0;
            if (r4 > 0x1f) {
                y = r4 - 0x1f;
                x = 0x1f;
            }
            for (; x >= 0 && y < 0x18; x--, y++) {
                if (y < 0x15) {
                    maskLogoCell(p, x, y);
                }
            }
        }
        unk_cc.requestChars((u32)sTitleLogoCharsWork, 5, 0x140, 0x140, 0x2ff);
        unk_a0 = unk_a0 + 1;
        goto ret0;
    }
    MI_CpuCopy8(sTitleLogoChars, sTitleLogoCharsWork, 0x3800);
    unk_cc.requestChars((u32)sTitleLogoCharsWork, 5, 0x140, 0x140, 0x2ff);
    return TRUE;
ret0:
    return FALSE;
}

void TitleScreen::startLogoHide() {
    unk_a0 = 7;
    unk_a6 = 3;
}

BOOL TitleScreen::stepLogoHide() {
    if (unk_a0 == 0) {
        Gfx2d_HideLayer(5);
        func_0203d4c4(1);
        return TRUE;
    }
    unk_a0 = unk_a0 - 1;
    u32 *p = sTitleLogoHideMasks[unk_a0];
    s32 i;
    for (i = 0; i < 0x1c0; i++) {
        maskLogoChar(p, i);
    }
    unk_cc.requestChars((u32)sTitleLogoCharsWork, 5, 0x140, 0x140, 0x2ff);
    return FALSE;
}

void TitleScreen::maskLogoChar(u32 *p, s32 i) {
    u32 *src = sTitleLogoChars[i];
    u32 *dst = sTitleLogoCharsWork[i];
    s32 j;
    for (j = 0; j < 8; j++) {
        *dst++ = *src & *p;
        p++;
        src++;
    }
}

// ---- TitleScreen (part 1) ----

void TitleScreen::maskLogoCell(u32 *p, s32 x, s32 y) {
    s32 v = sTitleLogoScreen[x + (y << 5)] & 0x3ff;
    if (v != 0x10 && v >= 0x140) {
        maskLogoChar(p, v - 0x140);
    }
}

extern "C" u32 sTitleLogoHideMasks[7][8] = { 0 };
extern "C" u16 sTitleLogoScreen[0x400] = { 0 };
extern "C" u8 sTitleLogoMask2[0x1e0] = { 0 };
extern "C" Unk_ov147_SceneEntry sTitleScreenProfile = { TitleScreen_Create, 0xd4, 0xcf };
extern "C" char *sTitleTalkFilePtr = sTitleTalkFile;
extern "C" u32 sTitleLogoCharsWork[0x1c0][8] = { 0 };
extern "C" u32 sTitleLogoChars[0x1c0][8] = { 0 };

