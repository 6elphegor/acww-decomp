// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/DwcHttp.h"

typedef unsigned long long u64;
typedef long long s64;

// Word view of DwcHttpParams for the struct copy in DwcHttp_Init (a copy of the field-typed struct compiles differently).
struct DwcHttpParamsWords {
    s32 v[8];
};

struct Unk_ov065_0226e554_Conn {
    u8 unk_00[0xc];
    void *sslCtx;
    u8 unk_10[0x3c - 0x10];
    s32 rxBufSize;
    void *rxBuf;
    u8 unk_44[4];
    s32 txBufSize;
    void *txBuf;
    u8 unk_50[0x64 - 0x50];
};

struct Unk_ov065_0226e554_Ssl {
    u8 unk_00[0x7d4];
    char *hostName;
    u8 unk_7d8[0x7e4 - 0x7d8];
    u32 (*unk_7e4)(u32);
    u8 unk_7e8[0x804 - 0x7e8];
};

struct Unk_ov065_0226eacc_Tbl {
    u32 unk_00;
    u32 currentThread;
};

extern "C" {

extern char sRootCaGlobalSign[];
extern char sRootCaBaltimore[];
extern char sRootCaGteGlobal[];
extern char sRootCaGte[];
extern char sRootCaNintendo[];
extern char sRootCaThawtePremium[];
extern char sRootCaThawteServer[];
extern char sRootCaVeriSignG2[];
extern char sRootCaVeriSignG3[];
extern char sRootCaVeriSignClass3[];
extern char sRootCaRsaSecureServer[];
extern u32 gOwnIp;
extern Unk_ov065_0226eacc_Tbl data_021fcc2c;

s32 func_0212a438(const char *s);
char *func_02129f1c(const char *hay, const char *needle);
void MI_CpuFill8(void *dst, u32 v, u32 n);
void MI_CpuCopy8(const void *src, void *dst, u32 n);
void memmove(void *dst, void *src, u32 n);
s32 func_0212b770(const char *s);
s32 OS_SNPrintf(char *buf, s32 size, const char *fmt, ...);
void OS_Sleep(s32 ms);
void OS_GetLowEntropyData(void *p);
u32 OS_GetThreadPriority(u32 v);
s32 OS_LockMutex(void *m);
s32 OS_UnlockMutex(void *m);
s32 OS_InitMutex(void *m);
s32 OS_JoinThread(void *t);
s32 OS_IsThreadTerminated(void *t);
s32 OS_WakeupThreadDirect(void *t);
s32 OS_CreateThread(void *t, s32 (*fn)(void *), void *arg, void *stack, u32 size, u32 prio);
u64 OS_GetTick(void);
s32 strcmp(const char *a, const char *b);
char *func_0212a360(char *dst, const char *src);
char *func_0212a2ec(char *dst, const char *src, u32 n);
s32 strncmp(const char *a, const char *b, u32 n);

// other TUs
s32 NasBase64_Decode(const char *s, s32 len, char *dst, u32 size);
s32 NasBase64_Encode(void *a, s32 b, void *c, s32 d);
s32 Dns_Resolve(void *);
void IpSoc_Use(void *);
void IpSoc_Init();
void IpSoc_Bind(u32, u32, u32);
void Ssl_SetRootCaList(void *, u32);
void Ssl_EnableOnCurrentSocket(u32);
void SslRand_AddSeed(u8 *, u32);
s32 IpSoc_TcpConnect();
void IpSoc_Release();
void IpSoc_Unuse();
void IpSoc_FlushPending();
s32 IpSoc_GetReadLength();
u32 IpSoc_Write(u32, u32);
u8 *IpSoc_Read(u32 *);
void IpSoc_Consume(u32);
void IpSoc_TcpWaitClosed();
void IpSoc_TcpShutdown();

// this unit
s32 DwcHttp_GetFieldString(DwcHttpField *tbl, s32 n, const char *key, char *dst, s32 size);
s32 DwcHttp_GetFieldDecoded(DwcHttpField *tbl, s32 n, const char *key, char *dst, u32 size);
char *DwcHttp_FindField(DwcHttpField *tbl, s32 n, const char *key);
s32 DwcHttp_ParseResponse(DwcHttpField *tbl, s32 n, s32 flag, char *text);
s32 DwcHttp_AddField(DwcHttpFieldList *l, const char *k, char *v);
s32 DwcHttp_ParseUrl(DwcHttp *c, char *s);
s32 DwcHttp_GrowBuffer(DwcHttp *c, DwcHttpBuffer *b, s32 n);
void DwcHttp_FreeBuffer(DwcHttp *c, DwcHttpBuffer *b);
s32 DwcHttp_AllocBuffer(DwcHttp *c, DwcHttpBuffer *b, s32 n);
u32 DwcHttp_CertCallback(u32 v);
s32 DwcHttp_AppendBody(DwcHttp *c, const char *s);
s32 DwcHttp_AddFormParam(DwcHttp *c, const char *a1, void *a2, s32 a3);
s32 DwcHttp_AddHeader(DwcHttp *c, const char *a1, const char *a2);
s32 DwcHttp_BuildRequestLine(DwcHttp *c);
void DwcHttp_Destroy(DwcHttp *c);
void DwcHttp_ThreadMain(DwcHttp *c);
s32 DwcHttp_CheckNotAborted(DwcHttp *c);
void DwcHttp_Abort(DwcHttp *c);
void DwcHttp_StartThread(DwcHttp *c);
s32 DwcHttp_FinishHeaders(DwcHttp *c);
s32 DwcHttp_Init(DwcHttp *c, DwcHttpParams *cfg);

// data
void *sDwcHttpRootCaList[11] = {sRootCaVeriSignG3, sRootCaVeriSignG2, sRootCaVeriSignClass3, sRootCaRsaSecureServer,
                                 sRootCaGlobalSign, sRootCaGteGlobal, sRootCaGte, sRootCaBaltimore,
                                 sRootCaThawteServer, sRootCaThawtePremium, sRootCaNintendo};
s32 sDwcHttpTestServer;

s32 DwcHttp_Init(DwcHttp *c, DwcHttpParams *cfg) {
    MI_CpuFill8(c, 0, 0x1a60);
    c->contentLength = -1;
    *(DwcHttpParamsWords *)&c->url = *(DwcHttpParamsWords *)cfg;
    c->lowRecvBuf = c->allocFunc("http->lowrecvbuf", 0xb68);
    if (c->lowRecvBuf == NULL) {
        c->result = 1;
        return 1;
    }
    c->lowSendBuf = c->allocFunc("http->lowsendbuf", 0x5ea);
    if (c->lowSendBuf == NULL) {
        c->result = 1;
        return 1;
    }
    DwcHttp_ParseUrl(c, cfg->url);
    c->result = DwcHttp_BuildRequestLine(c);
    if (c->result == 0) {
        c->initFlag = 0xff;
    }
    return c->result;
}

s32 DwcHttp_FinishHeaders(DwcHttp *c) {
    char buf[8];
    s32 n;
    if (DwcHttp_AddHeader(c, "Connection", "close") != 0) {
        return 1;
    }
    n = func_0212a438(func_02129f1c((char *)c->requestBuffer.base, "\r\n\r\n") + 4);
    if (n != 0) {
        OS_SNPrintf(buf, 7, "%d", n);
        if (DwcHttp_AddHeader(c, "Content-Length", buf) != 0) {
            return 1;
        }
    }
    return 0;
}

void DwcHttp_StartThread(DwcHttp *c) {
    u32 prio = OS_GetThreadPriority(data_021fcc2c.currentThread);
    c->isAbortRequested = 0;
    OS_InitMutex(&c->abortMutex);
    OS_InitMutex(&c->responseMutex);
    if (c->useTestServer == 1) {
        sDwcHttpTestServer = 1;
    } else {
        sDwcHttpTestServer = 0;
    }
    if (c->threadId == 0 || OS_IsThreadTerminated(&c->thread) != 0) {
        OS_CreateThread(&c->thread, (s32 (*)(void *))DwcHttp_ThreadMain, c, (u8 *)c + 0x1a60, 0x1000, prio - 1);
        OS_WakeupThreadDirect(&c->thread);
    }
}

void DwcHttp_Abort(DwcHttp *c) {
    if (c->initFlag == 0xff) {
        OS_LockMutex(&c->abortMutex);
        c->isAbortRequested = 1;
        OS_UnlockMutex(&c->abortMutex);
        if (c->threadId != 0) {
            OS_JoinThread(&c->thread);
        }
    }
}

s32 DwcHttp_CheckNotAborted(DwcHttp *c) {
    OS_LockMutex(&c->abortMutex);
    if (c->isAbortRequested == 1) {
        OS_UnlockMutex(&c->abortMutex);
        return 0;
    }
    OS_UnlockMutex(&c->abortMutex);
    OS_Sleep(10);
    return 1;
}

void DwcHttp_ThreadMain(DwcHttp *c) {
    s32 timeout;
    Unk_ov065_0226e554_Ssl *ssl;
    s32 host;
    u64 start;
    u64 mark;
    s32 hdr;
    Unk_ov065_0226e554_Conn *conn;
    DwcHttpBuffer *rb;
    s32 i, len, r, got;
    u8 tmp[0x20];
    char *p, *q, *q2;
    s8 ch;
    u8 *data;

    hdr = 0;
    conn = (Unk_ov065_0226e554_Conn *)&c->ipSocket;
    ssl = (Unk_ov065_0226e554_Ssl *)&c->sslCtx;
    rb = &c->responseBuffer;
    timeout = c->timeoutMs;
    if (timeout <= 0) {
        timeout = 0xea60;
    }
    MI_CpuFill8(conn, 0, 0x64);
    conn->rxBufSize = 0xb68;
    conn->rxBuf = c->lowRecvBuf;
    conn->txBufSize = 0x5ea;
    conn->txBuf = c->lowSendBuf;
    IpSoc_Use(conn);
    i = 0;
    do {
        host = Dns_Resolve(c->hostName);
        if (host != 0) {
            break;
        }
        OS_Sleep(500);
        i++;
    } while (i < 3);
    if (host == 0) {
        c->result = 2;
        return;
    }
    IpSoc_Init();
    u32 port;
    if (c->isHttps == 1) {
        MI_CpuFill8(ssl, 0, 0x804);
        ssl->unk_7e4 = DwcHttp_CertCallback;
        ssl->hostName = c->hostName;
        conn->sslCtx = ssl;
        Ssl_SetRootCaList(sDwcHttpRootCaList, 0xb);
        Ssl_EnableOnCurrentSocket(1);
        port = 0x1bb;
    } else {
        port = 0x50;
    }
    IpSoc_Bind(0, (u16)port, host);
    start = OS_GetTick();
    if (c->isHttps == 1) {
        OS_GetLowEntropyData(tmp);
        SslRand_AddSeed(tmp, 0x20);
        mark = start;
    }
    i = 0;
    do {
        r = IpSoc_TcpConnect();
        if (r == 0) {
            break;
        }
        OS_Sleep(500);
        i++;
    } while (i < 3);
    if (r != 0) {
        c->result = 3;
        IpSoc_Release();
        IpSoc_Unuse();
        return;
    }
    c->requestBuffer.cur = c->requestBuffer.base;
    p = (char *)c->requestBuffer.base;
    c->requestBuffer.limit = (u8 *)p + func_0212a438(p);
    if (c->requestBuffer.cur < c->requestBuffer.limit) {
        do {
            if (gOwnIp == 0) {
                c->result = 5;
                goto fail;
            }
            len = c->requestBuffer.limit - c->requestBuffer.cur;
            if (len > 0x2bc) {
                len = 0x2bc;
            }
            len = IpSoc_Write((u32)c->requestBuffer.cur, len);
            if (len <= 0) {
                c->result = 5;
                goto fail;
            }
            IpSoc_FlushPending();
            u64 now = OS_GetTick();
            u64 el = ((now - start) << 6) / 0x82ea;
            if ((u64)(s64)timeout < el) {
                c->result = 4;
                goto fail;
            }
            if (c->isHttps == 1) {
                el = ((now - mark) << 6) / 0x82ea;
                if (1000 < el) {
                    OS_GetLowEntropyData(tmp);
                    SslRand_AddSeed(tmp, 0x20);
                    mark = now;
                }
            }
            c->requestBuffer.cur = c->requestBuffer.cur + len;
            if (DwcHttp_CheckNotAborted(c) == 0) {
                c->result = 7;
                goto fail;
            }
        } while (c->requestBuffer.cur < c->requestBuffer.limit);
    }
    DwcHttp_FreeBuffer(c, &c->requestBuffer);
    OS_LockMutex(&c->responseMutex);
    if (c->userRecvBuffer == NULL) {
        if (DwcHttp_AllocBuffer(c, &c->responseBuffer, c->rxBufSize) == 0) {
            c->result = 1;
            OS_UnlockMutex(&c->responseMutex);
            goto fail;
        }
    } else {
        c->responseBuffer.base = c->userRecvBuffer;
        c->responseBuffer.cur = c->responseBuffer.base;
        c->responseBuffer.limit = c->responseBuffer.base + c->rxBufSize;
        c->responseBuffer.capacity = c->rxBufSize;
    }
    rb->cur = rb->base;
    rb->limit = rb->base + rb->capacity;
    OS_UnlockMutex(&c->responseMutex);
    {
        for (;;) {
            if (gOwnIp == 0) {
                c->result = 5;
                goto fail;
            }
            OS_LockMutex(&c->responseMutex);
            if (rb->cur >= rb->limit - 1) {
                OS_UnlockMutex(&c->responseMutex);
                goto done8;
            }
            len = IpSoc_GetReadLength();
            if (len > 0) {
                data = IpSoc_Read((u32 *)&len);
                if (data == NULL) {
                    OS_UnlockMutex(&c->responseMutex);
                    goto done8;
                }
                s32 room = rb->limit - 1 - rb->cur;
                got = len;
                if (got >= room) {
                    got = room;
                }
                MI_CpuCopy8(data, rb->cur, got);
                rb->cur = rb->cur + got;
                *rb->cur = 0;
                if (hdr != 1) {
                    p = (char *)rb->base;
                    if (func_02129f1c(p, "\r\n\r\n") != NULL) {
                        hdr = 1;
                        c->bodyStart = func_02129f1c(p, "\r\n\r\n") + 4;
                        q = func_02129f1c((char *)rb->base, "Content-Length: ");
                        if (q != NULL) {
                            q = q + func_0212a438("Content-Length: ");
                            q2 = func_02129f1c(q, "\r\n");
                            ch = q2[0];
                            q2[0] = 0;
                            c->contentLength = func_0212b770(q);
                            q2[0] = ch;
                        }
                    }
                }
                if ((u32)len > (u32)got) {
                    IpSoc_Consume(len);
                    OS_UnlockMutex(&c->responseMutex);
                    goto done8;
                }
                IpSoc_Consume(got);
            }
            if (len < 0) {
                OS_UnlockMutex(&c->responseMutex);
                goto done8;
            }
            if (c->contentLength > 0 && len > 0 && (u8 *)c->bodyStart + c->contentLength <= rb->cur) {
                OS_UnlockMutex(&c->responseMutex);
                goto done8;
            }
            u64 now = OS_GetTick();
            u64 el = ((now - start) << 6) / 0x82ea;
            if ((u64)(s64)timeout < el) {
                c->result = 6;
                OS_UnlockMutex(&c->responseMutex);
                goto fail;
            }
            if (c->isHttps == 1) {
                el = ((now - mark) << 6) / 0x82ea;
                if (1000 < el) {
                    OS_GetLowEntropyData(tmp);
                    SslRand_AddSeed(tmp, 0x20);
                    mark = now;
                }
            }
            OS_UnlockMutex(&c->responseMutex);
            if (DwcHttp_CheckNotAborted(c) == 0) {
                c->result = 7;
                goto fail;
            }
        }
    }
done8:
    IpSoc_TcpShutdown();
    IpSoc_TcpWaitClosed();
    IpSoc_Release();
    IpSoc_Unuse();
    c->result = 8;
    return;
fail:
    IpSoc_TcpShutdown();
    IpSoc_TcpWaitClosed();
    IpSoc_Release();
    IpSoc_Unuse();
    return;
}

void DwcHttp_Destroy(DwcHttp *c) {
    if (c != NULL) {
        if (c->userRecvBuffer == NULL) {
            DwcHttp_FreeBuffer(c, &c->responseBuffer);
        }
        DwcHttp_FreeBuffer(c, &c->requestBuffer);
        if (c->lowRecvBuf != NULL) {
            c->freeFunc("http->lowrecvbuf", c->lowRecvBuf, 0);
            c->lowRecvBuf = NULL;
        }
        if (c->lowSendBuf != NULL) {
            c->freeFunc("http->lowsendbuf", c->lowSendBuf, 0);
            c->lowSendBuf = NULL;
        }
        MI_CpuFill8(c, 0, 0x1a60);
    }
}

s32 DwcHttp_BuildRequestLine(DwcHttp *c) {
    DwcHttpBuffer *b = &c->requestBuffer;
    const char *fmt = c->method == 0 ? "POST /%s HTTP/1.0\r\nContent-type: application/x-www-form-urlencoded\r\nHost: %s\r\n\r\n" : "GET /%s HTTP/1.0\r\nHost: %s\r\n\r\n";
    s32 n, r, sz;
    n = func_0212a438(c->hostName);
    n += func_0212a438(fmt) - 4 + func_0212a438(c->path);
    sz = n + 0x400;
    if (DwcHttp_AllocBuffer(c, &c->requestBuffer, sz) != 1) {
        return 1;
    }
    r = OS_SNPrintf((char *)b->cur, b->capacity, fmt, c->path, c->hostName);
    b->cur = b->cur + r;
    return 0;
}

s32 DwcHttp_AddHeader(DwcHttp *c, const char *a1, const char *a2) {
    s32 n, avail;
    DwcHttpBuffer *b = &c->requestBuffer;
    char *p;
    s8 saved;
    n = func_0212a438(a2);
    n += func_0212a438("%s: %s\r\n") - 4 + func_0212a438(a1);
    avail = b->limit - b->cur;
    if (n + 1 > avail) {
        if (DwcHttp_GrowBuffer(c, b, n - avail + 1) == 0) {
            return 1;
        }
    }
    p = func_02129f1c((char *)b->base, "\r\n\r\n") + 2;
    saved = p[0];
    memmove(p + n, p, func_0212a438(p) + 1);
    s32 r = OS_SNPrintf(p, n + 1, "%s: %s\r\n", a1, a2);
    p[r] = saved;
    b->cur = b->cur + n;
    return 0;
}

s32 DwcHttp_AddFormParam(DwcHttp *c, const char *a1, void *a2, s32 a3) {
    DwcHttpBuffer *b = &c->requestBuffer;
    const char *fmt = c->numFormParams == 0 ? "%s=" : "&%s=";
    s32 r7, len, tot, avail, r;
    c->numFormParams++;
    r7 = NasBase64_Encode(a2, a3, NULL, 0);
    len = func_0212a438(fmt);
    tot = r7 + (len - 2 + func_0212a438(a1));
    avail = b->limit - b->cur;
    if (tot > avail) {
        if (DwcHttp_GrowBuffer(c, b, tot - avail + 1) == 0) {
            return 1;
        }
        avail = b->limit - b->cur;
    }
    r = OS_SNPrintf((char *)b->cur, avail, fmt, a1);
    b->cur = b->cur + r;
    if (NasBase64_Encode(a2, a3, b->cur, b->limit - b->cur - 1) < 0) {
        return 1;
    }
    b->cur = b->cur + r7;
    *b->cur = 0;
    return 0;
}

s32 DwcHttp_AppendBody(DwcHttp *c, const char *s) {
    s32 n, avail, r;
    DwcHttpBuffer *b = &c->requestBuffer;
    n = func_0212a438(s);
    avail = b->limit - b->cur;
    if (n > avail) {
        if (DwcHttp_GrowBuffer(c, b, n - avail + 1) == 0) {
            return 1;
        }
        avail = b->limit - b->cur;
    }
    r = OS_SNPrintf((char *)b->cur, avail, "%s", s);
    if (r != n) {
        return 1;
    }
    b->cur = b->cur + r;
    return 0;
}

u32 DwcHttp_CertCallback(u32 v) {
    if (v & 0x8000) {
        v &= ~0x8000;
    }
    return v;
}

s32 DwcHttp_AllocBuffer(DwcHttp *c, DwcHttpBuffer *b, s32 n) {
    if (n == 0) {
        return 0;
    }
    b->base = (u8 *)c->allocFunc("DWCHttpBuffer", n);
    if (b->base == NULL) {
        return 0;
    }
    b->cur = b->base;
    b->capacity = n;
    b->limit = b->base + b->capacity;
    return 1;
}

void DwcHttp_FreeBuffer(DwcHttp *c, DwcHttpBuffer *b) {
    if (b->base != NULL) {
        c->freeFunc("DWCHttpBuffer", b->base, 0);
    }
    MI_CpuFill8(b, 0, 0x10);
}

s32 DwcHttp_GrowBuffer(DwcHttp *c, DwcHttpBuffer *b, s32 n) {
    u8 *p;
    if (n <= 0) {
        return 0;
    }
    p = (u8 *)c->allocFunc(NULL, b->capacity + n);
    if (p == NULL) {
        return 0;
    }
    MI_CpuCopy8(b->base, p, b->capacity);
    c->freeFunc(NULL, b->base, 0);
    if (p == NULL) {
        return 0;
    }
    b->cur = b->cur + (p - b->base);
    b->capacity = b->capacity + n;
    b->base = p;
    b->limit = p + b->capacity;
    return 1;
}

s32 DwcHttp_ParseUrl(DwcHttp *c, char *s) {
    char *q;
    u32 n;
    if ((u32)func_0212a438(s) >= 0x80) {
        return 0;
    }
    func_0212a2ec(c->urlBuffer, s, 0x80);
    n = func_0212a438(s);
    if (n != (u32)func_0212a438(c->urlBuffer)) {
        return 0;
    }
    if (func_02129f1c(c->urlBuffer, "http://")) {
        c->hostName = c->urlBuffer + 7;
        c->isHttps = 0;
    } else {
        q = func_02129f1c(c->urlBuffer, "https://");
        if (q == NULL) {
            return 0;
        }
        c->hostName = q + 8;
        c->isHttps = 1;
    }
    q = func_02129f1c(c->hostName, "/");
    if (q == NULL) {
        c->path = NULL;
    } else {
        *q = 0;
        c->path = q + 1;
    }
    return 1;
}

s32 DwcHttp_AddField(DwcHttpFieldList *l, const char *k, char *v) {
    if (l->count > l->capacity) {
        return 0;
    }
    l->entries[l->count].key = k;
    l->entries[l->count].value = v;
    l->count++;
    return 1;
}

s32 DwcHttp_ParseResponse(DwcHttpField *tbl, s32 n, s32 flag, char *text) {
    DwcHttpFieldList l;
    char *p;
    char *q;
    char *r;
    char *end;
    char *tx;
    char *t;
    l.entries = tbl;
    l.capacity = n;
    l.count = 0;
    MI_CpuFill8(tbl, 0, n * 8);
    p = func_02129f1c(text, "\r\n\r\n");
    if (p == NULL) {
        return 0;
    }
    end = p + 4 + func_0212a438(p + 4);
    q = func_02129f1c(text, " ");
    if (q == NULL) {
        return 0;
    }
    r = q + 1;
    r[3] = 0;
    if (DwcHttp_AddField(&l, "httpresult", r) != 1) {
        return 0;
    }
    if (flag == 1 || strncmp(r, "200", 3) != 0) {
        if (DwcHttp_AddField(&l, "httpbody", p + 4) != 1) {
            return 0;
        }
        return 1;
    }
    q = func_02129f1c(r + 4, "\r\n");
    if (q == NULL) {
        return 0;
    }
    tx = q + 2;
    while (tx[0] != 0xd && tx[1] != 0xa) {
        q = func_02129f1c(tx, ": ");
        if (q == NULL) {
            break;
        }
        q[1] = 0;
        q[0] = q[1];
        t = q + 2;
        q = func_02129f1c(t, "\r\n");
        if (q == NULL) {
            break;
        }
        q[1] = 0;
        q[0] = q[1];
        if (DwcHttp_AddField(&l, tx, t) != 1) {
            return 0;
        }
        tx = t + func_0212a438(t) + 2;
    }
    t = p + 4;
    while ((u32)t < (u32)end) {
        q = func_02129f1c(t, "=");
        if (q == NULL) {
            break;
        }
        q[0] = 0;
        tx = q + 1;
        q = func_02129f1c(tx, "&");
        if (q == NULL) {
            q = func_02129f1c(tx, "\r\n");
        }
        if (q != NULL) {
            q[0] = 0;
        }
        if (DwcHttp_AddField(&l, t, tx) != 1) {
            return 0;
        }
        t = tx + func_0212a438(tx) + 1;
    }
    return 1;
}

char *DwcHttp_FindField(DwcHttpField *tbl, s32 n, const char *key) {
    s32 i = 0;
    DwcHttpField *p;
    if (n > 0) {
        p = tbl;
        do {
            if (p->key == NULL) {
                break;
            }
            if (strcmp(key, p->key) == 0) {
                return tbl[i].value;
            }
            p++;
            i++;
        } while (i < n);
    }
    return NULL;
}

s32 DwcHttp_GetFieldDecoded(DwcHttpField *tbl, s32 n, const char *key, char *dst, u32 size) {
    char *s = DwcHttp_FindField(tbl, n, key);
    if (s == NULL) {
        return 0;
    }
    s32 r = NasBase64_Decode(s, func_0212a438(s), dst, size);
    if (r != -1 && (u32)r < size) {
        dst[r] = 0;
    }
    return r;
}

s32 DwcHttp_GetFieldString(DwcHttpField *tbl, s32 n, const char *key, char *dst, s32 size) {
    char *s = DwcHttp_FindField(tbl, n, key);
    if (s == NULL) {
        return 0;
    }
    if (func_0212a438(s) >= size) {
        return 0;
    }
    func_0212a360(dst, s);
    return 1;
}

}
