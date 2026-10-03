// main 0x02000b7c-0x02000b84: AxMail_GetDigestKey, a Thumb C function that returns the address of the 16-byte key
// at 0x02000b6c (16 ASCII bytes, no NUL; delinked data read from the ROM). Game code (src/main/unk_0209eb94.cpp, 0x0209ecae/0x0209ed26) passes it
// as the 16-byte key argument of func_0211a748 (autoload_2). Function and key sit in main's .text between
// _start_ModuleParams and the middleware tags, i.e. in the `.version` block the SDK linker script places after crt0.
// C-shaped (BORDERLINE list): compiled from C here, the key stays delinked data (`sAxMailDigestKey`, a new symbol).
#include "types.h"

extern "C" {
extern const u8 sAxMailDigestKey[16];

const u8 *AxMail_GetDigestKey(void)
{
    return sAxMailDigestKey;
}
}
