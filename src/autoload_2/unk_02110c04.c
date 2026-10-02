// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK gx.c): hand-written in the original; linked as assembly per the project's assembly policy.
// autoload_2 0x02110c04-0x02110c98, one function.

// GXi_NopClearFifo128_: writes 128 zero words to the geometry-FIFO register whose address arrives in r0
// (32 four-register stm WITHOUT writeback to the same address).
asm void func_02110c04(void *reg)
{
    mov r1, #0
    mov r2, #0
    mov r3, #0
    mov ip, #0
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    stmia r0, {r1, r2, r3, ip}
    bx lr
}
