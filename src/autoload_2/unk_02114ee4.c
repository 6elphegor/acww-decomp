// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_alarm.c): hand-written in the original; linked as assembly per the project's
// assembly policy (accepted by user decision 2026-10-02).
// autoload_2 0x02114ee4-0x02114ef4: the timer-interrupt wrapper of the alarm system (OSi_AlarmHandler, which calls
// OSi_ArrangeTimer = func_02114f7c).

void func_02114f7c(void);

asm void func_02114ee4(void)
{
    stmfd sp!, {lr}
    bl func_02114f7c
    ldmfd sp!, {lr}
    bx lr
}
