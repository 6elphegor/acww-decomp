#ifndef SND_MELODY_H
#define SND_MELODY_H

#include "types.h"

// The town-tune players (autoload_2, src/autoload_2/unk_020f4a5c.cpp: the MelodyTrack_* / MelodyPlayer_* / MelodyBeat_*
// functions; main's Snd_Melody* wrappers in src/main/unk_020039ec.cpp). Each player starts with the NNS sound handle it
// plays through (the handle functions get the object itself).

typedef struct MelodyTrack MelodyTrack;
typedef struct MelodyPlayer MelodyPlayer;
typedef struct MelodyBeat MelodyBeat;

// One sequence player stepping through a 16-note pattern; 0x14 bytes on the DS.
struct MelodyTrack {
#ifdef __cplusplus
    ~MelodyTrack(); // releases the handle's sequence
#endif

    /* 0x00 */ void *handle;  // NNSSndHandle: the sequence player
    /* 0x04 */ u8 *pat;       // the 16-note pattern
    /* 0x08 */ u16 id;        // sequence archive
    /* 0x0a */ u8 active;
    /* 0x0b */ s8 pos;        // current step
    /* 0x0c */ u8 tick;
    /* 0x0d */ u8 pad0d;
    // sequence variables 0..3 of the playing sound (-1: not read yet)
    /* 0x0e */ s8 s14;        // frames per step
    /* 0x0f */ s8 s15;        // tick of the end test
    /* 0x10 */ s8 s16;        // pattern mode (0 plain, 1 / 2 pairs, 3 table)
    /* 0x11 */ s8 s17;        // 1: a held note (15) continues
};

// The town-tune player gMelodyPlayer (src/main/unk_0206d988.cpp, which defines its destructor); gSndMgr.melody points to
// it once initialised (MelodyPlayer_Init). 0x40 bytes on the DS.
struct MelodyPlayer {
#ifdef __cplusplus
    ~MelodyPlayer();
#endif

    /* 0x00 */ MelodyTrack a;
    /* 0x14 */ MelodyTrack b;
    /* 0x28 */ u8 pat[16];
    /* 0x38 */ u8 b38;        // track A is playing
    /* 0x39 */ s8 b39;        // volume of track B's steps (-1: full)
    /* 0x3a */ s8 b3a;        // pan
    /* 0x3b */ u8 b3b;        // row of sMelodyPresetPatterns
    /* 0x3c */ u8 b3c;        // state (0 idle, 1 playing, 2 beat player, 4 positioned)
};

// The pattern player of the instrument furniture (ov004 FtrInstrument::melodyBeat); 0xc bytes on the DS.
struct MelodyBeat {
    /* 0x00 */ void *handle;  // NNSSndHandle
    /* 0x04 */ u16 id;
    /* 0x06 */ s8 step;
    /* 0x07 */ u8 tick;
    /* 0x08 */ s8 v8;         // sequence variable 4 (-1: not read yet)
    /* 0x09 */ s8 v9;         // sequence variable 3
    /* 0x0a */ u8 active;
    /* 0x0b */ u8 limit;      // frames of the current step
};

#endif // SND_MELODY_H
