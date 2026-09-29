#include "types.h"

class Unk_020a09d8;
typedef s32 (Unk_020a09d8::*Unk_020a09d8_State)(s32);

class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    virtual ~Unk_020ddcf0();
};

class Unk_020660f8 {
public:
    void func_02067a78();
    void func_02067978(Unk_020ddcf0 *p);

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

extern "C" {
Unk_020660f8 *func_02067918(s32 i);
s32 func_0204ff6c(void *p);
s32 func_0204ff40(void *p);
s32 func_0204ffa0(void *p, void *buf, s32 size, s32 off);
s32 func_0205007c(void *p, s32 off, void *buf, s32 size);
s32 func_02050008(void *p, void *buf, s32 size, s32 off);
s32 func_0204ff18(void *buf, s32 size);
s32 func_0209e1a0(void *buf);
void *func_02115fb4(void *dst, s32 v, u32 n);
void *func_02116048(void *dst, void *src, u32 n);
s32 func_02133150(s32, s32);
u8 *func_020a03ac(void);
s32 func_020a071c(void);
void func_020a0774(s32 a, void *p);
u16 func_0204fef4(void *p, u32 n, u32 m);
void func_0209eb1c(void *p);
void func_0209eb90(void *p);
void func_0209eb8c(void *p);
u32 func_0209eb14(void *p);
void func_0209eb18(void *p, u32 v);
u32 func_0209eb0c(void *p);
void func_0209eb10(void *p, u32 v);
u32 func_0208f1c4(void *p);
void func_0208f1d0(void *p, u32 v);
u32 func_0208f060(void *p);
void func_0208f068(void *p, u32 v);
void *func_02097868(void *t, s32 i);
void *func_02098680(void *p);
void *func_02098674(void *p);
u16 func_02076c6c(void *p);
void func_02076c74(void *p, u32 v);
u16 func_02076d50(void *p);
void func_02076d5c(void *p, u32 v);
extern s32 data_021ed3c8;
extern u8 data_021d7350[];
extern u8 data_021c4890[];
extern s32 data_020d0764[];
extern s32 data_020d077c[];
extern s32 data_020d0794[];
extern u8 data_0213a740[];
}

class Unk_020a09d8 {
public:
    s32 func_020a10ec(s32 idx);
    s32 func_020a0f88(s32 mode);
    s32 func_020a0f1c(s32 idx);
    s32 func_020a0e44(s32 idx);
    s32 func_020a0dd0(s32 idx);
    s32 func_020a0d90(s32 idx);
    s32 func_020a0d28(s32 idx);
    s32 func_020a0b08(s32 idx);
    s32 func_020a09fc(s32 idx);
    BOOL func_020a09d8(u8 *p, u8 *q, s32 n);
    s32 func_020a1158(s32 arg);

    /* 0x00 */ u32 unk_00[0x14];
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u32 unk_54[0x12];
    /* 0x9c */ u8 unk_9c;
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ s16 unk_a0;
    /* 0xa2 */ s16 unk_a2;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ u32 unk_a8;
    /* 0xac */ u8 *unk_ac;
    /* 0xb0 */ u8 *unk_b0;
};

extern "C" Unk_020a09d8 *data_021ed3b0;

class Unk_020a0990 {
public:
    void func_020a0990(const char *str, u8 flag);

    /* 0x00 */ u32 unk_00[0x15];
    /* 0x54 */ Unk_020ddcf0 unk_54;
};

extern "C" {

BOOL func_020a0868(void) {
    Unk_020a09d8 *p = data_021ed3b0;
    if (p != NULL && p->unk_50 == 0) return TRUE;
    return FALSE;
}

BOOL func_020a0884(void) {
    Unk_020a09d8 *p = data_021ed3b0;
    if (p != NULL && p->unk_50 == 0x12 && p->unk_9d == 3) return TRUE;
    return FALSE;
}

BOOL func_020a08a8(void) {
    Unk_020a09d8 *p = data_021ed3b0;
    if (p != NULL && p->unk_50 == 0) return TRUE;
    return FALSE;
}

void func_020a08c4(void) { data_021ed3c8 = 0x1c; }
void func_020a08d0(void) { data_021ed3c8 = 0x1f; }
void func_020a08dc(void) { data_021ed3c8 = 0x1b; }
void func_020a08e8(void) { data_021ed3c8 = 0x1a; }
void func_020a08f4(void) { data_021ed3c8 = 0x19; }
void func_020a0900(void) { data_021ed3c8 = 0x18; }
void func_020a090c(void) { data_021ed3c8 = 0x17; }
void func_020a0918(void) { data_021ed3c8 = 0x16; }
void func_020a0924(void) { data_021ed3c8 = 0x15; }
void func_020a0930(void) { data_021ed3c8 = 0x14; }
void func_020a093c(void) { data_021ed3c8 = 0x13; }
void func_020a0948(void) { data_021ed3c8 = 0x12; }
void func_020a0954(void) { data_021ed3c8 = 3; }
void func_020a0960(void) { data_021ed3c8 = 5; }
void func_020a096c(void) { data_021ed3c8 = 6; }
void func_020a0978(void) { data_021ed3c8 = 2; }
void func_020a0984(void) { data_021ed3c8 = 1; }

}

void Unk_020a0990::func_020a0990(const char *str, u8 flag) {
    Unk_020660f8 *o = func_02067918(0);
    unk_54.vfunc_08();
    unk_54.func_020a710c(str);
    unk_54.unk_1e = flag;
    o->func_02067a78();
    o->func_02067978(&unk_54);
    o->unk_08 = 1;
}

BOOL Unk_020a09d8::func_020a09d8(u8 *p, u8 *q, s32 n) {
    while (n != 0) {
        if (*p != *q) return FALSE;
        p++;
        q++;
        n--;
    }
    return TRUE;
}

s32 Unk_020a09d8::func_020a09fc(s32 idx) {
    u8 *a[3];
    a[0] = data_021d7350;
    a[1] = data_021d7350;
    a[2] = func_020a03ac();
    u8 *buf = a[idx];
    s32 r = func_0204ff6c(data_021c4890);
    s32 off = data_020d0794[idx];
    s32 size = data_020d0764[idx];
    if (r == 4) {
        func_0204ffa0(data_021c4890, buf, size, off);
    } else if (r == 1) {
        func_0204ff40(data_021c4890);
        return 1;
    } else if (r != 3) {
        func_0204ff40(data_021c4890);
        if (func_0204ff18(buf, data_020d077c[idx]) == 0) return 0;
        return 4;
    }
    return 3;
}

extern "C" s32 func_020a0a7c(s32 idx, u8 *buf) {
    s32 r = func_0204ff6c(data_021c4890);
    s32 off = data_020d0794[idx];
    s32 size = data_020d0764[idx];
    if (r == 4) {
        func_02115fb4(buf, 0, size);
        func_0204ffa0(data_021c4890, buf, size, off);
    } else if (r != 3) {
        func_0204ff40(data_021c4890);
        s32 t = func_0204ff18(buf, data_020d077c[idx]);
        if (func_0209e1a0(buf) == 0) return 4;
        if (t == 0) return 0;
        return 4;
    } else if (r == 1) {
        func_0204ff40(data_021c4890);
        return 1;
    }
    return 3;
}

s32 Unk_020a09d8::func_020a0b08(s32 idx) {
    s32 r = func_0204ff6c(data_021c4890);
    s32 off = data_020d0794[idx];
    s32 size = data_020d0764[idx];
    if (r == 4) {
        func_02115fb4(unk_b0, 0, size);
        func_0204ffa0(data_021c4890, unk_b0, size, off);
    } else if (r != 3) {
        func_0204ff40(data_021c4890);
        if (func_0209e1a0(data_021ed3b0->unk_b0) == 0) return 4;
        if (func_0204ff18(unk_b0, data_020d077c[idx]) == 0) return 0;
        return 4;
    } else if (r == 1) {
        func_0204ff40(data_021c4890);
        return 1;
    }
    return 3;
}

extern "C" BOOL func_020a0ba4(u32 idx, s32 flag) {
    u8 *a[3];
    a[0] = data_021d7350;
    a[1] = data_021d7350;
    a[2] = func_020a03ac();
    u8 *buf = a[idx];
    s32 off = data_020d0794[idx];
    s32 size = data_020d0764[idx];
    if (flag != 0 && idx <= 1) {
        Unk_020a09d8 *g = data_021ed3b0;
        if (g == NULL) return TRUE;
        buf = g->unk_ac;
    }
    if (func_02050008(data_021c4890, buf, size, off) != 0) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020a0c0c(u32 idx) {
    return func_020a0ba4(idx, 0);
}

extern "C" s32 func_020a0c18(s32 idx, s32 flag) {
    if (flag != 0 && data_021ed3b0 == NULL) return 1;
    s32 r = func_020a0ba4(idx, flag);
    if (r == 0) {
        u8 *buf;
        if (flag != 0) buf = data_021ed3b0->unk_ac;
        else buf = data_021d7350;
        s32 t = func_0204ff18(buf, 0x15fe0);
        if (func_0209e1a0(buf) == 0) return 4;
        if (t == 0) {
            func_0204ff18(buf + 0x10c3c, 0x84c);
            s32 i = 0;
            u8 *p = buf + 0xc;
            for (; i < 4; i++) {
                func_0204ff18(func_02098680(func_02097868(p, i)), 0x50);
                func_0204ff18(func_02098674(func_02097868(buf + 0xc, i)), 0x384);
            }
        } else {
            return 4;
        }
    }
    return r;
}

extern "C" s32 func_020a0ccc(s32 idx) {
    return func_020a0c18(idx, 0);
}

extern "C" s32 func_020a0cd8(void) {
    s32 a = func_020a0ccc(0);
    s32 b = func_020a0ccc(1);
    if (a == 1 || b == 1) return 1;
    if (a != 0 && b != 0) return 4;
    if (a != 0) func_020a0c0c(1);
    else if (b != 0) func_020a0c0c(0);
    else func_020a0c0c(func_020a071c());
    return 0;
}

s32 Unk_020a09d8::func_020a0d28(s32 idx) {
    s32 r = func_0204ff6c(data_021c4890);
    s32 off = data_020d0794[idx];
    s32 size = data_020d0764[idx];
    if (r == 1) {
        func_0204ff40(data_021c4890);
        return 1;
    } else if (r == 4) {
        func_02115fb4(unk_ac, 0xff, size);
        func_0205007c(data_021c4890, off, unk_ac, size);
    } else if (r != 3) {
        func_0204ff40(data_021c4890);
        return 0;
    }
    return 3;
}

s32 Unk_020a09d8::func_020a0d90(s32 idx) {
    u8 *a[3];
    a[0] = data_021d7350;
    a[1] = data_021d7350;
    a[2] = func_020a03ac();
    func_02116048(unk_ac, a[idx], data_020d077c[idx]);
    unk_9c = 6;
    return 3;
}

s32 Unk_020a09d8::func_020a0dd0(s32 idx) {
    s32 r = func_0204ff6c(data_021c4890);
    s32 off = data_020d0794[idx];
    if (r == 1) {
        func_0204ff40(data_021c4890);
        return 1;
    } else if (r == 4) {
        s32 o = unk_a0 << 9;
        func_0205007c(data_021c4890, o + off, unk_ac + o, unk_a4);
    } else if (r != 3) {
        func_0204ff40(data_021c4890);
        unk_a0 = -1;
        unk_a4 = 0;
        unk_9c = 3;
    }
    return 3;
}

s32 Unk_020a09d8::func_020a0e44(s32 idx) {
    s32 size = data_020d0764[idx];
    s32 q = size / 0x200;
    s32 rem = size % 0x200;
    while (unk_9e <= q) {
        s32 n = 0x200;
        if (unk_9e == q) n = rem;
        s32 o = unk_9e << 9;
        if (func_020a09d8(unk_ac + o, unk_b0 + o, n) == 0) {
            if (unk_a0 == -1) unk_a0 = unk_9e;
            unk_a4 = unk_a4 + n;
            if (unk_9e == q) {
                unk_9c = 4;
                unk_9e = unk_9e + 1;
                return 3;
            }
        } else if (unk_a4 != 0) {
            unk_9c = 4;
            return 3;
        }
        unk_9e = unk_9e + 1;
    }
    if (unk_9e > q) unk_9c = 5;
    return 3;
}

s32 Unk_020a09d8::func_020a0f1c(s32 idx) {
    s32 r = func_0204ff6c(data_021c4890);
    s32 off = data_020d0794[idx];
    s32 size = data_020d0764[idx];
    if (r == 1) {
        func_0204ff40(data_021c4890);
        return 1;
    } else if (r == 4) {
        func_02115fb4(unk_b0, 0, size);
        func_0204ffa0(data_021c4890, unk_b0, size, off);
    } else if (r != 3) {
        func_0204ff40(data_021c4890);
        unk_9c = 3;
    }
    return 3;
}

s32 Unk_020a09d8::func_020a0f88(s32 mode) {
    if (mode == 2) {
        u8 *b = unk_ac;
        *(u16 *)(b + 0x11df2) = func_0204fef4(b, 0x11df4, *(u16 *)(b + 0x11df2));
    } else {
        s32 s = 0;
        if (mode == 1) s = func_020a0b08(s);
        if (s == 3) return 3;
        if (s == 1) return 1;
        u8 *buf = unk_ac;
        if (mode == 0) {
            func_0209eb1c(buf + 0x15fdc);
        } else if (s == 0) {
            u32 local;
            func_0209eb90(&local);
            func_020a0774(0, &local);
            func_0209eb18(buf + 0x15fdc, func_0209eb14(&local));
            func_0209eb8c(&local);
        }
        u8 *p = buf + 0x10c3c;
        func_0208f1d0(p, func_0204fef4(p, 0x84c, func_0208f1c4(p)));
        p = buf + 0x15c58;
        func_0208f068(p, func_0204fef4(p, 0xf8, func_0208f060(p)));
        for (s32 i = 0; i < 4; i++) {
            void *e = func_02098680(func_02097868(buf + 0xc, i));
            func_02076c74(e, func_0204fef4(e, 0x50, func_02076c6c(e)));
            e = func_02098674(func_02097868(buf + 0xc, i));
            func_02076d5c(e, func_0204fef4(e, 0x384, func_02076d50(e)));
        }
        func_0209eb10(buf + 0x15fdc, func_0204fef4(buf, 0x15fe0, func_0209eb0c(buf + 0x15fdc)));
        func_0204ff18(buf, 0x15fe0);
        func_0204ff18(buf, 0x15fe0);
    }
    unk_9c = 2;
    return 3;
}

s32 Unk_020a09d8::func_020a10ec(s32 idx) {
    u8 *a[3];
    a[0] = data_021d7350;
    a[1] = data_021d7350;
    a[2] = func_020a03ac();
    func_02115fb4(unk_ac, 0, data_020d0764[idx]);
    func_02116048(a[idx], unk_ac, data_020d077c[idx]);
    unk_9e = 0;
    unk_a0 = -1;
    unk_a4 = 0;
    unk_9c = 1;
    return 3;
}

s32 Unk_020a09d8::func_020a1158(s32 arg) {
    static Unk_020a09d8_State tbl[7] = {
        &Unk_020a09d8::func_020a10ec, &Unk_020a09d8::func_020a0f88, &Unk_020a09d8::func_020a0f1c,
        &Unk_020a09d8::func_020a0e44, &Unk_020a09d8::func_020a0dd0, &Unk_020a09d8::func_020a0d90,
        *(Unk_020a09d8_State *)data_0213a740};
    s32 r = 3;
    if (tbl[unk_9c]) r = (this->*tbl[unk_9c])(arg);
    if (unk_9c == 6) {
        r = 0;
        unk_9c = r;
    }
    return r;
}
