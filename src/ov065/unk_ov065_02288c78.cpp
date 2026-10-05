// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/sb_crypt.h"
#include "net/SockAddrIn.h"
#include "net/sb_internal.h"
#include "net/gsPlatformUtil.h"

extern "C" {
char *data_ov065_0228e928[2] = {"queryid", "final"};
void *g_SBRefStrList;
char *thestr;
}

namespace F022884fc {

// ov065_066: GameSpy transport (RC4-like cipher, connection manager) 0x022884fc..0x02288df0









extern "C" {
extern u32 qr2_registered_key_list[];
extern u8 data_ov065_0228e8fc[];
extern GsSrvQueryBasicInfoStr data_ov065_0228e904;
extern GsSrvQueryStatusStr data_ov065_0228e914;
extern s32 __GSIACResult;
extern u32 SBNullServer;
extern u8 data_0213a410[];

u32 func_0213335c(u32 a, u32 b);
s32 strstr(void *a, void *b);
s32 func_02130b04(void *a, void *b);
void SocketStartUp(void);
s32 CanReceiveOnSocket(s32 s);
s32 recvfrom(s32 s, void *buf, s32 len, u32 flags, void *sa, s32 *salen);
s32 sendto(s32 s, void *buf, s32 len, u32 flags, void *sa, s32 salen);
s32 closesocket(s32 s);
s32 socket(s32 a, s32 b, s32 c);
void *GsUtil_Alloc(u32 n);
void GsUtil_Free(void *p);
void *TableNew2(s32 a, s32 b, s32 c, void *cmp, void *hash, void *free);
s32 NTSLengthSB(u8 *buf, s32 n);
void SBReleaseStr(s32 a, void *p);
void SBServerAddKeyValue(void *e, u32 v, u8 *buf);
void SBServerParseQR2FullKeysSingle(void *e, u8 *buf, s32 n);
void SBServerParseKeyVals(void *e, u8 *buf);
}

typedef GOACryptState Cipher;
typedef SBQueryEngine Mgr;
typedef _SBServer Ent;
typedef SBServerFIFO List;
typedef SockAddrIn Sa;

extern "C" {
u32 GOADecryptByte(Cipher *c, u32 x);
void GOAHashInit(Cipher *c);
u32 keyrand(Cipher *c, u32 n, u8 *key, u32 keylen, u8 *j, u32 *idx);
s32 FIFORemove(List *l, Ent *e);
void ProcessIncomingReplies(Mgr *m, s32 flag);
void TimeoutOldQueries(Mgr *m);
void QueueNextQueries(Mgr *m);
void QEStartQuery(Mgr *m, Ent *e);
s32 ParseSingleICMPReply(Mgr *m, Ent *e, u8 *buf, s32 n);
void ParseSingleGOAReply(Mgr *m, Ent *e, u8 *buf, s32 n);
void ParseSingleQR2Reply(Mgr *m, Ent *e, u8 *buf, s32 n);
void FIFOClear(List *l);
Ent *FIFOGetFirst(List *l);
void FIFOAddFront(List *l, Ent *e);
void FIFOAddRear(List *l, Ent *e);
void KeyValCompareKey(u32 *a, u32 *b);
u32 KeyValHashKey(u32 *p, u32 n);
void KeyValFree(u32 *p);
u32 StringHash(u8 *s, u32 n);

}
}

namespace F02288e2c {

// ov065_067: GameSpy-like key/value parsing, hash table wrappers, connection object (0x02288e2c..0x02289720)













static inline u16 Unk_ov065_02289044_Htons(u16 x) {
    return (x >> 8 & 0xff) | ((x << 8) & 0xff00);
}

extern "C" {
extern char *thestr;
extern void *g_SBRefStrList;
extern char *data_ov065_0228e928[2];
extern char *qr2_registered_key_list[];
extern u16 data_0213a510[];
extern s32 __GSIACResult;
extern s32 SBNullServer;

s32 strcmp(const char *, const char *);
u32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 atol(char *);
s32 func_02130b04(char *, char *);

s32 GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
s32 ArrayLength(void *);
void *TableLookup(void *, void *);
s32 TableEnter(void *, void *);
s32 TableCount(void *);
s32 TableFree(void *);
void *TableNew2(s32, s32, s32, void *, void *, void *);
s32 inet_addr(s32);
s32 recvfrom(s32, void *, s32, s32, void *, void *);
s32 closesocket(s32);
s32 CanReceiveOnSocket(s32);
s32 msleep(s32);
s32 SBQueryEngineRemoveServerFromFIFOs(void *, void *);
s32 SBQueryEngineAddQueryKey(void *, s32);
s32 SBQueryEngineThink(void *);
s32 SBQueryEngineUpdateServer(void *, void *, s32, s32);
s32 SBEngineCleanup(void *);
s32 SBEngineHaltUpdates(void *);
s32 SBQueryEngineSetPublicIP(void *, s32);
s32 SBQueryEngineInit(void *, s32, s32, s32, void *, void *);
s32 SBIsNullServer(void *);
s32 SBServerSetFlags(void *, s32);
void *SBAllocServer(void *, u32, u32);
s32 SBServerGetPing(void *);
s32 StringHash(void *);
s32 SBServerListCleanup(void *);
s32 SBServerListDisconnect(void *);
s32 SBServerListConnectAndQuery(void *, char *, s32, s32, s32);
s32 SBServerListInit(void *, s32, s32, s32, s32, s32, void *, void *);
s32 NTSLengthSB(char *, s32);
s32 SBRefStr(s32, char *);
s32 SBServerListClear(void *);
s32 SBFreeDeadList(void *);
s32 SBServerListNth(void *);
s32 SBServerListCount(void *);
s32 SBServerListRemoveAt(void *, s32);
s32 SBServerListFindServerByIP(void *, u32, u32);
s32 SBServerListFindServer(void *);
s32 SBServerListAppendServer(void *, void *);
s32 SBServerListSort(void *);
s32 ProcessIncomingData(void *);
s32 SBSendNatNegotiateCookieToServer(void *, s32, s32, s32);
s32 SBSendMessageToServer(void *, s32, s32, s32, s32);

s32 SBServerAddKeyValue(_SBServer *a, char *k, char *v);
char *mytok(char *s, s32 ch);
s32 CheckValidKey(char *s);
s32 SBServerGetStringValueA(void *a, char *k, s32 d);
s32 ServerBrowserHalt(void *o);
s32 ServerBrowserThink(void *o);
s32 ServerBrowserBeginUpdate2(void *o, s32 a, s32 b, u8 *data, s32 n, s32 c, s32 d, s32 e);
void EngineCallback(void *, s32, _SBServer *, _ServerBrowser *);
void ListCallback(SBServerList *, s32, _SBServer *, _ServerBrowser *);
s32 SBListThink(void *);
s32 ProcessLanData(SBServerList *);
s32 RefStringCompare(char **, char **);
s32 RefStringFree(void **);
s32 RefStringHash(void **);

}
}

namespace F02288e2c {
extern "C" {
s32 ServerBrowserBeginUpdate2(void *op, s32 a, s32 b, u8 *data, s32 n, s32 c, s32 d, s32 e) {
    _ServerBrowser *o = (_ServerBrowser *)op;
    char buf[0x100] = {0};
    s32 i;
    s32 j;
    s32 r;
    s32 t;
    i = 0;
    o->disconnectFlag = b;
    o->engine.numserverkeys = 0;
    j = 0;
    if (n > 0) {
        do {
            u8 *pj = data + j;
            if (i + (s32)STD_GetStringLength(qr2_registered_key_list[*pj]) + 1 >= 0x100) {
                break;
            }
            i += OS_SPrintf(buf + i, "\\%s", qr2_registered_key_list[*pj]);
            SBQueryEngineAddQueryKey(o, *pj);
            j++;
        } while (j < n);
    }
    r = SBServerListConnectAndQuery(&o->list, buf, c, d, e);
    if (r == 0 && a == 0) {
        t = 10;
        while (o->list.state == 3 || (o->engine.querylist.count > 0 && r == 0)) {
            msleep(t);
            r = ServerBrowserThink(o);
        }
    }
}
}
}

namespace F02288e2c {
extern "C" {
s32 ServerBrowserLimitUpdateA(void *o, s32 a, s32 b, u8 *c, s32 e, s32 f, s32 g) {
    return ServerBrowserBeginUpdate2(o, a, b, c, e, f, 0x80, g);
}
}
}

namespace F02288e2c {
extern "C" {
s32 ServerBrowserSendMessageToServerA(_ServerBrowser *o, s32 a, u16 b, s32 c, s32 e) {
    s32 x = inet_addr(a);
    return SBSendMessageToServer(&o->list, x, Unk_ov065_02289044_Htons(b), c, e);
}
}
}

namespace F02288e2c {
extern "C" {
s32 ServerBrowserSendNatNegotiateCookieToServerA(_ServerBrowser *o, s32 a, u16 b, s32 c) {
    s32 x = inet_addr(a);
    return SBSendNatNegotiateCookieToServer(&o->list, x, Unk_ov065_02289044_Htons(b), c);
}
}
}

namespace F02288e2c {
extern "C" {
void ServerBrowserRemoveServer(_ServerBrowser *o) {
    s32 r = SBServerListFindServer(&o->list);
    if (r != -1) {
        SBServerListRemoveAt(&o->list, r);
    }
}
}
}

namespace F02288e2c {
extern "C" {
s32 ServerBrowserThink(void *o) {
    SBQueryEngineThink(o);
    return SBListThink(&((_ServerBrowser *)o)->list);
}
}
}

namespace F02288e2c {
extern "C" {
s32 ServerBrowserHalt(void *o) {
    SBServerListDisconnect(&((_ServerBrowser *)o)->list);
    return SBEngineHaltUpdates(o);
}
}
}

namespace F02288e2c {
extern "C" {
void ServerBrowserClear(_ServerBrowser *o) {
    ServerBrowserHalt(o);
    SBServerListClear(&o->list);
}
}
}

namespace F02288e2c {
extern "C" {
s32 ServerBrowserGetServer(_ServerBrowser *o) {
    return SBServerListNth(&o->list);
}
}
}

namespace F02288e2c {
extern "C" {
s32 ServerBrowserCount(_ServerBrowser *o) {
    return SBServerListCount(&o->list);
}
}
}

namespace F02288e2c {
extern "C" {
s32 ServerBrowserSortA(_ServerBrowser *o) {
    GsSrvSortStackPad pad;
    SBServerListSort(&o->list);
}
}
}

namespace F02288e2c {
extern "C" {
s32 ServerBrowserGetMyPublicIPAddr(_ServerBrowser *o) {
    return o->list.mypublicip;
}
}
}

namespace F02288e2c {
extern "C" {
s32 RefStringHash(void **p) {
    return StringHash(*p);
}
}
}

namespace F02288e2c {
extern "C" {
s32 RefStringCompare(char **a, char **b) {
    return func_02130b04(*a, *b);
}
}
}

namespace F02288e2c {
extern "C" {
s32 RefStringFree(void **p) {
    return GsUtil_Free(*p);
}
}
}

namespace F02288e2c {
extern "C" {
void *SBRefStrHash() {
    if (g_SBRefStrList == NULL) {
        g_SBRefStrList = TableNew2(8, 100, 2, (void *)RefStringHash, (void *)RefStringCompare, (void *)RefStringFree);
    }
    return g_SBRefStrList;
}
}
}

namespace F02288e2c {
extern "C" {
void SBRefStrHashCleanup() {
    if (g_SBRefStrList != NULL) {
        if (TableCount(g_SBRefStrList) == 0) {
            TableFree(g_SBRefStrList);
            g_SBRefStrList = NULL;
        }
    }
}
}
}

namespace F02288e2c {
extern "C" {
void SBServerFree(_SBServer **pp) {
    _SBServer *q = *pp;
    TableFree(q->keyvals);
    q->keyvals = NULL;
    GsUtil_Free(q);
}
}
}

namespace F02288e2c {
extern "C" {
s32 SBServerAddKeyValue(_SBServer *a, char *k, char *v) {
    SBKeyValuePair kv;
    kv.key = SBRefStr(0, k);
    kv.value = SBRefStr(0, v);
    return TableEnter(a->keyvals, &kv);
}
}
}

namespace F02288e2c {
extern "C" {
void SBServerAddIntKeyValue(void *a, char *b) {
    char buf[0x14];
    OS_SPrintf(buf, "%d");
    SBServerAddKeyValue((_SBServer *)a, b, buf);
}
}
}

namespace F02288e2c {
extern "C" {
s32 SBServerGetStringValueA(void *a, char *k, s32 d) {
    SBKeyValuePair *e;
    s32 key[2];
    if (a == NULL) {
        return 0;
    }
    key[0] = (s32)k;
    e = (SBKeyValuePair *)TableLookup(((_SBServer *)a)->keyvals, key);
    if (e != NULL) {
        d = e->value;
    }
    return d;
}
}
}

namespace F02288e2c {
extern "C" {
s32 SBServerGetIntValueA(void *a, char *b, s32 c) {
    char *v;
    s32 t;
    if (strcmp(b, "ping") == 0) {
        return SBServerGetPing(a);
    }
    v = (char *)SBServerGetStringValueA(a, b, 0);
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
    return atol(v);
}
}
}

namespace F02288e2c {
extern "C" {
u64 SBServerGetFloatValueA(void *a, char *b, u64 v) {
    SBServerGetStringValueA(a, b, 0);
    return v;
}
}
}

namespace F02288e2c {
extern "C" {
s32 SBServerGetPublicInetAddress(s32 *o) {
    return o[0];
}
}
}

namespace F02288e2c {
extern "C" {
u16 SBServerGetPublicQueryPort(_SBServer *o) {
    return Unk_ov065_02289044_Htons(o->publicport);
}
}
}

namespace F02288e2c {
extern "C" {
u16 SBServerGetPublicQueryPortNBO(_SBServer *o) {
    return o->publicport;
}
}
}

namespace F02288e2c {
extern "C" {
BOOL SBServerHasPrivateAddress(_SBServer *o) {
    if ((o->flags & 2) == 2) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F02288e2c {
extern "C" {
s32 SBServerGetPrivateInetAddress(s32 *o) {
    return o[2];
}
}
}

namespace F02288e2c {
extern "C" {
u16 SBServerGetPrivateQueryPort(_SBServer *o) {
    return Unk_ov065_02289044_Htons(o->privateport);
}
}
}

namespace F02288e2c {
extern "C" {
void SBServerSetNext(_SBServer *o, s32 v) {
    o->next = (_SBServer *)v;
}
}
}

namespace F02288e2c {
extern "C" {
s32 SBServerGetNext(_SBServer *o) {
    return (s32)o->next;
}
}
}

namespace F02288e2c {
extern "C" {
s32 CheckValidKey(char *s) {
    GsServerIgnoredKeys l = *(GsServerIgnoredKeys *)data_ov065_0228e928;
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
char *mytok(char *s, s32 ch) {
    char *start;
    char *p;
    s8 c;
    if (s != NULL) {
        thestr = s;
    }
    start = thestr;
    goto test;
loop:
    thestr++;
test:
    p = thestr;
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
        thestr++;
        *p = 0;
    }
    return start;
}
}
}

namespace F02288e2c {
extern "C" {
void SBServerParseKeyVals(_SBServer *c, char *s) {
    char *k;
    char *v;
    k = mytok(s + 1, 0x5c);
    if (k != NULL) {
        do {
            v = mytok(NULL, 0x5c);
            if (v == NULL) {
                v = "";
            }
            if (CheckValidKey(k) != 0) {
                SBServerAddKeyValue(c, k, v);
            }
            k = mytok(NULL, 0x5c);
        } while (k != NULL);
    }
}
}
}

namespace F02288e2c {
extern "C" {
void SBServerParseQR2FullKeysSingle(_SBServer *c, char *p, s32 len) {
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
        r = NTSLengthSB(p, len);
        if (r < 0) {
            return;
        }
        name = p;
        p += r;
        len -= r;
        r = NTSLengthSB(p, len);
        if (r < 0) {
            return;
        }
        val = p;
        p += r;
        len -= r;
        SBServerAddKeyValue(c, name, val);
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
            r = NTSLengthSB(p, len);
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
                r = NTSLengthSB(p, len);
                if (r < 0) {
                    return;
                }
                OS_SPrintf(buf, "%s%d", s, j);
                SBServerAddKeyValue(c, buf, p);
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
u32 StringHash(u8 *s, u32 n) {
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
void KeyValFree(u32 *p) {
    SBReleaseStr(0, (void *)p[0]);
    SBReleaseStr(0, (void *)p[1]);
}
}
}

namespace F022884fc {
extern "C" {
u32 KeyValHashKey(u32 *p, u32 n) {
    return StringHash((u8 *)*p, n);
}
}
}

namespace F022884fc {
extern "C" {
void KeyValCompareKey(u32 *a, u32 *b) {
    func_02130b04((void *)*a, (void *)*b);
}
}
}

namespace F022884fc {
extern "C" {
u32 SBServerGetPing(Ent *e) {
    return e->updatetime;
}
}
}

namespace F022884fc {
extern "C" {
Ent *SBAllocServer(s32 unused, u32 addr, u32 port) {
    Ent *e = (Ent *)GsUtil_Alloc(0x24);
    if (e == 0) {
        return 0;
    }
    e->keyvals = TableNew2(8, 8, 4, (void *)KeyValHashKey, (void *)KeyValCompareKey, (void *)KeyValFree);
    if (e->keyvals == 0) {
        GsUtil_Free(e);
        return 0;
    }
    e->state = 0;
    e->flags = 0;
    e->next = 0;
    e->updatetime = 0;
    e->icmpip = 0;
    e->publicip = addr;
    e->publicport = port;
    e->privateip = 0;
    e->privateport = 0;
    return e;
}
}
}

namespace F022884fc {
extern "C" {
void SBServerSetFlags(Ent *e, u32 v) {
    e->flags = v;
}
}
}

namespace F022884fc {
extern "C" {
void SBServerSetPrivateAddr(Ent *e, u32 addr, u32 port) {
    e->privateip = addr;
    e->privateport = port;
}
}
}

namespace F022884fc {
extern "C" {
void SBServerSetICMPIP(Ent *e, s32 v) {
    e->icmpip = v;
}
}
}

namespace F022884fc {
extern "C" {
void SBServerSetState(Ent *e, u32 v) {
    e->state = v;
}
}
}

namespace F022884fc {
extern "C" {
u32 SBServerGetState(Ent *e) {
    return e->state;
}
}
}

namespace F022884fc {
extern "C" {
BOOL SBIsNullServer(u32 v) {
    if (v == SBNullServer) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F022884fc {
extern "C" {
void FIFOAddRear(List *l, Ent *e) {
    if (l->last != 0) {
        l->last->next = e;
    }
    l->last = e;
    e->next = 0;
    if (l->first == 0) {
        l->first = e;
    }
    l->count = l->count + 1;
}
}
}

namespace F022884fc {
extern "C" {
void FIFOAddFront(List *l, Ent *e) {
    e->next = l->first;
    l->first = e;
    if (l->last == 0) {
        l->last = e;
    }
    l->count = l->count + 1;
}
}
}

namespace F022884fc {
extern "C" {
Ent *FIFOGetFirst(List *l) {
    Ent *e = l->first;
    if (e != 0) {
        l->first = e->next;
        if (l->first == 0) {
            l->last = 0;
        }
        l->count = l->count - 1;
    }
    return e;
}
}
}

namespace F022884fc {
extern "C" {
s32 FIFORemove(List *l, Ent *e) {
    Ent *cur;
    Ent *prev;
    prev = 0;
    cur = l->first;
    if (cur != 0) {
        do {
            if (cur == e) {
                if (prev != 0) {
                    prev->next = cur->next;
                }
                if (l->first == cur) {
                    l->first = cur->next;
                }
                if (l->last == cur) {
                    l->last = prev;
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
void FIFOClear(List *l) {
    l->last = 0;
    l->first = l->last;
    l->count = 0;
}
}
}
