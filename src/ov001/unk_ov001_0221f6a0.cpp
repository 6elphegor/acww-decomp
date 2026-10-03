// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222df00_Rec {
    u8 name[6];
    u8 flag;
};

struct Unk_ov001_0222a348_Blk {
    u32 v[17];
};

struct Unk_ov001_0221fd14_Info {
    u32 unk_00;
    u8 unk_04[0x14];
    u16 unk_18;
    u8 unk_1a[0x3a];
};

struct Unk_ov001_0222df00_Buf {
    u16 status;
    u8 rest[0x3c];
};

struct Unk_ov001_0221f7f4_Entry {
    u8 pad_00[4];
    u8 unk_04[8];
    u8 unk_0c[8];
    u8 unk_14;
    u8 unk_15;
};

struct Unk_ov001_0221f7f4_Arg {
    u8 pad_00[0xe];
    u16 count;
    Unk_ov001_0221f7f4_Entry *items[1];
};

struct Unk_ov001_0221faf0_Msg {
    u16 unk_00;
    u16 unk_02;
    u8 pad_04[4];
    u16 unk_08;
};

struct Unk_ov001_0222df00 {
    u8 pad_0000[0xf00];
    u8 unk_0f00[0x400];
    Unk_ov001_0222df00_Rec unk_1300[16];
    void (*unk_1370)(s32);
    u8 unk_1374[8];
    u16 unk_137c;
    u8 pad_137e[0x1388 - 0x137e];
    u8 unk_1388[8];
    u8 unk_1390;
    u8 unk_1391;
    u8 pad_1392[2];
    u8 unk_1394[0x24];
    u8 pad_13b8[0x1b74 - 0x13b8];
    u64 unk_1b74;
    u32 unk_1b7c;
    u8 unk_1b80;
    u8 unk_1b81;
    u8 unk_1b82;
};

extern "C" const u8 sWfcEmptyBssid[8];
extern "C" const u8 sWfcUsbApSsid[12];
extern "C" const u32 sWfcUsbScanParam[17];
extern "C" Unk_ov001_0222df00 *sWfcUsbScan;

extern "C" {
void DC_InvalidateRange(void *, s32);
s32 memcmp(const void *, const void *, s32);
void MI_CpuCopy8(const void *, const void *, s32);
void WM_ReadStatus(void *);
s32 WM_Reset(void *);
s32 WM_End(void *);
s32 WM_Initialize(void *, void *, s32);
s32 WM_StartScanEx(void *, void *);
u64 OS_GetTick();
u32 WM_GetDispersionScanPeriod();
void OS_GetOwnerInfo(void *);
void Fatal_Trap(void *);
void WfcHeap_FreeAndClear(void *);
void *WfcHeap_AllocClear(s32, s32);
void WfcTask_Delete(s32, u32);
void WfcTask_RequestDelete(s32, s32);
u32 WfcTask_Add(s32, void *, s32, s32);
void WfcUsbScan_TimeoutTask(s32);
void WfcUsbScan_CheckGranted(void *);
void WfcUsbScan_CollectAps(void *);
void WfcUsbScan_WmCallback(void *);
void WfcUsbScan_SetCallback(void (*)(s32));
s32 WfcUsbScan_Stop();
s32 WfcUsbScan_StartScan();
s32 WfcUsbScan_Start(void (*)(s32));
}

s32 WfcUsbScan_Start(void (*cb)(s32))
{
    Unk_ov001_0222df00 *g;
    Unk_ov001_0221fd14_Info info;
    g = (Unk_ov001_0222df00 *)WfcHeap_AllocClear(0x1ba0, 0x20);
    sWfcUsbScan = g;
    g->unk_1370 = cb;
    g = sWfcUsbScan;
    g->unk_1b74 = OS_GetTick();
    if (WM_Initialize(g, (void *)WfcUsbScan_WmCallback, 3) == 2) {
        do {
            WM_ReadStatus((u8 *)sWfcUsbScan + 0x13b8);
            g = sWfcUsbScan;
        } while (((Unk_ov001_0222df00_Buf *)((u8 *)g + 0x13b8))->status != 2);
        *(Unk_ov001_0222a348_Blk *)g->unk_1374 = *(const Unk_ov001_0222a348_Blk *)sWfcUsbScanParam;
        *(void **)g->unk_1374 = g->unk_0f00;
        u16 v = WM_GetDispersionScanPeriod();
        sWfcUsbScan->unk_137c = v;
        OS_GetOwnerInfo(&info);
        MI_CpuCopy8(sWfcUsbApSsid, sWfcUsbScan->unk_1388, 8);
        sWfcUsbScan->unk_1391 = 1;
        MI_CpuCopy8(info.unk_04, sWfcUsbScan->unk_1394, info.unk_18 * 2);
        if (WfcUsbScan_StartScan() != 0) {
            sWfcUsbScan->unk_1b7c = WfcTask_Add(0, (void *)WfcUsbScan_TimeoutTask, 0, 0x78);
            return 1;
        }
    }
    WfcHeap_FreeAndClear(&sWfcUsbScan);
    return 0;
}

s32 WfcUsbScan_StartScan()
{
    return WM_StartScanEx((void *)WfcUsbScan_WmCallback, (u8 *)sWfcUsbScan + 0x1374) == 2 ? 1 : 0;
}

s32 WfcUsbScan_Stop()
{
    Unk_ov001_0222df00 *g = sWfcUsbScan;
    g->unk_1b80 = 1;
    WM_ReadStatus((u8 *)sWfcUsbScan + 0x13b8);
    if (((Unk_ov001_0222df00_Buf *)((u8 *)sWfcUsbScan + 0x13b8))->status != 2) {
        if (WM_Reset((void *)WfcUsbScan_WmCallback) != 2) {
            return 0;
        }
        do {
            WM_ReadStatus((u8 *)sWfcUsbScan + 0x13b8);
        } while (((Unk_ov001_0222df00_Buf *)((u8 *)sWfcUsbScan + 0x13b8))->status != 2);
    }
    if (WM_End((void *)WfcUsbScan_WmCallback) != 2) {
        return 0;
    }
    Unk_ov001_0222df00 *h = sWfcUsbScan;
    if (h->unk_1b7c != 0) {
        WfcTask_Delete(0, h->unk_1b7c);
    }
    volatile Unk_ov001_0222df00 *v = sWfcUsbScan;
    while (v->unk_1b80 != 2) {
    }
    WfcHeap_FreeAndClear(&sWfcUsbScan);
    return 1;
}

void WfcUsbScan_SetCallback(void (*cb)(s32))
{
    sWfcUsbScan->unk_1370 = cb;
}

void WfcUsbScan_WmCallback(void *arg0)
{
    Unk_ov001_0221faf0_Msg *m = (Unk_ov001_0221faf0_Msg *)arg0;
    Unk_ov001_0222df00 *g;
    if (m->unk_02 != 0) {
        return;
    }
    g = sWfcUsbScan;
    if (g->unk_1b80 != 0) {
        if (m->unk_00 == 2) {
            g->unk_1b80 = 2;
        }
        return;
    }
    if (m->unk_00 != 0x26) {
        return;
    }
    switch (m->unk_08) {
    case 5:
        if (g->unk_1b82 != 0) {
            WfcUsbScan_CheckGranted(m);
        } else {
            WfcUsbScan_CollectAps(m);
        }
        WfcUsbScan_StartScan();
        break;
    case 4:
        WfcUsbScan_StartScan();
        break;
    default:
        Fatal_Trap(m);
        break;
    }
}

void WfcUsbScan_CollectAps(void *arg0)
{
    // DECL_BEGIN
    s32 i;
    Unk_ov001_0221f7f4_Entry *e;
    s32 j;
    Unk_ov001_0221f7f4_Arg *a = (Unk_ov001_0221f7f4_Arg *)arg0;
    Unk_ov001_0222df00_Rec *p;
    Unk_ov001_0222df00 *g;
    // DECL_END
    for (i = 0; i < a->count; i++) {
        e = a->items[i];
        DC_InvalidateRange(e, 0xc0);
        if (memcmp(e->unk_0c, sWfcUsbApSsid, 8) == 0) {
            g = sWfcUsbScan;
            for (j = 0, p = g->unk_1300; j < 16; p++, j++) {
                if (memcmp(e->unk_04, p->name, 6) == 0) {
                    if (g->unk_1300[j].flag != 0) {
                        goto next;
                    }
                    if ((e->unk_15 & 1) == 0) {
                        goto next;
                    }
                    if (g->unk_1370 == NULL) {
                        return;
                    }
                    g->unk_1370(1);
                    return;
                }
            }
            for (j = 0; j < 16; j++) {
                if (memcmp(g->unk_1300[j].name, sWfcEmptyBssid, 6) == 0) {
                    MI_CpuCopy8(e->unk_04, g->unk_1300[j].name, 6);
                    sWfcUsbScan->unk_1300[j].flag = (e->unk_15 & 1) ? 1 : 0;
                    break;
                }
            }
        }
    next:;
    }
}

void WfcUsbScan_CheckGranted(void *arg0)
{
    // DECL_BEGIN
    Unk_ov001_0221f7f4_Arg *a = (Unk_ov001_0221f7f4_Arg *)arg0;
    Unk_ov001_0221f7f4_Entry *e;
    Unk_ov001_0222df00 *g = sWfcUsbScan;
    s32 i;
    s32 j;
    s32 n;
    Unk_ov001_0222df00_Rec *p;
    Unk_ov001_0222df00 *h;
    // DECL_END
    if (g->unk_1b81 != 0) {
        if (g->unk_1370 != NULL) {
            g->unk_1370(g->unk_1b81);
        }
        return;
    }
    DC_InvalidateRange(g->unk_0f00, 0x400);
    n = a->count;
    i = 0;
    if (n <= 0) {
        return;
    }
    h = sWfcUsbScan;
    do {
        e = a->items[i];
        if (memcmp(e->unk_0c, sWfcUsbApSsid, 8) == 0 && (e->unk_15 & 1) != 0) {
            for (j = 0, p = h->unk_1300; j < 16; j++, p++) {
                if (memcmp(e->unk_04, p->name, 6) == 0) {
                    if (h->unk_1300[j].flag != 0) {
                        break;
                    }
                    if (h->unk_1370 == NULL) {
                        h->unk_1b81 = 1;
                        return;
                    }
                    h->unk_1370(1);
                    return;
                }
            }
        }
        i++;
    } while (i < n);
}

void WfcUsbScan_TimeoutTask(s32 arg)
{
    Unk_ov001_0222df00 *g;
    s32 i, b, a;
    u64 now = OS_GetTick();
    g = sWfcUsbScan;
    a = 0;
    if (now < g->unk_1b74 + 0x17f898) return;
    b = 0;
    for (i = 0; i < 16; i++) {
        if (memcmp(g->unk_1300[i].name, sWfcEmptyBssid, 6)) {
            if (g->unk_1300[i].flag) b = 1;
            else a = 1;
        }
    }
    if (b && a) {
        if (g->unk_1370) g->unk_1370(2);
    } else if (b) {
        if (g->unk_1370) g->unk_1370(1);
    } else if (!a) {
        if (g->unk_1370) g->unk_1370(0);
    }
    sWfcUsbScan->unk_1b7c = 0;
    sWfcUsbScan->unk_1b82 = 1;
    WfcTask_RequestDelete(0, arg);
}

extern "C" const u8 sWfcEmptyBssid[8] = {0, 0, 0, 0, 0, 0, 0, 0};
extern "C" const u8 sWfcUsbApSsid[12] = {'N', 'W', 'C', 'U', 'S', 'B', 'A', 'P', 0, 0, 0, 0};
extern "C" const u32 sWfcUsbScanParam[17] = {0x0, 0x3fff0400, 0xffff0000, 0xffffffff, 0x200002, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0};
extern "C" Unk_ov001_0222df00 *sWfcUsbScan = 0;
