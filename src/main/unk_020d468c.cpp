// Data-only file 3 of 8 of the block of cross-linked sprite tables at main .data 0x020d2024-0x020d5d44 (OBJ attribute
// arrays, and records {data, count, ...} that point to them); this file: .data 0x020d468c-0x020d477c, 2 objects.
// The block lies between the data of the crash-screen file (0x02000c2c) and of the file at 0x020029e8, and has no code
// of its own; game code uses it by the symbols.txt names. mwcc sorts a file's .data by size, so every run of ascending
// sizes in the block is at least one file (each drop in size starts a new file); the types are neutral (u16 words, DataRef12 / DataRef8 records).
#include "types.h"

struct DataRef12 {
    const void *data;
    u32 count;
    u32 unk_8;
};
struct DataRef8 {
    const void *data;
    u32 count;
};

// objects of the other files of the block
extern DataRef12 data_020d3414[5];
extern DataRef12 data_020d3450[5];
extern DataRef12 data_020d348c[5];
extern DataRef12 data_020d34c8[5];
extern DataRef12 data_020d3504[5];
extern DataRef12 data_020d35b8[5];
extern DataRef12 data_020d3630[5];
extern DataRef12 data_020d366c[5];
extern DataRef12 data_020d36a8[5];
extern DataRef12 data_020d36e4[5];
extern DataRef12 data_020d3720[5];
extern DataRef12 data_020d375c[5];
extern DataRef12 data_020d3798[5];
extern DataRef12 data_020d37d4[5];
extern DataRef12 data_020d3810[5];
extern DataRef12 data_020d384c[5];
extern DataRef12 data_020d3888[5];
extern DataRef12 data_020d38c4[5];
extern DataRef12 data_020d393c[5];
extern DataRef12 data_020d3b3c[6];
extern DataRef12 data_020d3c14[6];
extern DataRef12 data_020d3cec[6];
extern DataRef12 data_020d3d8c[8];
extern DataRef12 data_020d3dec[8];
extern DataRef12 data_020d3e4c[8];
extern DataRef12 data_020d3eac[8];
extern DataRef12 data_020d42bc[20];
extern DataRef12 data_020d43ac[20];
extern DataRef12 data_020d449c[20];
extern DataRef12 data_020d458c[20];

// creation order (declarations, then definitions in the same order) gives the original layout after mwcc's size sort
extern DataRef8 data_020d4694[29];
extern DataRef8 data_020d468c[1];

DataRef8 data_020d4694[29] = {
    {data_020d375c, 5}, {data_020d3c14, 6}, {data_020d37d4, 5}, {data_020d3d8c, 8},
    {data_020d3dec, 8}, {data_020d3e4c, 8}, {data_020d3eac, 8}, {data_020d42bc, 20},
    {data_020d43ac, 20}, {data_020d449c, 20}, {data_020d458c, 20}, {data_020d3cec, 6},
    {data_020d3414, 5}, {data_020d3450, 5}, {data_020d34c8, 5}, {data_020d3504, 5},
    {data_020d35b8, 5}, {data_020d3630, 5}, {data_020d366c, 5}, {data_020d36a8, 5},
    {data_020d3b3c, 6}, {data_020d3720, 5}, {data_020d3798, 5}, {data_020d3810, 5},
    {data_020d384c, 5}, {data_020d3888, 5}, {data_020d38c4, 5}, {data_020d393c, 5},
    {data_020d348c, 5},
};

DataRef8 data_020d468c[1] = {
    {data_020d36e4, 5},
};
