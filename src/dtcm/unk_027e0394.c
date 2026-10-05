// mwcc-flags: -nothumb
// NitroSDK PXI (pxi_fifo.c): FifoRecvCallbackTable, the receive callback of each of the 32 PXI FIFO tags, DTCM .data
// 0x027e0394-0x027e0414, zero in the image. PXI_SetFifoRecvCallback (autoload_2) sets an entry,
// PXIi_HandlerRecvFifoNotEmpty (ITCM) calls it. A data-only unit (the code is in two other modules); placed with the
// SDK's DTCM section pragma (see unk_027e0000.c).
#pragma define_section DTCM ".dtcm" abs32 RWX

typedef unsigned long u32;
typedef int BOOL;
typedef void (*PXIFifoCallback)(u32 tag, u32 data, BOOL err);

#pragma section DTCM begin

// FifoRecvCallbackTable
PXIFifoCallback data_027e0394[32];

#pragma section DTCM end
