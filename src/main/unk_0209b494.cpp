#include "types.h"

class Unk_0209c060 {
public:
    s32 unk_00;
    s32 unk_04;
    Unk_0209c060();
    ~Unk_0209c060();
};

extern "C" {
s32 func_02063b8c(s32);
void *func_02116048(void *, void *, s32);
void *func_02115fb4(void *, s32, s32);
s32 func_0209c038(s32, s32);
BOOL func_0209c040(Unk_0209c060 *, s32);
void func_0209c050(Unk_0209c060 *, s32);
s32 func_0209c054(Unk_0209c060 *);
s32 func_0209c058(Unk_0209c060 *);
void *func_0209c004(void *);
void func_0209bfdc(void *);
void func_0209bee4(void *, s32);
void func_0209be24(void *, s32);
void *func_0206d86c(void *, s32);
s32 func_02037260(s32);
s32 func_02037310(s32);
s32 func_02037338(s32);
s32 func_02037358(s32);
u32 func_0213335c(u32, u32);
extern s32 data_020e22cc;
extern s32 data_021d7128;
extern u32 data_020d0634[];
extern u8 data_020d0608[];
extern u8 data_020d0604[];
}

class Unk_0209b3bc {
public:
    u8 unk_00[0x24];
    u8 func_0209b434(u8 i);
    void func_0209b450(u8 i, u32 v);
    void func_0209b494(u8 i);
    u32 func_0209b4cc();
};

class Unk_0209b5d4 {
public:
    Unk_0209c060 cells[36];
    u32 unk_120[8];

    void func_0209b5d4(s32 seed);
    BOOL func_0209b63c();
    BOOL func_0209b830();
    BOOL func_0209b9ac(u32 mode);
    BOOL func_0209ba90(s32 a, s32 b);
    BOOL func_0209bbac(s32 val);
    BOOL func_0209bca8();
    BOOL func_0209bcf8();
    Unk_0209c060 *func_0209bc54(s32 x, s32 y);
};

void Unk_0209b3bc::func_0209b494(u8 i)
{
    func_0209b450(i, 0);
    for (s32 j = 0; j < 8; j++) {
        u32 v = func_0209b434((u8)j);
        func_0209b450((u8)j, (v << 23) >> 24);
    }
}

u32 Unk_0209b3bc::func_0209b4cc()
{
    u8 res = 8;
    u16 mask = 0;
    s32 max = -1;
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 8; i++) {
        s32 v = unk_00[i];
        if (v > max) {
            max = v;
            mask = 1 << i;
            cnt = 1;
        } else if (max == v) {
            mask |= 1 << i;
            cnt++;
        }
    }
    if (cnt > 0) {
        s32 r = func_02063b8c(cnt);
        for (i = 0; i < 8; i++) {
            if (((mask >> i) & 1) != 0) {
                if (r == 0) {
                    res = i;
                    break;
                }
                r--;
            }
        }
    }
    return res;
}

extern "C" {

void func_0209b540(void *p, void *q)
{
    func_02116048(q, p, 8);
}

void func_0209b550(void *p)
{
    func_02115fb4(p, 0, 8);
}

void func_0209b55c() {}

void *func_0209b560(void *p)
{
    func_0209b550(p);
    return p;
}

u32 func_0209b570(u32 *out, s32 idx)
{
    s32 o = idx * 8;
    *out = func_02063b8c(*(data_020d0608 + o));
    return *(u32 *)(data_020d0604 + o);
}

void func_0209b598(s32 arg)
{
    u32 buf[0x50];
    func_0209c004(buf);
    func_0209bee4(buf, data_020e22cc);
    func_0209be24(buf, arg);
    func_0209bfdc(buf);
}

void func_0209b5c8(s32 v)
{
    data_020e22cc = v;
}

s32 func_0209bc34(s32 v)
{
    s32 t = func_02037310(v);
    t = func_02037338(t | 0x100);
    if (t == 0x36) t = v;
    return t;
}

}

void Unk_0209b5d4::func_0209b5d4(s32 seed)
{
    u8 *p;
    u32 y, x;
    s32 v;
    if (seed < 0) {
        v = func_02063b8c(0x20c);
    } else {
        v = (u32)seed % 0x20c;
    }
    data_021d7128 = v;
    p = (u8 *)func_0206d86c(unk_120, v);
    if (p) {
        for (y = 1; y < 5; y++) {
            for (x = 1; x < 5; x++) {
                func_0209c040(func_0209bc54(x, y), *p++);
            }
        }
    }
}

BOOL Unk_0209b5d4::func_0209b63c()
{
    func_0209c040(func_0209bc54(0, 0), 7);
    func_0209c040(func_0209bc54(1, 0), 0);
    func_0209c040(func_0209bc54(2, 0), 0);
    func_0209c040(func_0209bc54(3, 0), 0);
    func_0209c040(func_0209bc54(4, 0), 0);
    func_0209c040(func_0209bc54(5, 0), 8);
    func_0209c040(func_0209bc54(0, 5), 0x35);
    func_0209c040(func_0209bc54(1, 5), 0x35);
    func_0209c040(func_0209bc54(2, 5), 0x35);
    func_0209c040(func_0209bc54(3, 5), 0x35);
    func_0209c040(func_0209bc54(4, 5), 0x35);
    func_0209c040(func_0209bc54(5, 5), 0x35);
    func_0209c040(func_0209bc54(0, 1), 3);
    func_0209c040(func_0209bc54(0, 2), 3);
    func_0209c040(func_0209bc54(0, 3), 3);
    func_0209c040(func_0209bc54(0, 4), 4);
    func_0209c040(func_0209bc54(5, 1), 5);
    func_0209c040(func_0209bc54(5, 2), 5);
    func_0209c040(func_0209bc54(5, 3), 5);
    func_0209c040(func_0209bc54(5, 4), 6);
    u32 i;
    for (i = 1; i < 5; i++) {
        if (func_0209c054(func_0209bc54(i, 1)) == 0x14) {
            func_0209c040(func_0209bc54(i, 0), 2);
        }
    }
    s32 cnt = 0;
    u32 j;
    for (j = 2; j <= 3; j++) {
        if (func_02037260(func_0209c054(func_0209bc54(j, 1))) == 0) cnt++;
    }
    s32 r = func_02063b8c(cnt);
    s32 k = 0;
    for (j = 2; j <= 3; j++) {
        if (func_02037260(func_0209c054(func_0209bc54(j, 1))) == 0) {
            if (k == r) {
                func_0209c040(func_0209bc54(j, 0), 1);
                func_0209c040(func_0209bc54(j, 1), 10);
                return TRUE;
            }
            k++;
        }
    }
    return FALSE;
}

static inline BOOL Unk_0209b830_Bit(s32 t, s32 m)
{
    return (t & m) != 0 ? TRUE : FALSE;
}

static inline BOOL Unk_0209b830_Chk(s32 v)
{
    s32 t = func_02037310(v);
    if (!Unk_0209b830_Bit(t, 8) && !Unk_0209b830_Bit(t, 4) && !Unk_0209b830_Bit(t, 0x80000) && func_02037260(v) == 1) return TRUE;
    return FALSE;
}

BOOL Unk_0209b5d4::func_0209b830()
{
    s32 k, v, r;
    s32 cnt = 0;
    u32 y, x;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            v = func_0209c054(func_0209bc54(x, y));
            if (Unk_0209b830_Chk(v)) cnt++;
        }
    }
    if (cnt != 0) {
        r = func_02063b8c(cnt);
        k = 0;
        for (y = 1; y < 5; y++) {
            for (x = 1; x < 5; x++) {
                v = func_0209c054(func_0209bc54(x, y));
                if (Unk_0209b830_Chk(v)) {
                    if (r == k) {
                        s32 n = func_0209bc34(func_0209c054(func_0209bc54(x, y)));
                        if (n != func_0209c054(func_0209bc54(x, y))) {
                            func_0209c040(func_0209bc54(x, y), n);
                            return TRUE;
                        }
                    }
                    k++;
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_0209b5d4::func_0209b9ac(u32 mode)
{
    if (!func_0209bbac(0xe)) return FALSE;
    if (!func_0209bbac(0xd)) return FALSE;
    if (!func_0209bbac(0xc)) return FALSE;
    if (mode == 1) return func_0209ba90(0xd, 0xb);
    if (mode == 2) return func_0209ba90(0xe, 0xb);
    if (mode == 3) return func_0209ba90(0xa, 0xb);
    if (mode == 4) return func_0209ba90(0xc, 0xb);
    s32 cnt = 0;
    u32 x;
    for (x = 1; x < 5; x++) {
        if (func_0209c054(func_0209bc54(x, 3)) == 9) cnt++;
    }
    if (cnt != 0) {
        s32 r = func_02063b8c(cnt);
        s32 k = 0;
        for (x = 1; x < 5; x++) {
            if (func_0209c054(func_0209bc54(x, 3)) == 9) {
                if (r == k) {
                    func_0209c040(func_0209bc54(x, 3), 0xb);
                    return TRUE;
                }
                k++;
            }
        }
    }
    return FALSE;
}

struct Unk_0209ba90_Dir {
    s16 x, y;
    Unk_0209ba90_Dir(s16 a, s16 b) { x = a; y = b; }
};

BOOL Unk_0209b5d4::func_0209ba90(s32 a, s32 b)
{
    s32 found = 0;
    u32 x, y;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            if (a == func_0209c054(func_0209bc54(x, y))) {
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (found) {
        static Unk_0209ba90_Dir dirs[4] = { Unk_0209ba90_Dir(-1, 0), Unk_0209ba90_Dir(1, 0), Unk_0209ba90_Dir(0, 1), Unk_0209ba90_Dir(0, -1) };
        s32 cnt = 0;
        u32 i;
        for (i = 0; i < 4; i++) {
            if (func_0209c054(func_0209bc54(x + dirs[i].x, y + dirs[i].y)) == 9) cnt++;
        }
        if (cnt != 0) {
            s32 r = func_02063b8c(cnt);
            s32 k = 0;
            for (i = 0; i < 4; i++) {
                Unk_0209ba90_Dir *d = &dirs[i];
                if (func_0209c054(func_0209bc54(x + dirs[i].x, y + d->y)) == 9) {
                    if (r == k) {
                        func_0209c040(func_0209bc54(x + d->x, y + d->y), b);
                        return TRUE;
                    }
                    k++;
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_0209b5d4::func_0209bbac(s32 val)
{
    s32 cnt = 0;
    u32 y, x;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            if (func_0209c054(func_0209bc54(x, y)) == 9) cnt++;
        }
    }
    s32 r = func_02063b8c(cnt);
    s32 k = 0;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            if (func_0209c054(func_0209bc54(x, y)) == 9) {
                if (r == k) {
                    func_0209c040(func_0209bc54(x, y), val);
                    return TRUE;
                }
                k++;
            }
        }
    }
    return FALSE;
}

BOOL Unk_0209b5d4::func_0209bca8()
{
    u32 y, x, i;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            for (i = 0; i < 6; i++) {
                if (data_020d0634[i] == func_0209c058(func_0209bc54(x, y))) return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_0209b5d4::func_0209bcf8()
{
    u8 used[0x86];
    BOOL result = TRUE;
    func_02115fb4(used, 0, 0x86);
    s32 r2, r1;
    u32 y, x;
    for (y = 0; y < 6; y++) {
        for (x = 0; x < 6; x++) {
            s32 v = func_0209c054(func_0209bc54(x, y));
            u32 n = 0;
            u32 i = n;
            for (; i < 0x86; i++) {
                if (v == func_02037358(i) && used[i] == 0) n++;
            }
            if (n != 0) {
                r1 = func_02063b8c(n);
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
                func_0209c050(func_0209bc54(x, y), n);
                used[n] = 1;
            } else {
                n = 0;
                i = n;
                for (; i < 0x86; i++) {
                    if (v == func_02037358(i)) n++;
                }
                if (n != 0) {
                    r2 = func_02063b8c(n);
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
                    func_0209c050(func_0209bc54(x, y), n);
                    used[n] = 1;
                } else {
                    result = FALSE;
                    func_0209c050(func_0209bc54(x, y), 0x14);
                }
            }
        }
    }
    return result;
}

Unk_0209c060 *Unk_0209b5d4::func_0209bc54(s32 x, s32 y)
{
    s32 idx = func_0209c038(x, y);
    if ((u32)idx < 0x24) return &cells[idx];
    static Unk_0209c060 dflt;
    return &dflt;
}
