// mwcc-flags: -O4,p -str reuse
#include "types.h"

extern "C" {

// const objects have internal linkage in C++ unless declared extern; TU12 reads these two
extern const u8 gWifiLinkAnyBssid[8];
extern const u8 gWifiLinkAnySsid[0x20];
const u8 gWifiLinkAnyBssid[8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, 0};
const u8 gWifiLinkAnySsid[0x20] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};
u32 sWifiLinkSendState;
void *sWifiLinkWork;
u8 sWifiLinkSendWaitQueue[8];
u8 sWifiLinkSendLock[0x20];

}

namespace N_ab40 {

// ov065_019: network library, connection/event state (0x0226ab40..0x0226b3c4)

struct Unk_ov065_0226ab5c_Conn {
    u8 unk_0000[0xf00];
    u8 sendBuf[0x1244];
    u8 targetBssid[6];
    u16 targetSsidLength;
    u8 targetSsid[0x114];
    s32 phase;
    u8 unk_2264[7];
    u8 unk_226b;
};

typedef void (*Unk_ov065_0226ac54_Cb)(void *, void *, void *, u32);

struct Unk_ov065_0226ab40_Glb {
    u8 initialized;
    u8 unk_01[3];
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c[0x18];
    u32 sendResult;
    Unk_ov065_0226ac54_Cb recvCallback;
};

struct Unk_ov065_0226aed4_Fc {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 allocMask;
    u8 state;
    u8 unk_0a;
    u8 anyApFound;
    u32 unk_0c;
    u8 unk_10[4];
    u8 furthestApStatus;
    u8 furthestApIndex;
    u8 furthestState;
    u8 connectedApType;
};

struct Unk_ov065_0226b27c_Cfg {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 dmaNo;
    u8 powerMode;
    u8 unk_0a;
    u8 netCheckMode;
};

struct Unk_ov065_0226b27c_F8 {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u32 unk_08;
};

struct Unk_ov065_0226b27c_B0b {
    u8 lo : 2;
};

struct Unk_ov065_0226b27c_B0c {
    u8 lo : 4;
    u8 mid : 2;
};

struct Unk_ov065_0226b3c4_Key {
    u8 info[4];
};

struct Unk_ov065_0226b3c4_Rec {
    u8 unk_00[0xc0];
};

extern "C" {

extern Unk_ov065_0226ab40_Glb sWifiLinkSendState;
extern u8 sWifiLinkSendLock[];
extern volatile u8 sWifiRssiCount;
extern u8 sWifiRssiSamples[];
extern u8 *sWifiApContext;
extern void *sWifiApLinkWork;
extern void *sWifiApSocketConfig;
extern Unk_ov065_0226b27c_F8 *sWifiApAllocator;
extern Unk_ov065_0226aed4_Fc *sWifiApControl;

u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
s32 func_02133150(s32, s32);
void OS_InitMutex(void *);
s32 DGT_Hash1GetDigest_R();
s32 DGT_Hash1SetSource();
s32 DGT_Hash1Reset();
void MIi_CpuClear32(u32, void *, u32);
void MIi_CpuCopy32(void *, void *, u32);
s32 strncmp(void *, void *, u32);
s32 WM_SetDCFData(void *, void *, void *, u32);
void func_020ff154(void *);

Unk_ov065_0226ab5c_Conn *WifiLink_GetWork();
s32 WifiLink_Init(void *, u32);
s32 WifiLink_UnlockFromIrq(void *);
s32 WifiLink_TryLockFromIrq(void *);
void WifiLink_OnKeepAliveSent();
s32 WifiAp_CleanupStep(u8 *);
s32 WifiAp_GetErrorCode2();
u8 WifiAp_StepFailedCleanup();
u8 WifiAp_ProcessConnect();
u8 WifiAp_StepRecoverLink();
u8 WifiAp_ProcessSearch();
u8 WifiAp_ProcessStartup();
u8 WifiAp_ProcessNetSetup();

u8 WifiLink_GetAverageRssi();
















void WifiAp_FreeBlock(u32, void *, u32);



u8 WifiAp_GetState();
void *WifiAp_GetBlock(u32);


















void WifiLink_InitSendState() {
    if (sWifiLinkSendState.initialized == 0) {
        sWifiLinkSendState.initialized = 1;
        sWifiLinkSendState.sendResult = 0;
        sWifiLinkSendState.unk_08 = 0;
        sWifiLinkSendState.unk_04 = 0;
        OS_InitMutex(sWifiLinkSendLock);
    }
}

void WifiLink_OnFrameReceived(u8 *p) {
    Unk_ov065_0226ac54_Cb cb = sWifiLinkSendState.recvCallback;
    if (cb != 0) {
        cb(p + 0x1e, p + 0x18, p + 0x2c, *(u16 *)(p + 6));
    }
}

void WifiLink_SendKeepAlive() {
    Unk_ov065_0226ab5c_Conn *c = WifiLink_GetWork();
    if (c != 0 && c->phase == 9 && c->unk_226b != 1) {
        if (WifiLink_TryLockFromIrq(sWifiLinkSendLock) != 0) {
            if (WM_SetDCFData((void *)WifiLink_OnKeepAliveSent, c->targetBssid, c->sendBuf, 0) != 2) {
                WifiLink_UnlockFromIrq(sWifiLinkSendLock);
            }
        }
    }
}

u8 *WifiLink_GetConnectedBssid() {
    u8 *r5 = 0;
    Unk_ov065_0226ab5c_Conn *c = WifiLink_GetWork();
    u32 irq = OS_DisableInterrupts();
    if (c != 0 && c->phase == 9 && c->unk_226b == 0) {
        r5 = c->targetBssid;
    }
    OS_RestoreInterrupts(irq);
    return r5;
}

u8 *WifiLink_GetConnectedSsid(u16 *out) {
    u8 *r7 = 0;
    u32 r6 = 0;
    Unk_ov065_0226ab5c_Conn *c = WifiLink_GetWork();
    u32 irq = OS_DisableInterrupts();
    if (c != 0 && c->phase == 9 && c->unk_226b == 0) {
        r7 = c->targetSsid;
        r6 = c->targetSsidLength;
    }
    OS_RestoreInterrupts(irq);
    if (out != 0) {
        *out = r6;
    }
    return r7;
}

void WifiLink_SetRecvCallback(Unk_ov065_0226ac54_Cb cb) {
    u32 irq = OS_DisableInterrupts();
    sWifiLinkSendState.recvCallback = cb;
    OS_RestoreInterrupts(irq);
}

}
}  // namespace N_ab40

namespace N_a144 {

// Network library state (big object pointed to by sWifiLinkWork)

struct Unk_ov065_0226a73c_Node {
    u8 inUse;
    u8 unk_01;
    u16 linkLevel;
    u32 id;
    struct Unk_ov065_0226a73c_Node *prev;
    struct Unk_ov065_0226a73c_Node *unk_0c;
    u8 bssDesc[0xc0];
};

struct Unk_ov065_0226a73c_List {
    u32 count;
    Unk_ov065_0226a73c_Node *head;
    Unk_ov065_0226a73c_Node *tail;
    Unk_ov065_0226a73c_Node unk_0c[1];
};

struct Unk_ov065_022905a8_S {
    u8 unk_0000[0x2260];
    s32 unk_2260;
    u8 unk_2264[4];
    u16 unk_2268;
    u8 unk_226a;
    u8 unk_226b;
    u32 unk_226c;
    Unk_ov065_0226a73c_List *unk_2270;
    u32 unk_2274;
    s32 unk_2278;
    u8 unk_227c[4];
    u16 unk_2280;
    u16 unk_2282;
    u32 unk_2284;
    u32 unk_2288;
    u16 unk_228c;
    u8 unk_228e[0x3e];
    u8 unk_22cc[0x2c];
    u16 unk_22f8;
};

struct Unk_ov065_0226a97c_Mutex {
    u32 unk_00[2];
    void *owner;
    s32 unk_0c;
};

struct Unk_ov065_0226a9e4_G {
    u8 unk_00[0x24];
    s32 sendResult;
};

struct Unk_ov065_0226a9e4_Msg {
    u16 apiId;
    u16 errCode;
};

extern "C" {
extern Unk_ov065_022905a8_S *volatile sWifiLinkWork;
extern Unk_ov065_0226a97c_Mutex sWifiLinkSendLock;
extern Unk_ov065_0226a9e4_G sWifiLinkSendState;
extern u8 sWifiLinkSendWaitQueue[];

// main module
u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32);
void OS_IrqHandler(void);
void DC_InvalidateRange(u32, u32);
s32 WM_StartScanEx(void *, void *);
s32 WM_PowerOff(void *);
s32 WM_Init(void *, u32);
s32 WM_GetAllowedChannel(void);
s32 func_0211f188(void);
s32 WM_SetIndCallback(void *);
s32 WM_Enable(void *);
s32 OS_IsTickAvailable(void);
void OS_InitTick(void);
s32 OS_IsAlarmAvailable(void);
void OS_InitAlarm(void);
void OS_CreateAlarm(void *);
void MIi_CpuCopyFast(void *, void *, u32);
void *MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, void *, u32);
s32 WM_SetDCFData(void *, void *, void *, u32);
void OS_WakeupThread(void *);
void OS_SleepThread(void *);
void OS_LockMutex(void *);
void OS_UnlockMutex(void *);

// overlay 065, other groups
void WifiLink_OnScanResult(void);
void WifiLink_OnWmCommand(void);
void WifiLink_OnWmIndication(void);
void WifiLink_SetupScanParams(void *, void *, s32);
void WifiLink_ApplyConfig(void *, void *);
void WifiLink_SetPhase(s32);
void WifiLink_SetDefaultOptions(void);
void WifiLink_RestartKeepAliveAlarm(void);
Unk_ov065_022905a8_S *WifiLink_GetWork(void);
s32 WifiLink_EndSearchAsync(void *, void *, s32);
s32 WifiAp_MacEquals(void *, void *);
void WifiLink_InitSendState(void);

// same group
s32 WifiLink_BeginSearchAsync(void *, void *, s32);
s32 WifiLink_SearchAsync(void *, void *, s32);
s32 WifiLink_CleanupAsync(void);
s32 WifiLink_StartupAsync(void *, void *);
s32 WifiLink_Finish(void);
s32 WifiLink_Init(void *, u32);
void WifiApList_MoveToTail(Unk_ov065_0226a73c_Node *);
Unk_ov065_0226a73c_Node *WifiApList_FindById(u32);
Unk_ov065_0226a73c_Node *WifiApList_FindByBssid(void *);
Unk_ov065_0226a73c_Node *WifiApList_GetOldest(void);
Unk_ov065_0226a73c_Node *WifiApList_AllocEntry(void);
void WifiLink_AddApListEntry(u8 *, u32);
void *WifiLink_GetApListEntry(u32);
BOOL WifiLink_LockApList(BOOL);
u32 WifiLink_GetApListCount(void);
void WifiLink_ClearApList(void);
void WifiLink_UnlockFromIrq(Unk_ov065_0226a97c_Mutex *);
BOOL WifiLink_TryLockFromIrq(Unk_ov065_0226a97c_Mutex *);
void WifiLink_OnKeepAliveSent(void);
void WifiLink_OnSendDone(Unk_ov065_0226a9e4_Msg *);
s32 WifiLink_SendFrame(u32, void *, u32);









static inline u8 *Unk_ov065_0226a6b4_Data(Unk_ov065_0226a73c_Node *n)
{
    return n->bssDesc;
}















s32 WifiLink_SendFrame(u32 a, void *b, u32 c)
{
    u32 e = OS_DisableInterrupts();
    if (WifiLink_GetWork() == NULL) {
        OS_RestoreInterrupts(e);
        return -1;
    }
    OS_LockMutex(&sWifiLinkSendLock);
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    if (s == NULL) {
        OS_UnlockMutex(&sWifiLinkSendLock);
        OS_RestoreInterrupts(e);
        return -1;
    }
    if (s->unk_2260 != 9 || s->unk_226b == 1) {
        OS_UnlockMutex(&sWifiLinkSendLock);
        OS_RestoreInterrupts(e);
        return -4;
    }
    MI_CpuCopy8(b, (u8 *)s + 0xf00, c);
    switch (WM_SetDCFData((void *)WifiLink_OnSendDone, (void *)a, (u8 *)s + 0xf00, (u16)c)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    default:
        OS_UnlockMutex(&sWifiLinkSendLock);
        OS_RestoreInterrupts(e);
        return -5;
    case 2:
        break;
    }
    OS_SleepThread(sWifiLinkSendWaitQueue);
    switch (sWifiLinkSendState.sendResult) {
    case 1:
    default:
        OS_UnlockMutex(&sWifiLinkSendLock);
        OS_RestoreInterrupts(e);
        return -5;
    case 0:
        OS_UnlockMutex(&sWifiLinkSendLock);
        OS_RestoreInterrupts(e);
        return c;
    }
}

void WifiLink_OnSendDone(Unk_ov065_0226a9e4_Msg *p)
{
    if (p->apiId == 0x12) {
        sWifiLinkSendState.sendResult = p->errCode;
        if (p->errCode == 0) {
            WifiLink_RestartKeepAliveAlarm();
        }
        OS_WakeupThread(sWifiLinkSendWaitQueue);
    }
}

void WifiLink_OnKeepAliveSent(void)
{
    WifiLink_UnlockFromIrq(&sWifiLinkSendLock);
}

BOOL WifiLink_TryLockFromIrq(Unk_ov065_0226a97c_Mutex *m)
{
    void *o = m->owner;
    if (o == NULL) {
        m->owner = (void *)OS_IrqHandler;
        m->unk_0c = m->unk_0c + 1;
        return TRUE;
    }
    if (o == (void *)OS_IrqHandler) {
        m->unk_0c = m->unk_0c + 1;
        return TRUE;
    }
    return FALSE;
}

void WifiLink_UnlockFromIrq(Unk_ov065_0226a97c_Mutex *m)
{
    if (m->owner == (void *)OS_IrqHandler) {
        m->unk_0c = m->unk_0c - 1;
        if (m->unk_0c == 0) {
            m->owner = NULL;
            OS_WakeupThread(m);
        }
    }
}

void WifiLink_ClearApList(void)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    if (s == NULL) {
        OS_RestoreInterrupts(e);
        return;
    }
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (list != NULL && (s32)s->unk_2274 > 0) {
        MI_CpuFill8(list, 0, s->unk_2274);
    }
    OS_RestoreInterrupts(e);
}

u32 WifiLink_GetApListCount(void)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    u32 r = 0;
    if (s == NULL) {
        OS_RestoreInterrupts(e);
        return r;
    }
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (list != NULL && s->unk_2274 > 0xc) {
        r = list->count;
    }
    OS_RestoreInterrupts(e);
    return r;
}

BOOL WifiLink_LockApList(BOOL a)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    if (s == NULL) {
        OS_RestoreInterrupts(e);
        return FALSE;
    }
    if (a != 0) {
        a = s->unk_226a != 0 ? TRUE : FALSE;
        s->unk_226a = 1;
    } else {
        a = s->unk_226a != 0 ? TRUE : FALSE;
        s->unk_226a = 0;
    }
    OS_RestoreInterrupts(e);
    return a;
}

void *WifiLink_GetApListEntry(u32 id)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    if (s == NULL) {
        OS_RestoreInterrupts(e);
        return NULL;
    }
    Unk_ov065_0226a73c_Node *n = WifiApList_FindById(id);
    if (n == NULL) {
        OS_RestoreInterrupts(e);
        return NULL;
    }
    OS_RestoreInterrupts(e);
    return n->bssDesc;
}

void WifiLink_AddApListEntry(u8 *a, u32 b)
{
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    if (s != NULL) {
        if (s->unk_226a == 0) {
            if (*(u16 *)(a + 0x3c) == 0) {
                Unk_ov065_0226a73c_Node *n = WifiApList_FindByBssid(a + 4);
                if (n == NULL) {
                    n = WifiApList_AllocEntry();
                }
                if (n == NULL && s->unk_2278 == 1) {
                    n = WifiApList_GetOldest();
                }
                if (n != NULL) {
                    n->linkLevel = b;
                    MIi_CpuCopyFast(a, n->bssDesc, 0xc0);
                    WifiApList_MoveToTail(n);
                }
            }
        }
    }
}

Unk_ov065_0226a73c_Node *WifiApList_AllocEntry(void)
{
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    Unk_ov065_0226a73c_Node *r = NULL;
    if (list != NULL && s->unk_2274 > 0xc) {
        u32 sz = 0xd0;
        u32 n = (s->unk_2274 - 0xc) / sz;
        if (n != 0 && n > list->count) {
            s32 i = 0;
            for (i = 0; (u32)i < n; i++) {
                u32 off = i * sz;
                u8 *base = (u8 *)list + 0xc;
                r = (Unk_ov065_0226a73c_Node *)(base + off);
                if (base[off] == 0) {
                    break;
                }
            }
            if ((u32)i < n) {
                r->inUse = 1;
                r->id = list->count;
                r->unk_0c = NULL;
                r->prev = list->tail;
                list->tail = r;
                if (r->prev != NULL) {
                    r->prev->unk_0c = r;
                } else {
                    list->head = r;
                }
                list->count = list->count + 1;
            }
        }
    }
    return r;
}

Unk_ov065_0226a73c_Node *WifiApList_GetOldest(void)
{
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (list != NULL && s->unk_2274 > 0xc) {
        return list->head;
    }
    return NULL;
}

Unk_ov065_0226a73c_Node *WifiApList_FindByBssid(void *key)
{
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    Unk_ov065_0226a73c_Node *n = NULL;
    if (key == NULL) {
        return n;
    }
    if (list != NULL && s->unk_2274 > 0xc) {
        for (n = list->head; n != NULL; n = n->unk_0c) {
            if (WifiAp_MacEquals(Unk_ov065_0226a6b4_Data(n) + 4, key) != 0) {
                break;
            }
        }
    }
    return n;
}

Unk_ov065_0226a73c_Node *WifiApList_FindById(u32 id)
{
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    Unk_ov065_0226a73c_Node *n = NULL;
    if (list != NULL && s->unk_2274 > 0xc) {
        for (n = list->head; n != NULL; n = n->unk_0c) {
            if (n->id == id) {
                break;
            }
        }
    }
    return n;
}

void WifiApList_MoveToTail(Unk_ov065_0226a73c_Node *node)
{
    Unk_ov065_022905a8_S *s = WifiLink_GetWork();
    Unk_ov065_0226a73c_List *list = s->unk_2270;
    if (node != NULL && list != NULL && s->unk_2274 > 0xc) {
        Unk_ov065_0226a73c_Node *c = list->head;
        for (; c != NULL; c = c->unk_0c) {
            if (c == node) {
                if (c->prev != NULL) {
                    c->prev->unk_0c = c->unk_0c;
                } else {
                    list->head = c->unk_0c;
                }
                if (c->unk_0c != NULL) {
                    c->unk_0c->prev = c->prev;
                } else {
                    list->tail = c->prev;
                }
                break;
            }
        }
        node->unk_0c = NULL;
        node->prev = list->tail;
        list->tail = node;
        if (node->prev != NULL) {
            node->prev->unk_0c = node;
        } else {
            list->head = node;
        }
        if (c == NULL) {
            node->id = list->count;
            list->count = list->count + 1;
        }
    }
}

s32 WifiLink_Init(void *a, u32 b)
{
    u32 e = OS_DisableInterrupts();
    if (sWifiLinkWork != NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    if (a == NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    if (((u32)a & 0x1f) != 0) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    if (b < 0x2300) {
        OS_RestoreInterrupts(e);
        return 6;
    }
    sWifiLinkWork = (Unk_ov065_022905a8_S *)a;
    ((Unk_ov065_022905a8_S *)a)->unk_2260 = 1;
    sWifiLinkWork->unk_2280 = 0;
    sWifiLinkWork->unk_2268 = 0;
    sWifiLinkWork->unk_226a = 0;
    sWifiLinkWork->unk_226b = 0;
    sWifiLinkWork->unk_2282 = 0;
    sWifiLinkWork->unk_22f8 = 0;
    WifiLink_SetDefaultOptions();
    WifiLink_InitSendState();
    if (OS_IsTickAvailable() == 0) {
        OS_InitTick();
    }
    if (OS_IsAlarmAvailable() == 0) {
        OS_InitAlarm();
    }
    OS_CreateAlarm(sWifiLinkWork->unk_22cc);
    OS_RestoreInterrupts(e);
    return 0;
}

s32 WifiLink_Finish(void)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *g = sWifiLinkWork;
    if (g == NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    if (g->unk_2260 != 1) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    sWifiLinkWork = NULL;
    OS_RestoreInterrupts(e);
    return 0;
}

s32 WifiLink_StartupAsync(void *a, void *b)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *g = sWifiLinkWork;
    if (g == NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    switch (g->unk_2260) {
    case 1:
        WifiLink_ApplyConfig(a, b);
        break;
    case 2:
        OS_RestoreInterrupts(e);
        return 2;
    case 3:
        OS_RestoreInterrupts(e);
        return 0;
    default:
        OS_RestoreInterrupts(e);
        return 1;
    }
    Unk_ov065_022905a8_S *t = sWifiLinkWork;
    switch (WM_Init(t, (u16)t->unk_226c)) {
    case 3:
        WifiLink_SetPhase(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    case 4:
        OS_RestoreInterrupts(e);
        return 5;
    case 1:
    case 2:
    case 5:
    case 6:
    default:
        WifiLink_SetPhase(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    case 0:
        break;
    }
    if (WM_GetAllowedChannel() == 0) {
        if (func_0211f188() != 0) {
            WifiLink_SetPhase(0xb);
            OS_RestoreInterrupts(e);
            return 7;
        }
        OS_RestoreInterrupts(e);
        return 5;
    }
    if (WM_SetIndCallback((void *)WifiLink_OnWmIndication) != 0) {
        WifiLink_SetPhase(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    }
    switch (WM_Enable((void *)WifiLink_OnWmCommand)) {
    case 2:
        WifiLink_SetPhase(2);
        sWifiLinkWork->unk_2280 = 1;
        break;
    case 8:
        WifiLink_SetPhase(0xc);
        OS_RestoreInterrupts(e);
        return 1;
    case 3:
    default:
        WifiLink_SetPhase(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    }
    OS_RestoreInterrupts(e);
    return 3;
}

s32 WifiLink_CleanupAsync(void)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *g = sWifiLinkWork;
    if (g == NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    switch (g->unk_2260) {
    case 4:
        OS_RestoreInterrupts(e);
        return 2;
    case 1:
        OS_RestoreInterrupts(e);
        return 0;
    default:
        OS_RestoreInterrupts(e);
        return 1;
    case 3:
        break;
    }
    switch (WM_PowerOff((void *)WifiLink_OnWmCommand)) {
    case 2:
        WifiLink_SetPhase(4);
        sWifiLinkWork->unk_2280 = 2;
        break;
    case 8:
        OS_RestoreInterrupts(e);
        return 4;
    case 3:
    default:
        WifiLink_SetPhase(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    }
    OS_RestoreInterrupts(e);
    return 3;
}

s32 WifiLink_SearchAsync(void *a, void *b, s32 c)
{
    if (a == NULL || b == NULL) {
        return WifiLink_EndSearchAsync(a, b, c);
    }
    return WifiLink_BeginSearchAsync(a, b, c);
}

s32 WifiLink_BeginSearchAsync(void *a, void *b, s32 c)
{
    u32 e = OS_DisableInterrupts();
    Unk_ov065_022905a8_S *g = sWifiLinkWork;
    if (g == NULL) {
        OS_RestoreInterrupts(e);
        return 1;
    }
    switch (g->unk_2260) {
    case 5:
        WifiLink_SetupScanParams(a, b, c);
        OS_RestoreInterrupts(e);
        return 2;
    case 6:
        WifiLink_SetupScanParams(a, b, c);
        OS_RestoreInterrupts(e);
        return 0;
    default:
        OS_RestoreInterrupts(e);
        return 1;
    case 3:
        break;
    }
    WifiLink_SetupScanParams(a, b, c);
    {
        Unk_ov065_022905a8_S *t = sWifiLinkWork;
        DC_InvalidateRange(t->unk_2288, t->unk_228c);
    }
    {
        u32 *cp = &sWifiLinkWork->unk_2284;
        *cp = *cp + 1;
    }
    switch (WM_StartScanEx((void *)WifiLink_OnScanResult, &sWifiLinkWork->unk_2288)) {
    case 2:
        WifiLink_SetPhase(5);
        sWifiLinkWork->unk_2280 = 3;
        break;
    case 8:
        OS_RestoreInterrupts(e);
        return 4;
    case 3:
    default:
        WifiLink_SetPhase(0xb);
        OS_RestoreInterrupts(e);
        return 7;
    }
    OS_RestoreInterrupts(e);
    return 3;
}

}
}  // namespace N_a144

namespace N_97ec {

struct Unk_ov065_0226990c_Ev {
    s16 request;
    s16 result;
    s32 bssDesc;
    s32 detail;
    s32 unk_0c;
};

typedef void (*Unk_ov065_0226990c_Cb)(Unk_ov065_0226990c_Ev *);

struct Unk_ov065_022697ec_G {
    u8 pad_0000[0x2140];
    u8 targetBss[0x2e];
    u16 targetBasicRates;
    u16 targetSupportRates;
    u8 pad_2172[0x2200 - 0x2172];
    u8 wepKeys[0x50];
    u8 wepMode;
    u8 wepKeyId;
    u8 pad_2252[0x2260 - 0x2252];
    s32 phase;
    u32 options;
    u16 unk_2268;
    u8 pad_226a;
    u8 unk_226b;
    u32 dmaNo;
    u32 apList;
    u32 apListSize;
    u32 apListReplaceOldest;
    Unk_ov065_0226990c_Cb notifyCallback;
    s16 unk_2280;
    u8 pad_2282[2];
    u32 unk_2284;
    void *unk_2288;
    u16 scanBufSize;
    u16 scanChannelList;
    u16 scanMaxChannelTime;
    u8 scanBssid[6];
    u16 scanType;
    u16 scanSsidLength;
    u8 scanSsid[0x20];
    u8 unk_22bc[0x10];
    u8 unk_22cc[0x20];
};

typedef Unk_ov065_022697ec_G G;

struct Unk_ov065_02269b18_In {
    u32 dmaNo;
    u32 apListBuf;
    u32 apListBufSize;
    u32 unk_0c;
};

extern "C" {
extern G *sWifiLinkWork;
extern u8 gWifiLinkAnyBssid[];
extern u8 gWifiLinkAnySsid[];

// main module
u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
void OS_CancelAlarm(void *);
void OS_SetAlarm(void *, u32, u32, void *, u32);
void MI_CpuFill8(void *, u32, u32);
void MI_CpuCopy8(void *, void *, u32);
s32 WM_Reset(void *);
u32 WM_GetDispersionScanPeriod();
u16 *WMi_GetStatusAddress();
void DC_InvalidateRange(void *, u32);
s32 func_0211f188();
s32 WM_Disable(void *);
s32 WM_PowerOff(void *);
s32 WM_EndDCF(void *);
s32 WM_SetLifeTime(void *, u32, u32, u32, u32);
s32 func_02133150(s32, s32);

// same overlay, out of range
void WifiLink_OnReset();
void WifiLink_OnEndDcf();
void WifiLink_OnWmCommand();
void WifiLink_SendKeepAlive();

// in range
void WifiLink_ResetOnError();
void WifiLink_OnKeepAliveAlarm();
void WifiLink_RestartKeepAliveAlarm();
void WifiLink_SetPhase(s32);
void WifiLink_Notify(s32, s32, s32, s32, s32);
void WifiLink_NotifyRequest(s32, s32, s32, s32);
u32 WifiLink_NextAllowedChannel(s32);
void WifiLink_SetDefaultOptions();
void WifiLink_SetupScanParams(u8 *, u8 *, u32);
void WifiLink_ApplyConfig(Unk_ov065_02269b18_In *, u32);
u32 WifiLink_GetWork();
u32 WifiLink_UpdateOptions(u32);
u32 WifiLink_GetPhase();
s32 WifiLink_TerminateAsync();
s32 WifiLink_DisconnectAsync();
s32 WifiLink_ConnectAsync(u8 *, u8 *, u32);
s32 WifiLink_EndSearchAsync();
}

s32 WifiLink_EndSearchAsync() {
    u32 irq = OS_DisableInterrupts();
    G *g = sWifiLinkWork;
    if (g == 0) {
        OS_RestoreInterrupts(irq);
        return 1;
    }
    switch (g->phase) {
    case 6:
        WifiLink_SetPhase(7);
        sWifiLinkWork->unk_2280 = 4;
        break;
    case 7:
        OS_RestoreInterrupts(irq);
        return 2;
    case 3:
        OS_RestoreInterrupts(irq);
        return 0;
    default:
        OS_RestoreInterrupts(irq);
        return 1;
    }
    OS_RestoreInterrupts(irq);
    return 3;
}

s32 WifiLink_ConnectAsync(u8 *a, u8 *b, u32 c) {
    u32 irq;
    G *g;
    s32 r;
    irq = OS_DisableInterrupts();
    g = sWifiLinkWork;
    if (g == 0) {
        OS_RestoreInterrupts(irq);
        return 1;
    }
    switch (g->phase) {
    case 3:
        if (a == 0) {
            OS_RestoreInterrupts(irq);
            return 1;
        }
        if (*(u16 *)(a + 0x3c) != 0) {
            OS_RestoreInterrupts(irq);
            return 1;
        }
        if (b != 0) {
            u32 x = b[0];
            if (x >= 4 || b[1] >= 4) {
                OS_RestoreInterrupts(irq);
                return 1;
            }
            g->wepMode = x;
            sWifiLinkWork->wepKeyId = b[1];
            g = sWifiLinkWork;
            if (g->wepMode == 0) {
                MI_CpuFill8(g->wepKeys, 0, 0x50);
            } else {
                MI_CpuCopy8(b + 2, g->wepKeys, 0x50);
            }
        } else {
            MI_CpuFill8(g->wepKeys, 0, 0x52);
        }
        MI_CpuCopy8(a, sWifiLinkWork->targetBss, 0xc0);
        g = sWifiLinkWork;
        g->targetSupportRates = g->targetBasicRates | 3;
        WifiLink_UpdateOptions(c);
        break;
    case 8:
        OS_RestoreInterrupts(irq);
        return 2;
    case 9:
        OS_RestoreInterrupts(irq);
        return 0;
    default:
        OS_RestoreInterrupts(irq);
        return 1;
    }
    r = WM_SetLifeTime((void *)WifiLink_OnWmCommand, 0xffff, 0x50, 0xffff, 0xffff);
    switch (r) {
    case 2:
        WifiLink_SetPhase(8);
        sWifiLinkWork->unk_2280 = 5;
        break;
    case 8:
        OS_RestoreInterrupts(irq);
        return 4;
    case 3:
    default:
        WifiLink_SetPhase(0xb);
        OS_RestoreInterrupts(irq);
        return 7;
    }
    OS_RestoreInterrupts(irq);
    return 3;
}

s32 WifiLink_DisconnectAsync() {
    u32 irq = OS_DisableInterrupts();
    G *g = sWifiLinkWork;
    s32 r;
    if (g == 0) {
        OS_RestoreInterrupts(irq);
        return 1;
    }
    switch (g->phase) {
    case 10:
        OS_RestoreInterrupts(irq);
        return 2;
    case 3:
        OS_RestoreInterrupts(irq);
        return 0;
    default:
        OS_RestoreInterrupts(irq);
        return 1;
    case 9:
        if (g->unk_226b == 1) {
            WifiLink_SetPhase(0xa);
            sWifiLinkWork->unk_2280 = 6;
        } else {
            r = WM_EndDCF((void *)WifiLink_OnEndDcf);
            switch (r) {
            case 2:
                WifiLink_SetPhase(0xa);
                sWifiLinkWork->unk_2280 = 6;
                break;
            case 8:
                OS_RestoreInterrupts(irq);
                return 4;
            case 3:
            default:
                WifiLink_SetPhase(0xb);
                OS_RestoreInterrupts(irq);
                return 7;
            }
        }
        OS_RestoreInterrupts(irq);
        return 3;
    }
}

s32 WifiLink_TerminateAsync() {
    u32 irq = OS_DisableInterrupts();
    G *g = sWifiLinkWork;
    s32 r;
    if (g == 0) {
        OS_RestoreInterrupts(irq);
        return 1;
    }
    switch (g->phase) {
    case 13:
        OS_RestoreInterrupts(irq);
        return 2;
    case 1:
        OS_RestoreInterrupts(irq);
        return 0;
    case 6:
        WifiLink_SetPhase(0xd);
        sWifiLinkWork->unk_2280 = 9;
        OS_RestoreInterrupts(irq);
        return 3;
    default:
        OS_RestoreInterrupts(irq);
        return 1;
    case 3:
    case 9:
    case 12:
        if (g->unk_226b == 1) {
            WifiLink_SetPhase(0xd);
            sWifiLinkWork->unk_2280 = 9;
            goto done;
        } else {
            u16 *p = WMi_GetStatusAddress();
            DC_InvalidateRange(p, 2);
            switch (*p) {
            case 0:
                r = func_0211f188();
                if (r == 0) {
                    WifiLink_SetPhase(1);
                    sWifiLinkWork->unk_2280 = 0;
                    OS_RestoreInterrupts(irq);
                    return 0;
                }
                break;
            case 1:
                r = WM_Disable((void *)WifiLink_OnWmCommand);
                break;
            case 2:
                r = WM_PowerOff((void *)WifiLink_OnWmCommand);
                break;
            default:
                sWifiLinkWork->unk_226b = 1;
                r = WM_Reset((void *)WifiLink_OnReset);
                break;
            }
            switch (r) {
            case 2:
                WifiLink_SetPhase(0xd);
                sWifiLinkWork->unk_2280 = 9;
                goto done;
            case 8:
                OS_RestoreInterrupts(irq);
                return 4;
            case 3:
            default:
                WifiLink_SetPhase(0xb);
                OS_RestoreInterrupts(irq);
                return 7;
            }
        }
    }
done:
    OS_RestoreInterrupts(irq);
    return 3;
}

u32 WifiLink_GetPhase() {
    u32 irq = OS_DisableInterrupts();
    u32 r = 0;
    G *g = sWifiLinkWork;
    if (g != 0) {
        r = g->phase;
    }
    OS_RestoreInterrupts(irq);
    return r;
}

u32 WifiLink_UpdateOptions(u32 v) {
    u32 irq = OS_DisableInterrupts();
    u32 m = 0;
    G *g = sWifiLinkWork;
    u32 old = g->options;
    if (g == 0) {
        OS_RestoreInterrupts(irq);
        return 0;
    }
    if ((v & 0x8000) != 0) {
        m |= 0x3ffe;
        if ((v & 0x3ffe) == 0) v |= 0xa082;
    }
    if ((v & 0x20000) != 0) m |= 0x10000;
    if ((v & 0x80000) != 0) m |= 0x40000;
    if ((v & 0x200000) != 0) m |= 0x100000;
    if ((v & 0x800000) != 0) m |= 0x400000;
    g->options = v | (old & ~m);
    OS_RestoreInterrupts(irq);
    return old;
}

u32 WifiLink_GetWork() {
    return (u32)sWifiLinkWork;
}

void WifiLink_ApplyConfig(Unk_ov065_02269b18_In *p, u32 arg) {
    if (p == 0) {
        sWifiLinkWork->dmaNo = 3;
        sWifiLinkWork->apList = 0;
        sWifiLinkWork->apListSize = 0;
        sWifiLinkWork->apListReplaceOldest = 0;
    } else {
        u32 t4;
        sWifiLinkWork->dmaNo = p->dmaNo & 3;
        t4 = p->apListBuf;
        if (((4 - (t4 & 3)) & 3) + 0xc > p->apListBufSize) {
            sWifiLinkWork->apList = 0;
            sWifiLinkWork->apListSize = 0;
        } else {
            sWifiLinkWork->apList = (t4 + 3) & ~3;
            sWifiLinkWork->apListSize = p->apListBufSize - ((4 - (p->apListBuf & 3)) & 3);
            MI_CpuFill8((void *)sWifiLinkWork->apList, 0, sWifiLinkWork->apListSize);
        }
        sWifiLinkWork->apListReplaceOldest = p->unk_0c;
    }
    sWifiLinkWork->notifyCallback = (Unk_ov065_0226990c_Cb)arg;
}

void WifiLink_SetupScanParams(u8 *a, u8 *b, u32 c) {
    G *g;
    u32 t;
    WifiLink_UpdateOptions(c);
    g = sWifiLinkWork;
    g->unk_2288 = (u8 *)g + 0x1500;
    sWifiLinkWork->scanBufSize = 0x400;
    sWifiLinkWork->scanChannelList = (1 << WifiLink_NextAllowedChannel(0)) >> 1;
    t = sWifiLinkWork->unk_2268;
    if (t == 0) t = WM_GetDispersionScanPeriod();
    g = sWifiLinkWork;
    g->scanMaxChannelTime = t;
    g = sWifiLinkWork;
    g->scanType = (g->options & 0x300000) != 0x300000 ? 1 : 0;
    if (a == 0) {
        MI_CpuCopy8(gWifiLinkAnyBssid, sWifiLinkWork->scanBssid, 6);
    } else {
        MI_CpuCopy8(a, sWifiLinkWork->scanBssid, 6);
    }
    if (b == 0 || b == gWifiLinkAnySsid) {
        MI_CpuCopy8(gWifiLinkAnySsid, sWifiLinkWork->scanSsid, 0x20);
        sWifiLinkWork->scanSsidLength = 0;
    } else {
        s32 n;
        MI_CpuCopy8(b, sWifiLinkWork->scanSsid, 0x20);
        n = 0;
        for (;;) {
            if (*b == 0) break;
            b++;
            n++;
            if (n >= 0x20) break;
        }
        sWifiLinkWork->scanSsidLength = n;
    }
    sWifiLinkWork->unk_2284 = 0;
}

void WifiLink_SetDefaultOptions() {
    sWifiLinkWork->options = 0xaaa082;
}

u32 WifiLink_NextAllowedChannel(s32 a) {
    s32 i = 0;
    s32 c = a;
    u32 mask = sWifiLinkWork->options;
    do {
        if ((mask & (1 << (c % 13 + 1))) != 0) break;
        c++;
        i++;
    } while (i < 13);
    return (u16)((a + i) % 13 + 1);
}

void WifiLink_NotifyRequest(s32 a, s32 b, s32 c, s32 d) {
    G *g = sWifiLinkWork;
    s32 old = g->unk_2280;
    g->unk_2280 = 0;
    WifiLink_Notify(old, a, b, c, d);
}

void WifiLink_Notify(s32 a, s32 b, s32 c, s32 d, s32 e) {
    G *g = sWifiLinkWork;
    Unk_ov065_0226990c_Cb *cb = &g->notifyCallback;
    if (*cb != 0) {
        Unk_ov065_0226990c_Ev ev;
        ev.request = a;
        ev.result = b;
        ev.bssDesc = c;
        ev.detail = d;
        ev.unk_0c = e;
        (*cb)(&ev);
    }
}

void WifiLink_SetPhase(s32 st) {
    u32 irq = OS_DisableInterrupts();
    G *g = sWifiLinkWork;
    if (g->phase == 9 && st != 9) {
        OS_CancelAlarm(g->unk_22cc);
    }
    g = sWifiLinkWork;
    if (g->phase != 0xb) {
        g->phase = st;
    }
    if (st == 9) {
        g = sWifiLinkWork;
        OS_SetAlarm(g->unk_22cc, 0x22f5341, 0, (void *)WifiLink_OnKeepAliveAlarm, 0);
    }
    OS_RestoreInterrupts(irq);
}

void WifiLink_RestartKeepAliveAlarm() {
    u32 irq = OS_DisableInterrupts();
    G *g = sWifiLinkWork;
    OS_CancelAlarm(g->unk_22cc);
    g = sWifiLinkWork;
    if (g->phase == 9) {
        OS_SetAlarm(g->unk_22cc, 0x22f5341, 0, (void *)WifiLink_OnKeepAliveAlarm, 0);
    }
    OS_RestoreInterrupts(irq);
}

void WifiLink_OnKeepAliveAlarm() {
    WifiLink_SendKeepAlive();
    WifiLink_RestartKeepAliveAlarm();
}

void WifiLink_ResetOnError() {
    G *g = sWifiLinkWork;
    if (g->unk_226b == 0) {
        g->unk_226b = 1;
        if (WM_Reset((void *)WifiLink_OnReset) != 2) {
            WifiLink_SetPhase(0xb);
            WifiLink_NotifyRequest(7, 0, 0, 0x611);
        }
    }
}

}  // namespace N_97ec

namespace N_8ec8 {

// ov065_016: network state-machine message handlers, 0x02268ec8..0x02269784

struct Unk_ov065_02268ec8_Msg {
    u16 h0;
    u16 h2;
    u16 h4;
    u16 h6;
    u16 h8;
    u16 ha;
    u16 hc;
    u16 he;
    u32 p10[16];
    u16 h50[16];
};

struct Unk_ov065_02268fb0_Ptr {
    u8 pad_00[0xe];
    u16 he;
};

struct Unk_ov065_02268ec8_G {
    u8 pad_0000[0x1500];
    u8 wmBuf[0xc40];
    u8 targetBss[0xc0];
    u8 wepKeys[0x50];
    u8 wepMode;
    u8 wepKeyId;
    u8 pad_2252[0xe];
    s32 phase;
    u32 options;
    u8 pad_2268[0x14];
    u32 notifyCallback;
    s16 unk_2280;
    s16 unk_2282;
    u32 unk_2284;
    u8 unk_2288[4];
    u16 scanBufSize;
    s16 scanChannelList;
    u8 pad_2290[0x68];
    u16 unk_22f8;
};

typedef Unk_ov065_02268ec8_Msg Unk_ov065_02268ec8_M;
typedef Unk_ov065_02268ec8_G Unk_ov065_02268ec8_GG;

extern "C" {

extern Unk_ov065_02268ec8_G *sWifiLinkWork;

void WifiLink_SetPhase(u32);
s32 WifiLink_NotifyRequest(u32, void *, u32, u32);
void WifiLink_Notify(u32, u32, u32, void *, u32);
void WifiLink_ResetOnError();
u32 WifiLink_CountBits(u32);
u32 WifiLink_CountLeadingZeros(u32);
u32 WifiLink_NextAllowedChannel(u32);
void WifiLink_AddRssiSample(u32);
void WifiLink_OnFrameReceived(void *);
void WifiLink_AddApListEntry(u32, u32);
void DC_InvalidateRange(void *, u32);
s32 WM_Disconnect(void *, u32);
s32 WM_StartDCF(void *, void *, u32);
s32 WM_StartScanEx(void *, void *);
s32 WM_EndScan(void *);
s32 WM_PowerOn(void *);
s32 func_0211f188();
s32 WM_Disable(void *);
s32 WM_SetBeaconIndication(void *, u32);
s32 WM_SetWEPKeyEx(void *, u32, u32, void *);
s32 func_0211fcbc(void *, void *, u32, u32, u32);

void WifiLink_OnEndDcf(Unk_ov065_02268ec8_Msg *m);
void WifiLink_OnDcfEvent(Unk_ov065_02268ec8_Msg *m);
void WifiLink_OnDisconnect(Unk_ov065_02268ec8_Msg *m);
void WifiLink_OnConnectEvent(Unk_ov065_02268ec8_Msg *m);
void WifiLink_OnEndScan(Unk_ov065_02268ec8_Msg *m);
void WifiLink_OnScanResult(Unk_ov065_02268ec8_Msg *m);
void WifiLink_OnWmCommand(Unk_ov065_02268ec8_Msg *m);










void WifiLink_OnWmIndication(Unk_ov065_02268ec8_Msg *m) {
    if (m->h2 == 8 && m->h4 == 0x16 && m->h6 == 0x25) {
        switch (sWifiLinkWork->phase) {
        case 8:
            WifiLink_SetPhase(0xc);
            break;
        case 9:
        case 12:
            WifiLink_ResetOnError();
            break;
        case 10:
            WifiLink_SetPhase(0xc);
            break;
        case 11:
            break;
        }
    }
}

void WifiLink_OnWmCommand(Unk_ov065_02268ec8_Msg *m) {
    s32 res = 0x14;
    switch (m->h2) {
    case 0: {
        switch (m->h0) {
        case 3:
            res = WM_PowerOn((void *)WifiLink_OnWmCommand);
            break;
        case 4: {
            s32 r = func_0211f188();
            switch (r) {
            case 0:
                WifiLink_SetPhase(1);
                WifiLink_NotifyRequest(0, 0, 0, 0x663);
                return;
            case 4:
            default:
                WifiLink_SetPhase(0xb);
                WifiLink_NotifyRequest(7, 0, 0, 0x66a);
                return;
            }
        }
        case 5:
            WifiLink_SetPhase(3);
            WifiLink_NotifyRequest(0, 0, 0, 0x670);
            return;
        case 6:
            res = WM_Disable((void *)WifiLink_OnWmCommand);
            break;
        case 0x1d:
            res = WM_SetBeaconIndication((void *)WifiLink_OnWmCommand, 0);
            break;
        case 0x19: {
            Unk_ov065_02268ec8_G *g = sWifiLinkWork;
            res = WM_SetWEPKeyEx((void *)WifiLink_OnWmCommand, g->wepMode, g->wepKeyId, g->wepKeys);
            break;
        }
        case 0x27: {
            Unk_ov065_02268ec8_G *g = sWifiLinkWork;
            u32 t = g->options;
            s32 a0;
            u32 b;
            if ((t & 0xc0000) == 0xc0000) a0 = 1; else a0 = 0;
            u16 a = a0;
            if ((t & 0x30000) != 0x30000) b = 1; else b = 0;
            res = func_0211fcbc((void *)WifiLink_OnConnectEvent, g->targetBss, 0, b, a);
            break;
        }
        }
        if (res == 2) {
            return;
        }
        if (res == 3) goto e3;
        if (res != 8) goto e3;
        WifiLink_SetPhase(0xc);
        WifiLink_NotifyRequest(1, sWifiLinkWork->unk_2280 == 5 ? sWifiLinkWork->targetBss : 0, 0, 0x6a7);
        return;
    e3:
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, sWifiLinkWork->unk_2280 == 5 ? sWifiLinkWork->targetBss : 0, 0, 0x6b0);
        return;
    }
    case 1:
        WifiLink_SetPhase(0xc);
        WifiLink_NotifyRequest(1, sWifiLinkWork->unk_2280 == 5 ? sWifiLinkWork->targetBss : 0, 0, 0x6d0);
        return;
    case 2:
    case 3:
    case 4:
    default:
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, sWifiLinkWork->unk_2280 == 5 ? sWifiLinkWork->targetBss : 0, 0, 0x6da);
        return;
    }
}

void WifiLink_OnScanResult(Unk_ov065_02268ec8_Msg *m) {
    s32 res = 0x14;
    switch (m->h2) {
    case 0: {
        if (sWifiLinkWork->phase == 5) {
            WifiLink_SetPhase(6);
            WifiLink_NotifyRequest(0, 0, 0, 0x6f6);
        }
        switch (sWifiLinkWork->phase) {
        case 6: {
            sWifiLinkWork->unk_2280 = 7;
            if (m->h8 == 5) {
                s32 i;
                DC_InvalidateRange(*(void **)sWifiLinkWork->unk_2288, sWifiLinkWork->scanBufSize);
                for (i = 0; i < (s32)m->he; i++) {
                    WifiLink_AddApListEntry(m->p10[i], m->h50[i]);
                    WifiLink_Notify(7, 0, m->p10[i], m, 0x70b);
                }
            }
            u32 t = sWifiLinkWork->options;
            if ((t & 0xc00000) == 0xc00000) {
                u32 cnt = WifiLink_CountBits(t & 0x3ffe);
                if (cnt != 0) {
                    u32 x = sWifiLinkWork->unk_2284;
                    if (x % cnt == 0) {
                        WifiLink_Notify(8, 0, x, 0, 0x718);
                    }
                }
            }
            {
                u32 n = WifiLink_CountLeadingZeros(m->ha);
                u32 k = WifiLink_NextAllowedChannel((u16)(32 - n));
                sWifiLinkWork->scanChannelList = (s16)((1 << k) >> 1);
            }
            DC_InvalidateRange(*(void **)sWifiLinkWork->unk_2288, sWifiLinkWork->scanBufSize);
            sWifiLinkWork->unk_2284++;
            res = WM_StartScanEx((void *)WifiLink_OnScanResult, sWifiLinkWork->unk_2288);
            break;
        }
        case 7:
            res = WM_EndScan((void *)WifiLink_OnEndScan);
            break;
        case 0xd:
            WifiLink_ResetOnError();
            return;
        default:
            break;
        }
        if (res == 2) {
            return;
        }
        if (res == 3) goto e3;
        if (res != 8) goto e3;
        WifiLink_SetPhase(0xc);
        WifiLink_NotifyRequest(1, 0, 0, 0x743);
        return;
    e3:
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, 0, 0, 0x74c);
        return;
    }
    case 1:
        WifiLink_ResetOnError();
        return;
    case 2:
    case 3:
    case 4:
    default:
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, 0, 0, 0x75d);
        return;
    }
}

void WifiLink_OnEndScan(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0:
        WifiLink_SetPhase(3);
        WifiLink_NotifyRequest(0, 0, 0, 0x774);
        return;
    case 1:
        WifiLink_ResetOnError();
        return;
    case 2:
    case 3:
    case 4:
    default:
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, 0, 0, 0x784);
        return;
    }
}

void WifiLink_OnConnectEvent(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0:
        switch (m->h8) {
        case 8:
        case 9: {
            Unk_ov065_02268ec8_G *g = sWifiLinkWork;
            switch (g->phase - 8) {
            case 2:
                g->unk_2282 = 0;
            case 0:
                WifiLink_SetPhase(0xc);
                break;
            case 1:
                g->unk_2282 = 0;
                sWifiLinkWork->unk_2280 = 6;
            case 4:
                WifiLink_ResetOnError();
                break;
            case 3:
                break;
            }
            break;
        }
        case 7: {
            if (sWifiLinkWork->phase == 0xc) {
                WifiLink_SetPhase(8);
                WifiLink_ResetOnError();
                return;
            }
            u32 v = m->ha;
            if (v >= 1 && v <= 0x7d7) {
                sWifiLinkWork->unk_2282 = v;
                s32 r = WM_StartDCF((void *)WifiLink_OnDcfEvent, sWifiLinkWork->wmBuf, 0x620);
                if (r == 2) {
                    return;
                }
                if (r == 3) goto e3;
                if (r != 8) goto e3;
                WifiLink_SetPhase(0xc);
                WifiLink_NotifyRequest(1, sWifiLinkWork->targetBss, 0, 0x7d7);
                return;
            e3:
                WifiLink_SetPhase(0xb);
                WifiLink_NotifyRequest(7, sWifiLinkWork->targetBss, 0, 0x7e0);
                return;
            }
            WifiLink_ResetOnError();
            return;
        }
        case 6:
            break;
        case 0: case 1: case 2: case 3: case 4: case 5:
        default:
            WifiLink_SetPhase(0xb);
            WifiLink_NotifyRequest(7, sWifiLinkWork->targetBss, m->h8, 0x7ee);
            return;
        }
        break;
    case 1:
        sWifiLinkWork->unk_22f8 = m->he;
    case 6:
    case 11:
    case 12:
        WifiLink_SetPhase(8);
        WifiLink_ResetOnError();
        return;
    case 2: case 3: case 4: case 5: case 7: case 8: case 9: case 10:
    default:
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, sWifiLinkWork->targetBss, 0, 0x804);
        return;
    }
}

void WifiLink_OnDisconnect(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0: {
        Unk_ov065_02268ec8_G *g = sWifiLinkWork;
        if (g->phase == 0xc) {
            WifiLink_SetPhase(0xa);
            WifiLink_ResetOnError();
            return;
        }
        g->unk_2282 = 0;
        WifiLink_SetPhase(3);
        WifiLink_NotifyRequest(0, sWifiLinkWork->targetBss, 0, 0x827);
        return;
    }
    case 1:
    case 3:
        WifiLink_SetPhase(0xa);
        WifiLink_ResetOnError();
        return;
    case 2:
    case 4:
    default:
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, sWifiLinkWork->targetBss, 0, 0x839);
        return;
    }
}

void WifiLink_OnDcfEvent(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0:
        switch (m->h4) {
        case 0xe:
            if (sWifiLinkWork->phase == 0xc) {
                WifiLink_SetPhase(8);
                WifiLink_ResetOnError();
                return;
            }
            WifiLink_SetPhase(9);
            WifiLink_NotifyRequest(0, sWifiLinkWork->targetBss, 0, 0x85d);
            return;
        case 0xf: {
            Unk_ov065_02268fb0_Ptr *p = *(Unk_ov065_02268fb0_Ptr **)&m->h8;
            WifiLink_AddRssiSample((u8)(p->he >> 8));
            DC_InvalidateRange(*(void **)&m->h8, 0x620);
            WifiLink_OnFrameReceived(*(void **)&m->h8);
            return;
        }
        default:
            WifiLink_SetPhase(0xb);
            WifiLink_NotifyRequest(7, sWifiLinkWork->targetBss, m->h4, 0x86b);
            return;
        }
    case 4:
    default:
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, sWifiLinkWork->targetBss, 0, 0x877);
    }
}

void WifiLink_OnEndDcf(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0: {
        if (sWifiLinkWork->phase == 0xc) {
            WifiLink_SetPhase(0xa);
            WifiLink_ResetOnError();
            return;
        }
        s32 r = WM_Disconnect((void *)WifiLink_OnDisconnect, 0);
        if (r == 2) {
            return;
        }
        if (r == 3) goto b3;
        if (r != 8) goto b0;
        WifiLink_SetPhase(0xc);
        WifiLink_NotifyRequest(1, sWifiLinkWork->targetBss, 0, 0x8a0);
        return;
    b3:
        WifiLink_SetPhase(0xa);
        WifiLink_ResetOnError();
        return;
    b0:
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, sWifiLinkWork->targetBss, 0, 0x8ac);
        return;
    }
    case 1:
    case 3:
        WifiLink_SetPhase(0xa);
        WifiLink_ResetOnError();
        return;
    case 2:
    case 4:
    default:
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, sWifiLinkWork->targetBss, 0, 0x8bf);
        return;
    }
}

}
}  // namespace N_8ec8

namespace N_8470 {
struct Unk_ov065_02268c64_Msg {
    u8 unk_00[2];
    u16 errCode;
};

struct Unk_ov065_022905a8 {
    u8 unk_0000[0x2140];
    u8 unk_2140[0x30];
    u16 unk_2170;
    u8 unk_2172[0xee];
    u32 unk_2260;
    u32 unk_2264;
    u8 unk_2268[3];
    u8 unk_226b;
    u8 unk_226c[0x14];
    u16 unk_2280;
    u16 unk_2282;
    u8 unk_2284[0x74];
    u16 unk_22f8;
};

extern "C" {
extern Unk_ov065_022905a8 *sWifiLinkWork;
s32 WifiLink_SetPhase(s32 a);
s32 WifiLink_NotifyRequest(s32 a, void *b, u32 c, u32 d);
s32 WifiLink_OnConnectEvent(void *);
s32 WifiLink_OnWmCommand(void *);
s32 func_0211fcbc(void *cb, void *buf, u32 a, u32 b, u32 c);
s32 WM_PowerOff(void *cb);

void WifiLink_OnReset(Unk_ov065_02268c64_Msg *m)
{
    if (m->errCode == 0) {
        sWifiLinkWork->unk_226b = 0;
        sWifiLinkWork->unk_2282 = 0;
        switch (sWifiLinkWork->unk_2260) {
        case 5:
        case 6:
            WifiLink_SetPhase(3);
            WifiLink_NotifyRequest(1, 0, 0, 0x8e1);
            break;
        case 7:
            WifiLink_SetPhase(3);
            WifiLink_NotifyRequest(0, 0, 0, 0x8e7);
            break;
        case 8: {
            u32 old;
            u32 w;
            u32 x;
            u32 y;
            u16 xs;
            s32 r;
            old = sWifiLinkWork->unk_22f8;
            sWifiLinkWork->unk_22f8 = 0;
            if (old == 0x12) {
                Unk_ov065_022905a8 *g = sWifiLinkWork;
                if ((g->unk_2170 & 0x24) != 0x24) {
                    x = 0;
                    g->unk_2170 |= 0x24;
                    w = sWifiLinkWork->unk_2264;
                    if ((w & 0xc0000) == 0xc0000) {
                        x = 1;
                    }
                    xs = x;
                    if ((w & 0x30000) == 0x30000) {
                        y = 0;
                    } else {
                        y = 1;
                    }
                    r = func_0211fcbc((void *)WifiLink_OnConnectEvent, sWifiLinkWork->unk_2140, 0, y, xs);
                    if (r == 2) {
                        break;
                    }
                    if (r != 3 && r == 8) {
                        WifiLink_SetPhase(0xc);
                        WifiLink_NotifyRequest(1, sWifiLinkWork->unk_2140, old, 0x905);
                    } else {
                        WifiLink_SetPhase(0xb);
                        WifiLink_NotifyRequest(7, sWifiLinkWork->unk_2140, old, 0x90c);
                    }
                    break;
                }
            }
            WifiLink_SetPhase(3);
            WifiLink_NotifyRequest(1, sWifiLinkWork->unk_2140, old, 0x913);
            break;
        }
        case 9:
        case 12:
            WifiLink_SetPhase(3);
            WifiLink_NotifyRequest(0, sWifiLinkWork->unk_2140, 1, 0x91b);
            break;
        case 10:
            WifiLink_SetPhase(3);
            WifiLink_NotifyRequest(0, sWifiLinkWork->unk_2140, 0, 0x922);
            break;
        case 13: {
            s32 r = WM_PowerOff((void *)WifiLink_OnWmCommand);
            if (r == 2) {
                break;
            }
            if (r != 3 && r == 8) {
                WifiLink_SetPhase(0xc);
                WifiLink_NotifyRequest(1, 0, 0, 0x930);
            } else {
                WifiLink_SetPhase(0xb);
                WifiLink_NotifyRequest(7, 0, 0, 0x939);
            }
            break;
        }
        default:
            WifiLink_SetPhase(0xb);
            WifiLink_NotifyRequest(7, 0, sWifiLinkWork->unk_2260, 0x93f);
            break;
        }
    } else {
        WifiLink_SetPhase(0xb);
        WifiLink_NotifyRequest(7, 0, 0, 0x946);
    }
}
}
}  // namespace N_8470
