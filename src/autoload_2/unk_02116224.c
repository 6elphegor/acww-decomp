// mwcc-flags: -nothumb -O4,p
// NitroSDK MI (mi_dma_gxcommand.c): autoload_2 0x02116224-0x021162b0 (single function).
typedef unsigned int u32;
typedef volatile u32 vu32;

extern void MIi_CheckAnotherAutoDMA(u32 dmaNo, u32 mode); // MIi_CheckAnotherAutoDMA
extern void MIi_CheckDma0SourceAddress(u32 dmaNo, u32 src, u32 size, u32 flags); // MIi_CheckDma0SourceAddress
extern void MIi_DmaSetParams(u32 dmaNo, u32 src, u32 dest, u32 cnt); // MIi_DmaSetParams

// MI_SendGXCommand-style DMA (GXFIFO, immediate/continuous mode)
void MIi_CardDmaCopy32(u32 dmaNo, u32 src, u32 dest, u32 size) {
    vu32 *dmaCntp;
    MIi_CheckAnotherAutoDMA(dmaNo, 0xffffffff);
    MIi_CheckDma0SourceAddress(dmaNo, src, size, 0x1000000);
    if (size == 0) return;
    dmaCntp = &((vu32 *)0x040000b0)[dmaNo * 3 + 2];
    while (*dmaCntp & 0x80000000)
        ;
    MIi_DmaSetParams(dmaNo, src, dest, 0xaf000001);
}
