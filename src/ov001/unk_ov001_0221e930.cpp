// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 NNS_SndMain();
s32 NNS_SndPlayerStopSeq(void *, u32);
s32 NNS_SndPlayerSetTrackPitch(void *, s32, s32);
s32 NNS_SndPlayerSetVolume(void *, s32);
s32 NNS_SndArcPlayerStartSeqArc(void *, u32, s32);
s32 NNS_SndInit();
s32 NNS_SndArcInitOnMemory(void *, s32);
s32 NNS_SndArcPlayerSetup(s32);
s32 NNS_SndHandleInit(void *);
s32 func_ov001_02226fdc(s32, s32);
void func_ov001_02225d58(void *);
void *func_ov001_02225dd8(u32, u32);
s32 func_ov001_02224074(const char *, void *, u32);
s32 func_ov001_02227094(s32, void *, s32, s32);

void func_ov001_0221e930();
void func_ov001_0221e93c();
void func_ov001_0221e95c(s32 a, s32 b);
void func_ov001_0221e980(s32 a);
void func_ov001_0221e9a0(s32 a);
void func_ov001_0221e9c4();
void func_ov001_0221e9f8();
}

u8 *data_ov001_0222def4;

void func_ov001_0221e9f8()
{
    s32 t;
    data_ov001_0222def4 = (u8 *)func_ov001_02225dd8(0x9c, 4);
    *(s32 *)(data_ov001_0222def4 + 0x94) = func_ov001_02224074("sound/sound_data.sdat.l", &t, 0x20);
    NNS_SndInit();
    NNS_SndArcInitOnMemory(data_ov001_0222def4, *(s32 *)(data_ov001_0222def4 + 0x94));
    NNS_SndArcPlayerSetup(0);
    NNS_SndHandleInit(data_ov001_0222def4 + 0x90);
    *(s32 *)(data_ov001_0222def4 + 0x98) = func_ov001_02227094(0, (void *)func_ov001_0221e930, 0, 0xc8);
}

void func_ov001_0221e9c4()
{
    func_ov001_02226fdc(0, *(s32 *)(data_ov001_0222def4 + 0x98));
    func_ov001_02225d58(&data_ov001_0222def4);
}

void func_ov001_0221e9a0(s32 a) { NNS_SndArcPlayerStartSeqArc(data_ov001_0222def4 + 0x90, 0, a); }

void func_ov001_0221e980(s32 a) { NNS_SndPlayerSetVolume(data_ov001_0222def4 + 0x90, a); }

void func_ov001_0221e95c(s32 a, s32 b) { NNS_SndPlayerSetTrackPitch(data_ov001_0222def4 + 0x90, a, b); }

void func_ov001_0221e93c() { NNS_SndPlayerStopSeq(data_ov001_0222def4 + 0x90, 0); }

void func_ov001_0221e930() { NNS_SndMain(); }

