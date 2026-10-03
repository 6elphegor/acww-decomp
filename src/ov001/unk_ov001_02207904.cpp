// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02207904_Oam {
    u32 w0;
    u16 h4;
};

struct Unk_ov001_02207904_S1 {
    u32 unk_00;
    Unk_ov001_02207904_Oam *unk_04;
    u8 unk_08;
    u8 unk_09;
};

typedef void (*Unk_ov001_02207904_Task)(u32);

extern "C" const u16 data_ov001_02229b38[2] = {0xe6, 0x8b};
extern "C" const u8 data_ov001_02229b34[4] = {0x0e, 0x04, 0x05, 0x00};
extern "C" Unk_ov001_02207904_S1 *sWfcBusyIcon = 0;

extern "C" {
s32 FX_ModS32(s32, s32);
s32 FX_DivS32(s32, s32);
void *WfcHeap_AllocClear(u32, u32);
void WfcCell_Copy(u32, u32, void *);
void *WfcObj_CreateSingle(u32, u32);
void WfcTask_Delete(u32, u32);
u32 WfcTask_Add(u32, Unk_ov001_02207904_Task, u32, u32);
void WfcOam_FreeEntry(void *);
void WfcHeap_FreeAndClear(void *);
void WfcBusyIcon_Task(u32 task);
void WfcBusyIcon_Task(u32 task);
}

#pragma thumb off

extern "C" void WfcBusyIcon_Create(u32 idx) {
    Unk_ov001_02207904_S1 *n = (Unk_ov001_02207904_S1 *)WfcHeap_AllocClear(0xc, 4);
    sWfcBusyIcon = n;
    n->unk_08 = idx;
    sWfcBusyIcon->unk_04 = (Unk_ov001_02207904_Oam *)WfcObj_CreateSingle(0, 0x47);
    sWfcBusyIcon->unk_04->h4 = (sWfcBusyIcon->unk_04->h4 & ~0xc00) | 0x400;
    Unk_ov001_02207904_Oam *o = sWfcBusyIcon->unk_04;
    o->w0 = o->w0 & ~0xc00;
    o->h4 = (o->h4 & ~0xf000) | (data_ov001_02229b34[idx] << 12);
    o = sWfcBusyIcon->unk_04;
    o->w0 = (o->w0 & 0xfe00ff00) | (data_ov001_02229b38[1] & 0xff) | ((data_ov001_02229b38[0] & 0x1ff) << 16);
    sWfcBusyIcon->unk_00 = WfcTask_Add(1, WfcBusyIcon_Task, 0, 0x78);
}

extern "C" void WfcBusyIcon_Delete(u32 task) {
    WfcTask_Delete(1, sWfcBusyIcon->unk_00);
    WfcOam_FreeEntry(sWfcBusyIcon->unk_04);
    WfcHeap_FreeAndClear(&sWfcBusyIcon);
}

extern "C" void WfcBusyIcon_Task(u32 task) {
    sWfcBusyIcon->unk_09 = FX_ModS32(sWfcBusyIcon->unk_09 + 1, 0x28);
    s32 id = FX_DivS32(sWfcBusyIcon->unk_09, 5) + 0x47;
    WfcCell_Copy(0, id, sWfcBusyIcon->unk_04);
    sWfcBusyIcon->unk_04->h4 = (sWfcBusyIcon->unk_04->h4 & ~0xc00) | 0x400;
    Unk_ov001_02207904_S1 *d = sWfcBusyIcon;
    u32 t = data_ov001_02229b34[d->unk_08];
    Unk_ov001_02207904_Oam *o = d->unk_04;
    o->w0 = o->w0 & ~0xc00;
    o->h4 = (o->h4 & ~0xf000) | (t << 12);
    o = sWfcBusyIcon->unk_04;
    o->w0 = (o->w0 & 0xfe00ff00) | (data_ov001_02229b38[1] & 0xff) | ((data_ov001_02229b38[0] & 0x1ff) << 16);
}

#pragma thumb reset
