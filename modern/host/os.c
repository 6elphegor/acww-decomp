// Host build: the parts of the NitroSDK OS that are assembly on the DS - interrupt masking and dispatch, thread
// contexts, lock ids, BIOS waits. Interrupts are delivered at safe points (enabling interrupts, halting, waiting),
// never in the middle of game code.

#define _GNU_SOURCE
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ucontext.h>

#include "host.h"

// ---- interrupt masking (the CPSR I bit)
static u32 sIrqDisabled = 0x80;  // as at reset: disabled until OS_EnableInterrupts
static int sInIrq;

static void deliver_if_enabled(void) {
    if (!sIrqDisabled && !sInIrq) host_deliver_irqs();
}
u32 OS_DisableInterrupts(void) { u32 old = sIrqDisabled; sIrqDisabled = 0x80; return old; }
u32 OS_EnableInterrupts(void) { u32 old = sIrqDisabled; sIrqDisabled = 0; deliver_if_enabled(); return old; }
u32 OS_RestoreInterrupts(u32 state) { u32 old = sIrqDisabled; sIrqDisabled = state & 0x80; deliver_if_enabled(); return old; }
u32 OS_DisableInterrupts_IrqAndFiq(void) { return OS_DisableInterrupts(); }
u32 OS_RestoreInterrupts_IrqAndFiq(u32 state) { return OS_RestoreInterrupts(state); }
u32 OS_GetProcMode(void) { return sInIrq ? 0x12 : 0x1f; }
u32 host_irq_state(void) { return sIrqDisabled | sInIrq; }

// ---- dispatch (OS_IrqHandler + OS_IrqHandler_ThreadSwitch)
extern void (*data_027e0000[])(void);   // OS_IRQTable
extern u8 data_021fcc2c[];              // OSThreadInfo: isNeedRescheduling u16 at 0, current at 4, list at 8
extern u32 data_027e0450[];             // OSi_IrqThreadQueue: head, tail
void OSi_RescheduleThread(void);

void host_deliver_irqs(void) {
    if (sInIrq) return;
    for (;;) {
        u32 pending = host_irq_pending();
        if (!pending || sIrqDisabled) break;
        int bit = __builtin_ctz(pending);
        host_irq_ack(1u << bit);
        sInIrq = 1;
        sIrqDisabled = 0x80;
        if (data_027e0000[bit]) data_027e0000[bit]();
        sIrqDisabled = 0;
        sInIrq = 0;
        // wake the threads waiting for an interrupt (OS_WaitIrq)
        u8 *t = (u8 *)data_027e0450[0];
        if (t) {
            while (t) {
                u8 *next = *(u8 **)(t + 0x80);
                *(u32 *)(t + 0x64) = 1;
                *(u32 *)(t + 0x78) = 0;
                *(u32 *)(t + 0x7c) = 0;
                *(u32 *)(t + 0x80) = 0;
                t = next;
            }
            data_027e0450[0] = data_027e0450[1] = 0;
            *(u16 *)data_021fcc2c = 1;
        }
    }
    if (*(u16 *)data_021fcc2c) {
        *(u16 *)data_021fcc2c = 0;
        OSi_RescheduleThread();
    }
}

void OS_IrqHandler(void) { host_deliver_irqs(); }

// SIGALRM (hw.c): the game is spinning on memory that an interrupt handler changes (no I/O, no wait, so virtual
// time stands still): let time pass and deliver what's due.
int host_async_tick(void) {
    if (sIrqDisabled || sInIrq) return 0;
    host_advance_to_next_event();
    host_deliver_irqs();
    return 1;
}
void OSi_ExceptionHandler(void) { host_fatal("OSi_ExceptionHandler"); }

// ---- thread contexts: one ucontext per OSContext, in a side table
#define MAX_CTX 64
#define HOST_STACK (512 * 1024)
// irq: the thread's CPSR I bit while it isn't running (each thread has its own, as on the DS)
typedef struct { void *key; ucontext_t uc; u8 *stack; u32 pc; int fresh; u32 irq; } HostCtx;
static HostCtx sCtx[MAX_CTX];
static void *sSaving;  // the thread whose OS_SaveContext is pending

static HostCtx *ctx_of(void *key) {
    HostCtx *free_ = 0;
    for (int i = 0; i < MAX_CTX; i++) {
        if (sCtx[i].key == key) return &sCtx[i];
        if (!sCtx[i].key && !free_) free_ = &sCtx[i];
    }
    if (!free_) host_fatal("too many thread contexts");
    free_->key = key;
    return free_;
}

static void trampoline(u32 key) {
    u32 *c = (u32 *)key;  // OSContext: cpsr, r[0..14], pc_plus4...
    HostCtx *h = ctx_of((void *)key);
    void (*f)(u32) = (void (*)(u32))h->pc;
    f(c[1]);
    ((void (*)(void))c[15])();  // r14: OS_ExitThread
    host_fatal("thread returned past its exit function");
}

void OS_InitContext(u32 *c, u32 pc, u32 sp) {
    HostCtx *h = ctx_of(c);
    memset(c, 0, 0x64);
    c[14] = sp;  // r13
    h->pc = pc;
    h->fresh = 1;
    (void)sp;
}

int OS_SaveContext(void *t) { sSaving = t; return 0; }

void OS_LoadContext(void *t) {
    HostCtx *next = ctx_of(t);
    if (next->fresh) {
        next->fresh = 0;
        next->irq = ((u32 *)t)[0] & 0x80;  // OSContext.cpsr
        if (!next->stack) next->stack = malloc(HOST_STACK);
        getcontext(&next->uc);
        next->uc.uc_stack.ss_sp = next->stack;
        next->uc.uc_stack.ss_size = HOST_STACK;
        next->uc.uc_link = 0;
        makecontext(&next->uc, (void (*)(void))trampoline, 1, (u32)t);
    }
    if (sSaving) {
        HostCtx *cur = ctx_of(sSaving);
        sSaving = 0;
        cur->irq = sIrqDisabled;
        sIrqDisabled = next->irq;
        swapcontext(&cur->uc, &next->uc);
        return;  // resumed (sIrqDisabled was set by whoever switched back): the caller returns as if OS_SaveContext
                 // had returned 1
    }
    sIrqDisabled = next->irq;
    setcontext(&next->uc);
    host_fatal("setcontext failed");
}

// ---- lock ids (ARM9: 0x40..0x7f)
static u64 sLockIds;
u32 OS_GetLockID(void) {
    for (int i = 0; i < 64; i++) if (!(sLockIds >> i & 1)) { sLockIds |= 1ull << i; return 0x40 + i; }
    return (u32)-3;
}
void OS_ReleaseLockID(u16 id) { if (id >= 0x40 && id < 0x80) sLockIds &= ~(1ull << (id - 0x40)); }
void OS_UnLockCartridge(u32 id) { (void)id; }

// ---- waits
void OS_Halt(void) { host_advance_to_next_event(); host_deliver_irqs(); }
void VBlankIntrWait(void) {
    volatile u32 *check = (volatile u32 *)0x027e3ff8;  // HW_INTR_CHECK_BUF
    while (!(*check & 1)) {
        host_advance_to_next_event();
        u32 old = sIrqDisabled;
        sIrqDisabled = 0;
        host_deliver_irqs();
        sIrqDisabled = old;
    }
    *check &= ~1u;
}

// ---- misc
void Fatal_SaveRegisters(void) {}
void AutoloadCallback(void) {}
void OSi_DoBoot(void) { host_fatal("OSi_DoBoot (reset)"); }
void __TransferControl(void *a, void *b, char *c) { (void)a; (void)b; (void)c; host_fatal("C++ exception"); }
void sys_exit(void) { exit(0); }
int sys_readc(void) { return getchar(); }
void sys_writec(const u8 *p) { fputc(*p, stderr); }
