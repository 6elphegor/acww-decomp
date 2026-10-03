// ov143: scene overlay (class Unk_ov143_02293b80, vtable 0x02293b80): melody / tune editor menu.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

struct Unk_ov143_02293b38_E {
    u32 w0;
    struct {
        u32 lo : 10;
        u32 hi : 22;
    } w1;
    u32 w2;
    u32 w3;
    u32 w4;
    struct {
        u32 lo : 12;
        u32 n : 4;
        u32 hi : 16;
    } w5;
};

struct Unk_ov143_02293980_T {
    u32 w0;
    struct {
        u32 lo : 10;
        u32 hi : 22;
    } w1;
};

struct Unk_ov143_0229334c_E {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 w3;
    u32 w4;
    struct {
        u16 lo : 10;
        u16 hi : 6;
    } w5;
    u16 pad;
};

class Unk_ov143_02293b80;
struct Unk_ov143_SceneEntry {
    Unk_ov143_02293b80 *(*fn)();
    u16 a;
    u16 b;
};

struct Unk_ov143_02292898_V {
    s32 x, y, z;
};

class Unk_ov143_02293b80;
typedef void (Unk_ov143_02293b80::*Unk_ov143_02293b80_Fn)();

// Text window, 0x40 bytes (src/main/unk_0206f53c.cpp)
class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();
    u32 unk_00[0x40 / 4];
};

// Screen upload helper, 0x24 bytes (src/main/unk_020b8464.cpp)
class BgVramTask {
public:
    BgVramTask();
    virtual BOOL vfunc_00();
    virtual void clear();
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    void cancel();
    u32 unk_04[0x20 / 4];
};

// Menu cursor sub-object hierarchy (src/ov002/unk_02202200.cpp, unk_02202b68.cpp)
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    BOOL getAnim();
};

class Unk_ov002_02202d98 : public HandCursor {
public:
    void func_ov002_02202844();
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

// Same object as Unk_ov002_02202d98 under the name used by src/ov002/unk_02202b68.cpp
class Unk_ov002_0220464c : public HandCursor {
public:
    void func_ov002_02202b68();
    void func_ov002_02202ca0();
    void func_ov002_02202c40();
    void func_ov002_02202d00(s32 a);
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

// Menu list sub-object, 0x164 bytes (src/ov002/)
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_02203590();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

// Same object as Unk_ov002_022046cc under the name used by the ov002 list functions
class Unk_ov002_02202fac {
public:
    void func_ov002_0220301c();
    void func_ov002_02203044();
    void func_ov002_02203274(s32 a);
    s32 func_ov002_0220306c();
    s32 func_ov002_0220308c();
    s32 func_ov002_022030ac(u8 a);
    s32 func_ov002_022030b8(s32 a);
    s32 func_ov002_022030f4(s32 a);
    s32 func_ov002_02203110(s32 a);
};

// Global at 0x020cbb18
class CommManager {
public:
    s32 isOnline();
    void beginRecord();
    void writeRecord(u8 *p, u32 n);
    void endRecord(u32 a, u32 b);
    s16 getSendSeq();
};

// ov092 singleton returned by ProcBase_GetParent
class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

extern "C" {
extern Unk_ov143_02293b38_E *data_ov143_02293b38[16];
extern Unk_ov143_02293980_T data_ov143_02293980[2];
extern u32 data_ov143_02293950[2];
extern u32 data_ov143_022938c8[2];
extern Unk_ov143_0229334c_E data_ov143_02293a00;
extern Unk_ov143_0229334c_E data_ov143_022939e8;
Unk_ov143_02293b80 *func_ov143_02293844();
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
extern s32 data_020ddf8c;
extern CommManager *gCommManager;
extern u8 data_021ed2f8[];
extern u8 data_021dfd8c[];
extern u8 gMelodyEditPattern[];
extern void *gCurrentHeap;

void Gfx2d_EndSubObjWinBrightness();
void Gfx2d_BeginSubObjWinBrightness();
s32 Gfx2d_SetSubBrightness(s32 a);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_LoadScreen(void *a, s32 b, s32 c, s32 d);
void Gfx2d_LoadCharFile(void *name, void *h, s32 a, s32 b, s32 c, s32 d);
void Gfx2d_LoadScreenFile(void *name, void *h, s32 a);
void Gfx2d_LoadPaletteFile(void *name, void *h, s32 a, s32 b, s32 c, s32 d);
void Snd_PlaySe(s32 a);
void File_LoadToBuffer(void *a, void *b, u32 c);
void Melody_PlayEditPattern(u32 a);
void Melody_PlayNote(u32 a);
void Melody_Unpack(void *a, void *b);
void Melody_Pack(void *a, void *b);
void Melody_ApplyEditPattern();
void func_0206ecf8(s32 v);
BOOL func_0206ed18();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206f9fc(void *self, u32 id);
s32 Comm_IsSeqConfirmed(s32 v);
void func_020795a8(void *a);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 flag);
void func_02088378(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4);
void MI_CpuCopy8(void *dst, void *src, s32 n);
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
void func_ov002_02203920(void *p);
BOOL func_ov002_0220125c(u32 pad);
BOOL func_ov002_0220126c(u32 pad);
BOOL func_ov002_0220127c(u32 pad);
BOOL func_ov002_0220128c(u32 pad);
}


extern "C" Unk_ov143_SceneEntry data_ov143_02293918 = {func_ov143_02293844, 0xb8, 0xbc};
extern "C" Unk_ov143_02293980_T data_ov143_02293980[2] = {{0x8188404a, {192, 48}}, {0x81a8404a, {196, 4194288}}};
extern "C" u32 data_ov143_02293950[2] = {0x1a000f0, 0xffffc0de};
extern "C" Unk_ov143_0229334c_E data_ov143_022939e8 = {0x419800cf, 0xc0c9, 0x1a880cf, 0xc0cb, 0x819a00df, {0x144, 0x2c}, 0xffff};
extern "C" Unk_ov143_0229334c_E data_ov143_02293a00 = {0x419800cf, 0xc0c9, 0x1a880cf, 0xc0cb, 0x819a00df, {0x144, 0x2c}, 0xffff};
extern "C" Unk_ov143_02293b38_E data_ov143_02293af0 = {0x419800e1, {204, 48}, 0x1a880e1, 0xc0ce, 0x819a00df, {332, 10, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293a18 = {0x419800e1, {207, 48}, 0x1a880e1, 0xc0d1, 0x819a00df, {336, 9, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293a30 = {0x419800e1, {210, 48}, 0x1a880e1, 0xc0d4, 0x819a00df, {336, 8, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293a48 = {0x419800e1, {213, 48}, 0x1a880e1, 0xc0d7, 0x819a00df, {336, 7, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293a60 = {0x419800e1, {216, 48}, 0x1a880e1, 0xc0da, 0x819a00df, {336, 6, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293a78 = {0x419800e1, {219, 48}, 0x1a880e1, 0xc0dd, 0x819a00df, {336, 5, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293a90 = {0x419800e1, {256, 48}, 0x1a880e1, 0xc102, 0x819a00df, {336, 4, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293aa8 = {0x419800e1, {259, 48}, 0x1a880e1, 0xc105, 0x819a00df, {340, 11, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293ac0 = {0x419800e1, {262, 48}, 0x1a880e1, 0xc108, 0x819a00df, {340, 10, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293ad8 = {0x419800e1, {265, 48}, 0x1a880e1, 0xc10b, 0x819a00df, {340, 9, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293b08 = {0x419800e1, {268, 48}, 0x1a880e1, 0xc10e, 0x819a00df, {340, 8, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_02293b20 = {0x419800e1, {271, 48}, 0x1a880e1, 0xc111, 0x819a00df, {340, 7, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_022939a0 = {0x419800e1, {274, 48}, 0x1a880e1, 0xc114, 0x819a00df, {340, 6, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_022939b8 = {0x419800e1, {277, 48}, 0x1a880e1, 0xc117, 0x819a00df, {340, 5, 65535}};
extern "C" Unk_ov143_02293b38_E data_ov143_022939d0 = {0x419800e4, {280, 48}, 0x1a880e4, 0xc11a, 0x819a00df, {344, 4, 65535}};
extern "C" u32 data_ov143_022938c8[2] = {0x81f000f0, 0xffffb140};

// Vtable 0x022044e4 (scene base class)
class Unk_ov002_022044e4 : public GameProc {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_0220085c(s32 a, s32 b);
    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    s32 func_ov002_02200a14(s32 a);
    void func_ov002_02200980();
    u32 func_ov002_022009d4();
    u32 func_ov002_022009c8();
    s32 func_ov002_022009a4();
    s32 func_ov002_02200998();

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// Vtable 0x02293b80 (melody / tune editor menu)
class Unk_ov143_02293b80 : public Unk_ov002_022044e4 {
public:
    Unk_ov143_02293b80() : unk_ac(), unk_110(), unk_274(), unk_e74() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov143_02291ff0(u32 mask);
    void func_ov143_02292000(u32 mask);
    BOOL func_ov143_02292010(u32 mask);
    void func_ov143_02292024();
    void func_ov143_02292040();
    void func_ov143_02292064(s32 *out, s32 idx);
    void func_ov143_022920ac();
    void func_ov143_02292128(u32 id, u32 idx);
    u32 func_ov143_02292170(u32 idx);
    u32 func_ov143_02292198(u32 idx);
    void func_ov143_022921c0(s32 x, s32 y);
    void func_ov143_02292240(u32 idx, s32 x, s32 y);
    void func_ov143_0229229c(u32 idx, s32 x, s32 y);
    void func_ov143_022922e4(u32 idx, s32 x, s32 y);
    void func_ov143_02292364(u32 idx, s32 x, s32 y);
    void func_ov143_022923f8();
    Unk_020e0488 *func_ov143_02292424();
    void func_ov143_0229245c();
    void func_ov143_02292494();
    void func_ov143_022924c4();
    void func_ov143_022924ec();
    void func_ov143_02292530(u32 v);
    void func_ov143_02292560(u32 v);
    void func_ov143_02292590();
    BOOL func_ov143_022925d4(void *pad);
    BOOL func_ov143_022927d8(u32 idx);

    u32 func_ov143_02292898(s32 x, s32 y);
    void func_ov143_02292908();
    void func_ov143_0229292c();
    void func_ov143_02292944();
    void func_ov143_02292960(s32 a, s32 b);
    void func_ov143_02292990();
    void func_ov143_022929d4();
    s32 func_ov143_022929f0();
    s32 func_ov143_02292a70();
    void func_ov143_02292af4();
    BOOL func_ov143_02292b2c();
    void func_ov143_02292b64();
    void func_ov143_02292bc0();
    void func_ov143_02292bf0();
    void func_ov143_02292c44();
    void func_ov143_02292c64();
    void func_ov143_02292c88();
    void func_ov143_02292ca0();
    void func_ov143_02292cc0();
    void func_ov143_02292cdc();
    void func_ov143_02292cf4();
    void func_ov143_02292d34();
    void func_ov143_02292da0();
    void func_ov143_02292dc4();
    void func_ov143_02292df8();
    void func_ov143_02292ea0();
    void func_ov143_02292f0c();
    void func_ov143_02292f30();
    void func_ov143_02292f64();
    void func_ov143_02292f8c();
    void func_ov143_0229303c();
    void func_ov143_022930b8();
    void func_ov143_0229312c();

    void func_ov143_022931bc();
    void func_ov143_02293228();
    void func_ov143_0229329c();
    void func_ov143_022932d4();
    void func_ov143_022932dc();
    void func_ov143_02293304();
    void func_ov143_0229330c();
    void func_ov143_02293324();
    void func_ov143_0229334c();
    void func_ov143_022933b4();
    void func_ov143_022933d8();
    void func_ov143_0229340c();
    void func_ov143_02293430();
    void func_ov143_0229346c();
    void func_ov143_02293498();
    void func_ov143_022934c8();
    void func_ov143_02293500();
    void func_ov143_02293528();
    void func_ov143_022935d0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ s16 unk_9a;
    /* 0x9c */ s16 unk_9c;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ volatile u8 unk_9f;
    /* 0xa0 */ u8 *unk_a0;
    /* 0xa4 */ volatile u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6[2];
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ Unk_ov002_02204614 unk_ac;
    /* 0x110 */ Unk_ov002_022046cc unk_110;
    /* 0x274 */ Unk_020e0488 unk_274[16];
    /* 0x674 */ u8 unk_674[0x800];
    /* 0xe74 */ BgVramTask unk_e74[1];
};

static inline BOOL Unk_ov143_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

extern "C" Unk_ov143_02293b80 *func_ov143_02293844() { return new Unk_ov143_02293b80(); }

BOOL Unk_ov143_02293b80::vfunc_00() {
    func_ov143_0229334c();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov143_02293b80::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent())->func_ov092_02291c5c();
    func_ov143_02293324();
    return TRUE;
}

BOOL Unk_ov143_02293b80::onDraw() {
    if (MenuCtrl_IsButtons()) {
        unk_ac.func_ov002_02202844();
    }
    if (!func_ov143_02292010(1)) return FALSE;
    unk_110.func_ov002_022036a4(func_ov002_02200920());
    s32 y = unk_94 + 0x60;
    Oam_DrawCell(1, data_ov143_02293980, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    func_ov143_022921c0(0x80, y);
    return TRUE;
}

BOOL Unk_ov143_02293b80::vfunc_4c() {
    static Unk_ov143_02293b80_Fn tbl[8] = {
        &Unk_ov143_02293b80::func_ov143_02293528, &Unk_ov143_02293b80::func_ov143_02293500,
        &Unk_ov143_02293b80::func_ov143_022934c8, &Unk_ov143_02293b80::func_ov143_02293498,
        &Unk_ov143_02293b80::func_ov143_02293430, &Unk_ov143_02293b80::func_ov143_0229340c,
        &Unk_ov143_02293b80::func_ov143_022933d8, &Unk_ov143_02293b80::func_ov143_022933b4};
    func_ov143_022932dc();
    (this->*tbl[unk_8c])();
    func_ov143_022932d4();
    return TRUE;
}

void Unk_ov143_02293b80::func_ov143_022935d0() {
    static Unk_ov143_02293b80_Fn tbl[11] = {
        &Unk_ov143_02293b80::func_ov143_0229312c, &Unk_ov143_02293b80::func_ov143_022930b8,
        &Unk_ov143_02293b80::func_ov143_0229303c, &Unk_ov143_02293b80::func_ov143_02292f8c,
        &Unk_ov143_02293b80::func_ov143_02292f64, &Unk_ov143_02293b80::func_ov143_02292f30,
        &Unk_ov143_02293b80::func_ov143_02292f0c, &Unk_ov143_02293b80::func_ov143_02292ea0,
        &Unk_ov143_02293b80::func_ov143_02292df8, &Unk_ov143_02293b80::func_ov143_02292d34,
        &Unk_ov143_02293b80::func_ov143_02292cf4};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov143_02293b80::vfunc_50() {
    func_ov143_0229330c();
    func_ov143_022935d0();
    func_ov143_02293304();
    return TRUE;
}

BOOL Unk_ov143_02293b80::vfunc_54() { return TRUE; }

BOOL Unk_ov143_02293b80::vfunc_58() { return TRUE; }

BOOL Unk_ov143_02293b80::vfunc_5c() {
    if (func_ov143_02292b2c() == 0) return TRUE;
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov143_02293b80::func_ov143_02293528() {
    func_ov143_0229329c();
    func_ov143_02293228();
    func_ov143_022931bc();
    func_ov143_022920ac();
    func_ov002_022008e0(10, 4, 0, 0x18);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    func_ov143_0229346c();
    func_ov143_02292000(1);
    unk_110.func_ov002_02203590();
    func_ov002_02200a50(1);
}

void Unk_ov143_02293b80::func_ov143_02293500() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov143_02292ca0();
    }
    func_ov143_0229346c();
}

void Unk_ov143_02293b80::func_ov143_022934c8() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent())->func_ov092_02291ce4(0x44, 1);
    func_ov002_022008c4(10, 0, 0, 0x18);
    func_ov143_0229346c();
    func_ov002_02200a50(3);
}

void Unk_ov143_02293b80::func_ov143_02293498() {
    if (func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        func_ov002_02200a60(5);
    } else {
        func_ov143_0229346c();
    }
}

void Unk_ov143_02293b80::func_ov143_0229346c() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
    unk_94 = func_ov002_02200920();
}

void Unk_ov143_02293b80::func_ov143_02293430() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200a50(5);
        func_ov002_02200874(0, 0);
        ((Unk_ov002_02202fac *)&unk_110)->func_ov002_02203274(0x8d);
        func_ov143_02292040();
    }
}

void Unk_ov143_02293b80::func_ov143_0229340c() {
    if (func_ov002_02200908(-1)) {
        func_ov143_02292c44();
        func_ov002_02200a60(2);
    }
}

void Unk_ov143_02293b80::func_ov143_022933d8() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200a50(7);
        func_ov002_02200874(0, 0);
        unk_110.func_ov002_02203590();
    }
}

void Unk_ov143_02293b80::func_ov143_022933b4() {
    if (func_ov002_02200908(-1)) {
        func_ov143_02292ca0();
        func_ov002_02200a60(2);
    }
}

void Unk_ov143_02293b80::func_ov143_0229334c() {
    unk_98 = 0;
    unk_a0 = gMelodyEditPattern;
    Melody_Unpack(data_021ed2f8, unk_a0);
    data_ov143_02293a00.w5.lo = data_ov143_022939e8.w5.lo + 4;
    unk_9a = -1;
    unk_a4 = 0;
}

void Unk_ov143_02293b80::func_ov143_02293324() {
    unk_e74[0].cancel();
    func_ov143_022923f8();
    unk_110.func_ov002_02203900();
}

void Unk_ov143_02293b80::func_ov143_0229330c() {
    func_ov143_022932dc();
    unk_ac.vfunc_0c();
}

void Unk_ov143_02293b80::func_ov143_02293304() { func_ov143_022932d4(); }

void Unk_ov143_02293b80::func_ov143_022932dc() {
    unk_e74[0].cancel();
    func_ov143_022923f8();
    unk_110.func_ov002_02203900();
}

void Unk_ov143_02293b80::func_ov143_022932d4() { func_ov143_02292590(); }

void Unk_ov143_02293b80::func_ov143_0229329c() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void Unk_ov143_02293b80::func_ov143_02293228() {
    void *h = gCurrentHeap;
    Gfx2d_LoadCharFile((void *)"menu/melody/bg0.bch", h, 6, 0x11, 0x11, 0x9c);
    Gfx2d_LoadPaletteFile((void *)"menu/melody/bg.bpl", h, 6, 1, 1, 6);
    Gfx2d_LoadScreenFile((void *)"menu/melody/a_bg.bsc", h, 6);
    File_LoadToBuffer((void *)"menu/melody/b_bg.bsc", unk_674, 0x800);
    Gfx2d_LoadScreen(unk_674, 4, 0x800, 0);
}

void Unk_ov143_02293b80::func_ov143_022931bc() {
    func_ov002_02203920(&unk_110);
    void *h = gCurrentHeap;
    Gfx2d_LoadCharFile((void *)"menu/melody/obj.bch", h, 8, 0xc0, 0xc0, 0xff);
    Gfx2d_LoadCharFile((void *)"menu/melody/obj2.bch", h, 8, 0x140, 0x140, 0x1bf);
    Gfx2d_LoadPaletteFile((void *)"menu/melody/obj.bpl", h, 8, 4, 4, 0xd);
}

void Unk_ov143_02293b80::func_ov143_0229312c() {
    u32 r;
    if (func_ov002_02200a14(1) != 0) {
        func_ov143_02292cc0();
        return;
    }
    if (Unk_ov143_Both()) {
        r = func_ov143_02292898(gTouchCurX, gTouchCurY);
        if (r != 0x16) {
            func_ov143_022927d8(r);
        } else if (((Unk_ov002_02202fac *)&unk_110)->func_ov002_02203110(1) != 0) {
            func_ov143_02292bf0();
        } else if (((Unk_ov002_02202fac *)&unk_110)->func_ov002_02203110(2) != 0) {
            func_ov143_02292bc0();
        }
    }
}

void Unk_ov143_02293b80::func_ov143_022930b8() {
    s32 v;
    u32 idx;
    u32 cur, nw;
    if (gTouchHeld == 0) {
        func_ov143_02292ca0();
        return;
    }
    v = unk_a5 + (unk_a8 - gTouchCurY) / 3;
    if (v < 0) v = 0;
    else if (v > 0xf) v = 0xf;
    idx = unk_a4;
    cur = unk_a0[idx];
    nw = func_ov143_02292170((u8)v);
    if (cur != nw) {
        Melody_PlayNote(nw);
        unk_a0[idx] = nw;
    }
}

void Unk_ov143_02293b80::func_ov143_0229303c() {
    u32 k;
    if (func_ov002_022009d4() != 0) {
        func_ov143_02292cdc();
        return;
    }
    if (func_ov143_022925d4((void *)func_ov002_022009c8()) != 0) {
        func_ov143_02292990();
        return;
    }
    k = gPad[1];
    if (k & 1) {
        func_ov143_0229292c();
    } else if (k & 2) {
        func_ov143_022929d4();
        func_ov143_02292bc0();
    } else if (k & 8) {
        func_ov143_022929d4();
        func_ov143_02292bf0();
    }
}

void Unk_ov143_02293b80::func_ov143_02292f8c() {
    if ((gPad[0] & 1) != 0) {
        u32 t = func_ov002_022009c8();
        if (t != 0) {
            u32 idx = unk_a4;
            u32 n = func_ov143_02292198(unk_a0[idx]);
            u32 old = n;
            if (func_ov002_0220128c(t) != 0) {
                if (n < 0xf) n = (u8)(n + 1);
            } else if (func_ov002_0220127c(t) != 0) {
                if (n != 0) n = (u8)(n - 1);
            }
            if (n != old) {
                s32 a, b;
                unk_a0[idx] = func_ov143_02292170(n);
                Melody_PlayNote(unk_a0[idx]);
                a = func_ov143_02292a70();
                b = func_ov143_022929f0();
                unk_ac.func_ov002_02202a40(a, b);
            }
        }
    } else {
        func_ov143_02292ca0();
        func_ov143_02292908();
    }
}

void Unk_ov143_02293b80::func_ov143_02292f64() {
    if (unk_ac.func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_9e);
        func_ov143_022935d0();
    }
}

void Unk_ov143_02293b80::func_ov143_02292f30() {
    if (unk_ac.isAnimDone() != 0) {
        if (func_ov143_022927d8(unk_a4) == 0) {
            func_ov002_02200a58(2);
            func_ov143_02292908();
        }
    }
}

void Unk_ov143_02293b80::func_ov143_02292f0c() {
    if (unk_ac.isAnimDone() != 0) {
        func_ov143_02292944();
        func_ov002_02200a58(unk_9e);
    }
}

void Unk_ov143_02293b80::func_ov143_02292ea0() {
    if (func_ov002_02200a14(1) != 0) {
        func_ov143_02292c64();
        return;
    }
    if (Unk_ov143_Both()) {
        if (((Unk_ov002_02202fac *)&unk_110)->func_ov002_02203110(3) != 0) {
            func_ov143_02292dc4();
        } else if (((Unk_ov002_02202fac *)&unk_110)->func_ov002_02203110(4) != 0) {
            func_ov143_02292da0();
        }
    }
}

void Unk_ov143_02293b80::func_ov143_02292df8() {
    u32 old;
    u32 k;
    if (func_ov002_022009d4() != 0) {
        func_ov143_02292c88();
        return;
    }
    old = unk_a4;
    func_ov002_022009c8();
    if (func_ov002_022009a4() != 0) {
        unk_a4 = 0x14;
    } else if (func_ov002_02200998() != 0) {
        unk_a4 = 0x15;
    }
    if (old != unk_a4) {
        func_ov143_02292990();
        return;
    }
    k = gPad[1];
    if (k & 1) {
        func_ov143_0229292c();
    } else if (k & 2) {
        func_ov143_022929d4();
        func_ov143_02292da0();
    } else if (k & 8) {
        func_ov143_022929d4();
        func_ov143_02292dc4();
    }
}

void Unk_ov143_02293b80::func_ov143_02292dc4() {
    s32 i;
    func_ov143_0229245c();
    ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030ac(3);
    Snd_PlaySe(0x5a);
    i = 0;
    do {
        unk_a0[i] = 0xf;
        i++;
    } while (i < 16);
}

void Unk_ov143_02293b80::func_ov143_02292da0() {
    func_ov143_0229245c();
    Snd_PlaySe(0x2a);
    ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030ac(4);
}

void Unk_ov143_02293b80::func_ov143_02292d34() {
    if (((Unk_ov002_02202fac *)&unk_110)->func_ov002_0220308c() != 0) {
        if (unk_ac.getAnim() != 0) {
            s32 a = ((Unk_ov002_02202fac *)&unk_110)->func_ov002_0220306c();
            s32 b = ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030f4(-1);
            s32 c = ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030b8(-1);
            unk_ac.func_ov002_02202a40(a + (b - 6), a + c);
        }
    } else {
        func_ov143_022929d4();
        func_ov002_02200a60(1);
    }
}

void Unk_ov143_02293b80::func_ov143_02292cf4() {
    s32 v = data_020ddf8c;
    if (v == -1 || v >= 0x10) {
        if (func_ov143_02292010(8) == 0) {
            func_ov143_022924c4();
        }
    } else {
        func_ov143_02291ff0(8);
        unk_9a = v;
    }
}

void Unk_ov143_02293b80::func_ov143_02292cdc() {
    func_ov143_022929d4();
    func_ov002_02200a58(0);
}

void Unk_ov143_02293b80::func_ov143_02292cc0() {
    func_ov143_02292af4();
    func_ov002_02200980();
    func_ov002_02200a58(2);
}

void Unk_ov143_02293b80::func_ov143_02292ca0() {
    if (MenuCtrl_IsTouch() != 0) {
        func_ov143_02292cdc();
    } else {
        func_ov143_02292cc0();
    }
}

void Unk_ov143_02293b80::func_ov143_02292c88() {
    func_ov143_022929d4();
    func_ov002_02200a58(7);
}

void Unk_ov143_02293b80::func_ov143_02292c64() {
    unk_a4 = 0x15;
    func_ov143_02292af4();
    func_ov002_02200980();
    func_ov002_02200a58(8);
}

void Unk_ov143_02293b80::func_ov143_02292c44() {
    if (MenuCtrl_IsTouch() != 0) {
        func_ov143_02292c88();
    } else {
        func_ov143_02292c64();
    }
}

void Unk_ov143_02293b80::func_ov143_02292bf0() {
    func_0206ecf8(1);
    ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030ac(1);
    func_ov002_02200a50(2);
    func_ov002_02200a58(9);
    Melody_Pack(data_021ed2f8, unk_a0);
    Melody_ApplyEditPattern();
    func_020795a8(data_021dfd8c);
    func_ov143_02292b64();
}

void Unk_ov143_02293b80::func_ov143_02292bc0() {
    func_0206ecf8(0);
    ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030ac(2);
    func_ov002_02200a50(2);
    func_ov002_02200a58(9);
}

void Unk_ov143_02293b80::func_ov143_02292b64() {
    u8 buf[0x11];
    if (gCommManager->isOnline() != 0) {
        CommManager *g;
        buf[0] = 0xc;
        MI_CpuCopy8(unk_a0, buf + 1, 0x10);
        g = gCommManager;
        g->beginRecord();
        g->writeRecord(buf, 0x11);
        g->endRecord(0x16, 4);
        unk_9c = g->getSendSeq();
    }
}

BOOL Unk_ov143_02293b80::func_ov143_02292b2c() {
    if (func_0206ed18() == 0) return TRUE;
    if (gCommManager->isOnline() != 0) {
        if (Comm_IsSeqConfirmed(unk_9c) == 0) return FALSE;
    }
    return TRUE;
}

void Unk_ov143_02293b80::func_ov143_02292af4() {
    s32 a = func_ov143_02292a70();
    s32 b = func_ov143_022929f0();
    unk_ac.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_ac)->func_ov002_02202d00(1);
    func_ov143_02292944();
}

s32 Unk_ov143_02293b80::func_ov143_02292a70() {
    Unk_ov143_02292898_V v;
    u32 t = unk_a4;
    if (t <= 0xf) {
        func_ov143_02292064(&v.x, t);
        return v.x + 0xa;
    }
    switch (t - 0x10) {
    case 0:
        return 0x2e;
    case 1:
        return 0x94;
    case 2:
        return ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030f4(1) - 6;
    case 3:
        return ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030f4(2) - 6;
    case 4:
        return ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030f4(3);
    case 5:
        return ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030f4(4);
    }
    return 0x80;
}

s32 Unk_ov143_02293b80::func_ov143_022929f0() {
    Unk_ov143_02292898_V v;
    u32 t = unk_a4;
    if (t <= 0xf) {
        func_ov143_02292064(&v.x, t);
        return v.y + 3;
    }
    switch (t - 0x10) {
    case 0:
        return 0xa0;
    case 1:
        return 0xa0;
    case 2:
        return ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030b8(1);
    case 3:
        return ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030b8(2);
    case 4:
        return ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030b8(3);
    case 5:
        return ((Unk_ov002_02202fac *)&unk_110)->func_ov002_022030b8(4);
    }
    return 0x60;
}

void Unk_ov143_02293b80::func_ov143_022929d4() {
    ((Unk_ov002_0220464c *)&unk_ac)->func_ov002_02202d00(0);
    unk_ac.vfunc_0c();
}

void Unk_ov143_02293b80::func_ov143_02292990() {
    s32 a, b;
    switch (unk_a4) {
    case 0x12:
    case 0x13:
        ((Unk_ov002_0220464c *)&unk_ac)->func_ov002_02202ca0();
        break;
    default:
        ((Unk_ov002_0220464c *)&unk_ac)->func_ov002_02202c40();
        break;
    }
    a = func_ov143_02292a70();
    b = func_ov143_022929f0();
    func_ov143_02292960(a, b);
}

void Unk_ov143_02293b80::func_ov143_02292960(s32 a, s32 b) {
    unk_ac.func_ov002_022029e8(a, b, 3, 1);
    unk_9e = unk_8d;
    func_ov002_02200a58(4);
}

void Unk_ov143_02293b80::func_ov143_02292944() {
    unk_ac.func_ov002_02202a78();
    unk_ac.vfunc_0c();
}

void Unk_ov143_02293b80::func_ov143_0229292c() {
    ((Unk_ov002_0220464c *)&unk_ac)->func_ov002_02202b68();
    func_ov002_02200a58(5);
}

void Unk_ov143_02293b80::func_ov143_02292908() {
    unk_ac.func_ov002_02202af0();
    unk_9e = unk_8d;
    func_ov002_02200a58(6);
}

u32 Unk_ov143_02293b80::func_ov143_02292898(s32 x, s32 y) {
    Unk_ov143_02292898_V v;
    s32 i;
    for (i = 0; i < 16; i++) {
        func_ov143_02292064(&v.x, i);
        if (v.x <= x && v.x + 0x14 > x && v.y <= y && v.y + 0x12 > y) {
            return (u8)i;
        }
    }
    if (x >= 0 && x < 0x38 && y >= 0x90 && y < 0xac) return 0x10;
    if (x >= 0x60 && x < 0xb0 && y >= 0x90 && y < 0xb8) return 0x11;
    return 0x16;
}

BOOL Unk_ov143_02293b80::func_ov143_022927d8(u32 idx) {
    if (idx <= 0xf) {
        unk_9a = idx;
        unk_a4 = idx;
        if (MenuCtrl_IsTouch()) {
            unk_a8 = gTouchCurY;
            unk_a5 = func_ov143_02292198(unk_a0[idx]);
            func_ov002_02200a58(1);
        } else {
            func_ov002_02200a58(3);
        }
        Melody_PlayNote(unk_a0[idx]);
        return TRUE;
    }
    switch (idx) {
    case 0x10:
        func_ov143_02292494();
        Snd_PlaySe(0x2a);
        return TRUE;
    case 0x11:
        func_ov143_022924ec();
        return TRUE;
    case 0x12:
        func_ov143_02292bf0();
        return TRUE;
    case 0x13:
        func_ov143_02292bc0();
        return TRUE;
    case 0x14:
        func_ov143_02292dc4();
        return TRUE;
    case 0x15:
        func_ov143_02292da0();
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov143_02293b80::func_ov143_022925d4(void *pad) {
    if (pad == NULL) return FALSE;
    u32 cur = unk_a4;
    if (cur < 8) {
        if (func_ov002_0220127c((u32)pad)) {
            unk_a4 = unk_a4 + 8;
        } else if (func_ov002_0220126c((u32)pad)) {
            if (unk_a4 != 0) unk_a4 = unk_a4 - 1;
        } else if (func_ov002_0220125c((u32)pad)) {
            unk_a4 = unk_a4 + 1;
        }
    } else if (cur >= 8 && cur <= 0xf) {
        if (func_ov002_0220127c((u32)pad)) {
            s32 t = unk_a4 - 8;
            if (t < 2) {
                unk_a4 = 0x10;
            } else if (t < 6) {
                unk_a4 = 0x11;
            } else {
                unk_a4 = 0x12;
            }
        } else if (func_ov002_0220128c((u32)pad)) {
            unk_a4 = unk_a4 - 8;
        } else if (func_ov002_0220126c((u32)pad)) {
            unk_a4 = unk_a4 - 1;
        } else if (func_ov002_0220125c((u32)pad)) {
            if (unk_a4 < 0xf) unk_a4 = unk_a4 + 1;
        }
    } else {
        switch (cur) {
        case 0x10:
            if (func_ov002_0220128c((u32)pad)) {
                unk_a4 = 8;
            } else if (func_ov002_0220125c((u32)pad)) {
                unk_a4 = 0x11;
            }
            break;
        case 0x11:
            if (func_ov002_0220128c((u32)pad)) {
                unk_a4 = 0xb;
            } else if (func_ov002_0220125c((u32)pad)) {
                unk_a4 = 0x12;
            } else if (func_ov002_0220126c((u32)pad)) {
                unk_a4 = 0x10;
            }
            break;
        case 0x12:
            if (func_ov002_0220128c((u32)pad)) {
                unk_a4 = 0xe;
            } else if (func_ov002_0220127c((u32)pad)) {
                unk_a4 = 0x13;
            } else if (func_ov002_0220126c((u32)pad)) {
                unk_a4 = 0x11;
            }
            break;
        case 0x13:
            if (func_ov002_0220128c((u32)pad)) {
                unk_a4 = 0x12;
            } else if (func_ov002_0220126c((u32)pad)) {
                unk_a4 = 0x11;
            }
            break;
        }
    }
    if (cur != unk_a4) return TRUE;
    return FALSE;
}

void Unk_ov143_02293b80::func_ov143_02292590() {
    if (func_ov143_02292010(4)) {
        if (unk_e74[0].requestScreen((u32)unk_674, 4, 0x800, 0)) {
            func_ov143_02291ff0(4);
        }
    }
}

void Unk_ov143_02293b80::func_ov143_02292560(u32 v) {
    func_ov143_02292000(4);
    func_0206ee80(&unk_674, 0xc, 0x12, 0x15, 0x16, v);
}

void Unk_ov143_02293b80::func_ov143_02292530(u32 v) {
    func_ov143_02292000(4);
    func_0206ee80(&unk_674, 0, 0x11, 9, 0x17, v);
}

void Unk_ov143_02293b80::func_ov143_022924ec() {
    Melody_PlayEditPattern(0x190);
    unk_9a = -1;
    func_ov002_02200a58(0xa);
    func_ov143_02292000(2);
    func_ov143_02292000(8);
    func_ov143_02292560(4);
    func_ov143_022929d4();
}

void Unk_ov143_02293b80::func_ov143_022924c4() {
    func_ov143_02291ff0(2);
    unk_9a = -1;
    func_ov143_02292ca0();
    func_ov143_02292560(3);
}

void Unk_ov143_02293b80::func_ov143_02292494() {
    func_ov143_02292530(6);
    func_ov143_022929d4();
    func_ov002_02200a50(4);
    func_ov002_02200a60(1);
    func_ov002_0220085c(0, 0);
}

void Unk_ov143_02293b80::func_ov143_0229245c() {
    unk_a4 = 0x10;
    func_ov002_02200a58(9);
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(6);
    func_ov143_02292530(5);
    func_ov143_02292024();
}

Unk_020e0488 *Unk_ov143_02293b80::func_ov143_02292424() {
    if (unk_9f >= 0x10) {
        return &unk_274[15];
    }
    unk_9f = unk_9f + 1;
    return &unk_274[unk_9f - 1];
}

void Unk_ov143_02293b80::func_ov143_022923f8() {
    s32 i;
    unk_9f = 0;
    for (i = 0; i < 16; i++) {
        unk_274[i].func_0206fc44();
    }
}

void Unk_ov143_02293b80::func_ov143_02292364(u32 idx, s32 x, s32 y) {
    Unk_ov143_02293b38_E *e = data_ov143_02293b38[idx];
    u32 t = func_ov143_02292198(idx);
    s32 ym = y - t * 2;
    if (idx == 0xf) {
        func_02088378(1, data_ov143_022938c8, x - 0x5c, ym - 0x18, -1, 2, 0x1000, 0xeaab, 0);
    } else {
        u32 n = e->w5.n;
        void *p;
        if (idx < 6 || idx == 0xe) {
            p = &data_ov143_022939e8.w4;
        } else {
            p = &data_ov143_02293a00.w4;
        }
        Oam_DrawCell(1, p, x, ym, n, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void Unk_ov143_02293b80::func_ov143_022922e4(u32 idx, s32 x, s32 y) {
    u8 *e = (u8 *)data_ov143_02293b38[idx];
    s32 ty;
    u32 t = func_ov143_02292198(idx);
    ty = y - t * 2;
    func_02088730(1, e, x, ty, 0xd, 2, 0);
    func_02088730(1, e + 8, x, ty, 0xd, 2, 0);
    Oam_DrawCell(1, e + 0x10, x, ty, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov143_02293b80::func_ov143_0229229c(u32 idx, s32 x, s32 y) {
    u32 t = func_ov143_02292198(idx);
    y -= t * 2;
    Oam_DrawCell(1, data_ov143_02293b38[idx], x, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

void Unk_ov143_02293b80::func_ov143_02292240(u32 idx, s32 x, s32 y) {
    if (func_ov143_02292010(2)) {
        func_ov143_02292364(unk_a0[idx], x, y);
    } else {
        func_ov143_022922e4(unk_a0[idx], x, y);
    }
    func_02088730(1, data_ov143_02293950, x, y, -1, -1, 0);
}

void Unk_ov143_02293b80::func_ov143_022921c0(s32 x, s32 y) {
    s32 i;
    s32 cx = x;
    for (i = 0; i < 8; i++) {
        if (i == unk_9a) {
            func_ov143_02292240(i, cx, y);
        } else {
            func_ov143_0229229c(unk_a0[i], cx, y);
        }
        cx += 0x18;
    }
    x += 0x10;
    for (; i < 16; i++) {
        if (i == unk_9a) {
            func_ov143_02292240(i, x, y + 0x38);
        } else {
            func_ov143_0229229c(unk_a0[i], x, y + 0x38);
        }
        x += 0x18;
    }
}

extern "C" Unk_ov143_02293b38_E *data_ov143_02293b38[16] = {&data_ov143_02293a18, &data_ov143_02293a30, &data_ov143_02293a48, &data_ov143_02293a60, &data_ov143_02293a78, &data_ov143_02293a90, &data_ov143_02293aa8, &data_ov143_02293ac0, &data_ov143_02293ad8, &data_ov143_02293b08, &data_ov143_02293b20, &data_ov143_022939a0, &data_ov143_022939b8, &data_ov143_022939d0, &data_ov143_02293af0, (Unk_ov143_02293b38_E *)&data_ov143_022939e8};

u32 Unk_ov143_02293b80::func_ov143_02292198(u32 idx) {
    u8 t[16] = {2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 1, 0};
    return t[idx];
}

// Small table lookups (defined last so they are not inlined)
u32 Unk_ov143_02293b80::func_ov143_02292170(u32 idx) {
    u8 t[16] = {0xf, 0xe, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd};
    return t[idx];
}

void Unk_ov143_02293b80::func_ov143_02292128(u32 id, u32 idx) {
    Unk_ov143_02293b38_E *p = data_ov143_02293b38[idx];
    Unk_020e0488 *e = func_ov143_02292424();
    func_0206f9fc(e, id);
    e->func_0206fb9c(8, p->w1.lo, 3, 0xf, 0, 0);
    e->func_0206fab4(1, 0);
}

void Unk_ov143_02293b80::func_ov143_022920ac() {
    s32 j;
    u32 i;
    i = 0xc7;
    j = 0;
    do {
        func_ov143_02292128(i, j);
        i = (u8)(i + 1);
        if (i > 0xc9) i = 0xc3;
        j++;
    } while (j < 0xd);
    func_ov143_02292128(0xca, 0xd);
    func_ov143_02292128(0xcb, 0xe);
    Unk_020e0488 *e = func_ov143_02292424();
    func_0206f9fc(e, 0x8d);
    e->func_0206fb9c(8, data_ov143_02293980[0].w1.lo, 8, 0xf, 0, 0);
    e->func_0206fab4(1, 0);
}

void Unk_ov143_02293b80::func_ov143_02292064(s32 *out, s32 idx) {
    s32 x = 0x1a;
    s32 y = 0x3f;
    u32 t = func_ov143_02292198(unk_a0[idx]);
    if (idx < 8) {
        x += idx * 0x18;
        y -= t * 2;
    } else {
        x += (idx - 8) * 0x18 + 0x10;
        y += 0x38 - t * 2;
    }
    out[0] = x;
    out[1] = y;
}

void Unk_ov143_02293b80::func_ov143_02292040() {
    Gfx2d_BeginSubObjWinBrightness();
    Gfx2d_SetSubBrightness(-6);
    ((Unk_ov002_02202fac *)&unk_110)->func_ov002_02203044();
}

void Unk_ov143_02293b80::func_ov143_02292024() {
    Gfx2d_EndSubObjWinBrightness();
    ((Unk_ov002_02202fac *)&unk_110)->func_ov002_0220301c();
}

BOOL Unk_ov143_02293b80::func_ov143_02292010(u32 mask) {
    if (unk_98 & mask) return TRUE;
    return FALSE;
}

void Unk_ov143_02293b80::func_ov143_02292000(u32 mask) {
    unk_98 = unk_98 | mask;
}

// ---------------------------------------------------------------------------------------------

void Unk_ov143_02293b80::func_ov143_02291ff0(u32 mask) {
    unk_98 = unk_98 & ~mask;
}

