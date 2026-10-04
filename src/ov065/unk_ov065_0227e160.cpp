// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/gpiProfile.h"
#include "net/gpiCallback.h"
#include "net/gpiOperation.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/Unk_ov065_0227f00c_Host.h"
#include "net/Unk_ov065_0227f324_Rec.h"
#include "net/gpi.h"
#include "net/gpiPeer.h"

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
char *strchr(const char *, s32);
s32 strncmp(const char *, const char *, s32);
s32 atol(const char *);
u32 STD_GetStringLength(const char *);
void memmove(void *, void *, s32);
void memcpy(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 gpiValueForKey(const char *, const char *, char *, s32);
void gpiSetErrorString(void *, const char *);
void gpiSetError(void *, s32, const char *);
void gpiDebug(void *, const char *, ...);
void *GsUtil_Realloc(void *, s32);
void *GsUtil_Alloc(s32);
s32 GsUtil_Free(void *);
s32 recv(s32, void *, s32, s32);
s32 send(s32, void *, s32, s32);
s32 GOAGetLastError(s32);
s32 ArrayLength(s32);
s32 shutdown(s32, s32);
s32 closesocket(s32);
s32 gpiRemoveOperation(void *, void *);
s32 gpiDestroyPeer(void *, void *);
s32 gpiProfileMap(void *, s32, s32);
s32 gpiDisconnectCleanupProfile(void);

s32 gpiSendData(void *, s32, char *, s32, s32 *, s32 *, const char *);
s32 gpiAppendIntToBuffer(Unk_ov065_0227d8e0_Handle *, GPIBuffer *, s32);
s32 gpiAppendStringToBuffer(Unk_ov065_0227d8e0_Handle *, GPIBuffer *, const char *);
s32 gpiAppendStringToBufferLen(Unk_ov065_0227d8e0_Handle *, GPIBuffer *, const char *, s32);
s32 gpiAppendCharToBuffer(Unk_ov065_0227d8e0_Handle *, GPIBuffer *, char);
s32 gpiSendOrBufferStringLen(Unk_ov065_0227d8e0_Handle *, GPIPeer *, const char *, s32);
s32 gpiSendFromBuffer(Unk_ov065_0227d8e0_Handle *, s32, GPIBuffer *, s32 *, s32, const char *);
s32 gpiCallCallback(Unk_ov065_0227d8e0_Handle *, GPICallbackData *);
s32 gpiAddCallback(Unk_ov065_0227d8e0_Handle *, Unk_ov065_0227e0e8_Wrap, GPICallbackData *, GPIOperation *, s32);
void gpiCallErrorCallback(Unk_ov065_0227d8e0_Handle *, s32, s32);



















}
}

namespace Nb {
extern "C" char __GSIACGamename[];
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

typedef GPIConnectData Req0227;


extern "C" {

s32 strncmp(const char *, const char *, s32);
char *strstr(const char *, const char *);
s32 atol(const char *);
s32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 memcmp(const void *, const void *, s32);
void *memset(void *, s32, s32);
void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
void Util_RandSeed(u32);
s32 Util_RandInt(s32, s32);
void MD5Digest(char *, s32, char *);
void B64Encode(char *, char *, s32, s32);
s32 gpiAppendStringToBuffer(Ctx0227 **, char *, const char *);
s32 gpiAppendIntToBuffer(Ctx0227 **, char *, s32);
void gpiCallErrorCallback(Ctx0227 **, s32, s32);
s32 gpiAddCallback(Ctx0227 **, GPICallback, void *, GPIOperation *, s32);
void randomString(void *, s32);
void gpiFindProfileByUser(Ctx0227 **, char *, char *, u32 **);
void gpiRemoveProfile(Ctx0227 **, GPIProfile *);
void gpiRemoveProfileByID(Ctx0227 **);
u32 *gpiProfileListAdd(Ctx0227 **, s32);
void gpiRemoveOperation(Ctx0227 **, GPIOperation *);
void gpiSetErrorString(Ctx0227 **, const char *);
void gpiSetError(Ctx0227 **, s32, const void *);
s32 gpiCheckSocketConnect(Ctx0227 **, s32, s32 *);
s32 gpiValueForKey(char *, const char *, char *, s32);
s32 gpiCheckForError(Ctx0227 **, char *, s32);
void strzcpy(void *, char *, s32);
s32 gpiSendNewuser(Ctx0227 **, Req0227 *);
s32 gpiSendLogin(Ctx0227 **, Req0227 *);






}
}

namespace Nc {
// ov065_052: DWC/GameSpy GP connection setup helpers (0x0227ee64..0x0227f54c)










typedef GPIConnection Ctx0227;

typedef GPICallback Pair0227;

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

s32 gpiReset(Ctx0227 **);
void gpiSetErrorString(Ctx0227 **, const char *);
void gpiSetError(Ctx0227 **, s32, const char *);
void gpiCallErrorCallback(Ctx0227 **, s32, s32);
void strzcpy(char *, const char *, s32);
void _strlwr(char *);
void *GsUtil_Alloc(s32);
void GsUtil_Free(void *);
char *goastrdup(const char *);
s32 gpiAddOperation(Ctx0227 **, s32, void *, GPIOperation **, s32, s32, s32);
void gpiFailedOpCallback(Ctx0227 **, GPIOperation *);
s32 gpiDisconnect(Ctx0227 **, s32);
s32 gpiProcess(Ctx0227 **, s32);
s32 socket(s32, s32, s32);
s32 bind(s32, void *, s32);
s32 listen(s32, s32);
s32 getsockname(s32, void *, s32 *);
s32 connect(s32, void *, s32);
s32 GOAGetLastError(s32);
s32 SetSockBlocking(s32, s32);
Unk_ov065_0227f00c_Host *Sock_GetHostByName(char *);
s32 gpiGetProfile(Ctx0227 **, s32, GPIProfile **);
void gpiInfoCacheToArg(s32, void *);
s32 gpiRemoveOperation(Ctx0227 **, GPIOperation *);
s32 gpiAddCallback(Ctx0227 **, Pair0227, void *, GPIOperation *, s32);
s32 gpiAppendStringToBuffer(Ctx0227 **, char **, const char *);
s32 gpiAppendIntToBuffer(Ctx0227 **, char **, s32);
s32 gpiSendLocalInfo(Ctx0227 **, const char *, const char *);
s32 gpiSendUserInfo(Ctx0227 **, const char *, const char *);
s32 gpiSetInfoi(Ctx0227 **, s32, s32);

void *memset(void *, s32, u32);
u32 rand(void);
s32 atol(const char *);
s32 STD_GetStringLength(const char *);
char *STD_CopyString(char *, const char *);

s32 gpiSendGetInfo(Ctx0227 **, s32, s32);
s32 gpiStartConnect(Ctx0227 **, GPIOperation *);

#define GP_FAIL(str) \
    { \
        gpiSetError(h, 5, str); \
        gpiCallErrorCallback(h, 3, 1); \
        return 3; \
    }








#define CK_NONEMPTY \
    if (*val == 0) { \
        gpiSetErrorString(h, data_ov065_0228d630); \
        return 2; \
    }


}
}

namespace Nc {
extern "C" {
void randomString(char *buf, s32 n) {
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
s32 gpiStartConnect(Ctx0227 **h, GPIOperation *n) {
    Ctx0227 *ctx = *h;
    Unk_ov065_0227f00c_Sa sa;
    s32 len;
    Unk_ov065_0227f00c_Host *host;
    s32 e;
    u32 *w;
    if (ctx->firewall == 0) {
        ctx->peerSocket = socket(2, 1, 0);
        if (-1 == ctx->peerSocket) GP_FAIL("There was an error creating a socket.")
        if (SetSockBlocking(ctx->peerSocket, 0) == 0) GP_FAIL("There was an error making a socket non-blocking.")
        w = (u32 *)&sa;
        w[0] = 0;
        w[1] = 0;
        sa.family = 2;
        if (bind(ctx->peerSocket, w, 8) == -1) GP_FAIL("There was an error binding a socket.")
        if (listen(ctx->peerSocket, 5) == -1) GP_FAIL("There was an error listening on a socket.")
        len = 8;
        if (getsockname(ctx->peerSocket, &sa, &len) == -1) GP_FAIL("There was an error getting a socket's addres.")
        ctx->peerPort = sa.port;
    } else {
        ctx->peerSocket = -1;
        ctx->peerPort = 0;
    }
    {
        ctx->cmSocket = socket(2, 1, 0);
        if (-1 == ctx->cmSocket) GP_FAIL("There was an error creating a socket.")
    }
    if (SetSockBlocking(ctx->cmSocket, 0) == 0) GP_FAIL("There was an error making a socket non-blocking.")
    host = Sock_GetHostByName(data_ov065_0228d1a4);
    if (host == 0) GP_FAIL("Could not resolve connection mananger host name.")
    w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.family = 2;
    sa.addr = **host->addrList;
    sa.port = 0xcc74;
    if (connect(ctx->cmSocket, &sa, 8) == -1) {
        e = GOAGetLastError(ctx->cmSocket);
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
s32 gpiConnect(Ctx0227 **h, const char *a1, const char *a2, const char *a3, const char *a4, const char *a5,
                        const char *a6, const char *a7, s32 mode, s32 a9, s32 a10, s32 a11, s32 a12) {
    Ctx0227 *ctx = *h;
    GPIConnectData *obj;
    GPIOperation *node;
    s32 r;
    if (ctx->connectState == 4) {
        r = gpiReset(h);
        if (r != 0) {
            return r;
        }
    }
    if (ctx->connectState != 0) {
        gpiSetErrorString(h, "Invalid connection.");
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
        gpiSetErrorString(h, "Invalid firewall.");
        return 2;
    }
    ctx->firewall = 1;
    strzcpy(ctx->nick, a1, 0x1f);
    strzcpy(ctx->uniquenick, a2, 0x15);
    strzcpy(ctx->email, a3, 0x33);
    strzcpy(ctx->password, a4, 0x1f);
    _strlwr(ctx->email);
    obj = (GPIConnectData *)GsUtil_Alloc(0x308);
    if (obj == 0) {
        gpiSetErrorString(h, "Out of memory.");
        return 1;
    }
    memset(obj, 0, 0x308);
    obj->newuser = a9;
    if (*a5 != 0 && *a6 != 0) {
        strzcpy(obj->authtoken, a5, 0x100);
        strzcpy(obj->partnerchallenge, a6, 0x100);
    }
    if (a7 != 0) {
        strzcpy(obj->cdkey, a7, 0x41);
    }
    r = gpiAddOperation(h, 0, obj, &node, a10, a11, a12);
    if (r != 0) {
        return r;
    }
    r = gpiStartConnect(h, node);
    if (r != 0) {
        node->result = r;
        gpiFailedOpCallback(h, node);
        gpiDisconnect(h, 0);
        return r;
    }
    if (node->blocking != 0) {
        r = gpiProcess(h, node->id);
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
s32 gpiSendLogin(Ctx0227 **h, Req0227 *req) {
    Ctx0227 *c = *h;
    u32 *out;
    char b1[0x21];
    char b2[0x200];
    char b3[0x50];
    char *p;
    char *q;
    randomString(req->userChallenge, 0x20);
    if (req->partnerchallenge[0] != 0) {
        p = req->partnerchallenge;
    } else {
        p = c->password;
    }
    MD5Digest(p, STD_GetStringLength(p), req->passwordHash);
    if (req->authtoken[0] != 0) {
        q = req->authtoken;
    } else if (c->uniqueNick[0] != 0) {
        q = c->uniqueNick;
    } else {
        OS_SPrintf(b3, "%s@%s", c->nick, c->email);
        q = b3;
    }
    OS_SPrintf(b2, "%s%s%s%s%s%s", req->passwordHash, "                                                ", q, req->userChallenge, req, req->passwordHash);
    MD5Digest(b2, STD_GetStringLength(b2), b1);
    if (c->infoCaching != 0) {
        gpiFindProfileByUser(h, c->nick, c->email, &out);
        if (out != NULL) {
            c->userId = out[1];
            c->profileId = out[0];
        }
    }
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\login\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\challenge\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, req->userChallenge);
    if (req->authtoken[0] != 0) {
        gpiAppendStringToBuffer(h, c->outputBuffer, "\\authtoken\\");
        gpiAppendStringToBuffer(h, c->outputBuffer, req->authtoken);
    } else if (c->uniqueNick[0] != 0) {
        gpiAppendStringToBuffer(h, c->outputBuffer, "\\uniquenick\\");
        gpiAppendStringToBuffer(h, c->outputBuffer, c->uniqueNick);
    } else {
        gpiAppendStringToBuffer(h, c->outputBuffer, "\\user\\");
        gpiAppendStringToBuffer(h, c->outputBuffer, c->nick);
        gpiAppendStringToBuffer(h, c->outputBuffer, "@");
        gpiAppendStringToBuffer(h, c->outputBuffer, c->email);
    }
    if (c->userId != 0) {
        gpiAppendStringToBuffer(h, c->outputBuffer, "\\userid\\");
        gpiAppendIntToBuffer(h, c->outputBuffer, c->userId);
    }
    if (c->profileId != 0) {
        gpiAppendStringToBuffer(h, c->outputBuffer, "\\profileid\\");
        gpiAppendIntToBuffer(h, c->outputBuffer, c->profileId);
    }
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\response\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, b1);
    if (c->firewall == 1) {
        gpiAppendStringToBuffer(h, c->outputBuffer, "\\firewall\\1");
    }
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\port\\");
    {
        s32 t = (u16)c->peerPort;
        s32 sw = (s16)(u16)(((t >> 8) & 0xff) | ((t << 8) & 0xff00));
        gpiAppendIntToBuffer(h, c->outputBuffer, sw);
    }
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\productid\\");
    gpiAppendIntToBuffer(h, c->outputBuffer, c->productId);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\gamename\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, __GSIACGamename);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\namespaceid\\");
    gpiAppendIntToBuffer(h, c->outputBuffer, c->namespaceId);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\id\\1");
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpiSendNewuser(Ctx0227 **h, Req0227 *req) {
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
    Util_RandSeed(0x79707367);
    i = 0;
    if (i < len) {
        char *p = a1;
        z0 = i;
        do {
            s8 r = Util_RandInt(z0, 0xff);
            *p++ = r ^ c->password[i];
        } while (++i < len);
    }
    a1[i] = 0;
    B64Encode(a1, b1, len, 1);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\newuser\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\email\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, c->email);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\nick\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, c->nick);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\passwordenc\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, b1);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\productid\\");
    gpiAppendIntToBuffer(h, c->outputBuffer, c->productId);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\gamename\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, __GSIACGamename);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\namespaceid\\");
    gpiAppendIntToBuffer(h, c->outputBuffer, c->namespaceId);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\uniquenick\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, c->uniqueNick);
    if (req->cdkey[0] != 0) {
        len = STD_GetStringLength(req->cdkey);
        Util_RandSeed(0x79707367);
        i = 0;
        if (i < len) {
            char *p = a2;
            z1 = i;
            do {
                s8 r = Util_RandInt(z1, 0xff);
                *p++ = r ^ req->cdkey[i];
            } while (++i < len);
        }
        a2[i] = 0;
        B64Encode(a2, b2, len, 1);
        gpiAppendStringToBuffer(h, c->outputBuffer, "\\cdkeyenc\\");
        gpiAppendStringToBuffer(h, c->outputBuffer, b2);
    }
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\id\\1");
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpiProcessConnect(Ctx0227 **h, GPIOperation *n, char *line) {
    Ctx0227 *c = *h;
    Req0227 *req;
    Unk_ov065_0227e0e8_Wrap pr;
    char b1[0x21];
    char b2[0x15];
    char b3[0x200];
    char b4[0x50];
    char *p;
    s32 t;
    if (gpiCheckForError(h, line, 0) != 0) {
        t = c->errorCode;
        if (t == 0x106 && c->profileId != 0) {
            gpiRemoveProfileByID(h);
            c->userId = 0;
            c->profileId = 0;
        } else if (t == 0x201) {
            if (gpiValueForKey(line, "\\pid\\", b3, 0x200) != 0) {
                c->profileId = atol(b3);
            }
        }
        if (strstr(line, "\\fatal\\") != 0) {
            gpiSetError(h, c->errorCode, c);
            gpiCallErrorCallback(h, 4, 1);
            return 4;
        }
        gpiSetError(h, c->errorCode, c);
        gpiCallErrorCallback(h, 4, 0);
        return 4;
    }
    req = (Req0227 *)n->data;
    switch (n->state) {
    case 1:
        if (strncmp(line, "\\lc\\1", 5) != 0) {
            gpiSetError(h, 1, "Unexpected data was received from the server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        if (gpiValueForKey(line, "\\challenge\\", (char *)req, 0x80) == 0) {
            gpiSetError(h, 1, "Unexpected data was received from the server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        if (req->newuser != 0) {
            t = gpiSendNewuser(h, req);
            if (t != 0) {
                return t;
            }
            n->state = 3;
        } else {
            t = gpiSendLogin(h, req);
            if (t != 0) {
                return t;
            }
            n->state = 2;
        }
        break;
    case 3:
        if (strncmp(line, "\\nur\\", 5) != 0) {
            gpiSetError(h, 1, "Unexpected data was received from the server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        if (gpiValueForKey(line, "\\userid\\", b3, 0x200) == 0) {
            gpiSetError(h, 1, "Unexepected data was received from the server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        c->userId = atol(b3);
        if (gpiValueForKey(line, "\\profileid\\", b3, 0x200) == 0) {
            gpiSetError(h, 1, "Unexepected data was received from the server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        c->profileId = atol(b3);
        t = gpiSendLogin(h, req);
        if (t != 0) {
            return t;
        }
        n->state = 2;
        break;
    case 2:
        if (strncmp(line, "\\lc\\2", 5) != 0) {
            gpiSetError(h, 1, "Unexpected data was received from the server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        if (gpiValueForKey(line, "\\sesskey\\", b3, 0x200) == 0) {
            gpiSetError(h, 1, "Unexepected data was received from the server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        c->sessKey = atol(b3);
        if (gpiValueForKey(line, "\\userid\\", b3, 0x200) == 0) {
            gpiSetError(h, 1, "Unexepected data was received from the server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        c->userId = atol(b3);
        if (gpiValueForKey(line, "\\profileid\\", b3, 0x200) == 0) {
            gpiSetError(h, 1, "Unexepected data was received from the server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        c->profileId = atol(b3);
        if (gpiValueForKey(line, "\\uniquenick\\", b2, 0x15) == 0) {
            b2[0] = 0;
        }
        if (gpiValueForKey(line, "\\lt\\", c->loginTicket, 0x19) == 0) {
            c->loginTicket[0] = 0;
        }
        if (req->authtoken[0] != 0) {
            p = req->authtoken;
        } else if (c->uniqueNick[0] != 0) {
            p = c->uniqueNick;
        } else {
            OS_SPrintf(b4, "%s@%s", c->nick, c->email);
            p = b4;
        }
        OS_SPrintf(b3, "%s%s%s%s%s%s", req->passwordHash, "                                                ", p, req, req->userChallenge, req->passwordHash);
        MD5Digest(b3, STD_GetStringLength(b3), b1);
        if (gpiValueForKey(line, "\\proof\\", b3, 0x200) == 0) {
            gpiSetError(h, 1, "Unexepected data was received from the server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        if (memcmp(b1, b3, 0x20) != 0) {
            gpiSetError(h, 0x108, "Could not authenticate server.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
        if (c->infoCaching != 0) {
            u32 *e = gpiProfileListAdd(h, c->profileId);
            e[0] = c->profileId;
            e[1] = c->userId;
        }
        c->connectState = 3;
        pr = n->callback;
        if (pr.p.callback != 0) {
            u32 *q = (u32 *)GsUtil_Alloc(0x20);
            if (q == NULL) {
                gpiSetErrorString(h, "Out of memory.");
                return 1;
            }
            memset(q, 0, 0x20);
            q[1] = c->profileId;
            q[0] = 0;
            strzcpy(q + 2, b2, 0x15);
            t = gpiAddCallback(h, pr.p, q, n, 0);
            if (t != 0) {
                return t;
            }
        }
        gpiRemoveOperation(h, n);
        break;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpiCheckConnect(Ctx0227 **h) {
    Ctx0227 *c = *h;
    s32 out;
    s32 r = gpiCheckSocketConnect(h, c->cmSocket, &out);
    if (r == 0) {
        if (out == 4) {
            gpiSetError(h, 0x107, "The server has refused the connection.");
            gpiCallErrorCallback(h, 4, 1);
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
s32 gpiDisconnectCleanupProfile(Ctx0227 **h, GPIProfile *n) {
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
    if (n->cache == 0 || (c->infoCachingBuddyOnly == 1 && n->buddyStatus == NULL)) {
        gpiRemoveProfile(h, n);
        return 0;
    }
    return 1;
}
}
}

namespace Na {
extern "C" {
s32 gpiDisconnect(Unk_ov065_0227d8e0_Handle *h, s32 a) {
    Unk_ov065_0227d8e0_Ctx *ctx = h->connection;
    s32 st = ctx->connectState;
    s32 out;
    void *p;
    GPICallbackData *n;
    GPICallbackData *cur;
    if (st != 4) {
    if (st != 0) {
        if (a != 0 && st == 3) {
            gpiAppendStringToBuffer(h, &ctx->outputBuffer, "\\logout\\\\sesskey\\");
            gpiAppendIntToBuffer(h, &ctx->outputBuffer, ctx->sessKey);
            gpiAppendStringToBuffer(h, &ctx->outputBuffer, "\\final\\");
        }
        gpiSendFromBuffer(h, ctx->cmSocket, &ctx->outputBuffer, &out, 1, "CM");
        if (ctx->cmSocket != -1) {
            shutdown(ctx->cmSocket, 2);
            closesocket(ctx->cmSocket);
            ctx->cmSocket = -1;
        }
        if (ctx->peerSocket != -1) {
            shutdown(ctx->peerSocket, 2);
            closesocket(ctx->peerSocket);
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
        gpiRemoveOperation(h, ctx->operationList);
    }
    ctx->operationList = NULL;
    n = (GPICallbackData *)ctx->peerList;
    while (n != NULL) {
        cur = n;
        n = *(GPICallbackData **)((u8 *)n + 0x3c);
        gpiDestroyPeer(h, cur);
    }
    ctx->peerList = NULL;
    while (gpiProfileMap(h, (s32)gpiDisconnectCleanupProfile, 0) == 0) {
    }
    }
}
}
}

namespace Na {
extern "C" {
void gpiCallErrorCallback(Unk_ov065_0227d8e0_Handle *h, s32 a, s32 b) {
    Unk_ov065_0227d8e0_Ctx *ctx = h->connection;
    Unk_ov065_0227e0e8_Wrap p;
    GPErrorArg *m;
    if (b == 1) {
        ctx->fatalError = 1;
    }
    p = ctx->callbacks[0];
    if (p.p.callback != 0) {
        m = (GPErrorArg *)GsUtil_Alloc(0x10);
        if (m != NULL) {
            m->result = a;
            m->fatal = b;
            m->errorCode = ctx->errorCode;
            m->errorString = ctx;
        }
        gpiAddCallback(h, p, (GPICallbackData *)m, NULL, 1);
    }
}
}
}
