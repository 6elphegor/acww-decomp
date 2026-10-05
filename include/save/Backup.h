#ifndef SAVE_BACKUP_H
#define SAVE_BACKUP_H

#include "types.h"

// Card backup (save memory) access state, one global instance gBackup (defined in src/main/unk_0204f2a4.cpp;
// Backup_Init in src/main/unk_02050170.cpp, the async access helpers in src/main/unk_0204fe7c.cpp).
struct Backup {
    /* 0x00 */ u32 totalSize;
    /* 0x04 */ s32 lockId;
    /* 0x08 */ u8 unk_08;
    Backup() {
        totalSize = 0;
        lockId = -3;
    }
};

#endif // SAVE_BACKUP_H
