// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy (accepted by user decision 2026-10-02).
// autoload_2 0x02133acc-0x02133ad0: _fp_init (empty)
#include "types.h"

// _fp_init: floating-point emulation start-up hook, empty (`bx lr`); called from the crt0 (0x020008e4).
asm void func_02133acc(void)
{
    bx lr
}
