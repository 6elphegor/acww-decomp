// mwcc-version: 1.2/sp2
#include "types.h"
#include "actor/ActorProfile.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"











class Unk_020b1ddc;


struct Unk_ov003_022173a8_Glob {
    u8 pad[0x58];
    u32 nativeFruit;
};

extern "C" {
extern Unk_ov003_022173a8_Glob data_021ed150;

void ObjShadow_DrawSign(void *p);
s32 Field_GetSpawnedKind1Count();
void _ZN8ItemNameC1EPt(void *self, u16 *p);
void _ZN8ItemNameD1Ev(void *self);
}


// ============================================================ class TownSign
class TownSign : public BuildingActor {
public:
    TownSign();
    virtual ~TownSign();

    virtual BOOL onDraw();
    virtual BOOL initBuilding();
    virtual void setupTalkMsg();
    virtual BOOL isOpen();

    /* 0x2b0 */ u16 signIndex;
    /* 0x2b2 */ u16 pad_2b2;
};

extern "C" void TownSign_Create() {
    new TownSign;
}

TownSign::TownSign() {
}

TownSign::~TownSign() {
}

BOOL TownSign::initBuilding() {
    signIndex = Field_GetSpawnedKind1Count();
    return TRUE;
}

BOOL TownSign::onDraw() {
    ObjShadow_DrawSign(&position);
    return TRUE;
}

void TownSign::setupTalkMsg() {
    u16 v[2];
    u32 obj[9];
    setFileName("obj_etc_board");
    msgIndex = signIndex % 14 + 1;
    u16 w;
    if (data_021ed150.nativeFruit < 5) {
        w = data_021ed150.nativeFruit + 0x1518;
    } else {
        w = 0x1518;
    }
    v[1] = w;
    _ZN8ItemNameC1EPt(obj, &v[1]);
    window->setSlot(1, obj);
    _ZN8ItemNameD1Ev(obj);
}

BOOL TownSign::isOpen() {
    return FALSE;
}

extern "C" ActorProfile sTownSignProfile = {(void *(*)())TownSign_Create, 0x20, 0x26, 0, 0xc8000, 0x12c000, 0x258000};
