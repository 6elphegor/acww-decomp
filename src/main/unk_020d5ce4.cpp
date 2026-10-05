// Data-only file 6 of 8 of the block of cross-linked sprite tables at main .data 0x020d2024-0x020d5d44 (OBJ attribute
// arrays, and records {data, count, ...} that point to them); this file: .data 0x020d5ce4-0x020d5d0c, 2 objects.
// The block lies between the data of the crash-screen file (0x02000c2c) and of the file at 0x020029e8, and has no code
// of its own; game code uses it by the symbols.txt names. mwcc sorts a file's .data by size, so every run of ascending
// sizes in the block is at least one file (each drop in size starts a new file); the other files use neutral types (u16 words, DataRef12 / DataRef8
// records). This file's records are SpriteAnimSeq over SpriteAnimFrame tables (gfx/SpriteAnim.h: cell, duration, s16 x/y
// offset; data_020d5cec is set as a SpriteAnimSeq table in unk_02089508.cpp, and the DataRef12 offset words decode as x/y).
#include "types.h"
#include "gfx/SpriteAnim.h"

// objects of the other files of the block
extern SpriteAnimFrame data_020d5644[14];
extern SpriteAnimFrame data_020d56ec[14];
extern SpriteAnimFrame data_020d5794[14];
extern SpriteAnimFrame data_020d583c[20];
extern SpriteAnimFrame data_020d592c[20];

// creation order (declarations, then definitions in the same order) gives the original layout after mwcc's size sort
extern SpriteAnimSeq data_020d5cec[4];
extern SpriteAnimSeq data_020d5ce4[1];

SpriteAnimSeq data_020d5cec[4] = {
    {data_020d592c, 20}, {data_020d5644, 14}, {data_020d56ec, 14}, {data_020d5794, 14},
};

SpriteAnimSeq data_020d5ce4[1] = {
    {data_020d583c, 20},
};
