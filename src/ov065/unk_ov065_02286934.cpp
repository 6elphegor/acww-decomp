// mwcc-flags: -O4,p -str reuse

#include "types.h"
#include "net/Unk_ov065_022786bc_Vec.h"
#include "net/GsInAddr.h"
#include "net/GsNatNeg.h"
#include "net/Unk_ov065_02286f04_Hostent.h"
#include "net/Unk_ov065_022871ac_List.h"
#include "net/Unk_ov065_02287200_Sa.h"
#include "net/GsQr.h"
#include "net/GsBytes.h"




namespace N022868b0 {
extern "C" {


// ov065_063: GameSpy NAT negotiation client (0x022868b0..0x022871ac)

#define SWAP32(x) ((((x) << 24) & 0xff000000) | ((((x) << 8) & 0xff0000) | ((((x) >> 24) & 0xff) | (((x) >> 8) & 0xff00))))
#define SWAP16(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))












extern "C" {
extern s32 data_ov065_02291504;
extern char data_ov065_02291508[];



extern u8 data_ov065_0228e16c[];



extern char sGsGameName[];
extern s32 sGsAvailStatus;
extern u32 data_ov065_02291534;
extern u32 data_ov065_02291538;
extern u32 sGsNatNegServer2;
extern u32 sGsNatNegServer1;
extern void *sGsNatNegList;
extern u8 data_ov065_02291548[];

s32 OS_SPrintf(char *buf, const char *fmt, ...);
s32 OS_SNPrintf(char *buf, s32 n, const char *fmt, ...);
char *func_02127838(char *dst, const char *src);
u32 STD_GetStringLength(const char *s);

char *Sock_InetNtoA(GsInAddr a);
Unk_ov065_02286f04_Hostent *Sock_GetHostByName(const char *name);
s32 GsArray_At(void *list, s32 i);
s32 GsArray_Count(void *list);
s32 GsSock_InetAddr(const char *s);
s32 GsSock_GetSockName(s32 fd, Unk_ov065_02286c74_Sa *sa, s32 *len);
s32 GsSock_RecvFrom(s32 fd, void *buf, s32 n, s32 flags, Unk_ov065_02286c74_Sa *from, s32 *len);
s32 GsSock_Close(s32 fd);
s32 GsSock_Socket(s32 a, s32 b, s32 c);
Unk_ov065_022871ac_List *GsSock_GetLocalHost();
s32 GsSock_IsPrivateAddress(void *p);
s32 GsSock_CanRead(s32 fd);
u32 GsUtil_GetTimeMs();
s32 GsNatNeg_HasMagic();
s32 GsNatNeg_SendTo(s32 fd, u32 addr, u32 port, void *buf, s32 len);
s32 GsNatNeg_Remove(GsNatNegotiator *ctx);
s32 GsNatNeg_Add();
GsNatNegotiator *GsNatNeg_FindByCookie(u32 cookie);

u32 GsNatNeg_GetLocalIp();
u32 GsNatNeg_GetLocalPort(s32 fd);
void GsNatNeg_SendInit(GsNatNegotiator *ctx);
void GsNatNeg_SendPeerPing(GsNatNegotiator *ctx);
u32 GsNatNeg_ResolveHost(const char *name);
u32 GsNatNeg_ResolveServer(const char *name, const char *s);
s32 GsNatNeg_ResolveServers();
void GsNatNeg_Cancel(u32 cookie);
void GsNatNeg_Process(GsNatNegotiator *ctx);
void GsNatNeg_SendConnectAck(GsNatNegotiator *ctx, Unk_ov065_02286c74_Sa *sa);
void GsNatNeg_HandleConnect(GsNatNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void GsNatNeg_HandlePeerPing(GsNatNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void GsNatNeg_HandleServerReply(GsNatNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void GsNatNeg_HandlePacket(u8 *pkt, s32 len, Unk_ov065_02286c74_Sa *sa);
}


















}
}

namespace N02287200 {
extern "C" {


// ov065_064: GameSpy query-and-report style (0xfe 0xfd packets) server object helpers (0x02287200..0x02287aa4)









typedef GsQrContext Qr;
typedef GsQrBuffer Buf;
typedef GsNatNegotiator Ent;
typedef Unk_ov065_022786bc_Vec Vec;

extern "C" {
extern u8 data_ov065_0228e16c[];
extern Qr *sGsQrDefault;
extern u8 data_ov065_0228e1b8[];
extern char data_ov065_0228e2d0[];
extern char data_ov065_0228e2dc[];
extern char data_ov065_0228e2e8[];
extern char data_ov065_0228e2f0[];
extern char data_ov065_0228e2f4[];
extern char data_ov065_0228e2f8[];
extern char data_ov065_0228e308[];
extern char data_ov065_0228e314[];
extern char data_ov065_0228e320[];
extern char data_ov065_0228e32c[];
extern char data_ov065_0228e340[];
extern char data_ov065_0228e348[];
extern char data_ov065_0228e34c[];
extern char *gGsKeyNames[];
extern Vec *sGsNatNegList;
extern s32 sGsQrLocalAddrCount;
extern u32 sGsQrLocalAddrs[];

s32 memcmp(const void *, const void *, s32);
void memcpy(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 GsSock_SendTo(s32, void *, s32, s32, void *, s32);
s32 GsSock_Close(s32);
s32 GsUtil_GetTimeMs(void);
void GsArray_Free(Vec *);
s32 GsArray_Count(Vec *);
void *GsArray_At(Vec *, s32);
void GsArray_Append(Vec *, void *);
void GsArray_RemoveAt(Vec *, s32);
Vec *GsArray_New(s32, s32, void *);
char *Sock_InetNtoA(GsInAddr);
void GsQr_BeginPacket(Buf *, s32, u8 *);
void GsQr_BufAppendString(Buf *, const char *);
void GsQr_BufAppendInt(Buf *, s32);
void GsQr_AppendAllKeyValues(Qr *, Buf *, u32, u8 *, u32, u8 *, u32, u8 *);
void GsQr_ParsePublicAddress(Qr *, u8 *);
void GsQr_AppendChallengeResponse(Qr *, Buf *, u8 *, s32);

void GsNatNeg_FreeEntry(Ent *e);
void GsQr_AppendQr1Keys(Qr *q, Buf *buf, s32 kind);
void GsQr_BuildQr1Reply(Qr *q, Buf *buf);
BOOL GsQr_IsDuplicateMessage(Qr *q, u32 v);
void GsQr_HandleClientMessage(Qr *q, u8 *p, s32 n);
void GsQr_HandleQuery(Qr *q, Buf *buf, u8 *p, s32 n);

#define HTONS(x) ((u16)((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00)))
#define HTONL(x) (((x) >> 24 & 0xff) | ((x) >> 8 & 0xff00) | ((x) << 8 & 0xff0000) | ((x) << 24 & 0xff000000))
















}

}
}

extern "C" { u32 data_ov065_02291538; } //@
extern "C" { void *sGsNatNegList; } //@
namespace N02287200 { extern "C" {
Ent *GsNatNeg_FindByCookie(s32 x) {
    s32 i;
    Ent *e;
    if (sGsNatNegList == NULL) {
        return NULL;
    }
    for (i = 0; i < GsArray_Count(sGsNatNegList); i++) {
        e = (Ent *)GsArray_At(sGsNatNegList, i);
        if (e->cookie == x) {
            return e;
        }
    }
    return NULL;
}
} }

namespace N02287200 { extern "C" {
void GsNatNeg_FreeEntry(Ent *e) {
    if (e->negSock != -1) {
        GsSock_Close(e->negSock);
    }
    e->negSock = -1;
    e->state = 4;
}
} }

extern "C" { u32 sGsNatNegServer1; } //@
namespace N02287200 { extern "C" {
void *GsNatNeg_Add(void) {
    Ent z = {0};
    if (sGsNatNegList == NULL) {
        sGsNatNegList = GsArray_New(0x40, 4, (void *)GsNatNeg_FreeEntry);
    }
    GsArray_Append(sGsNatNegList, &z);
    return GsArray_At(sGsNatNegList, GsArray_Count(sGsNatNegList) - 1);
}
} }

namespace N02287200 { extern "C" {
void GsNatNeg_Remove(void *key) {
    s32 i;
    for (i = 0; i < GsArray_Count(sGsNatNegList); i++) {
        if (key == GsArray_At(sGsNatNegList, i)) {
            GsArray_RemoveAt(sGsNatNegList, i);
            return;
        }
    }
}
} }

namespace N02287200 { extern "C" {
void GsNatNeg_FreeAll(void) {
    if (sGsNatNegList != NULL) {
        GsArray_Free(sGsNatNegList);
        sGsNatNegList = NULL;
    }
}
} }

namespace N02287200 { extern "C" {
BOOL GsNatNeg_HasMagic(void *p) {
    if (memcmp(p, data_ov065_0228e16c, 6) == 0) {
        return TRUE;
    }
    return FALSE;
}
} }

extern "C" { u8 data_ov065_02291548[0x200]; } //@
namespace N02287200 { extern "C" {
s32 GsNatNeg_SendTo(s32 sock, u32 ip, s32 port, void *buf, s32 len) {
    Unk_ov065_02287200_Sa sa;
    sa.family = 2;
    sa.port = HTONS(port);
    sa.addr = ip;
    return GsSock_SendTo(sock, buf, len, 0, &sa, 8);
}
} }

namespace N022868b0 { extern "C" {
extern "C" u32 GsNatNeg_GetLocalIp() {
    u32 r = 0;
    Unk_ov065_022871ac_List *list = GsSock_GetLocalHost();
    if (list == NULL) {
        return r;
    }
    // in_addr.s_addr is unsigned long, the result is unsigned int: the long->int copy is not propagated
    s32 i;
    unsigned long *e;
    for (i = 0;; i++) {
        e = ((unsigned long **)list->addrList)[i];
        if (e == NULL) {
            break;
        }
        if (*e == 0x100007f) {
            continue;
        }
        r = *e;
        if (GsSock_IsPrivateAddress(e) != 0) {
            return r;
        }
    }
    return r;
}
} }

extern "C" u8 data_ov065_0228e16c[6] = {0xfd, 0xfc, 0x1e, 0x66, 0x6a, 0xb2}; //@
namespace N022868b0 { extern "C" {
extern "C" u32 GsNatNeg_GetLocalPort(s32 fd) {
    Unk_ov065_02286c74_Sa sa;
    s32 len = 8;
    s32 r = GsSock_GetSockName(fd, &sa, &len);
    u32 port = 0;
    if (r != -1) {
        port = sa.port;
    }
    return port;
}
} }

namespace N022868b0 { extern "C" {
extern "C" void GsNatNeg_SendInit(GsNatNegotiator *ctx) {
    GsNatNegInitPacket pkt;
    u8 *p = (u8 *)&pkt;
    const u8 *m = (const u8 *)data_ov065_0228e16c;
    p[0] = m[0];
    p[1] = m[1];
    p[2] = m[2];
    p[3] = m[3];
    p[4] = m[4];
    p[5] = m[5];
    p[6] = 2;
    p[7] = 0;
    p[0xd] = ctx->clientIndex;
    u32 c = ctx->cookie;
    *(u32 *)(p + 8) = SWAP32(c);
    u8 flag = 0;
    if (ctx->gameSock != -1) {
        flag = 1;
    }
    p[0xe] = flag;
    u32 ip = SWAP32(GsNatNeg_GetLocalIp());
    pkt.localIp0 = ip >> 24;
    pkt.localIp1 = ip >> 16;
    pkt.localIp2 = ip >> 8;
    pkt.localIp3 = ip;
    pkt.localPortHi = 0;
    pkt.localPortLo = 0;
    func_02127838(pkt.name, sGsGameName);
    s32 len = STD_GetStringLength(sGsGameName) + 0x16;
    if (p[0xe] != 0 && ctx->initAcked[0] == 0) {
        p[0xc] = 0;
        GsNatNeg_SendTo(ctx->gameSock, sGsNatNegServer1, 0x6cfd, p, len);
    }
    if (ctx->initAcked[1] == 0) {
        p[0xc] = 1;
        GsNatNeg_SendTo(ctx->negSock, sGsNatNegServer1, 0x6cfd, p, len);
    }
    s32 port = SWAP16((s32)GsNatNeg_GetLocalPort(p[0xe] != 0 ? ctx->gameSock : ctx->negSock));
    port = (u16)port;
    pkt.localPortHi = port >> 8;
    pkt.localPortLo = port;
    if (ctx->initAcked[2] == 0) {
        p[0xc] = 2;
        GsNatNeg_SendTo(ctx->negSock, sGsNatNegServer2, 0x6cfd, p, len);
    }
    ctx->retryTime = GsUtil_GetTimeMs() + 0x1f4;
    ctx->maxRetries = 0x1e;
}
} }

namespace N022868b0 { extern "C" {
extern "C" void GsNatNeg_SendPeerPing(GsNatNegotiator *ctx) {
    GsNatNegPacket pkt;
    u8 *d = (u8 *)&pkt;
    const u8 *m = (const u8 *)data_ov065_0228e16c;
    d[0] = m[0];
    d[1] = m[1];
    d[2] = m[2];
    d[3] = m[3];
    d[4] = m[4];
    d[5] = m[5];
    pkt.version = 2;
    pkt.type = 7;
    u32 c = ctx->cookie;
    pkt.cookie = SWAP32(c);
    *(u32 *)&pkt.peerIp = ctx->peerIp;
    u16 p = ctx->peerPort;
    *(u16 *)&pkt.peerPort = SWAP16(p);
    pkt.gotPeerPing = ctx->gotPeerPing;
    pkt.finished = ctx->state == 2 ? 0 : 1;
    s32 fd = ctx->gameSock;
    if (fd == -1) {
        fd = ctx->negSock;
    }
    GsNatNeg_SendTo(fd, ctx->peerIp, ctx->peerPort, &pkt, 0x14);
    ctx->retryTime = GsUtil_GetTimeMs() + 0x2bc;
    ctx->maxRetries = 0xc;
    if (ctx->gotPeerPing != 0) {
        ctx->sentGotPeerPing = 1;
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" u32 GsNatNeg_ResolveHost(const char *name) {
    u32 r = GsSock_InetAddr(name);
    if (r == (u32)-1) {
        Unk_ov065_02286f04_Hostent *h = Sock_GetHostByName(name);
        if (h == NULL) {
            return 0;
        }
        r = **h->addr_list;
    }
    return r;
}
} }

namespace N022868b0 { extern "C" {
extern "C" u32 GsNatNeg_ResolveServer(const char *name, const char *s) {
    char buf[0x80];
    if (name == NULL) {
        OS_SNPrintf(buf, 0x80, "%s.%s", sGsGameName, s);
        name = buf;
    }
    return GsNatNeg_ResolveHost(name);
}
} }

namespace N022868b0 { extern "C" {
extern "C" s32 GsNatNeg_ResolveServers() {
    if (sGsNatNegServer1 == 0) {
        sGsNatNegServer1 = GsNatNeg_ResolveServer((const char *)data_ov065_02291538, "natneg1.gs.nintendowifi.net");
    }
    if (sGsNatNegServer2 == 0) {
        sGsNatNegServer2 = GsNatNeg_ResolveServer((const char *)data_ov065_02291534, "natneg2.gs.nintendowifi.net");
    }
    if (sGsNatNegServer1 == 0 || sGsNatNegServer2 == 0) {
        return 0;
    }
    return 1;
}
} }

namespace N022868b0 { extern "C" {
extern "C" s32 GsNatNeg_Start(u32 a, u32 b, s32 c, s32 d, void *e, void *f) {
    if (sGsAvailStatus != 1) {
        return 2;
    }
    if (GsNatNeg_ResolveServers() == 0) {
        return 3;
    }
    GsNatNegotiator *ctx = (GsNatNegotiator *)GsNatNeg_Add();
    if (ctx == NULL) {
        return 1;
    }
    ctx->gameSock = a;
    ctx->clientIndex = c;
    ctx->cookie = b;
    ctx->progressCallback = (GsNatNegProgressCallback)d;
    ctx->completedCallback = (GsNatNegCompletedCallback)e;
    ctx->userData = f;
    ctx->negSock = GsSock_Socket(2, 2, 0);
    ctx->retryCount = 0;
    ctx->gotPeerPing = 0;
    ctx->sentGotPeerPing = 0;
    ctx->peerIp = 0;
    ctx->peerPort = 0;
    ctx->maxRetries = 0;
    if (ctx->negSock == -1) {
        GsNatNeg_Remove(ctx);
        return 2;
    }
    GsNatNeg_SendInit(ctx);
    return 0;
}
} }

extern "C" { u32 sGsNatNegServer2; } //@
namespace N022868b0 { extern "C" {
extern "C" void GsNatNeg_Cancel(u32 cookie) {
    GsNatNegotiator *ctx = GsNatNeg_FindByCookie(cookie);
    if (ctx != NULL) {
        if (ctx->negSock != -1) {
            GsSock_Close(ctx->negSock);
        }
        ctx->negSock = -1;
        ctx->state = 4;
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void GsNatNeg_Process(GsNatNegotiator *ctx) {
    Unk_ov065_02286c74_Sa from;
    s32 len;
    Unk_ov065_02286c74_Sa out;
    len = 8;
    if (ctx->state == 4) {
        GsNatNeg_Remove(ctx);
        return;
    }
    while (ctx->negSock != -1) {
        if (GsSock_CanRead(ctx->negSock) == 0) {
            break;
        }
        s32 n = GsSock_RecvFrom(ctx->negSock, data_ov065_02291548, 0x200, 0, &from, &len);
        if (n == -1) {
            break;
        }
        GsNatNeg_HandlePacket(data_ov065_02291548, n, &from);
        if (ctx->state == 4) {
            break;
        }
    }
    if (ctx->state == 0 || ctx->state == 2) {
        if (GsUtil_GetTimeMs() > ctx->retryTime) {
            s32 a = ctx->retryCount;
            if (a > ctx->maxRetries) {
                ctx->completedCallback(2, -1, 0, ctx->userData);
                GsNatNeg_Cancel(ctx->cookie);
            } else {
                ctx->retryCount = a + 1;
                if (ctx->state == 0) {
                    GsNatNeg_SendInit(ctx);
                } else {
                    GsNatNeg_SendPeerPing(ctx);
                }
            }
        }
    }
    if (ctx->state == 3) {
        if (GsUtil_GetTimeMs() > ctx->retryTime) {
            if (ctx->gameSock == -1) {
                out.family = 2;
                u16 p = ctx->peerPort;
                out.port = SWAP16(p);
                out.addr = ctx->peerIp;
                ctx->completedCallback(0, ctx->negSock, &out, ctx->userData);
                ctx->negSock = -1;
            }
            GsNatNeg_Cancel(ctx->cookie);
        }
    }
    if (ctx->state == 1) {
        if (GsUtil_GetTimeMs() > ctx->retryTime) {
            ctx->completedCallback(1, -1, 0, ctx->userData);
            GsNatNeg_Cancel(ctx->cookie);
        }
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void GsNatNeg_ProcessAll() {
    if (sGsNatNegList != NULL) {
        s32 i;
        for (i = GsArray_Count(sGsNatNegList) - 1; i >= 0; i--) {
            GsNatNeg_Process((GsNatNegotiator *)GsArray_At(sGsNatNegList, i));
        }
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void GsNatNeg_SendConnectAck(GsNatNegotiator *ctx, Unk_ov065_02286c74_Sa *sa) {
    GsNatNegPacket pkt;
    u8 *d = (u8 *)&pkt;
    const u8 *m = data_ov065_0228e16c;
    d[0] = m[0];
    d[1] = m[1];
    d[2] = m[2];
    d[3] = m[3];
    d[4] = m[4];
    d[5] = m[5];
    pkt.version = 2;
    pkt.type = 6;
    pkt.clientIndex = ctx->clientIndex;
    u32 c = ctx->cookie;
    pkt.cookie = SWAP32(c);
    u16 p = sa->port;
    GsNatNeg_SendTo(ctx->negSock, sa->addr, (u16)SWAP16(p), d, 0x15);
}
} }

extern "C" { u32 data_ov065_02291534; } //@
namespace N022868b0 { extern "C" {
extern "C" void GsNatNeg_HandleConnect(GsNatNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa) {
    if (pkt[0x13] == 0) {
        GsNatNeg_SendConnectAck(ctx, sa);
    }
    if (ctx->state < 2) {
        u32 r = pkt[0x13];
        if (r != 0) {
            s32 code = 3;
            if (r == 1) {
                code = 1;
            } else if (r == 2) {
                code = 2;
            }
            ctx->completedCallback(code, -1, 0, ctx->userData);
            GsNatNeg_Cancel(ctx->cookie);
        } else {
            ctx->peerIp = *(u32 *)&pkt[0xc];
            u16 p = *(u16 *)&pkt[0x10];
            ctx->peerPort = SWAP16(p);
            ctx->retryCount = 0;
            ctx->state = 2;
            ctx->progressCallback(ctx->state, ctx->userData);
            GsNatNeg_SendPeerPing(ctx);
        }
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void GsNatNeg_HandlePeerPing(GsNatNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa) {
    if (ctx->state >= 2) {
        ctx->peerIp = sa->addr;
        u16 p = sa->port;
        ctx->peerPort = SWAP16(p);
        ctx->gotPeerPing = 1;
        if (pkt[0x12] == 0) {
            GsNatNeg_SendPeerPing(ctx);
            return;
        }
        if (ctx->state == 2) {
            if (ctx->sentGotPeerPing == 0) {
                GsNatNeg_SendPeerPing(ctx);
            }
            ctx->state = 3;
            ctx->retryTime = GsUtil_GetTimeMs() + 5000;
            if (ctx->gameSock != -1) {
                ctx->completedCallback(0, ctx->gameSock, sa, ctx->userData);
            }
        } else if (pkt[0x13] == 0) {
            GsNatNeg_SendPeerPing(ctx);
        }
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void GsNatNeg_HandleServerReply(GsNatNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa) {
    switch (pkt[7]) {
    case 1: {
        u32 i = pkt[0xc];
        if (i <= 2) {
            ctx->initAcked[i] = 1;
            if (ctx->state == 0 && ctx->initAcked[1] != 0 && ctx->initAcked[2] != 0) {
                if (ctx->gameSock == -1 || ctx->initAcked[0] != 0) {
                    ctx->state = 1;
                    ctx->retryTime = GsUtil_GetTimeMs() + 10000;
                    ctx->progressCallback(ctx->state, ctx->userData);
                }
            }
        }
        break;
    }
    case 2: {
        pkt[7] = 3;
        u16 p = sa->port;
        GsNatNeg_SendTo(ctx->negSock, sa->addr, (u16)SWAP16(p), pkt, 0x15);
        break;
    }
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void GsNatNeg_HandlePacket(u8 *pkt, s32 len, Unk_ov065_02286c74_Sa *sa) {
    GsNatNegConnectPktBuf h;
    GsNatNegReplyPktBuf g;
    if (GsNatNeg_HasMagic() == 0) {
        return;
    }
    u32 type = pkt[7];
    if (type == 5 || type == 7) {
        if (len < 0x14) {
            return;
        }
        h = *(GsNatNegConnectPktBuf *)pkt;
        u32 c = *(u32 *)&h.b[8];
        GsNatNegotiator *ctx = GsNatNeg_FindByCookie(SWAP32(c));
        if (ctx == NULL) {
            return;
        }
        if (type == 5) {
            GsNatNeg_HandleConnect(ctx, h.b, sa);
        } else {
            GsNatNeg_HandlePeerPing(ctx, h.b, sa);
        }
    } else {
        if (len < 0x15) {
            return;
        }
        g = *(GsNatNegReplyPktBuf *)pkt;
        u32 c = *(u32 *)&g.b[8];
        GsNatNegotiator *ctx = GsNatNeg_FindByCookie(SWAP32(c));
        if (ctx == NULL) {
            return;
        }
        GsNatNeg_HandleServerReply(ctx, g.b, sa);
    }
}
} }
