#ifndef NET_UNK_OV065_02289460_OBJ_H
#define NET_UNK_OV065_02289460_OBJ_H

#include "types.h"

// GameSpy server-browser views: key/value parsing, hash table records, server list connection object
// (src/ov065/unk_ov065_02288c78.cpp, src/ov065/unk_ov065_02289444.cpp; 0x02288e2c..0x02289720).

struct Unk_ov065_02289258_Pad {
    /* 0x00 */ s32 v[1];
    Unk_ov065_02289258_Pad() {}
    ~Unk_ov065_02289258_Pad() {}
};

struct Unk_ov065_0228909c_P {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
};

struct Unk_ov065_02289044_Hdr {
    /* 0x00 */ u8 pad_00[4];
    /* 0x04 */ u16 port;
    /* 0x06 */ u8 pad_06[6];
    /* 0x0c */ u16 port2;
    /* 0x0e */ u8 pad_0e[7];
    /* 0x15 */ u8 listFlags;
};

struct Unk_ov065_02289174_Ctx {
    /* 0x00 */ u8 pad_00[0x18];
    /* 0x18 */ void *keyValues;
};

struct Unk_ov065_0228911c_Ent {
    /* 0x00 */ s32 key;
    /* 0x04 */ s32 value;
};

struct Unk_ov065_02289174_KV {
    /* 0x00 */ s32 key;
    /* 0x04 */ s32 value;
};

struct Unk_ov065_0228903c_Obj {
    /* 0x00 */ u8 pad_00[0x20];
    /* 0x20 */ s32 next;
};

struct Unk_ov065_02289578_Pkt {
    /* 0x00 */ u32 addr;
    /* 0x04 */ u16 port;
    /* 0x06 */ u8 pad_06[8];
    /* 0x0e */ u8 unk_0e[6];
    /* 0x14 */ u8 stateFlags;
    /* 0x15 */ u8 listFlags;
};

struct Unk_ov065_02289720_Sub {
    /* 0x000 */ s32 state;
    /* 0x004 */ u8 pad_04[0x484];
    /* 0x488 */ void (*unk_488)(Unk_ov065_02289720_Sub *, s32, s32, void *);
    /* 0x48c */ u8 pad_48c[8];
    /* 0x494 */ void *callbackParam;
    /* 0x498 */ u8 pad_498[0x18];
    /* 0x4b0 */ s32 socket;
    /* 0x4b4 */ u32 lanStartTime;
};

struct Unk_ov065_02289460_Obj {
    /* 0x000 */ u8 pad_00[0x10];
    /* 0x010 */ s32 numActiveQueries;
    /* 0x014 */ u8 pad_14[0x2c];
    /* 0x040 */ s32 numQueryKeys;
    /* 0x044 */ u8 pad_44[8];
    /* 0x04c */ s32 serverList;
    /* 0x050 */ u8 pad_50[0x49c];
    /* 0x4ec */ s32 myPublicIp;
    /* 0x4f0 */ u8 pad_4f0[0x130];
    /* 0x620 */ s32 disconnectOnComplete;
    /* 0x624 */ s32 noAutoQuery;
    /* 0x628 */ u32 waitServerIp;
    /* 0x62c */ u16 waitServerPort;
    /* 0x62e */ u8 pad_62e[2];
    /* 0x630 */ void (*unk_630)(Unk_ov065_02289460_Obj *, s32, void *, void *);
    /* 0x634 */ void *userData;
};

struct Unk_ov065_02289578_Sub {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ void *servers;
};

#endif
