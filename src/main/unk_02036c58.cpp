// mwcc-flags: -str reuse
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/Unk_02036c60_Vec.h"
#include "game/Unk_02037674_V3.h"
#include "game/Unk_021e5890_T.h"
#include "gfx/BgModelCache.h"

extern "C" const u32 data_020c8b9c;
extern "C" const u32 data_020c8ba0;

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
void Str_SPrintf(void *buf, const void *fmt, ...);
s32 NNS_FndMountArchive(void *, const void *, void *);
void NNS_FndUnmountArchive(void *);
void *NNS_FndGetArchiveFileByName(const void *);
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
extern Unk_021e5890_T data_021e5890;}

extern "C" {
void *File_LoadAlloc(void *, void *, s32, void *);
extern char gSaveTownMap[];
s32 Scene_GetCurrent(void);
void _ZN7TownMap18updateGroundSeasonEv(char *);
void BgHeap_Create(s32, s32);
}
extern "C" void *BgModel_LoadFile(void *a, void *b);
extern "C" void *BgModel_LoadBcl(s32 id, void *heap);
extern "C" s32 BgModel_GetGrassType(void *);
class BgModelCacheObj;
extern BgModelCacheObj gBgModelCache;
extern const u8 sBgHeapSizeByRoom[];



class BgModelCacheObj {
public:
    BgModelCacheObj();
    ~BgModelCacheObj();
    BOOL setup(u32 flag);
    void clearEntries();

    BgAcreModel acres[31];
    BgAcreBcl bclCache[9];
    u8 withAnims;
    u8 pad_619[3];
    u32 heapSize;
    u32 unk_620;
    u32 unk_624;
    u32 unk_628;
    u32 unk_62c;
    u32 groundTex;
    u32 groundMatAnm;
    u32 groundTexSrtAnm;
    u32 riverPatAnm;
    u32 riverPatTex;
    u32 beBPatAnm;
    u32 beBPatTex;
};



// ---- BgModelCache ----



extern "C" void *BgModel_LoadFile(void *a, void *b) {
    return File_LoadAlloc(a, gBgHeap, 4, b);
}

BgModelCacheObj::BgModelCacheObj() {
    clearEntries();
}

BgModelCacheObj::~BgModelCacheObj() {}

void BgModelCacheObj::clearEntries() {
    BgAcreModel *p; BgAcreBcl *q; u32 i; u32 j;
    p = acres;
    for (i = 0; i < 0x1f; p++, i++) {
        p->acreId = 0xffff;
        p->arc = 0;
        p->mdl = 0;
        p->bcl = 0;
        p->jntAnm = 0;
        p->matAnm = 0;
        p->texSrtAnm = 0;
        p->bsd = 0;
        p->tex = 0;
        p->mgt = 0;
        p->mgtCount = 0;
    }
    q = bclCache;
    for (j = 0; j < 9; q++, j++) {
        q->acreId = 0xffff;
        q->bcl = 0;
    }
    groundTex = 0;
    groundMatAnm = 0;
    groundTexSrtAnm = 0;
    riverPatAnm = 0;
    riverPatTex = 0;
    withAnims = 0;
    heapSize = 0;
    unk_620 = 0;
    unk_624 = 0;
    unk_628 = 0;
    unk_62c = 0;
}

BOOL BgModelCacheObj::setup(u32 flag) {
    s32 t = Scene_GetCurrent();
    if (t == 0x2c) {
        _ZN7TownMap18updateGroundSeasonEv(gSaveTownMap);
    }
    clearEntries();
    withAnims = flag;
    t = Scene_GetCurrent();
    u32 v;
    if ((u32)t < 0x33) {
        v = sBgHeapSizeByRoom[t];
    } else {
        v = 0xac;
    }
    heapSize = (u8)v << 10;
    BgHeap_Create(heapSize, 0);
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
    Str_SPrintf(buf, "/bg/ct%d/grd_set%d%c.nsbtx", a, b, ((u32)(data_021e5890.groundSeasonBits << 24) >> 26) + 0x61);
    p = File_LoadAlloc(buf, gCurrentHeap, -4, 0);
    s32 *q = &groundTex;
    *q = (s32)NNS_G3dGetTex(p);
    Gfx3d_LoadTexAndPltt((void *)*q, 0);
    groundTex = (s32)Gfx3d_CopyTex((void *)groundTex, gBgHeap);
    if (p) {
        Mem_Free(p);
    }
}

void BgModelCache::loadGroundAnims()
{
    u8 file[0x68];
    void *p = BgModel_LoadFile((void *)"/bg/grd_anm.arc", 0);
    if (NNS_FndMountArchive(file, "BG", p)) {
        groundMatAnm = (s32)func_02106634(func_02106618(NNS_FndGetArchiveFileByName("BG:a/grd_set.nsbma")), 0);
        groundTexSrtAnm = (s32)func_02106670(func_02106654(NNS_FndGetArchiveFileByName("BG:a/grd_set.nsbta")), 0);
        riverPatAnm = (s32)func_021066ac(func_02106690(NNS_FndGetArchiveFileByName("BG:a/riv.nsbtp")), 0);
        riverPatTex = (s32)NNS_G3dGetTex(NNS_FndGetArchiveFileByName("BG:a/riv_itp.nsbtx"));
        beBPatAnm = (s32)func_021066ac(func_02106690(NNS_FndGetArchiveFileByName("BG:a/beB.nsbtp")), 0);
        beBPatTex = (s32)NNS_G3dGetTex(NNS_FndGetArchiveFileByName("BG:a/beB_itp.nsbtx"));
        NNS_FndUnmountArchive(file);
    }
}

void *BgModel_LoadBcl(s32 id, void *heap)
{
    u8 buf[0x20];
    u8 file[0x68];
    void *p, *r, *t;
    Str_SPrintf(buf, "/bg/a%d/%04x.arc", id >> 4, id);
    p = File_LoadAlloc(buf, gCurrentHeap, -4, 0);
    r = 0;
    if (NNS_FndMountArchive(file, "BG", p)) {
        t = NNS_FndGetArchiveFileByName("BG:a/bcl/bcl0");
        NNS_FndUnmountArchive(file);
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
    BgAcreModel *e = acres;
    BgAcreBcl *s;
    for (i = 0; i < 0x1f; e++, i++) {
        if (e->acreId == id) {
            r = e->bcl;
            break;
        }
    }
    s = bclCache;
    for (j = 0; j < 9; s++, j++) {
        if (s->bcl == 0) {
            if (r) {
                s->acreId = id;
                s->bcl = r;
            } else {
                s->bcl = BgModel_LoadBcl(id, gBgHeap);
                s->acreId = id;
            }
            return s->bcl;
        }
        if (s->acreId == id) {
            return s->bcl;
        }
    }
    return 0;
}

BgAcreModel *BgModelCache::getAcre(s32 id)
{
    void *heap = gBgHeap;
    BgAcreModel *e = acres;
    struct { s32 tmp; u8 buf[0x20]; u8 file[0x68]; } l;
    u32 i;
    for (i = 0; i < 0x1f; e++, i++) {
        if (e->arc == 0) {
            s32 hi = id >> 4;
            void *p;
            Str_SPrintf(l.buf, "/bg/a%d/%04x.arc", hi, id);
            e->arc = BgModel_LoadFile(l.buf, e->unk_24);
            if (NNS_FndMountArchive(l.file, "BG", e->arc)) {
                u8 *q = (u8 *)NNS_G3dGetMdlSet(NNS_FndGetArchiveFileByName("BG:a/bmd/bmd0"));
                e->mdl = q + *(s32 *)(q + *(u16 *)(q + 0xe) + 0xc);
                e->bcl = NNS_FndGetArchiveFileByName("BG:a/bcl/bcl0");
                e->bsd = NNS_FndGetArchiveFileByName("BG:a/bsd/bsd0");
                p = NNS_FndGetArchiveFileByName("BG:a/bca/bca0");
                if (p) {
                    e->jntAnm = func_021065f8(func_021065dc(p), 0);
                }
                p = NNS_FndGetArchiveFileByName("BG:a/bma/bma0");
                if (p) {
                    e->matAnm = func_02106634(func_02106618(p), 0);
                }
                p = NNS_FndGetArchiveFileByName("BG:a/bta/bta0");
                if (p) {
                    e->texSrtAnm = func_02106670(func_02106654(p), 0);
                }
                p = NNS_FndGetArchiveFileByName("BG:a/mgt/mgt0");
                if (p) {
                    e->mgt = (u8 *)p + 2;
                    e->mgtCount = *(s16 *)p;
                }
                NNS_FndUnmountArchive(l.file);
            }
            if (((id & 0xf000) >> 12) == 1) {
                Str_SPrintf(l.buf, "/bg/t%d/%04x.nsbtx", hi, id);
                p = File_LoadAlloc(l.buf, gCurrentHeap, -4, 0);
                if (p) {
                    l.tmp = (s32)NNS_G3dGetTex(p);
                    Gfx3d_LoadTexAndPltt((void *)l.tmp, 0);
                    e->tex = Gfx3d_CopyTex((void *)l.tmp, heap);
                    if (p) {
                        Mem_Free(p);
                    }
                }
            }
            e->acreId = id;
            return e;
        }
        if (e->acreId == id) {
            return e;
        }
    }
    return 0;
}

BOOL BgModelCache::reset()
{
    BgAcreModel *e = acres;
    BgAcreBcl *s;
    u32 i, j;
    for (i = 0; i < 0x1f; e++, i++) {
        e->acreId = 0xffff;
        e->arc = 0;
        e->mdl = 0;
        e->bcl = 0;
        e->jntAnm = 0;
        e->matAnm = 0;
        e->texSrtAnm = 0;
        e->bsd = 0;
        e->mgt = 0;
        e->mgtCount = 0;
        e->tex = 0;
    }
    s = bclCache;
    for (j = 0; j < 9; s++, j++) {
        s->acreId = 0xffff;
        s->bcl = 0;
    }
    groundTex = 0;
    withAnims = 0;
    heapSize = 0;
    BgHeap_Destroy();
    return TRUE;
}

s32 BgModelCache::getGroundTex() { return groundTex; }

s32 BgModelCache::getGroundMatAnm() { return groundMatAnm; }

s32 BgModelCache::getGroundTexSrtAnm() { return groundTexSrtAnm; }

s32 BgModelCache::getRiverPatAnm() { return riverPatAnm; }

s32 BgModelCache::getRiverPatTex() { return riverPatTex; }

s32 BgModelCache::getBeBPatAnm() { return beBPatAnm; }

s32 BgModelCache::getBeBPatTex() { return beBPatTex; }

extern "C" s32 BgMgt_GetCount(s16 *p)
{
    return *p;
}

VecFx32 BgMgt_GetEntry(u8 *base, s32 idx)
{
    VecFx32 v;
    BgMgtEntry *e = (BgMgtEntry *)(base + 2);
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


// Constants shared with other files (loaded through their addresses; defined after the code here, where a visible const would be folded).
// Owned here by position: it lies between the data of the neighbouring files in link order and fits this file's
// size order (linkprep check); the original file is this one or another file between those neighbours.
const u32 data_020c8b9c = 0x7c8;
const u32 data_020c8ba0 = 0x3648;
