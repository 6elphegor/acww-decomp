#include "types.h"

struct Unk_ov114_02294c40_Bits {
    u32 idx : 10;
    u32 mid : 2;
    u32 pal : 4;
    u32 hi : 16;
};

struct Unk_ov114_02294c40_Entry {
    u32 unk_00;
    Unk_ov114_02294c40_Bits unk_04;
    s32 unk_08;
};

struct Unk_ov114_S {
    /* 0x0000 */ u8 pad_000[0x808];
    /* 0x0808 */ u8 unk_808[0x81a - 0x808];
    /* 0x081a */ u8 unk_81a[0x9d8 - 0x81a];
    /* 0x09d8 */ u16 unk_9d8;
    /* 0x09da */ u16 unk_9da;
    /* 0x09dc */ u8 pad_9dc[0x9f8 - 0x9dc];
    /* 0x09f8 */ u16 unk_9f8;
    /* 0x09fa */ u8 pad_9fa[0xa14 - 0x9fa];
    /* 0x0a14 */ u8 unk_0a14[0x480];
    /* 0x0e94 */ u8 unk_0e94[0x108c - 0xe94];
    /* 0x108c */ Unk_ov114_02294c40_Entry unk_108c[9];
    /* 0x10f8 */ u8 unk_10f8[0x11b8 - 0x10f8];
    /* 0x11b8 */ u8 unk_11b8[0x11f8 - 0x11b8];
    /* 0x11f8 */ u8 unk_11f8[0x48];
    /* 0x1240 */ u32 unk_1240[3];
    /* 0x124c */ s32 unk_124c;
    /* 0x1250 */ s32 unk_1250;
    /* 0x1254 */ s32 unk_1254;
    /* 0x1258 */ s32 unk_1258;
    /* 0x125c */ s32 unk_125c;
    /* 0x1260 */ s32 unk_1260;
    /* 0x1264 */ s32 unk_1264;
    /* 0x1268 */ s32 unk_1268;
    /* 0x126c */ s32 unk_126c;
    /* 0x1270 */ s32 unk_1270;
    /* 0x1274 */ s32 unk_1274;
    /* 0x1278 */ s32 unk_1278;
    /* 0x127c */ s32 unk_127c;
    /* 0x1280 */ void *unk_1280;
    /* 0x1284 */ void *unk_1284;
    /* 0x1288 */ u16 unk_1288;
    /* 0x128a */ u8 unk_128a;
    /* 0x128b */ u8 unk_128b;
    /* 0x128c */ u8 unk_128c;
    /* 0x128d */ u8 unk_128d;
    /* 0x128e */ u8 pad_128e;
    /* 0x128f */ u8 unk_128f;
    /* 0x1290 */ u8 unk_1290;
    /* 0x1291 */ u8 unk_1291;
    /* 0x1292 */ u8 unk_1292;
    /* 0x1293 */ u8 unk_1293;
    /* 0x1294 */ u8 unk_1294;
    /* 0x1295 */ u8 unk_1295;
    /* 0x1296 */ u8 unk_1296;
    /* 0x1297 */ u8 unk_1297;
    /* 0x1298 */ u8 unk_1298;
    /* 0x1299 */ u8 unk_1299;
};

typedef Unk_ov114_S S;

extern "C" {
extern const u8 data_ov114_0229654c[];
extern const u8 data_ov114_02296550[];
extern const s32 data_ov114_02296554[];
extern const s32 data_ov114_02296564[];
extern u8 data_ov114_02296580[];
extern u8 data_ov114_02296588[];
extern u8 data_ov114_02296590[];
extern u8 data_ov114_02296598[];
extern u8 data_ov114_022965a0[];
extern u8 data_ov114_022965c0[0x20];
extern u8 data_ov114_022965e0[];
extern char *data_ov114_022967a0;
extern char *data_ov114_022967a4;
extern char data_ov114_022967a8[];
extern u32 *gCurrentHeap;
extern u16 gPad;

void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getCatalogEv(void *p);
BOOL Catalog_HasItem(void *p, u16 *v);
void Snd_PlaySe(s32 v);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void _ZN18Unk_ov002_022046b019func_ov002_02202f00Ev(void *p);
void func_ov002_02202e48(void *p);
s32 _ZN18Unk_ov002_022046b019func_ov002_02202e60Ev(void *p);
s32 _ZN18Unk_ov002_022046b019func_ov002_02202e84Ev(void *p);
s32 func_ov090_02291a78(s32 v);
s32 _s32_div_f(s32 a, s32 b);
void func_020020b8(u32 v);
void func_020013b4(void *a, void *b, u32 c);
void func_020013a4();
void func_0200212c(u32 v);
s32 func_020639e8(char *buf, const char *fmt, ...);
void func_0200261c(const char *buf, u32 *font, u32 a, s32 b, s32 c, s32 d);
void func_02002688(const char *buf, u32 *font, u32 a, u8 b, s32 c);
s32 Item_GetInfoUnk02(u32 v);
void *func_02087e0c(void *p);
void *MI_CpuCopy8(void *dst, void *src, u32 n);
void _ZN12Unk_020e460813func_020b851cEjjhjjjj(void *a, void *b, void *c, s32 d, s32 e, s32 f, s32 g, s32 h);
void *_ZN18Unk_ov094_02294a4019func_ov094_02293b08Ei(S *s, s32 v);
s32 func_ov094_02293abc(S *s, s32 v);

void func_02088730(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
void _ZN8ItemNameC1Ev(void *p);
void _ZN8ItemNameD1Ev(void *p);
void _ZN8ItemName11setFromItemEPt(void *p, u16 *c);
void _ZN9MsgString5clearEv(void *p);
void _ZN9MsgString4copyEPS_(void *p, void *q);
void _ZN9MsgString7setLineEPh(void *p, s32 v);
s32 Msg_SkipLines(void *p, s32 i);
void _ZN12Unk_020e048813func_0206fb9cEjjjhhi(void *p, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void _ZN12Unk_020e048813func_0206fab4Eii(void *p, s32 a, s32 b);
void _ZN12Unk_020e048813func_0206fc44Ev(void *p);
void _ZN12Unk_020e45f813func_020b87d0Ev(void *p);
void String_Load(void *p, u8 *q, const char *name);
BOOL _ZN10ScrollKnob12areAnimsDoneEv(void *p);
void _ZN18Unk_ov002_022046b019func_ov002_02202f0cEv(void *p);
void _ZN18Unk_ov002_022046b019func_ov002_02202ef4Ev(void *p);
void func_ov002_02202e54(void *p);
void func_020e761c(void *p, s32 a, s32 b);

s32 func_02087dac(void *info, s32 x, s32 y, s32 a, s32 b);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_020026c4(const char *name, s32 h, s32 a, s32 b, s32 c, s32 d);
void func_02002654(const char *name, s32 h, s32 a);
s32 func_02002700(u32 v);
s32 _ZN12Unk_020e45f813func_020b8670Ejhj(void *a, void *b, s32 c, s32 d);
void func_020b8800(void *p);
void func_020b85f8(void *p);
void _ZN10ScrollKnob6moveToEii(void *a, u32 b, u32 c);
void File_LoadToBuffer(const void *src, void *dst, s32 n);
void MIi_CpuCopy16(void *, void *, u32);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_02135714(void *, s32, s32, void (*)(void *), void (*)(void *));
void func_021355f0(void *, s32, s32, void (*)(void *));

void func_ov114_02294c40(S *s, u32 m);
void func_ov114_02294c50(S *s, u32 m);
BOOL func_ov114_02294c60(S *s, u32 m);
BOOL func_ov114_02294c78(S *s, s32 i);
void func_ov114_02294ca4(S *s);
BOOL func_ov114_02294d88(S *s);
u8 func_ov114_02294e30(S *s);
void func_ov114_02294e6c(S *s);
BOOL func_ov114_02294ed0(S *s, void *pad);
BOOL func_ov114_022950b4(S *s);
s32 func_ov114_022950cc(S *s);
s32 func_ov114_022950e8(S *s);
s32 func_ov114_02295150(S *s);
void func_ov114_022951b8(S *s, u8 v);
void func_ov114_022951e0(S *s);
void func_ov114_02295290(S *s);
void func_ov114_02295350(S *s);
void func_ov114_02295374(S *s);
void func_ov114_0229539c(S *s);
void func_ov114_022953e4(S *s, u32 a, s32 idx);
void func_ov114_0229549c(S *s);
BOOL func_ov114_02295510(S *s, s32 x, s32 y);
void func_ov114_0229559c(S *s);
BOOL func_ov114_0229563c(S *s, s32 v);
void func_ov114_022956a4(S *s, s32 a);
void func_ov114_02295780(S *s, u32 a);
void *func_ov114_02295830(S *s);
void func_ov114_02295860(S *s);
u32 func_ov114_0229588c(S *s);
void func_ov114_022958a4(S *s);
void func_ov114_022958d8(S *s, s32 a, s32 b);
BOOL func_ov114_022959a0(S *s);
BOOL func_ov114_022959d8(S *s);
void func_ov114_02295a18(S *s);
u8 func_ov114_02295af0(S *s);
void func_ov114_02295b48(S *s);
void func_ov114_02295c28(S *s);
BOOL func_ov114_02295c9c(S *s);
void func_ov114_02295ce0(S *s);
void func_ov114_02295d04(S *s);
s32 func_ov114_02295d98(S *s);
void func_ov114_02295dc4(S *s);
void func_ov114_02295dec(S *s, s32 a);
}

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void clear();

    u32 unk_04;
    MsgStringAttr unk_08;
};

class Unk_ov114_022965b0 : public MsgString {
public:
    Unk_ov114_022965b0();
    virtual ~Unk_ov114_022965b0();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u8 unk_14[0x20 - 0x14];
};

// Base (vtable 0x02294a40 in ov094)
class Unk_ov094_02294a40 {
public:
    Unk_ov094_02294a40();
    virtual ~Unk_ov094_02294a40();
    void func_ov094_02293b54();
    u8 unk_04[0x800];
    u8 unk_804;
};

class Unk_020e45f8 {
public:
    Unk_020e45f8();
    void func_020b87d0();
    u32 func_020b8670(u32 a, u8 b, u32 c);
    u8 unk_00[0x24];
    u8 unk_24[0x20];
    u8 unk_44[0x4e4 - 0x44];
};

class Unk_020e4608 {
public:
    Unk_020e4608();
    u32 unk_00[0x38 / 4];
};

class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    u32 unk_00[0x40 / 4];
};

// sub-object at +0x11f8 (ctor func_ov002_02202f88, dtor func_ov002_02202f70)
class Unk_ov002_022046b0 {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
    void func_ov002_02202f00();
    void func_ov002_02202ed0();
    void func_ov002_02202f0c();
    u32 unk_04[(0x54 - 4) / 4];
};

class Unk_ov114_02294c40 {
public:
    Unk_ov114_02294c40();
    ~Unk_ov114_02294c40();

    BOOL func_ov114_02295eb4(s32 x, s32 y);
    void func_ov114_02295f80();
    void func_ov114_02295fc0();
    void func_ov114_02295fec(s32 x);
    void func_ov114_0229600c();
    BOOL func_ov114_02296024(s32 x, s32 y);
    void func_ov114_02296078(s32 y);
    void func_ov114_02296148();
    void func_ov114_022961c0();
    void func_ov114_022962e4();
    void func_ov114_0229633c();
    void func_ov114_0229636c();
    void func_ov114_02296390(u8 a, u8 b, u8 c, u8 d);

    /* 0x000 */ Unk_ov094_02294a40 unk_00;
    /* 0x808 */ Unk_ov114_022965b0 unk_808;
    /* 0x828 */ u8 unk_828[0x9b0 - 0x828];
    /* 0x9b0 */ Unk_020e45f8 unk_9b0;
    /* 0xe94 */ Unk_020e4608 unk_e94[9];
    /* 0x108c */ u8 unk_108c[0x10f8 - 0x108c];
    /* 0x10f8 */ Unk_020e0488 unk_10f8[4];
    /* 0x11f8 */ Unk_ov002_022046b0 unk_11f8;
    /* 0x124c */ s32 unk_124c;
    /* 0x1250 */ s32 unk_1250;
    /* 0x1254 */ s32 unk_1254;
    /* 0x1258 */ s32 unk_1258;
    /* 0x125c */ s32 unk_125c;
    /* 0x1260 */ u8 unk_1260[0x10];
    /* 0x1270 */ s32 unk_1270;
    /* 0x1274 */ s32 unk_1274;
    /* 0x1278 */ s32 unk_1278[2];
    /* 0x1280 */ s32 unk_1280;
    /* 0x1284 */ s32 unk_1284;
    /* 0x1288 */ u16 unk_1288;
    /* 0x128a */ u8 unk_128a[2];
    /* 0x128c */ u8 unk_128c;
    /* 0x128d */ u8 unk_128d;
    /* 0x128e */ u8 unk_128e;
    /* 0x128f */ u8 unk_128f;
    /* 0x1290 */ u8 unk_1290[3];
    /* 0x1293 */ u8 unk_1293;
    /* 0x1294 */ u8 unk_1294[3];
    /* 0x1297 */ u8 unk_1297;
    /* 0x1298 */ u8 unk_1298;
    /* 0x1299 */ u8 unk_1299;
};

Unk_ov114_02294c40::Unk_ov114_02294c40() {}

Unk_ov114_02294c40::~Unk_ov114_02294c40() {}

void Unk_ov114_02294c40::func_ov114_02296390(u8 a, u8 b, u8 c, u8 d) {
    unk_1288 = 0;
    unk_128d = a;
    unk_128e = b;
    unk_128f = c;
    unk_1280 = func_02002700(b);
    unk_1284 = func_02002700(c);
    unk_1293 = d;
    unk_00.func_ov094_02293b54();
    func_ov114_0229549c((S *)this);
    switch (d) {
    case 0:
        unk_1270 = 0x38;
        unk_1299 = 7;
        break;
    case 1:
        unk_1270 = 0x38;
        unk_1299 = 8;
        break;
    default:
        unk_1270 = 0x38;
        unk_1299 = 0;
        break;
    }
    func_ov114_02294ca4((S *)this);
    unk_1298 = 0x10;
    unk_1274 = (unk_1270 - 8) * 0x1b;
    unk_125c = 0;
    unk_11f8.func_ov002_02202f0c();
    u8 *p = &unk_128a[1];
    *p = 0;
    unk_128a[0] = *p;
    _ZN9MsgString5clearEv(&unk_808);
    unk_1297 = 4;
}

void Unk_ov114_02294c40::func_ov114_0229636c() {
    unk_9b0.func_020b87d0();
    func_ov114_022958a4((S *)this);
    func_ov114_02295860((S *)this);
}

void Unk_ov114_02294c40::func_ov114_0229633c() {
    unk_9b0.func_020b87d0();
    func_ov114_022958a4((S *)this);
    unk_11f8.vfunc_0c();
    func_ov114_02295860((S *)this);
}

void Unk_ov114_02294c40::func_ov114_022962e4() {
    func_ov114_02295c28((S *)this);
    unk_11f8.func_ov002_02202ed0();
    func_ov114_022951e0((S *)this);
    if (func_ov114_02294c60((S *)this, 1)) {
        if (unk_9b0.func_020b8670((u32)unk_9b0.unk_44, unk_128d, 4)) {
            func_ov114_02294c40((S *)this, 1);
        }
    }
}

void Unk_ov114_02294c40::func_ov114_022961c0() {
    s32 h = (s32)gCurrentHeap;
    func_0200261c("menu/fish/bg0.bch", (u32 *)h, unk_128d, 0x109, 0x109, 0x153);
    func_0200261c("menu/fish/bg1.bch", (u32 *)h, unk_128d, 0x154, 0x154, 0x19f);
    if (unk_1293 == 1) {
        func_0200261c("menu/fish/bug_bg.bch", (u32 *)h, unk_128d, 0x150, 0x150, 0x164);
    }
    switch (unk_1293) {
    case 0:
        data_ov114_022967a4 = "menu/fish/bg.bpl";
        break;
    case 1:
        data_ov114_022967a4 = "menu/fish/bug_bg.bpl";
        break;
    }
    func_020026c4(data_ov114_022967a4, h, unk_128d, 1, 1, 6);
    File_LoadToBuffer("menu/fish/bg4.bpl", unk_9b0.unk_24, 0x20);
    MIi_CpuCopy16(unk_9b0.unk_24, unk_9b0.unk_44, 0x20);
    func_02002654("menu/fish/a_bg.bsc", h, unk_128d);
    func_02002654("menu/fish/b_bg.bsc", h, unk_128e);
    func_02002654("menu/fish/c_bg.bsc", h, unk_128f);
}

void Unk_ov114_02294c40::func_ov114_02296148() {
    s32 h = (s32)gCurrentHeap;
    func_020026c4("menu/icon/b_obj_itm.bpl", h, 8, 7, 7, 0xe);
    func_020026c4("menu/fish/obj.bpl", h, 8, 4, 4, 6);
    func_0200261c("menu/fish/obj0.bch", (u32 *)h, 8, 0xc0, 0xc0, 0x140);
    func_0200261c("menu/fish/obj1.bch", (u32 *)h, 8, 0x141, 0x141, 0x1bf);
}

void Unk_ov114_02294c40::func_ov114_02296078(s32 y) {
    s32 py = y + 0x60;
    s32 i = 0;
    s32 z = i;
    do {
        s32 pal = unk_1278[i];
        u8 *b = (u8 *)this + i;
        u8 *q = b + 0x128a;
        u32 v = *q;
        if (v != 0) {
            *q = v - 1;
            pal = 6;
        }
        func_02088730(1, data_ov114_02296588 + i * 8, 0x80, py, pal, 1, z);
        i++;
    } while (i < 2);
    s32 py1 = py;
    if (unk_1297 == 0) py1 = py + 2;
    func_02088730(1, data_ov114_022965c0, 0x80, py1, -1, 1, 0);
    s32 py2 = py;
    if (unk_1297 == 1) py2 = py + 2;
    func_02088730(1, (data_ov114_022965c0 + 8), 0x80, py2, -1, 1, 0);
    Oam_DrawCell(1, (data_ov114_022965c0 + 16), 0x80, py, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
}

BOOL Unk_ov114_02294c40::func_ov114_02296024(s32 x, s32 y) {
    s32 xs = x - 0x80;
    s32 ys = y - 0x60;
    if (func_02087dac(data_ov114_02296588, xs, ys, 2, 2)) {
        return func_ov114_022959d8((S *)this);
    }
    if (func_02087dac(data_ov114_02296590, xs, ys, 2, 2)) {
        return func_ov114_022959a0((S *)this);
    }
    return FALSE;
}

void Unk_ov114_02294c40::func_ov114_0229600c() {
    unk_11f8.vfunc_08();
}

void Unk_ov114_02294c40::func_ov114_02295fec(s32 x) {
    _ZN10ScrollKnob6moveToEii(&unk_11f8, unk_124c - 0x4e, x + 0x4a);
}

void Unk_ov114_02294c40::func_ov114_02295fc0() {
    unk_124c = _s32_div_f(unk_1258 * 0x8c, unk_1274);
}

void Unk_ov114_02294c40::func_ov114_02295f80() {
    if (func_ov114_0229563c((S *)this, _s32_div_f(unk_124c * unk_1274, 0x8c))) {
        func_ov114_0229559c((S *)this);
    }
    unk_125c = 0;
}

BOOL Unk_ov114_02294c40::func_ov114_02295eb4(s32 x, s32 y) {
    if (unk_11f8.func_ov002_02202f18(x, y)) {
        unk_1250 = unk_124c - x;
        unk_11f8.func_ov002_02202f00();
        unk_1297 = 2;
        unk_1254 = unk_124c;
        return TRUE;
    }
    s32 xs = x - 0x80;
    s32 ys = y - 0x60;
    if (func_02087dac(data_ov114_022965c0, xs, ys, 2, 2)) {
        unk_1297 = 0;
        return TRUE;
    }
    if (func_02087dac((data_ov114_022965c0 + 8), xs, ys, 2, 2)) {
        unk_1297 = 1;
        return TRUE;
    }
    if (x > 0x3a && x < 0xc6 && y > 0xac && y < 0xb8) {
        unk_11f8.func_ov002_02202f00();
        unk_1297 = 3;
        unk_1254 = unk_124c;
        return TRUE;
    }
    return FALSE;
}

void func_ov114_02295dec(S *s, s32 a)
{
    s32 *p = &s->unk_124c;
    s32 old = *p;
    switch (s->unk_1297) {
    case 2:
        *p = a + s->unk_1250;
        break;
    case 0:
        *p = old - 2;
        break;
    case 1:
        *p = old + 2;
        break;
    case 3:
        func_020e761c(p, a - 0x3a, 4);
        break;
    }
    if (s->unk_124c < 0) {
        s->unk_124c = 0;
    }
    if (s->unk_124c > 0x8c) {
        s->unk_124c = 0x8c;
    }
    ((Unk_ov114_02294c40 *)s)->func_ov114_02295f80();
    if (s->unk_1297 == 2) {
        s32 d = s->unk_1254 - s->unk_124c;
        if (d >= 4 || d <= -4) {
            func_ov002_02202e54(s->unk_11f8);
            s->unk_1254 = s->unk_124c;
        }
    } else if (s->unk_124c != old) {
        func_ov002_02202e54(s->unk_11f8);
    }
}

void func_ov114_02295dc4(S *s)
{
    if (s->unk_1297 == 2) {
        _ZN18Unk_ov002_022046b019func_ov002_02202ef4Ev(s->unk_11f8);
    }
    s->unk_1297 = 4;
}

s32 func_ov114_02295d98(S *s)
{
    if (s->unk_1297 == 2) {
        return _ZN10ScrollKnob12areAnimsDoneEv(s->unk_11f8);
    }
    func_ov114_02295d04(s);
    return TRUE;
}

void func_ov114_02295d04(S *s)
{
    s32 old = s->unk_124c;
    switch (s->unk_1297) {
    case 2: {
        u16 k = gPad;
        if (k & 0x20) {
            s->unk_124c = old - 2;
        } else if (k & 0x10) {
            s->unk_124c = old + 2;
        }
        break;
    }
    case 0:
        s->unk_124c = old - 2;
        break;
    case 1:
        s->unk_124c = old + 2;
        break;
    }
    if (s->unk_124c < 0) {
        s->unk_124c = 0;
    }
    if (s->unk_124c > 0x8c) {
        s->unk_124c = 0x8c;
    }
    if (s->unk_124c != old) {
        func_ov002_02202e54(s->unk_11f8);
    }
    ((Unk_ov114_02294c40 *)s)->func_ov114_02295f80();
}

void func_ov114_02295ce0(S *s)
{
    if (s->unk_1297 == 2) {
        _ZN18Unk_ov002_022046b019func_ov002_02202ef4Ev(s->unk_11f8);
    }
}

BOOL func_ov114_02295c9c(S *s)
{
    if (s->unk_1297 == 2) {
        if (_ZN10ScrollKnob12areAnimsDoneEv(s->unk_11f8)) {
            _ZN18Unk_ov002_022046b019func_ov002_02202f0cEv(s->unk_11f8);
            s->unk_1297 = 4;
            return TRUE;
        }
    } else {
        s->unk_1297 = 4;
        return TRUE;
    }
    return FALSE;
}

void func_ov114_02295c28(S *s)
{
    s32 pos = s->unk_1258;
    s32 r = s->unk_125c;
    if (r > 0) {
        if (r < 0xb) {
            pos += r;
            s->unk_125c = 0;
        } else {
            pos += 0xb;
            r -= 0xb;
            s->unk_125c = r;
        }
    } else if (r < 0) {
        if (r > -11) {
            pos += r;
            s->unk_125c = 0;
        } else {
            pos -= 0xb;
            r += 0xb;
            s->unk_125c = r;
        }
    }
    if (pos != s->unk_1258) {
        ((Unk_ov114_02294c40 *)s)->func_ov114_02295fc0();
        if (func_ov114_0229563c(s, pos)) {
            func_ov114_0229559c(s);
        }
    }
}

Unk_ov114_022965b0::Unk_ov114_022965b0() { clear(); }

Unk_ov114_022965b0::~Unk_ov114_022965b0() {}

u32 Unk_ov114_022965b0::vfunc_08() { return 0x196; }

u8 *Unk_ov114_022965b0::vfunc_0c() { return (u8 *)this + 0x12; }

void func_ov114_02295b48(S *s)
{
    u8 v = s->unk_1294;
    const char *name;
    switch (s->unk_1293) {
    case 0:
        name = (const char *)"obj_etc_fish";
        break;
    case 1:
        name = (const char *)"obj_etc_insect";
        break;
    }
    if (v == 0xff) {
        _ZN9MsgString5clearEv(s->unk_808);
        s->unk_128c = 1;
    } else {
        u8 key = v;
        String_Load(s->unk_808, &key, name);
        s->unk_128c = func_ov114_02295af0(s);
    }
    s->unk_1291 = 0;
    func_ov114_02295a18(s);
}

u8 func_ov114_02295af0(S *s)
{
    s32 n = 0;
    s32 k = n;
    for (; n < 5; n++) {
        s32 a = Msg_SkipLines(s->unk_81a, k);
        s32 b = Msg_SkipLines(s->unk_81a, k + 1);
        s32 c = Msg_SkipLines(s->unk_81a, k + 2);
        k += 3;
        if (a == 0 && b == 0 && c == 0) {
            return (u8)n;
        }
    }
    return 5;
}

void func_ov114_02295a18(S *s)
{
    void *o[3];
    s32 z10 = 0;
    s32 z14 = 0;
    s32 k = (u8)s->unk_1291 * 3;
    s32 y;
    s32 i;
    o[0] = func_ov114_02295830(s);
    o[1] = func_ov114_02295830(s);
    o[2] = func_ov114_02295830(s);
    y = 0xbb;
    i = 0;
    do {
        s32 t = Msg_SkipLines(s->unk_81a, k);
        void *ob;
        if (t != 0) {
            ob = o[i];
            _ZN9MsgString7setLineEPh(ob, t);
        } else {
            ob = o[i];
            _ZN9MsgString5clearEv(ob);
        }
        _ZN12Unk_020e048813func_0206fb9cEjjjhhi(ob, s->unk_128d, y, 0xd, 2, 3, z10);
        _ZN12Unk_020e048813func_0206fab4Eii(ob, z14, z14);
        k++;
        y += 0x1a;
        i++;
    } while (i < 3);
    if (s->unk_1291 == 0) {
        s->unk_127c = 4;
    } else {
        s->unk_127c = 5;
    }
    if (s->unk_1291 + 1 >= s->unk_128c) {
        s->unk_1278 = 4;
    } else {
        s->unk_1278 = 5;
    }
}

BOOL func_ov114_022959d8(S *s)
{
    s32 n = s->unk_1291 + 1;
    if (n < s->unk_128c) {
        s->unk_1291 = n;
        s->unk_128a = 5;
        func_ov114_02295a18(s);
        Snd_PlaySe(0x39);
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov114_022959a0(S *s)
{
    u32 c = s->unk_1291;
    if (c != 0) {
        s->unk_1291 = c - 1;
        s->unk_128b = 5;
        func_ov114_02295a18(s);
        Snd_PlaySe(0x39);
        return TRUE;
    }
    return FALSE;
}

void func_ov114_022958d8(S *s, s32 a, s32 b)
{
    s32 c1 = s->unk_9da;
    u8 r = c1 & 0x1f;
    u8 g = (c1 & 0x3e0) >> 5;
    u8 bl = (c1 & 0x7c00) >> 10;
    s32 d = b - a;
    s32 c2 = s->unk_9d8;
    r = ((u8)(c2 & 0x1f) * a + r * d) / b;
    g = ((u8)((c2 & 0x3e0) >> 5) * a + g * d) / b;
    bl = ((u8)((c2 & 0x7c00) >> 10) * a + bl * d) / b;
    s->unk_9f8 = r | (g << 5) | (bl << 10);
    func_ov114_02294c50(s, 1);
}

void func_ov114_022958a4(S *s)
{
    s32 i;
    for (i = 0; i < 9; i++) {
        _ZN12Unk_020e45f813func_020b87d0Ev(&s->unk_0e94[i * 0x38]);
    }
    s->unk_1290 = 0;
}

u32 func_ov114_0229588c(S *s)
{
    u32 c = s->unk_1290;
    if (c >= 9) {
        return 8;
    }
    s->unk_1290 = c + 1;
    return c;
}

void func_ov114_02295860(S *s)
{
    s32 i;
    s->unk_1292 = 0;
    u8 *b = s->unk_10f8;
    for (i = 0; i < 4; i++) {
        _ZN12Unk_020e048813func_0206fc44Ev(b + (i << 6));
    }
}

void *func_ov114_02295830(S *s)
{
    u8 *p = &s->unk_1292;
    u32 c = *p;
    if (c >= 4) {
        return &s->unk_11b8;
    }
    *p = c + 1;
    return &s->unk_10f8[(*p - 1) << 6];
}

void func_ov114_02295780(S *s, u32 a)
{
    u32 obj[9];
    u16 col;
    u32 v;
    _ZN8ItemNameC1Ev(obj);
    if (a == 0xff) {
        _ZN9MsgString5clearEv(obj);
    } else {
        switch (s->unk_1293) {
        case 0:
            v = a < 0x38 ? (u16)(a + 0x12e8) : 0x12e8;
            break;
        case 1:
            v = a < 0x38 ? (u16)(a + 0x12b0) : 0x12b0;
            break;
        default:
            _ZN8ItemNameD1Ev(obj);
            return;
        }
        col = v;
        _ZN8ItemName11setFromItemEPt(obj, &col);
    }
    void *t = func_ov114_02295830(s);
    _ZN9MsgString4copyEPS_(t, obj);
    _ZN12Unk_020e048813func_0206fb9cEjjjhhi(t, s->unk_128d, 0xa1, 0xd, 1, 3, 0);
    _ZN12Unk_020e048813func_0206fab4Eii(t, 1, 0);
    _ZN8ItemNameD1Ev(obj);
}

void func_ov114_022956a4(S *s, s32 a)
{
    s32 z18 = 0, z1c = 0, z20 = 0, z24 = 0;
    s32 i;
    s32 rowY = s->unk_1260;
    s32 x = s->unk_1264 + a;
    s32 idx = s->unk_126c;
    s32 m1;
    s32 t14;
    void *src;
    i = 0;
    m1 = -1;
    do {
        if (func_ov114_02294c78(s, s->unk_1268 + i)) {
            src = (u8 *)s->unk_108c + idx * 12;
            t14 = m1;
        } else {
            src = data_ov114_02296580;
            t14 = 4;
        }
        func_02088730(1, src, rowY, x, m1, 2, z18);
        if (*(u8 *)((u8 *)s + 0x1295) == s->unk_1268 + i) {
            func_02088730(1, data_ov114_022965a0, rowY, x, m1, 2, z1c);
        }
        func_02088730(1, data_ov114_02296598, rowY, x, t14, 2, z20);
        rowY += 0x1b;
        idx++;
        if (idx >= 9) {
            idx = z24;
        }
        i++;
    } while (i < 9);
}

BOOL func_ov114_0229563c(S *s, s32 v)
{
    if (v < 0) {
        v = 0;
    }
    if (v >= s->unk_1274) {
        v = s->unk_1274;
    }
    s->unk_1258 = v;
    s32 old = s->unk_1268;
    s->unk_1260 = 0x22 - v;
    s->unk_1268 = 0;
    while (s->unk_1260 < 8) {
        s->unk_1260 += 0x1b;
        s->unk_1268++;
    }
    if (old != s->unk_1268) {
        return TRUE;
    }
    return FALSE;
}

void func_ov114_0229559c(S *s)
{
    s32 zero;
    u16 col;
    u32 pos;
    s32 i;
    s32 idx;
    s->unk_126c = s->unk_1268 % 9;
    pos = s->unk_1268;
    idx = s->unk_126c;
    col = 0xfff1;
    zero = 0;
    i = 0;
    goto test0;
loop0:
    switch (s->unk_1293) {
    case 0:
        col = pos < 0x38 ? (u16)(pos + 0x12e8) : 0x12e8;
        break;
    case 1:
        col = pos < 0x38 ? (u16)(pos + 0x12b0) : 0x12b0;
        break;
    default:
        return;
    }
    func_ov114_022953e4(s, (u32)&col, idx);
    idx++;
    if (idx >= 9) {
        idx = zero;
    }
    pos++;
    if (pos >= 0x38) {
        return;
    }
    i++;
test0:
    if (i < 9) goto loop0;
}

BOOL func_ov114_02295510(S *s, s32 x, s32 y) {
    if (y < 0x90 || y >= 0xb0) {
        return FALSE;
    }
    if (x < 0x10 || x >= 0xf0) {
        return FALSE;
    }
    if (x < 0x18) {
        x = 0x18;
    }
    if (x > 0xe8) {
        x = 0xe8;
    }
    s32 t = x - (0x15 - s->unk_1258);
    if (t < 0) {
        t = 0;
    }
    s32 q = t / 0x1b;
    if (q >= s->unk_1270) {
        q = s->unk_1270 - 1;
    }
    if (func_ov114_02294c78(s, q)) {
        if (s->unk_1295 != q) {
            Snd_PlaySe(0x29);
        }
        func_ov114_022951b8(s, (u8)q);
        return TRUE;
    }
    return FALSE;
}

void func_ov114_0229549c(S *s) {
    s32 i;
    for (i = 0; i < 9; i++) {
        Unk_ov114_02294c40_Entry *e = &s->unk_108c[i];
        MI_CpuCopy8(data_ov114_02296580, e, 8);
        e->unk_04.idx = i * 2 + 0xc0;
        e->unk_08 = -1;
    }
    s->unk_1264 = (s32)func_02087e0c(data_ov114_022965e0) + 0x70;
    func_ov114_0229563c(s, 0);
}

void func_ov114_022953e4(S *s, u32 a, s32 idx) {
    Unk_ov114_02294c40_Entry *e = &s->unk_108c[idx];
    s32 key = Item_GetInfoUnk02(a);
    if (key != e->unk_08) {
        e->unk_08 = key;
        u32 lo = e->unk_04.idx;
        void *dst = _ZN18Unk_ov094_02294a4019func_ov094_02293b08Ei(s, key);
        s32 n = func_ov114_0229588c(s);
        u8 *src = s->unk_0a14 + n * 0x80;
        u8 *src2 = src + 0x40;
        MI_CpuCopy8(dst, src, 0x40);
        MI_CpuCopy8((u8 *)dst + 0x400, src2, 0x40);
        _ZN12Unk_020e460813func_020b851cEjjhjjjj(s->unk_0e94 + n * 0x38, src, src2, 8, lo, lo + 1, lo + 0x20, lo + 0x21);
        e->unk_04.pal = func_ov094_02293abc(s, key);
    }
}

void func_ov114_0229539c(S *s) {
    s->unk_1295 = 0xff;
    s->unk_1296 = 0;
    func_ov114_02295780(s, 0xff);
    func_ov114_02295350(s);
    func_ov114_022958d8(s, 0, 0x10);
    func_020013b4(s->unk_1284, s->unk_1280, 0);
}

void func_ov114_02295374(S *s) {
    s->unk_1295 = s->unk_1294;
    func_020013a4();
    s->unk_1296 = 0x10;
}

void func_ov114_02295350(S *s) {
    s->unk_1294 = s->unk_1295;
    func_ov114_02295290(s);
    func_ov114_02295b48(s);
}

void func_ov114_02295290(S *s) {
    u32 c = s->unk_1294;
    if (c == 0xff) {
        return;
    }
    s32 q = (s32)c / 12;
    u32 *font = gCurrentHeap;
    switch (s->unk_1293) {
    case 0:
        data_ov114_022967a0 = "menu/fish_pic";
        break;
    case 1:
        data_ov114_022967a0 = "menu/bug_pic";
        break;
    default:
        return;
    }
    func_020639e8(data_ov114_022967a8, "%s/%d/%d_%02d.bch", data_ov114_022967a0, q, q, c);
    func_0200261c(data_ov114_022967a8, font, s->unk_128f, 0x11, 0x11, 0xa0);
    func_020639e8(data_ov114_022967a8, "%s/%d/%d.bpl", data_ov114_022967a0, q, q, c);
    func_02002688(data_ov114_022967a8, font, s->unk_128f, (s32)c % 12, 5);
}

void func_ov114_022951e0(S *s) {
    u8 old = s->unk_1296;
    u32 a = s->unk_1294;
    if (a == s->unk_1295) {
        if (a != 0xff && old != 0x10) {
            if (old < 0xc) {
                if (old == 0) {
                    func_020020b8(s->unk_128f);
                }
                s->unk_1296 = s->unk_1296 + 4;
                func_020013b4(s->unk_1284, s->unk_1280, s->unk_1296);
            } else {
                func_020013a4();
            }
        }
    } else if (old == 0) {
        func_ov114_02295350(s);
    } else if (old > 4) {
        s->unk_1296 = old - 4;
        func_020013b4(s->unk_1284, s->unk_1280, s->unk_1296);
    } else {
        s->unk_1296 = 0;
        func_0200212c(s->unk_128f);
    }
    if (old != s->unk_1296) {
        func_ov114_022958d8(s, s->unk_1296, 0x10);
    }
}

void func_ov114_022951b8(S *s, u8 v) {
    s->unk_1295 = v;
    if (s->unk_1295 != s->unk_1294) {
        func_ov114_02295780(s, v);
    }
}

s32 func_ov114_02295150(S *s) {
    s32 r;
    if (func_ov114_022950cc(s) != -1) {
        r = func_ov090_02291a78(s->unk_1298 - 5);
    } else {
        u32 t = s->unk_1298;
        if (t == 4) {
            r = _ZN18Unk_ov002_022046b019func_ov002_02202e84Ev(s->unk_11f8);
        } else if (t < 4) {
            r = data_ov114_02296554[t];
        } else {
            r = (t - 0xd) * 0x1b + 0x22 - s->unk_1258 - s->unk_125c;
        }
    }
    return r;
}

s32 func_ov114_022950e8(S *s) {
    s32 r;
    if (func_ov114_022950cc(s) != -1) {
        return 8;
    }
    u32 t = s->unk_1298;
    if (t == 4) {
        return _ZN18Unk_ov002_022046b019func_ov002_02202e60Ev(s->unk_11f8);
    }
    if (t < 4) {
        r = data_ov114_02296564[t];
        if (t == 2 && s->unk_1297 == 0) {
            r += 2;
        } else if (t == 3 && s->unk_1297 == 1) {
            r += 2;
        }
    } else {
        r = 0x9e;
    }
    return r;
}

s32 func_ov114_022950cc(S *s) {
    u8 v = s->unk_1298;
    if (v >= 5 && v <= 0xc) {
        return v - 5;
    }
    return -1;
}

BOOL func_ov114_022950b4(S *s) {
    BOOL r = TRUE;
    u8 v = s->unk_1298;
    if (v != 0 && v != 1) {
        r = FALSE;
    }
    return r;
}

BOOL func_ov114_02294ed0(S *s, void *pad) {
    if (pad == 0) {
        return FALSE;
    }
    u8 old = s->unk_1298;
    if (func_ov114_022950cc(s) != -1) {
        if (func_ov002_0220127c(pad)) {
            s->unk_1298 = 0;
        } else if (func_ov002_0220126c(pad)) {
            if (s->unk_1298 > 5) {
                s->unk_1298 = s->unk_1298 - 1;
            }
        } else if (func_ov002_0220125c(pad)) {
            if (s->unk_1298 < 0xc) {
                s->unk_1298 = s->unk_1298 + 1;
            }
        }
    } else {
        s32 c = s->unk_1298;
        if ((u32)c <= 1) {
            if (func_ov002_0220128c(pad)) {
                s->unk_1298 = s->unk_1299;
            } else if (func_ov002_0220127c(pad)) {
                s->unk_1298 = func_ov114_02294e30(s);
            } else if (func_ov002_0220126c(pad)) {
                s->unk_1298 = 1;
            } else {
                if (func_ov002_0220125c(pad)) {
                    s->unk_1298 = 0;
                }
            }
        } else if ((u32)c >= 0xd) {
            s32 d = c - 0xd;
            if (func_ov002_0220128c(pad)) {
                if (func_ov114_02295150(s) < 0x48) {
                    s->unk_1298 = 1;
                } else {
                    s->unk_1298 = 0;
                }
            } else if (func_ov002_0220127c(pad)) {
                s32 r = func_ov114_02295150(s);
                if (r < 0x40) {
                    s->unk_1298 = 2;
                } else if (r >= 0xc0) {
                    s->unk_1298 = 3;
                } else {
                    s->unk_1298 = 4;
                }
            } else if (func_ov002_0220125c(pad)) {
                if (d < s->unk_1270 - 1) {
                    s->unk_1298 = s->unk_1298 + 1;
                    s32 r = func_ov114_02295150(s);
                    if (r > 0xe0) {
                        s->unk_125c = r - 0xe0;
                    }
                }
            } else if (func_ov002_0220126c(pad)) {
                if (d > 0) {
                    s->unk_1298 = s->unk_1298 - 1;
                    s32 r = func_ov114_02295150(s);
                    if (r < 0x20) {
                        s->unk_125c = r - 0x20;
                    }
                }
            }
        } else {
            s32 d = c - 2;
            if (func_ov002_0220128c(pad)) {
                s->unk_1298 = func_ov114_02294e30(s);
            } else if (func_ov002_0220126c(pad)) {
                s->unk_1298 = data_ov114_02296550[d];
            } else if (func_ov002_0220125c(pad)) {
                s->unk_1298 = data_ov114_0229654c[d];
            }
        }
    }
    if (old != s->unk_1298) {
        return TRUE;
    }
    return FALSE;
}

void func_ov114_02294e6c(S *s) {
    if (s->unk_1298 >= 0xd) {
        s32 r = func_ov114_02295150(s);
        if (r < 0x20) {
            s->unk_1298 = s->unk_1268 + 0xd;
            if (func_ov114_02295150(s) < 0x20) {
                s->unk_1298 = s->unk_1298 + 1;
            }
        } else if (r > 0xe0) {
            s->unk_1298 = s->unk_1268 + 0x14;
            if (func_ov114_02295150(s) > 0xe0) {
                s->unk_1298 = s->unk_1298 - 1;
            }
        }
    }
}

u8 func_ov114_02294e30(S *s) {
    s32 t = func_ov114_02295150(s) - (0x15 - s->unk_1258);
    if (t < 0) {
        t = 0;
    }
    s32 q = t / 0x1b;
    if (q >= s->unk_1270) {
        q = s->unk_1270 - 1;
    }
    return q + 0xd;
}

BOOL func_ov114_02294d88(S *s) {
    u32 t = s->unk_1298;
    if (t >= 0xd) {
        u32 k = t - 0xd;
        if (func_ov114_02294c78(s, k)) {
            if (s->unk_1295 != k) {
                Snd_PlaySe(0x29);
            }
            func_ov114_022951b8(s, (u8)k);
        }
        return FALSE;
    } else {
        switch (t) {
        case 1:
            func_ov114_022959a0(s);
            return FALSE;
        case 0:
            func_ov114_022959d8(s);
            return FALSE;
        case 2:
            s->unk_1297 = 0;
            return TRUE;
        case 3:
            s->unk_1297 = 1;
            return TRUE;
        case 4:
            s->unk_1297 = 2;
            _ZN18Unk_ov002_022046b019func_ov002_02202f00Ev(s->unk_11f8);
            func_ov002_02202e48(s->unk_11f8);
            return TRUE;
        default:
            return FALSE;
        }
    }
}

void func_ov114_02294ca4(S *s) {
    s32 i;
    u16 v;
    for (i = 0; i < 3; i++) {
        s->unk_1240[i] = 0;
    }
    void *p = PlayerData_GetCurrent();
    v = 0xfff1;
    if (s->unk_1293 == 0) {
        for (i = 0; i < s->unk_1270; i++) {
            v = (u32)i < 0x38 ? (u16)(i + 0x12e8) : 0x12e8;
            if (Catalog_HasItem(_ZN10PlayerData10getCatalogEv(p), &v)) {
                s->unk_1240[i >> 5] |= 1 << (i & 0x1f);
            }
        }
    } else {
        for (i = 0; i < s->unk_1270; i++) {
            v = (u32)i < 0x38 ? (u16)(i + 0x12b0) : 0x12b0;
            if (Catalog_HasItem(_ZN10PlayerData10getCatalogEv(p), &v)) {
                s->unk_1240[i >> 5] |= 1 << (i & 0x1f);
            }
        }
    }
}

BOOL func_ov114_02294c78(S *s, s32 i) {
    BOOL r = TRUE;
    if (((1 << (i & 0x1f)) & s->unk_1240[i >> 5]) == 0) {
        r = FALSE;
    }
    return r;
}

BOOL func_ov114_02294c60(S *s, u32 m) {
    if (s->unk_1288 & m) {
        return TRUE;
    }
    return FALSE;
}

void func_ov114_02294c50(S *s, u32 m) { s->unk_1288 = s->unk_1288 | m; }

void func_ov114_02294c40(S *s, u32 m) { s->unk_1288 = s->unk_1288 & ~m; }

// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u8 data_ov114_02296550[4];
extern "C" const s32 data_ov114_02296554[4];
extern "C" const s32 data_ov114_02296564[4];
extern "C" u8 data_ov114_02296580[8];
extern "C" u8 data_ov114_02296588[8];
extern "C" u8 data_ov114_02296590[8];
extern "C" u8 data_ov114_02296598[8];
extern "C" u8 data_ov114_022965a0[8];
extern "C" const u8 data_ov114_0229654c[4];
extern "C" u8 data_ov114_022965c0[32];
extern "C" u8 data_ov114_022965e0[72];
extern "C" char *data_ov114_022967a0;
extern "C" char *data_ov114_022967a4;
extern "C" char data_ov114_022967a8[0x38];

extern "C" const u8 data_ov114_02296550[4] = {0x02, 0x04, 0x02, 0x00};

extern "C" const s32 data_ov114_02296554[4] = {0x62, 0x34, 0x2d, 0xd4};

extern "C" const s32 data_ov114_02296564[4] = {0x71, 0x71, 0xb0, 0xb0};

extern "C" u8 data_ov114_02296580[8] = {0xf8, 0x00, 0xf8, 0x41, 0x04, 0x41, 0xff, 0xff};

extern "C" u8 data_ov114_02296588[8] = {0x07, 0x00, 0xdc, 0x51, 0x00, 0x51, 0x00, 0x00};

extern "C" u8 data_ov114_02296590[8] = {0x07, 0x00, 0xac, 0x41, 0x00, 0x41, 0xff, 0xff};

extern "C" u8 data_ov114_02296598[8] = {0xf0, 0x00, 0xf0, 0x81, 0x44, 0x55, 0xff, 0xff};

extern "C" u8 data_ov114_022965a0[8] = {0xf0, 0x00, 0xf0, 0x81, 0x4c, 0x45, 0xff, 0xff};

extern "C" const u8 data_ov114_0229654c[4] = {0x04, 0x03, 0x03, 0x00};

extern "C" u8 data_ov114_022965c0[32] = {0x49, 0x00, 0xa4, 0x41, 0x02, 0x51, 0x00, 0x00, 0x49, 0x00, 0x4d, 0x50, 0x02, 0x51, 0x00, 0x00, 0x4b, 0x00, 0xa4, 0x41, 0x02, 0x11, 0x00, 0x00, 0x4b, 0x00, 0x4d, 0x50, 0x02, 0x11, 0xff, 0xff};

extern "C" u8 data_ov114_022965e0[72] = {0x2e, 0x00, 0x84, 0x81, 0x44, 0x55, 0x00, 0x00, 0x2e, 0x00, 0x9f, 0x81, 0x44, 0x55, 0x00, 0x00, 0x2e, 0x00, 0xba, 0x81, 0x44, 0x45, 0x00, 0x00, 0x2e, 0x00, 0xd5, 0x81, 0x44, 0x55, 0x00, 0x00, 0x2e, 0x00, 0xf0, 0x81, 0x44, 0x45, 0x00, 0x00, 0x2e, 0x00, 0x0b, 0x80, 0x44, 0x55, 0x00, 0x00, 0x2e, 0x00, 0x26, 0x80, 0x44, 0x55, 0x00, 0x00, 0x2e, 0x00, 0x41, 0x80, 0x44, 0x45, 0x00, 0x00, 0x2e, 0x00, 0x5c, 0x80, 0x44, 0x55, 0xff, 0xff};

extern "C" char *data_ov114_022967a0 = 0;

extern "C" char *data_ov114_022967a4 = 0;

extern "C" char data_ov114_022967a8[0x38] = {0};
