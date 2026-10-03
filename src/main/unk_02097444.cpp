#include "types.h"

// element of the function-local static table in PlayerDataArray_CreateResident (destructor is another unit's, at 0x02004b60)
struct ItemId {
    u16 v;
    ItemId(u16 x) { v = x; }
    ~ItemId();
};

struct Unk_02097ac4 {
    u8 pad[0x9f8];
    s32 unk_9f8;
};

struct Unk_020973e4_Pl {
    u8 pad[0x64];
    u32 unk_64;
    u32 unk_68;
};

// 0x228c-byte element (constructor 0x02098be4 and destructor 0x02098af0 belong to another unit)
class PlayerData {
public:
    PlayerData();
    ~PlayerData();
    u8 pad[0x228c];
};

// the three-element object at gGuestPlayers (constructor func_020975c4, destructor func_020975a4)
class GuestPlayerArray {
public:
    GuestPlayerArray();
    ~GuestPlayerArray();
    PlayerData unk_00[3];
};

extern "C" {
extern u8 gSavePlayers[];
extern u8 data_021e935c[];
extern u8 gSaveDressers[];
extern Unk_020973e4_Pl *gCommManager;

s32 PlayerData_IsResidentIndex(u32 idx);
s32 PlayerDataArray_IsUsed(u8 *base, s32 idx);
u8 *PlayerData_GetResident(u8 *base, s32 idx);
u8 *PlayerDataArray_GetById(u8 *base, u16 *p);
s32 PlayerData_IsGuestIndex(s32 idx);
s32 PlayerData_GetGuestSlot(s32 idx);
u8 *GuestPlayers_Get();
s32 _ZN10PlayerData6isUsedEv(void *p);
s32 _ZN10PlayerData5resetEv(void *p);
void *_ZN10PlayerDataD1Ev(void *p, s32 f);
void *_ZN10PlayerDataC1Ev(void *p, s32 f);
u32 PlayerSession_GetDataIndex(u32 a);
u32 PlayerData_Get(s32 a);
u32 PlayerData_GetBySessionSlot(u32 a);
s32 GuestPlayers_Reset(void *p);
void __cxa_vec_cleanup(void *, u32, u32, void *(*)(void *, s32));
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *, s32), void *(*)(void *, s32));
void *_ZN10PlayerData11getPlayerIdEv(void *p);
s32 _ZN8PlayerId7isValidEv(void *p);
u16 _ZN8PlayerId5getIdEv(void *p);
u32 PlayerId_GenerateUniqueId(u16 *p, u32 n);
s32 _ZN8PlayerId6equalsEPS_(void *a, void *b);
s32 _ZN10PlayerData8setupNewEjjjjhhhhhjPt(void *, s32, u32, s32, u32, u32, u32, u32, u32, u32, u32, u16 *);
s32 _ZN10PlayerData6setBedEPt(void *, void *);
s32 memcmp(void *, void *, u32);
void *MI_CpuFill8(void *, s32, u32);
s32 PlayerDataArray_FindById(u8 *base, u16 *p);
u32 PlayerDataArray_CountUsed(u8 *base);
u32 Random_GlobalBelow();
s32 _ZN12Unk_02097ff414findUnusedSlotEi(void *, s32);
s32 _ZN10PlayerData8getIndexEv(void *);
void _ZN13PlayerMailbox17setLastWifiMailIdEj(void *, s32);
s32 _ZN13PlayerMailbox17getLastWifiMailIdEv(void *);
u8 *SaveManager_GetLetterStorage();
s32 _ZN15PlayerInventory13getTotalBellsEi(u8 *, s32);
s32 _ZN15PlayerInventory13getBellsSpaceEi(u8 *, s32);
s32 PlayerInventory_PayWithBags(u8 *, s32);
s32 PlayerInventory_StoreExcessInBags(u8 *, s32);
s32 PlayerInventory_FindBagSlot(u8 *);
s32 PlayerInventory_FindSmallestBag(u8 *, s32);
s32 PlayerInventory_GetBellsRoom(u8 *, s32, s32);
u16 *_ZN15PlayerInventory9getPocketEi(u8 *, s32);
s32 _ZN15PlayerInventory9setPocketEPtij(u8 *, u16 *, s32, s32);
s32 _ZN15PlayerInventory14getPocketFlagsEi(u8 *, s32);
s32 Item_GetPrice(u16 *);
}

struct Unk_02097c50_Pad {
    s32 v[2];
    Unk_02097c50_Pad() {}
    ~Unk_02097c50_Pad() {}
};

extern "C" s32 PlayerInventory_GetBellsRoom(u8 *p, s32 mode, s32 arg) {
    s32 x = 99999 - _ZN15PlayerInventory13getTotalBellsEi(p, 0);
    if (x < 0) x = 0;
    if (mode == 1) x += _ZN15PlayerInventory13getBellsSpaceEi(p, arg);
    return x;
}

extern "C" s32 PlayerInventory_FindSmallestBag(u8 *p, s32 mode) {
    Unk_02097c50_Pad pad;
    u16 *q = _ZN15PlayerInventory9getPocketEi(p, 0);
    s32 lim = mode == 1 ? 0x6b : 0x6a;
    s32 i = 0;
    s32 best = -1;
    for (; i < 15; q++, i++) {
        BOOL f1 = FALSE;
        u32 h = *q;
        if (h >= 0x1492 && h <= 0x14fd) f1 = TRUE;
        if (f1 && _ZN15PlayerInventory14getPocketFlagsEi(p, i) == 0) {
            BOOL f2 = FALSE;
            s32 v;
            h = *q;
            if (h >= 0x1492 && h <= 0x14fd) f2 = TRUE;
            if (f2) v = h - 0x1492;
            else v = -1;
            if (v < lim || (best == ~0 && v == lim)) {
                lim = v;
                best = i;
            }
        }
    }
    return best;
}

extern "C" s32 PlayerInventory_FindBagSlot(u8 *p) {
    u16 *q = _ZN15PlayerInventory9getPocketEi(p, 0);
    s32 i = 0;
    s32 r = -1;
    for (; i < 15; q++, i++) {
        if (*q == 0xfff1) {
            r = i;
            break;
        }
    }
    if (r == -1) r = PlayerInventory_FindSmallestBag(p, 0);
    return r;
}

extern "C" s32 PlayerInventory_StoreExcessInBags(u8 *p, s32 n) {
    u16 b[2];
    s32 a;
    b[0] = 0x14fd;
    a = Item_GetPrice(b);
    b[1] = 0xfff1;
    while ((u32)n > 99999) {
        s32 t = PlayerInventory_FindBagSlot(p);
        if (t == -1) break;
        b[1] = *_ZN15PlayerInventory9getPocketEi(p, t);
        volatile u16 *vp = b;
        BOOL rr = FALSE;
        u32 c = vp[1];
        u32 a2 = vp[1];
        if (a2 >= 0x1492 && c <= 0x14fd) rr = TRUE;
        if (rr) {
            _ZN15PlayerInventory9setPocketEPtij(p, b, t, 0);
            n -= a - Item_GetPrice(&b[1]);
        } else {
            if (c != 0xfff1) break;
            _ZN15PlayerInventory9setPocketEPtij(p, b, t, 0);
            n -= a;
        }
    }
    return n;
}

extern "C" s32 PlayerInventory_PayWithBags(u8 *p, s32 n) {
    u16 b[2];
    if (n < 0) n = 0;
    b[0] = 0xfff1;
    while (n > 0) {
        s32 t = PlayerInventory_FindSmallestBag(p, 1);
        if (t == -1) break;
        b[0] = *_ZN15PlayerInventory9getPocketEi(p, t);
        b[1] = 0xfff1;
        _ZN15PlayerInventory9setPocketEPtij(p, &b[1], t, 0);
        n -= Item_GetPrice(b);
    }
    if (n != 0) n = -n;
    return n;
}

extern "C" void PlayerInventory_SetWallet(Unk_02097ac4 *p, s32 v, s32 mode) {
    if (v < 0) v = 0;
    if ((u32)v > 99999) {
        if (mode == 1) {
            v = PlayerInventory_StoreExcessInBags((u8 *)p, v);
            if ((u32)v > 99999) v = 99999;
        } else {
            v = 99999;
        }
    }
    p->unk_9f8 = v;
}

extern "C" BOOL PlayerInventory_CanAddBells(u8 *p, s32 v, s32 a, s32 b) {
    BOOL r = FALSE;
    if (v >= 0) {
        if (v <= PlayerInventory_GetBellsRoom(p, a, b)) r = TRUE;
    } else {
        if (-v <= _ZN15PlayerInventory13getTotalBellsEi(p, a)) r = TRUE;
    }
    return r;
}

extern "C" void PlayerInventory_AddBells(u8 *p, s32 v, s32 mode) {
    s32 x = v + _ZN15PlayerInventory13getTotalBellsEi(p, 0);
    if (x < 0) {
        if (mode == 1) {
            x = PlayerInventory_PayWithBags(p, -x);
            if (x < 0) x = 0;
            else if ((u32)x > 99999) x = 99999;
        } else {
            x = 0;
        }
    }
    PlayerInventory_SetWallet((Unk_02097ac4 *)p, x, mode);
}

extern "C" u8 *PlayerData_GetFutureLetter(u8 *p) { return p + 0x1c6c; }

extern "C" u8 *PlayerData_GetMotherLetterState(u8 *p) { return p + 0x223e; }

extern "C" u8 *PlayerData_GetLetterStorage(void *p) {
    s32 s = _ZN10PlayerData8getIndexEv(p);
    if (s >= 0 && s < 4) {
        u8 *q = SaveManager_GetLetterStorage();
        if (q != 0) return q + s * 0x477c;
    }
    return 0;
}

extern "C" u8 *PlayerData_GetMailbox(void *p) {
    s32 s = _ZN10PlayerData8getIndexEv(p);
    if (s >= 0 && s < 4) return data_021e935c + s * 0x98c;
    return 0;
}

extern "C" u8 *PlayerData_GetDresser(void *p) {
    s32 s = _ZN10PlayerData8getIndexEv(p);
    if (s >= 0 && s < 4) return gSaveDressers + s * 0xb4;
    return 0;
}

extern "C" s32 PlayerData_GetLastWifiMailId(void *p) {
    s32 s = _ZN10PlayerData8getIndexEv(p);
    if (s >= 0 && s < 4) return _ZN13PlayerMailbox17getLastWifiMailIdEv(data_021e935c + s * 0x98c);
    return 0;
}

extern "C" void PlayerData_SetLastWifiMailId(void *p, s32 v) {
    s32 s = _ZN10PlayerData8getIndexEv(p);
    if (s >= 0 && s < 4) _ZN13PlayerMailbox17setLastWifiMailIdEj(data_021e935c + s * 0x98c, v);
}

extern "C" void *PlayerDataArray_Construct(void *p) {
    __cxa_vec_ctor(p, 4, 0x228c, _ZN10PlayerDataC1Ev, _ZN10PlayerDataD1Ev);
    return p;
}

extern "C" void *PlayerDataArray_Destruct(void *p) {
    __cxa_vec_cleanup(p, 4, 0x228c, _ZN10PlayerDataD1Ev);
    return p;
}

extern "C" s32 PlayerData_IsResidentIndex(u32 idx) {
    if (idx < 4) return 1;
    return 0;
}

extern "C" s32 PlayerDataArray_IsUsed(u8 *base, s32 idx) {
    if (PlayerData_IsResidentIndex(idx) != 0) {
        if (_ZN10PlayerData6isUsedEv(base + idx * 0x228c) != 0) return 1;
    }
    return 0;
}

extern "C" u32 PlayerDataArray_CountUsed(u8 *base) {
    s32 i;
    u32 n = 0;
    for (i = n; i < 4; i++) {
        if (PlayerDataArray_IsUsed(base, i) != 0) n++;
    }
    return n;
}

extern "C" u8 *PlayerDataArray_GetById(u8 *base, u16 *p) { return PlayerData_GetResident(base, PlayerDataArray_FindById(base, p)); }

extern "C" u8 *PlayerData_GetResident(u8 *base, s32 idx) {
    u8 *r = 0;
    if (PlayerData_IsResidentIndex(idx) != 0) r = base + idx * 0x228c;
    return r;
}

extern "C" u8 *PlayerDataArray_GetRandomOther(u8 *base, u16 *p) {
    u8 *r;
    s32 n;
    if (p == 0 || PlayerDataArray_GetById(base, p) == 0) n = PlayerDataArray_CountUsed(base);
    else n = PlayerDataArray_CountUsed(base) - 1;
    r = 0;
    if (n > 0) {
        u32 t = Random_GlobalBelow();
        s32 i;
        for (i = 0; i < 4; i++) {
            u8 *e = base + i * 0x228c;
            if (_ZN10PlayerData6isUsedEv(e) == 1) {
                if (p != 0) {
                    u16 *q = (u16 *)_ZN10PlayerData11getPlayerIdEv(e);
                    if (p[0] == q[0]) {
                        if (memcmp(p + 1, q + 1, 8) == 0) {
                            if (_ZN8PlayerId6equalsEPS_(p, q) != 0) continue;
                        }
                    }
                }
                if (t == 0) {
                    r = e;
                    break;
                }
                t--;
            }
        }
    }
    return r;
}

extern "C" void PlayerDataArray_ResetAll(void *p) {
    s32 i;
    for (i = 0; i < 4; i++) _ZN10PlayerData5resetEv((u8 *)p + i * 0x228c);
}

extern "C" s32 PlayerDataArray_FindUnused(void *p) { return _ZN12Unk_02097ff414findUnusedSlotEi(p, 4); }

extern "C" s32 PlayerDataArray_FindById(u8 *base, u16 *p) {
    if (_ZN8PlayerId7isValidEv(p) == 1) {
        s32 i;
        for (i = 0; i < 4; i++) {
            u16 *q = (u16 *)_ZN10PlayerData11getPlayerIdEv(base + i * 0x228c);
            if (p[0] == q[0]) {
                if (memcmp(p + 1, q + 1, 8) == 0) {
                    if (_ZN8PlayerId6equalsEPS_(p, q) != 0) return i;
                }
            }
        }
    }
    return -1;
}

extern "C" u8 *PlayerDataArray_CreateResident(u8 *base, s32 a1, s32 a2, u32 idx) {
    u8 *r = 0;
    if (PlayerData_IsResidentIndex(idx) == 1) {
        static ItemId tbl[4] = {ItemId(0x3884), ItemId(0x3888), ItemId(0x388c), ItemId(0x3890)};
        u16 hdr;
        u16 v[3];
        s32 i;
        r = base + idx * 0x228c;
        u16 cnt = 0;
        MI_CpuFill8(v, 0, 6);
        for (i = 0; i < 4; i++) {
            if (i != idx) {
                u8 *q = base + i * 0x228c;
                if (_ZN8PlayerId7isValidEv(_ZN10PlayerData11getPlayerIdEv(q)) == 1) {
                    v[cnt] = _ZN8PlayerId5getIdEv(_ZN10PlayerData11getPlayerIdEv(q));
                    cnt++;
                }
            }
        }
        _ZN10PlayerData5resetEv(r);
        hdr = 0xfff1;
        {
            u32 s = PlayerId_GenerateUniqueId(v, cnt);
            _ZN10PlayerData8setupNewEjjjjhhhhhjPt(r, a1, s, a2, 0, 0, 0, 0, 0, 0, 0, &hdr);
        }
        idx &= 3;
        _ZN10PlayerData6setBedEPt(r, &tbl[idx]);
    }
    return r;
}

// bss: constructed by __sinit
GuestPlayerArray gGuestPlayers;

GuestPlayerArray::GuestPlayerArray() {}

GuestPlayerArray::~GuestPlayerArray() {}

extern "C" u8 *GuestPlayers_Get() { return (u8 *)&gGuestPlayers; }

extern "C" s32 GuestPlayers_Reset(void *p) {
    s32 i;
    for (i = 0; i < 3; i++) _ZN10PlayerData5resetEv((u8 *)p + i * 0x228c);
}

extern "C" void GuestPlayers_ResetAll() { GuestPlayers_Reset(GuestPlayers_Get()); }

extern "C" s32 PlayerData_IsGuestIndex(s32 idx) {
    if (idx >= 4 && idx < 7) return 1;
    return 0;
}

extern "C" s32 PlayerData_GetGuestSlot(s32 idx) {
    s32 r = -1;
    if (PlayerData_IsGuestIndex(idx) == 1) r = idx - 4;
    return r;
}

extern "C" u32 PlayerData_GetBySessionSlot(u32 a) { return PlayerData_Get(PlayerSession_GetDataIndex(a)); }

extern "C" u32 PlayerData_GetCurrent() { return PlayerData_GetBySessionSlot(gCommManager->unk_68); }

extern "C" u32 PlayerData_GetCurrentIndex() { return PlayerSession_GetDataIndex(gCommManager->unk_68); }

extern "C" u32 PlayerData_Get(s32 idx) {
    u32 r = 0;
    if (PlayerData_IsResidentIndex(idx) == 1) {
        if ((u32)gSavePlayers != 0) r = (u32)PlayerData_GetResident(gSavePlayers, idx);
    } else if (PlayerData_IsGuestIndex(idx) == 1) {
        if (GuestPlayers_Get() != 0) {
            r = (u32)GuestPlayers_Get();
            r += PlayerData_GetGuestSlot(idx) * 0x228c;
        }
    }
    return r;
}

extern "C" s32 PlayerData_IsUsedByIndex(s32 idx) {
    s32 r = 0;
    if (PlayerData_IsResidentIndex(idx) == 1) {
        if ((u32)gSavePlayers != 0) r = PlayerDataArray_IsUsed(gSavePlayers, idx);
    } else if (PlayerData_IsGuestIndex(idx) == 1) {
        if (GuestPlayers_Get() != 0) {
            s32 t = PlayerData_GetGuestSlot(idx);
            r = _ZN10PlayerData6isUsedEv(GuestPlayers_Get() + t * 0x228c);
        }
    }
    return r;
}

