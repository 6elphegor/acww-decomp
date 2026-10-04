// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/DwcGsHttpCallbackCtx.h"

typedef long long s64;

// ov065_040: DWC net helpers: tick->ms, string key lookup, alloc wrappers, WiFi state machine, HTTP-ish task (0x02277974..0x02278250)

struct DwcInetControl {
    s32 connectResult;
    u16 state;
    u16 isConnected;
    u16 apInitParam0;
    u16 apInitParam1;
};

struct Unk_ov065_02277d68_Args {
    void *allocFn;
    void *freeFn;
    u8 dmaNo;
    u8 powerMode;
};


typedef void *(*DwcAllocHookFn)(s32, s32, s32);
typedef void *(*DwcFreeHookFn)(s32, void *, s32);

extern "C" {

u64 OS_GetTick();
char *strchr(const char *, s32);
s32 STD_GetStringLength(const char *);
s32 strncmp(const char *, const char *, s32);
void strncpy(void *, const void *, s32);
s32 OS_SNPrintf(char *, s32, const char *, ...);
void MI_CpuCopy8(void *, void *, s32);
void MI_CpuFill8(void *, s32, s32);
void OS_Sleep(s32);
s32 memcmp(const void *, const void *, s32);
void STD_CopyString(void *, const void *);
s32 OS_SPrintf(char *, const char *, ...);
void memcpy(void *, const void *, s32);

DwcFreeHookFn sDwcFreeHook;
s32 __GSIACResult;
DwcInetControl *sDwcInet;
DwcAllocHookFn sDwcAllocHook;
char GSIACHostname[0x40];
char __GSIACGamename[0x40];
extern u32 gSslRsaThreadPriority;

void WifiAp_GetLinkLevel();
s32 WifiAp_RequestCleanup();
s32 WifiAp_GetStatus();
void *WifiAp_Process();
s32 WifiAp_Init(void *);
s32 WifiLink_GetPhase();
void DwcCore_SetError(s32, s32);
void NasAuth_SetServerUrl(const char *);
s32 ghttpGetA(s32, s32, void *, void *);
s32 ghttpPostA(s32, s32, s32, void *, void *);
s32 ghttpPostAddStringA(s32);
s32 ghttpNewPost();
void ghttpThink();
void ghttpCleanup();
void ghttpStartup();
s32 CanReceiveOnSocket(s32 fd);
s32 recvfrom(s32, void *, s32, s32, void *, void *);
void closesocket(s32);
u32 current_time();
void SocketStartUp();
void SendPacket();
s32 socket(s32, s32, s32);
s32 get_sockaddrin(const char *, s32, const char *);
s32 DwcGsHttp_OnRequestDone(s32, s32, s32, s32, DwcGsHttpCallbackCtx *);
s32 HandlePacket(s8 *, s32, u8 *, u32 *);

void DwcInet_InitEx(DwcInetControl *p, s32 x, s32 y, u32 z);
void DwcInet_Init(DwcInetControl *p);
void DwcInet_SelectAuthServer(s32 x);
void DwcInet_StartConnect();
BOOL DwcInet_IsConnectDone();
void DwcInet_Process();
s32 DwcInet_UpdateStatus();
void DwcInet_WaitDisconnect();
BOOL DwcInet_Disconnect();
BOOL DwcInet_IsLinkLost();
void DwcInet_GetLinkLevel();
void DwcNet_SetAllocator(DwcAllocHookFn a, DwcFreeHookFn b);
void *DwcNet_Alloc(s32 a, s32 b);
void *DwcNet_AllocAligned(s32 a, s32 b, s32 c);
void *DwcNet_Free(s32 a, void *b, s32 c);
void *DwcNet_Realloc(s32 a, s32 b, s32 c, s32 d);
void *DwcNet_ReallocAligned(s32 a, void *b, s32 c, s32 d, s32 e);
void *GsUtil_Alloc(s32 a);
void *GsUtil_Realloc(s32 a, s32 b);
void *GsUtil_Free(s32 a);
s32 GsUtil_FormatKeyValue(s32 a, s32 b, char *dst, s32 d);
s32 GsUtil_AppendKeyValue(s32 a, s32 b, char *s, s32 d);
s32 GsUtil_GetKeyValue(char *key, char *out, char *src, s32 sep);
u64 DwcNet_GetTimeMs();
}

void DwcInet_InitEx(DwcInetControl *p, s32 x, s32 y, u32 z) {
    if (sDwcInet == NULL) {
        MI_CpuFill8(p, 0, 12);
        p->apInitParam0 = x;
        p->apInitParam1 = 1;
        p->state = 1;
        p->isConnected = 0;
        sDwcInet = p;
        DwcInet_SelectAuthServer(0);
        gSslRsaThreadPriority = z;
    }
}

void DwcInet_Init(DwcInetControl *p) {
    DwcInet_InitEx(p, 3, 1, 0x14);
}

void DwcInet_SelectAuthServer(s32 x) {
    switch (x) {
    case 0:
        NasAuth_SetServerUrl("https://nas.test.nintendowifi.net/ac");
        break;
    case 1:
        NasAuth_SetServerUrl("https://nas.dev.nintendowifi.net/ac");
        break;
    case 2:
        NasAuth_SetServerUrl("https://nas.nintendowifi.net/ac");
        break;
    }
}

void DwcInet_StartConnect() {
    Unk_ov065_02277d68_Args l;
    if (sDwcInet != NULL) {
        if (sDwcInet->state == 1) {
            DwcInetControl *s;
            MI_CpuFill8(&l, 0, 12);
            s = sDwcInet;
            l.dmaNo = s->apInitParam0;
            l.powerMode = s->apInitParam1;
            l.allocFn = (void *)DwcNet_Alloc;
            l.freeFn = (void *)DwcNet_Free;
            s->state = 2;
            if (WifiAp_Init(&l) == 0) {
                DwcCore_SetError(8, -6);
            }
        }
    } else {
        DwcCore_SetError(8, -4);
    }
}

BOOL DwcInet_IsConnectDone() {
    DwcInetControl *s = sDwcInet;
    if (s == NULL) {
        return FALSE;
    }
    if (s->connectResult != 0) {
        s->state = 3;
        DwcInet_UpdateStatus();
        return TRUE;
    }
    return FALSE;
}

void DwcInet_Process() {
    DwcInetControl *s = sDwcInet;
    if (s != NULL && s->state == 2) {
        sDwcInet->connectResult = (s32)WifiAp_Process();
        return;
    }
    if (s != NULL && s->state == 4 && s->isConnected != 0 && WifiLink_GetPhase() != 9) {
        sDwcInet->isConnected = 0;
        sDwcInet->state = 6;
    }
}

s32 DwcInet_UpdateStatus() {
    s32 st = 0;
    if (sDwcInet != NULL) {
        s32 t = WifiAp_GetStatus();
        if (t == 5) {
            st = 4;
            sDwcInet->state = st;
            sDwcInet->isConnected = 1;
            return st;
        }
        if (t < 0) {
            if (t >= -10) {
                st = 8;
                DwcCore_SetError(st, t - 0x2bc);
                sDwcInet->state = st;
                return st;
            }
            st = 7;
            DwcCore_SetError(5, t);
            sDwcInet->state = st;
            return st;
        }
        st = 2;
    }
    return st;
}

void DwcInet_WaitDisconnect() {
    if (sDwcInet != NULL) {
        if (WifiAp_RequestCleanup() == 0) {
            do {
                OS_Sleep(10);
            } while (WifiAp_RequestCleanup() == 0);
        }
        sDwcInet = NULL;
    }
}

BOOL DwcInet_Disconnect() {
    DwcInetControl *s = sDwcInet;
    if (s == NULL) {
        return TRUE;
    }
    if (s->state == 8) {
        return FALSE;
    }
    if (s->state == 1) {
        sDwcInet = NULL;
        return TRUE;
    }
    s->state = 5;
    if (WifiAp_RequestCleanup() != 0) {
        sDwcInet = NULL;
        return TRUE;
    }
    return FALSE;
}

BOOL DwcInet_IsLinkLost() {
    if (sDwcInet != NULL && sDwcInet->state == 6) {
        return TRUE;
    }
    return FALSE;
}

void DwcInet_GetLinkLevel() {
    WifiAp_GetLinkLevel();
}

void DwcNet_SetAllocator(DwcAllocHookFn a, DwcFreeHookFn b) {
    sDwcAllocHook = a;
    sDwcFreeHook = b;
}

void *DwcNet_Alloc(s32 a, s32 b) {
    return sDwcAllocHook(a, b, 0x20);
}

void *DwcNet_AllocAligned(s32 a, s32 b, s32 c) {
    return sDwcAllocHook(a, b, c);
}

void *DwcNet_Free(s32 a, void *b, s32 c) {
    return sDwcFreeHook(a, b, c);
}

void *DwcNet_Realloc(s32 a, s32 b, s32 c, s32 d) {
    return DwcNet_ReallocAligned(a, (void *)b, c, d, 0x20);
}

void *DwcNet_ReallocAligned(s32 a, void *b, s32 c, s32 d, s32 e) {
    void *r = sDwcAllocHook(a, d, e);
    if (r == NULL) {
        return NULL;
    }
    if (b != NULL) {
        MI_CpuCopy8(b, r, d);
        sDwcFreeHook(a, b, c);
    }
    return r;
}

void *GsUtil_Alloc(s32 a) {
    return DwcNet_Alloc(5, a);
}

void *GsUtil_Realloc(s32 a, s32 b) {
    return DwcNet_Realloc(5, a, b, b);
}

void *GsUtil_Free(s32 a) {
    return DwcNet_Free(5, (void *)a, 0);
}

s32 GsUtil_FormatKeyValue(s32 a, s32 b, char *dst, s32 d) {
    OS_SNPrintf(dst, 0x1000, "%c%s%c%s", d, a, d, b);
    return STD_GetStringLength(dst);
}

s32 GsUtil_AppendKeyValue(s32 a, s32 b, char *s, s32 d) {
    char *e = strchr(s, 0);
    GsUtil_FormatKeyValue(a, b, e, d);
    return STD_GetStringLength(s);
}

s32 GsUtil_GetKeyValue(char *key, char *out, char *src, s32 sep) {
    char *p;
    char *q;
    s32 len;
    if (out == NULL) {
        return -1;
    }
    p = strchr(src, sep);
    if (p == NULL) {
        return -1;
    }
    for (;;) {
        if (strncmp(p + 1, key, STD_GetStringLength(key)) == 0) {
            if (sep == (s8)p[STD_GetStringLength(key) + 1]) {
                break;
            }
        }
        q = strchr(p + 1, sep);
        if (q == NULL) {
            return -1;
        }
        p = strchr(q + 1, sep);
        if (p == NULL) {
            return -1;
        }
    }
    p = strchr(p + 1, sep);
    if (p == NULL) {
        return -1;
    }
    q = strchr(p + 1, sep);
    if (q != NULL) {
        len = q - (p + 1);
    } else {
        len = STD_GetStringLength(p + 1);
    }
    strncpy(out, p + 1, len);
    out[len] = 0;
    return len;
}

u64 DwcNet_GetTimeMs() {
    return (OS_GetTick() << 6) / 0x82ea;
}

