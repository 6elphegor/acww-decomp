// mwcc-flags: -O4,p -str reuse

#include "types.h"
#include "net/GsTransport.h"
#include "net/GsInAddr.h"
#include "net/GsNatNeg.h"
#include "net/Unk_ov065_02286f04_Hostent.h"
#include "net/Unk_ov065_022871ac_List.h"


extern "C" { s32 data_ov065_02291504; } //@
extern "C" { char data_ov065_02291508[0x2c]; } //@

namespace N02285630 {
extern "C" {


// ov065_061: SSL/TLS-like handshake state machine (0x02285630..0x02285eb8)







typedef GsTransportConn Cn;
typedef GsTransportInMsg It;

extern "C" {
extern u8 data_ov065_0228e150[];
s32 memcmp(void *, const void *, u32);
s32 GsUtil_Free(void *);
s32 GsArray_At(void *, s32);
s32 GsArray_Count(void *);
s32 GsArray_DeleteAt(void *, s32);
s32 GsArray_InsertSorted(void *, void *, void *);
s32 GsUtil_GetTimeMs();
s32 GsUtil_CompareResponse32(void *, void *);
s32 GsUtil_MakeResponse32(void *, void *);
s32 GsTransport_MakeChallenge(void *);
s32 GsTransport_BufRemove(void *, s32, s32);
s32 GsTransport_BufAppend(void *, void *, s32);
s32 GsTransport_BufFreeSpace(void *);
s32 GsTransport_CallPingCb(Cn *, s32);
s32 GsTransport_CallConnectedCb(Cn *, s32, void *, s32);
s32 GsTransport_CallConnectAttemptCb(void *, Cn *, s32, s32, s32, void *, s32);
s32 GsTransport_MarkClosed(Cn *);
s32 GsTransport_ResendMessage(Cn *, void *);
s32 GsTransport_SendClosed(Cn *);
s32 GsTransport_SendPong(Cn *, void *, s32);
s32 GsTransport_SendNack(Cn *, u16, u16);
s32 GsTransport_SendClientResponse(Cn *, void *, void *, s32);
s32 GsTransport_SendServerChallenge(Cn *, void *, void *);
s32 GsTransport_AbortConnection(Cn *);
s32 GsTransport_ProtocolError(Cn *);
s32 GsTransport_ConnectionClosed(Cn *, s32, s32);
s32 GsTransport_SeqDiff(u32, u32);
s32 GsTransport_ReadU16(void *, s32);
s32 GsTransport_ProcessAck(Cn *, s32);

s32 GsTransport_HandleAck(Cn *c, void *p, s32 n);
s32 GsTransport_HandleNack(Cn *c, void *p, s32 n);
s32 GsTransport_HandlePing(Cn *c, void *p, s32 n);
s32 GsTransport_HandlePong(Cn *c, void *p, s32 n);
s32 GsTransport_HandleClosed(Cn *c);
void GsTransport_ScheduleAck(Cn *c);
s32 GsTransport_DeliverQueued(Cn *c);
void GsTransport_RemoveInRecord(Cn *c, It *e, s32 i);
s32 GsTransport_StoreOutOfOrder(Cn *c, s32 a, u32 seq, void *p, s32 n, s32 *out);
s32 GsTransport_CompareInRecord(It *a, It *b);
s32 GsTransport_DispatchReliable(Cn *c, s32 mode, void *p, s32 n);
s32 GsTransport_HandleRemoteClose(Cn *c);
s32 GsTransport_HandleRejected(Cn *c, void *p, s32 n);
s32 GsTransport_HandleAccepted(Cn *c);
s32 GsTransport_HandleClientResponse(Cn *c, void *p, s32 n);
s32 GsTransport_HandleServerChallenge(Cn *c, void *p, s32 n);
s32 GsTransport_HandleClientChallenge(Cn *c, void *p, s32 n);
s32 GsTransport_HandleReliableData(Cn *c, void *p, s32 n);



















}

}
}

namespace N02285f3c {
extern "C" {


// ov065_062: DWC/GameSpy-like UDP reliable-peer table (0x02285f3c..0x022867c0)

struct Unk_ov065_0228627c_Sa {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov065_022867c0_Host {
    char *hostName;
    char **aliases;
    s16 addrType;
    s16 length;
    u32 **addrList;
};

typedef GsTransportConn Conn062;
typedef GsTransportSocket Sock062;
typedef Unk_ov065_0228627c_Sa Sa062;


extern u16 data_0213a510[];

extern "C" {
void GsUtil_Free(void *p);
void *GsUtil_Alloc(s32 n);
void *GsArray_At(void *v, s32 i);
void GsArray_DeleteAt(void *v, s32 i);
s32 GsArray_Count(void *v);
void GsArray_Free(void *v);
void *GsArray_New(s32 size, s32 cap, void *dtor);
void *GsHash_FindIf(void *t, BOOL (*cb)(Conn062 **, u32 *), void *arg);
void *GsHash_Find(void *t, void *key);
void GsHash_Remove(void *t, void *key);
void GsHash_Insert(void *t, void *key);
void GsHash_Free(void *t);
void *GsHash_NewEx(s32 esize, s32 n, s32 cap, u32 (*hash)(Conn062 **, u32), s32 (*cmp)(Conn062 **, Conn062 **),
                          void *dtor);
s32 GsSock_GetLastError(s32 fd);
s32 GsSock_InetAddr(char *s);
s32 GsSock_GetSockName(s32 fd, Sa062 *sa, s32 *len);
s32 GsSock_SendTo(s32 fd, char *buf, s32 len, u32 flags, Sa062 *sa, u32 salen);
s32 GsSock_Bind(s32 fd, Sa062 *sa, u32 len);
s32 GsSock_Close(s32 fd);
s32 GsSock_Socket(s32 a, s32 b, s32 c);
s32 GsSock_CanWrite(s32 fd);
void GsSock_CleanupStub();
void GsSock_StartupStub();
u32 GsUtil_GetTimeMs();
Unk_ov065_022867c0_Host *Sock_GetHostByName(char *name);
s32 GsTransport_BufRemove(void *p, s32 a, s32 b);
s32 GsTransport_BufAlloc(void *p, u32 n);
s32 GsTransport_CallDumpCb(Sock062 *c, Conn062 *p, u32 ip, u32 port, s32 a, char *buf, s32 len, s32 b);
s32 GsTransport_CallRecvFilter(Conn062 *p, s32 a, s32 b, s32 c, s32 d);
s32 GsTransport_CallClosedCb(Conn062 *p, s32 a);
s32 GsTransport_CallReceivedCb(Conn062 *p, s32 a, s32 b, s32 c);
s32 GsTransport_CallConnectedCb(Conn062 *p, s32 a, s32 b, s32 c);
s32 GsTransport_CallSocketErrorCb(Sock062 *c);
void GsTransport_FreeConnection(Conn062 *p);
void GsTransport_MarkClosed(Conn062 *p);
s32 GsTransport_ThinkConnection(Conn062 *p, u32 now);
s32 GsTransport_SendClosed(Conn062 *p);
s32 GsTransport_CloseAll(Sock062 *c);
s32 GsTransport_OnConnectionReset(Sock062 *c, u32 ip, u32 port);
s32 GsTransport_ProtocolError(Conn062 *p);
s32 GsTransport_ConnectionClosed(Conn062 *p, s32 a, s32 b);
s16 GsTransport_SeqDiff(u32 a, u32 b);
void GsTransport_OnSocketError(Sock062 *c);
void GsTransport_Release(Conn062 *p);
Conn062 *GsTransport_FindConnection(Sock062 *c, u32 ip, u16 port);
void GsTransport_FreeSocket(Sock062 *c);
void *GsTransport_AllocConnection();
void GsTransport_FixMessage(char **s, s32 *len);
s32 GsTransport_ParseAddress(char *s, u32 *ip, u16 *port);
void func_0212899c(void *p, s32 v, u32 n);
void memcpy(void *d, void *s, u32 n);
char *func_0212a120(char *s, s32 c);
s32 func_0212b770(char *s);
u32 STD_GetStringLength(char *s);
}

extern "C" {












BOOL GsTransport_ThinkConnectionCb(Conn062 **pp, u32 *pnow);









u32 GsTransport_HashAddress(Conn062 **pp, u32 n);
s32 GsTransport_CompareAddress(Conn062 **a, Conn062 **b);
void GsTransport_FreeConnectionCb(Conn062 **p);








}

}
}

namespace N022868b0 {
extern "C" {


// ov065_063: GameSpy NAT negotiation client (0x022868b0..0x022871ac)

#define SWAP32(x) ((((x) << 24) & 0xff000000) | ((((x) << 8) & 0xff0000) | ((((x) >> 24) & 0xff) | (((x) >> 8) & 0xff00))))
#define SWAP16(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))












extern "C" {
extern s32 data_ov065_02291504;
extern char data_ov065_02291508[];



extern u8 data_ov065_0228e16c[];
extern char data_ov065_0228e174[];
extern char data_ov065_0228e190[];
extern char data_ov065_0228e1ac[];
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

namespace N022868b0 { extern "C" {
extern "C" char *GsTransport_AddressToString(u32 ip, const char *port, char *buf) {
    GsInAddr a;
    if (buf == NULL) {
        data_ov065_02291504 = data_ov065_02291504 ^ 1;
        buf = data_ov065_02291508 + data_ov065_02291504 * 0x16;
    }
    if (ip != 0) {
        a.addr = ip;
        if (port != NULL) {
            OS_SPrintf(buf, "%s:%d", Sock_InetNtoA(a), port);
        } else {
            OS_SPrintf(buf, "%s", Sock_InetNtoA(a));
        }
    } else if (port != NULL) {
        OS_SPrintf(buf, ":%d", port);
    } else {
        buf[0] = 0;
    }
    return buf;
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_ParseAddress(char *s, u32 *pip, u16 *pport) {
    char host[0x100];
    u32 ip;
    u32 port;
    char *colon;
    char *q;
    s32 c, r;
    if (s == 0 || *s == 0) {
        ip = 0;
        port = 0;
    } else {
        colon = func_0212a120(s, ':');
        port = (u32)colon;
        if (colon == 0) {
            port = 0;
        } else {
            if (colon == s) {
                s = 0;
                ip = 0;
            } else {
                s32 n = colon - s;
                memcpy(host, s, n);
                host[n] = 0;
                s = host;
            }
            q = colon + 1;
            c = *q;
            if (c != 0) {
                do {
                    if (c < 0 || c >= 0x80) {
                        c = 0;
                    } else {
                        c = data_0213a510[c] & 8;
                    }
                    if (c == 0) {
                        return FALSE;
                    }
                    q++;
                    c = *q;
                } while (c != 0);
            }
            r = func_0212b770(colon + 1);
            if (r < 0 || r > 0xffff) {
                return FALSE;
            }
            port = (u16)r;
        }
        if (s != 0) {
            ip = GsSock_InetAddr(s);
            if (ip == -1) {
                Unk_ov065_022867c0_Host *h = Sock_GetHostByName(s);
                if (h == 0) {
                    return FALSE;
                }
                ip = **h->addrList;
            }
        }
    }
    if (pip != 0) {
        *pip = ip;
    }
    if (pport != 0) {
        *pport = port;
    }
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_FixMessage(char **s, s32 *len) {
    char *p = *s;
    if (p == 0) {
        *s = "";
        *len = 0;
    } else if (*len == -1) {
        *len = STD_GetStringLength(p) + 1;
    }
}
} }

namespace N02285f3c { extern "C" {
u32 GsTransport_HashAddress(Conn062 **pp, u32 n) {
    Conn062 *p = *pp;
    return (p->remoteIp * p->remotePort) % n;
}
} }

namespace N02285f3c { extern "C" {
s32 GsTransport_CompareAddress(Conn062 **a, Conn062 **b) {
    Conn062 *x = *a;
    Conn062 *y = *b;
    if (x->remoteIp != y->remoteIp) {
        return x->remoteIp - y->remoteIp;
    }
    return (s16)(x->remotePort - y->remotePort);
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_FreeConnectionCb(Conn062 **p) {
    GsTransport_FreeConnection(*p);
}
} }

namespace N02285f3c { extern "C" {
Conn062 *GsTransport_FindConnection(Sock062 *c, u32 ip, u16 port) {
    Conn062 *key;
    Conn062 tmp;
    Conn062 **e;
    tmp.remoteIp = ip;
    tmp.remotePort = port;
    key = &tmp;
    e = (Conn062 **)GsHash_Find(c->connections, &key);
    if (e != 0) {
        return *e;
    }
    return 0;
}
} }

namespace N02285f3c { extern "C" {
s32 GsTransport_CreateSocketImpl(Sock062 **out, char *addr, u32 rsz, u32 ssz, s32 arg) {
    struct {
        u16 port;
        Sa062 sa;
        s32 ip;
        s32 len;
    } l;
    Sock062 *c;
    u32 *w;
    GsSock_StartupStub();
    if (ssz == 0) {
        ssz = 0x10000;
    }
    if (rsz == 0) {
        rsz = 0x10000;
    }
    if (GsTransport_ParseAddress(addr, (u32 *)&l.ip, &l.port) == 0) {
        return 4;
    }
    c = (Sock062 *)GsUtil_Alloc(0x44);
    if (c == 0) {
        return 1;
    }
    func_0212899c(c, 0, 0x44);
    c->sock = -1;
    c->incomingBufferSize = ssz;
    c->outgoingBufferSize = rsz;
    c->socketErrorCallback = (GsTransportSocketErrorCallback)arg;
    c->connections = GsHash_NewEx(4, 0x20, 2, GsTransport_HashAddress, GsTransport_CompareAddress, 0);
    if (c->connections == 0) {
        GsUtil_Free(c);
        return 1;
    }
    c->closedConnections = GsArray_New(4, 4, (void *)GsTransport_FreeConnectionCb);
    if (c->closedConnections == 0) {
        GsHash_Free(c->connections);
        GsUtil_Free(c);
        return 1;
    }
    c->sock = GsSock_Socket(2, 2, 0);
    if (c->sock == -1) {
        GsHash_Free(c->connections);
        GsArray_Free(c->closedConnections);
        GsUtil_Free(c);
        return 3;
    }
    w = (u32 *)&l.sa;
    w[0] = 0;
    w[1] = 0;
    l.sa.family = 2;
    l.sa.addr = l.ip;
    {
        u16 t = l.port;
        l.sa.port = ((t >> 8) & 0xff) | ((t << 8) & 0xff00);
    }
    if (GsSock_Bind(c->sock, (Sa062 *)w, 8) == -1) {
        GsSock_Close(c->sock);
        GsHash_Free(c->connections);
        GsArray_Free(c->closedConnections);
        GsUtil_Free(c);
        return 3;
    }
    l.len = 8;
    GsSock_GetSockName(c->sock, &l.sa, &l.len);
    c->localIp = l.sa.addr;
    {
        u16 t = l.sa.port;
        c->localPort = ((t >> 8) & 0xff) | ((t << 8) & 0xff00);
    }
    *out = c;
    return 0;
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_FreeSocket(Sock062 *c) {
    if (c->callbackLevel != 0) {
        c->freePending = 1;
        return;
    }
    GsSock_Close(c->sock);
    GsHash_Free(c->connections);
    GsArray_Free(c->closedConnections);
    GsUtil_Free(c);
    GsSock_CleanupStub();
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_SetConnectAttemptCallback(Sock062 *c, s32 v) {
    c->connectAttemptCallback = (GsTransportConnectAttemptCallback)v;
}
} }

namespace N02285f3c { extern "C" {
void *GsTransport_AllocConnection() {
    return GsUtil_Alloc(0xa0);
}
} }

namespace N02285f3c { extern "C" {
s32 GsTransport_NewConnection(Sock062 *c, Conn062 **out, u32 ip, u16 port) {
    Conn062 *p = NULL;
    if (GsTransport_FindConnection(c, ip, port) != 0) {
        return 5;
    }
    p = (Conn062 *)GsTransport_AllocConnection();
    if (p != 0) {
        func_0212899c(p, 0, 0xa0);
        p->remoteIp = ip;
        p->remotePort = port;
        p->socket = c;
        p->startTime = GsUtil_GetTimeMs();
        p->lastSendTime = p->startTime;
        p->serialNumber = 0;
        p->expectedSerialNumber = 0;
        if (GsTransport_BufAlloc(&p->incomingBuffer, c->incomingBufferSize) != 0 && GsTransport_BufAlloc(&p->outgoingBuffer, c->outgoingBufferSize) != 0) {
            p->incomingMessages = GsArray_New(0x10, 0x40, 0);
            if (p->incomingMessages != 0) {
                p->outgoingMessages = GsArray_New(0x10, 0x40, 0);
                if (p->outgoingMessages != 0) {
                    p->sendFilters = GsArray_New(4, 2, 0);
                    if (p->sendFilters != 0) {
                        p->receiveFilters = GsArray_New(4, 2, 0);
                        if (p->receiveFilters != 0) {
                            GsHash_Insert(c->connections, &p);
                            *out = GsTransport_FindConnection(c, ip, port);
                            if (*out != 0) {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (p != 0) {
        GsUtil_Free(p->incomingBuffer.data);
        GsUtil_Free(p->outgoingBuffer.data);
        if (p->incomingMessages != 0) {
            GsArray_Free(p->incomingMessages);
        }
        if (p->outgoingMessages != 0) {
            GsArray_Free(p->outgoingMessages);
        }
        if (p->sendFilters != 0) {
            GsArray_Free(p->sendFilters);
        }
        if (p->receiveFilters != 0) {
            GsArray_Free(p->receiveFilters);
        }
        GsUtil_Free(p);
    }
    return 1;
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_Release(Conn062 *p) {
    if (p->freeAtAcceptReject == 0 && p->callbackLevel == 0) {
        if (p->state == 7) {
            s32 n = GsArray_Count(*(void **)((u8 *)p->socket + 0x10));
            s32 i = 0;
            for (; i < n; i++) {
                Conn062 *q = p;
                if (q == *(Conn062 **)GsArray_At(q->socket->closedConnections, i)) {
                    GsArray_DeleteAt(q->socket->closedConnections, i);
                    return;
                }
            }
        } else {
            GsHash_Remove(p->socket->connections, &p);
        }
    }
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_SendTo(Sock062 *c, u32 ip, u16 port, char *buf, s32 len) {
    Sa062 sa;
    u32 *w;
    s32 r;
    GsTransport_FixMessage(&buf, &len);
    if (GsSock_CanWrite(c->sock) == 0) {
        return TRUE;
    }
    w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.family = 2;
    sa.addr = ip;
    sa.port = ((port >> 8) & 0xff) | ((port << 8) & 0xff00);
    r = GsSock_SendTo(c->sock, buf, len, 0, (Sa062 *)w, 8);
    if (r == -1) {
        r = GsSock_GetLastError(c->sock);
        if (r == -15) {
            if (GsTransport_OnConnectionReset(c, ip, port) == 0) {
                return FALSE;
            }
        } else if (r == -42 || r == -6) {
            return TRUE;
        } else if (r != -35) {
            GsTransport_OnSocketError(c);
            return FALSE;
        }
    } else if (c->sendDumpCallback != 0) {
        Conn062 *p = GsTransport_FindConnection(c, ip, port);
        if (GsTransport_CallDumpCb(c, p, ip, port, 0, buf, len, 1) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_ThinkConnectionCb(Conn062 **pp, u32 *pnow) {
    Conn062 *p = *pp;
    u32 now = *pnow;
    if (p->state != 7) {
        if (GsTransport_ThinkConnection(p, now) == 0) {
            return FALSE;
        }
    }
    if (p->state == 7 && p->freeAtAcceptReject == 0 && p->callbackLevel == 0) {
        GsTransport_Release(p);
    }
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_ThinkAll(Sock062 *c) {
    u32 now = GsUtil_GetTimeMs();
    if (GsHash_FindIf(c->connections, GsTransport_ThinkConnectionCb, &now) == 0) {
        return TRUE;
    }
    return FALSE;
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_FreeClosed(Sock062 *c) {
    s32 i = GsArray_Count(c->closedConnections) - 1;
    for (; i >= 0; i--) {
        GsTransport_Release(*(Conn062 **)GsArray_At(c->closedConnections, i));
    }
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_OnSocketError(Sock062 *c) {
    if (c->hasError == 0) {
        c->hasError = 1;
        GsTransport_CloseAll(c);
        if (GsTransport_CallSocketErrorCb(c) != 0) {
            GsTransport_FreeSocket(c);
        }
    }
}
} }

namespace N02285f3c { extern "C" {
u32 GsTransport_ReadU16(u8 *buf, s32 off) {
    u16 t = (buf[off] << 8) & 0xff00;
    return t | buf[off + 1];
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_WriteU16(u8 *buf, s32 off, s32 v) {
    buf[off] = v >> 8;
    buf[off + 1] = v;
}
} }

namespace N02285f3c { extern "C" {
s16 GsTransport_SeqDiff(u32 a, u32 b) {
    return a - b;
}
} }

namespace N02285f3c { extern "C" {
s32 GsTransport_ConnectionClosed(Conn062 *p, s32 a, s32 b) {
    s32 st = p->state;
    if (st < 5) {
        if (p->initiated != 0) {
            GsTransport_MarkClosed(p);
            if (GsTransport_CallConnectedCb(p, a, 0, 0) == 0) {
                return FALSE;
            }
        } else {
            if (st == 4) {
                p->freeAtAcceptReject = 1;
            }
            GsTransport_MarkClosed(p);
        }
    } else if (st != 7) {
        GsTransport_MarkClosed(p);
        if (GsTransport_CallClosedCb(p, b) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
s32 GsTransport_ProtocolError(Conn062 *p) {
    return GsTransport_ConnectionClosed(p, 7, 2);
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_AbortConnection(Conn062 *p) {
    if (GsTransport_SendClosed(p) != 0) {
        return GsTransport_ConnectionClosed(p, 1, 4);
    }
    return FALSE;
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_ProcessAck(Conn062 *p, u32 ack) {
    s32 n, i, base;
    n = GsArray_Count(p->outgoingMessages);
    if (n == 0) {
        return TRUE;
    }
    for (i = 0; i < n; i++) {
        GsTransportOutMsg *e = (GsTransportOutMsg *)GsArray_At(p->outgoingMessages, i);
        if (GsTransport_SeqDiff(e->serialNumber, ack) >= 0) {
            break;
        }
    }
    if (i == 0) {
        return TRUE;
    }
    while (i-- != 0) {
        GsArray_DeleteAt(p->outgoingMessages, i);
    }
    n = GsArray_Count(p->outgoingMessages);
    if (n == 0) {
        p->outgoingBuffer.len = 0;
        return TRUE;
    }
    base = ((GsTransportOutMsg *)GsArray_At(p->outgoingMessages, 0))->offset;
    for (i = 0; i < n; i++) {
        GsTransportOutMsg *e = (GsTransportOutMsg *)GsArray_At(p->outgoingMessages, i);
        e->offset = e->offset - base;
    }
    GsTransport_BufRemove(&p->outgoingBuffer, 0, base);
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_HandleUnreliableData(Conn062 *p, s32 x, s32 y) {
    if (p->state != 5 && p->state != 6) {
        return TRUE;
    }
    if (GsArray_Count(p->receiveFilters) != 0) {
        if (GsTransport_CallRecvFilter(p, 0, x, y, 0) != 0) {
            return TRUE;
        }
        return FALSE;
    }
    if (GsTransport_CallReceivedCb(p, x, y, 0) != 0) {
        return TRUE;
    }
    return FALSE;
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_HandleReliableData(Conn062 *p, s32 x, s32 y) {
    if (p->state != 5 && p->state != 6) {
        if (GsTransport_ProtocolError(p) == 0) {
            return FALSE;
        }
    } else {
        if (GsArray_Count(p->receiveFilters) != 0) {
            if (GsTransport_CallRecvFilter(p, 0, x, y, 1) != 0) {
                return TRUE;
            }
            return FALSE;
        }
        if (GsTransport_CallReceivedCb(p, x, y, 1) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleClientChallenge(Cn *c, void *p, s32 n)
{
    u8 a[0x20];
    u8 b[0x20];
    if (c->state != 2) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x20) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    GsUtil_MakeResponse32(a, p);
    GsTransport_MakeChallenge(b);
    GsUtil_MakeResponse32(c->response, b);
    if (GsTransport_SendServerChallenge(c, a, b) == 0) return FALSE;
    c->state = 3;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleServerChallenge(Cn *c, void *p, s32 n)
{
    u8 buf[0x20];
    if (c->state != 0) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x40) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (GsUtil_CompareResponse32(p, c->response) == 0) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    GsUtil_MakeResponse32(buf, (u8 *)p + 0x20);
    if (GsTransport_SendClientResponse(c, buf, c->initialMessage, c->initialMessageLen) == 0) return FALSE;
    if (c->initialMessage != 0) {
        GsUtil_Free(c->initialMessage);
        c->initialMessage = 0;
    }
    c->state = 1;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleClientResponse(Cn *c, void *p, s32 n)
{
    if (c->state != 3) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x20) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (GsUtil_CompareResponse32(p, c->response) == 0) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (c->socket->connectAttemptCallback == 0) {
        if (GsTransport_SendClosed(c) == 0) return FALSE;
        GsTransport_MarkClosed(c);
        return TRUE;
    }
    c->state = 4;
    if (GsTransport_CallConnectAttemptCb(c->socket, c, c->remoteIp, c->remotePort, GsUtil_GetTimeMs() - c->challengeTime, (u8 *)p + 0x20, n - 0x20) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleAccepted(Cn *c)
{
    if (c->state != 1) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    c->state = 5;
    if (GsTransport_CallConnectedCb(c, 0, 0, 0) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleRejected(Cn *c, void *p, s32 n)
{
    if (c->state != 1) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    GsTransport_MarkClosed(c);
    if (GsTransport_SendClosed(c) == 0) return FALSE;
    if (GsTransport_CallConnectedCb(c, 2, p, n) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleRemoteClose(Cn *c)
{
    if (GsTransport_SendClosed(c) == 0) return FALSE;
    s32 f;
    switch (c->state) { case 6: f = 0; break; default: f = 1; break; }
    if (GsTransport_ConnectionClosed(c, 2, f) == 0) return FALSE;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_DispatchReliable(Cn *c, s32 mode, void *p, s32 n)
{
    c->expectedSerialNumber = c->expectedSerialNumber + 1;
    if (mode == 0) {
        if (GsTransport_HandleReliableData(c, p, n) == 0) return FALSE;
    } else if (mode == 1) {
        if (GsTransport_HandleClientChallenge(c, p, n) == 0) return FALSE;
    } else if (mode == 2) {
        if (GsTransport_HandleServerChallenge(c, p, n) == 0) return FALSE;
    } else if (mode == 3) {
        if (GsTransport_HandleClientResponse(c, p, n) == 0) return FALSE;
    } else if (mode == 4) {
        if (GsTransport_HandleAccepted(c) == 0) return FALSE;
    } else if (mode == 5) {
        if (GsTransport_HandleRejected(c, p, n) == 0) return FALSE;
    } else if (mode == 6) {
        if (GsTransport_HandleRemoteClose(c) == 0) return FALSE;
    }
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
s32 GsTransport_CompareInRecord(It *a, It *b)
{
    return GsTransport_SeqDiff(a->serialNumber, b->serialNumber);
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_StoreOutOfOrder(Cn *c, s32 a, u32 seq, void *p, s32 n, s32 *out)
{
    s32 cnt = GsArray_Count(c->incomingMessages);
    s32 i;
    It rec;
    for (i = 0; i < cnt; i++) {
        It *q = (It *)GsArray_At(c->incomingMessages, i);
        if (q->serialNumber == seq) {
            *out = 0;
            return TRUE;
        }
        if (GsTransport_SeqDiff(q->serialNumber, seq) > 0) break;
    }
    if (GsTransport_BufFreeSpace(&c->incomingBuffer) < n) {
        *out = 1;
        return TRUE;
    }
    rec.offset = c->incomingBuffer.len;
    rec.len = n;
    rec.type = a;
    rec.serialNumber = seq;
    GsArray_InsertSorted(c->incomingMessages, &rec, (void *)GsTransport_CompareInRecord);
    if (cnt + 1 != GsArray_Count(c->incomingMessages)) {
        *out = 1;
        return TRUE;
    }
    GsTransport_BufAppend(&c->incomingBuffer, p, n);
    if (cnt == 0) {
        if (GsTransport_SendNack(c, c->expectedSerialNumber, seq - 1) == 0) return FALSE;
    } else {
        It *q = (It *)GsArray_At(c->incomingMessages, cnt);
        if (q->serialNumber == seq) {
            It *r = (It *)GsArray_At(c->incomingMessages, cnt - 1);
            if ((u16)GsTransport_SeqDiff(seq, r->serialNumber) > 1) {
                if (GsTransport_SendNack(c, r->serialNumber + 1, seq - 1) == 0) return FALSE;
            }
        }
    }
    *out = 0;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
void GsTransport_RemoveInRecord(Cn *c, It *e, s32 idx)
{
    s32 mx = 0;
    s32 start = e->offset;
    s32 len = e->len;
    s32 n;
    s32 i;
    GsArray_DeleteAt(c->incomingMessages, idx);
    n = GsArray_Count(c->incomingMessages);
    for (i = 0; i < n; i++) {
        It *q = (It *)GsArray_At(c->incomingMessages, i);
        if (q->offset > start) {
            q->offset = q->offset - len;
            {
                s32 t = q->offset + q->len;
                if (mx <= t) mx = t;
            }
        }
    }
    GsTransport_BufRemove(&c->incomingBuffer, start, len);
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_DeliverQueued(Cn *c)
{
    s32 i;
    It *e;
again:
    i = GsArray_Count(c->incomingMessages) - 1;
    while (i >= 0) {
        e = (It *)GsArray_At(c->incomingMessages, i);
        if (e->serialNumber == c->expectedSerialNumber) {
            if (GsTransport_DispatchReliable(c, e->type, c->incomingBuffer.data + e->offset, e->len) == 0) return FALSE;
            GsTransport_RemoveInRecord(c, e, i);
            goto again;
        }
        i--;
    }
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
void GsTransport_ScheduleAck(Cn *c)
{
    if (c->pendingAck == 0) {
        c->pendingAck = 1;
        c->pendingAckTime = GsUtil_GetTimeMs();
    }
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleReliable(Cn *c, s32 a, void *p, s32 n)
{
    u32 v;
    if (n < 7) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    v = GsTransport_ReadU16(p, 3);
    if (GsTransport_ProcessAck(c, GsTransport_ReadU16(p, 5)) == 0) return FALSE;
    if (v == c->expectedSerialNumber) {
        GsTransport_ScheduleAck(c);
        if (GsTransport_DispatchReliable(c, a, (u8 *)p + 7, n - 7) == 0) return FALSE;
        if (GsTransport_DeliverQueued(c) != 0) return TRUE;
        return FALSE;
    }
    if (GsTransport_SeqDiff(v, c->expectedSerialNumber) < 0) {
        GsTransport_ScheduleAck(c);
        return TRUE;
    }
    {
        s32 flag;
        if (GsTransport_StoreOutOfOrder(c, a, v, (u8 *)p + 7, n - 7, &flag) == 0) return FALSE;
        if (flag != 0) {
            if (GsTransport_AbortConnection(c) == 0) return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleAck(Cn *c, void *p, s32 n)
{
    if (n != 2) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (GsTransport_ProcessAck(c, GsTransport_ReadU16(p, 0)) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleNack(Cn *c, void *p, s32 n)
{
    s32 lo = GsTransport_ReadU16(p, 0);
    s32 hi;
    s32 cnt;
    s32 i;
    if (n == 2) {
        hi = lo;
    } else if (n == 4) {
        hi = GsTransport_ReadU16(p, 2);
    } else {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    cnt = GsArray_Count(c->outgoingMessages);
    for (i = 0; i < cnt; i++) {
        GsTransportOutMsg *e = (GsTransportOutMsg *)GsArray_At(c->outgoingMessages, i);
        if (GsTransport_SeqDiff(e->serialNumber, lo) >= 0 && GsTransport_SeqDiff(e->serialNumber, hi) <= 0) {
            if (GsTransport_ResendMessage(c, e) == 0) return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
s32 GsTransport_HandlePing(Cn *c, void *p, s32 n)
{
    return GsTransport_SendPong(c, p, n);
}
} }
