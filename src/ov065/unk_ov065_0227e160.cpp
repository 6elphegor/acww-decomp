// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU44: GP gpiConnect.c (0x0227e160..0x0227f2a4)

extern "C" {
char data_ov065_0228d1a4[0x40] = "gpcm.gs.nintendowifi.net";
}

namespace Na {
// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)

struct Unk_ov065_0227d8e0_Buf {
    char *buffer;
    s32 capacity;
    s32 length;
    s32 pos;
};

struct Unk_ov065_0227d8e0_Pair {
    s32 func;
    s32 param;
};

struct Unk_ov065_0227e0e8_Wrap {
    Unk_ov065_0227d8e0_Pair callback;
};

struct Unk_ov065_0227d8e0_Node {
    void (*unk_00)(void *, void *, s32);
    s32 param;
    void *arg;
    s32 argType;
    void *operationId;
    Unk_ov065_0227d8e0_Node *next;
};

struct Unk_ov065_0227d8e0_Ctx {
    u8 pad_000[0x198];
    s32 sessKey;
    s32 userId;
    s32 profileId;
    Unk_ov065_0227e0e8_Wrap callbacks[6];
    s32 cmSocket;
    s32 connectState;
    char *recvBuffer;
    u8 pad_1e0[0x1ec - 0x1e0];
    char *inputBuffer;
    u8 pad_1f0[4];
    Unk_ov065_0227d8e0_Buf outputBuffer;
    s32 peerSocket;
    u8 pad_208[0x418 - 0x208];
    s32 errorCode;
    s32 fatalError;
    u8 pad_420[4];
    void *operationList;
    u8 pad_428[0x434 - 0x428];
    void *peerList;
    Unk_ov065_0227d8e0_Node *callbackList;
    Unk_ov065_0227d8e0_Node *callbackListTail;
    void *profileUpdateBuffer;
    u8 pad_444[0x450 - 0x444];
    void *userUpdateBuffer;
};

struct Unk_ov065_0227d8e0_Handle {
    Unk_ov065_0227d8e0_Ctx *connection;
};

struct Unk_ov065_0227d8e0_Arg {
    u8 pad_00[0x10];
    char *authSig;
};

struct Unk_ov065_0227dc48_Conn {
    u8 pad_00[8];
    s32 sock;
    u8 pad_0c[0x28 - 0xc];
    Unk_ov065_0227d8e0_Buf outputBuffer;
    s32 messageQueue;
};

struct Unk_ov065_0227dfd8_D3 {
    u8 pad_00[0x38];
    s32 numNicks;
    s32 *nicks;
    s32 *uniqueNicks;
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
    s32 numNicks;
    s32 *nicks;
};

struct Unk_ov065_0227e0e8_G {
    u8 pad_00[0x18];
    void *id;
};

struct Unk_ov065_0227e160_Cb {
    s32 result;
    s32 errorCode;
    void *errorString;
    s32 isFatal;
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
    u8 errorString;
    u8 pad_001[0xff];
    s32 infoCaching;
    s32 infoCachingBuddyOnly;
    s32 simulation;
    s32 firewall;
    char nick[0x1f];
    char uniqueNick[0x15];
    char email[0x33];
    char password[0x21];
    s32 sessKey;
    s32 userId;
    s32 profileId;
    u8 pad_1a4[0x30];
    s32 cmSocket;
    s32 connectState;
    u8 pad_1dc[0x18];
    char outputBuffer[0x14];
    s32 peerPort;
    u8 pad_20c[0x20c];
    s32 errorCode;
    u8 pad_41c[0x50];
    s32 productId;
    s32 namespaceId;
    char loginTicket[0x1c];
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
    if (ctx->firewall == 0) {
        ctx->peerSocket = GsSock_Socket(2, 1, 0);
        if (-1 == ctx->peerSocket) GP_FAIL("There was an error creating a socket.")
        if (GsSock_SetBlocking(ctx->peerSocket, 0) == 0) GP_FAIL("There was an error making a socket non-blocking.")
        w = (u32 *)&sa;
        w[0] = 0;
        w[1] = 0;
        sa.unk_1 = 2;
        if (GsSock_Bind(ctx->peerSocket, w, 8) == -1) GP_FAIL("There was an error binding a socket.")
        if (GsSock_Listen(ctx->peerSocket, 5) == -1) GP_FAIL("There was an error listening on a socket.")
        len = 8;
        if (GsSock_GetSockName(ctx->peerSocket, &sa, &len) == -1) GP_FAIL("There was an error getting a socket's addres.")
        ctx->peerPort = sa.unk_2;
    } else {
        ctx->peerSocket = -1;
        ctx->peerPort = 0;
    }
    {
        ctx->cmSocket = GsSock_Socket(2, 1, 0);
        if (-1 == ctx->cmSocket) GP_FAIL("There was an error creating a socket.")
    }
    if (GsSock_SetBlocking(ctx->cmSocket, 0) == 0) GP_FAIL("There was an error making a socket non-blocking.")
    host = Sock_GetHostByName(data_ov065_0228d1a4);
    if (host == 0) GP_FAIL("Could not resolve connection mananger host name.")
    w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.unk_1 = 2;
    sa.unk_4 = **host->unk_0c;
    sa.unk_2 = 0xcc74;
    if (GsSock_Connect(ctx->cmSocket, &sa, 8) == -1) {
        e = GsSock_GetLastError(ctx->cmSocket);
        if (e != -6 && e != -0x1a && e != -0x4c) GP_FAIL("There was an error connecting a socket.")
    }
    n->unk_14 = 1;
    ctx->connectState = 1;
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
    if (ctx->connectState == 4) {
        r = GsGp_ResetConnection(h);
        if (r != 0) {
            return r;
        }
    }
    if (ctx->connectState != 0) {
        GsGp_SetErrorString(h, "Invalid connection.");
        return 2;
    }
    switch (mode) {
    case 1:
        ctx->firewall = 1;
        break;
    case 0:
        ctx->firewall = 0;
        break;
    default:
        GsGp_SetErrorString(h, "Invalid firewall.");
        return 2;
    }
    ctx->firewall = 1;
    GsUtil_StrCopyN(ctx->nick, a1, 0x1f);
    GsUtil_StrCopyN(ctx->uniqueNick, a2, 0x15);
    GsUtil_StrCopyN(ctx->email, a3, 0x33);
    GsUtil_StrCopyN(ctx->password, a4, 0x1f);
    GsUtil_StrToLower(ctx->email);
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
        node->result = r;
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
        p = c->password;
    }
    GsUtil_Md5Hex(p, STD_GetStringLength(p), req->unk_a1);
    if (req->unk_c2[0] != 0) {
        q = req->unk_c2;
    } else if (c->uniqueNick[0] != 0) {
        q = c->uniqueNick;
    } else {
        OS_SPrintf(b3, "%s@%s", c->nick, c->email);
        q = b3;
    }
    OS_SPrintf(b2, "%s%s%s%s%s%s", req->unk_a1, "                                                ", q, req->unk_80, req, req->unk_a1);
    GsUtil_Md5Hex(b2, STD_GetStringLength(b2), b1);
    if (c->infoCaching != 0) {
        GsGpProfile_FindByNickEmail(h, c->nick, c->email, &out);
        if (out != NULL) {
            c->userId = out[1];
            c->profileId = out[0];
        }
    }
    GsGpBuf_AppendString(h, c->outputBuffer, "\\login\\");
    GsGpBuf_AppendString(h, c->outputBuffer, "\\challenge\\");
    GsGpBuf_AppendString(h, c->outputBuffer, req->unk_80);
    if (req->unk_c2[0] != 0) {
        GsGpBuf_AppendString(h, c->outputBuffer, "\\authtoken\\");
        GsGpBuf_AppendString(h, c->outputBuffer, req->unk_c2);
    } else if (c->uniqueNick[0] != 0) {
        GsGpBuf_AppendString(h, c->outputBuffer, "\\uniquenick\\");
        GsGpBuf_AppendString(h, c->outputBuffer, c->uniqueNick);
    } else {
        GsGpBuf_AppendString(h, c->outputBuffer, "\\user\\");
        GsGpBuf_AppendString(h, c->outputBuffer, c->nick);
        GsGpBuf_AppendString(h, c->outputBuffer, "@");
        GsGpBuf_AppendString(h, c->outputBuffer, c->email);
    }
    if (c->userId != 0) {
        GsGpBuf_AppendString(h, c->outputBuffer, "\\userid\\");
        GsGpBuf_AppendInt(h, c->outputBuffer, c->userId);
    }
    if (c->profileId != 0) {
        GsGpBuf_AppendString(h, c->outputBuffer, "\\profileid\\");
        GsGpBuf_AppendInt(h, c->outputBuffer, c->profileId);
    }
    GsGpBuf_AppendString(h, c->outputBuffer, "\\response\\");
    GsGpBuf_AppendString(h, c->outputBuffer, b1);
    if (c->firewall == 1) {
        GsGpBuf_AppendString(h, c->outputBuffer, "\\firewall\\1");
    }
    GsGpBuf_AppendString(h, c->outputBuffer, "\\port\\");
    {
        s32 t = (u16)c->peerPort;
        s32 sw = (s16)(u16)(((t >> 8) & 0xff) | ((t << 8) & 0xff00));
        GsGpBuf_AppendInt(h, c->outputBuffer, sw);
    }
    GsGpBuf_AppendString(h, c->outputBuffer, "\\productid\\");
    GsGpBuf_AppendInt(h, c->outputBuffer, c->productId);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\gamename\\");
    GsGpBuf_AppendString(h, c->outputBuffer, sGsGameName);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\namespaceid\\");
    GsGpBuf_AppendInt(h, c->outputBuffer, c->namespaceId);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\id\\1");
    GsGpBuf_AppendString(h, c->outputBuffer, "\\final\\");
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
    len = STD_GetStringLength(c->password);
    GsUtil_SeedRand(0x79707367);
    i = 0;
    if (i < len) {
        char *p = a1;
        z0 = i;
        do {
            s8 r = GsUtil_RandRange(z0, 0xff);
            *p++ = r ^ c->password[i];
        } while (++i < len);
    }
    a1[i] = 0;
    GsUtil_Base64Encode(a1, b1, len, 1);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\newuser\\");
    GsGpBuf_AppendString(h, c->outputBuffer, "\\email\\");
    GsGpBuf_AppendString(h, c->outputBuffer, c->email);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\nick\\");
    GsGpBuf_AppendString(h, c->outputBuffer, c->nick);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\passwordenc\\");
    GsGpBuf_AppendString(h, c->outputBuffer, b1);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\productid\\");
    GsGpBuf_AppendInt(h, c->outputBuffer, c->productId);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\gamename\\");
    GsGpBuf_AppendString(h, c->outputBuffer, sGsGameName);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\namespaceid\\");
    GsGpBuf_AppendInt(h, c->outputBuffer, c->namespaceId);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\uniquenick\\");
    GsGpBuf_AppendString(h, c->outputBuffer, c->uniqueNick);
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
        GsGpBuf_AppendString(h, c->outputBuffer, "\\cdkeyenc\\");
        GsGpBuf_AppendString(h, c->outputBuffer, b2);
    }
    GsGpBuf_AppendString(h, c->outputBuffer, "\\id\\1");
    GsGpBuf_AppendString(h, c->outputBuffer, "\\final\\");
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
        t = c->errorCode;
        if (t == 0x106 && c->profileId != 0) {
            GsGpProfile_RemoveById(h);
            c->userId = 0;
            c->profileId = 0;
        } else if (t == 0x201) {
            if (GsGp_GetValue(line, "\\pid\\", b3, 0x200) != 0) {
                c->profileId = func_0212b770(b3);
            }
        }
        if (func_02129f1c(line, "\\fatal\\") != 0) {
            GsGp_SetError(h, c->errorCode, c);
            GsGp_CallErrorCallback(h, 4, 1);
            return 4;
        }
        GsGp_SetError(h, c->errorCode, c);
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
        c->userId = func_0212b770(b3);
        if (GsGp_GetValue(line, "\\profileid\\", b3, 0x200) == 0) {
            GsGp_SetError(h, 1, "Unexepected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        c->profileId = func_0212b770(b3);
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
        c->sessKey = func_0212b770(b3);
        if (GsGp_GetValue(line, "\\userid\\", b3, 0x200) == 0) {
            GsGp_SetError(h, 1, "Unexepected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        c->userId = func_0212b770(b3);
        if (GsGp_GetValue(line, "\\profileid\\", b3, 0x200) == 0) {
            GsGp_SetError(h, 1, "Unexepected data was received from the server.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
        c->profileId = func_0212b770(b3);
        if (GsGp_GetValue(line, "\\uniquenick\\", b2, 0x15) == 0) {
            b2[0] = 0;
        }
        if (GsGp_GetValue(line, "\\lt\\", c->loginTicket, 0x19) == 0) {
            c->loginTicket[0] = 0;
        }
        if (req->unk_c2[0] != 0) {
            p = req->unk_c2;
        } else if (c->uniqueNick[0] != 0) {
            p = c->uniqueNick;
        } else {
            OS_SPrintf(b4, "%s@%s", c->nick, c->email);
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
        if (c->infoCaching != 0) {
            u32 *e = GsGpProfile_Add(h, c->profileId);
            e[0] = c->profileId;
            e[1] = c->userId;
        }
        c->connectState = 3;
        pr = n->unk_0c;
        if (pr.p.unk_00 != 0) {
            u32 *q = (u32 *)GsUtil_Alloc(0x20);
            if (q == NULL) {
                GsGp_SetErrorString(h, "Out of memory.");
                return 1;
            }
            func_0212899c(q, 0, 0x20);
            q[1] = c->profileId;
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
    s32 r = GsGp_CheckConnectComplete(h, c->cmSocket, &out);
    if (r == 0) {
        if (out == 4) {
            GsGp_SetError(h, 0x107, "The server has refused the connection.");
            GsGp_CallErrorCallback(h, 4, 1);
            return 4;
        }
        if (out == 0) {
            return 0;
        }
        c->connectState = 2;
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
        if (c->infoCachingBuddyOnly == 0) {
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
    if (n->unk_0c.p.unk_00 == 0 || (c->infoCachingBuddyOnly == 1 && n->unk_08 == NULL)) {
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
    Unk_C *ctx = h->connection;
    s32 st = ctx->connectState;
    s32 out;
    void *p;
    Unk_N *n;
    Unk_N *cur;
    if (st != 4) {
    if (st != 0) {
        if (a != 0 && st == 3) {
            GsGpBuf_AppendString(h, &ctx->outputBuffer, "\\logout\\\\sesskey\\");
            GsGpBuf_AppendInt(h, &ctx->outputBuffer, ctx->sessKey);
            GsGpBuf_AppendString(h, &ctx->outputBuffer, "\\final\\");
        }
        GsGp_SendBuffer(h, ctx->cmSocket, &ctx->outputBuffer, &out, 1, "CM");
        if (ctx->cmSocket != -1) {
            GsSock_Shutdown(ctx->cmSocket, 2);
            GsSock_Close(ctx->cmSocket);
            ctx->cmSocket = -1;
        }
        if (ctx->peerSocket != -1) {
            GsSock_Shutdown(ctx->peerSocket, 2);
            GsSock_Close(ctx->peerSocket);
            ctx->peerSocket = -1;
        }
        ctx->connectState = 4;
        ctx->userId = 0;
        ctx->profileId = 0;
    }
    GsUtil_Free(ctx->recvBuffer);
    ctx->recvBuffer = NULL;
    GsUtil_Free(ctx->inputBuffer);
    ctx->inputBuffer = NULL;
    GsUtil_Free(ctx->outputBuffer.buffer);
    ctx->outputBuffer.buffer = NULL;
    GsUtil_Free(ctx->profileUpdateBuffer);
    ctx->profileUpdateBuffer = NULL;
    GsUtil_Free(ctx->userUpdateBuffer);
    ctx->userUpdateBuffer = NULL;
    while (ctx->operationList != NULL) {
        GsGp_RemoveOperation(h, ctx->operationList);
    }
    ctx->operationList = NULL;
    n = (Unk_N *)ctx->peerList;
    while (n != NULL) {
        cur = n;
        n = *(Unk_N **)((u8 *)n + 0x3c);
        GsGpPeer_Free(h, cur);
    }
    ctx->peerList = NULL;
    while (GsGpProfile_FindIf(h, (s32)GsGp_FreeBuddyDataCb, 0) == 0) {
    }
    }
}
}
}

namespace Na {
extern "C" {
void GsGp_CallErrorCallback(Unk_H *h, s32 a, s32 b) {
    Unk_C *ctx = h->connection;
    Unk_ov065_0227e0e8_Wrap p;
    Unk_ov065_0227e160_Cb *m;
    if (b == 1) {
        ctx->fatalError = 1;
    }
    p = ctx->callbacks[0];
    if (p.callback.func != 0) {
        m = (Unk_ov065_0227e160_Cb *)GsUtil_Alloc(0x10);
        if (m != NULL) {
            m->result = a;
            m->isFatal = b;
            m->errorCode = ctx->errorCode;
            m->errorString = ctx;
        }
        GsGp_QueueCallback(h, p, (Unk_N *)m, NULL, 1);
    }
}
}
}
