// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/SockHostEnt.h"
#include "net/darray.h"
#include "net/GsHttpConnection.h"

// ov065 TU38: ghttp (2): request post / process / response handlers (0x0227a284..0x0227bd20)


extern "C" {
char data_ov065_0228ca58[4] = "%00";
volatile s32 data_ov065_022910e4;
volatile s32 data_ov065_022910e0;
volatile s32 data_ov065_022910dc;
volatile s32 data_ov065_022910e8;
}

namespace Nm {





extern "C" {
extern s32 sGsHttpStartupCount;
extern void *sGsHttpProxyHost;
extern u32 sGsHttpThrottleDelay;
extern s32 sGsHttpThrottleBytes;
extern char data_ov065_0228ca58[4];

s32 GsHttpPost_AddStringPart(void *, const char *, const char *);
s32 GsHttpPost_New();
void GsHttp_ForEachConnection(s32 (*)(GsHttpConnection *));
char *goastrdup(const char *);
GsHttpConnection *GsHttp_NewConnection();
BOOL GsHttp_FreeConnection(GsHttpConnection *);
BOOL GsHttp_InitPostState(GsHttpConnection *);
void msleep(s32);
void GsHttp_StepHostLookup(GsHttpConnection *);
void GsHttp_StepConnect(GsHttpConnection *);
void GsHttp_StepEncryption(GsHttpConnection *);
void GsHttp_StepSendRequest(GsHttpConnection *);
void GsHttp_StepSendPost(GsHttpConnection *);
void GsHttp_StepWaitReply(GsHttpConnection *);
void GsHttp_StepRecvStatus(GsHttpConnection *);
void GsHttp_StepRecvHeaders(GsHttpConnection *);
void GsHttp_StepRecvBody(GsHttpConnection *);
void GsHttp_ResetForRedirect(GsHttpConnection *);
void GsHttp_CallCompletedCallback(GsHttpConnection *);
void GsHttp_LeaveCritical();
void GsHttp_EnterCritical();
void GsHttp_FreeCritical();
void GsHttp_InitCritical();
void GsHttp_FreeAllConnections();
void GsUtil_Free(void *);
s32 ArrayLength(void *);
GsHttpPostPartState *ArrayNth(void *, s32);
s32 GsHttp_FlushSendBuffer(GsHttpConnection *);
void GsHttpBuf_Reset(void *);
s32 GsHttp_SendOrQueue(GsHttpConnection *, const void *, s32);
s32 GsHttp_SocketSend(GsHttpConnection *, const void *, s32);
BOOL GsHttpBuf_InitUser(GsHttpConnection *, void *, void *, s32);
BOOL GsHttpBuf_Init(GsHttpConnection *, void *, s32, s32);
void GsHttpBuf_AppendChar(void *, s32);
BOOL GsHttpBuf_Append(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 STD_GetStringLength(const char *);
s32 strchr(const char *, s32);
s32 fread(void *, s32, s32, u32);

s32 GsHttp_Step(GsHttpConnection *);
void GsHttp_SetResultFromStatus(GsHttpConnection *);
s32 GsHttp_SendPostPart(GsHttpPostPartState *, GsHttpConnection *, s32);
s32 GsHttp_SendPostPartBuffer(GsHttpPostPartState *, GsHttpConnection *);
s32 GsHttp_SendPostPartFile(GsHttpPostPartState *, GsHttpConnection *);
s32 GsHttp_SendPostPartString(GsHttpPostPartState *, GsHttpConnection *);
void GsHttp_Startup();
}
extern "C" {
s32 GsHttp_Step(GsHttpConnection *c);
void GsHttp_SetResultFromStatus(GsHttpConnection *c);
s32 GsHttp_SendPostData(GsHttpConnection *c);
s32 GsHttp_SendPostPart(GsHttpPostPartState *st, GsHttpConnection *c, s32 first);
s32 GsHttp_SendPostPartBuffer(GsHttpPostPartState *st, GsHttpConnection *c);
s32 GsHttp_SendPostPartFile(GsHttpPostPartState *st, GsHttpConnection *c);
s32 GsHttp_SendPostPartString(GsHttpPostPartState *st, GsHttpConnection *c);
}
}

namespace Na {
typedef void (*ArrayElementFreeFn)(void *);


struct Unk_ov065_0227ae94_Blk {
    char b[11];
};

extern "C" {
extern volatile s32 data_ov065_022910e8;
extern volatile s32 data_ov065_022910e4;
extern volatile s32 data_ov065_022910e0;
extern volatile s32 data_ov065_022910dc;
extern u16 data_0213a510[];

s32 ArrayLength(DArrayImplementation *);
void *ArrayNth(DArrayImplementation *, s32);
void ArrayFree(DArrayImplementation *);
void ArrayAppend(DArrayImplementation *, void *);
DArrayImplementation *ArrayNew(s32, s32, ArrayElementFreeFn);
void *GsUtil_Alloc(s32);
void GsUtil_Free(void *);
char *goastrdup(const char *);
s32 current_time(void);
s32 GsHttp_SocketRecv(void *, u8 *, s32 *);
s32 GsHttpBuf_Append(void *, u8 *, s32);
void GsHttpBuf_Reset(void *);
void GsHttp_CallProgressCallback(void *, u32, u32);
s32 GOAGetLastError(s32);
s32 GsHttp_ProcessBodyData(void *, u8 *, s32);
u32 STD_GetStringLength(const char *);
void fclose(s32);
s32 fseek(s32, s32, s32);
s32 ftell(s32);
void rewind(s32);
void memmove(void *, void *, s32);
char *strstr(char *, char *);
u32 strspn(char *, char *);
char *strchr(char *, s32);
s32 strncmp(char *, char *, s32);
s32 atol(char *);
s32 OS_SPrintf(char *, char *, ...);

s32 GsHttp_GetPostLength(GsHttpConnection *self);
void GsHttp_ClosePostPart(GsHttpPostPartState *it);
s32 GsHttp_OpenPostPart(GsHttpPostPartState *it);
s32 GsHttp_GetMultipartLength(GsHttpConnection *self);
s32 GsHttp_GetUrlEncodedLength(GsHttpConnection *self);
void GsHttpPost_Free(GsHttpPost *t);
void GsHttpPost_FreePart(GsHttpPostPart *r);
}


extern "C" {
#pragma enumsalwaysint off
enum Unk_ov065_0227acfc_Z { Unk_ov065_0227acfc_Z_0 = 0, Unk_ov065_0227acfc_Z_FF = 0xff };
#pragma enumsalwaysint reset
}
extern "C" {
void GsHttp_FreePostState(GsHttpConnection *self);
s32 GsHttp_InitPostState(GsHttpConnection *self);
void GsHttp_ClosePostPart(GsHttpPostPartState *it);
s32 GsHttp_OpenPostPart(GsHttpPostPartState *it);
s32 GsHttp_GetPostLength(GsHttpConnection *self);
s32 GsHttp_GetMultipartLength(GsHttpConnection *self);
s32 GsHttp_GetUrlEncodedLength(GsHttpConnection *self);
char *GsHttp_GetContentType(GsHttpConnection *self);
s32 GsHttpPost_AddStringPart(GsHttpPost *self, char *a, char *b);
void GsHttpPost_Free(GsHttpPost *t);
s32 GsHttpPost_GetAutoFree(GsHttpPost *t);
GsHttpPost *GsHttpPost_New(void);
void GsHttpPost_FreePart(GsHttpPostPart *r);
void GsHttp_StepRecvBody(GsHttpConnection *self);
void GsHttp_StepRecvHeaders(GsHttpConnection *self);
}
}

namespace Nb {

struct Unk_ov065_0227b9c4_Addr {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};


extern "C" {
extern s32 sGsHttpThrottleBytes;
extern char *sGsHttpProxyHost;
extern u16 sGsHttpProxyPort;
extern u16 data_0213a510[];

char *strchr(const char *, s32);
void memcpy(void *, const void *, s32);
s32 sscanf(const char *, const char *, ...);
char *strstr(const char *hay, const char *needle);
s32 strncmp(const char *, const char *, u32);
s32 OS_SPrintf(char *buf, const char *fmt, ...);

s32 GOAGetLastError(s32);
s32 inet_addr(char *);
s32 connect(s32 a, void *src, u32 len);
s32 socket(s32 a, s32 b, s32 c);
s32 GSISocketSelect(s32 sock, s32 *rd, s32 *wr, s32 *ex);
s32 SetReceiveBufferSize(s32 sock, s32 val);
s32 SetSockBlocking(s32 sock, s32 flag);
s32 SocketStartUp();
s32 GsHttp_FlushSendBuffer(GsHttpConnection *);
s32 GsHttpBuf_Reset(void *);
s32 GsHttpBuf_AppendInt(GsHttpBuffer *, s32);
s32 GsHttpBuf_AppendChar(GsHttpBuffer *, s32);
s32 GsHttpBuf_AppendHeader(GsHttpBuffer *, const char *, const char *);
s32 GsHttpBuf_Append(void *, const char *, s32);
s32 GsHttp_CallPostCallback(GsHttpConnection *);
s32 GsHttp_CallProgressCallback(GsHttpConnection *, s32, s32);
s32 GsHttp_SocketRecv(GsHttpConnection *, char *, s32 *);
s32 GsHttp_SendPostData(GsHttpConnection *);
s32 GsHttp_FreePostState(GsHttpConnection *);
char *GsHttp_GetContentType(GsHttpConnection *);
SockHostEnt *Sock_GetHostByName(char *);
s32 GsHttp_ParseUrl(GsHttpConnection *);

void GsHttp_AppendChunkSizeText(GsHttpConnection *self, char *p, s32 n);
s32 GsHttp_ParseChunkSize(GsHttpConnection *self);
s32 GsHttp_DeliverBodyData(GsHttpConnection *self, char *p, s32 n);
s32 GsHttp_ParseStatusLine(GsHttpConnection *self);
}

#define HTONS(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))

static inline s32 Unk_ov065_0227b5d4_Chk(char *s, s32 i) {
    BOOL bad = TRUE;
    s32 v;
    s32 ch = s[i];
    if (ch >= 0 && ch < 0x80) {
        bad = FALSE;
    }
    if (bad) {
        v = 0;
    } else {
        v = data_0213a510[ch] & 0x100;
    }
    return v;
}
extern "C" {
s32 GsHttp_ProcessBodyData(GsHttpConnection *self, char *p, s32 n);
void GsHttp_AppendChunkSizeText(GsHttpConnection *self, char *p, s32 n);
s32 GsHttp_ParseChunkSize(GsHttpConnection *self);
s32 GsHttp_DeliverBodyData(GsHttpConnection *self, char *p, s32 n);
void GsHttp_StepRecvStatus(GsHttpConnection *self);
s32 GsHttp_ParseStatusLine(GsHttpConnection *self);
void GsHttp_StepWaitReply(GsHttpConnection *self);
void GsHttp_StepSendPost(GsHttpConnection *self);
void GsHttp_StepSendRequest(GsHttpConnection *self);
void GsHttp_StepEncryption(GsHttpConnection *self);
void GsHttp_StepConnect(GsHttpConnection *self);
void GsHttp_StepHostLookup(GsHttpConnection *self);
}
}

namespace Nh {







typedef void (*GsGpCallback)(void *, void *, void *);


extern "C" {
s32 strcmp(const char *, const char *);
s32 strncmp(const char *, const char *, s32);
s32 strcspn(const char *, const char *);
char *strchr(const char *, s32);
s32 atol(const char *);
void *memset(void *, s32, s32);
char *goastrdup(const char *);
void GsGp_SetErrorString(void *, const char *);
void GsUtil_StrCopyN(char *, const char *, s32);
s32 GsGp_SendBuddyMessageEx(void *, s32, s32, s32);
s32 GsGp_SendDeleteBuddy(void *, s32);
s32 GsGp_AuthorizeBuddy(void *, s32);
s32 GsGp_SetInfoString(void *, s32, s32);
s32 GsGp_RequestProfileInfo(void *, s32, s32, s32, s32, s32);
s32 GsGpSearch_ProfileSearch(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 GsGpBuf_AppendString(void *, char *, const char *);
s32 GsGpBuf_AppendInt(void *, char *, s32);
s32 GsGpProfile_Find(void *, s32, void *);
s32 GsGpProfile_FindByBuddyIndex(void *, s32);
s32 GsGpProfile_IsUnused(void *);
s32 GsGpProfile_Remove(void *, void *);
void GsUtil_Free(void *);

}

extern "C" {
}
extern "C" {
BOOL GsHttp_ParseUrl(GsHttpConnection *u);
}
}

namespace Nh {
extern "C" {
BOOL GsHttp_ParseUrl(GsHttpConnection *u) {
    char *p;
    char *e;
    BOOL https;
    char saved;
    s32 n;
    char *q;
    if (u == NULL) {
        return FALSE;
    }
    p = u->url;
    if (p == NULL) {
        return FALSE;
    }
    if (strncmp(p, "http://", 7) == 0) {
        https = FALSE;
        p += 7;
    } else if (strncmp(p, "https://", 8) == 0) {
        https = TRUE;
        p += 8;
    } else {
        return FALSE;
    }
    n = strcspn(p, ":/");
    e = p + n;
    saved = p[n];
    p[n] = 0;
    u->serverHost = goastrdup(p);
    if (u->serverHost == NULL) {
        return FALSE;
    }
    *e = saved;
    p += n;
    if (*p == ':') {
        p++;
        u->serverPort = atol(p);
        if (u->serverPort == 0) {
            return FALSE;
        }
        do {
            p++;
        } while (*p != 0 && *p != '/');
    } else if (https) {
        u->serverPort = 0x1bb;
    } else {
        u->serverPort = 0x50;
    }
    if (*p == 0) {
        p = "/";
    }
    u->requestPath = goastrdup(p);
    p = u->requestPath;
    q = strchr(p, 0x20);
    while (q != NULL) {
        *q = '+';
        p = u->requestPath;
        q = strchr(p, 0x20);
    }
    if (p != NULL) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepHostLookup(GsHttpConnection *self) {
    char *h;
    GsHttp_CallProgressCallback(self, 0, 0);
    SocketStartUp();
    if (GsHttp_ParseUrl(self) == 0) {
        self->completed = 1;
        self->result = 3;
        return;
    }
    h = self->proxyHost;
    if (h == 0) {
        h = sGsHttpProxyHost;
        if (h == 0) {
            h = self->serverHost;
        }
    }
    self->serverIp = inet_addr(h);
    if (self->serverIp == -1) {
        SockHostEnt *he = Sock_GetHostByName(h);
        if (he == 0) {
            self->completed = 1;
            self->result = 4;
            return;
        }
        self->serverIp = *(u32 *)*he->addrList;
    }
    self->state = 1;
    GsHttp_CallProgressCallback(self, 0, 0);
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepConnect(GsHttpConnection *self) {
    Unk_ov065_0227b9c4_Addr sa;
    s32 r;
    s32 w[2];
    if (self->socketHandle == -1) {
        self->socketHandle = socket(2, 1, 0);
        if (self->socketHandle == -1) {
            self->completed = 1;
            self->result = 5;
            self->socketError = GOAGetLastError(self->socketHandle);
            return;
        }
        if (SetSockBlocking(self->socketHandle, 0) == 0) {
            self->completed = 1;
            self->result = 5;
            self->socketError = GOAGetLastError(self->socketHandle);
            return;
        }
        if (self->isThrottled != 0) {
            SetReceiveBufferSize(self->socketHandle, sGsHttpThrottleBytes);
        }
        u32 *z = (u32 *)&sa;
        z[0] = 0;
        z[1] = 0;
        sa.family = 2;
        if (self->proxyHost != 0) {
            sa.port = HTONS(self->proxyPort);
        } else if (sGsHttpProxyHost != 0) {
            sa.port = HTONS(sGsHttpProxyPort);
        } else {
            sa.port = HTONS(self->serverPort);
        }
        sa.addr = self->serverIp;
        r = connect(self->socketHandle, &sa, 8);
        if (r == -1) {
            s32 e = GOAGetLastError(self->socketHandle);
            if (e != -6 && e != -26 && e != -76) {
                self->completed = 1;
                self->result = 6;
                self->socketError = e;
                return;
            }
        }
    }
    r = GSISocketSelect(self->socketHandle, 0, &w[0], &w[1]) > 0 ? 1 : 0;
    if (r == -1 || w[1] != 0) {
        self->completed = 1;
        self->result = 6;
        if (r == 0) {
            self->socketError = GOAGetLastError(self->socketHandle);
        }
        return;
    }
    if (w[0] != 0) {
        self->state = 2;
        GsHttp_CallProgressCallback(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepEncryption(GsHttpConnection *self) {
    s32 len;
    char buf[0x400];
    if (self->encryptEnabled == 0) {
        if (strncmp(self->url, "https://", 8) == 0) {
            self->completed = 1;
            self->result = 0x11;
            return;
        }
        self->state = 3;
        GsHttp_CallProgressCallback(self, 0, 0);
        return;
    }
    if (self->encryptSessionReady != 0) {
        self->state = 3;
        GsHttp_CallProgressCallback(self, 0, 0);
        return;
    }
    if (self->encryptInitialized == 0) {
        if (self->encryptStartFn(self, &self->encryptor) == 3) {
            return;
        }
    }
    if (self->sendBuf.readPos < self->sendBuf.length) {
        if (GsHttp_FlushSendBuffer(self) == 0) {
            return;
        }
        if (self->sendBuf.readPos < self->sendBuf.length) {
            return;
        }
        GsHttpBuf_Reset(&self->sendBuf);
    }
    len = 0x400;
    GsHttp_SocketRecv(self, buf, &len);
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepSendRequest(GsHttpConnection *self) {
    GsHttpBuffer *b;
    char tmp[0x14];
    if (self->sendBuf.length == 0) {
        b = &self->sendBuf;
        const char *m;
        if (self->post != 0) {
            m = "POST ";
        } else if (self->requestType == 3) {
            m = "HEAD ";
        } else {
            m = "GET ";
        }
        GsHttpBuf_Append(b, m, 0);
        if (self->proxyHost != 0 || sGsHttpProxyHost != 0) {
            GsHttpBuf_Append(b, self->url, 0);
        } else {
            GsHttpBuf_Append(b, self->requestPath, 0);
        }
        GsHttpBuf_Append(b, " HTTP/1.1\r\n", 0);
        if (self->serverPort == 0x50) {
            GsHttpBuf_AppendHeader(b, "Host", self->serverHost);
        } else {
            GsHttpBuf_Append(b, "Host: ", 0);
            GsHttpBuf_Append(b, self->serverHost, 0);
            GsHttpBuf_AppendChar(b, 0x3a);
            GsHttpBuf_AppendInt(b, self->serverPort);
            GsHttpBuf_Append(b, "\r\n", 2);
        }
        if (self->extraHeaders == 0 || strstr(self->extraHeaders, "User-Agent") == 0) {
            GsHttpBuf_AppendHeader(b, "User-Agent", "GameSpyHTTP/1.0");
        }
        if (self->keepAlive != 0) {
            GsHttpBuf_AppendHeader(b, "Connection", "Keep-Alive");
        } else {
            GsHttpBuf_AppendHeader(b, "Connection", "close");
        }
        if (self->post != 0) {
            OS_SPrintf(tmp, "%d", self->postTotalBytes);
            GsHttpBuf_AppendHeader(b, "Content-Length", tmp);
            GsHttpBuf_AppendHeader(b, "Content-Type", GsHttp_GetContentType(self));
        }
        if (self->extraHeaders != 0) {
            GsHttpBuf_Append(b, self->extraHeaders, 0);
        }
        GsHttpBuf_Append(b, "\r\n", 2);
        if (b != &self->sendBuf) {
            GsHttpBuf_Append(&self->sendBuf, b->data, b->length);
        }
    }
    if (GsHttp_FlushSendBuffer(self) != 0 && self->sendBuf.readPos >= self->sendBuf.length) {
        GsHttpBuf_Reset(&self->sendBuf);
        if (self->post != 0) {
            self->state = 4;
        } else {
            self->state = 5;
        }
        GsHttp_CallProgressCallback(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepSendPost(GsHttpConnection *self) {
    s32 old = self->postBytesSent;
    s32 r = GsHttp_SendPostData(self);
    if (r == 0) {
        GsHttp_FreePostState(self);
        return;
    }
    if (old != self->postBytesSent) {
        GsHttp_CallPostCallback(self);
    }
    if (r == 1) {
        GsHttp_FreePostState(self);
        self->state = 5;
        GsHttp_CallProgressCallback(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepWaitReply(GsHttpConnection *self) {
    s32 v[2];
    if (GSISocketSelect(self->socketHandle, v, 0, 0) == -1) {
        self->completed = 1;
        self->result = 5;
        self->socketError = GOAGetLastError(self->socketHandle);
        return;
    }
    if (v[0] != 0) {
        self->state = 6;
        GsHttp_CallProgressCallback(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
s32 GsHttp_ParseStatusLine(GsHttpConnection *self) {
    s32 a, b, c, d;
    s32 r;
    r = sscanf(self->recvBuf.data, "HTTP/%d.%d %d%n", &a, &b, &c, &d);
    while (self->recvBuf.data[d] != 0 && Unk_ov065_0227b5d4_Chk(self->recvBuf.data, d) != 0) {
        d++;
    }
    if (r != 3 || a < 1 || c < 100 || c >= 0x258) {
        self->completed = 1;
        self->result = 7;
        return 0;
    }
    self->httpMajorVersion = a;
    self->httpMinorVersion = b;
    self->statusCode = c;
    self->statusTextIndex = d;
    return 1;
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepRecvStatus(GsHttpConnection *self) {
    s32 len;
    char buf[0x400];
    s32 r;
    len = 0x400;
    r = GsHttp_SocketRecv(self, buf, &len);
    if (r == 3) {
        return;
    }
    if (r == 1) {
        if (self->recvBuf.readPos == self->recvBuf.length) {
            return;
        }
    }
    if (r == 0) {
        if (GsHttpBuf_Append(&self->recvBuf, buf, len) == 0) {
            return;
        }
    }
    char *e = strstr(self->recvBuf.data, "\r\n");
    if (e != 0) {
        s32 d;
        *e = 0;
        d = e - self->recvBuf.data;
        self->headersEnd = d + 1;
        if (GsHttp_ParseStatusLine(self) == 0) {
            return;
        }
        self->recvBuf.readPos = d + 2;
        self->state = 7;
        GsHttp_CallProgressCallback(self, 0, 0);
        return;
    }
    if (r == 2) {
        self->completed = 1;
        self->result = 7;
        self->socketError = GOAGetLastError(self->socketHandle);
    }
}
}
}

namespace Nb {
extern "C" {
s32 GsHttp_DeliverBodyData(GsHttpConnection *self, char *p, s32 n) {
    char *a = 0;
    s32 b = 0;
    self->bodyBytesReceived += n;
    if (self->bodyBytesReceived == self->contentLength || self->connectionClosed != 0) {
        self->completed = 1;
    }
    if (self->requestType == 0) {
        if (GsHttpBuf_Append(&self->bodyBuf, p, n) == 0) {
            return 0;
        }
        a = self->bodyBuf.data;
        b = self->bodyBuf.length;
    } else if (self->requestType == 1) {
        if (n != 0) {
            self->completed = 1;
            self->result = 13;
            return 0;
        }
        a = p;
        b = n;
    } else if (self->requestType == 2) {
        a = p;
        b = n;
    }
    GsHttp_CallProgressCallback(self, (s32)a, b);
    return 1;
}
}
}

namespace Nb {
extern "C" {
s32 GsHttp_ParseChunkSize(GsHttpConnection *self) {
    s32 v;
    if (sscanf(self->chunkHeader, "%x", &v) != 1) {
        return -1;
    }
    return v;
}
}
}

namespace Nb {
extern "C" {
void GsHttp_AppendChunkSizeText(GsHttpConnection *self, char *p, s32 n) {
    if (n != 0 && self->chunkHeaderLength < 10) {
        s32 l = 10 - self->chunkHeaderLength;
        if (l >= n) {
            l = n;
        }
        memcpy(self->chunkHeader + self->chunkHeaderLength, p, l);
        self->chunkHeaderLength += l;
        self->chunkHeader[self->chunkHeaderLength] = 0;
    }
}
}
}

namespace Nb {
extern "C" {
s32 GsHttp_ProcessBodyData(GsHttpConnection *self, char *p, s32 n) {
    if (self->isChunked != 0) {
        while (n > 0) {
            if (self->chunkState == 0) {
                char *nl = strchr(p, 10);
                if (nl != 0) {
                    GsHttp_AppendChunkSizeText(self, p, nl - p);
                    s32 k = nl + 1 - p;
                    n -= k;
                    p = nl + 1;
                    self->chunkBytesLeft = GsHttp_ParseChunkSize(self);
                    s32 t = self->chunkBytesLeft;
                    if (t == -1) {
                        self->completed = 1;
                        self->result = 7;
                        return 0;
                    }
                    if (t == 0) {
                        self->chunkState = 3;
                    } else {
                        self->chunkState = 1;
                    }
                } else {
                    GsHttp_AppendChunkSizeText(self, p, n);
                    return 1;
                }
            } else if (self->chunkState == 1) {
                s32 c = self->chunkBytesLeft;
                if (c >= n) {
                    c = n;
                }
                if (GsHttp_DeliverBodyData(self, p, c) == 0) {
                    return 0;
                }
                p += c;
                n -= c;
                self->chunkBytesLeft = self->chunkBytesLeft - c;
                if (self->chunkBytesLeft == 0) {
                    self->chunkState = 2;
                }
            } else if (self->chunkState == 2) {
                char *nl = strchr(p, 10);
                if (nl == 0) {
                    return 1;
                }
                nl = nl + 1;
                n -= nl - p;
                p = nl;
                self->chunkHeader[0] = 0;
                self->chunkHeaderLength = 0;
                self->chunkBytesLeft = 0;
                self->chunkState = 0;
            } else if (self->chunkState == 3) {
                self->completed = 1;
                return 1;
            } else {
                return 0;
            }
        }
        return 1;
    }
    return GsHttp_DeliverBodyData(self, p, n);
}
}
}

namespace Na {
extern "C" {
void GsHttp_StepRecvHeaders(GsHttpConnection *self) {
    s32 len;
    u8 buf[0x1000];
    s32 r4;
    s32 off;
    u8 *p;
    u8 *rest;
    s32 rem;
    char *q;
    char *digits;
    s32 st;
    char *e;
    len = 0x1000;
    r4 = GsHttp_SocketRecv(self, buf, &len);
    if (r4 == 3) {
        return;
    }
    if (r4 == 1 && self->recvBuf.readPos == self->recvBuf.length) {
        return;
    }
    if (r4 == 0 && GsHttpBuf_Append(&self->recvBuf, buf, len) == 0) {
        return;
    }
    off = self->recvBuf.readPos;
    p = (u8 *)self->recvBuf.data + off;
    self->headersIndex = off;
    q = strstr((char *)p, "\r\n\r\n");
    if (q == NULL) {
        q = strstr((char *)p, "\n\n");
    }
    if (q == NULL) {
        goto nomatch;
    }
    q[2] = 0;
    rest = (u8 *)q + 4;
    rem = self->recvBuf.length - (rest - (u8 *)self->recvBuf.data);
    self->recvBuf.length = (u8 *)(q + 2) - (u8 *)self->recvBuf.data;
    self->headersEnd = (u8 *)(q + 2) - (u8 *)self->recvBuf.data;
    self->recvBuf.readPos = self->headersEnd;
    st = self->statusCode / 100;
    if (st == 1) {
        if (rem != 0) {
            memmove(self->recvBuf.data, rest, rem + 1);
            self->recvBuf.length = rem;
            self->recvBuf.readPos = 0;
        } else {
            GsHttpBuf_Reset(&self->recvBuf);
        }
        self->state = 6;
        GsHttp_CallProgressCallback(self, 0, 0);
        return;
    }
    if (st == 3) {
        if (self->redirectCount > 10) {
            self->completed = 1;
            self->result = 0xb;
            return;
        }
        q = strstr((char *)p, "Location:");
        if (q != NULL) {
            char *d = q + 9;
            s32 c;
            s32 v;
            goto t1;
        l1:
            d++;
        t1:
            c = *d;
            if (c < 0 || c >= 0x80) {
                v = 0;
            } else {
                v = data_0213a510[c] & 0x100;
            }
            if (v != 0) {
                goto l1;
            }
            e = d;
            goto t2;
        l2:
            e++;
        t2:
            c = *e;
            if (c == 0) {
                goto d2;
            }
            if (c < 0 || c >= 0x80) {
                v = 0;
            } else {
                v = data_0213a510[c] & 0x100;
            }
            if (v == 0) {
                goto l2;
            }
        d2:
            *e = 0;
            if (*d == '/') {
                s32 l = STD_GetStringLength(self->serverHost);
                s32 m = STD_GetStringLength(d);
                self->redirectUrl = (char *)GsUtil_Alloc(l + 0xe + m);
                if (self->redirectUrl == NULL) {
                    self->completed = 1;
                    self->result = 1;
                }
                OS_SPrintf(self->redirectUrl, "http://%s:%d%s", self->serverHost, self->serverPort, d);
                return;
            }
            self->redirectUrl = goastrdup(d);
            if (self->redirectUrl != NULL) {
                return;
            }
            self->completed = 1;
            self->result = 1;
            return;
        }
    }
    q = strstr((char *)p, "Content-Length:");
    if (q != NULL) {
        s32 n;
        char *d0;
        s32 dl;
        char *t;
        Unk_ov065_0227ae94_Blk hb = *(Unk_ov065_0227ae94_Blk *)"2147483647";
        char *hdr = hb.b;
        e = q + 0x10;
        t = e;
        n = STD_GetStringLength(hdr);
        while (t != NULL && *t != 0 && *t != 10 && *t != 13 && *t != 0x20) {
            t++;
        }
        dl = t - e;
        if (dl > n) {
            self->completed = 1;
            self->result = 0x10;
            return;
        }
        if (n == dl) {
            if (strncmp(e, hdr, dl) >= 0) {
                self->completed = 1;
                self->result = 0x10;
                return;
            }
        }
        self->contentLength = atol(e);
    }
    self->isChunked = strstr((char *)p, "Transfer-Encoding: chunked") != NULL ? 1 : 0;
    if (self->isChunked != 0) {
        self->chunkHeader[0] = 0;
        self->chunkHeaderLength = 0;
        self->chunkBytesLeft = 0;
        self->chunkState = 0;
    }
    if ((u32)(self->requestType - 3) <= 1) {
        self->completed = 1;
        return;
    }
    self->state = 8;
    if (q != NULL) {
        if (self->contentLength == 0) {
            self->completed = 1;
            return;
        }
    }
    if (rem > 0) {
        GsHttp_ProcessBodyData(self, rest, rem);
    }
    return;
nomatch:
    if (r4 == 2) {
        self->completed = 1;
        self->result = 7;
        self->socketError = GOAGetLastError(self->socketHandle);
    }
}
}
}

namespace Na {
extern "C" {
// Not in the original binary: unreferenced weak function compiled right after GsHttp_StepRecvHeaders, so that the literal
// "2147483647" is pooled where the original has it; removed by the dead-stripping link (see notes.txt).
__declspec(weak) void Unk_ov065_0227ae94_pool_order(void) {
    STD_GetStringLength("2147483647");
}
}
}

namespace Na {
extern "C" {
void GsHttp_StepRecvBody(GsHttpConnection *self) {
    s32 len;
    u8 buf[0x2000];
    s32 start = current_time();
    u32 elapsed = 0;
    s32 r;
    while (self->completed == 0 && elapsed < self->recvTimeSliceMs) {
        len = 0x2000;
        r = GsHttp_SocketRecv(self, buf, &len);
        if (r == 3 || r == 1) {
            break;
        }
        if (r == 2) {
            self->completed = 1;
            if (self->contentLength > 0 && self->bodyBytesReceived < self->contentLength) {
                self->result = 0xf;
                return;
            }
            break;
        }
        if (GsHttp_ProcessBodyData(self, buf, len) == 0) {
            break;
        }
        elapsed = current_time() - start;
    }
}
}
}

namespace Na {
extern "C" {
void GsHttpPost_FreePart(GsHttpPostPart *r) {
    GsUtil_Free(r->partName);
    if (r->type == 0) {
        GsUtil_Free(r->string.value);
    } else if (r->type == 1) {
        GsUtil_Free(r->file.fileName);
        GsUtil_Free(r->file.reportName);
        GsUtil_Free(r->file.contentType);
    } else if (r->type == 2) {
        GsUtil_Free(r->buffer.reportName);
        GsUtil_Free(r->buffer.contentType);
    }
}
}
}

namespace Na {
extern "C" {
GsHttpPost *GsHttpPost_New(void) {
    GsHttpPost *t = (GsHttpPost *)GsUtil_Alloc(0x14);
    u8 *p;
    u32 i;
    u8 *q;
    u8 *k;
    Unk_ov065_0227acfc_Z z;
    if (t == NULL) {
        return NULL;
    }
    q = (u8 *)t;
    k = (u8 *)0x14;
    z = Unk_ov065_0227acfc_Z_0;
    do {
        *q++ = z;
        k--;
    } while (k != NULL);
    t->autoFree = 1;
    t->parts = ArrayNew(0x18, 0, (ArrayElementFreeFn)GsHttpPost_FreePart);
    if (t->parts == NULL) {
        GsUtil_Free(t);
        return NULL;
    }
    return t;
}
}
}

namespace Na {
extern "C" {
s32 GsHttpPost_GetAutoFree(GsHttpPost *t) {
    return t->autoFree;
}
}
}

namespace Na {
extern "C" {
void GsHttpPost_Free(GsHttpPost *t) {
    ArrayFree(t->parts);
    GsUtil_Free(t);
}
}
}

namespace Na {
extern "C" {
s32 GsHttpPost_AddStringPart(GsHttpPost *self, char *a, char *b) {
    s32 len;
    s32 cnt;
    s32 i;
    s32 c;
    a = goastrdup(a);
    b = goastrdup(b);
    if (a == NULL || b == NULL) {
        GsUtil_Free(a);
        GsUtil_Free(b);
        return 0;
    }
    GsHttpPostPart item = {0, 0, 0, 0, 0, 0};
    item.type = 0;
    item.partName = a;
    item.string.value = b;
    len = STD_GetStringLength(b);
    item.string.length = len;
    item.string.needsEscaping = 0;
    c = strspn(b, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_@-.*");
    if (c != len) {
        cnt = 0;
        item.string.needsEscaping = 1;
        for (i = 0; b[i] != 0; i++) {
            c = b[i];
            if (strchr("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_@-.*", c) == NULL && c != 0x20) {
                cnt++;
            }
        }
        item.string.numEscapedChars = cnt;
    }
    ArrayAppend(self->parts, &item);
    return 1;
}
}
}

namespace Na {
extern "C" {
char *GsHttp_GetContentType(GsHttpConnection *self) {
    if (self->post == NULL) {
        return "";
    }
    if (self->post->isMultipart != 0) {
        return "multipart/form-data; boundary=Qr4G823s23d---<<><><<<>--7d118e0536";
    }
    return "application/x-www-form-urlencoded";
}
}
}

namespace Na {
extern "C" {
s32 GsHttp_GetUrlEncodedLength(GsHttpConnection *self) {
    GsHttpPost *t = self->post;
    s32 sum = 0;
    s32 n;
    s32 i;
    n = ArrayLength(t->parts);
    if (n == 0) {
        return sum;
    }
    i = sum;
    if (i < n) {
        do {
            GsHttpPostPart *r = (GsHttpPostPart *)ArrayNth(t->parts, i);
            s32 l = STD_GetStringLength(r->partName);
            s32 t = sum + l;
            s32 u = t + r->string.length;
            sum = u + r->string.numEscapedChars * 2 + 1;
            i++;
        } while (i < n);
    }
    return sum + (n - 1);
}
}
}

namespace Na {
extern "C" {
s32 GsHttp_GetMultipartLength(GsHttpConnection *self) {
    GsHttpPost *t = self->post;
    s32 sum = 0;
    s32 n;
    s32 i;
    if (data_ov065_022910e8 == 0) {
        s32 l = STD_GetStringLength("--Qr4G823s23d---<<><><<<>--7d118e0536");
        data_ov065_022910e8 = l;
        data_ov065_022910e4 = l + 0x2f;
        data_ov065_022910e0 = l + 0x4c;
        data_ov065_022910dc = l + 4;
    }
    n = ArrayLength(t->parts);
    for (i = 0; i < n; i++) {
        GsHttpPostPart *r = (GsHttpPostPart *)ArrayNth(t->parts, i);
        if (r->type == 0) {
            sum += data_ov065_022910e4;
            sum += STD_GetStringLength(r->partName);
            sum += r->string.length;
        } else if (r->type == 1) {
            sum += data_ov065_022910e0;
            sum += STD_GetStringLength(r->partName);
            sum += STD_GetStringLength(r->file.reportName);
            sum += STD_GetStringLength(r->file.contentType);
            sum += ((GsHttpPostPartState *)ArrayNth(self->postParts, i))->fileLength;
        } else if (r->type == 2) {
            sum += data_ov065_022910e0;
            sum += STD_GetStringLength(r->partName);
            sum += STD_GetStringLength(r->buffer.reportName);
            sum += STD_GetStringLength(r->buffer.contentType);
            sum += r->buffer.length;
        } else {
            return 0;
        }
    }
    return sum + data_ov065_022910dc;
}
}
}

namespace Na {
extern "C" {
s32 GsHttp_GetPostLength(GsHttpConnection *self) {
    if (self->post == NULL) {
        return 0;
    }
    if (self->post->isMultipart != 0) {
        return GsHttp_GetMultipartLength(self);
    }
    return GsHttp_GetUrlEncodedLength(self);
}
}
}

namespace Na {
extern "C" {
s32 GsHttp_OpenPostPart(GsHttpPostPartState *it) {
    s32 t = it->part->type;
    s32 z = 0;
    it->pos = -1;
    if (t == 0) {
    } else if (t == 1) {
        if (it->file == 0) {
            return z;
        }
        if (fseek(it->file, z, 2) != 0) {
            return 0;
        }
        it->fileLength = ftell(it->file);
        if (it->fileLength == -1) {
            return 0;
        }
        rewind(it->file);
    } else if (t == 2) {
    } else {
        return z;
    }
    return 1;
}
}
}

namespace Na {
extern "C" {
void GsHttp_ClosePostPart(GsHttpPostPartState *it) {
    switch (it->part->type) {
    case 0:
        break;
    case 1:
        if (it->file != 0) {
            fclose(it->file);
        }
        it->file = 0;
        break;
    }
}
}
}

namespace Na {
extern "C" {
s32 GsHttp_InitPostState(GsHttpConnection *self) {
    GsHttpPostPartState item;
    s32 n;
    s32 i;
    if (self->post == NULL) {
        return 0;
    }
    self->postPartIndex = 0;
    self->postBytesSent = 0;
    self->postTotalBytes = 0;
    self->postCallback = self->post->postCallback;
    self->postCallbackParam = self->post->postCallbackParam;
    n = ArrayLength(self->post->parts);
    self->postParts = ArrayNew(0x10, n, NULL);
    if (self->postParts == NULL) {
        return 0;
    }
    i = 0;
    if (i < n) {
        GsHttpPostPartState *pi = &item;
        volatile s32 z = 0;
        do {
            GsHttpPostPart *rec = (GsHttpPostPart *)ArrayNth(self->post->parts, i);
            s32 t = z;
            pi->part = (GsHttpPostPart *)t;
            pi->pos = t;
            pi->file = t;
            pi->fileLength = t;
            item.part = rec;
            if (GsHttp_OpenPostPart(pi) == 0) {
                for (i--; i >= 0; i--) {
                    GsHttp_ClosePostPart((GsHttpPostPartState *)ArrayNth(self->postParts, i));
                }
                ArrayFree(self->postParts);
                self->postParts = NULL;
                return 0;
            }
            ArrayAppend(self->postParts, pi);
            i++;
        } while (i < n);
    }
    self->postTotalBytes = GsHttp_GetPostLength(self);
    return 1;
}
}
}

namespace Na {
extern "C" {
void GsHttp_FreePostState(GsHttpConnection *self) {
    if (self->postParts != NULL) {
        s32 n = ArrayLength(self->postParts);
        s32 i = 0;
        if (i < n) {
            do {
                GsHttp_ClosePostPart((GsHttpPostPartState *)ArrayNth(self->postParts, i));
                i++;
            } while (i < n);
        }
        ArrayFree(self->postParts);
        self->postParts = NULL;
    }
    if (self->post != NULL) {
        if (self->post->autoFree != 0) {
            GsHttpPost_Free(self->post);
            self->post = NULL;
        }
    }
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_SendPostPartString(GsHttpPostPartState *st, GsHttpConnection *c) {
    GsHttpPostPart *q = st->part;
    if (q->string.length == 0) {
        return 1;
    }
    if (c->post->isMultipart == 0 && q->string.needsEscaping != 0) {
        char *s = q->string.value;
        struct T4 {
            char b[4];
        };
        T4 tmp = *(T4 *)data_ov065_0228ca58;
        s32 i = 0;
        char ch = s[i];
        if (ch != 0) {
            do {
                if (strchr("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_@-.*", ch) != 0) {
                    GsHttpBuf_AppendChar(&c->sendBuf, ch);
                } else if (ch == 0x20) {
                    GsHttpBuf_AppendChar(&c->sendBuf, 0x2b);
                } else {
                    tmp.b[1] = "0123456789ABCDEF"[ch / 16];
                    tmp.b[2] = "0123456789ABCDEF"[ch % 16];
                    GsHttpBuf_Append(&c->sendBuf, &tmp, 3);
                }
                i++;
                ch = s[i];
            } while (ch != 0);
        }
        return 1;
    }
    s32 n = q->string.length - st->pos;
    s32 r = GsHttp_SocketSend(c, q->string.value, n);
    if (r == -1) {
        return 0;
    }
    st->pos = st->pos + r;
    if (r == n) {
        return 1;
    }
    return 2;
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_SendPostPartFile(GsHttpPostPartState *st, GsHttpConnection *c) {
    char buf[0x1000];
    s32 r;
    do {
        s32 n = fread(buf, 1, 0x1000, st->file);
        if (n <= 0) {
            c->completed = 1;
            c->result = 14;
            return 0;
        }
        st->pos = st->pos + n;
        if (st->pos > st->fileLength) {
            c->completed = 1;
            c->result = 14;
            return 0;
        }
        r = GsHttp_SendOrQueue(c, buf, n);
        if (r == 0) {
            return 0;
        }
        if (st->pos == st->fileLength) {
            return 1;
        }
    } while (r == 1);
    return 2;
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_SendPostPartBuffer(GsHttpPostPartState *st, GsHttpConnection *c) {
    GsHttpPostPart *p = st->part;
    s32 len = p->buffer.length;
    if (len == 0) {
        return 1;
    }
    do {
        s32 n = len - st->pos;
        if (n >= 0x8000) {
            n = 0x8000;
        }
        s32 r = GsHttp_SocketSend(c, p->buffer.data + st->pos, n);
        if (r == -1) {
            return 0;
        }
        st->pos = st->pos + r;
        p = st->part;
        len = p->buffer.length;
        if (len == st->pos) {
            return 1;
        }
        if (r == 0) {
            return 2;
        }
    } while (1);
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_SendPostPart(GsHttpPostPartState *st, GsHttpConnection *c, s32 first) {
    char buf[2048];
    if (st->pos == -1) {
        st->pos = 0;
        if (c->post->isMultipart == 0) {
            if (first != 0) {
                OS_SPrintf(buf, "%s=", st->part->partName);
            } else {
                OS_SPrintf(buf, "&%s=", st->part->partName);
            }
        } else {
            GsHttpPostPart *p = st->part;
            if (p->type == 0) {
                OS_SPrintf(buf, "%sContent-Disposition: form-data; name=\"%s\"\r\n\r\n", first != 0 ? "--Qr4G823s23d---<<><><<<>--7d118e0536\r\n" : "\r\n--Qr4G823s23d---<<><><<<>--7d118e0536\r\n", p->partName);
            } else if (p->type == 1 || p->type == 2) {
                s32 a, b;
                if (p->type == 1) {
                    a = (s32)p->file.reportName;
                    b = (s32)p->file.contentType;
                } else {
                    a = (s32)p->buffer.reportName;
                    b = (s32)p->buffer.contentType;
                }
                OS_SPrintf(buf, "%sContent-Disposition: form-data; name=\"%s\"; filename=\"%s\"\r\nContent-Type: %s\r\n\r\n", first != 0 ? "--Qr4G823s23d---<<><><<<>--7d118e0536\r\n" : "\r\n--Qr4G823s23d---<<><><<<>--7d118e0536\r\n", p->partName, a, b);
            }
        }
        s32 r = GsHttp_SendOrQueue(c, buf, STD_GetStringLength(buf));
        if (r == 0) {
            return 0;
        }
        if (r == 2) {
            return 2;
        }
    }
    if (st->part->type == 0) {
        return GsHttp_SendPostPartString(st, c);
    }
    if (st->part->type == 1) {
        return GsHttp_SendPostPartFile(st, c);
    }
    return GsHttp_SendPostPartBuffer(st, c);
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_SendPostData(GsHttpConnection *c) {
    Unk_ov065_0227a3f4_List *l = (Unk_ov065_0227a3f4_List *)&c->postParts;
    s32 cnt = ArrayLength(l->postParts);
    if (c->sendBuf.length != 0) {
        if (GsHttp_FlushSendBuffer(c) == 0) {
            return 0;
        }
        if (c->sendBuf.readPos < c->sendBuf.length) {
            return 2;
        }
        GsHttpBuf_Reset(&c->sendBuf);
        if (c->postPartIndex == cnt) {
            return 1;
        }
    }
    for (; l->postPartIndex < cnt; l->postPartIndex++) {
        GsHttpPostPartState *s = ArrayNth(l->postParts, l->postPartIndex);
        s32 r = GsHttp_SendPostPart(s, c, l->postPartIndex == 0 ? 1 : 0);
        if (r == 0) {
            return 0;
        }
        if (r == 2) {
            return 2;
        }
    }
    if (c->post->isMultipart != 0) {
        s32 n = STD_GetStringLength("\r\n--Qr4G823s23d---<<><><<<>--7d118e0536--\r\n");
        if (GsHttp_SendOrQueue(c, "\r\n--Qr4G823s23d---<<><><<<>--7d118e0536--\r\n", n) == 0) {
            return 0;
        }
    }
    if (c->sendBuf.length != 0) {
        return 2;
    }
    return 1;
}
}
}

namespace Nm {
extern "C" {
void GsHttp_SetResultFromStatus(GsHttpConnection *c) {
    s32 code = c->statusCode;
    switch (code / 100) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        return;
    case 4:
        switch (code) {
        case 401:
            c->result = 9;
            return;
        case 402:
        case 405:
        case 406:
        case 407:
        case 408:
        case 409:
            break;
        case 403:
            c->result = 10;
            return;
        case 404:
        case 410:
            c->result = 11;
            return;
        }
        c->result = 8;
        return;
    case 5:
        c->result = 12;
        break;
    }
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_Step(GsHttpConnection *c) {
    s32 r;
    if (c->isProcessing != 0) {
        return 0;
    }
    c->isProcessing = 1;
    if (c->state == 0) {
        GsHttp_StepHostLookup(c);
    }
    if (c->state == 1) {
        GsHttp_StepConnect(c);
    }
    if (c->state == 2) {
        GsHttp_StepEncryption(c);
    }
    if (c->state == 3) {
        GsHttp_StepSendRequest(c);
    }
    if (c->state == 4) {
        GsHttp_StepSendPost(c);
    }
    if (c->state == 5) {
        GsHttp_StepWaitReply(c);
    }
    if (c->state == 6) {
        GsHttp_StepRecvStatus(c);
    }
    if (c->state == 7) {
        GsHttp_StepRecvHeaders(c);
    }
    if (c->state == 8) {
        GsHttp_StepRecvBody(c);
    }
    if (c->redirectUrl != 0) {
        GsHttp_ResetForRedirect(c);
    }
    r = c->completed;
    if (r != 0) {
        GsHttp_SetResultFromStatus(c);
        GsHttp_CallCompletedCallback(c);
        GsHttp_FreeConnection(c);
    } else {
        c->isProcessing = 0;
    }
    return r;
}
}
}
