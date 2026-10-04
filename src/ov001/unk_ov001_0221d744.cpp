// mwcc-flags: -O4,p
#include "types.h"
#include "net/WfcApScanEntry.h"

#pragma thumb off

struct Unk_ov001_0221d744_Tlv {
    u8 type;
    u8 len;
    u16 pad;
    u8 *data;
};

struct Unk_ov001_0221d744_Buf {
    u8 cnt;
    u8 pad[3];
    Unk_ov001_0221d744_Tlv v[16];
};

struct Unk_ov001_0221db6c_Blob { u32 v[17]; };

struct Unk_ov001_0221d744_Node {
    u8 unk_00[4];
    u8 bssid[6];
    u8 unk_0a[2];
    u8 ssid;
    u8 unk_0d[0x1f];
    u16 capaInfo;
    u8 unk_2e[0xe];
    u16 gameInfoLength;
};

struct Unk_ov001_0221d744_List {
    u8 unk_00[0xe];
    u16 bssDescCount;
    Unk_ov001_0221d744_Node *bssDesc[0x10];
    u16 linkLevel[1];
};

extern "C" {
s32 DC_InvalidateRange(void *, s32);
s32 memcmp(const void *, const void *, s32);
s32 MI_CpuCopy8(void *, void *, s32);
s32 WM_GetOtherElements(void *, void *);
s32 Fatal_Trap(void *);
s32 WM_ReadStatus(void *);
s32 WM_Reset(void *);
s32 WM_End(void *);
s32 WM_StartScanEx(void *, void *);
s32 MIi_CpuClear16(s32, void *, s32);
s32 WM_Initialize(void *, void *, s32);
s32 WM_GetDispersionScanPeriod();
u32 WM_GetAllowedChannel();
void WfcHeap_FreeAndClear(void *);
void *WfcHeap_AllocClear(s32, s32);

void WfcApScan_StoreResults(Unk_ov001_0221d744_List *);
void WfcApScan_WmCallback(u16 *);
s32 WfcApScan_GetResults(WfcApScanEntry **out);
BOOL WfcApScan_Stop();
BOOL WfcApScan_StartScan();
BOOL WfcApScan_Start();
void WfcApScan_Free();
void WfcApScan_Alloc();
}

extern "C" const u8 sWfcWpaOui[4] = { 0x00, 0x50, 0xf2, 0x01 };
extern "C" const u8 sWfcApScanEmptyBssid[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
extern "C" const u32 sWfcApScanParam[17] = { 0, 0x3fff0400, 0xffff0000, 0xffffffff, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
u8 *sWfcApScan;

void WfcApScan_Alloc() {
    if (sWfcApScan != 0) return;
    sWfcApScan = (u8 *)WfcHeap_AllocClear(0x1e60, 0x20);
}

void WfcApScan_Free() {
    if (sWfcApScan == 0) return;
    do {
    } while (WM_GetAllowedChannel() != 0x8000);
    WfcHeap_FreeAndClear(&sWfcApScan);
}

BOOL WfcApScan_Start() {
    volatile u16 z = 0;
    MIi_CpuClear16(z, sWfcApScan + 0x1300, 0x348);
    if (WM_Initialize(sWfcApScan, (void *)WfcApScan_WmCallback, 3) != 2) return FALSE;
    u8 *g;
    do {
        WM_ReadStatus(sWfcApScan + 0x168c);
        g = sWfcApScan;
    } while (*(u16 *)(g + 0x168c) != 2);
    *(Unk_ov001_0221db6c_Blob *)(g + 0x1648) = *(const Unk_ov001_0221db6c_Blob *)sWfcApScanParam;
    *(u32 *)(g + 0x1648) = (u32)(g + 0xf00);
    *(u16 *)(sWfcApScan + 0x1650) = WM_GetDispersionScanPeriod();
    if (WfcApScan_StartScan() != 0) return TRUE;
    return FALSE;
}

BOOL WfcApScan_StartScan() {
    if (WM_StartScanEx((void *)WfcApScan_WmCallback, sWfcApScan + 0x1648) == 2) return TRUE;
    return FALSE;
}

BOOL WfcApScan_Stop() {
    sWfcApScan[0x1e48] = 1;
    WM_ReadStatus(sWfcApScan + 0x168c);
    if (*(u16 *)(sWfcApScan + 0x168c) != 2) {
        if (WM_Reset((void *)WfcApScan_WmCallback) != 2) return FALSE;
        do {
            WM_ReadStatus(sWfcApScan + 0x168c);
        } while (*(u16 *)(sWfcApScan + 0x168c) != 2);
    }
    if (WM_End((void *)WfcApScan_WmCallback) != 2) return FALSE;
    return TRUE;
}

s32 WfcApScan_GetResults(WfcApScanEntry **out) {
    s32 cnt = 0;
    s32 i = 0;
    *out = (WfcApScanEntry *)(sWfcApScan + 0x1300);
    WfcApScanEntry *e = *out;
    for (; i < 20; i++, e++) {
        if (memcmp(e->bssid, sWfcApScanEmptyBssid, 6) != 0) cnt++;
    }
    return cnt;
}

void WfcApScan_WmCallback(u16 *p) {
    if (p[1] != 0) return;
    if (sWfcApScan[0x1e48] != 0) return;
    if (p[0] != 0x26) return;
    switch (p[4]) {
    case 5:
        WfcApScan_StoreResults((Unk_ov001_0221d744_List *)p);
        WfcApScan_StartScan();
        break;
    case 4:
        WfcApScan_StartScan();
        break;
    default:
        Fatal_Trap(p);
        break;
    }
}

void WfcApScan_StoreResults(Unk_ov001_0221d744_List *p) {
    WfcApScanEntry *tbl;
    Unk_ov001_0221d744_Buf buf;
    s32 i;
    tbl = (WfcApScanEntry *)(sWfcApScan + 0x1300);
    DC_InvalidateRange(sWfcApScan + 0xf00, 0x400);
    for (i = 0; i < p->bssDescCount; i++) {
        Unk_ov001_0221d744_Node *n = p->bssDesc[i];
        if (n->ssid != 0 && n->gameInfoLength == 0) {
            s32 j = 0;
            WfcApScanEntry *e = tbl;
            do {
                if (memcmp(n->bssid, e->bssid, 6) == 0) break;
                e++;
                j++;
            } while (j < 20);
            if (j == 20) {
                j = 0;
                e = tbl;
                do {
                    if (memcmp(e->bssid, sWfcApScanEmptyBssid, 6) == 0) break;
                    e++;
                    j++;
                } while (j < 20);
                if (j == 20) return;
            }
            e = tbl + j;
            MI_CpuCopy8(n->bssid, e->bssid, 6);
            MI_CpuCopy8(&n->ssid, e, 0x20);
            e->linkLevel = p->linkLevel[i];
            if ((n->capaInfo & 0x10) == 0) {
                e->security = 0;
            } else {
                e->security = 1;
                WM_GetOtherElements(&buf, n);
                s32 k;
                s32 cnt = buf.cnt;
                for (k = 0; k < cnt; k++) {
                    if (buf.v[k].type == 0x30) {
                        e->security = 2;
                        break;
                    }
                    if (buf.v[k].type == 0xdd && buf.v[k].len >= 4 && memcmp(buf.v[k].data, sWfcWpaOui, 4) == 0) {
                        e->security = 2;
                        break;
                    }
                }
            }
        }
    }
}

