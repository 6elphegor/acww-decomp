// mwcc-flags: -O4,p -str reuse
#include "types.h"

namespace Unk_ov065_02260de4_Ns {

// ov065_003: socket-library style free functions (0x02260de4..0x02261638)

struct Unk_ov065_02260de4_Ring {
    u8 pad_00[0xf8];
    s32 unk_f8;
    u8 pad_fc[8];
    u32 unk_104_dummy;
};

struct Unk_ov065_02260de4_Buf {
    u8 pad_00[4];
    u16 unk_04;
};

struct Unk_ov065_02260de4_Ctx {
    u8 pad_00[0xf8];
    s32 unk_f8;
    u8 pad_fc[8];
    Unk_ov065_02260de4_Buf *unk_104;
};

struct Unk_ov065_02260de4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[0x3b];
    s32 unk_44;
    u8 pad_48[0x1c];
    Unk_ov065_02260de4_Ctx *unk_64;
    u8 pad_68[8];
    volatile s16 unk_70;
    s8 unk_72;
    s8 unk_73;
    u16 unk_74;
    u8 pad_76[6];
    Unk_ov065_02260de4 *unk_7c;
};

struct Unk_ov065_02260fa4_Ent {
    Unk_ov065_02260de4 *unk_00;
    s16 unk_04;
    u16 unk_06;
};

struct Unk_ov065_0226129c_Sa {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
};

struct Unk_ov065_02261118_Cfg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    void *unk_18;
    void *unk_1c;
    u32 unk_20;
    u8 pad_24[0xc];
    u32 unk_30;
    u32 unk_34;
};

struct Unk_ov065_02261118_Src {
    u8 pad_00[4];
    void *unk_04;
    void *unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u8 pad_24[8];
    u32 unk_2c;
    u32 unk_30;
};

struct Unk_ov065_02261408_Hostent {
    char *unk_00;
    char **unk_04;
    s16 unk_08;
    s16 unk_0a;
    char **unk_0c;
};

typedef void (*Unk_ov065_02261118_Free)(s32, void *, u32);
typedef void *(*Unk_ov065_02261118_Alloc)(s32, u32);

extern "C" {

// main module
s32 OS_DisableInterrupts();
s32 OS_RestoreInterrupts(s32);
s32 OS_Sleep(s32);
s32 MI_CpuCopy8(s32, void *, s32);
s32 OS_SNPrintf(char *, u32, const char *, ...);
s32 func_021277fc(char *, s32, s32);
s64 func_02133100(s64, s64);

// same overlay, out of range
s32 SockCore_GetSendRingFree(Unk_ov065_02260de4 *);
s32 SockCore_Cleanup();
u32 SockCore_GetHostIp();
s32 SockCore_SetDnsServers(u32, u32);
u32 SockCore_ParseDottedAddr(u32);
u32 SockCore_ResolveHost(s32);
s32 SockCore_Startup(void *);
s32 SockCore_Accept(s32, u16 *, u32 *);
s32 SockCore_Listen(s32, s32, s32);
s32 SockCore_Connect(s32, u32, u32);
s32 SockCore_Bind(s32, u32);
s32 SockCore_Create(void *);
s32 SockCore_Close(s32, s32, s32);
s32 SockCore_Shutdown(s32, s32, s32);
s32 SockCore_SendTo(s32, s32, s32, u32, u32, u32);
s32 SockCore_RecvFrom(s32, s32, s32, u16 *, u32 *, u32);
s32 Dns_QueryServer(s32, u32, u32);
s32 IpAddr_Parse(s32, s32 *);

// data
extern u32 sDnsServers[2];

// forward declarations (the original file defined them in ascending order)
u32 SockCore_GetPollEvents(Unk_ov065_02260de4 *o);
s32 SockCore_GetRecvAvailable(Unk_ov065_02260de4 *o);
s32 SockCore_IsInvalidHandle(s32 x);
Unk_ov065_02260de4 **SockList_Find(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n);
void SockList_Remove(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n);
void SockList_Push(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n);
void *Sock_AllocHook(u32 sz);
void Sock_FreeHook(void *p);
BOOL SockCore_IsInClosedList(Unk_ov065_02260de4 *n);
char *Sock_InetNtoP(s32 mode, s32 x, char *buf, u32 len);
void IpAddr_StoreBe32(u32 v, u8 *p);

struct Unk_ov065_02261638_Rng {
    u64 unk_00;
    s64 unk_08;
    s64 unk_10;
};
extern Unk_ov065_02261638_Rng sIpRandState;

static inline u32 HTONL(u32 x) {
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}

static inline u16 HTONS(u16 x) {
    return (x >> 8 & 0xff) | ((x << 8) & 0xff00);
}

// own data
u32 sSockUdpParams[6] = {0x05c00101, 0x00000001, 0x00000000, 0x08000000, 0x080c0800, 0x00000000};
u32 sSockTcpParams[6] = {0x00000100, 0x05ea0000, 0x00000000, 0x00000bd5, 0x080c0800, 0x080d0800};
u32 sSockSendOnlyParams[6] = {0x00000002, 0x05ea0000, 0x00000000, 0x000006eb, 0x00000000, 0x080d0800};
Unk_ov065_02261118_Alloc sSockUserAlloc;
Unk_ov065_02261118_Free sSockUserFree;
Unk_ov065_02260de4 *sSockOpenList;
Unk_ov065_02260de4 *sSockClosedList;
u32 sHostentAddr;
char *sHostentAddrList[2];
char sInetNtoaBuf[16];
Unk_ov065_02261408_Hostent sHostent;
Unk_ov065_02261118_Cfg sSockStartupConfig;
char sHostentName[0x104];

s32 Sock_Create(s32 a, s32 b) {
    if (b == 1) {
        return SockCore_Create(sSockTcpParams);
    }
    return SockCore_Create(sSockUdpParams);
}

s32 Sock_Bind(s32 a, Unk_ov065_0226129c_Sa *sa) {
    return SockCore_Bind(a, HTONS(sa->unk_02));
}

s32 Sock_Connect(s32 a, Unk_ov065_0226129c_Sa *sa) {
    return SockCore_Connect(a, HTONS(sa->unk_02), HTONL(sa->unk_04));
}

s32 Sock_Recv(s32 a, s32 b, s32 c, u32 d) {
    return SockCore_RecvFrom(a, b, c, 0, 0, d);
}

s32 Sock_RecvFrom(s32 a, s32 b, s32 c, u32 d, Unk_ov065_0226129c_Sa *sa) {
    u16 port;
    u32 ip;
    s32 r = SockCore_RecvFrom(a, b, c, &port, &ip, d);
    if (r >= 0) {
        Unk_ov065_0226129c_Sa *q = *(Unk_ov065_0226129c_Sa *volatile *)&sa;
        if (q != NULL) {
            q->unk_02 = HTONS(port);
            q->unk_04 = HTONL(ip);
        }
    }
    return r;
}

s32 Sock_Send(s32 a, s32 b, s32 c, u32 d) {
    return SockCore_SendTo(a, b, c, 0, 0, d);
}

s32 Sock_SendTo(s32 a, s32 b, s32 c, u32 d, Unk_ov065_0226129c_Sa *sa) {
    u32 port;
    u32 ip;
    if (sa != NULL) {
        port = HTONS(sa->unk_02);
        ip = HTONL(sa->unk_04);
    } else {
        port = 0;
        ip = port;
    }
    return SockCore_SendTo(a, b, c, port, ip, d);
}

s32 Sock_Shutdown(s32 a, s32 b, s32 c) {
    return SockCore_Shutdown(a, b, c);
}

s32 Sock_Close(s32 a, s32 b, s32 c) {
    return SockCore_Close(a, b, c);
}

Unk_ov065_02261408_Hostent *Sock_GetHostByName(s32 x) {
    u32 ip = SockCore_ResolveHost(x);
    if (ip == 0) {
        return NULL;
    }
    func_021277fc(sHostentName, x, 0x101);
    Unk_ov065_02261408_Hostent *h = &sHostent;
    h->unk_00 = sHostentName;
    h->unk_04 = NULL;
    h->unk_08 = 2;
    h->unk_0a = 4;
    h->unk_0c = sHostentAddrList;
    sHostentAddrList[0] = (char *)&sHostentAddr;
    sHostentAddrList[1] = NULL;
    sHostentAddr = HTONL(ip);
    return h;
}

s32 Sock_GetSockName(Unk_ov065_02260de4 *o, Unk_ov065_0226129c_Sa *sa) {
    u32 ip;
    u32 port;
    if (o == NULL) {
        return -0x27;
    }
    ip = SockCore_GetHostIp();
    if (o != NULL) {
        port = o->unk_74;
    } else {
        port = 0;
    }
    if (ip == 0) {
        port = 0;
    }
    sa->unk_00 = 8;
    sa->unk_01 = 2;
    sa->unk_02 = HTONS(port);
    sa->unk_04 = HTONL(ip);
    return 0;
}

u32 Sock_GetHostId() {
    return HTONL(SockCore_GetHostIp());
}

s32 Sock_SetDnsServers(u32 *a, u32 *b) {
    return SockCore_SetDnsServers(HTONL(*a), HTONL(*b));
}

s32 Sock_Listen(s32 a, s32 b, s32 c) {
    return SockCore_Listen(a, b, c);
}

s32 Sock_Accept(s32 a, Unk_ov065_0226129c_Sa *sa) {
    u16 port;
    u32 addr;
    s32 r = SockCore_Accept(a, &port, &addr);
    if (r >= 0) {
        sa->unk_02 = HTONS(port);
        sa->unk_04 = HTONL(addr);
    }
    return r;
}

s32 Sock_Fcntl(Unk_ov065_02260de4 *o, s32 cmd, u32 flags) {
    if (o == NULL) {
        return -1;
    }
    switch (cmd) {
    case 3:
        if (o->unk_72 == 1) {
            return 0;
        }
        return 4;
    case 4:
        if (flags & 4) {
            o->unk_72 = 0;
        } else {
            o->unk_72 = 1;
        }
        break;
    }
    return 0;
}

void *Sock_AllocHook(u32 sz) {
    u32 n = sz + 4;
    u32 *q = (u32 *)sSockUserAlloc(0, n);
    if (q != NULL) {
        *q = n;
        q++;
    }
    return q;
}

void Sock_FreeHook(void *p) {
    u32 *q = (u32 *)p;
    if (q != NULL) {
        q--;
        sSockUserFree(0, q, *q);
    }
}

s32 Sock_Startup(Unk_ov065_02261118_Src *s) {
    u32 t;
    Unk_ov065_02261118_Cfg *c;
    if (s->unk_0c == 1) {
        t = 1;
    } else {
        t = 0;
    }
    c = &sSockStartupConfig;
    c->unk_00 = t;
    c->unk_04 = HTONL(s->unk_10);
    c->unk_08 = HTONL(s->unk_14);
    c->unk_0c = HTONL(s->unk_18);
    c->unk_10 = HTONL(s->unk_1c);
    c->unk_14 = HTONL(s->unk_20);
    c->unk_18 = (void *)Sock_AllocHook;
    c->unk_1c = (void *)Sock_FreeHook;
    sSockUserAlloc = (Unk_ov065_02261118_Alloc)s->unk_04;
    sSockUserFree = (Unk_ov065_02261118_Free)s->unk_08;
    c->unk_20 = 0x40;
    c->unk_30 = s->unk_2c;
    c->unk_34 = s->unk_30;
    return SockCore_Startup(c);
}

s32 Sock_Cleanup() {
    return SockCore_Cleanup();
}

char *Sock_InetNtoA(u32 a, ...) {
    Sock_InetNtoP(2, (s32)&a, sInetNtoaBuf, 0x10);
    return sInetNtoaBuf;
}

s32 Sock_InetAtoN(u32 a, u32 *out) {
    u32 r = SockCore_ParseDottedAddr(a);
    if (r == 0) {
        return 0;
    }
    *out = HTONL(r);
    return 1;
}

char *Sock_InetNtoP(s32 mode, s32 x, char *buf, u32 len) {
    u8 b[8];
    if (mode != 2) {
        return NULL;
    }
    if (len < 0x10) {
        return NULL;
    }
    MI_CpuCopy8(x, b, 4);
    IpAddr_StoreBe32(*(u32 *)b, b + 4);
    OS_SNPrintf(buf, 0x10, "%d.%d.%d.%d", b[7], b[6], b[5], b[4]);
    return buf;
}

void IpAddr_StoreBe32(u32 v, u8 *p) {
    p[0] = v >> 24;
    p[1] = v >> 16;
    p[2] = v >> 8;
    p[3] = v;
}

s32 Sock_Poll(Unk_ov065_02260fa4_Ent *arr, u32 n, s64 timeout) {
    s32 cnt;
    BOOL finite = (timeout != -1) ? TRUE : FALSE;
    for (;;) {
        Unk_ov065_02260fa4_Ent *p;
        u32 i;
        p = arr;
        i = cnt = 0;
        if (i < n) {
            do {
                s32 ev = p->unk_04;
                ev |= 0xe0;
                ev &= SockCore_GetPollEvents(p->unk_00);
                if (ev != 0) {
                    cnt++;
                }
                p->unk_06 = ev;
                p++;
                i++;
            } while (i < n);
        }
        if (cnt > 0) {
            break;
        }
        if (finite && timeout <= 0) {
            break;
        }
        OS_Sleep(1);
        timeout = timeout - 0x20b;
    }
    return cnt;
}

void SockCore_AddToOpenList(Unk_ov065_02260de4 *n) {
    SockList_Push(&sSockOpenList, n);
}

void SockList_Push(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n) {
    n->unk_7c = *pp;
    *pp = n;
}

void SockCore_AddToClosedList(Unk_ov065_02260de4 *n) {
    SockList_Push(&sSockClosedList, n);
}

void SockCore_RemoveFromOpenList(Unk_ov065_02260de4 *n) {
    SockList_Remove(&sSockOpenList, n);
}

void SockList_Remove(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n) {
    Unk_ov065_02260de4 **l = SockList_Find(pp, n);
    if (l != NULL) {
        *l = n->unk_7c;
    }
}

Unk_ov065_02260de4 **SockList_Find(Unk_ov065_02260de4 **pp, Unk_ov065_02260de4 *n) {
    Unk_ov065_02260de4 *p = *pp;
    if (p != NULL) {
        do {
            if (p == n) {
                return pp;
            }
            pp = &p->unk_7c;
            p = p->unk_7c;
        } while (p != NULL);
    }
    return NULL;
}

void SockCore_RemoveFromClosedList(Unk_ov065_02260de4 *n) {
    SockList_Remove(&sSockClosedList, n);
}

s32 SockCore_IsInvalidHandle(s32 x) {
    if (x <= 0 || SockList_Find(&sSockOpenList, (Unk_ov065_02260de4 *)x) == NULL) {
        return 1;
    }
    return 0;
}

BOOL SockCore_IsInClosedList(Unk_ov065_02260de4 *n) {
    if (SockList_Find(&sSockClosedList, n) == NULL) {
        return FALSE;
    }
    return TRUE;
}

u32 SockCore_Align4(u32 x) {
    return (x + 3) & ~3;
}

u32 SockCore_GetPollEvents(Unk_ov065_02260de4 *o) {
    u32 r = 0;
    BOOL ok;
    if (SockCore_IsInvalidHandle((s32)o)) {
        r |= 0x80;
    } else {
        if (o->unk_70 & 0x40) {
            r |= 0x20;
        }
        if (o->unk_73 == 1 || (o->unk_70 & 4)) {
            s32 h = OS_DisableInterrupts();
            if (SockCore_GetRecvAvailable(o) > 0) {
                r |= 1;
            }
            if (SockCore_GetSendRingFree(o) > 0) {
                r |= 8;
            }
            OS_RestoreInterrupts(h);
        }
        ok = TRUE;
        if (o->unk_73 != 0 && o->unk_73 != 4) {
            ok = FALSE;
        }
        if (ok) {
            if ((o->unk_70 & 4) && o->unk_08 != 4 && (r & 1) == 0) {
                o->unk_70 &= ~6;
            }
            if ((o->unk_70 & 2) == 0 && (o->unk_70 & 4) == 0) {
                r |= 0x40;
            }
        }
    }
    return r;
}

s32 SockCore_GetRecvAvailable(Unk_ov065_02260de4 *o) {
    s32 r;
    Unk_ov065_02260de4_Ctx *c;
    c = o->unk_64;
    r = 0;
    if (c != NULL) {
        s32 m = o->unk_73;
        if (m == 1) {
            Unk_ov065_02260de4_Buf *b = c->unk_104;
            if (b != NULL) {
                r = b->unk_04;
            }
        } else if (m == 0 || m == 4) {
            r = o->unk_44 - c->unk_f8;
        }
    }
    return r;
}

}

}

namespace Unk_ov065_02260488_Ns {

struct Unk_ov065_02260488_Q68;
struct Unk_ov065_02260488_Q64;

struct Unk_ov065_02260488_File {
    u8 pad_00[0x0a];
    u16 unk_0a;
    u8 pad_0c[0x64 - 0x0c];
    Unk_ov065_02260488_Q64 *unk_64;
    Unk_ov065_02260488_Q68 *unk_68;
    u8 pad_6c[4];
    s16 unk_70;
    s8 unk_72;
    s8 unk_73;
    u16 unk_74;
    u16 unk_76;
    u32 unk_78;
    Unk_ov065_02260488_File *unk_7c;
};

struct Unk_ov065_02260488_Q68 {
    u8 pad_00[0x20];
    u8 unk_20[0xc0];
    u8 unk_e0[0x18];
    s32 unk_f8;
    u8 *unk_fc;
    u16 unk_100;
    u16 unk_102;
    u8 unk_104[8];
    u32 unk_10c;
};

struct Unk_ov065_02260488_Q64 {
    u8 pad_00[0x100];
    s32 unk_100;
    u32 unk_104;
    u16 unk_108;
    u8 pad_10a[2];
    u8 unk_10c[4];
};

struct Unk_ov065_02260488_Node {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0c;
    u8 unk_0d;
    u8 pad_0e[2];
    u8 *unk_10;
    s32 unk_14;
    u8 *unk_18;
    s32 unk_1c;
    u16 unk_20;
    u8 pad_22[2];
    u16 unk_24;
    u16 unk_26;
    u32 unk_28;
};

struct Unk_ov065_02260488_Msg {
    Unk_ov065_02260488_Msg *unk_00;
    Unk_ov065_02260488_File *unk_04;
    u32 unk_08;
};

struct Unk_ov065_02260488_Alloc {
    u8 pad_00[0x18];
    void *(*unk_18)(u32);
    void (*unk_1c)(void *);
    u8 pad_20[8];
    s32 unk_28;
};

typedef Unk_ov065_02260488_File File;
typedef Unk_ov065_02260488_Q68 Q68;
typedef Unk_ov065_02260488_Q64 Q64;
typedef Unk_ov065_02260488_Node Node;
typedef Unk_ov065_02260488_Alloc Alloc;

extern "C" {
u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
s32 OS_GetProcMode();
void MI_CpuCopy8(void *, void *, u32);
void MI_CpuFill8(void *, s32, u32);
void OS_SleepThread(void *);
void OS_JoinThread(void *);
void OS_DisableScheduler();
void OS_EnableScheduler();
void OSi_RescheduleThread();
s32 OS_ReceiveMessage(void *, void *, s32);
void OS_SendMessage(void *, s32, s32);
void OS_WakeupThread(void *);
void OS_Sleep(s32);
s32 OS_TryLockMutex(void *);
void OS_LockMutex(void *);
void OS_UnlockMutex(void *);

void SockCore_CmdSend();
Node *SockCore_AllocMsg(void *, u32, s32);
s32 SockCore_ExecOnSendSide(u32, Node *);
void SockCore_FreeMsg(void *);
void SockCore_PostCommand(void *, s32);
void SockCore_PostCommandAsync(void *, void *);
s32 SockCore_DestroyMsgPool();
s32 Dns_Resolve(void *);
s32 IpSoc_AllocEphemeralPort();
void IpSoc_Use(void *);
void IpSoc_Unuse();
void IpSoc_TcpShutdown();
void IpSoc_TcpWaitClosed();
void IpSoc_Release();
void IpStack_Shutdown();
void IpStack_SetIdleCallback(s32);
s32 IpStack_RequestStop();
void WifiLink_SetRecvCallback(s32);
s32 SockCore_IsInClosedList(s32);
s32 SockCore_IsInvalidHandle(void *);
void SockCore_RemoveFromClosedList(void *);
void SockCore_RemoveFromOpenList(void *);
void SockCore_AddToClosedList(void *);

extern File *sSockClosedList;
extern File *sSockOpenList;
extern File *sSockDefaultSocket;
extern Alloc *sSockCoreConfig;
extern u32 sSockLastHostIp;
extern u32 sSockCoreState;
extern u32 gOwnIp;
extern u32 sIpStackParams[];
extern u32 sDnsServers[2];

s32 SockCore_QueueSend(File *self, u8 *buf, s32 len, s32 off, u32 a5, u32 a6, s32 wait);
s32 SockCore_GetSendRingFree(File *self);
s32 SockCore_WaitSendRingSpace(File *self, s32 max, s32 want, s32 *out, s32 wait);
s32 SockCore_SendLoop(File *self, u8 *buf, s32 len, s32 a4, u32 a5, s32 wait);
s32 SockCore_SendTo(File *self, u8 *buf, s32 len, s32 a4, u32 a5, u32 a6);
s32 SockCore_CmdShutdown(Unk_ov065_02260488_Msg *m);
s32 SockCore_Shutdown(File *self);
void SockCore_FreeClosedSockets();
void SockCore_StopCommandThread(void *q);
void SockCore_Free(File *self);
s32 SockCore_CmdClose(Unk_ov065_02260488_Msg *m);
s32 SockCore_Close(File *self);
s32 SockCore_IsFreed(File *self);
s32 SockCore_TryShutdown();
s32 SockCore_CloseAllUserSockets();
s32 SockCore_Cleanup();
s32 SockCore_GetHostIp();
s32 SockCore_SetDnsServers(u32 a, u32 b);
s32 SockCore_ParseDottedAddr(void *x);
s32 SockCore_ResolveHost(void *x);
}

static inline BOOL Unk_ov065_02260488_Valid(File *p) {
    BOOL r = FALSE;
    if (p == NULL || (p->unk_70 & 1) == 0) {
    } else {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov065_02260488_Local(File *p) {
    BOOL r = TRUE;
    s32 t = p->unk_73;
    if (t != 0 && t != 4) {
        r = FALSE;
    }
    return r;
}

extern "C" {

s32 SockCore_ResolveHost(void *x) {
    u32 buf[0x64 / 4];
    if (x == NULL) {
        return 0;
    }
    void *p = sSockCoreConfig->unk_18(0x1154);
    if (p == NULL) {
        return 0;
    }
    MI_CpuFill8(buf, 0, 0x64);
    buf[0x40 / 4] = (u32)p;
    buf[0x3c / 4] = 0xb68;
    buf[0x4c / 4] = (u32)p + 0xb68;
    buf[0x48 / 4] = 0x5ea;
    IpSoc_Use(buf);
    s32 r = Dns_Resolve(x);
    IpSoc_Unuse();
    sSockCoreConfig->unk_1c(p);
    return r;
}

s32 SockCore_ParseDottedAddr(void *x) {
    u32 irq = OS_DisableInterrupts();
    u32 a = sDnsServers[0];
    u32 b = sDnsServers[1];
    sDnsServers[0] = 0;
    sDnsServers[1] = 0;
    s32 r = Dns_Resolve(x);
    sDnsServers[0] = a;
    sDnsServers[1] = b;
    OS_RestoreInterrupts(irq);
    return r;
}

s32 SockCore_SetDnsServers(u32 a, u32 b) {
    if (SockCore_GetHostIp() == 0) {
        return -0x27;
    }
    sDnsServers[0] = a;
    sDnsServers[1] = b;
    return 0;
}

s32 SockCore_GetHostIp() {
    u32 v = gOwnIp;
    if (v == 0) {
        if ((sSockCoreState & 3) == 1) {
            if (OS_GetProcMode() != 0x12) {
                OS_Sleep(10);
            }
        }
    } else if (sSockLastHostIp == 0) {
        sSockLastHostIp = v;
    }
    return gOwnIp;
}

s32 SockCore_Cleanup() {
    if (sSockLastHostIp == 0) {
        sSockLastHostIp = gOwnIp;
    }
    s32 r = SockCore_TryShutdown();
    if (r == -0x1a) {
        do {
            OS_Sleep(100);
        } while (SockCore_TryShutdown() == -0x1a);
    }
    r = SockCore_DestroyMsgPool();
    if (r >= 0) {
        IpStack_Shutdown();
        IpStack_SetIdleCallback(0);
        Alloc *a = sSockCoreConfig;
        if (a->unk_28 == 0) {
            a->unk_1c((void *)sIpStackParams[7]);
        }
        sSockCoreConfig = NULL;
    }
    return r;
}

s32 SockCore_CloseAllUserSockets() {
    File *p;
    for (;;) {
        u32 irq = OS_DisableInterrupts();
        p = sSockOpenList;
        if (p != NULL) {
            File *g = sSockDefaultSocket;
            do {
                if (p != g && (p->unk_70 & 0x10) == 0) {
                    break;
                }
                p = p->unk_7c;
            } while (p != NULL);
        }
        OS_RestoreInterrupts(irq);
        if (p == NULL) {
            break;
        }
        SockCore_Close(p);
    }
    File *q = sSockOpenList;
    if (q != NULL) {
        if (q != sSockDefaultSocket) {
            goto fail;
        }
        if (q->unk_7c != NULL) {
            goto fail;
        }
    }
    if (sSockClosedList == NULL) {
        return 0;
    }
fail:
    return -0x1a;
}

s32 SockCore_TryShutdown() {
    s32 r;
    if (sSockDefaultSocket != NULL) {
        r = SockCore_CloseAllUserSockets();
        if (r == 0) {
            SockCore_Close(sSockDefaultSocket);
            if (SockCore_IsFreed(sSockDefaultSocket)) {
                sSockDefaultSocket = NULL;
            }
            r = -0x1a;
        }
        SockCore_FreeClosedSockets();
    } else {
        if (IpStack_RequestStop()) {
            WifiLink_SetRecvCallback(0);
            r = 0;
        } else {
            r = -0x1a;
        }
    }
    return r;
}

s32 SockCore_IsFreed(File *self) {
    if ((s32)self >= 0 && SockCore_IsInvalidHandle(self) != 0 && SockCore_IsInClosedList((s32)self) == 0) {
        return TRUE;
    }
    return FALSE;
}

s32 SockCore_Close(File *self) {
    if ((s32)self <= 0) {
        return -0x1c;
    }
    if (SockCore_IsInClosedList((s32)self)) {
        return -0x1a;
    }
    if (SockCore_IsInvalidHandle(self)) {
        return 0;
    }
    if (!Unk_ov065_02260488_Valid(self)) {
        return -0x27;
    }
    if ((*(volatile s16 *)&self->unk_70 & 0x10) != 0) {
        return -0x1a;
    }
    self->unk_70 = *(volatile s16 *)&self->unk_70 | 0x18;
    if (Unk_ov065_02260488_Local(self)) {
        SockCore_PostCommand(self->unk_68, 0);
    }
    Node *n = SockCore_AllocMsg((void *)SockCore_CmdClose, (u32)self, 1);
    s32 z = 0;
    n->unk_08 = z;
    SockCore_PostCommandAsync(self, n);
    return z;
}

s32 SockCore_CmdClose(Unk_ov065_02260488_Msg *m) {
    File *f = m->unk_04;
    if (Unk_ov065_02260488_Local(f)) {
        OS_JoinThread(f->unk_68->unk_20);
        IpSoc_TcpShutdown();
        IpSoc_TcpWaitClosed();
        IpSoc_Release();
    }
    IpSoc_Unuse();
    f->unk_70 = f->unk_70 & ~6;
    void *x;
    if (f->unk_73 == 2) {
        x = f->unk_68;
    } else {
        x = f->unk_64;
    }
    SockCore_PostCommand(x, 0);
    u32 irq = OS_DisableInterrupts();
    SockCore_RemoveFromOpenList(f);
    SockCore_AddToClosedList(f);
    OS_RestoreInterrupts(irq);
    f->unk_70 = f->unk_70 | 0x20;
    return 0;
}

void SockCore_Free(File *self) {
    if (self != NULL) {
        self->unk_70 = 0;
        BOOL local = Unk_ov065_02260488_Local(self);
        if (local) {
            SockCore_StopCommandThread(self->unk_68);
            SockCore_StopCommandThread(self->unk_64);
        } else if (self->unk_73 == 1) {
            Unk_ov065_02260488_Msg *p = (Unk_ov065_02260488_Msg *)self->unk_64->unk_104;
            if (p != NULL) {
                do {
                    Unk_ov065_02260488_Msg *next = p->unk_00;
                    sSockCoreConfig->unk_1c(p);
                    p = next;
                } while (p != NULL);
            }
            self->unk_64->unk_108 = 0;
            self->unk_64->unk_100 = 0;
            self->unk_64->unk_104 = 0;
            OS_WakeupThread(self->unk_64->unk_10c);
            SockCore_StopCommandThread(self->unk_64);
        } else if (self->unk_73 == 2) {
            SockCore_StopCommandThread(self->unk_68);
        }
        u32 irq = OS_DisableInterrupts();
        SockCore_RemoveFromOpenList(self);
        SockCore_RemoveFromClosedList(self);
        sSockCoreConfig->unk_1c(self);
        OS_RestoreInterrupts(irq);
    }
}

void SockCore_StopCommandThread(void *q) {
    if (q != NULL) {
        void *msg;
        OS_JoinThread((u8 *)q + 0x20);
        u32 irq = OS_DisableInterrupts();
        OS_DisableScheduler();
        if (OS_ReceiveMessage(q, &msg, 0)) {
            do {
                if (msg != NULL) {
                    if (((Unk_ov065_02260488_Msg *)msg)->unk_08 != 0) {
                        OS_SendMessage((void *)((Unk_ov065_02260488_Msg *)msg)->unk_08, -0xb, 0);
                    }
                    SockCore_FreeMsg(msg);
                }
            } while (OS_ReceiveMessage(q, &msg, 0));
        }
        OS_EnableScheduler();
        OS_RestoreInterrupts(irq);
        OSi_RescheduleThread();
    }
}

void SockCore_FreeClosedSockets() {
    u32 irq = OS_DisableInterrupts();
    File *p = sSockClosedList;
    if (p != NULL) {
        do {
            SockCore_Free(p);
            p = sSockClosedList;
        } while (p != NULL);
    }
    OS_RestoreInterrupts(irq);
}

s32 SockCore_Shutdown(File *self) {
    if (SockCore_IsInvalidHandle(self)) {
        return -0x1c;
    }
    BOOL v = Unk_ov065_02260488_Valid(self);
    if (!v) {
        return -0x27;
    }
    if ((*(volatile s16 *)&self->unk_70 & 4) == 0 || (*(volatile s16 *)&self->unk_70 & 8) != 0) {
        return -0x38;
    }
    self->unk_70 = self->unk_70 | 8;
    Q68 *q = self->unk_68;
    if (q != NULL && q->unk_10c != 0) {
        Node *n = SockCore_AllocMsg((void *)SockCore_CmdShutdown, q->unk_10c, self->unk_72);
        if (n == NULL) {
            return -0x21;
        }
        return SockCore_ExecOnSendSide(q->unk_10c, n);
    }
    return 0;
}

s32 SockCore_CmdShutdown(Unk_ov065_02260488_Msg *m) {
    if (Unk_ov065_02260488_Local(m->unk_04)) {
        IpSoc_TcpShutdown();
    }
    return 0;
}

s32 SockCore_SendTo(File *self, u8 *buf, s32 len, s32 a4, u32 a5, u32 a6) {
    Q68 *q;
    s32 flag;
    if (SockCore_IsInvalidHandle(self)) {
        return -0x1c;
    }
    BOOL v = Unk_ov065_02260488_Valid(self);
    if (!v) {
        return -0x27;
    }
    if (Unk_ov065_02260488_Local(self)) {
        if ((*(volatile s16 *)&self->unk_70 & 4) == 0 || (*(volatile s16 *)&self->unk_70 & 8) != 0) {
            return -0x38;
        }
    }
    q = self->unk_68;
    if ((a6 & 4) != 0 || self->unk_72 == 0) {
        if (!OS_TryLockMutex(q->unk_e0)) {
            return -6;
        }
        flag = 0;
    } else {
        OS_LockMutex(q->unk_e0);
        flag = 1;
    }
    s32 r = SockCore_SendLoop(self, buf, len, a4, a5, flag);
    OS_UnlockMutex(q->unk_e0);
    return r;
}

s32 SockCore_SendLoop(File *self, u8 *buf, s32 len, s32 a4, u32 a5, s32 wait) {
    s32 lim, total, off;
    total = 0;
    lim = self->unk_68->unk_10c;
    lim = ((u32 *)lim)[0x48 / 4];
    if (self->unk_73 == 1) {
        lim -= 0x2a;
        if (len > lim) {
            return -0x23;
        }
        lim = len;
    } else {
        lim -= 0x36;
        if (len <= lim) {
            lim = len;
        }
    }
    if (len > 0) {
        for (;;) {
            s32 n = SockCore_WaitSendRingSpace(self, len, lim, &off, wait);
            if (n > 0) {
                if (SockCore_QueueSend(self, buf, n, off, a4, a5, wait) <= 0) {
                    return -6;
                }
                buf += n;
                len -= n;
                total += n;
            }
            if (wait == 0) {
                if (n > 0) {
                    break;
                }
                return -6;
            }
            if (len <= 0) {
                break;
            }
        }
    }
    return total;
}

s32 SockCore_WaitSendRingSpace(File *self, s32 max, s32 want, s32 *out, s32 wait) {
    Q68 *q = self->unk_68;
    s32 avail;
    if (want > max) {
        want = max;
    }
    u32 irq = OS_DisableInterrupts();
    for (;;) {
        avail = SockCore_GetSendRingFree(self);
        if (avail >= want) {
            if (avail >= max) {
                avail = max;
            }
            *out = q->unk_100;
            break;
        }
        if (wait == 0) {
            avail = 0;
            break;
        }
        OS_SleepThread(q->unk_104);
    }
    OS_RestoreInterrupts(irq);
    return avail;
}

s32 SockCore_GetSendRingFree(File *self) {
    Q68 *q = self->unk_68;
    s32 size = q->unk_f8;
    s32 a = *(volatile u16 *)&q->unk_100;
    s32 b = *(volatile u16 *)&q->unk_102;
    s32 r = b - a - 1;
    if (r < 0) {
        r += size;
    }
    return r;
}

s32 SockCore_QueueSend(File *self, u8 *buf, s32 len, s32 off, u32 a5, u32 a6, s32 wait) {
    Q68 *q = self->unk_68;
    Node *n = SockCore_AllocMsg((void *)SockCore_CmdSend, q->unk_10c, wait);
    if (n == NULL) {
        return -0x21;
    }
    n->unk_0d = 0;
    u8 *base = q->unk_fc;
    s32 size = q->unk_f8;
    s32 end = off + len;
    if (end < size) {
        n->unk_10 = base + off;
        n->unk_14 = len;
        n->unk_18 = 0;
        n->unk_1c = 0;
        off = end;
    } else {
        n->unk_10 = base + off;
        n->unk_14 = size - off;
        n->unk_18 = base;
        n->unk_1c = len - n->unk_14;
        off = n->unk_1c;
        MI_CpuCopy8(buf + n->unk_14, n->unk_18, off);
    }
    MI_CpuCopy8(buf, n->unk_10, n->unk_14);
    u16 *p = &q->unk_100;
    u32 saved = *p;
    n->unk_20 = off;
    *p = n->unk_20;
    if (self->unk_73 == 1) {
        if (self->unk_74 == 0) {
            self->unk_74 = IpSoc_AllocEphemeralPort();
            self->unk_0a = self->unk_74;
        }
        n->unk_24 = self->unk_74;
        u32 w = self->unk_78;
        if (w == 0 || a6 != 0) {
            n->unk_28 = a6;
            n->unk_26 = *(u16 *)&a5;
        } else {
            n->unk_28 = w;
            n->unk_26 = self->unk_76;
        }
    } else {
        n->unk_28 = 0;
    }
    if (SockCore_ExecOnSendSide(q->unk_10c, n)) {
        q->unk_100 = saved;
        len = 0;
    }
    return len;
}

}

}

namespace Unk_ov065_0225faf4_Ns {

struct Unk_ov065_0225faf4_Node {
    Unk_ov065_0225faf4_Node *next;
    u16 len;
    u16 unk_06;
    u32 unk_08;
    u8 data[4];
};

struct Unk_ov065_0225faf4_Alloc {
    void *pad[6];
    Unk_ov065_0225faf4_Node *(*alloc)(u32);
    void (*free)(void *);
};

struct Unk_ov065_0225faf4_Sess;

struct Unk_ov065_0225faf4_Ctx {
    u8 pad_00[0xc4];
    Unk_ov065_0225faf4_Sess *cur;
    u8 pad_c8[0x18];
    u8 mutex[0x18];
    s32 pos;
    u16 limit;
    s8 lock;
    u8 pad_ff;
    Unk_ov065_0225faf4_Node *volatile tail;
    Unk_ov065_0225faf4_Node *head;
    u16 used;
    u16 cap;
    u8 queue[4];
};

struct Unk_ov065_022603bc_Rx {
    u8 pad_00[0x102];
    u16 unk_102;
    u8 pad_104[4];
};

struct Unk_ov065_0225faf4_Sess {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 pad_09;
    u16 unk_0a;
    u8 pad_0c[0xc];
    u16 unk_18;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u8 pad_24[0x1c];
    u8 *unk_40;
    s32 unk_44;
    s32 unk_48;
    u8 *unk_4c;
    u8 pad_50[0x14];
    Unk_ov065_0225faf4_Ctx *ctx;
    Unk_ov065_022603bc_Rx *rx;
    s32 unk_6c;
    volatile s16 flags;
    s8 unk_72;
    s8 state;
    u16 unk_74;
    u16 unk_76;
    u32 unk_78;
};

typedef Unk_ov065_0225faf4_Node Node;
typedef Unk_ov065_0225faf4_Sess Sess;
typedef Unk_ov065_0225faf4_Ctx Ctx;
typedef Unk_ov065_022603bc_Rx Rx;

struct Unk_ov065_0225faf4_Job {
    u32 unk_00;
    Sess *sess;
    u32 unk_08;
    s8 unk_0c;
    u8 pad_0d[3];
    u16 unk_10;
    u16 unk_12;
    void *unk_14;
};

struct Unk_ov065_0225ff64_Job {
    u32 unk_00;
    Sess *sess;
    u8 pad_08[8];
    u8 *unk_10;
    u32 unk_14;
    u16 *unk_18;
    u32 *unk_1c;
};

struct Unk_ov065_022603bc_Job {
    u32 unk_00;
    Sess *sess;
    u8 pad_08[8];
    u8 *unk_10;
    s32 unk_14;
    u8 *unk_18;
    s32 unk_1c;
    u16 unk_20;
    u8 pad_22[2];
    u16 unk_24;
    u16 unk_26;
    void *unk_28;
};

typedef Unk_ov065_0225faf4_Job Job;
typedef Unk_ov065_0225ff64_Job RJob;
typedef Unk_ov065_022603bc_Job WJob;

struct Unk_ov065_0225fd18_Counters {
    u32 unk_00;
    u32 unk_04;
};

extern "C" {
extern s32 sSockConnectInProgressError;
extern Unk_ov065_0225faf4_Alloc *sSockCoreConfig;
extern Unk_ov065_0225fd18_Counters sSockUdpDropCount;

u32 OS_DisableInterrupts(...);
void OS_RestoreInterrupts(u32 v);
s32 OS_GetProcMode();
void OS_Sleep(s32 v);
void OS_SleepThread(void *q);
void OS_WakeupThread(void *q);
s32 OS_TryLockMutex(void *m);
void OS_UnlockMutex(void *m);
void OS_LockMutex(void *m);
void MI_CpuCopy8(const void *src, void *dst, u32 n);

s32 SockCore_ExecOnRecvSide(Sess *s, void *m);
u32 SockCore_AllocMsg(void *fn, void *s, s32 idx);
s32 SockCore_IsInvalidHandle(Sess *s);
void IpSoc_Bind(u16 a, u16 b, void *c);
s32 IpSoc_TcpConnect();
void IpSoc_Consume(s32 n);
u8 *IpSoc_Read(u32 *out);
s32 IpSoc_Write(u8 *p, s32 n);

s32 SockCore_CmdConnect(Job *j);
s32 SockCore_PostConnect(Sess *s);
s32 SockCore_Connect(Sess *s, u16 a, u32 b);
s32 SockCore_Bind(Sess *s, u16 a);
s32 SockCore_OnUdpReceive(void *data, u32 len, Sess *s);
s32 SockCore_RecvDatagram(Sess *s, u8 *dst, s32 max, u16 *o1, u32 *o2, s32 block);
s32 SockCore_ConsumeRecvData(Sess *s);
s32 SockCore_CmdConsume(Job *j);
s32 SockCore_RequestConsume(Sess *s);
s32 SockCore_CmdRecvWait(RJob *j);
s32 SockCore_PostRecvWait(Sess *s, u8 *a, s32 b, u16 *c, u32 *d);
u8 *SockCore_PeekStreamData(Sess *s, s32 *outlen, u16 *a, u16 *b, u32 *c);
s32 SockCore_RecvStreamData(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb);
s32 SockCore_RecvStream(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e);
s32 SockCore_RecvLocked(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e, s32 f);
s32 SockCore_RecvFrom(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e);
s32 SockCore_CopySendChunk(u8 *buf, s32 n, WJob *j);
s32 SockCore_CmdSend(WJob *j);
}

static inline Unk_ov065_0225faf4_Job *AllocJob(void *fn, Sess *s, s32 i)
{
    return (Unk_ov065_0225faf4_Job *)SockCore_AllocMsg(fn, s, i);
}

static inline BOOL IsIdle(Sess *s)
{
    BOOL r = TRUE;
    if (s->state != 0 && s->state != 4) {
        r = FALSE;
    }
    return r;
}

static inline BOOL IsValid(Sess *s)
{
    BOOL r = FALSE;
    if (s == NULL || !(s->flags & 1)) {
    } else {
        r = TRUE;
    }
    return r;
}

extern "C" {

s32 SockCore_CmdSend(WJob *j)
{
    Sess *s = j->sess;
    Rx *rx = s->rx;
    u8 *buf;
    s32 r = 0;
    s32 off;
    s32 room;
    s32 k;
    s32 m;

    if (!IsIdle(s) || (s->flags & 4)) {
        if (j->unk_28 != NULL) {
            IpSoc_Bind(j->unk_24, j->unk_26, j->unk_28);
        }
        if (IsIdle(s)) {
            off = 0x36;
        } else {
            off = 0x2a;
        }
        buf = s->unk_4c + off;
        room = s->unk_48 - off;
        for (;;) {
            k = SockCore_CopySendChunk(buf, room, j);
            if (k <= 0) {
                break;
            }
            m = IpSoc_Write(buf, k);
            if (m > 0) {
                goto addm;
            }
            if (IsIdle(s)) {
                s->flags &= ~0xe;
            }
            r = -0x4c;
            break;
        addm:
            r += m;
        }
    } else {
        r = -0x4c;
    }
    rx->unk_102 = j->unk_20;
    OS_WakeupThread((u8 *)rx + 0x104);
    return r;
}

s32 SockCore_CopySendChunk(u8 *buf, s32 n, WJob *j)
{
    s32 a = j->unk_14;
    s32 b = j->unk_1c;
    if (a > n) {
        a = n;
        b = 0;
    } else if (b > n - a) {
        b = n - a;
    }
    if (a > 0) {
        MI_CpuCopy8(j->unk_10, buf, a);
        j->unk_10 += a;
        j->unk_14 -= a;
    }
    if (b > 0) {
        MI_CpuCopy8(j->unk_18, buf + a, b);
        j->unk_18 += b;
        j->unk_1c -= b;
    }
    return a + b;
}

s32 SockCore_RecvFrom(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e)
{
    s32 blk;
    s32 r;
    Ctx *c;

    if (SockCore_IsInvalidHandle(s) != 0) {
        return -0x1c;
    }
    if ((e & 4) || s->unk_72 == 0) {
        if (s->state == 4) {
            return -0x1c;
        }
        blk = 0;
    } else {
        if (OS_GetProcMode() == 0x12) {
            return -0x1c;
        }
        blk = 1;
    }
    if (!IsValid(s)) {
        return -0x27;
    }
    if (IsIdle(s)) {
        if (!(s->flags & 4) || (s->flags & 8)) {
            return -0x38;
        }
    }
    c = s->ctx;
    if (blk == 0) {
        if (OS_TryLockMutex(c->mutex) == 0) {
            return -6;
        }
    } else {
        OS_LockMutex(c->mutex);
    }
    r = SockCore_RecvLocked(s, buf, n, pa, pb, blk, e);
    OS_UnlockMutex(c->mutex);
    return r;
}

s32 SockCore_RecvLocked(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e, s32 f)
{
    Ctx *c = s->ctx;
    BOOL lock;
    s8 saved;
    s32 res;

    if ((f & 2) && c) {
        lock = TRUE;
    } else {
        lock = FALSE;
    }
    if (lock) {
        saved = c->lock;
        c->lock = 1;
    }
    if (s->state == 1) {
        res = SockCore_RecvDatagram(s, buf, n, pa, pb, e);
    } else {
        res = SockCore_RecvStream(s, buf, n, pa, pb, e);
        if (res >= 0) {
            SockCore_RequestConsume(s);
        }
    }
    if (lock) {
        c->lock = saved;
    }
    return res;
}

s32 SockCore_RecvStream(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb, s32 e)
{
    s32 r;
    if (s->state == 4) {
        return SockCore_PostRecvWait(s, buf, n, pa, pb);
    }
    r = SockCore_RecvStreamData(s, buf, n, pa, pb);
    if (r == -6 && e == 1) {
        r = SockCore_PostRecvWait(s, buf, n, pa, pb);
    }
    return r;
}

s32 SockCore_RecvStreamData(Sess *s, u8 *buf, s32 n, u16 *pa, u32 *pb)
{
    u32 irq = OS_DisableInterrupts();
    u16 v[2];
    s32 outlen;
    u32 c;
    s32 r;
    u8 *src;

    src = SockCore_PeekStreamData(s, &outlen, &v[0], &v[1], &c);
    if (src != NULL) {
        r = outlen;
        if (r == 0) {
            r = -6;
        } else {
            if (n > r) {
                n = r;
            }
            if (IsIdle(s)) {
                r = n;
            }
            MI_CpuCopy8(src, buf, n);
            if (s->ctx->lock == 0) {
                s->ctx->pos = s->ctx->pos + r;
            }
        }
    } else {
        if (outlen == 0) {
            r = 0;
        } else {
            r = -0x1c;
        }
        s->flags &= ~6;
    }
    if (r >= 0) {
        if (pa != NULL && pb != NULL) {
            *pa = v[1];
            *pb = c;
        }
        if (s->unk_74 == 0) {
            s->unk_74 = v[0];
        }
    }
    OS_RestoreInterrupts(irq);
    return r;
}

u8 *SockCore_PeekStreamData(Sess *s, s32 *outlen, u16 *a, u16 *b, u32 *c)
{
    Ctx *ctx = s->ctx;
    Sess *e = ctx->cur;
    s32 pos = ctx->pos;
    s32 d = e->unk_44 - pos;
    if (d >= 0) {
        *a = e->unk_0a;
        *b = e->unk_18;
        *c = e->unk_1c;
        *outlen = d;
        if (d == 0 && e->unk_08 != 4) {
            return NULL;
        }
    } else {
        *outlen = -1;
        return NULL;
    }
    return e->unk_40 + pos;
}

s32 SockCore_PostRecvWait(Sess *s, u8 *a, s32 b, u16 *c, u32 *d)
{
    RJob *j = (RJob *)AllocJob((void *)SockCore_CmdRecvWait, s, 1);
    j->unk_10 = a;
    j->unk_14 = b;
    j->unk_18 = c;
    j->unk_1c = d;
    return SockCore_ExecOnRecvSide(s, j);
}

s32 SockCore_CmdRecvWait(RJob *j)
{
    Sess *s = j->sess;
    Ctx *c = s->ctx;
    u8 *dst = j->unk_10;
    u32 n = j->unk_14;
    u16 *pa = j->unk_18;
    u32 *pb = j->unk_1c;
    s32 pos = c->pos;
    u8 *src;
    u32 x;

    for (;;) {
        src = IpSoc_Read(&x);
        if (src == NULL) {
            break;
        }
        if ((s32)(x - pos) > 0) {
            break;
        }
        if (IsIdle(s)) {
            if (s->unk_08 != 4) {
                src = NULL;
                break;
            }
        }
        OS_Sleep(10);
    }
    if (s->state == 4) {
        if (src == NULL) {
            return 0;
        }
        if (n > x) {
            n = x;
        }
        MI_CpuCopy8(src, dst, n);
        IpSoc_Consume(n);
        return n;
    }
    if (src != NULL) {
        pos = SockCore_RecvStreamData(s, dst, n, pa, pb);
    } else {
        pos = 0;
    }
    if (pos <= 0) {
        return pos;
    }
    if (c->pos >= c->limit) {
        SockCore_ConsumeRecvData(s);
    }
    return pos;
}

s32 SockCore_RequestConsume(Sess *s)
{
    Ctx *c = s->ctx;
    if (c->pos < c->limit) {
        return 0;
    }
    Job *j = AllocJob((void *)SockCore_CmdConsume, s, 0);
    if (j == NULL) {
        return -0x21;
    }
    return SockCore_ExecOnRecvSide(s, j);
}

s32 SockCore_CmdConsume(Job *j)
{
    return SockCore_ConsumeRecvData(j->sess);
}

s32 SockCore_ConsumeRecvData(Sess *s)
{
    Ctx *c = s->ctx;
    u32 irq = OS_DisableInterrupts();
    s32 v = c->pos;
    if (v != 0) {
        c->pos = 0;
        IpSoc_Consume(v);
    }
    OS_RestoreInterrupts(irq);
    return v;
}

s32 SockCore_RecvDatagram(Sess *s, u8 *dst, s32 max, u16 *o1, u32 *o2, s32 block)
{
    u32 irq;
    s32 err;
    Ctx *c = s->ctx;
    Node *n;

    irq = OS_DisableInterrupts(c->head);
    n = c->head;
    while (n == NULL) {
        if (block == 0) {
            err = -6;
            break;
        }
        OS_SleepThread(c->queue);
        if (SockCore_IsInvalidHandle(s) != 0 || !IsValid(s)) {
            err = -0x37 - 1;
            break;
        }
        n = c->head;
    }
    if (n != NULL) {
        if (max > n->len) {
            max = n->len;
        }
        MI_CpuCopy8(n->data, dst, max);
        if (o1 != NULL) {
            *o1 = n->unk_06;
        }
        if (o2 != NULL) {
            *o2 = n->unk_08;
        }
        err = n->len;
        if (c->lock == 0) {
            c->head = n->next;
            if (n->next == NULL) {
                c->tail = NULL;
            }
            sSockCoreConfig->free(n);
            c->used = c->used - err;
        }
    }
    OS_RestoreInterrupts(irq);
    return err;
}

}

}
