// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU48: GP gpiProfile.c (0x0228176c..0x02281a5c)

namespace Na {
// ov065_055: friend/auth connection task list (0x02280e7c..0x0228176c)

struct Unk_ov065_022786bc_Vec;

struct Unk_ov065_02280e7c_Node {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    char *unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    char *unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    Unk_ov065_022786bc_Vec *unk_38;
    Unk_ov065_02280e7c_Node *unk_3c;
};

struct Unk_ov065_02280e7c_Ctx {
    u8 pad_000[0x110];
    char unk_110[0x67];
    char unk_177[0x29];
    s32 unk_1a0;
    u8 pad_1a4[0x18];
    s32 unk_1bc;
    s32 unk_1c0;
    u8 pad_1c4[0x40];
    s32 unk_204;
    u8 pad_208[0x22c];
    Unk_ov065_02280e7c_Node *unk_434;
};

struct Unk_ov065_02280e7c_Ent {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    char *unk_18;
};

struct Unk_ov065_02280e7c_Pair {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_02280e7c_Pair() {}
    Unk_ov065_02280e7c_Pair(s32 a, s32 b) { unk_00 = a; unk_04 = b; }
};

struct Unk_ov065_02280e7c_Pair2 {
    Unk_ov065_02280e7c_Pair p;
};

struct Unk_ov065_02280e7c_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

typedef Unk_ov065_02280e7c_Ctx Ctx0228;
typedef Unk_ov065_02280e7c_Node Node0228;
typedef Unk_ov065_02280e7c_Ent Ent0228;
typedef Unk_ov065_02280e7c_Pair Pair0228;
typedef Unk_ov065_02280e7c_Sub Sub0228;

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
char *func_02129f1c(const char *, const char *);
s32 strcmp(const char *, const char *);
s32 func_0212b770(const char *);
s32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
void *func_0212899c(void *, s32, s32);

void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
Unk_ov065_022786bc_Vec *GsArray_New(s32, s32, void (*)(void *));
void GsArray_DeleteAt(Unk_ov065_022786bc_Vec *, s32);
void *GsArray_At(Unk_ov065_022786bc_Vec *, s32);
s32 GsArray_Count(Unk_ov065_022786bc_Vec *);
void GsArray_Free(Unk_ov065_022786bc_Vec *);
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
s32 GsGp_SendGetProfile(Ctx0228 **, s32, char *);
s32 GsGp_AddOperation(Ctx0228 **, s32, s32, Ent0228 **, s32, s32, s32);
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

struct Unk_ov065_02281974_Pair {
    s32 a;
    s32 b;
};

struct Unk_ov065_02281974_Nest {
    Unk_ov065_02281974_Pair p;
};

struct Unk_ov065_02281790_Sub {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
};

struct Unk_ov065_02281790_Elem {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_02281790_Sub *unk_08;
    s32 unk_0c;
    void *unk_10;
    s32 unk_14;
    void *unk_18;
};

struct Unk_ov065_02281790_Conn {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    u8 pad_0c[0x18 - 0x0c];
    char *unk_18;
    u8 pad_1c[0x28 - 0x1c];
    char unk_28[0x1f];
    char unk_47[0x15];
    char unk_5c[0x33];
    char unk_8f[0x1f];
    char unk_ae[0x1f];
    char unk_cd[0x1f];
    char unk_ec[0x130 - 0xec];
    s32 unk_130;
    s32 unk_134;
    s32 unk_138;
    s32 unk_13c;
    s32 unk_140;
};

struct Unk_ov065_02281790_Node {
    s32 unk_00;
    Unk_ov065_02281790_Conn *unk_04;
    Unk_ov065_02281790_Sub *unk_08;
    Unk_ov065_02281974_Nest unk_0c;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    Unk_ov065_02281790_Node *unk_20;
};

struct Unk_ov065_02281790_Ctx {
    u8 pad_000[0x198];
    s32 unk_198;
    u8 pad_19c[4];
    s32 unk_1a0;
    u8 pad_1a4[0x210 - 0x1a4];
    s32 unk_210;
    u8 pad_214[0x418 - 0x214];
    s32 unk_418;
    u8 pad_41c[0x424 - 0x41c];
    Unk_ov065_02281790_Node *unk_424;
    void *unk_428;
    s32 unk_42c;
    s32 unk_430;
    u8 pad_434[0x46c - 0x434];
    s32 unk_46c;
    s32 unk_470;
};

typedef Unk_ov065_02281790_Ctx Ctx0228;
typedef Unk_ov065_02281790_Node Node0228;
typedef Unk_ov065_02281790_Elem Elem0228;
typedef Unk_ov065_02281790_Conn Conn0228;


extern "C" {

extern char data_ov065_0228db1c[];

typedef s32 (*Unk_ov065_022817c8_Cb)(Ctx0228 **, Node0228 *, void *);

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
s32 GsGp_QueueCallback(Ctx0228 **, Unk_ov065_02281974_Pair, void *, void *, s32);
void GsGp_RemoveOperation(Ctx0228 **, Node0228 *);
void GsGp_FreeCachedInfo(void *);
s32 strncmp(const char *, const char *, s32);
s32 strcmp(const char *, const char *);
s32 func_0212b770(void *);

s32 GsGpSearch_Process(Ctx0228 **, Node0228 *);
s32 GsGpProfile_MatchBuddyIndexCb(Ctx0228 **, Node0228 *, void *);
s32 GsGpProfile_FindIfAdapter(Node0228 *, void *);
s32 GsGpProfile_MatchNickEmailCb(Ctx0228 **, Node0228 *, void *);
s32 GsGpProfile_Find(Ctx0228 **, s32, void *);
void GsGpProfile_FreeEntry(void *);
s32 GsGpProfile_FindIf(Ctx0228 **, Unk_ov065_022817c8_Cb, void *);
s32 GsGpProfile_CompareId(s32 *, s32 *);
s32 GsGpProfile_HashId(s32 *, s32);

struct Unk_ov065_02281790_L1 {
    s32 a;
    Node0228 *r;
};



struct Unk_ov065_022817c8_Args {
    Ctx0228 **h;
    Unk_ov065_022817c8_Cb cb;
    void *arg;
};



struct Unk_ov065_02281814_L {
    s32 a;
    s32 b;
    s32 *out;
    s32 f;
};






static inline void Unk_ov065_022818f4_Zero(Elem0228 *e) {
    e->unk_00 = 0;
    e->unk_04 = 0;
    e->unk_08 = 0;
    e->unk_0c = 0;
    e->unk_10 = 0;
    e->unk_14 = 0;
    e->unk_18 = 0;
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
void *func_0212899c(void *, s32, s32);
char *func_02127838(char *, const char *);
char *func_02129f1c(const char *, const char *);
void GsUtil_Sleep(s32);
s32 GsGpSearch_ProfileSearch(Ctx0228 **, char *, char *, char *, char *, char *, s32, s32, void *, s32, s32);

struct Unk_ov065_02281bf4_Rec {
    s32 unk_00;
    char unk_04[0x1f];
    char unk_23[0x15];
    char unk_38[0x1f];
    char unk_57[0x1f];
    char unk_76[0x33];
    u8 pad_a9[3];
};

struct Unk_ov065_02281bf4_Res2 {
    s32 unk_00;
    char unk_04[0x34];
    s32 unk_38;
};

struct Unk_ov065_02281bf4_Res3 {
    s32 unk_00;
    char unk_04[0x34];
    s32 unk_38;
    char **unk_3c;
    char **unk_40;
};

struct Unk_ov065_02281bf4_Ent {
    s32 unk_00;
    char unk_04[0x1f];
    u8 pad_23;
    s32 unk_24;
    char unk_28[0x100];
};

struct Unk_ov065_02281bf4_Res4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_ov065_02281bf4_Ent *unk_0c;
};

struct Unk_ov065_02281bf4_Res7 {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_02281bf4_Rec *unk_08;
};

struct Unk_ov065_02281bf4_Res8 {
    s32 unk_00;
    s32 unk_04;
    char **unk_08;
};

struct Unk_ov065_02281bf4_Res5 {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_02281bf4_S1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_ov065_02281bf4_Rec *unk_0c;
};

#define ERR3() { GsGp_SetError(h, 1, data_ov065_0228dcec); GsGp_CallErrorCallback(h, 3, 1); return 3; }
#define ERRMEM(m) { GsGp_SetErrorString(h, m); return 1; }
#define GETTOK(t) r = GsGp_ReadKeyValue(h, c->unk_08, &pos, t, buf); if (r != 0) { return r; }


}
extern "C" {
void *GsGpProfile_FindByBuddyIndex(Ctx0228 **h, s32 a);
s32 GsGpProfile_MatchBuddyIndexCb(Ctx0228 **, Node0228 *n, void *arg);
s32 GsGpProfile_FindIf(Ctx0228 **h, Unk_ov065_022817c8_Cb cb, void *arg);
s32 GsGpProfile_FindIfAdapter(Node0228 *n, void *p);
s32 GsGpProfile_FindByNickEmail(Ctx0228 **h, s32 a, s32 b, s32 *out);
s32 GsGpProfile_MatchNickEmailCb(Ctx0228 **, Node0228 *n, void *arg);
s32 GsGpProfile_Remove(Ctx0228 **h, void *n);
void GsGpProfile_RemoveById(Ctx0228 **h, s32 a);
s32 GsGpProfile_Find(Ctx0228 **h, s32 a, void *out);
s32 GsGpProfile_Add(Ctx0228 **h, s32 a);
s32 GsGp_ProcessNewProfileReply(Ctx0228 **h, Node0228 *n, char *s);
}
}

namespace Nb {
extern "C" {
s32 GsGp_ProcessNewProfileReply(Ctx0228 **h, Node0228 *n, char *s) {
    char buf[0x10];
    s32 v;
    Unk_ov065_02281974_Nest pr;
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
    v = func_0212b770(buf);
    pr = n->unk_0c;
    if (pr.p.a != 0) {
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
    void **t = &(*h)->unk_428;
    if (a <= 0) {
        return 0;
    }
    if (GsGpProfile_Find(h, a, &out) != 0) {
        return (s32)out;
    }
    Elem0228 tmp;
    u32 ad = (u32)&tmp;
    Unk_ov065_022818f4_Zero((Elem0228 *)ad);
    tmp.unk_00 = a;
    tmp.unk_04 = 0;
    tmp.unk_0c = 0;
    tmp.unk_10 = 0;
    tmp.unk_18 = 0;
    tmp.unk_14 = 0;
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
    key.unk_00 = a;
    r = GsHash_Find(c->unk_428, &key);
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
        GsHash_Remove(c->unk_428, out);
    }
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_Remove(Ctx0228 **h, void *n) {
    return GsHash_Remove((*h)->unk_428, n);
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_MatchNickEmailCb(Ctx0228 **, Node0228 *n, void *arg) {
    Unk_ov065_02281814_L *l = (Unk_ov065_02281814_L *)arg;
    char **e = (char **)n->unk_0c.p.a;
    if (e != 0) {
        if (strcmp((const char *)l->a, e[0]) == 0) {
            if (strcmp((const char *)l->b, e[2]) == 0) {
                *(Node0228 **)l->out = n;
                l->f = 1;
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
    Unk_ov065_02281814_L l;
    l.a = a;
    l.b = b;
    l.out = out;
    l.f = 0;
    GsGpProfile_FindIf(h, GsGpProfile_MatchNickEmailCb, &l);
    if (l.f == 0) {
        *out = 0;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_FindIfAdapter(Node0228 *n, void *p) {
    Unk_ov065_022817c8_Args *a = (Unk_ov065_022817c8_Args *)p;
    return a->cb(a->h, n, a->arg);
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_FindIf(Ctx0228 **h, Unk_ov065_022817c8_Cb cb, void *arg) {
    Unk_ov065_022817c8_Args a;
    Ctx0228 *c = *h;
    a.h = h;
    a.cb = cb;
    a.arg = arg;
    if (GsHash_FindIf(c->unk_428, (s32 (*)(void *, void *))GsGpProfile_FindIfAdapter, &a) == 0) {
        return 1;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpProfile_MatchBuddyIndexCb(Ctx0228 **, Node0228 *n, void *arg) {
    Unk_ov065_02281790_L1 *l = (Unk_ov065_02281790_L1 *)arg;
    if (n->unk_08 != 0 && l->a == n->unk_08->unk_00) {
        l->r = n;
        return 0;
    }
    return 1;
}
}
}

namespace Nb {
extern "C" {
void *GsGpProfile_FindByBuddyIndex(Ctx0228 **h, s32 a) {
    Unk_ov065_02281790_L1 l;
    l.a = a;
    l.r = 0;
    GsGpProfile_FindIf(h, GsGpProfile_MatchBuddyIndexCb, &l);
    return l.r;
}
}
}

namespace Na {
extern "C" {
s32 GsGpProfile_IsUnused(Ent0228 *e) {
    if (e != NULL && e->unk_0c == 0 && e->unk_08 == 0 && e->unk_18 == NULL && e->unk_10 == 0) {
        return 1;
    }
    return 0;
}
}
}
