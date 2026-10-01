#include "types.h"

class Unk_0209c038 {
public:
    s32 func_0209c038(s32 y);
};

class Unk_0209c040 {
public:
    s32 unk_00;
    s32 unk_04;
    Unk_0209c040();
    ~Unk_0209c040();
    BOOL func_0209c040(s32 v);
    void func_0209c050(s32 v);
    s32 func_0209c054();
    s32 func_0209c058();
};

extern "C" {
s32 func_02063b8c(s32);
s32 func_02037260(s32);
s32 func_02037310(s32);
s32 func_02037338(s32);
}

class Unk_0209b5d4 {
public:
    Unk_0209c040 cells[36];
    u32 unk_120[8];

    BOOL func_0209b63c();
    BOOL func_0209b830();
    BOOL func_0209b9ac(u32 mode);
    BOOL func_0209ba90(s32 a, s32 b);
    BOOL func_0209bbac(s32 val);
    Unk_0209c040 *func_0209bc54(s32 x, s32 y);
};

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

struct Unk_0209ba90_Dir {
    s16 x, y;
    Unk_0209ba90_Dir(s16 a, s16 b) { x = a; y = b; }
};

extern "C" s32 func_0209bc34(s32 v);


Unk_0209c040 *Unk_0209b5d4::func_0209bc54(s32 x, s32 y)
{
    s32 idx = ((Unk_0209c038 *)x)->func_0209c038(y);
    if ((u32)idx < 0x24) return &cells[idx];
    static Unk_0209c040 dflt;
    return &dflt;
}

extern "C" s32 func_0209bc34(s32 v)
{
    s32 t = func_02037310(v);
    t = func_02037338(t | 0x100);
    if (t == 0x36) t = v;
    return t;
}

BOOL Unk_0209b5d4::func_0209bbac(s32 val)
{
    s32 cnt = 0;
    u32 y, x;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            if (func_0209bc54(x, y)->func_0209c054() == 9) cnt++;
        }
    }
    s32 r = func_02063b8c(cnt);
    s32 k = 0;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            if (func_0209bc54(x, y)->func_0209c054() == 9) {
                if (r == k) {
                    func_0209bc54(x, y)->func_0209c040(val);
                    return TRUE;
                }
                k++;
            }
        }
    }
    return FALSE;
}

BOOL Unk_0209b5d4::func_0209ba90(s32 a, s32 b)
{
    s32 found = 0;
    u32 x, y;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            if (a == func_0209bc54(x, y)->func_0209c054()) {
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
            if (func_0209bc54(x + dirs[i].x, y + dirs[i].y)->func_0209c054() == 9) cnt++;
        }
        if (cnt != 0) {
            s32 r = func_02063b8c(cnt);
            s32 k = 0;
            for (i = 0; i < 4; i++) {
                Unk_0209ba90_Dir *d = &dirs[i];
                if (func_0209bc54(x + dirs[i].x, y + d->y)->func_0209c054() == 9) {
                    if (r == k) {
                        func_0209bc54(x + d->x, y + d->y)->func_0209c040(b);
                        return TRUE;
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
        if (func_0209bc54(x, 3)->func_0209c054() == 9) cnt++;
    }
    if (cnt != 0) {
        s32 r = func_02063b8c(cnt);
        s32 k = 0;
        for (x = 1; x < 5; x++) {
            if (func_0209bc54(x, 3)->func_0209c054() == 9) {
                if (r == k) {
                    func_0209bc54(x, 3)->func_0209c040(0xb);
                    return TRUE;
                }
                k++;
            }
        }
    }
    return FALSE;
}

BOOL Unk_0209b5d4::func_0209b830()
{
    s32 k, v, r;
    s32 cnt = 0;
    u32 y, x;
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            v = func_0209bc54(x, y)->func_0209c054();
            if (Unk_0209b830_Chk(v)) cnt++;
        }
    }
    if (cnt != 0) {
        r = func_02063b8c(cnt);
        k = 0;
        for (y = 1; y < 5; y++) {
            for (x = 1; x < 5; x++) {
                v = func_0209bc54(x, y)->func_0209c054();
                if (Unk_0209b830_Chk(v)) {
                    if (r == k) {
                        s32 n = func_0209bc34(func_0209bc54(x, y)->func_0209c054());
                        if (n != func_0209bc54(x, y)->func_0209c054()) {
                            func_0209bc54(x, y)->func_0209c040(n);
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

BOOL Unk_0209b5d4::func_0209b63c()
{
    func_0209bc54(0, 0)->func_0209c040(7);
    func_0209bc54(1, 0)->func_0209c040(0);
    func_0209bc54(2, 0)->func_0209c040(0);
    func_0209bc54(3, 0)->func_0209c040(0);
    func_0209bc54(4, 0)->func_0209c040(0);
    func_0209bc54(5, 0)->func_0209c040(8);
    func_0209bc54(0, 5)->func_0209c040(0x35);
    func_0209bc54(1, 5)->func_0209c040(0x35);
    func_0209bc54(2, 5)->func_0209c040(0x35);
    func_0209bc54(3, 5)->func_0209c040(0x35);
    func_0209bc54(4, 5)->func_0209c040(0x35);
    func_0209bc54(5, 5)->func_0209c040(0x35);
    func_0209bc54(0, 1)->func_0209c040(3);
    func_0209bc54(0, 2)->func_0209c040(3);
    func_0209bc54(0, 3)->func_0209c040(3);
    func_0209bc54(0, 4)->func_0209c040(4);
    func_0209bc54(5, 1)->func_0209c040(5);
    func_0209bc54(5, 2)->func_0209c040(5);
    func_0209bc54(5, 3)->func_0209c040(5);
    func_0209bc54(5, 4)->func_0209c040(6);
    u32 i;
    for (i = 1; i < 5; i++) {
        if (func_0209bc54(i, 1)->func_0209c054() == 0x14) {
            func_0209bc54(i, 0)->func_0209c040(2);
        }
    }
    s32 cnt = 0;
    u32 j;
    for (j = 2; j <= 3; j++) {
        if (func_02037260(func_0209bc54(j, 1)->func_0209c054()) == 0) cnt++;
    }
    s32 r = func_02063b8c(cnt);
    s32 k = 0;
    for (j = 2; j <= 3; j++) {
        if (func_02037260(func_0209bc54(j, 1)->func_0209c054()) == 0) {
            if (k == r) {
                func_0209bc54(j, 0)->func_0209c040(1);
                func_0209bc54(j, 1)->func_0209c040(10);
                return TRUE;
            }
            k++;
        }
    }
    return FALSE;
}

