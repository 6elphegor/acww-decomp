#include "types.h"

extern u16 data_020dbac8[];
extern const u8 data_020ca4dc[];

// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

u32 func_020501e8(u32 key) {
    const u8 *entry = data_020ca4dc;
    while (*entry != 0) {
        if (key == *entry) {
            return entry[1];
        }
        entry += 2;
    }
    return key;
}

u16 func_020501d4(u32 index) {
    u16 result = 0;
    if (index < 0xe0) {
        result = data_020dbac8[index];
    }
    return result;
}
