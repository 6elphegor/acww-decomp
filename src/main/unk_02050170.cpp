#include "types.h"

struct Unk_0204fe98_Global {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
};

extern "C" Unk_0204fe98_Global data_021c4890;

extern "C" s32 func_0211d704(void);
extern "C" void CARD_Init(void);
extern "C" s32 OS_GetLockID(void);
extern "C" void CARD_LockBackup(u16 v);
extern "C" void CARD_IdentifyBackup(s32 v);
extern "C" s32 CARD_GetBackupTotalSize(void);
extern "C" void CARD_UnlockBackup(u16 v);
extern "C" void OS_ReleaseLockID(u16 v);

extern "C" void func_0205018c(Unk_0204fe98_Global *g, s32 n, const char *name);
extern "C" void func_02050170(void);

extern const char data_020ca478[];
const char data_020ca478[] = "forest";

extern "C" void func_0205018c(Unk_0204fe98_Global *g, s32 n, const char *name) {
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

extern "C" void func_02050170(void) {
    func_0205018c(&data_021c4890, 0x1202, data_020ca478);
}
