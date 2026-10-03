// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU44: GP gpiConnect.c (0x0227e160..0x0227f2a4)

extern "C" {
char data_ov065_0228d1a4[0x40] = "gpcm.gs.nintendowifi.net";
}

namespace Na {
// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)

struct Unk_ov065_0227d8e0_Buf {
    char *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0227d8e0_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227e0e8_Wrap {
    Unk_ov065_0227d8e0_Pair unk_00;
};

struct Unk_ov065_0227d8e0_Node {
    void (*unk_00)(void *, void *, s32);
    s32 unk_04;
    void *unk_08;
    s32 unk_0c;
    void *unk_10;
    Unk_ov065_0227d8e0_Node *unk_14;
};

struct Unk_ov065_0227d8e0_Ctx {
    u8 pad_000[0x198];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    Unk_ov065_0227e0e8_Wrap unk_1a4[6];
    s32 unk_1d4;
    s32 unk_1d8;
    char *unk_1dc;
    u8 pad_1e0[0x1ec - 0x1e0];
    char *unk_1ec;
    u8 pad_1f0[4];
    Unk_ov065_0227d8e0_Buf unk_1f4;
    s32 unk_204;
    u8 pad_208[0x418 - 0x208];
    s32 unk_418;
    s32 unk_41c;
    u8 pad_420[4];
    void *unk_424;
    u8 pad_428[0x434 - 0x428];
    void *unk_434;
    Unk_ov065_0227d8e0_Node *unk_438;
    Unk_ov065_0227d8e0_Node *unk_43c;
    void *unk_440;
    u8 pad_444[0x450 - 0x444];
    void *unk_450;
};

struct Unk_ov065_0227d8e0_Handle {
    Unk_ov065_0227d8e0_Ctx *unk_00;
};

struct Unk_ov065_0227d8e0_Arg {
    u8 pad_00[0x10];
    char *unk_10;
};

struct Unk_ov065_0227dc48_Conn {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0c[0x28 - 0xc];
    Unk_ov065_0227d8e0_Buf unk_28;
    s32 unk_38;
};

struct Unk_ov065_0227dfd8_D3 {
    u8 pad_00[0x38];
    s32 unk_38;
    s32 *unk_3c;
    s32 *unk_40;
};

struct Unk_ov065_0227dfd8_D4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};

struct Unk_ov065_0227dfd8_D9 {
    s32 unk_00;
    s32 unk_04;
    s32 *unk_08;
};

struct Unk_ov065_0227e0e8_G {
    u8 pad_00[0x18];
    void *unk_18;
};

struct Unk_ov065_0227e160_Cb {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0c;
};

typedef Unk_ov065_0227d8e0_Handle Unk_H;
typedef Unk_ov065_0227d8e0_Ctx Unk_C;
typedef Unk_ov065_0227d8e0_Buf Unk_B;
typedef Unk_ov065_0227d8e0_Node Unk_N;

extern char data_ov065_0228cfdc[];
extern char data_ov065_0228cff8[];
extern char data_ov065_0228d094[];
extern char data_ov065_0228d0a0[];
extern char data_ov065_0228d0b0[];
extern char data_ov065_0228d0b8[];
extern char data_ov065_0228d0c0[];
extern char data_ov065_0228d0c4[];
extern char data_ov065_0228d0cc[];
extern char data_ov065_0228d0dc[];
extern char data_ov065_0228d108[];
extern char data_ov065_0228d12c[];
extern char data_ov065_0228d140[];
extern char data_ov065_0228d144[];
extern char data_ov065_0228d148[];
extern char data_ov065_0228d170[];
extern char data_ov065_0228d194[];

extern "C" {
char *func_0212a120(const char *, s32);
s32 strncmp(const char *, const char *, s32);
s32 func_0212b770(const char *);
u32 STD_GetStringLength(const char *);
void memmove(void *, void *, s32);
void memcpy(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 GsGp_GetValue(const char *, const char *, char *, s32);
void GsGp_SetErrorString(void *, const char *);
void GsGp_SetError(void *, s32, const char *);
void GsGp_DebugLog(void *, const char *, ...);
void *GsUtil_Realloc(void *, s32);
void *GsUtil_Alloc(s32);
s32 GsUtil_Free(void *);
s32 GsSock_Recv(s32, void *, s32, s32);
s32 GsSock_Send(s32, void *, s32, s32);
s32 GsSock_GetLastError(s32);
s32 GsArray_Count(s32);
s32 GsSock_Shutdown(s32, s32);
s32 GsSock_Close(s32);
s32 GsGp_RemoveOperation(void *, void *);
s32 GsGpPeer_Free(void *, void *);
s32 GsGpProfile_FindIf(void *, s32, s32);
s32 GsGp_FreeBuddyDataCb(void);

s32 GsGp_SocketSend(void *, s32, char *, s32, s32 *, s32 *, const char *);
s32 GsGpBuf_AppendInt(Unk_H *, Unk_B *, s32);
s32 GsGpBuf_AppendString(Unk_H *, Unk_B *, const char *);
s32 GsGpBuf_Append(Unk_H *, Unk_B *, const char *, s32);
s32 GsGpBuf_AppendChar(Unk_H *, Unk_B *, char);
s32 GsGpPeer_Send(Unk_H *, Unk_ov065_0227dc48_Conn *, const char *, s32);
s32 GsGp_SendBuffer(Unk_H *, s32, Unk_B *, s32 *, s32, const char *);
s32 GsGp_CallCallback(Unk_H *, Unk_N *);
s32 GsGp_QueueCallback(Unk_H *, Unk_ov065_0227e0e8_Wrap, Unk_N *, Unk_ov065_0227e0e8_G *, s32);
void GsGp_CallErrorCallback(Unk_H *, s32, s32);



















}
}

namespace Nb {
extern "C" char sGsGameName[];
// ov065_051: DWC/GameSpy-like response parser (0x0227e350..0x0227eb60)

struct Unk_ov065_0227e350_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227e350_Pair2 {
    Unk_ov065_0227e350_Pair p;
};

struct Unk_ov065_0227e350_Sub {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
};

struct Unk_ov065_0227e350_Node {
    s32 unk_00;
    void *unk_04;
    Unk_ov065_0227e350_Sub *unk_08;
    Unk_ov065_0227e350_Pair2 unk_0c;
    s32 unk_14;
    s32 unk_18;
};

struct Unk_ov065_0227e350_Ctx {
    u8 unk_000;
    u8 pad_001[0xff];
    s32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10c;
    char unk_110[0x1f];
    char unk_12f[0x15];
    char unk_144[0x33];
    char unk_177[0x21];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    u8 pad_1a4[0x30];
    s32 unk_1d4;
    s32 unk_1d8;
    u8 pad_1dc[0x18];
    char unk_1f4[0x14];
    s32 unk_208;
    u8 pad_20c[0x20c];
    s32 unk_418;
    u8 pad_41c[0x50];
    s32 unk_46c;
    s32 unk_470;
    char unk_474[0x1c];
};

struct Unk_ov065_0227e438_Req {
    u8 pad_00[0x80];
    char unk_80[0x21];
    char unk_a1[0x21];
    char unk_c2[0x100];
    char unk_1c2[0x100];
    char unk_2c2[0x42];
    s32 unk_304;
};

typedef Unk_ov065_0227e350_Ctx Ctx0227;
typedef Unk_ov065_0227e350_Node Node0227;
typedef Unk_ov065_0227e438_Req Req0227;


extern "C" {

s32 strncmp(const char *, const char *, s32);
char *func_02129f1c(const char *, const char *);
s32 func_0212b770(const char *);
s32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 memcmp(const void *, const void *, s32);
void *func_0212899c(void *, s32, s32);
void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
void GsUtil_SeedRand(u32);
s32 GsUtil_RandRange(s32, s32);
void GsUtil_Md5Hex(char *, s32, char *);
void GsUtil_Base64Encode(char *, char *, s32, s32);
s32 GsGpBuf_AppendString(Ctx0227 **, char *, const char *);
s32 GsGpBuf_AppendInt(Ctx0227 **, char *, s32);
void GsGp_CallErrorCallback(Ctx0227 **, s32, s32);
s32 GsGp_QueueCallback(Ctx0227 **, Unk_ov065_0227e350_Pair, void *, Node0227 *, s32);
void GsGp_MakeRandomString(void *, s32);
void GsGpProfile_FindByNickEmail(Ctx0227 **, char *, char *, u32 **);
void GsGpProfile_Remove(Ctx0227 **, Node0227 *);
void GsGpProfile_RemoveById(Ctx0227 **);
u32 *GsGpProfile_Add(Ctx0227 **, s32);
void GsGp_RemoveOperation(Ctx0227 **, Node0227 *);
void GsGp_SetErrorString(Ctx0227 **, const char *);
void GsGp_SetError(Ctx0227 **, s32, const void *);
s32 GsGp_CheckConnectComplete(Ctx0227 **, s32, s32 *);
s32 GsGp_GetValue(char *, const char *, char *, s32);
s32 GsGp_CheckServerError(Ctx0227 **, char *, s32);
void GsUtil_StrCopyN(void *, char *, s32);
s32 GsGp_SendNewUser(Ctx0227 **, Req0227 *);
s32 GsGp_SendLogin(Ctx0227 **, Req0227 *);






}
}

namespace Nc {
// ov065_052: DWC/GameSpy GP connection setup helpers (0x0227ee64..0x0227f54c)

struct Unk_ov065_0227c538_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227c538_Node {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0c;
    char *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    Unk_ov065_0227c538_Node *unk_20;
};

struct Unk_ov065_0227c538_Ctx {
    u8 unk_000;
    u8 pad_001[0xff];
    s32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10c;
    char unk_110[0x1f];
    char unk_12f[0x15];
    char unk_144[0x33];
    char unk_177[0x1f];
    u8 pad_196[0x2];
    s32 unk_198;
    u8 pad_19c[0x38];
    s32 unk_1d4;
    s32 unk_1d8;
    u8 pad_1dc[0x18];
    char *unk_1f4;
    u8 pad_1f8[0xc];
    s32 unk_204;
    s32 unk_208;
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

extern char data_ov065_0228d5cc[];
extern char data_ov065_0228d5dc[];
extern char data_ov065_0228d5f4[];
extern char data_ov065_0228d600[];
extern char data_ov065_0228d608[];
extern char data_ov065_0228d614[];
extern char data_ov065_0228d630[];
extern char data_ov065_0228d640[];
extern char data_ov065_0228d648[];
extern char data_ov065_0228d658[];
extern char data_ov065_0228d660[];
extern char data_ov065_0228d66c[];
extern char data_ov065_0228d678[];
extern char data_ov065_0228d684[];
extern char data_ov065_0228d690[];
extern char data_ov065_0228d69c[];
extern char data_ov065_0228d6b4[];
extern char data_ov065_0228d6c4[];
extern char data_ov065_0228d6c8[];
extern char data_ov065_0228d6cc[];
extern char data_ov065_0228d6d0[];
extern char data_ov065_0228d6d8[];
extern char data_ov065_0228d6e4[];
extern char data_ov065_0228d6f8[];
extern char data_ov065_0228d70c[];
extern char data_ov065_0228d718[];
extern char data_ov065_0228d720[];
extern char data_ov065_0228d728[];
extern char data_ov065_0228d730[];
extern char data_ov065_0228d738[];
extern char data_ov065_0228d740[];
extern char data_ov065_0228d748[];
extern char data_ov065_0228d750[];
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
        GsGp_SetErrorString(h, data_ov065_0228d630); \
        return 2; \
    }


}
}

namespace Nc {
extern "C" {
void GsGp_MakeRandomString(char *buf, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        buf[i] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[rand() % 0x3e];
    }
    buf[i] = 0;
}
}
}

namespace Nc {
extern "C" {
s32 GsGp_OpenSockets(Ctx0227 **h, Node0227 *n) {
    Ctx0227 *ctx = *h;
    Unk_ov065_0227f00c_Sa sa;
    s32 len;
    Unk_ov065_0227f00c_Host *host;
    s32 e;
    u32 *w;
    if (ctx->unk_10c == 0) {
        ctx->unk_204 = GsSock_Socket(2, 1, 0);
        if (-1 == ctx->unk_204) GP_FAIL("There was an error creating a socket.")
        if (GsSock_SetBlocking(ctx->unk_204, 0) == 0) GP_FAIL("There was an error making a socket non-blocking.")
        w = (u32 *)&sa;
        w[0] = 0;
        w[1] = 0;
        sa.unk_1 = 2;
        if (GsSock_Bind(ctx->unk_204, w, 8) == -1) GP_FAIL("There was an error binding a socket.")
        if (GsSock_Listen(ctx->unk_204, 5) == -1) GP_FAIL("There was an error listening on a socket.")
        len = 8;
        if (GsSock_GetSockName(ctx->unk_204, &sa, &len) == -1) GP_FAIL("There was an error getting a socket's addres.")
        ctx->unk_208 = sa.unk_2;
    } else {
        ctx->unk_204 = -1;
        ctx->unk_208 = 0;
    }
    {
        ctx->unk_1d4 = GsSock_Socket(2, 1, 0);
        if (-1 == ctx->unk_1d4) GP_FAIL("There was an error creating a socket.")
    }
    if (GsSock_SetBlocking(ctx->unk_1d4, 0) == 0) GP_FAIL("There was an error making a socket non-blocking.")
    host = Sock_GetHostByName(data_ov065_0228d1a4);
    if (host == 0) GP_FAIL("Could not resolve connection mananger host name.")
    w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.unk_1 = 2;
    sa.unk_4 = **host->unk_0c;
    sa.unk_2 = 0xcc74;
    if (GsSock_Connect(ctx->unk_1d4, &sa, 8) == -1) {
        e = GsSock_GetLastError(ctx->unk_1d4);
        if (e != -6 && e != -0x1a && e != -0x4c) GP_FAIL("There was an error connecting a socket.")
    }
    n->unk_14 = 1;
    ctx->unk_1d8 = 1;
    return 0;
}
}
}

namespace Nc {
extern "C" {
s32 GsGp_Connect(Ctx0227 **h, const char *a1, const char *a2, const char *a3, const char *a4, const char *a5,
                        const char *a6, const char *a7, s32 mode, s32 a9, s32 a10, s32 a11, s32 a12) {
    Ctx0227 *ctx = *h;
    Unk_ov065_0227ee64_Obj *obj;
    Node0227 *node;
    s32 r;
    if (ctx->unk_1d8 == 4) {
        r = GsGp_ResetConnection(h);
        if (r != 0) {
            return r;
        }
    }
    if (ctx->unk_1d8 != 0) {
        GsGp_SetErrorString(h, "Invalid connection.");
        return 2;
    }
    switch (mode) {
    case 1:
        ctx->unk_10c = 1;
        break;
    case 0:
        ctx->unk_10c = 0;
        break;
    default:
        GsGp_SetErrorString(h, "Invalid firewall.");
        return 2;
    }
    ctx->unk_10c = 1;
    GsUtil_StrCopyN(ctx->unk_110, a1, 0x1f);
    GsUtil_StrCopyN(ctx->unk_12f, a2, 0x15);
    GsUtil_StrCopyN(ctx->unk_144, a3, 0x33);
    GsUtil_StrCopyN(ctx->unk_177, a4, 0x1f);
    GsUtil_StrToLower(ctx->unk_144);
    obj = (Unk_ov065_0227ee64_Obj *)GsUtil_Alloc(0x308);
    if (obj == 0) {
        GsGp_SetErrorString(h, "Out of memory.");
        return 1;
    }
    func_0212899c(obj, 0, 0x308);
    obj->unk_304 = a9;
    if (*a5 != 0 && *a6 != 0) {
        GsUtil_StrCopyN(obj->unk_0c2, a5, 0x100);
        GsUtil_StrCopyN(obj->unk_1c2, a6, 0x100);
    }
    if (a7 != 0) {
        GsUtil_StrCopyN(obj->unk_2c2, a7, 0x41);
    }
    r = GsGp_AddOperation(h, 0, obj, &node, a10, a11, a12);
    if (r != 0) {
        return r;
    }
    r = GsGp_OpenSockets(h, node);
    if (r != 0) {
        node->unk_1c = r;
        GsGp_CallFailedCallback(h, node);
        GsGp_CloseConnection(h, 0);
        return r;
    }
    if (node->unk_08 != 0) {
        r = GsGp_ProcessConnection(h, node->unk_18);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_SendLogin(Ctx0227 **h, Req0227 *req) {
    Ctx0227 *c = *h;
    u32 *out;
    char b1[0x21];
    char b2[0x200];
    char b3[0x50];
    char *p;
    char *q;
    GsGp_MakeRandomString(req->unk_80, 0x20);
    if (req->unk_1c2[0] != 0) {
        p = req->unk_1c2;
    } else {
        p = c->unk_177;
    }
    GsUtil_Md5Hex(p, STD_GetStringLength(p), req->unk_a1);
    if (req->unk_c2[0] != 0) {
        q = req->unk_c2;
    } else if (c->unk_12f[0] != 0) {
        q = c->unk_12f;
    } else {
        OS_SPrintf(b3, "%s@%s", c->unk_110, c->unk_144);
        q = b3;
    }
    OS_SPrintf(b2, "%s%s%s%s%s%s", req->unk_a1, "                                                ", q, req->unk_80, req, req->unk_a1);
    GsUtil_Md5Hex(b2, STD_GetStringLength(b2), b1);
    if (c->unk_100 != 0) {
        GsGpProfile_FindByNickEmail(h, c->unk_110, c->unk_144, &out);
        if (out != NULL) {
            c->unk_19c = out[1];
            c->unk_1a0 = out[0];
        }
    }
    GsGpBuf_AppendString(h, c->unk_1f4, "\\login\\");
    GsGpBuf_AppendString(h, c->unk_1f4, "\\challenge\\");
    GsGpBuf_AppendString(h, c->unk_1f4, req->unk_80);
    if (req->unk_c2[0] != 0) {
        GsGpBuf_AppendString(h, c->unk_1f4, "\\authtoken\\");
        GsGpBuf_AppendString(h, c->unk_1f4, req->unk_c2);
    } else if (c->unk_12f[0] != 0) {
        GsGpBuf_AppendString(h, c->unk_1f4, "\\uniquenick\\");
        GsGpBuf_AppendString(h, c->unk_1f4, c->unk_12f);
    } else {
        GsGpBuf_AppendString(h, c->unk_1f4, "\\user\\");
        GsGpBuf_AppendString(h, c->unk_1f4, c->unk_110);
        GsGpBuf_AppendString(h, c->unk_1f4, "@");
        GsGpBuf_AppendString(h, c->unk_1f4, c->unk_144);
    }
    if (c->unk_19c != 0) {
        GsGpBuf_AppendString(h, c->unk_1f4, "\\userid\\");
        GsGpBuf_AppendInt(h, c->unk_1f4, c->unk_19c);
    }
    if (c->unk_1a0 != 0) {
        GsGpBuf_AppendString(h, c->unk_1f4, "\\profileid\\");
        GsGpBuf_AppendInt(h, c->unk_1f4, c->unk_1a0);
    }
    GsGpBuf_AppendString(h, c->unk_1f4, "\\response\\");
    GsGpBuf_AppendString(h, c->unk_1f4, b1);
    if (c->unk_10c == 1) {
        GsGpBuf_AppendString(h, c->unk_1f4, "\\firewall\\1");
    }
    GsGpBuf_AppendString(h, c->unk_1f4, "\\port\\");
    {
        s32 t = (u16)c->unk_208;
        s32 sw = (s16)(u16)(((t >> 8) & 0xff) | ((t << 8) & 0xff00));
        GsGpBuf_AppendInt(h, c->unk_1f4, sw);
    }
    GsGpBuf_AppendString(h, c->unk_1f4, "\\productid\\");
    GsGpBuf_AppendInt(h, c->unk_1f4, c->unk_46c);
    GsGpBuf_AppendString(h, c->unk_1f4, "\\gamename\\");
    GsGpBuf_AppendString(h, c->unk_1f4, sGsGameName);
    GsGpBuf_AppendString(h, c->unk_1f4, "\\namespaceid\\");
    GsGpBuf_AppendInt(h, c->unk_1f4, c->unk_470);
    GsGpBuf_AppendString(h, c->unk_1f4, "\\id\\1");
    GsGpBuf_AppendString(h, c->unk_1f4, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_SendNewUser(Ctx0227 **h, Req0227 *req) {
    Ctx0227 *c = *h;
    char a1[0x1f];
    char b1[0x2d];
    char a2[0x41];
    char b2[0x5f];
    volatile s32 z0;
    volatile s32 z1;
    u32 len;
    u32 i;
    len = STD_GetStringLength(c->unk_177);
    GsUtil_SeedRand(0x79707367);
    i = 0;
    if (i < len) {
        char *p = a1;
        z0 = i;
        do {
            s8 r = GsUtil_RandRange(z0, 0xff);
            *p++ = r ^ c->unk_177[i];
        } while (++i < len);
    }
    a1[i] = 0;
    GsUtil_Base64Encode(a1, b1, len, 1);
    GsGpBuf_AppendString(h, c->unk_1f4, "\\newuser\\");
    GsGpBuf_AppendString(h, c->unk_1f4, "\\email\\");
    GsGpBuf_AppendString(h, c->unk_1f4, c->unk_144);
    GsGpBuf_AppendString(h, c->unk_1f4, "\\nick\\");
    GsGpBuf_AppendString(h, c->unk_1f4, c->unk_110);
    GsGpBuf_AppendString(h, c->unk_1f4, "\\passwordenc\\");
    GsGpBuf_AppendString(h, c->unk_1f4, b1);
    GsGpBuf_AppendString(h, c->unk_1f4, "\\productid\\");
    GsGpBuf_AppendInt(h, c->unk_1f4, c->unk_46c);
    GsGpBuf_AppendString(h, c->unk_1f4, "\\gamename\\");
    GsGpBuf_AppendString(h, c->unk_1f4, sGsGameName);
    GsGpBuf_AppendString(h, c->unk_1f4, "\\namespaceid\\");
    GsGpBuf_AppendInt(h, c->unk_1f4, c->unk_470);
    GsGpBuf_AppendString(h, c->unk_1f4, "\\uniquenick\\");
    GsGpBuf_AppendString(h, c->unk_1f4, c->unk_12f);
    if (req->unk_2c2[0] != 0) {
        len = STD_GetStringLength(req->unk_2c2);
        GsUtil_SeedRand(0x79707367);
        i = 0;
        if (i < len) {
            char *p = a2;
            z1 = i;
            do {
                s8 r = GsUtil_RandRange(z1, 0xff);
                *p++ = r ^ req->unk_2c2[i];
            } while (++i < len);
        }
        a2[i] = 0;
        GsUtil_Base64Encode(a2, b2, len, 1);
        GsGpBuf_AppendString(h, c->unk_1f4, "\\cdkeyenc\\");
        GsGpBuf_AppendString(h, c->unk_1f4, b2);
    }
    GsGpBuf_AppendString(h, c->unk_1f4, "\\id\\1");
    GsGpBuf_AppendString(h, c->unk_1f4, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_ProcessConnectReply(Ctx0227 **h, Node0227 *n, char *line) {
    Ctx0227 *c = *h;
    Req0227 *req;
    Unk_ov065_0227e350_Pair2 pr;
    char b1[0x21];
    char b2[0x15];
    char b3[0x200];
    char b4[0x50];
    char *p;
    s32 t;
    if (GsGp_CheckServerError(h, line, 0) != 0) {
        t = c->unk_418;
        if (t == 0x106 && c->unk_1a0 != 0) {
            GsGpProfile_RemoveById(h);
            c->unk_19c = 0;
            c->unk_1a0 = 0;
        } else if (t == 0x201) {
            if (GsGp_GetValue(line, "\\pid\\", b3, 0x200) != 0) {
                c->unk_1a0 = func_0212b770(b3);
            }
        }
        if (func_02129f1c(line, "\\fatal\\") != 0) {
            GsGp_SetError(h, c->unk_418, c);
            GsGp_CallErrorCallback(h, 4, 1);
            return 4;
        }
        GsGp_SetError(h, c->unk_418, c);
        GsGp_CallErrorCallback(h, 4, 0);
        return 4;
    }
    req = (Req0227 *)n->unk_04;
    switch (n->unk_14) {
    case 1:
        if (strncmp(line, "\\lc\\1", 5) != 0) {
            GsGp_SetError(h, 1, "Unexpected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        if (GsGp_GetValue(line, "\\challenge\\", (char *)req, 0x80) == 0) {
            GsGp_SetError(h, 1, "Unexpected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        if (req->unk_304 != 0) {
            t = GsGp_SendNewUser(h, req);
            if (t != 0) {
                return t;
            }
            n->unk_14 = 3;
        } else {
            t = GsGp_SendLogin(h, req);
            if (t != 0) {
                return t;
            }
            n->unk_14 = 2;
        }
        break;
    case 3:
        if (strncmp(line, "\\nur\\", 5) != 0) {
            GsGp_SetError(h, 1, "Unexpected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        if (GsGp_GetValue(line, "\\userid\\", b3, 0x200) == 0) {
            GsGp_SetError(h, 1, "Unexepected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        c->unk_19c = func_0212b770(b3);
        if (GsGp_GetValue(line, "\\profileid\\", b3, 0x200) == 0) {
            GsGp_SetError(h, 1, "Unexepected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        c->unk_1a0 = func_0212b770(b3);
        t = GsGp_SendLogin(h, req);
        if (t != 0) {
            return t;
        }
        n->unk_14 = 2;
        break;
    case 2:
        if (strncmp(line, "\\lc\\2", 5) != 0) {
            GsGp_SetError(h, 1, "Unexpected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        if (GsGp_GetValue(line, "\\sesskey\\", b3, 0x200) == 0) {
            GsGp_SetError(h, 1, "Unexepected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        c->unk_198 = func_0212b770(b3);
        if (GsGp_GetValue(line, "\\userid\\", b3, 0x200) == 0) {
            GsGp_SetError(h, 1, "Unexepected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        c->unk_19c = func_0212b770(b3);
        if (GsGp_GetValue(line, "\\profileid\\", b3, 0x200) == 0) {
            GsGp_SetError(h, 1, "Unexepected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        c->unk_1a0 = func_0212b770(b3);
        if (GsGp_GetValue(line, "\\uniquenick\\", b2, 0x15) == 0) {
            b2[0] = 0;
        }
        if (GsGp_GetValue(line, "\\lt\\", c->unk_474, 0x19) == 0) {
            c->unk_474[0] = 0;
        }
        if (req->unk_c2[0] != 0) {
            p = req->unk_c2;
        } else if (c->unk_12f[0] != 0) {
            p = c->unk_12f;
        } else {
            OS_SPrintf(b4, "%s@%s", c->unk_110, c->unk_144);
            p = b4;
        }
        OS_SPrintf(b3, "%s%s%s%s%s%s", req->unk_a1, "                                                ", p, req, req->unk_80, req->unk_a1);
        GsUtil_Md5Hex(b3, STD_GetStringLength(b3), b1);
        if (GsGp_GetValue(line, "\\proof\\", b3, 0x200) == 0) {
            GsGp_SetError(h, 1, "Unexepected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        if (memcmp(b1, b3, 0x20) != 0) {
            GsGp_SetError(h, 0x108, "Could not authenticate server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        if (c->unk_100 != 0) {
            u32 *e = GsGpProfile_Add(h, c->unk_1a0);
            e[0] = c->unk_1a0;
            e[1] = c->unk_19c;
        }
        c->unk_1d8 = 3;
        pr = n->unk_0c;
        if (pr.p.unk_00 != 0) {
            u32 *q = (u32 *)GsUtil_Alloc(0x20);
            if (q == NULL) {
                GsGp_SetErrorString(h, "Out of memory.");
                return 1;
            }
            func_0212899c(q, 0, 0x20);
            q[1] = c->unk_1a0;
            q[0] = 0;
            GsUtil_StrCopyN(q + 2, b2, 0x15);
            t = GsGp_QueueCallback(h, pr.p, q, n, 0);
            if (t != 0) {
                return t;
            }
        }
        GsGp_RemoveOperation(h, n);
        break;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_CheckConnected(Ctx0227 **h) {
    Ctx0227 *c = *h;
    s32 out;
    s32 r = GsGp_CheckConnectComplete(h, c->unk_1d4, &out);
    if (r == 0) {
        if (out == 4) {
            GsGp_SetError(h, 0x107, "The server has refused the connection.");
            GsGp_CallErrorCallback(h, 4, 1);
            return 4;
        }
        if (out == 0) {
            return 0;
        }
        c->unk_1d8 = 2;
        return 0;
    }
    return r;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_FreeBuddyDataCb(Ctx0227 **h, Node0227 *n) {
    Ctx0227 *c = *h;
    if (n->unk_08 != NULL) {
        if (c->unk_104 == 0) {
            GsUtil_Free(n->unk_08->unk_08);
            n->unk_08->unk_08 = NULL;
            GsUtil_Free(n->unk_08->unk_0c);
            n->unk_08->unk_0c = NULL;
            GsUtil_Free(n->unk_08);
            n->unk_08 = NULL;
        }
    }
    GsUtil_Free((void *)n->unk_0c.p.unk_04);
    n->unk_0c.p.unk_04 = 0;
    GsUtil_Free((void *)n->unk_18);
    n->unk_18 = 0;
    n->unk_14 = 0;
    if (n->unk_0c.p.unk_00 == 0 || (c->unk_104 == 1 && n->unk_08 == NULL)) {
        GsGpProfile_Remove(h, n);
        return 0;
    }
    return 1;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_CloseConnection(Unk_H *h, s32 a) {
    Unk_C *ctx = h->unk_00;
    s32 st = ctx->unk_1d8;
    s32 out;
    void *p;
    Unk_N *n;
    Unk_N *cur;
    if (st != 4) {
    if (st != 0) {
        if (a != 0 && st == 3) {
            GsGpBuf_AppendString(h, &ctx->unk_1f4, "\\logout\\\\sesskey\\");
            GsGpBuf_AppendInt(h, &ctx->unk_1f4, ctx->unk_198);
            GsGpBuf_AppendString(h, &ctx->unk_1f4, "\\final\\");
        }
        GsGp_SendBuffer(h, ctx->unk_1d4, &ctx->unk_1f4, &out, 1, "CM");
        if (ctx->unk_1d4 != -1) {
            GsSock_Shutdown(ctx->unk_1d4, 2);
            GsSock_Close(ctx->unk_1d4);
            ctx->unk_1d4 = -1;
        }
        if (ctx->unk_204 != -1) {
            GsSock_Shutdown(ctx->unk_204, 2);
            GsSock_Close(ctx->unk_204);
            ctx->unk_204 = -1;
        }
        ctx->unk_1d8 = 4;
        ctx->unk_19c = 0;
        ctx->unk_1a0 = 0;
    }
    GsUtil_Free(ctx->unk_1dc);
    ctx->unk_1dc = NULL;
    GsUtil_Free(ctx->unk_1ec);
    ctx->unk_1ec = NULL;
    GsUtil_Free(ctx->unk_1f4.unk_00);
    ctx->unk_1f4.unk_00 = NULL;
    GsUtil_Free(ctx->unk_440);
    ctx->unk_440 = NULL;
    GsUtil_Free(ctx->unk_450);
    ctx->unk_450 = NULL;
    while (ctx->unk_424 != NULL) {
        GsGp_RemoveOperation(h, ctx->unk_424);
    }
    ctx->unk_424 = NULL;
    n = (Unk_N *)ctx->unk_434;
    while (n != NULL) {
        cur = n;
        n = *(Unk_N **)((u8 *)n + 0x3c);
        GsGpPeer_Free(h, cur);
    }
    ctx->unk_434 = NULL;
    while (GsGpProfile_FindIf(h, (s32)GsGp_FreeBuddyDataCb, 0) == 0) {
    }
    }
}
}
}

namespace Na {
extern "C" {
void GsGp_CallErrorCallback(Unk_H *h, s32 a, s32 b) {
    Unk_C *ctx = h->unk_00;
    Unk_ov065_0227e0e8_Wrap p;
    Unk_ov065_0227e160_Cb *m;
    if (b == 1) {
        ctx->unk_41c = 1;
    }
    p = ctx->unk_1a4[0];
    if (p.unk_00.unk_00 != 0) {
        m = (Unk_ov065_0227e160_Cb *)GsUtil_Alloc(0x10);
        if (m != NULL) {
            m->unk_00 = a;
            m->unk_0c = b;
            m->unk_04 = ctx->unk_418;
            m->unk_08 = ctx;
        }
        GsGp_QueueCallback(h, p, (Unk_N *)m, NULL, 1);
    }
}
}
}
