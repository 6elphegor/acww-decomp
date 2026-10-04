// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/GsSocket.h"
#include "net/GsHttpConnection.h"

// ov065 TU37: ghttp (1): ghttpBuffer / connection table / ghttpMain (0x0227931c..0x0227a284)


extern "C" {
s32 sGsHttpThrottleBytes = 125;
u32 sGsHttpThrottleDelay = 250;
void **sGsHttpConnections;
s32 sGsHttpSerial;
s32 sGsHttpConnectionCount;
s32 sGsHttpConnectionCap;
void *sGsHttpProxyHost;
u32 sGsHttpProxyPort;
s32 sGsHttpStartupCount;
}

namespace Ng {




extern s32 sGsSockLastError;
extern GsHostAddr data_ov065_02291094;
extern u8 data_0213a410[];

extern GsHostEnt sGsLocalHostEnt;
extern GsHostAddrList data_ov065_022910a8;
extern u8 data_ov065_0229107c[];

extern "C" {
void MI_CpuFill8(void *p, s32 v, s32 n);
s32 Sock_SendTo(s32 a, s32 b, s32 c, u32 d, void *sa);
s32 Sock_Send(s32 a, s32 b, s32 c, u32 d);
s32 Sock_RecvFrom(s32 a, s32 b, s32 c, u32 d, u8 *sa);
s32 Sock_Recv(s32 a, s32 b, s32 c, u32 d);
s32 Sock_Accept(s32 a, u8 *sa);
s32 Sock_Listen(s32 a, s32 b, s32 c);
s32 Sock_Connect(s32 a, void *sa);
s32 Sock_Bind(s32 a, void *sa);
s32 Sock_Shutdown(s32 a, s32 b, s32 c);
s32 Sock_Close(s32 a, s32 b, s32 c);
s32 Sock_Create(s32 a, s32 b);
s32 Sock_Poll(GsPollFd *arr, u32 n, s64 timeout);
s32 Sock_Fcntl(s32 a, s32 cmd, u32 flags);
u32 SockCore_GetHostIp();
s32 IpAddr_StoreBe32(u32 v, u32 *p);
u32 GsSock_GetLastError(s32 s);
s32 GsHttp_SocketSend(GsHttpConnection *o, char *buf, s32 n);
u32 STD_GetStringLength(const char *s);
char *func_02127838(char *d, const char *s);
void *GsUtil_Alloc(u32 n);
void *GsUtil_Realloc(void *p, s32 n);
void GsUtil_Free(void *p);
void OS_Sleep(s32 ms);
u64 OS_GetTick();
u64 func_02132ef8(u64 a, u32 b, u32 c);
void memcpy(void *d, const void *s, u32 n);
void memset(void *d, s32 v, u32 n);
s32 OS_SPrintf(char *buf, const char *fmt, ...);

s32 GsSock_CheckResult(s32 a, s32 b);
s32 GsSock_SetSockOpt(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 GsSock_GetSockOpt(s32 a, s32 b, s32 c, void *val, s32 *len);
s32 GsSock_Select(s32 sock, s32 *rd, s32 *wr, s32 *ex);
s32 GsHttpBuf_Append(GsHttpBuffer *o, char *s, s32 len);
s32 GsHttpBuf_Grow(GsHttpBuffer *o, s32 n);

}

extern "C" {
static inline u32 Unk_ov065_02278dfc_Ntohl(u32 x) {
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}
}
extern "C" {
s32 GsHttpBuf_Append(GsHttpBuffer *o, char *s, s32 len);
void GsHttpBuf_Free(GsHttpBuffer *o);
s32 GsHttpBuf_InitUser(GsHttpConnection *ow, GsHttpBuffer *o, char *buf, s32 size);
s32 GsHttpBuf_Init(GsHttpConnection *ow, GsHttpBuffer *o, s32 size, s32 grow);
s32 GsHttpBuf_Grow(GsHttpBuffer *o, s32 n);
}
}

namespace Nc {

typedef void (*GsHttpPostCallback)(u32, u32, u32, u32, u32, u32);
typedef void (*GsHttpProgressCallback)(u32, u32, u32, u32, u32, u32, u32);
typedef s32 (*GsHttpCompletedCallback)(u32, u32, u32, u32, u32);
typedef s32 (*GsHttpDecryptFn)(GsHttpConnection *, void *, u8 *, s32 *, u8 *, s32 *);
typedef void (*GsHttpEncryptCleanupFn)(GsHttpConnection *, void *);


extern "C" {
extern GsHttpConnection **sGsHttpConnections;
extern s32 sGsHttpConnectionCap;
extern s32 sGsHttpConnectionCount;
extern s32 sGsHttpSerial;
extern u32 sGsHttpThrottleDelay;
extern s32 sGsHttpThrottleBytes;

u32 GsArray_Count(u32);
s32 GsSock_Send(s32, u8 *, s32, s32);
s32 GsSock_Recv(s32, u8 *, s32, s32);
s32 GsSock_GetLastError(s32);
void GsSock_Shutdown(s32, s32);
void GsSock_Close(s32);
u32 GsUtil_GetTimeMs();
BOOL GsHttpBuf_Read(void *, u8 *, s32 *);
void GsHttpBuf_Reset(void *);
BOOL GsHttpBuf_Append(void *, u8 *, s32);
void GsHttpBuf_Free(void *);
BOOL GsHttpBuf_Init(void *, void *, s32, s32);
BOOL GsHttpBuf_Grow(void *, s32);
void GsUtil_Free(void *);
void *GsUtil_Realloc(void *, u32);
void *GsUtil_Alloc(u32);
void GsHttp_FreePostState(void *);
BOOL GsHttpPost_GetAutoFree(void *);
void GsHttpPost_Free(void *);
void memmove(void *, void *, u32);
void memset(void *, s32, u32);

void GsHttp_LeaveCritical();
void GsHttp_EnterCritical();
BOOL GsHttp_FreeConnection(GsHttpConnection *);
s32 GsHttp_FindFreeSlot();
BOOL GsHttp_DecryptReceived(GsHttpConnection *);
void GsHttp_ForEachConnection(BOOL (*)(GsHttpConnection *));
}


extern "C" {
s32 GsHttp_SocketSend(GsHttpConnection *self, u8 *buf, s32 len);
}
extern "C" {
void GsHttp_CallPostCallback(GsHttpConnection *self);
void GsHttp_CallProgressCallback(GsHttpConnection *self, u32 p1, u32 p2);
void GsHttp_CallCompletedCallback(GsHttpConnection *self);
s32 GsHttp_SendOrQueue(GsHttpConnection *self, u8 *buf, s32 len);
s32 GsHttp_SocketSend(GsHttpConnection *self, u8 *buf, s32 len);
s32 GsHttp_SocketRecv(GsHttpConnection *self, u8 *buf, s32 *plen);
BOOL GsHttp_DecryptReceived(GsHttpConnection *self);
void GsHttp_FreeAllConnections();
void GsHttp_ResetForRedirect(GsHttpConnection *self);
void GsHttp_ForEachConnection(BOOL (*cb)(GsHttpConnection *));
BOOL GsHttp_FreeConnection(GsHttpConnection *s);
GsHttpConnection *GsHttp_NewConnection();
s32 GsHttp_FindFreeSlot();
void GsHttp_LeaveCritical();
void GsHttp_EnterCritical();
void GsHttp_FreeCritical();
void GsHttp_InitCritical();
}
}

namespace Nm {





extern "C" {
extern s32 sGsHttpStartupCount;
extern void *sGsHttpProxyHost;
extern u32 sGsHttpThrottleDelay;
extern s32 sGsHttpThrottleBytes;

s32 GsHttpPost_AddStringPart(void *, const char *, const char *);
s32 GsHttpPost_New();
void GsHttp_ForEachConnection(s32 (*)(GsHttpConnection *));
char *GsUtil_StrDup(const char *);
GsHttpConnection *GsHttp_NewConnection();
BOOL GsHttp_FreeConnection(GsHttpConnection *);
BOOL GsHttp_InitPostState(GsHttpConnection *);
void GsUtil_Sleep(s32);
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
s32 GsArray_Count(void *);
GsHttpPostPartState *GsArray_At(void *, s32);
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
s32 GsHttp_PostAddString(void *a, const char *b, const char *c);
s32 GsHttp_NewPost();
void GsHttp_ProcessAll();
s32 GsHttp_PostEx(const char *a, const char *b, GsHttpPost *c, u32 d, s32 e, u32 f, u32 g, u32 h);
s32 GsHttp_Post(const char *a, GsHttpPost *b, s32 c, u32 d, u32 e);
s32 GsHttp_GetEx(const char *a, const char *b, void *c, s32 d, GsHttpPost *e, u32 f, s32 g, u32 h, u32 i, u32 j);
s32 GsHttp_Get(const char *a, s32 b, u32 c, u32 d);
void GsHttp_Cleanup();
void GsHttp_Startup();
}
}

namespace Nm {
extern "C" {
void GsHttp_Startup() {
    GsHttp_EnterCritical();
    if (++sGsHttpStartupCount == 1) {
        GsHttp_InitCritical();
        sGsHttpThrottleBytes = 0x7d;
        sGsHttpThrottleDelay = 0xfa;
    } else {
        GsHttp_LeaveCritical();
    }
}
}
}

namespace Nm {
extern "C" {
void GsHttp_Cleanup() {
    GsHttp_EnterCritical();
    if (--sGsHttpStartupCount == 0) {
        GsHttp_FreeAllConnections();
        if (sGsHttpProxyHost != 0) {
            GsUtil_Free(sGsHttpProxyHost);
            sGsHttpProxyHost = 0;
        }
        GsHttp_LeaveCritical();
        GsHttp_FreeCritical();
    } else {
        GsHttp_LeaveCritical();
    }
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_Get(const char *a, s32 b, u32 c, u32 d) {
    return GsHttp_GetEx(a, 0, 0, 0, 0, 0, b, 0, c, d);
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_GetEx(const char *a, const char *b, void *c, s32 d, GsHttpPost *e, u32 f, s32 g, u32 h, u32 i, u32 j) {
    GsHttpConnection *conn;
    if (a == 0 || *a == 0) {
        return -1;
    }
    if (d < 0) {
        return -1;
    }
    if (c != 0 && d == 0) {
        return -1;
    }
    if (sGsHttpStartupCount == 0) {
        GsHttp_Startup();
    }
    conn = GsHttp_NewConnection();
    if (conn == 0) {
        return -1;
    }
    conn->requestType = 0;
    conn->url = GsUtil_StrDup(a);
    if (conn->url == 0) {
        GsHttp_FreeConnection(conn);
        return -1;
    }
    if (b != 0 && *b != 0) {
        conn->extraHeaders = GsUtil_StrDup(b);
        if (conn->extraHeaders == 0) {
            GsHttp_FreeConnection(conn);
            return -1;
        }
    }
    conn->post = e;
    conn->isBlocking = g;
    conn->progressCallback = (GsHttpProgressCallback)h;
    conn->completedCallback = (GsHttpCompletedCallback)i;
    conn->callbackParam = j;
    conn->isThrottled = f;
    conn->isUserBodyBuf = (c != 0) ? 1 : 0;
    BOOL ok;
    if (conn->isUserBodyBuf != 0) {
        ok = GsHttpBuf_InitUser(conn, &conn->bodyBuf, c, d);
    } else {
        ok = GsHttpBuf_Init(conn, &conn->bodyBuf, 0x800, 0x800);
    }
    if (ok == 0) {
        GsHttp_FreeConnection(conn);
        return -1;
    }
    if (e != 0) {
        if (GsHttp_InitPostState(conn) == 0) {
            GsHttp_FreeConnection(conn);
            return -1;
        }
    }
    if (g != 0) {
        if (GsHttp_Step(conn) == 0) {
            s32 t = 10;
            do {
                GsUtil_Sleep(t);
            } while (GsHttp_Step(conn) == 0);
        }
        return 0;
    }
    return conn->requestId;
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_Post(const char *a, GsHttpPost *b, s32 c, u32 d, u32 e) {
    return GsHttp_PostEx(a, 0, b, 0, c, 0, d, e);
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_PostEx(const char *a, const char *b, GsHttpPost *c, u32 d, s32 e, u32 f, u32 g, u32 h) {
    GsHttpConnection *conn;
    if (a == 0 || *a == 0) {
        return -1;
    }
    if (c == 0) {
        return -1;
    }
    if (sGsHttpStartupCount == 0) {
        GsHttp_Startup();
    }
    conn = GsHttp_NewConnection();
    if (conn == 0) {
        return -1;
    }
    conn->requestType = 4;
    conn->url = GsUtil_StrDup(a);
    if (conn->url == 0) {
        GsHttp_FreeConnection(conn);
        return -1;
    }
    if (b != 0 && *b != 0) {
        conn->extraHeaders = GsUtil_StrDup(b);
        if (conn->extraHeaders == 0) {
            GsHttp_FreeConnection(conn);
            return -1;
        }
    }
    conn->post = c;
    conn->isBlocking = e;
    conn->progressCallback = (GsHttpProgressCallback)f;
    conn->completedCallback = (GsHttpCompletedCallback)g;
    conn->callbackParam = h;
    conn->isThrottled = d;
    if (c != 0) {
        if (GsHttp_InitPostState(conn) == 0) {
            GsHttp_FreeConnection(conn);
            return -1;
        }
    }
    if (e != 0) {
        if (GsHttp_Step(conn) == 0) {
            s32 t = 10;
            do {
                GsUtil_Sleep(t);
            } while (GsHttp_Step(conn) == 0);
        }
        return 0;
    }
    return conn->requestId;
}
}
}

namespace Nm {
extern "C" {
void GsHttp_ProcessAll() {
    GsHttp_ForEachConnection(GsHttp_Step);
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_NewPost() {
    return GsHttpPost_New();
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_PostAddString(void *a, const char *b, const char *c) {
    if (a == 0) {
        return 0;
    }
    if (b == 0 || *b == 0) {
        return 0;
    }
    if (c == 0) {
        c = "";
    }
    return GsHttpPost_AddStringPart(a, b, c);
}
}
}

namespace Nc {
extern "C" {
s32 GsHttp_FindFreeSlot() {
    s32 i = 0;
    s32 base;
    s32 end;
    for (i = 0; i < sGsHttpConnectionCap; i++) {
        if (sGsHttpConnections[i]->inUse == 0) {
            return i;
        }
    }
    base = sGsHttpConnectionCap;
    end = base + 4;
    void *p = GsUtil_Realloc(sGsHttpConnections, end * 4);
    if (p == 0) {
        return -1;
    }
    sGsHttpConnections = (GsHttpConnection **)p;
    i = base;
    for (; i < end; i++) {
        sGsHttpConnections[i] = (GsHttpConnection *)GsUtil_Alloc(0x184);
        if (sGsHttpConnections[i] == 0) {
            for (i--; i >= base; i--) {
                GsUtil_Free(sGsHttpConnections[i]);
            }
            return -1;
        }
        sGsHttpConnections[i]->inUse = 0;
    }
    sGsHttpConnectionCap = end;
    return base;
}
}
}

namespace Nc {
extern "C" {
GsHttpConnection *GsHttp_NewConnection() {
    GsHttpConnection *s;
    s32 idx;
    BOOL r;
    GsHttp_EnterCritical();
    idx = GsHttp_FindFreeSlot();
    if (idx == -1) {
        GsHttp_LeaveCritical();
        return 0;
    }
    s = sGsHttpConnections[idx];
    memset(s, 0, 0x184);
    s->inUse = 1;
    s->requestId = idx;
    s->serial = sGsHttpSerial++;
    s->requestType = 0;
    s->state = 0;
    s->url = 0;
    s->serverHost = 0;
    s->serverIp = 0;
    s->serverPort = 0;
    s->requestPath = 0;
    s->extraHeaders = 0;
    s->unk_2c = 0;
    s->isBlocking = 0;
    s->keepAlive = 0;
    s->result = 0;
    s->progressCallback = 0;
    s->completedCallback = 0;
    s->callbackParam = 0;
    s->socketHandle = -1;
    s->socketError = 0;
    s->isUserBodyBuf = 0;
    s->httpMajorVersion = 0;
    s->httpMinorVersion = 0;
    s->statusCode = 0;
    s->statusTextIndex = 0;
    s->headersIndex = 0;
    s->headersEnd = 0;
    s->completed = 0;
    s->bodyBytesReceived = 0;
    s->contentLength = -1;
    s->redirectUrl = 0;
    s->redirectCount = 0;
    s->isChunked = 0;
    s->isProcessing = 0;
    s->isThrottled = 0;
    s->lastThrottleRecvTime = 0;
    s->post = 0;
    s->recvTimeSliceMs = 0x1f4;
    s->proxyPort = 0x50;
    s->proxyHost = 0;
    s->encryptor = 0;
    r = GsHttpBuf_Init(s, &s->sendBuf, 0x800, 0x1000);
    if (r != 0) {
        r = GsHttpBuf_Init(s, &s->recvBuf, 0x800, 0x800);
    }
    if (r != 0) {
        r = GsHttpBuf_Init(s, &s->rawRecvBuf, 0x800, 0x400);
    }
    if (r == 0) {
        GsHttp_FreeConnection(s);
        GsHttp_LeaveCritical();
        return 0;
    }
    sGsHttpConnectionCount++;
    GsHttp_LeaveCritical();
    return s;
}
}
}

namespace Nc {
extern "C" {
BOOL GsHttp_FreeConnection(GsHttpConnection *s) {
    if (s == 0) {
        return FALSE;
    }
    if (s->inUse == 0) {
        return FALSE;
    }
    if (s->requestId < 0) {
        return FALSE;
    }
    if (s->requestId >= sGsHttpConnectionCap) {
        return FALSE;
    }
    GsHttp_EnterCritical();
    GsUtil_Free(s->url);
    GsUtil_Free(s->serverHost);
    GsUtil_Free(s->requestPath);
    GsUtil_Free(s->extraHeaders);
    GsUtil_Free(s->redirectUrl);
    GsUtil_Free(s->proxyHost);
    if (s->socketHandle != -1) {
        GsSock_Shutdown(s->socketHandle, 2);
        GsSock_Close(s->socketHandle);
    }
    GsHttpBuf_Free(&s->sendBuf);
    GsHttpBuf_Free(&s->recvBuf);
    GsHttpBuf_Free(&s->rawRecvBuf);
    GsHttpBuf_Free(&s->bodyBuf);
    if (s->postParts != 0) {
        GsHttp_FreePostState(s);
    }
    if (s->post != 0) {
        if (GsHttpPost_GetAutoFree(s->post) != 0) {
            GsHttpPost_Free(s->post);
            s->post = 0;
        }
    }
    if (s->encryptInitialized != 0) {
        if (s->encryptCleanupFn != 0) {
            s->encryptCleanupFn(s, &s->encryptor);
        }
        s->encryptInitialized = 0;
    }
    s->inUse = 0;
    sGsHttpConnectionCount--;
    GsHttp_LeaveCritical();
    return TRUE;
}
}
}

namespace Nc {
extern "C" {
void GsHttp_ForEachConnection(BOOL (*cb)(GsHttpConnection *)) {
    if (sGsHttpConnectionCount > 0) {
        s32 i;
        GsHttp_EnterCritical();
        for (i = 0; i < sGsHttpConnectionCap; i++) {
            GsHttpConnection *s = sGsHttpConnections[i];
            if (s->inUse != 0) {
                cb(s);
            }
        }
        GsHttp_LeaveCritical();
    }
}
}
}

namespace Nc {
extern "C" {
void GsHttp_ResetForRedirect(GsHttpConnection *self) {
    self->state = 0;
    GsUtil_Free(self->url);
    self->url = self->redirectUrl;
    self->redirectUrl = 0;
    GsUtil_Free(self->serverHost);
    self->serverHost = 0;
    self->serverIp = 0;
    self->serverPort = 0;
    GsUtil_Free(self->requestPath);
    self->requestPath = 0;
    GsSock_Shutdown(self->socketHandle, 2);
    GsSock_Close(self->socketHandle);
    self->socketHandle = -1;
    GsHttpBuf_Reset(&self->sendBuf);
    GsHttpBuf_Reset(&self->recvBuf);
    GsHttpBuf_Reset(&self->rawRecvBuf);
    self->httpMajorVersion = 0;
    self->httpMinorVersion = 0;
    self->statusCode = 0;
    self->statusTextIndex = 0;
    self->headersIndex = 0;
    self->headersEnd = 0;
    self->connectionClosed = 0;
    self->redirectCount++;
}
}
}

namespace Nc {
extern "C" {
void GsHttp_FreeAllConnections() {
    if (sGsHttpConnections != 0) {
        s32 i;
        GsHttp_ForEachConnection(GsHttp_FreeConnection);
        for (i = 0; i < sGsHttpConnectionCap; i++) {
            GsUtil_Free(sGsHttpConnections[i]);
        }
        GsUtil_Free(sGsHttpConnections);
        sGsHttpConnections = 0;
        sGsHttpConnectionCap = 0;
        sGsHttpConnectionCount = 0;
    }
}
}
}

namespace Nc {
extern "C" {
void GsHttp_InitCritical() {
}
}
}

namespace Nc {
extern "C" {
void GsHttp_FreeCritical() {
}
}
}

namespace Nc {
extern "C" {
void GsHttp_EnterCritical() {
}
}
}

namespace Nc {
extern "C" {
void GsHttp_LeaveCritical() {
}
}
}

namespace Nc {
extern "C" {
BOOL GsHttp_DecryptReceived(GsHttpConnection *self) {
    s32 inl = 0;
    s32 outl = 0;
    s32 r;
    do {
        s32 pos = self->rawRecvBuf.readPos;
        u8 *in = (u8 *)self->rawRecvBuf.data + pos;
        inl = self->rawRecvBuf.length - pos;
        s32 w = self->recvBuf.length;
        u8 *out = (u8 *)self->recvBuf.data + w;
        outl = self->recvBuf.capacity - w;
        r = self->decryptFn(self, &self->encryptor, in, &inl, out, &outl);
        if (r == 2 && GsHttpBuf_Grow(&self->recvBuf, self->recvBuf.growBy) == 0) {
            return FALSE;
        }
    } while (r == 2 && outl == 0);
    self->rawRecvBuf.readPos += inl;
    self->recvBuf.length += outl;
    if (self->rawRecvBuf.readPos > 0xff) {
        s32 rest = self->rawRecvBuf.length - self->rawRecvBuf.readPos;
        if (rest == 0) {
            GsHttpBuf_Reset(&self->rawRecvBuf);
        } else {
            memmove(self->rawRecvBuf.data, self->rawRecvBuf.data + self->rawRecvBuf.readPos, rest);
            self->rawRecvBuf.readPos = 0;
            self->rawRecvBuf.length = rest;
        }
    }
    if (r == 3) {
        self->completed = 1;
        self->result = 0x11;
        return FALSE;
    }
    return TRUE;
}
}
}

namespace Nc {
extern "C" {
s32 GsHttp_SocketRecv(GsHttpConnection *self, u8 *buf, s32 *plen) {
    s32 len;
    s32 n = *plen - 1;
    if (self->isThrottled != 0) {
        u32 t = GsUtil_GetTimeMs();
        if (t < self->lastThrottleRecvTime + sGsHttpThrottleDelay) {
            return 1;
        }
        self->lastThrottleRecvTime = t;
        if (n >= sGsHttpThrottleBytes) {
            n = sGsHttpThrottleBytes;
        }
    }
    if (self->recvBuf.readPos < self->recvBuf.length) {
        GsHttpBuf_Read(&self->recvBuf, buf, plen);
        if (self->recvBuf.readPos == self->recvBuf.length) {
            self->recvBuf.length = self->headersEnd;
            self->recvBuf.readPos = self->headersEnd;
        }
        return 0;
    }
    len = GsSock_Recv(self->socketHandle, buf, n, 0);
    if (len == -1) {
        s32 e = GsSock_GetLastError(self->socketHandle);
        if (e == -6 || e == -26 || e == -76) {
            return 1;
        }
        self->completed = 1;
        self->result = 5;
        self->socketError = e;
        self->connectionClosed = 1;
        return 3;
    }
    if (len == 0) {
        self->connectionClosed = 1;
        return 2;
    }
    if (self->encryptEnabled != 0) {
        if (GsHttpBuf_Append(&self->rawRecvBuf, buf, len) == 0) {
            return 3;
        }
        if (GsHttp_DecryptReceived(self) == 0) {
            self->completed = 1;
            self->result = 0x11;
            return 3;
        }
        if (self->recvBuf.length - self->recvBuf.readPos <= 0) {
            buf[0] = 0;
            *plen = 0;
            return 1;
        }
        len = *plen - 1;
        if (GsHttpBuf_Read(&self->recvBuf, buf, &len) == 0) {
            return 3;
        }
        if (self->recvBuf.readPos == self->recvBuf.length) {
            self->recvBuf.length = self->headersEnd;
            self->recvBuf.readPos = self->headersEnd;
        }
        if (len <= 0) {
            return 1;
        }
    }
    s32 r = 0;
    buf[len] = 0;
    *plen = len;
    if (len <= 0) {
        r = 1;
    }
    return r;
}
}
}

namespace Nc {
extern "C" {
s32 GsHttp_SocketSend(GsHttpConnection *self, u8 *buf, s32 len) {
    s32 r = GsSock_Send(self->socketHandle, buf, len, 0);
    if (r == -1) {
        s32 e = GsSock_GetLastError(self->socketHandle);
        if (e == -6 || e == -26 || e == -76) {
            return 0;
        }
        self->completed = 1;
        self->result = 5;
        self->socketError = e;
        return -1;
    }
    if (self->state == 4) {
        self->postBytesSent += r;
    }
    return r;
}
}
}

namespace Nc {
extern "C" {
s32 GsHttp_SendOrQueue(GsHttpConnection *self, u8 *buf, s32 len) {
    s32 r = 0;
    if (self->sendBuf.length == 0) {
        r = GsHttp_SocketSend(self, buf, len);
        if (r == -1) {
            return 0;
        }
        if (r == len) {
            return 1;
        }
    }
    if (GsHttpBuf_Append(&self->sendBuf, buf + r, len - r) == 0) {
        return 0;
    }
    return 2;
}
}
}

namespace Nc {
extern "C" {
void GsHttp_CallCompletedCallback(GsHttpConnection *self) {
    if (self->completedCallback != 0) {
        u32 a;
        u32 b;
        if (self->requestType != 0) {
            a = 0;
            b = 0;
        } else {
            a = (u32)self->bodyBuf.data;
            b = self->bodyBytesReceived;
        }
        s32 r = self->completedCallback(self->requestId, self->result, a, b, self->callbackParam);
        if (a != 0 && r == 0) {
            self->bodyBuf.keepData = 1;
        }
    }
}
}
}

namespace Nc {
extern "C" {
void GsHttp_CallProgressCallback(GsHttpConnection *self, u32 p1, u32 p2) {
    if (self->progressCallback != 0) {
        self->progressCallback(self->requestId, self->state, p1, p2, self->bodyBytesReceived, self->contentLength, self->callbackParam);
    }
}
}
}

namespace Nc {
extern "C" {
void GsHttp_CallPostCallback(GsHttpConnection *self) {
    if (self->postCallback != 0) {
        u32 a = GsArray_Count((u32)self->postParts);
        self->postCallback(self->requestId, self->postBytesSent, self->postTotalBytes, self->postPartIndex, a, self->callbackParam);
    }
}
}
}

namespace Ng {
extern "C" {
s32 GsHttpBuf_Grow(GsHttpBuffer *o, s32 n) {
    s32 newsize;
    void *p;
    if (o == 0) {
        return FALSE;
    }
    if (n <= 0) {
        return FALSE;
    }
    newsize = o->capacity + n;
    p = GsUtil_Realloc(o->data, newsize);
    if (p == 0) {
        return FALSE;
    }
    o->data = (char *)p;
    o->capacity = newsize;
    return TRUE;
}
}
}

namespace Ng {
extern "C" {
s32 GsHttpBuf_Init(GsHttpConnection *ow, GsHttpBuffer *o, s32 size, s32 grow) {
    if (ow == 0) {
        return FALSE;
    }
    if (o == 0) {
        return FALSE;
    }
    if (size <= 0) {
        return FALSE;
    }
    if (grow <= 0) {
        return FALSE;
    }
    o->connection = ow;
    o->data = 0;
    o->capacity = 0;
    o->length = 0;
    o->readPos = 0;
    o->growBy = grow;
    o->isFixed = 0;
    o->keepData = 0;
    o->isEncrypted = 0;
    if (GsHttpBuf_Grow(o, size) == 0) {
        return FALSE;
    }
    *o->data = 0;
    return TRUE;
}
}
}

namespace Ng {
extern "C" {
s32 GsHttpBuf_InitUser(GsHttpConnection *ow, GsHttpBuffer *o, char *buf, s32 size) {
    if (ow == 0) {
        return FALSE;
    }
    if (o == 0) {
        return FALSE;
    }
    if (buf == 0) {
        return FALSE;
    }
    if (size <= 0) {
        return FALSE;
    }
    o->connection = ow;
    o->data = buf;
    o->capacity = size;
    o->length = 0;
    o->growBy = 0;
    o->isFixed = 1;
    o->keepData = 1;
    o->isEncrypted = 0;
    *o->data = 0;
    return TRUE;
}
}
}

namespace Ng {
extern "C" {
void GsHttpBuf_Free(GsHttpBuffer *o) {
    if (o != 0 && o->data != 0) {
        if (o->keepData == 0) {
            GsUtil_Free(o->data);
        }
        memset(o, 0, 0x24);
    }
}
}
}

namespace Ng {
extern "C" {
s32 GsHttpBuf_Append(GsHttpBuffer *o, char *s, s32 len) {
    GsHttpConnection *ow = o->connection;
    s32 n;
    s32 r;
    if (o == 0) {
        return FALSE;
    }
    if (s == 0) {
        return FALSE;
    }
    if (len < 0) {
        return FALSE;
    }
    if (len == 0) {
        len = STD_GetStringLength(s);
    }
    if (o->isEncrypted == 1) {
        do {
            n = o->capacity - o->length;
            r = ow->encryptFn(ow, &ow->encryptor, s, &len, o->data + o->length, &n);
            if (r == 2) {
                if (o->isFixed != 0) {
                    o->connection->completed = 1;
                    o->connection->result = 2;
                    return FALSE;
                }
                if (GsHttpBuf_Grow(o, o->growBy) != 0) {
                    o->connection->completed = 1;
                    o->connection->result = 1;
                    return FALSE;
                }
            } else {
                o->length += n;
            }
        } while (r == 2);
    } else {
        s32 t = o->length + len;
        while (t >= o->capacity) {
            if (o->isFixed != 0) {
                o->connection->completed = 1;
                o->connection->result = 2;
                return FALSE;
            }
            if (GsHttpBuf_Grow(o, o->growBy) == 0) {
                o->connection->completed = 1;
                o->connection->result = 1;
                return FALSE;
            }
        }
        memcpy(o->data + o->length, s, len);
        o->length = t;
        o->data[o->length] = 0;
    }
    return TRUE;
}
}
}
