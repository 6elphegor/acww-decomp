#ifndef SAVE_TOWNCOMPRESS_H
#define SAVE_TOWNCOMPRESS_H

#include "types.h"
#include "sys/OSThread.h"

// The town data's compression for the transfer to a visiting game: a thread (SaveManager::townCompressThread, 0x10cc
// bytes on the DS) that compresses or decompresses the buffer SaveManager::townCompressBuf (0x15fe4 bytes). Methods in
// src/main/unk_0209eb94.cpp (unk_0209ecf8.cpp part).

class TownCompressThread {
public:
    /* 0x0000 */ OSThread thread;  // (larger on 64-bit hosts)
    /* 0x00c0 */ u32 stackGuardLow;
    /* 0x00c4 */ u8 stack[0x1000];  // the thread's stack (it starts at stackGuardHigh and grows down)
    /* 0x10c4 */ u32 stackGuardHigh;
    /* 0x10c8 */ u8 done;

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
