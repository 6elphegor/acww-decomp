#ifndef ACTOR_BLINKTIMER_H
#define ACTOR_BLINKTIMER_H

#include "types.h"

extern "C" void BlinkTimer_Construct();
extern "C" void BlinkTimer_Destruct();
// 4-byte eye-blink timer of the player and NPC face animation (BlinkTimer_* C functions); base of NpcFaceAnim.
struct BlinkTimer {
    BlinkTimer() { BlinkTimer_Construct(); }
    ~BlinkTimer() { BlinkTimer_Destruct(); }
    /* 0x00 */ u32 unk_00;
};

#endif
