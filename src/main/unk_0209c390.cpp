#include "types.h"
#include "game/NibblePair.h"
#include "room/Unk_0209c41c_Actor.h"

// TU184: 0x0209c390-0x0209c3e0. Two state bytes in .bss (autoload_3 0x021d726c-0x021d7274).

extern "C" {
extern u8 data_021f47d0;

BOOL RoomObjSync_SetState(u32 idx, u8 v);
}


u8 gSoftResetRequested;
u8 sSoftResetHeld;

extern "C" BOOL RoomObjSync_OnRecv(NibblePair *p) {
    return RoomObjSync_SetState(p->lo, p->hi);
}

extern "C" void SoftReset_Update() {
    if (gSoftResetRequested == 0) {
        if (sSoftResetHeld != 0) {
            if (data_021f47d0 == 0) sSoftResetHeld = 0;
        } else if (data_021f47d0 != 0) {
            gSoftResetRequested = 1;
            sSoftResetHeld = 1;
        }
    }
}
