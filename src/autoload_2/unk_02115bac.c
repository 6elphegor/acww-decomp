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
extern u32 func_01ffa2ec(void); // OS_DisableInterrupts
extern void func_01ffa3d4(u32 mode); // OS_RestoreInterrupts
extern void func_01ffa0f0(u32 dmaNo, u32 src, u32 size, u32 flags); // MIi_CheckDma0SourceAddress
extern void func_01ffa080(u32 dmaNo); // MI_WaitDma
extern void func_01ffa4a0(u32 dmaNo, MIDmaCallback cb, void *arg); // MIi_SetDmaCallback
extern void func_01ffa1d4(u32 dmaNo, u32 src, u32 dest, u32 cnt); // MIi_DmaSetParams
extern void func_01ffd9d4(u32 dmaNo, u32 src, u32 dest, u32 cnt);
extern void func_01ffda34(u32 dmaNo, u32 src, u32 dest, u32 cnt);
extern void func_01ffda6c(u32 dmaNo, u32 src, u32 dest, u32 cnt);

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
void func_02115d30(void);

// MIi_GXDmaSend / MI_SendGXCommandAsync
void func_02115d70(u32 dmaNo, u32 src, u32 size, MIDmaCallback callback, void *arg) {
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
    func_01ffa080(dmaNo);
    func_01ffa4a0(dmaNo, (MIDmaCallback)func_02115d30, 0);
    func_01ffa1d4(dmaNo, src, 0x04000400, (size >> 2) | 0xfc400000);
}

// GX DMA completion callback
void func_02115d30(void) {
    void *arg;
    data_027e0414.busy = 0;
    arg = data_027e0414.arg;
    if (data_027e0414.callback) data_027e0414.callback(arg);
}

// MI_DmaFill32 (sync)
void func_02115ca0(u32 dmaNo, u32 dest, u32 data, u32 size) {
    vu32 *dmaCntp;
    u32 e;
    if (size == 0) return;
    dmaCntp = &((vu32 *)0x040000b0)[dmaNo * 3 + 2];
    while (*dmaCntp & 0x80000000)
        ;
    e = func_01ffa2ec();
    ((vu32 *)0x040000e0)[dmaNo] = data;
    func_01ffd9d4(dmaNo, (u32)&((vu32 *)0x040000e0)[dmaNo], dest, (size >> 2) | 0x85000000);
    func_01ffa3d4(e);
    while (*dmaCntp & 0x80000000)
        ;
}

// MI_DmaCopy32 (sync)
void func_02115c24(u32 dmaNo, u32 src, u32 dest, u32 size) {
    vu32 *dmaCntp;
    func_01ffa0f0(dmaNo, src, size, 0);
    if (size == 0) return;
    dmaCntp = &((vu32 *)0x040000b0)[dmaNo * 3 + 2];
    while (*dmaCntp & 0x80000000)
        ;
    func_01ffda6c(dmaNo, src, dest, (size >> 2) | 0x84000000);
    while (*dmaCntp & 0x80000000)
        ;
}

// MI_DmaCopy16 (sync)
void func_02115bac(u32 dmaNo, u32 src, u32 dest, u32 size) {
    vu32 *dmaCntp;
    if (size == 0) return;
    func_01ffa0f0(dmaNo, src, size, 0);
    dmaCntp = &((vu32 *)0x040000b0)[dmaNo * 3 + 2];
    while (*dmaCntp & 0x80000000)
        ;
    func_01ffda6c(dmaNo, src, dest, (size >> 1) | 0x80000000);
    while (*dmaCntp & 0x80000000)
        ;
}
