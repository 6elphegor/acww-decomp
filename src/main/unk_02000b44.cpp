// main 0x02000b44-0x02000b48: OSi_ReferSymbol of NitroSDK crt0.c. C in the original (an empty function), compiled
// from C here: ARM like the rest of crt0.c (main's default is Thumb). The SDK_REFER_SYMBOL macro
// (SDK_USING_MIDDLEWARE) calls it with a middleware's `.version` tag string so that the linker keeps the string:
// callers pass 0x02000b84 "[SDK+NINTENDO:DWC...]" (autoload_2 0x021001e8), 0x02000bbc "[SDK+NINTENDO:BACKUP]"
// (autoload_2 0x0211dc9c/0x0211de00/0x0211def4) and the WiFi/CPS/SSL tags (ov065).
#include "types.h"

#pragma thumb off

// OSi_ReferSymbol
extern "C" void func_02000b44(void *symbol)
{
#pragma unused(symbol)
}

#pragma thumb reset
