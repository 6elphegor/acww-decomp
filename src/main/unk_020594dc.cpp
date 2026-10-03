// mwcc-flags: -str reuse
#include "types.h"

struct ItemPickSpec {
    u32 v[2];
    ItemPickSpec(s32 a, s32 b);
    ItemPickSpec(const ItemPickSpec &o) { v[0] = o.v[0]; v[1] = o.v[1]; }
    ~ItemPickSpec();
};

struct Unk_020594dc_H {
    u16 v;
    Unk_020594dc_H(u16 x) : v(x) {}
};

struct Unk_0205a930_H {
    u16 unk_00;
    Unk_0205a930_H() {}
};

struct Unk_0205afdc {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
};

struct Unk_0205b320_Buf {
    u32 unk_00, unk_04, unk_08;
};

struct Unk_0205b524_T {
    u32 w0, w1;
};

struct Unk_0205b6e4 {
    u8 unk_00;
    u8 pad_01[3];
    void (*unk_04)();
    void (*unk_08)();
    s32 unk_0c;
    s32 unk_10;
    void (*unk_14)();
    Unk_0205b6e4 *unk_18;
};

class Unk_0205b448 {
public:
    u8 unk_00, unk_01, unk_02;
    Unk_0205b448();
    ~Unk_0205b448();
    u8 func_0205b448();
    u8 func_0205b444();
    u8 func_0205b440();
    void func_0205b460();
    void func_0205b2b4(s32 m);
    u8 func_0205b320(s32 m, s32 x0, s32 x1, s32 y0, s32 y1, s32 kind);
};

class RoomScoreEvaluator {
public:
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    void func_02059d1c(void *grid);
    s32 func_02059db0(void *grid, u8 *f1, u8 *f2);
    s32 func_02059e94(void *grid, s32 *out);
    s32 func_02059f3c(void *grid, s32 *out1, s32 *out2);
    s32 func_0205a1d0(void *grid);
    s32 func_0205a31c(Unk_0205b448 *o);
    s32 func_0205a344(void *grid);
    void func_0205a3c0(void *grid);
    s32 func_0205a480(void *grid);
    s32 func_0205a580(void *grid);
    s32 func_0205a6bc(void *grid, u32 *out);
};

// call-site view of the callback tables (struct-returning virtuals)
class Unk_020dc0fc_Ops {
public:
    virtual void *vfunc_00(s32 i) = 0;
    virtual Unk_0205a930_H vfunc_04(s32 i) = 0;
    virtual Unk_0205a930_H vfunc_08(s32 i) = 0;
};

class Unk_020dc0fc {
public:
    Unk_020dc0fc();
    ~Unk_020dc0fc();
    virtual void *vfunc_00(s32 i) = 0;
    virtual void vfunc_04(s32 a, s32 key) = 0;
    virtual void vfunc_08(s32 a, s32 key) = 0;
};

class Unk_020dc09c : public Unk_020dc0fc {
public:
    Unk_020dc09c();
    ~Unk_020dc09c();
    virtual void *vfunc_00(s32 i);
    virtual void vfunc_04(s32 a, s32 key);
    virtual void vfunc_08(s32 a, s32 key);
};

class Unk_020dc0b0 : public Unk_020dc0fc {
public:
    Unk_020dc0b0();
    ~Unk_020dc0b0();
    virtual void *vfunc_00(s32 i);
    virtual void vfunc_04(s32 a, s32 key);
    virtual void vfunc_08(s32 a, s32 key);
};

// ---- data of other units ----
extern "C" {
extern const u16 data_020cab80[];
extern const u16 data_020cab84[];
extern u8 gSaveVillagers[];
extern u8 gSaveData[];
extern u8 gSavePlayers[];
extern u8 data_021ed300[];
extern u8 gSaveHouse[];
extern void *gCurrentHeap;
}

// ---- own data ----
extern const u32 data_020cab74[3];
const u32 data_020cab74[3] = { 0, 4, 3 };

u32 data_020dc07c[1] = { 0x1f };
u32 data_020dc080[1] = { 2 };
u32 data_020dc084[1] = { 2 };
u32 data_020dc088[1] = { 2 };
u32 data_020dc08c[1] = { 0x1f };
u32 data_020dc090[1] = { 0x1f };

extern "C" {
void MI_CpuFill8(void *p, s32 v, s32 n);
void MIi_CpuClearFast(u32 v, void *dst, u32 n);
}

class Unk_021c5f3c {
public:
    u32 w[0x4a];
    Unk_021c5f3c() { MI_CpuFill8(this, 0, 0x128); }
    ~Unk_021c5f3c();
};

class Unk_021c5e5c {
public:
    u8 b[0xe0];
    Unk_021c5e5c() {
        volatile u32 z = 0;
        MIi_CpuClearFast(z, this, 0xe0);
    }
    ~Unk_021c5e5c();
};

class Unk_021c6064 {
public:
    u32 w[0x4a];
    u32 extra;
    Unk_021c6064() {
        u32 i;
        for (i = 0; i < 0x4a; i++) w[i] = 0;
        extra = 0;
    }
    ~Unk_021c6064();
};

u8 data_021c5cc8;
u8 data_021c5ccc;
u8 data_021c5cd0;
void *data_021c5cd8;
u8 data_021c5dec[0x28];
Unk_021c5f3c data_021c5f3c;
Unk_021c5e5c data_021c5e5c;
Unk_021c6064 data_021c6064;


static inline BOOL Unk_0205a6bc_Range(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_0205a6bc_Max(s32 i, u32 v)
{
    if (i < 0x4a) {
        if (data_021c5f3c.w[i] < v) {
            data_021c5f3c.w[i] = v;
            return TRUE;
        }
    }
    return FALSE;
}

static inline u32 Unk_0205a930_Get(s32 i, u32 dflt)
{
    if (i < 0x4a) return data_021c5f3c.w[i];
    return dflt;
}

static inline void Unk_0205a930_Clear(void *dst, u32 n)
{
    volatile u32 z = 0;
    MIi_CpuClearFast(z, dst, n);
}


// ---- callees ----
extern "C" {
void *SaveVillagers_Find(void *tbl, s32 id);
void *Villager_GetBirthday(void *p);
void MailText_SetSlotMonth(s32 slot, s32 v);
void MailText_SetSlotDayOrdinal(s32 slot, s32 v);
s32 func_02063b8c(s32 n);
void _ZN10VillagerId12makeFileNameEPvjj(s32 a, void *b, s32 c, s32 d);
void VillagerId_GetPersonality(s32 a);
s32 LetterPaper_PickForPersonality();
void _ZN6LetterC1Ev(void *obj);
void _ZN6LetterD1Ev(void *obj);
void func_02065920(void *obj, u8 *b, void *fmt, u8 *c, s32 a, s32 b2, s32 c2);
void _ZN12Unk_0206555410setPresentEtj(void *obj, u32 v, s32 f);
s32 LetterDelivery_PutInAddresseeMailbox(void *obj);
s32 LetterDelivery_QueueOutgoing(void *obj, s32 v);
void *PlayerData_GetCurrent();
s32 _ZN12Unk_02097ff48testFlagEj(void *p, s32 v);
void *_ZN10PlayerData11getPlayerIdEv(void *p);
void Letter_ComposeFromMail(void *obj, u8 *b, const void *fmt, void *s, void *s2, void *p);
s32 _ZN12Unk_02097ff47setFlagEj(void *p, s32 v);
s32 _ZN8BlockMap13func_0204e474Eii(void *grid, s32 x, s32 y);
s32 _ZN8SaveData8testFlagEj(void *tbl, s32 v);
void _ZN8SaveData7setFlagEj(void *tbl, s32 v);
void *PlayerData_GetResident(void *tbl, s32 i);
s32 _ZN10PlayerData13func_02098a48Ev(void *p);
s32 LetterDelivery_IsMailboxFull(s32 i);
void _ZN11MsgString25C1Ev(void *o);
void _ZN11MsgString25D1Ev(void *o);
s32 String_FormatNumber(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void MailText_SetSlot(s32 slot, void *o);
void _ZN8ItemNameC1Ei(void *o, s32 a);
void _ZN8ItemNameD1Ev(void *o);
void _ZN11MsgString33C1Ev(void *o);
void _ZN11MsgString33D1Ev(void *o);
void String_LoadResolveAltText(void *o, u8 *b, const void *fmt);
s16 *func_0209c37c(s32 a, s32 b);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
BOOL FtrInfo_TestIndoorFlag0(s32 v);
BOOL FtrInfo_TestAlwaysFlag4(s32 v);
s32 Item_GetFurnitureDirection(u16 *p);
BOOL Item_IsNormalItem(u16 *p);
s32 Ftr_GetUnk03(u16 *p);
s32 Ftr_GetFlagPairA(u16 *p);
s32 Ftr_GetFlagPairB(u16 *p);
void MI_CpuFill8(void *p, s32 v, s32 n);
s32 FX_Div(s32 a, s32 b);
s32 _ZN9HouseData13func_020604c4Ev(void *p);
void func_02034038(s32 v);
void func_0203402c(u32 v);
void MIi_CpuClearFast(u32 v, void *dst, u32 n);
s32 FtrInfo_GetClass(s32 v);
s32 FtrClass_GetBasePoints(s32 v);
s32 FtrInfo_GetUnk06(s32 v);
s32 FtrInfo_GetSeries(s32 v);
s32 FtrInfo_GetUnk01(s32 v);
s32 FtrInfo_GetUnk02(s32 v);
s32 Ftr_GetSeries(u16 *p);
u32 Ftr_GetIndexInSeries(u16 *p);
u32 FtrInfo_CountInSeries(u32 v);
s32 Series_GetType(s32 v);
s32 ItemInfo_GetSeries(u16 *p);
void *VillagerRoomMap_Create(s32 a, void *heap);
void VillagerRoomMap_Destroy(void *heap);
void *HouseRoomMaps_Get(s32 i);
void *_ZN9HouseData13func_0206052cEi(void *p, s32 a);
u16 *_ZN9HouseRoom13func_02060850EPi(void *h, s32 i);
u16 *_ZN9HouseRoom13func_02060834EPi(void *h, s32 i);
s32 SaveVillagers_Get(void *p, s32 k);
s32 Villager_GetCarpet();
s32 Villager_GetWallpaper();
u32 MATH_CountPopulation(u32 v);
void func_020524a8(Unk_0205b320_Buf *b, void *cell);
u32 func_0205248c(Unk_0205b320_Buf *b);
s16 *func_0205242c(Unk_0205b320_Buf *b, u32 i);
void func_020524a4(Unk_0205b320_Buf *b);
void Clock_GetDateTime(Unk_0205b524_T *t);
void DateTime_SubDays(Unk_0205b524_T *t, s32 v);
s32 Date_GetWeekday(s32 a, s32 b, s32 c);
void DateTime_AddDays(Unk_0205b524_T *t, s32 v);
s32 DateTime_Compare(Unk_0205b524_T *a, Unk_0205b524_T *b, s32 n);
Unk_020594dc_H ItemPick_One(ItemPickSpec o, s32 a, s32 b, s32 c, s32 d, s32 e);
Unk_020594dc_H ItemPick_OneSimple(ItemPickSpec o);
s32 func_0209788c(void *p, s32 q);
}

// ---- own functions ----
extern "C" {
BOOL func_02059900(const void *r0, u8 r1, s32 r2, s32 r3, u16 *p, s32 v);
BOOL func_02059a30(s32 *a, s32 *b, s32 *c, s32 *d, void *grid);
BOOL func_02059c14(void *self, s32 a, s32 b, s32 c, s32 n);
void func_02059adc(void *self, s32 n);
u32 func_0205b130(u32 *p);
s32 func_0205b55c(u8 *out);
void func_0205b524(u8 *out);
s32 func_0205a930(RoomScoreEvaluator *p, u16 *flags, s32 *pa, s32 *pb, s32 *pc, Unk_020dc0fc_Ops *ops, s32 count, s32 base, u8 flag);
void func_0205b650(u8 *out);
u8 func_0205b4e0();
u8 func_0205b4ec();
u8 func_0205b4f8();
}

extern "C" BOOL HBlank_Replace(Unk_0205b6e4 *t, s32 a, void (*b)()) {
    t->unk_14 = b;
    t->unk_10 = a;
    t->unk_00 = 2;
    return TRUE;
}

Unk_021c5f3c::~Unk_021c5f3c() {}

Unk_021c5e5c::~Unk_021c5e5c() {}

Unk_021c6064::~Unk_021c6064() {}

extern "C" void func_0205b680() {}

extern "C" void func_0205b67c() {}

extern "C" void func_0205b650(u8 *out) {
    Unk_0205b524_T t;
    t.w0 = 0;
    t.w1 = 0;
    Clock_GetDateTime(&t);
    out[0] = ((u8 *)&t)[3];
    out[1] = ((u8 *)&t)[4];
    out[2] = ((u8 *)&t)[5];
    out[3] = 0;
}

extern "C" void func_0205b648(u8 *out) {
    func_0205b650(out);
}

extern "C" s32 func_0205b55c(u8 *out) {
    struct {
        Unk_0205b524_T a, b, c;
    } l;
#define LB(o) (((u8 *)&l)[o])
    l.a.w0 = 0;
    l.a.w1 = 0;
    Clock_GetDateTime(&l.a);
    if (LB(2) < 6) {
        LB(2) = 7;
        DateTime_SubDays(&l.a, 1);
    }
    l.b.w0 = 0;
    l.b.w1 = 0;
    Clock_GetDateTime(&l.b);
    DateTime_SubDays(&l.b, Date_GetWeekday(LB(0xd), LB(0xc), LB(0xb)));
    if (LB(0xd) > LB(5)) DateTime_AddDays(&l.b, 7);
    l.c.w0 = 0;
    l.c.w1 = 0;
    LB(0x15) = out[2];
    LB(0x14) = out[1];
    LB(0x13) = out[0];
    LB(0x12) = 7;
    LB(0x11) = 0;
    LB(0x10) = 0;
    if (DateTime_Compare(&l.a, &l.c, 0x38) == -1) {
        out[2] = LB(5);
        out[1] = LB(4);
        out[0] = LB(3);
        LB(0x15) = out[2];
        LB(0x14) = out[1];
        LB(0x13) = out[0];
        LB(0x12) = 7;
        LB(0x11) = 0;
        LB(0x10) = 0;
        return FALSE;
    }
    if (DateTime_Compare(&l.c, &l.b, 0x38) == -1) {
        s32 t = DateTime_Compare(&l.b, &l.a, 0x38);
        if (t == -1) goto yes;
        t = DateTime_Compare(&l.b, &l.a, 0x38);
        if (t == 0) {
        yes:
            return TRUE;
        }
    }
    return FALSE;
#undef LB
}

extern "C" void func_0205b524(u8 *out) {
    Unk_0205b524_T t;
    t.w0 = 0;
    t.w1 = 0;
    Clock_GetDateTime(&t);
    if (((u8 *)&t)[2] < 6) DateTime_SubDays(&t, 1);
    out[0] = ((u8 *)&t)[3];
    out[1] = ((u8 *)&t)[4];
    out[2] = ((u8 *)&t)[5];
}

extern "C" u32 func_0205b504() {
    u32 a = func_0205b4e0();
    u32 b = func_0205b4f8();
    u32 c = func_0205b4ec();
    return a + (b + c);
}

extern "C" u8 func_0205b4f8() { return data_021c5ccc; }

extern "C" u8 func_0205b4ec() { return data_021c5cd0; }

extern "C" u8 func_0205b4e0() { return data_021c5cc8; }

extern "C" void func_0205b470() {
    u32 i;
    data_021c5cc8 = 0;
    data_021c5cd0 = 0;
    data_021c5ccc = 0;
    for (i = 0; i < 5; i++) {
        Unk_0205b448 s;
        void *m = HouseRoomMaps_Get(i);
        if (m != NULL) {
            s.func_0205b2b4((s32)m);
            data_021c5ccc += s.func_0205b448();
            data_021c5cd0 += s.func_0205b444();
            data_021c5cc8 += s.func_0205b440();
        }
    }
}

void Unk_0205b448::func_0205b460() {
    unk_02 = 0;
    unk_01 = unk_02;
    unk_00 = unk_01;
}

Unk_0205b448::Unk_0205b448() {
    func_0205b460();
}

Unk_0205b448::~Unk_0205b448() {}

u8 Unk_0205b448::func_0205b448() { return unk_00; }

u8 Unk_0205b448::func_0205b444() { return unk_01; }

u8 Unk_0205b448::func_0205b440() { return unk_02; }

u8 Unk_0205b448::func_0205b320(s32 m, s32 x0, s32 x1, volatile s32 y0, volatile s32 y1, volatile s32 kind) {
    u32 cnt = 0;
    u8 layer = 0;
    s32 f;
    u32 n, i;
    BOOL ok;
    s32 nx;
    Unk_0205b320_Buf buf;
    s32 y, x;
    s32 ya = y0;
    s32 yb = y1;
    do {
        for (y = ya; (u32)y <= (u32)yb; y++) {
            x = x0;
            if ((u32)x <= (u32)x1) {
                goto L_test;
            L_loop:
                {
                s32 hx = x >> 4;
                s32 hy = y >> 4;
                u16 *cell = (u16 *)BlockMap_GetItemPtr((void *)m, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (cell != NULL && Item_IsFurniture(cell)) {
                    f = Item_GetFurnitureIndex(cell);
                    func_020524a8(&buf, cell);
                    n = func_0205248c(&buf);
                    ok = TRUE;
                    for (i = 0; i < n; i++) {
                        nx = x + func_0205242c(&buf, i)[0];
                        s32 ny = y + func_0205242c(&buf, i)[1];
                        if (nx < x0 || nx > x1 || ny < y0 || ny > y1) {
                            ok = FALSE;
                            break;
                        }
                    }
                    if (ok) {
                        if (FtrInfo_GetUnk01(f) == kind) cnt++;
                        if (FtrInfo_GetUnk02(f) == kind) cnt++;
                    }
                    func_020524a4(&buf);
                }
            }
                x++;
            L_test:
                if ((u32)x <= (u32)x1) goto L_loop;
            }
        }
        layer++;
    } while (layer < 2);
    if (cnt < 0x100) return (u8)cnt;
    return 0xff;
}

void Unk_0205b448::func_0205b2b4(s32 m) {
    s32 v0, v1, v2, v3;
    func_02059a30(&v0, &v1, &v2, &v3, (void *)m);
    unk_00 = func_0205b320(m, v0, v0 + 1, v2, v3, 1);
    unk_01 = func_0205b320(m, v0, v1, v3 - 1, v3, 4);
    unk_02 = func_0205b320(m, v1 - 1, v1, v2, v3, 2);
}

extern "C" Unk_020dc0fc::Unk_020dc0fc() {}

extern "C" Unk_020dc0fc::~Unk_020dc0fc() {}

extern "C" Unk_020dc0b0::Unk_020dc0b0() {}

extern "C" Unk_020dc0b0::~Unk_020dc0b0() {}

extern "C" void *Unk_020dc0b0::vfunc_00(s32 i) {
    return HouseRoomMaps_Get(i);
}

extern "C" void Unk_020dc0b0::vfunc_04(s32 a, s32 key) {
    void *h = _ZN9HouseData13func_0206052cEi(gSaveHouse, key);
    *(u16 *)this = *_ZN9HouseRoom13func_02060850EPi(h, 0);
}

extern "C" void Unk_020dc0b0::vfunc_08(s32 a, s32 key) {
    void *h = _ZN9HouseData13func_0206052cEi(gSaveHouse, key);
    *(u16 *)this = *_ZN9HouseRoom13func_02060834EPi(h, 0);
}

extern "C" Unk_020dc09c::Unk_020dc09c() {}

extern "C" Unk_020dc09c::~Unk_020dc09c() {}

extern "C" void *Unk_020dc09c::vfunc_00(s32 i) {
    return data_021c5cd8;
}

extern "C" void Unk_020dc09c::vfunc_04(s32 a, s32 key) {
    u16 v;
    if (SaveVillagers_Get(gSaveVillagers, key) != 0) {
        u32 t = Villager_GetWallpaper();
        if (t < 0x44) v = (u16)(t + 0x1100);
        else v = 0x1100;
        *(u16 *)this = v;
    } else {
        *(u16 *)this = 0x1100;
    }
}

extern "C" void Unk_020dc09c::vfunc_08(s32 a, s32 key) {
    u16 v;
    if (SaveVillagers_Get(gSaveVillagers, key) != 0) {
        u32 t = Villager_GetCarpet();
        if (t < 0x44) v = (u16)(t + 0x1144);
        else v = 0x1144;
        *(u16 *)this = v;
    } else {
        *(u16 *)this = 0x1144;
    }
}

#pragma thumb off
extern "C" u32 func_0205b130(u32 *p) {
    u32 s = 0;
    u32 i;
    for (i = 0; i < 0xde; i += 4) {
        s += MATH_CountPopulation(*(u32 *)((u8 *)p + i));
    }
    return s * 0x1e61;
}
#pragma thumb reset

extern "C" void func_0205b124(Unk_0205afdc *p) {
    p->unk_10 = 0xfff1;
    p->unk_12 = 0xfff1;
}

extern "C" void func_0205b120() {}

extern "C" u32 func_0205afdc(Unk_0205afdc *p, s32 *out) {
    void *m = HouseRoomMaps_Get(0);
    s32 x = 3;
    u32 flags = 0;
    if (m != NULL) {
        u32 i;
        void *h;
        u8 fl[2];
        u32 cnt;
        s32 v8, vc, v0;
        for (i = 0; i < 0x4a; i++) data_021c6064.w[i] = 0;
        data_021c6064.extra = 0;
        MI_CpuFill8(&data_021c5f3c, 0, 0x128);
        func_02059a30((s32 *)p, &p->unk_08, &p->unk_04, &p->unk_0c, m);
        p->unk_10 = 0x1100;
        p->unk_12 = 0x1144;
        h = _ZN9HouseData13func_0206052cEi(gSaveHouse, 0);
        if (h != NULL) {
            p->unk_10 = *_ZN9HouseRoom13func_02060850EPi(h, 0);
            p->unk_12 = *_ZN9HouseRoom13func_02060834EPi(h, 0);
        }
        fl[0] = 0;
        fl[1] = 0;
        ((RoomScoreEvaluator *)p)->func_02059db0(m, &fl[0], &fl[1]);
        ((RoomScoreEvaluator *)p)->func_0205a3c0(m);
        cnt = 0;
        v8 = ((RoomScoreEvaluator *)p)->func_0205a6bc(m, &cnt);
        vc = ((RoomScoreEvaluator *)p)->func_0205a580(m);
        v0 = ((RoomScoreEvaluator *)p)->func_0205a480(m);
        if (fl[1] != 0) {
            x--;
            flags |= 1;
        }
        if (fl[0] != 0) {
            x--;
            flags |= 2;
        }
        if ((data_021c6064.extra & 0xf) == 0xf) {
            x++;
            flags |= 4;
        }
        if (vc != 0 || v0 != 0) {
            flags |= 8;
            x++;
        }
        if (vc == 0 || v0 == 0) {
            flags |= 0x40;
        }
        if (v8 != 0x4a) {
            x += 2;
            flags |= 0x10;
        } else if (cnt >= 5) {
            flags |= 0x20;
        }
    }
    if (out != NULL) *out = x;
    return flags;
}

extern "C" void func_0205afa0(s32 a) {
    s32 v0;
    Unk_020dc0b0 ops;
    s32 v1, v2, v3;
    func_0205a930((RoomScoreEvaluator *)a, (u16 *)&v0, &v1, &v2, &v3, (Unk_020dc0fc_Ops *)&ops, 5, 0, 1);
}

extern "C" s32 func_0205af28(s32 a, s32 b, s32 *c, s32 *d, s32 *e, s32 *f) {
    s32 r;
    if (data_021c5cd8 == NULL) {
        data_021c5cd8 = VillagerRoomMap_Create(b, gCurrentHeap);
    }
    Unk_020dc09c ops;
    r = func_0205a930((RoomScoreEvaluator *)a, (u16 *)c, d, e, (s32 *)f, (Unk_020dc0fc_Ops *)&ops, 1, b, 0);
    if (data_021c5cd8 != NULL) {
        VillagerRoomMap_Destroy(gCurrentHeap);
        data_021c5cd8 = NULL;
    }
    return r;
}

extern "C" s32 func_0205a930(RoomScoreEvaluator *p, u16 *flags, s32 *pa, s32 *pb, s32 *pc, Unk_020dc0fc_Ops *ops, s32 count, s32 base, u8 flag)
{
    s32 total;
    s32 sel;
    s32 s10, s14, s18, s1c, s20, s24, s28, s2c, s30;
    s32 j;
    s32 idxA, cntA, cntB;
    u32 i;
    s32 pick, n, pick2, n2, t, x, kind, idx;
    u32 zero, zero2;
    s32 r7;
    u8 f[2];
    u32 k;
    *flags = 0;
    *pa = 0;
    *pb = 0;
    *pc = 0;
    MI_CpuFill8(&data_021c5f3c, 0, 0x128);
    Unk_0205a930_Clear(&data_021c5e5c, 0xe0);
    for (k = 0; k < 0x4a; k++) data_021c6064.w[k] = 0;
    data_021c6064.extra = 0;
    total = 0;
    s10 = 0; s14 = 0; s18 = 0; s1c = 0; s20 = 0; s24 = 0; s28 = 0; s2c = 0; s30 = 0; j = 0;
    goto test0;
loop0:
    {
        idx = base + j;
        void *m = ops->vfunc_00(idx);
        p->unk_10 = ops->vfunc_04(idx).unk_00;
        p->unk_12 = ops->vfunc_08(idx).unk_00;
        func_02059a30((s32 *)p, (s32 *)&p->unk_08, (s32 *)&p->unk_04, (s32 *)&p->unk_0c, m);
        Unk_0205b448 obj;
        obj.func_0205b2b4((s32)m);
        p->func_0205a6bc(m, 0);
        p->func_0205a580(m);
        p->func_0205a480(m);
        p->func_02059d1c(m);
        p->func_0205a3c0(m);
        s10 += p->func_0205a344(m);
        s14 += p->func_0205a31c(&obj);
        s18 += p->func_0205a1d0(m);
        s1c += p->func_02059f3c(m, pb, pc);
        s20 += p->func_02059e94(m, pa);
        f[0] = 0;
        f[1] = 0;
        s24 -= p->func_02059db0(m, &f[0], &f[1]);
        if (f[0] != 0) s2c = 1;
        if (f[1] != 0) s30 = 1;
    }
    j++;
test0:
    if (j < count) goto loop0;
    total += s10;
    total += s14;
    total += s18;
    total += s1c;
    total += s20;
    total += s24;
    sel = 0; idxA = 0; cntA = 0; cntB = 0;
    for (i = 0; i < 0x4a; i++) {
        u32 v = Unk_0205a930_Get(i, sel);
        if (v != 0) {
            switch (Series_GetType(i)) {
            case 0:
                cntA++;
                break;
            case 1:
                if (v > 0xbb8) cntB++;
                break;
            case 2:
                s28 += v;
                break;
            }
        }
        total += v;
    }
    if (cntA != 0) {
        pick = func_02063b8c(cntA);
        n = 0;
        for (i = 0; i < 0x4a; i++) {
            u32 v;
            zero = 0;
            v = Unk_0205a930_Get(i, zero);
            if (v != 0 && Series_GetType(i) == 0) {
                if (n == pick) {
                    sel = i;
                    break;
                }
                n = n + 1;
            }
        }
    }
    if (cntB != 0) {
        pick2 = func_02063b8c(cntB);
        n2 = 0;
        for (i = 0; i < 0x4a; i++) {
            u32 v;
            zero2 = 0;
            v = Unk_0205a930_Get(i, zero2);
            if (v != 0 && Series_GetType(i) == 1) {
                if (n2 == pick2) {
                    idxA = i;
                    break;
                }
                n2 = n2 + 1;
            }
        }
    }
    r7 = 0;
    if ((data_021c6064.extra & 0xf) == 0xf) {
        BOOL found = FALSE;
        for (i = 0; i < 0x4a; i++) {
            if ((data_021c6064.w[i] & 0xf) == 0xf) {
                found = TRUE;
                break;
            }
        }
        if (found) r7 += 0x1388;
        else r7 += 0x3e8;
        total += r7;
    }
    t = func_0205b130((u32 *)&data_021c5e5c);
    total += t;
    if (total < 0) total = 0;
    if (flags) {
        if (cntA != 0) {
            u32 v = Unk_0205a930_Get(sel, 0);
            if (v == 0x7530) *flags |= 1;
            else if (v == 0x61a8) *flags |= 2;
            else *flags |= 4;
        }
        if (cntB != 0) *flags |= 8;
        if (s28 >= 0xbb8) *flags |= 0x10;
        if (r7 > 0) *flags |= 0x20;
        if (s14 >= 0x1f4) *flags |= 0x40;
        if (s18 >= 0x7d0) *flags |= 0x80;
        if (s1c >= 0x7d0) *flags |= 0x100;
        if (s20 >= 0xbb8) *flags |= 0x200;
        if ((u32)t >= 0x1b58) *flags |= 0x400;
    }
    if (flag != 0) {
        if (func_0205b55c(data_021ed300) == 0) {
            if (*func_0209c37c(0, 0x22) == 0) goto end;
        }
        {
            x = _ZN9HouseData13func_020604c4Ev(gSaveHouse);
            u16 b;
            s32 nb;
            u32 q;
            kind = 0;
            b = 0;
            if (cntA != 0) {
                u32 v = Unk_0205a930_Get(sel, kind);
                if (v == 0x7530) b |= 1;
                else if (v == 0x61a8) b |= 2;
                else b |= 4;
            }
            if (cntB != 0) b |= 8;
            if (s28 >= 0x1388) b |= 0x10;
            if (r7 > 0) b |= 0x20;
            if (s14 >= 0x7d0) b |= 0x40;
            if (s18 >= 0x1770) b |= 0x80;
            if (s1c >= 0x1770) b |= 0x100;
            if (s20 >= 0xc80) b |= 0x200;
            if ((u32)t >= 0x1b58) b |= 0x400;
            if (s2c != 0) b |= 0x1000;
            if (s30 != 0) b |= 0x800;
            nb = 0;
            for (q = 0; q < 13; q++) {
                if (b & (1 << q)) nb++;
            }
            func_02034038(total);
            func_0203402c(b);
            {
                BOOL ok;
                if (nb != 0) {
                    if (func_02063b8c(2) == 0) ok = TRUE;
                    else ok = FALSE;
                } else {
                    ok = TRUE;
                }
                if (ok) {
                    if (total == 0) kind = 0;
                    else if (total <= 0x4e1f) kind = x + 1;
                    else if (total <= 0x1116f) kind = 8;
                    else if (total <= 0x1869f) kind = 9;
                    else kind = 10;
                } else {
                    s32 pk = func_02063b8c(nb);
                    nb = 0;
                    for (q = 0; q < 13; q++) {
                        if (b & (1 << q)) {
                            if (pk == nb) {
                                kind = q;
                                kind = q + 0xb;
                                break;
                            }
                            nb++;
                        }
                    }
                }
            }
            if ((u32)(kind - 0xb) > 2) sel = idxA;
            if (func_02059c14(p, kind, total, sel, *pa) != 0) {
                func_02059adc(p, total);
                func_0205b524(data_021ed300);
            }
        }
    }
end:
    return total;
}

s32 RoomScoreEvaluator::func_0205a6bc(void *grid, u32 *out)
{
    u32 max;
    u16 acc[0x94 / 2];
    u8 layer;
    u32 y, x;
    s32 i;
    u32 j;
    MI_CpuFill8(acc, 0, 0x94);
    max = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && Item_IsFurniture(p)) {
                    s32 id = Ftr_GetSeries(p);
                    if (Series_GetType(id) == 0) {
                        u32 b = Ftr_GetIndexInSeries(p);
                        acc[id] |= 1 << b;
                    }
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    if (Unk_0205a6bc_Range(&unk_10, 0x1100, 0x1143)) {
        s32 k = ItemInfo_GetSeries(&unk_10);
        if (Series_GetType(k) == 0) acc[k] |= data_020cab80[0];
    }
    if (Unk_0205a6bc_Range(&unk_12, 0x1144, 0x1187)) {
        s32 k = ItemInfo_GetSeries(&unk_12);
        if (Series_GetType(k) == 0) acc[k] |= data_020cab84[0];
    }
    for (j = 0; j < 0x4a; j++) {
        if (Series_GetType(ItemInfo_GetSeries(&unk_12)) == 0) {
            u32 cnt = 0;
            u32 k = 0;
            s32 w = acc[j];
            for (; k < 12; k++) {
                if ((w >> k) & 1) cnt++;
            }
            if (cnt > max) max = cnt;
        }
    }
    if (out) *out = max;
    for (i = 0; (u32)i < 0x4a; i++) {
        if (Series_GetType(i) == 0 && acc[i] == 0xfff) {
            if (Unk_0205a6bc_Max(i, 30000)) return i;
        }
    }
    for (i = 0; (u32)i < 0x4a; i++) {
        if (Series_GetType(i) == 0) {
            u32 w = acc[i];
            if ((w & 0x3ff) == 0x3ff) {
                if ((w & 0x400) != 0 || (w & 0x800) != 0) {
                    if (Unk_0205a6bc_Max(i, 25000)) return 0x4a;
                }
            }
        }
    }
    for (i = 0; (u32)i < 0x4a; i++) {
        if (Series_GetType(i) == 0 && acc[i] == 0x3ff) {
            if (Unk_0205a6bc_Max(i, 20000)) return 0x4a;
        }
    }
    return 0x4a;
}

s32 RoomScoreEvaluator::func_0205a580(void *grid)
{
    u16 acc[0x94 / 2];
    u8 layer;
    u32 y, x;
    u32 i;
    s32 res;
    s32 lo, hi;
    volatile u32 zeroA, zeroB;
    MI_CpuFill8(acc, 0, 0x94);
    lo = ItemInfo_GetSeries(&unk_10);
    hi = ItemInfo_GetSeries(&unk_12);
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && Item_IsFurniture(p)) {
                    s32 id = Ftr_GetSeries(p);
                    if (Series_GetType(id) == 1) {
                        u32 b = Ftr_GetIndexInSeries(p);
                        acc[id] |= 1 << b;
                    }
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    res = 0;
    i = 0;
    zeroA = 0;
    zeroB = 0;
    for (; i < 0x4a; i++) {
        if (Series_GetType(i) == 1) {
            u32 bits = zeroA;
            u32 k;
            u32 n = FtrInfo_CountInSeries(i);
            for (k = zeroB; k < n; k++) {
                bits = (u16)(bits | (1 << k));
            }
            if (acc[i] >= bits) {
                if (i == lo && i == hi) {
                    if ((s32)i < 0x4a) {
                        u32 v = (n + 1) * 3000;
                        if (data_021c5f3c.w[i] < v) data_021c5f3c.w[i] = v;
                    }
                    res = 1;
                }
            } else {
                if (i == lo && i == hi) {
                    if ((s32)i < 0x4a) {
                        if (data_021c5f3c.w[i] < 3000) data_021c5f3c.w[i] = 3000;
                    }
                }
            }
        }
    }
    return res;
}

s32 RoomScoreEvaluator::func_0205a480(void *grid)
{
    u16 acc[0x94 / 2];
    u8 layer;
    u32 y, x;
    u32 i;
    s32 res;
    MI_CpuFill8(acc, 0, 0x94);
    res = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && Item_IsFurniture(p)) {
                    s32 id = Ftr_GetSeries(p);
                    if (Series_GetType(id) == 2) {
                        u32 b = Ftr_GetIndexInSeries(p);
                        acc[id] |= 1 << b;
                    }
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    for (i = 0; i < 0x4a; i++) {
        if (Series_GetType(i) == 2) {
            u32 bits = 0;
            u32 k;
            u32 n = FtrInfo_CountInSeries(i);
            for (k = 0; k < n; k++) {
                bits = (u16)(bits | (1 << k));
            }
            if (acc[i] >= bits) {
                res = 1;
                if ((s32)i < 0x4a) {
                    u32 v = n * 1000;
                    if (data_021c5f3c.w[i] < v) data_021c5f3c.w[i] = v;
                }
            }
        }
    }
    return res;
}

void RoomScoreEvaluator::func_0205a3c0(void *grid)
{
    u8 layer;
    u32 y, x;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && Item_IsFurniture(p)) {
                    s32 id = Item_GetFurnitureIndex(p);
                    s32 kind = FtrInfo_GetUnk06(id);
                    s32 idx = FtrInfo_GetSeries(id);
                    s32 bit = 0;
                    if (kind == 1) bit = 1;
                    else if (kind == 2) bit = 2;
                    else if (kind == 3) bit = 4;
                    else if (kind == 4) bit = 8;
                    *(volatile u32 *)&data_021c6064.w[idx] = bit | *(volatile u32 *)&data_021c6064.w[idx];
                    data_021c6064.extra |= bit;
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
}

s32 RoomScoreEvaluator::func_0205a344(void *grid)
{
    u8 layer;
    u32 y, x;
    s32 total = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && Item_IsFurniture(p)) {
                    total += FtrClass_GetBasePoints(FtrInfo_GetClass(Item_GetFurnitureIndex(p)));
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    return total;
}

s32 RoomScoreEvaluator::func_0205a31c(Unk_0205b448 *o)
{
    s32 a = o->func_0205b440();
    s32 b = o->func_0205b448();
    return (a + (b + o->func_0205b444())) * 100;
}

s32 RoomScoreEvaluator::func_0205a1d0(void *grid)
{
    u32 n;
    u8 layer;
    u32 y, x, k, i, j;
    u8 counts[13];
    u16 ids[24];
    s32 cnt;
    MI_CpuFill8(counts, 0, 13);
    for (i = 0; i < 24; i++) {
        ids[i] = 0xffff;
    }
    n = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && Item_IsFurniture(p)) {
                    s32 id = Item_GetFurnitureIndex(p);
                    s32 t, u;
                    for (k = 0; k < 24; k++) {
                        u16 v = ids[k];
                        if (id == v) break;
                        if (v == 0xffff) {
                            ids[k] = id;
                            break;
                        }
                    }
                    t = FtrInfo_GetUnk01(id);
                    u = FtrInfo_GetUnk02(id);
                    counts[t]++;
                    counts[u]++;
                    n++;
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    if (n >= 10) {
        cnt = 0;
        for (k = 0; k < 24; k++) {
            if (ids[k] != 0xffff) cnt++;
        }
        j = 0;
        for (; j < 13; j++) {
            if (j != 0) {
                s32 q = FX_Div(counts[j] << 12, n << 13);
                if (q >= 0xe66) return cnt * 600;
                if (q >= 0xb33) return cnt * 200;
            }
        }
    }
    return 0;
}

s32 RoomScoreEvaluator::func_02059f3c(void *grid, s32 *out1, s32 *out2)
{
    u8 a_[3];
    u8 b_[3];
    u16 arr_[24];
    u32 y;
    u32 x;
    s32 total;
    s32 cnt;
    u8 layer;
    u8 layer2;
    u16 *p3;
    u16 *p4;
    s32 n;
    s32 k;
    u32 i;
    s32 v;
    u32 j;
    MI_CpuFill8(a_, 0, 3);
    MI_CpuFill8(b_, 0, 3);
    for (i = 0; i < 24; i++) arr_[i] = 0xffff;
    total = 0;
    for (i = 0; i < 24; i++) arr_[i] = 0xffff;
    cnt = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            goto test3;
        loop3:
            {
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                p3 = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p3 && Item_IsFurniture(p3)) {
                    v = Item_GetFurnitureIndex(p3);
                    for (j = 0; j < 24; j++) {
                        u16 *q = &arr_[j];
                        if (v == arr_[j]) break;
                        if (arr_[j] == 0xffff) { *q = v; break; }
                    }
                    k = Ftr_GetFlagPairA(p3);
                    a_[k] = a_[k] + 1;
                    cnt++;
                }
            }
            x++;
        test3:
            if (x <= unk_08) goto loop3;
            }
        }
    }
    if ((u32)cnt >= 10) {
        n = 0;
        for (i = 0; i < 24; i++) if (arr_[i] != 0xffff) n++;
        for (i = 0; i < 3; i++) {
            if (i != 0) {
                s32 r = FX_Div(a_[i] << 12, cnt << 12);
                if (r >= 0xe66) { *out1 = i; total += n * 300; }
                else if (r >= 0xb33) { *out1 = i; total += n * 100; }
            }
        }
    }
    for (i = 0; i < 24; i++) arr_[i] = 0xffff;
    cnt = 0;
    for (layer2 = 0; layer2 < 2; layer2++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            goto test4;
        loop4:
            {
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                p4 = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer2);
                if (p4 && Item_IsFurniture(p4)) {
                    v = Item_GetFurnitureIndex(p4);
                    for (j = 0; j < 24; j++) {
                        u16 *q = &arr_[j];
                        if (v == arr_[j]) break;
                        if (arr_[j] == 0xffff) { *q = v; break; }
                    }
                    k = Ftr_GetFlagPairB(p4);
                    b_[k] = b_[k] + 1;
                    cnt++;
                }
            }
            x++;
        test4:
            if (x <= unk_08) goto loop4;
            }
        }
    }
    if ((u32)cnt >= 10) {
        u32 ii;
        s32 nn = 0;
        for (i = 0; i < 24; i++) if (arr_[i] != 0xffff) nn++;
        for (ii = 0; ii < 3; ii++) {
            if (ii != 0) {
                s32 r = FX_Div(b_[ii] << 12, cnt << 12);
                if (r >= 0xe66) { *out2 = ii; total += nn * 300; }
                else if (r >= 0xb33) { *out2 = ii; total += nn * 100; }
            }
        }
    }
    return total;
}

s32 RoomScoreEvaluator::func_02059e94(void *grid, s32 *out)
{
    u8 counts[5];
    u8 layer;
    u32 y, x;
    s32 total;
    u32 i;
    MI_CpuFill8(counts, 0, 5);
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            goto test2;
        loop2:
            {
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                u16 *p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && Item_IsFurniture(p)) {
                    s32 k = Ftr_GetUnk03(p);
                    counts[k] = counts[k] + 1;
                }
            }
            x++;
        test2:
            if (x <= unk_08) goto loop2;
            }
        }
    }
    total = 0;
    for (i = 0; i < 5; i++) {
        if (i != 4) {
            u8 *q = &counts[i];
            if (counts[i] >= 8) {
                *out = i;
                total += *q * 400;
            }
        }
    }
    return total;
}

s32 RoomScoreEvaluator::func_02059db0(void *grid, u8 *f1, u8 *f2)
{
    u8 layer;
    u32 y, x;
    s32 total = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            goto test1;
        loop1:
            {
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                u16 *p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p) {
                    if (Item_IsFurniture(p)) {
                        if (FtrInfo_TestAlwaysFlag4(Item_GetFurnitureIndex(p))) {
                            s32 r = Item_GetFurnitureDirection(p);
                            if (x == unk_00 && r == 3) { *f1 = 1; total += 100; }
                            if (x == unk_08 && r == 1) { *f1 = 1; total += 100; }
                            if (y == unk_04 && r == 2) { *f1 = 1; total += 100; }
                            if (y == unk_0c && r == 0) { *f1 = 1; total += 100; }
                        }
                    } else if (Item_IsNormalItem(p)) {
                        *f2 = 1;
                        total += 1;
                    }
                }
            }
            x++;
        test1:
            if (x <= unk_08) goto loop1;
            }
        }
    }
    return total;
}

void RoomScoreEvaluator::func_02059d1c(void *grid)
{
    u8 layer;
    u32 y, x;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            goto test0;
        loop0:
            {
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                u16 *p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && Item_IsFurniture(p)) {
                    s32 v = Item_GetFurnitureIndex(p);
                    if (FtrInfo_TestIndoorFlag0(v)) {
                        data_021c5e5c.b[v >> 3] |= 1 << (v & 7);
                    }
                }
            }
            x++;
        test0:
            if (x <= unk_08) goto loop0;
            }
        }
    }
}

extern "C" BOOL func_02059c14(void *self, s32 a, s32 b, s32 c, s32 n)
{
    u32 objA[0xb];
    u32 objB[9];
    u32 objC[0xd];
    u32 objD[0x3e];
    u8 by[2];
    s32 i;
    s32 z = 0;
    _ZN11MsgString25C1Ev(objA);
    if (String_FormatNumber(objA, b, 10, 1, 0, 0)) {
        MailText_SetSlot(1, objA);
        _ZN8ItemNameC1Ei(objB, c);
        MailText_SetSlot(2, objB);
        if (n < 4) {
            _ZN11MsgString33C1Ev(objC);
            by[1] = n;
            String_LoadResolveAltText(objC, &by[1], "st_furniture_letter");
            MailText_SetSlot(3, objC);
            _ZN11MsgString33D1Ev(objC);
        }
        for (i = 0; i < 4; i++) {
            void *p = PlayerData_GetResident(gSavePlayers, i);
            if (p && _ZN10PlayerData13func_02098a48Ev(p)) {
                if (func_0209c37c(z, 0x22)[0] != 0 || _ZN12Unk_02097ff48testFlagEj(p, 0xe)) {
                    _ZN6LetterC1Ev(objD);
                    by[0] = a;
                    Letter_ComposeFromMail(objD, &by[0], "ev_happyroom", data_020dc088, data_020dc07c, _ZN10PlayerData11getPlayerIdEv(p));
                    LetterDelivery_PutInAddresseeMailbox(objD);
                    _ZN6LetterD1Ev(objD);
                }
            }
        }
        _ZN8ItemNameD1Ev(objB);
        _ZN11MsgString25D1Ev(objA);
        return TRUE;
    }
    _ZN11MsgString25D1Ev(objA);
    return FALSE;
}

extern "C" void func_02059adc(void *self, s32 n)
{
    s32 id;
    s32 t;
    s32 off;
    id = -1;
    t = 1;
    off = 0xfff1;
    if (_ZN8SaveData8testFlagEj(gSaveData, 1) == 0) {
        if (n >= 0x11170) { id = 0x18; t = 1; off = 0x3854; }
    } else if (_ZN8SaveData8testFlagEj(gSaveData, 2) == 0) {
        if (n >= 0x186a0) { id = 0x19; t = 2; off = 0x3858; }
    } else if (_ZN8SaveData8testFlagEj(gSaveData, 0xb) == 0) {
        if (n >= 0x249f0) { id = 0x1a; t = 0xb; off = 0x385c; }
    }
    if (id != -1) {
        s32 i;
        s32 zero = 0;
        for (i = 0; i < 4; i++) {
            void *p = PlayerData_GetResident(gSavePlayers, i);
            u32 obj[0x3e];
            u8 b;
            if (p && _ZN10PlayerData13func_02098a48Ev(p) && _ZN12Unk_02097ff48testFlagEj(p, 0xe) && !LetterDelivery_IsMailboxFull(i)) {
                _ZN6LetterC1Ev(obj);
                b = id;
                Letter_ComposeFromMail(obj, &b, "ev_happyroom", data_020dc084, data_020dc08c, _ZN10PlayerData11getPlayerIdEv(p));
                _ZN12Unk_0206555410setPresentEtj(obj, off, 1);
                if (LetterDelivery_PutInAddresseeMailbox(obj)) {
                    _ZN8SaveData7setFlagEj(gSaveData, t);
                    _ZN6LetterD1Ev(obj);
                    break;
                }
                if (LetterDelivery_QueueOutgoing(obj, zero)) {
                    _ZN8SaveData7setFlagEj(gSaveData, t);
                    _ZN6LetterD1Ev(obj);
                    break;
                }
                _ZN6LetterD1Ev(obj);
            }
        }
    }
}

extern "C" BOOL func_02059a30(s32 *a, s32 *b, s32 *c, s32 *d, void *grid)
{
    BOOL f0, f1, f2, f3;
    s32 y, x;
    *c = 16;
    *a = *c;
    *d = -16;
    *b = *d;
    f0 = FALSE; f1 = FALSE; f2 = FALSE; f3 = FALSE;
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            if (_ZN8BlockMap13func_0204e474Eii(grid, x, y)) {
                if (x <= *a) { *a = x; f0 = TRUE; }
                if (x >= *b) { *b = x; f1 = TRUE; }
                if (y <= *c) { *c = y; f2 = TRUE; }
                if (y >= *d) { *d = y; f3 = TRUE; }
            }
        }
    }
    f0 = f0 & f1;
    f2 = f2 & f0;
    f3 = f3 & f2;
    if (f3) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020599b0()
{
    u32 obj[0x3d];
    u8 b;
    void *p = PlayerData_GetCurrent();
    if (p && _ZN12Unk_02097ff48testFlagEj(p, 3) && !_ZN12Unk_02097ff48testFlagEj(p, 0xe)) {
        _ZN6LetterC1Ev(obj);
        b = 0x1b;
        Letter_ComposeFromMail(obj, &b, "ev_happyroom", data_020dc080, data_020dc090, _ZN10PlayerData11getPlayerIdEv(p));
        if (LetterDelivery_PutInAddresseeMailbox(obj)) {
            _ZN12Unk_02097ff47setFlagEj(p, 0xe);
            _ZN6LetterD1Ev(obj);
            return TRUE;
        }
        _ZN6LetterD1Ev(obj);
    }
    return FALSE;
}

extern "C" BOOL func_02059900(const void *r0, u8 r1, s32 r2, s32 r3, u16 *p, s32 v)
{
    if (SaveVillagers_Find(gSaveVillagers, r3)) {
        u8 buf[2];
        u32 obj[0x3d];
        _ZN10VillagerId12makeFileNameEPvjj(r3, data_021c5dec, 0x28, (s32)r0);
        buf[0] = r1;
        VillagerId_GetPersonality(r3);
        buf[1] = LetterPaper_PickForPersonality();
        if (v != -1) buf[1] = v;
        _ZN6LetterC1Ev(obj);
        func_02065920(obj, buf, data_021c5dec, &buf[1], r3, r2, 1);
        if (p) _ZN12Unk_0206555410setPresentEtj(obj, *p, 1);
        if (LetterDelivery_PutInAddresseeMailbox(obj)) {
            _ZN6LetterD1Ev(obj);
            return TRUE;
        }
        if (LetterDelivery_QueueOutgoing(obj, 0)) {
            _ZN6LetterD1Ev(obj);
            return TRUE;
        }
        _ZN6LetterD1Ev(obj);
    }
    return FALSE;
}

extern "C" BOOL func_0205989c(s32 a, s32 b)
{
    void *r = SaveVillagers_Find(gSaveVillagers, b);
    if (r) {
        MailText_SetSlotMonth(2, *(u8 *)Villager_GetBirthday(r));
        MailText_SetSlotDayOrdinal(3, ((u8 *)Villager_GetBirthday(r))[1]);
        return func_02059900("ev_nbirth", func_02063b8c(3), a, b, 0, 0x1a);
    }
    return FALSE;
}

extern "C" s32 func_020594dc(u32 a, s32 b, s32 c)
{
    if (a < 1) {
        return 0;
    }
    if (a > 5) {
        return 0;
    }
    Unk_020594dc_H res(0xfff1);
    func_02063b8c(3);
    func_02063b8c(3);
    switch (a) {
    case 1:
        res = ItemPick_One(ItemPickSpec(0, 0), 0, 0, 1, 1, 0);
        break;
    case 2: {
        static ItemPickSpec t[3] = { ItemPickSpec(0, 1), ItemPickSpec(0, 2), ItemPickSpec(0, 3) };
        res = ItemPick_One(t[func_02063b8c(3)], 0, 0, 1, 1, 0);
        break;
    }
    case 3: {
        static ItemPickSpec t[3] = { ItemPickSpec(0, 0), ItemPickSpec(4, 0), ItemPickSpec(3, 0) };
        res = ItemPick_One(t[func_02063b8c(3)], 0, 0, 1, 1, 0);
        break;
    }
    case 4: {
        static ItemPickSpec t[9] = { ItemPickSpec(0, 1), ItemPickSpec(0, 2), ItemPickSpec(0, 3),
                                     ItemPickSpec(4, 1), ItemPickSpec(4, 2), ItemPickSpec(4, 3),
                                     ItemPickSpec(3, 1), ItemPickSpec(3, 2), ItemPickSpec(3, 3) };
        res = ItemPick_One(t[func_02063b8c(9)], 0, 0, 1, 1, 0);
        break;
    }
    case 0:
    default: {
        s32 r6 = func_0209788c(gSavePlayers, b);
        u32 r4 = data_020cab74[func_02063b8c(3)];
        ItemPickSpec o(r4, 0);
        s32 x;
        res = ItemPick_One(o, r6, 0, 1, 1, (s32)&x);
        if (res.v == 0xfff1) {
            res = ItemPick_OneSimple(ItemPickSpec(r4, x));
        }
        break;
    }
    }
    return func_02059900("re_q10", func_02063b8c(3), b, c, (u16 *)&res, -1);
}

