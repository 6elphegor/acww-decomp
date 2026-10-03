// mwcc-flags: -O4,p -str reuse
#include "types.h"

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

extern s32 sGsSockLastError;
struct Unk_ov065_02291094 {
    u32 unk_00;
};
extern Unk_ov065_02291094 data_ov065_02291094;
extern u8 data_0213a410[];

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
};
extern Unk_ov065_02278e64_A sGsLocalHostEnt;
extern Unk_ov065_02278e64_B data_ov065_022910a8;
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
u64 func_02132ef8(u64 a, u32 b, u32 c);
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

extern "C" {
static inline u32 Unk_ov065_02278dfc_Ntohl(u32 x) {
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}
}
extern "C" {
s32 GsHttpBuf_Append(Unk_ov065_0227931c_Buf *o, char *s, s32 len);
void GsHttpBuf_Free(Unk_ov065_0227931c_Buf *o);
s32 GsHttpBuf_InitUser(Unk_ov065_0227931c_Owner *ow, Unk_ov065_0227931c_Buf *o, char *buf, s32 size);
s32 GsHttpBuf_Init(Unk_ov065_0227931c_Owner *ow, Unk_ov065_0227931c_Buf *o, s32 size, s32 grow);
s32 GsHttpBuf_Grow(Unk_ov065_0227931c_Buf *o, s32 n);
}
}

namespace Nc {
struct Unk_ov065_02279c7c;

typedef void (*Unk_ov065_02279588_Cb1)(u32, u32, u32, u32, u32, u32);
typedef void (*Unk_ov065_022795d4_Cb2)(u32, u32, u32, u32, u32, u32, u32);
typedef s32 (*Unk_ov065_0227960c_Cb3)(u32, u32, u32, u32, u32);
typedef s32 (*Unk_ov065_022798f8_Cb4)(Unk_ov065_02279c7c *, void *, u8 *, s32 *, u8 *, s32 *);
typedef void (*Unk_ov065_02279a64_Cb5)(Unk_ov065_02279c7c *, void *);

struct Unk_ov065_02279c7c {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    void *unk_14;
    void *unk_18;
    s32 unk_1c;
    u16 unk_20;
    void *unk_24;
    void *unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    Unk_ov065_022795d4_Cb2 unk_3c;
    Unk_ov065_0227960c_Cb3 unk_40;
    u32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    u32 unk_50[3];
    u32 unk_5c;
    u32 unk_60[5];
    u32 unk_74;
    u8 *unk_78;
    s32 unk_7c;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    u32 unk_8c[3];
    u32 unk_98;
    u8 *unk_9c;
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    u32 unk_ac[4];
    u32 unk_bc;
    u32 unk_c0;
    u32 unk_c4[5];
    u32 unk_d8;
    u32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
    s32 unk_f0;
    s32 unk_f4;
    s32 unk_f8;
    s32 unk_fc;
    u32 unk_100;
    u32 unk_104;
    void *unk_108;
    s32 unk_10c;
    s32 unk_110;
    u32 unk_114[6];
    s32 unk_12c;
    s32 unk_130;
    u32 unk_134;
    u32 unk_138;
    void *unk_13c;
    u32 unk_140;
    u32 unk_144;
    u32 unk_148;
    u32 unk_14c;
    Unk_ov065_02279588_Cb1 unk_150;
    u32 unk_154;
    u32 unk_158;
    void *unk_15c;
    u16 unk_160;
    u32 unk_164;
    u32 unk_168;
    u32 unk_16c;
    u32 unk_170;
    u32 unk_174;
    Unk_ov065_02279a64_Cb5 unk_178;
    u32 unk_17c;
    Unk_ov065_022798f8_Cb4 unk_180;
};

extern "C" {
extern Unk_ov065_02279c7c **sGsHttpConnections;
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
void func_0212899c(void *, s32, u32);

void GsHttp_LeaveCritical();
void GsHttp_EnterCritical();
BOOL GsHttp_FreeConnection(Unk_ov065_02279c7c *);
s32 GsHttp_FindFreeSlot();
BOOL GsHttp_DecryptReceived(Unk_ov065_02279c7c *);
void GsHttp_ForEachConnection(BOOL (*)(Unk_ov065_02279c7c *));
}


extern "C" {
s32 GsHttp_SocketSend(Unk_ov065_02279c7c *self, u8 *buf, s32 len);
}
extern "C" {
void GsHttp_CallPostCallback(Unk_ov065_02279c7c *self);
void GsHttp_CallProgressCallback(Unk_ov065_02279c7c *self, u32 p1, u32 p2);
void GsHttp_CallCompletedCallback(Unk_ov065_02279c7c *self);
s32 GsHttp_SendOrQueue(Unk_ov065_02279c7c *self, u8 *buf, s32 len);
s32 GsHttp_SocketSend(Unk_ov065_02279c7c *self, u8 *buf, s32 len);
s32 GsHttp_SocketRecv(Unk_ov065_02279c7c *self, u8 *buf, s32 *plen);
BOOL GsHttp_DecryptReceived(Unk_ov065_02279c7c *self);
void GsHttp_FreeAllConnections();
void GsHttp_ResetForRedirect(Unk_ov065_02279c7c *self);
void GsHttp_ForEachConnection(BOOL (*cb)(Unk_ov065_02279c7c *));
BOOL GsHttp_FreeConnection(Unk_ov065_02279c7c *s);
Unk_ov065_02279c7c *GsHttp_NewConnection();
s32 GsHttp_FindFreeSlot();
void GsHttp_LeaveCritical();
void GsHttp_EnterCritical();
void GsHttp_FreeCritical();
void GsHttp_InitCritical();
}
}

namespace Nm {
struct Unk_ov065_0227a4e8_Part {
    s32 unk_00;
    char *unk_04;
    char *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227a4e8_Slot {
    Unk_ov065_0227a4e8_Part *unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0227a3f4_List {
    void *unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227a4e8_Req {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_02279c7c {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    void *unk_14;
    void *unk_18;
    s32 unk_1c;
    u16 unk_20;
    void *unk_24;
    void *unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    void *unk_3c;
    void *unk_40;
    u32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    u32 unk_50[3];
    s32 unk_5c;
    s32 unk_60;
    u32 unk_64[4];
    u32 unk_74;
    u8 *unk_78;
    s32 unk_7c;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    u32 unk_8c[3];
    u32 unk_98;
    u8 *unk_9c;
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    u32 unk_ac[4];
    u32 unk_bc;
    u32 unk_c0;
    u32 unk_c4[5];
    u32 unk_d8;
    u32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
    s32 unk_f0;
    s32 unk_f4;
    s32 unk_f8;
    s32 unk_fc;
    u32 unk_100;
    u32 unk_104;
    void *unk_108;
    s32 unk_10c;
    s32 unk_110;
    u32 unk_114[6];
    s32 unk_12c;
    s32 unk_130;
    u32 unk_134;
    u32 unk_138;
    Unk_ov065_0227a4e8_Req *unk_13c;
    void *unk_140;
    s32 unk_144;
    u32 unk_148;
};

extern "C" {
extern s32 sGsHttpStartupCount;
extern void *sGsHttpProxyHost;
extern u32 sGsHttpThrottleDelay;
extern s32 sGsHttpThrottleBytes;

s32 GsHttpPost_AddStringPart(void *, const char *, const char *);
s32 GsHttpPost_New();
void GsHttp_ForEachConnection(s32 (*)(Unk_ov065_02279c7c *));
char *GsUtil_StrDup(const char *);
Unk_ov065_02279c7c *GsHttp_NewConnection();
BOOL GsHttp_FreeConnection(Unk_ov065_02279c7c *);
BOOL GsHttp_InitPostState(Unk_ov065_02279c7c *);
void GsUtil_Sleep(s32);
void GsHttp_StepHostLookup(Unk_ov065_02279c7c *);
void GsHttp_StepConnect(Unk_ov065_02279c7c *);
void GsHttp_StepEncryption(Unk_ov065_02279c7c *);
void GsHttp_StepSendRequest(Unk_ov065_02279c7c *);
void GsHttp_StepSendPost(Unk_ov065_02279c7c *);
void GsHttp_StepWaitReply(Unk_ov065_02279c7c *);
void GsHttp_StepRecvStatus(Unk_ov065_02279c7c *);
void GsHttp_StepRecvHeaders(Unk_ov065_02279c7c *);
void GsHttp_StepRecvBody(Unk_ov065_02279c7c *);
void GsHttp_ResetForRedirect(Unk_ov065_02279c7c *);
void GsHttp_CallCompletedCallback(Unk_ov065_02279c7c *);
void GsHttp_LeaveCritical();
void GsHttp_EnterCritical();
void GsHttp_FreeCritical();
void GsHttp_InitCritical();
void GsHttp_FreeAllConnections();
void GsUtil_Free(void *);
s32 GsArray_Count(void *);
Unk_ov065_0227a4e8_Slot *GsArray_At(void *, s32);
s32 GsHttp_FlushSendBuffer(Unk_ov065_02279c7c *);
void GsHttpBuf_Reset(void *);
s32 GsHttp_SendOrQueue(Unk_ov065_02279c7c *, const void *, s32);
s32 GsHttp_SocketSend(Unk_ov065_02279c7c *, const void *, s32);
BOOL GsHttpBuf_InitUser(Unk_ov065_02279c7c *, void *, void *, s32);
BOOL GsHttpBuf_Init(Unk_ov065_02279c7c *, void *, s32, s32);
void GsHttpBuf_AppendChar(void *, s32);
BOOL GsHttpBuf_Append(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 STD_GetStringLength(const char *);
s32 func_0212a120(const char *, s32);
s32 func_02128030(void *, s32, s32, u32);

s32 GsHttp_Step(Unk_ov065_02279c7c *);
void GsHttp_SetResultFromStatus(Unk_ov065_02279c7c *);
s32 GsHttp_SendPostPart(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *, s32);
s32 GsHttp_SendPostPartBuffer(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
s32 GsHttp_SendPostPartFile(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
s32 GsHttp_SendPostPartString(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
void GsHttp_Startup();
}
extern "C" {
s32 GsHttp_PostAddString(void *a, const char *b, const char *c);
s32 GsHttp_NewPost();
void GsHttp_ProcessAll();
s32 GsHttp_PostEx(const char *a, const char *b, Unk_ov065_0227a4e8_Req *c, u32 d, s32 e, u32 f, u32 g, u32 h);
s32 GsHttp_Post(const char *a, Unk_ov065_0227a4e8_Req *b, s32 c, u32 d, u32 e);
s32 GsHttp_GetEx(const char *a, const char *b, void *c, s32 d, Unk_ov065_0227a4e8_Req *e, u32 f, s32 g, u32 h, u32 i, u32 j);
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
s32 GsHttp_GetEx(const char *a, const char *b, void *c, s32 d, Unk_ov065_0227a4e8_Req *e, u32 f, s32 g, u32 h, u32 i, u32 j) {
    Unk_ov065_02279c7c *conn;
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
    conn->unk_0c = 0;
    conn->unk_14 = GsUtil_StrDup(a);
    if (conn->unk_14 == 0) {
        GsHttp_FreeConnection(conn);
        return -1;
    }
    if (b != 0 && *b != 0) {
        conn->unk_28 = GsUtil_StrDup(b);
        if (conn->unk_28 == 0) {
            GsHttp_FreeConnection(conn);
            return -1;
        }
    }
    conn->unk_13c = e;
    conn->unk_30 = g;
    conn->unk_3c = (void *)h;
    conn->unk_40 = (void *)i;
    conn->unk_44 = j;
    conn->unk_134 = f;
    conn->unk_e0 = (c != 0) ? 1 : 0;
    BOOL ok;
    if (conn->unk_e0 != 0) {
        ok = GsHttpBuf_InitUser(conn, &conn->unk_bc, c, d);
    } else {
        ok = GsHttpBuf_Init(conn, &conn->unk_bc, 0x800, 0x800);
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
    return conn->unk_04;
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_Post(const char *a, Unk_ov065_0227a4e8_Req *b, s32 c, u32 d, u32 e) {
    return GsHttp_PostEx(a, 0, b, 0, c, 0, d, e);
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_PostEx(const char *a, const char *b, Unk_ov065_0227a4e8_Req *c, u32 d, s32 e, u32 f, u32 g, u32 h) {
    Unk_ov065_02279c7c *conn;
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
    conn->unk_0c = 4;
    conn->unk_14 = GsUtil_StrDup(a);
    if (conn->unk_14 == 0) {
        GsHttp_FreeConnection(conn);
        return -1;
    }
    if (b != 0 && *b != 0) {
        conn->unk_28 = GsUtil_StrDup(b);
        if (conn->unk_28 == 0) {
            GsHttp_FreeConnection(conn);
            return -1;
        }
    }
    conn->unk_13c = c;
    conn->unk_30 = e;
    conn->unk_3c = (void *)f;
    conn->unk_40 = (void *)g;
    conn->unk_44 = h;
    conn->unk_134 = d;
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
    return conn->unk_04;
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
        if (sGsHttpConnections[i]->unk_00 == 0) {
            return i;
        }
    }
    base = sGsHttpConnectionCap;
    end = base + 4;
    void *p = GsUtil_Realloc(sGsHttpConnections, end * 4);
    if (p == 0) {
        return -1;
    }
    sGsHttpConnections = (Unk_ov065_02279c7c **)p;
    i = base;
    for (; i < end; i++) {
        sGsHttpConnections[i] = (Unk_ov065_02279c7c *)GsUtil_Alloc(0x184);
        if (sGsHttpConnections[i] == 0) {
            for (i--; i >= base; i--) {
                GsUtil_Free(sGsHttpConnections[i]);
            }
            return -1;
        }
        sGsHttpConnections[i]->unk_00 = 0;
    }
    sGsHttpConnectionCap = end;
    return base;
}
}
}

namespace Nc {
extern "C" {
Unk_ov065_02279c7c *GsHttp_NewConnection() {
    Unk_ov065_02279c7c *s;
    s32 idx;
    BOOL r;
    GsHttp_EnterCritical();
    idx = GsHttp_FindFreeSlot();
    if (idx == -1) {
        GsHttp_LeaveCritical();
        return 0;
    }
    s = sGsHttpConnections[idx];
    func_0212899c(s, 0, 0x184);
    s->unk_00 = 1;
    s->unk_04 = idx;
    s->unk_08 = sGsHttpSerial++;
    s->unk_0c = 0;
    s->unk_10 = 0;
    s->unk_14 = 0;
    s->unk_18 = 0;
    s->unk_1c = 0;
    s->unk_20 = 0;
    s->unk_24 = 0;
    s->unk_28 = 0;
    s->unk_2c = 0;
    s->unk_30 = 0;
    s->unk_34 = 0;
    s->unk_38 = 0;
    s->unk_3c = 0;
    s->unk_40 = 0;
    s->unk_44 = 0;
    s->unk_48 = -1;
    s->unk_4c = 0;
    s->unk_e0 = 0;
    s->unk_e4 = 0;
    s->unk_e8 = 0;
    s->unk_ec = 0;
    s->unk_f0 = 0;
    s->unk_f4 = 0;
    s->unk_f8 = 0;
    s->unk_fc = 0;
    s->unk_100 = 0;
    s->unk_104 = -1;
    s->unk_108 = 0;
    s->unk_10c = 0;
    s->unk_110 = 0;
    s->unk_12c = 0;
    s->unk_134 = 0;
    s->unk_138 = 0;
    s->unk_13c = 0;
    s->unk_158 = 0x1f4;
    s->unk_160 = 0x50;
    s->unk_15c = 0;
    s->unk_164 = 0;
    r = GsHttpBuf_Init(s, &s->unk_50, 0x800, 0x1000);
    if (r != 0) {
        r = GsHttpBuf_Init(s, &s->unk_74, 0x800, 0x800);
    }
    if (r != 0) {
        r = GsHttpBuf_Init(s, &s->unk_98, 0x800, 0x400);
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
BOOL GsHttp_FreeConnection(Unk_ov065_02279c7c *s) {
    if (s == 0) {
        return FALSE;
    }
    if (s->unk_00 == 0) {
        return FALSE;
    }
    if (s->unk_04 < 0) {
        return FALSE;
    }
    if (s->unk_04 >= sGsHttpConnectionCap) {
        return FALSE;
    }
    GsHttp_EnterCritical();
    GsUtil_Free(s->unk_14);
    GsUtil_Free(s->unk_18);
    GsUtil_Free(s->unk_24);
    GsUtil_Free(s->unk_28);
    GsUtil_Free(s->unk_108);
    GsUtil_Free(s->unk_15c);
    if (s->unk_48 != -1) {
        GsSock_Shutdown(s->unk_48, 2);
        GsSock_Close(s->unk_48);
    }
    GsHttpBuf_Free(&s->unk_50);
    GsHttpBuf_Free(&s->unk_74);
    GsHttpBuf_Free(&s->unk_98);
    GsHttpBuf_Free(&s->unk_bc);
    if (s->unk_140 != 0) {
        GsHttp_FreePostState(s);
    }
    if (s->unk_13c != 0) {
        if (GsHttpPost_GetAutoFree(s->unk_13c) != 0) {
            GsHttpPost_Free(s->unk_13c);
            s->unk_13c = 0;
        }
    }
    if (s->unk_16c != 0) {
        if (s->unk_178 != 0) {
            s->unk_178(s, &s->unk_164);
        }
        s->unk_16c = 0;
    }
    s->unk_00 = 0;
    sGsHttpConnectionCount--;
    GsHttp_LeaveCritical();
    return TRUE;
}
}
}

namespace Nc {
extern "C" {
void GsHttp_ForEachConnection(BOOL (*cb)(Unk_ov065_02279c7c *)) {
    if (sGsHttpConnectionCount > 0) {
        s32 i;
        GsHttp_EnterCritical();
        for (i = 0; i < sGsHttpConnectionCap; i++) {
            Unk_ov065_02279c7c *s = sGsHttpConnections[i];
            if (s->unk_00 != 0) {
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
void GsHttp_ResetForRedirect(Unk_ov065_02279c7c *self) {
    self->unk_10 = 0;
    GsUtil_Free(self->unk_14);
    self->unk_14 = self->unk_108;
    self->unk_108 = 0;
    GsUtil_Free(self->unk_18);
    self->unk_18 = 0;
    self->unk_1c = 0;
    self->unk_20 = 0;
    GsUtil_Free(self->unk_24);
    self->unk_24 = 0;
    GsSock_Shutdown(self->unk_48, 2);
    GsSock_Close(self->unk_48);
    self->unk_48 = -1;
    GsHttpBuf_Reset(&self->unk_50);
    GsHttpBuf_Reset(&self->unk_74);
    GsHttpBuf_Reset(&self->unk_98);
    self->unk_e4 = 0;
    self->unk_e8 = 0;
    self->unk_ec = 0;
    self->unk_f0 = 0;
    self->unk_f4 = 0;
    self->unk_f8 = 0;
    self->unk_130 = 0;
    self->unk_10c++;
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
BOOL GsHttp_DecryptReceived(Unk_ov065_02279c7c *self) {
    s32 inl = 0;
    s32 outl = 0;
    s32 r;
    do {
        s32 pos = self->unk_a8;
        u8 *in = self->unk_9c + pos;
        inl = self->unk_a4 - pos;
        s32 w = self->unk_80;
        u8 *out = self->unk_78 + w;
        outl = self->unk_7c - w;
        r = self->unk_180(self, &self->unk_164, in, &inl, out, &outl);
        if (r == 2 && GsHttpBuf_Grow(&self->unk_74, self->unk_88) == 0) {
            return FALSE;
        }
    } while (r == 2 && outl == 0);
    self->unk_a8 += inl;
    self->unk_80 += outl;
    if (self->unk_a8 > 0xff) {
        s32 rest = self->unk_a4 - self->unk_a8;
        if (rest == 0) {
            GsHttpBuf_Reset(&self->unk_98);
        } else {
            memmove(self->unk_9c, self->unk_9c + self->unk_a8, rest);
            self->unk_a8 = 0;
            self->unk_a4 = rest;
        }
    }
    if (r == 3) {
        self->unk_fc = 1;
        self->unk_38 = 0x11;
        return FALSE;
    }
    return TRUE;
}
}
}

namespace Nc {
extern "C" {
s32 GsHttp_SocketRecv(Unk_ov065_02279c7c *self, u8 *buf, s32 *plen) {
    s32 len;
    s32 n = *plen - 1;
    if (self->unk_134 != 0) {
        u32 t = GsUtil_GetTimeMs();
        if (t < self->unk_138 + sGsHttpThrottleDelay) {
            return 1;
        }
        self->unk_138 = t;
        if (n >= sGsHttpThrottleBytes) {
            n = sGsHttpThrottleBytes;
        }
    }
    if (self->unk_84 < self->unk_80) {
        GsHttpBuf_Read(&self->unk_74, buf, plen);
        if (self->unk_84 == self->unk_80) {
            self->unk_80 = self->unk_f8;
            self->unk_84 = self->unk_f8;
        }
        return 0;
    }
    len = GsSock_Recv(self->unk_48, buf, n, 0);
    if (len == -1) {
        s32 e = GsSock_GetLastError(self->unk_48);
        if (e == -6 || e == -26 || e == -76) {
            return 1;
        }
        self->unk_fc = 1;
        self->unk_38 = 5;
        self->unk_4c = e;
        self->unk_130 = 1;
        return 3;
    }
    if (len == 0) {
        self->unk_130 = 1;
        return 2;
    }
    if (self->unk_168 != 0) {
        if (GsHttpBuf_Append(&self->unk_98, buf, len) == 0) {
            return 3;
        }
        if (GsHttp_DecryptReceived(self) == 0) {
            self->unk_fc = 1;
            self->unk_38 = 0x11;
            return 3;
        }
        if (self->unk_80 - self->unk_84 <= 0) {
            buf[0] = 0;
            *plen = 0;
            return 1;
        }
        len = *plen - 1;
        if (GsHttpBuf_Read(&self->unk_74, buf, &len) == 0) {
            return 3;
        }
        if (self->unk_84 == self->unk_80) {
            self->unk_80 = self->unk_f8;
            self->unk_84 = self->unk_f8;
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
s32 GsHttp_SocketSend(Unk_ov065_02279c7c *self, u8 *buf, s32 len) {
    s32 r = GsSock_Send(self->unk_48, buf, len, 0);
    if (r == -1) {
        s32 e = GsSock_GetLastError(self->unk_48);
        if (e == -6 || e == -26 || e == -76) {
            return 0;
        }
        self->unk_fc = 1;
        self->unk_38 = 5;
        self->unk_4c = e;
        return -1;
    }
    if (self->unk_10 == 4) {
        self->unk_148 += r;
    }
    return r;
}
}
}

namespace Nc {
extern "C" {
s32 GsHttp_SendOrQueue(Unk_ov065_02279c7c *self, u8 *buf, s32 len) {
    s32 r = 0;
    if (self->unk_5c == 0) {
        r = GsHttp_SocketSend(self, buf, len);
        if (r == -1) {
            return 0;
        }
        if (r == len) {
            return 1;
        }
    }
    if (GsHttpBuf_Append(&self->unk_50, buf + r, len - r) == 0) {
        return 0;
    }
    return 2;
}
}
}

namespace Nc {
extern "C" {
void GsHttp_CallCompletedCallback(Unk_ov065_02279c7c *self) {
    if (self->unk_40 != 0) {
        u32 a;
        u32 b;
        if (self->unk_0c != 0) {
            a = 0;
            b = 0;
        } else {
            a = self->unk_c0;
            b = self->unk_100;
        }
        s32 r = self->unk_40(self->unk_04, self->unk_38, a, b, self->unk_44);
        if (a != 0 && r == 0) {
            self->unk_d8 = 1;
        }
    }
}
}
}

namespace Nc {
extern "C" {
void GsHttp_CallProgressCallback(Unk_ov065_02279c7c *self, u32 p1, u32 p2) {
    if (self->unk_3c != 0) {
        self->unk_3c(self->unk_04, self->unk_10, p1, p2, self->unk_100, self->unk_104, self->unk_44);
    }
}
}
}

namespace Nc {
extern "C" {
void GsHttp_CallPostCallback(Unk_ov065_02279c7c *self) {
    if (self->unk_150 != 0) {
        u32 a = GsArray_Count(self->unk_140);
        self->unk_150(self->unk_04, self->unk_148, self->unk_14c, self->unk_144, a, self->unk_44);
    }
}
}
}

namespace Ng {
extern "C" {
s32 GsHttpBuf_Grow(Unk_ov065_0227931c_Buf *o, s32 n) {
    s32 newsize;
    void *p;
    if (o == 0) {
        return FALSE;
    }
    if (n <= 0) {
        return FALSE;
    }
    newsize = o->unk_08 + n;
    p = GsUtil_Realloc(o->unk_04, newsize);
    if (p == 0) {
        return FALSE;
    }
    o->unk_04 = (char *)p;
    o->unk_08 = newsize;
    return TRUE;
}
}
}

namespace Ng {
extern "C" {
s32 GsHttpBuf_Init(Unk_ov065_0227931c_Owner *ow, Unk_ov065_0227931c_Buf *o, s32 size, s32 grow) {
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
    o->unk_00 = ow;
    o->unk_04 = 0;
    o->unk_08 = 0;
    o->unk_0c = 0;
    o->unk_10 = 0;
    o->unk_14 = grow;
    o->unk_18 = 0;
    o->unk_1c = 0;
    o->unk_20 = 0;
    if (GsHttpBuf_Grow(o, size) == 0) {
        return FALSE;
    }
    *o->unk_04 = 0;
    return TRUE;
}
}
}

namespace Ng {
extern "C" {
s32 GsHttpBuf_InitUser(Unk_ov065_0227931c_Owner *ow, Unk_ov065_0227931c_Buf *o, char *buf, s32 size) {
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
    o->unk_00 = ow;
    o->unk_04 = buf;
    o->unk_08 = size;
    o->unk_0c = 0;
    o->unk_14 = 0;
    o->unk_18 = 1;
    o->unk_1c = 1;
    o->unk_20 = 0;
    *o->unk_04 = 0;
    return TRUE;
}
}
}

namespace Ng {
extern "C" {
void GsHttpBuf_Free(Unk_ov065_0227931c_Buf *o) {
    if (o != 0 && o->unk_04 != 0) {
        if (o->unk_1c == 0) {
            GsUtil_Free(o->unk_04);
        }
        func_0212899c(o, 0, 0x24);
    }
}
}
}

namespace Ng {
extern "C" {
s32 GsHttpBuf_Append(Unk_ov065_0227931c_Buf *o, char *s, s32 len) {
    Unk_ov065_0227931c_Owner *ow = o->unk_00;
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
    if (o->unk_20 == 1) {
        do {
            n = o->unk_08 - o->unk_0c;
            r = ow->unk_17c(ow, &ow->unk_164, s, &len, o->unk_04 + o->unk_0c, &n);
            if (r == 2) {
                if (o->unk_18 != 0) {
                    o->unk_00->unk_fc = 1;
                    o->unk_00->unk_38 = 2;
                    return FALSE;
                }
                if (GsHttpBuf_Grow(o, o->unk_14) != 0) {
                    o->unk_00->unk_fc = 1;
                    o->unk_00->unk_38 = 1;
                    return FALSE;
                }
            } else {
                o->unk_0c += n;
            }
        } while (r == 2);
    } else {
        s32 t = o->unk_0c + len;
        while (t >= o->unk_08) {
            if (o->unk_18 != 0) {
                o->unk_00->unk_fc = 1;
                o->unk_00->unk_38 = 2;
                return FALSE;
            }
            if (GsHttpBuf_Grow(o, o->unk_14) == 0) {
                o->unk_00->unk_fc = 1;
                o->unk_00->unk_38 = 1;
                return FALSE;
            }
        }
        memcpy(o->unk_04 + o->unk_0c, s, len);
        o->unk_0c = t;
        o->unk_04[o->unk_0c] = 0;
    }
    return TRUE;
}
}
}
