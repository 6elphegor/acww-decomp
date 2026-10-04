// mwcc-version: 1.2/sp2
#include "types.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"




class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 status);
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
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
    virtual BOOL vfunc_48(Character *a);
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

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slot names are TalkMsgRequest's; slot 0x14
// (onMessageEnd) is overridden by BuildingActor.
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
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void onMessageEnd();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 getBtaAnim(u32 a);
    void getResources();
    void updateMatrix();

    /* 0x130 */ u8 doorState;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 itemId;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *modelRes;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk baseMatrix;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 gridX;
    /* 0x22c */ u32 gridZ;
    /* 0x230 */ u8 exitDelay;
    /* 0x231 */ u8 colliderFlags;
    /* 0x232 */ Unk_ov003_Flags entryFlags;
    /* 0x233 */ u8 visitRefused;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
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

struct Unk_ov003_02230df4_Color {
    u8 a, b, c, d;
    Unk_ov003_02230df4_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};


extern "C" {
BOOL MenuCtrl_IsFinished();
BOOL MenuCtrl_OpenLauncher(u32 a);
BOOL TalkRequest_SetTargetDone(void *p);
s32 func_020e780c(s32 a, s32 b);
}

class BulletinBoard : public BuildingActor {
public:
    BulletinBoard();
    virtual ~BulletinBoard();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70();

    void updateBoardState();
    BOOL setBoardState(s32 m);
    void execBoardRead();
    BOOL enterBoardRead();
    BOOL execBoardOpen();
    BOOL enterBoardOpen();
    void execBoardIdle();
    BOOL enterBoardIdle();

    /* 0x2b0 */ s32 boardState;
};

extern "C" void BulletinBoard_Create();

typedef void (BulletinBoard::*Unk_02214208_Fn)();
typedef BOOL (BulletinBoard::*Unk_02214284_Fn)();

extern "C" Unk_ov003_02230df4_Color data_ov003_02235110(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov003_02230df4_Color data_ov003_02235100(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov003_02230df4_Color data_ov003_02235104(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_02230df4_Color data_ov003_022350fc(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_02230df4_Color data_ov003_022350f8(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov003_02230df4_Color data_ov003_022350f4(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov003_SceneEntry sBulletinBoardProfile = {(void *(*)())BulletinBoard_Create, 0x22, 0x28, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" void BulletinBoard_Create() {
    new BulletinBoard;
}

BulletinBoard::BulletinBoard() {}

BulletinBoard::~BulletinBoard() {}

BOOL BulletinBoard::vfunc_70() {
    setBoardState(0);
    return TRUE;
}

BOOL BulletinBoard::onExecute() {
    updateBoardState();
    return TRUE;
}

BOOL BulletinBoard::onDraw() {
    return TRUE;
}

BOOL BulletinBoard::vfunc_0c() {
    return TRUE;
}

BOOL BulletinBoard::vfunc_48(Character *a) {
    if (colliderFlags & 8) {
        if (a) {
            if (func_020e780c((s16)(rotY + 0x8000), a->rotY) < 0x1300) {
                clearTalkStartMode();
                return TRUE;
            }
        }
    }
    return FALSE;
}

void BulletinBoard::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        setBoardState(1);
        break;
    case 8:
        setBoardState(0);
        break;
    }
}

BOOL BulletinBoard::setBoardState(s32 m) {
    static Unk_02214284_Fn tbl[3] = { &BulletinBoard::enterBoardIdle, &BulletinBoard::enterBoardOpen, &BulletinBoard::enterBoardRead };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            boardState = m;
            return TRUE;
        }
    }
    return FALSE;
}

void BulletinBoard::updateBoardState() {
    static Unk_02214208_Fn tbl[3] = { (Unk_02214208_Fn)&BulletinBoard::execBoardIdle, (Unk_02214208_Fn)&BulletinBoard::execBoardOpen, (Unk_02214208_Fn)&BulletinBoard::execBoardRead };
    if (boardState < 3) {
        (this->*tbl[boardState])();
    }
}

BOOL BulletinBoard::enterBoardIdle() {
    return TRUE;
}

void BulletinBoard::execBoardIdle() {}

BOOL BulletinBoard::enterBoardOpen() {
    if (MenuCtrl_OpenLauncher(0)) {
        return TRUE;
    }
    return FALSE;
}

BOOL BulletinBoard::execBoardOpen() {
    return setBoardState(2);
}

BOOL BulletinBoard::enterBoardRead() {
    return TRUE;
}

void BulletinBoard::execBoardRead() {
    if (MenuCtrl_IsFinished()) {
        TalkRequest_SetTargetDone(this);
    }
}

