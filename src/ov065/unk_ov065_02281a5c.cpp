// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU49: GP gpiSearch.c (0x02281a5c..0x02283304)

namespace Nb {
// ov065_057: search manager connect / parse helpers (0x02282f90..)
struct Unk_ov065_02282f90_Ctx {
    char unk_000[0x100];
    u8 pad_100[0x418 - 0x100];
    s32 unk_418;
};

struct Unk_ov065_02282f90_Handle {
    Unk_ov065_02282f90_Ctx *unk_00;
};

struct Unk_ov065_02282f90_Conn {
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
    char unk_28[0x1f];
    char unk_47[0x15];
    char unk_5c[0x33];
    char unk_8f[0x1f];
    char unk_ae[0x1f];
    u8 pad_cd[0x130 - 0xcd];
    s32 unk_130;
    s32 unk_134;
    s32 unk_138;
    s32 unk_13c;
    s32 unk_140;
};

struct Unk_ov065_022831c0_Sock {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    s32 unk_0c;
};

struct Unk_ov065_022831c0_Obj {
    s32 unk_00;
    Unk_ov065_022831c0_Sock *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
};

struct Unk_ov065_022831c0_Host {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 **unk_0c;
};

struct Unk_ov065_022831c0_Addr {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
};

struct Unk_ov065_022833b4_Pair {
    s32 v[2];
};

struct Unk_ov065_022833b4_Src {
    u8 pad_00[0xc];
    Unk_ov065_022833b4_Pair unk_0c;
};

struct Unk_ov065_022837bc_Ent {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    void *unk_18;
};

struct Unk_ov065_02283744_Buf {
    u8 b[16];
};

extern "C" {
void GsPersist_XorCrypt(char *, s32);
s32 GsPersist_DispatchReply(char *, s32);
s32 GsPersist_FindFinal(char *, s32);
void GsUtil_StrToLower(char *);
s32 GsGp_AddOperation(void *, s32, void *, void *, s32, s32, s32);
s32 GsGp_ProcessConnection(void *, s32);
void *GsUtil_Alloc(u32);
s32 GsSock_Socket(s32, s32, s32);
s32 GsSock_SetBlocking(s32, s32);
Unk_ov065_022831c0_Host *Sock_GetHostByName(const char *);
s32 GsSock_Connect(s32, void *, s32);
s32 GsSock_GetLastError(s32);
void GsGp_CallErrorCallback(void *, s32, s32);
s32 GsGpPeer_SendTransferHeader(void *, s32, s32, void *);
s32 GsGpPeer_SendString(void *, s32, char *);
s32 GsGpPeer_SendMessageBody(void *, s32, const char *, s32);
s32 GsGp_QueueCallback(void *, Unk_ov065_022833b4_Pair, void *, void *, s32);
void GsGp_RemoveOperation(void *, void *);
s32 GsSock_Select(s32, s32, s32 *, s32 *);
s32 GsArray_Count(void *);
void GsArray_Free(void *);
void *GsArray_At(void *, s32);
void GsArray_DeleteAt(void *, s32);
char *func_0212a2ec(char *dst, const char *src, u32 n);
char *func_02129f1c(const char *, const char *);
s32 STD_GetStringLength(const char *);
s32 strncmp(const char *, const char *, u32);
s32 OS_SPrintf(char *buf, const char *fmt, ...);
s32 func_02128ca4(const char *, const char *, ...);
s32 func_0212b770(const char *);
s32 func_0212899c(void *, s32, u32);

void GsGp_SetErrorString(void *, const char *);
void GsGp_SetError(void *, s32, const char *);
void GsGp_DebugLog(void *, const char *, ...);
void GsUtil_StrCopyN(char *, const char *, s32);
s32 GsGp_GetValue(const char *, const char *, char *, s32);
s32 GsGp_CheckServerError(void *, const char *, s32);
s32 GsGpSearch_NewData(void *, void *, s32);
s32 GsGpSearch_Start(void *, void *, s32, s32, s32);
s32 GsGpSearch_Connect(void *, void *);
s32 GsGpPeer_SendTransferReply(void *, s32 *, s32, s32, const char *);
s32 GsPersist_CompleteRequest(s32, s32, s32, void *, s32);
}

}

namespace Na {
// ov065_056: search result parsing (0x02281a5c..0x02282f90)
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
extern char sGsGameName[];

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

#define ERR3() { GsGp_SetError(h, 1, "Error reading from the search server."); GsGp_CallErrorCallback(h, 3, 1); return 3; }
#define ERRMEM(m) { GsGp_SetErrorString(h, m); return 1; }
#define GETTOK(t) r = GsGp_ReadKeyValue(h, c->unk_08, &pos, t, buf); if (r != 0) { return r; }

}
}

namespace Nb {
extern "C" {

char data_ov065_0228dadc[0x40] = "gpsp.gs.nintendowifi.net";
}
}
namespace Nb {
extern "C" {
s32 GsGpSearch_Connect(void *h0, void *o0) {
    Unk_ov065_02282f90_Handle *h = (Unk_ov065_02282f90_Handle *)h0;
    Unk_ov065_022831c0_Obj *o = (Unk_ov065_022831c0_Obj *)o0;
    Unk_ov065_022831c0_Sock *s = o->unk_04;
    Unk_ov065_022831c0_Host *ent;
    Unk_ov065_022831c0_Addr sa;
    s32 r;
    s32 m;
    s->unk_0c = 0x1000;
    s->unk_08 = (char *)GsUtil_Alloc(s->unk_0c + 1);
    if (s->unk_08 == NULL) {
        GsGp_SetErrorString(h, "Out of memory.");
        return 1;
    }
    s->unk_04 = GsSock_Socket(2, 1, 0);
    if (s->unk_04 == -1) {
        GsGp_SetError(h, 5, "There was an error creating a socket.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    if (GsSock_SetBlocking(s->unk_04, 0) == 0) {
        GsGp_SetError(h, 5, "There was an error making a socket non-blocking.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    ent = Sock_GetHostByName(data_ov065_0228dadc);
    if (ent == NULL) {
        GsGp_SetError(h, 5, "Could not resolve search mananger host name.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    u32 *w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.unk_01 = 2;
    sa.unk_04 = **ent->unk_0c;
    sa.unk_02 = 0xcd74;
    if (GsSock_Connect(s->unk_04, &sa, 8) == -1) {
        r = GsSock_GetLastError(s->unk_04);
        if (r != -6 && r != -0x1a && r != -0x4c) {
            GsGp_SetError(h, 5, "There was an error connecting a socket.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
    }
    o->unk_14 = 1;
    return 0;
}

s32 GsGpSearch_NewData(void *h0, void *out, s32 p2) {
    Unk_ov065_02282f90_Conn *cn;
    Unk_ov065_02282f90_Handle *h = (Unk_ov065_02282f90_Handle *)h0;
    cn = (Unk_ov065_02282f90_Conn *)GsUtil_Alloc(0x144);
    if (cn == NULL) {
        GsGp_SetErrorString(h, "Out of memory.");
        return 1;
    }
    func_0212899c(cn, 0, 0x144);
    cn->unk_00 = p2;
    cn->unk_04 = -1;
    cn->unk_08 = 0;
    cn->unk_10 = 0;
    cn->unk_14 = 0;
    cn->unk_0c = 0;
    cn->unk_20 = 0;
    cn->unk_24 = 0;
    cn->unk_1c = 0x1000;
    cn->unk_18 = (char *)GsUtil_Alloc(cn->unk_1c + 1);
    if (cn->unk_18 == NULL) {
        GsGp_SetErrorString(h, "Out of memory.");
        return 1;
    }
    cn->unk_13c = 0;
    cn->unk_140 = 0;
    *(Unk_ov065_02282f90_Conn **)out = cn;
    return 0;
}

s32 GsGpSearch_Start(void *h0, void *cn, s32 p2, s32 p3, s32 p4) {
    Unk_ov065_02282f90_Handle *h = (Unk_ov065_02282f90_Handle *)h0;
    Unk_ov065_022831c0_Obj *o;
    s32 r;
    *(s32 *)((u8 *)h->unk_00 + 0x210) += 1;
    r = GsGp_AddOperation(h, 3, cn, &o, p2, p3, p4);
    if (r != 0) {
        return r;
    }
    r = GsGpSearch_Connect(h, o);
    if (r != 0) {
        return r;
    }
    if (o->unk_08 != 0) {
        r = GsGp_ProcessConnection(h, o->unk_18);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}

s32 GsGpSearch_ProfileSearch(Unk_ov065_02282f90_Handle *h, char *a, char *b, char *c, char *d, char *e, s32 f, s32 g, s32 p8, s32 p9, s32 p10) {
    Unk_ov065_02282f90_Conn *cn;
    s32 r;
    if ((a == NULL || *a == 0) && (c == NULL || *c == 0) && (d == NULL || *d == 0) && (e == NULL || *e == 0) && f == 0 && (b == NULL || *b == 0)) {
        GsGp_SetErrorString(h, "No search criteria.");
        return 2;
    }
    r = GsGpSearch_NewData(h, &cn, 1);
    if (r != 0) {
        return r;
    }
    if (a == NULL) {
        cn->unk_28[0] = 0;
    } else {
        GsUtil_StrCopyN(cn->unk_28, a, 0x1f);
    }
    if (b == NULL) {
        cn->unk_47[0] = 0;
    } else {
        GsUtil_StrCopyN(cn->unk_47, b, 0x15);
    }
    if (c == NULL) {
        cn->unk_5c[0] = 0;
    } else {
        GsUtil_StrCopyN(cn->unk_5c, c, 0x33);
    }
    GsUtil_StrToLower(cn->unk_5c);
    if (d == NULL) {
        cn->unk_8f[0] = 0;
    } else {
        GsUtil_StrCopyN(cn->unk_8f, d, 0x1f);
    }
    if (e == NULL) {
        cn->unk_ae[0] = 0;
    } else {
        GsUtil_StrCopyN(cn->unk_ae, e, 0x1f);
    }
    cn->unk_130 = f;
    if (g < 0) {
        g = 0;
    }
    cn->unk_134 = g;
    r = GsGpSearch_Start(h, cn, p8, p9, p10);
    if (r != 0) {
        return r;
    }
    return 0;
}

}
}

namespace Na {
extern "C" {
s32 GsGpSearch_Process(Ctx0228 **h, Node0228 *node) {
    s32 done, save1;
    Ctx0228 *ctx = *h;
    s32 done2;
    Unk_ov065_02281bf4_Res4 *p4;
    Unk_ov065_02281bf4_Res7 *p7;
    s32 cnt;
    s32 retry;
    Conn0228 *c = node->unk_04;
    s32 r;
    s32 v8c;
    s32 pos;
    Unk_ov065_02281974_Nest pr1;
    s32 vv[2];
    Unk_ov065_02281974_Nest pr8, pr7, pr6, pr5, pr4, pr3, pr2;
    Unk_ov065_02281bf4_S1 s1;
    char tok[0x200];
    char buf[0x200];

    if (node->unk_08 != 0) {
        retry = 1;
    } else {
        retry = 0;
    }
again:
    r = GsGp_SendBuffer(h, c->unk_04, &c->unk_18, &vv[1], 1, "SM");
    if (r != 0) {
        return r;
    }
    if (node->unk_14 == 1) {
        r = GsGp_CheckConnectComplete(h, c->unk_04, &v8c);
        if (r != 0) {
            return r;
        }
        if (v8c == 4) {
            GsGp_SetError(h, 0xd01, "Could not connect to the search manager.");
            GsGp_CallErrorCallback(h, 4, 0);
            return 4;
        }
        if (v8c != 3) {
            goto endchk;
        }
        if (c->unk_00 == 1) {
            GsGpBuf_AppendString(h, &c->unk_18, "\\search\\");
            GsGpBuf_AppendString(h, &c->unk_18, "\\sesskey\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_198);
            GsGpBuf_AppendString(h, &c->unk_18, "\\profileid\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_1a0);
            GsGpBuf_AppendString(h, &c->unk_18, "\\namespaceid\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_470);
            if (c->unk_28[0] != 0) {
                GsGpBuf_AppendString(h, &c->unk_18, "\\nick\\");
                GsGpBuf_AppendString(h, &c->unk_18, c->unk_28);
            }
            if (c->unk_47[0] != 0) {
                GsGpBuf_AppendString(h, &c->unk_18, "\\uniquenick\\");
                GsGpBuf_AppendString(h, &c->unk_18, c->unk_47);
            }
            if (c->unk_5c[0] != 0) {
                GsGpBuf_AppendString(h, &c->unk_18, "\\email\\");
                GsGpBuf_AppendString(h, &c->unk_18, c->unk_5c);
            }
            if (c->unk_8f[0] != 0) {
                GsGpBuf_AppendString(h, &c->unk_18, "\\firstname\\");
                GsGpBuf_AppendString(h, &c->unk_18, c->unk_8f);
            }
            if (c->unk_ae[0] != 0) {
                GsGpBuf_AppendString(h, &c->unk_18, "\\lastname\\");
                GsGpBuf_AppendString(h, &c->unk_18, c->unk_ae);
            }
            if (c->unk_130 != 0) {
                GsGpBuf_AppendString(h, &c->unk_18, "\\icquin\\");
                GsGpBuf_AppendInt(h, &c->unk_18, c->unk_130);
            }
            if (c->unk_134 > 0) {
                GsGpBuf_AppendString(h, &c->unk_18, "\\skip\\");
                GsGpBuf_AppendInt(h, &c->unk_18, c->unk_134);
            }
        } else if (c->unk_00 == 2) {
            GsGpBuf_AppendString(h, &c->unk_18, "\\valid\\");
            GsGpBuf_AppendString(h, &c->unk_18, "\\email\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_5c);
        } else if (c->unk_00 == 3) {
            GsGpBuf_AppendString(h, &c->unk_18, "\\nicks\\");
            GsGpBuf_AppendString(h, &c->unk_18, "\\email\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_5c);
            GsGpBuf_AppendString(h, &c->unk_18, "\\pass\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_cd);
            GsGpBuf_AppendString(h, &c->unk_18, "\\namespaceid\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_470);
        } else if (c->unk_00 == 4) {
            GsGpBuf_AppendString(h, &c->unk_18, "\\pmatch\\");
            GsGpBuf_AppendString(h, &c->unk_18, "\\sesskey\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_198);
            GsGpBuf_AppendString(h, &c->unk_18, "\\profileid\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_1a0);
            GsGpBuf_AppendString(h, &c->unk_18, "\\productid\\");
            GsGpBuf_AppendInt(h, &c->unk_18, c->unk_138);
        } else if (c->unk_00 == 5) {
            GsGpBuf_AppendString(h, &c->unk_18, "\\check\\");
            GsGpBuf_AppendString(h, &c->unk_18, "\\nick\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_28);
            GsGpBuf_AppendString(h, &c->unk_18, "\\email\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_5c);
            GsGpBuf_AppendString(h, &c->unk_18, "\\pass\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_cd);
        } else if (c->unk_00 == 6) {
            GsGpBuf_AppendString(h, &c->unk_18, "\\newuser\\");
            GsGpBuf_AppendString(h, &c->unk_18, "\\nick\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_28);
            GsGpBuf_AppendString(h, &c->unk_18, "\\email\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_5c);
            GsGpBuf_AppendString(h, &c->unk_18, "\\pass\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_cd);
            GsGpBuf_AppendString(h, &c->unk_18, "\\productID\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_46c);
            GsGpBuf_AppendString(h, &c->unk_18, "\\namespaceid\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_470);
            GsGpBuf_AppendString(h, &c->unk_18, "\\uniquenick\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_47);
            if (c->unk_ec[0] != 0) {
                GsGpBuf_AppendString(h, &c->unk_18, "\\cdkey\\");
                GsGpBuf_AppendString(h, &c->unk_18, c->unk_ec);
            }
        } else if (c->unk_00 == 7) {
            GsGpBuf_AppendString(h, &c->unk_18, "\\others\\");
            GsGpBuf_AppendString(h, &c->unk_18, "\\sesskey\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_198);
            GsGpBuf_AppendString(h, &c->unk_18, "\\profileid\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_1a0);
            GsGpBuf_AppendString(h, &c->unk_18, "\\namespaceid\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_470);
        } else if (c->unk_00 == 8) {
            GsGpBuf_AppendString(h, &c->unk_18, "\\uniquesearch\\");
            GsGpBuf_AppendString(h, &c->unk_18, "\\preferrednick\\");
            GsGpBuf_AppendString(h, &c->unk_18, c->unk_47);
            GsGpBuf_AppendString(h, &c->unk_18, "\\namespaceid\\");
            GsGpBuf_AppendInt(h, &c->unk_18, ctx->unk_470);
        }
        GsGpBuf_AppendString(h, &c->unk_18, "\\gamename\\");
        GsGpBuf_AppendString(h, &c->unk_18, sGsGameName);
        GsGpBuf_AppendString(h, &c->unk_18, "\\final\\");
        node->unk_14 = 4;
        goto endchk;
    }
    if (node->unk_14 != 4) {
        goto endchk;
    }
    r = GsGp_RecvToBuffer(h, c->unk_04, &c->unk_08, &vv[0], &vv[1], "SM");
    if (r != 0) {
        if (r != 3) {
            return r;
        }
        GsGp_SetError(h, 0xd01, "There was an error reading from the server.");
        GsGp_CallErrorCallback(h, 3, 0);
        return 3;
    }
    if (func_02129f1c(c->unk_08, "\\final\\") == 0) {
        goto endchk;
    }
    pos = 0;
    node->unk_14 = 5;
    if (GsGp_CheckServerError(h, c->unk_08, 1) != 0) {
        c->unk_140 = 1;
        return 4;
    }
    if (c->unk_00 == 1) {
        done = 0;
        s1.unk_00 = 0;
        s1.unk_04 = 0;
        s1.unk_0c = 0;
        s1.unk_08 = 0x601;
        do {
            GETTOK(tok)
            if (strcmp(tok, "bsrdone") == 0) {
                GETTOK(tok)
                if (strcmp(tok, "more") == 0) {
                    if (strcmp(buf, "0") != 0) {
                        s1.unk_08 = 0x600;
                    }
                }
                done = 1;
            } else if (strcmp(tok, "bsr") == 0) {
                Unk_ov065_02281bf4_Rec *e;
                s32 idx;
                Unk_ov065_02281bf4_Rec *base;
                s1.unk_04++;
                base = (Unk_ov065_02281bf4_Rec *)GsUtil_Realloc(s1.unk_0c, s1.unk_04 * 0xac);
                s1.unk_0c = base;
                if (base == 0) ERRMEM("Out of memory.")
                idx = s1.unk_04 - 1;
                e = &base[idx];
                func_0212899c(e, 0, 0xac);
                base[idx].unk_00 = func_0212b770(buf);
                done2 = 0;
                do {
                    save1 = pos;
                    GETTOK(tok)
                    if (strcmp(tok, "nick") == 0) {
                        GsUtil_StrCopyN(e->unk_04, buf, 0x1f);
                    } else if (strcmp(tok, "uniquenick") == 0) {
                        GsUtil_StrCopyN(e->unk_23, buf, 0x15);
                    } else if (strcmp(tok, "firstname") == 0) {
                        GsUtil_StrCopyN(e->unk_38, buf, 0x1f);
                    } else if (strcmp(tok, "lastname") == 0) {
                        GsUtil_StrCopyN(e->unk_57, buf, 0x1f);
                    } else if (strcmp(tok, "email") == 0) {
                        GsUtil_StrCopyN(e->unk_76, buf, 0x33);
                    } else if (strcmp(tok, "bsr") == 0 || strcmp(tok, "bsrdone") == 0) {
                        done2 = 1;
                        pos = save1;
                    }
                } while (done2 == 0);
            } else {
                ERR3()
            }
        } while (done == 0);
        {
            s32 t = s1.unk_08;
            pr1 = node->unk_0c;
            if (pr1.p.a != 0) {
                ((void (*)(Ctx0228 **, void *, s32))pr1.p.a)(h, &s1, pr1.p.b);
            }
            if (t == 0x600 && s1.unk_08 == 0x600) {
                r = GsGpSearch_ProfileSearch(h, c->unk_28, c->unk_47, c->unk_5c, c->unk_8f, c->unk_ae, c->unk_130, s1.unk_04 + c->unk_134, node->unk_08, node->unk_0c.p.a, node->unk_0c.p.b);
                if (r != 0) {
                    return r;
                }
            }
        }
        GsUtil_Free(s1.unk_0c);
        s1.unk_0c = 0;
        goto done;
    } else if (c->unk_00 == 2) {
        Unk_ov065_02281bf4_Res2 *p;
        pr2 = node->unk_0c;
        if (pr2.p.a == 0) {
            goto done;
        }
        GETTOK(tok)
        if (strcmp(tok, "vr") != 0) ERR3()
        p = (Unk_ov065_02281bf4_Res2 *)GsUtil_Alloc(0x3c);
        if (p == 0) ERRMEM("Out of memory.")
        p->unk_00 = 0;
        GsUtil_StrCopyN(p->unk_04, c->unk_5c, 0x33);
        if (buf[0] == 0x30) {
            p->unk_38 = 0;
        } else {
            p->unk_38 = 1;
        }
        r = GsGp_QueueCallback(h, pr2.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 3) {
        Unk_ov065_02281bf4_Res3 *p;
        pr3 = node->unk_0c;
        if (pr3.p.a == 0) {
            goto done;
        }
        p = (Unk_ov065_02281bf4_Res3 *)GsUtil_Alloc(0x44);
        if (p == 0) ERRMEM("Out of memory.")
        p->unk_00 = 0;
        func_02127838(p->unk_04, c->unk_5c);
        p->unk_38 = 0;
        p->unk_3c = 0;
        p->unk_40 = 0;
        GETTOK(tok)
        if (strcmp(tok, "nr") != 0) ERR3()
        done = 0;
        do {
            GETTOK(tok)
            if (strcmp(tok, "nick") == 0) {
                void *t = GsUtil_Realloc(p->unk_3c, (p->unk_38 + 1) * 4);
                if (t == 0) ERRMEM("Out of memory.")
                p->unk_3c = (char **)t;
                t = GsUtil_Alloc(0x1f);
                if (t == 0) ERRMEM("Out of memory.")
                p->unk_3c[p->unk_38] = (char *)t;
                GsUtil_StrCopyN(p->unk_3c[p->unk_38], buf, 0x1f);
                p->unk_38++;
            } else if (strcmp(tok, "uniquenick") == 0) {
                if (p->unk_38 > 0) {
                    void *t = GsUtil_Realloc(p->unk_40, p->unk_38 * 4);
                    if (t == 0) ERRMEM("Out of memory.")
                    p->unk_40 = (char **)t;
                    t = GsUtil_Alloc(0x15);
                    if (t == 0) ERRMEM("Out of memory.")
                    p->unk_40[p->unk_38 - 1] = (char *)t;
                    GsUtil_StrCopyN(p->unk_40[p->unk_38 - 1], buf, 0x15);
                }
            } else if (strcmp(tok, "ndone") == 0) {
                done = 1;
            } else {
                ERR3()
            }
        } while (done == 0);
        r = GsGp_QueueCallback(h, pr3.p, p, node, 3);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 4) {
        pr4 = node->unk_0c;
        if (pr4.p.a == 0) {
            goto done;
        }
        p4 = (Unk_ov065_02281bf4_Res4 *)GsUtil_Alloc(0x10);
        if (p4 == 0) ERRMEM("Out of memory.")
        p4->unk_04 = c->unk_138;
        done = 0;
        p4->unk_00 = 0;
        p4->unk_08 = 0;
        p4->unk_0c = 0;
        do {
            GETTOK(tok)
            if (strcmp(tok, "psrdone") == 0) {
                done = 1;
            } else if (strcmp(tok, "psr") == 0) {
                Unk_ov065_02281bf4_Ent *e;
                s32 idx;
                Unk_ov065_02281bf4_Ent *base;
                p4->unk_08++;
                p4->unk_0c = (Unk_ov065_02281bf4_Ent *)GsUtil_Realloc(p4->unk_0c, p4->unk_08 * 0x128);
                base = p4->unk_0c;
                if (base == 0) ERRMEM("Out of memory.")
                idx = p4->unk_08 - 1;
                e = &base[idx];
                func_0212899c(e, 0, 0x128);
                e->unk_24 = 1;
                base[idx].unk_00 = func_0212b770(buf);
                done2 = 0;
                do {
                    save1 = pos;
                    GETTOK(tok)
                    if (strcmp(tok, "status") == 0) {
                        GsUtil_StrCopyN(e->unk_28, buf, 0x100);
                    } else if (strcmp(tok, "nick") == 0) {
                        GsUtil_StrCopyN(e->unk_04, buf, 0x1f);
                    }
                    if (strcmp(tok, "statuscode") == 0) {
                        e->unk_24 = func_0212b770(buf);
                    } else if (strcmp(tok, "psr") == 0 || strcmp(tok, "psrdone") == 0) {
                        done2 = 1;
                        pos = save1;
                    }
                } while (done2 == 0);
            } else {
                ERR3()
            }
        } while (done == 0);
        r = GsGp_QueueCallback(h, pr4.p, p4, node, 4);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 5) {
        s32 a4;
        s32 a6;
        Unk_ov065_02281bf4_Res5 *p;
        pr5 = node->unk_0c;
        if (pr5.p.a == 0) {
            goto done;
        }
        GETTOK(tok)
        if (strcmp(tok, "cur") != 0) ERR3()
        a4 = func_0212b770(buf);
        if (a4 != 0) {
            ctx->unk_418 = a4;
            a6 = 0;
        } else {
            if (GsGp_GetValue(c->unk_08, "\\pid\\", buf, 0x200) == 0) ERR3()
            a6 = func_0212b770(buf);
        }
        p = (Unk_ov065_02281bf4_Res5 *)GsUtil_Alloc(8);
        if (p == 0) ERRMEM("Out of memory.")
        p->unk_00 = a4;
        p->unk_04 = a6;
        r = GsGp_QueueCallback(h, pr5.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 6) {
        s32 a4;
        s32 a6;
        Unk_ov065_02281bf4_Res5 *p;
        pr6 = node->unk_0c;
        if (pr6.p.a == 0) {
            goto done;
        }
        GETTOK(tok)
        if (strcmp(tok, "nur") != 0) ERR3()
        a4 = func_0212b770(buf);
        if (a4 != 0) {
            ctx->unk_418 = a4;
        }
        if (GsGp_GetValue(c->unk_08, "\\pid\\", buf, 0x200) == 0) {
            if (a4 == 0) ERR3()
            a6 = 0;
        } else {
            a6 = func_0212b770(buf);
        }
        p = (Unk_ov065_02281bf4_Res5 *)GsUtil_Alloc(8);
        if (p == 0) ERRMEM("Out of memory.")
        p->unk_00 = a4;
        p->unk_04 = a6;
        r = GsGp_QueueCallback(h, pr6.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 7) {
        pr7 = node->unk_0c;
        if (pr7.p.a == 0) {
            goto done;
        }
        p7 = (Unk_ov065_02281bf4_Res7 *)GsUtil_Alloc(0xc);
        if (p7 == 0) ERRMEM("Out of memory.")
        p7->unk_00 = 0;
        p7->unk_04 = 0;
        p7->unk_08 = 0;
        GETTOK(tok)
        if (strcmp(tok, "others") != 0) ERR3()
        done = 0;
        do {
            GETTOK(tok)
            if (strcmp(tok, "odone") == 0) {
                done = 1;
            } else if (strcmp(tok, "o") == 0) {
                Unk_ov065_02281bf4_Rec *e;
                s32 idx;
                Unk_ov065_02281bf4_Rec *base;
                void *t = GsUtil_Realloc(p7->unk_08, (p7->unk_04 + 1) * 0xac);
                if (t == 0) ERRMEM("Out of memory.")
                p7->unk_08 = (Unk_ov065_02281bf4_Rec *)t;
                base = p7->unk_08;
                idx = p7->unk_04;
                e = &base[idx];
                func_0212899c(e, 0, 0xac);
                p7->unk_04++;
                base[idx].unk_00 = func_0212b770(buf);
                done2 = 0;
                do {
                    save1 = pos;
                    GETTOK(tok)
                    if (strcmp(tok, "nick") == 0) {
                        GsUtil_StrCopyN(e->unk_04, buf, 0x1f);
                    } else if (strcmp(tok, "uniquenick") == 0) {
                        GsUtil_StrCopyN(e->unk_23, buf, 0x15);
                    } else if (strcmp(tok, "first") == 0) {
                        GsUtil_StrCopyN(e->unk_38, buf, 0x1f);
                    } else if (strcmp(tok, "last") == 0) {
                        GsUtil_StrCopyN(e->unk_57, buf, 0x1f);
                    } else if (strcmp(tok, "email") == 0) {
                        GsUtil_StrCopyN(e->unk_76, buf, 0x33);
                    } else if (strcmp(tok, "o") == 0 || strcmp(tok, "odone") == 0) {
                        done2 = 1;
                        pos = save1;
                    }
                } while (done2 == 0);
            } else {
                ERR3()
            }
        } while (done == 0);
        r = GsGp_QueueCallback(h, pr7.p, p7, node, 8);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->unk_00 == 8) {
        Unk_ov065_02281bf4_Res8 *p;
        pr8 = node->unk_0c;
        if (pr8.p.a == 0) {
            goto done;
        }
        cnt = 0;
        p = (Unk_ov065_02281bf4_Res8 *)GsUtil_Alloc(0xc);
        if (p == 0) ERRMEM("Out of memory.")
        p->unk_00 = 0;
        p->unk_04 = 0;
        p->unk_08 = 0;
        GETTOK(tok)
        if (strcmp(tok, "us") != 0) ERR3()
        p->unk_04 = func_0212b770(buf);
        p->unk_08 = (char **)GsUtil_Alloc(p->unk_04 * 4);
        if (p->unk_08 == 0) ERRMEM("Out of memory.")
        done = 0;
        do {
            GETTOK(tok)
            if (strcmp(tok, "nick") == 0) {
                p->unk_08[cnt] = (char *)GsUtil_Alloc(0x15);
                if (p->unk_08[cnt] == 0) ERRMEM("Out of memory.")
                GsUtil_StrCopyN(p->unk_08[cnt], buf, 0x15);
                cnt++;
            } else if (strcmp(tok, "usdone") == 0) {
                p->unk_04 = cnt;
                done = 1;
            } else {
                ERR3()
            }
        } while (done == 0);
        r = GsGp_QueueCallback(h, pr8.p, p, node, 9);
        if (r != 0) {
            return r;
        }
    }
done:
    c->unk_140 = 1;
    retry = 0;
endchk:
    if (retry != 0) {
        GsUtil_Sleep(10);
    }
    if (retry != 0) {
        goto again;
    }
    return 0;
}

s32 GsGpSearch_ProcessAll(Ctx0228 **h) {
    Ctx0228 *c = *h;
    s32 n = 0;
    s32 i;
    Node0228 **arr;
    Node0228 *nd;
    s32 z = 0;
    if (c->unk_210 > 0) {
        arr = (Node0228 **)GsUtil_Alloc(c->unk_210 * 4);
        if (arr == 0) {
            GsGp_SetErrorString(h, "Out of memory.");
            return 1;
        }
        for (nd = c->unk_424; nd != 0; nd = nd->unk_20) {
            if (nd->unk_00 == 3 && nd->unk_14 != 5 && nd->unk_04->unk_13c == 0) {
                arr[n++] = nd;
                nd->unk_04->unk_13c = 1;
            }
        }
        for (i = 0; i < n; i++) {
            s32 r = GsGpSearch_Process(h, arr[i]);
            if (r != 0) {
                arr[i]->unk_1c = r;
            }
        }
        for (i = 0; i < n; i++) {
            Conn0228 *s = arr[i]->unk_04;
            s->unk_13c = z;
            if (s->unk_140 != 0) {
                GsGp_RemoveOperation(h, arr[i]);
            }
        }
        GsUtil_Free(arr);
    }
    return 0;
}

s32 GsGpProfile_HashId(s32 *p, s32 n) {
    return *p % n;
}

s32 GsGpProfile_CompareId(s32 *a, s32 *b) {
    return *a - *b;
}

void GsGpProfile_FreeEntry(void *p) {
    Elem0228 *e = (Elem0228 *)p;
    if (e->unk_08 != 0) {
        GsUtil_Free(e->unk_08->unk_08);
        e->unk_08->unk_08 = 0;
        GsUtil_Free(e->unk_08->unk_0c);
        e->unk_08->unk_0c = 0;
        GsUtil_Free(e->unk_08);
        e->unk_08 = 0;
    }
    GsGp_FreeCachedInfo(e);
    GsUtil_Free(e->unk_10);
    e->unk_10 = 0;
    GsUtil_Free(e->unk_18);
    e->unk_18 = 0;
}

s32 GsGpProfile_InitTable(Ctx0228 **h) {
    Ctx0228 *c = *h;
    c->unk_430 = 0;
    c->unk_42c = 0;
    c->unk_428 = GsHash_New(0x1c, 4, GsGpProfile_HashId, GsGpProfile_CompareId, GsGpProfile_FreeEntry);
    if (c->unk_428 != 0) {
        return 1;
    }
    return 0;
}

}
}
