#ifndef PLAYER_PLAYERACTIONREQUEST_H
#define PLAYER_PLAYERACTIONREQUEST_H

// Player action request (0x1c bytes) queued with PlayerActor::pushRequest; ctor/dtor/assign defined in
// src/main/unk_02004558.cpp (0x0200e2c0..0x0200e2e0). The payload at +0xc is read through per-action views.
#include "types.h"
#include "player/Unk_0200e2c8.h"
#include "player/Unk_0200c2fc.h"
#include "player/Unk_0200d560.h"

class PlayerActionRequest : public Unk_0200e2c8 {
public:
    PlayerActionRequest();
    ~PlayerActionRequest();
    void assign(s32 a, s32 b, s16 c);

    /* 0x00 */ s32 action;
    /* 0x04 */ s32 priority;
    /* 0x08 */ s16 netSeq;
    /* 0x0c */ union {
        Unk_0200e248_Blob unk_0c;
        u16 unk_0c_h;
        Unk_0200c2fc unk_0c_c2fc;
        u8 unk_0c_b[0x10];
        Unk_0200d5b4 unk_0c_d5b4;
    };
};

#endif // PLAYER_PLAYERACTIONREQUEST_H
