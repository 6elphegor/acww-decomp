// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/Unk_ov065_02281974_Pair.h"
#include "net/Unk_ov065_02281790_Ctx.h"
#include "net/Unk_ov065_02281bf4_Res.h"
#include "net/Unk_ov065_02282f90_Conn.h"
#include "net/Unk_ov065_022831c0_Obj.h"
#include "net/Unk_ov065_022833b4_Pair.h"
#include "net/Unk_ov065_02283744_Buf.h"
#include "net/Unk_ov065_022837bc_Ent.h"

// ov065 TU49: GP gpiSearch.c (0x02281a5c..0x02283304)

namespace Nb {








struct Unk_ov065_022833b4_Src {
    u8 pad_00[0xc];
    Unk_ov065_022833b4_Pair callback;
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







struct Unk_ov065_02281bf4_Res8 {
    s32 result;
    s32 numNicks;
    char **nicks;
};


struct Unk_ov065_02281bf4_S1 {
    s32 result;
    s32 numMatches;
    s32 moreStatus;
    Unk_ov065_02281bf4_Rec *matches;
};

#define ERR3() { GsGp_SetError(h, 1, "Error reading from the search server."); GsGp_CallErrorCallback(h, 3, 1); return 3; }
#define ERRMEM(m) { GsGp_SetErrorString(h, m); return 1; }
#define GETTOK(t) r = GsGp_ReadKeyValue(h, c->inputBuffer, &pos, t, buf); if (r != 0) { return r; }

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
    Unk_ov065_022831c0_Sock *s = o->data;
    Unk_ov065_022831c0_Host *ent;
    Unk_ov065_022831c0_Addr sa;
    s32 r;
    s32 m;
    s->inputBufferCapacity = 0x1000;
    s->inputBuffer = (char *)GsUtil_Alloc(s->inputBufferCapacity + 1);
    if (s->inputBuffer == NULL) {
        GsGp_SetErrorString(h, "Out of memory.");
        return 1;
    }
    s->sock = GsSock_Socket(2, 1, 0);
    if (s->sock == -1) {
        GsGp_SetError(h, 5, "There was an error creating a socket.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    if (GsSock_SetBlocking(s->sock, 0) == 0) {
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
    sa.family = 2;
    sa.addr = **ent->addrList;
    sa.port = 0xcd74;
    if (GsSock_Connect(s->sock, &sa, 8) == -1) {
        r = GsSock_GetLastError(s->sock);
        if (r != -6 && r != -0x1a && r != -0x4c) {
            GsGp_SetError(h, 5, "There was an error connecting a socket.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
    }
    o->state = 1;
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
    cn->searchType = p2;
    cn->sock = -1;
    cn->inputBuffer = 0;
    cn->inputBufferLength = 0;
    cn->inputBufferPos = 0;
    cn->inputBufferCapacity = 0;
    cn->outputBufferLength = 0;
    cn->outputBufferPos = 0;
    cn->outputBufferCapacity = 0x1000;
    cn->outputBuffer = (char *)GsUtil_Alloc(cn->outputBufferCapacity + 1);
    if (cn->outputBuffer == NULL) {
        GsGp_SetErrorString(h, "Out of memory.");
        return 1;
    }
    cn->isProcessing = 0;
    cn->isFinished = 0;
    *(Unk_ov065_02282f90_Conn **)out = cn;
    return 0;
}

s32 GsGpSearch_Start(void *h0, void *cn, s32 p2, s32 p3, s32 p4) {
    Unk_ov065_02282f90_Handle *h = (Unk_ov065_02282f90_Handle *)h0;
    Unk_ov065_022831c0_Obj *o;
    s32 r;
    *(s32 *)((u8 *)h->connection + 0x210) += 1;
    r = GsGp_AddOperation(h, 3, cn, &o, p2, p3, p4);
    if (r != 0) {
        return r;
    }
    r = GsGpSearch_Connect(h, o);
    if (r != 0) {
        return r;
    }
    if (o->isBlocking != 0) {
        r = GsGp_ProcessConnection(h, o->id);
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
        cn->nick[0] = 0;
    } else {
        GsUtil_StrCopyN(cn->nick, a, 0x1f);
    }
    if (b == NULL) {
        cn->uniqueNick[0] = 0;
    } else {
        GsUtil_StrCopyN(cn->uniqueNick, b, 0x15);
    }
    if (c == NULL) {
        cn->email[0] = 0;
    } else {
        GsUtil_StrCopyN(cn->email, c, 0x33);
    }
    GsUtil_StrToLower(cn->email);
    if (d == NULL) {
        cn->firstName[0] = 0;
    } else {
        GsUtil_StrCopyN(cn->firstName, d, 0x1f);
    }
    if (e == NULL) {
        cn->lastName[0] = 0;
    } else {
        GsUtil_StrCopyN(cn->lastName, e, 0x1f);
    }
    cn->icqUin = f;
    if (g < 0) {
        g = 0;
    }
    cn->skip = g;
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
    Conn0228 *c = node->data;
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
    r = GsGp_SendBuffer(h, c->sock, &c->outputBuffer, &vv[1], 1, "SM");
    if (r != 0) {
        return r;
    }
    if (node->state == 1) {
        r = GsGp_CheckConnectComplete(h, c->sock, &v8c);
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
        if (c->searchType == 1) {
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\search\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\sesskey\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->sessKey);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\profileid\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->profileId);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\namespaceid\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->namespaceId);
            if (c->nick[0] != 0) {
                GsGpBuf_AppendString(h, &c->outputBuffer, "\\nick\\");
                GsGpBuf_AppendString(h, &c->outputBuffer, c->nick);
            }
            if (c->uniqueNick[0] != 0) {
                GsGpBuf_AppendString(h, &c->outputBuffer, "\\uniquenick\\");
                GsGpBuf_AppendString(h, &c->outputBuffer, c->uniqueNick);
            }
            if (c->email[0] != 0) {
                GsGpBuf_AppendString(h, &c->outputBuffer, "\\email\\");
                GsGpBuf_AppendString(h, &c->outputBuffer, c->email);
            }
            if (c->firstName[0] != 0) {
                GsGpBuf_AppendString(h, &c->outputBuffer, "\\firstname\\");
                GsGpBuf_AppendString(h, &c->outputBuffer, c->firstName);
            }
            if (c->lastName[0] != 0) {
                GsGpBuf_AppendString(h, &c->outputBuffer, "\\lastname\\");
                GsGpBuf_AppendString(h, &c->outputBuffer, c->lastName);
            }
            if (c->icqUin != 0) {
                GsGpBuf_AppendString(h, &c->outputBuffer, "\\icquin\\");
                GsGpBuf_AppendInt(h, &c->outputBuffer, c->icqUin);
            }
            if (c->skip > 0) {
                GsGpBuf_AppendString(h, &c->outputBuffer, "\\skip\\");
                GsGpBuf_AppendInt(h, &c->outputBuffer, c->skip);
            }
        } else if (c->searchType == 2) {
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\valid\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\email\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->email);
        } else if (c->searchType == 3) {
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\nicks\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\email\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->email);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\pass\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->password);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\namespaceid\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->namespaceId);
        } else if (c->searchType == 4) {
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\pmatch\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\sesskey\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->sessKey);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\profileid\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->profileId);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\productid\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, c->productId);
        } else if (c->searchType == 5) {
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\check\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\nick\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->nick);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\email\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->email);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\pass\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->password);
        } else if (c->searchType == 6) {
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\newuser\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\nick\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->nick);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\email\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->email);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\pass\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->password);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\productID\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->productId);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\namespaceid\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->namespaceId);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\uniquenick\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->uniqueNick);
            if (c->cdKey[0] != 0) {
                GsGpBuf_AppendString(h, &c->outputBuffer, "\\cdkey\\");
                GsGpBuf_AppendString(h, &c->outputBuffer, c->cdKey);
            }
        } else if (c->searchType == 7) {
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\others\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\sesskey\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->sessKey);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\profileid\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->profileId);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\namespaceid\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->namespaceId);
        } else if (c->searchType == 8) {
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\uniquesearch\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\preferrednick\\");
            GsGpBuf_AppendString(h, &c->outputBuffer, c->uniqueNick);
            GsGpBuf_AppendString(h, &c->outputBuffer, "\\namespaceid\\");
            GsGpBuf_AppendInt(h, &c->outputBuffer, ctx->namespaceId);
        }
        GsGpBuf_AppendString(h, &c->outputBuffer, "\\gamename\\");
        GsGpBuf_AppendString(h, &c->outputBuffer, sGsGameName);
        GsGpBuf_AppendString(h, &c->outputBuffer, "\\final\\");
        node->state = 4;
        goto endchk;
    }
    if (node->state != 4) {
        goto endchk;
    }
    r = GsGp_RecvToBuffer(h, c->sock, &c->inputBuffer, &vv[0], &vv[1], "SM");
    if (r != 0) {
        if (r != 3) {
            return r;
        }
        GsGp_SetError(h, 0xd01, "There was an error reading from the server.");
        GsGp_CallErrorCallback(h, 3, 0);
        return 3;
    }
    if (func_02129f1c(c->inputBuffer, "\\final\\") == 0) {
        goto endchk;
    }
    pos = 0;
    node->state = 5;
    if (GsGp_CheckServerError(h, c->inputBuffer, 1) != 0) {
        c->isFinished = 1;
        return 4;
    }
    if (c->searchType == 1) {
        done = 0;
        s1.result = 0;
        s1.numMatches = 0;
        s1.matches = 0;
        s1.moreStatus = 0x601;
        do {
            GETTOK(tok)
            if (strcmp(tok, "bsrdone") == 0) {
                GETTOK(tok)
                if (strcmp(tok, "more") == 0) {
                    if (strcmp(buf, "0") != 0) {
                        s1.moreStatus = 0x600;
                    }
                }
                done = 1;
            } else if (strcmp(tok, "bsr") == 0) {
                Unk_ov065_02281bf4_Rec *e;
                s32 idx;
                Unk_ov065_02281bf4_Rec *base;
                s1.numMatches++;
                base = (Unk_ov065_02281bf4_Rec *)GsUtil_Realloc(s1.matches, s1.numMatches * 0xac);
                s1.matches = base;
                if (base == 0) ERRMEM("Out of memory.")
                idx = s1.numMatches - 1;
                e = &base[idx];
                func_0212899c(e, 0, 0xac);
                base[idx].profileId = func_0212b770(buf);
                done2 = 0;
                do {
                    save1 = pos;
                    GETTOK(tok)
                    if (strcmp(tok, "nick") == 0) {
                        GsUtil_StrCopyN(e->nick, buf, 0x1f);
                    } else if (strcmp(tok, "uniquenick") == 0) {
                        GsUtil_StrCopyN(e->uniqueNick, buf, 0x15);
                    } else if (strcmp(tok, "firstname") == 0) {
                        GsUtil_StrCopyN(e->firstName, buf, 0x1f);
                    } else if (strcmp(tok, "lastname") == 0) {
                        GsUtil_StrCopyN(e->lastName, buf, 0x1f);
                    } else if (strcmp(tok, "email") == 0) {
                        GsUtil_StrCopyN(e->email, buf, 0x33);
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
            s32 t = s1.moreStatus;
            pr1 = node->unk_0c;
            if (pr1.p.a != 0) {
                ((void (*)(Ctx0228 **, void *, s32))pr1.p.a)(h, &s1, pr1.p.b);
            }
            if (t == 0x600 && s1.moreStatus == 0x600) {
                r = GsGpSearch_ProfileSearch(h, c->nick, c->uniqueNick, c->email, c->firstName, c->lastName, c->icqUin, s1.numMatches + c->skip, node->unk_08, node->unk_0c.p.a, node->unk_0c.p.b);
                if (r != 0) {
                    return r;
                }
            }
        }
        GsUtil_Free(s1.matches);
        s1.matches = 0;
        goto done;
    } else if (c->searchType == 2) {
        Unk_ov065_02281bf4_Res2 *p;
        pr2 = node->unk_0c;
        if (pr2.p.a == 0) {
            goto done;
        }
        GETTOK(tok)
        if (strcmp(tok, "vr") != 0) ERR3()
        p = (Unk_ov065_02281bf4_Res2 *)GsUtil_Alloc(0x3c);
        if (p == 0) ERRMEM("Out of memory.")
        p->result = 0;
        GsUtil_StrCopyN(p->email, c->email, 0x33);
        if (buf[0] == 0x30) {
            p->isValid = 0;
        } else {
            p->isValid = 1;
        }
        r = GsGp_QueueCallback(h, pr2.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->searchType == 3) {
        Unk_ov065_02281bf4_Res3 *p;
        pr3 = node->unk_0c;
        if (pr3.p.a == 0) {
            goto done;
        }
        p = (Unk_ov065_02281bf4_Res3 *)GsUtil_Alloc(0x44);
        if (p == 0) ERRMEM("Out of memory.")
        p->result = 0;
        func_02127838(p->email, c->email);
        p->numNicks = 0;
        p->nicks = 0;
        p->uniqueNicks = 0;
        GETTOK(tok)
        if (strcmp(tok, "nr") != 0) ERR3()
        done = 0;
        do {
            GETTOK(tok)
            if (strcmp(tok, "nick") == 0) {
                void *t = GsUtil_Realloc(p->nicks, (p->numNicks + 1) * 4);
                if (t == 0) ERRMEM("Out of memory.")
                p->nicks = (char **)t;
                t = GsUtil_Alloc(0x1f);
                if (t == 0) ERRMEM("Out of memory.")
                p->nicks[p->numNicks] = (char *)t;
                GsUtil_StrCopyN(p->nicks[p->numNicks], buf, 0x1f);
                p->numNicks++;
            } else if (strcmp(tok, "uniquenick") == 0) {
                if (p->numNicks > 0) {
                    void *t = GsUtil_Realloc(p->uniqueNicks, p->numNicks * 4);
                    if (t == 0) ERRMEM("Out of memory.")
                    p->uniqueNicks = (char **)t;
                    t = GsUtil_Alloc(0x15);
                    if (t == 0) ERRMEM("Out of memory.")
                    p->uniqueNicks[p->numNicks - 1] = (char *)t;
                    GsUtil_StrCopyN(p->uniqueNicks[p->numNicks - 1], buf, 0x15);
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
    } else if (c->searchType == 4) {
        pr4 = node->unk_0c;
        if (pr4.p.a == 0) {
            goto done;
        }
        p4 = (Unk_ov065_02281bf4_Res4 *)GsUtil_Alloc(0x10);
        if (p4 == 0) ERRMEM("Out of memory.")
        p4->productId = c->productId;
        done = 0;
        p4->result = 0;
        p4->numMatches = 0;
        p4->matches = 0;
        do {
            GETTOK(tok)
            if (strcmp(tok, "psrdone") == 0) {
                done = 1;
            } else if (strcmp(tok, "psr") == 0) {
                Unk_ov065_02281bf4_Ent *e;
                s32 idx;
                Unk_ov065_02281bf4_Ent *base;
                p4->numMatches++;
                p4->matches = (Unk_ov065_02281bf4_Ent *)GsUtil_Realloc(p4->matches, p4->numMatches * 0x128);
                base = p4->matches;
                if (base == 0) ERRMEM("Out of memory.")
                idx = p4->numMatches - 1;
                e = &base[idx];
                func_0212899c(e, 0, 0x128);
                e->statusCode = 1;
                base[idx].profileId = func_0212b770(buf);
                done2 = 0;
                do {
                    save1 = pos;
                    GETTOK(tok)
                    if (strcmp(tok, "status") == 0) {
                        GsUtil_StrCopyN(e->statusString, buf, 0x100);
                    } else if (strcmp(tok, "nick") == 0) {
                        GsUtil_StrCopyN(e->nick, buf, 0x1f);
                    }
                    if (strcmp(tok, "statuscode") == 0) {
                        e->statusCode = func_0212b770(buf);
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
    } else if (c->searchType == 5) {
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
            ctx->errorCode = a4;
            a6 = 0;
        } else {
            if (GsGp_GetValue(c->inputBuffer, "\\pid\\", buf, 0x200) == 0) ERR3()
            a6 = func_0212b770(buf);
        }
        p = (Unk_ov065_02281bf4_Res5 *)GsUtil_Alloc(8);
        if (p == 0) ERRMEM("Out of memory.")
        p->result = a4;
        p->profileId = a6;
        r = GsGp_QueueCallback(h, pr5.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->searchType == 6) {
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
            ctx->errorCode = a4;
        }
        if (GsGp_GetValue(c->inputBuffer, "\\pid\\", buf, 0x200) == 0) {
            if (a4 == 0) ERR3()
            a6 = 0;
        } else {
            a6 = func_0212b770(buf);
        }
        p = (Unk_ov065_02281bf4_Res5 *)GsUtil_Alloc(8);
        if (p == 0) ERRMEM("Out of memory.")
        p->result = a4;
        p->profileId = a6;
        r = GsGp_QueueCallback(h, pr6.p, p, node, 0);
        if (r == 0) {
            goto done;
        }
        return r;
    } else if (c->searchType == 7) {
        pr7 = node->unk_0c;
        if (pr7.p.a == 0) {
            goto done;
        }
        p7 = (Unk_ov065_02281bf4_Res7 *)GsUtil_Alloc(0xc);
        if (p7 == 0) ERRMEM("Out of memory.")
        p7->result = 0;
        p7->numProfiles = 0;
        p7->profiles = 0;
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
                void *t = GsUtil_Realloc(p7->profiles, (p7->numProfiles + 1) * 0xac);
                if (t == 0) ERRMEM("Out of memory.")
                p7->profiles = (Unk_ov065_02281bf4_Rec *)t;
                base = p7->profiles;
                idx = p7->numProfiles;
                e = &base[idx];
                func_0212899c(e, 0, 0xac);
                p7->numProfiles++;
                base[idx].profileId = func_0212b770(buf);
                done2 = 0;
                do {
                    save1 = pos;
                    GETTOK(tok)
                    if (strcmp(tok, "nick") == 0) {
                        GsUtil_StrCopyN(e->nick, buf, 0x1f);
                    } else if (strcmp(tok, "uniquenick") == 0) {
                        GsUtil_StrCopyN(e->uniqueNick, buf, 0x15);
                    } else if (strcmp(tok, "first") == 0) {
                        GsUtil_StrCopyN(e->firstName, buf, 0x1f);
                    } else if (strcmp(tok, "last") == 0) {
                        GsUtil_StrCopyN(e->lastName, buf, 0x1f);
                    } else if (strcmp(tok, "email") == 0) {
                        GsUtil_StrCopyN(e->email, buf, 0x33);
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
    } else if (c->searchType == 8) {
        Unk_ov065_02281bf4_Res8 *p;
        pr8 = node->unk_0c;
        if (pr8.p.a == 0) {
            goto done;
        }
        cnt = 0;
        p = (Unk_ov065_02281bf4_Res8 *)GsUtil_Alloc(0xc);
        if (p == 0) ERRMEM("Out of memory.")
        p->result = 0;
        p->numNicks = 0;
        p->nicks = 0;
        GETTOK(tok)
        if (strcmp(tok, "us") != 0) ERR3()
        p->numNicks = func_0212b770(buf);
        p->nicks = (char **)GsUtil_Alloc(p->numNicks * 4);
        if (p->nicks == 0) ERRMEM("Out of memory.")
        done = 0;
        do {
            GETTOK(tok)
            if (strcmp(tok, "nick") == 0) {
                p->nicks[cnt] = (char *)GsUtil_Alloc(0x15);
                if (p->nicks[cnt] == 0) ERRMEM("Out of memory.")
                GsUtil_StrCopyN(p->nicks[cnt], buf, 0x15);
                cnt++;
            } else if (strcmp(tok, "usdone") == 0) {
                p->numNicks = cnt;
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
    c->isFinished = 1;
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
    if (c->numSearches > 0) {
        arr = (Node0228 **)GsUtil_Alloc(c->numSearches * 4);
        if (arr == 0) {
            GsGp_SetErrorString(h, "Out of memory.");
            return 1;
        }
        for (nd = c->operationList; nd != 0; nd = nd->next) {
            if (nd->type == 3 && nd->state != 5 && nd->data->isProcessing == 0) {
                arr[n++] = nd;
                nd->data->isProcessing = 1;
            }
        }
        for (i = 0; i < n; i++) {
            s32 r = GsGpSearch_Process(h, arr[i]);
            if (r != 0) {
                arr[i]->result = r;
            }
        }
        for (i = 0; i < n; i++) {
            Conn0228 *s = arr[i]->data;
            s->isProcessing = z;
            if (s->isFinished != 0) {
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
    if (e->buddyStatus != 0) {
        GsUtil_Free(e->buddyStatus->statusString);
        e->buddyStatus->statusString = 0;
        GsUtil_Free(e->buddyStatus->locationString);
        e->buddyStatus->locationString = 0;
        GsUtil_Free(e->buddyStatus);
        e->buddyStatus = 0;
    }
    GsGp_FreeCachedInfo(e);
    GsUtil_Free(e->authSig);
    e->authSig = 0;
    GsUtil_Free(e->peerSig);
    e->peerSig = 0;
}

s32 GsGpProfile_InitTable(Ctx0228 **h) {
    Ctx0228 *c = *h;
    c->numBuddies = 0;
    c->numProfiles = 0;
    c->profileTable = GsHash_New(0x1c, 4, GsGpProfile_HashId, GsGpProfile_CompareId, GsGpProfile_FreeEntry);
    if (c->profileTable != 0) {
        return 1;
    }
    return 0;
}

}
}
