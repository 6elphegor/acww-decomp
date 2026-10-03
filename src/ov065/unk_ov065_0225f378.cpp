// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov065_0225f378_Obj;

struct Unk_ov065_0225f4d4_Msg {
    s32 (*unk_00)(Unk_ov065_0225f4d4_Msg *);
    Unk_ov065_0225f378_Obj *unk_04;
    void *unk_08;
    s8 unk_0c;
    s8 unk_0d;
};

struct Unk_ov065_0225f378_Obj {
    u8 pad_00[0x64];
    void *unk_64;
    void *unk_68;
    s32 unk_6c;
    u8 pad_70[3];
    s8 unk_73;
};

struct Unk_ov065_0225f410_Q {
    u32 unk_00[8];
};

struct Unk_ov065_0225f524_Q {
    u32 unk_00[5];
    s32 unk_14;
    u32 unk_18;
    s32 unk_1c;
};

struct Unk_ov065_0225f1cc_Cfg {
    u8 pad_00[0x18];
    void *(*unk_18)(u32);
    void (*unk_1c)(void *);
};

extern "C" {
// TU01
extern Unk_ov065_0225f1cc_Cfg *sSockCoreConfig;

// main module
u32 OS_DisableInterrupts(void);
void OS_DisableScheduler(void);
s32 OS_ReceiveMessage(void *, void *, s32);
s32 OS_SendMessage(void *, void *, s32);
void OS_EnableScheduler(void);
void OS_RestoreInterrupts(u32);
void OSi_RescheduleThread(void);
void OS_InitMessageQueue(void *, void *, s32);
s32 OS_ReadMessage(void *, void *, s32);

void SockCore_CommandThreadMain(void *);
s32 SockCore_ExecCommand(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 SockCore_ExecOnSendSide(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 SockCore_ExecOnRecvSide(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 SockCore_PostCommandAndWait(void *, Unk_ov065_0225f4d4_Msg *);
s32 SockCore_PostCommandAsync(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 SockCore_PostCommand(void *, Unk_ov065_0225f4d4_Msg *);
void *SockCore_GetCommandQueue(Unk_ov065_0225f378_Obj *);
void SockCore_FreeMsg(void *);
Unk_ov065_0225f4d4_Msg *SockCore_AllocMsg(void *, Unk_ov065_0225f378_Obj *, s32);
Unk_ov065_0225f4d4_Msg *SockCore_TakeFreeMsg(s32);
s32 SockCore_DestroyMsgPool(void);
s32 SockCore_CreateMsgPool(s32);
}

extern "C" {
void *sSockMsgPool;
Unk_ov065_0225f524_Q sSockMsgFreeQueue;

s32 SockCore_CreateMsgPool(s32 n)
{
    u32 a = (n * 4 + 3) & ~3;
    u32 b = (n * 0x2c + 3) & ~3;
    u8 *p = (u8 *)sSockCoreConfig->unk_18(b + a);
    u8 *e;
    if (p == NULL) {
        return -1;
    }
    OS_InitMessageQueue(&sSockMsgFreeQueue, p, n);
    e = p + a;
    while (n > 0) {
        SockCore_FreeMsg(e);
        e += 0x2c;
        n--;
    }
    sSockMsgPool = p;
    return 0;
}

s32 SockCore_DestroyMsgPool(void)
{
    if (sSockMsgFreeQueue.unk_1c < sSockMsgFreeQueue.unk_14) {
        return -1;
    }
    sSockCoreConfig->unk_1c(sSockMsgPool);
    sSockMsgPool = NULL;
    return 0;
}

Unk_ov065_0225f4d4_Msg *SockCore_TakeFreeMsg(s32 c)
{
    Unk_ov065_0225f4d4_Msg *m;
    if (OS_ReceiveMessage(&sSockMsgFreeQueue, &m, c)) {
        return m;
    }
    return NULL;
}

Unk_ov065_0225f4d4_Msg *SockCore_AllocMsg(void *fn, Unk_ov065_0225f378_Obj *o, s32 c)
{
    Unk_ov065_0225f4d4_Msg *m = SockCore_TakeFreeMsg(c);
    if (m != NULL) {
        m->unk_00 = (s32 (*)(Unk_ov065_0225f4d4_Msg *))fn;
        m->unk_04 = o;
        m->unk_08 = NULL;
        m->unk_0c = o->unk_73;
        m->unk_0d = c;
    }
    return m;
}

void SockCore_FreeMsg(void *m)
{
    if (m != NULL) {
        OS_SendMessage(&sSockMsgFreeQueue, m, 0);
    }
}

void *SockCore_GetCommandQueue(Unk_ov065_0225f378_Obj *o)
{
    void *p = o->unk_64;
    if (p == NULL) {
        p = o->unk_68;
    }
    return p;
}

s32 SockCore_PostCommand(void *q, Unk_ov065_0225f4d4_Msg *m)
{
    s32 flag;
    s32 r;
    if (m != NULL) {
        flag = m->unk_0d;
    } else {
        flag = 1;
    }
    r = OS_SendMessage(q, m, flag);
    if (r == 0) {
        SockCore_FreeMsg(m);
    }
    if (r != 0) {
        return 0;
    }
    return -0x2a;
}

s32 SockCore_PostCommandAsync(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return SockCore_PostCommand(SockCore_GetCommandQueue(o), m);
}

s32 SockCore_PostCommandAndWait(void *q, Unk_ov065_0225f4d4_Msg *m)
{
    s32 res;
    s32 buf;
    Unk_ov065_0225f410_Q lq;
    if (m->unk_0d == 0) {
        m->unk_08 = NULL;
        res = SockCore_PostCommand(q, m);
    } else {
        OS_InitMessageQueue(&lq, &buf, 1);
        m->unk_08 = &lq;
        SockCore_PostCommand(q, m);
        OS_ReceiveMessage(&lq, &res, 1);
    }
    return res;
}

s32 SockCore_ExecOnRecvSide(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return SockCore_PostCommandAndWait(o->unk_64, m);
}

s32 SockCore_ExecOnSendSide(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return SockCore_PostCommandAndWait(o->unk_68, m);
}

s32 SockCore_ExecCommand(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return SockCore_PostCommandAndWait(SockCore_GetCommandQueue(o), m);
}

void SockCore_CommandThreadMain(void *q)
{
    Unk_ov065_0225f4d4_Msg *m;
    for (;;) {
        OS_ReadMessage(q, &m, 1);
        if (m == NULL) {
            break;
        }
        s32 r = m->unk_00(m);
        u32 irq = OS_DisableInterrupts();
        OS_DisableScheduler();
        OS_ReceiveMessage(q, 0, 0);
        if (m->unk_04 != NULL) {
            m->unk_04->unk_6c = r;
        }
        if (m->unk_08 != NULL) {
            OS_SendMessage(m->unk_08, (void *)r, 0);
        }
        SockCore_FreeMsg(m);
        OS_EnableScheduler();
        OS_RestoreInterrupts(irq);
        OSi_RescheduleThread();
    }
}
}
