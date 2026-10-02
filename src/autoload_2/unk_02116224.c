// mwcc-flags: -nothumb -O4,p
// NitroSDK MI (mi_dma_gxcommand.c): autoload_2 0x02116224-0x021162b0 (single function).
typedef unsigned int u32;
typedef volatile u32 vu32;

extern void func_021158f4(u32 dmaNo, u32 mode); // MIi_CheckAnotherAutoDMA
extern void func_01ffa0f0(u32 dmaNo, u32 src, u32 size, u32 flags); // MIi_CheckDma0SourceAddress
extern void func_01ffa1d4(u32 dmaNo, u32 src, u32 dest, u32 cnt); // MIi_DmaSetParams

// MI_SendGXCommand-style DMA (GXFIFO, immediate/continuous mode)
void func_02116224(u32 dmaNo, u32 src, u32 dest, u32 size) {
    vu32 *dmaCntp;
    func_021158f4(dmaNo, 0xffffffff);
    func_01ffa0f0(dmaNo, src, size, 0x1000000);
    if (size == 0) return;
    dmaCntp = &((vu32 *)0x040000b0)[dmaNo * 3 + 2];
    while (*dmaCntp & 0x80000000)
        ;
    func_01ffa1d4(dmaNo, src, dest, 0xaf000001);
}
