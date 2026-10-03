#include "types.h"

struct Backup {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
};

extern "C" Backup gBackup;

extern "C" s32 func_0211d704(void);
extern "C" void CARD_Init(void);
extern "C" s32 OS_GetLockID(void);
extern "C" void CARD_LockBackup(u16 v);
extern "C" void CARD_IdentifyBackup(s32 v);
extern "C" s32 CARD_GetBackupTotalSize(void);
extern "C" void CARD_UnlockBackup(u16 v);
extern "C" void OS_ReleaseLockID(u16 v);

extern "C" void Backup_Init(Backup *g, s32 n, const char *name);
extern "C" void Backup_InitDefault(void);

extern const char data_020ca478[];
const char data_020ca478[] = "forest";

extern "C" void Backup_Init(Backup *g, s32 n, const char *name) {
    s32 t;
    if (func_0211d704() == 0) {
        CARD_Init();
    }
    t = OS_GetLockID();
    CARD_LockBackup((u16)t);
    CARD_IdentifyBackup(n);
    g->unk_00 = CARD_GetBackupTotalSize();
    CARD_UnlockBackup((u16)t);
    OS_ReleaseLockID((u16)t);
    g->unk_08 = 4;
}

extern "C" void Backup_InitDefault(void) {
    Backup_Init(&gBackup, 0x1202, data_020ca478);
}
