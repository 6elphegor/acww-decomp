// mwcc-flags: -nothumb
// NitroSDK MI (mi_dma_gxcommand.c): the state of the asynchronous GX-command DMA (MIi_GXDmaParams: busy flag, DMA number, source,
// remaining length, callback and its argument, FIFO condition and function), DTCM .data 0x027e0414-0x027e0434, zero in the image.
// MI_SendGXCommandAsync (ITCM) starts a transfer, MIi_DMAFastCallback (autoload_2) continues it. A data-only unit
// (the code is in two other modules); placed with the SDK's DTCM section pragma (see unk_027e0000.c).
#pragma define_section DTCM ".dtcm" abs32 RWX

typedef unsigned int u32;  // (long is 64 bits on 64-bit hosts)
typedef int BOOL;

#include "nitro/mi_gxdma.h"

#pragma section DTCM begin

// MIi_GXDmaParams
MIGXDmaParams data_027e0414;

#pragma section DTCM end
