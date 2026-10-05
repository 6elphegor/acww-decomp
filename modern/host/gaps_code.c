// Host build: functions that are still undecompiled on the DS (gap code, docs/unmatched.md), written for the host.
// Stubs for now; each one says when it's reached.

#include "host.h"

void __sinit_020c5fa0(void) {}  // a static initialiser in main's .ctor (its body is ARM code in a gap)
void Sky_HBlankMain(void) {}    // HBlank effects: per-line scroll/colour of the sky (not emulated per line)
void Sky_HBlankSub(void) {}
s32 Snd_CalcListenerDistance(void) { host_unimplemented("Snd_CalcListenerDistance"); return 0; }
void GX_SetBankForARM7(u32 bank) { *(volatile u8 *)0x04000247 = 0; (void)bank; }
void GX_SetBankForSubBG(u32 bank) { (void)bank; host_unimplemented("GX_SetBankForSubBG"); }
s32 parse_format__wide(void) { host_unimplemented("parse_format__wide"); return 0; }
