// mwcc-flags: -str reuse
#include "types.h"
#include "Unk_020d8c7c.h"
#include "talk/TalkWindowState.h"
#include "save/SaveRecord4.h"
#include "talk/MsgRequest.h"



class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
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
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

class SaveMenu;

// vtable 0x020e244c, size 0x4c
class SaveMenuTalk : public TalkMsgRequest {
public:
    SaveMenuTalk();
    virtual ~SaveMenuTalk();
    virtual void onMessageEnd();
    virtual void onChoice();

    void setOwner(SaveMenu *owner);

    /* 0x44 */ SaveMenu *unk_44;
    /* 0x48 */ u16 unk_48;
};

// vtable 0x020e23fc, size 0xa0
class SaveMenu : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    void updateSaveB();
    void enterSaveB();
    void updateSaveA();
    void enterSaveA();
    void updateQuitting();
    void enterQuitting();
    void updateTalking();
    void enterTalking();
    void updateOpenTalk();
    void enterOpenTalk();
    void updateIdle();
    void enterIdle();
    void setState(s32 state);

    /* 0x50 */ s32 saveMenuState;
    /* 0x54 */ SaveMenuTalk talk;
};

typedef void (SaveMenu::*Unk_020e23fc_Fn)();
struct Unk_0209e840_Ent {
    Unk_020e23fc_Fn enter;
    Unk_020e23fc_Fn update;
};

struct Unk_0209ea1c_Entry {
    void *create;
    u16 executePriority;
    u16 drawPriority;
};

extern "C" SaveMenu *SaveMenu_Create();
extern "C" void _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(TalkWindowState *o, TalkMsgRequest *p);
extern "C" void _ZN15TalkWindowState12showBusyIconEv(TalkWindowState *o, s32 v);

Unk_0209ea1c_Entry sSaveMenuProfile = {(void *)SaveMenu_Create, 0xd5, 0xd0};

extern const s32 sSaveMenuDebugDonationLevels[22];
const s32 sSaveMenuDebugDonationLevels[22] = {0, 10000, 50000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000, 1100000, 1200000, 1300000, 1400000, 1500000, 1600000, 3200000, 6400000, 9999999};

Unk_0209e840_Ent sSaveMenuStates[6] = {
    {&SaveMenu::enterIdle, &SaveMenu::updateIdle},
    {&SaveMenu::enterOpenTalk, &SaveMenu::updateOpenTalk},
    {&SaveMenu::enterTalking, &SaveMenu::updateTalking},
    {&SaveMenu::enterQuitting, &SaveMenu::updateQuitting},
    {&SaveMenu::enterSaveA, &SaveMenu::updateSaveA},
    {&SaveMenu::enterSaveB, &SaveMenu::updateSaveB},
};

extern u8 gTalkMsgIndexEnd[];
extern void *gCommManager;
extern u16 gPad[];
extern u8 gScreenTransition;
extern u8 sRecentJoinAids[];
extern u8 sAxBbsReceived;
extern u8 sAxBbsBuf[];

extern "C" {
TalkWindowState *TalkWindow_Get(s32 v);
}

extern "C" {
s32 _ZN10ChoiceList9getResultEv(void *h);
}

extern "C" {
void _ZN10ChoiceList5resetEii(void *h, s32 a, s32 b);
}

extern "C" {
void _ZN10ChoiceList8setEntryEiPKhiS1_PKci(void *h, s32 a, u8 *b, s32 c, u8 *d, s32 e, s32 f);
}

extern "C" {
void _ZN10ChoiceList9loadTextsEv(void *h);
}

extern "C" {
s32 Comm_GetSyncState();
}

extern "C" {
void NetSession_SetMemberSyncReply(s32 a, s32 b);
}

extern "C" {
void NetSession_GetSyncKind();
}

extern "C" {
void NetSession_SetActiveSyncKind();
}

extern "C" {
void func_0209f230(s32 v);
}

extern "C" {
s32 Comm_ClearSyncState();
}

extern "C" {
s32 Comm_RequestSync(s32 v);
}

extern "C" {
s32 Scene_GetWarpRequest();
}

extern "C" {
void SceneWarp_RequestFade(s32 a, s32 b, s32 c, s32 d);
}

extern "C" {
s32 _ZN11CommManager8isOnlineEv(void *p);
}

extern "C" {
void Scene_SavePlayerPos(s32 a, s32 b);
}

extern "C" {
void SaveManager_RequestAct1A();
}

extern "C" {
s32 SaveManager_RequestAct01();
}

extern "C" {
void TalkRequest_FinishSaveMenu();
}

extern "C" {
s32 TalkRequest_IsSaveMenuRunning();
}

extern "C" {
s32 GameStart_IsNewTown();
}

extern "C" {
s32 GameStart_IsNewResident();
}

extern "C" {
void _ZN10MsgRequest11setFileNameEPKc(void *p, u8 *q);
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
s32 TalkRequestFlags_IsResetti();
}

extern "C" {
s32 TalkRequestFlags_IsSceneHold();
}

extern "C" {
s32 TalkRequest_IsActive();
}

extern "C" {
s32 _ZN11CommManager7isMyAidEj(void *p, s32 v);
}

extern "C" {
void ChatQuickMsg_PostWantToSave();
}

extern "C" {
s32 TalkRequest_AddSaveMenu();
}

extern "C" {
s16 *DebugVar_GetPtr(s32 a, s32 b);
}

extern "C" {
s32 PlayerData_GetCurrent();
}

extern "C" {
s32 _ZN12Unk_02097ff414getBankAccountEv();
}

extern "C" {
void PlayerBank_SetBalance(s32 a, s32 b);
}

extern "C" {
s32 Donation_GetTotal();
}

extern "C" {
void Donation_SetTotal(s32 v);
}

extern "C" {
s32 _ZN10PlayerData12getInventoryEv(s32 v);
}

extern "C" {
s32 _ZN15PlayerInventory13getTotalBellsEi(s32 a, s32 b);
}

extern "C" {
void PlayerInventory_SetWallet(s32 a, s32 b, s32 c);
}

extern "C" {
void Clock_GetDateTime(void *p);
}

extern "C" {
s32 DateTime_Compare(void *a, void *b, s32 c);
}

extern "C" {
void DateTime_AddDays(void *a, s32 b);
}

extern "C" {
void Clock_GetDate(void *p);
}

extern "C" {
void MI_CpuCopy8(void *src, void *dst, s32 n);
}

extern "C" {
u32 Random_GlobalBelow(s32 n);
}

extern "C" {
void AxBbsNotice_Construct(void *p);
}

extern "C" {
void *AxBbsNotice_GetDigest(void *p);
}

extern "C" {
void func_0211a748(void *a, void *b, s32 c, s32 d, s32 e);
}

extern "C" {
void MI_CpuFill8(void *p, s32 v, s32 n);
}

extern "C" {
s32 AxMail_GetDigestKey();
}

extern "C" {
s32 Mem_Differs(void *a, void *b, s32 n);
}

extern "C" {
void AxBbsNotice_Post(void *p);
}

extern "C" {
void AxBbsNotice_Destruct(void *p);
}

static inline BOOL Unk_0209e7b4_Is2(u8 v) {
    if (v == 2) {
        return TRUE;
    }
    return FALSE;
}

// 4-byte record


extern "C" void SaveData_ConstructDateRecord() {}

extern "C" void SaveData_DestructDateRecord() {}

void SaveRecord4::resetDate() {
    unk_00 = 1;
    unk_01 = 1;
    unk_02 = 0;
    unk_03 = 0;
}

void SaveRecord4::setDateToday(void *src) {
    u8 buf[8];
    if (src == 0) {
        Clock_GetDate(buf);
        src = buf;
    }
    MI_CpuCopy8(src, this, 4);
    unk_03 = 1;
}

void SaveRecord4::expireDate() {
    if (isDateActive() != 0) {
        u32 w[4];
        w[0] = 0;
        w[1] = 0;
        w[2] = 0;
        w[3] = 0;
        Clock_GetDateTime(w);
        ((u8 *)w)[0xd] = unk_02;
        ((u8 *)w)[0xc] = unk_01;
        ((u8 *)w)[0xb] = unk_00;
        ((u8 *)w)[0xa] = 0;
        if (DateTime_Compare(&w[2], w, 0x3c) != 1) {
            ((u8 *)w)[0xa] = 6;
            DateTime_AddDays(&w[2], 1);
            if (DateTime_Compare(&w[2], w, 0x3c) != 1) {
                unk_03 = 0;
            }
        } else {
            unk_03 = 0;
        }
    }
}

BOOL SaveRecord4::isDateActive() {
    if (unk_03 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" SaveMenu *SaveMenu_Create() {
    SaveMenu *p = new SaveMenu;
    return p;
}

BOOL SaveMenu::vfunc_00() {
    talk.setOwner(this);
    return TRUE;
}

BOOL SaveMenu::vfunc_0c() {
    return TRUE;
}

BOOL SaveMenu::onExecute() {
    s16 *p;
    s32 t;
    s32 r6;
    s32 r4;

    if (*DebugVar_GetPtr(0, 0x4b) != 0) {
        if (PlayerData_GetCurrent() != 0) {
            r4 = _ZN12Unk_02097ff414getBankAccountEv();
            switch (*DebugVar_GetPtr(0, 0x4b)) {
            case 0:
                break;
            case 1:
                PlayerBank_SetBalance(r4, 1000000);
                break;
            case 2:
                PlayerBank_SetBalance(r4, 10000000);
                break;
            case 3:
                PlayerBank_SetBalance(r4, 100000000);
                break;
            case 4:
                PlayerBank_SetBalance(r4, 500000000);
                break;
            case 5:
                PlayerBank_SetBalance(r4, 999999999);
                break;
            }
        }
    }
    if (*DebugVar_GetPtr(0, 0x4c) != 0) {
        if (PlayerData_GetCurrent() != 0) {
            _ZN12Unk_02097ff414getBankAccountEv();
            if (*DebugVar_GetPtr(0, 0x4c) != 0) {
                t = *DebugVar_GetPtr(0, 0x4c);
                if (t < 1) {
                    t = 1;
                } else if (t > 0x15) {
                    t = 0x15;
                }
                s32 c = Donation_GetTotal();
                s32 v = sSaveMenuDebugDonationLevels[t];
                if (v > c) {
                    Donation_SetTotal(v - 100);
                }
            }
        }
    }
    if (*DebugVar_GetPtr(0, 0x48) != 0) {
        r6 = PlayerData_GetCurrent();
        r4 = _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(r6), 1);
        r4 += *DebugVar_GetPtr(0, 0x48);
        if (r4 < 0) {
            r4 = 0;
        } else if (r4 > 0x1869f) {
            r4 = 0x1869f;
        }
        PlayerInventory_SetWallet(_ZN10PlayerData12getInventoryEv(r6), r4, 1);
        *DebugVar_GetPtr(0, 0x48) = 0;
    }
    if (sSaveMenuStates[saveMenuState].update != 0) {
        (this->*sSaveMenuStates[saveMenuState].update)();
    }
    return TRUE;
}

void SaveMenu::setState(s32 state) {
    if (sSaveMenuStates[state].enter != 0) {
        (this->*sSaveMenuStates[state].enter)();
    }
    saveMenuState = state;
}

void SaveMenu::enterIdle() {}

void SaveMenu::updateIdle() {
    if ((gPad[1] & 8) != 0) {
        if (Scene_GetCurrent() != 0x2d) {
            if (TalkRequestFlags_IsResetti() == 0) {
                if (TalkRequestFlags_IsSceneHold() == 0) {
                    if (Unk_0209e7b4_Is2(gScreenTransition) != 0) {
                        if (TalkRequest_IsActive() == 0) {
                            void *g = gCommManager;
                            if (_ZN11CommManager8isOnlineEv(g) != 0 && _ZN11CommManager7isMyAidEj(g, 0) == 0) {
                                ChatQuickMsg_PostWantToSave();
                            } else if (TalkRequest_AddSaveMenu() != 0) {
                                setState(1);
                            }
                        }
                    }
                }
            }
        }
    }
}

void SaveMenu::enterOpenTalk() {}

void SaveMenu::updateOpenTalk() {
    if (TalkRequest_IsSaveMenuRunning() != 0) {
        TalkWindowState *o = TalkWindow_Get(0);
        SaveMenuTalk *p = &talk;
        p->vfunc_08();
        if (GameStart_IsNewTown() != 0 || GameStart_IsNewResident() != 0) {
            _ZN10MsgRequest11setFileNameEPKc(&talk, (u8 *)"sp_etc_sequence4");
            talk.msgIndex = 4;
        } else if (_ZN11CommManager8isOnlineEv(gCommManager) != 0) {
            _ZN10MsgRequest11setFileNameEPKc(&talk, (u8 *)"sp_etc_sequence2");
            talk.msgIndex = 4;
        } else {
            _ZN10MsgRequest11setFileNameEPKc(&talk, (u8 *)"sp_etc_sequence2");
            talk.msgIndex = 0;
        }
        _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(o, &talk);
        o->nextState = 1;
        setState(2);
    } else {
        setState(0);
    }
}

void SaveMenu::enterTalking() {}

void SaveMenu::updateTalking() {
    TalkWindowState *o = TalkWindow_Get(0);
    if (o->state == 0) {
        o->detachRequest();
        TalkRequest_FinishSaveMenu();
        setState(0);
    }
}

void SaveMenu::enterQuitting() {}

void SaveMenu::updateQuitting() {
    TalkWindowState *o = TalkWindow_Get(0);
    if (o->state == 0) {
        o->detachRequest();
        SceneWarp_RequestFade(Scene_GetWarpRequest(), 0x2e, 2, 3);
        if (_ZN11CommManager8isOnlineEv(gCommManager) != 0) {
            Scene_SavePlayerPos(Scene_GetWarpRequest(), 0);
            SaveManager_RequestAct1A();
        } else {
            SaveManager_RequestAct01();
        }
    }
}

void SaveMenu::enterSaveA() {
    talk.unk_48 = 200;
    Comm_RequestSync(2);
}

void SaveMenu::updateSaveA() {
    TalkWindowState *o = (TalkWindowState *)talk.unk_3c;
    s32 r = Comm_GetSyncState();
    if (r == 5 || r == 6) {
        o->hideBusyIcon();
        o->unlockAdvance();
        if (r == 5) {
            NetSession_SetMemberSyncReply(0, 6);
            NetSession_GetSyncKind();
            NetSession_SetActiveSyncKind();
            o->setNextMessage(gTalkMsgIndexEnd, 0);
            func_0209f230(0);
            setState(3);
        } else {
            u8 b = 5;
            o->setNextMessage(&b, (u8 *)"sp_etc_sequence2");
            setState(2);
        }
        Comm_ClearSyncState();
    }
}

void SaveMenu::enterSaveB() {
    talk.unk_48 = 200;
    Comm_RequestSync(3);
}

// SaveMenu

void SaveMenu::updateSaveB() {
    TalkWindowState *o = (TalkWindowState *)talk.unk_3c;
    s32 r = Comm_GetSyncState();
    if (r == 5 || r == 6) {
        o->hideBusyIcon();
        o->unlockAdvance();
        if (r == 5) {
            NetSession_SetMemberSyncReply(0, 6);
            NetSession_GetSyncKind();
            NetSession_SetActiveSyncKind();
            o->setNextMessage(gTalkMsgIndexEnd, 0);
            func_0209f230(1);
            setState(3);
        } else {
            u8 b = 5;
            o->setNextMessage(&b, (u8 *)"sp_etc_sequence2");
            setState(2);
        }
        Comm_ClearSyncState();
    }
}

SaveMenuTalk::SaveMenuTalk() {}

SaveMenuTalk::~SaveMenuTalk() {}

void SaveMenuTalk::setOwner(SaveMenu *owner) {
    unk_44 = owner;
}

void SaveMenuTalk::onMessageEnd() {
    if (msgIndex == 0) {
        TalkWindowState *o = (TalkWindowState *)unk_3c;
        void *h = o->getChoiceList();
        _ZN10ChoiceList5resetEii(h, 2, 1);
        u8 buf[4];
        buf[0] = 0xc;
        buf[1] = gTalkMsgIndexEnd[0];
        _ZN10ChoiceList8setEntryEiPKhiS1_PKci(h, 0, buf, 1, &buf[1], 0, 2);
        buf[2] = 0xd;
        buf[3] = gTalkMsgIndexEnd[0];
        _ZN10ChoiceList8setEntryEiPKhiS1_PKci(h, 1, &buf[2], 1, &buf[3], 0, 0);
        _ZN10ChoiceList9loadTextsEv(h);
        o->openChoices(1);
    }
}

// SaveMenuTalk

void SaveMenuTalk::onChoice() {
    TalkWindowState *o = (TalkWindowState *)unk_3c;
    s32 r = _ZN10ChoiceList9getResultEv(o->getChoiceList());
    switch (msgIndex) {
    case 4:
        switch (r) {
        case 0:
            o->lockAdvance();
            _ZN15TalkWindowState12showBusyIconEv(o, 1);
            unk_44->setState(4);
            break;
        case 1: {
            u8 b = 8;
            o->setNextMessage(&b, (u8 *)"sp_etc_sequence2");
            break;
        }
        }
        break;
    case 8:
        switch (r) {
        case 0:
            o->lockAdvance();
            _ZN15TalkWindowState12showBusyIconEv(o, 1);
            unk_44->setState(5);
            break;
        case 1:
            o->setNextMessage(gTalkMsgIndexEnd, 0);
            break;
        }
        break;
    case 0:
        if (r == 0) {
            o->setNextMessage(gTalkMsgIndexEnd, 0);
            unk_44->setState(3);
        }
        break;
    }
}

