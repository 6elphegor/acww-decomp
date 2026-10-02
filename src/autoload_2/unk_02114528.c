// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_cache.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02114528-0x02114624: the nine DC_/IC_ cache functions (CP15 c7 cache operations, mcr p15).
#include "types.h"

// DC_InvalidateAll
asm void func_02114528(void)
{
    mov r0, #0
    mcr p15, 0, r0, c7, c6, 0
    bx lr
}

// DC_StoreAll: clean every data-cache line by set/way (4 segments x 32 lines)
asm void func_02114534(void)
{
    mov r1, #0
outer:
    mov r0, #0
inner:
    orr r2, r1, r0
    mcr p15, 0, r2, c7, c10, 2
    add r0, r0, #32
    cmp r0, #0x400
    blt inner
    add r1, r1, #0x40000000
    cmp r1, #0
    bne outer
    bx lr
}

// DC_FlushAll: drain the write buffer, then clean+invalidate every line by set/way
asm void func_02114560(void)
{
    mov ip, #0
    mov r1, #0
outer:
    mov r0, #0
inner:
    orr r2, r1, r0
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r2, c7, c14, 2
    add r0, r0, #32
    cmp r0, #0x400
    blt inner
    add r1, r1, #0x40000000
    cmp r1, #0
    bne outer
    bx lr
}

// DC_InvalidateRange(startAddr, nBytes)
asm void func_02114594(void *startAddr, u32 nBytes)
{
    add r1, r1, r0
    bic r0, r0, #31
loop:
    mcr p15, 0, r0, c7, c6, 1
    add r0, r0, #32
    cmp r0, r1
    blt loop
    bx lr
}

// DC_StoreRange(startAddr, nBytes)
asm void func_021145b0(const void *startAddr, u32 nBytes)
{
    add r1, r1, r0
    bic r0, r0, #31
loop:
    mcr p15, 0, r0, c7, c10, 1
    add r0, r0, #32
    cmp r0, r1
    blt loop
    bx lr
}

// DC_FlushRange(startAddr, nBytes)
asm void func_021145cc(const void *startAddr, u32 nBytes)
{
    mov ip, #0
    add r1, r1, r0
    bic r0, r0, #31
loop:
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r0, c7, c14, 1
    add r0, r0, #32
    cmp r0, r1
    blt loop
    bx lr
}

// DC_WaitWriteBufferEmpty
asm void func_021145f0(void)
{
    mov r0, #0
    mcr p15, 0, r0, c7, c10, 4
    bx lr
}

// IC_InvalidateAll
asm void func_021145fc(void)
{
    mov r0, #0
    mcr p15, 0, r0, c7, c5, 0
    bx lr
}

// IC_InvalidateRange(startAddr, nBytes)
asm void func_02114608(void *startAddr, u32 nBytes)
{
    add r1, r1, r0
    bic r0, r0, #31
loop:
    mcr p15, 0, r0, c7, c5, 1
    add r0, r0, #32
    cmp r0, r1
    blt loop
    bx lr
}
