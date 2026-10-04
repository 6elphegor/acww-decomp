#include "types.h"
#include "net/CommManager.h"
#include "room/Unk_0209c41c_Actor.h"

// TU185: 0x0209c3e0-0x0209c4a8. Three flag bytes in .bss (autoload_3 0x021d7274-0x021d7278) and their accessors.


extern "C" {
extern CommManager *gCommManager;
extern u8 gFieldSceneKind;

u8 sRoomObjSyncStates[3];
}



extern "C" BOOL RoomObjSync_ChangeState(Unk_0209c41c_Actor *self, u8 v) {
    BOOL is1;
    if (gFieldSceneKind == 1) is1 = TRUE;
    else is1 = FALSE;
    if (is1) {
        if (self->vfunc_60(v)) {
            u8 idx = *((u8 *)self + 0xea);
            if (idx < 3) {
                if (gCommManager->isOnline()) {
                    Unk_0209c41c_Pack pk;
                    pk.lo = idx;
                    pk.hi = v;
                    CommManager *g = gCommManager;
                    g->beginRecord();
                    g->writeRecord((u8 *)&pk, 1);
                    g->endRecord(0x25, 4);
                }
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void RoomObjSync_Reset() {
    u32 i = 0;
    u8 z = i;
    for (; i < 3; i++) sRoomObjSyncStates[i] = z;
}

extern "C" u32 RoomObjSync_GetState(u32 idx) {
    if (idx < 3) return sRoomObjSyncStates[idx];
    return 0;
}

extern "C" BOOL RoomObjSync_SetState(u32 idx, u8 v) {
    if (idx < 3) {
        sRoomObjSyncStates[idx] = v;
        return TRUE;
    }
    return FALSE;
}
