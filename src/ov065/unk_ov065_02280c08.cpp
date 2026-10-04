// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/GsArray.h"
#include "net/GsGpInfoCache.h"
#include "net/Unk_ov065_02280854_Ctx.h"
#include "net/Unk_ov065_0227c538_Node.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/GsGpPeer.h"
#include "net/GsGpTransferId.h"
#include "net/Unk_ov065_02280d70_P1.h"
#include "net/Unk_ov065_02280e7c_Ctx.h"
#include "net/GsGpCallbackArgs.h"

// ov065 TU47: GP gpiPeer.c (0x02280c08..0x0228176c)

namespace Na {
// ov065_054: 0x022804b8..0x02280d70












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
s32 GsGp_QueueCallback(void *, GsGpCallbackPair, void *, void *, s32);
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






void GsGp_FreeOperation(Unk_ov065_02280854_H *h, GsGpOperation *n);




// byte-sized unsigned enum: an enum-typed zero is not constant-folded/shared with later zeros
#pragma enumsalwaysint off
enum Unk_ov065_02280a2c_Z { Unk_ov065_02280a2c_Z_0 = 0, Unk_ov065_02280a2c_Z_FF = 0xff };
#pragma enumsalwaysint reset










}
extern "C" {
s32 GsGpPeer_SendMessageBody(void *h, GsGpPeer *n, char *str, s32 len);
s32 GsGpPeer_SendTransferHeader(void *h, GsGpPeer *n, s32 a, GsGpTransferId *s);
s32 GsGpPeer_QueueMessage(void *h, GsGpPeer *n, s32 a, const char *b);
s32 GsGpPeer_Connect(void *h, GsGpPeer *n);
}
}

namespace Nb {
// ov065_055: friend/auth connection task list (0x02280e7c..0x0228176c)








typedef Unk_ov065_02280e7c_Ctx Ctx0228;
typedef GsGpPeer Node0228;
typedef GsGpProfile Ent0228;
typedef Unk_ov065_02280e7c_Pair Pair0228;
typedef GsGpPeerMessage Sub0228;


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
s32 GsGpBuf_Compact(Ctx0228 **, GsGpBuffer *);
s32 GsGpPeer_ParseMessage(Ctx0228 **, GsGpBuffer *, s32 *, s32 *, s32 *);
s32 GsGp_SendBuffer(Ctx0228 **, s32, GsGpBuffer *, s32 *, s32, const char *);
s32 GsGp_RecvToBuffer(Ctx0228 **, s32, GsGpBuffer *, s32 *, s32 *, const char *);
s32 GsGpBuf_AppendInt(Ctx0228 **, GsGpBuffer *, s32);
s32 GsGpBuf_AppendString(Ctx0228 **, GsGpBuffer *, const char *);
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
    switch (n->peerState) {
    case 0x65:
        break;
    case 0x66:
        r = GsGpPeer_Connect(h, n);
        if (r != 0) {
            return r;
        }
        break;
    case 0x67:
        r = GsGp_CheckConnectComplete(h, n->sock, &out);
        if (r != 0) {
            return r;
        }
        if (out == 4) {
            GsGp_SetErrorString(h, "Error connecting to a peer.");
            return 3;
        } else if (out == 3) {
            keep = 1;
            if (GsGpProfile_Find(h, n->profileId, &e) == 0) {
                GsGp_SetErrorString(h, "Error connecting to a peer.");
                return 3;
            }
            GsGpBuf_AppendString(h, &n->outputBuffer, "\\auth\\");
            GsGpBuf_AppendString(h, &n->outputBuffer, "\\pid\\");
            GsGpBuf_AppendInt(h, &n->outputBuffer, c->profileId);
            GsGpBuf_AppendString(h, &n->outputBuffer, "\\nick\\");
            GsGpBuf_AppendString(h, &n->outputBuffer, c->nick);
            GsGpBuf_AppendString(h, &n->outputBuffer, "\\sig\\");
            GsGpBuf_AppendString(h, &n->outputBuffer, e->peerSig);
            GsGpBuf_AppendString(h, &n->outputBuffer, "\\final\\");
            {
                Node0228 *m = c->peerList;
                while (m != NULL) {
                    if (m->profileId == n->profileId && m != n && m->peerState <= 0x67) {
                        keep = 0;
                    }
                    m = m->next;
                }
            }
            if (keep != 0) {
                GsUtil_Free(e->peerSig);
                e->peerSig = NULL;
                if (GsGpProfile_IsUnused(e) != 0) {
                    GsGpProfile_Remove(h, e);
                }
            }
            n->peerState = 0x68;
        }
        break;
    case 0x68:
        r = GsGp_RecvToBuffer(h, n->sock, &n->inputBuffer, &len, &flag, "PR");
        if (r != 0) {
            return r;
        }
        p = func_02129f1c(n->inputBuffer.buffer, "\\final\\");
        if (p != NULL) {
            char *q;
            *p = 0;
            q = n->inputBuffer.buffer;
            if (strncmp(q, "\\anack\\", 7) == 0) {
                n->nackCount++;
                if (n->nackCount > 1) {
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
            n->peerState = 0x69;
            n->inputBuffer.length = 0;
        }
        break;
    }
    if (n->outputBuffer.length > 0) {
        r = GsGp_SendBuffer(h, n->sock, &n->outputBuffer, &flag, 1, "PR");
        if (flag != 0 || r != 0) {
            n->peerState = 0x6a;
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
    r = GsGp_RecvToBuffer(h, n->sock, &n->inputBuffer, &len, &flag, "PR");
    if (r != 0) {
        return r;
    }
    if (flag != 0) {
        n->peerState = 0x6a;
        return 0;
    }
    p = func_02129f1c(n->inputBuffer.buffer, "\\final\\");
    if (p != NULL) {
        *p = 0;
        q = n->inputBuffer.buffer;
        if (strncmp(q, "\\auth\\", 6) == 0) {
            if (GsGp_GetValue(q, "\\pid\\", b1, 0x10) == 0) {
                n->peerState = 0x6a;
                return 0;
            }
            x = func_0212b770(b1);
            if (GsGp_GetValue(n->inputBuffer.buffer, "\\nick\\", b2, 0x1f) == 0) {
                n->peerState = 0x6a;
                return 0;
            }
            if (GsGp_GetValue(n->inputBuffer.buffer, "\\sig\\", b3, 0x21) == 0) {
                n->peerState = 0x6a;
                return 0;
            }
            OS_SPrintf(b4, "%s%d%d", c->password, c->profileId, x);
            GsUtil_Md5Hex(b4, STD_GetStringLength(b4), b5);
            if (strcmp(b3, b5) != 0) {
                GsGpBuf_AppendString(h, &n->outputBuffer, "\\anack\\");
                GsGpBuf_AppendString(h, &n->outputBuffer, "\\final\\");
                n->peerState = 0x6a;
                return 0;
            }
            GsGpBuf_AppendString(h, &n->outputBuffer, "\\aack\\");
            GsGpBuf_AppendString(h, &n->outputBuffer, "\\final\\");
            n->peerState = 0x69;
            n->profileId = x;
        } else {
            n->peerState = 0x6a;
            return 0;
        }
        n->inputBuffer.length = 0;
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
    if (n->outputBuffer.length != 0) {
        return 0;
    }
    if (GsArray_Count(n->messageQueue) != 0) {
        i = 0;
        do {
            Sub0228 *e = (Sub0228 *)GsArray_At(n->messageQueue, i);
            r = GsGp_SendBuffer(h, n->sock, &e->buffer, &flag, i, "PR");
            if (flag != 0 || r != 0) {
                n->peerState = 0x6a;
                return 0;
            }
            if (e->buffer.pos != e->buffer.length) {
                break;
            }
            GsArray_DeleteAt(n->messageQueue, i);
        } while (GsArray_Count(n->messageQueue) != 0);
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
    if (n->outputBuffer.length != 0) {
        r = GsGp_SendBuffer(h, n->sock, &n->outputBuffer, &flag, 1, "PR");
        if (flag != 0 || r != 0) {
            n->peerState = 0x6a;
            return 0;
        }
    }
    if (n->outputBuffer.length == 0) {
        r = GsGpPeer_FlushQueue(h, n);
        if (r != 0) {
            return r;
        }
        if (n->peerState == 0x6a) {
            return 0;
        }
    }
    r = GsGp_RecvToBuffer(h, n->sock, &n->inputBuffer, &len, &flag, "PR");
    if (r != 0) {
        n->peerState = 0x6a;
        return 0;
    }
    if (len > 0) {
        n->expireTime = GsUtil_GetTimeSeconds(0) + 0x12c;
    }
    do {
        r = GsGpPeer_ParseMessage(h, &n->inputBuffer, &v, &type, &ext);
        if (r != 0) {
            return r;
        }
        if (v != 0) {
            switch (type) {
            case 1:
                pr = *(Unk_ov065_02280e7c_Pair2 *)&c->buddyMessageCallback;
                if (pr.p.func != 0) {
                    GsGpBuddyMessage *m = (GsGpBuddyMessage *)GsUtil_Alloc(0xc);
                    if (m == NULL) {
                        GsGp_SetErrorString(h, "Out of memory.");
                        return 1;
                    }
                    m->profileId = n->profileId;
                    m->message = (char *)GsUtil_StrDup(v);
                    m->date = GsUtil_GetTimeSeconds(0);
                    r = GsGp_QueueCallback(h, pr.p, m, 0, 2);
                    if (r != 0) {
                        return r;
                    }
                }
                break;
            case 0x66:
                GsGp_SendBuddyMessageEx(h, n->profileId, 0x67, (s32)"1");
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
                GsGpPeer_DeclineTransfer(h, n, type, n->inputBuffer.buffer, v, ext);
                break;
            }
            GsGpBuf_Compact(h, &n->inputBuffer);
        }
    } while (v != 0);
    if (flag != 0) {
        n->peerState = 0x6a;
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
    if (n->peerState != 0x69) {
        if (n->isOutgoing != 0) {
            r = GsGpPeer_ProcessOutgoing(h, n);
        } else {
            r = GsGpPeer_ProcessIncoming(h, n);
        }
    }
    if (r == 0 && n->peerState == 0x69) {
        r = GsGpPeer_ProcessConnected(h, n);
    }
    return r;
}
}
}

namespace Nb {
extern "C" {
void GsGpPeer_Free(Ctx0228 **h, Node0228 *n) {
    GsSock_Shutdown(n->sock, 2);
    GsSock_Close(n->sock);
    GsUtil_Free(n->inputBuffer.buffer);
    n->inputBuffer.buffer = NULL;
    GsUtil_Free(n->outputBuffer.buffer);
    n->outputBuffer.buffer = NULL;
    if (n->messageQueue != NULL) {
        GsArray_Free(n->messageQueue);
        n->messageQueue = NULL;
    }
    GsUtil_Free(n);
}
}
}

namespace Nb {
extern "C" {
void GsGpPeer_Remove(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    Node0228 *p = c->peerList;
    if (p == n) {
        c->peerList = n->next;
    } else {
        Node0228 *q = p->next;
        while (q != n) {
            if (q == NULL) {
                GsGp_DebugLog(h, "Tried to remove peer not in list.");
                return;
            }
            p = q;
            q = q->next;
        }
        p->next = n->next;
    }
    {
        s32 i = 0;
        while (GsArray_Count(n->messageQueue) != 0) {
            Sub0228 *e = (Sub0228 *)GsArray_At(n->messageQueue, i);
            if (e->msgType < 0x64) {
                GsGp_SendServerBuddyMessage(h, n->profileId, e->msgType, e->buffer.buffer + e->msgOffset);
            }
            GsArray_DeleteAt(n->messageQueue, i);
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
    if (c->peerSocket != -1 && GsSock_CanRead(c->peerSocket) != 0) {
        s = GsSock_Accept(c->peerSocket, 0, 0);
        if (s != -1) {
            n = GsGpPeer_New(h, -1, 0);
            if (n != NULL) {
                n->peerState = 0x68;
                n->sock = s;
                GsSock_SetBlocking(s, 0);
                GsGpPeer_SetSocketBuffers(n->sock);
            } else {
                GsSock_Close(s);
            }
        }
    }
    {
        Node0228 *m = c->peerList;
        s32 z = 0;
        while (m != NULL) {
            Node0228 *next = m->next;
            s32 r = GsGpPeer_Process(h, m);
            if (m->peerState == 0x6a || r != 0 || GsUtil_GetTimeSeconds(z) > m->expireTime) {
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
    Node0228 *n = c->peerList;
    while (n != NULL) {
        if (n->profileId == id && n->peerState == 0x69) {
            return n;
        }
        n = n->next;
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
    n->peerState = 0x64;
    n->isOutgoing = b;
    n->sock = -1;
    n->profileId = a;
    n->expireTime = GsUtil_GetTimeSeconds(0) + 0x12c;
    n->next = c->peerList;
    n->messageQueue = GsArray_New(0x18, 0, GsGpPeer_FreeQueuedMessage);
    c->peerList = n;
    return n;
}
}
}

namespace Nb {
extern "C" {
s32 GsGpPeer_RequestSignature(Ctx0228 **h, Node0228 *n) {
    GsGpOperation *e;
    s32 r = GsGp_AddOperation(h, 2, 0, &e, 0, 0, 0);
    if (r != 0) {
        return r;
    }
    r = GsGp_SendGetProfile(h, n->profileId, e->id);
    if (r != 0) {
        return r;
    }
    n->peerState = 0x65;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGpPeer_Connect(void *h, GsGpPeer *n) {
    Unk_ov065_02280d70_Sa sa;
    GsGpProfile *p;
    s32 e;
    if (GsGpProfile_Find(h, n->profileId, &p) == 0) {
        GsGp_SetErrorString(h, "Error connecting to a peer.");
        return 3;
    }
    n->sock = GsSock_Socket(2, 1, 0);
    if (n->sock == -1) {
        GsGp_SetError(h, 5, "There was an error creating a socket.");
        GsGp_CallErrorCallback(h, 3, 0);
        return 3;
    }
    if (GsSock_SetBlocking(n->sock, 0) == 0) {
        GsGp_SetError(h, 5, "There was an error making a socket non-blocking.");
        GsGp_CallErrorCallback(h, 3, 0);
        return 3;
    }
    GsGpPeer_SetSocketBuffers(n->sock);
    u32 ad = (u32)&sa;
    ((Unk_ov065_02280d70_Sa *)ad)->unk_00 = 0;
    ((Unk_ov065_02280d70_Sa *)ad)->addr = 0;
    ((u8 *)&sa)[1] = 2;
    sa.addr = p->buddyStatus->ip;
    *(u16 *)((u8 *)&sa + 2) = p->buddyStatus->port;
    if (GsSock_Connect(n->sock, (Unk_ov065_02280d70_Sa *)ad, 8) == -1) {
        e = GsSock_GetLastError(n->sock);
        if (e != -6 && e != -0x1a && e != -0x4c) {
            GsGp_SetError(h, 5, "There was an error connecting a socket.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 3;
        }
    }
    n->peerState = 0x67;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGpPeer_QueueMessage(void *h, GsGpPeer *n, s32 a, const char *b) {
    s32 len = STD_GetStringLength(b);
    GsGpPeerMessage t = {{0, 0, 0, 0}, 0, 0};
    s32 r;
    t.msgType = a;
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
    t.msgOffset = t.buffer.length;
    r = GsGpBuf_Append(h, &t, b, len);
    if (r != 0) {
        return r;
    }
    r = GsGpBuf_AppendChar(h, &t, 0);
    if (r != 0) {
        return r;
    }
    GsArray_Append((void *)n->messageQueue, &t);
    n->expireTime = GsUtil_GetTimeSeconds(0) + 0x12c;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGpPeer_SendTransferHeader(void *h, GsGpPeer *n, s32 a, GsGpTransferId *s) {
    char buf[0x44];
    OS_SPrintf(buf, "\\m\\%d\\xfer\\%d %u %u", a, s->profileId, s->count, s->time);
    return GsGpPeer_SendString(h, n, buf);
}
}
}

namespace Na {
extern "C" {
s32 GsGpPeer_SendMessageBody(void *h, GsGpPeer *n, char *str, s32 len) {
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
    n->expireTime = GsUtil_GetTimeSeconds(0) + 0x12c;
    return 0;
}
}
}
