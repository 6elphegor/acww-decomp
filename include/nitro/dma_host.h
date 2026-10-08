#ifndef NITRO_DMA_HOST_H
#define NITRO_DMA_HOST_H

// DMA source and destination: the DMA registers are 32 bits wide, a host pointer may not be. The functions that set a
// channel's registers (MIi_DmaSetParams and its variants) hand the whole addresses to the host's DMA model first
// (modern/host/hw.c), which uses them for as long as the registers still hold their low words. Self-contained.
#ifdef __cplusplus
extern "C" {
#endif
void HostDma_Addresses(unsigned int ch, __UINTPTR_TYPE__ src, __UINTPTR_TYPE__ dest);
#ifdef __cplusplus
}
#endif

#endif
