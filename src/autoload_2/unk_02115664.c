// mwcc-flags: -nothumb -O4,p
// NitroSDK OS VRAM exclusive (os_vramExclusive.c): OSi_UnlockVram, autoload_2 0x02115664-0x021156ec. ARM code, mwcc 1.2/base.
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

// OSi_Unlock
void func_02115664(u32 mask, u16 data) {
    s32 i;
    u32 bits;
    u32 enabled = func_01ffa2ec();
    bits = mask & data_021fcf54 & 0x1ff;
    for (;;) {
        i = 31 - func_0211565c(bits);
        if (i < 0) break;
        bits &= ~(1 << i);
        if (data == data_021fcf58[i]) {
            data_021fcf58[i] = 0;
            data_021fcf54 &= ~(1 << i);
        }
    }
    func_01ffa3d4(enabled);
}
