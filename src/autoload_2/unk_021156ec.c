// mwcc-flags: -nothumb -O4,p
// NitroSDK OS (os_system.c-ish): lock-bit tables and random-seed collection, autoload_2 0x02115664-0x021158e4. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef int s32;

extern u32 data_021fcf54;      // bit mask table state
extern u16 data_021fcf58[9];   // owner table
extern volatile u64 data_021fcf24; // OSi_TickCounter

u32 func_01ffa2ec(void);       // OS_DisableInterrupts_IrqAndFiq
void func_01ffa3d4(u32 state); // OS_RestoreInterrupts_IrqAndFiq
u32 func_0211565c(u32 x);      // MATH_CountLeadingZeros (asm)
u16 func_02114da0(void);       // OS_GetTickLo

typedef int BOOL;
// OSi_TryLockVram (os_vramExclusive.c)
BOOL func_021156ec(u16 bank, u16 lockId) {
    u32 workMap;
    s32 zeroBits;
    u32 enabled = func_01ffa2ec();

    workMap = (u32)(bank & data_021fcf54);
    while (1) {
        zeroBits = (s32)(31 - func_0211565c(workMap));
        if (zeroBits < 0) {
            break;
        }
        workMap &= ~(0x00000001 << zeroBits);
        if (data_021fcf58[zeroBits] != lockId) {
            (void)func_01ffa3d4(enabled);
            return 0;
        }
    }

    workMap = (u32)(bank & 0x01ff);
    while (1) {
        zeroBits = (s32)(31 - func_0211565c(workMap));
        if (zeroBits < 0) {
            break;
        }
        workMap &= ~(0x00000001 << zeroBits);
        data_021fcf58[zeroBits] = lockId;
        data_021fcf54 |= (0x00000001 << zeroBits);
    }

    (void)func_01ffa3d4(enabled);
    return 1;
}
