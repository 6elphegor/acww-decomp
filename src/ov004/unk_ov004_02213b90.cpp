// mwcc-version: 1.2/sp2
// ov004 TU05: .text 0x02213b90-0x02214948 (class MuseumExhibitInfo). The switch function
// MuseumExhibitInfo::buildItemList needs mwcc 1.2/base and is in the _switch file (object order).
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

class Actor : public GameProc {
public:
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct TalkWindowState {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
};

// Secondary base at +0xec (vtable main 0x020ddcf0). MuseumExhibitInfo overrides its slots 0x10, 0x14 and 0x18 with
// the functions its own vtable has at 0x60, 0x64 and 0x68, so those three slots carry the derived names onMessageStart/onMessageEnd/onChoice here
// (the thunks are _ZThn236_N17MuseumExhibitInfo14onMessageStartEv ...). The other slots keep the TalkMsgRequest names.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void onMessageStart();
    virtual BOOL onMessageEnd();
    virtual BOOL onChoice();
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

// Member at +0x134: the original constructs it with the complete-object constructor (C1), which a member declaration
// cannot do, so it is raw storage plus explicit calls through the real symbol names (as in TU04).
struct TouchPickSphere {
    u8 pad[0x1c];
};

class ItemName {
public:
    ItemName(u16 *p);
    ~ItemName();
    u32 pad[9];
};

class MsgString9B {
public:
    MsgString9B();
    ~MsgString9B();
    u32 pad[7];
};

struct Unk_ov004_022142fc_Actor {
    u8 pad_00[0x5c];
    u8 unk_5c[0xc];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_ov004_022146ec_Bits {
    u16 a : 2;
    u16 b : 6;
    u16 c : 8;
};

struct Unk_ov004_022146ec_Actor {
    u8 pad_00[0x5c];
    s32 pos[3];
    u8 pad_68[0x8e - 0x68];
    u16 ang;
};

struct Unk_ov004_022146ec_Sing {
    u8 pad_00[0x64];
    u32 unk_64;
};

class MuseumExhibitInfo;
class TouchPicker;

// Functions of other modules, under their real (mangled) symbol names; the object is the first argument.
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define Character_detachTalkRequest _ZN9Character17detachTalkRequestEi
#define Character_attachTalkRequest _ZN9Character17attachTalkRequestEi
#define Character_setCharId _ZN9Character9setCharIdEj
#define TouchPicker_addSphere _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih
#define MuseumData_isDonated _ZN10MuseumData9isDonatedEPt
#define MuseumData_getDonationState _ZN10MuseumData16getDonationStateEPt
#define MuseumData_getDonorName _ZN10MuseumData12getDonorNameEiPt
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define TalkWindowState_openChoices _ZN15TalkWindowState11openChoicesEi
#define TalkWindowState_setNamedSlot _ZN15TalkWindowState12setNamedSlotEiPvj
#define TalkWindowState_setSlot _ZN15TalkWindowState7setSlotEiPv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define ChoiceList_loadTexts _ZN10ChoiceList9loadTextsEv
#define ChoiceList_setEntry _ZN10ChoiceList8setEntryEiPKhiS1_PKci
#define ChoiceList_reset _ZN10ChoiceList5resetEii

extern "C" {
extern u8 gTalkMsgIndexEnd;
extern char gTalkMsgIndexNone[];
extern u8 gVec3Zero[];
extern s16 data_02135f44[];
extern Unk_ov004_022146ec_Sing *gCommManager;
extern TalkWindowState data_021ed0a0;

void _ZN15TouchPickSphereC1Ev(TouchPickSphere *self);
void _ZN15TouchPickSphereD1Ev(TouchPickSphere *self);
s32 Actor_spawn(s32 a, s32 b, void *c, void *d, void *e);
void Character_detachTalkRequest(void *self, TalkMsgRequest *sec);
void Character_attachTalkRequest(void *self, TalkMsgRequest *sec);
void Character_setCharId(void *self, u32 a);
s32 TouchPicker_addSphere(TouchPicker *self, TouchPickSphere *o, void *a, u32 b, u32 c, u32 d);
s32 MuseumData_isDonated(void *self, u16 *p);
s32 MuseumData_getDonationState(void *self, u16 *p);
s32 MuseumData_getDonorName(void *self, MsgString9B *a, u16 *p);
void *TalkWindowState_getChoiceList(void *self);
void TalkWindowState_openChoices(void *self, s32 a);
void TalkWindowState_setNamedSlot(void *self, s32 a, ItemName *b, u32 c);
void TalkWindowState_setSlot(void *self, s32 a, MsgString9B *b);
void TalkWindowState_setNextMessage(void *self, u8 *a, void *b);
BOOL ChoiceList_getResult(void *self);
void ChoiceList_loadTexts(void *self);
void ChoiceList_setEntry(void *self, s32 a, const u8 *b, s32 c, const char *d, s32 e, s32 f);
void ChoiceList_reset(void *self, s32 a, s32 b);
s32 TalkRequest_SetTargetDone(void *self);
s32 TalkRequest_AddPlayerTalk6(void *self, s32 a);
void ProcBase_RequestDelete(void *self);
void *Mem_Alloc(u32 size);
void Mem_Free(void *p);
s32 func_020e9650(void *a, void *b);
s32 func_020e780c(s32 a, s32 b);
TouchPicker *Scene_GetTouchPicker(void);
s32 Scene_GetCurrent(void);
Unk_ov004_022146ec_Actor *PlayerActor_GetCharacter(u32);
void func_01ffd070(void *, void *, void *);
}

class MuseumExhibitInfo : public Character, public TalkMsgRequest {
public:
    MuseumExhibitInfo();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~MuseumExhibitInfo();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void onMessageStart();
    virtual BOOL onMessageEnd();
    virtual BOOL onChoice();

    void mainAct03();
    BOOL setupAct03();
    void mainAct02();
    BOOL setupAct02();
    void mainAct01();
    BOOL setupAct01();
    void mainAct00();
    BOOL setupAct00();
    void execAct();
    BOOL changeAct(s32 idx);
    BOOL isAutoTalkKind();
    void advanceToNextDonated();
    u32 countDonatedFromCursor();
    BOOL isAllDonated();
    BOOL isAnyDonated();
    BOOL buildItemList();
    BOOL unregisterSelf();
    BOOL registerSelf();

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ TouchPickSphere unk_134;
    /* 0x150 */ u8 unk_150;
    /* 0x151 */ u8 unk_151;
    /* 0x152 */ u8 pad_152[2];
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ u32 unk_158;
    /* 0x15c */ s16 unk_15c;
    /* 0x15e */ u8 pad_15e[2];
    /* 0x160 */ u16 *unk_160;
    /* 0x164 */ u32 unk_164;
    /* 0x168 */ u8 unk_168;
};

typedef void (MuseumExhibitInfo::*Unk_ov004_02213ea8_Fn)();
typedef BOOL (MuseumExhibitInfo::*Unk_ov004_02213f34_Fn)();

struct Unk_ov004_SceneEntry {
    MuseumExhibitInfo *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

struct Unk_ov004_Quad {
    u8 a, b, c, d;
    Unk_ov004_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" {
extern s16 sMuseumExhibitSpawnMsg;
extern char sMuseumExhibitMsgFile[];
extern u8 sMuseumExhibitAutoTalkActive;
extern u8 sMuseumExhibitInfoCount;
extern u32 sMuseumExhibitSpawnKind;
extern u8 *sMuseumExhibitSpawnList;
extern u32 sMuseumExhibitSpawnCount;
extern u32 sMuseumExhibitSpawnFacingArc;
extern MuseumExhibitInfo *sMuseumExhibitInfos[0x20];
MuseumExhibitInfo *MuseumExhibitInfo_Create(void);
void MuseumExhibitInfo_ClearRegistry(void);
}

// ---- definitions ----

// ---------------------------------------------------------------- data
// The six 4-byte objects are initialised by __sinit_ov004_02246b8c in this order.
extern "C" Unk_ov004_Quad data_ov004_022502f4(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022502e4(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022502ec(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022502dc(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022502d0(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_022502e0(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov004_SceneEntry sMuseumExhibitInfoProfile = { MuseumExhibitInfo_Create, 0x19, 0x1e, 0, 0xc8000, 0x12c000, 0x258000 };
extern "C" {
s16 sMuseumExhibitSpawnMsg = -1;
char sMuseumExhibitMsgFile[] = "obj_etc_museum";
u8 sMuseumExhibitAutoTalkActive;
u8 sMuseumExhibitInfoCount;
u32 sMuseumExhibitSpawnKind;
u8 *sMuseumExhibitSpawnList;
u32 sMuseumExhibitSpawnCount;
u32 sMuseumExhibitSpawnFacingArc;
MuseumExhibitInfo *sMuseumExhibitInfos[0x20];
}

// ---------------------------------------------------------------- 0x02213b90
extern "C" s32 MuseumExhibitInfo_SpawnAutoTalk() {
    if (sMuseumExhibitAutoTalkActive == 0) {
        sMuseumExhibitSpawnKind = 4;
        sMuseumExhibitSpawnMsg = 0;
        sMuseumExhibitSpawnList = 0;
        sMuseumExhibitSpawnCount = 0;
        sMuseumExhibitSpawnFacingArc = 0;
        return Actor_spawn(0x19, 0, gVec3Zero, 0, 0);
    }
    return 0;
}

extern "C" void MuseumExhibitInfo_Spawn(s32 a, void *b, s32 c, s32 d, s16 e, u8 *f, s32 g) {
    u16 loc[3];
    sMuseumExhibitSpawnKind = a;
    sMuseumExhibitSpawnMsg = e;
    sMuseumExhibitSpawnList = f;
    sMuseumExhibitSpawnCount = g;
    sMuseumExhibitSpawnFacingArc = d;
    loc[0] = 0;
    loc[1] = c;
    loc[2] = 0;
    Actor_spawn(0x19, 0, b, loc, 0);
}

extern "C" void *MuseumExhibitInfo_GetByIndex(s32 i) {
    if (i >= 0 && (u32)i < 0x20) {
        return sMuseumExhibitInfos[i];
    }
    return 0;
}

void MuseumExhibitInfo::mainAct03() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            changeAct(2);
        }
    }
}

BOOL MuseumExhibitInfo::setupAct03() {
    u16 id[2];
    Character_attachTalkRequest(this, this);
    setFileName(sMuseumExhibitMsgFile);
    id[1] = 0x12e4;
    TalkWindowState *const g = &data_021ed0a0;
    if ((u32)MuseumData_getDonationState(g, &id[1]) <= 1) {
        MsgString9B obj;
        if (MuseumData_getDonorName(g, &obj, &id[1])) {
            unk_1e = 3;
            TalkWindowState_setSlot(unk_3c, 0, &obj);
        }
    } else {
        unk_1e = 4;
    }
    unk_3c->unk_08 = 1;
    unk_168++;
    return TRUE;
}

void MuseumExhibitInfo::mainAct02() {
    if (unk_3c) {
        if (unk_3c->unk_04 == 0) {
            Character_detachTalkRequest(this, this);
            TalkRequest_SetTargetDone(this);
        }
    }
}

void MuseumExhibitInfo::mainAct01() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            changeAct(2);
        }
    }
}

BOOL MuseumExhibitInfo::setupAct01() {
    struct { u16 pad[3]; u16 w; u16 sel; } l;
    u32 i = 0;
    unk_151 = i;
    for (; i < unk_164; i++) {
        l.w = unk_160[i];
        if (MuseumData_isDonated(&data_021ed0a0, &l.w)) {
            unk_151 = i;
            break;
        }
    }
    l.sel = unk_160[unk_151];
    Character_attachTalkRequest(this, this);
    TalkMsgRequest &s = *this;
    s.setFileName(sMuseumExhibitMsgFile);
    if (isAnyDonated() == 0) {
        unk_1e = 0;
    } else if (unk_158 == 3) {
        if (unk_164 == 1) {
            unk_1e = 5;
        } else {
            unk_1e = unk_15c;
        }
    } else if (unk_158 <= 1) {
        u32 n = countDonatedFromCursor();
        if (n > 3) n = 3;
        unk_1e = (n - 1) % 3 + 5;
    } else {
        if (MuseumData_getDonationState(&data_021ed0a0, &l.sel) != 2) {
            unk_1e = 1;
        } else {
            unk_1e = 2;
        }
    }
    unk_3c->unk_08 = 1;
    return TRUE;
}

void MuseumExhibitInfo::mainAct00() {
    if (isAutoTalkKind()) {
        if (unk_168 == 0) {
            TalkRequest_AddPlayerTalk6(this, 0);
        } else {
            ProcBase_RequestDelete(this);
        }
    }
}

void MuseumExhibitInfo::execAct() {
    static Unk_ov004_02213ea8_Fn tbl[4] = {
        &MuseumExhibitInfo::mainAct00,
        &MuseumExhibitInfo::mainAct01,
        &MuseumExhibitInfo::mainAct02,
        &MuseumExhibitInfo::mainAct03,
    };
    if (unk_130 < 4) {
        (this->*tbl[unk_130])();
    }
}

BOOL MuseumExhibitInfo::changeAct(s32 idx) {
    static Unk_ov004_02213f34_Fn tbl[4] = {
        &MuseumExhibitInfo::setupAct00,
        &MuseumExhibitInfo::setupAct01,
        &MuseumExhibitInfo::setupAct02,
        &MuseumExhibitInfo::setupAct03,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_130 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL MuseumExhibitInfo::onChoice() {
    if (isAutoTalkKind() == 0) {
        u8 a0, a1, a2, a3;
        u16 sel;
        if (ChoiceList_getResult(TalkWindowState_getChoiceList(unk_3c)) == 0) {
            sel = unk_160[unk_151];
            if (unk_158 <= 1) {
                u32 n = countDonatedFromCursor();
                if (n > 3) n = 3;
                a0 = (n - 1) % 3 + 5;
                TalkWindowState_setNextMessage(unk_3c, &a0, 0);
            } else if (MuseumData_getDonationState(&data_021ed0a0, &sel) != 2) {
                a1 = 1;
                TalkWindowState_setNextMessage(unk_3c, &a1, 0);
            } else {
                a2 = 2;
                TalkWindowState_setNextMessage(unk_3c, &a2, 0);
            }
        } else {
            a3 = gTalkMsgIndexEnd;
            TalkWindowState_setNextMessage(unk_3c, &a3, 0);
        }
    }
}

BOOL MuseumExhibitInfo::onMessageEnd() {
    u8 b[7];
    if (isAutoTalkKind() == 0) {
        if (unk_158 == 3) {
            if (unk_1e != 5) {
                if (isAllDonated()) {
                    u32 e = unk_1e;
                    if (unk_15c == e) {
                        b[0] = e + 1;
                        TalkWindowState_setNextMessage(unk_3c, &b[0], 0);
                    } else {
                        b[1] = gTalkMsgIndexEnd;
                        TalkWindowState_setNextMessage(unk_3c, &b[1], 0);
                    }
                } else {
                    b[2] = gTalkMsgIndexEnd;
                    TalkWindowState_setNextMessage(unk_3c, &b[2], 0);
                }
            } else {
                b[3] = gTalkMsgIndexEnd;
                TalkWindowState_setNextMessage(unk_3c, &b[3], 0);
            }
        } else if (countDonatedFromCursor() != 0) {
            void *o = TalkWindowState_getChoiceList(unk_3c);
            if (o) {
                ChoiceList_reset(o, 2, 1);
                b[4] = 0xe5;
                ChoiceList_setEntry(o, 0, &b[4], 0, gTalkMsgIndexNone, 0, 0);
                b[5] = 0xe6;
                ChoiceList_setEntry(o, 1, &b[5], 0, gTalkMsgIndexNone, 0, 0);
                ChoiceList_loadTexts(o);
                TalkWindowState_openChoices(unk_3c, 1);
            }
        } else {
            b[6] = gTalkMsgIndexEnd;
            TalkWindowState_setNextMessage(unk_3c, &b[6], 0);
        }
    }
}

void MuseumExhibitInfo::onMessageStart() {
    if (isAutoTalkKind() == 0) {
        u16 w1, w2;
        if (unk_158 <= 1) {
            u32 n = 0;
            switch (unk_1e) {
            case 5: n = 1; break;
            case 6: n = 2; break;
            case 7: n = 3; break;
            }
            u32 i;
            for (i = 0; i < n; i++) {
                w1 = unk_160[unk_151];
                ItemName o(&w1);
                TalkWindowState_setNamedSlot(unk_3c, i, &o, 7);
                advanceToNextDonated();
            }
        } else {
            u32 idx = unk_151;
            if (idx < unk_164) {
                w2 = unk_160[idx];
                MsgString9B e;
                MuseumData_getDonorName(&data_021ed0a0, &e, &w2);
                TalkWindowState_setSlot(unk_3c, 0, &e);
                ItemName o2(&w2);
                TalkWindowState_setNamedSlot(unk_3c, 0, &o2, 7);
                if (unk_158 != 3) {
                    advanceToNextDonated();
                }
            }
        }
    }
}

void MuseumExhibitInfo::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        changeAct(3);
        break;
    case 0:
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

BOOL MuseumExhibitInfo::vfunc_48(void *a0) {
    Unk_ov004_022142fc_Actor *a = (Unk_ov004_022142fc_Actor *)a0;
    if (a) {
        if (func_020e9650(a->unk_5c, (u8 *)this + 0x5c) < 0x2333) {
            if (func_020e780c((s16)(*(s16 *)((u8 *)this + 0x8e) + 0x8000), a->unk_8e) < unk_154) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL MuseumExhibitInfo::unregisterSelf() {
    if (isAutoTalkKind() == 0) {
        u32 idx = unk_150;
        if (idx < 0x20) {
            sMuseumExhibitInfos[idx] = 0;
            sMuseumExhibitInfoCount--;
            unk_150 = 0xff;
            return TRUE;
        }
    } else {
        sMuseumExhibitAutoTalkActive = 0;
    }
    return FALSE;
}

BOOL MuseumExhibitInfo::registerSelf() {
    if (isAutoTalkKind()) {
        unk_150 = 0xff;
        sMuseumExhibitAutoTalkActive = 1;
        return TRUE;
    }
    unk_150 = sMuseumExhibitInfoCount;
    if (unk_150 < 0x20) {
        sMuseumExhibitInfos[unk_150] = this;
        sMuseumExhibitInfoCount++;
        return TRUE;
    }
    return FALSE;
}

BOOL MuseumExhibitInfo::setupAct02() {
    return TRUE;
}

BOOL MuseumExhibitInfo::setupAct00() {
    return TRUE;
}

void MuseumExhibitInfo::advanceToNextDonated() {
    u32 i = unk_151 + 1;
    for (; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (MuseumData_isDonated(&data_021ed0a0, &w)) {
            unk_151 = i;
            return;
        }
    }
    unk_151 = unk_164;
}

u32 MuseumExhibitInfo::countDonatedFromCursor() {
    u32 cnt = 0;
    u32 i = unk_151;
    for (; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (MuseumData_isDonated(&data_021ed0a0, &w)) {
            cnt++;
        }
    }
    return cnt;
}

BOOL MuseumExhibitInfo::isAllDonated() {
    u32 i;
    for (i = 0; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (MuseumData_isDonated(&data_021ed0a0, &w) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL MuseumExhibitInfo::isAnyDonated() {
    u32 i;
    for (i = 0; i < unk_164; i++) {
        u16 w = unk_160[i];
        if (MuseumData_isDonated(&data_021ed0a0, &w)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL MuseumExhibitInfo::isAutoTalkKind() {
    if (unk_158 == 4) {
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------- 0x0221465c
extern "C" void MuseumExhibitInfo_ClearRegistry(void) {
    if (sMuseumExhibitInfoCount == 0) {
        u32 i;
        for (i = 0; i < 0x20; i++) {
            sMuseumExhibitInfos[i] = 0;
        }
    }
}

BOOL MuseumExhibitInfo::vfunc_0c() {
    unregisterSelf();
    if (unk_160 != 0) {
        Mem_Free(unk_160);
    }
    return TRUE;
}

BOOL MuseumExhibitInfo::onDraw() {
    return TRUE;
}

BOOL MuseumExhibitInfo::onExecute() {
    execAct();
    if (isAutoTalkKind() == 0) {
        TouchPicker_addSphere(Scene_GetTouchPicker(), &unk_134, unk_5c, 0xc00, 0xe, unk_150);
    }
    return TRUE;
}

BOOL MuseumExhibitInfo::vfunc_00() {
    Unk_ov004_022146ec_Bits l;
    s32 v[3];
    s32 out[3];
    BOOL r;
    MuseumExhibitInfo_ClearRegistry();
    unk_158 = sMuseumExhibitSpawnKind;
    unk_15c = sMuseumExhibitSpawnMsg;
    unk_164 = sMuseumExhibitSpawnCount;
    unk_154 = sMuseumExhibitSpawnFacingArc;
    if (registerSelf() != 0) {
        if (isAutoTalkKind() != 0) {
            Unk_ov004_022146ec_Actor *o = PlayerActor_GetCharacter(4);
            if (o != 0) {
                s32 idx = (o->ang >> 4) * 2;
                v[0] = data_02135f44[idx];
                v[1] = 0;
                v[2] = data_02135f44[idx + 1];
                func_01ffd070(out, o->pos, v);
                unk_5c[0] = out[0];
                unk_5c[1] = out[1];
                unk_5c[2] = out[2];
            }
        }
        l.a = (u16)gCommManager->unk_64;
        *(u16 *)&l = (*(u16 *)&l & ~0xfc) | ((Scene_GetCurrent() & 0x3f) << 2);
        l.c = unk_150;
        Character_setCharId(this, *(u16 *)&l);
        changeAct(0);
        r = buildItemList();
    } else {
        r = FALSE;
    }
    return r;
}

MuseumExhibitInfo::~MuseumExhibitInfo() {
    _ZN15TouchPickSphereD1Ev(&unk_134);
}

MuseumExhibitInfo::MuseumExhibitInfo() {
    _ZN15TouchPickSphereC1Ev(&unk_134);
}

extern "C" MuseumExhibitInfo *MuseumExhibitInfo_Create(void) {
    return new MuseumExhibitInfo;
}
