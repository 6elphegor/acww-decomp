// Data-only file 8 of 8 of the block of cross-linked sprite tables at main .data 0x020d2024-0x020d5d44 (OBJ attribute
// arrays, and records {data, count, ...} that point to them); this file: .data 0x020d5d34-0x020d5d44, 1 objects.
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
extern DataRef12 data_020d491c[1];
extern DataRef12 data_020d494c[1];

// creation order (declarations, then definitions in the same order) gives the original layout after mwcc's size sort
extern DataRef8 data_020d5d34[2];

DataRef8 data_020d5d34[2] = {
    {data_020d491c, 1}, {data_020d494c, 1},
};
