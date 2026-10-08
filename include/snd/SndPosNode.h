#ifndef SND_SNDPOSNODE_H
#define SND_SNDPOSNODE_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "sys/FndList.h"
#include "snd/SndSeqHandle.h"

class SndPosList;

// Positional sound source, linked into a SndPosList (the furniture sounds: FtrSoundEmitter). Methods in
// src/autoload_2/unk_020f30fc.cpp (which still declares these classes itself: switch it to this header); main's
// wrappers (Snd_PosNode*, src/main/unk_020039ec.cpp) call them.
class SndPosNode {
public:
    void init(SndPosList *list);      // 0x020f3e14
    void play(s32 v, VecFx32 *p);     // 0x020f3d54
    void restart();                   // 0x020f3c78
    void stop();                      // 0x020f3c2c
    BOOL isFinished();                // 0x020f3be8
    void updatePan();                 // 0x020f3b98
    void playOnce(u32 v, VecFx32 *p); // 0x020f3b08
    void setPitch(s32 v);             // 0x020f3af0
    void setBgmPan(VecFx32 *p);       // 0x020f3a6c (does not use this)
    void release();                   // 0x020f3a34

    /* 0x00 */ void *link[2];
    /* 0x08 */ SndSeqHandle h;
    /* 0x0c */ VecFx32 pos;
    /* 0x18 */ u16 id;
    /* 0x1a */ u8 b1a;
    /* 0x1b */ u8 b1b;
};

// the list of positional sources (gSndPosList points to the one in use)
class SndPosList {
public:
    SndPosList *release();            // 0x020f3a18
    void init();                      // 0x020f39f8
    void add(SndPosNode *node);       // 0x020f39a0
    void update();                    // 0x020f3800
    void remove(SndPosNode *node);    // 0x020f37b4
    void playAt(s32 v, VecFx32 *p);   // 0x020f3724

    /* 0x00 */ FndList list;
    /* 0x0c */ SndSeqHandle h;
};

#endif
