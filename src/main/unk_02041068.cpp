#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_02066040 {
public:
    Unk_02066040();
    ~Unk_02066040();
    u8 unk_00[0x44];
};

// Vtable 0x020da258 (D1 = func_02041098, D0 = func_02041068)
class Unk_020da258 : public Unk_020d8c7c {
public:
    Unk_020da258();
    virtual ~Unk_020da258();

    /* 0x50 */ u32 unk_50;
    /* 0x54 */ Unk_02066040 unk_54;
};

struct Unk_02041104_Ent {
    void (*unk_00)();
    u32 unk_04[3];
};

struct Unk_021c3cc0 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02[2];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

extern Unk_021c3cc0 data_021c3cc0;
extern u8 data_021c3cb4;
extern u8 data_021c3cb8;
extern u16 *data_021c3cbc;
extern u8 data_021c3cc4[];
extern u8 data_021c3cd4[];
extern u16 data_021c3cf0[];
extern u16 data_021c3db0[];
extern Unk_02041104_Ent data_020c90a4[];
extern Unk_02041104_Ent data_020c90a8[];
extern Unk_02041104_Ent data_020c90ac[];
extern Unk_02041104_Ent data_020c90b0[];
extern u32 data_021c1b3c;
extern volatile u32 data_021c40cc[];
struct Unk_02041880_Pair { u8 unk_00; u8 unk_01; };
struct Unk_020cbb18 { u8 unk_00[0x64]; u32 unk_64; };
struct Unk_02041938 { u8 unk_00[0x10e9]; u8 unk_10e9; u8 unk_10ea; };
struct Unk_021c3ea4 { u8 unk_00[0x20]; u32 unk_20; };
extern Unk_020cbb18 *data_020cbb18;
extern Unk_021c3ea4 data_021c3ea4;
extern u32 data_021f482c;
extern Unk_02041880_Pair data_021c3e74;
extern u8 data_ov003_02258ef8;

extern "C" {
void func_02115e30(u32 v, u32 dst, u32 size);
}
static inline void Unk_02041104_Fill(u16 v, u32 dst, u32 size) {
    volatile u16 t = v;
    func_02115e30(t, dst, size);
}
extern "C" {
u32 func_021108e8();
u32 func_0211065c();
u32 func_02110868();
u32 func_02110614();
void func_02115e30(u32 v, u32 dst, u32 size);
void func_020014f4(u32);
void func_020014bc(u32);
void func_020014e4(u32);
void func_020014ac(u32);
void func_0203d4c4(u32);
void func_0203d4c8(u32);
void func_02001504(u32);
void func_020014cc(u32);
void func_0200145c(s32);
s32 func_0203818c();
s32 func_020e759c(void *, u32, s32);
s32 func_01ffc5a4(s32, s32);
void func_02035518(u32);
void func_020355dc(u32);
void func_0208e9d4(u32);
void func_0208e9f4(u32);
void func_0200403c();
s32 func_01ffc538(s32);
void func_02001554(u32);
void func_0200151c(u32);
void func_0205b69c(void *);
s32 func_0205b6e4(void *, void *, void *, u32);
void func_02001564(u32);
void func_0200152c(u32);
void func_02001750(u32);
void func_02001724(u32, u32);
void func_020016cc(u32);
void func_020016b0(u32);
void func_02001674(u32, u32, u32, u32);
void func_0200162c(u32, u32, u32, u32);
void func_02045df4();
s32 func_02072e88(u32, u32);
s32 func_020b5184();
s32 func_020b5164();
void func_ov003_0222675c();
void func_020e85fc(u32, u32);
s32 func_02113774();
void func_021138a0(u32, u32);
s32 func_02041938(Unk_02041938 *p);
void func_02041908();
void func_02041648();
void func_020411f8();
void func_020411dc();
void func_02041104();
void func_020418d4(Unk_02041880_Pair *p);
void func_02041788();
void func_020417bc();
}

Unk_020da258::~Unk_020da258() {}

Unk_020da258::Unk_020da258() {}

extern "C" Unk_020da258 *func_020410ec() {
    return new Unk_020da258();
}

extern "C" void func_02041104() {
    volatile u16 *r;
    r = (volatile u16 *)0x400000c;
    *r &= ~3;
    *r = (*r & 0x43) | 0x600;
    Unk_02041104_Fill(0, func_021108e8(), 0x800);
    Unk_02041104_Fill(0x1111, func_0211065c(), 0x20);
    Unk_02041104_Fill(0x8000, 0x5000000, 4);
    func_020014f4(4);
    r = (volatile u16 *)0x400100c;
    *r &= ~3;
    *r = (*r & 0x43) | 0xe04;
    Unk_02041104_Fill(0, func_02110868(), 0x800);
    Unk_02041104_Fill(0x1111, func_02110614(), 0x20);
    Unk_02041104_Fill(0x8000, 0x5000400, 4);
    func_020014bc(4);
}

extern "C" void func_020411dc() {
    func_020014e4(4);
    func_020014ac(4);
    func_0203d4c4(0);
}

extern "C" void func_020411f8() {
    func_0203d4c8(0);
    func_02001504(0x10);
    func_020014cc(0);
    func_02041104();
    func_0200145c(-16);
}

extern "C" void func_02041220() {
    if (func_0203818c() != 0) return;
    Unk_021c3cc0 *s = &data_021c3cc0;
    u32 idx = s->unk_01;
    u32 st = s->unk_00;
    if (st == 2 || st == 0) return;
    idx <<= 4;
    void (*fn)() = *(void (**)())((u8 *)data_020c90b0 + idx);
    if (fn) fn();
    if (data_021c3cc0.unk_00 == 1) {
        if (data_021c3cc0.unk_08 != 0) return;
        data_021c3cc0.unk_00 = 2;
        fn = *(void (**)())((u8 *)data_020c90a8 + idx);
        if (fn) fn();
    } else if (data_021c3cc0.unk_00 == 3) {
        if (data_021c3cc0.unk_08 != 0) return;
        data_021c3cc0.unk_00 = 0;
        fn = *(void (**)())((u8 *)data_020c90a8 + idx);
        if (fn) fn();
        func_020411f8();
    }
}

extern "C" void func_02041290() {
    if (func_0203818c() != 0) return;
    u32 idx = data_021c3cc0.unk_01;
    u32 st = data_021c3cc0.unk_00;
    if (st == 0 || st == 2) return;
    s32 v = data_021c3cc0.unk_08;
    if (v != 0) {
        u32 a = v >= 0 ? 0x1000 : 0;
        if (v < 0) v = -v;
        if (func_020e759c(data_021c3cc4, a, v) != 0) {
            data_021c3cc0.unk_08 = 0;
        }
    }
    void (*fn)() = data_020c90ac[idx].unk_00;
    if (fn) fn();
}

extern "C" BOOL func_020412f0(u32 a, u32 b, u32 c) {
    BOOL ok;
    if (data_021c3cc0.unk_00 == 0) ok = TRUE; else ok = FALSE;
    if (!ok) return FALSE;
    func_020411dc();
    data_021c3cc0.unk_00 = 1;
    data_021c3cc0.unk_01 = a;
    data_021c3cc0.unk_04 = 0x1000;
    void (*fn)() = data_020c90a4[a].unk_00;
    if (fn) fn();
    if (b == 0 || a == 3) {
        data_021c3cc0.unk_08 = -0x1000;
    } else {
        data_021c3cc0.unk_08 = func_01ffc5a4(-0x1000, b << 12);
    }
    if (c == 0) {
        func_02035518(data_021c1b3c + 0x2d0);
        func_0208e9d4(a);
    }
    return TRUE;
}

extern "C" BOOL func_0204137c(u32 a, u32 b) {
    u32 old = data_021c3cc0.unk_01;
    BOOL ok;
    if (data_021c3cc0.unk_00 == 2) ok = TRUE; else ok = FALSE;
    if (!ok && data_021c3cb8 == 0) return FALSE;
    data_021c3cc0.unk_00 = 3;
    data_021c3cb8 = 0;
    void (*fn)() = data_020c90a8[old].unk_00;
    if (fn) fn();
    data_021c3cc0.unk_01 = a;
    data_021c3cc0.unk_04 = 0;
    fn = data_020c90a4[a].unk_00;
    if (fn) {
        fn();
        func_020355dc(data_021c1b3c + 0x2d0);
        func_0208e9f4(a);
        if (a == 2) func_0200403c();
    }
    if (b == 0 || a == 3) {
        data_021c3cc0.unk_08 = 0x1000;
    } else {
        data_021c3cc0.unk_08 = func_01ffc5a4(0x1000, b << 12);
    }
    return TRUE;
}

extern "C" void func_0204142c() {
    data_021c3cc0.unk_00 = 0;
    data_021c3cc0.unk_01 = 0;
    data_021c3cc0.unk_0c = -16;
    data_021c3cc0.unk_04 = 0x1000;
    data_021c3cc0.unk_08 = 0;
    data_021c3cbc = 0;
    data_021c3cb4 = 0;
}

extern "C" void func_0204145c() {}
extern "C" void func_02041460() {}
extern "C" void func_02041464() {}

extern "C" void func_02041468() {
    func_0200145c(0);
}

extern "C" void func_02041474() {
    u32 v = data_021c3cb4;
    if (v & 2) {
        data_021c3cbc = data_021c3cf0;
        v &= ~2;
        data_021c3cb4 = v;
    } else {
        data_021c3cbc = data_021c3db0;
        v |= 2;
        data_021c3cb4 = v;
    }
}

extern "C" void func_020414b0() {
    u16 *p;
    u16 t;
    Unk_021c3cc0 *s = &data_021c3cc0;
    if (data_021c3cb4 & 2) p = data_021c3cf0; else p = data_021c3db0;
    s32 v = s->unk_04;
    if (v == 0) {
        volatile u16 c = 0xff;
        func_02115e30(c, (u32)p, 0xc0);
    } else if (v == 0x1000) {
        volatile u16 c = 0x8080;
        func_02115e30(c, (u32)data_021c3cf0, 0x180);
    } else {
        s32 h = ((0x1000 - v) * 160) >> 12;
        s32 h2 = (h * h) << 12;
        for (s32 i = 0; i < 0x60; p++, i++) {
            s32 d = 0x60 - i;
            if (d > h) {
                *p = 0x8080;
            } else {
                s32 r = func_01ffc538(h2 - ((d * d) << 12));
                if (r < 0x80000) {
                    s32 x = (0x80 - (r >> 12)) & 0xffff;
                    *p = ((x << 8) & 0xff00) | ((0x100 - x) & 0xff);
                } else {
                    *p = 0xff;
                }
            }
        }
    }
}

extern "C" void func_02041588() {
    func_02001554(1);
    func_0200151c(1);
    if (data_021c3cb4 & 1) {
        func_0205b69c(data_021c3cd4);
        data_021c3cb4 &= ~1;
    }
    func_020014e4(4);
    func_020014ac(4);
    func_0203d4c4(0);
}

extern "C" void func_020415d4() {
    volatile u16 z = 0;
    func_02115e30(z, (u32)data_021c3cf0, 0x180);
    data_021c3cbc = data_021c3cf0;
    func_02041648();
    if (func_0205b6e4(data_021c3cd4, (void *)func_020417bc, (void *)func_02041788, 0) != 0) {
        data_021c3cb4 |= 1;
    }
    if (data_021c3cc0.unk_04 == 0x1000) func_0200145c(0);
}

extern "C" void func_02041648() {
    volatile u16 *r;
    func_0203d4c8(0);
    func_02001564(1);
    func_0200152c(1);
    func_02001750(0x1b);
    func_02001724(0x1b, 1);
    func_020016cc(4);
    func_020016b0(4);
    if (data_021c3cc0.unk_04 == 0) {
        func_02001674(0, 0, 0xff, 0xc0);
        func_0200162c(0, 0, 0xff, 0xc0);
    } else {
        func_02001674(0, 0, 0, 0);
        func_0200162c(0, 0, 0, 0);
    }
    r = (volatile u16 *)0x400000c;
    *r &= ~3;
    *r = (*r & 0x43) | 0x600;
    Unk_02041104_Fill(0, func_021108e8(), 0x800);
    Unk_02041104_Fill(0x1111, func_0211065c(), 0x20);
    Unk_02041104_Fill(0x8000, 0x5000000, 4);
    func_020014f4(4);
    r = (volatile u16 *)0x400100c;
    *r &= ~3;
    *r = (*r & 0x43) | 0xe04;
    Unk_02041104_Fill(0, func_02110868(), 0x800);
    Unk_02041104_Fill(0x1111, func_02110614(), 0x20);
    Unk_02041104_Fill(0x8000, 0x5000400, 4);
    func_020014bc(4);
}

extern "C" void func_02041788() {
    *(volatile u16 *)0x4000040 = *data_021c3cbc;
    *(volatile u16 *)0x4001040 = *data_021c3cbc;
    *(volatile u16 *)0x4000044 = 0xc0;
    *(volatile u16 *)0x4001044 = 0xc0;
}

extern "C" void func_020417bc() {
    volatile u16 *r = (volatile u16 *)0x4000000;
    u32 line = r[3];
    if ((s32)line < 0xc0) {
        if ((s32)line >= 0x60) line = 0xbf - line;
        u16 v = data_021c3cbc[line];
        if (*(volatile u16 *)0x4000004 & 2) {
            *(volatile u16 *)((u8 *)r + 0x40) = v;
            *(volatile u16 *)((u8 *)r + 0x1040) = v;
        }
    }
}

extern "C" void func_02041800() {
    func_0200145c(data_021c3cc0.unk_0c);
}

extern "C" void func_02041810() {
    Unk_021c3cc0 *s = &data_021c3cc0;
    if (s->unk_01 == 0) {
        s->unk_0c = -(s->unk_04 << 4) >> 12;
    } else {
        s->unk_0c = (s->unk_04 << 4) >> 12;
    }
}

extern "C" void func_02041834() {}

extern "C" void func_02041838() {
    Unk_021c3cc0 *s = &data_021c3cc0;
    if (s->unk_00 == 3) {
        s->unk_0c = 0;
    } else if (s->unk_01 == 0) {
        s->unk_0c = -16;
    } else {
        s->unk_0c = 16;
    }
    func_0200145c(s->unk_0c);
}

extern "C" void func_02041868() {
    func_02045df4();
    func_020418d4(&data_021c3e74);
}

extern "C" void func_02041880(Unk_02041880_Pair *p) {
    if (func_02072e88((u32)data_020cbb18, data_020cbb18->unk_64) != 0) return;
    if (func_020b5184() == 0) {
        if (func_020b5164() == 0) return;
    }
    if (p->unk_01 != 0) data_ov003_02258ef8 = 1;
    if (p->unk_01 != 0 || p->unk_00 != 0) func_ov003_0222675c();
    p->unk_00 = 0;
    p->unk_01 = 0;
}

extern "C" void func_020418d4(Unk_02041880_Pair *p) {
    if (((s32)(data_021c40cc[0x30 / 4] << 24) >> 31) != 0) {
        p->unk_00 = 1;
    } else {
        p->unk_00 = 0;
    }
    if (((s32)(data_021c40cc[0x30 / 4] << 25) >> 31) != 0) {
        p->unk_01 = 1;
    } else {
        p->unk_01 = 0;
    }
}

extern "C" void func_02041908() {
    Unk_02041938 *p = (Unk_02041938 *)data_021c3ea4.unk_20;
    if (p != 0) {
        func_02041938(p);
        func_020e85fc(data_021f482c, (u32)p);
        data_021c3ea4.unk_20 = 0;
    }
}

extern "C" s32 func_02041938(Unk_02041938 *p) {
    if (p->unk_10ea != 0) {
        if (func_02113774() == 0) func_021138a0((u32)p, 0);
    }
}

extern "C" BOOL func_02041960() {
    BOOL r = FALSE;
    Unk_02041938 *p = (Unk_02041938 *)data_021c3ea4.unk_20;
    if (p != 0) {
        if (p->unk_10e9 != 0) {
            func_02041908();
            r = TRUE;
        }
    }
    return r;
}
