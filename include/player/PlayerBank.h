#ifndef PLAYER_PLAYERBANK_H
#define PLAYER_PLAYERBANK_H

#include "types.h"

// A player's bank account (PlayerData::getBankAccount): the balance and the donation level. The PlayerBank_*
// functions are in src/main/unk_02097110.cpp.
struct PlayerBank {
    u32 balance;
    u8 donationLevel;
};

#endif
