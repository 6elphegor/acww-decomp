#include "types.h"

struct Backup {
    /* 0x00 */ u32 totalSize;
    /* 0x04 */ s32 lockId;
    /* 0x08 */ u8 unk_08;
};

extern "C" Backup gBackup;

extern "C" s32 OS_GetTick(void);
extern "C" void CARD_CancelBackupAsync(void);
extern "C" s32 CARD_TryWaitBackupAsync(void);
extern "C" s32 func_0211d6f0(void);
extern "C" void CARD_UnlockBackup(u16 v);
extern "C" void OS_ReleaseLockID(u16 v);
extern "C" s32 OS_GetLockID(void);
extern "C" void CARD_LockBackup(u16 v);
extern "C" s32 CARDi_RequestStreamCommand(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);

extern "C" void FishDisplay_RecvAct02(u8 *p, u32 v);
extern "C" void FishDisplay_RecvAct01(u8 *p, u32 v);
extern "C" void FishDisplay_RecvAct00(u8 *p, u32 v);

extern "C" s32 Backup_Write(Backup *g, u32 a, u32 b, u32 c);
extern "C" s32 Backup_WriteAsync(Backup *g, u32 a, u32 b, u32 c);
extern "C" s32 Backup_Read(Backup *g, u32 a, u32 b, u32 c);
extern "C" s32 Backup_ReadAsync(Backup *g, u32 a, u32 b, u32 c);
extern "C" s32 Backup_GetStatus(Backup *g);
extern "C" void Backup_EndAccess(Backup *g);
extern "C" u16 Save_Sum16(u16 *p, u32 n);
extern "C" u16 Save_CalcChecksum(u16 *p, u32 n, u32 m);
extern "C" void Backup_CancelAndWait(void);
extern "C" void FishDisplay_OnNetPacket(u8 *p, u32 v);

extern "C" void (*sFishDisplayNetHandlers[3])(u8 *, u32);
extern "C" void (*sFishDisplayNetHandlers[3])(u8 *, u32) = {FishDisplay_RecvAct00, FishDisplay_RecvAct01, FishDisplay_RecvAct02};

extern "C" s32 Backup_Write(Backup *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (a + c > g->totalSize) {
        return r;
    }
    g->lockId = OS_GetLockID();
    if (g->lockId == -3) {
        return r;
    }
    CARD_LockBackup((u16)g->lockId);
    if (CARDi_RequestStreamCommand(b, a, c, 0, 0, 0, 7, 10, 2) != 0) {
        r = 0;
    }
    CARD_UnlockBackup((u16)g->lockId);
    OS_ReleaseLockID((u16)g->lockId);
    g->lockId = -3;
    return r;
}

extern "C" s32 Backup_WriteAsync(Backup *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (a + c > g->totalSize) {
        return r;
    }
    g->lockId = OS_GetLockID();
    if (g->lockId == -3) {
        return r;
    }
    CARD_LockBackup((u16)g->lockId);
    CARDi_RequestStreamCommand(b, a, c, 0, 0, r, 7, 10, 2);
    if (Backup_GetStatus(g) == 3) {
        r = 3;
    } else {
        Backup_EndAccess(g);
    }
    return r;
}

extern "C" s32 Backup_Read(Backup *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (c + b <= g->totalSize) {
        g->lockId = OS_GetLockID();
        if (g->lockId != -3) {
            CARD_LockBackup((u16)g->lockId);
            if (CARDi_RequestStreamCommand(c, a, b, 0, 0, 0, 6, r, 0) != 0) {
                r = 0;
            }
            CARD_UnlockBackup((u16)g->lockId);
            OS_ReleaseLockID((u16)g->lockId);
            g->lockId = -3;
        }
    }
    return r;
}

extern "C" s32 Backup_ReadAsync(Backup *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (c + b <= g->totalSize) {
        g->lockId = OS_GetLockID();
        if (g->lockId != -3) {
            CARD_LockBackup((u16)g->lockId);
            CARDi_RequestStreamCommand(c, a, b, 0, 0, r, 6, r, 0);
            if (Backup_GetStatus(g) == 3) {
                r = 3;
            } else {
                Backup_EndAccess(g);
            }
        }
    }
    return r;
}

extern "C" s32 Backup_GetStatus(Backup *g) {
    s32 r;
    if (g->lockId == -3) {
        r = 4;
    } else if (CARD_TryWaitBackupAsync() == 0) {
        r = 3;
    } else if (func_0211d6f0() == 0) {
        r = 0;
    } else {
        r = 1;
    }
    return r;
}

extern "C" void Backup_EndAccess(Backup *g) {
    if (g->lockId != -3) {
        CARD_UnlockBackup((u16)g->lockId);
        OS_ReleaseLockID((u16)g->lockId);
        g->lockId = -3;
    }
}

extern "C" u16 Save_Sum16(u16 *p, u32 n) {
    u16 sum = 0;
    if ((n & 1) == 0) {
        for (; n != 0; p++, n -= 2) {
            sum = sum + *p;
        }
    }
    return sum;
}

extern "C" u16 Save_CalcChecksum(u16 *p, u32 n, u32 m) {
    u16 t = Save_Sum16(p, n) - m;
    return (u16)((~t & 0xffff) + 1);
}

extern "C" void Backup_CancelAndWait(void) {
    if (Backup_GetStatus(&gBackup) == 3) {
        s32 t = OS_GetTick();
        CARD_CancelBackupAsync();
        do {
            if (CARD_TryWaitBackupAsync() != 0) break;
        } while ((u32)(OS_GetTick() - t) < 0xcc8d);
        if (gBackup.lockId != -3) {
            CARD_UnlockBackup((u16)gBackup.lockId);
            OS_ReleaseLockID((u16)gBackup.lockId);
        }
    }
}

extern "C" void FishDisplay_OnNetPacket(u8 *p, u32 v) {
    if (*p < 3) {
        sFishDisplayNetHandlers[*p](p, v);
    }
}
