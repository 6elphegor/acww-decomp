#include "types.h"

// ---- 0x020d94b8 base (Unk_020e2a30 at 0x020e2a30)
class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020e2a18 {
public:
    BOOL func_020a8a20(const char *name);
    BOOL func_020a8950(u8 *p);
    void func_020a89f0();
    u8 unk_00[0x2a4];
};

class Unk_020e2a78 {
public:
    BOOL func_020a7a28(u8 *str);
    BOOL func_020a7c04(u8 *str);
};

extern "C" {
void func_02115fb4(void *dst, u32 value, u32 size);
}

extern "C" {
void func_02116048(void *src, void *dst, u32 n);
}

extern "C" {
void *func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
}

extern "C" {
void *func_021355f0(void *p, u32 n, u32 size, void *dtor);
}

extern "C" {
void func_020a71b8(void *);
}

extern "C" {
void func_020a71d0(void *);
}

extern "C" {
s32 func_020639e8(char *buf, const char *fmt, ...);
}

extern "C" {
extern u8 *data_020d9504[];
}

extern "C" {
extern u8 *data_020d9514[];
}

extern "C" {
extern u32 data_020c903c[];
}

extern "C" {
extern u32 data_020c9030[];
}

extern "C" {
void func_020b313c(void *, s32);
}

extern "C" {
void func_020b3158(void *, s32);
}

extern "C" {
s32 func_020a7bd8(void *, void *);
}

extern "C" {
void func_0203d458(void *);
}

extern "C" {
void func_0203d48c(void *);
}

extern "C" {
void func_0203d4a4(void *);
}

extern "C" {
void func_0203d3d8(void *);
}

extern "C" {
void func_0203d3f8(void *, void *);
}

// ---- 0x020d94b8
class Unk_020d94b8 : public Unk_020e2a30 {
public:
    Unk_020d94b8();
    virtual ~Unk_020d94b8();
    virtual u32 vfunc_0c();
    u32 *func_0203cbc0();
    Unk_020e2a78 *func_0203cbc4();
    void func_0203cbc8(u32 *v);
    void func_0203cbcc(Unk_020e2a78 *v);
    void func_0203cbd0(u32 v);
    void func_0203cbd4(u32 v);
    u32 func_0203cbd8();
    BOOL func_0203cbe8();

    /* 0x20 */ u32 unk_20;
    /* 0x24 */ u32 unk_24;
    /* 0x28 */ Unk_020e2a78 *unk_28;
    /* 0x2c */ u32 *unk_2c;
};

// ---- container singleton at 0x021c3280
class Unk_0203cc64 {
public:
    BOOL func_0203cc64(Unk_020d94b8 *p);
    void func_0203cd68();
    Unk_0203cc64 *func_0203cd98();
    Unk_0203cc64 *func_0203cdc8();
    BOOL func_0203d36c(BOOL b);

    /* 0x000 */ u8 unk_00[0x5c];
    /* 0x05c */ Unk_020e2a18 unk_5c;
    /* 0x300 */ u8 unk_300[0x200];
    /* 0x500 */ s32 unk_500;
    /* 0x504 */ u8 unk_504[11 * 0x34];
};

// ---- free functions on the 0x34-byte entries at 0x021c3784
struct Unk_0203ce24_Elem {
    u8 unk_00[0x34];
};
extern "C" Unk_0203ce24_Elem data_021c3784[];
extern "C" Unk_0203cc64 data_021c3280;

// ---- flag object at 0x021c3264
struct Unk_0203c92c_Bits0 {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b23 : 2;
};
struct Unk_0203c92c_Bits1 {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b2 : 1;
};
class Unk_0203c92c {
public:
    void func_0203c92c();
    void func_0203c938();
    void func_0203c944();
    BOOL func_0203c950();
    BOOL func_0203c964();
    BOOL func_0203c978();
    void func_0203c98c();
    void func_0203c9d4(u32 v);
    u32 func_0203c9ec();
    void func_0203c9f4();
    void func_0203ca00();
    BOOL func_0203ca0c();
    void func_0203ca20();
    void func_0203ca2c();
    BOOL func_0203ca38();
    void func_0203ca68();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
};

extern "C" Unk_0203c92c data_021c3264;
extern "C" Unk_0203c92c *func_0203c9b4(Unk_0203c92c *p);
extern "C" Unk_0203c92c *func_0203c9c4(Unk_0203c92c *p);
extern "C" void func_0203ca84();
extern "C" void func_0203ca90();

extern "C" {
void func_0209750c();
}

extern "C" {
Unk_0203c92c *func_02098668();
}

extern "C" {
Unk_0203c92c *func_0203cbb8();
}

extern "C" {
s32 func_0203cba8();
}

extern "C" {
s32 func_0203cb70();
}

extern "C" {
u32 func_0203cb38();
}

// ---- 0x0203c638 .. 0x0203c924
struct Unk_0203c640 {
    u8 unk_000[0x100];
    u8 unk_100[9];
    u8 unk_109[9];
    u8 unk_112[9];
    u8 unk_11b[8];
};

struct Unk_0203442c {
    u16 unk_00;
    Unk_0203442c() : unk_00(0x11a8) {}
    ~Unk_0203442c();
};

extern "C" {
void func_0203c640(Unk_0203c640 *p);
}

extern "C" {
void *func_0210629c();
}

extern "C" {
void *_ZN12Unk_02056fd813func_02057048Ei(void *p, s32 v);
}

extern "C" {
void *_ZN12Unk_02056fd813func_020570b0Ei(void *p, s32 v);
}

extern "C" {
void *_ZN12Unk_02071e0413func_02071e58Ev(void *p);
}

extern "C" {
void _ZN12Unk_02071e0413func_02071e04Ev(void *p);
}

extern "C" {
void *_ZN12Unk_02071ed013func_02072040Ev();
}

extern "C" {
void *_ZN12Unk_02071b0013func_02071b00Eh(void *tbl, u32 i);
}

extern "C" {
void *_ZN12Unk_02071c5c13func_02071c88Eh(void *p, u32 i);
}

extern "C" {
void *_ZN12Unk_0209865c13func_020986d4Ev(void *p);
}

extern "C" {
BOOL func_020641b4(void *a, void *b, s32 c);
}

extern "C" {
extern u8 data_021e6e4c[];
}

extern "C" {
BOOL func_0203c764(void *self, u16 *p, void *q);
}
extern "C" void *func_0203c6c8();
extern "C" void *func_0203c6e4(void *unused);
extern "C" void *func_0203c6d0(void *unused);
extern "C" BOOL func_0203c6f8(void *a, void *b);

static inline BOOL Unk_0203c764_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void func_0203c928() {}

extern "C" void func_0203c924() {}

extern "C" BOOL func_0203c764(void *self, u16 *p, void *q) {
    s32 i1, i2, i3, i4;
    char buf[0x20];
    BOOL res;
    if (Unk_0203c764_InRange(p, 0x12a8, 0x12af)) {
        if (*p >= 0x12a8 && *p <= 0x12af) i1 = *p - 0x12a8;
        else i1 = -1;
        res = FALSE;
        if (i1 != -1) {
            if (q == 0) res = func_0203c6f8(self, _ZN12Unk_02071b0013func_02071b00Eh(data_021e6e4c, (u8)i1));
            else res = func_0203c6f8(self, _ZN12Unk_02071c5c13func_02071c88Eh(_ZN12Unk_0209865c13func_020986d4Ev(q), (u8)i1));
        }
    } else if (*p >= 0x1429 && *p <= 0x1430) {
        if (*p >= 0x1429 && *p <= 0x1430) i2 = *p - 0x1429;
        else i2 = -1;
        res = FALSE;
        if (i2 != -1) {
            if (q == 0) res = func_0203c6f8(self, _ZN12Unk_02071b0013func_02071b00Eh(data_021e6e4c, (u8)i2));
            else res = func_0203c6f8(self, _ZN12Unk_02071c5c13func_02071c88Eh(_ZN12Unk_0209865c13func_020986d4Ev(q), (u8)i2));
        }
    } else if (*p >= 0x13a0 && *p <= 0x13a7) {
        if (*p >= 0x13a0 && *p <= 0x13a7) i3 = *p - 0x13a0;
        else i3 = -1;
        res = FALSE;
        if (i3 != -1) {
            if (q == 0) res = func_0203c6f8(self, _ZN12Unk_02071b0013func_02071b00Eh(data_021e6e4c, (u8)i3));
            else res = func_0203c6f8(self, _ZN12Unk_02071c5c13func_02071c88Eh(_ZN12Unk_0209865c13func_020986d4Ev(q), (u8)i3));
        }
    } else {
        if (*p >= 0x11a8 && *p <= 0x12a7) i4 = *p - 0x11a8;
        else i4 = -1;
        if (i4 != -1) {
            func_020639e8(buf, "/cloth/%d/cloth%03d.nsbtx", i4 >> 4, i4);
            if (func_020641b4(buf, self, -1)) return TRUE;
            return FALSE;
        } else {
            static Unk_0203442c def;
            return func_0203c764(self, &def.unk_00, q);
        }
    }
    return res;
}

extern "C" BOOL func_0203c6f8(void *a, void *b) {
    u16 id = 0x11a8;
    if (func_0203c764(a, &id, 0)) {
        if (b != 0) {
            void *dst = _ZN12Unk_02071e0413func_02071e58Ev(b);
            func_02116048(dst, func_0203c6e4(a), 0x200);
            _ZN12Unk_02071e0413func_02071e04Ev(b);
            void *dst2 = _ZN12Unk_02071ed013func_02072040Ev();
            func_02116048(dst2, func_0203c6d0(a), 0x20);
            return TRUE;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" void *func_0203c6e4(void *unused) { return _ZN12Unk_02056fd813func_020570b0Ei(func_0203c6c8(), 0); }

extern "C" void *func_0203c6d0(void *unused) { return _ZN12Unk_02056fd813func_02057048Ei(func_0203c6c8(), 0); }

extern "C" void *func_0203c6c8() { return func_0210629c(); }

extern "C" u32 func_0203c6c0() { return 0x2c4; }

extern "C" BOOL func_0203c6b8(void *a, u16 *b, void *c) { return func_0203c764(a, b, c); }

extern "C" BOOL func_0203c6b0(void *a, void *b) { return func_0203c6f8(a, b); }

extern "C" void *func_0203c6a8() { return func_0203c6c8(); }

extern "C" void func_0203c6a4() {}

extern "C" void func_0203c6a0() {}

extern "C" void func_0203c640(Unk_0203c640 *p) {
    u32 i;
    for (i = 0; i < 0x100; i++) p->unk_000[i] = 0;
    for (i = 0; i < 9; i++) p->unk_100[i] = 0;
    for (i = 0; i < 9; i++) p->unk_109[i] = 0;
    for (i = 0; i < 9; i++) p->unk_112[i] = 0;
    for (i = 0; i < 8; i++) p->unk_11b[i] = 0;
}

extern "C" void func_0203c638(Unk_0203c640 *p) { func_0203c640(p); }

