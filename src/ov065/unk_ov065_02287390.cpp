// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov065_0228e1c0_Raw {
    s32 socket;
    u8 unk_04[0x10c];
};

extern "C" {
extern Unk_ov065_0228e1c0_Raw data_ov065_0228e1c0;
Unk_ov065_0228e1c0_Raw *sGsQrDefault = &data_ov065_0228e1c0;
u8 data_ov065_0228e1b8[8] = {0xfd, 0xfc, 0x1e, 0x66, 0x6a, 0xb2, 0, 0};
Unk_ov065_0228e1c0_Raw data_ov065_0228e1c0 = {-1};
s32 sGsQrLocalAddrCount;
u32 sGsQrLocalAddrs[5];
char sGsQrMasterOverride[0x40];
u8 data_ov065_022917a0[0x100];
}

namespace F02287200 {

// ov065_064: GameSpy query-and-report style (0xfe 0xfd packets) server object helpers (0x02287200..0x02287aa4)

struct Unk_ov065_02287390_Buf {
    u8 data[0x800];
    s32 len;
};

struct Unk_ov065_02287390_Qr;
struct Unk_ov065_02287390_W {
    u32 v;
};

typedef s32 (*Unk_ov065_02287390_Cb88)(u32, Unk_ov065_02287390_Buf *, void *);
typedef s32 (*Unk_ov065_02287390_Cb8c)(u32, s32, Unk_ov065_02287390_Buf *, void *);
typedef s32 (*Unk_ov065_02287390_Cb94)(s32, u8 *, void *);
typedef s32 (*Unk_ov065_02287390_Cb98)(s32, void *);
typedef s32 (*Unk_ov065_02287390_Cb9c)(s32, u8 *, void *);
typedef s32 (*Unk_ov065_02287390_Cba0)(u32, void *);
typedef s32 (*Unk_ov065_02287390_Cba4)(u8 *, s32, void *);

struct Unk_ov065_02287390_Qr {
    s32 sock;
    u8 gameName[0x80];
    u8 instanceKey[4];
    Unk_ov065_02287390_Cb88 unk_88;
    Unk_ov065_02287390_Cb8c unk_8c;
    Unk_ov065_02287390_Cb8c unk_90;
    Unk_ov065_02287390_Cb94 unk_94;
    Unk_ov065_02287390_Cb98 unk_98;
    Unk_ov065_02287390_Cb9c unk_9c;
    Unk_ov065_02287390_Cba0 natNegCallback;
    Unk_ov065_02287390_Cba4 clientMessageCallback;
    s32 publicAddressCallback;
    s32 lastHeartbeatTime;
    s32 lastKeepAliveTime;
    s32 stateChangePending;
    s32 masterState;
    s32 isPublic;
    s32 localPort;
    s32 ownsSocket;
    s32 natNegEnabled;
    u8 masterAddr[8];
    s32 rawPacketCallback;
    u32 recentMessageKeys[10];
    s32 messageKeyIndex;
    s32 publicIp;
    u16 publicPort;
    u16 unk_10a;
    void *userData;
};

struct Unk_ov065_0228758c_B4 {
    u8 b[4];
};

struct Unk_ov065_02287200_Sa {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov065_02287348_Ent {
    s32 negSock;
    s32 gameSock;
    s32 cookie;
    s32 clientIndex;
    s32 state;
    u8 unk_14[0x2c];
};

struct Unk_ov065_022786bc_Vec;

typedef Unk_ov065_02287390_Qr Qr;
typedef Unk_ov065_02287390_Buf Buf;
typedef Unk_ov065_02287348_Ent Ent;
typedef Unk_ov065_022786bc_Vec Vec;

extern "C" {
extern Qr *sGsQrDefault;
extern u8 data_ov065_0228e1b8[];
extern char *gGsKeyNames[];
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
char *Sock_InetNtoA(Unk_ov065_02287390_W);
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

namespace F02287b18 {

// ov065_065: GameSpy query-and-report (qr2-like) module: response buffer, key lists, base64 / RC4 helpers, heartbeat (0x02287b18..0x02288380)

struct Unk_ov065_02288094_Buf {
    u8 data[0x800];
    s32 len;
};

struct Unk_ov065_022880fc_Keys {
    u8 keys[0x100];
    s32 numKeys;
};

struct Unk_ov065_02287d04_Four {
    u8 b[4];
};

struct Unk_ov065_02287df8_Hdr {
    u8 unk_00;
    Unk_ov065_02287d04_Four unk_01;
};

struct Unk_ov065_02287b54_Two {
    u8 b[2];
};

struct Unk_ov065_02287fcc_Sa {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov065_02287fcc_Host {
    u32 hostName;
    u32 aliases;
    u32 addrType;
    u32 **addrList;
};

struct Unk_ov065_0228804c_List {
    u32 hostName;
    u32 aliases;
    u32 addrType;
    u8 **addrList;
};

struct Unk_ov065_02288124_Qr;

typedef void (*Unk_ov065_02288124_KeyCb)(u32, Unk_ov065_02288094_Buf *, void *);
typedef void (*Unk_ov065_02288124_IdxCb)(u32, s32, Unk_ov065_02288094_Buf *, void *);
typedef void (*Unk_ov065_02288124_ListCb)(s32, Unk_ov065_022880fc_Keys *, void *);
typedef s32 (*Unk_ov065_02288124_CountCb)(s32, void *);
typedef void (*Unk_ov065_02288124_ErrCb)(s32, const char *, void *);
typedef void (*Unk_ov065_02288124_AddrCb)(u32, u32, void *);

struct Unk_ov065_02288124_Qr {
    s32 sock;
    char gameName[0x40];
    char secretKey[0x40];
    u8 instanceKey[4];
    Unk_ov065_02288124_KeyCb unk_88;
    Unk_ov065_02288124_IdxCb unk_8c;
    Unk_ov065_02288124_IdxCb unk_90;
    Unk_ov065_02288124_ListCb unk_94;
    Unk_ov065_02288124_CountCb unk_98;
    Unk_ov065_02288124_ErrCb unk_9c;
    s32 natNegCallback;
    s32 clientMessageCallback;
    Unk_ov065_02288124_AddrCb unk_a8;
    u32 lastHeartbeatTime;
    u32 lastKeepAliveTime;
    s32 stateChangePending;
    s32 masterState;
    s32 isPublic;
    s32 localPort;
    s32 ownsSocket;
    s32 natNegEnabled;
    Unk_ov065_02287fcc_Sa masterAddr;
    s32 rawPacketCallback;
    s32 recentMessageKeys[10];
    s32 messageKeyIndex;
    u32 publicIp;
    u16 publicPort;
    void *userData;
};

extern "C" {
extern const char *gGsKeyNames[];
extern Unk_ov065_02288124_Qr *sGsQrDefault;
extern Unk_ov065_02288124_Qr data_ov065_0228e1c0;
extern volatile s32 sGsQrLocalAddrCount;
extern Unk_ov065_02287d04_Four sGsQrLocalAddrs[];
extern char sGsQrMasterOverride[];
extern u8 data_ov065_022917a0[];

s32 func_02133150(s32, s32);
u32 STD_GetStringLength(const char *);
void func_02127838(char *, const char *);
s32 func_02128ca4(const char *, const char *, ...);
void memcpy(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 strcmp(const char *, const char *);
void srand(u32);
s32 rand();

void *GsUtil_Alloc(s32);
void GsUtil_Free(void *);
Unk_ov065_0228804c_List *GsSock_GetLocalHost();
s32 GsSock_InetAddr(const char *);
s32 GsSock_RecvFrom(s32, void *, s32, s32, Unk_ov065_02287fcc_Sa *, s32 *);
s32 GsSock_Close(s32);
s32 GsSock_CanRead(s32);
s32 GsSock_CleanupStub();
u32 GsUtil_GetTimeMs();
Unk_ov065_02287fcc_Host *Sock_GetHostByName(const char *);
void GsQr_SendHeartbeat(Unk_ov065_02288124_Qr *, s32);
void GsQr_SendKeepAlive(Unk_ov065_02288124_Qr *);
s32 GsQr_HandlePacket(Unk_ov065_02288124_Qr *, u8 *, s32, Unk_ov065_02287fcc_Sa *);

void GsQr_AppendAllKeyValues(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, s32 c0, u8 *l0, s32 c1, u8 *l1, s32 c2, u8 *l2);
void GsQr_AppendKeyValues(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, s32 type, s32 count, u8 *list);
void GsQr_ParsePublicAddress(Unk_ov065_02288124_Qr *q, const char *s);
void GsQr_AppendChallengeResponse(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, const char *s, s32 n);
void GsQr_BeginPacket(Unk_ov065_02288094_Buf *b, s32 c, u8 *ip);
void GsQr_Rc4Crypt(u8 *key, s32 keylen, u8 *data, s32 datalen);
void GsQr_Base64Encode(u8 *in, s32 len, u8 *out);
u8 GsQr_Base64Char(u8 c);
void GsQr_SwapBytes(u8 *a, u8 *b);
s32 GsQr_ResolveAddress(const char *name, u32 port, Unk_ov065_02287fcc_Sa *sa, Unk_ov065_02287fcc_Host **hp);
void GsQr_GetLocalAddresses();
void GsQr_BufAppendString(Unk_ov065_02288094_Buf *b, const char *s);
void GsQr_BufAppendInt(Unk_ov065_02288094_Buf *b, s32 v);
void GsQr_KeyBufferAdd(Unk_ov065_022880fc_Keys *k, s32 c);
void GsQr_Shutdown(Unk_ov065_02288124_Qr *q);
void GsQr_SendStateChanged(Unk_ov065_02288124_Qr *q);
void GsQr_CheckHeartbeat(Unk_ov065_02288124_Qr *q);
void GsQr_ReceiveAll(Unk_ov065_02288124_Qr *q);
void GsQr_Think(Unk_ov065_02288124_Qr *q);
void GsQr_SetPublicAddressCallback(Unk_ov065_02288124_Qr *q, Unk_ov065_02288124_AddrCb cb);
void GsQr_SetClientMessageCallback(Unk_ov065_02288124_Qr *q, s32 v);
void GsQr_SetNatNegCallback(Unk_ov065_02288124_Qr *q, s32 v);
s32 GsQr_Init(Unk_ov065_02288124_Qr **out, s32 fd, s32 a2, const char *name, const char *secret, s32 a5, s32 a6, Unk_ov065_02288124_KeyCb cb88,
                        Unk_ov065_02288124_IdxCb cb8c, Unk_ov065_02288124_IdxCb cb90, Unk_ov065_02288124_ListCb cb94, Unk_ov065_02288124_CountCb cb98,
                        Unk_ov065_02288124_ErrCb cb9c, void *ud);

}
}

namespace F02287b18 {
extern "C" {
s32 GsQr_Init(Unk_ov065_02288124_Qr **out, s32 fd, s32 a2, const char *name, const char *secret, s32 a5, s32 a6, Unk_ov065_02288124_KeyCb cb88,
                        Unk_ov065_02288124_IdxCb cb8c, Unk_ov065_02288124_IdxCb cb90, Unk_ov065_02288124_ListCb cb94, Unk_ov065_02288124_CountCb cb98,
                        Unk_ov065_02288124_ErrCb cb9c, void *ud) {
    s32 i;
    Unk_ov065_02288124_Qr *q;
    char buf[0x40];
    s32 ok;
    if (out == NULL) {
        q = &data_ov065_0228e1c0;
    } else {
        *out = (Unk_ov065_02288124_Qr *)GsUtil_Alloc(0x110);
        q = *out;
    }
    srand(GsUtil_GetTimeMs());
    func_02127838(q->gameName, name);
    func_02127838(q->secretKey, secret);
    q->localPort = a2;
    i = 0;
    q->lastHeartbeatTime = 0;
    q->lastKeepAliveTime = 0;
    q->sock = fd;
    q->masterState = 1;
    q->userData = ud;
    q->unk_88 = cb88;
    q->unk_8c = cb8c;
    q->unk_90 = cb90;
    q->unk_94 = cb94;
    q->unk_98 = cb98;
    q->unk_9c = cb9c;
    q->natNegCallback = i;
    q->clientMessageCallback = i;
    q->rawPacketCallback = i;
    q->isPublic = a5;
    q->ownsSocket = i;
    q->natNegEnabled = a6;
    q->publicIp = i;
    q->publicPort = i;
    q->unk_a8 = NULL;
    q->stateChangePending = i;
    for (; i < 4; i++) {
        q->instanceKey[i] = rand() % 0xff;
    }
    for (i = 0; i < 10; i++) {
        q->recentMessageKeys[i] = -1;
    }
    q->messageKeyIndex = 0;
    if (sGsQrLocalAddrCount == 0) {
        GsQr_GetLocalAddresses();
    }
    if (a5 != 0) {
        char c = sGsQrMasterOverride[0];
        if (c == 0) {
            OS_SPrintf(buf, "%s.master.gs.nintendowifi.net", name);
        }
        ok = GsQr_ResolveAddress(c != 0 ? sGsQrMasterOverride : buf, 0x6cfc, &q->masterAddr, NULL);
    } else {
        ok = 1;
    }
    if (ok != 0) {
        return 0;
    }
    return 3;
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_SetNatNegCallback(Unk_ov065_02288124_Qr *q, s32 v) {
    if (q == NULL) {
        q = sGsQrDefault;
    }
    q->natNegCallback = v;
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_SetClientMessageCallback(Unk_ov065_02288124_Qr *q, s32 v) {
    if (q == NULL) {
        q = sGsQrDefault;
    }
    q->clientMessageCallback = v;
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_SetPublicAddressCallback(Unk_ov065_02288124_Qr *q, Unk_ov065_02288124_AddrCb cb) {
    if (q == NULL) {
        q = sGsQrDefault;
    }
    q->unk_a8 = cb;
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_Think(Unk_ov065_02288124_Qr *q) {
    if (q == NULL) {
        q = sGsQrDefault;
    }
    if (q->isPublic != 0) {
        GsQr_CheckHeartbeat(q);
    }
    GsQr_ReceiveAll(q);
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_ReceiveAll(Unk_ov065_02288124_Qr *q) {
    struct {
        Unk_ov065_02287fcc_Sa sa;
        s32 len;
    } l;
    s32 z = 0;
    l.len = 8;
    if (q->ownsSocket != 0) {
        if (GsSock_CanRead(q->sock) != 0) {
            do {
                s32 r = GsSock_RecvFrom(q->sock, data_ov065_022917a0, 0xff, z, &l.sa, &l.len);
                if (r != ~z) {
                    data_ov065_022917a0[r] = z;
                    GsQr_HandlePacket(q, data_ov065_022917a0, r, &l.sa);
                }
            } while (GsSock_CanRead(q->sock) != 0);
        }
    }
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_CheckHeartbeat(Unk_ov065_02288124_Qr *q) {
    u32 now = GsUtil_GetTimeMs();
    if (q->sock != -1) {
        s32 r = q->masterState;
        if (r > 0 && now - q->lastHeartbeatTime > 0x2710) {
            if (r >= 4) {
                q->masterState = 0;
                q->unk_9c(5, "No challenge value was received from the master server.", q->userData);
                return;
            }
            GsQr_SendHeartbeat(q, 3);
            q->masterState = q->masterState + 1;
        } else if (q->stateChangePending != 0 && now - q->lastHeartbeatTime > 0x2710) {
            GsQr_SendHeartbeat(q, 1);
        } else {
            u32 a = q->lastHeartbeatTime;
            if (now - a > 0xea60 || a == 0 || now < a) {
                GsQr_SendHeartbeat(q, 0);
            }
        }
        if (now - q->lastKeepAliveTime > 0x4e20) {
            GsQr_SendKeepAlive(q);
        }
    }
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_SendStateChanged(Unk_ov065_02288124_Qr *q) {
    if (q == NULL) {
        q = sGsQrDefault;
    }
    if (q->isPublic != 0) {
        u32 d = GsUtil_GetTimeMs() - q->lastHeartbeatTime;
        if (d < 0x2710) {
            q->stateChangePending = 1;
            return;
        }
        GsQr_SendHeartbeat(q, 1);
        q->stateChangePending = 0;
    }
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_Shutdown(Unk_ov065_02288124_Qr *q) {
    if (q == NULL) {
        q = sGsQrDefault;
    }
    if (q->isPublic != 0) {
        GsQr_SendHeartbeat(q, 2);
    }
    if (q->sock != -1 && q->ownsSocket != 0) {
        GsSock_Close(q->sock);
    }
    q->sock = -1;
    q->lastHeartbeatTime = 0;
    if (q->ownsSocket != 0) {
        GsSock_CleanupStub();
    }
    if (q != &data_ov065_0228e1c0) {
        GsUtil_Free(q);
    }
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_KeyBufferAdd(Unk_ov065_022880fc_Keys *k, s32 c) {
    s32 n = k->numKeys;
    if (n < 0xfe && c >= 1 && c <= 0xfe) {
        k->numKeys = n + 1;
        k->keys[n] = c;
    }
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_BufAppendInt(Unk_ov065_02288094_Buf *b, s32 v) {
    char t[0x18];
    OS_SPrintf(t, "%d", v);
    GsQr_BufAppendString(b, t);
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_BufAppendString(Unk_ov065_02288094_Buf *b, const char *s) {
    s32 n = STD_GetStringLength(s) + 1;
    s32 len = b->len;
    s32 avail = 0x800 - len;
    if (n > avail) {
        n = avail;
    }
    if (n != 0) {
        memcpy(&b->data[len], s, n);
        b->len += n;
        b->data[b->len - 1] = 0;
    }
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_GetLocalAddresses() {
    Unk_ov065_0228804c_List *l = GsSock_GetLocalHost();
    if (l != NULL) {
        sGsQrLocalAddrCount = 0;
        s32 t;
        do {
            s32 i = sGsQrLocalAddrCount;
            u8 *e = l->addrList[i];
            if (e == NULL) {
                break;
            }
            sGsQrLocalAddrs[i] = *(Unk_ov065_02287d04_Four *)e;
            t = sGsQrLocalAddrCount + 1;
            sGsQrLocalAddrCount = t;
        } while (t < 5);
    }
}
}
}

namespace F02287b18 {
extern "C" {
s32 GsQr_ResolveAddress(const char *name, u32 port, Unk_ov065_02287fcc_Sa *sa, Unk_ov065_02287fcc_Host **hp) {
    Unk_ov065_02287fcc_Host *h = NULL;
    s32 v;
    sa->family = 2;
    v = (u16)port;
    sa->port = (u16)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
    if (name == NULL) {
        sa->addr = 0;
    } else {
        sa->addr = GsSock_InetAddr(name);
    }
    if (sa->addr == (u32)-1) {
        if (strcmp(name, "255.255.255.255") != 0) {
            h = Sock_GetHostByName(name);
            if (h == NULL) {
                return 0;
            }
            sa->addr = **h->addrList;
        }
    }
    if (hp != NULL) {
        *hp = h;
    }
    return 1;
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_SwapBytes(u8 *a, u8 *b) {
    u8 t = *a;
    *a = *b;
    *b = t;
}
}
}

namespace F02287b18 {
extern "C" {
u8 GsQr_Base64Char(u8 c) {
    if (c < 0x1a) {
        return c + 0x41;
    }
    if (c < 0x34) {
        return c + 0x47;
    }
    if (c < 0x3e) {
        return c - 4;
    }
    if (c == 0x3e) {
        return 0x2b;
    }
    if (c == 0x3f) {
        return 0x2f;
    }
    return 0;
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_Base64Encode(u8 *in, s32 len, u8 *out) {
    u8 t[7];
    s32 k;
    u8 *tp;
    s32 n = 0;
    if (len > 0) {
        do {
            for (k = 0, tp = t; k <= 2; tp++, k++, n++) {
                if (n < len) {
                    *tp = *in++;
                } else {
                    *tp = 0;
                }
            }
            {
                s32 a = t[0];
                s32 b;
                s32 c;
                t[3] = a >> 2;
                b = t[1];
                t[4] = ((a & 3) << 4) + (b >> 4);
                c = t[2];
                t[5] = ((b & 0xf) << 2) + (c >> 6);
                t[6] = c & 0x3f;
            }
            for (k = 0, tp = &t[3]; k <= 3; out++, tp++, k++) {
                *out = GsQr_Base64Char(*tp);
            }
        } while (n < len);
    }
    *out = 0;
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_Rc4Crypt(u8 *key, s32 keylen, u8 *data, s32 datalen) {
    u8 state[0x100];
    s16 i;
    s16 k;
    u8 x;
    u8 j;
    u8 *volatile p;
    u8 *q;
    for (i = 0; i < 0x100; i++) {
        state[i] = i;
    }
    x = 0;
    j = 0;
    i = 0;
    q = state;
    p = q;
    for (; i < 0x100; i++) {
        j = (*q + key[x] + j) % 0x100;
        x = (x + 1) % keylen;
        GsQr_SwapBytes(q, p + j);
        q++;
    }
    {
        u8 a = 0;
        u8 c = 0;
        for (k = 0; k < datalen; k++) {
            u8 *pa;
            a = (a + data[k] + 1) % 0x100;
            pa = &state[a];
            c = (state[a] + c) % 0x100;
            GsQr_SwapBytes(pa, &state[c]);
            data[k] ^= state[(u8)((state[a] + state[c]) % 0x100)];
        }
    }
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_BeginPacket(Unk_ov065_02288094_Buf *b, s32 c, u8 *ip) {
    u8 *d;
    b->data[0] = c;
    d = b->data + 1;
    d[-1 + 1] = ip[0];
    d[1] = ip[1];
    d[2] = ip[2];
    d[3] = ip[3];
    b->len = 5;
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_AppendChallengeResponse(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, const char *s, s32 n) {
    char tmp[0x44];
    if (n >= 1 && n <= 0x41 && s[n - 1] == 0) {
        func_02127838(tmp, s);
        GsQr_Rc4Crypt((u8 *)q->secretKey, STD_GetStringLength(q->secretKey), (u8 *)tmp, n - 1);
        GsQr_Base64Encode((u8 *)tmp, n - 1, (u8 *)b + b->len);
        b->len += STD_GetStringLength((char *)b + b->len) + 1;
    }
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_ParsePublicAddress(Unk_ov065_02288124_Qr *q, const char *s) {
    u32 ip;
    u32 port;
    u32 pt;
    func_02128ca4(s, "%08X%04X", &ip, &port);
    pt = (u16)port;
    ip = ((ip << 24) & 0xff000000) | (((ip << 8) & 0xff0000) | (((ip >> 24) & 0xff) | ((ip >> 8) & 0xff00)));
    if (ip != 0 && pt != 0) {
        if (q->publicIp != ip || q->publicPort != pt) {
            q->publicIp = ip;
            q->publicPort = pt;
            q->unk_a8(ip, pt, q->userData);
        }
    }
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_AppendKeyValues(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, s32 type, s32 count, u8 *list) {
    Unk_ov065_022880fc_Keys kb;
    s32 n;
    s32 i;
    s32 j;
    kb.numKeys = 0;
    if (count == 0) {
        return;
    }
    if ((u32)(type - 1) <= 1) {
        u16 t;
        s32 v;
        u32 avail = 0x800 - b->len;
        if (avail < 2) {
            return;
        }
        n = q->unk_98(type, q->userData);
        v = (u16)n;
        t = (u16)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
        u8 *d = b->data + b->len;
        u8 *sp = (u8 *)&t;
        d[0] = sp[0];
        d[1] = sp[1];
        b->len += 2;
    } else {
        n = 1;
    }
    if (count == 0xff) {
        q->unk_94(type, &kb, q->userData);
        for (j = 0; j < kb.numKeys; j++) {
            const char *s = gGsKeyNames[kb.keys[j]];
            if (s == NULL) {
                s = "unknown";
            }
            GsQr_BufAppendString(b, s);
            if (type == 0) {
                s32 sv = b->len;
                q->unk_88(kb.keys[j], b, q->userData);
                if (sv == b->len) {
                    GsQr_BufAppendString(b, "");
                }
            }
        }
        if (0x800 - b->len < 1) {
            return;
        }
        b->data[b->len++] = 0;
        count = kb.numKeys;
        list = kb.keys;
        if (type == 0) {
            return;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < count; j++) {
            s32 save = b->len;
            if (type == 0) {
                q->unk_88(list[j], b, q->userData);
            } else if (type == 1) {
                q->unk_8c(list[j], i, b, q->userData);
            } else if (type == 2) {
                q->unk_90(list[j], i, b, q->userData);
            }
            if (save == b->len) {
                GsQr_BufAppendString(b, "");
            }
        }
    }
}
}
}

namespace F02287b18 {
extern "C" {
void GsQr_AppendAllKeyValues(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, s32 c0, u8 *l0, s32 c1, u8 *l1, s32 c2, u8 *l2) {
    GsQr_AppendKeyValues(q, b, 0, c0, l0);
    GsQr_AppendKeyValues(q, b, 1, c1, l1);
    GsQr_AppendKeyValues(q, b, 2, c2, l2);
}
}
}

namespace F02287200 {
extern "C" {
void GsQr_HandleQuery(Qr *q, Buf *buf, u8 *p, s32 n) {
    u32 l1, l2, l3;
    u8 *p1 = NULL;
    u8 *p2 = p1;
    u8 *p3 = p1;
    if (n >= 3) {
        l1 = *p++;
        n--;
        if (l1 != 0 && l1 != 0xff) {
            p1 = p;
            p += l1;
            n -= l1;
        }
        if (n >= 2) {
            l2 = *p++;
            n--;
            if (l2 != 0 && l2 != 0xff) {
                p2 = p;
                p += l2;
                n -= l2;
            }
            if (n >= 1) {
                l3 = *p;
                n--;
                if (l3 != 0 && l3 != 0xff) {
                    p3 = p + 1;
                    n -= l3;
                }
                if (n >= 0) {
                    GsQr_AppendAllKeyValues(q, buf, l1, p1, l2, p2, l3, p3);
                }
            }
        }
    }
}
}
}

namespace F02287200 {
extern "C" {
void GsQr_AppendQr1Keys(Qr *q, Buf *buf, s32 kind) {
    char tmp[0x80];
    struct Keys {
        u8 b[0x100];
        s32 n;
    } k;
    s32 cnt;
    s32 i;
    s32 j;
    s32 mark;
    char *name;
    u8 *p;
    k.n = 0;
    if ((u32)(kind - 1) <= 1) {
        cnt = q->unk_98(kind, q->userData);
    } else {
        cnt = 1;
    }
    q->unk_94(kind, (u8 *)&k, q->userData);
    i = 0;
    if (i < k.n) {
      p = k.b;
      do {
        name = gGsKeyNames[*p];
        if (name == NULL) {
            name = "unknown";
        }
        if (kind == 0) {
            GsQr_BufAppendString(buf, name);
            buf->data[buf->len - 1] = 0x5c;
            mark = buf->len;
            q->unk_88(*p, buf, q->userData);
            if (mark == buf->len) {
                GsQr_BufAppendString(buf, "");
            }
            buf->data[buf->len - 1] = 0x5c;
        } else {
            for (j = 0; j < cnt; j++) {
                OS_SPrintf(tmp, "%s%d", name, j);
                GsQr_BufAppendString(buf, tmp);
                buf->data[buf->len - 1] = 0x5c;
                mark = buf->len;
                if (kind == 1) {
                    q->unk_8c(*p, j, buf, q->userData);
                } else if (kind == 2) {
                    q->unk_90(*p, j, buf, q->userData);
                }
                if (mark == buf->len) {
                    GsQr_BufAppendString(buf, "");
                }
                buf->data[buf->len - 1] = 0x5c;
            }
        }
        p++;
      } while (++i < k.n);
    }
}
}
}

namespace F02287200 {
extern "C" {
void GsQr_BuildQr1Reply(Qr *q, Buf *buf) {
    buf->len = 1;
    buf->data[0] = 0x5c;
    GsQr_AppendQr1Keys(q, buf, 0);
    GsQr_AppendQr1Keys(q, buf, 1);
    GsQr_AppendQr1Keys(q, buf, 2);
    GsQr_BufAppendString(buf, "final\\\\queryid\\1.1");
    buf->len--;
}
}
}

namespace F02287200 {
extern "C" {
void GsQr_HandleClientMessage(Qr *q, u8 *p, s32 n) {
    struct Hdr {
        u8 b[6];
    };
    struct B4 {
        u8 b[4];
    };
    Hdr hdr = *(Hdr *)data_ov065_0228e1b8;
    u32 l;
    s32 j;
    BOOL ok = TRUE;
    u8 *h;
    if (n >= 10) {
        h = hdr.b;
        for (j = 0; j < 6; j++) {
            if (*h != p[j]) {
                ok = FALSE;
                break;
            }
            h++;
        }
    } else {
        ok = FALSE;
    }
    if (ok) {
        Unk_ov065_02287390_Cba0 cb;
        u32 a = (u32)&l;
        B4 *s = (B4 *)(p + 6);
        ((B4 *)a)->b[0] = s->b[0];
        ((B4 *)a)->b[1] = s->b[1];
        ((B4 *)a)->b[2] = s->b[2];
        ((B4 *)a)->b[3] = s->b[3];
        cb = q->natNegCallback;
        if (cb != NULL) {
            u32 v = l;
            cb(HTONL(v), q->userData);
        }
    } else {
        Unk_ov065_02287390_Cba4 cb = q->clientMessageCallback;
        if (cb != NULL) {
            cb(p, n, q->userData);
        }
    }
}
}
}

namespace F02287200 {
extern "C" {
BOOL GsQr_IsDuplicateMessage(Qr *q, u32 v) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (v == q->recentMessageKeys[i]) {
            return TRUE;
        }
    }
    q->messageKeyIndex = (q->messageKeyIndex + 1) % 10;
    q->recentMessageKeys[q->messageKeyIndex] = v;
    return FALSE;
}
}
}

namespace F02287200 {
extern "C" {
void GsQr_HandlePacket(Qr *q, s8 *data, s32 n, void *addr) {
    struct {
        s32 x;
        Buf out;
    } l;
    s32 type;
    s32 c;
    l.out.len = 0;
    if (q == NULL) {
        q = sGsQrDefault;
    }
    c = data[0];
    if (c == 0x3b) {
        Unk_ov065_02287390_Cba4 cb = (Unk_ov065_02287390_Cba4)q->rawPacketCallback;
        if (cb != NULL) {
            cb((u8 *)data, n, addr);
            return;
        }
        return;
    }
    if (c == 0x5c) {
        GsQr_BuildQr1Reply(q, &l.out);
        GsSock_SendTo(q->sock, &l.out, l.out.len, 0, addr, 8);
        return;
    }
    if (n < 7) {
        return;
    }
    if ((u8)c != 0xfe) {
        return;
    }
    if (((u8 *)data)[1] != 0xfd) {
        return;
    }
    if (q->masterState > 0) {
        q->masterState = 0;
    }
    type = data[2];
    {
        s8 *hdr = data + 3;
        s8 *body = data + 7;
        n -= 7;
        GsQr_BeginPacket(&l.out, type, (u8 *)hdr);
        switch (type) {
        case 0:
            GsQr_HandleQuery(q, &l.out, (u8 *)body, n);
            break;
        case 1:
            if (n >= 13 && q->publicAddressCallback != 0) {
                GsQr_ParsePublicAddress(q, (u8 *)body + n - 13);
            }
            GsQr_AppendChallengeResponse(q, &l.out, (u8 *)body, n);
            break;
        case 2:
            if (n > 0x20) {
                n = 0x20;
            }
            l.out.data[0] = 5;
            memcpy(l.out.data + l.out.len, body, n);
            l.out.len += n;
            break;
        case 4: {
            if (q->masterState == -1) {
                return;
            }
            l.x = 0;
            do {
                if (hdr[l.x] != ((s8 *)q->instanceKey)[l.x]) {
                    return;
                }
                l.x++;
            } while (l.x < 4);
            if (n < 2) {
                return;
            }
            q->masterState = -1;
            q->unk_9c(body[0], (u8 *)body + 1, q->userData);
            return;
        }
        case 6: {
            l.x = 0;
            do {
                if (hdr[l.x] != ((s8 *)q->instanceKey)[l.x]) {
                    return;
                }
                l.x++;
            } while (l.x < 4);
            if (n < 4) {
                return;
            }
            l.out.data[0] = 7;
            *(n ? (Unk_ov065_0228758c_B4 *)(l.out.data + l.out.len) : (Unk_ov065_0228758c_B4 *)(l.out.data + l.out.len)) = *(Unk_ov065_0228758c_B4 *)body;
            l.out.len = l.out.len + 4;
            *(n ? (Unk_ov065_0228758c_B4 *)&l.x : (Unk_ov065_0228758c_B4 *)&l.x) = *(Unk_ov065_0228758c_B4 *)body;
            if (GsQr_IsDuplicateMessage(q, l.x) == 0) {
                GsQr_HandleClientMessage(q, (u8 *)body + 4, n - 4);
            }
            break;
        }
        case 3:
        case 5:
        case 7:
        case 8:
            return;
        default:
            return;
        }
        GsSock_SendTo(q->sock, &l.out, l.out.len, 0, addr, 8);
    }
}
}
}

namespace F02287200 {
extern "C" {
void GsQr_SendKeepAlive(Qr *q) {
    Buf buf;
    buf.len = 0;
    GsQr_BeginPacket(&buf, 8, q->instanceKey);
    GsSock_SendTo(q->sock, &buf, buf.len, 0, q->masterAddr, 8);
    q->lastKeepAliveTime = GsUtil_GetTimeMs();
}
}
}

namespace F02287200 {
extern "C" {
void GsQr_SendHeartbeat(Qr *q, s32 mode) {
    Buf buf;
    char tmp[20];
    s32 i;
    u32 *p;
    buf.len = 0;
    GsQr_BeginPacket(&buf, 3, q->instanceKey);
    i = 0;
    if (i < sGsQrLocalAddrCount) {
        p = sGsQrLocalAddrs;
        do {
            OS_SPrintf(tmp, "localip%d", i);
            GsQr_BufAppendString(&buf, tmp);
            GsQr_BufAppendString(&buf, Sock_InetNtoA(*(Unk_ov065_02287390_W *)p));
            p++;
        } while (++i < sGsQrLocalAddrCount);
    }
    GsQr_BufAppendString(&buf, "localport");
    GsQr_BufAppendInt(&buf, q->localPort);
    GsQr_BufAppendString(&buf, "natneg");
    GsQr_BufAppendString(&buf, q->natNegEnabled != 0 ? "1" : "0");
    if (mode != 0) {
        GsQr_BufAppendString(&buf, "statechanged");
        GsQr_BufAppendInt(&buf, mode);
    }
    GsQr_BufAppendString(&buf, "gamename");
    GsQr_BufAppendString(&buf, (char *)q->gameName);
    if (q->publicAddressCallback != 0) {
        GsQr_BufAppendString(&buf, "publicip");
        GsQr_BufAppendInt(&buf, q->publicIp);
        GsQr_BufAppendString(&buf, "publicport");
        GsQr_BufAppendInt(&buf, q->publicPort);
    }
    if (mode != 2) {
        GsQr_AppendAllKeyValues(q, &buf, 0xff, NULL, 0xff, NULL, 0xff, NULL);
    } else if (0x800 - buf.len >= 1) {
        buf.data[buf.len++] = 0;
    }
    GsSock_SendTo(q->sock, &buf, buf.len, 0, q->masterAddr, 8);
    q->lastHeartbeatTime = GsUtil_GetTimeMs();
    q->lastKeepAliveTime = q->lastHeartbeatTime;
    if (mode != 0) {
        q->stateChangePending = 0;
    }
}
}
}
