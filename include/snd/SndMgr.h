#ifndef SND_SNDMGR_H
#define SND_SNDMGR_H

#include "types.h"

class SndObj;
struct SndHandle;

// Volume ramp of the sound manager (SndRamp_Start / SndRamp_Step / SndRamp_Set in src/autoload_2/unk_020ef150.cpp).
struct SndRamp {
    /* 0x00 */ s16 target;
    /* 0x02 */ u16 frames;
    /* 0x04 */ s32 value;
    /* 0x08 */ s32 step;
};

// Sound / BGM manager, one object gSndMgr (0x78 bytes). Constructor and members defined in
// src/autoload_2/unk_020f0dec.cpp; the BGM / volume handling functions (extern "C") in src/autoload_2/unk_020ef150.cpp.
class SndMgr {
public:
    SndMgr();
    void init(u32 a, u32 b, u32 c);
    void update();
    void volumeOff();
    void volumeOn();
    void setOutputMode(u32 v);
    void startOutputEffect();
    void stopAll();

    /* 0x00 */ u32 beatSync;
    /* 0x04 */ SndRamp fadeRamp;
    /* 0x10 */ SndRamp mainRamp;
    /* 0x1c */ SndRamp subRamp;
    /* 0x28 */ void *subHeap;
    /* 0x2c */ SndObj *scene;
    /* 0x30 */ u32 melody;
    /* 0x34 */ SndHandle *strmHandle;
    /* 0x38 */ SndHandle *seHandle;
    /* 0x3c */ SndHandle *bgmHandle;
    /* 0x40 */ SndHandle *auxSeHandle;
    /* 0x44 */ u32 voiceType;
    /* 0x48 */ SndHandle *voiceHandle;
    /* 0x4c */ u8 unk_4c;
    /* 0x4d */ u8 seDisabled;
    /* 0x4e */ u8 unk_4e[2];
    /* 0x50 */ u32 outputMode;
    /* 0x54 */ u32 randState;
    /* 0x58 */ u32 randMul;
    /* 0x5c */ u32 randAdd;
    /* 0x60 */ u8 menuDuck;
    /* 0x61 */ u8 subDucked;
    /* 0x62 */ u8 keepHeap;
    /* 0x63 */ u8 unk_63;
    /* 0x64 */ u16 trackMask;
    /* 0x66 */ u16 unk_66;
    /* 0x68 */ s32 strmTotalTime;
    /* 0x6c */ s16 variantTimer;
    /* 0x6e */ u16 crossTrackMask;
    /* 0x70 */ u8 pan;
    /* 0x71 */ u8 keySeMode;
    /* 0x72 */ u8 curveDelay;
    /* 0x73 */ u8 trackVariant;
    /* 0x74 */ u8 pendingVariant;
    /* 0x75 */ u8 variantDirty;
    /* 0x76 */ u8 unk_76[2];
};

#endif // SND_SNDMGR_H
