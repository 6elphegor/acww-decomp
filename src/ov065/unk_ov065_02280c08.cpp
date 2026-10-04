// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/darray.h"
#include "net/gpiInfo.h"
#include "net/Unk_ov065_02280854_Ctx.h"
#include "net/Unk_ov065_0227c538_Node.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/gpiPeer.h"
#include "net/gpiTransfer.h"
#include "net/Unk_ov065_02280d70_P1.h"
#include "net/Unk_ov065_02280e7c_Ctx.h"
#include "net/gp.h"

// ov065 TU47: GP gpiPeer.c (0x02280c08..0x0228176c)

namespace Na {
// ov065_054: 0x022804b8..0x02280d70












extern "C" {
void strzcpy(void *, const void *, s32);
void gpiSetErrorString(void *, const char *);
void gpiSetError(void *, s32, const char *);
void gpiDebug(void *, const char *, ...);
s32 gpiProcessConnect(void *, void *, char *);
s32 gpiProcessNewProfile(void *, void *, char *);
s32 gpiProcessGetInfo(void *, void *, char *);
s32 gpiProcessRegisterUniqueNick(void *, void *, char *);
s32 shutdown(s32, s32);
s32 closesocket(s32);
void GsUtil_Free(void *);
void *GsUtil_Alloc(u32);
s32 gpiAddCallback(void *, GPICallback, void *, void *, s32);
s32 memset(void *, s32, u32);
s32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 gpiSendOrBufferString(void *, void *, const char *);
s32 gpiSendOrBufferStringLen(void *, void *, const char *, s32);
s32 gpiSendOrBufferChar(void *, void *, s32);
s32 time(s32);
s32 gpiAppendStringToBuffer(void *, void *, const char *);
s32 gpiAppendIntToBuffer(void *, void *, s32);
s32 gpiAppendStringToBufferLen(void *, void *, const char *, s32);
s32 gpiAppendCharToBuffer(void *, void *, s32);
void ArrayAppend(void *, void *);
s32 gpiGetProfile(void *, s32, void *);
s32 socket(s32, s32, s32);
s32 SetSockBlocking(s32, s32);
void GsGpPeer_SetSocketBuffers(s32);
s32 connect(s32, void *, s32);
s32 GOAGetLastError(s32);
void gpiCallErrorCallback(void *, s32, s32);

extern char data_ov065_0228d884[];
extern char data_ov065_0228d894[];
extern char data_ov065_0228d8dc[];


s32 gpiIsValidDate(s32 day, s32 mon, s32 year);






void gpiDestroyOperation(Unk_ov065_02280854_H *h, GPIOperation *n);




// byte-sized unsigned enum: an enum-typed zero is not constant-folded/shared with later zeros
#pragma enumsalwaysint off
enum Unk_ov065_02280a2c_Z { Unk_ov065_02280a2c_Z_0 = 0, Unk_ov065_02280a2c_Z_FF = 0xff };
#pragma enumsalwaysint reset










}
extern "C" {
s32 gpiPeerFinishTransferMessage(void *h, GPIPeer *n, char *str, s32 len);
s32 gpiPeerStartTransferMessage(void *h, GPIPeer *n, s32 a, GPITransferID *s);
s32 gpiPeerAddMessage(void *h, GPIPeer *n, s32 a, const char *b);
s32 gpiPeerStartConnect(void *h, GPIPeer *n);
}
}

namespace Nb {
// ov065_055: friend/auth connection task list (0x02280e7c..0x0228176c)








typedef Unk_ov065_02280e7c_Ctx Ctx0228;
typedef GPIPeer Node0228;
typedef GPIProfile Ent0228;
typedef Unk_ov065_02280e7c_Pair Pair0228;
typedef GPIMessage Sub0228;


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
s32 gpiClipBufferToPosition(Ctx0228 **, GPIBuffer *);
s32 gpiReadMessageFromBuffer(Ctx0228 **, GPIBuffer *, s32 *, s32 *, s32 *);
s32 gpiSendFromBuffer(Ctx0228 **, s32, GPIBuffer *, s32 *, s32, const char *);
s32 gpiRecvToBuffer(Ctx0228 **, s32, GPIBuffer *, s32 *, s32 *, const char *);
s32 gpiAppendIntToBuffer(Ctx0228 **, GPIBuffer *, s32);
s32 gpiAppendStringToBuffer(Ctx0228 **, GPIBuffer *, const char *);
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
s32 gpiPeerGetSig(Ctx0228 **h, Node0228 *n);
Node0228 *gpiAddPeer(Ctx0228 **h, s32 a, s32 b);
void gpiFreeMessage(void *p);
Node0228 *gpiGetPeerByProfile(Ctx0228 **h, s32 id);
s32 gpiProcessPeers(Ctx0228 **h);
void GsGpPeer_SetSocketBuffers(s32 s);
void gpiRemovePeer(Ctx0228 **h, Node0228 *n);
void gpiDestroyPeer(Ctx0228 **h, Node0228 *n);
s32 gpiProcessPeer(Ctx0228 **h, Node0228 *n);
s32 gpiProcessPeerConnected(Ctx0228 **h, Node0228 *n);
s32 gpiPeerSendMessages(Ctx0228 **h, Node0228 *n);
s32 gpiProcessPeerAcceptingConnection(Ctx0228 **h, Node0228 *n);
s32 gpiProcessPeerInitiatingConnection(Ctx0228 **h, Node0228 *n);
}
}

namespace Nb {
extern "C" {
s32 gpiProcessPeerInitiatingConnection(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    s32 out;
    s32 len;
    s32 flag;
    Ent0228 *e;
    s32 r;
    s32 keep;
    char *p;
    switch (n->state) {
    case 0x65:
        break;
    case 0x66:
        r = gpiPeerStartConnect(h, n);
        if (r != 0) {
            return r;
        }
        break;
    case 0x67:
        r = gpiCheckSocketConnect(h, n->sock, &out);
        if (r != 0) {
            return r;
        }
        if (out == 4) {
            gpiSetErrorString(h, "Error connecting to a peer.");
            return 3;
        } else if (out == 3) {
            keep = 1;
            if (gpiGetProfile(h, n->profile, &e) == 0) {
                gpiSetErrorString(h, "Error connecting to a peer.");
                return 3;
            }
            gpiAppendStringToBuffer(h, &n->outputBuffer, "\\auth\\");
            gpiAppendStringToBuffer(h, &n->outputBuffer, "\\pid\\");
            gpiAppendIntToBuffer(h, &n->outputBuffer, c->profileId);
            gpiAppendStringToBuffer(h, &n->outputBuffer, "\\nick\\");
            gpiAppendStringToBuffer(h, &n->outputBuffer, c->nick);
            gpiAppendStringToBuffer(h, &n->outputBuffer, "\\sig\\");
            gpiAppendStringToBuffer(h, &n->outputBuffer, e->peerSig);
            gpiAppendStringToBuffer(h, &n->outputBuffer, "\\final\\");
            {
                Node0228 *m = c->peerList;
                while (m != NULL) {
                    if (m->profile == n->profile && m != n && m->state <= 0x67) {
                        keep = 0;
                    }
                    m = m->pnext;
                }
            }
            if (keep != 0) {
                GsUtil_Free(e->peerSig);
                e->peerSig = NULL;
                if (gpiCanFreeProfile(e) != 0) {
                    gpiRemoveProfile(h, e);
                }
            }
            n->state = 0x68;
        }
        break;
    case 0x68:
        r = gpiRecvToBuffer(h, n->sock, &n->inputBuffer, &len, &flag, "PR");
        if (r != 0) {
            return r;
        }
        p = strstr(n->inputBuffer.buffer, "\\final\\");
        if (p != NULL) {
            char *q;
            *p = 0;
            q = n->inputBuffer.buffer;
            if (strncmp(q, "\\anack\\", 7) == 0) {
                n->nackCount++;
                if (n->nackCount > 1) {
                    gpiSetErrorString(h, "Error getting buddy authorization.");
                    return 3;
                }
                r = gpiPeerGetSig(h, n);
                if (r != 0) {
                    return r;
                }
            } else if (strncmp(q, "\\aack\\", 6) != 0) {
                gpiSetErrorString(h, "Error parsing buddy message.");
                return 3;
            }
            n->state = 0x69;
            n->inputBuffer.len = 0;
        }
        break;
    }
    if (n->outputBuffer.len > 0) {
        r = gpiSendFromBuffer(h, n->sock, &n->outputBuffer, &flag, 1, "PR");
        if (flag != 0 || r != 0) {
            n->state = 0x6a;
        }
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpiProcessPeerAcceptingConnection(Ctx0228 **h, Node0228 *n) {
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
    r = gpiRecvToBuffer(h, n->sock, &n->inputBuffer, &len, &flag, "PR");
    if (r != 0) {
        return r;
    }
    if (flag != 0) {
        n->state = 0x6a;
        return 0;
    }
    p = strstr(n->inputBuffer.buffer, "\\final\\");
    if (p != NULL) {
        *p = 0;
        q = n->inputBuffer.buffer;
        if (strncmp(q, "\\auth\\", 6) == 0) {
            if (gpiValueForKey(q, "\\pid\\", b1, 0x10) == 0) {
                n->state = 0x6a;
                return 0;
            }
            x = atol(b1);
            if (gpiValueForKey(n->inputBuffer.buffer, "\\nick\\", b2, 0x1f) == 0) {
                n->state = 0x6a;
                return 0;
            }
            if (gpiValueForKey(n->inputBuffer.buffer, "\\sig\\", b3, 0x21) == 0) {
                n->state = 0x6a;
                return 0;
            }
            OS_SPrintf(b4, "%s%d%d", c->password, c->profileId, x);
            MD5Digest(b4, STD_GetStringLength(b4), b5);
            if (strcmp(b3, b5) != 0) {
                gpiAppendStringToBuffer(h, &n->outputBuffer, "\\anack\\");
                gpiAppendStringToBuffer(h, &n->outputBuffer, "\\final\\");
                n->state = 0x6a;
                return 0;
            }
            gpiAppendStringToBuffer(h, &n->outputBuffer, "\\aack\\");
            gpiAppendStringToBuffer(h, &n->outputBuffer, "\\final\\");
            n->state = 0x69;
            n->profile = x;
        } else {
            n->state = 0x6a;
            return 0;
        }
        n->inputBuffer.len = 0;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpiPeerSendMessages(Ctx0228 **h, Node0228 *n) {
    s32 i;
    s32 flag;
    s32 r;
    if (n->outputBuffer.len != 0) {
        return 0;
    }
    if (ArrayLength(n->messages) != 0) {
        i = 0;
        do {
            Sub0228 *e = (Sub0228 *)ArrayNth(n->messages, i);
            r = gpiSendFromBuffer(h, n->sock, &e->buffer, &flag, i, "PR");
            if (flag != 0 || r != 0) {
                n->state = 0x6a;
                return 0;
            }
            if (e->buffer.pos != e->buffer.len) {
                break;
            }
            ArrayDeleteAt(n->messages, i);
        } while (ArrayLength(n->messages) != 0);
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
s32 gpiProcessPeerConnected(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    s32 len;
    s32 flag;
    Unk_ov065_02280e7c_Pair2 pr;
    s32 v;
    s32 type;
    s32 ext;
    s32 r;
    if (n->outputBuffer.len != 0) {
        r = gpiSendFromBuffer(h, n->sock, &n->outputBuffer, &flag, 1, "PR");
        if (flag != 0 || r != 0) {
            n->state = 0x6a;
            return 0;
        }
    }
    if (n->outputBuffer.len == 0) {
        r = gpiPeerSendMessages(h, n);
        if (r != 0) {
            return r;
        }
        if (n->state == 0x6a) {
            return 0;
        }
    }
    r = gpiRecvToBuffer(h, n->sock, &n->inputBuffer, &len, &flag, "PR");
    if (r != 0) {
        n->state = 0x6a;
        return 0;
    }
    if (len > 0) {
        n->timeout = time(0) + 0x12c;
    }
    do {
        r = gpiReadMessageFromBuffer(h, &n->inputBuffer, &v, &type, &ext);
        if (r != 0) {
            return r;
        }
        if (v != 0) {
            switch (type) {
            case 1:
                pr = *(Unk_ov065_02280e7c_Pair2 *)&c->buddyMessageCallback;
                if (pr.p.func != 0) {
                    GPRecvBuddyMessageArg *m = (GPRecvBuddyMessageArg *)GsUtil_Alloc(0xc);
                    if (m == NULL) {
                        gpiSetErrorString(h, "Out of memory.");
                        return 1;
                    }
                    m->profile = n->profile;
                    m->message = (char *)goastrdup(v);
                    m->date = time(0);
                    r = gpiAddCallback(h, pr.p, m, 0, 2);
                    if (r != 0) {
                        return r;
                    }
                }
                break;
            case 0x66:
                gpiSendBuddyMessage(h, n->profile, 0x67, (s32)"1");
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
                gpiHandleTransferMessage(h, n, type, n->inputBuffer.buffer, v, ext);
                break;
            }
            gpiClipBufferToPosition(h, &n->inputBuffer);
        }
    } while (v != 0);
    if (flag != 0) {
        n->state = 0x6a;
    }
    return 0;
}
}
}

namespace Nb {
extern "C" {
// Not in the original binary: unreferenced weak function compiled right before gpiProcessPeerConnected, so that the literal
// "Out of memory." is pooled before "1" as in the original; removed by the dead-stripping link (see notes.txt).
__declspec(weak) void Unk_ov065_02281180_pool_order(void) {
    STD_GetStringLength("PR");
    STD_GetStringLength("Out of memory.");
}
}
}

namespace Nb {
extern "C" {
s32 gpiProcessPeer(Ctx0228 **h, Node0228 *n) {
    s32 r = 0;
    if (n->state != 0x69) {
        if (n->initiated != 0) {
            r = gpiProcessPeerInitiatingConnection(h, n);
        } else {
            r = gpiProcessPeerAcceptingConnection(h, n);
        }
    }
    if (r == 0 && n->state == 0x69) {
        r = gpiProcessPeerConnected(h, n);
    }
    return r;
}
}
}

namespace Nb {
extern "C" {
void gpiDestroyPeer(Ctx0228 **h, Node0228 *n) {
    shutdown(n->sock, 2);
    closesocket(n->sock);
    GsUtil_Free(n->inputBuffer.buffer);
    n->inputBuffer.buffer = NULL;
    GsUtil_Free(n->outputBuffer.buffer);
    n->outputBuffer.buffer = NULL;
    if (n->messages != NULL) {
        ArrayFree(n->messages);
        n->messages = NULL;
    }
    GsUtil_Free(n);
}
}
}

namespace Nb {
extern "C" {
void gpiRemovePeer(Ctx0228 **h, Node0228 *n) {
    Ctx0228 *c = *h;
    Node0228 *p = c->peerList;
    if (p == n) {
        c->peerList = n->pnext;
    } else {
        Node0228 *q = p->pnext;
        while (q != n) {
            if (q == NULL) {
                gpiDebug(h, "Tried to remove peer not in list.");
                return;
            }
            p = q;
            q = q->pnext;
        }
        p->pnext = n->pnext;
    }
    {
        s32 i = 0;
        while (ArrayLength(n->messages) != 0) {
            Sub0228 *e = (Sub0228 *)ArrayNth(n->messages, i);
            if (e->type < 0x64) {
                gpiSendServerBuddyMessage(h, n->profile, e->type, e->buffer.buffer + e->start);
            }
            ArrayDeleteAt(n->messages, i);
        }
    }
    gpiDestroyPeer(h, n);
}
}
}

namespace Nb {
extern "C" {
void GsGpPeer_SetSocketBuffers(s32 s) {
    SetReceiveBufferSize(s, 0x4000);
    SetReceiveBufferSize(s, 0x8000);
    SetReceiveBufferSize(s, 0x10000);
    SetReceiveBufferSize(s, 0x20000);
    SetReceiveBufferSize(s, 0x40000);
    SetSendBufferSize(s, 0x4000);
    SetSendBufferSize(s, 0x8000);
    SetSendBufferSize(s, 0x10000);
    GetReceiveBufferSize(s);
    GetSendBufferSize(s);
}
}
}

namespace Nb {
extern "C" {
s32 gpiProcessPeers(Ctx0228 **h) {
    Ctx0228 *c = *h;
    Node0228 *n;
    s32 s;
    if (c->peerSocket != -1 && CanReceiveOnSocket(c->peerSocket) != 0) {
        s = accept(c->peerSocket, 0, 0);
        if (s != -1) {
            n = gpiAddPeer(h, -1, 0);
            if (n != NULL) {
                n->state = 0x68;
                n->sock = s;
                SetSockBlocking(s, 0);
                GsGpPeer_SetSocketBuffers(n->sock);
            } else {
                closesocket(s);
            }
        }
    }
    {
        Node0228 *m = c->peerList;
        s32 z = 0;
        while (m != NULL) {
            Node0228 *next = m->pnext;
            s32 r = gpiProcessPeer(h, m);
            if (m->state == 0x6a || r != 0 || time(z) > m->timeout) {
                gpiRemovePeer(h, m);
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
Node0228 *gpiGetPeerByProfile(Ctx0228 **h, s32 id) {
    Ctx0228 *c = *h;
    Node0228 *n = c->peerList;
    while (n != NULL) {
        if (n->profile == id && n->state == 0x69) {
            return n;
        }
        n = n->pnext;
    }
    return NULL;
}
}
}

namespace Nb {
extern "C" {
void gpiFreeMessage(void *p) {
    GsUtil_Free(*(void **)p);
    *(void **)p = NULL;
}
}
}

namespace Nb {
extern "C" {
Node0228 *gpiAddPeer(Ctx0228 **h, s32 a, s32 b) {
    Ctx0228 *c = *h;
    Node0228 *n = (Node0228 *)GsUtil_Alloc(0x40);
    if (n == NULL) {
        return NULL;
    }
    memset(n, 0, 0x40);
    n->state = 0x64;
    n->initiated = b;
    n->sock = -1;
    n->profile = a;
    n->timeout = time(0) + 0x12c;
    n->pnext = c->peerList;
    n->messages = ArrayNew(0x18, 0, gpiFreeMessage);
    c->peerList = n;
    return n;
}
}
}

namespace Nb {
extern "C" {
s32 gpiPeerGetSig(Ctx0228 **h, Node0228 *n) {
    GPIOperation *e;
    s32 r = gpiAddOperation(h, 2, 0, &e, 0, 0, 0);
    if (r != 0) {
        return r;
    }
    r = gpiSendGetInfo(h, n->profile, e->id);
    if (r != 0) {
        return r;
    }
    n->state = 0x65;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 gpiPeerStartConnect(void *h, GPIPeer *n) {
    Unk_ov065_02280d70_Sa sa;
    GPIProfile *p;
    s32 e;
    if (gpiGetProfile(h, n->profile, &p) == 0) {
        gpiSetErrorString(h, "Error connecting to a peer.");
        return 3;
    }
    n->sock = socket(2, 1, 0);
    if (n->sock == -1) {
        gpiSetError(h, 5, "There was an error creating a socket.");
        gpiCallErrorCallback(h, 3, 0);
        return 3;
    }
    if (SetSockBlocking(n->sock, 0) == 0) {
        gpiSetError(h, 5, "There was an error making a socket non-blocking.");
        gpiCallErrorCallback(h, 3, 0);
        return 3;
    }
    GsGpPeer_SetSocketBuffers(n->sock);
    u32 ad = (u32)&sa;
    ((Unk_ov065_02280d70_Sa *)ad)->unk_00 = 0;
    ((Unk_ov065_02280d70_Sa *)ad)->addr = 0;
    ((u8 *)&sa)[1] = 2;
    sa.addr = p->buddyStatus->ip;
    *(u16 *)((u8 *)&sa + 2) = p->buddyStatus->port;
    if (connect(n->sock, (Unk_ov065_02280d70_Sa *)ad, 8) == -1) {
        e = GOAGetLastError(n->sock);
        if (e != -6 && e != -0x1a && e != -0x4c) {
            gpiSetError(h, 5, "There was an error connecting a socket.");
            gpiCallErrorCallback(h, 3, 1);
            return 3;
        }
    }
    n->state = 0x67;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 gpiPeerAddMessage(void *h, GPIPeer *n, s32 a, const char *b) {
    s32 len = STD_GetStringLength(b);
    GPIMessage t = {{0, 0, 0, 0}, 0, 0};
    s32 r;
    t.type = a;
    r = gpiAppendStringToBuffer(h, &t, "\\m\\");
    if (r != 0) {
        return r;
    }
    r = gpiAppendIntToBuffer(h, &t, a);
    if (r != 0) {
        return r;
    }
    r = gpiAppendStringToBuffer(h, &t, "\\len\\");
    if (r != 0) {
        return r;
    }
    r = gpiAppendIntToBuffer(h, &t, len);
    if (r != 0) {
        return r;
    }
    r = gpiAppendStringToBuffer(h, &t, "\\msg\\\n");
    if (r != 0) {
        return r;
    }
    t.start = t.buffer.len;
    r = gpiAppendStringToBufferLen(h, &t, b, len);
    if (r != 0) {
        return r;
    }
    r = gpiAppendCharToBuffer(h, &t, 0);
    if (r != 0) {
        return r;
    }
    ArrayAppend((void *)n->messages, &t);
    n->timeout = time(0) + 0x12c;
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 gpiPeerStartTransferMessage(void *h, GPIPeer *n, s32 a, GPITransferID *s) {
    char buf[0x44];
    OS_SPrintf(buf, "\\m\\%d\\xfer\\%d %u %u", a, s->profileid, s->count, s->time);
    return gpiSendOrBufferString(h, n, buf);
}
}
}

namespace Na {
extern "C" {
s32 gpiPeerFinishTransferMessage(void *h, GPIPeer *n, char *str, s32 len) {
    char buf[0x24];
    s32 r;
    if (str == 0) {
        str = "";
    }
    if (len == -1) {
        len = STD_GetStringLength(str);
    }
    OS_SPrintf(buf, "\\len\\%d\\msg\\\n", len);
    r = gpiSendOrBufferString(h, n, buf);
    if (r != 0) {
        return r;
    }
    r = gpiSendOrBufferStringLen(h, n, str, len);
    if (r != 0) {
        return r;
    }
    r = gpiSendOrBufferChar(h, n, 0);
    if (r != 0) {
        return r;
    }
    n->timeout = time(0) + 0x12c;
    return 0;
}
}
}
