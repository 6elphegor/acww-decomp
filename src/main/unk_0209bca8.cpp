#include "types.h"

extern "C" {
void *MI_CpuFill8(void *p, u32 v, u32 n);
void func_020639e8(char *dst, const char *fmt, ...);
s32 File_GetDecodedSizeByPath(const char *s);
s32 Random_GlobalBelow(s32 n);
s32 AcreAttr_GetType(s32 n);
extern const u32 sPondAcreIds[6];
}

// ---- RecordFile (cached record table)
class RecordFile {
public:
    RecordFile();
    ~RecordFile();
    void close();
    void loadAll();
    BOOL open(void *path, s32 size, s32 count);
    u8 pad[0x1c];
};

// ---- 8-byte cell
class TownAcreCell {
public:
    TownAcreCell();
    ~TownAcreCell();
    BOOL setType(s32 v);
    void setAcreId(s32 v);
    s32 getType();
    s32 getAcreId();

    s32 unk_00;
    s32 unk_04;
};

// ---- 6x6 cell grid (the same object is TownAcreGrid in the symbol names of two of its methods)
class TownAcreGrid {
public:
    TownAcreCell *getCell(s32 x, s32 y);
    void loadCandidate(s32 seed);
    BOOL setBorder();
    BOOL placeRiverVariant();
    BOOL placeFacilities(u32 mode);
    BOOL hasPond();
    BOOL assignAcreIds();

    TownAcreCell unk_00[0x24];
    RecordFile unk_120;
};

class TownAcreGenerator {
public:
    TownAcreGenerator();
    ~TownAcreGenerator();

    void writeAcreIds(u8 *out);
    u32 getTotalArchiveSize();
    BOOL generate(s32 v);
    void closeCandidates();
    BOOL openCandidates();

    TownAcreCell unk_00[0x24];
    RecordFile unk_120;
};

// ---- row helper
class TownAcreIndex {
public:
    u8 *calcIndex(s32 i);
};

extern "C" BOOL Acre_HasPond(u32 v) {
    const u32 *p = sPondAcreIds;
    u32 i;
    for (i = 0; i < 6; p++, i++) {
        if (*p == v) return TRUE;
    }
    return FALSE;
}

TownAcreCell::TownAcreCell() {
    unk_00 = 0x36;
    unk_04 = 0;
}

TownAcreCell::~TownAcreCell() {}

s32 TownAcreCell::getAcreId() {
    return unk_04;
}

s32 TownAcreCell::getType() {
    return unk_00;
}

void TownAcreCell::setAcreId(s32 v) {
    unk_04 = v;
}

BOOL TownAcreCell::setType(s32 v) {
    if (v < 0x37) {
        unk_00 = v;
        return TRUE;
    }
    return FALSE;
}

u8 *TownAcreIndex::calcIndex(s32 i) {
    return (u8 *)this + i * 6;
}

TownAcreGenerator::TownAcreGenerator() {}

TownAcreGenerator::~TownAcreGenerator() {}

BOOL TownAcreGenerator::openCandidates() {
    if (unk_120.open((void *)"/bg/rndCand.bin", 0x10, 0x20c)) {
        unk_120.loadAll();
        return TRUE;
    }
    return FALSE;
}

void TownAcreGenerator::closeCandidates() {
    unk_120.close();
}

BOOL TownAcreGenerator::generate(s32 v) {
    BOOL ok, again;
    TownAcreGrid *g = (TownAcreGrid *)this;
    ok = FALSE;
    openCandidates();
    s32 m1 = ~ok;
    while (!ok) {
        g->loadCandidate(m1);
        ok = (g->setBorder() & 1) ? TRUE : FALSE;
        ok = (ok & g->placeRiverVariant()) ? TRUE : FALSE;
        ok = (ok & g->placeFacilities(v)) ? TRUE : FALSE;
        if (ok) {
            again = FALSE;
            while (!again) {
                again = (g->assignAcreIds() & 1) ? TRUE : FALSE;
                again = (again & g->hasPond()) ? TRUE : FALSE;
                if (getTotalArchiveSize() > 0x1ffb8) ok = FALSE;
            }
        }
    }
    closeCandidates();
    return TRUE;
}

u32 TownAcreGenerator::getTotalArchiveSize() {
    char buf[0x1e];
    u8 seen[0x86];
    volatile s32 z;
    u32 total, y, x;
    TownAcreGrid *g = (TownAcreGrid *)this;
    MI_CpuFill8(seen, 0, 0x86);
    total = 0;
    y = 0;
    z = 0;
    for (; y < 6; y++) {
        for (x = 0; x < 6; x++) {
            if (seen[g->getCell(x, y)->getAcreId()] == 0) {
                s32 v = g->getCell(x, y)->getAcreId();
                func_020639e8(buf, "/bg/a%d/%04x.arc", v >> 4, v);
                total += z + File_GetDecodedSizeByPath(buf);
                seen[g->getCell(x, y)->getAcreId()] = 1;
            }
        }
    }
    return total;
}

void TownAcreGenerator::writeAcreIds(u8 *out) {
    u32 y, x;
    TownAcreGrid *g = (TownAcreGrid *)this;
    for (y = 0; y < 6; y++) {
        for (x = 0; x < 6; x++) {
            *out = g->getCell(x, y)->getAcreId();
            out++;
        }
    }
}

BOOL TownAcreGrid::assignAcreIds() {
    u8 used[0x86];
    BOOL result = TRUE;
    MI_CpuFill8(used, 0, 0x86);
    u32 y, x;
    for (y = 0; y < 6; y++) {
        for (x = 0; x < 6; x++) {
            s32 v = getCell(x, y)->getType();
            u32 n = 0;
            u32 i = n;
            for (; i < 0x86; i++) {
                if (v == AcreAttr_GetType(i) && used[i] == 0) n++;
            }
            if (n != 0) {
                u32 r1 = Random_GlobalBelow(n);
                i = 0;
                n = i;
                for (; n < 0x86; n++) {
                    if (v == AcreAttr_GetType(n) && used[n] == 0) {
                        if (i == r1) goto found1;
                        i++;
                    }
                }
                n = 0;
            found1:
                getCell(x, y)->setAcreId(n);
                used[n] = 1;
            } else {
                n = 0;
                i = n;
                for (; i < 0x86; i++) {
                    if (v == AcreAttr_GetType(i)) n++;
                }
                if (n != 0) {
                    u32 r2 = Random_GlobalBelow(n);
                    i = 0;
                    n = i;
                    for (; n < 0x86; n++) {
                        if (v == AcreAttr_GetType(n)) {
                            if (i == r2) goto found2;
                            i++;
                        }
                    }
                    n = 0;
                found2:
                    getCell(x, y)->setAcreId(n);
                    used[n] = 1;
                } else {
                    result = FALSE;
                    getCell(x, y)->setAcreId(0x14);
                }
            }
        }
    }
    return result;
}

BOOL TownAcreGrid::hasPond() {
    u32 y, x, i;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            for (i = 0; i < 6; i++) {
                if (sPondAcreIds[i] == getCell(x, y)->getAcreId()) return TRUE;
            }
        }
    }
    return FALSE;
}

const u32 sPondAcreIds[6] = {0x18, 0x19, 0x1c, 0x1f, 0x22, 0x25};
