// mwcc-flags: -nothumb
// NitroSDK OS: OSi_IrqCallbackInfoIndex, the interrupt numbers of the DMA 0-3 and timer 0-3 callbacks, DTCM .data
// 0x027e00b8-0x027e00c8. A data-only unit for the reason given in unk_027e0000.c. In NitroSDK it is defined in
// os_irqTable.c with OS_IRQTable and OSi_IrqCallbackInfo, but here it cannot be part of that file: mwcc sorts a
// file's objects by size, and this 16-byte table follows the 88- and 96-byte objects of unk_027e0000.c. It is
// placed with the SDK's DTCM section pragma (see unk_027e0000.c).
#pragma define_section DTCM ".dtcm" abs32 RWX

typedef unsigned short u16;

#pragma section DTCM begin

u16 data_027e00b8[8] = {8, 9, 10, 11, 3, 4, 5, 6};

#pragma section DTCM end
