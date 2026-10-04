// mwcc-flags: -O4,p -str reuse

#include "types.h"
#include "net/darray.h"
#include "net/GsInAddr.h"
#include "net/natneg.h"
#include "net/Unk_ov065_02286f04_Hostent.h"
#include "net/Unk_ov065_022871ac_List.h"
#include "net/Unk_ov065_02287200_Sa.h"
#include "net/qr2.h"
#include "net/GsBytes.h"




namespace N022868b0 {
extern "C" {


// ov065_063: GameSpy NAT negotiation client (0x022868b0..0x022871ac)

#define SWAP32(x) ((((x) << 24) & 0xff000000) | ((((x) << 8) & 0xff0000) | ((((x) >> 24) & 0xff) | (((x) >> 8) & 0xff00))))
#define SWAP16(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))












extern "C" {
extern s32 data_ov065_02291504;
extern char data_ov065_02291508[];



extern u8 NNMagicData[];



extern char __GSIACGamename[];
extern s32 __GSIACResult;
extern u32 Matchup2Hostname;
extern u32 Matchup1Hostname;
extern u32 matchup2ip;
extern u32 matchup1ip;
extern void *negotiateList;
extern u8 data_ov065_02291548[];

s32 OS_SPrintf(char *buf, const char *fmt, ...);
s32 OS_SNPrintf(char *buf, s32 n, const char *fmt, ...);
char *STD_CopyString(char *dst, const char *src);
u32 STD_GetStringLength(const char *s);

char *Sock_InetNtoA(GsInAddr a);
Unk_ov065_02286f04_Hostent *Sock_GetHostByName(const char *name);
s32 ArrayNth(void *list, s32 i);
s32 ArrayLength(void *list);
s32 inet_addr(const char *s);
s32 getsockname(s32 fd, Unk_ov065_02286c74_Sa *sa, s32 *len);
s32 recvfrom(s32 fd, void *buf, s32 n, s32 flags, Unk_ov065_02286c74_Sa *from, s32 *len);
s32 closesocket(s32 fd);
s32 socket(s32 a, s32 b, s32 c);
Unk_ov065_022871ac_List *getlocalhost();
s32 IsPrivateIP(void *p);
s32 CanReceiveOnSocket(s32 fd);
u32 current_time();
s32 CheckMagic();
s32 SendPacket__natneg(s32 fd, u32 addr, u32 port, void *buf, s32 len);
s32 RemoveNegotiator(_NATNegotiator *ctx);
s32 AddNegotiator();
_NATNegotiator *FindNegotiatorForCookie(u32 cookie);

u32 GetLocalIP();
u32 GetLocalPort(s32 fd);
void SendInitPackets(_NATNegotiator *ctx);
void SendPingPacket(_NATNegotiator *ctx);
u32 NameToIp(const char *name);
u32 ResolveServer(const char *name, const char *s);
s32 ResolveServers();
void NNCancel(u32 cookie);
void NegotiateThink(_NATNegotiator *ctx);
void SendConnectAck(_NATNegotiator *ctx, Unk_ov065_02286c74_Sa *sa);
void ProcessConnectPacket(_NATNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void ProcessPingPacket(_NATNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void ProcessInitPacket(_NATNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void NNProcessData(u8 *pkt, s32 len, Unk_ov065_02286c74_Sa *sa);
}


















}
}

namespace N02287200 {
extern "C" {


// ov065_064: GameSpy query-and-report style (0xfe 0xfd packets) server object helpers (0x02287200..0x02287aa4)









typedef qr2_implementation_s Qr;
typedef qr2_buffer_s Buf;
typedef _NATNegotiator Ent;
typedef DArrayImplementation Vec;

extern "C" {
extern u8 NNMagicData[];
extern Qr *current_rec;
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
extern char *qr2_registered_key_list[];
extern Vec *negotiateList;
extern s32 num_local_ips;
extern u32 local_ip_list[];

s32 memcmp(const void *, const void *, s32);
void memcpy(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 sendto(s32, void *, s32, s32, void *, s32);
s32 closesocket(s32);
s32 current_time(void);
void ArrayFree(Vec *);
s32 ArrayLength(Vec *);
void *ArrayNth(Vec *, s32);
void ArrayAppend(Vec *, void *);
void ArrayRemoveAt(Vec *, s32);
Vec *ArrayNew(s32, s32, void *);
char *Sock_InetNtoA(GsInAddr);
void qr_add_packet_header(Buf *, s32, u8 *);
void qr2_buffer_addA(Buf *, const char *);
void qr2_buffer_add_int(Buf *, s32);
void qr_build_query_reply(Qr *, Buf *, u32, u8 *, u32, u8 *, u32, u8 *);
void handle_public_address(Qr *, u8 *);
void compute_challenge_response(Qr *, Buf *, u8 *, s32);

void GsNatNeg_FreeEntry(Ent *e);
void qr_build_partial_old_query_reply(Qr *q, Buf *buf, s32 kind);
void qr_process_old_query(Qr *q, Buf *buf);
BOOL qr_got_recent_message(Qr *q, u32 v);
void qr_process_client_message(Qr *q, u8 *p, s32 n);
void qr_process_query(Qr *q, Buf *buf, u8 *p, s32 n);

#define HTONS(x) ((u16)((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00)))
#define HTONL(x) (((x) >> 24 & 0xff) | ((x) >> 8 & 0xff00) | ((x) << 8 & 0xff0000) | ((x) << 24 & 0xff000000))
















}

}
}

extern "C" { u32 Matchup1Hostname; } //@
extern "C" { void *negotiateList; } //@
namespace N02287200 { extern "C" {
Ent *FindNegotiatorForCookie(s32 x) {
    s32 i;
    Ent *e;
    if (negotiateList == NULL) {
        return NULL;
    }
    for (i = 0; i < ArrayLength(negotiateList); i++) {
        e = (Ent *)ArrayNth(negotiateList, i);
        if (e->cookie == x) {
            return e;
        }
    }
    return NULL;
}
} }

namespace N02287200 { extern "C" {
void GsNatNeg_FreeEntry(Ent *e) {
    if (e->negotiateSock != -1) {
        closesocket(e->negotiateSock);
    }
    e->negotiateSock = -1;
    e->state = 4;
}
} }

extern "C" { u32 matchup1ip; } //@
namespace N02287200 { extern "C" {
void *AddNegotiator(void) {
    Ent z = {0};
    if (negotiateList == NULL) {
        negotiateList = ArrayNew(0x40, 4, (void *)GsNatNeg_FreeEntry);
    }
    ArrayAppend(negotiateList, &z);
    return ArrayNth(negotiateList, ArrayLength(negotiateList) - 1);
}
} }

namespace N02287200 { extern "C" {
void RemoveNegotiator(void *key) {
    s32 i;
    for (i = 0; i < ArrayLength(negotiateList); i++) {
        if (key == ArrayNth(negotiateList, i)) {
            ArrayRemoveAt(negotiateList, i);
            return;
        }
    }
}
} }

namespace N02287200 { extern "C" {
void NNFreeNegotiateList(void) {
    if (negotiateList != NULL) {
        ArrayFree(negotiateList);
        negotiateList = NULL;
    }
}
} }

namespace N02287200 { extern "C" {
BOOL CheckMagic(void *p) {
    if (memcmp(p, NNMagicData, 6) == 0) {
        return TRUE;
    }
    return FALSE;
}
} }

extern "C" { u8 data_ov065_02291548[0x200]; } //@
namespace N02287200 { extern "C" {
s32 SendPacket__natneg(s32 sock, u32 ip, s32 port, void *buf, s32 len) {
    Unk_ov065_02287200_Sa sa;
    sa.family = 2;
    sa.port = HTONS(port);
    sa.addr = ip;
    return sendto(sock, buf, len, 0, &sa, 8);
}
} }

namespace N022868b0 { extern "C" {
extern "C" u32 GetLocalIP() {
    u32 r = 0;
    Unk_ov065_022871ac_List *list = getlocalhost();
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
        if (IsPrivateIP(e) != 0) {
            return r;
        }
    }
    return r;
}
} }

extern "C" u8 NNMagicData[6] = {0xfd, 0xfc, 0x1e, 0x66, 0x6a, 0xb2}; //@
namespace N022868b0 { extern "C" {
extern "C" u32 GetLocalPort(s32 fd) {
    Unk_ov065_02286c74_Sa sa;
    s32 len = 8;
    s32 r = getsockname(fd, &sa, &len);
    u32 port = 0;
    if (r != -1) {
        port = sa.port;
    }
    return port;
}
} }

namespace N022868b0 { extern "C" {
extern "C" void SendInitPackets(_NATNegotiator *ctx) {
    GsNatNegInitPacket pkt;
    u8 *p = (u8 *)&pkt;
    const u8 *m = (const u8 *)NNMagicData;
    p[0] = m[0];
    p[1] = m[1];
    p[2] = m[2];
    p[3] = m[3];
    p[4] = m[4];
    p[5] = m[5];
    p[6] = 2;
    p[7] = 0;
    p[0xd] = ctx->clientindex;
    u32 c = ctx->cookie;
    *(u32 *)(p + 8) = SWAP32(c);
    u8 flag = 0;
    if (ctx->gameSock != -1) {
        flag = 1;
    }
    p[0xe] = flag;
    u32 ip = SWAP32(GetLocalIP());
    pkt.localIp0 = ip >> 24;
    pkt.localIp1 = ip >> 16;
    pkt.localIp2 = ip >> 8;
    pkt.localIp3 = ip;
    pkt.localPortHi = 0;
    pkt.localPortLo = 0;
    STD_CopyString(pkt.name, __GSIACGamename);
    s32 len = STD_GetStringLength(__GSIACGamename) + 0x16;
    if (p[0xe] != 0 && ctx->initAckRecv[0] == 0) {
        p[0xc] = 0;
        SendPacket__natneg(ctx->gameSock, matchup1ip, 0x6cfd, p, len);
    }
    if (ctx->initAckRecv[1] == 0) {
        p[0xc] = 1;
        SendPacket__natneg(ctx->negotiateSock, matchup1ip, 0x6cfd, p, len);
    }
    s32 port = SWAP16((s32)GetLocalPort(p[0xe] != 0 ? ctx->gameSock : ctx->negotiateSock));
    port = (u16)port;
    pkt.localPortHi = port >> 8;
    pkt.localPortLo = port;
    if (ctx->initAckRecv[2] == 0) {
        p[0xc] = 2;
        SendPacket__natneg(ctx->negotiateSock, matchup2ip, 0x6cfd, p, len);
    }
    ctx->retryTime = current_time() + 0x1f4;
    ctx->maxRetryCount = 0x1e;
}
} }

namespace N022868b0 { extern "C" {
extern "C" void SendPingPacket(_NATNegotiator *ctx) {
    GsNatNegPacket pkt;
    u8 *d = (u8 *)&pkt;
    const u8 *m = (const u8 *)NNMagicData;
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
    *(u32 *)&pkt.peerIp = ctx->guessedIP;
    u16 p = ctx->guessedPort;
    *(u16 *)&pkt.peerPort = SWAP16(p);
    pkt.gotPeerPing = ctx->gotRemoteData;
    pkt.finished = ctx->state == 2 ? 0 : 1;
    s32 fd = ctx->gameSock;
    if (fd == -1) {
        fd = ctx->negotiateSock;
    }
    SendPacket__natneg(fd, ctx->guessedIP, ctx->guessedPort, &pkt, 0x14);
    ctx->retryTime = current_time() + 0x2bc;
    ctx->maxRetryCount = 0xc;
    if (ctx->gotRemoteData != 0) {
        ctx->sendGotRemoteData = 1;
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" u32 NameToIp(const char *name) {
    u32 r = inet_addr(name);
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
extern "C" u32 ResolveServer(const char *name, const char *s) {
    char buf[0x80];
    if (name == NULL) {
        OS_SNPrintf(buf, 0x80, "%s.%s", __GSIACGamename, s);
        name = buf;
    }
    return NameToIp(name);
}
} }

namespace N022868b0 { extern "C" {
extern "C" s32 ResolveServers() {
    if (matchup1ip == 0) {
        matchup1ip = ResolveServer((const char *)Matchup1Hostname, "natneg1.gs.nintendowifi.net");
    }
    if (matchup2ip == 0) {
        matchup2ip = ResolveServer((const char *)Matchup2Hostname, "natneg2.gs.nintendowifi.net");
    }
    if (matchup1ip == 0 || matchup2ip == 0) {
        return 0;
    }
    return 1;
}
} }

namespace N022868b0 { extern "C" {
extern "C" s32 NNBeginNegotiationWithSocket(u32 a, u32 b, s32 c, s32 d, void *e, void *f) {
    if (__GSIACResult != 1) {
        return 2;
    }
    if (ResolveServers() == 0) {
        return 3;
    }
    _NATNegotiator *ctx = (_NATNegotiator *)AddNegotiator();
    if (ctx == NULL) {
        return 1;
    }
    ctx->gameSock = a;
    ctx->clientindex = c;
    ctx->cookie = b;
    ctx->progressCallback = (NegotiateProgressFunc)d;
    ctx->completedCallback = (NegotiateCompletedFunc)e;
    ctx->userdata = f;
    ctx->negotiateSock = socket(2, 2, 0);
    ctx->retryCount = 0;
    ctx->gotRemoteData = 0;
    ctx->sendGotRemoteData = 0;
    ctx->guessedIP = 0;
    ctx->guessedPort = 0;
    ctx->maxRetryCount = 0;
    if (ctx->negotiateSock == -1) {
        RemoveNegotiator(ctx);
        return 2;
    }
    SendInitPackets(ctx);
    return 0;
}
} }

extern "C" { u32 matchup2ip; } //@
namespace N022868b0 { extern "C" {
extern "C" void NNCancel(u32 cookie) {
    _NATNegotiator *ctx = FindNegotiatorForCookie(cookie);
    if (ctx != NULL) {
        if (ctx->negotiateSock != -1) {
            closesocket(ctx->negotiateSock);
        }
        ctx->negotiateSock = -1;
        ctx->state = 4;
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void NegotiateThink(_NATNegotiator *ctx) {
    Unk_ov065_02286c74_Sa from;
    s32 len;
    Unk_ov065_02286c74_Sa out;
    len = 8;
    if (ctx->state == 4) {
        RemoveNegotiator(ctx);
        return;
    }
    while (ctx->negotiateSock != -1) {
        if (CanReceiveOnSocket(ctx->negotiateSock) == 0) {
            break;
        }
        s32 n = recvfrom(ctx->negotiateSock, data_ov065_02291548, 0x200, 0, &from, &len);
        if (n == -1) {
            break;
        }
        NNProcessData(data_ov065_02291548, n, &from);
        if (ctx->state == 4) {
            break;
        }
    }
    if (ctx->state == 0 || ctx->state == 2) {
        if (current_time() > ctx->retryTime) {
            s32 a = ctx->retryCount;
            if (a > ctx->maxRetryCount) {
                ctx->completedCallback(2, -1, 0, ctx->userdata);
                NNCancel(ctx->cookie);
            } else {
                ctx->retryCount = a + 1;
                if (ctx->state == 0) {
                    SendInitPackets(ctx);
                } else {
                    SendPingPacket(ctx);
                }
            }
        }
    }
    if (ctx->state == 3) {
        if (current_time() > ctx->retryTime) {
            if (ctx->gameSock == -1) {
                out.family = 2;
                u16 p = ctx->guessedPort;
                out.port = SWAP16(p);
                out.addr = ctx->guessedIP;
                ctx->completedCallback(0, ctx->negotiateSock, &out, ctx->userdata);
                ctx->negotiateSock = -1;
            }
            NNCancel(ctx->cookie);
        }
    }
    if (ctx->state == 1) {
        if (current_time() > ctx->retryTime) {
            ctx->completedCallback(1, -1, 0, ctx->userdata);
            NNCancel(ctx->cookie);
        }
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void NNThink() {
    if (negotiateList != NULL) {
        s32 i;
        for (i = ArrayLength(negotiateList) - 1; i >= 0; i--) {
            NegotiateThink((_NATNegotiator *)ArrayNth(negotiateList, i));
        }
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void SendConnectAck(_NATNegotiator *ctx, Unk_ov065_02286c74_Sa *sa) {
    GsNatNegPacket pkt;
    u8 *d = (u8 *)&pkt;
    const u8 *m = NNMagicData;
    d[0] = m[0];
    d[1] = m[1];
    d[2] = m[2];
    d[3] = m[3];
    d[4] = m[4];
    d[5] = m[5];
    pkt.version = 2;
    pkt.type = 6;
    pkt.clientIndex = ctx->clientindex;
    u32 c = ctx->cookie;
    pkt.cookie = SWAP32(c);
    u16 p = sa->port;
    SendPacket__natneg(ctx->negotiateSock, sa->addr, (u16)SWAP16(p), d, 0x15);
}
} }

extern "C" { u32 Matchup2Hostname; } //@
namespace N022868b0 { extern "C" {
extern "C" void ProcessConnectPacket(_NATNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa) {
    if (pkt[0x13] == 0) {
        SendConnectAck(ctx, sa);
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
            ctx->completedCallback(code, -1, 0, ctx->userdata);
            NNCancel(ctx->cookie);
        } else {
            ctx->guessedIP = *(u32 *)&pkt[0xc];
            u16 p = *(u16 *)&pkt[0x10];
            ctx->guessedPort = SWAP16(p);
            ctx->retryCount = 0;
            ctx->state = 2;
            ctx->progressCallback(ctx->state, ctx->userdata);
            SendPingPacket(ctx);
        }
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void ProcessPingPacket(_NATNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa) {
    if (ctx->state >= 2) {
        ctx->guessedIP = sa->addr;
        u16 p = sa->port;
        ctx->guessedPort = SWAP16(p);
        ctx->gotRemoteData = 1;
        if (pkt[0x12] == 0) {
            SendPingPacket(ctx);
            return;
        }
        if (ctx->state == 2) {
            if (ctx->sendGotRemoteData == 0) {
                SendPingPacket(ctx);
            }
            ctx->state = 3;
            ctx->retryTime = current_time() + 5000;
            if (ctx->gameSock != -1) {
                ctx->completedCallback(0, ctx->gameSock, sa, ctx->userdata);
            }
        } else if (pkt[0x13] == 0) {
            SendPingPacket(ctx);
        }
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void ProcessInitPacket(_NATNegotiator *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa) {
    switch (pkt[7]) {
    case 1: {
        u32 i = pkt[0xc];
        if (i <= 2) {
            ctx->initAckRecv[i] = 1;
            if (ctx->state == 0 && ctx->initAckRecv[1] != 0 && ctx->initAckRecv[2] != 0) {
                if (ctx->gameSock == -1 || ctx->initAckRecv[0] != 0) {
                    ctx->state = 1;
                    ctx->retryTime = current_time() + 10000;
                    ctx->progressCallback(ctx->state, ctx->userdata);
                }
            }
        }
        break;
    }
    case 2: {
        pkt[7] = 3;
        u16 p = sa->port;
        SendPacket__natneg(ctx->negotiateSock, sa->addr, (u16)SWAP16(p), pkt, 0x15);
        break;
    }
    }
}
} }

namespace N022868b0 { extern "C" {
extern "C" void NNProcessData(u8 *pkt, s32 len, Unk_ov065_02286c74_Sa *sa) {
    GsNatNegConnectPktBuf h;
    GsNatNegReplyPktBuf g;
    if (CheckMagic() == 0) {
        return;
    }
    u32 type = pkt[7];
    if (type == 5 || type == 7) {
        if (len < 0x14) {
            return;
        }
        h = *(GsNatNegConnectPktBuf *)pkt;
        u32 c = *(u32 *)&h.b[8];
        _NATNegotiator *ctx = FindNegotiatorForCookie(SWAP32(c));
        if (ctx == NULL) {
            return;
        }
        if (type == 5) {
            ProcessConnectPacket(ctx, h.b, sa);
        } else {
            ProcessPingPacket(ctx, h.b, sa);
        }
    } else {
        if (len < 0x15) {
            return;
        }
        g = *(GsNatNegReplyPktBuf *)pkt;
        u32 c = *(u32 *)&g.b[8];
        _NATNegotiator *ctx = FindNegotiatorForCookie(SWAP32(c));
        if (ctx == NULL) {
            return;
        }
        ProcessInitPacket(ctx, g.b, sa);
    }
}
} }
