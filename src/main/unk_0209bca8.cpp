#include "types.h"

extern "C" {
void *MI_CpuFill8(void *p, u32 v, u32 n);
void func_020639e8(char *dst, const char *fmt, ...);
s32 File_GetDecodedSizeByPath(const char *s);
s32 func_02063b8c(s32 n);
s32 func_02037358(s32 n);
extern const u32 data_020d0634[6];
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
class Unk_0209c040 {
public:
    Unk_0209c040();
    ~Unk_0209c040();
    BOOL func_0209c040(s32 v);
    void func_0209c050(s32 v);
    s32 func_0209c054();
    s32 func_0209c058();

    s32 unk_00;
    s32 unk_04;
};

// ---- 6x6 cell grid (the same object is Unk_0209b5d4 in the symbol names of two of its methods)
class Unk_0209b5d4 {
public:
    Unk_0209c040 *func_0209bc54(s32 x, s32 y);
    void func_0209b5d4(s32 seed);
    BOOL func_0209b63c();
    BOOL func_0209b830();
    BOOL func_0209b9ac(u32 mode);
    BOOL func_0209bca8();
    BOOL func_0209bcf8();

    Unk_0209c040 unk_00[0x24];
    RecordFile unk_120;
};

class Unk_0209be24 {
public:
    Unk_0209be24();
    ~Unk_0209be24();

    void func_0209be24(u8 *out);
    u32 func_0209be58();
    BOOL func_0209bee4(s32 v);
    void func_0209bf94();
    BOOL func_0209bfa4();

    Unk_0209c040 unk_00[0x24];
    RecordFile unk_120;
};

// ---- row helper
class Unk_0209c038 {
public:
    u8 *func_0209c038(s32 i);
};

extern "C" BOOL func_0209c06c(u32 v) {
    const u32 *p = data_020d0634;
    u32 i;
    for (i = 0; i < 6; p++, i++) {
        if (*p == v) return TRUE;
    }
    return FALSE;
}

Unk_0209c040::Unk_0209c040() {
    unk_00 = 0x36;
    unk_04 = 0;
}

Unk_0209c040::~Unk_0209c040() {}

s32 Unk_0209c040::func_0209c058() {
    return unk_04;
}

s32 Unk_0209c040::func_0209c054() {
    return unk_00;
}

void Unk_0209c040::func_0209c050(s32 v) {
    unk_04 = v;
}

BOOL Unk_0209c040::func_0209c040(s32 v) {
    if (v < 0x37) {
        unk_00 = v;
        return TRUE;
    }
    return FALSE;
}

u8 *Unk_0209c038::func_0209c038(s32 i) {
    return (u8 *)this + i * 6;
}

Unk_0209be24::Unk_0209be24() {}

Unk_0209be24::~Unk_0209be24() {}

BOOL Unk_0209be24::func_0209bfa4() {
    if (unk_120.open((void *)"/bg/rndCand.bin", 0x10, 0x20c)) {
        unk_120.loadAll();
        return TRUE;
    }
    return FALSE;
}

void Unk_0209be24::func_0209bf94() {
    unk_120.close();
}

BOOL Unk_0209be24::func_0209bee4(s32 v) {
    BOOL ok, again;
    Unk_0209b5d4 *g = (Unk_0209b5d4 *)this;
    ok = FALSE;
    func_0209bfa4();
    s32 m1 = ~ok;
    while (!ok) {
        g->func_0209b5d4(m1);
        ok = (g->func_0209b63c() & 1) ? TRUE : FALSE;
        ok = (ok & g->func_0209b830()) ? TRUE : FALSE;
        ok = (ok & g->func_0209b9ac(v)) ? TRUE : FALSE;
        if (ok) {
            again = FALSE;
            while (!again) {
                again = (g->func_0209bcf8() & 1) ? TRUE : FALSE;
                again = (again & g->func_0209bca8()) ? TRUE : FALSE;
                if (func_0209be58() > 0x1ffb8) ok = FALSE;
            }
        }
    }
    func_0209bf94();
    return TRUE;
}

u32 Unk_0209be24::func_0209be58() {
    char buf[0x1e];
    u8 seen[0x86];
    volatile s32 z;
    u32 total, y, x;
    Unk_0209b5d4 *g = (Unk_0209b5d4 *)this;
    MI_CpuFill8(seen, 0, 0x86);
    total = 0;
    y = 0;
    z = 0;
    for (; y < 6; y++) {
        for (x = 0; x < 6; x++) {
            if (seen[g->func_0209bc54(x, y)->func_0209c058()] == 0) {
                s32 v = g->func_0209bc54(x, y)->func_0209c058();
                func_020639e8(buf, "/bg/a%d/%04x.arc", v >> 4, v);
                total += z + File_GetDecodedSizeByPath(buf);
                seen[g->func_0209bc54(x, y)->func_0209c058()] = 1;
            }
        }
    }
    return total;
}

void Unk_0209be24::func_0209be24(u8 *out) {
    u32 y, x;
    Unk_0209b5d4 *g = (Unk_0209b5d4 *)this;
    for (y = 0; y < 6; y++) {
        for (x = 0; x < 6; x++) {
            *out = g->func_0209bc54(x, y)->func_0209c058();
            out++;
        }
    }
}

BOOL Unk_0209b5d4::func_0209bcf8() {
    u8 used[0x86];
    BOOL result = TRUE;
    MI_CpuFill8(used, 0, 0x86);
    u32 y, x;
    for (y = 0; y < 6; y++) {
        for (x = 0; x < 6; x++) {
            s32 v = func_0209bc54(x, y)->func_0209c054();
            u32 n = 0;
            u32 i = n;
            for (; i < 0x86; i++) {
                if (v == func_02037358(i) && used[i] == 0) n++;
            }
            if (n != 0) {
                u32 r1 = func_02063b8c(n);
                i = 0;
                n = i;
                for (; n < 0x86; n++) {
                    if (v == func_02037358(n) && used[n] == 0) {
                        if (i == r1) goto found1;
                        i++;
                    }
                }
                n = 0;
            found1:
                func_0209bc54(x, y)->func_0209c050(n);
                used[n] = 1;
            } else {
                n = 0;
                i = n;
                for (; i < 0x86; i++) {
                    if (v == func_02037358(i)) n++;
                }
                if (n != 0) {
                    u32 r2 = func_02063b8c(n);
                    i = 0;
                    n = i;
                    for (; n < 0x86; n++) {
                        if (v == func_02037358(n)) {
                            if (i == r2) goto found2;
                            i++;
                        }
                    }
                    n = 0;
                found2:
                    func_0209bc54(x, y)->func_0209c050(n);
                    used[n] = 1;
                } else {
                    result = FALSE;
                    func_0209bc54(x, y)->func_0209c050(0x14);
                }
            }
        }
    }
    return result;
}

BOOL Unk_0209b5d4::func_0209bca8() {
    u32 y, x, i;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            for (i = 0; i < 6; i++) {
                if (data_020d0634[i] == func_0209bc54(x, y)->func_0209c058()) return TRUE;
            }
        }
    }
    return FALSE;
}

const u32 data_020d0634[6] = {0x18, 0x19, 0x1c, 0x1f, 0x22, 0x25};
