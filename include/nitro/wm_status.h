#ifndef NITRO_WM_STATUS_H
#define NITRO_WM_STATUS_H

#include "nitro/wm.h"

// NitroSDK WM status block and ARM9 system work (WM_Init's buffer, WMi_GetSystemWork) shared by the WM units in
// autoload_2 (0x0211e3fc-0x02121e5c). Field names are offsets where no SDK name is proven. WmInitCore lays the buffer
// out as: this struct, the ARM7 work at w0 (+0x200), the status block (+0x500), then two 0x100 FIFO buffers (req, f10).
// Kept out of nitro/wm.h for now because ov066 (src/ov066/unk_ov066_0225f1a0.cpp) still declares its own
// WMStatus / WMArm9Buf after including nitro/wm.h; move these into nitro/wm.h when that copy is folded.

typedef void (*WMCallback)(WMMsg *);

typedef struct WMStatus {
    /* 0x000 */ u16 state;
    /* 0x002 */ u8 _02[0x0a];
    /* 0x00c */ u32 f0c;
    /* 0x010 */ u32 f10;
    /* 0x014 */ u8 _14[0x32];
    /* 0x046 */ u16 f46;
    /* 0x048 */ u8 _48[0x08];
    /* 0x050 */ u32 f50;
    /* 0x054 */ u8 _54[0x32];
    /* 0x086 */ u16 f86;
    /* 0x088 */ u8 _88[0x30];
    /* 0x0b8 */ u16 fb8;
    /* 0x0ba */ u8 _ba[0x08];
    /* 0x0c2 */ u16 fc2;
    /* 0x0c4 */ u8 _c4[0x30];
    /* 0x0f4 */ u16 ff4;
    /* 0x0f6 */ u8 _f6[0x88];
    /* 0x17e */ u16 f17e;
    /* 0x180 */ u8 _180[4];
    /* 0x184 */ u16 f184;
    /* 0x186 */ u8 _186[8];
    /* 0x18e */ u16 f18e;
    /* 0x190 */ u16 f190;
} WMStatus;

typedef struct WMArm9Buf {
    /* 0x00 */ void *w0;
    /* 0x04 */ WMStatus *status;
    /* 0x08 */ u32 f8;
    /* 0x0c */ u8 *req;              // command buffer sent to the ARM7 (WMi_SendCommand)
    /* 0x10 */ u8 *f10;              // FIFO receive buffer (WmReceiveFifo)
    /* 0x14 */ u16 dmaNo;
    /* 0x16 */ u16 f16;
    /* 0x18 */ WMCallback cb18[42];  // per-command callbacks (WMi_SetCallbackTable)
    /* 0xc0 */ WMCallback cbC0;
    /* 0xc4 */ WMCallback portCb[16]; // WM_SetPortCallback
    /* 0x104 */ u32 portArg[16];
} WMArm9Buf;

#endif
