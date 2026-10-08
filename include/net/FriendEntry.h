#ifndef NET_FRIENDENTRY_H
#define NET_FRIENDENTRY_H

#include "types.h"

// One entry of a player's Wi-Fi friend list (0x1c bytes: DWC friend data, player name, town name; FriendEntry_* /
// FriendList_* in src/main/unk_020742f4.cpp). PlayerData::friendList holds 0x20 of them.
struct FriendEntry {
    u8 b[0x1c];
};

#endif
