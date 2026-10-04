// Data-only file 4 of 8 of the block of cross-linked sprite tables at main .data 0x020d2024-0x020d5d44 (OBJ attribute
// arrays, and records {data, count, ...} that point to them); this file: .data 0x020d477c-0x020d4824, 7 objects.
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
extern DataRef12 data_020d20a4[1];
extern DataRef12 data_020d221c[2];
extern DataRef12 data_020d3540[5];
extern DataRef12 data_020d357c[5];
extern DataRef12 data_020d35f4[5];
extern DataRef12 data_020d3900[5];
extern DataRef12 data_020d3978[5];
extern DataRef12 data_020d3af4[6];
extern DataRef12 data_020d3b84[6];
extern DataRef12 data_020d3bcc[6];
extern DataRef12 data_020d3c5c[6];
extern DataRef12 data_020d3ca4[6];
extern DataRef12 data_020d41cc[20];

// creation order (declarations, then definitions in the same order) gives the original layout after mwcc's size sort
extern DataRef8 data_020d47a4[8];
extern u16 sDefaultToonTable[32];
extern DataRef8 data_020d4794[1];
extern DataRef8 data_020d478c[1];
extern DataRef8 data_020d479c[1];
extern DataRef8 data_020d477c[1];
extern DataRef8 data_020d4784[1];

DataRef8 data_020d47a4[8] = {
    {data_020d221c, 2}, {data_020d3ca4, 6}, {data_020d357c, 5}, {data_020d41cc, 20},
    {data_020d3bcc, 6}, {data_020d3978, 5}, {data_020d3af4, 6}, {data_020d3900, 5},
};

u16 sDefaultToonTable[32] = {
    0x3dcd, 0x3dcd, 0x39ac, 0x39ac, 0x356a, 0x356a, 0x314a, 0x314a,
    0x314a, 0x314a, 0x318b, 0x318b, 0x3a11, 0x3a11, 0x46b8, 0x46b8,
    0x535d, 0x535d, 0x77ff, 0x77ff, 0x7bff, 0x7bff, 0x7fff, 0x7fff,
    0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff,
};

DataRef8 data_020d4794[1] = {
    {data_020d3b84, 6},
};

DataRef8 data_020d478c[1] = {
    {data_020d20a4, 1},
};

DataRef8 data_020d479c[1] = {
    {data_020d3c5c, 6},
};

DataRef8 data_020d477c[1] = {
    {data_020d3540, 5},
};

DataRef8 data_020d4784[1] = {
    {data_020d35f4, 5},
};
