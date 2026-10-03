#include "types.h"

// ---------------------------------------------------------------------------------------------------------------------
// Declarations from other files

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    void reset();
    void copyFrom(MsgStringAttr *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ MsgStringAttr unk_04;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

class Unk_020dd374 : public EncodedString {
public:
    Unk_020dd374();
    virtual ~Unk_020dd374();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x0e */ u8 unk_0e[10];
};

class Unk_020dd38c : public MsgString {
public:
    Unk_020dd38c();
    virtual ~Unk_020dd38c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14;
};

// String buffer wrapping a text renderer at +0x3c (size 0x40)
class Unk_020e0488 : public MsgString {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    s32 func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ void *unk_3c;
};

// Menu layer (size 0xbc)
class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class LabelBalloon : public UiWidget {
public:
    LabelBalloon(s32 flag);
    virtual ~LabelBalloon();
    virtual void draw();
    virtual void vfunc_0c();

    void setPos(s32 a, s32 b);
    void showLayer2();

    /* 0x0c */ u8 unk_0c[0xb0];
};

class Unk_ov002_02204770 : public LabelBalloon {
public:
    Unk_ov002_02204770();
    virtual ~Unk_ov002_02204770();
    virtual void setOrigin(s32 a, s32 b);

    void func_ov002_022039d8();
    void func_ov002_022039f8(u8 a, s32 b, s32 c);
};

// Button/sound helper (size 0x24)
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b8670(u32 a, u8 b, u32 c);
    void func_020b87d0(void);

    /* 0x04 */ u8 unk_04[0x20];
};

extern "C" {
extern u32 gCurrentHeap;

s32 func_0200261c(u32 p0, u32 p1, u32 p2, s32 p3, s32 e, s32 f);
s32 func_020026c4(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f);
void func_0206f994(MsgString *dst, const void *s, s32 len);
void func_0206f9fc(void *a, u8 v);
BOOL func_020a78a4(void *, const void *, s32);
u8 String_SetSlot(u32 idx, MsgString *other);
BOOL File_LoadToBuffer(void *a, void *b, s32 c);
void MIi_CpuCopy16(void *dst, void *src, u32 n);
}

extern "C" u32 data_ov139_022925c0[8];
extern "C" u32 data_ov139_022925e0[8];
extern "C" u32 data_ov139_02292600[8];
extern "C" u32 data_ov139_02292620[8];
extern "C" u32 data_ov139_02292640[8];
extern "C" u32 data_ov139_02292660[8];
extern "C" u32 data_ov139_022926a0[12];
extern "C" u32 data_ov139_022926d0[84];


extern "C" u32 data_ov139_02292680[8] = {(u32)data_ov139_022926d0, (u32)data_ov139_022926a0, (u32)data_ov139_022925c0, (u32)data_ov139_022925e0, (u32)data_ov139_02292620, (u32)data_ov139_02292640, (u32)data_ov139_02292600, (u32)data_ov139_02292660};
extern "C" u32 data_ov139_022925c0[8] = {0x81bf4047, 0x00008893, 0x41df0047, 0x00008897, 0x81d50040, 0x00008882, 0x81b90040, 0xffff8880};
extern "C" u32 data_ov139_022925e0[8] = {0x80114047, 0x0000888d, 0x40310047, 0x00008891, 0x80270040, 0x00008882, 0x800b0040, 0xffff8880};
extern "C" u32 data_ov139_02292600[8] = {0x81e44048, 0x00008893, 0x40040048, 0x00008897, 0x81fa0041, 0x00008882, 0x81de0041, 0xffff8880};
extern "C" u32 data_ov139_02292620[8] = {0x81e84023, 0x0000a08d, 0x40080023, 0x0000a091, 0x81fe001c, 0x0000a082, 0x81e2001c, 0xffffa080};
extern "C" u32 data_ov139_02292640[8] = {0x81a34048, 0x00008899, 0x41c30048, 0x0000889d, 0x81b90041, 0x00008882, 0x819d0041, 0xffff8880};
extern "C" u32 data_ov139_022926d0[84] = {0x81a800a8, 0x0000b17b, 0x41c880a8, 0x0000b17f, 0x41a840c8, 0x0000b1fb, 0x01c800c8, 0x0000b1ff, 0x4030403e, 0x000048e6, 0x4010403e, 0x000048e6, 0x41e8403e, 0x000048e6, 0x41c8403e, 0x000048e6, 0x41a8403e, 0x000048e6, 0x4030402e, 0x000048e6, 0x4010402e, 0x000048e6, 0x41e8402e, 0x000048e6, 0x41c8402e, 0x000048e6, 0x41a8402e, 0x000048e6, 0x4030401e, 0x000048e6, 0x4010401e, 0x000048e6, 0x41e8401e, 0x000048e6, 0x41c8401e, 0x000048e6, 0x41a8401e, 0x000048e6, 0x4030400e, 0x000048e6, 0x4010400e, 0x000048e6, 0x41e8400e, 0x000048e6, 0x41c8400e, 0x000048e6, 0x41a8400e, 0x000048e6, 0x403040fe, 0x000048e6, 0x401040fe, 0x000048e6, 0x41e840fe, 0x000048e6, 0x41c840fe, 0x000048e6, 0x41a840fe, 0x000048e6, 0x403040ee, 0x000048e6, 0x401040ee, 0x000048e6, 0x41e840ee, 0x000048e6, 0x41c840ee, 0x000048e6, 0x41a840ee, 0x000048e6, 0x41bc40d6, 0x000058cd, 0x01dc40d6, 0x000058d1, 0x401440d6, 0x000058ed, 0x003440d6, 0x000058f1, 0x902840d5, 0x00005888, 0x801040d5, 0x00005888, 0x91d040d5, 0x00005888, 0x81b840d5, 0xffff5888};
extern "C" u32 data_ov139_022926a0[12] = {0x403040ee, 0x000058c6, 0x41a400df, 0x00005886, 0x401040ee, 0x000058c6, 0x41e840ee, 0x000058c6, 0x41c840ee, 0x000058c6, 0x41a840ee, 0xffff58c6};

class Unk_ov139_02291f60 {
public:
    Unk_ov139_02291f60();
    ~Unk_ov139_02291f60();

    void func_ov139_02291f60(u32 m);
    void func_ov139_02291f70(u32 m);
    BOOL func_ov139_02291f80(u32 m);
    u32 func_ov139_02291f98(s32 i);
    void func_ov139_02291fa4(s32 i, u8 *str, u8 pal);
    void func_ov139_0229200c(s32 i, u8 *str, u8 pal);
    Unk_020e0488 *func_ov139_02292104();
    void func_ov139_0229212c();
    void func_ov139_02292154(s32 i);
    void func_ov139_0229217c(s32 i, u8 *str);
    void func_ov139_022921ac();
    void func_ov139_022922a0(s32 a, s32 x, s32 n, s32 e);
    void func_ov139_0229237c();
    void func_ov139_022923dc();
    void func_ov139_02292410();
    void func_ov139_02292480(s32 a, s32 b);
    void func_ov139_02292498();
    void func_ov139_022924d8();
    void func_ov139_022924f4();
    void func_ov139_02292510(u8 id, u8 v);

    /* 0x000 */ Unk_ov002_02204770 unk_00;
    /* 0x0bc */ Unk_020e0488 unk_bc[20];
    /* 0x5bc */ Unk_020e45f8 unk_5bc;
    /* 0x5e0 */ u16 unk_5e0[16];
    /* 0x600 */ u16 unk_600[16];
    /* 0x620 */ u16 unk_620;
    /* 0x622 */ u8 unk_622;
    /* 0x623 */ u8 unk_623;
};

Unk_ov139_02291f60::Unk_ov139_02291f60() {}

Unk_ov139_02291f60::~Unk_ov139_02291f60() {}

void Unk_ov139_02291f60::func_ov139_02292510(u8 id, u8 v) {
    unk_622 = id;
    unk_620 = 0;
    unk_00.func_ov002_022039d8();
    unk_00.func_ov002_022039f8(v, 0x90, 0x18);
    unk_00.showLayer2();
}

void Unk_ov139_02291f60::func_ov139_022924f4() {
    func_ov139_0229212c();
    unk_5bc.func_020b87d0();
}

void Unk_ov139_02291f60::func_ov139_022924d8() {
    func_ov139_0229212c();
    unk_5bc.func_020b87d0();
}

void Unk_ov139_02291f60::func_ov139_02292498() {
    if (func_ov139_02291f80(1)) {
        if (unk_5bc.func_020b8670((u32)unk_600, unk_622, 7)) {
            func_ov139_02291f60(1);
        }
    }
}

void Unk_ov139_02291f60::func_ov139_02292480(s32 a, s32 b) {
    unk_00.setPos(a, b);
    unk_00.draw();
}

void Unk_ov139_02291f60::func_ov139_02292410() {
    u32 h = gCurrentHeap;
    func_0200261c((u32)"menu/res/bg.bch", h, unk_622, 0x11, 0x11, 0x36);
    func_020026c4((u32)"menu/res/bg.bpl", h, unk_622, 1, 1, 8);
    File_LoadToBuffer((void *)"menu/res/bg7.bpl", unk_5e0, 0x20);
    MIi_CpuCopy16(unk_5e0, unk_600, 0x20);
}

void Unk_ov139_02291f60::func_ov139_022923dc() {
    s32 i;
    for (i = 0; i < 6; i++) {
        func_ov139_0229200c(i, NULL, 0xe);
        func_ov139_02291fa4(i, NULL, 0xe);
    }
}

void Unk_ov139_02291f60::func_ov139_0229237c() {
    u32 h = gCurrentHeap;
    func_0200261c((u32)"menu/res/obj0.bch", h, 8, 0x80, 0x80, 0xff);
    func_0200261c((u32)"menu/res/obj1.bch", h, 8, 0x160, 0x160, 0x1ff);
    func_020026c4((u32)"menu/res/obj.bpl", h, 8, 4, 4, 0xd);
}

void Unk_ov139_02291f60::func_ov139_022922a0(s32 a, s32 x, s32 n, s32 e) {
    u16 c1 = unk_5e0[15];
    u8 r = c1 & 0x1f;
    u8 g = (c1 & 0x3e0) >> 5;
    u8 b = (c1 & 0x7c00) >> 10;
    s32 d = n - x;
    u16 c2 = unk_5e0[e];
    r = ((u8)(c2 & 0x1f) * x + r * d) / n;
    g = ((u8)((c2 & 0x3e0) >> 5) * x + g * d) / n;
    b = ((u8)((c2 & 0x7c00) >> 10) * x + b * d) / n;
    unk_600[(u8)(0xe - a)] = r | (g << 5) | (b << 10);
    func_ov139_02291f70(1);
}

void Unk_ov139_02291f60::func_ov139_022921ac() {
    Unk_020e0488 *t;
    t = func_ov139_02292104();
    func_0206f9fc(t, 0x65);
    t->func_0206fb9c(8, 0x93, 6, 0xf, 0, 0);
    t->func_0206fab4(1, 0);
    t = func_ov139_02292104();
    func_0206f9fc(t, 0xc2);
    t->func_0206fb9c(8, 0x8d, 6, 0xf, 0, 0);
    t->func_0206fab4(1, 0);
    t = func_ov139_02292104();
    func_0206f9fc(t, 0xc1);
    t->func_0206fb9c(8, 0x99, 6, 0xf, 0, 0);
    t->func_0206fab4(1, 0);
    t = func_ov139_02292104();
    func_0206f9fc(t, 0xbc);
    t->func_0206fb48(8, 0xcd, 6, 0xe, 0, 0);
    t->func_0206fab4(1, 0);
    t = func_ov139_02292104();
    func_0206f9fc(t, 0xbd);
    t->func_0206fb48(8, 0xed, 6, 0xe, 0, 0);
    t->func_0206fab4(1, 0);
}

void Unk_ov139_02291f60::func_ov139_0229217c(s32 i, u8 *str) {
    u8 t = 0xe - i;
    func_ov139_0229200c(i, str, t);
    func_ov139_02291fa4(i, str + 8, t);
}

void Unk_ov139_02291f60::func_ov139_02292154(s32 i) {
    u8 t = 0xe - i;
    func_ov139_0229200c(i, NULL, t);
    func_ov139_02291fa4(i, NULL, t);
}

void Unk_ov139_02291f60::func_ov139_0229212c() {
    s32 i;
    unk_623 = 0;
    for (i = 0; i < 0x14; i++) {
        unk_bc[i].func_0206fc44();
    }
}

Unk_020e0488 *Unk_ov139_02291f60::func_ov139_02292104() {
    if (unk_623 >= 0x14) {
        return &unk_bc[19];
    }
    unk_623++;
    return &unk_bc[unk_623 - 1];
}




void Unk_ov139_02291f60::func_ov139_0229200c(s32 i, u8 *str, u8 pal) {
    Unk_020e0488 *t = func_ov139_02292104();
    static Unk_020dd374 sA;
    static Unk_020dd38c sB;
    if (str == NULL) {
        t->clear();
    } else {
        func_020a78a4(&sA, str, 8);
        sB.fromEncoded(&sA, 0, 0);
        String_SetSlot(0, &sB);
        func_0206f9fc(t, 0x66);
    }
    u32 a = i * 0x14 + 0x11e;
    u8 x = 0xf;
    u8 y = 0xe;
    if (pal != 0xff) {
        x = pal;
        y = 0xf;
    }
    t->func_0206fb9c(unk_622, a, 0xa, x, y, 0);
    t->func_0206fab4(1, 0);
}



extern "C" u32 data_ov139_02292660[8] = {0x80254048, 0x0000888d, 0x40450048, 0x00008891, 0x803b0041, 0x00008882, 0x801f0041, 0xffff8880};

void Unk_ov139_02291f60::func_ov139_02291fa4(s32 i, u8 *str, u8 pal) {
    Unk_020e0488 *t = func_ov139_02292104();
    if (str == NULL) {
        t->clear();
    } else {
        func_0206f994(t, str, 8);
    }
    u32 a = i * 16 + 0x1d2;
    u8 x = 0xf;
    u8 y = 0xe;
    if (pal != 0xff) {
        x = pal;
        y = 0xf;
    }
    t->func_0206fb9c(unk_622, a, 8, x, y, 0);
    t->func_0206fab4(1, 0);
}

u32 Unk_ov139_02291f60::func_ov139_02291f98(s32 i) { return data_ov139_02292680[i]; }

BOOL Unk_ov139_02291f60::func_ov139_02291f80(u32 m) {
    if (unk_620 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov139_02291f60::func_ov139_02291f70(u32 m) { unk_620 |= m; }

void Unk_ov139_02291f60::func_ov139_02291f60(u32 m) { unk_620 &= ~m; }




// ---------------------------------------------------------------------------------------------------------------------



