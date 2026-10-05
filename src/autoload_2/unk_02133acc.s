; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy (accepted by user decision 2026-10-02).
; autoload_2 0x02133acc-0x02133ad0: _fp_init (empty)
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; _fp_init: floating-point emulation start-up hook, empty (`bx lr`); called from the crt0 (0x020008e4).
	.global _fp_init
	.type _fp_init, @function
	.size _fp_init, 0x4
_fp_init:
	bx lr
