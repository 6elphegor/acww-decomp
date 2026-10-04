#ifndef NET_UNK_020720F8_DATA_H
#define NET_UNK_020720F8_DATA_H

#include "types.h"

// Comm id blobs and a small value/flag record (src/main/unk_020720f8.cpp, unk_02070560.cpp).

struct Unk_02071b10_Id16 {
    u8 b[16];
};

struct Unk_02071fa4_Id8 {
    u8 b[8];
};

struct Unk_020720f8_Data {
    u32 v;
    u8 f;
};

#endif // NET_UNK_020720F8_DATA_H
