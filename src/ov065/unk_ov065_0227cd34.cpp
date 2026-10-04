// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/gpiProfile.h"
#include "net/gpiOperation.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/gpi.h"
#include "net/gpiPeer.h"
#include "net/gp.h"

namespace Nc {
// ov065_048: DWC HTTP/session context (0x0227c538..0x0227ce30)





typedef GPIConnection Ctx0227;
extern "C" {
extern s32 __GSIACResult;


typedef s32 (*GsGpConnectCallback)(Ctx0227 **, void *, s32);

void gpiDisconnect(Ctx0227 **, s32);
void gpiSetErrorString(Ctx0227 **, const char *);
s32 gpiConnect(Ctx0227 **, const char *, const char *, const char *, const char *, const char *,
                        const char *, s32, s32, s32, s32, GsGpConnectCallback, s32);
s32 gpiCheckConnect(Ctx0227 **);
void msleep(s32);
s32 gpiFindOperationByID(Ctx0227 **, GPIOperation **, s32);
s32 gpiProcessCallbacks(Ctx0227 **, s32);
s32 gpiProcessPeers(Ctx0227 **);
s32 gpiProcessSearches(Ctx0227 **);
void gpiFailedOpCallback(Ctx0227 **, GPIOperation *);
void gpiRemoveOperation(Ctx0227 **, GPIOperation *);
void gpiAddLocalInfo(Ctx0227 **, char **);
s32 gpiSendFromBuffer(Ctx0227 **, s32, char **, s32 *, s32, const char *);
s32 gpiRecvToBuffer(Ctx0227 **, s32, char **, s32 *, s32 *, const char *);
void gpiSetError(Ctx0227 **, s32, const char *);
void gpiCallErrorCallback(Ctx0227 **, s32, s32);
void gpiDebug(Ctx0227 **, const char *, ...);
void *GsUtil_Realloc(void *, s32);
s32 gpiCheckForError(Ctx0227 **, char *, s32);
s32 gpiProcessRecvBuddyMessage(Ctx0227 **, char *);
s32 gpiOperationsAreBlocking(Ctx0227 **);
s32 gpiProcessOperation(Ctx0227 **, GPIOperation *, char *);
void gpiProfileMap(Ctx0227 **, s32 (*)(Ctx0227 **, GPIProfile *, s32), s32);
s32 gpiGetProfile(Ctx0227 **, s32, GPIProfile **);
void gpiAppendStringToBuffer(Ctx0227 **, char **, const char *);
void gpiAppendIntToBuffer(Ctx0227 **, char **, s32);
s32 gpiCanFreeProfile(GPIProfile *);
void gpiRemoveProfile(Ctx0227 **, GPIProfile *);
s32 gpiInitProfiles(Ctx0227 **);
void SocketStartUp();
void current_time();
void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
void TableFree(void *);

char *strstr(const char *, const char *);
void memcpy(void *, const void *, s32);
void memmove(void *, void *, u32);
s32 atol(const char *);
s32 strncmp(const char *, const char *, u32);
void memset(void *, s32, u32);
void srand();

s32 gpiReset(Ctx0227 **h);
s32 gpiDestroy(Ctx0227 **h);
s32 gpiInitialize(Ctx0227 **h, s32 a, s32 b);
s32 gpiProcess(Ctx0227 **h, s32 a);
s32 gpiProcessConnectionManager(Ctx0227 **h);
s32 gpiResetProfile(Ctx0227 **h, GPIProfile *n, s32 m);
s32 gpiFixBuddyIndices(Ctx0227 **h, GPIProfile *n, s32 m);
}
}

namespace Nd {
// ov065_049: DWC HTTP request setup (0x0227ce44..0x0227d8e0)





typedef GPIConnection Ctx0227;
extern "C" {
s32 gpiGetProfile(Ctx0227 **, s32, GPIProfile **);
void gpiSetErrorString(Ctx0227 **, const char *);
s32 gpiSendAuthBuddyRequest(Ctx0227 **, GPIProfile *);
void GsUtil_Free(void *);
s32 gpiCanFreeProfile(GPIProfile *);
void gpiRemoveProfile(Ctx0227 **, GPIProfile *);
s32 gpiGetPeerByProfile(Ctx0227 **);
s32 gpiAddPeer(Ctx0227 **, s32, s32);
s32 gpiPeerGetSig(Ctx0227 **, s32);
s32 gpiPeerStartConnect(Ctx0227 **, s32);
s32 gpiPeerAddMessage(Ctx0227 **, s32, s32, s32);
void strzcpy(char *, const char *, s32);
void gpiAppendStringToBuffer(Ctx0227 **, char **, const char *);
void gpiAppendIntToBuffer(Ctx0227 **, char **, s32);
s32 gpiValueForKey(const char *, const char *, char *, s32);
void gpiSetError(Ctx0227 **, s32, const char *);
void gpiCallErrorCallback(Ctx0227 **, s32, s32);
s32 time(s32);
void *GsUtil_Alloc(s32);
char *goastrdup(const char *);
s32 gpiAddCallback(Ctx0227 **, GPICallback, void *, s32, s32);
GPIProfile *gpiProfileListAdd(Ctx0227 **, s32);

s32 atol(const char *);
s32 STD_GetStringLength(const char *);
char *STD_CopyString(char *, const char *);
char *strstr(const char *, const char *);

s32 gpiSendServerBuddyMessage(Ctx0227 **h, s32 a, s32 b, const char *s);
s32 gpiSendBuddyMessage(Ctx0227 **h, s32 id, s32 b, s32 t);
}
}

namespace Nf {
// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)














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

namespace Nf {
extern "C" {
s32 gpiSendAuthBuddyRequest(Unk_ov065_0227d8e0_Handle *h, GPIProfile *a) {
    Unk_ov065_0227d8e0_Ctx *c = h->connection;
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\authadd\\");
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\sesskey\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, c->sessKey);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\fromprofileid\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, *(s32 *)a);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\sig\\");
    gpiAppendStringToBuffer(h, &c->outputBuffer, a->authSig);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Nd {

#define SWAP32(x) ((((x) << 24) & 0xff000000) | ((((x) << 8) & 0xff0000) | ((((x) >> 24) & 0xff) | (((x) >> 8) & 0xff00))))

static inline u16 Swap16(u16 x) {
    return (u16)(((x >> 8) & 0xff) | ((x << 8) & 0xff00));
}

#define ERR3() \
    do { \
        gpiSetError(h, 1, "Unexpected data was received from the server."); \
        gpiCallErrorCallback(h, 3, 1); \
        return 3; \
    } while (0)

#define ERR1() \
    do { \
        gpiSetErrorString(h, "Out of memory."); \
        return 1; \
    } while (0)
extern "C" {
s32 gpiProcessRecvBuddyMessage(Ctx0227 **h, const char *s) {
    Ctx0227 *c = *h;
    s32 code;
    s32 v;
    s32 w;
    Unk_ov065_0227e0e8_Wrap p;
    Unk_ov065_0227e0e8_Wrap p4;
    Unk_ov065_0227e0e8_Wrap p3;
    Unk_ov065_0227e0e8_Wrap p2;
    char tmp[0x10];
    char buf[0x1000];
    char buf3[0x100];

    if (gpiValueForKey(s, "\\bm\\", buf, 0x1000) == 0) {
        ERR3();
    }
    code = atol(buf);
    if (gpiValueForKey(s, "\\f\\", buf, 0x1000) == 0) {
        ERR3();
    }
    v = atol(buf);
    if (gpiValueForKey(s, "\\date\\", buf, 0x1000) != 0) {
        w = atol(buf);
    } else {
        w = time(0);
    }
    switch (code) {
    case 1: {
        GPRecvBuddyMessageArg *r5;
        p = *(Unk_ov065_0227e0e8_Wrap *)&c->callbacks[3];
        if (p.p.callback == 0) {
            break;
        }
        r5 = (GPRecvBuddyMessageArg *)GsUtil_Alloc(0xc);
        if (r5 == NULL) {
            ERR1();
        }
        if (gpiValueForKey(s, "\\msg\\", buf, 0x1000) == 0) {
            ERR3();
        }
        r5->message = (char *)GsUtil_Alloc(STD_GetStringLength(buf) + 1);
        if (r5->message == NULL) {
            ERR1();
        }
        STD_CopyString(r5->message, buf);
        r5->profile = v;
        r5->date = w;
        {
            s32 r = gpiAddCallback(h, p.p, r5, 0, 2);
            if (r != 0) {
                return r;
            }
        }
        break;
    }
    case 2: {
        GPIProfile *n;
        char *t;
        n = gpiProfileListAdd(h, v);
        if (n == NULL) {
            ERR1();
        }
        if (gpiValueForKey(s, "\\msg\\", buf, 0x1000) == 0) {
            ERR3();
        }
        t = strstr(buf, "|signed|");
        if (t == NULL) {
            ERR3();
        }
        *t = 0;
        if (STD_GetStringLength(t + 8) != 0x20) {
            ERR3();
        }
        GsUtil_Free(n->authSig);
        n->authSig = 0;
        n->authSig = goastrdup(t + 8);
        n->requestCount = n->requestCount + 1;
        p2 = *(Unk_ov065_0227e0e8_Wrap *)&c->callbacks[1];
        if (p2.p.callback == 0) {
            break;
        }
        {
            GPRecvBuddyRequestArg *r5 = (GPRecvBuddyRequestArg *)GsUtil_Alloc(0x40c);
            if (r5 == NULL) {
                ERR1();
            }
            strzcpy(r5->reason, buf, 0x401);
            r5->profile = v;
            r5->date = w;
            {
                s32 r = gpiAddCallback(h, p2.p, r5, 0, 6);
                if (r != 0) {
                    return r;
                }
            }
        }
        break;
    }
    case 100: {
        GPIProfile *n;
        GPIBuddyStatus *r5;
        n = gpiProfileListAdd(h, v);
        if (n == NULL) {
            ERR1();
        }
        if (n->buddyStatus == NULL) {
            u8 *q;
            u8 *k;
            n->buddyStatus = (GPIBuddyStatus *)GsUtil_Alloc(0x18);
            if (n->buddyStatus == NULL) {
                ERR1();
            }
            q = (u8 *)n->buddyStatus;
            k = (u8 *)0x18;
            do {
                *q++ = 0;
                k--;
            } while (k != NULL);
            {
                s32 *cnt = &c->numBuddies;
                s32 o = *cnt;
                *cnt = o + 1;
                n->buddyStatus->buddyIndex = o;
            }
        }
        r5 = n->buddyStatus;
        if (gpiValueForKey(s, "\\msg\\", buf, 0x1000) == 0) {
            ERR3();
        }
        if (gpiValueForKey(buf, "|s|", tmp, 0x10) == 0) {
            ERR3();
        }
        r5->status = atol(tmp);
        GsUtil_Free(r5->statusString);
        r5->statusString = NULL;
        if (gpiValueForKey(buf, "|ss|", buf3, 0x100) == 0) {
            buf3[0] = 0;
        }
        r5->statusString = goastrdup(buf3);
        if (r5->statusString == NULL) {
            ERR1();
        }
        GsUtil_Free(r5->locationString);
        r5->locationString = NULL;
        if (gpiValueForKey(buf, "|ls|", buf3, 0x100) == 0) {
            buf3[0] = 0;
        }
        r5->locationString = goastrdup(buf3);
        if (r5->locationString == NULL) {
            ERR1();
        }
        if (gpiValueForKey(buf, "|ip|", tmp, 0x10) == 0) {
            r5->ip = 0;
        } else {
            r5->ip = SWAP32((u32)atol(tmp));
        }
        if (gpiValueForKey(buf, "|p|", tmp, 0x10) == 0) {
            r5->port = 0;
        } else {
            r5->port = Swap16(atol(tmp));
        }
        p3 = *(Unk_ov065_0227e0e8_Wrap *)&c->callbacks[2];
        if (p3.p.callback == 0) {
            break;
        }
        {
            GPRecvBuddyStatusArg *m = (GPRecvBuddyStatusArg *)GsUtil_Alloc(0xc);
            if (m == NULL) {
                ERR1();
            }
            m->profile = v;
            m->index = r5->buddyIndex;
            m->date = w;
            {
                s32 r = gpiAddCallback(h, p3.p, m, 0, 5);
                if (r != 0) {
                    return r;
                }
            }
        }
        break;
    }
    case 101: {
        char *t;
        char *t2;
        s32 q;
        GPRecvGameInviteArg *r5;
        if (gpiValueForKey(s, "\\msg\\", buf, 0x1000) == 0) {
            ERR3();
        }
        t = strstr(buf, "|p|");
        if (t == NULL) {
            ERR3();
        }
        if (t[3] == 0) {
            ERR3();
        }
        q = atol(t + 3);
        t2 = strstr(buf, "|l|");
        if (t2 != NULL) {
            strzcpy(buf3, t2 + 3, 0x100);
        } else {
            buf3[0] = 0;
        }
        p4 = *(Unk_ov065_0227e0e8_Wrap *)&c->callbacks[4];
        if (p4.p.callback == 0) {
            break;
        }
        r5 = (GPRecvGameInviteArg *)GsUtil_Alloc(0x108);
        if (r5 == NULL) {
            ERR1();
        }
        r5->profile = v;
        r5->productID = q;
        STD_CopyString(r5->location, buf3);
        {
            s32 r = gpiAddCallback(h, p4.p, r5, 0, 0);
            if (r != 0) {
                return r;
            }
        }
        break;
    }
    case 102:
        if (gpiValueForKey(s, "\\msg\\", buf, 0x1000) == 0) {
            ERR3();
        }
        gpiSendBuddyMessage(h, v, 0x67, (s32)"1");
        break;
    }
    return 0;
}
}
}

namespace Nd {
extern "C" {
s32 gpiSendServerBuddyMessage(Ctx0227 **h, s32 a, s32 b, const char *s) {
    Ctx0227 *c = *h;
    char buf[0xdad];
    strzcpy(buf, s, 0xdad);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\bm\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, b);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\sesskey\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, c->sessKey);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\t\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, a);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\msg\\");
    gpiAppendStringToBuffer(h, &c->outputBuffer, buf);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Nd {
extern "C" {
s32 gpiSendBuddyMessage(Ctx0227 **h, s32 id, s32 b, s32 t) {
    GPIProfile *n;
    s32 r6;
    r6 = gpiGetPeerByProfile(h);
    if (r6 == 0) {
        if (!(gpiGetProfile(h, id, &n) != 0 && n->buddyStatus != NULL && n->buddyStatus->port != 0)) {
            return gpiSendServerBuddyMessage(h, id, b, (const char *)t);
        }
        r6 = gpiAddPeer(h, id, 1);
        if (r6 == 0) {
            return 1;
        }
        if (n->peerSig == 0) {
            s32 q = gpiPeerGetSig(h, r6);
            if (q != 0) {
                return q;
            }
        } else {
            s32 q = gpiPeerStartConnect(h, r6);
            if (q != 0) {
                return q;
            }
        }
    }
    {
        s32 r = gpiPeerAddMessage(h, r6, b, t);
        if (r != 0) {
            return r;
        }
        return 0;
    }
}
}
}

namespace Nd {
extern "C" {
s32 gpiAuthBuddyRequest(Ctx0227 **h, s32 id) {
    Ctx0227 *c = *h;
    GPIProfile *n;
    s32 r;
    if (gpiGetProfile(h, id, &n) == 0) {
        gpiSetErrorString(h, "Invalid profile.");
        return 2;
    }
    if (n->authSig == 0) {
        gpiSetErrorString(h, "Invalid profile.");
        return 2;
    }
    r = gpiSendAuthBuddyRequest(h, n);
    if (r != 0) {
        return r;
    }
    n->requestCount = n->requestCount - 1;
    if (c->infoCaching == 0) {
        if (n->requestCount <= 0) {
            GsUtil_Free(n->authSig);
            n->authSig = 0;
            if (gpiCanFreeProfile(n) != 0) {
                gpiRemoveProfile(h, n);
            }
        }
    }
    return 0;
}
}
}

namespace Nc {
extern "C" {
s32 gpiFixBuddyIndices(Ctx0227 **h, GPIProfile *n, s32 m) {
    GPIBuddyStatus *s = n->buddyStatus;
    if (s != NULL) {
        if (s->buddyIndex > m) {
            s->buddyIndex = s->buddyIndex - 1;
        }
    }
    return 1;
}
}
}

namespace Nc {
extern "C" {
s32 gpiDeleteBuddy(Ctx0227 **h, s32 x) {
    Ctx0227 *c = *h;
    GPIProfile *n;
    if (gpiGetProfile(h, x, &n) == 0) {
        gpiSetErrorString(h, "Invalid profile.");
        return 2;
    }
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\delbuddy\\");
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\sesskey\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, c->sessKey);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\delprofileid\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, n->profileId);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\final\\");
    if (n->buddyStatus != NULL) {
        s32 r6 = n->buddyStatus->buddyIndex;
        GsUtil_Free(n->buddyStatus->statusString);
        n->buddyStatus->statusString = 0;
        GsUtil_Free(n->buddyStatus->locationString);
        n->buddyStatus->locationString = 0;
        GsUtil_Free(n->buddyStatus);
        n->buddyStatus = 0;
        if (gpiCanFreeProfile(n) != 0) {
            gpiRemoveProfile(h, n);
        }
        c->numBuddies = c->numBuddies - 1;
        gpiProfileMap(h, gpiFixBuddyIndices, r6);
    }
    return 0;
}
}
}
