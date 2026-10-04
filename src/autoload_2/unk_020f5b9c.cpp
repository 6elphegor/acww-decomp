// mwcc-flags: -nothumb -O4,p
// RC_020f5b9c: the first sound-emitter source file (G010a part 1) as REAL C++ classes. mwcc 1.2/base, C++, ARM, -O4,p.
// autoload_2 .text 0x020f5b9c-0x020f6850 (22 functions), .data 0x0213b9dc-0x0213badc (8 vtables of 6 slots). No bss / rodata / __sinit.
// Every function lands on its original address with the original bytes; every old symbols.txt name stays (aliases.txt adds the
// compiler's names as labels; only the vtables are renamed to _ZTV.. at their starts).
// EXTENT (from the data order): G010a's 13 equal-size vtables are TWO files. With mwcc's data order (vtables created last, in reverse
// class-declaration order, all objects heapsorted by size) the 13 vtables as one
// file need the base class TvSound declared 9th, after eight of its own derived classes: impossible. Split after the 8th vtable,
// this file's 8 vtables come out in the original order with the classes declared in the natural order (base, then 9e4, a04, ..., aa4 =
// vtable order = the order of their methods in the text), and its text ends exactly where the base's methods end (0x020f6850); the other
// five classes (0x0213bae4..bb64, text 0x020f6850-0x020f7a5c) are the next file, RC_020f6850. The 1-byte data_0213b9d8 in front is not
// this file's (with it the declaration order would be scrambled; its only user is G012b's func_020f4f74).
// Classes (vtable start / dsd label at +8; slots: 0 reset, 1 release, 2 event handler, 3 set flag, 4 mute, 5 init):
//   TvSound   base (vtable 0x0213babc): f6800 / f67c8 / f67b8 / f678c / f6764 / f5b9c, helpers report f6678 and update f66d0.
//                  main constructs all of them (TvSound_Create, inline constructors) and declares the class in unk_020030d8.cpp.
//   TvSoundProgram0 / ba04 / ba24 / ba44 / ba64 / ba84 / baa4 : TvSound (vtables 0x0213b9dc .. 0x0213ba9c); derived members sit in the
//                  base's tail padding (+0xd).
// The class DECLARATION order sets the vtable order: keep it.
#include "types.h"
#include "snd/TvSound.h"


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

extern "C" {
extern u8 gSndMgr[];
void Fatal_Trap(void);
u32 SndMgr_Rand(void *g, u32 n);
void NNS_SndArcPlayerStartSeqArc(void *slot, u32 a, s32 b);
void NNS_SndArcPlayerStartSeq(void *p, u32 v);
void func_02109fd0(void *p, u32 a, u32 b);
void NNS_SndPlayerSetVolume(void *p, s32 v);
void NNS_SndHandleReleaseSeq(void *p);
void NNS_SndHandleInit(void *p);
void Snd_StopHandle(void *p, u32 v);
void func_0210a148(void *p, u32 a, u32 b);
void NNS_SndPlayerSetTrackPan(void *p, u32 a, u32 b);
void NNS_SndPlayerMoveVolume(void *p, u32 a, u32 b);
void NNS_SndPlayerStopSeq(void *p, u32 a);
void Snd_CalcListenerDistance(void *a, u32 b);
u32 Snd_DistanceToVolume(void);
u32 Snd_CalcPan(void *a, u32 b);
}

static inline BOOL nz(u32 v) { return v != 0; }

void TvSound::reset() {
    NNS_SndHandleInit(&a);
    NNS_SndHandleInit(&b);
    c12 = 0;
    startSounds();
    NNS_SndPlayerSetVolume(&a, 0);
    NNS_SndPlayerSetVolume(&b, 0);
}

void TvSound::release() {
    Snd_StopHandle(&a, 0);
    Snd_StopHandle(&b, 0);
    NNS_SndHandleReleaseSeq(&a);
    NNS_SndHandleReleaseSeq(&b);
}

void TvSound::vfunc_08(s32 id, void *arg) {
    return updatePosition(arg);
}

void TvSound::turnOn(s32 v) {
    c12 = v;
    NNS_SndPlayerSetVolume(&a, 127);
    NNS_SndPlayerSetVolume(&b, 127);
}

void TvSound::turnOff() {
    NNS_SndPlayerSetVolume(&a, 0);
    NNS_SndPlayerSetVolume(&b, 0);
}

void TvSound::updatePosition(void *x) {
    u32 r5;
    u32 r4;
    if (x == 0) {
        NNS_SndPlayerSetVolume(&a, 0);
        NNS_SndPlayerSetVolume(&b, 0);
        return;
    }
    Snd_CalcListenerDistance(x, 0);
    r5 = Snd_DistanceToVolume();
    r4 = Snd_CalcPan(x, 0);
    NNS_SndPlayerSetVolume(&a, r5);
    NNS_SndPlayerSetVolume(&b, r5);
    NNS_SndPlayerSetTrackPan(&a, 15, r4);
    NNS_SndPlayerSetTrackPan(&b, 15, r4);
}

void TvSound::startSe(s32 code, u32 *slot) {
    if (slot == 0) Fatal_Trap();
    NNS_SndArcPlayerStartSeqArc(slot, 1, code % 1000);
}

void TvSoundProgram0::startSounds() {
    return startSe(0x4f0, &a);
}

void TvSoundProgram1::startSounds() {
    return startSe(0x4f1, &a);
}

void TvSoundProgram2::reset() {
    TvSound::reset();
    d13 = -1;
}

void TvSoundProgram2::startSounds() {
    return startSe(0x4f2, &b);
}

void TvSoundProgram2::vfunc_08(s32 id, void *arg) {
    switch (id) {
    case 1:
        if (!nz(b)) startSe(0x4f2, &b);
        d13++;
        if (d13 == 3) d13 = 0;
        switch (d13) {
        case 0:
            startSe(0x4f6, &a);
            break;
        case 1:
            NNS_SndArcPlayerStartSeq(&a, 247);
            break;
        case 2:
            NNS_SndPlayerMoveVolume(&a, 40, 15);
            break;
        }
        break;
    case 40:
        func_02109fd0(&a, 1, 1);
        break;
    case 50:
        func_02109fd0(&a, 0, 2);
        break;
    case 150:
        startSe(0x4f3, &b);
        func_02109fd0(&a, 0, 0);
        break;
    case 200:
        startSe(0x4f4, &b);
        func_02109fd0(&a, 1, 2);
        break;
    case 300:
        func_02109fd0(&a, 0, 3);
        break;
    case 375:
        startSe(0x4f5, &b);
        break;
    case 385:
        if (d13 == 2) NNS_SndPlayerStopSeq(&a, 15);
        break;
    }
    switch (d13) {
    case 0:
        func_0210a148(&a, 0xfff, 127);
        func_0210a148(&b, 0xfff, 127);
        break;
    case 1:
        func_0210a148(&a, 0xfff, 100);
        func_0210a148(&b, 0xfff, 0);
        break;
    case 2:
        func_0210a148(&b, 0xfff, 100);
        break;
    }
    updatePosition(arg);
}

void TvSoundProgram3::startSounds() {
    NNS_SndArcPlayerStartSeq(&a, 0xac);
    d13 = 0;
}

void TvSoundProgram3::vfunc_08(s32 id, void *arg) {
    switch (id) {
    case 1:
        if (d13 == 0) startSe(0x4f7, &b);
        break;
    case 120:
        if (d13 == 1) startSe(0x4f8, &b);
        break;
    case 190:
        if (d13 == 0) startSe(0x4f9, &b);
        break;
    case 210:
        if (d13 == 1) startSe(0x4fb, &b);
        break;
    case 300:
        if (d13 == 0) startSe(0x4fa, &b);
        break;
    case 349:
        d13++;
        if (d13 == 2) d13 = 0;
        break;
    }
    updatePosition(arg);
}

void TvSoundProgram5::startSounds() {
    d13 = 0;
}

void TvSoundProgram5::vfunc_08(s32 id, void *arg) {
    switch (id) {
    case 1:
        if (d13 == 0) startSe(0x4fc, &a);
        else startSe(0x4fd, &a);
        if (!nz(b)) startSe(0x500, &b);
        break;
    case 70:
        func_02109fd0(&b, 1, 1);
        break;
    case 210:
        func_02109fd0(&b, 2, 1);
        break;
    case 220:
        func_02109fd0(&b, 1, 0);
        break;
    case 230:
        if (d13 == 0) startSe(0x4fe, &a);
        else startSe(0x4ff, &a);
        break;
    case 253:
        if (d13 == 1) func_02109fd0(&b, 2, 2);
        break;
    case 258:
        if (d13 == 0) func_02109fd0(&b, 2, 2);
        break;
    case 280:
        func_02109fd0(&b, 1, 1);
        break;
    case 370:
        func_02109fd0(&b, 1, 0);
        func_02109fd0(&b, 2, 1);
        break;
    case 383:
        if (d13 == 1) func_02109fd0(&a, 0, 2);
        break;
    case 390:
        if (d13 == 0) func_02109fd0(&a, 0, 2);
        break;
    case 405:
        if (d13 == 1) func_02109fd0(&b, 2, 3);
        break;
    case 425:
        if (d13 == 0) func_02109fd0(&b, 2, 3);
        break;
    case 479:
        d13++;
        if (d13 == 2) d13 = 0;
        break;
    }
    updatePosition(arg);
}

void TvSoundProgram9::startSounds() {
    startSe(0x501, &a);
    startSe(0x502, &b);
}

void TvSoundProgram9::vfunc_08(s32 id, void *arg) {
    switch (id) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        if (!nz(a)) startSe(0x501, &a);
        if (!nz(b)) startSe(0x502, &b);
        func_02109fd0(&a, 0, 1);
        func_02109fd0(&b, 0, 1);
        break;
    case 90:
        func_02109fd0(&a, 0, 2);
        func_02109fd0(&b, 0, 2);
        break;
    case 140:
        func_02109fd0(&a, 0, 3);
        break;
    case 225:
        func_02109fd0(&a, 0, 4);
        break;
    case 235:
        func_02109fd0(&a, 0, 5);
        break;
    case 245:
        func_02109fd0(&b, 0, 3);
        break;
    }
    updatePosition(arg);
}

void TvSoundWeather::startSounds() {
    c13 = 0;
    c14 = SndMgr_Rand(gSndMgr, 3);
    c15 = 0;
    NNS_SndArcPlayerStartSeq(&a, (u16)(c14 + 0xad));
}

void TvSoundWeather::pickNextLoop() {
    u8 v;
    do {
        v = SndMgr_Rand(gSndMgr, 3);
    } while (v == c14);
    c14 = v;
    NNS_SndArcPlayerStartSeq(&a, (u16)(c14 + 0xad));
}

void TvSoundWeather::vfunc_08(s32 id, void *arg) {
    switch (id) {
    case 10:
        switch (c15) {
        case 0:
            startSe(0x503, &b);
            break;
        case 1:
            startSe(0x505, &b);
            break;
        }
        break;
    case 130:
        if (c15 == 0) startSe(0x504, &b);
        break;
    case 150:
        if (c15 == 1) startSe(0x506, &b);
        break;
    case 399:
        c13++;
        if (c13 == 7) {
            c13 = 0;
            pickNextLoop();
        }
        c15++;
        if (c15 == 3) c15 = 0;
        break;
    }
    updatePosition(arg);
}

void TvSound::startSounds() {
}
