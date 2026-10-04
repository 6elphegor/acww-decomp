// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/GsGpProfile.h"
#include "net/GsGpCallbackPair.h"
#include "net/GsGpOperation.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/GsGpConnectData.h"
#include "net/Unk_ov065_0227f00c_Host.h"
#include "net/Unk_ov065_0227f324_Rec.h"
#include "net/GsGpContext.h"
#include "net/GsGpPeer.h"

// ov065 TU44: GP gpiConnect.c (0x0227e160..0x0227f2a4)

extern "C" {
char data_ov065_0228d1a4[0x40] = "gpcm.gs.nintendowifi.net";
}

namespace Na {
// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)















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
s32 GsGpBuf_AppendInt(Unk_ov065_0227d8e0_Handle *, GsGpBuffer *, s32);
s32 GsGpBuf_AppendString(Unk_ov065_0227d8e0_Handle *, GsGpBuffer *, const char *);
s32 GsGpBuf_Append(Unk_ov065_0227d8e0_Handle *, GsGpBuffer *, const char *, s32);
s32 GsGpBuf_AppendChar(Unk_ov065_0227d8e0_Handle *, GsGpBuffer *, char);
s32 GsGpPeer_Send(Unk_ov065_0227d8e0_Handle *, GsGpPeer *, const char *, s32);
s32 GsGp_SendBuffer(Unk_ov065_0227d8e0_Handle *, s32, GsGpBuffer *, s32 *, s32, const char *);
s32 GsGp_CallCallback(Unk_ov065_0227d8e0_Handle *, GsGpQueuedCallback *);
s32 GsGp_QueueCallback(Unk_ov065_0227d8e0_Handle *, Unk_ov065_0227e0e8_Wrap, GsGpQueuedCallback *, GsGpOperation *, s32);
void GsGp_CallErrorCallback(Unk_ov065_0227d8e0_Handle *, s32, s32);



















}
}

namespace Nb {
extern "C" char sGsGameName[];
// ov065_051: DWC/GameSpy-like response parser (0x0227e350..0x0227eb60)


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


typedef Unk_ov065_0227e350_Ctx Ctx0227;

typedef GsGpConnectData Req0227;


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
s32 GsGp_QueueCallback(Ctx0227 **, GsGpCallbackPair, void *, GsGpOperation *, s32);
void GsGp_MakeRandomString(void *, s32);
void GsGpProfile_FindByNickEmail(Ctx0227 **, char *, char *, u32 **);
void GsGpProfile_Remove(Ctx0227 **, GsGpProfile *);
void GsGpProfile_RemoveById(Ctx0227 **);
u32 *GsGpProfile_Add(Ctx0227 **, s32);
void GsGp_RemoveOperation(Ctx0227 **, GsGpOperation *);
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










typedef GsGpContext Ctx0227;

typedef GsGpCallbackPair Pair0227;

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
s32 GsGp_AddOperation(Ctx0227 **, s32, void *, GsGpOperation **, s32, s32, s32);
void GsGp_CallFailedCallback(Ctx0227 **, GsGpOperation *);
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
s32 GsGpProfile_Find(Ctx0227 **, s32, GsGpProfile **);
void GsGp_CopyInfoResult(s32, void *);
s32 GsGp_RemoveOperation(Ctx0227 **, GsGpOperation *);
s32 GsGp_QueueCallback(Ctx0227 **, Pair0227, void *, GsGpOperation *, s32);
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
s32 GsGp_OpenSockets(Ctx0227 **, GsGpOperation *);

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
s32 GsGp_OpenSockets(Ctx0227 **h, GsGpOperation *n) {
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
        sa.family = 2;
        if (GsSock_Bind(ctx->peerSocket, w, 8) == -1) GP_FAIL("There was an error binding a socket.")
        if (GsSock_Listen(ctx->peerSocket, 5) == -1) GP_FAIL("There was an error listening on a socket.")
        len = 8;
        if (GsSock_GetSockName(ctx->peerSocket, &sa, &len) == -1) GP_FAIL("There was an error getting a socket's addres.")
        ctx->peerPort = sa.port;
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
    sa.family = 2;
    sa.addr = **host->addrList;
    sa.port = 0xcc74;
    if (GsSock_Connect(ctx->cmSocket, &sa, 8) == -1) {
        e = GsSock_GetLastError(ctx->cmSocket);
        if (e != -6 && e != -0x1a && e != -0x4c) GP_FAIL("There was an error connecting a socket.")
    }
    n->state = 1;
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
    GsGpConnectData *obj;
    GsGpOperation *node;
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
    obj = (GsGpConnectData *)GsUtil_Alloc(0x308);
    if (obj == 0) {
        GsGp_SetErrorString(h, "Out of memory.");
        return 1;
    }
    func_0212899c(obj, 0, 0x308);
    obj->isNewUser = a9;
    if (*a5 != 0 && *a6 != 0) {
        GsUtil_StrCopyN(obj->authToken, a5, 0x100);
        GsUtil_StrCopyN(obj->authSecret, a6, 0x100);
    }
    if (a7 != 0) {
        GsUtil_StrCopyN(obj->cdKey, a7, 0x41);
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
    if (node->blocking != 0) {
        r = GsGp_ProcessConnection(h, node->id);
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
    GsGp_MakeRandomString(req->clientChallenge, 0x20);
    if (req->authSecret[0] != 0) {
        p = req->authSecret;
    } else {
        p = c->password;
    }
    GsUtil_Md5Hex(p, STD_GetStringLength(p), req->passwordHash);
    if (req->authToken[0] != 0) {
        q = req->authToken;
    } else if (c->uniqueNick[0] != 0) {
        q = c->uniqueNick;
    } else {
        OS_SPrintf(b3, "%s@%s", c->nick, c->email);
        q = b3;
    }
    OS_SPrintf(b2, "%s%s%s%s%s%s", req->passwordHash, "                                                ", q, req->clientChallenge, req, req->passwordHash);
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
    GsGpBuf_AppendString(h, c->outputBuffer, req->clientChallenge);
    if (req->authToken[0] != 0) {
        GsGpBuf_AppendString(h, c->outputBuffer, "\\authtoken\\");
        GsGpBuf_AppendString(h, c->outputBuffer, req->authToken);
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
    if (req->cdKey[0] != 0) {
        len = STD_GetStringLength(req->cdKey);
        GsUtil_SeedRand(0x79707367);
        i = 0;
        if (i < len) {
            char *p = a2;
            z1 = i;
            do {
                s8 r = GsUtil_RandRange(z1, 0xff);
                *p++ = r ^ req->cdKey[i];
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
s32 GsGp_ProcessConnectReply(Ctx0227 **h, GsGpOperation *n, char *line) {
    Ctx0227 *c = *h;
    Req0227 *req;
    Unk_ov065_0227e0e8_Wrap pr;
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
    req = (Req0227 *)n->data;
    switch (n->state) {
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
        if (req->isNewUser != 0) {
            t = GsGp_SendNewUser(h, req);
            if (t != 0) {
                return t;
            }
            n->state = 3;
        } else {
            t = GsGp_SendLogin(h, req);
            if (t != 0) {
                return t;
            }
            n->state = 2;
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
        n->state = 2;
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
        if (req->authToken[0] != 0) {
            p = req->authToken;
        } else if (c->uniqueNick[0] != 0) {
            p = c->uniqueNick;
        } else {
            OS_SPrintf(b4, "%s@%s", c->nick, c->email);
            p = b4;
        }
        OS_SPrintf(b3, "%s%s%s%s%s%s", req->passwordHash, "                                                ", p, req, req->clientChallenge, req->passwordHash);
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
        pr = n->callback;
        if (pr.p.func != 0) {
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
s32 GsGp_FreeBuddyDataCb(Ctx0227 **h, GsGpProfile *n) {
    Ctx0227 *c = *h;
    if (n->buddyStatus != NULL) {
        if (c->infoCachingBuddyOnly == 0) {
            GsUtil_Free(n->buddyStatus->statusString);
            n->buddyStatus->statusString = NULL;
            GsUtil_Free(n->buddyStatus->locationString);
            n->buddyStatus->locationString = NULL;
            GsUtil_Free(n->buddyStatus);
            n->buddyStatus = NULL;
        }
    }
    GsUtil_Free(n->authSig);
    n->authSig = 0;
    GsUtil_Free(n->peerSig);
    n->peerSig = 0;
    n->requestCount = 0;
    if (n->infoCache == 0 || (c->infoCachingBuddyOnly == 1 && n->buddyStatus == NULL)) {
        GsGpProfile_Remove(h, n);
        return 0;
    }
    return 1;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_CloseConnection(Unk_ov065_0227d8e0_Handle *h, s32 a) {
    Unk_ov065_0227d8e0_Ctx *ctx = h->connection;
    s32 st = ctx->connectState;
    s32 out;
    void *p;
    GsGpQueuedCallback *n;
    GsGpQueuedCallback *cur;
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
    n = (GsGpQueuedCallback *)ctx->peerList;
    while (n != NULL) {
        cur = n;
        n = *(GsGpQueuedCallback **)((u8 *)n + 0x3c);
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
void GsGp_CallErrorCallback(Unk_ov065_0227d8e0_Handle *h, s32 a, s32 b) {
    Unk_ov065_0227d8e0_Ctx *ctx = h->connection;
    Unk_ov065_0227e0e8_Wrap p;
    GsGpError *m;
    if (b == 1) {
        ctx->fatalError = 1;
    }
    p = ctx->callbacks[0];
    if (p.p.func != 0) {
        m = (GsGpError *)GsUtil_Alloc(0x10);
        if (m != NULL) {
            m->result = a;
            m->isFatal = b;
            m->errorCode = ctx->errorCode;
            m->errorString = ctx;
        }
        GsGp_QueueCallback(h, p, (GsGpQueuedCallback *)m, NULL, 1);
    }
}
}
}
