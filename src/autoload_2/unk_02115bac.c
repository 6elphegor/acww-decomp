// mwcc-flags: -nothumb -O4,p
// NitroSDK MI (mi_dma.c, mi_dma_gxcommand.c): autoload_2 0x02115bac-0x02115e30.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef void (*MIDmaCallback)(void *arg);

extern void func_0206d49c(void); // OS_Terminate
extern u32 OS_DisableInterrupts(void); // OS_DisableInterrupts
extern void OS_RestoreInterrupts(u32 mode); // OS_RestoreInterrupts
extern void func_01ffa0f0(u32 dmaNo, u32 src, u32 size, u32 flags); // MIi_CheckDma0SourceAddress
extern void MI_WaitDma(u32 dmaNo); // MI_WaitDma
extern void OSi_EnterDmaCallback(u32 dmaNo, MIDmaCallback cb, void *arg); // MIi_SetDmaCallback
extern void MIi_DmaSetParams(u32 dmaNo, u32 src, u32 dest, u32 cnt); // MIi_DmaSetParams
extern void MIi_DmaSetParams_wait_noInt(u32 dmaNo, u32 src, u32 dest, u32 cnt);
extern void MIi_DmaSetParams_noInt(u32 dmaNo, u32 src, u32 dest, u32 cnt);
extern void MIi_DmaSetParams_wait(u32 dmaNo, u32 src, u32 dest, u32 cnt);

typedef struct {
    u32 busy;
    u32 dmaNo;
    u32 pad8;
    u32 padC;
    MIDmaCallback callback;
    void *arg;
} MIiGxDmaState;

extern MIiGxDmaState data_027e0414;

void func_021158f4(u32 dmaNo, u32 mode);
void MIi_DMAFastCallback(void);

// MIi_GXDmaSend / MI_SendGXCommandAsync
void MI_SendGXCommandAsyncFast(u32 dmaNo, u32 src, u32 size, MIDmaCallback callback, void *arg) {
    if (size == 0) {
        if (callback) callback(arg);
        return;
    }
    while (((volatile MIiGxDmaState *)&data_027e0414)->busy)
        ;
    data_027e0414.busy = 1;
    data_027e0414.dmaNo = dmaNo;
    data_027e0414.callback = callback;
    data_027e0414.arg = arg;
    func_021158f4(dmaNo, 0x38000000);
    func_01ffa0f0(dmaNo, src, size, 0);
    MI_WaitDma(dmaNo);
    OSi_EnterDmaCallback(dmaNo, (MIDmaCallback)MIi_DMAFastCallback, 0);
    MIi_DmaSetParams(dmaNo, src, 0x04000400, (size >> 2) | 0xfc400000);
}

// GX DMA completion callback
void MIi_DMAFastCallback(void) {
    void *arg;
    data_027e0414.busy = 0;
    arg = data_027e0414.arg;
    if (data_027e0414.callback) data_027e0414.callback(arg);
}

// MI_DmaFill32 (sync)
void MI_DmaFill32(u32 dmaNo, u32 dest, u32 data, u32 size) {
    vu32 *dmaCntp;
    u32 e;
    if (size == 0) return;
    dmaCntp = &((vu32 *)0x040000b0)[dmaNo * 3 + 2];
    while (*dmaCntp & 0x80000000)
        ;
    e = OS_DisableInterrupts();
    ((vu32 *)0x040000e0)[dmaNo] = data;
    MIi_DmaSetParams_wait_noInt(dmaNo, (u32)&((vu32 *)0x040000e0)[dmaNo], dest, (size >> 2) | 0x85000000);
    OS_RestoreInterrupts(e);
    while (*dmaCntp & 0x80000000)
        ;
}

// MI_DmaCopy32 (sync)
void MI_DmaCopy32(u32 dmaNo, u32 src, u32 dest, u32 size) {
    vu32 *dmaCntp;
    func_01ffa0f0(dmaNo, src, size, 0);
    if (size == 0) return;
    dmaCntp = &((vu32 *)0x040000b0)[dmaNo * 3 + 2];
    while (*dmaCntp & 0x80000000)
        ;
    MIi_DmaSetParams_wait(dmaNo, src, dest, (size >> 2) | 0x84000000);
    while (*dmaCntp & 0x80000000)
        ;
}

// MI_DmaCopy16 (sync)
void MI_DmaCopy16(u32 dmaNo, u32 src, u32 dest, u32 size) {
    vu32 *dmaCntp;
    if (size == 0) return;
    func_01ffa0f0(dmaNo, src, size, 0);
    dmaCntp = &((vu32 *)0x040000b0)[dmaNo * 3 + 2];
    while (*dmaCntp & 0x80000000)
        ;
    MIi_DmaSetParams_wait(dmaNo, src, dest, (size >> 1) | 0x80000000);
    while (*dmaCntp & 0x80000000)
        ;
}
