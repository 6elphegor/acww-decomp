#ifndef NET_NET_H
#define NET_NET_H

#include "types.h"
#include "net/DwcUserData.h"

// The game's network layer (Net_*: local wireless, WFC, the ov067 exchange; src/autoload_2/unk_020e9a08.cpp): its
// callback types and the WFC records the game hands to Net_StartWifi.

typedef void (*NetSendDoneFn)(u32 size);               // a queued send is done
typedef void (*NetRecvFn)(u32 aid, u8 *data, u32 size); // data received from aid
typedef void (*NetFriendFn)(u32 index);                // a friend was deleted
typedef void *(*NetAllocFn)(u32 size, u32 align);
typedef void (*NetFreeFn)(void *p);

// the player's WFC record (0x50 bytes): the friend status data (name and town), then the DWC user data
typedef struct NetWifiUserData {
    /* 0x00 */ char playerName[8];
    /* 0x08 */ char townName[8];
    /* 0x10 */ DwcUserData userData;
    /* 0x38 */ u8 pad38[0x50 - 0x10 - sizeof(DwcUserData)];
} NetWifiUserData;

// the friend list (0x3e0 bytes): 32 friend data records, then each friend's status record
typedef struct NetWifiFriendData {
    u8 data[12];
} NetWifiFriendData;
typedef struct NetWifiFriendStatus {
    char statusString[16];
    u8 status;
    u8 b;
    u8 c;
} NetWifiFriendStatus;
typedef struct NetWifiFriends {
    /* 0x000 */ NetWifiFriendData friends[32];
    /* 0x180 */ NetWifiFriendStatus status[32];
} NetWifiFriends;

#endif
