// mwcc-flags: -nothumb -O4,p
// NitroSDK os_entropy.c: OS_GetLowEntropyData, autoload_2 0x021157f4-0x021158e4. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
#include "types64.h"
#include "host_mem.h"
#include "nitro/io_access.h"
typedef int s32;

extern volatile u64 data_021fcf24; // OSi_TickCounter
u16 OS_GetTickLo(void);           // OS_GetTickLo

// OSSystemWork (HW_SYSTEM_WORK = 0x027ffc00): the system work area, include/host_mem.h

#define reg_GX_VCOUNT (*(volatile u16 *)0x04000006)
#define reg_G3X_GXSTAT (*(volatile u32 *)0x04000600)
#define reg_PAD_KEYINPUT (*(volatile u16 *)0x04000130)

// GX_GetVCount (gx/gx.h)
static inline s32 GX_GetVCount(void) {
    return IO_R(&reg_GX_VCOUNT);
}

// OS_GetLowEntropyData
void OS_GetLowEntropyData(u32 *buffer) {
    const HostSysWork *work = &gHostSysWork;
    const u8 *macAddress = (const u8 *)work->nvramUserInfo + 0x74;

    buffer[0] = (u32)((GX_GetVCount() << 16) | OS_GetTickLo());
    buffer[1] = (u32)(*(u16 *)(macAddress + 4) << 16) ^ (u32)(data_021fcf24);
    buffer[2] = (u32)(data_021fcf24 >> 32) ^ *(u32 *)macAddress ^ work->vblankCount;
    buffer[2] ^= IO_R(&reg_G3X_GXSTAT);
    buffer[3] = work->realTimeClock[0];
    buffer[4] = work->realTimeClock[1];
    buffer[5] = (((u32)work->micSamplingData) << 16) ^ work->micLastAddress;
    buffer[6] = (u32)((work->touchPanel[0] << 16) | work->touchPanel[1]);
    buffer[7] = (u32)((work->wmRssiPool << 16) | (IO_R(&reg_PAD_KEYINPUT) | *(volatile u16 *)&work->buttonXY));
}
