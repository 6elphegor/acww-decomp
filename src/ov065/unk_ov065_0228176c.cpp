// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/GsArray.h"
#include "net/Unk_ov065_02280e7c_Ctx.h"
#include "net/GsGpOperation.h"
#include "net/Unk_ov065_0227c538_Node.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/Unk_ov065_02281790_Ctx.h"
#include "net/GsGpCallbackArgs.h"

// ov065 TU48: GP gpiProfile.c (0x0228176c..0x02281a5c)

namespace Na {
// ov065_055: friend/auth connection task list (0x02280e7c..0x0228176c)








typedef Unk_ov065_02280e7c_Ctx Ctx0228;
typedef GsGpPeer Node0228;
typedef GsGpProfile Ent0228;
typedef Unk_ov065_02280e7c_Pair Pair0228;
typedef GsGpPeerMessage Sub0228;

extern char data_ov065_0228d928[];
extern char data_ov065_0228d9c8[];
extern char data_ov065_0228d9ec[];
extern char data_ov065_0228d9f0[];
extern char data_ov065_0228da00[];
extern char data_ov065_0228da04[];
extern char data_ov065_0228da0c[];
extern char data_ov065_0228da14[];
extern char data_ov065_0228da1c[];
extern char data_ov065_0228da24[];
extern char data_ov065_0228da2c[];
extern char data_ov065_0228da34[];
extern char data_ov065_0228da3c[];
extern char data_ov065_0228da44[];
extern char data_ov065_0228da68[];

extern "C" {

s32 strncmp(const char *, const char *, s32);
char *strstr(const char *, const char *);
s32 strcmp(const char *, const char *);
s32 atol(const char *);
s32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
void *memset(void *, s32, s32);

void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
GsArray *GsArray_New(s32, s32, void (*)(void *));
void GsArray_DeleteAt(GsArray *, s32);
void *GsArray_At(GsArray *, s32);
s32 GsArray_Count(GsArray *);
void GsArray_Free(GsArray *);
void GsUtil_Md5Hex(char *, s32, char *);
s32 GsUtil_GetTimeSeconds(s32);
s32 GsSock_Accept(s32, s32, s32);
s32 GsSock_Shutdown(s32, s32);
s32 GsSock_Close(s32);
s32 GsSock_CanRead(s32 fd);
s32 GsSock_GetSendBufSize(s32);
s32 GsSock_GetRecvBufSize(s32);
s32 GsSock_SetSendBufSize(s32, s32);
s32 GsSock_SetRecvBufSize(s32, s32);
s32 GsSock_SetBlocking(s32, s32);
s32 GsUtil_StrDup(s32);
s32 GsGp_SendBuddyMessageEx(Ctx0228 **, s32, s32, s32);
s32 GsGp_SendServerBuddyMessage(Ctx0228 **, s32, s32, const char *);
s32 GsGpBuf_Compact(Ctx0228 **, char **);
s32 GsGpPeer_ParseMessage(Ctx0228 **, char **, s32 *, s32 *, s32 *);
s32 GsGp_SendBuffer(Ctx0228 **, s32, char **, s32 *, s32, const char *);
s32 GsGp_RecvToBuffer(Ctx0228 **, s32, char **, s32 *, s32 *, const char *);
s32 GsGpBuf_AppendInt(Ctx0228 **, char **, s32);
s32 GsGpBuf_AppendString(Ctx0228 **, char **, const char *);
s32 GsGp_QueueCallback(Ctx0228 **, Pair0228, void *, s32, s32);
s32 GsGp_SendGetProfile(Ctx0228 **, s32, s32);
s32 GsGp_AddOperation(Ctx0228 **, s32, s32, GsGpOperation **, s32, s32, s32);
s32 GsGpPeer_Connect(Ctx0228 **, Node0228 *);
void GsGpProfile_Remove(Ctx0228 **, Ent0228 *);
s32 GsGpProfile_Find(Ctx0228 **, s32, Ent0228 **);
s32 GsGpPeer_DeclineTransfer(Ctx0228 **, Node0228 *, s32, char *, s32, s32);
void GsGp_SetErrorString(Ctx0228 **, const char *);
s32 GsGp_CheckConnectComplete(Ctx0228 **, s32, s32 *);
s32 GsGp_GetValue(char *, const char *, char *, s32);
void GsGp_DebugLog(Ctx0228 **, const char *, ...);

s32 GsGpProfile_IsUnused(Ent0228 *);
s32 GsGpPeer_ProcessOutgoing(Ctx0228 **, Node0228 *);
s32 GsGpPeer_ProcessIncoming(Ctx0228 **, Node0228 *);
s32 GsGpPeer_ProcessConnected(Ctx0228 **, Node0228 *);
s32 GsGpPeer_FlushQueue(Ctx0228 **, Node0228 *);
s32 GsGpPeer_Process(Ctx0228 **, Node0228 *);
void GsGpPeer_Remove(Ctx0228 **, Node0228 *);
void GsGpPeer_Free(Ctx0228 **, Node0228 *);
void GsGpPeer_SetSocketBuffers(s32);
void GsGpPeer_FreeQueuedMessage(void *);
Node0228 *GsGpPeer_New(Ctx0228 **, s32, s32);















}
extern "C" {
s32 GsGpProfile_IsUnused(Ent0228 *e);
}
}

namespace Nb {
// ov065_056: ghttp connection table / request building (0x02281790..0x02281bf4)








typedef Unk_ov065_02281790_Ctx Ctx0228;
typedef GsGpProfile Elem0228;
typedef GsGpSearch Conn0228;


extern "C" {

extern char data_ov065_0228db1c[];

typedef s32 (*GsGpProfileMapFn)(Ctx0228 **, GsGpProfile *, void *);

s32 GsHash_FindIf(void *, s32 (*)(void *, void *), void *);
s32 GsHash_Remove(void *, void *);
void *GsHash_Find(void *, void *);
s32 GsHash_Insert(void *, void *);
void *GsHash_New(s32, s32, s32 (*)(s32 *, s32), s32 (*)(s32 *, s32 *), void (*)(void *));
void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
void GsGp_SetErrorString(Ctx0228 **, const char *);
void GsGp_SetError(Ctx0228 **, s32, const char *);
s32 GsGp_CheckServerError(Ctx0228 **, char *, s32);
s32 GsGp_GetValue(char *, const char *, void *, s32);
s32 GsGp_CheckConnectComplete(Ctx0228 **, s32, void *);
void GsGp_CallErrorCallback(Ctx0228 **, s32, s32);
s32 GsGp_QueueCallback(Ctx0228 **, GsGpCallbackPair, void *, void *, s32);
void GsGp_RemoveOperation(Ctx0228 **, GsGpOperation *);
void GsGp_FreeCachedInfo(void *);
s32 strncmp(const char *, const char *, s32);
s32 strcmp(const char *, const char *);
s32 atol(void *);

s32 GsGpSearch_Process(Ctx0228 **, GsGpOperation *);
s32 GsGpProfile_MatchBuddyIndexCb(Ctx0228 **, GsGpProfile *, void *);
s32 GsGpProfile_FindIfAdapter(GsGpProfile *, void *);
s32 GsGpProfile_MatchNickEmailCb(Ctx0228 **, GsGpProfile *, void *);
s32 GsGpProfile_Find(Ctx0228 **, s32, void *);
void GsGpProfile_FreeEntry(void *);
s32 GsGpProfile_FindIf(Ctx0228 **, GsGpProfileMapFn, void *);
s32 GsGpProfile_CompareId(s32 *, s32 *);
s32 GsGpProfile_HashId(s32 *, s32);




struct GsGpProfileMapArgs {
    Ctx0228 **connection;
    GsGpProfileMapFn func;
    void *data;
};



struct GsGpFindProfileByNickArgs {
    s32 nick;
    s32 email;
    s32 *profile;
    s32 found;
};






static inline void Unk_ov065_022818f4_Zero(Elem0228 *e) {
    e->profileId = 0;
    e->userId = 0;
    e->buddyStatus = 0;
    e->infoCache = 0;
    e->authSig = 0;
    e->requestCount = 0;
    e->peerSig = 0;
}









extern char data_ov065_0228db30[];
extern char data_ov065_0228db5c[];
extern char data_ov065_0228db68[];
extern char data_ov065_0228db74[];
extern char data_ov065_0228db80[];
extern char data_ov065_0228db90[];
extern char data_ov065_0228db98[];
extern char data_ov065_0228dba8[];
extern char data_ov065_0228dbb0[];
extern char data_ov065_0228dbbc[];
extern char data_ov065_0228dbc8[];
extern char data_ov065_0228dbd4[];
extern char data_ov065_0228dbdc[];
extern char data_ov065_0228dbe4[];
extern char data_ov065_0228dbec[];
extern char data_ov065_0228dbf4[];
extern char data_ov065_0228dc00[];
extern char data_ov065_0228dc0c[];
extern char data_ov065_0228dc14[];
extern char data_ov065_0228dc20[];
extern char data_ov065_0228dc2c[];
extern char data_ov065_0228dc34[];
extern char data_ov065_0228dc40[];
extern char data_ov065_0228dc50[];
extern char data_ov065_0228dc60[];
extern char data_ov065_0228dc6c[];
extern char data_ov065_0228dc74[];
extern char data_ov065_0228dca0[];
extern char data_ov065_0228dca8[];
extern char data_ov065_0228dcb0[];
extern char data_ov065_0228dcb4[];
extern char data_ov065_0228dcb8[];
extern char data_ov065_0228dcc0[];
extern char data_ov065_0228dccc[];
extern char data_ov065_0228dcd8[];
extern char data_ov065_0228dce4[];
extern char data_ov065_0228dcec[];
extern char data_ov065_0228dd14[];
extern char data_ov065_0228dd18[];
extern char data_ov065_0228dd1c[];
extern char data_ov065_0228dd24[];
extern char data_ov065_0228dd2c[];
extern char data_ov065_0228dd30[];
extern char data_ov065_0228dd38[];
extern char data_ov065_0228dd44[];
extern char data_ov065_0228dd48[];
extern char data_ov065_0228dd50[];
extern char data_ov065_0228dd54[];
extern char data_ov065_0228dd5c[];
extern char data_ov065_0228dd64[];
extern char data_ov065_0228dd68[];
extern char data_ov065_0228dd70[];
extern char data_ov065_0228dd78[];
extern char data_ov065_0228dd7c[];
extern char data_ov065_0228db2c[];
extern char sGsGameName[];
extern char data_ov065_0228db1c[];

s32 GsGp_ReadKeyValue(Ctx0228 **, char *, s32 *, char *, char *);
void GsGpBuf_AppendString(Ctx0228 **, char **, const char *);
void GsGpBuf_AppendInt(Ctx0228 **, char **, s32);
s32 GsGp_SendBuffer(Ctx0228 **, s32, char **, s32 *, s32, const char *);
s32 GsGp_RecvToBuffer(Ctx0228 **, s32, char **, s32 *, s32 *, const char *);
void *GsUtil_Realloc(void *, s32);
void GsUtil_StrCopyN(char *, const char *, s32);
void *memset(void *, s32, s32);
char *func_02127838(char *, const char *);
char *strstr(const char *, const char *);
void GsUtil_Sleep(s32);
s32 GsGpSearch_ProfileSearch(Ctx0228 **, char *, char *, char *, char *, char *, s32, s32, s32, s32, s32);










#define ERR3() { GsGp_SetError(h, 1, data_ov065_0228dcec); GsGp_CallErrorCallback(h, 3, 1); return 3; }
#define ERRMEM(m) { GsGp_SetErrorString(h, m); return 1; }
#define GETTOK(t) r = GsGp_ReadKeyValue(h, c->inputBuffer, &pos, t, buf); if (r != 0) { return r; }


}
extern "C" {
void *GsGpProfile_FindByBuddyIndex(Ctx0228 **h, s32 a);
s32 GsGpProfile_MatchBuddyIndexCb(Ctx0228 **, GsGpProfile *n, void *arg);
s32 GsGpProfile_FindIf(Ctx0228 **h, GsGpProfileMapFn cb, void *arg);
s32 GsGpProfile_FindIfAdapter(GsGpProfile *n, void *p);
s32 GsGpProfile_FindByNickEmail(Ctx0228 **h, s32 a, s32 b, s32 *out);
s32 GsGpProfile_MatchNickEmailCb(Ctx0228 **, GsGpProfile *n, void *arg);
s32 GsGpProfile_Remove(Ctx0228 **h, void *n);
void GsGpProfile_RemoveById(Ctx0228 **h, s32 a);
s32 GsGpProfile_Find(Ctx0228 **h, s32 a, void *out);
s32 GsGpProfile_Add(Ctx0228 **h, s32 a);
s32 GsGp_ProcessNewProfileReply(Ctx0228 **h, GsGpOperation *n, char *s);
}
}

namespace Nb {
extern "C" {
s32 GsGp_ProcessNewProfileReply(Ctx0228 **h, GsGpOperation *n, char *s) {
    char buf[0x10];
    s32 v;
    Unk_ov065_0227e0e8_Wrap pr;
    void *p;
    if (GsGp_CheckServerError(h, s, 1) != 0) {
        return 4;
    }
    if (strncmp(s, "\\npr\\", 5) != 0) {
        GsGp_SetError(h, 1, "Unexpected data was received from the server.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    if (GsGp_GetValue(s, "\\profileid\\", buf, 0x10) == 0) {
        GsGp_SetError(h, 1, "Unexpected data was received from the server.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    v = atol(buf);
    pr = n->callback;
    if (pr.p.func != 0) {
        p = GsUtil_Alloc(8);
        if (p == 0) {
            GsGp_SetErrorString(h, "Out of memory.");
            return 1;
        }
        ((s32 *)p)[1] = v;
        ((s32 *)p)[0] = 0;
        s32 r = GsGp_QueueCallback(h, pr.p, p, n, 0);
        if (r != 0) {
            return r;
        }
    }
    GsGp_RemoveOperation(h, n);
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_Add(Ctx0228 **h, s32 a) {
    void *out;
    void **t = &(*h)->profileTable;
    if (a <= 0) {
        return 0;
    }
    if (GsGpProfile_Find(h, a, &out) != 0) {
        return (s32)out;
    }
    Elem0228 tmp;
    u32 ad = (u32)&tmp;
    Unk_ov065_022818f4_Zero((Elem0228 *)ad);
    tmp.profileId = a;
    tmp.userId = 0;
    tmp.infoCache = 0;
    tmp.authSig = 0;
    tmp.peerSig = 0;
    tmp.requestCount = 0;
    GsHash_Insert(*t, (Elem0228 *)ad);
    ((s32 *)t)[1]++;
    if (GsGpProfile_Find(h, a, &out) != 0) {
        return (s32)out;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_Find(Ctx0228 **h, s32 a, void *out) {
    Elem0228 key;
    void *r;
    Ctx0228 *c = *h;
    key.profileId = a;
    r = GsHash_Find(c->profileTable, &key);
    if (out != 0) {
        *(void **)out = r;
    }
    if (r != 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace Nb {
extern "C" {
void GsGpProfile_RemoveById(Ctx0228 **h, s32 a) {
    Ctx0228 *c = *h;
    void *out;
    if (GsGpProfile_Find(h, a, &out) != 0) {
        GsHash_Remove(c->profileTable, out);
    }
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_Remove(Ctx0228 **h, void *n) {
    return GsHash_Remove((*h)->profileTable, n);
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_MatchNickEmailCb(Ctx0228 **, GsGpProfile *n, void *arg) {
    GsGpFindProfileByNickArgs *l = (GsGpFindProfileByNickArgs *)arg;
    char **e = (char **)n->infoCache;
    if (e != 0) {
        if (strcmp((const char *)l->nick, e[0]) == 0) {
            if (strcmp((const char *)l->email, e[2]) == 0) {
                *(GsGpProfile **)l->profile = n;
                l->found = 1;
                return 0;
            }
        }
    }
    return 1;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_FindByNickEmail(Ctx0228 **h, s32 a, s32 b, s32 *out) {
    GsGpFindProfileByNickArgs l;
    l.nick = a;
    l.email = b;
    l.profile = out;
    l.found = 0;
    GsGpProfile_FindIf(h, GsGpProfile_MatchNickEmailCb, &l);
    if (l.found == 0) {
        *out = 0;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_FindIfAdapter(GsGpProfile *n, void *p) {
    GsGpProfileMapArgs *a = (GsGpProfileMapArgs *)p;
    return a->func(a->connection, n, a->data);
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_FindIf(Ctx0228 **h, GsGpProfileMapFn cb, void *arg) {
    GsGpProfileMapArgs a;
    Ctx0228 *c = *h;
    a.connection = h;
    a.func = cb;
    a.data = arg;
    if (GsHash_FindIf(c->profileTable, (s32 (*)(void *, void *))GsGpProfile_FindIfAdapter, &a) == 0) {
        return 1;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_MatchBuddyIndexCb(Ctx0228 **, GsGpProfile *n, void *arg) {
    GsGpFindBuddyArgs *l = (GsGpFindBuddyArgs *)arg;
    if (n->buddyStatus != 0 && l->index == n->buddyStatus->buddyIndex) {
        l->profile = n;
        return 0;
    }
    return 1;
}
}
}

namespace Nb {
extern "C" {
void *GsGpProfile_FindByBuddyIndex(Ctx0228 **h, s32 a) {
    GsGpFindBuddyArgs l;
    l.index = a;
    l.profile = 0;
    GsGpProfile_FindIf(h, GsGpProfile_MatchBuddyIndexCb, &l);
    return l.profile;
}
}
}

namespace Na {
extern "C" {
s32 GsGpProfile_IsUnused(Ent0228 *e) {
    if (e != NULL && e->infoCache == 0 && e->buddyStatus == 0 && e->peerSig == NULL && e->authSig == 0) {
        return 1;
    }
    return 0;
}
}
}
