#include "types.h"

extern const u8 data_020ca480[];
extern const u8 data_020ca484[];
extern const u8 data_020ca48c[];
extern const u8 data_020ca490[];
extern const u8 data_020ca494[];
extern const u8 data_020ca498[];
extern const u8 data_020ca49c[];
extern const u8 data_020ca558[];

// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

BOOL func_02050278(u8 *out, u32 index) {
    *out = data_020ca558[index];
    return TRUE;
}

BOOL func_02050244(u8 *out, u32 c);

BOOL func_0205026c(u8 *out, const u8 *c) {
    return func_02050244(out, *c);
}

BOOL func_02050244(u8 *out, u32 c) {
    const u8 *entry = data_020ca558;
    u32 i = 0;
    while (i < 0xe0) {
        if (*entry == c) {
            *out = i;
            return TRUE;
        }
        i++;
        entry++;
    }
}

const u8 *func_0205023c(void) { return data_020ca494; }
const u8 *func_02050234(void) { return data_020ca48c; }
const u8 *func_0205022c(void) { return data_020ca480; }
const u8 *func_02050224(void) { return data_020ca49c; }
const u8 *func_0205021c(void) { return data_020ca490; }
const u8 *func_02050214(void) { return data_020ca484; }
const u8 *func_0205020c(void) { return data_020ca498; }
int func_02050208(void) { return 0; }
int func_02050204(void) { return 0; }
