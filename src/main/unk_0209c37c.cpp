#include "types.h"

// TU183: 0x0209c37c-0x0209c390. Owns its table in .bss (autoload_3 0x021d7168-0x021d726c).

extern "C" {

u16 sDebugVarTable[0x82];

u32 DebugVar_GetStub() {
    return 0;
}

u16 *DebugVar_GetPtr(u32 a, u32 b) {
    return (u16 *)((u32)sDebugVarTable + (a << 8) + b * 2);
}

}
