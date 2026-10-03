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
extern Unk_ov065_0225f1cc_Cfg *data_ov065_0228e9a0;

// main module
u32 OS_DisableInterrupts(void);
void OS_DisableScheduler(void);
s32 OS_ReceiveMessage(void *, void *, s32);
s32 OS_SendMessage(void *, void *, s32);
void OS_EnableScheduler(void);
void OS_RestoreInterrupts(u32);
void func_02113554(void);
void OS_InitMessageQueue(void *, void *, s32);
s32 OS_ReadMessage(void *, void *, s32);

void func_ov065_0225f378(void *);
s32 func_ov065_0225f3e4(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f3f8(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f404(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f410(void *, Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f458(Unk_ov065_0225f378_Obj *, Unk_ov065_0225f4d4_Msg *);
s32 func_ov065_0225f46c(void *, Unk_ov065_0225f4d4_Msg *);
void *func_ov065_0225f4ac(Unk_ov065_0225f378_Obj *);
void func_ov065_0225f4b8(void *);
Unk_ov065_0225f4d4_Msg *func_ov065_0225f4d4(void *, Unk_ov065_0225f378_Obj *, s32);
Unk_ov065_0225f4d4_Msg *func_ov065_0225f4fc(s32);
s32 func_ov065_0225f524(void);
s32 func_ov065_0225f560(s32);
}

extern "C" {
void *data_ov065_0228e9e4;
Unk_ov065_0225f524_Q data_ov065_0228e9e8;

s32 func_ov065_0225f560(s32 n)
{
    u32 a = (n * 4 + 3) & ~3;
    u32 b = (n * 0x2c + 3) & ~3;
    u8 *p = (u8 *)data_ov065_0228e9a0->unk_18(b + a);
    u8 *e;
    if (p == NULL) {
        return -1;
    }
    OS_InitMessageQueue(&data_ov065_0228e9e8, p, n);
    e = p + a;
    while (n > 0) {
        func_ov065_0225f4b8(e);
        e += 0x2c;
        n--;
    }
    data_ov065_0228e9e4 = p;
    return 0;
}

s32 func_ov065_0225f524(void)
{
    if (data_ov065_0228e9e8.unk_1c < data_ov065_0228e9e8.unk_14) {
        return -1;
    }
    data_ov065_0228e9a0->unk_1c(data_ov065_0228e9e4);
    data_ov065_0228e9e4 = NULL;
    return 0;
}

Unk_ov065_0225f4d4_Msg *func_ov065_0225f4fc(s32 c)
{
    Unk_ov065_0225f4d4_Msg *m;
    if (OS_ReceiveMessage(&data_ov065_0228e9e8, &m, c)) {
        return m;
    }
    return NULL;
}

Unk_ov065_0225f4d4_Msg *func_ov065_0225f4d4(void *fn, Unk_ov065_0225f378_Obj *o, s32 c)
{
    Unk_ov065_0225f4d4_Msg *m = func_ov065_0225f4fc(c);
    if (m != NULL) {
        m->unk_00 = (s32 (*)(Unk_ov065_0225f4d4_Msg *))fn;
        m->unk_04 = o;
        m->unk_08 = NULL;
        m->unk_0c = o->unk_73;
        m->unk_0d = c;
    }
    return m;
}

void func_ov065_0225f4b8(void *m)
{
    if (m != NULL) {
        OS_SendMessage(&data_ov065_0228e9e8, m, 0);
    }
}

void *func_ov065_0225f4ac(Unk_ov065_0225f378_Obj *o)
{
    void *p = o->unk_64;
    if (p == NULL) {
        p = o->unk_68;
    }
    return p;
}

s32 func_ov065_0225f46c(void *q, Unk_ov065_0225f4d4_Msg *m)
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
        func_ov065_0225f4b8(m);
    }
    if (r != 0) {
        return 0;
    }
    return -0x2a;
}

s32 func_ov065_0225f458(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return func_ov065_0225f46c(func_ov065_0225f4ac(o), m);
}

s32 func_ov065_0225f410(void *q, Unk_ov065_0225f4d4_Msg *m)
{
    s32 res;
    s32 buf;
    Unk_ov065_0225f410_Q lq;
    if (m->unk_0d == 0) {
        m->unk_08 = NULL;
        res = func_ov065_0225f46c(q, m);
    } else {
        OS_InitMessageQueue(&lq, &buf, 1);
        m->unk_08 = &lq;
        func_ov065_0225f46c(q, m);
        OS_ReceiveMessage(&lq, &res, 1);
    }
    return res;
}

s32 func_ov065_0225f404(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return func_ov065_0225f410(o->unk_64, m);
}

s32 func_ov065_0225f3f8(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return func_ov065_0225f410(o->unk_68, m);
}

s32 func_ov065_0225f3e4(Unk_ov065_0225f378_Obj *o, Unk_ov065_0225f4d4_Msg *m)
{
    return func_ov065_0225f410(func_ov065_0225f4ac(o), m);
}

void func_ov065_0225f378(void *q)
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
        func_ov065_0225f4b8(m);
        OS_EnableScheduler();
        OS_RestoreInterrupts(irq);
        func_02113554();
    }
}
}
