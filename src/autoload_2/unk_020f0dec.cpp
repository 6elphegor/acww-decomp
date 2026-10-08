// mwcc-flags: -nothumb -O4,p
// RC_020f0dec: autoload_2 0x020f0dec-0x020f0fb4 (8 functions) + bss 0x021f5b80-0x021f5bf8 (autoload_3) + main .init
// 0x020c6080-0x020c6094 / .ctor 0x020d1f50-0x020d1f54 (its __sinit). mwcc 1.2/base, C++, ARM, -O4,p.
// REAL-CLASS shape: the sound/BGM manager SndMgr and its one object gSndMgr, a
// file-scope object with an out-of-line constructor, which mwcc builds in the file's __sinit (main .init 0x020c6080: a tail call of
// the C1 constructor 0x020f0f70; the C2 is unreferenced and dead-stripped). Every member keeps its symbols.txt name (aliases.txt).
// Extent: the text and the 0x78-byte object are certain; the 4-byte bss words before it (0x021f5b48-0x021f5b7c, used only by
// SndMgr_PlayTalkVoice and G006 0x020ef150-0x020f0dec) are equal-or-smaller objects, so they may belong to this file too (then G006, and
// perhaps SndMgr_PlayTalkVoice, are this file's first part); nothing in the data decides it, so the unit takes only what is proven.
#include "types.h"
#include "snd/SndMgr.h"
#include "proto/autoload_2/unk_020ed8cc.h"
#include "proto/autoload_2/unk_020ef150.h"
#include "proto/autoload_2/unk_020f0dec.h"
#include "proto/autoload_2/unk_0210b1b0.h"
#include "proto/itcm/unk_01ffa4a0.h"
#include "proto/main/unk_0206d49c.h"


// the sound manager (C linkage name as in symbols.txt; other files use gSndBgmHandle / bc0 / be0 = members at +0x3c / +0x40 / +0x60,
// recorded as linker-script names by renames.txt)
SndMgr gSndMgr;

extern "C" {
void *NNS_SndHeapCreate(void *a, u32 b);
u32 CARD_GetThreadPriority(void);
void NNS_SndCaptureCreateThread(u32 a);
void NNS_SndSetMasterVolume(u32 a);
void NNS_SndArcStrmInit(u32 a, void *b);
void NNS_SndStrmHandleInit(void *p);
void NNS_SndCaptureChangeOutputEffect(u32 a);
}

SndMgr::SndMgr() {
    randState = OS_GetTick();
    randMul = 0x5d588b65;
    randAdd = 0x00269ec3;
    seDisabled = 0;
    menuDuck = 0;
    keepHeap = 0;
}

// heap: the sound heap's memory (size bytes); its first 0x339c bytes become the manager's own sub-heap, the rest the sound
// system's heap. arcPath: the sound archive's file name.
void SndMgr::init(void *heap, u32 size, const char *arcPath) {
    subHeap = NULL;
    if (subHeap != NULL) Fatal_Trap();
    subHeap = NNS_SndHeapCreate(heap, 0x339c);
    if (subHeap == NULL) Fatal_Trap();
    Snd_InitSystem((u8 *)heap + 0x339c, size - 0x339c, arcPath, NULL);
    NNS_SndCaptureCreateThread(CARD_GetThreadPriority() - 1);
    outputMode = 1;
    startOutputEffect();
    NNS_SndSetMasterVolume(127);
    NNS_SndArcStrmInit(10, Snd_GetHeap());
    NNS_SndStrmHandleInit(&strmHandle);
    Snd_LoadGroup(0);
    Snd_InitHandle(&voiceHandle);
    Snd_InitHandle(&seHandle);
    Snd_InitHandle(&bgmHandle);
    Snd_InitHandle(&auxSeHandle);
    beatSync = 0;
    trackMask = 0;
    strmTotalTime = 0;
    variantTimer = -1;
    crossTrackMask = 0;
    pan = 0;
    keySeMode = 0;
}

void SndMgr::update() {
    Snd_Main();
    SndMgr_UpdateVoice(this);
    SndMgr_UpdateTrackRamps(this);
    SndMgr_UpdateVolumeRamps(this);
}

void SndMgr::volumeOff() {
    NNS_SndSetMasterVolume(0);
}

void SndMgr::volumeOn() {
    NNS_SndSetMasterVolume(127);
}

void SndMgr::setOutputMode(u32 v) {
    outputMode = v;
    NNS_SndCaptureChangeOutputEffect(outputMode);
}

void SndMgr::startOutputEffect() {
    Snd_StartOutputEffect(outputMode);
}

void SndMgr::stopAll() {
    NNS_SndCaptureStopEffect();
}

// ---- labels inside this unit's variables (generated: tools/host_labels.py) ----
#include "host_labels.h"

HOST_LABEL_DEFINE(data_021f5be0, (char *)&gSndMgr.menuDuck);
HOST_LABEL_DEFINE(gSndBgmHandle, (char *)&gSndMgr.bgmHandle.p);
