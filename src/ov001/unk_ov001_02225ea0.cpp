// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

typedef volatile u16 vu16;

extern "C" {
s32 PM_SetLCDPower(u32 a);

void WfcUtil_UpdateLidPower();

u8 sWfcLcdOff;
}

void WfcUtil_UpdateLidPower() {
    if (sWfcLcdOff != 0) {
        if (((*(vu16 *)0x27fffa8 & 0x8000) >> 15) != 0) return;
        if (PM_SetLCDPower(1) != 0) sWfcLcdOff = 0;
    } else {
        if (((*(vu16 *)0x27fffa8 & 0x8000) >> 15) == 0) return;
        if (PM_SetLCDPower(0) != 0) sWfcLcdOff = 1;
    }
}

