// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/Unk_ov065_02282f90_Conn.h"
#include "net/Unk_ov065_022831c0_Obj.h"
#include "net/Unk_ov065_022833b4_Pair.h"
#include "net/Unk_ov065_02283744_Buf.h"
#include "net/Unk_ov065_022837bc_Ent.h"

// ov065 TU50: GP gpiTransfer/gpiUnique/gpiUtility (0x02283304..0x02283720)

namespace Na {
// ov065_057: GameSpy-like TCP connect / parse helpers (0x02282f90..0x02283868)









struct Unk_ov065_022833b4_Src {
    u8 pad_00[0xc];
    Unk_ov065_022833b4_Pair callback;
};



extern char data_ov065_0228dd84[];
extern char data_ov065_0228db1c[];
extern char data_ov065_0228dd98[];
extern char data_ov065_0228ddc0[];
extern char data_ov065_0228dadc[];
extern char data_ov065_0228ddf4[];
extern char data_ov065_0228de24[];
extern char *sGsPersistXorKey;
extern char data_ov065_0228df7c[];
extern char data_ov065_0228df8c[];
extern char data_ov065_0228df9c[];
extern void *sGsPersistRequests;

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

static inline BOOL Unk_ov065_02283684_B(char *p) {
    if (p != NULL) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {

















typedef void (*Unk_ov065_022837bc_Cb0)(s32, s32, s32, void *, s32);
typedef void (*Unk_ov065_022837bc_Cb1)(s32, s32, s32, s32, s32, s32, void *, s32, s32);
typedef void (*Unk_ov065_022837bc_Cb2)(s32, s32, s32, s32, s32, s32, s32);
typedef void (*Unk_ov065_022837bc_Cb3)(s32, s32, s32, s32);



}
extern "C" {
void GsGpPeer_DeclineTransfer(void *h, s32 p1, s32 p2, const char *p3);
s32 GsGpPeer_SendTransferReply(void *h, s32 *a, s32 b, s32 c, const char *dflt);
s32 GsGp_ProcessRnReply(void *h, Unk_ov065_022833b4_Src *s, char *str);
void GsGp_SetErrorString(void *h, const char *msg);
void GsGp_SetError(void *h, s32 code, const char *msg);
s32 GsGp_ReadKeyValue(void *h, char *buf, s32 *pos, char *out1, char *out2);
s32 GsGp_CheckConnectComplete(void *h, s32 x, s32 *out);
s32 GsGp_GetValue(const char *hay, const char *needle, char *out, s32 n);
s32 GsGp_CheckServerError(void *h, const char *str, s32 flag);
}
}

namespace Na {
extern "C" {
s32 GsGp_CheckServerError(void *h, const char *str, s32 flag) {
    Unk_ov065_02282f90_Ctx *ctx = ((Unk_ov065_02282f90_Handle *)h)->connection;
    char buf[16];
    if (strncmp(str, "\\error\\", 7) == 0) {
        if (GsGp_GetValue(str, "\\err\\", buf, 0x10) != 0) {
            ctx->errorCode = func_0212b770(buf);
        }
        if (GsGp_GetValue(str, "\\errmsg\\", ctx->errorString, 0x100) == 0) {
            ctx->errorString[0] = 0;
        }
        if (flag != 0) {
            BOOL t = Unk_ov065_02283684_B(func_02129f1c(str, "\\fatal\\"));
            GsGp_CallErrorCallback(h, 4, t ? 1 : 0);
        }
        return 1;
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_GetValue(const char *hay, const char *needle, char *out, s32 n) {
    s32 c = *needle;
    char *p = func_02129f1c(hay, needle);
    s32 i;
    s32 ch;
    if (p == NULL) {
        return 0;
    }
    p += STD_GetStringLength(needle);
    i = 0;
    while (i < n - 1 && (ch = p[i]) != 0 && ch != c) {
        out[i] = ch;
        i++;
    }
    out[i] = 0;
    return 1;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_CheckConnectComplete(void *h, s32 x, s32 *out) {
    s32 a = 0;
    s32 b = 0;
    s32 r = GsSock_Select(x, 0, &a, &b);
    if (r == -1) {
        GsGp_DebugLog(h, "Error connecting\n");
        GsGp_SetError(h, 5, "There was an error checking for a completed connection.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    if (r > 0) {
        if (b != 0) {
            GsGp_DebugLog(h, "Connection rejected\n");
            *out = 4;
            return 0;
        }
        if (a != 0) {
            GsGp_DebugLog(h, "Connection accepted\n");
            *out = 3;
            return 0;
        }
    }
    *out = 0;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_ReadKeyValue(void *h, char *buf, s32 *pos, char *out1, char *out2) {
    s32 c;
    s32 i = *pos;
    char *p = buf + i;
    if (buf[i] != '\\') {
        GsGp_SetError(h, 1, "Parse Error.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    i = 0;
    buf = p + 2;
    c = p[1];
    if (c != '\\') {
        do {
            if (c == 0) {
                GsGp_SetError(h, 1, "Parse Error.");
                GsGp_CallErrorCallback(h, 3, 1);
                return 3;
            }
            if (i == 0x1ff) {
                GsGp_SetError(h, 1, "Parse Error.");
                GsGp_CallErrorCallback(h, 3, 1);
                return 3;
            }
            *out1 = c;
            out1++;
            i++;
            c = *buf;
            buf++;
        } while (c != '\\');
    }
    *out1 = 0;
    {
        s32 j = 0;
        s32 d;
        while ((d = *buf++) != '\\' && d != 0) {
            if (j == 0x1ff) {
                GsGp_SetError(h, 1, "Parse Error.");
                GsGp_CallErrorCallback(h, 3, 1);
                return 3;
            }
            *out2 = d;
            out2++;
            j++;
        }
    }
    *out2 = 0;
    *pos = *pos + (buf - p - 1);
    return 0;
}
}
}

namespace Na {
extern "C" {
void GsGp_SetError(void *h, s32 code, const char *msg) {
    Unk_ov065_02282f90_Ctx *c = ((Unk_ov065_02282f90_Handle *)h)->connection;
    GsUtil_StrCopyN(c->errorString, msg, 0x100);
    c->errorCode = code;
}
}
}

namespace Na {
extern "C" {
void GsGp_SetErrorString(void *h, const char *msg) {
    GsUtil_StrCopyN(((Unk_ov065_02282f90_Handle *)h)->connection->errorString, msg, 0x100);
}
}
}

namespace Na {
extern "C" {
s32 GsGp_ProcessRnReply(void *h, Unk_ov065_022833b4_Src *s, char *str) {
    Unk_ov065_022833b4_Pair pr;
    s32 *p;
    s32 r;
    if (GsGp_CheckServerError(h, str, 1) != 0) {
        return 4;
    }
    if (strncmp(str, "\\rn\\", 4) != 0) {
        GsGp_SetError(h, 1, "Unexpected data was received from the server.");
        GsGp_CallErrorCallback(h, 3, 1);
        return 3;
    }
    pr = s->callback;
    if (pr.v[0] != 0) {
        p = (s32 *)GsUtil_Alloc(4);
        if (p == NULL) {
            GsGp_SetErrorString(h, "Out of memory.");
            return 1;
        }
        *p = 0;
        r = GsGp_QueueCallback(h, pr, p, s, 0);
        if (r != 0) {
            return r;
        }
    }
    GsGp_RemoveOperation(h, s);
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGpPeer_SendTransferReply(void *h, s32 *a, s32 b, s32 c, const char *dflt) {
    char buf[0x24];
    s32 r;
    if (dflt == NULL) {
        dflt = "";
    }
    r = GsGpPeer_SendTransferHeader(h, b, 0xc9, a);
    if (r != 0) {
        return r;
    }
    OS_SPrintf(buf, "\\version\\%d\\result\\%d", 1, c);
    r = GsGpPeer_SendString(h, b, buf);
    if (r != 0) {
        return r;
    }
    r = GsGpPeer_SendMessageBody(h, b, dflt, -1);
    if (r != 0) {
        return r;
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
void GsGpPeer_DeclineTransfer(void *h, s32 p1, s32 p2, const char *p3) {
    char buf[0x40];
    s32 v[3];
    if (GsGp_GetValue(p3, "\\xfer\\", buf, 0x40) != 0) {
        if (func_02128ca4(buf, "%d %u %u", &v[0], &v[1], &v[2]) == 3) {
            GsGpPeer_SendTransferReply(h, v, p1, 2, NULL);
        }
    }
}
}
}
