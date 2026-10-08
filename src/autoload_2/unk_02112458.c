// mwcc-flags: -nothumb -O4,p
#include "nitro/io_access.h"
#include "host_mem.h"
#include "proto/autoload_2/unk_02112458.h"
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern s32 data_021fcc10;
u32 OS_DisableInterrupts_IrqAndFiq(void);                                        // OS_DisableInterrupts
u32 OS_DisableInterrupts(void);                                        // OS_DisableInterrupts_IrqAndFiq
void OS_RestoreInterrupts_IrqAndFiq(u32 state);                                  // OS_RestoreInterrupts
void OS_RestoreInterrupts(u32 state);                                  // OS_RestoreInterrupts_IrqAndFiq
void OS_SpinWait(u32 cycles);                                 // OS_SpinWait
s32 MI_SwapWord(u32 lockID, void *lockp);                     // OSi_DoLockWord
void MIi_CpuClear32(u32 data, void *dest, u32 size);             // MI_CpuFill32
s32 OSi_DoTryLockByWord(u32 lockID, void *lockp, void (*ctrl)(void), s32 disable_irq);
s32 OSi_DoUnlockByWord(u32 lockID, void *lockp, void (*ctrl)(void), s32 disable_irq);
s32 OS_LockByWord(u32 lockID, void *lockp, void (*ctrl)(void));
s32 OS_UnlockByWord(u32 lockID, void *lockp, void (*ctrl)(void));

// OS_InitLock
void OS_InitLock(void) {
    volatile u16 *lock = HW_SYSWORK(volatile u16, initLock);
    if (data_021fcc10) {
        return;
    }
    data_021fcc10 = 1;
    *HW_SYSWORK(volatile u32, initLock) = 0;
    OS_LockByWord(0x7e, HW_SYSWORK(void, initLock), 0);
    while (lock[3] != 0) {
        OSi_WaitByLoop();
    }
    *HW_SYSWORK(volatile u32, lockIdFlagMain) = 0xffffffff;
    *HW_SYSWORK_AT(volatile u32, lockIdFlagMain, 0x4) = 0xffff0000;
    {
        volatile u32 zero = 0;
        MIi_CpuClear32(zero, HW_SYSWORK(void, vramCLock), 0x28);
    }
    IO_OR((volatile u16 *)0x04000204, 0x800);
    IO_OR((volatile u16 *)0x04000204, 0x80);
    OS_UnlockByWord(0x7e, HW_SYSWORK(void, initLock), 0);
    OS_LockByWord(0x7f, HW_SYSWORK(void, initLock), 0);
}

// OSi_LockByWord (spin until acquired)
s32 OSi_DoLockByWord(u32 lockID, void *lockp, void (*ctrl)(void), s32 disable_irq) {
    s32 lastLockFlag;
    while ((lastLockFlag = OSi_DoTryLockByWord(lockID, lockp, ctrl, disable_irq)) > 0) {
        OSi_WaitByLoop();
    }
    return lastLockFlag;
}

// OS_LockByWord
s32 OS_LockByWord(u32 lockID, void *lockp, void (*ctrl)(void)) {
    return OSi_DoLockByWord(lockID, lockp, ctrl, 0);
}

// OSi_DoUnlockByWord (static)
s32 OSi_DoUnlockByWord(u32 lockID, void *lockp, void (*ctrl)(void), s32 disable_irq) {
    u32 last;
    if (lockID != ((u16 *)lockp)[2]) {
        return -2;
    }
    if (disable_irq) {
        last = OS_DisableInterrupts_IrqAndFiq();
    } else {
        last = OS_DisableInterrupts();
    }
    ((u16 *)lockp)[2] = 0;
    if (ctrl) {
        ctrl();
    }
    *(u32 *)lockp = 0;
    if (disable_irq) {
        OS_RestoreInterrupts_IrqAndFiq(last);
    } else {
        OS_RestoreInterrupts(last);
    }
    return 0;
}

// OS_UnlockByWord
s32 OS_UnlockByWord(u32 lockID, void *lockp, void (*ctrl)(void)) {
    return OSi_DoUnlockByWord(lockID, lockp, ctrl, 0);
}

// OSi_DoLockByWord (static)
s32 OSi_DoTryLockByWord(u32 lockID, void *lockp, void (*ctrl)(void), s32 disable_irq) {
    u32 last;
    s32 lastLockFlag;
    if (disable_irq) {
        last = OS_DisableInterrupts_IrqAndFiq();
    } else {
        last = OS_DisableInterrupts();
    }
    lastLockFlag = MI_SwapWord(lockID, lockp);
    if (lastLockFlag == 0) {
        if (ctrl) {
            ctrl();
        }
        ((u16 *)lockp)[2] = (u16)lockID;
    }
    if (disable_irq) {
        OS_RestoreInterrupts_IrqAndFiq(last);
    } else {
        OS_RestoreInterrupts(last);
    }
    return lastLockFlag;
}

// OS_UnlockCartridge
void OS_UnlockCartridge(u32 lockID) {
    OSi_DoUnlockByWord(lockID, HW_SYSWORK(void, ctrdgLock), OSi_FreeCartridgeBus, 1);
}

// OS_LockCartridge
s32 OS_TryLockCartridge(u32 lockID) {
    return OSi_DoTryLockByWord(lockID, HW_SYSWORK(void, ctrdgLock), OSi_AllocateCartridgeBus, 1);
}

// OSi_FreeCartridgeBus (EXMEMCNT &= ~0x80)
void OSi_AllocateCartridgeBus(void) {
    IO_AND((volatile u16 *)0x04000204, ~0x80);
}

// OSi_AllocateCartridgeBus (EXMEMCNT |= 0x80)
void OSi_FreeCartridgeBus(void) {
    IO_OR((volatile u16 *)0x04000204, 0x80);
}

// OS_LockCard
void OS_LockCard(u32 lockID) {
    OS_LockByWord(lockID, HW_SYSWORK(void, cardLock), OSi_AllocateCardBus);
}

// OS_UnlockCard
void OS_UnlockCard(u32 lockID) {
    OS_UnlockByWord(lockID, HW_SYSWORK(void, cardLock), OSi_FreeCardBus);
}

// OSi_FreeCardBus (EXMEMCNT &= ~0x800)
void OSi_AllocateCardBus(void) {
    IO_AND((volatile u16 *)0x04000204, ~0x800);
}

// OSi_AllocateCardBus (EXMEMCNT |= 0x800)
void OSi_FreeCardBus(void) {
    IO_OR((volatile u16 *)0x04000204, 0x800);
}

// returns the owner id halfword (+4) of a lock word
u16 OS_ReadOwnerOfLockWord(void *p) {
    return ((u16 *)p)[2];
}

// OS_SpinWait(0x1000) wrapper
void OSi_WaitByLoop(void) {
    OS_SpinWait(0x1000);
}

// ---- file-scope objects (autoload_3 .bss 0x021fcc10-0x021fcc14)
s32 data_021fcc10;
