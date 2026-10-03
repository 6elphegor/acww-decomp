#include "types.h"

struct Unk_0204fe98_Global {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
};

extern "C" Unk_0204fe98_Global data_021c4890;

extern "C" s32 OS_GetTick(void);
extern "C" void CARD_CancelBackupAsync(void);
extern "C" s32 func_0211dc7c(void);
extern "C" s32 func_0211d6f0(void);
extern "C" void func_0211d680(u16 v);
extern "C" void OS_ReleaseLockID(u16 v);
extern "C" s32 OS_GetLockID(void);
extern "C" void func_0211d690(u16 v);
extern "C" s32 CARDi_RequestStreamCommand(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);

extern "C" void func_0204fe0c(u8 *p, u32 v);
extern "C" void func_0204fe28(u8 *p, u32 v);
extern "C" void func_0204fe44(u8 *p, u32 v);

extern "C" s32 func_020500f0(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c);
extern "C" s32 func_0205007c(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c);
extern "C" s32 func_02050008(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c);
extern "C" s32 func_0204ffa0(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c);
extern "C" s32 func_0204ff6c(Unk_0204fe98_Global *g);
extern "C" void func_0204ff40(Unk_0204fe98_Global *g);
extern "C" u16 func_0204ff18(u16 *p, u32 n);
extern "C" u16 func_0204fef4(u16 *p, u32 n, u32 m);
extern "C" void func_0204fe98(void);
extern "C" void func_0204fe7c(u8 *p, u32 v);

extern "C" void (*data_020dba38[3])(u8 *, u32);
extern "C" void (*data_020dba38[3])(u8 *, u32) = {func_0204fe44, func_0204fe28, func_0204fe0c};

extern "C" s32 func_020500f0(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (a + c > g->unk_00) {
        return r;
    }
    g->unk_04 = OS_GetLockID();
    if (g->unk_04 == -3) {
        return r;
    }
    func_0211d690((u16)g->unk_04);
    if (CARDi_RequestStreamCommand(b, a, c, 0, 0, 0, 7, 10, 2) != 0) {
        r = 0;
    }
    func_0211d680((u16)g->unk_04);
    OS_ReleaseLockID((u16)g->unk_04);
    g->unk_04 = -3;
    return r;
}

extern "C" s32 func_0205007c(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (a + c > g->unk_00) {
        return r;
    }
    g->unk_04 = OS_GetLockID();
    if (g->unk_04 == -3) {
        return r;
    }
    func_0211d690((u16)g->unk_04);
    CARDi_RequestStreamCommand(b, a, c, 0, 0, r, 7, 10, 2);
    if (func_0204ff6c(g) == 3) {
        r = 3;
    } else {
        func_0204ff40(g);
    }
    return r;
}

extern "C" s32 func_02050008(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (c + b <= g->unk_00) {
        g->unk_04 = OS_GetLockID();
        if (g->unk_04 != -3) {
            func_0211d690((u16)g->unk_04);
            if (CARDi_RequestStreamCommand(c, a, b, 0, 0, 0, 6, r, 0) != 0) {
                r = 0;
            }
            func_0211d680((u16)g->unk_04);
            OS_ReleaseLockID((u16)g->unk_04);
            g->unk_04 = -3;
        }
    }
    return r;
}

extern "C" s32 func_0204ffa0(Unk_0204fe98_Global *g, u32 a, u32 b, u32 c) {
    s32 r = 1;
    if (c + b <= g->unk_00) {
        g->unk_04 = OS_GetLockID();
        if (g->unk_04 != -3) {
            func_0211d690((u16)g->unk_04);
            CARDi_RequestStreamCommand(c, a, b, 0, 0, r, 6, r, 0);
            if (func_0204ff6c(g) == 3) {
                r = 3;
            } else {
                func_0204ff40(g);
            }
        }
    }
    return r;
}

extern "C" s32 func_0204ff6c(Unk_0204fe98_Global *g) {
    s32 r;
    if (g->unk_04 == -3) {
        r = 4;
    } else if (func_0211dc7c() == 0) {
        r = 3;
    } else if (func_0211d6f0() == 0) {
        r = 0;
    } else {
        r = 1;
    }
    return r;
}

extern "C" void func_0204ff40(Unk_0204fe98_Global *g) {
    if (g->unk_04 != -3) {
        func_0211d680((u16)g->unk_04);
        OS_ReleaseLockID((u16)g->unk_04);
        g->unk_04 = -3;
    }
}

extern "C" u16 func_0204ff18(u16 *p, u32 n) {
    u16 sum = 0;
    if ((n & 1) == 0) {
        for (; n != 0; p++, n -= 2) {
            sum = sum + *p;
        }
    }
    return sum;
}

extern "C" u16 func_0204fef4(u16 *p, u32 n, u32 m) {
    u16 t = func_0204ff18(p, n) - m;
    return (u16)((~t & 0xffff) + 1);
}

extern "C" void func_0204fe98(void) {
    if (func_0204ff6c(&data_021c4890) == 3) {
        s32 t = OS_GetTick();
        CARD_CancelBackupAsync();
        do {
            if (func_0211dc7c() != 0) break;
        } while ((u32)(OS_GetTick() - t) < 0xcc8d);
        if (data_021c4890.unk_04 != -3) {
            func_0211d680((u16)data_021c4890.unk_04);
            OS_ReleaseLockID((u16)data_021c4890.unk_04);
        }
    }
}

extern "C" void func_0204fe7c(u8 *p, u32 v) {
    if (*p < 3) {
        data_020dba38[*p](p, v);
    }
}
