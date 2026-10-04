#ifndef NET_QR2_H
#define NET_QR2_H

#include "types.h"

// GameSpy qr2 (query and reporting 2; heartbeats to %s.master.gs.nintendowifi.net port 27900): struct
// qr2_implementation_s (qr2_init_socketA, the default instance static_qr2_rec), its packet and key buffers and the
// callback types; used by unk_ov065_02286934.cpp and unk_ov065_02287390.cpp.

struct qr2_buffer_s {
    /* 0x00 */ u8 buffer[0x800];
    /* 0x800 */ s32 len;
};

struct qr2_keybuffer_s {
    /* 0x00 */ u8 keys[0x100];
    /* 0x100 */ s32 numkeys;
};

struct Unk_ov065_02287fcc_Sa {
    /* 0x00 */ u8 len;
    /* 0x01 */ u8 family;
    /* 0x02 */ u16 port;
    /* 0x04 */ u32 addr;
};

// Section 0 (server) key value: (key, buffer, userData).
typedef void (*qr2_serverkeycallback_t)(u32, qr2_buffer_s *, void *);
// Section 1/2 (player/team) key value: (key, index, buffer, userData).
typedef void (*qr2_playerteamkeycallback_t)(u32, s32, qr2_buffer_s *, void *);
// Fills the key list of a section: (section, keys, userData).
typedef void (*qr2_keylistcallback_t)(s32, qr2_keybuffer_s *, void *);
// Row count of section 1/2: (section, userData).
typedef s32 (*qr2_countcallback_t)(s32, void *);
// Master server error: (code, message, userData).
typedef void (*qr2_adderrorcallback_t)(s32, const char *, void *);
// Public address seen by the master: (ip, port, userData).
typedef void (*qr2_publicaddresscallback_t)(u32, u32, void *);
// NAT negotiation request from a client message: (cookie, userData).
typedef s32 (*qr2_natnegcallback_t)(u32, void *);
// Other client messages: (data, len, userData).
typedef s32 (*qr2_clientmessagecallback_t)(u8 *, s32, void *);

struct qr2_implementation_s {
    /* 0x00 */ s32 hbsock;
    /* 0x04 */ char gamename[0x40];
    /* 0x44 */ char secret_key[0x40];
    /* 0x84 */ u8 instance_key[4];
    /* 0x88 */ qr2_serverkeycallback_t server_key_callback;
    /* 0x8c */ qr2_playerteamkeycallback_t player_key_callback;
    /* 0x90 */ qr2_playerteamkeycallback_t team_key_callback;
    /* 0x94 */ qr2_keylistcallback_t key_list_callback;
    /* 0x98 */ qr2_countcallback_t playerteam_count_callback;
    /* 0x9c */ qr2_adderrorcallback_t adderror_callback;
    /* 0xa0 */ qr2_natnegcallback_t nn_callback;
    /* 0xa4 */ qr2_clientmessagecallback_t cm_callback;
    /* 0xa8 */ qr2_publicaddresscallback_t pa_callback;
    /* 0xac */ u32 lastheartbeat;
    /* 0xb0 */ u32 lastka;
    /* 0xb4 */ s32 userstatechangerequested;
    /* 0xb8 */ s32 listed_state;
    /* 0xbc */ s32 ispublic;
    /* 0xc0 */ s32 qport;
    /* 0xc4 */ s32 read_socket;
    /* 0xc8 */ s32 nat_negotiate;
    /* 0xcc */ Unk_ov065_02287fcc_Sa hbaddr;
    /* 0xd4 */ s32 cdkeyprocess;
    /* 0xd8 */ s32 client_message_keys[10];
    /* 0x100 */ s32 cur_message_key;
    /* 0x104 */ u32 publicip;
    /* 0x108 */ u16 publicport;
    /* 0x10c */ void *udata;
};

#endif
