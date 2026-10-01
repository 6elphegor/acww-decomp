#include "types.h"

struct Unk_0204da0c_Size {
    s32 w;
    s32 h;
};

struct Unk_0204da0c_Map {
    u32 unk_00;
    Unk_0204da0c_Size unk_04;
};

struct Unk_0204c3c0_Ver {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0204c3f4_Slot {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0204c3f4 {
    /* 0x00 */ Unk_0204c3c0_Ver unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u8 pad_0c[0x21 - 0x0c];
    /* 0x21 */ s8 unk_21;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x54 - 0x23];
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ Unk_0204c3f4_Slot unk_58[4];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
};

extern "C" {
Unk_0204da0c_Map *func_0204da0c();
u16 *func_0204ebd8(Unk_0204da0c_Map *m, s32 cx, s32 cy, s32 lx, s32 ly, s32 z);
s32 func_0204eb30(Unk_0204da0c_Map *m, u16 *v, s32 x, s32 y, s32 z);
s32 func_0204e914(Unk_0204da0c_Map *m, s32 x, s32 y);
void func_0209cf88(void *p);
s32 func_0209cdc0(void *a, void *b);
s32 func_0209ceac(u32 a, u32 b, u32 c);
void func_0204c21c(void *p);
void func_0204c20c(void *p);
void func_0204c1d8(void *p);
void func_0204c22c(void *p, void *q);
void func_0204c290(void *p);
void func_02045e34();
s32 func_02063b8c(s32 a);
}

extern const u16 data_020ca2e8[6];
const u16 data_020ca2e8[6] = {0x3b, 0x43, 0x4b, 0x33, 0x53, 0};

static inline BOOL Unk_0204c318_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void func_0204c508() {}

extern "C" void func_0204c504() {}

extern "C" void func_0204c318(Unk_0204c3f4 *p);

extern "C" void func_0204c45c(Unk_0204c3f4 *p) {
    func_0209cf88(p);
    p->unk_04 = func_02063b8c(5);
    func_0209ceac(p->unk_00.unk_02, p->unk_00.unk_01, p->unk_00.unk_00);
    func_0204c22c(p, p);
    func_0204c21c(p);
    func_0204c20c(p);
    func_0204c318(p);
    func_0204c290(p);
    func_0204c1d8(p);
    Unk_0204c3f4_Slot *s;
    s32 i;
    for (s = p->unk_58, i = 0; i < 4; i++) {
        s->unk_00 = 1;
        s->unk_01 = 1;
        s->unk_02 = 0;
        s->unk_03 = 0;
        s++;
    }
    p->unk_21 = -1;
    p->unk_54 = 1;
    p->unk_55 = 1;
    p->unk_56 = 0;
    p->unk_57 = 0;
    func_02045e34();
    p->unk_6b = 0;
    p->unk_6a = 0xff;
    p->unk_69 = 0xff;
    p->unk_68 = 0xff;
    p->unk_22 = 0;
}

extern "C" void func_0204c3f4(Unk_0204c3f4 *p) {
    func_0209cf88(p);
    p->unk_04 = 0;
    p->unk_08 = 1;
    p->unk_09 = 1;
    p->unk_0a = 0;
    p->unk_0b = 0;
    func_0204c21c(p);
    func_0204c20c(p);
    func_0204c1d8(p);
    Unk_0204c3f4_Slot *s;
    s32 i;
    for (s = p->unk_58, i = 0; i < 4; i++) {
        s->unk_00 = 1;
        s->unk_01 = 1;
        s->unk_02 = 0;
        s->unk_03 = 0;
        s++;
    }
    p->unk_21 = -1;
    p->unk_54 = 1;
    p->unk_55 = 1;
    p->unk_56 = 0;
    p->unk_57 = 0;
}

extern "C" void func_0204c3c0(Unk_0204c3c0_Ver *p) {
    Unk_0204c3c0_Ver t;
    func_0209cf88(&t);
    if (func_0209cdc0(&t, p) == 0) {
        p->unk_00 = t.unk_00;
        p->unk_01 = t.unk_01;
        p->unk_02 = t.unk_02;
        p->unk_03 = t.unk_03;
    }
}

extern "C" void func_0204c318(Unk_0204c3f4 *p) {
    Unk_0204da0c_Map *m = func_0204da0c();
    if (m) {
        Unk_0204da0c_Size *sz = &m->unk_04;
        s32 w = sz->w << 4;
        s32 h = sz->h << 4;
        s32 x, y, cx, cy;
        y = 0;
        u16 v = data_020ca2e8[p->unk_04];
        for (; y < h; y++) {
            x = 0;
            if (w > 0) {
                goto test;
            loop:
                cx = x >> 4;
                cy = y >> 4;
                {
                    u16 *t = func_0204ebd8(m, cx, cy, x - (cx << 4), y - (cy << 4), 0);
                    if (t) {
                        if (Unk_0204c318_InRange(t, 0x2f, 0x56)) {
                            u16 nv = v;
                            func_0204eb30(m, &nv, x, y, 0);
                            func_0204e914(m, x, y);
                        }
                    }
                }
                x++;
            test:
                if (x < w) goto loop;
            }
        }
    }
}
