// mwcc-flags: -O4,p -str reuse

#include "types.h"


extern "C" { s32 data_ov065_02291504; } //@
extern "C" { char data_ov065_02291508[0x2c]; } //@

namespace N02285630 {
extern "C" {


// ov065_061: SSL/TLS-like handshake state machine (0x02285630..0x02285eb8)

struct Unk_ov065_02285630_Item {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
};

struct Unk_ov065_02285630_Item8 {
    u8 pad_00[8];
    u16 unk_08;
};

struct Unk_ov065_02285630_Peer {
    u8 pad_00[0x20];
    s32 unk_20;
};

struct Unk_ov065_02285630_Buf {
    u8 *unk_00;
    s32 unk_04;
};

struct Unk_ov065_02285630_Conn {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    Unk_ov065_02285630_Peer *unk_08;
    s32 unk_0c;
    u8 pad_10[0x24];
    s32 unk_34;
    void *unk_38;
    s32 unk_3c;
    u8 pad_40[4];
    Unk_ov065_02285630_Buf unk_44;
    s32 unk_4c;
    u8 pad_50[0xc];
    void *unk_5c;
    void *unk_60;
    u8 pad_64[2];
    u16 unk_66;
    u8 unk_68[0x24];
    s32 unk_8c;
    s32 unk_90;
    s32 unk_94;
};

struct Unk_ov065_022856f8_B4 { u8 a, b, c, d; };

typedef Unk_ov065_02285630_Conn Cn;
typedef Unk_ov065_02285630_Item It;

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

struct Unk_ov065_0228659c_Conn;

struct Unk_ov065_02285f3c_Peer {
    u32 unk_00;
    u16 unk_04;
    Unk_ov065_0228659c_Conn *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    u8 pad_28[0x44 - 0x28];
    void *unk_44;
    u8 pad_48[0x50 - 0x48];
    void *unk_50;
    s32 unk_54;
    s32 unk_58;
    void *unk_5c;
    void *unk_60;
    u16 unk_64;
    u16 unk_66;
    u8 pad_68[0x88 - 0x68];
    u32 unk_88;
    u8 pad_8c[0x98 - 0x8c];
    void *unk_98;
    void *unk_9c;
};

struct Unk_ov065_0228659c_Conn {
    s32 unk_00;
    u32 unk_04;
    u16 unk_08;
    void *unk_0c;
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[0x38 - 0x2c];
    u32 unk_38;
    u32 unk_3c;
};

struct Unk_ov065_0228627c_Sa {
    u8 unk_0;
    u8 unk_1;
    u16 unk_2;
    u32 unk_4;
};

struct Unk_ov065_022867c0_Host {
    char *unk_00;
    char **unk_04;
    s16 unk_08;
    s16 unk_0a;
    u32 **unk_0c;
};

typedef Unk_ov065_02285f3c_Peer Peer062;
typedef Unk_ov065_0228659c_Conn Conn062;
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
void *GsHash_FindIf(void *t, BOOL (*cb)(Peer062 **, u32 *), void *arg);
void *GsHash_Find(void *t, void *key);
void GsHash_Remove(void *t, void *key);
void GsHash_Insert(void *t, void *key);
void GsHash_Free(void *t);
void *GsHash_NewEx(s32 esize, s32 n, s32 cap, u32 (*hash)(Peer062 **, u32), s32 (*cmp)(Peer062 **, Peer062 **),
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
s32 GsTransport_CallDumpCb(Conn062 *c, Peer062 *p, u32 ip, u32 port, s32 a, char *buf, s32 len, s32 b);
s32 GsTransport_CallRecvFilter(Peer062 *p, s32 a, s32 b, s32 c, s32 d);
s32 GsTransport_CallClosedCb(Peer062 *p, s32 a);
s32 GsTransport_CallReceivedCb(Peer062 *p, s32 a, s32 b, s32 c);
s32 GsTransport_CallConnectedCb(Peer062 *p, s32 a, s32 b, s32 c);
s32 GsTransport_CallSocketErrorCb(Conn062 *c);
void GsTransport_FreeConnection(Peer062 *p);
void GsTransport_MarkClosed(Peer062 *p);
s32 GsTransport_ThinkConnection(Peer062 *p, u32 now);
s32 GsTransport_SendClosed(Peer062 *p);
s32 GsTransport_CloseAll(Conn062 *c);
s32 GsTransport_OnConnectionReset(Conn062 *c, u32 ip, u32 port);
s32 GsTransport_ProtocolError(Peer062 *p);
s32 GsTransport_ConnectionClosed(Peer062 *p, s32 a, s32 b);
s16 GsTransport_SeqDiff(u32 a, u32 b);
void GsTransport_OnSocketError(Conn062 *c);
void GsTransport_Release(Peer062 *p);
Peer062 *GsTransport_FindConnection(Conn062 *c, u32 ip, u16 port);
void GsTransport_FreeSocket(Conn062 *c);
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



struct Unk_ov065_02286034_Ent {
    s32 unk_00;
    s32 unk_04;
    u16 unk_08;
};










BOOL GsTransport_ThinkConnectionCb(Peer062 **pp, u32 *pnow);









u32 GsTransport_HashAddress(Peer062 **pp, u32 n);
s32 GsTransport_CompareAddress(Peer062 **a, Peer062 **b);
void GsTransport_FreeConnectionCb(Peer062 **p);








}

}
}

namespace N022868b0 {
extern "C" {


// ov065_063: GameSpy NAT negotiation client (0x022868b0..0x022871ac)

#define SWAP32(x) ((((x) << 24) & 0xff000000) | ((((x) << 8) & 0xff0000) | ((((x) >> 24) & 0xff) | (((x) >> 8) & 0xff00))))
#define SWAP16(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))

struct Unk_ov065_022868b0_InAddr {
    u32 addr;
};

struct Unk_ov065_02286c74_Sa {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

typedef void (*Unk_ov065_02286c74_Cb34)(s32 state, void *user);
typedef void (*Unk_ov065_02286c74_Cb38)(s32 code, s32 fd, void *arg, void *user);

struct Unk_ov065_02286c74_Ctx {
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14[3];
    s32 unk_20;
    s32 unk_24;
    u32 unk_28;
    u32 unk_2c;
    u16 unk_30;
    u8 unk_32;
    u8 unk_33;
    Unk_ov065_02286c74_Cb34 unk_34;
    Unk_ov065_02286c74_Cb38 unk_38;
    void *unk_3c;
};

struct Unk_ov065_02286934_Buf14 {
    u8 b[0x14];
};

struct Unk_ov065_02286934_Buf15 {
    u8 b[0x15];
};

struct Unk_ov065_02286bb4_Magic {
    u8 b[6];
};

struct Unk_ov065_02286bb4_Pkt {
    u8 magic[6];
    u8 version;
    u8 type;
    u32 cookie;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
};

struct Unk_ov065_02287000_Pkt {
    u8 magic[6];
    u8 version;
    u8 type;
    u32 cookie;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    char name[0x43];
};

struct Unk_ov065_02286f04_Hostent {
    char *name;
    char **aliases;
    s16 addrtype;
    s16 length;
    u32 **addr_list;
};

struct Unk_ov065_022871ac_List {
    u8 pad_00[0xc];
    u8 *unk_0c;
};

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

char *Sock_InetNtoA(Unk_ov065_022868b0_InAddr a);
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
s32 GsNatNeg_Remove(Unk_ov065_02286c74_Ctx *ctx);
s32 GsNatNeg_Add();
Unk_ov065_02286c74_Ctx *GsNatNeg_FindByCookie(u32 cookie);

u32 GsNatNeg_GetLocalIp();
u32 GsNatNeg_GetLocalPort(s32 fd);
void GsNatNeg_SendInit(Unk_ov065_02286c74_Ctx *ctx);
void GsNatNeg_SendPeerPing(Unk_ov065_02286c74_Ctx *ctx);
u32 GsNatNeg_ResolveHost(const char *name);
u32 GsNatNeg_ResolveServer(const char *name, const char *s);
s32 GsNatNeg_ResolveServers();
void GsNatNeg_Cancel(u32 cookie);
void GsNatNeg_Process(Unk_ov065_02286c74_Ctx *ctx);
void GsNatNeg_SendConnectAck(Unk_ov065_02286c74_Ctx *ctx, Unk_ov065_02286c74_Sa *sa);
void GsNatNeg_HandleConnect(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void GsNatNeg_HandlePeerPing(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void GsNatNeg_HandleServerReply(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void GsNatNeg_HandlePacket(u8 *pkt, s32 len, Unk_ov065_02286c74_Sa *sa);
}


















}
}

namespace N022868b0 { extern "C" {
extern "C" char *GsTransport_AddressToString(u32 ip, const char *port, char *buf) {
    Unk_ov065_022868b0_InAddr a;
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
                ip = **h->unk_0c;
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
u32 GsTransport_HashAddress(Peer062 **pp, u32 n) {
    Peer062 *p = *pp;
    return (p->unk_00 * p->unk_04) % n;
}
} }

namespace N02285f3c { extern "C" {
s32 GsTransport_CompareAddress(Peer062 **a, Peer062 **b) {
    Peer062 *x = *a;
    Peer062 *y = *b;
    if (x->unk_00 != y->unk_00) {
        return x->unk_00 - y->unk_00;
    }
    return (s16)(x->unk_04 - y->unk_04);
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_FreeConnectionCb(Peer062 **p) {
    GsTransport_FreeConnection(*p);
}
} }

namespace N02285f3c { extern "C" {
Peer062 *GsTransport_FindConnection(Conn062 *c, u32 ip, u16 port) {
    Peer062 *key;
    Peer062 tmp;
    Peer062 **e;
    tmp.unk_00 = ip;
    tmp.unk_04 = port;
    key = &tmp;
    e = (Peer062 **)GsHash_Find(c->unk_0c, &key);
    if (e != 0) {
        return *e;
    }
    return 0;
}
} }

namespace N02285f3c { extern "C" {
s32 GsTransport_CreateSocketImpl(Conn062 **out, char *addr, u32 rsz, u32 ssz, s32 arg) {
    struct {
        u16 port;
        Sa062 sa;
        s32 ip;
        s32 len;
    } l;
    Conn062 *c;
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
    c = (Conn062 *)GsUtil_Alloc(0x44);
    if (c == 0) {
        return 1;
    }
    func_0212899c(c, 0, 0x44);
    c->unk_00 = -1;
    c->unk_3c = ssz;
    c->unk_38 = rsz;
    c->unk_24 = arg;
    c->unk_0c = GsHash_NewEx(4, 0x20, 2, GsTransport_HashAddress, GsTransport_CompareAddress, 0);
    if (c->unk_0c == 0) {
        GsUtil_Free(c);
        return 1;
    }
    c->unk_10 = GsArray_New(4, 4, (void *)GsTransport_FreeConnectionCb);
    if (c->unk_10 == 0) {
        GsHash_Free(c->unk_0c);
        GsUtil_Free(c);
        return 1;
    }
    c->unk_00 = GsSock_Socket(2, 2, 0);
    if (c->unk_00 == -1) {
        GsHash_Free(c->unk_0c);
        GsArray_Free(c->unk_10);
        GsUtil_Free(c);
        return 3;
    }
    w = (u32 *)&l.sa;
    w[0] = 0;
    w[1] = 0;
    l.sa.unk_1 = 2;
    l.sa.unk_4 = l.ip;
    {
        u16 t = l.port;
        l.sa.unk_2 = ((t >> 8) & 0xff) | ((t << 8) & 0xff00);
    }
    if (GsSock_Bind(c->unk_00, (Sa062 *)w, 8) == -1) {
        GsSock_Close(c->unk_00);
        GsHash_Free(c->unk_0c);
        GsArray_Free(c->unk_10);
        GsUtil_Free(c);
        return 3;
    }
    l.len = 8;
    GsSock_GetSockName(c->unk_00, &l.sa, &l.len);
    c->unk_04 = l.sa.unk_4;
    {
        u16 t = l.sa.unk_2;
        c->unk_08 = ((t >> 8) & 0xff) | ((t << 8) & 0xff00);
    }
    *out = c;
    return 0;
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_FreeSocket(Conn062 *c) {
    if (c->unk_1c != 0) {
        c->unk_14 = 1;
        return;
    }
    GsSock_Close(c->unk_00);
    GsHash_Free(c->unk_0c);
    GsArray_Free(c->unk_10);
    GsUtil_Free(c);
    GsSock_CleanupStub();
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_SetConnectAttemptCallback(Conn062 *c, s32 v) {
    c->unk_20 = v;
}
} }

namespace N02285f3c { extern "C" {
void *GsTransport_AllocConnection() {
    return GsUtil_Alloc(0xa0);
}
} }

namespace N02285f3c { extern "C" {
s32 GsTransport_NewConnection(Conn062 *c, Peer062 **out, u32 ip, u16 port) {
    Peer062 *p = NULL;
    if (GsTransport_FindConnection(c, ip, port) != 0) {
        return 5;
    }
    p = (Peer062 *)GsTransport_AllocConnection();
    if (p != 0) {
        func_0212899c(p, 0, 0xa0);
        p->unk_00 = ip;
        p->unk_04 = port;
        p->unk_08 = c;
        p->unk_1c = GsUtil_GetTimeMs();
        p->unk_88 = p->unk_1c;
        p->unk_64 = 0;
        p->unk_66 = 0;
        if (GsTransport_BufAlloc(&p->unk_44, c->unk_3c) != 0 && GsTransport_BufAlloc(&p->unk_50, c->unk_38) != 0) {
            p->unk_5c = GsArray_New(0x10, 0x40, 0);
            if (p->unk_5c != 0) {
                p->unk_60 = GsArray_New(0x10, 0x40, 0);
                if (p->unk_60 != 0) {
                    p->unk_98 = GsArray_New(4, 2, 0);
                    if (p->unk_98 != 0) {
                        p->unk_9c = GsArray_New(4, 2, 0);
                        if (p->unk_9c != 0) {
                            GsHash_Insert(c->unk_0c, &p);
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
        GsUtil_Free(p->unk_44);
        GsUtil_Free(p->unk_50);
        if (p->unk_5c != 0) {
            GsArray_Free(p->unk_5c);
        }
        if (p->unk_60 != 0) {
            GsArray_Free(p->unk_60);
        }
        if (p->unk_98 != 0) {
            GsArray_Free(p->unk_98);
        }
        if (p->unk_9c != 0) {
            GsArray_Free(p->unk_9c);
        }
        GsUtil_Free(p);
    }
    return 1;
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_Release(Peer062 *p) {
    if (p->unk_14 == 0 && p->unk_24 == 0) {
        if (p->unk_0c == 7) {
            s32 n = GsArray_Count(*(void **)((u8 *)p->unk_08 + 0x10));
            s32 i = 0;
            for (; i < n; i++) {
                Peer062 *q = p;
                if (q == *(Peer062 **)GsArray_At(q->unk_08->unk_10, i)) {
                    GsArray_DeleteAt(q->unk_08->unk_10, i);
                    return;
                }
            }
        } else {
            GsHash_Remove(p->unk_08->unk_0c, &p);
        }
    }
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_SendTo(Conn062 *c, u32 ip, u16 port, char *buf, s32 len) {
    Sa062 sa;
    u32 *w;
    s32 r;
    GsTransport_FixMessage(&buf, &len);
    if (GsSock_CanWrite(c->unk_00) == 0) {
        return TRUE;
    }
    w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.unk_1 = 2;
    sa.unk_4 = ip;
    sa.unk_2 = ((port >> 8) & 0xff) | ((port << 8) & 0xff00);
    r = GsSock_SendTo(c->unk_00, buf, len, 0, (Sa062 *)w, 8);
    if (r == -1) {
        r = GsSock_GetLastError(c->unk_00);
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
    } else if (c->unk_28 != 0) {
        Peer062 *p = GsTransport_FindConnection(c, ip, port);
        if (GsTransport_CallDumpCb(c, p, ip, port, 0, buf, len, 1) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_ThinkConnectionCb(Peer062 **pp, u32 *pnow) {
    Peer062 *p = *pp;
    u32 now = *pnow;
    if (p->unk_0c != 7) {
        if (GsTransport_ThinkConnection(p, now) == 0) {
            return FALSE;
        }
    }
    if (p->unk_0c == 7 && p->unk_14 == 0 && p->unk_24 == 0) {
        GsTransport_Release(p);
    }
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_ThinkAll(Conn062 *c) {
    u32 now = GsUtil_GetTimeMs();
    if (GsHash_FindIf(c->unk_0c, GsTransport_ThinkConnectionCb, &now) == 0) {
        return TRUE;
    }
    return FALSE;
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_FreeClosed(Conn062 *c) {
    s32 i = GsArray_Count(c->unk_10) - 1;
    for (; i >= 0; i--) {
        GsTransport_Release(*(Peer062 **)GsArray_At(c->unk_10, i));
    }
}
} }

namespace N02285f3c { extern "C" {
void GsTransport_OnSocketError(Conn062 *c) {
    if (c->unk_18 == 0) {
        c->unk_18 = 1;
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
s32 GsTransport_ConnectionClosed(Peer062 *p, s32 a, s32 b) {
    s32 st = p->unk_0c;
    if (st < 5) {
        if (p->unk_10 != 0) {
            GsTransport_MarkClosed(p);
            if (GsTransport_CallConnectedCb(p, a, 0, 0) == 0) {
                return FALSE;
            }
        } else {
            if (st == 4) {
                p->unk_14 = 1;
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
s32 GsTransport_ProtocolError(Peer062 *p) {
    return GsTransport_ConnectionClosed(p, 7, 2);
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_AbortConnection(Peer062 *p) {
    if (GsTransport_SendClosed(p) != 0) {
        return GsTransport_ConnectionClosed(p, 1, 4);
    }
    return FALSE;
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_ProcessAck(Peer062 *p, u32 ack) {
    s32 n, i, base;
    n = GsArray_Count(p->unk_60);
    if (n == 0) {
        return TRUE;
    }
    for (i = 0; i < n; i++) {
        Unk_ov065_02286034_Ent *e = (Unk_ov065_02286034_Ent *)GsArray_At(p->unk_60, i);
        if (GsTransport_SeqDiff(e->unk_08, ack) >= 0) {
            break;
        }
    }
    if (i == 0) {
        return TRUE;
    }
    while (i-- != 0) {
        GsArray_DeleteAt(p->unk_60, i);
    }
    n = GsArray_Count(p->unk_60);
    if (n == 0) {
        p->unk_58 = 0;
        return TRUE;
    }
    base = ((Unk_ov065_02286034_Ent *)GsArray_At(p->unk_60, 0))->unk_00;
    for (i = 0; i < n; i++) {
        Unk_ov065_02286034_Ent *e = (Unk_ov065_02286034_Ent *)GsArray_At(p->unk_60, i);
        e->unk_00 = e->unk_00 - base;
    }
    GsTransport_BufRemove(&p->unk_50, 0, base);
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
BOOL GsTransport_HandleUnreliableData(Peer062 *p, s32 x, s32 y) {
    if (p->unk_0c != 5 && p->unk_0c != 6) {
        return TRUE;
    }
    if (GsArray_Count(p->unk_9c) != 0) {
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
BOOL GsTransport_HandleReliableData(Peer062 *p, s32 x, s32 y) {
    if (p->unk_0c != 5 && p->unk_0c != 6) {
        if (GsTransport_ProtocolError(p) == 0) {
            return FALSE;
        }
    } else {
        if (GsArray_Count(p->unk_9c) != 0) {
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
    if (c->unk_0c != 2) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x20) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    GsUtil_MakeResponse32(a, p);
    GsTransport_MakeChallenge(b);
    GsUtil_MakeResponse32(c->unk_68, b);
    if (GsTransport_SendServerChallenge(c, a, b) == 0) return FALSE;
    c->unk_0c = 3;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleServerChallenge(Cn *c, void *p, s32 n)
{
    u8 buf[0x20];
    if (c->unk_0c != 0) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x40) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (GsUtil_CompareResponse32(p, c->unk_68) == 0) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    GsUtil_MakeResponse32(buf, (u8 *)p + 0x20);
    if (GsTransport_SendClientResponse(c, buf, c->unk_38, c->unk_3c) == 0) return FALSE;
    if (c->unk_38 != 0) {
        GsUtil_Free(c->unk_38);
        c->unk_38 = 0;
    }
    c->unk_0c = 1;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleClientResponse(Cn *c, void *p, s32 n)
{
    if (c->unk_0c != 3) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x20) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (GsUtil_CompareResponse32(p, c->unk_68) == 0) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    if (c->unk_08->unk_20 == 0) {
        if (GsTransport_SendClosed(c) == 0) return FALSE;
        GsTransport_MarkClosed(c);
        return TRUE;
    }
    c->unk_0c = 4;
    if (GsTransport_CallConnectAttemptCb(c->unk_08, c, c->unk_00, c->unk_04, GsUtil_GetTimeMs() - c->unk_8c, (u8 *)p + 0x20, n - 0x20) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleAccepted(Cn *c)
{
    if (c->unk_0c != 1) {
        if (GsTransport_ProtocolError(c) != 0) return TRUE;
        return FALSE;
    }
    c->unk_0c = 5;
    if (GsTransport_CallConnectedCb(c, 0, 0, 0) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleRejected(Cn *c, void *p, s32 n)
{
    if (c->unk_0c != 1) {
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
    switch (c->unk_0c) { case 6: f = 0; break; default: f = 1; break; }
    if (GsTransport_ConnectionClosed(c, 2, f) == 0) return FALSE;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_DispatchReliable(Cn *c, s32 mode, void *p, s32 n)
{
    c->unk_66 = c->unk_66 + 1;
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
    return GsTransport_SeqDiff(a->unk_0c, b->unk_0c);
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_StoreOutOfOrder(Cn *c, s32 a, u32 seq, void *p, s32 n, s32 *out)
{
    s32 cnt = GsArray_Count(c->unk_5c);
    s32 i;
    It rec;
    for (i = 0; i < cnt; i++) {
        It *q = (It *)GsArray_At(c->unk_5c, i);
        if (q->unk_0c == seq) {
            *out = 0;
            return TRUE;
        }
        if (GsTransport_SeqDiff(q->unk_0c, seq) > 0) break;
    }
    if (GsTransport_BufFreeSpace(&c->unk_44) < n) {
        *out = 1;
        return TRUE;
    }
    rec.unk_00 = c->unk_4c;
    rec.unk_04 = n;
    rec.unk_08 = a;
    rec.unk_0c = seq;
    GsArray_InsertSorted(c->unk_5c, &rec, (void *)GsTransport_CompareInRecord);
    if (cnt + 1 != GsArray_Count(c->unk_5c)) {
        *out = 1;
        return TRUE;
    }
    GsTransport_BufAppend(&c->unk_44, p, n);
    if (cnt == 0) {
        if (GsTransport_SendNack(c, c->unk_66, seq - 1) == 0) return FALSE;
    } else {
        It *q = (It *)GsArray_At(c->unk_5c, cnt);
        if (q->unk_0c == seq) {
            It *r = (It *)GsArray_At(c->unk_5c, cnt - 1);
            if ((u16)GsTransport_SeqDiff(seq, r->unk_0c) > 1) {
                if (GsTransport_SendNack(c, r->unk_0c + 1, seq - 1) == 0) return FALSE;
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
    s32 start = e->unk_00;
    s32 len = e->unk_04;
    s32 n;
    s32 i;
    GsArray_DeleteAt(c->unk_5c, idx);
    n = GsArray_Count(c->unk_5c);
    for (i = 0; i < n; i++) {
        It *q = (It *)GsArray_At(c->unk_5c, i);
        if (q->unk_00 > start) {
            q->unk_00 = q->unk_00 - len;
            {
                s32 t = q->unk_00 + q->unk_04;
                if (mx <= t) mx = t;
            }
        }
    }
    GsTransport_BufRemove(&c->unk_44, start, len);
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_DeliverQueued(Cn *c)
{
    s32 i;
    It *e;
again:
    i = GsArray_Count(c->unk_5c) - 1;
    while (i >= 0) {
        e = (It *)GsArray_At(c->unk_5c, i);
        if (e->unk_0c == c->unk_66) {
            if (GsTransport_DispatchReliable(c, e->unk_08, c->unk_44.unk_00 + e->unk_00, e->unk_04) == 0) return FALSE;
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
    if (c->unk_90 == 0) {
        c->unk_90 = 1;
        c->unk_94 = GsUtil_GetTimeMs();
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
    if (v == c->unk_66) {
        GsTransport_ScheduleAck(c);
        if (GsTransport_DispatchReliable(c, a, (u8 *)p + 7, n - 7) == 0) return FALSE;
        if (GsTransport_DeliverQueued(c) != 0) return TRUE;
        return FALSE;
    }
    if (GsTransport_SeqDiff(v, c->unk_66) < 0) {
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
    cnt = GsArray_Count(c->unk_60);
    for (i = 0; i < cnt; i++) {
        Unk_ov065_02285630_Item8 *e = (Unk_ov065_02285630_Item8 *)GsArray_At(c->unk_60, i);
        if (GsTransport_SeqDiff(e->unk_08, lo) >= 0 && GsTransport_SeqDiff(e->unk_08, hi) <= 0) {
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
