// mwcc-flags: -O4,p
#include "types.h"
#include "nitro/wm.h"
#include "nitro/os_rtc.h"

#pragma thumb off

struct WfcUsbFoundAp {
    u8 bssid[6];
    u8 isGranted;
};

// WMScanExParam (0x44) copied as 17 words: a WMScanExParam struct copy compiles differently
struct WfcUsbScanParamCopy {
    u32 v[17];
};

struct WfcUsbScanWork {
    u8 pad_0000[0xf00];
    u8 scanBuf[0x400];
    WfcUsbFoundAp foundAps[16];
    void (*unk_1370)(s32);
    WMScanExParam scanParam; // ssid: "NWCUSBAP", byte 9 = 1, owner nickname from byte 12
    u8 pad_13b8[0x1b74 - 0x13b8]; // starts with the WM_ReadStatus buffer (WMStatus)
    u64 startTick;
    u32 timeoutTask;
    u8 stopState;
    u8 pendingResult;
    u8 timedOut;
};

extern "C" const u8 sWfcEmptyBssid[8];
extern "C" const u8 sWfcUsbApSsid[12];
extern "C" const u32 sWfcUsbScanParam[17];
extern "C" WfcUsbScanWork *sWfcUsbScan;

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
    WfcUsbScanWork *g;
    OSOwnerInfo info;
    g = (WfcUsbScanWork *)WfcHeap_AllocClear(0x1ba0, 0x20);
    sWfcUsbScan = g;
    g->unk_1370 = cb;
    g = sWfcUsbScan;
    g->startTick = OS_GetTick();
    if (WM_Initialize(g, (void *)WfcUsbScan_WmCallback, 3) == 2) {
        do {
            WM_ReadStatus((u8 *)sWfcUsbScan + 0x13b8);
            g = sWfcUsbScan;
        } while (((WMStatus *)((u8 *)g + 0x13b8))->state != 2);
        *(WfcUsbScanParamCopy *)&g->scanParam = *(const WfcUsbScanParamCopy *)sWfcUsbScanParam;
        g->scanParam.scanBuf = (WMBssDesc *)g->scanBuf;
        u16 v = WM_GetDispersionScanPeriod();
        sWfcUsbScan->scanParam.maxChannelTime = v;
        OS_GetOwnerInfo(&info);
        MI_CpuCopy8(sWfcUsbApSsid, sWfcUsbScan->scanParam.ssid, 8);
        sWfcUsbScan->scanParam.ssid[9] = 1;
        MI_CpuCopy8(info.nickName, sWfcUsbScan->scanParam.ssid + 12, info.nickNameLength * 2);
        if (WfcUsbScan_StartScan() != 0) {
            sWfcUsbScan->timeoutTask = WfcTask_Add(0, (void *)WfcUsbScan_TimeoutTask, 0, 0x78);
            return 1;
        }
    }
    WfcHeap_FreeAndClear(&sWfcUsbScan);
    return 0;
}

s32 WfcUsbScan_StartScan()
{
    return WM_StartScanEx((void *)WfcUsbScan_WmCallback, &sWfcUsbScan->scanParam) == 2 ? 1 : 0;
}

s32 WfcUsbScan_Stop()
{
    WfcUsbScanWork *g = sWfcUsbScan;
    g->stopState = 1;
    WM_ReadStatus((u8 *)sWfcUsbScan + 0x13b8);
    if (((WMStatus *)((u8 *)sWfcUsbScan + 0x13b8))->state != 2) {
        if (WM_Reset((void *)WfcUsbScan_WmCallback) != 2) {
            return 0;
        }
        do {
            WM_ReadStatus((u8 *)sWfcUsbScan + 0x13b8);
        } while (((WMStatus *)((u8 *)sWfcUsbScan + 0x13b8))->state != 2);
    }
    if (WM_End((void *)WfcUsbScan_WmCallback) != 2) {
        return 0;
    }
    WfcUsbScanWork *h = sWfcUsbScan;
    if (h->timeoutTask != 0) {
        WfcTask_Delete(0, h->timeoutTask);
    }
    volatile WfcUsbScanWork *v = sWfcUsbScan;
    while (v->stopState != 2) {
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
    WMStartScanExCallback *m = (WMStartScanExCallback *)arg0;
    WfcUsbScanWork *g;
    if (m->errcode != 0) {
        return;
    }
    g = sWfcUsbScan;
    if (g->stopState != 0) {
        if (m->apiid == 2) {
            g->stopState = 2;
        }
        return;
    }
    if (m->apiid != 0x26) {
        return;
    }
    switch (m->state) {
    case 5:
        if (g->timedOut != 0) {
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
    WMBssDesc *e;
    s32 j;
    WMStartScanExCallback *a = (WMStartScanExCallback *)arg0;
    WfcUsbFoundAp *p;
    WfcUsbScanWork *g;
    // DECL_END
    for (i = 0; i < a->bssDescCount; i++) {
        e = a->bssDesc[i];
        DC_InvalidateRange(e, 0xc0);
        // USB connector APs use the SSID "NWCUSBAP" + flags; bit 0 of SSID byte 9 = this DS was granted access
        if (memcmp(e->ssid, sWfcUsbApSsid, 8) == 0) {
            g = sWfcUsbScan;
            for (j = 0, p = g->foundAps; j < 16; p++, j++) {
                if (memcmp(e->bssid, p->bssid, 6) == 0) {
                    if (g->foundAps[j].isGranted != 0) {
                        goto next;
                    }
                    if ((e->ssid[9] & 1) == 0) {
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
                if (memcmp(g->foundAps[j].bssid, sWfcEmptyBssid, 6) == 0) {
                    MI_CpuCopy8(e->bssid, g->foundAps[j].bssid, 6);
                    sWfcUsbScan->foundAps[j].isGranted = (e->ssid[9] & 1) ? 1 : 0;
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
    WMStartScanExCallback *a = (WMStartScanExCallback *)arg0;
    WMBssDesc *e;
    WfcUsbScanWork *g = sWfcUsbScan;
    s32 i;
    s32 j;
    s32 n;
    WfcUsbFoundAp *p;
    WfcUsbScanWork *h;
    // DECL_END
    if (g->pendingResult != 0) {
        if (g->unk_1370 != NULL) {
            g->unk_1370(g->pendingResult);
        }
        return;
    }
    DC_InvalidateRange(g->scanBuf, 0x400);
    n = a->bssDescCount;
    i = 0;
    if (n <= 0) {
        return;
    }
    h = sWfcUsbScan;
    do {
        e = a->bssDesc[i];
        if (memcmp(e->ssid, sWfcUsbApSsid, 8) == 0 && (e->ssid[9] & 1) != 0) {
            for (j = 0, p = h->foundAps; j < 16; j++, p++) {
                if (memcmp(e->bssid, p->bssid, 6) == 0) {
                    if (h->foundAps[j].isGranted != 0) {
                        break;
                    }
                    if (h->unk_1370 == NULL) {
                        h->pendingResult = 1;
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
    WfcUsbScanWork *g;
    s32 i, b, a;
    u64 now = OS_GetTick();
    g = sWfcUsbScan;
    a = 0;
    if (now < g->startTick + 0x17f898) return;
    b = 0;
    for (i = 0; i < 16; i++) {
        if (memcmp(g->foundAps[i].bssid, sWfcEmptyBssid, 6)) {
            if (g->foundAps[i].isGranted) b = 1;
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
    sWfcUsbScan->timeoutTask = 0;
    sWfcUsbScan->timedOut = 1;
    WfcTask_RequestDelete(0, arg);
}

extern "C" const u8 sWfcEmptyBssid[8] = {0, 0, 0, 0, 0, 0, 0, 0};
extern "C" const u8 sWfcUsbApSsid[12] = {'N', 'W', 'C', 'U', 'S', 'B', 'A', 'P', 0, 0, 0, 0};
extern "C" const u32 sWfcUsbScanParam[17] = {0x0, 0x3fff0400, 0xffff0000, 0xffffffff, 0x200002, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0};
extern "C" WfcUsbScanWork *sWfcUsbScan = 0;
