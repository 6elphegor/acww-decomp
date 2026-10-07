#ifndef SAVE_TOWNCOMPRESS_H
#define SAVE_TOWNCOMPRESS_H

#include "types.h"

// The town data's compression for the transfer to a visiting game: a thread (SaveManager::townCompressThread, 0x10cc
// bytes) that compresses or decompresses the buffer SaveManager::townCompressBuf (0x15fe4 bytes). Methods in
// src/main/unk_0209eb94.cpp (unk_0209ecf8.cpp part).

class TownCompressThread {
public:
    u8 thread[0x64];
    s32 threadState;
    u8 pad_68[0xc0 - 0x68];
    u32 stackGuardLow;
    u8 pad_c4[0x10c4 - 0xc4];
    u32 stackGuardHigh;
    u8 done;

    u8 isDone();
    void start(u32 a);
    void kill();
    void init();
};

class TownCompressBuffer {
public:
    u32 size;
    u8 data[4];
    u8 dataBody[4];

    u32 getSize();
    void decompress();
    void compress();
};

#endif
