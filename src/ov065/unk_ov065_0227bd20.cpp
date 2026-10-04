// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/Unk_ov065_0227bd20_Ctx.h"
#include "net/Unk_ov065_0227c538_Node.h"
#include "net/Unk_ov065_0227c538_Ctx.h"

namespace Nb {
// ov065_047: DWC HTTP/GHI-like API wrappers (0x0227bbf4..0x0227c4b0)








typedef void (*Unk_ov065_0227c400_Cb)(void *, void *, void *);
extern "C" {
s32 strcmp(const char *, const char *);
s32 strncmp(const char *, const char *, s32);
s32 strspn(const char *, const char *);
char *func_0212a120(const char *, s32);
s32 func_0212b770(const char *);
void *func_0212899c(void *, s32, s32);
char *GsUtil_StrDup(const char *);
void GsGp_SetErrorString(void *, const char *);
void GsUtil_StrCopyN(char *, const char *, s32);
s32 GsGp_SendBuddyMessageEx(void *, s32, s32, s32);
s32 GsGp_SendDeleteBuddy(void *, s32);
s32 GsGp_AuthorizeBuddy(void *, s32);
s32 GsGp_SetInfoString(void *, s32, s32);
s32 GsGp_RequestProfileInfo(void *, s32, s32, s32, s32, s32);
s32 GsGpSearch_ProfileSearch(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 GsGpBuf_AppendString(void *, char *, const char *);
s32 GsGpBuf_AppendInt(void *, char *, s32);
s32 GsGpProfile_Find(void *, s32, void *);
s32 GsGpProfile_FindByBuddyIndex(void *, s32);
s32 GsGpProfile_IsUnused(void *);
s32 GsGpProfile_Remove(void *, void *);
void GsUtil_Free(void *);
}
}

namespace Nc {
// ov065_048: DWC HTTP/session context (0x0227c538..0x0227ce30)





typedef Unk_ov065_0227c538_Ctx Ctx0227;
extern "C" {
extern s32 sGsAvailStatus;


typedef s32 (*Unk_ov065_0227c564_Fn)(Ctx0227 **, void *, s32);

void GsGp_CloseConnection(Ctx0227 **, s32);
void GsGp_SetErrorString(Ctx0227 **, const char *);
s32 GsGp_Connect(Ctx0227 **, const char *, const char *, const char *, const char *, const char *,
                        const char *, s32, s32, s32, s32, Unk_ov065_0227c564_Fn, s32);
s32 GsGp_CheckConnected(Ctx0227 **);
void GsUtil_Sleep(s32);
s32 GsGp_FindOperation(Ctx0227 **, Unk_ov065_0227c538_Node **, s32);
s32 GsGp_CallPendingCallbacks(Ctx0227 **, s32);
s32 GsGpPeer_ProcessAll(Ctx0227 **);
s32 GsGpSearch_ProcessAll(Ctx0227 **);
void GsGp_CallFailedCallback(Ctx0227 **, Unk_ov065_0227c538_Node *);
void GsGp_RemoveOperation(Ctx0227 **, Unk_ov065_0227c538_Node *);
void GsGp_FlushInfoUpdates(Ctx0227 **, char **);
s32 GsGp_SendBuffer(Ctx0227 **, s32, char **, s32 *, s32, const char *);
s32 GsGp_RecvToBuffer(Ctx0227 **, s32, char **, s32 *, s32 *, const char *);
void GsGp_SetError(Ctx0227 **, s32, const char *);
void GsGp_CallErrorCallback(Ctx0227 **, s32, s32);
void GsGp_DebugLog(Ctx0227 **, const char *, ...);
void *GsUtil_Realloc(void *, s32);
s32 GsGp_CheckServerError(Ctx0227 **, char *, s32);
s32 GsGp_ProcessBuddyMessage(Ctx0227 **, char *);
s32 GsGp_HasBlockingOperation(Ctx0227 **);
s32 gpiProcessOperation(Ctx0227 **, Unk_ov065_0227c538_Node *, char *);
void GsGpProfile_FindIf(Ctx0227 **, s32 (*)(Ctx0227 **, Unk_ov065_0227c538_Node *, s32), s32);
s32 GsGpProfile_Find(Ctx0227 **, s32, Unk_ov065_0227c538_Node **);
void GsGpBuf_AppendString(Ctx0227 **, char **, const char *);
void GsGpBuf_AppendInt(Ctx0227 **, char **, s32);
s32 GsGpProfile_IsUnused(Unk_ov065_0227c538_Node *);
void GsGpProfile_Remove(Ctx0227 **, Unk_ov065_0227c538_Node *);
s32 GsGpProfile_InitTable(Ctx0227 **);
void GsSock_StartupStub();
void GsUtil_GetTimeMs();
void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
void GsHash_Free(void *);

char *func_02129f1c(const char *, const char *);
void memcpy(void *, const void *, s32);
void memmove(void *, void *, u32);
s32 func_0212b770(const char *);
s32 strncmp(const char *, const char *, u32);
void func_0212899c(void *, s32, u32);
void srand();

s32 GsGp_ResetConnection(Ctx0227 **h);
s32 GsGp_DestroyConnection(Ctx0227 **h);
s32 gpiInitialize(Ctx0227 **h, s32 a, s32 b);
s32 GsGp_ProcessConnection(Ctx0227 **h, s32 a);
s32 GsGp_ProcessCmMessages(Ctx0227 **h);
s32 GsGp_ClearProfileCb(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
s32 GsGp_FixBuddyIndexCb(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
}
}

namespace Nc {
extern "C" {
s32 GsGp_Initialize(Ctx0227 **h, s32 a, s32 b) {
    if (sGsAvailStatus != 1) {
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
void GsGp_Destroy(Ctx0227 **h) {
    if (h != NULL && *h != NULL) {
        GsGp_DestroyConnection(h);
    }
}
}
}

namespace Nc {
extern "C" {
s32 GsGp_Process(Ctx0227 **h) {
    Ctx0227 *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    return GsGp_ProcessConnection(h, 0);
}
}
}

namespace Nc {
extern "C" {
s32 GsGp_SetCallback(Ctx0227 **h, s32 i, s32 x, s32 y) {
    Ctx0227 *c;
    if (h == NULL || (c = *h) == NULL) {
        return 2;
    }
    if (i < 0 || i >= 6) {
        GsGp_SetErrorString(h, "Invalid func.");
        return 2;
    }
    c->callbacks[i].func = x;
    c->callbacks[i].param = y;
    return 0;
}
}
}

namespace Nc {
extern "C" {
s32 GsGp_ConnectPreAuth(Ctx0227 **h, char *a, char *b, s32 c, s32 d, Unk_ov065_0227c564_Fn cb, s32 e) {
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
        GsGp_SetErrorString(h, "No callback.");
        return 2;
    }
    if (ctx->simulation != 0) {
        s32 z[8] = {0};
        cb(h, z, e);
        return 0;
    }
    return GsGp_Connect(h, "", "", "",
                               "", a, b, 0, c, 0, d, cb, e);
}
}
}

namespace Nc {
extern "C" {
void GsGp_Disconnect(Ctx0227 **h) {
    Ctx0227 *c;
    if (h != NULL) {
        c = *h;
        if (c != NULL) {
            if (c->simulation == 0) {
                GsGp_CloseConnection(h, 1);
                GsGp_ResetConnection(h);
            }
        }
    }
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_ProfileSearch(Unk_ov065_0227bd20_Handle *h, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, Unk_ov065_0227c400_Cb cb, void *arg) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
        return 2;
    }
    if (cb == NULL) {
        GsGp_SetErrorString(h, "No callback.");
        return 2;
    }
    if (c->simulation != 0) {
        Unk_ov065_0227c4b0_Args l = {{0, 0, 0, 0}};
        l.v[2] = 0x601;
        cb(h, &l, arg);
        return 0;
    }
    return GsGpSearch_ProfileSearch(h, a1, a2, a3, a4, a5, a6, 0, a7, (s32)cb, (s32)arg);
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_GetInfo(Unk_ov065_0227bd20_Handle *h, s32 a1, s32 a2, s32 a3, Unk_ov065_0227c400_Cb cb, void *arg) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL || a1 == 0) {
        return 2;
    }
    if (cb == NULL) {
        GsGp_SetErrorString(h, "No callback.");
        return 2;
    }
    if (c->simulation != 0) {
        Unk_ov065_0227c400_Buf b = {{0}};
        cb(h, &b, arg);
        return 0;
    }
    if (c->connectState == 4) {
        GsGp_SetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    return GsGp_RequestProfileInfo(h, a1, a2, a3, (s32)cb, (s32)arg);
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_SetInfo(Unk_ov065_0227bd20_Handle *h, s32 a, s32 b) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        GsGp_SetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    return GsGp_SetInfoString(h, a, b);
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_SendBuddyRequest(Unk_ov065_0227bd20_Handle *h, s32 v, const char *s) {
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
        GsGp_SetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    if (s == NULL) {
        GsGp_SetErrorString(h, "Invalid reason.");
        return 2;
    }
    GsUtil_StrCopyN(b, s, 0x401);
    if (b[0] != 0) {
        p = b;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    GsGpBuf_AppendString(h, c->outputBuffer, "\\addbuddy\\");
    GsGpBuf_AppendString(h, c->outputBuffer, "\\sesskey\\");
    GsGpBuf_AppendInt(h, c->outputBuffer, c->sessKey);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\newprofileid\\");
    GsGpBuf_AppendInt(h, c->outputBuffer, v);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\reason\\");
    GsGpBuf_AppendString(h, c->outputBuffer, b);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_AuthorizeBuddyRequest(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        GsGp_SetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    return GsGp_AuthorizeBuddy(h, a);
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_DenyBuddyRequest(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 *e;
    if (h == NULL || (c = h->connection) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        GsGp_SetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    if (GsGpProfile_Find(h, a, &e) == 0) {
        return 0;
    }
    e[5]--;
    if (c->infoCaching == 0 && e[5] <= 0) {
        GsUtil_Free((void *)e[4]);
        e[4] = 0;
        if (GsGpProfile_IsUnused(e) != 0) {
            GsGpProfile_Remove(h, e);
        }
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_GetNumBuddies(Unk_ov065_0227bd20_Handle *h, s32 *out) {
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
s32 GsGp_GetBuddyStatus(Unk_ov065_0227bd20_Handle *h, s32 idx, Unk_ov065_0227c05c_Out *out) {
    Unk_ov065_0227bd20_Ctx *c;
    Unk_ov065_0227c05c_Ent *ent;
    Unk_ov065_0227c05c_Src *s;
    s32 n;
    if (h == NULL || (c = h->connection) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        func_0212899c(out, 0, 0x210);
        return 0;
    }
    if (out == NULL) {
        GsGp_SetErrorString(h, "Invalid status.");
        return 2;
    }
    n = c->numBuddies;
    if (idx < 0 || idx >= n) {
        GsGp_SetErrorString(h, "Invalid index.");
        return 2;
    }
    ent = (Unk_ov065_0227c05c_Ent *)GsGpProfile_FindByBuddyIndex(h, idx);
    if (ent == NULL) {
        GsGp_SetErrorString(h, "Invalid index.");
        return 2;
    }
    s = ent->buddyStatus;
    out->profileId = ent->profileId;
    out->status = s->status;
    if (s->statusString != NULL) {
        GsUtil_StrCopyN(out->statusString, s->statusString, 0x100);
    } else {
        *s->statusString = 0;
    }
    if (s->locationString != NULL) {
        GsUtil_StrCopyN(out->locationString, s->locationString, 0x100);
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
s32 GsGp_GetBuddyIndex(Unk_ov065_0227bd20_Handle *h, s32 a, s32 *out) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 **e;
    if (h == NULL || (c = h->connection) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        *out = 0;
        return 0;
    }
    if (GsGpProfile_Find(h, a, &e) != 0 && e[2] != 0) {
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
s32 GsGp_IsBuddy(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    s32 **e;
    if (h == NULL || (c = h->connection) == NULL) {
        return 0;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (GsGpProfile_Find(h, a, &e) != 0 && e[2] != 0) {
        return 1;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_DeleteBuddy(Unk_ov065_0227bd20_Handle *h, s32 a) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        GsGp_SetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    if (GsGp_SendDeleteBuddy(h, a) == 0) {
        return 0;
    }
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_SetStatus(Unk_ov065_0227bd20_Handle *h, s32 v, const char *s1, const char *s2) {
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
        GsGp_SetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    if (s1 == NULL) {
        GsGp_SetErrorString(h, "Invalid statusString.");
        return 2;
    }
    if (s2 == NULL) {
        GsGp_SetErrorString(h, "Invalid locationString.");
        return 2;
    }
    GsUtil_StrCopyN(b1, s1, 0x100);
    if (b1[0] != 0) {
        p = b1;
        do {
            if (*p == '\\') {
                *p = '/';
            }
            p++;
        } while (*p != 0);
    }
    GsUtil_StrCopyN(b2, s2, 0x100);
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
    GsUtil_StrCopyN(c->lastStatusString, b1, 0x100);
    GsUtil_StrCopyN(c->lastLocationString, b2, 0x100);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\status\\");
    GsGpBuf_AppendInt(h, c->outputBuffer, v);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\sesskey\\");
    GsGpBuf_AppendInt(h, c->outputBuffer, c->sessKey);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\statstring\\");
    GsGpBuf_AppendString(h, c->outputBuffer, b1);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\locstring\\");
    GsGpBuf_AppendString(h, c->outputBuffer, b2);
    GsGpBuf_AppendString(h, c->outputBuffer, "\\final\\");
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGp_SendBuddyMessage(Unk_ov065_0227bd20_Handle *h, s32 a, s32 b) {
    Unk_ov065_0227bd20_Ctx *c;
    if (h == NULL || (c = h->connection) == NULL) {
        return 2;
    }
    if (c->simulation != 0) {
        return 0;
    }
    if (c->connectState == 4) {
        GsGp_SetErrorString(h, "The connection has already been disconnected.");
        return 2;
    }
    if (b == 0) {
        GsGp_SetErrorString(h, "Invalid message.");
        return 2;
    }
    return GsGp_SendBuddyMessageEx(h, a, 1, b);
}
}
}

// Not in the original binary: unreferenced weak function compiled right after GsGp_SendBuddyMessage, so that the four
// shared literals are pooled first as in the original; removed by the dead-stripping link (see notes.txt).
namespace Nb {
extern "C" {
__declspec(weak) void Unk_ov065_0227bd20_pool_order(void) {
    GsGp_SetErrorString(0, "The connection has already been disconnected.");
    GsGp_SetErrorString(0, "\\sesskey\\");
    GsGp_SetErrorString(0, "\\final\\");
    GsGp_SetErrorString(0, "No callback.");
}
}
}
