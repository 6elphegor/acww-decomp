// mwcc-version: 1.2/sp2
#include "types.h"
#include "gfx/VecFx32.h"
#include "actor/ActorProfile.h"
#include "actor/ActorListNode.h"
#include "actor/CharacterListNode.h"
#include "talk/TalkWindowState.h"
#include "game/TouchPicker.h"
#include "sys/ProcBase.h"
#include "talk/MsgString25.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/ChoiceList.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "game/TouchPickTriangle.h"


// ---------------------------------------------------------------- library base chain (as in link_ov009)






// ---------------------------------------------------------------- secondary base at +0xec (vtable 0x020ddcf0 in main)







extern "C" {
void *PlayerData_GetCurrent();
u16 *NookPoints_GetValuePtr(void *p);
s32 NookPoints_GetRank(u32 x);
s32 NookPoints_GetToNextRank(u16 *p);
s32 String_FormatNumber(MsgString25 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
TouchPicker *Scene_GetTouchPicker();
BOOL TalkRequest_SetTargetDone(void *p);
s32 Vec_DistXZ(s32 *a, s32 *b);
BOOL BoxCollider_Unregister(void *self);
void BoxCollider_Register(void *self, s32 a, s32 b, s32 c, s32 *p, s16 s, s32 *q);
void _ZN9Character17detachTalkRequestEi(void *self, TalkMsgRequest *sec);
void _ZN9Character17attachTalkRequestEi(void *self, TalkMsgRequest *sec);
void *_ZN10PlayerData13getNookPointsEv(void *self);
void _ZN11BoxColliderC1Ev(void *self);
void _ZN11BoxColliderD2Ev(void *self);
void _ZN12TouchPickBoxC2Ev(void *self);
void _ZN12TouchPickBoxD2Ev(void *self);
extern char *sAtmMsgFilePtr;
extern char *sAtmStringBankPtr;
}

#define Character_detachTalkRequest _ZN9Character17detachTalkRequestEi
#define Character_attachTalkRequest _ZN9Character17attachTalkRequestEi
#define PlayerData_getNookPoints _ZN10PlayerData13getNookPointsEv

// ---------------------------------------------------------------- Atm
class Atm : public Character, public TalkMsgRequest {
public:
    Atm();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Atm();
    virtual BOOL acceptsInteraction(void *a);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual void onMessageStart(u32 attr);
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);

    void execTalkAct02();
    BOOL enterTalkAct02();
    void execTalkAct01();
    BOOL enterTalkAct01();
    void execTalkAct00();
    BOOL enterTalkAct00();
    void execTalkAct();
    BOOL setTalkAct(s32 m);
    void setPointTexts();
    BOOL releaseCollision();
    void initCollision();

    /* 0x130 */ s32 talkAct;
    /* 0x134 */ u8 collider[0x9c]; // BoxCollider (ctor C1 / dtor D2 called by hand, as the original does)
    /* 0x1d0 */ u32 touchBox[0x2a8 / 4]; // a TouchPickBox (ctor C2 / dtor D2 called by hand)
};

typedef void (Atm::*Unk_02204a88_Fn)();
typedef BOOL (Atm::*Unk_02204b04_Fn)();

extern "C" Atm *sAtmInstance;

struct AtmTalkStackPad {
    s32 v[2];
    AtmTalkStackPad() {}
    ~AtmTalkStackPad() {}
};

extern "C" Atm *Atm_Create() {
    return new Atm;
}

extern "C" Atm *Atm_GetInstance() {
    return sAtmInstance;
}

// ---------------------------------------------------------------- data

Atm::Atm() {
    _ZN11BoxColliderC1Ev(collider);
    _ZN12TouchPickBoxC2Ev(touchBox);
    sAtmInstance = 0;
}

Atm::~Atm() {
    _ZN12TouchPickBoxD2Ev(touchBox);
    _ZN11BoxColliderD2Ev(collider);
}

BOOL Atm::onCreate() {
    sAtmInstance = this;
    setCharId(0);
    setTalkAct(0);
    initCollision();
    return TRUE;
}

BOOL Atm::onExecute() {
    execTalkAct();
    Scene_GetTouchPicker()->pushBox((TouchPickBox *)touchBox);
    return TRUE;
}

BOOL Atm::onDraw() {
    return TRUE;
}

BOOL Atm::onDelete() {
    releaseCollision();
    return TRUE;
}

void Atm::initCollision() {
    BoxCollider_Register(collider, 0x2000, 0x2000, 0x2000, &position.x, 0, 0);
    Scene_GetTouchPicker()->addBox((TouchPickBox *)touchBox, (VecFx32 *)&position, 0x2000, 0x2000, 0x2000, 0, 0xb, 0xff);
}

BOOL Atm::releaseCollision() {
    return BoxCollider_Unregister(collider);
}

void Atm::setPointTexts() {
    if (window) {
        u16 *p = NookPoints_GetValuePtr(PlayerData_getNookPoints(PlayerData_GetCurrent()));
        u8 buf[2];
        MsgString25 obj;
        String_FormatNumber(&obj, *p, 10, 1, 0, 0);
        window->setSlot(0, &obj);
        String_FormatNumber(&obj, NookPoints_GetToNextRank(p), 10, 1, 0, 0);
        window->setSlot(1, &obj);
        if (NookPoints_GetRank(*p) != 0) {
            buf[0] = NookPoints_GetRank(*p) - 1;
            window->setSlotFromString(2, (s32)&buf[0], (s32)sAtmStringBankPtr);
        }
        buf[1] = NookPoints_GetRank(*p);
        window->setSlotFromString(3, (s32)&buf[1], (s32)sAtmStringBankPtr);
    }
}

BOOL Atm::acceptsInteraction(void *a) {
    Character *o = (Character *)a;
    if (o) {
        if (Vec_DistXZ(&o->position.x, &position.x) < 0x2333) {
            u32 d = (u16)(o->rotY - (rotY + 0x8000));
            if (d < 0x1000 || d >= 0xf000) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

void Atm::onInteractionEvent(u32 a, u8 b) {
    switch (a) {
    case 0:
        setTalkAct(1);
        break;
    case 8:
        setTalkAct(0);
        break;
    }
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Atm *sAtmInstance;
extern "C" char *sAtmStringBankPtr;
extern "C" char sAtmMsgFile[12];
extern "C" char *sAtmMsgFilePtr;
extern "C" char sAtmStringBank[8];
extern "C" ActorProfile sAtmProfile;

extern "C" Atm *sAtmInstance = 0;

extern "C" char *sAtmStringBankPtr = sAtmStringBank;

extern "C" char sAtmMsgFile[12] = "sp_npc_atm";

extern "C" char *sAtmMsgFilePtr = sAtmMsgFile;

extern "C" char sAtmStringBank[8] = "st_atm";

extern "C" ActorProfile sAtmProfile = {(void *(*)())Atm_Create, 0x2c, 0x32, 0, 0xc8000, 0x12c000, 0x258000};

BOOL Atm::setTalkAct(s32 m) {
    static Unk_02204b04_Fn tbl[3] = { (Unk_02204b04_Fn)&Atm::enterTalkAct00, (Unk_02204b04_Fn)&Atm::enterTalkAct01, (Unk_02204b04_Fn)&Atm::enterTalkAct02 };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            talkAct = m;
            return TRUE;
        }
    }
    return FALSE;
}

void Atm::execTalkAct() {
    static Unk_02204a88_Fn tbl[3] = { &Atm::execTalkAct00, &Atm::execTalkAct01, &Atm::execTalkAct02 };
    if (talkAct < 3) {
        (this->*tbl[talkAct])();
    }
}

BOOL Atm::enterTalkAct00() {
    return TRUE;
}

void Atm::execTalkAct00() {}

BOOL Atm::enterTalkAct01() {
    AtmTalkStackPad pad;
    Character_attachTalkRequest(this, this);
    setFileName(sAtmMsgFilePtr);
    msgIndex = 0;
    setPointTexts();
    window->nextState = 1;
    return TRUE;
}

void Atm::execTalkAct01() {
    if (window) {
        if (window->state) {
            setTalkAct(2);
        }
    }
}

BOOL Atm::enterTalkAct02() {
    return TRUE;
}

void Atm::execTalkAct02() {
    if (window) {
        if (window->state == 0) {
            Character_detachTalkRequest(this, this);
            TalkRequest_SetTargetDone(this);
        }
    }
}

void Atm::onMessageStart(u32) {}

void Atm::onMessageEnd(u32) {
    u8 buf[2];
    switch (msgIndex) {
    case 1:
    case 2:
        if (NookPoints_GetRank(*NookPoints_GetValuePtr(PlayerData_getNookPoints(PlayerData_GetCurrent()))) == 4) {
            buf[0] = 5;
            window->setNextMessage(&buf[0], sAtmMsgFilePtr);
        } else {
            buf[1] = 3;
            window->setNextMessage(&buf[1], sAtmMsgFilePtr);
        }
        break;
    }
}

// ================================================================ Atm
void Atm::onChoice(u32) {
    u8 buf[4];
    u32 st = msgIndex;
    s32 v = window->getChoiceList()->getResult();
    if (st == 0 || st == 7) {
        switch (v) {
        case 0:
            if (NookPoints_GetRank(*NookPoints_GetValuePtr(PlayerData_getNookPoints(PlayerData_GetCurrent()))) == 0) {
                buf[0] = 1;
                window->setNextMessage(&buf[0], sAtmMsgFilePtr);
            } else {
                buf[1] = 2;
                window->setNextMessage(&buf[1], sAtmMsgFilePtr);
            }
            break;
        case 1:
            buf[2] = 6;
            window->setNextMessage(&buf[2], sAtmMsgFilePtr);
            break;
        case 2:
            buf[3] = 4;
            window->setNextMessage(&buf[3], sAtmMsgFilePtr);
            break;
        }
    }
}

