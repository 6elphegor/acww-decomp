#include "types.h"

// TU183: 0x0209c37c-0x0209c390. Owns its table in .bss (autoload_3 0x021d7168-0x021d726c).

extern "C" {

u16 data_021d7168[0x82];

u32 func_0209c38c() {
    return 0;
}

u16 *func_0209c37c(u32 a, u32 b) {
    return (u16 *)((u32)data_021d7168 + (a << 8) + b * 2);
}

}
