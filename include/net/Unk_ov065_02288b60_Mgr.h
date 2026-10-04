#ifndef NET_UNK_OV065_02288B60_MGR_H
#define NET_UNK_OV065_02288B60_MGR_H

#include "types.h"

// GameSpy server-list connection manager, its server entries/list, sockaddr view, small buffers and callback type
// (ov065_066 0x022884fc..0x02288df0); used by unk_ov065_02288510.cpp and unk_ov065_02288c78.cpp.

struct Unk_ov065_02288b60_Sa {
    /* 0x00 */ u8 len;
    /* 0x01 */ u8 family;
    /* 0x02 */ u16 port;
    /* 0x04 */ u32 addr;
};

struct Unk_ov065_02288b60_Ent {
    /* 0x00 */ u32 addr;
    /* 0x04 */ u16 port;
    /* 0x06 */ u16 pad_06;
    /* 0x08 */ u32 addr2;
    /* 0x0c */ u16 port2;
    /* 0x0e */ u16 pad_0e;
    /* 0x10 */ s32 altAddr;
    /* 0x14 */ u8 stateFlags;
    /* 0x15 */ u8 listFlags;
    /* 0x16 */ u16 pad_16;
    /* 0x18 */ void *keyValues;
    /* 0x1c */ u32 ping;
    /* 0x20 */ Unk_ov065_02288b60_Ent *next;
};

struct Unk_ov065_02288c78_List {
    /* 0x00 */ Unk_ov065_02288b60_Ent *head;
    /* 0x04 */ Unk_ov065_02288b60_Ent *tail;
    /* 0x08 */ s32 count;
};

struct Unk_ov065_02288b60_Mgr;
typedef void (*Unk_ov065_02288b60_Cb)(Unk_ov065_02288b60_Mgr *m, s32 code, void *arg, void *user);

struct Unk_ov065_02288b60_Mgr {
    /* 0x00 */ s32 mode;
    /* 0x04 */ s32 max;
    /* 0x08 */ Unk_ov065_02288c78_List active;
    /* 0x14 */ Unk_ov065_02288c78_List pending;
    /* 0x20 */ s32 sock;
    /* 0x24 */ s32 sock2;
    /* 0x28 */ u32 publicIp;
    /* 0x2c */ u8 key[0x14];
    /* 0x40 */ s32 keycount;
    /* 0x44 */ Unk_ov065_02288b60_Cb cb;
    /* 0x48 */ void *user;
};

struct Unk_ov065_02288b60_Buf13 {
    /* 0x00 */ u8 b[13];
};

struct Unk_ov065_02288b60_Buf8 {
    /* 0x00 */ u8 b[8];
};

#endif
