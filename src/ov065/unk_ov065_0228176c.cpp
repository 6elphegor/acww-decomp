// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/darray.h"
#include "net/Unk_ov065_02280e7c_Ctx.h"
#include "net/gpiOperation.h"
#include "net/Unk_ov065_0227c538_Node.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/Unk_ov065_02281790_Ctx.h"
#include "net/gp.h"

// ov065 TU48: GP gpiProfile.c (0x0228176c..0x02281a5c)

namespace Na {
// ov065_055: friend/auth connection task list (0x02280e7c..0x0228176c)








typedef Unk_ov065_02280e7c_Ctx Ctx0228;
typedef GPIPeer Node0228;
typedef GPIProfile Ent0228;
typedef Unk_ov065_02280e7c_Pair Pair0228;
typedef GPIMessage Sub0228;

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
DArrayImplementation *ArrayNew(s32, s32, void (*)(void *));
void ArrayDeleteAt(DArrayImplementation *, s32);
void *ArrayNth(DArrayImplementation *, s32);
s32 ArrayLength(DArrayImplementation *);
void ArrayFree(DArrayImplementation *);
void MD5Digest(char *, s32, char *);
s32 time(s32);
s32 accept(s32, s32, s32);
s32 shutdown(s32, s32);
s32 closesocket(s32);
s32 CanReceiveOnSocket(s32 fd);
s32 GetSendBufferSize(s32);
s32 GetReceiveBufferSize(s32);
s32 SetSendBufferSize(s32, s32);
s32 SetReceiveBufferSize(s32, s32);
s32 SetSockBlocking(s32, s32);
s32 goastrdup(s32);
s32 gpiSendBuddyMessage(Ctx0228 **, s32, s32, s32);
s32 gpiSendServerBuddyMessage(Ctx0228 **, s32, s32, const char *);
s32 gpiClipBufferToPosition(Ctx0228 **, char **);
s32 gpiReadMessageFromBuffer(Ctx0228 **, char **, s32 *, s32 *, s32 *);
s32 gpiSendFromBuffer(Ctx0228 **, s32, char **, s32 *, s32, const char *);
s32 gpiRecvToBuffer(Ctx0228 **, s32, char **, s32 *, s32 *, const char *);
s32 gpiAppendIntToBuffer(Ctx0228 **, char **, s32);
s32 gpiAppendStringToBuffer(Ctx0228 **, char **, const char *);
s32 gpiAddCallback(Ctx0228 **, Pair0228, void *, s32, s32);
s32 gpiSendGetInfo(Ctx0228 **, s32, s32);
s32 gpiAddOperation(Ctx0228 **, s32, s32, GPIOperation **, s32, s32, s32);
s32 gpiPeerStartConnect(Ctx0228 **, Node0228 *);
void gpiRemoveProfile(Ctx0228 **, Ent0228 *);
s32 gpiGetProfile(Ctx0228 **, s32, Ent0228 **);
s32 gpiHandleTransferMessage(Ctx0228 **, Node0228 *, s32, char *, s32, s32);
void gpiSetErrorString(Ctx0228 **, const char *);
s32 gpiCheckSocketConnect(Ctx0228 **, s32, s32 *);
s32 gpiValueForKey(char *, const char *, char *, s32);
void gpiDebug(Ctx0228 **, const char *, ...);

s32 gpiCanFreeProfile(Ent0228 *);
s32 gpiProcessPeerInitiatingConnection(Ctx0228 **, Node0228 *);
s32 gpiProcessPeerAcceptingConnection(Ctx0228 **, Node0228 *);
s32 gpiProcessPeerConnected(Ctx0228 **, Node0228 *);
s32 gpiPeerSendMessages(Ctx0228 **, Node0228 *);
s32 gpiProcessPeer(Ctx0228 **, Node0228 *);
void gpiRemovePeer(Ctx0228 **, Node0228 *);
void gpiDestroyPeer(Ctx0228 **, Node0228 *);
void GsGpPeer_SetSocketBuffers(s32);
void gpiFreeMessage(void *);
Node0228 *gpiAddPeer(Ctx0228 **, s32, s32);















}
extern "C" {
s32 gpiCanFreeProfile(Ent0228 *e);
}
}

namespace Nb {
// ov065_056: ghttp connection table / request building (0x02281790..0x02281bf4)








typedef Unk_ov065_02281790_Ctx Ctx0228;
typedef GPIProfile Elem0228;
typedef GPISearchData Conn0228;


extern "C" {

extern char data_ov065_0228db1c[];

typedef s32 (*gpiProfileMapFunc)(Ctx0228 **, GPIProfile *, void *);

s32 TableMapSafe2(void *, s32 (*)(void *, void *), void *);
s32 TableRemove(void *, void *);
void *TableLookup(void *, void *);
s32 TableEnter(void *, void *);
void *TableNew(s32, s32, s32 (*)(s32 *, s32), s32 (*)(s32 *, s32 *), void (*)(void *));
void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
void gpiSetErrorString(Ctx0228 **, const char *);
void gpiSetError(Ctx0228 **, s32, const char *);
s32 gpiCheckForError(Ctx0228 **, char *, s32);
s32 gpiValueForKey(char *, const char *, void *, s32);
s32 gpiCheckSocketConnect(Ctx0228 **, s32, void *);
void gpiCallErrorCallback(Ctx0228 **, s32, s32);
s32 gpiAddCallback(Ctx0228 **, GPICallback, void *, void *, s32);
void gpiRemoveOperation(Ctx0228 **, GPIOperation *);
void gpiFreeInfoCache(void *);
s32 strncmp(const char *, const char *, s32);
s32 strcmp(const char *, const char *);
s32 atol(void *);

s32 gpiProcessSearch(Ctx0228 **, GPIOperation *);
s32 gpiCheckForBuddy(Ctx0228 **, GPIProfile *, void *);
s32 gpiProfileMapCallback(GPIProfile *, void *);
s32 gpiCheckProfileForUser(Ctx0228 **, GPIProfile *, void *);
s32 gpiGetProfile(Ctx0228 **, s32, void *);
void gpiProfilesTableFree(void *);
s32 gpiProfileMap(Ctx0228 **, gpiProfileMapFunc, void *);
s32 gpiProfilesTableCompare(s32 *, s32 *);
s32 gpiProfilesTableHash(s32 *, s32);




struct GPIProfileMapData {
    Ctx0228 **connection;
    gpiProfileMapFunc func;
    void *data;
};



struct GPIFindProfileByUserData {
    s32 nick;
    s32 email;
    s32 *profile;
    s32 found;
};






static inline void Unk_ov065_022818f4_Zero(Elem0228 *e) {
    e->profileId = 0;
    e->userId = 0;
    e->buddyStatus = 0;
    e->cache = 0;
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
extern char __GSIACGamename[];
extern char data_ov065_0228db1c[];

s32 gpiReadKeyAndValue(Ctx0228 **, char *, s32 *, char *, char *);
void gpiAppendStringToBuffer(Ctx0228 **, char **, const char *);
void gpiAppendIntToBuffer(Ctx0228 **, char **, s32);
s32 gpiSendFromBuffer(Ctx0228 **, s32, char **, s32 *, s32, const char *);
s32 gpiRecvToBuffer(Ctx0228 **, s32, char **, s32 *, s32 *, const char *);
void *GsUtil_Realloc(void *, s32);
void strzcpy(char *, const char *, s32);
void *memset(void *, s32, s32);
char *STD_CopyString(char *, const char *);
char *strstr(const char *, const char *);
void msleep(s32);
s32 gpiProfileSearch(Ctx0228 **, char *, char *, char *, char *, char *, s32, s32, s32, s32, s32);










#define ERR3() { gpiSetError(h, 1, data_ov065_0228dcec); gpiCallErrorCallback(h, 3, 1); return 3; }
#define ERRMEM(m) { gpiSetErrorString(h, m); return 1; }
#define GETTOK(t) r = gpiReadKeyAndValue(h, c->inputBuffer, &pos, t, buf); if (r != 0) { return r; }


}
extern "C" {
void *gpiFindBuddy(Ctx0228 **h, s32 a);
s32 gpiCheckForBuddy(Ctx0228 **, GPIProfile *n, void *arg);
s32 gpiProfileMap(Ctx0228 **h, gpiProfileMapFunc cb, void *arg);
s32 gpiProfileMapCallback(GPIProfile *n, void *p);
s32 gpiFindProfileByUser(Ctx0228 **h, s32 a, s32 b, s32 *out);
s32 gpiCheckProfileForUser(Ctx0228 **, GPIProfile *n, void *arg);
s32 gpiRemoveProfile(Ctx0228 **h, void *n);
void gpiRemoveProfileByID(Ctx0228 **h, s32 a);
s32 gpiGetProfile(Ctx0228 **h, s32 a, void *out);
s32 gpiProfileListAdd(Ctx0228 **h, s32 a);
s32 gpiProcessNewProfile(Ctx0228 **h, GPIOperation *n, char *s);
}
}

namespace Nb {
extern "C" {
s32 gpiProcessNewProfile(Ctx0228 **h, GPIOperation *n, char *s) {
    char buf[0x10];
    s32 v;
    Unk_ov065_0227e0e8_Wrap pr;
    void *p;
    if (gpiCheckForError(h, s, 1) != 0) {
        return 4;
    }
    if (strncmp(s, "\\npr\\", 5) != 0) {
        gpiSetError(h, 1, "Unexpected data was received from the server.");
        gpiCallErrorCallback(h, 3, 1);
        return 3;
    }
    if (gpiValueForKey(s, "\\profileid\\", buf, 0x10) == 0) {
        gpiSetError(h, 1, "Unexpected data was received from the server.");
        gpiCallErrorCallback(h, 3, 1);
        return 3;
    }
    v = atol(buf);
    pr = n->callback;
    if (pr.p.callback != 0) {
        p = GsUtil_Alloc(8);
        if (p == 0) {
            gpiSetErrorString(h, "Out of memory.");
            return 1;
        }
        ((s32 *)p)[1] = v;
        ((s32 *)p)[0] = 0;
        s32 r = gpiAddCallback(h, pr.p, p, n, 0);
        if (r != 0) {
            return r;
        }
    }
    gpiRemoveOperation(h, n);
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpiProfileListAdd(Ctx0228 **h, s32 a) {
    void *out;
    void **t = &(*h)->profileTable;
    if (a <= 0) {
        return 0;
    }
    if (gpiGetProfile(h, a, &out) != 0) {
        return (s32)out;
    }
    Elem0228 tmp;
    u32 ad = (u32)&tmp;
    Unk_ov065_022818f4_Zero((Elem0228 *)ad);
    tmp.profileId = a;
    tmp.userId = 0;
    tmp.cache = 0;
    tmp.authSig = 0;
    tmp.peerSig = 0;
    tmp.requestCount = 0;
    TableEnter(*t, (Elem0228 *)ad);
    ((s32 *)t)[1]++;
    if (gpiGetProfile(h, a, &out) != 0) {
        return (s32)out;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpiGetProfile(Ctx0228 **h, s32 a, void *out) {
    Elem0228 key;
    void *r;
    Ctx0228 *c = *h;
    key.profileId = a;
    r = TableLookup(c->profileTable, &key);
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
void gpiRemoveProfileByID(Ctx0228 **h, s32 a) {
    Ctx0228 *c = *h;
    void *out;
    if (gpiGetProfile(h, a, &out) != 0) {
        TableRemove(c->profileTable, out);
    }
}
}
}

namespace Nb {
extern "C" {
s32 gpiRemoveProfile(Ctx0228 **h, void *n) {
    return TableRemove((*h)->profileTable, n);
}
}
}

namespace Nb {
extern "C" {
s32 gpiCheckProfileForUser(Ctx0228 **, GPIProfile *n, void *arg) {
    GPIFindProfileByUserData *l = (GPIFindProfileByUserData *)arg;
    char **e = (char **)n->cache;
    if (e != 0) {
        if (strcmp((const char *)l->nick, e[0]) == 0) {
            if (strcmp((const char *)l->email, e[2]) == 0) {
                *(GPIProfile **)l->profile = n;
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
s32 gpiFindProfileByUser(Ctx0228 **h, s32 a, s32 b, s32 *out) {
    GPIFindProfileByUserData l;
    l.nick = a;
    l.email = b;
    l.profile = out;
    l.found = 0;
    gpiProfileMap(h, gpiCheckProfileForUser, &l);
    if (l.found == 0) {
        *out = 0;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpiProfileMapCallback(GPIProfile *n, void *p) {
    GPIProfileMapData *a = (GPIProfileMapData *)p;
    return a->func(a->connection, n, a->data);
}
}
}

namespace Nb {
extern "C" {
s32 gpiProfileMap(Ctx0228 **h, gpiProfileMapFunc cb, void *arg) {
    GPIProfileMapData a;
    Ctx0228 *c = *h;
    a.connection = h;
    a.func = cb;
    a.data = arg;
    if (TableMapSafe2(c->profileTable, (s32 (*)(void *, void *))gpiProfileMapCallback, &a) == 0) {
        return 1;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpiCheckForBuddy(Ctx0228 **, GPIProfile *n, void *arg) {
    GPIFindProfileData *l = (GPIFindProfileData *)arg;
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
void *gpiFindBuddy(Ctx0228 **h, s32 a) {
    GPIFindProfileData l;
    l.index = a;
    l.profile = 0;
    gpiProfileMap(h, gpiCheckForBuddy, &l);
    return l.profile;
}
}
}

namespace Na {
extern "C" {
s32 gpiCanFreeProfile(Ent0228 *e) {
    if (e != NULL && e->cache == 0 && e->buddyStatus == 0 && e->peerSig == NULL && e->authSig == 0) {
        return 1;
    }
    return 0;
}
}
}
