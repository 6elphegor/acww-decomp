#ifndef NET_FRIENDENTRY_H
#define NET_FRIENDENTRY_H

#include "types.h"

// One entry of a player's Wi-Fi friend list (0x1c bytes: DWC friend data, player name, town name; FriendEntry_* /
// FriendList_* in src/main/unk_020742f4.cpp). PlayerData::friendList holds 0x20 of them.
struct FriendEntry {
    /* 0x00 */ u8 friendData[0xc];  // DwcFriendData
    /* 0x0c */ u8 playerName[8];
    /* 0x14 */ u8 townName[8];
};

// A player's friend list (PlayerData::friendList): the entries and their checksum.
struct FriendList {
    /* 0x000 */ FriendEntry entries[0x20];
    /* 0x380 */ u16 checksum;
};

// A player's Wi-Fi user data (PlayerData::wifiUserData, 0x50 bytes): the DWC user data, the player's own friend
// data and their checksum (PlayerWifiData_* in src/main/unk_020742f4.cpp).
struct PlayerWifiData {
    /* 0x00 */ u8 userData[0x40];
    /* 0x40 */ u8 ownFriendData[0xc];  // DwcFriendData
    /* 0x4c */ u16 checksum;
};

#endif
