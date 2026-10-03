// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0221ce48_S { s32 unk_00; u8 unk_04[0x600]; u8 unk_604; };
struct Unk_ov001_0221cd74_D { void *unk_00; void *unk_04; };

extern "C" {
void GX_LoadBG2Scr(void *, s32, u32);
void MIi_CpuCopyFast(void *, void *, u32);
void MIi_CpuCopy16(void *, void *, u32);
void DC_FlushRange(void *, s32);
void WfcTask_RequestDelete(s32, s32);
u32 WfcTask_Add(s32, void *, s32, s32);
void WfcTask_Delete(s32, s32);
void WfcHeap_FreeAndClear(void *);
void *WfcHeap_AllocClear(s32, s32);

void WfcUtil_BgPaletteTask(s32);
void WfcUtil_RequestBgPalette(s32);
void WfcUtil_PaletteLineTask(s32);
void WfcUtil_RequestPaletteLine(s32, s32, s32);
void WfcBgMap_TransferTask();
void WfcBgMap_Blit(u8 *, s32, s32, s32);
void WfcBgMap_RequestTransfer();
void WfcBgMap_Destroy();
void WfcBgMap_Create(void *);
}

extern "C" Unk_ov001_0221ce48_S *sWfcBgMap = 0;
extern "C" Unk_ov001_0221cd74_D sWfcPaletteCopy = {0, 0};

extern "C" void WfcBgMap_Create(void *a) {
    Unk_ov001_0221ce48_S *p = (Unk_ov001_0221ce48_S *)WfcHeap_AllocClear(0x608, 4);
    sWfcBgMap = p;
    MIi_CpuCopyFast(a, p->unk_04, 0x600);
    sWfcBgMap->unk_00 = WfcTask_Add(1, (void *)WfcBgMap_TransferTask, 0, 0x78);
}

extern "C" void WfcBgMap_Destroy() {
    WfcTask_Delete(1, sWfcBgMap->unk_00);
    WfcHeap_FreeAndClear(&sWfcBgMap);
}

extern "C" void WfcBgMap_RequestTransfer() {
    sWfcBgMap->unk_604 = 1;
}

extern "C" void WfcBgMap_Blit(u8 *a, s32 b, s32 c, s32 d) {
    u8 *src = sWfcBgMap->unk_04 + b * 2;
    s32 i;
    for (i = 0; i < d; a += 0x40, src += 0x40, i++) {
        MIi_CpuCopy16(a, src, c * 2);
    }
}

extern "C" void WfcBgMap_TransferTask() {
    if (sWfcBgMap->unk_604 == 0) return;
    DC_FlushRange(sWfcBgMap->unk_04, 0x600);
    GX_LoadBG2Scr(sWfcBgMap->unk_04, 0, 0x600);
    sWfcBgMap->unk_604 = 0;
}

extern "C" void WfcUtil_RequestPaletteLine(s32 a, s32 b, s32 c) {
    sWfcPaletteCopy.unk_00 = (void *)(a + (b << 5));
    sWfcPaletteCopy.unk_04 = (void *)((c << 5) + 0x5000000);
    WfcTask_Add(1, (void *)WfcUtil_PaletteLineTask, 0, 0x78);
}

extern "C" void WfcUtil_PaletteLineTask(s32 a) {
    MIi_CpuCopy16(sWfcPaletteCopy.unk_00, sWfcPaletteCopy.unk_04, 0x20);
    WfcTask_RequestDelete(1, a);
}

extern "C" void WfcUtil_RequestBgPalette(s32 a) {
    sWfcPaletteCopy.unk_00 = (void *)a;
    WfcTask_Add(1, (void *)WfcUtil_BgPaletteTask, 0, 0x78);
}

extern "C" void WfcUtil_BgPaletteTask(s32 a) {
    MIi_CpuCopy16(sWfcPaletteCopy.unk_00, (void *)0x5000000, 0x200);
    WfcTask_RequestDelete(1, a);
}
