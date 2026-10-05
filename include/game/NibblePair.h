#ifndef GAME_NIBBLEPAIR_H
#define GAME_NIBBLEPAIR_H

#include "types.h"

// Byte holding two 4-bit values (low and high nibble): room furniture positions (RoomFtrState), building occupancy,
// PlayerData face/hair, talk-window slot status/order, room object sync records.
struct NibblePair {
    u8 lo : 4;
    u8 hi : 4;
};

#endif
