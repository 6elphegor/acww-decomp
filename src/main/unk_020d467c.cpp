// Data-only file 2 of 8 of the block of cross-linked sprite tables at main .data 0x020d2024-0x020d5d44 (OBJ attribute
// arrays, and records {data, count, ...} that point to them); this file: .data 0x020d467c-0x020d468c, 1 objects.
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
extern DataRef12 data_020d20b0[1];
extern DataRef12 data_020d2e04[4];

// creation order (declarations, then definitions in the same order) gives the original layout after mwcc's size sort
extern DataRef8 data_020d467c[2];

DataRef8 data_020d467c[2] = {
    {data_020d20b0, 1}, {data_020d2e04, 4},
};

#ifdef MODERN
// The game indexes one table of 45 sequence records that starts here and ends at 0x020d47e4 (HUD clock and countdown,
// camera grid, chat balloons: data_020d467c + i * 8). In the original these are the arrays below, contiguous over three
// files; the modern build doesn't keep them together or in this order, so the indexed users go through this table.
extern DataRef8 data_020d468c[1];
extern DataRef8 data_020d4694[29];
extern DataRef8 data_020d477c[1];
extern DataRef8 data_020d4784[1];
extern DataRef8 data_020d478c[1];
extern DataRef8 data_020d4794[1];
extern DataRef8 data_020d479c[1];
extern DataRef8 data_020d47a4[8];

extern void *const gSpriteSeqTable[45];
void *const gSpriteSeqTable[45] = {
    &data_020d467c[0], &data_020d467c[1], &data_020d468c[0],
    &data_020d4694[0], &data_020d4694[1], &data_020d4694[2], &data_020d4694[3], &data_020d4694[4],
    &data_020d4694[5], &data_020d4694[6], &data_020d4694[7], &data_020d4694[8], &data_020d4694[9],
    &data_020d4694[10], &data_020d4694[11], &data_020d4694[12], &data_020d4694[13], &data_020d4694[14],
    &data_020d4694[15], &data_020d4694[16], &data_020d4694[17], &data_020d4694[18], &data_020d4694[19],
    &data_020d4694[20], &data_020d4694[21], &data_020d4694[22], &data_020d4694[23], &data_020d4694[24],
    &data_020d4694[25], &data_020d4694[26], &data_020d4694[27], &data_020d4694[28],
    &data_020d477c[0], &data_020d4784[0], &data_020d478c[0], &data_020d4794[0], &data_020d479c[0],
    &data_020d47a4[0], &data_020d47a4[1], &data_020d47a4[2], &data_020d47a4[3], &data_020d47a4[4],
    &data_020d47a4[5], &data_020d47a4[6], &data_020d47a4[7],
};
#endif
