// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef long long s64;

// ov065 TU36: GameSpy common (nonport: PRNG/base64/socket wrappers, ghttpBuffer) 0x022789fc..0x0227931c

struct Unk_ov065_02278e64_A {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    s16 unk_0a;
    u32 unk_0c;
};
struct Unk_ov065_02278e64_B {
    u32 *unk_00;
    u32 unk_04;
    u8 pad_08[0x10];
};
struct Unk_ov065_02291094 {
    u32 hostIp;
    u8 pad_04[0x10];
};

extern "C" {
extern const char data_ov065_0228b394[4] = "[]_";
extern const char data_ov065_0228b398[4] = "-_=";
extern const char data_ov065_0228b39c[4] = "+/=";
s32 sGsRandSeed = 1;
s32 sGsSockLastError;
u8 data_ov065_0229107c[4];
Unk_ov065_02278e64_A sGsLocalHostEnt;
Unk_ov065_02291094 data_ov065_02291094;
Unk_ov065_02278e64_B data_ov065_022910a8;
}

namespace FA {
extern "C" {
extern const char data_ov065_0228b394[];
extern const char data_ov065_0228b398[];
extern const char data_ov065_0228b39c[];
extern s32 sGsRandSeed;
extern s32 sGsSockLastError;
s32 Sock_InetAtoN(s32, u32 *);
s32 Sock_GetSockName(s32, void *);
s32 GsSock_CheckResult(s32, s32);
u64 OS_GetTick(void);
s32 GsUtil_Rand(void);
u32 GsUtil_ParkMillerNext(u32);
void GsUtil_Base64EncodeBlock(char *, char *, s32);
s32 GsSock_InetAddr(s32);
s32 OS_SPrintf(char *, char *, s32);
}
}

namespace FB {

struct Unk_ov065_02278c64_Sa {
    u8 b[8];
};

struct Unk_ov065_02278f0c_Pfd {
    s32 fd;
    s16 events;
    s16 revents;
};

struct Unk_ov065_0227931c_Owner {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3c[0x0c];
    s32 unk_48;
    s32 unk_4c;
    u8 pad_50[4];
    char *unk_54;
    u8 pad_58[4];
    s32 unk_5c;
    s32 unk_60;
    u8 pad_64[0x98];
    s32 unk_fc;
    u8 pad_100[0x64];
    u32 unk_164[6];
    s32 (*unk_17c)(Unk_ov065_0227931c_Owner *, void *, char *, s32 *, char *, s32 *);
};

struct Unk_ov065_0227931c_Buf {
    Unk_ov065_0227931c_Owner *unk_00;
    char *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
};





extern "C" {
extern s32 sGsSockLastError;
extern Unk_ov065_02291094 data_ov065_02291094;
extern u8 data_0213a410[];
extern Unk_ov065_02278e64_A sGsLocalHostEnt;
extern Unk_ov065_02278e64_B data_ov065_022910a8;
extern u8 data_ov065_0229107c[];
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
s32 Sock_Poll(Unk_ov065_02278f0c_Pfd *arr, u32 n, s64 timeout);
s32 Sock_Fcntl(s32 a, s32 cmd, u32 flags);
u32 SockCore_GetHostIp();
s32 IpAddr_StoreBe32(u32 v, u32 *p);
u32 GsSock_GetLastError(s32 s);
s32 GsHttp_SocketSend(Unk_ov065_0227931c_Owner *o, char *buf, s32 n);
u32 STD_GetStringLength(const char *s);
char *func_02127838(char *d, const char *s);
void *GsUtil_Alloc(u32 n);
void *GsUtil_Realloc(void *p, s32 n);
void GsUtil_Free(void *p);
void OS_Sleep(s32 ms);
u64 OS_GetTick();
void memcpy(void *d, const void *s, u32 n);
void func_0212899c(void *d, s32 v, u32 n);
s32 OS_SPrintf(char *buf, const char *fmt, ...);

s32 GsSock_CheckResult(s32 a, s32 b);
s32 GsSock_SetSockOpt(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 GsSock_GetSockOpt(s32 a, s32 b, s32 c, void *val, s32 *len);
s32 GsSock_Select(s32 sock, s32 *rd, s32 *wr, s32 *ex);
s32 GsHttpBuf_Append(Unk_ov065_0227931c_Buf *o, char *s, s32 len);
s32 GsHttpBuf_Grow(Unk_ov065_0227931c_Buf *o, s32 n);
}
}

namespace FB {
extern "C" {
s32 GsHttpBuf_AppendHeader(Unk_ov065_0227931c_Buf *o, char *a, char *b) {
    if (!GsHttpBuf_Append(o, a, 0)) {
        return FALSE;
    }
    if (!GsHttpBuf_Append(o, ": ", 2)) {
        return FALSE;
    }
    if (!GsHttpBuf_Append(o, b, 0)) {
        return FALSE;
    }
    if (GsHttpBuf_Append(o, "\r\n", 2)) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace FB {
extern "C" {
s32 GsHttpBuf_AppendChar(Unk_ov065_0227931c_Buf *o, u8 c) {
    u8 t = c;
    if (o != 0) {
        return GsHttpBuf_Append(o, (char *)&t, 1);
    }
    return FALSE;
}
}
}

namespace FB {
extern "C" {
s32 GsHttpBuf_AppendInt(Unk_ov065_0227931c_Buf *o, s32 x) {
    char buf[16];
    OS_SPrintf(buf, "%d", x);
    return GsHttpBuf_Append(o, buf, 0);
}
}
}

namespace FB {
extern "C" {
void GsHttpBuf_Reset(Unk_ov065_0227931c_Buf *o) {
    o->unk_0c = 0;
    o->unk_10 = 0;
    *o->unk_04 = 0;
}
}
}

namespace FB {
extern "C" {
s32 GsHttp_FlushSendBuffer(Unk_ov065_0227931c_Owner *o) {
    s32 *pp = &o->unk_60;
    s32 z = 0;
    s32 w, e;
    s32 r;
    do {
        s32 t = GsSock_Select(o->unk_48, (s32 *)z, &w, &e);
        if (t == ~z || e != 0) {
            o->unk_fc = 1;
            o->unk_38 = 5;
            o->unk_4c = GsSock_GetLastError(o->unk_48);
            return FALSE;
        }
        if (w == 0) {
            return TRUE;
        }
        r = GsHttp_SocketSend(o, o->unk_54 + o->unk_60, o->unk_5c - o->unk_60);
        if (r == ~z) {
            return FALSE;
        }
        *pp += r;
    } while (o->unk_60 < o->unk_5c);
    return TRUE;
}
}
}

namespace FB {
extern "C" {
s32 GsHttpBuf_Read(Unk_ov065_0227931c_Buf *o, char *dst, s32 *len) {
    s32 n = *len;
    s32 avail;
    if (n == 0) {
        return FALSE;
    }
    avail = o->unk_0c - o->unk_10;
    if (avail <= 0) {
        return FALSE;
    }
    if (n >= avail) {
        n = avail;
    }
    memcpy(dst, o->unk_04 + o->unk_10, n);
    dst[n] = 0;
    *len = n;
    o->unk_10 += n;
    return TRUE;
}
}
}

namespace FB {
extern "C" {
u32 GsUtil_GetTimeMs() {
    return (OS_GetTick() << 6) / 0x82ea;
}
}
}

namespace FB {
extern "C" {
void GsUtil_Sleep(s32 ms) {
    OS_Sleep(ms);
}
}
}

namespace FB {
extern "C" {
void GsSock_StartupStub() {
}
}
}

namespace FB {
extern "C" {
void GsSock_CleanupStub() {
}
}
}

namespace FB {
extern "C" {
char *GsUtil_StrDup(const char *s) {
    char *r;
    if (s == 0) {
        return 0;
    }
    r = (char *)GsUtil_Alloc(STD_GetStringLength(s) + 1);
    if (r != 0) {
        func_02127838(r, s);
    }
    return r;
}
}
}

namespace FB {
extern "C" {
char *GsUtil_StrToLower(char *s) {
    s32 c;
    char *r = s;
    c = *s;
    if (c != 0) {
        do {
            if (c >= 0 && c < 0x80) {
                c = data_0213a410[c];
            }
            *s = c;
            s++;
            c = *s;
        } while (c != 0);
    }
    return r;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_SetBlocking(s32 sock, s32 flag) {
    u32 v = Sock_Fcntl(sock, 3, 0);
    if (flag) {
        v = v & ~4;
    } else {
        v = v | 4;
    }
    if (Sock_Fcntl(sock, 4, v) == 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_SetRecvBufSize(s32 sock, s32 val) {
    s32 t = GsSock_SetSockOpt(sock, 0xffff, 0x1002, (s32)&val, 4);
    BOOL r = FALSE;
    if (t != -1) {
        r = TRUE;
    }
    return r;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_SetSendBufSize(s32 sock, s32 val) {
    s32 t = GsSock_SetSockOpt(sock, 0xffff, 0x1001, (s32)&val, 4);
    BOOL r = FALSE;
    if (t != -1) {
        r = TRUE;
    }
    return r;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_GetRecvBufSize(s32 sock) {
    s32 v;
    s32 len = 4;
    s32 r = GsSock_GetSockOpt(sock, 0xffff, 0x1002, &v, &len);
    s32 m = -1;
    if (r != m) {
        m = v;
    }
    return m;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_GetSendBufSize(s32 sock) {
    s32 v;
    s32 len = 4;
    s32 r = GsSock_GetSockOpt(sock, 0xffff, 0x1001, &v, &len);
    s32 m = -1;
    if (r != m) {
        m = v;
    }
    return m;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_Select(s32 sock, s32 *rd, s32 *wr, s32 *ex) {
    Unk_ov065_02278f0c_Pfd pfd;
    s32 r;
    pfd.fd = sock;
    pfd.events = 0;
    if (rd) {
        pfd.events |= 1;
    }
    if (wr) {
        pfd.events |= 8;
    }
    pfd.revents = 0;
    r = Sock_Poll(&pfd, 1, 0);
    if (r < 0) {
        return -1;
    }
    if (rd) {
        if (r > 0 && (pfd.revents & 0x41) != 0) {
            *rd = 1;
        } else {
            *rd = 0;
        }
    }
    if (wr) {
        if (r > 0 && (pfd.revents & 8) != 0) {
            *wr = 1;
        } else {
            *wr = 0;
        }
    }
    if (ex) {
        if (r > 0 && (pfd.revents & 0x20) != 0) {
            *ex = 1;
        } else {
            *ex = 0;
        }
    }
    return r;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_CanRead(s32 a) {
    s32 out = 0;
    if (GsSock_Select(a, &out, 0, 0) == 1) {
        return out;
    }
    return 0;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_CanWrite(s32 a) {
    s32 out = 0;
    if (GsSock_Select(a, 0, &out, 0) == 1) {
        return out;
    }
    return 0;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_GetLocalHost() {
    sGsLocalHostEnt.unk_00 = (u32)"localhost";
    sGsLocalHostEnt.unk_04 = (u32)data_ov065_0229107c;
    sGsLocalHostEnt.unk_08 = 2;
    sGsLocalHostEnt.unk_0a = 0;
    sGsLocalHostEnt.unk_0c = (u32)&data_ov065_022910a8;
    data_ov065_02291094.hostIp = 0;
    IpAddr_StoreBe32(SockCore_GetHostIp(), (u32 *)&data_ov065_02291094);
    if (data_ov065_02291094.hostIp == 0) {
        return 0;
    }
    data_ov065_022910a8.unk_00 = (u32 *)&data_ov065_02291094;
    sGsLocalHostEnt.unk_0a = 4;
    data_ov065_022910a8.unk_04 = 0;
    return (s32)&sGsLocalHostEnt;
}
}
}

namespace FB {
extern "C" {
static inline u32 Unk_ov065_02278dfc_Ntohl(u32 x) {
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}

s32 GsSock_IsPrivateAddress(u32 *p) {
    u32 v = Unk_ov065_02278dfc_Ntohl(*p);
    u32 a = (v >> 24) & 0xff;
    s32 b = (v >> 16) & 0xff;
    if (a == 10) {
        return TRUE;
    }
    if (a == 0xac && b >= 0x10 && b <= 0x1f) {
        return TRUE;
    }
    if (a == 0xc0 && b == 0xa8) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_CheckResult(s32 a, s32 b) {
    if (a >= 0) {
        return a;
    }
    sGsSockLastError = a;
    return b;
}
}
}

namespace FB {
extern "C" {
s32 GsSock_Socket(s32 a, s32 b) {
    return GsSock_CheckResult(Sock_Create(a, b), -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_Close(s32 a, s32 b, s32 c) {
    return GsSock_CheckResult(Sock_Close(a, b, c), -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_Shutdown(s32 a, s32 b, s32 c) {
    return GsSock_CheckResult(Sock_Shutdown(a, b, c), -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_Bind(s32 a, Unk_ov065_02278c64_Sa *src, u32 len) {
    Unk_ov065_02278c64_Sa l;
    if (*(u16 *)&src->b[2] == 0) {
        return 0;
    }
    l = *src;
    l.b[0] = len;
    return GsSock_CheckResult(Sock_Bind(a, &l), -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_Connect(s32 a, Unk_ov065_02278c64_Sa *src, u32 len) {
    Unk_ov065_02278c64_Sa l;
    l = *src;
    l.b[0] = len;
    return GsSock_CheckResult(Sock_Connect(a, &l), -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_Listen(s32 a, s32 b, s32 c) {
    return GsSock_CheckResult(Sock_Listen(a, b, c), -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_Accept(s32 a, u8 *sa, s32 *len) {
    s32 r;
    *sa = *len;
    r = Sock_Accept(a, sa);
    *len = *sa;
    return GsSock_CheckResult(r, -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_Recv(s32 a, s32 b, s32 c, u32 d) {
    return GsSock_CheckResult(Sock_Recv(a, b, c, d), -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_RecvFrom(s32 a, s32 b, s32 c, u32 d, u8 *sa, s32 *len) {
    s32 r;
    *sa = *len;
    r = Sock_RecvFrom(a, b, c, d, sa);
    *len = *sa;
    return GsSock_CheckResult(r, -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_Send(s32 a, s32 b, s32 c, u32 d) {
    return GsSock_CheckResult(Sock_Send(a, b, c, d), -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_SendTo(s32 a, s32 b, s32 c, u32 d, Unk_ov065_02278c64_Sa *addr, u32 len) {
    Unk_ov065_02278c64_Sa l;
    *(len ? &l : &l) = *addr;
    l.b[0] = len;
    return GsSock_CheckResult(Sock_SendTo(a, b, c, d, &l), -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_GetSockOpt(s32 a, s32 b, s32 c, void *val, s32 *len) {
    MI_CpuFill8(val, 0, *len);
    return GsSock_CheckResult(0, -1);
}
}
}

namespace FB {
extern "C" {
s32 GsSock_SetSockOpt(s32 a, s32 b, s32 c, s32 d, s32 e) {
    return GsSock_CheckResult(0, -1);
}
}
}

namespace FA {
extern "C" {
s32 GsSock_GetSockName(s32 a, u8 *p1, u32 *p2) {
    *p1 = *p2;
    a = Sock_GetSockName(a, p1);
    *p2 = *p1;
    return GsSock_CheckResult(a, -1);
}
}
}

namespace FA {
extern "C" {
s32 GsSock_InetAddr(s32 a) {
    u32 v;
    if (Sock_InetAtoN(a, &v) == 0) {
        return -1;
    }
    return v;
}
}
}

namespace FA {
extern "C" {
u32 GsSock_GetLastError(void) {
    return sGsSockLastError;
}
}
}

namespace FA {
extern "C" {
void GsUtil_GetTimeSeconds(u32 *out) {
    u64 t = OS_GetTick();
    u64 v = (t << 6) / 0x1ff6210;
    if (out != NULL) {
        *out = (u32)v;
    }
}
}
}

namespace FA {
extern "C" {
u32 GsUtil_ParkMillerNext(u32 x) {
    u32 hi;
    u32 r = (x & 0xffff) * 0x41a7;
    hi = (x >> 16) * 0x41a7;
    r += (hi & 0x7fff) << 16;
    if (r > 0x7fffffff) {
        r = (r & 0x7fffffff) + 1;
    }
    r += hi >> 15;
    if (r > 0x7fffffff) {
        r = (r & 0x7fffffff) + 1;
    }
    return r;
}
}
}

namespace FA {
extern "C" {
s32 GsUtil_Rand(void) {
    s32 r = GsUtil_ParkMillerNext(sGsRandSeed);
    sGsRandSeed = r;
    return r;
}
}
}

namespace FA {
extern "C" {
void GsUtil_SeedRand(u32 seed) {
    if (seed != 0) {
        seed &= 0x7fffffff;
    } else {
        seed = 1;
    }
    sGsRandSeed = seed;
}
}
}

namespace FA {
extern "C" {
s32 GsUtil_RandRange(s32 a, s32 b) {
    s32 d = b - a;
    if (d == 0) {
        return a;
    }
    s32 q = GsUtil_Rand();
    s32 m = q % d;
    return m + a;
}
}
}

namespace FA {
extern "C" {
void GsUtil_Base64EncodeBlock(char *in, char *out, s32 n) {
    u8 buf[3];
    s32 i = 0;
    u8 *p;
    if (n > 0) {
        p = buf;
        do {
            *p = in[i];
            p++;
            i++;
        } while (i < n);
    }
    if (i < 3) {
        p = buf + i;
        do {
            *p = 0;
            p++;
            i++;
        } while (i < 3);
    }
    out[0] = buf[0] >> 2;
    out[1] = ((buf[0] & 3) << 4) | (buf[1] >> 4);
    out[2] = ((buf[1] & 0xf) << 2) | (buf[2] >> 6);
    out[3] = buf[2] & 0x3f;
}
}
}

namespace FA {
extern "C" {
void GsUtil_Base64Encode(char *in, char *out, s32 n, s32 mode) {
    char *start = out;
    s32 rem = n;
    const char *tbl;
    char *end;
    s32 m;
    switch (mode) {
    case 1:
        tbl = data_ov065_0228b394;
        break;
    case 2:
        tbl = data_ov065_0228b398;
        break;
    default:
        tbl = data_ov065_0228b39c;
        break;
    }
    while (rem > 0) {
        GsUtil_Base64EncodeBlock(in, out, n >= 3 ? 3 : n);
        out += 4;
        in += 3;
        rem -= 3;
    }
    end = out;
    m = n % 3;
    if (m == 1) {
        end = out - 2;
    } else if (m == 2) {
        end = out - 1;
    }
    *out = 0;
    if (out > start) {
        do {
            char c;
            out--;
            if (out >= end) {
                *out = tbl[2];
            } else {
                c = *out;
                if (c <= 0x19) {
                    *out = c + 0x41;
                } else if (c <= 0x33) {
                    *out = c + 0x47;
                } else if (c <= 0x3d) {
                    *out = c - 4;
                } else if (c == 0x3e) {
                    *out = tbl[0];
                } else if (c == 0x3f) {
                    *out = tbl[1];
                }
            }
        } while (out > start);
    }
}
}
}
