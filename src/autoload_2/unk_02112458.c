// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern s32 data_021fcc10;
u32 OS_DisableInterrupts_IrqAndFiq(void);                                        // OS_DisableInterrupts
u32 OS_DisableInterrupts(void);                                        // OS_DisableInterrupts_IrqAndFiq
void OS_RestoreInterrupts_IrqAndFiq(u32 state);                                  // OS_RestoreInterrupts
void OS_RestoreInterrupts(u32 state);                                  // OS_RestoreInterrupts_IrqAndFiq
void func_01ffa494(u32 cycles);                                 // OS_SpinWait
s32 func_02116188(u32 lockID, void *lockp);                     // OSi_DoLockWord
void func_02115e64(u32 data, void *dest, u32 size);             // MI_CpuFill32
s32 OSi_DoTryLockByWord(u32 lockID, void *lockp, void (*ctrl)(void), s32 disable_irq);
s32 OSi_DoUnlockByWord(u32 lockID, void *lockp, void (*ctrl)(void), s32 disable_irq);
s32 func_02112668(u32 lockID, void *lockp, void (*ctrl)(void));
s32 func_021125c8(u32 lockID, void *lockp, void (*ctrl)(void));
void func_02112458(void);
void OSi_FreeCardBus(void);
void OSi_AllocateCardBus(void);
void OSi_FreeCartridgeBus(void);
void OSi_AllocateCartridgeBus(void);

// OS_InitLock
void func_021126d0(void) {
    volatile u16 *lock = (volatile u16 *)0x027ffff0;
    if (data_021fcc10) {
        return;
    }
    data_021fcc10 = 1;
    *(volatile u32 *)0x027ffff0 = 0;
    func_02112668(0x7e, (void *)0x027ffff0, 0);
    while (lock[3] != 0) {
        func_02112458();
    }
    *(volatile u32 *)0x027fffb0 = 0xffffffff;
    *(volatile u32 *)0x027fffb4 = 0xffff0000;
    {
        volatile u32 zero = 0;
        func_02115e64(zero, (void *)0x027fffc0, 0x28);
    }
    *(volatile u16 *)0x04000204 |= 0x800;
    *(volatile u16 *)0x04000204 |= 0x80;
    func_021125c8(0x7e, (void *)0x027ffff0, 0);
    func_02112668(0x7f, (void *)0x027ffff0, 0);
}

// OSi_LockByWord (spin until acquired)
s32 func_02112678(u32 lockID, void *lockp, void (*ctrl)(void), s32 disable_irq) {
    s32 lastLockFlag;
    while ((lastLockFlag = OSi_DoTryLockByWord(lockID, lockp, ctrl, disable_irq)) > 0) {
        func_02112458();
    }
    return lastLockFlag;
}

// OS_LockByWord
s32 func_02112668(u32 lockID, void *lockp, void (*ctrl)(void)) {
    return func_02112678(lockID, lockp, ctrl, 0);
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
s32 func_021125c8(u32 lockID, void *lockp, void (*ctrl)(void)) {
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
    lastLockFlag = func_02116188(lockID, lockp);
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
void func_02112528(u32 lockID) {
    OSi_DoUnlockByWord(lockID, (void *)0x027fffe8, OSi_FreeCartridgeBus, 1);
}

// OS_LockCartridge
void func_02112508(u32 lockID) {
    OSi_DoTryLockByWord(lockID, (void *)0x027fffe8, OSi_AllocateCartridgeBus, 1);
}

// OSi_FreeCartridgeBus (EXMEMCNT &= ~0x80)
void OSi_AllocateCartridgeBus(void) {
    *(volatile u16 *)0x04000204 &= ~0x80;
}

// OSi_AllocateCartridgeBus (EXMEMCNT |= 0x80)
void OSi_FreeCartridgeBus(void) {
    *(volatile u16 *)0x04000204 |= 0x80;
}

// OS_LockCard
void func_021124bc(u32 lockID) {
    func_02112668(lockID, (void *)0x027fffe0, OSi_AllocateCardBus);
}

// OS_UnlockCard
void func_021124a0(u32 lockID) {
    func_021125c8(lockID, (void *)0x027fffe0, OSi_FreeCardBus);
}

// OSi_FreeCardBus (EXMEMCNT &= ~0x800)
void OSi_AllocateCardBus(void) {
    *(volatile u16 *)0x04000204 &= ~0x800;
}

// OSi_AllocateCardBus (EXMEMCNT |= 0x800)
void OSi_FreeCardBus(void) {
    *(volatile u16 *)0x04000204 |= 0x800;
}

// returns the owner id halfword (+4) of a lock word
u16 func_02112468(void *p) {
    return ((u16 *)p)[2];
}

// OS_SpinWait(0x1000) wrapper
void func_02112458(void) {
    func_01ffa494(0x1000);
}

