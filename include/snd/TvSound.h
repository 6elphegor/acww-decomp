#ifndef SND_TVSOUND_H
#define SND_TVSOUND_H

#include "types.h"

// TV sound player: base of the TvSoundWeather / TvSoundProgramN objects created in TvSound_Create (vtable data_0213bac4).
// Virtuals and helpers defined in autoload_2, unk_020f5b9c.cpp; the non-virtual call* wrappers in main, unk_020030d8.cpp.
class TvSound {
public:
    virtual void reset();                       // 0x020f6800
    virtual void release();                     // 0x020f67c8 release both voices
    virtual void vfunc_08(s32 id, void *arg);   // 0x020f67b8 event handler
    virtual void turnOn(s32 v);                 // 0x020f678c
    virtual void turnOff();                     // 0x020f6764
    virtual void startSounds();                 // 0x020f5b9c init

    void startSe(s32 code, u32 *slot);
    void updatePosition(void *arg);

    void callTurnOff();
    void callTurnOn(s32 a);
    void callUpdate(s32 a, void *b);
    void callRelease();
    void callReset();

    /* 0x04 */ u32 a; // sound handles
    /* 0x08 */ u32 b;
    /* 0x0c */ u8 c12;
};

#endif
