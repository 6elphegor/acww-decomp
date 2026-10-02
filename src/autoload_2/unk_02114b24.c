// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_protectionUnit.c): hand-written in the original; linked as assembly per the
// project's assembly policy.
// autoload_2 0x02114b24-0x02114b44: OS_EnableProtectionUnit, OS_DisableProtectionUnit (CP15 control bit 0, mrc/mcr p15).

// OS_EnableProtectionUnit
asm void func_02114b24(void)
{
    mrc p15, 0, r0, c1, c0, 0
    orr r0, r0, #1
    mcr p15, 0, r0, c1, c0, 0
    bx lr
}

// OS_DisableProtectionUnit
asm void func_02114b34(void)
{
    mrc p15, 0, r0, c1, c0, 0
    bic r0, r0, #1
    mcr p15, 0, r0, c1, c0, 0
    bx lr
}
