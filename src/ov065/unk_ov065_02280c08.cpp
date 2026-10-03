// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU47: GP gpiPeer.c (0x02280c08..0x0228176c)

namespace Na {
// ov065_054: 0x022804b8..0x02280d70

struct Unk_ov065_022804b8_Src {
    char *unk_00;
    char *unk_04;
    char *unk_08;
    char *unk_0c;
    char *unk_10;
    char *unk_14;
    s32 unk_18;
    char unk_1c[0xb];
    char unk_27[3];
    s32 unk_2c;
    s32 unk_30;
    char unk_34[0x80];
    s32 unk_b4;
    s32 unk_b8;
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    char *unk_c8;
    s32 unk_cc;
    s32 unk_d0;
    s32 unk_d4;
    s32 unk_d8;
    s32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
};

struct Unk_ov065_022804b8_Dst {
    u8 pad_00[8];
    char unk_08[0x1f];
    char unk_27[0x15];
    char unk_3c[0x33];
    char unk_6f[0x1f];
    char unk_8e[0x1f];
    char unk_ad[0x4c];
    s32 unk_fc;
    char unk_100[0xb];
    char unk_10b[3];
    s32 unk_110;
    s32 unk_114;
    char unk_118[0x80];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    s32 unk_1a4;
    s32 unk_1a8;
    char unk_1ac[0x33];
    u8 pad_1df[1];
    s32 unk_1e0;
    s32 unk_1e4;
    s32 unk_1e8;
    s32 unk_1ec;
    s32 unk_1f0;
    s32 unk_1f4;
    s32 unk_1f8;
    s32 unk_1fc;
    s32 unk_200;
};

struct Unk_ov065_02280854_Node {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    Unk_ov065_02280854_Node *unk_20;
};

struct Unk_ov065_02280854_Ctx {
    u8 pad_000[0x20c];
    s32 unk_20c;
    s32 unk_210;
    u8 pad_214[0x418 - 0x214];
    s32 unk_418;
    u8 pad_41c[8];
    Unk_ov065_02280854_Node *unk_424;
};

struct Unk_ov065_02280854_H {
    Unk_ov065_02280854_Ctx *unk_00;
};

struct Unk_ov065_0228094c_Sub {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    u8 pad_0c[0xc];
    char *unk_18;
};

struct Unk_ov065_02280a2c_Ctx {
    u8 pad_000[0x1a0];
    s32 unk_1a0;
    u8 pad_1a4[0x418 - 0x1a4];
    s32 unk_418;
};

struct Unk_ov065_02280a2c_M0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
};

struct Unk_ov065_02280c08_Node {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x38 - 0x14];
    s32 unk_38;
};

struct Unk_ov065_02280a2c_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_02280a2c_Wrap {
    Unk_ov065_02280a2c_Pair p;
};

extern "C" {
void GsUtil_StrCopyN(void *, const void *, s32);
void GsGp_SetErrorString(void *, const char *);
void GsGp_SetError(void *, s32, const char *);
void GsGp_DebugLog(void *, const char *, ...);
s32 GsGp_ProcessConnectReply(void *, void *, char *);
s32 GsGp_ProcessNewProfileReply(void *, void *, char *);
s32 GsGp_ProcessProfileReply(void *, void *, char *);
s32 GsGp_ProcessRnReply(void *, void *, char *);
s32 GsSock_Shutdown(s32, s32);
s32 GsSock_Close(s32);
void GsUtil_Free(void *);
void *GsUtil_Alloc(u32);
s32 GsGp_QueueCallback(void *, Unk_ov065_02280a2c_Pair, void *, void *, s32);
s32 func_0212899c(void *, s32, u32);
s32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 GsGpPeer_SendString(void *, void *, const char *);
s32 GsGpPeer_Send(void *, void *, const char *, s32);
s32 GsGpPeer_SendChar(void *, void *, s32);
s32 GsUtil_GetTimeSeconds(s32);
s32 GsGpBuf_AppendString(void *, void *, const char *);
s32 GsGpBuf_AppendInt(void *, void *, s32);
s32 GsGpBuf_Append(void *, void *, const char *, s32);
s32 GsGpBuf_AppendChar(void *, void *, s32);
void GsArray_Append(void *, void *);
s32 GsGpProfile_Find(void *, s32, void *);
s32 GsSock_Socket(s32, s32, s32);
s32 GsSock_SetBlocking(s32, s32);
void GsGpPeer_SetSocketBuffers(s32);
s32 GsSock_Connect(s32, void *, s32);
s32 GsSock_GetLastError(s32);
void GsGp_CallErrorCallback(void *, s32, s32);

extern char data_ov065_0228d884[];
extern char data_ov065_0228d894[];
extern char data_ov065_0228d8dc[];


s32 GsGp_IsValidDate(s32 day, s32 mon, s32 year);






void GsGp_FreeOperation(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node *n);




// byte-sized unsigned enum: an enum-typed zero is not constant-folded/shared with later zeros
#pragma enumsalwaysint off
enum Unk_ov065_02280a2c_Z { Unk_ov065_02280a2c_Z_0 = 0, Unk_ov065_02280a2c_Z_FF = 0xff };
#pragma enumsalwaysint reset



struct Unk_ov065_02280c84_Src {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};


struct Unk_ov065_02280cb4_T {
    s32 v[6];
};


struct Unk_ov065_02280d70_P2 {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_02280d70_P1 {
    u8 pad_00[8];
    Unk_ov065_02280d70_P2 *unk_08;
};

struct Unk_ov065_02280d70_Sa {
    s32 unk_00;
    s32 unk_04;
};

}
extern "C" {
s32 GsGpPeer_SendMessageBody(void *h, Unk_ov065_02280c08_Node *n, char *str, s32 len);
s32 GsGpPeer_SendTransferHeader(void *h, Unk_ov065_02280c08_Node *n, s32 a, Unk_ov065_02280c84_Src *s);
s32 GsGpPeer_QueueMessage(void *h, Unk_ov065_02280c08_Node *n, s32 a, const char *b);
s32 GsGpPeer_Connect(void *h, Unk_ov065_02280854_Node *n);
}
}

namespace Nb {
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
s32 GsGpPeer_RequestSignature(Ctx0228 **h, Node0228 *n);
Node0228 *GsGpPeer_New(Ctx0228 **h, s32 a, s32 b);
void GsGpPeer_FreeQueuedMessage(void *p);
Node0228 *GsGpPeer_FindConnected(Ctx0228 **h, s32 id);
s32 GsGpPeer_ProcessAll(Ctx0228 **h);
void GsGpPeer_SetSocketBuffers(s32 s);
void GsGpPeer_Remove(Ctx0228 **h, Node0228 *n);
void GsGpPeer_Free(Ctx0228 **h, Node0228 *n);
s32 GsGpPeer_Process(Ctx0228 **h, Node0228 *n);
s32 GsGpPeer_ProcessConnected(Ctx0228 **h, Node0228 *n);
s32 GsGpPeer_FlushQueue(Ctx0228 **h, Node0228 *n);
s32 GsGpPeer_ProcessIncoming(Ctx0228 **h, Node0228 *n);
s32 GsGpPeer_ProcessOutgoing(Ctx0228 **h, Node0228 *n);
}
}

namespace Nb {
extern "C" {
s32 GsGpPeer_ProcessOutgoing(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    s32 out;
    s32 len;
    s32 flag;
    Ent0228 *e;
    s32 r;
    s32 keep;
    char *p;
    switch (n->unk_00) {
    case 0x65:
        break;
    case 0x66:
        r = GsGpPeer_Connect(h, n);
        if (r != 0) {
            return r;
        }
        break;
    case 0x67:
        r = GsGp_CheckConnectComplete(h, n->unk_08, &out);
        if (r != 0) {
            return r;
        }
        if (out == 4) {
            GsGp_SetErrorString(h, "Error connecting to a peer.");
            return 3;
        } else if (out == 3) {
            keep = 1;
            if (GsGpProfile_Find(h, n->unk_0c, &e) == 0) {
                GsGp_SetErrorString(h, "Error connecting to a peer.");
                return 3;
            }
            GsGpBuf_AppendString(h, &n->unk_28, "\\auth\\");
            GsGpBuf_AppendString(h, &n->unk_28, "\\pid\\");
            GsGpBuf_AppendInt(h, &n->unk_28, c->unk_1a0);
            GsGpBuf_AppendString(h, &n->unk_28, "\\nick\\");
            GsGpBuf_AppendString(h, &n->unk_28, c->unk_110);
            GsGpBuf_AppendString(h, &n->unk_28, "\\sig\\");
            GsGpBuf_AppendString(h, &n->unk_28, e->unk_18);
            GsGpBuf_AppendString(h, &n->unk_28, "\\final\\");
            {
                Node0228 *m = c->unk_434;
                while (m != NULL) {
                    if (m->unk_0c == n->unk_0c && m != n && m->unk_00 <= 0x67) {
                        keep = 0;
                    }
                    m = m->unk_3c;
                }
            }
            if (keep != 0) {
                GsUtil_Free(e->unk_18);
                e->unk_18 = NULL;
                if (GsGpProfile_IsUnused(e) != 0) {
                    GsGpProfile_Remove(h, e);
                }
            }
            n->unk_00 = 0x68;
        }
        break;
    case 0x68:
        r = GsGp_RecvToBuffer(h, n->unk_08, &n->unk_18, &len, &flag, "PR");
        if (r != 0) {
            return r;
        }
        p = func_02129f1c(n->unk_18, "\\final\\");
        if (p != NULL) {
            char *q;
            *p = 0;
            q = n->unk_18;
            if (strncmp(q, "\\anack\\", 7) == 0) {
                n->unk_14++;
                if (n->unk_14 > 1) {
                    GsGp_SetErrorString(h, "Error getting buddy authorization.");
                    return 3;
                }
                r = GsGpPeer_RequestSignature(h, n);
                if (r != 0) {
                    return r;
                }
            } else if (strncmp(q, "\\aack\\", 6) != 0) {
                GsGp_SetErrorString(h, "Error parsing buddy message.");
                return 3;
            }
            n->unk_00 = 0x69;
            n->unk_20 = 0;
        }
        break;
    }
    if (n->unk_30 > 0) {
        r = GsGp_SendBuffer(h, n->unk_08, &n->unk_28, &flag, 1, "PR");
        if (flag != 0 || r != 0) {
            n->unk_00 = 0x6a;
        }
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpPeer_ProcessIncoming(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    s32 len;
    s32 flag;
    char b1[0x10];
    char b2[0x1f];
    char b3[0x21];
    char b5[0x21];
    char b4[0x100];
    char *p;
    char *q;
    s32 x;
    s32 r;
    r = GsGp_RecvToBuffer(h, n->unk_08, &n->unk_18, &len, &flag, "PR");
    if (r != 0) {
        return r;
    }
    if (flag != 0) {
        n->unk_00 = 0x6a;
        return 0;
    }
    p = func_02129f1c(n->unk_18, "\\final\\");
    if (p != NULL) {
        *p = 0;
        q = n->unk_18;
        if (strncmp(q, "\\auth\\", 6) == 0) {
            if (GsGp_GetValue(q, "\\pid\\", b1, 0x10) == 0) {
                n->unk_00 = 0x6a;
                return 0;
            }
            x = func_0212b770(b1);
            if (GsGp_GetValue(n->unk_18, "\\nick\\", b2, 0x1f) == 0) {
                n->unk_00 = 0x6a;
                return 0;
            }
            if (GsGp_GetValue(n->unk_18, "\\sig\\", b3, 0x21) == 0) {
                n->unk_00 = 0x6a;
                return 0;
            }
            OS_SPrintf(b4, "%s%d%d", c->unk_177, c->unk_1a0, x);
            GsUtil_Md5Hex(b4, STD_GetStringLength(b4), b5);
            if (strcmp(b3, b5) != 0) {
                GsGpBuf_AppendString(h, &n->unk_28, "\\anack\\");
                GsGpBuf_AppendString(h, &n->unk_28, "\\final\\");
                n->unk_00 = 0x6a;
                return 0;
            }
            GsGpBuf_AppendString(h, &n->unk_28, "\\aack\\");
            GsGpBuf_AppendString(h, &n->unk_28, "\\final\\");
            n->unk_00 = 0x69;
            n->unk_0c = x;
        } else {
            n->unk_00 = 0x6a;
            return 0;
        }
        n->unk_20 = 0;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpPeer_FlushQueue(Ctx0228 **h, Node0228 *n) {
    s32 i;
    s32 flag;
    s32 r;
    if (n->unk_30 != 0) {
        return 0;
    }
    if (GsArray_Count(n->unk_38) != 0) {
        i = 0;
        do {
            Sub0228 *e = (Sub0228 *)GsArray_At(n->unk_38, i);
            r = GsGp_SendBuffer(h, n->unk_08, (char **)e, &flag, i, "PR");
            if (flag != 0 || r != 0) {
                n->unk_00 = 0x6a;
                return 0;
            }
            if (e->unk_0c != e->unk_08) {
                break;
            }
            GsArray_DeleteAt(n->unk_38, i);
        } while (GsArray_Count(n->unk_38) != 0);
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpPeer_ProcessConnected(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    s32 len;
    s32 flag;
    Unk_ov065_02280e7c_Pair2 pr;
    s32 v;
    s32 type;
    s32 ext;
    s32 r;
    if (n->unk_30 != 0) {
        r = GsGp_SendBuffer(h, n->unk_08, &n->unk_28, &flag, 1, "PR");
        if (flag != 0 || r != 0) {
            n->unk_00 = 0x6a;
            return 0;
        }
    }
    if (n->unk_30 == 0) {
        r = GsGpPeer_FlushQueue(h, n);
        if (r != 0) {
            return r;
        }
        if (n->unk_00 == 0x6a) {
            return 0;
        }
    }
    r = GsGp_RecvToBuffer(h, n->unk_08, &n->unk_18, &len, &flag, "PR");
    if (r != 0) {
        n->unk_00 = 0x6a;
        return 0;
    }
    if (len > 0) {
        n->unk_10 = GsUtil_GetTimeSeconds(0) + 0x12c;
    }
    do {
        r = GsGpPeer_ParseMessage(h, &n->unk_18, &v, &type, &ext);
        if (r != 0) {
            return r;
        }
        if (v != 0) {
            switch (type) {
            case 1:
                pr = *(Unk_ov065_02280e7c_Pair2 *)&c->unk_1bc;
                if (pr.p.unk_00 != 0) {
                    Sub0228 *m = (Sub0228 *)GsUtil_Alloc(0xc);
                    if (m == NULL) {
                        GsGp_SetErrorString(h, "Out of memory.");
                        return 1;
                    }
                    m->unk_00 = n->unk_0c;
                    m->unk_08 = GsUtil_StrDup(v);
                    m->unk_04 = GsUtil_GetTimeSeconds(0);
                    r = GsGp_QueueCallback(h, pr.p, m, 0, 2);
                    if (r != 0) {
                        return r;
                    }
                }
                break;
            case 0x66:
                GsGp_SendBuddyMessageEx(h, n->unk_0c, 0x67, (s32)"1");
                break;
            case 0xc8:
            case 0xc9:
            case 0xca:
            case 0xcb:
            case 0xcc:
            case 0xcd:
            case 0xce:
            case 0xcf:
            case 0xd0:
                GsGpPeer_DeclineTransfer(h, n, type, n->unk_18, v, ext);
                break;
            }
            GsGpBuf_Compact(h, &n->unk_18);
        }
    } while (v != 0);
    if (flag != 0) {
        n->unk_00 = 0x6a;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
// Not in the original binary: unreferenced weak function compiled right before GsGpPeer_ProcessConnected, so that the literal
// "Out of memory." is pooled before "1" as in the original; removed by the dead-stripping link (see notes.txt).
__declspec(weak) void Unk_ov065_02281180_pool_order(void) {
    STD_GetStringLength("PR");
    STD_GetStringLength("Out of memory.");
}
}
}

namespace Nb {
extern "C" {
s32 GsGpPeer_Process(Ctx0228 **h, Node0228 *n) {
    s32 r = 0;
    if (n->unk_00 != 0x69) {
        if (n->unk_04 != 0) {
            r = GsGpPeer_ProcessOutgoing(h, n);
        } else {
            r = GsGpPeer_ProcessIncoming(h, n);
        }
    }
    if (r == 0 && n->unk_00 == 0x69) {
        r = GsGpPeer_ProcessConnected(h, n);
    }
    return r;
}
}
}

namespace Nb {
extern "C" {
void GsGpPeer_Free(Ctx0228 **h, Node0228 *n) {
    GsSock_Shutdown(n->unk_08, 2);
    GsSock_Close(n->unk_08);
    GsUtil_Free(n->unk_18);
    n->unk_18 = NULL;
    GsUtil_Free(n->unk_28);
    n->unk_28 = NULL;
    if (n->unk_38 != NULL) {
        GsArray_Free(n->unk_38);
        n->unk_38 = NULL;
    }
    GsUtil_Free(n);
}
}
}

namespace Nb {
extern "C" {
void GsGpPeer_Remove(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    Node0228 *p = c->unk_434;
    if (p == n) {
        c->unk_434 = n->unk_3c;
    } else {
        Node0228 *q = p->unk_3c;
        while (q != n) {
            if (q == NULL) {
                GsGp_DebugLog(h, "Tried to remove peer not in list.");
                return;
            }
            p = q;
            q = q->unk_3c;
        }
        p->unk_3c = n->unk_3c;
    }
    {
        s32 i = 0;
        while (GsArray_Count(n->unk_38) != 0) {
            Sub0228 *e = (Sub0228 *)GsArray_At(n->unk_38, i);
            if (e->unk_10 < 0x64) {
                GsGp_SendServerBuddyMessage(h, n->unk_0c, e->unk_10, (const char *)(e->unk_00 + e->unk_14));
            }
            GsArray_DeleteAt(n->unk_38, i);
        }
    }
    GsGpPeer_Free(h, n);
}
}
}

namespace Nb {
extern "C" {
void GsGpPeer_SetSocketBuffers(s32 s) {
    GsSock_SetRecvBufSize(s, 0x4000);
    GsSock_SetRecvBufSize(s, 0x8000);
    GsSock_SetRecvBufSize(s, 0x10000);
    GsSock_SetRecvBufSize(s, 0x20000);
    GsSock_SetRecvBufSize(s, 0x40000);
    GsSock_SetSendBufSize(s, 0x4000);
    GsSock_SetSendBufSize(s, 0x8000);
    GsSock_SetSendBufSize(s, 0x10000);
    GsSock_GetRecvBufSize(s);
    GsSock_GetSendBufSize(s);
}
}
}

namespace Nb {
extern "C" {
s32 GsGpPeer_ProcessAll(Ctx0228 **h) {
    Ctx0228 *c = *h;
    Node0228 *n;
    s32 s;
    if (c->unk_204 != -1 && GsSock_CanRead(c->unk_204) != 0) {
        s = GsSock_Accept(c->unk_204, 0, 0);
        if (s != -1) {
            n = GsGpPeer_New(h, -1, 0);
            if (n != NULL) {
                n->unk_00 = 0x68;
                n->unk_08 = s;
                GsSock_SetBlocking(s, 0);
                GsGpPeer_SetSocketBuffers(n->unk_08);
            } else {
                GsSock_Close(s);
            }
        }
    }
    {
        Node0228 *m = c->unk_434;
        s32 z = 0;
        while (m != NULL) {
            Node0228 *next = m->unk_3c;
            s32 r = GsGpPeer_Process(h, m);
            if (m->unk_00 == 0x6a || r != 0 || GsUtil_GetTimeSeconds(z) > m->unk_10) {
                GsGpPeer_Remove(h, m);
            }
            m = next;
        }
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
Node0228 *GsGpPeer_FindConnected(Ctx0228 **h, s32 id) {
    Ctx0228 *c = *h;
    Node0228 *n = c->unk_434;
    while (n != NULL) {
        if (n->unk_0c == id && n->unk_00 == 0x69) {
            return n;
        }
        n = n->unk_3c;
    }
    return NULL;
}
}
}

namespace Nb {
extern "C" {
void GsGpPeer_FreeQueuedMessage(void *p) {
    GsUtil_Free(*(void **)p);
    *(void **)p = NULL;
}
}
}

namespace Nb {
extern "C" {
Node0228 *GsGpPeer_New(Ctx0228 **h, s32 a, s32 b) {
    Ctx0228 *c = *h;
    Node0228 *n = (Node0228 *)GsUtil_Alloc(0x40);
    if (n == NULL) {
        return NULL;
    }
    func_0212899c(n, 0, 0x40);
    n->unk_00 = 0x64;
    n->unk_04 = b;
    n->unk_08 = -1;
    n->unk_0c = a;
    n->unk_10 = GsUtil_GetTimeSeconds(0) + 0x12c;
    n->unk_3c = c->unk_434;
    n->unk_38 = GsArray_New(0x18, 0, GsGpPeer_FreeQueuedMessage);
    c->unk_434 = n;
    return n;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpPeer_RequestSignature(Ctx0228 **h, Node0228 *n) {
    Ent0228 *e;
    s32 r = GsGp_AddOperation(h, 2, 0, &e, 0, 0, 0);
    if (r != 0) {
        return r;
    }
    r = GsGp_SendGetProfile(h, n->unk_0c, e->unk_18);
    if (r != 0) {
        return r;
    }
    n->unk_00 = 0x65;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGpPeer_Connect(void *h, Unk_ov065_02280854_Node *n) {
    Unk_ov065_02280d70_Sa sa;
    Unk_ov065_02280d70_P1 *p;
    s32 e;
    if (GsGpProfile_Find(h, n->unk_0c, &p) == 0) {
        GsGp_SetErrorString(h, "Error connecting to a peer.");
        return 3;
    }
    n->unk_08 = GsSock_Socket(2, 1, 0);
    if (n->unk_08 == -1) {
        GsGp_SetError(h, 5, "There was an error creating a socket.");
        GsGp_CallErrorCallback(h, 3, 0);
        return 3;
    }
    if (GsSock_SetBlocking(n->unk_08, 0) == 0) {
        GsGp_SetError(h, 5, "There was an error making a socket non-blocking.");
        GsGp_CallErrorCallback(h, 3, 0);
        return 3;
    }
    GsGpPeer_SetSocketBuffers(n->unk_08);
    u32 ad = (u32)&sa;
    ((Unk_ov065_02280d70_Sa *)ad)->unk_00 = 0;
    ((Unk_ov065_02280d70_Sa *)ad)->unk_04 = 0;
    ((u8 *)&sa)[1] = 2;
    sa.unk_04 = p->unk_08->unk_10;
    *(u16 *)((u8 *)&sa + 2) = p->unk_08->unk_14;
    if (GsSock_Connect(n->unk_08, (Unk_ov065_02280d70_Sa *)ad, 8) == -1) {
        e = GsSock_GetLastError(n->unk_08);
        if (e != -6 && e != -0x1a && e != -0x4c) {
            GsGp_SetError(h, 5, "There was an error connecting a socket.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
    }
    n->unk_00 = 0x67;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGpPeer_QueueMessage(void *h, Unk_ov065_02280c08_Node *n, s32 a, const char *b) {
    s32 len = STD_GetStringLength(b);
    Unk_ov065_02280cb4_T t = {{0, 0, 0, 0, 0, 0}};
    s32 r;
    t.v[4] = a;
    r = GsGpBuf_AppendString(h, &t, "\\m\\");
    if (r != 0) {
        return r;
    }
    r = GsGpBuf_AppendInt(h, &t, a);
    if (r != 0) {
        return r;
    }
    r = GsGpBuf_AppendString(h, &t, "\\len\\");
    if (r != 0) {
        return r;
    }
    r = GsGpBuf_AppendInt(h, &t, len);
    if (r != 0) {
        return r;
    }
    r = GsGpBuf_AppendString(h, &t, "\\msg\\\n");
    if (r != 0) {
        return r;
    }
    t.v[5] = t.v[2];
    r = GsGpBuf_Append(h, &t, b, len);
    if (r != 0) {
        return r;
    }
    r = GsGpBuf_AppendChar(h, &t, 0);
    if (r != 0) {
        return r;
    }
    GsArray_Append((void *)n->unk_38, &t);
    n->unk_10 = GsUtil_GetTimeSeconds(0) + 0x12c;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGpPeer_SendTransferHeader(void *h, Unk_ov065_02280c08_Node *n, s32 a, Unk_ov065_02280c84_Src *s) {
    char buf[0x44];
    OS_SPrintf(buf, "\\m\\%d\\xfer\\%d %u %u", a, s->unk_00, s->unk_04, s->unk_08);
    return GsGpPeer_SendString(h, n, buf);
}
}
}

namespace Na {
extern "C" {
s32 GsGpPeer_SendMessageBody(void *h, Unk_ov065_02280c08_Node *n, char *str, s32 len) {
    char buf[0x24];
    s32 r;
    if (str == 0) {
        str = "";
    }
    if (len == -1) {
        len = STD_GetStringLength(str);
    }
    OS_SPrintf(buf, "\\len\\%d\\msg\\\n", len);
    r = GsGpPeer_SendString(h, n, buf);
    if (r != 0) {
        return r;
    }
    r = GsGpPeer_Send(h, n, str, len);
    if (r != 0) {
        return r;
    }
    r = GsGpPeer_SendChar(h, n, 0);
    if (r != 0) {
        return r;
    }
    n->unk_10 = GsUtil_GetTimeSeconds(0) + 0x12c;
    return 0;
}
}
}
