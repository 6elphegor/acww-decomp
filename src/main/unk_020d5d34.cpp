// Data-only file 8 of 8 of the block of cross-linked sprite tables at main .data 0x020d2024-0x020d5d44 (OBJ attribute
// arrays, and records {data, count, ...} that point to them); this file: .data 0x020d5d34-0x020d5d44, 1 objects.
// The block lies between the data of the crash-screen file (0x02000c2c) and of the file at 0x020029e8, and has no code
// of its own; game code uses it by the symbols.txt names. mwcc sorts a file's .data by size, so every run of ascending
// sizes in the block is at least one file (each drop in size starts a new file); the other files use neutral types (u16 words, DataRef12 / DataRef8
// records). This file's records are SpriteAnimSeq over SpriteAnimFrame tables (gfx/SpriteAnim.h: cell, duration, s16 x/y
// offset; data_020d5cec is set as a SpriteAnimSeq table in unk_02089508.cpp, and the DataRef12 offset words decode as x/y).
#include "types.h"
#include "gfx/SpriteAnim.h"

// objects of the other files of the block
extern SpriteAnimFrame data_020d491c[1];
extern SpriteAnimFrame data_020d494c[1];

// creation order (declarations, then definitions in the same order) gives the original layout after mwcc's size sort
extern SpriteAnimSeq data_020d5d34[2];

SpriteAnimSeq data_020d5d34[2] = {
    {data_020d491c, 1}, {data_020d494c, 1},
};

#ifdef MODERN
// The game indexes one table of 71 sequence records that starts at data_020d5b0c (0x020d5b0c + i * 8: the HUD
// buttons, the talk arrow, the input mode icon, ...). In the original these are the arrays below, contiguous over
// four files; the modern build doesn't keep them together, so the indexed users go through this table (like
// gSpriteSeqTable for the block at 0x020d467c).
extern SpriteAnimSeq data_020d5b0c[59];
extern SpriteAnimSeq data_020d5ce4[1];
extern SpriteAnimSeq data_020d5cec[4];
extern SpriteAnimSeq data_020d5d0c[1];
extern SpriteAnimSeq data_020d5d14[4];
extern void *const gSpriteSeqTable5b0c[71];
void *const gSpriteSeqTable5b0c[71] = {
    &data_020d5b0c[0], &data_020d5b0c[1], &data_020d5b0c[2], &data_020d5b0c[3], &data_020d5b0c[4], &data_020d5b0c[5],
    &data_020d5b0c[6], &data_020d5b0c[7], &data_020d5b0c[8], &data_020d5b0c[9], &data_020d5b0c[10], &data_020d5b0c[11],
    &data_020d5b0c[12], &data_020d5b0c[13], &data_020d5b0c[14], &data_020d5b0c[15], &data_020d5b0c[16], &data_020d5b0c[17],
    &data_020d5b0c[18], &data_020d5b0c[19], &data_020d5b0c[20], &data_020d5b0c[21], &data_020d5b0c[22], &data_020d5b0c[23],
    &data_020d5b0c[24], &data_020d5b0c[25], &data_020d5b0c[26], &data_020d5b0c[27], &data_020d5b0c[28], &data_020d5b0c[29],
    &data_020d5b0c[30], &data_020d5b0c[31], &data_020d5b0c[32], &data_020d5b0c[33], &data_020d5b0c[34], &data_020d5b0c[35],
    &data_020d5b0c[36], &data_020d5b0c[37], &data_020d5b0c[38], &data_020d5b0c[39], &data_020d5b0c[40], &data_020d5b0c[41],
    &data_020d5b0c[42], &data_020d5b0c[43], &data_020d5b0c[44], &data_020d5b0c[45], &data_020d5b0c[46], &data_020d5b0c[47],
    &data_020d5b0c[48], &data_020d5b0c[49], &data_020d5b0c[50], &data_020d5b0c[51], &data_020d5b0c[52], &data_020d5b0c[53],
    &data_020d5b0c[54], &data_020d5b0c[55], &data_020d5b0c[56], &data_020d5b0c[57], &data_020d5b0c[58], &data_020d5ce4[0],
    &data_020d5cec[0], &data_020d5cec[1], &data_020d5cec[2], &data_020d5cec[3], &data_020d5d0c[0], &data_020d5d14[0],
    &data_020d5d14[1], &data_020d5d14[2], &data_020d5d14[3], &data_020d5d34[0], &data_020d5d34[1],
};
#endif
