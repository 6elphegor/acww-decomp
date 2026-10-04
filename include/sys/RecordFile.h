#ifndef SYS_RECORDFILE_H
#define SYS_RECORDFILE_H

#include "types.h"
#include "sys/Unk_0206d8b8_Pair.h"

// 0x1c-byte cached record table read from a file (fixed-size records, all at once or in pages of 8).
// Defined in main, unk_0206d5b8.cpp (0x0206d828..0x0206d974).
class RecordFile {
public:
    RecordFile();
    ~RecordFile();
    void loadPage(u32 idx);
    u8 *getRecord(u32 idx);
    void close();
    void freeAll();
    void loadAll();
    BOOL open(void *path, s32 size, s32 count);

    /* 0x00 */ Unk_0206d8b8_Pair fileId;
    /* 0x08 */ s32 recordSize;
    /* 0x0c */ s32 recordCount;
    /* 0x10 */ u8 *data;
    /* 0x14 */ s32 pageIndex;
    /* 0x18 */ u8 *pageBuf;
};

#endif
