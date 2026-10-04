// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/Unk_ov065_0227bd20_Ctx.h"
#include "net/Unk_ov065_0227c538_Node.h"
#include "net/gpi.h"

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
s32 gpiAppendStringToBuffer(void *, char *, const char *);
s32 gpiAppendIntToBuffer(void *, char *, s32);
s32 gpiGetProfile(void *, s32, void *);
s32 gpiFindBuddy(void *, s32);
s32 gpiCanFreeProfile(void *);
s32 gpiRemoveProfile(void *, void *);
void GsUtil_Free(void *);
}
}

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
s32 gpiFindOperationByID(Ctx0227 **, Unk_ov065_0227c538_Node **, s32);
s32 gpiProcessCallbacks(Ctx0227 **, s32);
s32 gpiProcessPeers(Ctx0227 **);
s32 gpiProcessSearches(Ctx0227 **);
void gpiFailedOpCallback(Ctx0227 **, Unk_ov065_0227c538_Node *);
void gpiRemoveOperation(Ctx0227 **, Unk_ov065_0227c538_Node *);
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
s32 gpiProcessOperation(Ctx0227 **, Unk_ov065_0227c538_Node *, char *);
void gpiProfileMap(Ctx0227 **, s32 (*)(Ctx0227 **, Unk_ov065_0227c538_Node *, s32), s32);
s32 gpiGetProfile(Ctx0227 **, s32, Unk_ov065_0227c538_Node **);
void gpiAppendStringToBuffer(Ctx0227 **, char **, const char *);
void gpiAppendIntToBuffer(Ctx0227 **, char **, s32);
s32 gpiCanFreeProfile(Unk_ov065_0227c538_Node *);
void gpiRemoveProfile(Ctx0227 **, Unk_ov065_0227c538_Node *);
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
s32 gpiResetProfile(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
s32 gpiFixBuddyIndices(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
}
}

namespace Nc {
extern "C" {
s32 gpInitialize(Ctx0227 **h, s32 a, s32 b) {
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
void gpDestroy(Ctx0227 **h) {
    if (h != NULL && *h != NULL) {
        gpiDestroy(h);
    }
}
}
}

namespace Nc {
extern "C" {
s32 gpProcess(Ctx0227 **h) {
    Ctx0227 *c;
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
s32 gpSetCallback(Ctx0227 **h, s32 i, s32 x, s32 y) {
    Ctx0227 *c;
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
s32 gpConnectPreAuthenticatedA(Ctx0227 **h, char *a, char *b, s32 c, s32 d, GsGpConnectCallback cb, s32 e) {
    Ctx0227 *ctx;
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
void gpDisconnect(Ctx0227 **h) {
    Ctx0227 *c;
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
s32 gpProfileSearchA(Unk_ov065_0227bd20_Handle *h, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, GPCallback cb, void *arg) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
        return 2;
    }
    if (cb == NULL) {
        gpiSetErrorString(h, "No callback.");
        return 2;
    }
    if (c->simulation != 0) {
        Unk_ov065_0227c4b0_Args l = {{0, 0, 0, 0}};
        l.v[2] = 0x601;
        cb(h, &l, arg);
        return 0;
    }
    return gpiProfileSearch(h, a1, a2, a3, a4, a5, a6, 0, a7, (s32)cb, (s32)arg);
}
}
}

namespace Nb {
extern "C" {
s32 gpGetInfo(Unk_ov065_0227bd20_Handle *h, s32 a1, s32 a2, s32 a3, GPCallback cb, void *arg) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL || a1 == 0) {
        return 2;
    }
    if (cb == NULL) {
        gpiSetErrorString(h, "No callback.");
        return 2;
    }
    if (c->simulation != 0) {
        Unk_ov065_0227c400_Buf b = {{0}};
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
s32 gpSetInfosA(Unk_ov065_0227bd20_Handle *h, s32 a, s32 b) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
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
s32 gpSendBuddyRequestA(Unk_ov065_0227bd20_Handle *h, s32 v, const char *s) {
    Unk_ov065_0227bd20_Ctx *c;
    char b[0x401];
    char *p;
    if (h == NULL || (c = h->connection) == NULL) {
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
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\addbuddy\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\sesskey\\");
    gpiAppendIntToBuffer(h, c->outputBuffer, c->sessKey);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\newprofileid\\");
    gpiAppendIntToBuffer(h, c->outputBuffer, v);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\reason\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, b);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpAuthBuddyRequest(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
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
s32 gpDenyBuddyRequest(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 *e;
    if (h == NULL || (c = h->connection) == NULL) {
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
    e[5]--;
    if (c->infoCaching == 0 && e[5] <= 0) {
        GsUtil_Free((void *)e[4]);
        e[4] = 0;
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
s32 gpGetNumBuddies(Unk_ov065_0227bd20_Handle *h, s32 *out) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
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
s32 gpGetBuddyStatus(Unk_ov065_0227bd20_Handle *h, s32 idx, Unk_ov065_0227c05c_Out *out) {
    Unk_ov065_0227bd20_Ctx *c;
    Unk_ov065_0227c05c_Ent *ent;
    GPIBuddyStatus *s;
    s32 n;
    if (h == NULL || (c = h->connection) == NULL) {
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
    ent = (Unk_ov065_0227c05c_Ent *)gpiFindBuddy(h, idx);
    if (ent == NULL) {
        gpiSetErrorString(h, "Invalid index.");
        return 2;
    }
    s = ent->buddyStatus;
    out->profileId = ent->profileId;
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
s32 gpGetBuddyIndex(Unk_ov065_0227bd20_Handle *h, s32 a, s32 *out) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 **e;
    if (h == NULL || (c = h->connection) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        *out = 0;
        return 0;
    }
    if (gpiGetProfile(h, a, &e) != 0 && e[2] != 0) {
        *out = *e[2];
    } else {
        *out = -1;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpIsBuddy(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 **e;
    if (h == NULL || (c = h->connection) == NULL) {
        return 0;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (gpiGetProfile(h, a, &e) != 0 && e[2] != 0) {
        return 1;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpDeleteBuddy(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
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
s32 gpSetStatusA(Unk_ov065_0227bd20_Handle *h, s32 v, const char *s1, const char *s2) {
    Unk_ov065_0227bd20_Ctx *c;
    char b1[0x100];
    char b2[0x100];
    char *p;
    if (h == NULL || (c = h->connection) == NULL) {
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
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\status\\");
    gpiAppendIntToBuffer(h, c->outputBuffer, v);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\sesskey\\");
    gpiAppendIntToBuffer(h, c->outputBuffer, c->sessKey);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\statstring\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, b1);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\locstring\\");
    gpiAppendStringToBuffer(h, c->outputBuffer, b2);
    gpiAppendStringToBuffer(h, c->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpSendBuddyMessageA(Unk_ov065_0227bd20_Handle *h, s32 a, s32 b) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
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
