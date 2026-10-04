// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ---- types of the former unk_0225f1a0.cpp part (functions 0x0225f5c8..0x0225fa6c)

struct Unk_ov065_0225f5c8_T {
    u16 stackSize;
    u8 priority;
    u8 msgQueueSize;
};

struct Unk_ov065_0225f634_Params {
    s8 sockType;
    s8 blocking;
    u16 rxBufSize;
    u16 rxConsumeLimit;
    u16 txBufSize;
    u16 rxAuxBufSize;
    u16 pendingTxBufSize;
    u16 sendRingSize;
    u16 udpQueueCap;
    Unk_ov065_0225f5c8_T recvThread;
    Unk_ov065_0225f5c8_T sendThread;
};

struct Unk_ov065_0225f618_Pair {
    void *size;
    u32 buf;
};

struct Unk_ov065_0225f378_Obj;

struct Unk_ov065_0225f4d4_Msg {
    s32 (*unk_00)(Unk_ov065_0225f4d4_Msg *);
    Unk_ov065_0225f378_Obj *sock;
    void *replyQueue;
    s8 sockType;
    s8 blocking;
    u8 unk_0e[2];
    u16 localPort;
    u32 *outPort;
    u32 *outAddr;
};

struct Unk_ov065_0225f634_Sub1 {
    u8 unk_00[0xe0];
    u8 mutex[0x18];
    u32 pos;
    u16 limit;
    u8 unk_fe[0x0c];
    u16 cap;
    u32 queue;
    u32 queueTail;
    u8 threadArea[4];
};

struct Unk_ov065_0225f634_Sub2 {
    u8 unk_00[0xe0];
    u8 unk_e0[0x18];
    Unk_ov065_0225f618_Pair ring;
    u8 unk_100[4];
    u32 spaceWaitQueue;
    u32 spaceWaitQueueTail;
    Unk_ov065_0225f378_Obj *owner;
    u8 threadArea[4];
};

struct Unk_ov065_0225f378_Obj {
    u8 unk_00[4];
    u32 unk_04;
    u8 unk_08[0x34];
    Unk_ov065_0225f618_Pair rxBuffer;
    u8 unk_44[4];
    Unk_ov065_0225f618_Pair txBuffer;
    Unk_ov065_0225f618_Pair rxAuxBuffer;
    Unk_ov065_0225f618_Pair pendingTxBuffer;
    u8 unk_60[4];
    Unk_ov065_0225f634_Sub1 *recvPipe;
    Unk_ov065_0225f634_Sub2 *sendPipe;
    s32 result;
    s16 flags;
    s8 blocking;
    s8 sockType;
    u16 boundPort;
    u8 unk_76[10];
    u8 pipeArea[4];
};

// ---- types of the former unk_0225faf4.cpp part (functions 0x0225faf4..0x0225fd18)

struct Unk_ov065_0225faf4_Node {
    Unk_ov065_0225faf4_Node *next;
    u16 len;
    u16 remotePort;
    u32 remoteAddr;
    u8 data[4];
};

struct Unk_ov065_0225faf4_Alloc {
    void *pad[6];
    Unk_ov065_0225faf4_Node *(*alloc)(u32);
    void (*free)(void *);
};

struct Unk_ov065_0225faf4_Sess;

struct Unk_ov065_0225faf4_Ctx {
    u8 pad_00[0xc4];
    Unk_ov065_0225faf4_Sess *cur;
    u8 pad_c8[0x18];
    u8 mutex[0x18];
    s32 pos;
    u16 limit;
    s8 lock;
    u8 pad_ff;
    Unk_ov065_0225faf4_Node *volatile tail;
    Unk_ov065_0225faf4_Node *head;
    u16 used;
    u16 cap;
    u8 queue[4];
};

struct Unk_ov065_0225faf4_Sess {
    u32 unk_00;
    u32 unk_04;
    u8 ipState;
    u8 pad_09;
    u16 localPort;
    u8 pad_0c[0xc];
    u16 remotePort;
    u16 boundRemotePort;
    u32 remoteAddr;
    u32 boundRemoteAddr;
    u8 pad_24[0x1c];
    u8 *rxBuf;
    s32 rxLen;
    s32 txBufSize;
    u8 *txBuf;
    u8 pad_50[0x14];
    Unk_ov065_0225faf4_Ctx *ctx;
    void *rx;
    s32 result;
    volatile s16 flags;
    s8 blocking;
    s8 state;
    u16 boundPort;
    u16 peerPort;
    u32 peerAddr;
};

typedef Unk_ov065_0225faf4_Node Node;
typedef Unk_ov065_0225faf4_Sess Sess;
typedef Unk_ov065_0225faf4_Ctx Ctx;

struct Unk_ov065_0225faf4_Job {
    u32 unk_00;
    Sess *sess;
    u32 unk_08;
    s8 sockType;
    u8 pad_0d[3];
    u16 localPort;
    u16 remotePort;
    void *remoteAddr;
};

typedef Unk_ov065_0225faf4_Job Job;

struct Unk_ov065_0225fd18_Counters {
    u32 noMemDrops;
    u32 queueFullDrops;
};

typedef Unk_ov065_0225f378_Obj Obj;
typedef Unk_ov065_0225f4d4_Msg Msg;

// ---- externals

// the same function is called with and without its argument (0x0225f8dc.. vs 0x0225fbbc..)
namespace Unk_ov065_0225fbbc_Ns {
extern "C" s32 SockCore_IsInvalidHandle(Sess *s);
}

extern "C" {
// own data (other TUs of the overlay)
extern Unk_ov065_0225faf4_Alloc *sSockCoreConfig;
extern Obj *sSockDefaultSocket;
extern Unk_ov065_0225f634_Params sSockTcpParams;

// main module
u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32 v);
void OS_CreateThread(void *, void *, void *, void *, u32, u32);
void OS_WakeupThreadDirect(void *);
void OS_WakeupThread(void *q);
s32 OS_InitMessageQueue(void *, void *, s32);
void OS_UnlockMutex(void *m);
void OS_LockMutex(void *m);
void OS_InitMutex(void *);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(const void *src, void *dst, u32 n);

// other TUs of the overlay
void SockCore_CommandThreadMain(void *);
s32 SockCore_ExecCommand(Obj *, Msg *);
s32 SockCore_ExecOnRecvSide(Obj *, Msg *);
Msg *SockCore_AllocMsg(void *, Obj *, s32);
s32 SockCore_IsInvalidHandle(void);
u32 SockCore_Align4(u32);
void SockCore_AddToOpenList(void *);
void IpSoc_Use(void *);
void IpSoc_ShareWithThread(void *);
void IpSoc_Init(void);
void IpSoc_SetUdp(void);
void IpSoc_SetUdpCallback(void *);
void IpSoc_Bind(u32, u32, void *);
void IpSoc_TcpListen(void);
void *IpSoc_GetPeer(u16 *, s32 *);
s32 IpSoc_TcpConnect(void);

// this TU
s32 SockCore_OnUdpReceive(void *data, u32 len, Sess *s);
s32 SockCore_Bind(Sess *s, u16 a);
s32 SockCore_Connect(Sess *s, u16 a, u32 b);
s32 SockCore_PostConnect(Sess *s);
s32 SockCore_CmdConnect(Job *j);
s32 SockCore_Listen(Obj *);
s32 SockCore_Accept(Obj *, u32 *, u32 *);
s32 SockCore_StartAccept(Obj *, u32 *, u32 *);
s32 SockCore_CmdAccept(Msg *);
s32 SockCore_Create(Unk_ov065_0225f634_Params *);
s32 SockCore_CmdOpen(Msg *);
Obj *SockCore_Alloc(Unk_ov065_0225f634_Params *);
u32 SockCore_CalcSize(Unk_ov065_0225f634_Params *);
u32 SockCore_CalcThreadAreaSize(Unk_ov065_0225f5c8_T *);
u8 *SockCore_InitLayout(Obj *, Unk_ov065_0225f634_Params *);
u8 *SockCore_CarveBuffer(u8 *, Unk_ov065_0225f618_Pair *, u32);
u32 SockCore_StartCommandThread(void *, void *, Unk_ov065_0225f5c8_T *);
}

static inline BOOL Unk_ov065_0225f8dc_IsOpen(Obj *o)
{
    BOOL r = FALSE;
    if (o == NULL || (o->flags & 1) == 0) {
    } else {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov065_0225f8dc_IsIdle(Obj *o)
{
    BOOL r = TRUE;
    s32 s = o->sockType;
    if (s != 0 && s != 4) {
        r = FALSE;
    }
    return r;
}

static inline BOOL IsIdle(Sess *s)
{
    BOOL r = TRUE;
    if (s->state != 0 && s->state != 4) {
        r = FALSE;
    }
    return r;
}

static inline BOOL IsValid(Sess *s)
{
    BOOL r = FALSE;
    if (s == NULL || !(s->flags & 1)) {
    } else {
        r = TRUE;
    }
    return r;
}

extern "C" {
s32 sSockConnectInProgressError = -0x1a;
Unk_ov065_0225fd18_Counters sSockUdpDropCount;

s32 SockCore_OnUdpReceive(void *data, u32 len, Sess *s)
{
    Ctx *c = s->ctx;
    u32 irq = OS_DisableInterrupts();

    if (c->cap >= c->used + len) {
        Node *n = sSockCoreConfig->alloc(len + 12);
        if (n != NULL) {
            c->used += len;
            n->next = NULL;
            n->len = len;
            n->remotePort = s->remotePort;
            n->remoteAddr = s->remoteAddr;
            MI_CpuCopy8(data, n->data, len);
            if (s->boundPort == 0) {
                s->boundPort = s->localPort;
            }
            s->remotePort = s->boundRemotePort;
            s->remoteAddr = s->boundRemoteAddr;
            if (c->tail != NULL) {
                c->tail->next = n;
            }
            c->tail = n;
            if (c->head == NULL) {
                c->head = n;
            }
        } else {
            sSockUdpDropCount.noMemDrops++;
        }
    } else {
        sSockUdpDropCount.queueFullDrops++;
    }
    OS_WakeupThread(c->queue);
    OS_RestoreInterrupts(irq);
    return 1;
}

s32 SockCore_Bind(Sess *s, u16 a)
{
    if (Unk_ov065_0225fbbc_Ns::SockCore_IsInvalidHandle(s) != 0) {
        return -0x1c;
    }
    if (!IsValid(s)) {
        return -0x27;
    }
    if (s->flags & 2) {
        return -7;
    }
    s->boundPort = a;
    if (s->state == 1) {
        return SockCore_PostConnect(s);
    }
    return 0;
}

s32 SockCore_Connect(Sess *s, u16 a, u32 b)
{
    s32 r;
    if (Unk_ov065_0225fbbc_Ns::SockCore_IsInvalidHandle(s) != 0 || (s->flags & 8) != 0) {
        return -0x1c;
    }
    if (!IsValid(s)) {
        return -0x27;
    }
    if (IsIdle(s)) {
        if (s->flags & 4) {
            if (s->blocking == 1) {
                return -0x1e;
            }
            return 0;
        }
        if (s->flags & 2) {
            if (s->flags & 0x40) {
                return s->result;
            }
            return sSockConnectInProgressError;
        }
        s->peerPort = a;
        s->peerAddr = b;
        r = SockCore_PostConnect(s);
        if (s->blocking == 1) {
            return r;
        }
        return -0x1a;
    }
    s->peerPort = a;
    s->peerAddr = b;
    return 0;
}

s32 SockCore_PostConnect(Sess *s)
{
    u32 r0 = (u32)SockCore_AllocMsg((void *)SockCore_CmdConnect, (Obj *)s, s->blocking);
    Job *j = (Job *)r0;
    if (j == NULL) {
        return -0x21;
    }
    j->localPort = s->boundPort;
    j->remotePort = s->peerPort;
    j->remoteAddr = (void *)s->peerAddr;
    s->flags |= 2;
    return SockCore_ExecOnRecvSide((Obj *)s, (Msg *)j);
}

s32 SockCore_CmdConnect(Job *j)
{
    Sess *s = j->sess;
    Ctx *c;
    s32 err = 0;
    c = s->ctx;

    OS_LockMutex(c->mutex);
    IpSoc_Bind(j->localPort, j->remotePort, j->remoteAddr);
    c->pos = err;
    if (j->sockType == 0 || j->sockType == 4) {
        err = IpSoc_TcpConnect();
    }
    OS_UnlockMutex(c->mutex);
    if (err) {
        s->flags |= 0x40;
        return -0x4c;
    }
    s->flags |= 4;
    return 0;
}

s32 SockCore_Listen(Obj *o)
{
    if (SockCore_IsInvalidHandle() != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsOpen(o)) {
        return -0x27;
    }
    if ((o->flags & 2) != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsIdle(o)) {
        return -0x1c;
    }
    if (o->blocking == 1) {
        return 0;
    }
    return -6;
}

s32 SockCore_Accept(Obj *o, u32 *x, u32 *y)
{
    s32 h;
    if (SockCore_IsInvalidHandle() != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsOpen(o)) {
        return -0x27;
    }
    if ((o->flags & 2) != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsIdle(o)) {
        return -0x1c;
    }
    if (o->blocking != 1) {
        return -6;
    }
    h = SockCore_Create(&sSockTcpParams);
    if (h >= 0) {
        s32 r = SockCore_Bind((Sess *)h, o->boundPort);
        if (r >= 0) {
            r = SockCore_StartAccept((Obj *)h, x, y);
            if (r >= 0) {
                r = h;
            }
        }
        return r;
    }
    return h;
}

s32 SockCore_StartAccept(Obj *o, u32 *x, u32 *y)
{
    s32 t;
    Msg *m;
    if (SockCore_IsInvalidHandle() != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsOpen(o)) {
        return -0x27;
    }
    if ((o->flags & 2) != 0) {
        return -0x1c;
    }
    if (!Unk_ov065_0225f8dc_IsIdle(o)) {
        return -0x1c;
    }
    t = o->blocking;
    if (t != 1) {
        return -6;
    }
    if (o->boundPort == 0) {
        return -0x1c;
    }
    m = SockCore_AllocMsg((void *)SockCore_CmdAccept, o, t);
    m->localPort = o->boundPort;
    m->outPort = x;
    m->outAddr = y;
    o->flags = o->flags | 2;
    return SockCore_ExecOnRecvSide(o, (Msg *)m);
}

s32 SockCore_CmdAccept(Msg *m)
{
    Obj *o = m->sock;
    Unk_ov065_0225f634_Sub1 *s = o->recvPipe;
    u16 a;
    s32 b;
    s32 r;
    OS_LockMutex(s->mutex);
    IpSoc_Bind(m->localPort, 0, 0);
    IpSoc_TcpListen();
    s->pos = 0;
    r = (s32)IpSoc_GetPeer(&a, &b);
    *(u16 *)m->outPort = a;
    *(s32 *)m->outAddr = r;
    o->flags = o->flags | 4;
    OS_UnlockMutex(s->mutex);
    return 0;
}

s32 SockCore_Create(Unk_ov065_0225f634_Params *p)
{
    Obj *o = SockCore_Alloc(p);
    if (o == NULL) {
        return -0x31;
    }
    SockCore_ExecCommand(o, SockCore_AllocMsg((void *)SockCore_CmdOpen, o, 1));
    return (s32)o;
}

s32 SockCore_CmdOpen(Msg *m)
{
    Obj *o = (Obj *)m->sock;
    u8 *sub;
    IpSoc_Use(o);
    sub = (u8 *)o->sendPipe;
    switch (o->sockType) {
    case 0:
    case 4:
        IpSoc_ShareWithThread(sub + 0x20);
        IpSoc_Init();
        break;
    case 1:
        IpSoc_Init();
        IpSoc_SetUdp();
        IpSoc_SetUdpCallback((void *)SockCore_OnUdpReceive);
        break;
    case 2:
        IpSoc_SetUdp();
        break;
    case 3:
        break;
    }
    o->flags = 1;
    return 0;
}

Obj *SockCore_Alloc(Unk_ov065_0225f634_Params *p)
{
    u32 size = SockCore_CalcSize(p);
    u32 irq = OS_DisableInterrupts();
    Obj *o = (Obj *)sSockCoreConfig->alloc(size);
    if (o != NULL) {
        MI_CpuFill8(o, 0, size);
        SockCore_InitLayout(o, p);
        SockCore_AddToOpenList(o);
    }
    OS_RestoreInterrupts(irq);
    return o;
}

u32 SockCore_CalcSize(Unk_ov065_0225f634_Params *p)
{
    u32 sz = 0x80;
    if (p->rxBufSize != 0) {
        sz += 0x114;
        sz += SockCore_Align4(p->rxBufSize);
        sz += SockCore_Align4(p->rxAuxBufSize);
        sz += SockCore_CalcThreadAreaSize(&p->recvThread);
    }
    if (p->txBufSize != 0) {
        sz += 0x110;
        sz += SockCore_Align4(p->txBufSize);
        sz += SockCore_Align4(p->pendingTxBufSize);
        sz += SockCore_Align4(p->sendRingSize);
        sz += SockCore_CalcThreadAreaSize(&p->sendThread);
    }
    return sz;
}

u32 SockCore_CalcThreadAreaSize(Unk_ov065_0225f5c8_T *t)
{
    u32 a = SockCore_Align4(t->msgQueueSize << 2);
    return a + SockCore_Align4(t->stackSize);
}

u8 *SockCore_InitLayout(Obj *o, Unk_ov065_0225f634_Params *p)
{
    Unk_ov065_0225f634_Sub1 *s1;
    Unk_ov065_0225f634_Sub2 *s2;
    u8 *cur;
    o->sockType = p->sockType;
    o->blocking = p->blocking;
    cur = o->pipeArea;
    if (p->rxBufSize != 0) {
        s1 = (Unk_ov065_0225f634_Sub1 *)cur;
        o->recvPipe = s1;
        s1->limit = p->rxConsumeLimit;
        cur = (u8 *)SockCore_StartCommandThread(s1->threadArea, s1, &p->recvThread);
        cur = SockCore_CarveBuffer(cur, &o->rxBuffer, p->rxBufSize);
        cur = SockCore_CarveBuffer(cur, &o->rxAuxBuffer, p->rxAuxBufSize);
        s1->cap = p->udpQueueCap;
        s1->queue = s1->queueTail = 0;
    }
    if (p->txBufSize != 0) {
        s2 = (Unk_ov065_0225f634_Sub2 *)cur;
        o->sendPipe = s2;
        s2->owner = o;
        cur = (u8 *)SockCore_StartCommandThread(s2->threadArea, s2, &p->sendThread);
        cur = SockCore_CarveBuffer(cur, &o->txBuffer, p->txBufSize);
        cur = SockCore_CarveBuffer(cur, &o->pendingTxBuffer, p->pendingTxBufSize);
        cur = SockCore_CarveBuffer(cur, &s2->ring, p->sendRingSize);
        s2->spaceWaitQueue = s2->spaceWaitQueueTail = 0;
    } else {
        o->sendPipe = sSockDefaultSocket->sendPipe;
    }
    return cur;
}

u8 *SockCore_CarveBuffer(u8 *base, Unk_ov065_0225f618_Pair *dst, u32 n)
{
    u8 *v = base;
    if (n == 0) {
        v = NULL;
    }
    dst->buf = (u32)v;
    dst->size = (void *)n;
    return base + SockCore_Align4(n);
}

u32 SockCore_StartCommandThread(void *a, void *b, Unk_ov065_0225f5c8_T *c)
{
    u32 r = (u32)a + SockCore_CalcThreadAreaSize(c);
    OS_InitMessageQueue(b, a, c->msgQueueSize);
    OS_InitMutex((u8 *)b + 0xe0);
    OS_CreateThread((u8 *)b + 0x20, (void *)SockCore_CommandThreadMain, b, (void *)r, c->stackSize, c->priority);
    OS_WakeupThreadDirect((u8 *)b + 0x20);
    return r;
}
}
