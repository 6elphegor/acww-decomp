// mwcc-flags: -nothumb -O4,p
// NitroSDK os_entropy.c: OS_GetLowEntropyData, autoload_2 0x021157f4-0x021158e4. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef int s32;

extern volatile u64 data_021fcf24; // OSi_TickCounter
u16 func_02114da0(void);           // OS_GetTickLo

// OSSystemWork (HW_SYSTEM_WORK = 0x027ffc00), members used here
typedef struct {
    u8 pad_000[0x3c];
    u32 vblankCount;            // 0x03c
    u8 pad_040[0x40];
    u8 nvramUserInfo[0x100];    // 0x080
    u8 pad_180[0x68];
    u8 real_time_clock[8];      // 0x1e8
    u8 pad_1f0[0x1a0];
    u32 mic_last_address;       // 0x390
    u16 mic_sampling_data;      // 0x394
    u16 wm_callback_control;    // 0x396
    u16 wm_rssi_pool;           // 0x398
    u8 pad_39a[0x10];
    u8 touch_panel[4];          // 0x3aa
} OSSystemWork;

#define reg_GX_VCOUNT (*(volatile u16 *)0x04000006)
#define reg_G3X_GXSTAT (*(volatile u32 *)0x04000600)
#define reg_PAD_KEYINPUT (*(volatile u16 *)0x04000130)
#define HW_BUTTON_XY_BUF 0x027fffa8

// GX_GetVCount (gx/gx.h)
static inline s32 GX_GetVCount(void) {
    return reg_GX_VCOUNT;
}

// OS_GetLowEntropyData
void func_021157f4(u32 *buffer) {
    const OSSystemWork *work = (const OSSystemWork *)0x027ffc00;
    const u8 *macAddress = (u8 *)((u32)(work->nvramUserInfo) + 0x74);

    buffer[0] = (u32)((GX_GetVCount() << 16) | func_02114da0());
    buffer[1] = (u32)(*(u16 *)(macAddress + 4) << 16) ^ (u32)(data_021fcf24);
    buffer[2] = (u32)(data_021fcf24 >> 32) ^ *(u32 *)macAddress ^ work->vblankCount;
    buffer[2] ^= reg_G3X_GXSTAT;
    buffer[3] = *(u32 *)(&work->real_time_clock[0]);
    buffer[4] = *(u32 *)(&work->real_time_clock[4]);
    buffer[5] = (((u32)work->mic_sampling_data) << 16) ^ work->mic_last_address;
    buffer[6] = (u32)((*(u16 *)(&work->touch_panel[0]) << 16) | *(u16 *)(&work->touch_panel[2]));
    buffer[7] = (u32)((work->wm_rssi_pool << 16) | (reg_PAD_KEYINPUT | *(volatile u16 *)HW_BUTTON_XY_BUF));
}
