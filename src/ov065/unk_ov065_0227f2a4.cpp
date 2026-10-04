// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU45: GP gpiInfo.c (0x0227f2a4..0x02280740)

namespace Na {
// ov065_052: DWC/GameSpy GP connection setup helpers (0x0227ee64..0x0227f54c)

struct Unk_ov065_0227c538_Pair {
    s32 func;
    s32 param;
};

struct Unk_ov065_0227c538_Node {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    s32 infoCache;
    char *authSig;
    s32 unk_14;
    s32 unk_18;
    s32 result;
    Unk_ov065_0227c538_Node *next;
};

struct Unk_ov065_0227c538_Ctx {
    u8 errorString;
    u8 pad_001[0xff];
    s32 infoCaching;
    s32 infoCachingBuddyOnly;
    s32 simulation;
    s32 firewall;
    char nick[0x1f];
    char uniqueNick[0x15];
    char email[0x33];
    char password[0x1f];
    u8 pad_196[0x2];
    s32 sessKey;
    u8 pad_19c[0x38];
    s32 cmSocket;
    s32 connectState;
    u8 pad_1dc[0x18];
    char *outputBuffer;
    u8 pad_1f8[0xc];
    s32 peerSocket;
    s32 peerPort;
};

struct Unk_ov065_0227ee64_Obj {
    u8 pad_000[0xc2];
    char unk_0c2[0x100];
    char unk_1c2[0x100];
    char unk_2c2[0x42];
    s32 unk_304;
};

struct Unk_ov065_0227f00c_Sa {
    u8 unk_0;
    u8 unk_1;
    u16 unk_2;
    u32 unk_4;
};

struct Unk_ov065_0227f00c_Host {
    u8 pad_00[0xc];
    u32 **unk_0c;
};

struct Unk_ov065_0227f324_Rec {
    char *unk_00[6];
    u8 pad_18[0xc8 - 0x18];
    char *unk_c8;
    u8 pad_cc[0xf0 - 0xcc];
};

struct Unk_ov065_0227f324_Copy {
    s64 v[30];
};

struct Unk_ov065_0227f324_Owner {
    u8 pad_00[0xc];
    Unk_ov065_0227f324_Rec *unk_0c;
};

typedef Unk_ov065_0227c538_Ctx Ctx0227;
typedef Unk_ov065_0227c538_Node Node0227;
typedef Unk_ov065_0227c538_Pair Pair0227;

extern "C" {

extern char data_ov065_0228d1a4[];
extern char data_ov065_0228d370[];
extern char data_ov065_0228d428[];
extern char data_ov065_0228d43c[];
extern char data_ov065_0228d450[];
extern char data_ov065_0228d478[];
extern char data_ov065_0228d4ac[];
extern char data_ov065_0228d4d4[];
extern char data_ov065_0228d500[];
extern char data_ov065_0228d530[];
extern char data_ov065_0228d564[];
extern char data_ov065_0228d58c[];
extern u8 data_0213a490[];

s32 GsGp_ResetConnection(Ctx0227 **);
void GsGp_SetErrorString(Ctx0227 **, const char *);
void GsGp_SetError(Ctx0227 **, s32, const char *);
void GsGp_CallErrorCallback(Ctx0227 **, s32, s32);
void GsUtil_StrCopyN(char *, const char *, s32);
void GsUtil_StrToLower(char *);
void *GsUtil_Alloc(s32);
void GsUtil_Free(void *);
char *GsUtil_StrDup(const char *);
s32 GsGp_AddOperation(Ctx0227 **, s32, void *, Node0227 **, s32, s32, s32);
void GsGp_CallFailedCallback(Ctx0227 **, Node0227 *);
s32 GsGp_CloseConnection(Ctx0227 **, s32);
s32 GsGp_ProcessConnection(Ctx0227 **, s32);
s32 GsSock_Socket(s32, s32, s32);
s32 GsSock_Bind(s32, void *, s32);
s32 GsSock_Listen(s32, s32);
s32 GsSock_GetSockName(s32, void *, s32 *);
s32 GsSock_Connect(s32, void *, s32);
s32 GsSock_GetLastError(s32);
s32 GsSock_SetBlocking(s32, s32);
Unk_ov065_0227f00c_Host *Sock_GetHostByName(char *);
s32 GsGpProfile_Find(Ctx0227 **, s32, Node0227 **);
void GsGp_CopyInfoResult(s32, void *);
s32 GsGp_RemoveOperation(Ctx0227 **, Node0227 *);
s32 GsGp_QueueCallback(Ctx0227 **, Pair0227, void *, Node0227 *, s32);
s32 GsGpBuf_AppendString(Ctx0227 **, char **, const char *);
s32 GsGpBuf_AppendInt(Ctx0227 **, char **, s32);
s32 GsGp_QueueProfileUpdate(Ctx0227 **, const char *, const char *);
s32 GsGp_QueueUserUpdate(Ctx0227 **, const char *, const char *);
s32 GsGp_SetInfoInt(Ctx0227 **, s32, s32);

void *func_0212899c(void *, s32, u32);
u32 rand(void);
s32 func_0212b770(const char *);
s32 STD_GetStringLength(const char *);
char *func_02127838(char *, const char *);

s32 GsGp_SendGetProfile(Ctx0227 **, s32, s32);
s32 GsGp_OpenSockets(Ctx0227 **, Node0227 *);

#define GP_FAIL(str) \
    { \
        GsGp_SetError(h, 5, str); \
        GsGp_CallErrorCallback(h, 3, 1); \
        return 3; \
    }








#define CK_NONEMPTY \
    if (*val == 0) { \
        GsGp_SetErrorString(h, "Invalid value."); \
        return 2; \
    }


}
extern "C" {
void GsGp_FreeCachedInfo(Unk_ov065_0227f324_Owner *p);
s32 GsGp_CacheProfileInfo(Ctx0227 **h, Unk_ov065_0227f324_Owner *p, Unk_ov065_0227f324_Rec *q);
s32 GsGp_RequestProfileInfo(Ctx0227 **h, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5);
s32 GsGp_SendGetProfile(Ctx0227 **h, s32 a1, s32 a2);
s32 GsGp_SetInfoString(Ctx0227 **h, s32 cmd, char *val);
}
}

namespace Nb {
// ov065_053: DWC/GameSpy-like response builder / parser (0x0227faf8..0x0227ff90)

struct Unk_ov065_0227fe88_Ctx {
    u8 pad_000[0x198];
    s32 unk_198;
    u8 pad_19c[0x2a4];
    s32 unk_440;
    s32 unk_444;
    s32 unk_448;
    s32 unk_44c;
    s32 unk_450;
    s32 unk_454;
    s32 unk_458;
};

struct Unk_ov065_0227ff90_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227ff90_Wrap {
    Unk_ov065_0227ff90_Pair unk_00;
};

struct Unk_ov065_0227ff90_Req {
    u8 pad_00[0xc];
    Unk_ov065_0227ff90_Wrap unk_0c;
};

struct Unk_ov065_0227ff90_Node {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0c;
    u8 pad_10[0x2c];
    Unk_ov065_0227ff90_Node *unk_3c;
};

struct Unk_ov065_0227ff90_Ctx {
    u8 pad_000[0x100];
    s32 unk_100;
    u8 pad_104[0x330];
    Unk_ov065_0227ff90_Node *unk_434;
};

struct Unk_ov065_0227ff90_Rec {
    char *unk_00;
    char *unk_04;
    char *unk_08;
    char *unk_0c;
    char *unk_10;
    char *unk_14;
    s32 unk_18;
    char unk_1c[0xb];
    char unk_27[3];
    u8 pad_2a[2];
    s32 unk_2c;
    s32 unk_30;
    char unk_34[0x80];
    s32 unk_b4;
    s32 unk_b8;
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    char *unk_c8;
    s32 unk_cc;
    s32 unk_d0;
    s32 unk_d4;
    s32 unk_d8;
    s32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
};


extern "C" {

s32 strncmp(const char *, const char *, s32);
s32 func_0212b770(const char *);
s32 OS_SPrintf(char *, const char *, ...);
void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
char *GsUtil_StrDup(const char *);
s32 GsGpBuf_AppendString(void *, char *, const char *);
s32 GsGpBuf_AppendInt(void *, char *, s32);
void GsGp_CallErrorCallback(void *, s32, s32);
s32 GsGp_QueueCallback(void *, Unk_ov065_0227ff90_Pair, void *, void *, s32);
s32 GsGp_CacheProfileInfo(void *, u32 *, Unk_ov065_0227ff90_Rec *);
s32 GsGp_CopyInfoResult(Unk_ov065_0227ff90_Rec *, void *);
s32 GsGp_UnpackDate(void *, s32, s32 *, s32 *, s32 *);
void GsGp_RemoveOperation(void *, void *);
s32 GsGpProfile_Find(void *, s32, u32 **);
u32 *GsGpProfile_Add(void *, s32);
void GsGp_SetErrorString(void *, const char *);
void GsGp_SetError(void *, s32, const char *);
s32 GsGp_GetValue(const char *, const char *, char *, s32);
s32 GsGp_CheckServerError(void *, const char *, s32);

s32 GsGp_QueueUserUpdate(void *h, char *a, char *b);
s32 GsGp_QueueProfileUpdate(void *h, char *a, char *b);






#define FIND(key, dst, n) GsGp_GetValue(str, key, dst, n)


}
extern "C" {
s32 GsGp_SetInfoInt(void *h, s32 code, s32 val);
s32 GsGp_QueueUserUpdate(void *h, char *a, char *b);
s32 GsGp_QueueProfileUpdate(void *h, char *a, char *b);
s32 GsGp_FlushInfoUpdates(void *h, char *p);
s32 GsGp_ProcessProfileReply(void *h, Unk_ov065_0227ff90_Req *req, char *str);
}
}

namespace Nc {
// ov065_054: 0x022804b8..0x02280d70

struct Unk_ov065_022804b8_Src {
    char *unk_00;
    char *unk_04;
    char *unk_08;
    char *unk_0c;
    char *unk_10;
    char *unk_14;
    s32 unk_18;
    char unk_1c[0xb];
    char unk_27[3];
    s32 unk_2c;
    s32 unk_30;
    char unk_34[0x80];
    s32 unk_b4;
    s32 unk_b8;
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    char *unk_c8;
    s32 unk_cc;
    s32 unk_d0;
    s32 unk_d4;
    s32 unk_d8;
    s32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
};

struct Unk_ov065_022804b8_Dst {
    u8 pad_00[8];
    char unk_08[0x1f];
    char unk_27[0x15];
    char unk_3c[0x33];
    char unk_6f[0x1f];
    char unk_8e[0x1f];
    char unk_ad[0x4c];
    s32 unk_fc;
    char unk_100[0xb];
    char unk_10b[3];
    s32 unk_110;
    s32 unk_114;
    char unk_118[0x80];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    s32 unk_1a4;
    s32 unk_1a8;
    char unk_1ac[0x33];
    u8 pad_1df[1];
    s32 unk_1e0;
    s32 unk_1e4;
    s32 unk_1e8;
    s32 unk_1ec;
    s32 unk_1f0;
    s32 unk_1f4;
    s32 unk_1f8;
    s32 unk_1fc;
    s32 unk_200;
};

struct Unk_ov065_02280854_Node {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    Unk_ov065_02280854_Node *unk_20;
};

struct Unk_ov065_02280854_Ctx {
    u8 pad_000[0x20c];
    s32 unk_20c;
    s32 unk_210;
    u8 pad_214[0x418 - 0x214];
    s32 unk_418;
    u8 pad_41c[8];
    Unk_ov065_02280854_Node *unk_424;
};

struct Unk_ov065_02280854_H {
    Unk_ov065_02280854_Ctx *unk_00;
};

struct Unk_ov065_0228094c_Sub {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    u8 pad_0c[0xc];
    char *unk_18;
};

struct Unk_ov065_02280a2c_Ctx {
    u8 pad_000[0x1a0];
    s32 unk_1a0;
    u8 pad_1a4[0x418 - 0x1a4];
    s32 unk_418;
};

struct Unk_ov065_02280a2c_M0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
};

struct Unk_ov065_02280c08_Node {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x38 - 0x14];
    s32 unk_38;
};

struct Unk_ov065_02280a2c_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_02280a2c_Wrap {
    Unk_ov065_02280a2c_Pair p;
};

extern "C" {
void GsUtil_StrCopyN(void *, const void *, s32);
void GsGp_SetErrorString(void *, const char *);
void GsGp_SetError(void *, s32, const char *);
void GsGp_DebugLog(void *, const char *, ...);
s32 GsGp_ProcessConnectReply(void *, void *, char *);
s32 GsGp_ProcessNewProfileReply(void *, void *, char *);
s32 GsGp_ProcessProfileReply(void *, void *, char *);
s32 GsGp_ProcessRnReply(void *, void *, char *);
s32 GsSock_Shutdown(s32, s32);
s32 GsSock_Close(s32);
void GsUtil_Free(void *);
void *GsUtil_Alloc(u32);
s32 GsGp_QueueCallback(void *, Unk_ov065_02280a2c_Pair, void *, void *, s32);
s32 func_0212899c(void *, s32, u32);
s32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 GsGpPeer_SendString(void *, void *, const char *);
s32 GsGpPeer_Send(void *, void *, const char *, s32);
s32 GsGpPeer_SendChar(void *, void *, s32);
s32 GsUtil_GetTimeSeconds(s32);
s32 GsGpBuf_AppendString(void *, void *, const char *);
s32 GsGpBuf_AppendInt(void *, void *, s32);
s32 GsGpBuf_Append(void *, void *, const char *, s32);
s32 GsGpBuf_AppendChar(void *, void *, s32);
void GsArray_Append(void *, void *);
s32 GsGpProfile_Find(void *, s32, void *);
s32 GsSock_Socket(s32, s32, s32);
s32 GsSock_SetBlocking(s32, s32);
void GsGpPeer_SetSocketBuffers(s32);
s32 GsSock_Connect(s32, void *, s32);
s32 GsSock_GetLastError(s32);
void GsGp_CallErrorCallback(void *, s32, s32);

extern char data_ov065_0228d894[];
extern char data_ov065_0228d8dc[];
extern char data_ov065_0228d8ec[];
extern char data_ov065_0228d8f0[];
extern char data_ov065_0228d900[];
extern char data_ov065_0228d914[];
extern char data_ov065_0228d918[];
extern char data_ov065_0228d920[];
extern char data_ov065_0228d928[];
extern char data_ov065_0228d944[];
extern char data_ov065_0228d96c[];
extern char data_ov065_0228d9a0[];


s32 GsGp_IsValidDate(s32 day, s32 mon, s32 year);






void GsGp_FreeOperation(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node *n);




// byte-sized unsigned enum: an enum-typed zero is not constant-folded/shared with later zeros
#pragma enumsalwaysint off
enum Unk_ov065_02280a2c_Z { Unk_ov065_02280a2c_Z_0 = 0, Unk_ov065_02280a2c_Z_FF = 0xff };
#pragma enumsalwaysint reset



struct Unk_ov065_02280c84_Src {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};


struct Unk_ov065_02280cb4_T {
    s32 v[6];
};


struct Unk_ov065_02280d70_P2 {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_02280d70_P1 {
    u8 pad_00[8];
    Unk_ov065_02280d70_P2 *unk_08;
};

struct Unk_ov065_02280d70_Sa {
    s32 unk_00;
    s32 unk_04;
};

}
extern "C" {
void GsGp_CopyInfoResult(Unk_ov065_022804b8_Src *s, Unk_ov065_022804b8_Dst *d);
s32 GsGp_UnpackDate(void *ctx, s32 packed, s32 *pa, s32 *pb, s32 *pc);
}
}

namespace Nc {
extern "C" {
s32 GsGp_UnpackDate(void *ctx, s32 packed, s32 *pa, s32 *pb, s32 *pc) {
    s32 a = (packed >> 24) & 0xff;
    s32 b = (packed >> 16) & 0xff;
    s32 c = packed & 0xffff;
    if (GsGp_IsValidDate(a, b, c) == 0) {
        GsGp_SetErrorString(ctx, "Invalid date.");
        return 2;
    }
    *pa = a;
    *pb = b;
    *pc = c;
    return 0;
}
}
}

namespace Nc {
extern "C" {
void GsGp_CopyInfoResult(Unk_ov065_022804b8_Src *s, Unk_ov065_022804b8_Dst *d) {
    if (s->unk_00) {
        GsUtil_StrCopyN(d->unk_08, s->unk_00, 0x1f);
    } else {
        d->unk_08[0] = 0;
    }
    if (s->unk_04) {
        GsUtil_StrCopyN(d->unk_27, s->unk_04, 0x15);
    } else {
        d->unk_27[0] = 0;
    }
    if (s->unk_08) {
        GsUtil_StrCopyN(d->unk_3c, s->unk_08, 0x33);
    } else {
        d->unk_3c[0] = 0;
    }
    if (s->unk_0c) {
        GsUtil_StrCopyN(d->unk_6f, s->unk_0c, 0x1f);
    } else {
        d->unk_6f[0] = 0;
    }
    if (s->unk_10) {
        GsUtil_StrCopyN(d->unk_8e, s->unk_10, 0x1f);
    } else {
        d->unk_8e[0] = 0;
    }
    if (s->unk_14) {
        GsUtil_StrCopyN(d->unk_ad, s->unk_14, 0x4c);
    } else {
        d->unk_ad[0] = 0;
    }
    d->unk_fc = s->unk_18;
    GsUtil_StrCopyN(d->unk_100, s->unk_1c, 0xb);
    GsUtil_StrCopyN(d->unk_10b, s->unk_27, 3);
    d->unk_110 = s->unk_2c;
    d->unk_114 = s->unk_30;
    if (s->unk_34) {
        GsUtil_StrCopyN(d->unk_118, s->unk_34, 0x80);
    } else {
        d->unk_118[0] = 0;
    }
    d->unk_198 = s->unk_b4;
    d->unk_19c = s->unk_b8;
    d->unk_1a0 = s->unk_bc;
    d->unk_1a4 = s->unk_c0;
    d->unk_1a8 = s->unk_c4;
    if (s->unk_c8) {
        GsUtil_StrCopyN(d->unk_1ac, s->unk_c8, 0x33);
    } else {
        d->unk_1ac[0] = 0;
    }
    d->unk_fc = s->unk_18;
    d->unk_110 = s->unk_2c;
    d->unk_114 = s->unk_30;
    d->unk_198 = s->unk_b4;
    d->unk_19c = s->unk_b8;
    d->unk_1a0 = s->unk_bc;
    d->unk_1a4 = s->unk_c0;
    d->unk_1a8 = s->unk_c4;
    d->unk_1e0 = s->unk_cc;
    d->unk_1e4 = s->unk_d0;
    d->unk_1e8 = s->unk_d4;
    d->unk_1ec = s->unk_d8;
    d->unk_1f0 = s->unk_dc;
    d->unk_1f4 = s->unk_e0;
    d->unk_1f8 = s->unk_e4;
    d->unk_1fc = s->unk_e8;
    d->unk_200 = s->unk_ec;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_ProcessProfileReply(void *h, Unk_ov065_0227ff90_Req *req, char *str) {
    Unk_ov065_0227ff90_Ctx *ctx = *(Unk_ov065_0227ff90_Ctx **)h;
    struct {
        u32 *e;
        Unk_ov065_0227ff90_Wrap p;
        char buf[0x40];
        char a[0x1f];
        char b[0x15];
        char c[0x33];
        char d[0x1f];
        char e2[0x1f];
        char g[0x33];
    } l;
    s32 r5;
    s32 flag;
    Unk_ov065_0227ff90_Node *n;
    void *node;

    if (GsGp_CheckServerError(h, str, 1) != 0) {
        return 4;
    }
    if (strncmp(str, "\\pi\\", 4) != 0) {
        GsGp_SetError(h, 1, "Unexpected data was received from the server.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    if (FIND("\\profileid\\", l.buf, 0x40) == 0) {
        GsGp_SetError(h, 1, "Unexpected data was received from the server.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    r5 = func_0212b770(l.buf);
    GsGpProfile_Find(h, r5, &l.e);
    Unk_ov065_0227ff90_Rec s = {0};
    char f[0x4c];
    s.unk_00 = l.a;
    s.unk_04 = l.b;
    s.unk_08 = l.c;
    s.unk_0c = l.d;
    s.unk_10 = l.e2;
    s.unk_14 = f;
    s.unk_c8 = l.g;
    if (FIND("\\nick\\", s.unk_00, 0x1f) == 0) {
        s.unk_00[0] = 0;
    }
    if (FIND("\\uniquenick\\", s.unk_04, 0x15) == 0) {
        s.unk_04[0] = 0;
    }
    if (FIND("\\email\\", s.unk_08, 0x33) == 0) {
        s.unk_08[0] = 0;
    }
    if (FIND("\\firstname\\", s.unk_0c, 0x1f) == 0) {
        s.unk_0c[0] = 0;
    }
    if (FIND("\\lastname\\", s.unk_10, 0x1f) == 0) {
        s.unk_10[0] = 0;
    }
    if (FIND("\\icquin\\", l.buf, 0x40) == 0) {
        s.unk_18 = -1;
    } else {
        s.unk_18 = func_0212b770(l.buf);
    }
    if (FIND("\\homepage\\", s.unk_14, 0x4c) == 0) {
        s.unk_14[0] = 0;
    }
    if (FIND("\\zipcode\\", s.unk_1c, 0xb) == 0) {
        s.unk_1c[0] = 0;
    }
    if (FIND("\\countrycode\\", s.unk_27, 3) == 0) {
        s.unk_27[0] = 0;
    }
    s.unk_2c = 0;
    s.unk_30 = 0;
    if (FIND("\\loc\\", s.unk_34, 0x80) == 0) {
        s.unk_34[0] = 0;
    }
    if (FIND("\\birthday\\", l.buf, 0x40) == 0) {
        s.unk_b4 = 0;
        s.unk_b8 = 0;
        s.unk_bc = 0;
    } else {
        s32 r = GsGp_UnpackDate(h, func_0212b770(l.buf), &s.unk_b4, &s.unk_b8, &s.unk_bc);
        if (r != 0) {
            return r;
        }
    }
    if (FIND("\\sex\\", l.buf, 0x40) == 0) {
        s.unk_c0 = 0x502;
    } else if (l.buf[0] == 0x30) {
        s.unk_c0 = 0x500;
    } else if (l.buf[0] == 0x31) {
        s.unk_c0 = 0x501;
    } else {
        s.unk_c0 = 0x502;
    }
    if (FIND("\\pmask\\", l.buf, 0x40) == 0) {
        s.unk_c4 = -1;
    } else {
        s.unk_c4 = func_0212b770(l.buf);
    }
    if (FIND("\\aim\\", s.unk_c8, 0x33) == 0) {
        s.unk_c8[0] = 0;
    }
    if (FIND("\\pic\\", l.buf, 0x40) == 0) {
        s.unk_cc = 0;
    } else {
        s.unk_cc = func_0212b770(l.buf);
    }
    if (FIND("\\occ\\", l.buf, 0x40) == 0) {
        s.unk_d0 = 0;
    } else {
        s.unk_d0 = func_0212b770(l.buf);
    }
    if (FIND("\\ind\\", l.buf, 0x40) == 0) {
        s.unk_d4 = 0;
    } else {
        s.unk_d4 = func_0212b770(l.buf);
    }
    if (FIND("\\inc\\", l.buf, 0x40) == 0) {
        s.unk_d8 = 0;
    } else {
        s.unk_d8 = func_0212b770(l.buf);
    }
    if (FIND("\\mar\\", l.buf, 0x40) == 0) {
        s.unk_dc = 0;
    } else {
        s.unk_dc = func_0212b770(l.buf);
    }
    if (FIND("\\chc\\", l.buf, 0x40) == 0) {
        s.unk_e0 = 0;
    } else {
        s.unk_e0 = func_0212b770(l.buf);
    }
    if (FIND("\\i1\\", l.buf, 0x40) == 0) {
        s.unk_e4 = 0;
    } else {
        s.unk_e4 = func_0212b770(l.buf);
    }
    if (FIND("\\o1\\", l.buf, 0x40) == 0) {
        s.unk_e8 = 0;
    } else {
        s.unk_e8 = func_0212b770(l.buf);
    }
    if (FIND("\\conn\\", l.buf, 0x40) == 0) {
        s.unk_ec = 0;
    } else {
        s.unk_ec = func_0212b770(l.buf);
    }
    if (FIND("\\sig\\", l.buf, 0x40) == 0) {
        GsGp_SetError(h, 1, "Unexpected data was received from the server.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    flag = ctx->unk_100;
    for (n = ctx->unk_434; n != NULL; n = n->unk_3c) {
        if (n->unk_0c == r5 && n->unk_00 == 0x65) {
            if (l.e == NULL) {
                l.e = GsGpProfile_Add(h, r5);
            }
            n->unk_00 = 0x66;
            flag = 1;
        }
    }
    if (l.e == NULL && ctx->unk_100 != 0) {
        l.e = GsGpProfile_Add(h, r5);
    }
    if (flag != 0) {
        GsUtil_Free((void *)l.e[6]);
        l.e[6] = 0;
        l.e[6] = (u32)GsUtil_StrDup(l.buf);
    }
    if (ctx->unk_100 != 0) {
        GsGp_CacheProfileInfo(h, l.e, &s);
    }
    l.p = req->unk_0c;
    if (l.p.unk_00.unk_00 != 0) {
        node = GsUtil_Alloc(0x204);
        if (node == NULL) {
            GsGp_SetErrorString(h, "Out of memory.");
            return 1;
        }
        GsGp_CopyInfoResult(&s, node);
        ((s32 *)node)[0] = 0;
        ((s32 *)node)[1] = r5;
        {
            s32 r = GsGp_QueueCallback(h, l.p.unk_00, node, req, 0);
            if (r != 0) {
                return r;
            }
        }
    }
    GsGp_RemoveOperation(h, req);
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_FlushInfoUpdates(void *h, char *p) {
    Unk_ov065_0227fe88_Ctx *c = *(Unk_ov065_0227fe88_Ctx **)h;
    if (c->unk_448 > 0) {
        GsGpBuf_AppendString(h, p, "\\updatepro\\\\sesskey\\");
        GsGpBuf_AppendInt(h, p, c->unk_198);
        GsGpBuf_AppendString(h, p, (const char *)c->unk_440);
        GsGpBuf_AppendString(h, p, "\\final\\");
        c->unk_448 = 0;
    }
    if (c->unk_458 > 0) {
        GsGpBuf_AppendString(h, p, "\\updateui\\\\sesskey\\");
        GsGpBuf_AppendInt(h, p, c->unk_198);
        GsGpBuf_AppendString(h, p, (const char *)c->unk_450);
        GsGpBuf_AppendString(h, p, "\\final\\");
        c->unk_458 = 0;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_QueueProfileUpdate(void *h, char *a, char *b) {
    Unk_ov065_0227fe88_Ctx *c = *(Unk_ov065_0227fe88_Ctx **)h;
    s32 r = GsGpBuf_AppendString(h, (char *)&c->unk_440, a);
    if (r != 0) {
        return r;
    }
    r = GsGpBuf_AppendString(h, (char *)&c->unk_440, b);
    if (r != 0) {
        return r;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_QueueUserUpdate(void *h, char *a, char *b) {
    Unk_ov065_0227fe88_Ctx *c = *(Unk_ov065_0227fe88_Ctx **)h;
    s32 r = GsGpBuf_AppendString(h, (char *)&c->unk_450, a);
    if (r != 0) {
        return r;
    }
    r = GsGpBuf_AppendString(h, (char *)&c->unk_450, b);
    if (r != 0) {
        return r;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_SetInfoInt(void *h, s32 code, s32 val) {
    char buf[16];
    s32 r;
    switch (code) {
    case 0x708:
        if (val < 0) {
            GsGp_SetErrorString(h, "Invalid zipcode.");
            return 2;
        }
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueProfileUpdate(h, "\\zipcode\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x70b:
        switch (val) {
        case 0x500:
            r = GsGp_QueueProfileUpdate(h, "\\sex\\", "0");
        if (r != 0) {
            return r;
        }
            break;
        case 0x501:
            r = GsGp_QueueProfileUpdate(h, "\\sex\\", "1");
        if (r != 0) {
            return r;
        }
            break;
        case 0x502:
            r = GsGp_QueueProfileUpdate(h, "\\sex\\", "2");
        if (r != 0) {
            return r;
        }
            break;
        default:
            GsGp_SetErrorString(h, "Invalid sex.");
            return 2;
        }
        break;
    case 0x706:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueProfileUpdate(h, "\\icquin\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x70c:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueUserUpdate(h, "\\cpubrandid\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x70d:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueUserUpdate(h, "\\cpuspeed\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x70e:
        OS_SPrintf(buf, "%d", val / 16);
        r = GsGp_QueueUserUpdate(h, "\\memory\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x710:
        OS_SPrintf(buf, "%d", val / 4);
        r = GsGp_QueueUserUpdate(h, "\\videocard1ram\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x712:
        OS_SPrintf(buf, "%d", val / 4);
        r = GsGp_QueueUserUpdate(h, "\\videocard2ram\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x713:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueUserUpdate(h, "\\connectionid\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x714:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueUserUpdate(h, "\\connectionspeed\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x715:
        if (val != 0) {
            val = 1;
        }
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueUserUpdate(h, "\\hasnetwork\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x718:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueProfileUpdate(h, "\\pic\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x719:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueProfileUpdate(h, "\\occ\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x71a:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueProfileUpdate(h, "\\ind\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x71b:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueProfileUpdate(h, "\\inc\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x71c:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueProfileUpdate(h, "\\mar\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x71d:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueProfileUpdate(h, "\\chc\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    case 0x71e:
        OS_SPrintf(buf, "%d", val);
        r = GsGp_QueueProfileUpdate(h, "\\i1\\", buf);
        if (r != 0) {
            return r;
        }
        break;
    default:
        GsGp_SetErrorString(h, "Invalid info.");
        return 2;
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_SetInfoString(Ctx0227 **h, s32 cmd, char *val) {
    Ctx0227 *ctx = *h;
    char buf[0x100];
    s32 r;
    char ch;
    s32 c;
    if (val == 0) {
        GsGp_SetErrorString(h, "Invalid value.");
        return 2;
    }
    switch (cmd) {
    case 0x700:
        CK_NONEMPTY
        GsUtil_StrCopyN(buf, val, 0x1f);
        GsUtil_StrCopyN(ctx->nick, buf, 0x1f);
        r = GsGp_QueueProfileUpdate(h, "\\nick\\", buf);
        if (r != 0) return r;
        break;
    case 0x701:
        CK_NONEMPTY
        GsUtil_StrCopyN(buf, val, 0x15);
        GsUtil_StrCopyN(ctx->uniqueNick, buf, 0x15);
        r = GsGp_QueueProfileUpdate(h, "\\uniquenick\\", buf);
        if (r != 0) return r;
        break;
    case 0x702:
        CK_NONEMPTY
        GsUtil_StrCopyN(buf, val, 0x33);
        GsUtil_StrToLower(buf);
        GsUtil_StrCopyN(ctx->email, buf, 0x33);
        r = GsGp_QueueUserUpdate(h, "\\email\\", buf);
        if (r != 0) return r;
        break;
    case 0x703:
        CK_NONEMPTY
        GsUtil_StrCopyN(buf, val, 0x1f);
        GsUtil_StrCopyN(ctx->password, buf, 0x1f);
        r = GsGp_QueueUserUpdate(h, "\\password\\", buf);
        if (r != 0) return r;
        break;
    case 0x704:
        GsUtil_StrCopyN(buf, val, 0x1f);
        r = GsGp_QueueProfileUpdate(h, "\\firstname\\", buf);
        if (r != 0) return r;
        break;
    case 0x705:
        GsUtil_StrCopyN(buf, val, 0x1f);
        r = GsGp_QueueProfileUpdate(h, "\\lastname\\", buf);
        if (r != 0) return r;
        break;
    case 0x707:
        GsUtil_StrCopyN(buf, val, 0x4c);
        r = GsGp_QueueProfileUpdate(h, "\\homepage\\", buf);
        if (r != 0) return r;
        break;
    case 0x708:
        GsUtil_StrCopyN(buf, val, 0xb);
        r = GsGp_QueueProfileUpdate(h, "\\zipcode\\", buf);
        if (r != 0) return r;
        break;
    case 0x709:
        if (STD_GetStringLength(val) != 2) {
            GsGp_SetErrorString(h, "Invalid countrycode.");
            return 2;
        }
        GsUtil_StrCopyN(buf, val, 3);
        r = GsGp_QueueProfileUpdate(h, "\\countrycode\\", buf);
        if (r != 0) return r;
        break;
    case 0x70b:
        c = *val;
        if (c >= 0 && c < 0x80) {
            c = data_0213a490[c];
        }
        ch = c;
        if (ch == 0x4d) {
            func_02127838(buf, "0");
        } else if (ch == 0x46) {
            func_02127838(buf, "1");
        } else {
            func_02127838(buf, "2");
        }
        r = GsGp_QueueProfileUpdate(h, "\\sex\\", buf);
        if (r != 0) return r;
        break;
    case 0x706:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\icquin\\", buf);
        if (r != 0) return r;
        break;
    case 0x70d:
        r = GsGp_SetInfoInt(h, 0x70d, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x70e:
        r = GsGp_SetInfoInt(h, 0x70e, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x70f:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\videocard1string\\", buf);
        if (r != 0) return r;
        break;
    case 0x710:
        r = GsGp_SetInfoInt(h, 0x710, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x711:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\videocard2string\\", buf);
        if (r != 0) return r;
        break;
    case 0x712:
        r = GsGp_SetInfoInt(h, 0x712, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x714:
        r = GsGp_SetInfoInt(h, 0x714, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x715:
        r = GsGp_SetInfoInt(h, 0x715, func_0212b770(val));
        if (r != 0) return r;
        break;
    case 0x716:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\osstring\\", buf);
        if (r != 0) return r;
        break;
    case 0x717:
        GsUtil_StrCopyN(buf, val, 0x33);
        r = GsGp_QueueProfileUpdate(h, "\\aim\\", buf);
        if (r != 0) return r;
        break;
    case 0x718:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\pic\\", buf);
        if (r != 0) return r;
        break;
    case 0x719:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\occ\\", buf);
        if (r != 0) return r;
        break;
    case 0x71a:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\ind\\", buf);
        if (r != 0) return r;
        break;
    case 0x71b:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\inc\\", buf);
        if (r != 0) return r;
        break;
    case 0x71c:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\mar\\", buf);
        if (r != 0) return r;
        break;
    case 0x71d:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\chc\\", buf);
        if (r != 0) return r;
        break;
    case 0x71e:
        GsUtil_StrCopyN(buf, val, 0x100);
        r = GsGp_QueueProfileUpdate(h, "\\i1\\", buf);
        if (r != 0) return r;
        break;
    default:
        GsGp_SetErrorString(h, "Invalid info.");
        return 2;
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
// Not in the original binary: unreferenced weak function compiled right before GsGp_SetInfoString, so that the literals
// "%d", "Invalid info.", "\\birthday\\" are pooled where the original has them; removed by the dead-stripping link (notes.txt).
__declspec(weak) void Unk_ov065_0227f54c_pool_order(void) {
    STD_GetStringLength("%d");
    STD_GetStringLength("Invalid info.");
    STD_GetStringLength("\\birthday\\");
}
}
}

namespace Na {
extern "C" {
s32 GsGp_SendGetProfile(Ctx0227 **h, s32 a1, s32 a2) {
    Ctx0227 *ctx = *h;
    GsGpBuf_AppendString(h, &ctx->outputBuffer, "\\getprofile\\\\sesskey\\");
    GsGpBuf_AppendInt(h, &ctx->outputBuffer, ctx->sessKey);
    GsGpBuf_AppendString(h, &ctx->outputBuffer, "\\profileid\\");
    GsGpBuf_AppendInt(h, &ctx->outputBuffer, a1);
    GsGpBuf_AppendString(h, &ctx->outputBuffer, "\\id\\");
    GsGpBuf_AppendInt(h, &ctx->outputBuffer, a2);
    GsGpBuf_AppendString(h, &ctx->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_RequestProfileInfo(Ctx0227 **h, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    void *m;
    Node0227 *n;
    Node0227 *out2;
    Pair0227 pr;
    s32 ok;
    Ctx0227 *ctx;
    ctx = *h;
    out2 = 0;
    ok = 0;
    s32 p5;
    s32 r;
    if (a2 == 1) {
        ok = 1;
    }
    if (ctx->infoCaching == 0) {
        ok = 0;
    }
    if (a4 != 0 && ok != 0 && GsGpProfile_Find(h, a1, &n) != 0 && n->infoCache != 0) {
        m = GsUtil_Alloc(0x204);
        if (m == 0) {
            GsGp_SetErrorString(h, "Out of memory.");
            return 1;
        }
        GsGp_CopyInfoResult(n->infoCache, m);
        ((s32 *)m)[0] = 0;
        ((s32 *)m)[1] = a1;
        pr.func = a4;
        pr.param = a5;
        r = GsGp_AddOperation(h, 2, 0, &out2, 1, a4, a5);
        if (r != 0) {
            return r;
        }
        p5 = out2->unk_18;
        r = GsGp_QueueCallback(h, pr, m, out2, 0);
        if (r != 0) {
            return r;
        }
        GsGp_RemoveOperation(h, out2);
    } else {
        r = GsGp_AddOperation(h, 2, 0, &out2, a3, a4, a5);
        if (r != 0) {
            return r;
        }
        p5 = out2->unk_18;
        r = GsGp_SendGetProfile(h, a1, p5);
        if (r != 0) {
            return r;
        }
    }
    if (a3 != 0) {
        r = GsGp_ProcessConnection(h, p5);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_CacheProfileInfo(Ctx0227 **h, Unk_ov065_0227f324_Owner *p, Unk_ov065_0227f324_Rec *q) {
    Unk_ov065_0227f324_Rec *d;
    if ((*h)->infoCaching == 0) {
        return 1;
    }
    GsGp_FreeCachedInfo(p);
    p->unk_0c = (Unk_ov065_0227f324_Rec *)GsUtil_Alloc(0xf0);
    d = p->unk_0c;
    if (d != 0) {
        *(Unk_ov065_0227f324_Copy *)d = *(Unk_ov065_0227f324_Copy *)q;
        p->unk_0c->unk_00[0] = GsUtil_StrDup(q->unk_00[0]);
        p->unk_0c->unk_00[1] = GsUtil_StrDup(q->unk_00[1]);
        p->unk_0c->unk_00[2] = GsUtil_StrDup(q->unk_00[2]);
        p->unk_0c->unk_00[3] = GsUtil_StrDup(q->unk_00[3]);
        p->unk_0c->unk_00[4] = GsUtil_StrDup(q->unk_00[4]);
        p->unk_0c->unk_00[5] = GsUtil_StrDup(q->unk_00[5]);
        p->unk_0c->unk_c8 = GsUtil_StrDup(q->unk_c8);
    }
    if (p->unk_0c != 0) {
        return 1;
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
void GsGp_FreeCachedInfo(Unk_ov065_0227f324_Owner *p) {
    if (p->unk_0c != 0) {
        GsUtil_Free(p->unk_0c->unk_00[0]);
        p->unk_0c->unk_00[0] = 0;
        GsUtil_Free(p->unk_0c->unk_00[1]);
        p->unk_0c->unk_00[1] = 0;
        GsUtil_Free(p->unk_0c->unk_00[2]);
        p->unk_0c->unk_00[2] = 0;
        GsUtil_Free(p->unk_0c->unk_00[3]);
        p->unk_0c->unk_00[3] = 0;
        GsUtil_Free(p->unk_0c->unk_00[4]);
        p->unk_0c->unk_00[4] = 0;
        GsUtil_Free(p->unk_0c->unk_00[5]);
        p->unk_0c->unk_00[5] = 0;
        GsUtil_Free(p->unk_0c->unk_c8);
        p->unk_0c->unk_c8 = 0;
        GsUtil_Free(p->unk_0c);
        p->unk_0c = 0;
    }
}
}
}
