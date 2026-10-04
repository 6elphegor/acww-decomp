// mwcc-version: 1.2/sp2
#include "types.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
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


extern "C" {
extern u32 sGulliverShipVisitorProfile;
void Visitor_ScheduleLow(void *a, void *b, void *c);
void *Scene_GetCurrent();
}


// ============================================================ class GulliverShip
class GulliverShip : public BuildingActor {
public:
    GulliverShip();
    virtual ~GulliverShip();

    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_70();
};

extern "C" GulliverShip *GulliverShip_Create() {
    return new GulliverShip;
}

GulliverShip::GulliverShip() {
}

GulliverShip::~GulliverShip() {
}

BOOL GulliverShip::vfunc_70() {
    Visitor_ScheduleLow(&sGulliverShipVisitorProfile, Scene_GetCurrent(), &position);
    return TRUE;
}

BOOL GulliverShip::onExecute() {
    return TRUE;
}

BOOL GulliverShip::onDraw() {
    return TRUE;
}

BOOL GulliverShip::vfunc_0c() {
    return TRUE;
}

extern "C" u32 sGulliverShipVisitorProfile = 0x60;
extern "C" Unk_ov003_SceneEntry sGulliverShipProfile = {(void *(*)())GulliverShip_Create, 0x27, 0x2d, 0, 0xc8000, 0x12c000, 0x258000};
