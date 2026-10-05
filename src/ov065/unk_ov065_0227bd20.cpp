// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/gpi.h"
#include "net/gpiProfile.h"
#include "net/gpiInfo.h"
#include "net/gsPlatformUtil.h"

namespace Nb {
// ov065_047: DWC HTTP/GHI-like API wrappers (0x0227bbf4..0x0227c4b0)








typedef void (*GPCallback)(void *, void *, void *);
extern "C" {
s32 strcmp(const char *, const char *);
s32 strncmp(const char *, const char *, s32);
s32 strcspn(const char *, const char *);
char *strchr(const char *, s32);
s32 atol(const char *);
void *memset(void *, s32, s32);
char *goastrdup(const char *);
void gpiSetErrorString(void *, const char *);
void strzcpy(char *, const char *, s32);
s32 gpiSendBuddyMessage(void *, s32, s32, s32);
s32 gpiDeleteBuddy(void *, s32);
s32 gpiAuthBuddyRequest(void *, s32);
s32 gpiSetInfos(void *, s32, s32);
s32 gpiGetInfo(void *, s32, s32, s32, s32, s32);
s32 gpiProfileSearch(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 gpiAppendStringToBuffer(void *, GPIBuffer *, const char *);
s32 gpiAppendIntToBuffer(void *, GPIBuffer *, s32);
s32 gpiGetProfile(void *, s32, void *);
s32 gpiFindBuddy(void *, s32);
s32 gpiCanFreeProfile(void *);
s32 gpiRemoveProfile(void *, void *);
void GsUtil_Free(void *);
}
}

namespace Nc {
// ov065_048: DWC HTTP/session context (0x0227c538..0x0227ce30)
extern "C" {
extern s32 __GSIACResult;


typedef s32 (*GsGpConnectCallback)(GPConnection *, void *, s32);

void gpiDisconnect(GPConnection *, s32);
void gpiSetErrorString(GPConnection *, const char *);
s32 gpiConnect(GPConnection *, const char *, const char *, const char *, const char *, const char *,
                        const char *, s32, s32, s32, s32, GsGpConnectCallback, s32);
s32 gpiCheckConnect(GPConnection *);
void msleep(s32);
s32 gpiFindOperationByID(GPConnection *, GPIOperation **, s32);
s32 gpiProcessCallbacks(GPConnection *, s32);
s32 gpiProcessPeers(GPConnection *);
s32 gpiProcessSearches(GPConnection *);
void gpiFailedOpCallback(GPConnection *, GPIOperation *);
void gpiRemoveOperation(GPConnection *, GPIOperation *);
void gpiAddLocalInfo(GPConnection *, char **);
s32 gpiSendFromBuffer(GPConnection *, s32, char **, s32 *, s32, const char *);
s32 gpiRecvToBuffer(GPConnection *, s32, char **, s32 *, s32 *, const char *);
void gpiSetError(GPConnection *, s32, const char *);
void gpiCallErrorCallback(GPConnection *, s32, s32);
void gpiDebug(GPConnection *, const char *, ...);
void *GsUtil_Realloc(void *, s32);
s32 gpiCheckForError(GPConnection *, char *, s32);
s32 gpiProcessRecvBuddyMessage(GPConnection *, char *);
s32 gpiOperationsAreBlocking(GPConnection *);
s32 gpiProcessOperation(GPConnection *, GPIOperation *, char *);
void gpiProfileMap(GPConnection *, s32 (*)(GPConnection *, GPIProfile *, s32), s32);
s32 gpiGetProfile(GPConnection *, s32, GPIProfile **);
void gpiAppendStringToBuffer(GPConnection *, char **, const char *);
void gpiAppendIntToBuffer(GPConnection *, char **, s32);
s32 gpiCanFreeProfile(GPIProfile *);
void gpiRemoveProfile(GPConnection *, GPIProfile *);
s32 gpiInitProfiles(GPConnection *);
void SocketStartUp();
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

s32 gpiReset(GPConnection *h);
s32 gpiDestroy(GPConnection *h);
s32 gpiInitialize(GPConnection *h, s32 a, s32 b);
s32 gpiProcess(GPConnection *h, s32 a);
s32 gpiProcessConnectionManager(GPConnection *h);
s32 gpiResetProfile(GPConnection *h, GPIProfile *n, s32 m);
s32 gpiFixBuddyIndices(GPConnection *h, GPIProfile *n, s32 m);
}
}

namespace Nc {
extern "C" {
s32 gpInitialize(GPConnection *h, s32 a, s32 b) {
    if (__GSIACResult != 1) {
        return 2;
    }
    if (h == NULL) {
        return 2;
    }
    return gpiInitialize(h, a, b);
}
}
}

namespace Nc {
extern "C" {
void gpDestroy(GPConnection *h) {
    if (h != NULL && *h != NULL) {
        gpiDestroy(h);
    }
}
}
}

namespace Nc {
extern "C" {
s32 gpProcess(GPConnection *h) {
    GPIConnection *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    return gpiProcess(h, 0);
}
}
}

namespace Nc {
extern "C" {
s32 gpSetCallback(GPConnection *h, s32 i, s32 x, s32 y) {
    GPIConnection *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (i < 0 || i >= 6) {
        gpiSetErrorString(h, "Invalid func.");
        return 2;
    }
    c->callbacks[i].callback = x;
    c->callbacks[i].param = y;
    return 0;
}
}
}

namespace Nc {
extern "C" {
s32 gpConnectPreAuthenticatedA(GPConnection *h, char *a, char *b, s32 c, s32 d, GsGpConnectCallback cb, s32 e) {
    GPIConnection *ctx;
    if (h == NULL || (ctx = *h) == NULL) {
        return 2;
    }
    if (a == NULL || *a == 0) {
        return 2;
    }
    if (b == NULL || *b == 0) {
        return 2;
    }
    if (cb == NULL) {
        gpiSetErrorString(h, "No callback.");
        return 2;
    }
    if (ctx->simulation != 0) {
        s32 z[8] = {0};
        cb(h, z, e);
        return 0;
    }
    return gpiConnect(h, "", "", "",
                               "", a, b, 0, c, 0, d, cb, e);
}
}
}

namespace Nc {
extern "C" {
void gpDisconnect(GPConnection *h) {
    GPIConnection *c;
    if (h != NULL) {
        c = *h;
        if (c != NULL) {
            if (c->simulation == 0) {
                gpiDisconnect(h, 1);
                gpiReset(h);
            }
        }
    }
}
}
}

namespace Nb {
extern "C" {
s32 gpProfileSearchA(GPConnection *h, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, GPCallback cb, void *arg) {
    GPIConnection *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (cb == NULL) {
        gpiSetErrorString(h, "No callback.");
        return 2;
    }
    if (c->simulation != 0) {
        GPProfileSearchResponseArg l = {0, 0, 0, 0};
        l.more = 0x601;
        cb(h, &l, arg);
        return 0;
    }
    return gpiProfileSearch(h, a1, a2, a3, a4, a5, a6, 0, a7, (s32)cb, (s32)arg);
}
}
}

namespace Nb {
extern "C" {
s32 gpGetInfo(GPConnection *h, s32 a1, s32 a2, s32 a3, GPCallback cb, void *arg) {
    GPIConnection *c;
    if (h == NULL || (c = *h) == NULL || a1 == 0) {
        return 2;
    }
    if (cb == NULL) {
        gpiSetErrorString(h, "No callback.");
        return 2;
    }
    if (c->simulation != 0) {
        GPGetInfoResponseArg b = {0};
        cb(h, &b, arg);
        return 0;
    }
    if (c->connectState == 4) {
        gpiSetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    return gpiGetInfo(h, a1, a2, a3, (s32)cb, (s32)arg);
}
}
}

namespace Nb {
extern "C" {
s32 gpSetInfosA(GPConnection *h, s32 a, s32 b) {
    GPIConnection *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        gpiSetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    return gpiSetInfos(h, a, b);
}
}
}

namespace Nb {
extern "C" {
s32 gpSendBuddyRequestA(GPConnection *h, s32 v, const char *s) {
    GPIConnection *c;
    char b[0x401];
    char *p;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        gpiSetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    if (s == NULL) {
        gpiSetErrorString(h, "Invalid reason.");
        return 2;
    }
    strzcpy(b, s, 0x401);
    if (b[0] != 0) {
        p = b;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\addbuddy\\");
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\sesskey\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, c->sessKey);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\newprofileid\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, v);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\reason\\");
    gpiAppendStringToBuffer(h, &c->outputBuffer, b);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpAuthBuddyRequest(GPConnection *h, s32 a) {
    GPIConnection *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        gpiSetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    return gpiAuthBuddyRequest(h, a);
}
}
}

namespace Nb {
extern "C" {
s32 gpDenyBuddyRequest(GPConnection *h, s32 a) {
    GPIConnection *c;
    GPIProfile *e;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        gpiSetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    if (gpiGetProfile(h, a, &e) == 0) {
        return 0;
    }
    e->requestCount--;
    if (c->infoCaching == 0 && e->requestCount <= 0) {
        GsUtil_Free(e->authSig);
        e->authSig = 0;
        if (gpiCanFreeProfile(e) != 0) {
            gpiRemoveProfile(h, e);
        }
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpGetNumBuddies(GPConnection *h, s32 *out) {
    GPIConnection *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        *out = 0;
        return 0;
    }
    *out = c->numBuddies;
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpGetBuddyStatus(GPConnection *h, s32 idx, GPBuddyStatus *out) {
    GPIConnection *c;
    GPIProfile *ent;
    GPIBuddyStatus *s;
    s32 n;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        memset(out, 0, 0x210);
        return 0;
    }
    if (out == NULL) {
        gpiSetErrorString(h, "Invalid status.");
        return 2;
    }
    n = c->numBuddies;
    if (idx < 0 || idx >= n) {
        gpiSetErrorString(h, "Invalid index.");
        return 2;
    }
    ent = (GPIProfile *)gpiFindBuddy(h, idx);
    if (ent == NULL) {
        gpiSetErrorString(h, "Invalid index.");
        return 2;
    }
    s = ent->buddyStatus;
    out->profile = ent->profileId;
    out->status = s->status;
    if (s->statusString != NULL) {
        strzcpy(out->statusString, s->statusString, 0x100);
    } else {
        *s->statusString = 0;
    }
    if (s->locationString != NULL) {
        strzcpy(out->locationString, s->locationString, 0x100);
    } else {
        *s->locationString = 0;
    }
    out->ip = s->ip;
    out->port = s->port;
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpGetBuddyIndex(GPConnection *h, s32 a, s32 *out) {
    GPIConnection *c;
    GPIProfile *e;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        *out = 0;
        return 0;
    }
    if (gpiGetProfile(h, a, &e) != 0 && e->buddyStatus != 0) {
        *out = e->buddyStatus->buddyIndex;
    } else {
        *out = -1;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpIsBuddy(GPConnection *h, s32 a) {
    GPIConnection *c;
    GPIProfile *e;
    if (h == NULL || (c = *h) == NULL) {
        return 0;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (gpiGetProfile(h, a, &e) != 0 && e->buddyStatus != 0) {
        return 1;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpDeleteBuddy(GPConnection *h, s32 a) {
    GPIConnection *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        gpiSetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    if (gpiDeleteBuddy(h, a) == 0) {
        return 0;
    }
}
}
}

namespace Nb {
extern "C" {
s32 gpSetStatusA(GPConnection *h, s32 v, const char *s1, const char *s2) {
    GPIConnection *c;
    char b1[0x100];
    char b2[0x100];
    char *p;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        gpiSetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    if (s1 == NULL) {
        gpiSetErrorString(h, "Invalid statusString.");
        return 2;
    }
    if (s2 == NULL) {
        gpiSetErrorString(h, "Invalid locationString.");
        return 2;
    }
    strzcpy(b1, s1, 0x100);
    if (b1[0] != 0) {
        p = b1;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    strzcpy(b2, s2, 0x100);
    if (b2[0] != 0) {
        p = b2;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    if (v == c->lastStatus && strcmp(b1, c->lastStatusString) == 0 && strcmp(b2, c->lastLocationString) == 0) {
        return 0;
    }
    c->lastStatus = v;
    strzcpy(c->lastStatusString, b1, 0x100);
    strzcpy(c->lastLocationString, b2, 0x100);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\status\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, v);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\sesskey\\");
    gpiAppendIntToBuffer(h, &c->outputBuffer, c->sessKey);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\statstring\\");
    gpiAppendStringToBuffer(h, &c->outputBuffer, b1);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\locstring\\");
    gpiAppendStringToBuffer(h, &c->outputBuffer, b2);
    gpiAppendStringToBuffer(h, &c->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpSendBuddyMessageA(GPConnection *h, s32 a, s32 b) {
    GPIConnection *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        gpiSetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    if (b == 0) {
        gpiSetErrorString(h, "Invalid message.");
        return 2;
    }
    return gpiSendBuddyMessage(h, a, 1, b);
}
}
}

// Not in the original binary: unreferenced weak function compiled right after gpSendBuddyMessageA, so that the four
// shared literals are pooled first as in the original; removed by the dead-stripping link (see notes.txt).
namespace Nb {
extern "C" {
__declspec(weak) void Unk_ov065_0227bd20_pool_order(void) {
    gpiSetErrorString(0, "The connection has already been disconnected.");
    gpiSetErrorString(0, "\\sesskey\\");
    gpiSetErrorString(0, "\\final\\");
    gpiSetErrorString(0, "No callback.");
}
}
}
