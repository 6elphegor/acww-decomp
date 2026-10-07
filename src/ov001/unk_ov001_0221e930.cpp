// mwcc-flags: -O4,p
#include "types.h"
#include "proto/autoload_2/unk_021093f4.h"
#include "proto/autoload_2/unk_0210c084.h"
#include "proto/ov001/unk_ov001_0221e930.h"
#include "proto/ov001/unk_ov001_02223fc4.h"
#include "proto/ov001/unk_ov001_02226f68.h"

#pragma thumb off

extern "C" {
s32 NNS_SndPlayerStopSeq(void *, u32);
s32 NNS_SndPlayerSetTrackPitch(void *, s32, s32);
s32 NNS_SndPlayerSetVolume(void *, s32);
s32 NNS_SndArcInitOnMemory(void *, s32);
s32 NNS_SndHandleInit(void *);
void WfcHeap_FreeAndClear(void *);
void *WfcHeap_Alloc(u32, u32);

}

u8 *sWfcSound;

void WfcSound_Init()
{
    s32 t;
    sWfcSound = (u8 *)WfcHeap_Alloc(0x9c, 4);
    *(s32 *)(sWfcSound + 0x94) = WfcFs_LoadFile("sound/sound_data.sdat.l", &t, 0x20);
    NNS_SndInit();
    NNS_SndArcInitOnMemory(sWfcSound, *(s32 *)(sWfcSound + 0x94));
    NNS_SndArcPlayerSetup(0);
    NNS_SndHandleInit(sWfcSound + 0x90);
    *(s32 *)(sWfcSound + 0x98) = WfcTask_Add(0, (void *)WfcSound_MainTask, 0, 0xc8);
}

void WfcSound_Shutdown()
{
    WfcTask_RequestDelete(0, *(s32 *)(sWfcSound + 0x98));
    WfcHeap_FreeAndClear(&sWfcSound);
}

s32 WfcSound_Play(s32 a) { return NNS_SndArcPlayerStartSeqArc(sWfcSound + 0x90, 0, a); }

void WfcSound_SetVolume(s32 a) { NNS_SndPlayerSetVolume(sWfcSound + 0x90, a); }

void WfcSound_SetTrackPitch(s32 a, s32 b) { NNS_SndPlayerSetTrackPitch(sWfcSound + 0x90, a, b); }

void WfcSound_Stop() { NNS_SndPlayerStopSeq(sWfcSound + 0x90, 0); }

void WfcSound_MainTask() { NNS_SndMain(); }

