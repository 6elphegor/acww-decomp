// mwcc-version: 1.2/sp2
#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

// ---------------------------------------------------------------- library base chain (as in link_ov009)
// Slots 0x0c / 0x24 are overridden by Atm; they carry the overriding methods' names so that the
// overrides do not also override the secondary base's vfunc_0c / vfunc_24 (which would emit extra thunks).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

struct Unk_02002f14_Node {
    void *unk_00;
    void *unk_04;
    void *unk_08;
};

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ Unk_02002f14_Node listNode;
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 rotY;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *next;
    u32 charId;
    void *owner;
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void setCharId(u32 a);

    /* 0xd4 */ Unk_0203e5d0_Node charNode;
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
    /* 0xea */ u16 pad_ea;
};

// ---------------------------------------------------------------- secondary base at +0xec (vtable 0x020ddcf0 in main)
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();
    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

class ChoiceList {
public:
    s32 getResult();
};

struct TalkWindowState {
    ChoiceList *getChoiceList();
    void setSlotFromString(s32 idx, s32 a, s32 b);
    s32 setSlot(s32 idx, void *p);
    void setNextMessage(u8 *src, void *s);

    /* 0x0000 */ u32 index;
    /* 0x0004 */ s32 state;
    /* 0x0008 */ s32 nextState;
};

// Slots 0x10..0x18 are overridden by the derived class's own new virtuals (named after their addresses).
class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
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
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct TouchPickBox {
    u8 pad[0x2a8];
};

struct TouchPicker {
    BOOL addBox(TouchPickBox *box, Vec3 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f);
    BOOL pushBox(TouchPickBox *box);
};

class MsgString25 {
public:
    MsgString25();
    ~MsgString25();
    u32 pad[0xc];
};

extern "C" {
void *PlayerData_GetCurrent();
u16 *NookPoints_GetValuePtr(void *p);
s32 NookPoints_GetRank(u32 x);
s32 NookPoints_GetToNextRank(u16 *p);
s32 String_FormatNumber(MsgString25 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
TouchPicker *Scene_GetTouchPicker();
BOOL TalkRequest_SetTargetDone(void *p);
s32 func_020e9650(s32 *a, s32 *b);
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
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Atm();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();

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

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ u8 unk_134[0x9c]; // BoxCollider (ctor C1 / dtor D2 called by hand, as the original does)
    /* 0x1d0 */ TouchPickBox unk_1d0; // (ctor C2 / dtor D2 called by hand)
};

typedef void (Atm::*Unk_02204a88_Fn)();
typedef BOOL (Atm::*Unk_02204b04_Fn)();

extern "C" Atm *sAtmInstance;

struct Unk_02204a38_Pad {
    s32 v[2];
    Unk_02204a38_Pad() {}
    ~Unk_02204a38_Pad() {}
};

extern "C" Atm *Atm_Create() {
    return new Atm;
}

extern "C" Atm *Atm_GetInstance() {
    return sAtmInstance;
}

// ---------------------------------------------------------------- data
struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 executePriority;
    u16 drawPriority;
    s32 actorParams[4];
};

Atm::Atm() {
    _ZN11BoxColliderC1Ev(unk_134);
    _ZN12TouchPickBoxC2Ev(&unk_1d0);
    sAtmInstance = 0;
}

Atm::~Atm() {
    _ZN12TouchPickBoxD2Ev(&unk_1d0);
    _ZN11BoxColliderD2Ev(unk_134);
}

BOOL Atm::vfunc_00() {
    sAtmInstance = this;
    setCharId(0);
    setTalkAct(0);
    initCollision();
    return TRUE;
}

BOOL Atm::onExecute() {
    execTalkAct();
    Scene_GetTouchPicker()->pushBox(&unk_1d0);
    return TRUE;
}

BOOL Atm::onDraw() {
    return TRUE;
}

BOOL Atm::vfunc_0c() {
    releaseCollision();
    return TRUE;
}

void Atm::initCollision() {
    BoxCollider_Register(unk_134, 0x2000, 0x2000, 0x2000, position, 0, 0);
    Scene_GetTouchPicker()->addBox(&unk_1d0, (Vec3 *)position, 0x2000, 0x2000, 0x2000, 0, 0xb, 0xff);
}

BOOL Atm::releaseCollision() {
    return BoxCollider_Unregister(unk_134);
}

void Atm::setPointTexts() {
    if (unk_3c) {
        u16 *p = NookPoints_GetValuePtr(PlayerData_getNookPoints(PlayerData_GetCurrent()));
        u8 buf[2];
        MsgString25 obj;
        String_FormatNumber(&obj, *p, 10, 1, 0, 0);
        unk_3c->setSlot(0, &obj);
        String_FormatNumber(&obj, NookPoints_GetToNextRank(p), 10, 1, 0, 0);
        unk_3c->setSlot(1, &obj);
        if (NookPoints_GetRank(*p) != 0) {
            buf[0] = NookPoints_GetRank(*p) - 1;
            unk_3c->setSlotFromString(2, (s32)&buf[0], (s32)sAtmStringBankPtr);
        }
        buf[1] = NookPoints_GetRank(*p);
        unk_3c->setSlotFromString(3, (s32)&buf[1], (s32)sAtmStringBankPtr);
    }
}

BOOL Atm::vfunc_48(void *a) {
    Character *o = (Character *)a;
    if (o) {
        if (func_020e9650(o->position, position) < 0x2333) {
            u32 d = (u16)(o->rotY - (rotY + 0x8000));
            if (d < 0x1000 || d >= 0xf000) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

void Atm::vfunc_4c(u32 a, u8 b) {
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
extern "C" Unk_ov004_Scene_Entry sAtmProfile;

extern "C" Atm *sAtmInstance = 0;

extern "C" char *sAtmStringBankPtr = sAtmStringBank;

extern "C" char sAtmMsgFile[12] = "sp_npc_atm";

extern "C" char *sAtmMsgFilePtr = sAtmMsgFile;

extern "C" char sAtmStringBank[8] = "st_atm";

extern "C" Unk_ov004_Scene_Entry sAtmProfile = {(void *(*)())Atm_Create, 0x2c, 0x32, {0, 0xc8000, 0x12c000, 0x258000}};

BOOL Atm::setTalkAct(s32 m) {
    static Unk_02204b04_Fn tbl[3] = { (Unk_02204b04_Fn)&Atm::enterTalkAct00, (Unk_02204b04_Fn)&Atm::enterTalkAct01, (Unk_02204b04_Fn)&Atm::enterTalkAct02 };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            unk_130 = m;
            return TRUE;
        }
    }
    return FALSE;
}

void Atm::execTalkAct() {
    static Unk_02204a88_Fn tbl[3] = { &Atm::execTalkAct00, &Atm::execTalkAct01, &Atm::execTalkAct02 };
    if (unk_130 < 3) {
        (this->*tbl[unk_130])();
    }
}

BOOL Atm::enterTalkAct00() {
    return TRUE;
}

void Atm::execTalkAct00() {}

BOOL Atm::enterTalkAct01() {
    Unk_02204a38_Pad pad;
    Character_attachTalkRequest(this, this);
    setFileName(sAtmMsgFilePtr);
    msgIndex = 0;
    setPointTexts();
    unk_3c->nextState = 1;
    return TRUE;
}

void Atm::execTalkAct01() {
    if (unk_3c) {
        if (unk_3c->state) {
            setTalkAct(2);
        }
    }
}

BOOL Atm::enterTalkAct02() {
    return TRUE;
}

void Atm::execTalkAct02() {
    if (unk_3c) {
        if (unk_3c->state == 0) {
            Character_detachTalkRequest(this, this);
            TalkRequest_SetTargetDone(this);
        }
    }
}

void Atm::onMessageStart() {}

void Atm::onMessageEnd() {
    u8 buf[2];
    switch (msgIndex) {
    case 1:
    case 2:
        if (NookPoints_GetRank(*NookPoints_GetValuePtr(PlayerData_getNookPoints(PlayerData_GetCurrent()))) == 4) {
            buf[0] = 5;
            unk_3c->setNextMessage(&buf[0], sAtmMsgFilePtr);
        } else {
            buf[1] = 3;
            unk_3c->setNextMessage(&buf[1], sAtmMsgFilePtr);
        }
        break;
    }
}

// ================================================================ Atm
void Atm::onChoice() {
    u8 buf[4];
    u32 st = msgIndex;
    s32 v = unk_3c->getChoiceList()->getResult();
    if (st == 0 || st == 7) {
        switch (v) {
        case 0:
            if (NookPoints_GetRank(*NookPoints_GetValuePtr(PlayerData_getNookPoints(PlayerData_GetCurrent()))) == 0) {
                buf[0] = 1;
                unk_3c->setNextMessage(&buf[0], sAtmMsgFilePtr);
            } else {
                buf[1] = 2;
                unk_3c->setNextMessage(&buf[1], sAtmMsgFilePtr);
            }
            break;
        case 1:
            buf[2] = 6;
            unk_3c->setNextMessage(&buf[2], sAtmMsgFilePtr);
            break;
        case 2:
            buf[3] = 4;
            unk_3c->setNextMessage(&buf[3], sAtmMsgFilePtr);
            break;
        }
    }
}

