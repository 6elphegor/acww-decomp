// mwcc-version: 1.2/sp2
#include "types.h"
#include "actor/ActorProfile.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"
#define PROTO_LOCAL_Visitor_ScheduleLow  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_sGulliverShipVisitorProfile  // declared below: the shared prototype conflicts with the calls here
#include "proto/ov003/unk_ov003_02217814.h"













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

    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL initBuilding();
};

extern "C" GulliverShip *GulliverShip_Create() {
    return new GulliverShip;
}

GulliverShip::GulliverShip() {
}

GulliverShip::~GulliverShip() {
}

BOOL GulliverShip::initBuilding() {
    Visitor_ScheduleLow(&sGulliverShipVisitorProfile, Scene_GetCurrent(), &position);
    return TRUE;
}

BOOL GulliverShip::onExecute() {
    return TRUE;
}

BOOL GulliverShip::onDraw() {
    return TRUE;
}

BOOL GulliverShip::onDelete() {
    return TRUE;
}

extern "C" u32 sGulliverShipVisitorProfile = 0x60;
extern "C" ActorProfile sGulliverShipProfile = {(void *(*)())GulliverShip_Create, 0x27, 0x2d, 0, 0xc8000, 0x12c000, 0x258000};
