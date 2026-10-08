#ifndef SND_TVSOUND_H
#define SND_TVSOUND_H

#include "types.h"
#include "uptr.h"

// TV sound player: base of the TvSoundWeather / TvSoundProgramN objects created in TvSound_Create (main,
// src/main/unk_02003850.cpp: type N creates TvSoundProgramN, 0xff TvSoundWeather). Virtuals and helpers defined in
// autoload_2, unk_020f5b9c.cpp (the base, programs 0, 1, 2, 3, 5, 9 and the weather) and unk_020f6850.cpp (programs
// 4, 6, 7, 8, 10); the non-virtual call* wrappers in main, unk_020030d8.cpp. The derived members sit in the base's tail
// padding (+0xd) on the DS.
class TvSound {
public:
    virtual void reset();                       // 0x020f6800
    virtual void release();                     // 0x020f67c8 release both voices
    virtual void vfunc_08(s32 id, void *arg);   // 0x020f67b8 event handler
    virtual void turnOn(s32 v);                 // 0x020f678c
    virtual void turnOff();                     // 0x020f6764
    virtual void startSounds();                 // 0x020f5b9c init

    void startSe(s32 code, void *handle);
    void updatePosition(void *arg);

    void callTurnOff();
    void callTurnOn(s32 a);
    void callUpdate(s32 a, void *b);
    void callRelease();
    void callReset();

    // the two NNS sound handles (NNSSndHandle: the sequence playing on it, NULL when none)
    /* 0x04 */ void *a;
    /* 0x08 */ void *b;
    /* 0x0c */ u8 c12;
};

// ---- unk_020f5b9c.cpp

class TvSoundProgram0 : public TvSound {
public:
    virtual void startSounds();
};

class TvSoundProgram1 : public TvSound {
public:
    virtual void startSounds();
};

class TvSoundProgram2 : public TvSound {
public:
    virtual void reset();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0d */ s8 d13;
};

class TvSoundProgram3 : public TvSound {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0d */ s8 d13;
};

class TvSoundProgram5 : public TvSound {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0d */ s8 d13;
};

class TvSoundProgram9 : public TvSound {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();
};

class TvSoundWeather : public TvSound {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    void pickNextLoop();

    /* 0x0d */ u8 c13;
    /* 0x0e */ u8 c14;
    /* 0x0f */ u8 c15;
};

// ---- unk_020f6850.cpp

// 0x14 bytes
class TvSoundProgram4 : public TvSound {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    s32 pollVariable();

    /* 0x0e */ s16 e14;
    /* 0x10 */ s32 w16;
};

// 0x10 bytes
class TvSoundProgram6 : public TvSound {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0d */ u8 d13;
};

// 0x18 bytes
class TvSoundProgram7 : public TvSound {
public:
    virtual void reset();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0e */ u16 e14;
    /* 0x10 */ u16 g16;
    /* 0x12 */ u16 h18;
    /* 0x14 */ u16 i20;
};

// 0x14 bytes
class TvSoundProgram8 : public TvSound {
public:
    virtual void reset();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0e */ u16 e14;
    /* 0x10 */ u16 g16;
};

// 0x14 bytes
class TvSoundProgram10 : public TvSound {
public:
    virtual void reset();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void startSounds();

    /* 0x0d */ u8 d13;
    /* 0x0e */ u16 e14;
    /* 0x10 */ u16 g16;
    /* 0x12 */ u16 h18;
};

#ifndef HOST64
// the DS sizes (TvSound_Create's heap blocks, TvSound_GetMaxSize)
static_assert(sizeof(TvSoundProgram0) == 0x10 && sizeof(TvSoundProgram2) == 0x10 && sizeof(TvSoundWeather) == 0x10, "");
static_assert(sizeof(TvSoundProgram4) == 0x14 && sizeof(TvSoundProgram6) == 0x10 && sizeof(TvSoundProgram7) == 0x18, "");
static_assert(sizeof(TvSoundProgram8) == 0x14 && sizeof(TvSoundProgram10) == 0x14, "");
#endif

#endif
