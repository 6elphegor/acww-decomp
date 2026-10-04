#ifndef SYS_UNK_02063D18_FILE_H
#define SYS_UNK_02063D18_FILE_H

#include "types.h"

// File handle (File_Open/File_ReadRange; src/main/unk_02063904.cpp, unk_02063f3c.cpp).

struct Unk_02063d18_File {
    /* 0x00 */ u8 unk_00[0x14];
    /* 0x14 */ s32 error;
    /* 0x18 */ u8 unk_18[8];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 start;
    /* 0x28 */ s32 end;
    /* 0x2c */ s32 pos;
    /* 0x30 */ u8 unk_30[0x18];
};

#endif
