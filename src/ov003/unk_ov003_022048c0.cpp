// mwcc-version: 1.2/sp2
#include "types.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "npc/VillagerId.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "talk/MsgString9B.h"




class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 status);
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 status);
    virtual BOOL preDraw();
    virtual BOOL postDraw(s32 status);
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 rotY;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
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
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void clearTalkStartMode();
    void setCharId(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();

    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};



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

    void setSpeakerName(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_02204930_Pad {
    s32 v;
    Unk_02204930_Pad() {}
    ~Unk_02204930_Pad() {}
};


// member at +0x134: the original constructs it with C2 (base-object constructor), so it is raw storage plus explicit calls
struct TouchPickSphere {
    u8 pad[0x1c];
};

struct TouchPicker;

struct Unk_ov003_022309d0_Color {
    u8 a, b, c, d;
    Unk_ov003_022309d0_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};


extern "C" {
extern u8 gSaveVillagers[];
u8 *SaveVillagers_Get(u8 *p, s32 i);
VillagerId *_ZN12VillagerData13getVillagerIdEv(u8 *p);
void _ZN9Character17detachTalkRequestEi(void *self, TalkMsgRequest *sec);
void _ZN9Character17attachTalkRequestEi(void *self, TalkMsgRequest *sec);
BOOL _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih(TouchPicker *self, TouchPickSphere *o, s32 *a, s32 b, s32 c, u8 d);
BOOL TalkRequest_SetTargetDone(void *p);
s32 func_020e9650(s32 *a, s32 *b);
s32 func_020e780c(s32 a, s32 b);
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
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~VillagerBoard();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);

    void mainReadEnd();
    BOOL setupReadEnd();
    void mainRead();
    BOOL setupRead();
    void mainIdle();
    BOOL setupIdle();
    void runAct();
    BOOL changeAct(s32 m);

    /* 0x130 */ s32 act;
    /* 0x134 */ TouchPickSphere touchSphere;
};

typedef void (VillagerBoard::*Unk_022049a8_Fn)();
typedef BOOL (VillagerBoard::*Unk_02204a24_Fn)();

extern "C" VillagerBoard *VillagerBoard_Create();

extern "C" VillagerBoard *sVillagerBoards[8];

extern "C" Unk_ov003_022309d0_Color data_ov003_02234f80(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f64(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f68(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f70(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f6c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f74(0x14, 0x18, 0x18, 0x1f);
extern "C" {
u8 sVillagerBoardCount;
}

extern "C" VillagerBoard *VillagerBoard_Create() {
    return new VillagerBoard;
}

VillagerBoard::VillagerBoard() {
    _ZN15TouchPickSphereC1Ev(&touchSphere);
}

VillagerBoard::~VillagerBoard() {
    _ZN15TouchPickSphereD1Ev(&touchSphere);
}

BOOL VillagerBoard::vfunc_00() {
    VillagerBoard_ResetTable();
    setCharId((u16) * (s32 *)((u8 *)this + 8));
    changeAct(0);
    sVillagerBoards[*(s32 *)((u8 *)this + 8)] = this;
    sVillagerBoardCount++;
    return TRUE;
}

BOOL VillagerBoard::onExecute() {
    runAct();
    _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih(Scene_GetTouchPicker(), &touchSphere, position, 0xc00, 9, *(s32 *)((u8 *)this + 8));
    return TRUE;
}

BOOL VillagerBoard::onDraw() {
    return TRUE;
}

BOOL VillagerBoard::vfunc_0c() {
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

BOOL VillagerBoard::vfunc_48(void *a) {
    clearTalkStartMode();
    Character *o = (Character *)a;
    if (o) {
        if (func_020e9650(o->position, position) < 0x2333) {
            if (func_020e780c(-0x8000, o->rotY) <= 0x1100) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void VillagerBoard::vfunc_4c(u32 a, u8 b) {
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

extern "C" Unk_ov003_SceneEntry sVillagerBoardProfile = {(void *(*)())VillagerBoard_Create, 0x18, 0x1d, 0, 0xc8000, 0x12c000, 0x258000};
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
    ((TalkWindowState *)unk_3c)->nextState = 1;
    MsgString9B buf;
    _ZN12VillagerData13getVillagerIdEv(SaveVillagers_Get(gSaveVillagers, *(s32 *)((u8 *)this + 8)))->getName((u32)&buf);
    ((TalkWindowState *)unk_3c)->setSlot(0, &buf);
    return TRUE;
}

void VillagerBoard::mainRead() {
    if (unk_3c) {
        if (((TalkWindowState *)unk_3c)->state) {
            changeAct(2);
        }
    }
}

BOOL VillagerBoard::setupReadEnd() {
    return TRUE;
}

void VillagerBoard::mainReadEnd() {
    if (unk_3c) {
        if (((TalkWindowState *)unk_3c)->state == 0) {
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

