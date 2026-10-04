// mwcc-version: 1.2/sp2
#include "types.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"











class Unk_020b1ddc;


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
    virtual BOOL vfunc_48(void *a);
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

BOOL BulletinBoard::vfunc_48(void *other) {
    Character *a = (Character *)other;
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

