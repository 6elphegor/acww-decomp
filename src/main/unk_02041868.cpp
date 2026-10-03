#include "types.h"

struct Unk_02042104_Date {
    u8 pad0[3];
    u8 c3, c4, c5;
    u8 pad6[2];
};

struct Unk_02041880_Pair { u8 unk_00; u8 unk_01; u8 pad[2]; };
struct CommManager { u8 unk_00[0x64]; u32 unk_64; };
struct Unk_02041938 { u8 unk_00[0x10e9]; u8 unk_10e9; u8 unk_10ea; };
struct Unk_020419b4 {
    u8 pad00[0x64];
    s32 unk_64;
    u8 pad68[0xc0 - 0x68];
    u32 unk_c0;
    u32 unk_c4;
    u8 unk_c8[8];
    u8 unk_d0[8];
    u32 unk_d8;
    u8 unk_dc;
    u8 paddd[3];
    u32 unk_e0;
    u8 pade4[0x10e4 - 0xe4];
    u32 unk_10e4;
    u8 unk_10e8;
    u8 unk_10e9;
    u8 unk_10ea;
};

struct Unk_02041ac0_Glob {
    u32 pad[8];
    Unk_020419b4 *unk_20;
};

extern u32 data_021fcc2c[];

extern CommManager *gCommManager;
extern Unk_02041ac0_Glob gTownUpdater;
extern u32 gCurrentHeap;
extern u8 sAntSpawnEnabled;
extern volatile u32 gTownEval[];
extern u8 gSaveData[];
extern u8 data_021ed20c[];

u8 data_021c3e70[4];
Unk_02041880_Pair data_021c3e74;

struct Unk_02041e00_Ent {
    u16 h0;
    u16 h2;
    u32 w4;
    u32 w8;
};

extern "C" {
void Town_GetEnvironmentRank();
s32 _ZN11CommManager12isSlotActiveEi(u32, u32);
s32 Scene_InTown();
s32 Scene_InTownUnk31();
void Insect_EnableTrashFlies();
void Heap_Free(u32, u32);
s32 OS_IsThreadTerminated();
void OS_KillThread(u32, u32);
s32 func_02041938(Unk_02041938 *p);
void func_02041908();
void func_020418d4(Unk_02041880_Pair *p);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void Clock_GetDateTime(Unk_02042104_Date *d);
void DateTime_SubHours(Unk_02042104_Date *d, u32 n);
void DateTime_SubDays(Unk_02042104_Date *d, s32 n);
u32 Date_GetWeekday(u32 a, u32 b, u32 c);
s32 func_02041d98(void *o, u8 *a, Unk_02042104_Date *d);
void func_02041d40(void *o, u8 *base, Unk_02042104_Date *d);
void func_02041c10(void *o, u8 *base, s32 cnt, Unk_02042104_Date *d, s32 flag);
void func_02041cec(void *o, u8 *base, Unk_02042104_Date *d);
s32 func_020978a4(void *p);
s32 func_0203f14c();
s32 DateTime_DiffDays(Unk_02042104_Date *a, Unk_02042104_Date *b);
void DateTime_AddDays(Unk_02042104_Date *a, s32 n);
void TownState_PickNextWeekDate(void *a, u8 *b);
void TownBbs_PostPelicanNotice(void *o, u8 *base, Unk_02042104_Date *d);
void TownBbs_PostSlogan(void *o, u8 *base, Unk_02042104_Date *d);
s32 EventSchedule_CollectDayAll(Unk_02041e00_Ent *z, Unk_02042104_Date *d);
void TownBbs_PostDayEvents(void *o, Unk_02041e00_Ent *z, Unk_02042104_Date *d);
void func_02041b1c(u8 *arg);
void OS_ExitThread();
u32 DC_FlushAll();
void Heap_SetThreadHeap(u32 a, u32 b);
void Town_AdvanceDays(void *r, u8 *a, u8 *b, u32 c, u32 d, u32 e);
void MI_CpuFill8(void *p, u32 v, u32 n);
s32 func_020419b4(Unk_020419b4 *p);
void func_02041a80(Unk_020419b4 *p, u8 *a, u8 *b, u32 c, u8 d);
void func_02041aec(Unk_020419b4 *p);
void *Heap_Alloc(u32 heap, u32 size);
void OS_CreateThread(void *th, void *fn, void *arg, void *stack, u32 size, u32 prio);
void OS_WakeupThreadDirect(void *th);
}

extern "C" s32 func_02041d98(void *o, u8 *a, Unk_02042104_Date *d) {
    s32 r = 0;
    u8 v2 = a[2];
    if (v2 == 0xff && a[1] == 0xff && a[0] == 0xff) {
        r = 1;
        goto end;
    }
    if (v2 == d->c5 && a[1] == d->c4 && a[0] == d->c3) {
        goto end;
    }
    {
        Unk_02042104_Date t;
        *(u32 *)&t = 0;
        *((u32 *)&t + 1) = 0;
        *(u32 *)&t = 0;
        *((u32 *)&t + 1) = 0;
        t.c5 = a[2];
        t.c4 = a[1];
        t.c3 = a[0];
        r = DateTime_DiffDays(&t, d);
        if (r > 0x1f) {
            r = 0x1f;
        } else if (r < 0) {
            r = 1;
        }
    }
end:
    return r;
}

extern "C" void func_02041d40(void *o, u8 *base, Unk_02042104_Date *d) {
    Unk_02042104_Date a;
    *(u32 *)&a = 0;
    *((u32 *)&a + 1) = 0;
    u8 *p = base + 0x15e5c;
    *(u32 *)&a = 0;
    *((u32 *)&a + 1) = 0;
    a.c5 = p[2];
    a.c4 = p[1];
    a.c3 = p[0];
    u8 *q = base + 0x15e54;
    while (DateTime_DiffDays(d, &a) < 0) {
        TownState_PickNextWeekDate(q, p);
        a.c5 = p[2];
        a.c4 = p[1];
        a.c3 = p[0];
    }
}

extern "C" void func_02041cec(void *o, u8 *base, Unk_02042104_Date *d) {
    Unk_02042104_Date x, y, w;
    Unk_02041e00_Ent z[7];
    *(u32 *)&x = 0;
    *((u32 *)&x + 1) = 0;
    MI_CpuCopy8(d, &x, 8);
    MI_CpuCopy8(&x, &y, 8);
    if (EventSchedule_CollectDayAll(z, &y) > 0) {
        MI_CpuCopy8(&x, &w, 8);
        TownBbs_PostDayEvents(o, z, &w);
    }
    base[0x15e76] = 1;
}

extern "C" void func_02041c10(void *o, u8 *base, s32 cnt, Unk_02042104_Date *d, s32 flag0) {
    s32 f4 = 0;
    Unk_02042104_Date a, b, c, e;
    *(u32 *)&a = 0;
    *((u32 *)&a + 1) = 0;
    *(u32 *)&b = 0;
    *((u32 *)&b + 1) = 0;
    u8 *p = base + 0x15e5c;
    MI_CpuCopy8(d, &b, 8);
    s32 flag = flag0;
    if (base[0x15e76] != 0 || func_020978a4(base + 0xc) > 1 || func_0203f14c() == 0) {
        f4 = 1;
    }
    while (cnt > 0) {
        *(u32 *)&a = 0;
        *((u32 *)&a + 1) = 0;
        a.c5 = p[2];
        a.c4 = p[1];
        a.c3 = p[0];
        if (DateTime_DiffDays(&b, &a) == 0) {
            MI_CpuCopy8(&a, &c, 8);
            TownBbs_PostPelicanNotice(o, base, &c);
            TownState_PickNextWeekDate(base + 0x15e54, p);
        }
        if (flag == 1) {
            MI_CpuCopy8(&b, &e, 8);
            TownBbs_PostSlogan(o, base, &e);
        }
        if (f4 != 0) {
            func_02041cec(o, base, &b);
        }
        cnt--;
        flag = (flag + 1) % 7;
        DateTime_AddDays(&b, 1);
    }
}

extern "C" void func_02041b68() {
    u8 *base = gSaveData;
    Unk_02042104_Date d;
    *(u32 *)&d = 0;
    *((u32 *)&d + 1) = 0;
    Clock_GetDateTime(&d);
    DateTime_SubHours(&d, 6);
    u8 *p = data_021ed20c;
    s32 r = func_02041d98(data_021c3e70, p, &d);
    if (r != 0) {
        p[2] = d.c5;
        p[1] = d.c4;
        p[0] = d.c3;
        DateTime_SubDays(&d, r - 1);
        u32 x = Date_GetWeekday(d.c5, d.c4, d.c3);
        func_02041d40(data_021c3e70, base, &d);
        func_02041c10(data_021c3e70, base, r, &d, x);
    } else if (base[0x15e76] == 0) {
        if (func_020978a4(base + 0xc) > 1 || func_0203f14c() == 0) {
            func_02041cec(data_021c3e70, base, &d);
        }
    }
}

extern "C" void func_02041b1c(u8 *arg) {
    DC_FlushAll();
    Unk_020419b4 *g = gTownUpdater.unk_20;
    Town_AdvanceDays(&gTownUpdater, arg, arg + 8, *(u32 *)(arg + 0x10), arg[0x14], 1);
    Heap_SetThreadHeap(g->unk_c0, g->unk_c4);
    g->unk_10e9 = 1;
    OS_ExitThread();
}

extern "C" void func_02041aec(Unk_020419b4 *p) {
    p->unk_10e8 = 0;
    p->unk_10e9 = 0;
    p->unk_10ea = 0;
    MI_CpuFill8(p, 0, 0xc0);
    p->unk_64 = 2;
}

extern "C" void func_02041ac0() {
    gTownUpdater.unk_20 = (Unk_020419b4 *)Heap_Alloc(gCurrentHeap, 0x10ec);
    if (gTownUpdater.unk_20 != 0) {
        func_02041aec(gTownUpdater.unk_20);
    }
}

extern "C" void func_02041a80(Unk_020419b4 *p, u8 *a, u8 *b, u32 c, u8 d) {
    MI_CpuCopy8(a, p->unk_c8, 8);
    MI_CpuCopy8(b, p->unk_d0, 8);
    p->unk_d8 = c;
    p->unk_dc = d;
    p->unk_10e8 = 1;
}

extern "C" void func_02041a54(u8 *a, u8 *b, u32 c, u8 d) {
    if (gTownUpdater.unk_20 != 0) {
        func_02041a80(gTownUpdater.unk_20, a, b, c, d);
    }
}

extern "C" s32 func_020419b4(Unk_020419b4 *p) {
    if (p->unk_10e8 == 0) {
        return 0;
    }
    p->unk_e0 = 0x3039;
    p->unk_10e4 = 0x3039;
    p->unk_10e9 = 0;
    p->unk_10ea = 1;
    OS_CreateThread(p, (void *)func_02041b1c, p->unk_c8, &p->unk_10e4, 0x1000, 0x1e);
    p->unk_c0 = data_021fcc2c[1];
    p->unk_c4 = gCurrentHeap;
    Heap_SetThreadHeap(p->unk_c0, 0);
    Heap_SetThreadHeap((u32)p, p->unk_c4);
    OS_WakeupThreadDirect(p);
    return 1;
}

extern "C" s32 func_0204198c() {
    s32 r = 0;
    if (gTownUpdater.unk_20 != 0) {
        r = func_020419b4(gTownUpdater.unk_20);
        if (r == 0) {
            func_02041908();
        }
    }
    return r;
}

extern "C" BOOL func_02041960() {
    BOOL r = FALSE;
    Unk_02041938 *p = (Unk_02041938 *)gTownUpdater.unk_20;
    if (p != 0) {
        if (p->unk_10e9 != 0) {
            func_02041908();
            r = TRUE;
        }
    }
    return r;
}

extern "C" s32 func_02041938(Unk_02041938 *p) {
    if (p->unk_10ea != 0) {
        if (OS_IsThreadTerminated() == 0) OS_KillThread((u32)p, 0);
    }
}

extern "C" void func_02041908() {
    Unk_02041938 *p = (Unk_02041938 *)gTownUpdater.unk_20;
    if (p != 0) {
        func_02041938(p);
        Heap_Free(gCurrentHeap, (u32)p);
        gTownUpdater.unk_20 = 0;
    }
}

extern "C" void func_020418d4(Unk_02041880_Pair *p) {
    if (((s32)(gTownEval[0x30 / 4] << 24) >> 31) != 0) {
        p->unk_00 = 1;
    } else {
        p->unk_00 = 0;
    }
    if (((s32)(gTownEval[0x30 / 4] << 25) >> 31) != 0) {
        p->unk_01 = 1;
    } else {
        p->unk_01 = 0;
    }
}

extern "C" void func_02041880(Unk_02041880_Pair *p) {
    if (_ZN11CommManager12isSlotActiveEi((u32)gCommManager, gCommManager->unk_64) != 0) return;
    if (Scene_InTown() == 0) {
        if (Scene_InTownUnk31() == 0) return;
    }
    if (p->unk_01 != 0) sAntSpawnEnabled = 1;
    if (p->unk_01 != 0 || p->unk_00 != 0) Insect_EnableTrashFlies();
    p->unk_00 = 0;
    p->unk_01 = 0;
}

extern "C" void func_02041868() {
    Town_GetEnvironmentRank();
    func_020418d4(&data_021c3e74);
}

