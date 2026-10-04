#ifndef PLAYER_PLAYERNETACTIONARGS_H
#define PLAYER_PLAYERNETACTIONARGS_H

#include "types.h"

// Player action arguments as sent over the network (PlayerActor::netData at 0x8ec, 8 bytes: bytes 4..11 of the
// slot's net state var). Each action's net*/setup* handlers read/write their arguments here; the methods are defined
// in src/main/unk_02004558.cpp. Per-action layouts still read through views: PlayerNetPickUpArgs (action 0x19),
// Unk_0200b750 (emotion / pick-up reach), Unk_0200a63c_St, Unk_02009f68_Bytes.

class PlayerNetActionArgs {
public:
    void readU16(u16 *out);
    void writeU16(u16 v);
    void readS16(s16 *out);
    void writeS16(s16 v);
    void readAct76Net(u8 *a, u8 *b, u8 *c);
    void writeAct76Net(u8 a, u8 b, u8 c);
    /* 0x00 */ u8 bytes[8];
};

#endif
