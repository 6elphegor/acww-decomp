// main 0x02000b7c-0x02000b84: func_02000b7c, a Thumb C function that returns the address of the 16-byte key
// at 0x02000b6c (no NUL). Game code (src/main/unk_0209eb94.cpp, 0x0209ecae/0x0209ed26) passes it
// as the 16-byte key argument of func_0211a748 (autoload_2). Function and key sit in main's .text between
// _start_ModuleParams and the middleware tags, i.e. in the `.version` block the SDK linker script places after crt0.
// C-shaped (BORDERLINE list): compiled from C here, the key stays delinked data (`data_02000b6c`, a new symbol).
#include "types.h"

extern "C" {
extern const u8 data_02000b6c[16];

const u8 *func_02000b7c(void)
{
    return data_02000b6c;
}
}
