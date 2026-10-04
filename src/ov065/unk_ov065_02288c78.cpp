// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/Unk_ov065_02288538_Cipher.h"
#include "net/Unk_ov065_02288b60_Mgr.h"
#include "net/Unk_ov065_02288ffc_W.h"
#include "net/Unk_ov065_02289460_Obj.h"

extern "C" {
char *data_ov065_0228e928[2] = {"queryid", "final"};
void *sGsStrPool;
char *sGsStrTokPos;
}

namespace F022884fc {

// ov065_066: GameSpy transport (RC4-like cipher, connection manager) 0x022884fc..0x02288df0









extern "C" {
extern u32 gGsKeyNames[];
extern u8 data_ov065_0228e8fc[];
extern Unk_ov065_02288b60_Buf13 data_ov065_0228e904;
extern Unk_ov065_02288b60_Buf8 data_ov065_0228e914;
extern s32 sGsAvailStatus;
extern u32 data_ov065_022918a8;
extern u8 data_0213a410[];

u32 func_0213335c(u32 a, u32 b);
s32 func_02129f1c(void *a, void *b);
s32 func_02130b04(void *a, void *b);

u32 GsUtil_GetTimeMs(void);
void GsSock_StartupStub(void);
s32 GsSock_CanRead(s32 s);
s32 GsSock_RecvFrom(s32 s, void *buf, s32 len, u32 flags, void *sa, s32 *salen);
s32 GsSock_SendTo(s32 s, void *buf, s32 len, u32 flags, void *sa, s32 salen);
s32 GsSock_Close(s32 s);
s32 GsSock_Socket(s32 a, s32 b, s32 c);
void *GsUtil_Alloc(u32 n);
void GsUtil_Free(void *p);
void *GsHash_NewEx(s32 a, s32 b, s32 c, void *cmp, void *hash, void *free);
s32 GsUtil_StrSizeInBuffer(u8 *buf, s32 n);
void GsStrPool_Release(s32 a, void *p);
void GsServer_SetStringValue(void *e, u32 v, u8 *buf);
void GsServer_ParseQr2Reply(void *e, u8 *buf, s32 n);
void GsServer_ParseQr1Reply(void *e, u8 *buf);
}

typedef Unk_ov065_02288538_Cipher Cipher;
typedef Unk_ov065_02288b60_Mgr Mgr;
typedef Unk_ov065_02288b60_Ent Ent;
typedef Unk_ov065_02288c78_List List;
typedef Unk_ov065_02288b60_Sa Sa;

extern "C" {
u32 GsSrvListCrypt_NextByte(Cipher *c, u32 x);
void GsSrvListCrypt_InitDefault(Cipher *c);
u32 GsSrvListCrypt_KeyIndex(Cipher *c, u32 n, u8 *key, u32 keylen, u8 *j, u32 *idx);
s32 GsSrvQueue_Remove(List *l, Ent *e);
void GsSrvQuery_ReceiveAll(Mgr *m, s32 flag);
void GsSrvQuery_CheckTimeouts(Mgr *m);
void GsSrvQuery_StartPending(Mgr *m);
void GsSrvQuery_SendQuery(Mgr *m, Ent *e);
s32 GsSrvQuery_HandleAltReplyStub(Mgr *m, Ent *e, u8 *buf, s32 n);
void GsSrvQuery_HandleQr1Reply(Mgr *m, Ent *e, u8 *buf, s32 n);
void GsSrvQuery_HandleQr2Reply(Mgr *m, Ent *e, u8 *buf, s32 n);
void GsSrvQueue_Init(List *l);
Ent *GsSrvQueue_PopFront(List *l);
void GsSrvQueue_PushFront(List *l, Ent *e);
void GsSrvQueue_PushBack(List *l, Ent *e);
void GsServer_CompareKeyCb(u32 *a, u32 *b);
u32 GsServer_HashKeyCb(u32 *p, u32 n);
void GsServer_FreeKeyCb(u32 *p);
u32 GsUtil_StrHashNoCase(u8 *s, u32 n);

}
}

namespace F02288e2c {

// ov065_067: GameSpy-like key/value parsing, hash table wrappers, connection object (0x02288e2c..0x02289720)













static inline u16 Unk_ov065_02289044_Htons(u16 x) {
    return (x >> 8 & 0xff) | ((x << 8) & 0xff00);
}

extern "C" {
extern char *sGsStrTokPos;
extern void *sGsStrPool;
extern char *data_ov065_0228e928[2];
extern char *gGsKeyNames[];
extern u16 data_0213a510[];
extern s32 sGsAvailStatus;
extern s32 data_ov065_022918a8;

s32 strcmp(const char *, const char *);
u32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 func_0212b770(char *);
s32 func_02130b04(char *, char *);

s32 GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
s32 GsArray_Count(void *);
void *GsHash_Find(void *, void *);
s32 GsHash_Insert(void *, void *);
s32 GsHash_Count(void *);
s32 GsHash_Free(void *);
void *GsHash_NewEx(s32, s32, s32, void *, void *, void *);
s32 GsSock_InetAddr(s32);
s32 GsSock_RecvFrom(s32, void *, s32, s32, void *, void *);
s32 GsSock_Close(s32);
s32 GsSock_CanRead(s32);
s32 GsUtil_Sleep(s32);
u32 GsUtil_GetTimeMs();
s32 GsSrvQuery_Remove(void *, void *);
s32 GsSrvQuery_AddKey(void *, s32);
s32 GsSrvQuery_Think(void *);
s32 GsSrvQuery_Add(void *, void *, s32, s32);
s32 GsSrvQuery_Shutdown(void *);
s32 GsSrvQuery_Clear(void *);
s32 GsSrvQuery_SetPublicIp(void *, s32);
s32 GsSrvQuery_Init(void *, s32, s32, s32, void *, void *);
s32 GsServer_IsNull(void *);
s32 GsServer_SetListFlags(void *, s32);
void *GsServer_New(void *, u32, u32);
s32 GsServer_GetPing(void *);
s32 GsUtil_StrHashNoCase(void *);
s32 GsSrvList_Free(void *);
s32 GsSrvList_Disconnect(void *);
s32 GsSrvList_SendListRequest(void *, char *, s32, s32, s32);
s32 GsSrvList_Init(void *, s32, s32, s32, s32, s32, void *, void *);
s32 GsUtil_StrSizeInBuffer(char *, s32);
s32 GsStrPool_Add(s32, char *);
s32 GsSrvList_ClearServers(void *);
s32 GsSrvList_FreeDeadServers(void *);
s32 GsSrvList_GetServer(void *);
s32 GsSrvList_Count(void *);
s32 GsSrvList_RemoveServerAt(void *, s32);
s32 GsSrvList_FindServerByAddress(void *, u32, u32);
s32 GsSrvList_FindServer(void *);
s32 GsSrvList_AddServer(void *, void *);
s32 GsSrvList_Sort(void *);
s32 GsSrvList_Receive(void *);
s32 GsSrvList_SendNatNegCookie(void *, s32, s32, s32);
s32 GsSrvList_SendServerMessage(void *, s32, s32, s32, s32);

s32 GsServer_SetStringValue(Unk_ov065_02289174_Ctx *a, char *k, char *v);
char *GsUtil_StrTok(char *s, s32 ch);
s32 GsServer_IsKeyAllowed(char *s);
s32 GsServer_GetStringValue(void *a, char *k, s32 d);
s32 GsSrvBrowser_Halt(void *o);
s32 GsSrvBrowser_Think(void *o);
s32 GsSrvBrowser_UpdateListEx(void *o, s32 a, s32 b, u8 *data, s32 n, s32 c, s32 d, s32 e);
void GsSrvBrowser_OnQueryEvent(void *, s32, Unk_ov065_02289578_Pkt *, Unk_ov065_02289460_Obj *);
void GsSrvBrowser_OnListEvent(Unk_ov065_02289578_Sub *, s32, Unk_ov065_02289578_Pkt *, Unk_ov065_02289460_Obj *);
s32 GsSrvList_Think(void *);
s32 GsSrvList_ThinkLan(Unk_ov065_02289720_Sub *);
s32 GsStrPool_CompareCb(char **, char **);
s32 GsStrPool_FreeEntryCb(void **);
s32 GsStrPool_HashCb(void **);

}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvBrowser_UpdateListEx(void *op, s32 a, s32 b, u8 *data, s32 n, s32 c, s32 d, s32 e) {
    Unk_ov065_02289460_Obj *o = (Unk_ov065_02289460_Obj *)op;
    char buf[0x100] = {0};
    s32 i;
    s32 j;
    s32 r;
    s32 t;
    i = 0;
    o->disconnectOnComplete = b;
    o->numQueryKeys = 0;
    j = 0;
    if (n > 0) {
        do {
            u8 *pj = data + j;
            if (i + (s32)STD_GetStringLength(gGsKeyNames[*pj]) + 1 >= 0x100) {
                break;
            }
            i += OS_SPrintf(buf + i, "\\%s", gGsKeyNames[*pj]);
            GsSrvQuery_AddKey(o, *pj);
            j++;
        } while (j < n);
    }
    r = GsSrvList_SendListRequest(&o->serverList, buf, c, d, e);
    if (r == 0 && a == 0) {
        t = 10;
        while (o->serverList == 3 || (o->numActiveQueries > 0 && r == 0)) {
            GsUtil_Sleep(t);
            r = GsSrvBrowser_Think(o);
        }
    }
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvBrowser_UpdateList(void *o, s32 a, s32 b, u8 *c, s32 e, s32 f, s32 g) {
    return GsSrvBrowser_UpdateListEx(o, a, b, c, e, f, 0x80, g);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvBrowser_SendMessage(Unk_ov065_02289460_Obj *o, s32 a, u16 b, s32 c, s32 e) {
    s32 x = GsSock_InetAddr(a);
    return GsSrvList_SendServerMessage(&o->serverList, x, Unk_ov065_02289044_Htons(b), c, e);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvBrowser_SendNatNegCookie(Unk_ov065_02289460_Obj *o, s32 a, u16 b, s32 c) {
    s32 x = GsSock_InetAddr(a);
    return GsSrvList_SendNatNegCookie(&o->serverList, x, Unk_ov065_02289044_Htons(b), c);
}
}
}

namespace F02288e2c {
extern "C" {
void GsSrvBrowser_RemoveServer(Unk_ov065_02289460_Obj *o) {
    s32 r = GsSrvList_FindServer(&o->serverList);
    if (r != -1) {
        GsSrvList_RemoveServerAt(&o->serverList, r);
    }
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvBrowser_Think(void *o) {
    GsSrvQuery_Think(o);
    return GsSrvList_Think(&((Unk_ov065_02289460_Obj *)o)->serverList);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvBrowser_Halt(void *o) {
    GsSrvList_Disconnect(&((Unk_ov065_02289460_Obj *)o)->serverList);
    return GsSrvQuery_Clear(o);
}
}
}

namespace F02288e2c {
extern "C" {
void GsSrvBrowser_Clear(Unk_ov065_02289460_Obj *o) {
    GsSrvBrowser_Halt(o);
    GsSrvList_ClearServers(&o->serverList);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvBrowser_GetServer(Unk_ov065_02289460_Obj *o) {
    return GsSrvList_GetServer(&o->serverList);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvBrowser_GetServerCount(Unk_ov065_02289460_Obj *o) {
    return GsSrvList_Count(&o->serverList);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvBrowser_Sort(Unk_ov065_02289460_Obj *o) {
    Unk_ov065_02289258_Pad pad;
    GsSrvList_Sort(&o->serverList);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvBrowser_GetPublicIp(Unk_ov065_02289460_Obj *o) {
    return o->myPublicIp;
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsStrPool_HashCb(void **p) {
    return GsUtil_StrHashNoCase(*p);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsStrPool_CompareCb(char **a, char **b) {
    return func_02130b04(*a, *b);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsStrPool_FreeEntryCb(void **p) {
    return GsUtil_Free(*p);
}
}
}

namespace F02288e2c {
extern "C" {
void *GsStrPool_Get() {
    if (sGsStrPool == NULL) {
        sGsStrPool = GsHash_NewEx(8, 100, 2, (void *)GsStrPool_HashCb, (void *)GsStrPool_CompareCb, (void *)GsStrPool_FreeEntryCb);
    }
    return sGsStrPool;
}
}
}

namespace F02288e2c {
extern "C" {
void GsStrPool_FreeIfEmpty() {
    if (sGsStrPool != NULL) {
        if (GsHash_Count(sGsStrPool) == 0) {
            GsHash_Free(sGsStrPool);
            sGsStrPool = NULL;
        }
    }
}
}
}

namespace F02288e2c {
extern "C" {
void GsServer_Free(Unk_ov065_02289174_Ctx **pp) {
    Unk_ov065_02289174_Ctx *q = *pp;
    GsHash_Free(q->keyValues);
    q->keyValues = NULL;
    GsUtil_Free(q);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsServer_SetStringValue(Unk_ov065_02289174_Ctx *a, char *k, char *v) {
    Unk_ov065_02289174_KV kv;
    kv.key = GsStrPool_Add(0, k);
    kv.value = GsStrPool_Add(0, v);
    return GsHash_Insert(a->keyValues, &kv);
}
}
}

namespace F02288e2c {
extern "C" {
void GsServer_SetIntValue(void *a, char *b) {
    char buf[0x14];
    OS_SPrintf(buf, "%d");
    GsServer_SetStringValue((Unk_ov065_02289174_Ctx *)a, b, buf);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsServer_GetStringValue(void *a, char *k, s32 d) {
    Unk_ov065_0228911c_Ent *e;
    s32 key[2];
    if (a == NULL) {
        return 0;
    }
    key[0] = (s32)k;
    e = (Unk_ov065_0228911c_Ent *)GsHash_Find(((Unk_ov065_02289174_Ctx *)a)->keyValues, key);
    if (e != NULL) {
        d = e->value;
    }
    return d;
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsServer_GetIntValue(void *a, char *b, s32 c) {
    char *v;
    s32 t;
    if (strcmp(b, "ping") == 0) {
        return GsServer_GetPing(a);
    }
    v = (char *)GsServer_GetStringValue(a, b, 0);
    if (v != NULL) {
        s32 ch = *(u8 *)v;
        if (ch < 0 || ch >= 0x80) {
            t = 0;
        } else {
            t = data_0213a510[ch] & 8;
        }
        if (t != 0) {
            goto call;
        }
    }
    return c;
call:
    return func_0212b770(v);
}
}
}

namespace F02288e2c {
extern "C" {
u64 GsServer_GetFloatValue(void *a, char *b, u64 v) {
    GsServer_GetStringValue(a, b, 0);
    return v;
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsServer_GetPublicIp(s32 *o) {
    return o[0];
}
}
}

namespace F02288e2c {
extern "C" {
u16 GsServer_GetPublicPort(Unk_ov065_02289044_Hdr *o) {
    return Unk_ov065_02289044_Htons(o->port);
}
}
}

namespace F02288e2c {
extern "C" {
u16 GsServer_GetPortRaw(Unk_ov065_02289044_Hdr *o) {
    return o->port;
}
}
}

namespace F02288e2c {
extern "C" {
BOOL GsServer_HasPrivateAddress(Unk_ov065_02289044_Hdr *o) {
    if ((o->listFlags & 2) == 2) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsServer_GetPrivateIp(s32 *o) {
    return o[2];
}
}
}

namespace F02288e2c {
extern "C" {
u16 GsServer_GetPrivatePort(Unk_ov065_02289044_Hdr *o) {
    return Unk_ov065_02289044_Htons(o->port2);
}
}
}

namespace F02288e2c {
extern "C" {
void GsServer_SetNextFree(Unk_ov065_0228903c_Obj *o, s32 v) {
    o->next = v;
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsServer_GetNextFree(Unk_ov065_0228903c_Obj *o) {
    return o->next;
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsServer_IsKeyAllowed(char *s) {
    Unk_ov065_02288ffc_W l = *(Unk_ov065_02288ffc_W *)data_ov065_0228e928;
    u32 i;
    char **p = l.v;
    for (i = 0; i < 2; i++) {
        if (strcmp(s, *p) == 0) {
            return 0;
        }
        p++;
    }
    return 1;
}
}
}

namespace F02288e2c {
extern "C" {
char *GsUtil_StrTok(char *s, s32 ch) {
    char *start;
    char *p;
    s8 c;
    if (s != NULL) {
        sGsStrTokPos = s;
    }
    start = sGsStrTokPos;
    goto test;
loop:
    sGsStrTokPos++;
test:
    p = sGsStrTokPos;
    c = *p;
    if (c == 0) {
        goto out;
    }
    if (c != ch) {
        goto loop;
    }
out:
    if (p == start) {
        start = NULL;
    }
    if (c != 0) {
        sGsStrTokPos++;
        *p = 0;
    }
    return start;
}
}
}

namespace F02288e2c {
extern "C" {
void GsServer_ParseQr1Reply(Unk_ov065_02289174_Ctx *c, char *s) {
    char *k;
    char *v;
    k = GsUtil_StrTok(s + 1, 0x5c);
    if (k != NULL) {
        do {
            v = GsUtil_StrTok(NULL, 0x5c);
            if (v == NULL) {
                v = "";
            }
            if (GsServer_IsKeyAllowed(k) != 0) {
                GsServer_SetStringValue(c, k, v);
            }
            k = GsUtil_StrTok(NULL, 0x5c);
        } while (k != NULL);
    }
}
}
}

namespace F02288e2c {
extern "C" {
void GsServer_ParseQr2Reply(Unk_ov065_02289174_Ctx *c, char *p, s32 len) {
    s32 r;
    char *q;
    char *name;
    char *val;
    char *s;
    u16 cnt;
    s32 n;
    s32 i;
    s32 j;
    s32 k;
    char buf[0x80];
    while (*p != 0) {
        r = GsUtil_StrSizeInBuffer(p, len);
        if (r < 0) {
            return;
        }
        name = p;
        p += r;
        len -= r;
        r = GsUtil_StrSizeInBuffer(p, len);
        if (r < 0) {
            return;
        }
        val = p;
        p += r;
        len -= r;
        GsServer_SetStringValue(c, name, val);
    }
    p++;
    len--;
    for (i = 0; i < 2; i++) {
        if (len < 2) {
            return;
        }
        {
            u8 *b = (u8 *)&cnt;
            b[0] = ((u8 *)p)[0];
            b[1] = ((u8 *)p)[1];
        }
        cnt = Unk_ov065_02289044_Htons(cnt);
        p += 2;
        len -= 2;
        q = p;
        n = 0;
        while (*p != 0) {
            r = GsUtil_StrSizeInBuffer(p, len);
            if (r < 0 || r > 100) {
                return;
            }
            n++;
            p += r;
            len -= r;
        }
        p++;
        len--;
        for (j = 0; j < cnt; j++) {
            s = q;
            for (k = 0; k < n; k++) {
                r = GsUtil_StrSizeInBuffer(p, len);
                if (r < 0) {
                    return;
                }
                OS_SPrintf(buf, "%s%d", s, j);
                GsServer_SetStringValue(c, buf, p);
                p += r;
                len -= r;
                s += STD_GetStringLength(s) + 1;
            }
        }
    }
}
}
}

namespace F022884fc {
extern "C" {
u32 GsUtil_StrHashNoCase(u8 *s, u32 n) {
    s32 c;
    u32 h = 0;
    c = *(s8 *)s;
    if (c != 0) {
        do {
            if (c >= 0 && c < 0x80) {
                c = data_0213a410[c];
            }
            h = h * 0x9ccf9319;
            h += c;
            s++;
            c = *(s8 *)s;
        } while (c != 0);
    }
    return h % n;
}
}
}

namespace F022884fc {
extern "C" {
void GsServer_FreeKeyCb(u32 *p) {
    GsStrPool_Release(0, (void *)p[0]);
    GsStrPool_Release(0, (void *)p[1]);
}
}
}

namespace F022884fc {
extern "C" {
u32 GsServer_HashKeyCb(u32 *p, u32 n) {
    return GsUtil_StrHashNoCase((u8 *)*p, n);
}
}
}

namespace F022884fc {
extern "C" {
void GsServer_CompareKeyCb(u32 *a, u32 *b) {
    func_02130b04((void *)*a, (void *)*b);
}
}
}

namespace F022884fc {
extern "C" {
u32 GsServer_GetPing(Ent *e) {
    return e->ping;
}
}
}

namespace F022884fc {
extern "C" {
Ent *GsServer_New(s32 unused, u32 addr, u32 port) {
    Ent *e = (Ent *)GsUtil_Alloc(0x24);
    if (e == 0) {
        return 0;
    }
    e->keyValues = GsHash_NewEx(8, 8, 4, (void *)GsServer_HashKeyCb, (void *)GsServer_CompareKeyCb, (void *)GsServer_FreeKeyCb);
    if (e->keyValues == 0) {
        GsUtil_Free(e);
        return 0;
    }
    e->stateFlags = 0;
    e->listFlags = 0;
    e->next = 0;
    e->ping = 0;
    e->altAddr = 0;
    e->addr = addr;
    e->port = port;
    e->addr2 = 0;
    e->port2 = 0;
    return e;
}
}
}

namespace F022884fc {
extern "C" {
void GsServer_SetListFlags(Ent *e, u32 v) {
    e->listFlags = v;
}
}
}

namespace F022884fc {
extern "C" {
void GsServer_SetPrivateAddress(Ent *e, u32 addr, u32 port) {
    e->addr2 = addr;
    e->port2 = port;
}
}
}

namespace F022884fc {
extern "C" {
void func_ov065_02288d34(Ent *e, s32 v) {
    e->altAddr = v;
}
}
}

namespace F022884fc {
extern "C" {
void GsServer_SetFlags(Ent *e, u32 v) {
    e->stateFlags = v;
}
}
}

namespace F022884fc {
extern "C" {
u32 GsServer_GetFlags(Ent *e) {
    return e->stateFlags;
}
}
}

namespace F022884fc {
extern "C" {
BOOL GsServer_IsNull(u32 v) {
    if (v == data_ov065_022918a8) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F022884fc {
extern "C" {
void GsSrvQueue_PushBack(List *l, Ent *e) {
    if (l->tail != 0) {
        l->tail->next = e;
    }
    l->tail = e;
    e->next = 0;
    if (l->head == 0) {
        l->head = e;
    }
    l->count = l->count + 1;
}
}
}

namespace F022884fc {
extern "C" {
void GsSrvQueue_PushFront(List *l, Ent *e) {
    e->next = l->head;
    l->head = e;
    if (l->tail == 0) {
        l->tail = e;
    }
    l->count = l->count + 1;
}
}
}

namespace F022884fc {
extern "C" {
Ent *GsSrvQueue_PopFront(List *l) {
    Ent *e = l->head;
    if (e != 0) {
        l->head = e->next;
        if (l->head == 0) {
            l->tail = 0;
        }
        l->count = l->count - 1;
    }
    return e;
}
}
}

namespace F022884fc {
extern "C" {
s32 GsSrvQueue_Remove(List *l, Ent *e) {
    Ent *cur;
    Ent *prev;
    prev = 0;
    cur = l->head;
    if (cur != 0) {
        do {
            if (cur == e) {
                if (prev != 0) {
                    prev->next = cur->next;
                }
                if (l->head == cur) {
                    l->head = cur->next;
                }
                if (l->tail == cur) {
                    l->tail = prev;
                }
                l->count = l->count - 1;
                return 1;
            }
            prev = cur;
            cur = cur->next;
        } while (cur != 0);
    }
    return 0;
}
}
}

namespace F022884fc {
extern "C" {
void GsSrvQueue_Init(List *l) {
    l->tail = 0;
    l->head = l->tail;
    l->count = 0;
}
}
}
