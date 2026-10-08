#ifndef NITRO_MI_GXDMA_H
#define NITRO_MI_GXDMA_H

// MIi_GXDmaParams (src/dtcm/unk_027e0414.c): the state of the asynchronous GX-command DMA. The source is an address
// (pointer-sized). Self-contained: the units with their own basic types include it too.
typedef struct MIGXDmaParams {
    volatile int isBusy;        // 0x00
    unsigned int dmaNo;         // 0x04
    __UINTPTR_TYPE__ src;       // 0x08
    unsigned int length;        // 0x0c
    void (*callback)(void *);   // 0x10
    void *arg;                  // 0x14
    unsigned int fifoCond;      // 0x18
    void (*fifoFunc)(void);     // 0x1c
} MIGXDmaParams;

#endif
