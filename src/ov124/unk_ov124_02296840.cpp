#include "types.h"

extern "C" {
void func_0206f9fc(void *a, u32 v);
void func_0206f994(void *p, void *s, s32 n);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_02002438(void *a, s32 b, s32 c, s32 d, s32 e);
void func_02002688(const char *buf, void *font, s32 a, u32 b, s32 c);
void func_0200261c(const char *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020026c4(const char *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_02002654(const char *a, void *b, s32 c);
void *File_LoadAlloc(void *a, void *b, s32 c, void *d);
void Heap_Free(void *heap, void *p);
s32 func_0206ed50();
s32 func_020639e8(char *buf, const char *fmt, ...);

extern void *gCurrentHeap;
extern char data_ov124_02296e70[],data_ov124_02296e84[],data_ov124_02296e98[],data_ov124_02296eac[],data_ov124_02296ec0[],data_ov124_02296ed4[],data_ov124_02296ee8[],data_ov124_02296efc[],data_ov124_02296f10[],data_ov124_02296f24[];
extern void *data_ov124_02296e60[];
extern void *data_ov124_02296f38[];
extern u8 data_ov124_02296f50[];
extern u8 data_ov124_02296f70[];
extern u8 data_ov124_02296f90[];
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

struct Unk_ov002_02203c5c_Rec;

// Sprite/text pair element (0x50 bytes), vtable 0x022046dc (src/ov002 / scratch ov002_005)
class Unk_ov002_022046dc {
public:
    Unk_ov002_022046dc();
    virtual ~Unk_ov002_022046dc();

    void func_ov002_02203c1c();
    void func_ov002_02203ca4(u8 v);
    void func_ov002_02203cf8(Unk_ov002_02203c5c_Rec *p, u8 a, u8 b);
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

Unk_ov124_02296840::Unk_ov124_02296840() : unk_00(), unk_40() {}

Unk_ov124_02296840::~Unk_ov124_02296840() {}

void Unk_ov124_02296840::func_ov124_02296d4c(s32 a, s32 b) {
    func_ov124_02296a8c(a, 5);
    func_02002654("menu/han/b_bg.bsc", gCurrentHeap, b);
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

void Unk_ov124_02296840::func_ov124_02296d2c(s32 a) {
    func_ov124_02296a8c(a, func_ov124_02296c30());
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

void Unk_ov124_02296840::func_ov124_02296c90(void *s, s32 n) {
    func_0206f994(this, s, n);
}

void Unk_ov124_02296840::func_ov124_02296c7c(u8 a, u8 b, u32 c, u32 d) {
    unk_00[0].func_0206f904(a, b, c, d);
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

void Unk_ov124_02296840::func_ov124_02296a8c(s32 a, s32 b) {
    void *heap = gCurrentHeap;
    char buf[0x20];
    func_0200261c("menu/han/bg.bch", heap, a, 0x10, 0x10, 0x169);
    func_020026c4("menu/han/bg.bpl", heap, a, 1, 1, 6);
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
        func_020639e8(buf, "menu/han/bg%dE.bch", unk_90);
    } else {
        func_020639e8(buf, "menu/han/bg%d.bch", unk_90);
    }
    func_0200261c(buf, heap, a, 0x113, 0x113, 0x126);
    func_02002688("menu/han/ten0_bg.bpl", heap, a, unk_90, 0xe);
    func_02002654((const char *)data_ov124_02296f38[b], heap, a);
}

void Unk_ov124_02296840::func_ov124_022968ec(s32 v) {
    s32 st = unk_90;
    s32 loc;
    void *heap = gCurrentHeap;
    char *buf = (char *)File_LoadAlloc(data_ov124_02296e60[st / 5], heap, -4, &loc);
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
    Heap_Free(heap, buf);
    func_02002688("menu/han/ten0_obj.bpl", heap, 8, unk_90, v);
    unk_91 = v;
    unk_40.func_ov002_02203cf8((Unk_ov002_02203c5c_Rec *)data_ov124_02296f90, 14, 2);
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

void Unk_ov124_02296840::func_ov124_022968a8(s32 x, s32 y) {
    Oam_DrawCell(1, data_ov124_02296f50, x + 0x80, y + 0x60, unk_91, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov124_02296840::func_ov124_02296858(s32 x, s32 y) {
    unk_40.func_ov002_02203b30(x, y, -1);
    Oam_DrawCell(1, data_ov124_02296f70, x + 0x80, y + 0x60, unk_91, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov124_02296840::func_ov124_02296840() {
    unk_00[0].func_0206fc44();
    unk_40.func_ov002_02203c1c();
}

extern "C" void *data_ov124_02296f38[6] = {(void *)data_ov124_02296eac, (void *)data_ov124_02296f10, (void *)data_ov124_02296efc, (void *)data_ov124_02296ee8, (void *)data_ov124_02296e84, (void *)data_ov124_02296ec0};
extern "C" char data_ov124_02296ec0[20] = "menu/han/e_bg.bsc";
extern "C" char data_ov124_02296e70[20] = "menu/han/obj2.bch";
extern "C" char data_ov124_02296f24[20] = "menu/han/obj3.bch";
extern "C" void *data_ov124_02296e60[4] = {(void *)data_ov124_02296e98, (void *)data_ov124_02296ed4, (void *)data_ov124_02296e70, (void *)data_ov124_02296f24};
extern "C" u8 data_ov124_02296f90[64] = {0xb0, 0x40, 0xdb, 0x81, 0x4c, 0xc1, 0x0, 0x0, 0xb0, 0x40, 0xfb, 0x81, 0x50, 0xc1, 0x0, 0x0, 0xb0, 0x40, 0x1b, 0x80, 0x54, 0xc1, 0x0, 0x0, 0xb0, 0x0, 0x3b, 0x40, 0x58, 0xc1, 0x0, 0x0, 0xb0, 0x40, 0x13, 0x80, 0xd0, 0xb0, 0x0, 0x0, 0xb0, 0x40, 0xf3, 0x81, 0xd0, 0xb0, 0x0, 0x0, 0xb0, 0x40, 0x33, 0x90, 0xcf, 0xb0, 0x0, 0x0, 0xb0, 0x40, 0xd3, 0x81, 0xcf, 0xb0, 0xff, 0xff};
extern "C" char data_ov124_02296ee8[20] = "menu/han/f_bg.bsc";
extern "C" char data_ov124_02296e84[20] = "menu/han/g_bg.bsc";
extern "C" char data_ov124_02296f10[20] = "menu/han/c_bg.bsc";
extern "C" char data_ov124_02296eac[20] = "menu/han/a_bg.bsc";
extern "C" char data_ov124_02296efc[20] = "menu/han/d_bg.bsc";
extern "C" char data_ov124_02296ed4[20] = "menu/han/obj1.bch";
extern "C" u8 data_ov124_02296f50[32] = {0xa8, 0x0, 0xe8, 0x81, 0x5a, 0x41, 0x0, 0x0, 0xa8, 0x80, 0x8, 0x80, 0x5e, 0x41, 0x0, 0x0, 0xc8, 0x40, 0xe8, 0x81, 0xda, 0x41, 0x0, 0x0, 0xc8, 0x0, 0x8, 0x40, 0xde, 0x41, 0xff, 0xff};
extern "C" char data_ov124_02296e98[20] = "menu/han/obj0.bch";
extern "C" u8 data_ov124_02296f70[32] = {0xa1, 0x0, 0xa0, 0x81, 0x5a, 0x41, 0x0, 0x0, 0xa1, 0x80, 0xc0, 0x81, 0x5e, 0x41, 0x0, 0x0, 0xc1, 0x40, 0xa0, 0x81, 0xda, 0x41, 0x0, 0x0, 0xc1, 0x0, 0xc0, 0x41, 0xde, 0x41, 0xff, 0xff};
