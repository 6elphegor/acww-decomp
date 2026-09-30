#include "types.h"

extern "C" {
void func_0206f9fc(void *a, u32 v);
void func_0206f994(void *p, void *s, s32 n);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_02002438(void *a, s32 b, s32 c, s32 d, s32 e);
void func_02002688(char *buf, void *font, s32 a, u32 b, s32 c);
void func_0200261c(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020026c4(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_02002654(void *a, void *b, s32 c);
void *func_020641ec(void *a, void *b, s32 c, void *d);
void func_020e85fc(void *heap, void *p);
s32 func_0206ed50();
s32 func_020639e8(char *buf, const char *fmt, ...);

extern void *data_021f482c;
extern void *data_ov124_02296e60[];
extern void *data_ov124_02296f38[];
extern u8 data_ov124_02296f50[];
extern u8 data_ov124_02296f70[];
extern u8 data_ov124_02296f90[];
extern u8 data_ov124_02296fd0[];
extern u8 data_ov124_02296fe8[];
extern u8 data_ov124_02296ff8[];
extern char data_ov124_02297008[];
extern char data_ov124_0229701c[];
extern u8 data_ov124_02297030[];
extern u8 data_ov124_02297048[];
}

// String buffer wrapping a text renderer (src/main/unk_0206f53c.cpp), 0x40 bytes; ctor 0x0206fcc8, D1 0x0206fca8
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();

    void func_0206f904(u8 a, u8 b, u32 c, u32 d);
    void func_0206fa28(s32 v);
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    u32 unk_04[0x3c / 4];
};

struct Unk_ov124_Rec;

// Sprite/text pair element (0x50 bytes), vtable 0x022046dc (src/ov002 / scratch ov002_005)
class Unk_ov002_022046dc {
public:
    Unk_ov002_022046dc();
    virtual ~Unk_ov002_022046dc();

    void func_ov002_02203c1c();
    void func_ov002_02203ca4(u8 v);
    void func_ov002_02203cf8(void *p, u8 a, u8 b);
    void func_ov002_02203b30(s32 x, s32 y, s32 c);

    u32 unk_04[0x4c / 4];
};

// Non-polymorphic menu sub-object: 1 text buffer at +0, a sprite/text pair at +0x40, state bytes at +0x90/0x91
class Unk_ov124_02296840 {
public:
    Unk_ov124_02296840();
    ~Unk_ov124_02296840();

    void func_ov124_02296840();
    void func_ov124_02296858(s32 x, s32 y);
    void func_ov124_022968a8(s32 x, s32 y);
    void func_ov124_022968ec(s32 v);
    void func_ov124_02296a8c(s32 a, s32 b);
    void func_ov124_02296c7c(u8 a, u8 b, u32 c, u32 d);
    void func_ov124_02296c90(void *s, s32 n);
    void func_ov124_02296c98();
    void func_ov124_02296cd4();
    void func_ov124_02296d2c(s32 a);
    void func_ov124_02296d4c(s32 a, s32 b);

    /* 0x00 */ Unk_020e0488 unk_00[1];
    /* 0x40 */ Unk_ov002_022046dc unk_40;
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 unk_91;
};

extern "C" {
s32 func_ov124_02296c30();
}

void Unk_ov124_02296840::func_ov124_02296840() {
    unk_00[0].func_0206fc44();
    unk_40.func_ov002_02203c1c();
}

void Unk_ov124_02296840::func_ov124_02296858(s32 x, s32 y) {
    unk_40.func_ov002_02203b30(x, y, -1);
    func_02087e70(1, data_ov124_02296f70, x + 0x80, y + 0x60, unk_91, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov124_02296840::func_ov124_022968a8(s32 x, s32 y) {
    func_02087e70(1, data_ov124_02296f50, x + 0x80, y + 0x60, unk_91, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov124_02296840::func_ov124_022968ec(s32 v) {
    s32 st = unk_90;
    s32 loc;
    void *heap = data_021f482c;
    char *buf = (char *)func_020641ec(data_ov124_02296e60[st / 5], heap, -4, &loc);
    char *p = buf + (st % 5) * 0xc0;
    s32 i;
    s32 k = 0x15a;
    i = 0;
    do {
        func_02002438(p, 8, k, k, k + 5);
        p += 0x400;
        k += 0x20;
        i++;
    } while (i < 6);
    func_020e85fc(heap, buf);
    func_02002688((char *)data_ov124_02296fd0, heap, 8, unk_90, v);
    unk_91 = v;
    unk_40.func_ov002_02203cf8(data_ov124_02296f90, 14, 2);
    switch (func_0206ed50()) {
    case 0xb: unk_40.func_ov002_02203ca4(0x3b); break;
    case 0xf: unk_40.func_ov002_02203ca4(0xe6); break;
    case 0x10: unk_40.func_ov002_02203ca4(0xe7); break;
    case 0x18:
    case 0x19: unk_40.func_ov002_02203ca4(0xe9); break;
    case 0x1a:
    case 0x1b: unk_40.func_ov002_02203ca4(0xe8); break;
    case 0xc: unk_40.func_ov002_02203ca4(0x42); break;
    case 0xd: unk_40.func_ov002_02203ca4(0x44); break;
    case 0xe: unk_40.func_ov002_02203ca4(0x48); break;
    case 0x12: unk_40.func_ov002_02203ca4(0x4e); break;
    case 0x13: unk_40.func_ov002_02203ca4(0x4d); break;
    case 0x14: unk_40.func_ov002_02203ca4(0x4f); break;
    case 0x15: unk_40.func_ov002_02203ca4(0x45); break;
    case 0x16: unk_40.func_ov002_02203ca4(0x46); break;
    case 0x11: unk_40.func_ov002_02203ca4(0x4c); break;
    case 0x17: unk_40.func_ov002_02203ca4(0x41); break;
    }
}

void Unk_ov124_02296840::func_ov124_02296a8c(s32 a, s32 b) {
    void *heap = data_021f482c;
    char buf[0x20];
    func_0200261c(data_ov124_02296fe8, heap, a, 0x10, 0x10, 0x169);
    func_020026c4(data_ov124_02296ff8, heap, a, 1, 1, 6);
    switch (func_0206ed50()) {
    case 4:
    case 5:
    case 7:
    case 8: unk_90 = 0; break;
    case 6:
    case 9: unk_90 = 2; break;
    case 0xb: unk_90 = 1; break;
    case 0xc: unk_90 = 3; break;
    case 0xd: unk_90 = 4; break;
    case 0xe: unk_90 = 7; break;
    case 0xf:
    case 0x1a:
    case 0x1b: unk_90 = 5; break;
    case 0x10:
    case 0x18:
    case 0x19: unk_90 = 6; break;
    case 0x11: unk_90 = 8; break;
    case 0x12: unk_90 = 0xe; break;
    case 0x13: unk_90 = 0xd; break;
    case 0x14: unk_90 = 0xc; break;
    case 0x15: unk_90 = 0xb; break;
    case 0x16: unk_90 = 9; break;
    case 0x17: unk_90 = 0xa; break;
    case 0xa: unk_90 = 0xf; break;
    default: unk_90 = 0; break;
    }
    if (unk_90 == 0xb || unk_90 == 0xe) {
        func_020639e8(buf, data_ov124_02297008, unk_90);
    } else {
        func_020639e8(buf, data_ov124_0229701c, unk_90);
    }
    func_0200261c(buf, heap, a, 0x113, 0x113, 0x126);
    func_02002688((char *)data_ov124_02297030, heap, a, unk_90, 0xe);
    func_02002654(data_ov124_02296f38[b], heap, a);
}

extern "C" s32 func_ov124_02296c30() {
    switch (func_0206ed50()) {
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b: return 1;
    case 0x15: return 4;
    case 0x12: return 0;
    default: return 0;
    }
}

void Unk_ov124_02296840::func_ov124_02296c7c(u8 a, u8 b, u32 c, u32 d) {
    unk_00[0].func_0206f904(a, b, c, d);
}

void Unk_ov124_02296840::func_ov124_02296c90(void *s, s32 n) {
    func_0206f994(this, s, n);
}

void Unk_ov124_02296840::func_ov124_02296c98() {
    s32 v;
    switch (func_ov124_02296c30()) {
    case 0:
    case 1: v = 0; break;
    case 2:
    case 3:
    case 4: v = 0; break;
    }
    unk_00[0].func_0206fa28(v);
}

void Unk_ov124_02296840::func_ov124_02296cd4() {
    s32 v;
    switch (func_ov124_02296c30()) {
    case 0: v = 0xd; break;
    case 1: v = 8; break;
    case 2: v = 0x14; break;
    case 3: v = 5; break;
    case 4: v = 10; break;
    }
    unk_00[0].func_0206fb9c(3, 0x11, v, 4, 1, 0);
}

void Unk_ov124_02296840::func_ov124_02296d2c(s32 a) {
    func_ov124_02296a8c(a, func_ov124_02296c30());
}

void Unk_ov124_02296840::func_ov124_02296d4c(s32 a, s32 b) {
    func_ov124_02296a8c(a, 5);
    func_02002654(data_ov124_02297048, data_021f482c, b);
    switch (func_0206ed50()) {
    case 4:
    case 7:
    case 10: func_0206f9fc(this, 0x3a); break;
    case 5: func_0206f9fc(this, 0x90); break;
    case 8:
    case 9: func_0206f9fc(this, 0x92); break;
    case 6: func_0206f9fc(this, 0x49); break;
    default: func_0206f9fc(this, 0x3a); break;
    }
    unk_00[0].func_0206fb9c(a, 0x11, 0xd, 4, 1, 0);
    unk_00[0].func_0206fab4(1, 0);
}

Unk_ov124_02296840::~Unk_ov124_02296840() {}

Unk_ov124_02296840::Unk_ov124_02296840() : unk_00(), unk_40() {}
