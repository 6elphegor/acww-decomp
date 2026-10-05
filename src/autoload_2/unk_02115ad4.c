// mwcc-flags: -nothumb -O4,p
// NitroSDK mi_dma.c: MI_DmaFill32Async, autoload_2 0x02115ad4-0x02115bac. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u32 vu32;
typedef void (*MIDmaCallback)(void *arg);

extern u32 OS_DisableInterrupts(void);                                         // OS_DisableInterrupts
extern void OS_RestoreInterrupts(u32 mode);                                    // OS_RestoreInterrupts
extern void MI_WaitDma(u32 dmaNo);                                   // MI_WaitDma
extern void OSi_EnterDmaCallback(u32 dmaNo, MIDmaCallback cb, void *arg);      // OSi_EnterDmaCallback
extern void MIi_DmaSetParams_noInt(u32 dmaNo, u32 src, u32 dest, u32 ctrl);      // MIi_DmaSetParams_noInt

#define MIi_DMA_CLEAR_DATA(dmaNo) (((vu32 *)0x040000e0)[dmaNo])

static inline void MIi_CallCallback(MIDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}

static inline void MIi_DmaSetParams_src32(u32 dmaNo, u32 data, u32 dest, u32 ctrl) {
    u32 enabled = OS_DisableInterrupts();
    vu32 *p = &MIi_DMA_CLEAR_DATA(dmaNo);
    *p = data;
    MIi_DmaSetParams_noInt(dmaNo, (u32)p, dest, ctrl);
    OS_RestoreInterrupts(enabled);
}

// MI_DmaFill32Async
void MI_DmaFill32Async(u32 dmaNo, void *dest, u32 data, u32 size, MIDmaCallback callback, void *arg) {
    if (size == 0) {
        MIi_CallCallback(callback, arg);
    } else {
        MI_WaitDma(dmaNo);
        if (callback) {
            OSi_EnterDmaCallback(dmaNo, callback, arg);
            MIi_DmaSetParams_src32(dmaNo, data, (u32)dest, (size >> 2) | 0xc5000000);
        } else {
            MIi_DmaSetParams_src32(dmaNo, data, (u32)dest, (size >> 2) | 0x85000000);
        }
    }
}
