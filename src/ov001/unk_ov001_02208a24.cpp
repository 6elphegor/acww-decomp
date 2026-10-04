// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02208a24_Reg { u32 w0; u16 h4; };
struct WfcLinkIcon { Unk_ov001_02208a24_Reg *reg; u32 task; s8 iconSet; };

extern "C" {
extern void WfcCell_Copy(s32, u32, u32);
extern void WfcTask_Delete(s32, u32);
extern void WfcOam_FreeEntry(u32);
extern void WfcHeap_FreeAndClear(void *);
extern void *WfcHeap_Alloc(s32, s32);
extern Unk_ov001_02208a24_Reg *WfcObj_CreateSingle(s32, s32);
extern u32 WfcTask_Add(s32, void *, s32, s32);
extern u32 WM_GetAllowedChannel();
extern u32 WM_GetLinkLevel();
void WfcLinkIcon_Task();
extern WfcLinkIcon *sWfcLinkIcon;
}

extern "C" const u16 data_ov001_02229bcc[2] = {0xe5, 0x26};
extern "C" const u8 data_ov001_02229bd0[2][4] = {{0x18, 0x17, 0x16, 0x15}, {0x5f, 0x5e, 0x5d, 0x5c}};
extern "C" {
WfcLinkIcon *sWfcLinkIcon;
}

#pragma thumb off

extern "C" void WfcLinkIcon_Create(s32 a) {
    if (sWfcLinkIcon != NULL) {
        return;
    }
    sWfcLinkIcon = (WfcLinkIcon *)WfcHeap_Alloc(0xc, 4);
    sWfcLinkIcon->iconSet = a;
    sWfcLinkIcon->reg = WfcObj_CreateSingle(0, data_ov001_02229bd0[a][0]);
    sWfcLinkIcon->reg->w0 = (sWfcLinkIcon->reg->w0 & 0xfe00ff00) | (data_ov001_02229bcc[1] & 0xff) | ((data_ov001_02229bcc[0] & 0x1ff) << 16);
    sWfcLinkIcon->reg->h4 = (sWfcLinkIcon->reg->h4 & ~0xc00) | 0x800;
    sWfcLinkIcon->task = WfcTask_Add(0, (void *)WfcLinkIcon_Task, 0, 0x78);
}

extern "C" void WfcLinkIcon_Delete() {
    if (sWfcLinkIcon == 0) return;
    WfcTask_Delete(0, sWfcLinkIcon->task);
    WfcOam_FreeEntry((u32)sWfcLinkIcon->reg);
    WfcHeap_FreeAndClear(&sWfcLinkIcon);
}

extern "C" void WfcLinkIcon_Task() {
    volatile u16 *ime = (volatile u16 *)0x4000208;
    u16 saved = *ime;
    u32 x = 0;
    *ime = 0;
    if (WM_GetAllowedChannel() != 0x8000) x = WM_GetLinkLevel();
    *ime;
    *ime = saved;
    const u8 *q = (const u8 *)data_ov001_02229bd0 + sWfcLinkIcon->iconSet * 4;
    WfcCell_Copy(0, q[x], (u32)sWfcLinkIcon->reg);
    const u16 *p = data_ov001_02229bcc;
    Unk_ov001_02208a24_Reg *r = sWfcLinkIcon->reg;
    r->w0 = (r->w0 & 0xfe00ff00) | (p[1] & 0xff) | ((p[0] & 0x1ff) << 16);
    r = sWfcLinkIcon->reg;
    r->h4 = (r->h4 & ~0xc00) | 0x800;
}

#pragma thumb reset
