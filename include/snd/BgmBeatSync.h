#ifndef SND_BGMBEATSYNC_H
#define SND_BGMBEATSYNC_H

#include "types.h"
#include "snd/BgmBeatPhase.h"

// The BGM tempo follower and the BGM-synchronised animation object (members of the scene sound setups SndScene10 /
// SndScene41). Defined in autoload_2, src/autoload_2/unk_020f7a5c.cpp (which still keeps its own copy of these
// classes: switch it to this header).

// base: BGM tempo follower (vtable 0x0213bb88), 0x14 bytes
class BgmTempoTracker {
public:
    BgmTempoTracker();
    ~BgmTempoTracker();
    virtual void update(); // per-frame refresh

    void syncTempo();
    void setMode(u8 v);

    /* 0x04 */ s32 w4;
    /* 0x08 */ u8 c8;
    /* 0x09 */ s8 c9;
    /* 0x0a */ s8 c10;
    /* 0x0b */ s8 c11;
    /* 0x0c */ s8 c12;
    /* 0x0e */ s16 h14;
    /* 0x10 */ s8 c16;
    /* 0x12 */ u16 h18;
};

// BGM-synchronised animation object (vtable 0x0213bb7c), 0x30 bytes; gSndMgr.cur points to the live one
class BgmBeatSync : public BgmTempoTracker {
public:
    BgmBeatSync();
    ~BgmBeatSync();
    virtual void update(); // update

    void setEnable(u8 v);
    void pickAnim();
    void readTempo();
    void calcPhase();

    /* 0x14 */ BgmBeatPhase sub;
    /* 0x28 */ u8 c28;
    /* 0x29 */ u8 c29;
    /* 0x2a */ u8 c2a;
    /* 0x2c */ s16 s2c;
    /* 0x2e */ u8 c2e;
};

#endif
