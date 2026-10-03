// mwcc-flags: -nothumb -O4,p
// V_020fe4b4: autoload_2 0x020fe4b4-0x020fe5c0 (1 function). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: plain func_ name, nothing defined but the function.
// func_020fe4b4: PXI receive callback of the VRAM C/D lock helper (func_020fe5c0, G015b). On message 0x10000/7 or 0x20000/0 it releases the
// locked banks (OSi_UnlockVram) and then calls the user callback stored by func_020fe5c0.
#include "types.h"

extern "C" {
// written by the PXI interrupt callback: volatile as in the original (user decision 2026-10-02)
extern volatile u16 data_021f5c40;
// written by the PXI interrupt callback: volatile as in the original (user decision 2026-10-02)
extern volatile u16 data_021f5c44;
extern u32 data_021f5c48;
extern void (*data_021f5c4c)(u32, u32);

void OSi_UnlockVram(u32 a, u32 b);
void PXI_SetFifoRecvCallback(u32 a, void *b);
}

extern "C" void func_020fe4b4(u32 tag, u32 data) {
    void (*cb)(u32, u32) = data_021f5c4c;
    u32 arg = data_021f5c48;
    u32 lo = data & 0xff;
    u32 hi = data & 0xffff0000;
    switch (hi) {
    case 0x10000:
        if (lo == 7) {
            if (data_021f5c44 != 0) {
                if (data_021f5c40 != 0) {
                    OSi_UnlockVram(data_021f5c44, data_021f5c40);
                    data_021f5c44 = 0;
                }
            }
        }
        break;
    case 0x20000:
        if (lo == 0) {
            if (data_021f5c44 != 0) {
                if (data_021f5c40 != 0) {
                    OSi_UnlockVram(data_021f5c44, data_021f5c40);
                    data_021f5c44 = 0;
                }
            }
        }
        PXI_SetFifoRecvCallback(15, 0);
        break;
    }
    if (cb != 0) {
        data_021f5c4c = 0;
        data_021f5c48 = 0;
        cb(arg, lo);
    }
}
