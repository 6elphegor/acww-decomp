; Original assembly (NitroSDK libsyscall and the secure area): hand-written in the original; linked as assembly per
; the project's assembly policy. Assembled with mwasmarm (tools/configure.py, rule mwasm).
; main 0x02000000-0x02000800: the ARM9 secure area. It starts with the 0xe7ffdeff marker words, the rest is
; Nintendo's pseudo-random filler (data, never executed) with the 18 Thumb SVC stubs of libsyscall (`swi n; bx lr`)
; at fixed addresses inside it. The stubs are global functions under their symbols.txt names; ARM callers reach
; them through blx (mwld converts `bl`), Thumb callers through bl.
; The filler is not stored here: each `.incbin` reads its bytes from the extracted ROM (extract/usa/arm9/arm9.bin,
; produced by `dsd rom extract` from your own dump), so the build depends on the extract step.

	.text

	.global LZ77UnCompReadNormalWrite8bit
	.global IntrWait
	.global RLUnCompReadByCallbackWrite16bit
	.global RLUnCompReadNormalWrite8bit
	.global LZ77UnCompReadByCallbackWrite16bit
	.global Halt
	.global GetCRC16
	.global VBlankIntrWait
	.global CpuFastSet
	.global WaitByLoop
	.global Div
	.global SoftReset
	.global CpuSet
	.global HuffUnCompReadByCallback
	.global Sqrt
	.global Mod
	.global IsDebugger
	.global BitUnPack

	.incbin "extract/usa/arm9/arm9.bin", 0x0, 0x8e	; 0x02000000

	.thumb
	.type LZ77UnCompReadNormalWrite8bit, @function
	.size LZ77UnCompReadNormalWrite8bit, 0x4
LZ77UnCompReadNormalWrite8bit:
	swi 0x11
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x92, 0x68	; 0x02000092

	.thumb
	.type IntrWait, @function
	.size IntrWait, 0x4
IntrWait:
	swi 0x4
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0xfe, 0x5c	; 0x020000fe

	.thumb
	.type RLUnCompReadByCallbackWrite16bit, @function
	.size RLUnCompReadByCallbackWrite16bit, 0x4
RLUnCompReadByCallbackWrite16bit:
	swi 0x15
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x15e, 0x5e	; 0x0200015e

	.thumb
	.type RLUnCompReadNormalWrite8bit, @function
	.size RLUnCompReadNormalWrite8bit, 0x4
RLUnCompReadNormalWrite8bit:
	swi 0x14
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x1c0, 0x72	; 0x020001c0

	.thumb
	.type LZ77UnCompReadByCallbackWrite16bit, @function
	.size LZ77UnCompReadByCallbackWrite16bit, 0x4
LZ77UnCompReadByCallbackWrite16bit:
	swi 0x12
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x236, 0x56	; 0x02000236

	.thumb
	.type Halt, @function
	.size Halt, 0x4
Halt:
	swi 0x6
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x290, 0x7e	; 0x02000290

	.thumb
	.type GetCRC16, @function
	.size GetCRC16, 0x4
GetCRC16:
	swi 0xe
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x312, 0x78	; 0x02000312

	.thumb
	.type VBlankIntrWait, @function
	.size VBlankIntrWait, 0x6
VBlankIntrWait:
	mov r2, #0x0
	swi 0x5
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x390, 0x6a	; 0x02000390

	.thumb
	.type CpuFastSet, @function
	.size CpuFastSet, 0x4
CpuFastSet:
	swi 0xc
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x3fe, 0x72	; 0x020003fe

	.thumb
	.type WaitByLoop, @function
	.size WaitByLoop, 0x4
WaitByLoop:
	swi 0x3
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x474, 0x52	; 0x02000474

	.thumb
	.type Div, @function
	.size Div, 0x4
Div:
	swi 0x9
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x4ca, 0x6e	; 0x020004ca

	.thumb
	.type SoftReset, @function
	.size SoftReset, 0x4
SoftReset:
	swi 0x0
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x53c, 0x6c	; 0x0200053c

	.thumb
	.type CpuSet, @function
	.size CpuSet, 0x4
CpuSet:
	swi 0xb
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x5ac, 0x62	; 0x020005ac

	.thumb
	.type HuffUnCompReadByCallback, @function
	.size HuffUnCompReadByCallback, 0x4
HuffUnCompReadByCallback:
	swi 0x13
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x612, 0x52	; 0x02000612

	.thumb
	.type Sqrt, @function
	.size Sqrt, 0x4
Sqrt:
	swi 0xd
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x668, 0x56	; 0x02000668

	.thumb
	.type Mod, @function
	.size Mod, 0x6
Mod:
	swi 0x9
	add r0, r1, #0
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x6c4, 0x76	; 0x020006c4

	.thumb
	.type IsDebugger, @function
	.size IsDebugger, 0x4
IsDebugger:
	swi 0xf
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x73e, 0x66	; 0x0200073e

	.thumb
	.type BitUnPack, @function
	.size BitUnPack, 0x4
BitUnPack:
	swi 0x10
	bx lr

	.incbin "extract/usa/arm9/arm9.bin", 0x7a8, 0x58	; 0x020007a8
