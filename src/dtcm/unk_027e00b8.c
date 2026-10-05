// mwcc-flags: -nothumb
// NitroSDK OS (os_irqTable.c): OSi_IrqCallbackInfoIndex, the interrupt numbers of the DMA 0-3 and timer 0-3 callbacks,
// .data 0x027e00b8-0x027e00c8 in DTCM. A data-only unit for the reason given in unk_027e0000.c; the callback records
// before it are zero (not reproducible as plain data), so the table is a unit of its own.
typedef unsigned short u16;

u16 data_027e00b8[8] = {8, 9, 10, 11, 3, 4, 5, 6};
