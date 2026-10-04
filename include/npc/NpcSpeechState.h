#ifndef NPC_NPCSPEECHSTATE_H
#define NPC_NPCSPEECHSTATE_H

#include "types.h"

// 8-byte NPC speech state (speaking flag, mouth type). Defined in main, unk_020119cc.cpp (the unk_02019998.cpp part;
// C1 0x0201a194, D1 0x0201a190); a by-value member of every NPC actor.
struct NpcSpeechState {
    /* 0x0 */ u8 speaking;
    /* 0x4 */ s32 mouthType;

    NpcSpeechState();
    ~NpcSpeechState();
    s32 getMouthType();
    void setMouthType(s32 v);
    BOOL isSpeaking();
    void stopSpeaking();
    void startSpeaking();
    void reset();
};

#endif
