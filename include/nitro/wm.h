#ifndef NITRO_WM_H
#define NITRO_WM_H

#include "types.h"

// NitroSDK WM callback / request message (the ARM7 reply buffer every WM callback receives; 0x100-byte FIFO
// slots, data_021ff4b8 is the ARM9-side instance). C header for the WM units in autoload_2 (0x0211e3fc-0x02121e5c).
// The per-command callback structs share the first fields; the unions below are the views different commands use.

typedef struct WMMsg WMMsg;

struct WMMsg {
    /* 0x00 */ u16 id; // apiid
    /* 0x02 */ u16 errcode;
    /* 0x04 */ u16 f04;
    /* 0x06 */ u16 f06;
    /* 0x08 */ union {
        u32 f08;
        struct {
            u16 f08w;
            u16 f0a; // port
        };
    };
    /* 0x0c */ u16 *f0c;
    /* 0x10 */ u16 f10;
    /* 0x12 */ u16 f12;
    /* 0x14 */ u8 _14[6];
    /* 0x1a */ u16 f1a;
    /* 0x1c */ void *arg;
    /* 0x20 */ union {
        u32 f20;
        u16 f20h;
    };
};

#endif
