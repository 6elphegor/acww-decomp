// mwcc-flags: -nothumb -O4,p
// NitroSDK OS VRAM exclusive (os_vramExclusive.c): OSi_InitVramExclusive, autoload_2 0x021157c0-0x021157f4. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef int s32;

extern u32 data_021fcf54;      // bit mask table state
extern u16 data_021fcf58[9];   // owner table
extern volatile u64 data_021fcf24; // OSi_TickCounter

u32 OS_DisableInterrupts(void);       // OS_DisableInterrupts_IrqAndFiq
void OS_RestoreInterrupts(u32 state); // OS_RestoreInterrupts_IrqAndFiq
u32 OsCountZeroBits(u32 x);      // MATH_CountLeadingZeros (asm)
u16 OS_GetTickLo(void);       // OS_GetTickLo

// OSi_InitLockTable
void OSi_InitVramExclusive(void) {
    s32 i;
    data_021fcf54 = 0;
    for (i = 0; i < 9; i++) {
        data_021fcf58[i] = 0;
    }
}

