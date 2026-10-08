// mwcc-version: 1.2/base
// BuildingActor::onInteractionEvent (the rest of the class: unk_ov009_0225b880.cpp)
#include "types.h"
#include "town/BuildingActor.h"
#include "proto/main/unk_020b0e60.h"
#include "proto/ov009/unk_ov009_0225b880_switch.h"

// (src/main/unk_020b4828.cpp; not in the shared headers: include/proto/.excluded)
extern "C" {
u8 *Scene_GetWarpRequest(void);
void Scene_ResetTownReturnPos(u8 *unused);  // (defined with an unused s32: the warp request is passed)
}

void BuildingActor::onInteractionEvent(u32 a, u8 b) {
    switch (a) {
    case 6:
        BuildingOccupancy_Leave(itemId, 0);
        HouseVisitor_ClearPresent();
        Scene_ResetTownReturnPos(Scene_GetWarpRequest());
        exitDelay = 1;
        break;
    case 0:
    case 1:
        setEntryState(1);
        break;
    case 8:
        setEntryState(0);
        break;
    }
}
