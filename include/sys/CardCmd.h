#ifndef SYS_CARDCMD_H
#define SYS_CARDCMD_H

// CARDiCommandArg: the card request block the ARM9 fills and the ARM7 side carries out (modern/host/pxi7.c, PXI
// tag 11; 0x40 bytes on the DS). The buffers are card addresses or ARM9 memory: pointer-sized. Self-contained: the
// units with their own basic types include it too.
typedef struct {
    unsigned int result;            // 0x00
    unsigned int command;           // 0x04
    unsigned int f8;                // 0x08
    __UINTPTR_TYPE__ srcBuf;        // 0x0c
    __UINTPTR_TYPE__ dstBuf;        // 0x10
    unsigned int len;               // 0x14
    unsigned int f18;               // 0x18: the backup memory's total size
    unsigned int f1c, f20, f24, f28, f2c, f30, f34, f38, f3c;
} CARDCmd;

#endif
