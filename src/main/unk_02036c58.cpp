// mwcc-flags: -str reuse
#include "types.h"

extern "C" {
void func_02133ef8(void *, u32);
void Bgm_ReleasePriority(u32);
void Bgm_RequestSilence(u32, u32, u32);
void Bgm_Request(u32, u32, u32, u32);
void Bgm_Release(u32 a);
s32 Clock_GetYear(void);
void Clock_GetDayMonth(u16 *);
void Clock_GetMinuteHour(u16 *);
s32 Clock_GetSecond(void);
void BgHeap_Destroy(void);
void func_020639e8(void *buf, const void *fmt, ...);
s32 func_02101340(void *, const void *, void *);
void func_02101310(void *);
void *func_021012bc(const void *);
void *NNS_G3dGetMdlSet(void *);
void *func_021065dc(void *);
void *func_021065f8(void *, s32);
void *func_02106618(void *);
void *func_02106634(void *, s32);
void *func_02106654(void *);
void *func_02106670(void *, s32);
void *func_02106690(void *);
void *func_021066ac(void *, s32);
void *NNS_G3dGetTex(void *);
void Gfx3d_LoadTexAndPltt(void *, s32);
void *Gfx3d_CopyTex(void *, void *);
void Mem_Free(void *);
void *Heap_Alloc(void *, u32);
void MI_CpuCopy8(void *, void *, u32);
void *_ZN7TownMap12getGrassTypeEv(void *);
extern u16 sNewYearEveDate, sNewYearDayDate, sNewYearEveTime;
extern u16 sHourlyBgmIds[];
extern void *gBgHeap;
extern void *gCurrentHeap;
struct Unk_021e5890_T { u8 pad[0x14]; u8 unk_14; };
extern Unk_021e5890_T data_021e5890;}

extern "C" {
void *File_LoadAlloc(void *, void *, s32, void *);
extern char gSaveTownMap[];
s32 Scene_GetCurrent(void);
void _ZN7TownMap13func_0204df30Ev(char *);
void BgHeap_Create(s32, s32);
}
extern "C" void *BgModel_LoadFile(void *a, void *b);
extern "C" void *BgModel_LoadBcl(s32 id, void *heap);
extern "C" s32 BgModel_GetGrassType(void *);
class BgModelCacheObj;
extern BgModelCacheObj gBgModelCache;
extern const u8 sBgHeapSizeByRoom[];

struct Unk_02037674_V3 {
    s32 x, y, z;
};
struct Unk_02037638_S8 {
    s32 a, b;
};

struct Unk_0203718c_Ent {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c, unk_20, unk_24, unk_28, unk_2c;
};
struct Unk_0203718c_Ent2 {
    u32 unk_00, unk_04;
};

class BgModelCacheObj {
public:
    BgModelCacheObj();
    ~BgModelCacheObj();
    BOOL setup(u32 flag);
    void clearEntries();

    Unk_0203718c_Ent unk_000[31];
    Unk_0203718c_Ent2 unk_5d0[9];
    u8 unk_618;
    u8 pad_619[3];
    u32 unk_61c;
    u32 unk_620;
    u32 unk_624;
    u32 unk_628;
    u32 unk_62c;
    u32 unk_630;
    u32 unk_634;
    u32 unk_638;
    u32 unk_63c;
    u32 unk_640;
    u32 unk_644;
    u32 unk_648;
};

struct Unk_02036c60_Vec { s32 x, y, z; };

struct Unk_02036c60_Ent { u8 a; u8 pad; s16 b; s16 c; };

// ---- BgModelCache ----
struct Unk_02036cec_Entry {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    void *unk_14;
    void *unk_18;
    void *unk_1c;
    void *unk_20;
    u8 unk_24[4];
    void *unk_28;
    s32 unk_2c;
};

struct Unk_02036cec_Small {
    s32 unk_00;
    void *unk_04;
};

struct BgModelCache {
    Unk_02036cec_Entry unk_000[31];
    Unk_02036cec_Small unk_5d0[9];
    u8 unk_618;
    u8 pad_619[3];
    s32 unk_61c;
    u8 pad_620[0x10];
    s32 unk_630;
    s32 unk_634;
    s32 unk_638;
    s32 unk_63c;
    s32 unk_640;
    s32 unk_644;
    s32 unk_648;

    s32 getBeBPatTex();
    s32 getBeBPatAnm();
    s32 getRiverPatTex();
    s32 getRiverPatAnm();
    s32 getGroundTexSrtAnm();
    s32 getGroundMatAnm();
    s32 getGroundTex();
    BOOL reset();
    Unk_02036cec_Entry *getAcre(s32 id);
    void *getAcreBcl(s32 id);
    void loadGroundAnims();
    void loadGroundTexture();
};

extern "C" void *BgModel_LoadFile(void *a, void *b) {
    return File_LoadAlloc(a, gBgHeap, 4, b);
}

BgModelCacheObj::BgModelCacheObj() {
    clearEntries();
}

BgModelCacheObj::~BgModelCacheObj() {}

void BgModelCacheObj::clearEntries() {
    Unk_0203718c_Ent *p; Unk_0203718c_Ent2 *q; u32 i; u32 j;
    p = unk_000;
    for (i = 0; i < 0x1f; p++, i++) {
        p->unk_00 = 0xffff;
        p->unk_04 = 0;
        p->unk_08 = 0;
        p->unk_0c = 0;
        p->unk_14 = 0;
        p->unk_18 = 0;
        p->unk_1c = 0;
        p->unk_10 = 0;
        p->unk_20 = 0;
        p->unk_28 = 0;
        p->unk_2c = 0;
    }
    q = unk_5d0;
    for (j = 0; j < 9; q++, j++) {
        q->unk_00 = 0xffff;
        q->unk_04 = 0;
    }
    unk_630 = 0;
    unk_634 = 0;
    unk_638 = 0;
    unk_63c = 0;
    unk_640 = 0;
    unk_618 = 0;
    unk_61c = 0;
    unk_620 = 0;
    unk_624 = 0;
    unk_628 = 0;
    unk_62c = 0;
}

BOOL BgModelCacheObj::setup(u32 flag) {
    s32 t = Scene_GetCurrent();
    if (t == 0x2c) {
        _ZN7TownMap13func_0204df30Ev(gSaveTownMap);
    }
    clearEntries();
    unk_618 = flag;
    t = Scene_GetCurrent();
    u32 v;
    if ((u32)t < 0x33) {
        v = sBgHeapSizeByRoom[t];
    } else {
        v = 0xac;
    }
    unk_61c = (u8)v << 10;
    BgHeap_Create(unk_61c, 0);
    if (flag != 0 || t == 0xb || t == 0x2f || (u8)(t + 0xf4) <= 2) {
        ((BgModelCache *)this)->loadGroundTexture();
    }
    if (flag != 0) {
        ((BgModelCache *)this)->loadGroundAnims();
    }
    return TRUE;
}

extern "C" s32 BgModel_GetGrassType(void *)
{
    return (s32)_ZN7TownMap12getGrassTypeEv(gSaveTownMap);
}

void BgModelCache::loadGroundTexture()
{
    u8 buf[0x20];
    s32 a = BgModel_GetGrassType(this);
    s32 b = BgModel_GetGrassType(this);
    void *p;
    func_020639e8(buf, "/bg/ct%d/grd_set%d%c.nsbtx", a, b, ((u32)(data_021e5890.unk_14 << 24) >> 26) + 0x61);
    p = File_LoadAlloc(buf, gCurrentHeap, -4, 0);
    s32 *q = &unk_630;
    *q = (s32)NNS_G3dGetTex(p);
    Gfx3d_LoadTexAndPltt((void *)*q, 0);
    unk_630 = (s32)Gfx3d_CopyTex((void *)unk_630, gBgHeap);
    if (p) {
        Mem_Free(p);
    }
}

void BgModelCache::loadGroundAnims()
{
    u8 file[0x68];
    void *p = BgModel_LoadFile((void *)"/bg/grd_anm.arc", 0);
    if (func_02101340(file, "BG", p)) {
        unk_634 = (s32)func_02106634(func_02106618(func_021012bc("BG:a/grd_set.nsbma")), 0);
        unk_638 = (s32)func_02106670(func_02106654(func_021012bc("BG:a/grd_set.nsbta")), 0);
        unk_63c = (s32)func_021066ac(func_02106690(func_021012bc("BG:a/riv.nsbtp")), 0);
        unk_640 = (s32)NNS_G3dGetTex(func_021012bc("BG:a/riv_itp.nsbtx"));
        unk_644 = (s32)func_021066ac(func_02106690(func_021012bc("BG:a/beB.nsbtp")), 0);
        unk_648 = (s32)NNS_G3dGetTex(func_021012bc("BG:a/beB_itp.nsbtx"));
        func_02101310(file);
    }
}

void *BgModel_LoadBcl(s32 id, void *heap)
{
    u8 buf[0x20];
    u8 file[0x68];
    void *p, *r, *t;
    func_020639e8(buf, "/bg/a%d/%04x.arc", id >> 4, id);
    p = File_LoadAlloc(buf, gCurrentHeap, -4, 0);
    r = 0;
    if (func_02101340(file, "BG", p)) {
        t = func_021012bc("BG:a/bcl/bcl0");
        func_02101310(file);
        r = Heap_Alloc(heap, 0x180);
        MI_CpuCopy8(t, r, 0x180);
    }
    if (p) {
        Mem_Free(p);
    }
    return r;
}

void *BgModelCache::getAcreBcl(s32 id)
{
    u32 i, j;
    void *r = 0;
    Unk_02036cec_Entry *e = unk_000;
    Unk_02036cec_Small *s;
    for (i = 0; i < 0x1f; e++, i++) {
        if (e->unk_00 == id) {
            r = e->unk_0c;
            break;
        }
    }
    s = unk_5d0;
    for (j = 0; j < 9; s++, j++) {
        if (s->unk_04 == 0) {
            if (r) {
                s->unk_00 = id;
                s->unk_04 = r;
            } else {
                s->unk_04 = BgModel_LoadBcl(id, gBgHeap);
                s->unk_00 = id;
            }
            return s->unk_04;
        }
        if (s->unk_00 == id) {
            return s->unk_04;
        }
    }
    return 0;
}

Unk_02036cec_Entry *BgModelCache::getAcre(s32 id)
{
    void *heap = gBgHeap;
    Unk_02036cec_Entry *e = unk_000;
    struct { s32 tmp; u8 buf[0x20]; u8 file[0x68]; } l;
    u32 i;
    for (i = 0; i < 0x1f; e++, i++) {
        if (e->unk_04 == 0) {
            s32 hi = id >> 4;
            void *p;
            func_020639e8(l.buf, "/bg/a%d/%04x.arc", hi, id);
            e->unk_04 = BgModel_LoadFile(l.buf, e->unk_24);
            if (func_02101340(l.file, "BG", e->unk_04)) {
                u8 *q = (u8 *)NNS_G3dGetMdlSet(func_021012bc("BG:a/bmd/bmd0"));
                e->unk_08 = q + *(s32 *)(q + *(u16 *)(q + 0xe) + 0xc);
                e->unk_0c = func_021012bc("BG:a/bcl/bcl0");
                e->unk_10 = func_021012bc("BG:a/bsd/bsd0");
                p = func_021012bc("BG:a/bca/bca0");
                if (p) {
                    e->unk_14 = func_021065f8(func_021065dc(p), 0);
                }
                p = func_021012bc("BG:a/bma/bma0");
                if (p) {
                    e->unk_18 = func_02106634(func_02106618(p), 0);
                }
                p = func_021012bc("BG:a/bta/bta0");
                if (p) {
                    e->unk_1c = func_02106670(func_02106654(p), 0);
                }
                p = func_021012bc("BG:a/mgt/mgt0");
                if (p) {
                    e->unk_28 = (u8 *)p + 2;
                    e->unk_2c = *(s16 *)p;
                }
                func_02101310(l.file);
            }
            if (((id & 0xf000) >> 12) == 1) {
                func_020639e8(l.buf, "/bg/t%d/%04x.nsbtx", hi, id);
                p = File_LoadAlloc(l.buf, gCurrentHeap, -4, 0);
                if (p) {
                    l.tmp = (s32)NNS_G3dGetTex(p);
                    Gfx3d_LoadTexAndPltt((void *)l.tmp, 0);
                    e->unk_20 = Gfx3d_CopyTex((void *)l.tmp, heap);
                    if (p) {
                        Mem_Free(p);
                    }
                }
            }
            e->unk_00 = id;
            return e;
        }
        if (e->unk_00 == id) {
            return e;
        }
    }
    return 0;
}

BOOL BgModelCache::reset()
{
    Unk_02036cec_Entry *e = unk_000;
    Unk_02036cec_Small *s;
    u32 i, j;
    for (i = 0; i < 0x1f; e++, i++) {
        e->unk_00 = 0xffff;
        e->unk_04 = 0;
        e->unk_08 = 0;
        e->unk_0c = 0;
        e->unk_14 = 0;
        e->unk_18 = 0;
        e->unk_1c = 0;
        e->unk_10 = 0;
        e->unk_28 = 0;
        e->unk_2c = 0;
        e->unk_20 = 0;
    }
    s = unk_5d0;
    for (j = 0; j < 9; s++, j++) {
        s->unk_00 = 0xffff;
        s->unk_04 = 0;
    }
    unk_630 = 0;
    unk_618 = 0;
    unk_61c = 0;
    BgHeap_Destroy();
    return TRUE;
}

s32 BgModelCache::getGroundTex() { return unk_630; }

s32 BgModelCache::getGroundMatAnm() { return unk_634; }

s32 BgModelCache::getGroundTexSrtAnm() { return unk_638; }

s32 BgModelCache::getRiverPatAnm() { return unk_63c; }

s32 BgModelCache::getRiverPatTex() { return unk_640; }

s32 BgModelCache::getBeBPatAnm() { return unk_644; }

s32 BgModelCache::getBeBPatTex() { return unk_648; }

extern "C" s32 BgMgt_GetCount(s16 *p)
{
    return *p;
}

Unk_02036c60_Vec BgMgt_GetEntry(u8 *base, s32 idx)
{
    Unk_02036c60_Vec v;
    Unk_02036c60_Ent *e = (Unk_02036c60_Ent *)(base + 2);
    v.x = e[idx].a;
    v.y = e[idx].b << 12;
    v.z = e[idx].c << 12;
    return v;
}

extern "C" u8 *BgModelCache_Get(void)
{
    return (u8 *)&gBgModelCache;
}

const u8 sBgHeapSizeByRoom[0x34] = {
    0xac, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x0e, 0x0e, 0x0e, 0x14, 0x18, 0x2a, 0x2a, 0x2a, 0x2a, 0x0c, 0x19, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0c, 0x0c, 0x0f, 0x11, 0x0c, 0x19, 0x0c, 0x6e, 0x1a, 0x1f, 0x17, 0x0c, 0x0d, 0x12, 0x13, 0x37, 0xac, 0xac, 0xac, 0x28, 0x14, 0x2a, 0x32, 0xac, 0x14, 0x00
};

BgModelCacheObj gBgModelCache;
