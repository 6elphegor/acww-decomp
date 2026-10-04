#ifndef NET_UNK_OV065_0227931C_OWNER_H
#define NET_UNK_OV065_0227931C_OWNER_H

#include "types.h"

// GameSpy socket helpers: sockaddr, hostent views, poll fd, and the HTTP buffer with its connection view
// (src/ov065/unk_ov065_022789fc.cpp namespace FB, src/ov065/unk_ov065_0227931c.cpp namespace Ng).

struct Unk_ov065_02278c64_Sa {
    /* 0x0 */ u8 b[8];
};

struct Unk_ov065_02278e64_A {
    /* 0x0 */ u32 hostName;
    /* 0x4 */ u32 aliases;
    /* 0x8 */ s16 addrType;
    /* 0xa */ s16 addrLength;
    /* 0xc */ u32 addrList;
};

// data_ov065_022910a8 (defined in src/ov065/unk_ov065_022789fc.cpp)
struct Unk_ov065_02278e64_B {
    /* 0x0 */ u32 *firstAddr;
    /* 0x4 */ u32 listEnd;
    /* 0x8 */ u8 pad_08[0x10];
};

struct Unk_ov065_02278f0c_Pfd {
    /* 0x0 */ s32 fd;
    /* 0x4 */ s16 events;
    /* 0x6 */ s16 revents;
};

struct Unk_ov065_0227931c_Owner {
    /* 0x000 */ u8 pad_00[0x38];
    /* 0x038 */ s32 result;
    /* 0x03c */ u8 pad_3c[0x0c];
    /* 0x048 */ s32 socketHandle;
    /* 0x04c */ s32 socketError;
    /* 0x050 */ u8 pad_50[4];
    /* 0x054 */ char *sendBufData;
    /* 0x058 */ u8 pad_58[4];
    /* 0x05c */ s32 sendBufLength;
    /* 0x060 */ s32 sendBufReadPos;
    /* 0x064 */ u8 pad_64[0x98];
    /* 0x0fc */ s32 completed;
    /* 0x100 */ u8 pad_100[0x64];
    /* 0x164 */ u32 encryptor[6];
    /* 0x17c */ s32 (*encryptFn)(Unk_ov065_0227931c_Owner *, void *, char *, s32 *, char *, s32 *);
};

struct Unk_ov065_0227931c_Buf {
    /* 0x00 */ Unk_ov065_0227931c_Owner *connection;
    /* 0x04 */ char *data;
    /* 0x08 */ s32 capacity;
    /* 0x0c */ s32 length;
    /* 0x10 */ s32 readPos;
    /* 0x14 */ s32 growBy;
    /* 0x18 */ s32 isFixed;
    /* 0x1c */ s32 keepData;
    /* 0x20 */ s32 isEncrypted;
};

#endif
