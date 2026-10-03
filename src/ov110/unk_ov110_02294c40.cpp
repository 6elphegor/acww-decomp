// ov110: inventory / item-selling scene overlay (class Unk_ov110_02297778, vtable 0x02297778).
// Linked overlay: the whole of .text/.data/.bss comes from this file.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class Unk_ov110_02297778;

extern "C" {
extern void *gCommManager;
extern u8 data_021ed210[];
extern u8 data_021ed22e[];
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
extern s32 gCurrentHeap;
extern void *gCommManager;
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_LoadCharFile(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreenFile(const void *a, s32 b, s32 c);
void Gfx2d_LoadPaletteFile(const void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 Snd_PlaySe(s32 a);
BOOL func_0206e61c();
void func_0206e63c();
void func_0206eba4(void *p);
s32 func_0206ebc0();
void func_0206ec04();
void func_0206ecf8(s32 a);
s32 func_0206ed18();
void func_0206ed2c(u32 a);
s32 func_0206ed50();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void func_0206f9fc(void *p, s32 a);
s32 Comm_IsSeqConfirmed(s32 a);
s32 func_02098ffc();
BOOL Clock_GetWeekday();
s32 ProcBase_GetParent(...);
void ProcBase_RequestDelete(void *p);
void MI_CpuCopy8(void *a, void *b, u32 c);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
BOOL func_ov002_022019d0(void *p, s32 a, void *q, s32 b);
BOOL func_ov002_02201a28(void *p);
s32 func_ov002_02201a70(void *p);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02201b04(void *a);
void func_ov002_02201b58(void *a);
void func_ov002_02202064(void *p, s32 x);
void func_ov094_02292380();
void func_ov094_0229238c();
void func_ov094_02292398();
BOOL func_ov094_02292414(u32 v);
BOOL func_ov094_022924c4(u32 v);
void func_ov094_0229277c(void *p, s32 a);
void func_ov094_02292a80(void *a);
void func_ov094_02292aa4(void *a);
void func_ov094_02292acc(void *a);
void func_ov094_02292ae0(void *a);
void func_ov094_02292d1c(void *a, s32 b);
void func_ov094_02292d30(void *a, s32 b);
BOOL func_ov094_0229311c(void *p, u32 v);
void func_ov094_0229313c(void *p, s32 a, s32 b);
void func_ov094_0229324c(void *p, s32 a, s32 b);
void func_ov094_022932d0(void *p, s32 a, s32 b);
void func_ov094_02293308(void *p, u32 v);
BOOL func_ov094_0229333c(void *p, u32 v);
void func_ov094_0229341c(void *p, u32 a, u32 b);
void func_ov094_02293434(void *p, u32 a);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_022934d8(void *p, u32 v);
u32 func_ov094_02293504(void *p, u32 v);
u32 func_ov094_0229352c(void *p, u32 v);
void func_ov094_0229357c(void *p, u32 v);
void func_ov094_0229358c(void *p);
void func_ov094_0229359c(void *p, u32 v);
void func_ov094_022935dc(void *p);
s32 func_ov094_02293610(void *p, u32 v);
s32 func_ov094_02293624(void *p, u32 v);
void func_ov094_02293638(void *p, void *q, u32 v);
void func_ov094_02293764(void *a, void *b);
void func_ov094_022937a0(void *a);
u32 func_ov094_02293938(void *p, u32 a, u32 b);
u32 func_ov094_02293968(void *p);
void func_ov094_02293998(void *a);
void func_ov094_022939a0(void *a);
void func_ov094_022939c0(void *a, s32 b);
void func_ov094_02293d2c(void *a);
}

// Text window, 0x40 bytes (src/main/unk_0206f53c.cpp)
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    void func_0206fab4(s32, s32);
    void func_0206fb9c(u32, u32, u32, u8, u8, s32);
    void func_0206fc44();
    u8 unk_04[0x3c];
};

// Screen upload helper sub-object, 0x38 bytes
class BgVramTaskPair {
public:
    BgVramTaskPair();
//@@CLS_Unk_020e4608@@
    u32 unk_00[0x38 / 4];
};

class LabelBalloon {
public:
    void setPos(s32, s32);
    void setPopUpward();
    void setPopDownward();
};

class BgVramTask {
public:
    void cancel();
};

// Comm/session singleton (gCommManager)
class CommManager {
public:
    void endRecord(u32, u32);
    void writeRecord(u8 *, u32);
    void beginRecord();
    s32 getSendSeq();
    BOOL isOnline();
};

class Unk_ov094_02294a50 {
public:
    Unk_ov094_02294a50();
    ~Unk_ov094_02294a50();
//@@CLS_Unk_ov094_02294a50@@
    u32 unk_00[0xa60 / 4];
};

class Unk_ov094_02294bd4 {
public:
    Unk_ov094_02294bd4();
    ~Unk_ov094_02294bd4();
    void func_ov094_022941a0(s32, s32);
    void func_ov094_022941f8(u32);
    void func_ov094_022943b0();
    void func_ov094_022943f8();
    void func_ov094_0229462c();
    void func_ov094_02294644(s32);
    u32 unk_00[0x28 / 4];
};

// 0x15e0 object whose ctor/dtor are plain-named in ov094 (renamed, see renames.txt)
class Unk_ov094_02292d6c {
public:
    Unk_ov094_02292d6c();
    ~Unk_ov094_02292d6c();
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32, s32);
};

class Unk_ov002_02204468 {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();
    virtual void vfunc_08();
    void func_ov002_022006a4(u8);
    void func_ov002_022006b0();
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    void func_ov002_022006e4(s32);
    s32 func_ov002_0220071c();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov002_02204604 {
public:
    Unk_ov002_02204604();
    ~Unk_ov002_02204604();
    void func_ov002_022026c4(s32, s32, s32);
    s32 func_ov002_022026f4(s32, s32);
    s32 func_ov002_02202708();
    s32 func_ov002_02202710();
    BOOL func_ov002_02202718();
    void func_ov002_022027a4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov002_022013ac {
public:
    s32 func_ov002_02201498(s32);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014c0(s32, s32);
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
};

class Unk_ov002_02204558 : public Unk_ov002_022013ac {
public:
    Unk_ov002_02204558();
    ~Unk_ov002_02204558();
    void func_ov002_02202310(s32, s32, const char *);
    u32 unk_00[0x300 / 4];
};

class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32);
    u32 unk_00[0x108 / 4];
};

// Menu cursor sub-object hierarchy (same as ov140)
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    s32 isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32);
    s32 enableObjWindow();
};

class Unk_ov002_02202d98 : public HandCursor {
public:
    void func_ov002_02202844();
    s32 func_ov002_022028a0();
    s32 func_ov002_022028c8();
    BOOL func_ov002_022028f0();
    BOOL func_ov002_022028fc();
    BOOL func_ov002_02202928();
    void func_ov002_022029e8(s32, s32, s32, s32);
    void func_ov002_02202a18(s32, s32, s32);
    void func_ov002_02202a40(s32, s32);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

class Unk_ov002_0220464c : public HandCursor {
public:
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32);
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

// Scene base class (declared in src/ov002/unk_ov002_02200680.cpp)
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

    void func_ov002_02200840(s32, s32, s32);
    void func_ov002_02200850(s32);
    void func_ov002_022008c4(s32, s32, s32, s32);
    void func_ov002_022008e0(s32, s32, s32, s32);
    s32 func_ov002_022008fc(s32);
    s32 func_ov002_02200908(s32);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    u32 func_ov002_022009c8();
    u32 func_ov002_022009d4();
    s32 func_ov002_02200a14(s32);
    void func_ov002_02200a50(u8);
    void func_ov002_02200a58(u8);
    void func_ov002_02200a60(u8);

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

typedef void (Unk_ov110_02297778::*Unk_ov110_02297778_Fn)();

// Stand-in layout used by the free-function (state helper) half of the overlay
struct Unk_ov110_02295588_Vt {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov110_S {
    /* 0x0000 */ u8 pad_00[0x8c];
    /* 0x008c */ u8 unk_8c;
    /* 0x008d */ u8 unk_8d;
    /* 0x008e */ u8 pad_8e[0x94 - 0x8e];
    /* 0x0094 */ s32 unk_94;
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ s32 unk_a4;
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ s32 unk_ac;
    /* 0x00b0 */ u16 unk_b0[15];
    /* 0x00ce */ u16 unk_ce[15];
    /* 0x00ec */ u16 unk_ec;
    /* 0x00ee */ u8 pad_ee[2];
    /* 0x00f0 */ u8 unk_f0;
    /* 0x00f1 */ u8 unk_f1;
    /* 0x00f2 */ u8 unk_f2;
    /* 0x00f3 */ u8 unk_f3;
    /* 0x00f4 */ u8 unk_f4;
    /* 0x00f5 */ u8 unk_f5;
    /* 0x00f6 */ u8 unk_f6;
    /* 0x00f7 */ u8 unk_f7;
    /* 0x00f8 */ u8 unk_f8;
    /* 0x00f9 */ u8 unk_f9;
    /* 0x00fa */ u8 unk_fa;
    /* 0x00fb */ u8 unk_fb;
    /* 0x00fc */ u8 unk_fc;
    /* 0x00fd */ u8 pad_fd[3];
    /* 0x0100 */ u8 unk_100[0x38];
    /* 0x0138 */ u8 unk_138[0xa60];
    /* 0x0b98 */ u8 unk_b98[0x28];
    /* 0x0bc0 */ u8 unk_bc0[0x15e0];
    /* 0x21a0 */ u8 unk_21a0[0xc0];
    /* 0x2260 */ u8 unk_2260[0x18];
    /* 0x2278 */ u8 unk_2278[0x64];
    /* 0x22dc */ u8 unk_22dc[0x2f9];
    /* 0x25d5 */ u8 unk_25d5[0x18f];
};
typedef Unk_ov110_S S;

// Vtable 0x02297778
class Unk_ov110_02297778 : public Unk_ov002_022044e4 {
public:
    Unk_ov110_02297778()
        : unk_100(), unk_138(), unk_b98(), unk_bc0(), unk_21a0(), unk_2260(), unk_2278(), unk_22dc(), unk_25dc(), unk_26e4() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov110_02294d68(u32 mask);
    void func_ov110_02294d78(u32 mask);
    BOOL func_ov110_02294d88(u32 mask);
    BOOL func_ov110_02294d9c();
    void func_ov110_02294de4(u8 v);
    s32 func_ov110_02294e48(u16 *p);
    void func_ov110_02294e78(s32 flag);
    void func_ov110_02294fb8(s32 flag);
    void *func_ov110_02294ffc();
    void func_ov110_02295034();
    BOOL func_ov110_02295060(void *pad, s32 mode);
    void func_ov110_02295138(void *pad);
    void func_ov110_022951ac(void *pad, s32 mode);
    void func_ov110_022952b0(void *pad, s32 mode);
    void func_ov110_022953b4();
    s32 func_ov110_022953e0();
    void func_ov110_02295404(u8 v);
    void func_ov110_0229544c(u8 v);
    void func_ov110_02295488();
    void func_ov110_022954a8();
    void func_ov110_022954c8();
    void func_ov110_022954e8();
    void func_ov110_02295508();
    void func_ov110_0229553c();

    // state functions (table targets; bodies are the free-function state helpers)
    void func_ov110_02296c0c();
    void func_ov110_02296bb8();
    void func_ov110_02296b1c();
    void func_ov110_022969ec();
    void func_ov110_02296874();
    void func_ov110_02296780();
    void func_ov110_02296700();
    void func_ov110_022966b4();
    void func_ov110_02296664();
    void func_ov110_02296630();
    void func_ov110_02296608();
    void func_ov110_022965d8();
    void func_ov110_022965ac();
    void func_ov110_02296558();
    void func_ov110_02296510();
    void func_ov110_022964c0();
    void func_ov110_02296488();
    void func_ov110_0229644c();
    void func_ov110_02296408();
    void func_ov110_022963e8();
    void func_ov110_022963b4();
    void func_ov110_02296370();
    void func_ov110_0229714c();
    void func_ov110_022970cc();
    void func_ov110_02297094();
    void func_ov110_02297024();
    void func_ov110_02296fbc();
    void func_ov110_02296f70();

    void func_ov110_022971d8();
    BOOL func_ov110_0229726c();
    void func_ov110_0229728c();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ u8 unk_a0[0x10];
    /* 0xb0 */ u16 unk_b0[15];
    /* 0xce */ u16 unk_ce[15];
    /* 0xec */ u8 unk_ec[2];
    /* 0xee */ s16 unk_ee;
    /* 0xf0 */ u8 unk_f0[5];
    /* 0xf5 */ u8 unk_f5;
    /* 0xf6 */ u8 unk_f6;
    /* 0xf7 */ u8 unk_f7;
    /* 0xf8 */ u8 unk_f8;
    /* 0xf9 */ u8 unk_f9;
    /* 0xfa */ u8 unk_fa;
    /* 0xfb */ u8 unk_fb;
    /* 0xfc */ u8 unk_fc;
    /* 0xfd */ u8 unk_fd[3];
    /* 0x100 */ BgVramTaskPair unk_100[1];
    /* 0x138 */ Unk_ov094_02294a50 unk_138;
    /* 0xb98 */ Unk_ov094_02294bd4 unk_b98;
    /* 0xbc0 */ Unk_ov094_02292d6c unk_bc0;
    /* 0x21a0 */ Unk_ov002_02204468 unk_21a0;
    /* 0x2260 */ Unk_ov002_02204604 unk_2260;
    /* 0x2278 */ Unk_ov002_02204614 unk_2278;
    /* 0x22dc */ Unk_ov002_02204558 unk_22dc;
    /* 0x25dc */ Unk_ov002_022040ec unk_25dc;
    /* 0x26e4 */ Unk_020e0488 unk_26e4[2];
};

static inline void func_0206fab4(void *p, s32 a, s32 b) { ((Unk_020e0488 *)p)->func_0206fab4((s32)a, (s32)b); }
static inline void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f) { ((Unk_020e0488 *)p)->func_0206fb9c((u32)a, (u32)b, (u32)c, (u8)d, (u8)e, (s32)f); }
static inline void func_0206fc44(void *p) { ((Unk_020e0488 *)p)->func_0206fc44(); }
static inline void CommManager_endRecord(void *p, s32 a, s32 b) { ((CommManager *)p)->endRecord((u32)a, (u32)b); }
static inline void CommManager_writeRecord(void *p, void *buf, s32 n) { ((CommManager *)p)->writeRecord((u8 *)buf, (u32)n); }
static inline void CommManager_beginRecord(void *p) { ((CommManager *)p)->beginRecord(); }
static inline s32 CommManager_getSendSeq(void *p) { return ((CommManager *)p)->getSendSeq(); }
static inline BOOL CommManager_isOnline(void *p) { return ((CommManager *)p)->isOnline(); }
static inline void func_02089ad8(void *p, s32 a, s32 b) { ((LabelBalloon *)p)->setPos((s32)a, (s32)b); }
static inline void func_02089af0(void *p) { ((LabelBalloon *)p)->setPopUpward(); }
static inline void func_02089af8(void *p) { ((LabelBalloon *)p)->setPopDownward(); }
static inline s32 func_0208d4fc(void *p) { return ((HandCursor *)p)->isAnimDone(); }
static inline s32 func_0208d534(void *p) { return ((HandCursor *)p)->getAnim(); }
static inline void func_0208d538(void *p, s32 a) { ((HandCursor *)p)->setAnimAtEnd((s32)a); }
static inline s32 func_0208d644(void *p) { return ((HandCursor *)p)->enableObjWindow(); }
static inline void func_020b87d0(void *p) { ((BgVramTask *)p)->cancel(); }
static inline void func_ov002_022006a4(void *a, s32 b) { ((Unk_ov002_02204468 *)a)->func_ov002_022006a4((u8)b); }
static inline void func_ov002_022006b0(void *p) { ((Unk_ov002_02204468 *)p)->func_ov002_022006b0(); }
static inline void func_ov002_022006b8(void *p) { ((Unk_ov002_02204468 *)p)->func_ov002_022006b8(); }
static inline void func_ov002_022006c0(void *p) { ((Unk_ov002_02204468 *)p)->func_ov002_022006c0(); }
static inline void func_ov002_022006e4(void *self, s32 a) { ((Unk_ov002_02204468 *)self)->func_ov002_022006e4((s32)a); }
static inline s32 func_ov002_0220071c(void *a) { return ((Unk_ov002_02204468 *)a)->func_ov002_0220071c(); }
static inline void func_ov002_02200840(void *a, s32 b, s32 c, s32 d) { ((Unk_ov002_022044e4 *)a)->func_ov002_02200840((s32)b, (s32)c, (s32)d); }
static inline void func_ov002_02200850(void *a, s32 b) { ((Unk_ov002_022044e4 *)a)->func_ov002_02200850((s32)b); }
static inline void func_ov002_022008c4(void *a, s32 b, s32 c, s32 d, s32 e) { ((Unk_ov002_022044e4 *)a)->func_ov002_022008c4((s32)b, (s32)c, (s32)d, (s32)e); }
static inline void func_ov002_022008e0(void *a, s32 b, s32 c, s32 d, s32 e) { ((Unk_ov002_022044e4 *)a)->func_ov002_022008e0((s32)b, (s32)c, (s32)d, (s32)e); }
static inline s32 func_ov002_022008fc(void *a, s32 b) { return ((Unk_ov002_022044e4 *)a)->func_ov002_022008fc((s32)b); }
static inline s32 func_ov002_02200908(void *a, s32 b) { return ((Unk_ov002_022044e4 *)a)->func_ov002_02200908((s32)b); }
static inline s32 func_ov002_02200920(void *a) { return ((Unk_ov002_022044e4 *)a)->func_ov002_02200920(); }
static inline void func_ov002_02200980(void *self) { ((Unk_ov002_022044e4 *)self)->func_ov002_02200980(); }
static inline u32 func_ov002_022009c8(void *self) { return ((Unk_ov002_022044e4 *)self)->func_ov002_022009c8(); }
static inline u32 func_ov002_022009d4(void *self) { return ((Unk_ov002_022044e4 *)self)->func_ov002_022009d4(); }
static inline s32 func_ov002_02200a14(void *a, s32 b) { return ((Unk_ov002_022044e4 *)a)->func_ov002_02200a14((s32)b); }
static inline void func_ov002_02200a50(void *a, s32 b) { ((Unk_ov002_022044e4 *)a)->func_ov002_02200a50((u8)b); }
static inline void func_ov002_02200a58(void *self, s32 s) { ((Unk_ov002_022044e4 *)self)->func_ov002_02200a58((u8)s); }
static inline void func_ov002_02200a60(void *self, s32 s) { ((Unk_ov002_022044e4 *)self)->func_ov002_02200a60((u8)s); }
static inline s32 func_ov002_02201498(void *p, u32 v) { return ((Unk_ov002_022013ac *)p)->func_ov002_02201498((s32)v); }
static inline s32 func_ov002_022014a4(void *p) { return ((Unk_ov002_022013ac *)p)->func_ov002_022014a4(); }
static inline s32 func_ov002_022014c0(void *a, s32 b, s32 c) { return ((Unk_ov002_022013ac *)a)->func_ov002_022014c0((s32)b, (s32)c); }
static inline BOOL func_ov002_022017a4(void *p) { return ((Unk_ov002_022013ac *)p)->func_ov002_022017a4(); }
static inline BOOL func_ov002_022017b4(void *p) { return ((Unk_ov002_022013ac *)p)->func_ov002_022017b4(); }
static inline void func_ov002_02202310(void *a, s32 b, s32 c, s32 d) { ((Unk_ov002_02204558 *)a)->func_ov002_02202310((s32)b, (s32)c, (const char *)d); }
static inline void func_ov002_022026c4(void *p, s32 a, s32 b, s32 c) { ((Unk_ov002_02204604 *)p)->func_ov002_022026c4((s32)a, (s32)b, (s32)c); }
static inline s32 func_ov002_022026f4(void *p, s32 a, s32 b) { return ((Unk_ov002_02204604 *)p)->func_ov002_022026f4((s32)a, (s32)b); }
static inline s32 func_ov002_02202708(void *p) { return ((Unk_ov002_02204604 *)p)->func_ov002_02202708(); }
static inline s32 func_ov002_02202710(void *p) { return ((Unk_ov002_02204604 *)p)->func_ov002_02202710(); }
static inline BOOL func_ov002_02202718(void *p) { return ((Unk_ov002_02204604 *)p)->func_ov002_02202718(); }
static inline void func_ov002_022027a4(void *a) { ((Unk_ov002_02204604 *)a)->func_ov002_022027a4(); }
static inline s32 func_ov002_022028a0(void *p) { return ((Unk_ov002_02202d98 *)p)->func_ov002_022028a0(); }
static inline s32 func_ov002_022028c8(void *p) { return ((Unk_ov002_02202d98 *)p)->func_ov002_022028c8(); }
static inline BOOL func_ov002_022028f0(void *p) { return ((Unk_ov002_02202d98 *)p)->func_ov002_022028f0(); }
static inline BOOL func_ov002_022028fc(void *p) { return ((Unk_ov002_02202d98 *)p)->func_ov002_022028fc(); }
static inline BOOL func_ov002_02202928(void *p) { return ((Unk_ov002_02202d98 *)p)->func_ov002_02202928(); }
static inline void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d) { ((Unk_ov002_02202d98 *)p)->func_ov002_022029e8((s32)a, (s32)b, (s32)c, (s32)d); }
static inline void func_ov002_02202a18(void *p, s32 a, s32 b, s32 c) { ((Unk_ov002_02202d98 *)p)->func_ov002_02202a18((s32)a, (s32)b, (s32)c); }
static inline void func_ov002_02202a40(void *p, s32 a, s32 b) { ((Unk_ov002_02202d98 *)p)->func_ov002_02202a40((s32)a, (s32)b); }
static inline void func_ov002_02202b68(void *p) { ((Unk_ov002_0220464c *)p)->func_ov002_02202b68(); }
static inline void func_ov002_02202d00(void *p, s32 a) { ((Unk_ov002_0220464c *)p)->func_ov002_02202d00((s32)a); }
static inline BOOL func_ov002_02204234(void *p, s32 a) { return ((Unk_ov002_022040ec *)p)->func_ov002_02204234((s32)a); }
static inline void func_ov092_02291ce4(s32 a, s32 b, s32 c) { ((Unk_ov092_02291ec8 *)a)->func_ov092_02291ce4((s32)b, (s32)c); }
static inline void func_ov094_022941f8(void *a, s32 b) { ((Unk_ov094_02294bd4 *)a)->func_ov094_022941f8((u32)b); }
static inline void func_ov094_022943b0(void *p) { ((Unk_ov094_02294bd4 *)p)->func_ov094_022943b0(); }
static inline void func_ov094_022943f8(void *p) { ((Unk_ov094_02294bd4 *)p)->func_ov094_022943f8(); }
static inline void func_ov094_0229462c(void *a) { ((Unk_ov094_02294bd4 *)a)->func_ov094_0229462c(); }
static inline void func_ov094_02294644(void *a, s32 b) { ((Unk_ov094_02294bd4 *)a)->func_ov094_02294644((s32)b); }
static inline void func_ov110_02294d68(S *s, u32 m) { ((Unk_ov110_02297778 *)s)->func_ov110_02294d68((u32)m); }
static inline void func_ov110_02294d78(S *s, u32 v) { ((Unk_ov110_02297778 *)s)->func_ov110_02294d78((u32)v); }
static inline BOOL func_ov110_02294d88(S *s, u32 m) { return ((Unk_ov110_02297778 *)s)->func_ov110_02294d88((u32)m); }
static inline BOOL func_ov110_02294d9c(S *s) { return ((Unk_ov110_02297778 *)s)->func_ov110_02294d9c(); }
static inline void func_ov110_02294e78(S *s, u32 v) { ((Unk_ov110_02297778 *)s)->func_ov110_02294e78((s32)v); }
static inline void func_ov110_02294fb8(S *s, s32 a) { ((Unk_ov110_02297778 *)s)->func_ov110_02294fb8((s32)a); }
static inline void func_ov110_02295034(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02295034(); }
static inline BOOL func_ov110_02295060(S *s, u32 a, u32 b) { return ((Unk_ov110_02297778 *)s)->func_ov110_02295060((void *)a, (s32)b); }
static inline void func_ov110_022953b4(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022953b4(); }
static inline s32 func_ov110_022953e0(S *s) { return ((Unk_ov110_02297778 *)s)->func_ov110_022953e0(); }
static inline void func_ov110_02295404(S *s, u32 v) { ((Unk_ov110_02297778 *)s)->func_ov110_02295404((u8)v); }
static inline void func_ov110_0229544c(S *s, u32 v) { ((Unk_ov110_02297778 *)s)->func_ov110_0229544c((u8)v); }
static inline void func_ov110_02295488(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02295488(); }
static inline void func_ov110_022954a8(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022954a8(); }
static inline void func_ov110_022954c8(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022954c8(); }
static inline void func_ov110_022954e8(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022954e8(); }
static inline void func_ov110_02295508(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02295508(); }
static inline void func_ov110_0229553c(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_0229553c(); }
static inline void func_ov110_02296370(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296370(); }
static inline void func_ov110_022963b4(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022963b4(); }
static inline void func_ov110_022963e8(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022963e8(); }
static inline void func_ov110_02296408(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296408(); }
static inline void func_ov110_0229644c(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_0229644c(); }
static inline void func_ov110_02296488(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296488(); }
static inline void func_ov110_022964c0(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022964c0(); }
static inline void func_ov110_02296510(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296510(); }
static inline void func_ov110_02296558(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296558(); }
static inline void func_ov110_022965ac(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022965ac(); }
static inline void func_ov110_022965d8(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022965d8(); }
static inline void func_ov110_02296608(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296608(); }
static inline void func_ov110_02296630(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296630(); }
static inline void func_ov110_02296664(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296664(); }
static inline void func_ov110_022966b4(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022966b4(); }
static inline void func_ov110_02296700(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296700(); }
static inline void func_ov110_02296780(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296780(); }
static inline void func_ov110_02296874(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296874(); }
static inline void func_ov110_022969ec(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022969ec(); }
static inline void func_ov110_02296b1c(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296b1c(); }
static inline void func_ov110_02296bb8(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296bb8(); }
static inline void func_ov110_02296c0c(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296c0c(); }
static inline void func_ov110_02296f70(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296f70(); }
static inline void func_ov110_02296fbc(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02296fbc(); }
static inline void func_ov110_02297024(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02297024(); }
static inline void func_ov110_02297094(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_02297094(); }
static inline void func_ov110_022970cc(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_022970cc(); }
static inline void func_ov110_0229714c(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_0229714c(); }
static inline BOOL func_ov110_0229726c(S *s) { return ((Unk_ov110_02297778 *)s)->func_ov110_0229726c(); }
static inline void func_ov110_0229728c(S *s) { ((Unk_ov110_02297778 *)s)->func_ov110_0229728c(); }

extern "C" {
void func_ov110_02295588(S *s);
void func_ov110_022955e8(S *s);
void func_ov110_02295638(S *s);
void func_ov110_022956a0(S *s);
s32 func_ov110_022956c4(S *s);
s32 func_ov110_022956d4(S *s);
void func_ov110_02295718(S *s);
void func_ov110_02295770(S *s, u32 a);
void func_ov110_022957a8(S *s, u32 a);
void func_ov110_022957d4(S *s, u32 a);
void func_ov110_0229584c(S *s);
void func_ov110_02295874(S *s);
void func_ov110_022958a0(S *s);
void func_ov110_022958cc(S *s);
void func_ov110_02295904(S *s);
void func_ov110_02295968(S *s);
BOOL func_ov110_02295a14(S *s);
void func_ov110_02295a58(S *s, u32 a);
void func_ov110_02295a94(S *s);
void func_ov110_02295ab8(S *s, u32 a);
void func_ov110_02295b14(S *s);
u32 func_ov110_02295b38(S *s, u32 a);
u32 func_ov110_02295b78(S *s, u32 a);
BOOL func_ov110_02295bbc(S *s, u32 a);
BOOL func_ov110_02295bfc(S *s, u32 a);
void func_ov110_02295c3c(S *s);
BOOL func_ov110_02295c78(S *s, u32 a);
s32 func_ov110_02295e48(S *s, u32 a);
u32 func_ov110_02295e98(S *s, u32 a);
u32 func_ov110_02295ee8(S *s, u32 a);
u32 func_ov110_02295efc(S *s, u32 a);
void func_ov110_02295f18(S *s, u32 a, u32 b, u32 c);
BOOL func_ov110_02295f68(S *s, u32 a);
u32 func_ov110_02295fc4(S *s, u32 a, u32 b, s32 c);
u32 func_ov110_02296040(S *s, u32 a);
u32 func_ov110_02296050(S *s, u32 a);
BOOL func_ov110_02296088(S *s, u32 a);
BOOL func_ov110_02296094(S *s, u32 a);
BOOL func_ov110_022960a4(S *s, u32 a);
void func_ov110_022960b0(S *s);
u32 func_ov110_022960c0(S *s);
u32 func_ov110_022960e8(S *s);
void func_ov110_02296108(S *s, u32 a, u32 b);
void func_ov110_02296140(S *s, u32 a, s32 b);
void func_ov110_02296184(S *s, u32 a, u32 b);
void func_ov110_022961e8(S *s, u32 a);
void func_ov110_02296230(S *s, u32 a);
void func_ov110_02296278(S *s, u32 a);
void func_ov110_02296300(S *s);
void func_ov110_02296320(S *s);
void func_ov110_02296354(S *s);
void func_ov110_02296c8c(S *s);
void func_ov110_02296c9c(S *s);
void func_ov110_02296d70(S *s);
void func_ov110_02296d84();
void func_ov110_02296db8(S *s);
void func_ov110_02296df0(S *s);
void func_ov110_02296e28(S *s);
void func_ov110_02296e30(S *s);
void func_ov110_02296e4c(S *s);
void func_ov110_02296e84(S *s);
}

struct Unk_ov110_SceneEntry {
    Unk_ov110_02297778 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov110_02297778 *func_ov110_022975b0();

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov110_SceneEntry data_ov110_02297690 = {func_ov110_022975b0, 0x9d, 0xa1};

static inline BOOL Unk_ov110_02296b1c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

static inline BOOL R1(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" Unk_ov110_02297778 *func_ov110_022975b0() { return new Unk_ov110_02297778(); }

BOOL Unk_ov110_02297778::vfunc_00() {
    func_ov110_02296e84((S *)this);
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov110_02297778::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent())->func_ov092_02291c5c();
    func_ov110_02296e4c((S *)this);
    return TRUE;
}

BOOL Unk_ov110_02297778::onDraw() {
    if (!func_ov110_02294d88(1)) {
        return TRUE;
    }
    unk_21a0.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        unk_2278.func_ov002_02202844();
    }
    func_ov110_022958cc((S *)this);
    if (func_ov110_02294d88(0x80)) {
        func_ov094_0229324c(&unk_138, 0, unk_9c);
    }
    if (func_ov110_02294d88(2)) {
        func_ov094_022932d0(&unk_138, 0, unk_98);
        unk_b98.func_ov094_022941a0(0, unk_98);
        func_ov094_0229277c(&unk_bc0, unk_98);
    }
    return TRUE;
}

BOOL Unk_ov110_02297778::vfunc_4c() {
    static Unk_ov110_02297778_Fn tbl[7] = {
        &Unk_ov110_02297778::func_ov110_022971d8,
        &Unk_ov110_02297778::func_ov110_0229714c,
        &Unk_ov110_02297778::func_ov110_022970cc,
        &Unk_ov110_02297778::func_ov110_02297094,
        &Unk_ov110_02297778::func_ov110_02297024,
        &Unk_ov110_02297778::func_ov110_02296fbc,
        &Unk_ov110_02297778::func_ov110_02296f70};
    func_ov110_02296df0((S *)this);
    (this->*tbl[unk_8c])();
    func_ov110_02296db8((S *)this);
    return TRUE;
}

void Unk_ov110_02297778::func_ov110_0229728c() {
    static Unk_ov110_02297778_Fn tbl[22] = {
        &Unk_ov110_02297778::func_ov110_02296c0c, &Unk_ov110_02297778::func_ov110_02296bb8,
        &Unk_ov110_02297778::func_ov110_02296b1c, &Unk_ov110_02297778::func_ov110_022969ec,
        &Unk_ov110_02297778::func_ov110_02296874, &Unk_ov110_02297778::func_ov110_02296780,
        &Unk_ov110_02297778::func_ov110_02296700, &Unk_ov110_02297778::func_ov110_022966b4,
        &Unk_ov110_02297778::func_ov110_02296664, &Unk_ov110_02297778::func_ov110_02296630,
        &Unk_ov110_02297778::func_ov110_02296608, &Unk_ov110_02297778::func_ov110_022965d8,
        &Unk_ov110_02297778::func_ov110_022965ac, &Unk_ov110_02297778::func_ov110_02296558,
        &Unk_ov110_02297778::func_ov110_02296510, &Unk_ov110_02297778::func_ov110_022964c0,
        &Unk_ov110_02297778::func_ov110_02296488, &Unk_ov110_02297778::func_ov110_0229644c,
        &Unk_ov110_02297778::func_ov110_02296408, &Unk_ov110_02297778::func_ov110_022963e8,
        &Unk_ov110_02297778::func_ov110_022963b4, &Unk_ov110_02297778::func_ov110_02296370};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov110_02297778::func_ov110_0229726c() {
    if (func_0206e61c() && func_0206ed50() == 0x20) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov110_02297778::vfunc_50() {
    func_0206e63c();
    if (func_ov110_0229726c()) {
        if (unk_8d == 0 || unk_8d == 1 || unk_8d == 4) {
            func_ov110_022956a0((S *)this);
            unk_21a0.func_ov002_022006e4(0);
            func_ov110_02294e78(0);
            return TRUE;
        }
    }
    func_ov110_02296e30((S *)this);
    func_ov110_0229728c();
    func_ov110_02296e28((S *)this);
    return TRUE;
}

BOOL Unk_ov110_02297778::vfunc_54() { return TRUE; }

BOOL Unk_ov110_02297778::vfunc_58() { return TRUE; }

BOOL Unk_ov110_02297778::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov110_02297778::func_ov110_022971d8() {
    func_ov110_02296d84();
    func_ov110_02296d70((S *)this);
    func_ov002_02200a50(1);
}

void Unk_ov110_02297778::func_ov110_0229714c() {
    S *s = (S *)this;
    ::func_ov110_02296c8c(s);
    ::func_ov094_022937a0(s->unk_138);
    ::func_ov094_02293764(s->unk_138, s->unk_b0);
    ::func_ov110_02295c3c(s);
    ::func_ov094_02293d2c(s->unk_b98);
    ::func_ov094_022941f8(s->unk_b98, 0xf);
    ::func_ov002_022008e0(s, 8, 0, 0, 0x30);
    ::Gfx2d_ShowLayer(6);
    ::func_ov002_02200840(s, 6, 0, 0);
    ::func_ov002_02200a50(s, 2);
    ::func_ov110_02294d78(s, 1);
    ::func_ov110_02294d78(s, 2);
    s->unk_98 = ::func_ov002_02200920(s);
}

void Unk_ov110_02297778::func_ov110_022970cc() {
    S *s = (S *)this;
    s32 v = ::func_ov002_02200908(s, 0);
    ::func_ov002_02200840(s, 6, 0, 0);
    s->unk_98 = ::func_ov002_02200920(s);
    if (v) {
        ::func_ov110_02296c9c(s);
        ::func_ov002_022008e0(s, 2, 0, 1, 0x30);
        ::func_ov002_02200850(s, 0x80);
        ::func_ov110_02294d78(s, 0x80);
        ::Gfx2d_ShowLayer(4);
        ::func_ov002_02200840(s, 4, 0, 0);
        s->unk_9c = ::func_ov002_02200920(s);
        ::func_ov002_02200a50(s, 3);
    }
}

void Unk_ov110_02297778::func_ov110_02297094() {
    S *s = (S *)this;
    if (::func_ov002_02200908(s, 0)) {
        ::func_ov002_02200a60(s, 2);
        ::func_ov110_02296300(s);
    }
    ::func_ov002_02200840(s, 4, 0, 0);
    s->unk_9c = ::func_ov002_02200920(s);
}

void Unk_ov110_02297778::func_ov110_02297024() {
    S *s = (S *)this;
    if (::func_ov110_02294d9c(s)) {
        ::func_ov002_022006e4(s->unk_21a0, 1);
        ::func_ov110_022956a0(s);
        ::func_ov092_02291ce4(::ProcBase_GetParent(s), 0x44, 1);
        ::func_ov002_022008c4(s, 2, 4, 1, 0x30);
        ::func_ov002_02200850(s, 0x80);
        ::func_ov002_02200840(s, 4, 0, 0);
        s->unk_9c = ::func_ov002_02200920(s);
        ::func_ov002_02200a50(s, 5);
    }
}

void Unk_ov110_02297778::func_ov110_02296fbc() {
    S *s = (S *)this;
    if (::func_ov002_022008fc(s, 0)) {
        ::Gfx2d_ResetLayer(4);
        ::func_ov110_02294d68(s, 0x80);
        ::func_ov002_022008c4(s, 8, 0, 0, 0x30);
        ::func_ov002_02200840(s, 6, 0, 0);
        ::func_ov002_02200a50(s, 6);
        ::func_ov110_02296f70(s);
    } else {
        ::func_ov002_02200840(s, 4, 0, 0);
        s->unk_9c = ::func_ov002_02200920(s);
    }
}

void Unk_ov110_02297778::func_ov110_02296f70() {
    S *s = (S *)this;
    if (::func_ov002_022008fc(s, 0)) {
        ::Gfx2d_ResetLayer(6);
        ::func_ov002_02200a60(s, 5);
        ::func_ov110_02294d68(s, 1);
        ::func_ov110_02294d68(s, 2);
    } else {
        ::func_ov002_02200840(s, 6, 0, 0);
    }
    s->unk_98 = ::func_ov002_02200920(s);
}

extern "C" void func_ov110_02296e84(S *s) {
    s32 i;
    s->unk_94 = 0;
    func_ov094_022939c0(s->unk_138, 1);
    func_ov094_02294644(s->unk_b98, 2);
    func_ov094_02292d30(s->unk_bc0, 6);
    s->unk_f3 = 0x1f;
    func_ov002_022027a4(s->unk_2260);
    s->unk_f1 = 0;
    s->unk_f5 = 0;
    func_ov002_02202310(s->unk_22dc, 3, 1, 0);
    s->unk_fb = 0;
    switch (func_0206ed50()) {
    case 0x1d:
    case 0x1e:
        for (i = 0; i < 15; i++) {
            s->unk_b0[i] = 0xfff1;
        }
        func_ov110_02294d78(s, 0x200);
        break;
    case 0x1f:
        MI_CpuCopy8(data_021ed210, s->unk_b0, 0x1e);
        break;
    case 0x20:
        MI_CpuCopy8(data_021ed22e, s->unk_b0, 0x1e);
        break;
    }
    MI_CpuCopy8(s->unk_b0, s->unk_ce, 0x1e);
    func_0206ec04();
}

extern "C" void func_ov110_02296e4c(S *s) {
    func_ov110_022960b0(s);
    func_ov094_02292a80(s->unk_bc0);
    func_ov094_02293998(s->unk_138);
    func_ov002_02201b04(s->unk_22dc);
    func_ov110_02295034(s);
}

extern "C" void func_ov110_02296e30(S *s) {
    func_ov110_02296df0(s);
    ((Unk_ov110_02295588_Vt *)s->unk_2278)->vfunc_0c();
}

extern "C" void func_ov110_02296e28(S *s) {
    func_ov110_02296db8(s);
}

extern "C" void func_ov110_02296df0(S *s) {
    func_ov110_022960b0(s);
    func_ov094_02292acc(s->unk_bc0);
    func_ov094_022939a0(s->unk_138);
    func_ov094_0229462c(s->unk_b98);
    func_ov110_02295034(s);
}

extern "C" void func_ov110_02296db8(S *s) {
    func_ov002_02201b58(s->unk_22dc);
    func_ov094_02292aa4(s->unk_bc0);
    if (func_ov002_0220071c(s->unk_21a0)) {
        func_ov110_02295968(s);
    }
}

void func_ov110_02296d84() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

extern "C" void func_ov110_02296d70(S *s) {
    func_ov094_02292d1c(s->unk_bc0, 0);
}

extern "C" void func_ov110_02296c9c(S *s) {
    s32 h = gCurrentHeap;
    Gfx2d_LoadScreenFile("menu/inventory/b_itm_bg_tra2.bsc", h, 4);
    Gfx2d_LoadCharFile("menu/inventory/b_itm_sell.bch", h, 4, 0x1b9, 0x1b9, 0x238);
    s32 v = func_0206ed50();
    const char *a = NULL;
    const char *b = NULL;
    switch (v) {
    case 0x1d:
        a = "menu/inventory/ten6.bpl";
        b = "menu/inventory/tanu.bch";
        break;
    case 0x1e:
        a = "menu/inventory/ten7.bpl";
        b = "menu/inventory/kinu.bch";
        break;
    case 0x1f:
        a = "menu/inventory/ten8.bpl";
        b = "menu/inventory/lost.bch";
        break;
    case 0x20:
        a = "menu/inventory/ten9.bpl";
        b = "menu/inventory/garb.bch";
        break;
    }
    if (a != NULL) {
        Gfx2d_LoadPaletteFile(a, h, 4, 3, 3, 5);
    }
    if (b != NULL) {
        Gfx2d_LoadCharFile(b, h, 4, 0x208, 0x208, 0x238);
    }
    func_ov110_02294fb8(s, 0);
}

extern "C" void func_ov110_02296c8c(S *s) {
    func_ov094_02292ae0(s->unk_bc0);
}

void Unk_ov110_02297778::func_ov110_02296c0c() {
    S *s = (S *)this;
    if (::func_ov002_02200a14(s, 1)) {
        ::func_ov110_02296320(s);
    } else {
        if (Unk_ov110_02296b1c_Both()) {
            s32 x = gTouchCurX;
            s32 y = gTouchCurY;
            s32 r = ::func_ov110_02295fc4(s, x, y, 1);
            if (r != 0x1f) {
                ::func_ov110_02296278(s, r);
            } else if (x >= 0xc8 && x <= 0xf8 && y >= 0x60 && y <= 0x70) {
                ::func_ov110_02294e78(s, 1);
            }
        }
    }
}

void Unk_ov110_02297778::func_ov110_02296bb8() {
    S *s = (S *)this;
    if (gTouchHeld == 0) {
        ::func_ov002_02200a58(s, 0);
        ::func_ov002_022006a4(s->unk_21a0, 0x3c);
    } else if (::func_ov110_02294d88(s, 4) && ::func_ov110_02295a14(s)) {
        ::func_ov110_02296230(s, s->unk_f2);
    } else {
        ::func_ov002_022006c0(s->unk_21a0);
    }
}

void Unk_ov110_02297778::func_ov110_02296b1c() {
    S *s = (S *)this;
    if (::func_ov110_0229726c(s)) {
        ::func_ov110_022953b4(s);
    } else if (::func_ov002_02200a14(s, 1)) {
        ::func_ov110_022953b4(s);
    } else {
        if (Unk_ov110_02296b1c_Both()) {
            s32 t = ::func_ov002_022014c0(s->unk_22dc, gTouchCurX, gTouchCurY);
            if (t >= 0) {
                ::func_ov002_02201aa0(s->unk_22dc, t, 1);
                s->unk_f9 = s->unk_25d5[t];
                ::func_ov002_02200a58(s, 0x12);
            }
        }
    }
}

void Unk_ov110_02297778::func_ov110_022969ec() {
    S *s = (S *)this;
    if (::func_ov110_0229726c(s)) {
        ::func_ov110_022957a8(s, s->unk_f4);
        ::func_ov110_022956a0(s);
        ::func_ov002_022006e4(s->unk_21a0, 0);
        ::func_ov110_02294e78(s, 0);
    } else {
        ::func_ov110_022958a0(s);
        ::func_ov110_02295a94(s);
        s32 x = s->unk_ac + 8;
        s32 t = ::func_ov110_02295fc4(s, s->unk_a8 + 8, x, 0);
        if (::func_ov110_02294d88(s, 0x200)) {
            if ((::func_ov110_02296094(s, t) && ::func_ov110_022960a4(s, s->unk_f4))
                || (::func_ov110_022960a4(s, t) && ::func_ov110_02296094(s, s->unk_f4))) {
                if (::func_ov110_02295b78(s, t) != 0xfff1) {
                    t = 0x1f;
                }
            }
        }
        if (t != 0x1f) {
            if (gTouchHeld == 0) {
                if (::func_ov110_02295bfc(s, t)) {
                    ::func_ov110_02296140(s, s->unk_f4, x);
                } else {
                    s32 r = ::func_ov110_02295f68(s, t);
                    if (r == 0) {
                        ::func_ov110_02296140(s, s->unk_f4, x);
                    } else {
                        ::func_ov094_02292398();
                        ::func_ov110_02296300(s);
                    }
                }
            } else {
                ::func_ov110_02295a58(s, t);
            }
        } else if (gTouchHeld == 0) {
            ::func_ov110_02296140(s, s->unk_f4, x);
        }
    }
}

void Unk_ov110_02297778::func_ov110_02296874() {
    S *s = (S *)this;
    if (::func_ov002_022009d4(s)) {
        ::func_ov110_02296354(s);
        ::func_ov002_022006e4(s->unk_21a0, 1);
    } else {
        s32 v = ::func_ov002_022009c8(s);
        if (::func_ov110_02295060(s, v, 0)) {
            ::func_ov110_02295904(s);
            ::func_ov110_02295638(s);
            ::func_ov002_022006e4(s->unk_21a0, 0);
        } else {
            if (::func_ov110_02295bfc(s, s->unk_f5) != 0) goto tail;
            {
                u32 k = gPad[1];
                if (k & 1) {
                    if (::func_ov110_022960a4(s, s->unk_f5) || ::func_ov110_02296094(s, s->unk_f5)) {
                        if (!::func_ov110_02295bbc(s, s->unk_f5)) {
                            ::func_ov110_02295488(s);
                        }
                    } else if (::func_ov110_02296088(s, s->unk_f5)) {
                        ::func_ov110_022954c8(s);
                    }
                } else if (k & 0x800) {
                    if (::func_ov110_022960a4(s, s->unk_f5) || ::func_ov110_02296094(s, s->unk_f5)) {
                        if (!::func_ov110_02295bbc(s, s->unk_f5)) {
                            s32 r = ::func_ov110_022960a4(s, s->unk_f5) ? ::func_ov110_022960c0(s) : ::func_ov110_022960e8(s);
                            if (r != 0x1f) {
                                ::func_ov110_02296108(s, s->unk_f5, r);
                                ::func_ov002_022006e4(s->unk_21a0, 1);
                            }
                        }
                    }
                } else {
                    goto tail;
                }
            }
            return;
tail:
            {
                u32 k = gPad[1];
                if ((k & 8) || (k & 2)) {
                    ::func_ov110_022956a0(s);
                    ::func_ov002_022006e4(s->unk_21a0, 0);
                    ::func_ov110_02294e78(s, 1);
                } else {
                    ::func_ov002_022006c0(s->unk_21a0);
                }
            }
        }
    }
}

void Unk_ov110_02297778::func_ov110_02296780() {
    S *s = (S *)this;
    if (::func_ov110_0229726c(s)) {
        ::func_ov110_022957a8(s, s->unk_f4);
        ::func_ov110_022956a0(s);
        ::func_ov002_022006e4(s->unk_21a0, 0);
        ::func_ov110_02294e78(s, 0);
    } else if (::func_ov110_02295060(s, ::func_ov002_022009c8(s), 1)) {
        ::func_ov110_02295904(s);
        ::func_ov110_02295638(s);
        ::func_ov002_022006e4(s->unk_21a0, 0);
    } else {
        u32 k = gPad[1];
        if ((k & 1) != 0) {
            if (::func_ov110_022960a4(s, s->unk_f5) || ::func_ov110_02296094(s, s->unk_f5)) {
                if (!::func_ov110_02295bfc(s, s->unk_f5)) {
                    if (::func_ov110_02295bbc(s, s->unk_f5)) {
                        ::func_ov110_0229544c(s, s->unk_f5);
                    } else {
                        ::func_ov110_02295404(s, s->unk_f5);
                    }
                }
            }
        } else if ((k & 2) != 0) {
            ::func_ov110_0229544c(s, s->unk_f4);
        } else {
            ::func_ov110_02295874(s);
            ::func_ov002_022006c0(s->unk_21a0);
        }
    }
}

void Unk_ov110_02297778::func_ov110_02296700() {
    S *s = (S *)this;
    if (::func_ov002_022009d4(s) || ::func_ov110_0229726c(s)) {
        ::func_ov110_022953b4(s);
    } else if (::func_ov002_022019d0(s->unk_22dc, ::func_ov002_022009c8(s), &s->unk_fa, 0)) {
        ::func_ov110_022955e8(s);
    } else {
        u32 k = gPad[1];
        if ((k & 1) != 0) {
            ::func_ov002_02202b68(s->unk_2278);
            ::func_ov002_02200a58(s, 7);
        } else if ((k & 2) != 0) {
            ::func_ov110_02295588(s);
        }
    }
}

void Unk_ov110_02297778::func_ov110_022966b4() {
    S *s = (S *)this;
    if (::func_0208d4fc(s->unk_2278)) {
        ::func_ov002_02201aa0(s->unk_22dc, s->unk_fa, 1);
        s->unk_f9 = *(u8 *)((u8 *)s + s->unk_fa + 0x25d5);
        ::func_ov002_02200a58(s, 0x12);
    }
}

void Unk_ov110_02297778::func_ov110_02296664() {
    S *s = (S *)this;
    if (!::func_ov002_022028f0(s->unk_2278)) {
        ::func_ov002_02200a58(s, s->unk_f8);
        if ((u8)(s->unk_f8 + 0xfc) <= 1) {
            ::func_ov110_02295ab8(s, s->unk_f5);
        }
        ::func_ov110_0229728c(s);
    }
    ::func_ov110_02295874(s);
}

void Unk_ov110_02297778::func_ov110_02296630() {
    S *s = (S *)this;
    if (::func_0208d4fc(s->unk_2278)) {
        u32 t = s->unk_f5;
        if (t == 0x1e) {
            ::func_ov110_02294e78(s, 1);
        } else {
            ::func_ov110_022954a8(s);
        }
    }
}

void Unk_ov110_02297778::func_ov110_02296608() {
    S *s = (S *)this;
    if (::func_0208d4fc(s->unk_2278)) {
        ::func_ov110_022954e8(s);
        ::func_ov002_02200a58(s, 4);
    }
}

void Unk_ov110_02297778::func_ov110_022965d8() {
    S *s = (S *)this;
    if (::func_ov002_02202928(s->unk_2278)) {
        ::func_ov110_022961e8(s, s->unk_f5);
        ::func_ov002_02200a58(s, 0xc);
    }
}

void Unk_ov110_02297778::func_ov110_022965ac() {
    S *s = (S *)this;
    if (::func_0208d4fc(s->unk_2278)) {
        ::func_ov002_02200a58(s, s->unk_f8);
    }
    ::func_ov110_02295874(s);
}

void Unk_ov110_02297778::func_ov110_02296558() {
    S *s = (S *)this;
    if (!::func_ov002_02202928(s->unk_2278)) {
        u32 a = s->unk_f7;
        if (s->unk_f5 == a) {
            ::func_ov110_02295f68(s, a);
            ::func_ov110_02295904(s);
            ::func_ov002_02200a58(s, 4);
            ::func_ov094_02292398();
        } else {
            ::func_ov110_02296184(s, a, 4);
        }
    } else {
        ::func_ov110_02295874(s);
    }
}

void Unk_ov110_02297778::func_ov110_02296510() {
    S *s = (S *)this;
    if (!::func_ov002_022028fc(s->unk_2278)) {
        ::func_ov110_02295770(s, s->unk_f7);
        ::func_ov110_02294d78(s, 0x40);
        ::func_ov002_02200a58(s, 0xf);
        ::func_ov110_02295904(s);
    } else {
        ::func_ov002_02200a58(s, 4);
    }
}

void Unk_ov110_02297778::func_ov110_022964c0() {
    S *s = (S *)this;
    if (::func_0208d4fc(s->unk_2278)) {
        ::func_ov002_02200a58(s, s->unk_f8);
    }
    if (::func_ov002_02202928(s->unk_2278)) {
        if (::func_ov110_02294d88(s, 0x40)) {
            ::func_ov110_02294d68(s, 0x40);
            ::func_ov094_02292380();
        }
        ::func_ov110_02295874(s);
    }
}

void Unk_ov110_02297778::func_ov110_02296488() {
    S *s = (S *)this;
    if (::func_ov002_02202718(s->unk_2260)) {
        ::func_ov110_022957a8(s, s->unk_f4);
        ::func_ov110_02296300(s);
        ::func_ov094_02292398();
    } else {
        ::func_ov110_0229584c(s);
    }
}

void Unk_ov110_02297778::func_ov110_0229644c() {
    S *s = (S *)this;
    if (::func_ov002_022017b4(s->unk_22dc)) {
        if (::MenuCtrl_IsButtons()) {
            ::func_ov110_0229553c(s);
            ::func_ov002_02200a58(s, 6);
        } else {
            ::func_ov002_02200a58(s, 2);
        }
    }
}

void Unk_ov110_02297778::func_ov110_02296408() {
    S *s = (S *)this;
    if (::func_ov002_02201a28(s->unk_22dc)) {
        ::func_ov002_02202064(s->unk_22dc, 0);
        if (::func_0208d534(s->unk_2278)) {
            ::func_ov110_02295508(s);
        }
        ::func_ov002_02200a58(s, 0x13);
    }
}

void Unk_ov110_02297778::func_ov110_022963e8() {
    S *s = (S *)this;
    if (::func_ov002_022017a4(s->unk_22dc)) {
        ::func_ov110_022953e0(s);
    }
}

void Unk_ov110_02297778::func_ov110_022963b4() {
    S *s = (S *)this;
    if (::func_ov002_02204234((s->unk_25d5 + 7), 1)) {
        ::func_ov002_02200a58(s, s->unk_f8);
        ::func_0208d644(s->unk_2278);
    }
}

void Unk_ov110_02297778::func_ov110_02296370() {
    S *s = (S *)this;
    if (s->unk_fc != 0) {
        s->unk_fc--;
    } else {
        s->unk_8c = 4;
        ::func_ov002_02200a60(s, 1);
        ::func_ov002_022006e4(s->unk_21a0, 0);
        ::func_ov110_022956a0(s);
    }
}

extern "C" void func_ov110_02296354(S *s) {
    func_ov110_022956a0(s);
    func_ov110_02295b14(s);
    func_ov002_02200a58(s, 0);
}

extern "C" void func_ov110_02296320(S *s) {
    s->unk_f3 = 0x1f;
    func_ov110_02295718(s);
    func_ov002_02200980(s);
    func_ov110_02295904(s);
    func_ov002_02200a58(s, 4);
    func_ov110_02295ab8(s, s->unk_f5);
}

extern "C" void func_ov110_02296300(S *s) {
    if (MenuCtrl_IsTouch()) {
        func_ov110_02296354(s);
    } else {
        func_ov110_02296320(s);
    }
}

extern "C" void func_ov110_02296278(S *s, u32 a) {
    u32 r6, r7;
    s->unk_f2 = a;
    func_ov002_02200a58(s, 1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    s->unk_a0 = func_ov110_02295e98(s, s->unk_f2) - r6;
    s->unk_a4 = func_ov110_02295e48(s, s->unk_f2) - r7;
    s->unk_f3 = a;
    func_ov002_022006b8(s->unk_21a0);
    if (func_ov110_02295bfc(s, a)) {
        func_ov110_02294d68(s, 4);
    } else {
        func_ov110_02294d78(s, 4);
        func_ov094_0229238c();
    }
}

extern "C" void func_ov110_02296230(S *s, u32 a) {
    s->unk_f4 = a;
    func_ov002_022006e4(s->unk_21a0, 1);
    func_ov110_022957d4(s, a);
    if (s->unk_f1 == 1) {
        func_ov002_02200a58(s, 3);
    }
    func_ov110_022958a0(s);
    func_ov094_02292380();
}

extern "C" void func_ov110_022961e8(S *s, u32 a) {
    s->unk_f4 = a;
    func_ov002_022006e4(s->unk_21a0, 1);
    func_ov110_022957d4(s, a);
    if (s->unk_f1 == 1) {
        s->unk_f8 = 5;
    }
    func_ov110_02295874(s);
    func_ov094_02292380();
}

extern "C" void func_ov110_02296184(S *s, u32 a, u32 b) {
    s->unk_f4 = a;
    func_ov002_022026f4(s->unk_2260, s->unk_a8, s->unk_ac);
    u32 x = func_ov110_02295e98(s, a);
    u32 y = func_ov110_02295e48(s, a);
    func_ov002_022026c4(s->unk_2260, x, y, b);
    func_ov002_02202718(s->unk_2260);
    func_ov110_0229584c(s);
    func_ov002_02200a58(s, 0x10);
}

extern "C" void func_ov110_02296140(S *s, u32 a, s32 b) {
    u32 r = 0x1f;
    if (b >= 0x6c) {
        if (func_ov110_02296094(s, a)) r = func_ov110_022960e8(s);
    } else {
        if (func_ov110_022960a4(s, a)) r = func_ov110_022960c0(s);
    }
    if (r != 0x1f) a = r;
    func_ov110_02296184(s, a, 4);
}

extern "C" void func_ov110_02296108(S *s, u32 a, u32 b) {
    func_ov110_022957d4(s, a);
    s->unk_a8 = func_ov110_02295e98(s, a);
    s->unk_ac = func_ov110_02295e48(s, a);
    func_ov110_02296184(s, b, 4);
}

extern "C" u32 func_ov110_022960e8(S *s) {
    s32 t = func_02098ffc();
    s32 m = -1;
    if (t == m) return 0x1f;
    return (u8)t;
}

extern "C" u32 func_ov110_022960c0(S *s) {
    s32 i;
    for (i = 0; i < 0xf; i++) {
        if (s->unk_b0[i] == 0xfff1) return (u8)(i + 0xf);
    }
    return 0x1f;
}

extern "C" void func_ov110_022960b0(S *s) {
    func_020b87d0(s->unk_100);
}

extern "C" BOOL func_ov110_022960a4(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

extern "C" BOOL func_ov110_02296094(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return TRUE;
    return FALSE;
}

extern "C" BOOL func_ov110_02296088(S *s, u32 a) {
    if (a == 0x1e) return TRUE;
    return FALSE;
}

extern "C" u32 func_ov110_02296050(S *s, u32 a) {
    if (func_ov110_022960a4(s, a)) return (u8)a;
    if (func_ov110_02296094(s, a)) return func_ov110_02295efc(s, a);
    return 0;
}

extern "C" u32 func_ov110_02296040(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x1f;
}

extern "C" u32 func_ov110_02295fc4(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02293968(s->unk_138);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(s->unk_138, t)) return 0x1f;
        }
        return func_ov110_02296040(s, t);
    }
    t = func_ov094_02293938(s->unk_138, a, b);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(s->unk_138, t)) return 0x1f;
        }
        return func_ov110_02295ee8(s, t);
    }
    return 0x1f;
}

extern "C" BOOL func_ov110_02295f68(S *s, u32 a) {
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        u32 t = func_ov110_02295b78(s, a);
        if (t != 0xfff1) {
            func_ov110_02295f18(s, s->unk_f4, t, func_ov110_02295b38(s, a));
        }
        func_ov110_022957a8(s, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov110_02295f18(S *s, u32 a, u32 b, u32 c) {
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        u32 t = func_ov110_02296050(s, a);
        func_ov094_02293494(s->unk_138, t, b, c);
        func_ov094_02293434(s->unk_138, t);
    }
}

extern "C" u32 func_ov110_02295efc(S *s, u32 a) {
    if (func_ov110_02296094(s, a)) return (u8)a;
    return 0xf;
}

extern "C" u32 func_ov110_02295ee8(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return (u8)a;
    return 0x1f;
}

extern "C" u32 func_ov110_02295e98(S *s, u32 a) {
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_02293624(s->unk_138, func_ov110_02296050(s, a));
    }
    if (func_ov110_02296088(s, a)) return 0xc4;
    return 0;
}

extern "C" s32 func_ov110_02295e48(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_02293610(s->unk_138, func_ov110_02296050(s, a));
    }
    if (func_ov110_02296088(s, a)) {
        return 0x68;
    }
    return 0;
}

extern "C" BOOL func_ov110_02295c78(S *s, u32 a)
{
    volatile u16 v;
    if (func_ov110_02295bbc(s, a)) {
        return FALSE;
    }
    if (func_ov110_02295b38(s, a)) {
        return TRUE;
    }
    u32 t = func_ov110_02295b78(s, a);
    if (func_ov094_02292414(t)) {
        return TRUE;
    }
    v = t;
    switch (func_0206ed50()) {
    case 0x1e: {
        BOOL f = FALSE;
        u16 x = v;
        u16 y = v;
        if (y >= 0x1492 && x <= 0x14fd) f = TRUE;
        if (f) return TRUE;
        if ((x >= 0x11a8 && x <= 0x12a7) || (x >= 0x13c8 && x <= 0x1407) || (x >= 0x13a8 && x <= 0x13c7)
            || (x >= 0x1408 && x <= 0x1428) || (x >= 0x1431 && x <= 0x1470) || (x >= 0x1471 && x <= 0x1491)
            || (x >= 0x1380 && x <= 0x139f)) {
            return FALSE;
        }
        return TRUE;
    }
    case 0x1d: {
        BOOL f = FALSE;
        u16 x = v;
        u16 y = v;
        if (y >= 0x1492 && x <= 0x14fd) f = TRUE;
        if (f) return TRUE;
        if (!Clock_GetWeekday()) {
            BOOL g = FALSE;
            u16 x2 = v;
            u16 y2 = v;
            if (y2 >= 0x1531 && x2 <= 0x153a) g = TRUE;
            if (g) return TRUE;
        }
        return FALSE;
    }
    case 0x1f:
        return TRUE;
    case 0x20:
        if (func_ov094_022924c4(t)) {
            BOOL f = FALSE;
            u16 x = v;
            u16 y = v;
            if (y >= 0x1531 && x <= 0x153a) f = TRUE;
            if (f || (x >= 0x153b && x <= 0x1541) || (x >= 0x154a && x <= 0x1553)) {
                return FALSE;
            }
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" void func_ov110_02295c3c(S *s)
{
    u32 i = 0;
    do {
        if (func_ov110_02295c78(s, i)) {
            func_ov094_02293308(s->unk_138, func_ov110_02296050(s, i));
        }
        i = (u8)(i + 1);
    } while (i <= 0xe);
}

extern "C" BOOL func_ov110_02295bfc(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_0229333c(s->unk_138, func_ov110_02296050(s, a));
    }
    return FALSE;
}

extern "C" BOOL func_ov110_02295bbc(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_0229311c(s->unk_138, func_ov110_02296050(s, a));
    }
    return TRUE;
}

extern "C" u32 func_ov110_02295b78(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_0229352c(s->unk_138, func_ov110_02296050(s, a));
    }
    return 0xfff1;
}

extern "C" u32 func_ov110_02295b38(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_02293504(s->unk_138, func_ov110_02296050(s, a));
    }
    return 0xf1;
}

extern "C" void func_ov110_02295b14(S *s)
{
    func_ov094_022935dc(s->unk_138);
    func_ov094_022943f8(s->unk_b98);
}

extern "C" void func_ov110_02295ab8(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        func_ov094_0229359c(s->unk_138, func_ov110_02296050(s, a));
        func_ov094_022943f8(s->unk_b98);
    } else if (func_ov110_02296088(s, a)) {
        func_ov110_02295b14(s);
    }
}

extern "C" void func_ov110_02295a94(S *s)
{
    func_ov094_0229358c(s->unk_138);
    func_ov094_022943b0(s->unk_b98);
}

extern "C" void func_ov110_02295a58(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        func_ov094_0229357c(s->unk_138, func_ov110_02296050(s, a));
    }
}

extern "C" BOOL func_ov110_02295a14(S *s)
{
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

extern "C" void func_ov110_02295968(S *s)
{
    s32 a = func_ov110_02295e98(s, s->unk_f3) - 0x6d;
    s32 b = func_ov110_02295e48(s, s->unk_f3) - 0x78;
    if (MenuCtrl_IsButtons()) {
        b -= 8;
    }
    if (b < -0x5c) {
        func_02089af8(s->unk_21a0);
        b = func_ov110_02295e48(s, s->unk_f3) - 0x50;
    } else {
        func_02089af0(s->unk_21a0);
    }
    func_02089ad8(s->unk_21a0, a, b);
    if (func_ov110_022960a4(s, s->unk_f3) || func_ov110_02296094(s, s->unk_f3)) {
        u32 t = func_ov110_02296050(s, s->unk_f3);
        func_ov094_02293638(s->unk_138, s->unk_21a0, t);
    }
}

extern "C" void func_ov110_02295904(S *s)
{
    if (func_ov110_022960a4(s, s->unk_f5) || func_ov110_02296094(s, s->unk_f5)) {
        if (func_ov110_02295bbc(s, s->unk_f5)) {
            func_ov002_022006b0(s->unk_21a0);
        } else {
            s->unk_f3 = s->unk_f5;
            func_ov002_022006b8(s->unk_21a0);
        }
    } else {
        func_ov002_022006b0(s->unk_21a0);
    }
}

extern "C" void func_ov110_022958cc(S *s)
{
    if (!func_ov110_02294d88(s, 0x40)) {
        u32 t = s->unk_f1;
        if (t != 0) {
            if (t == 1) {
                func_ov094_0229313c(s->unk_138, s->unk_a8, s->unk_ac);
            }
        }
    }
}

extern "C" void func_ov110_022958a0(S *s)
{
    s->unk_a8 = s->unk_a0 + gTouchCurX;
    s->unk_ac = s->unk_a4 + gTouchCurY;
}

extern "C" void func_ov110_02295874(S *s)
{
    s->unk_a8 = func_ov002_022028c8(s->unk_2278) - 2;
    s->unk_ac = func_ov002_022028a0(s->unk_2278) - 4;
}

extern "C" void func_ov110_0229584c(S *s)
{
    s->unk_a8 = func_ov002_02202710(s->unk_2260);
    s->unk_ac = func_ov002_02202708(s->unk_2260);
}

extern "C" void func_ov110_022957d4(S *s, u32 a)
{
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        u32 t = func_ov110_02296050(s, a);
        s->unk_f1 = 1;
        s->unk_ec = func_ov094_0229352c(s->unk_138, t);
        s->unk_f0 = func_ov094_02293504(s->unk_138, t);
        func_ov094_022934d8(s->unk_138, t);
        func_ov094_0229341c(s->unk_138, s->unk_ec, s->unk_f0);
    }
}

extern "C" void func_ov110_022957a8(S *s, u32 a)
{
    if (s->unk_f1 == 1) {
        func_ov110_02295f18(s, a, s->unk_ec, s->unk_f0);
    }
    s->unk_f1 = 0;
}

extern "C" void func_ov110_02295770(S *s, u32 a)
{
    if (s->unk_f1 == 1) {
        u32 h = s->unk_ec;
        u32 b = s->unk_f0;
        func_ov110_022957d4(s, a);
        func_ov110_02295f18(s, a, h, b);
    }
}

extern "C" void func_ov110_02295718(S *s)
{
    s32 a = func_ov110_022956d4(s);
    s32 b = func_ov110_022956c4(s);
    func_ov002_02202a40(s->unk_2278, a, b);
    if (func_ov110_02296088(s, s->unk_f5)) {
        func_ov002_02202d00(s->unk_2278, 7);
    } else {
        func_ov002_02202d00(s->unk_2278, 1);
    }
    func_ov110_022954e8(s);
}

extern "C" s32 func_ov110_022956d4(S *s)
{
    s32 r = func_ov110_02295e98(s, s->unk_f5);
    if (func_ov110_02294d88(s, 0x20)) {
        r += 0x100;
    } else if (func_ov110_02294d88(s, 0x10)) {
        r -= 0x100;
    }
    r += 8;
    return r;
}

extern "C" s32 func_ov110_022956c4(S *s)
{
    return func_ov110_02295e48(s, s->unk_f5);
}

extern "C" void func_ov110_022956a0(S *s)
{
    func_ov002_02202d00(s->unk_2278, 0);
    ((Unk_ov110_02295588_Vt *)s->unk_2278)->vfunc_0c();
}

extern "C" void func_ov110_02295638(S *s)
{
    s32 a = func_ov110_022956d4(s);
    s32 b = func_ov110_022956c4(s);
    func_ov002_022029e8(s->unk_2278, a, b, 3, 1);
    s->unk_f8 = s->unk_8d;
    func_ov002_02200a58(s, 8);
    if (func_ov110_02294d88(s, 0x100)) {
        ((Unk_ov110_02295588_Vt *)s->unk_2278)->vfunc_0c();
        func_ov110_02294d68(s, 0x100);
    }
}

extern "C" void func_ov110_022955e8(S *s)
{
    s32 a = func_ov002_022014a4(s->unk_22dc);
    s32 b = func_ov002_02201498(s->unk_22dc, s->unk_fa);
    func_ov002_02202a18(s->unk_2278, a, b, 2);
    s->unk_f8 = s->unk_8d;
    func_ov002_02200a58(s, 8);
}

extern "C" void func_ov110_02295588(S *s)
{
    s->unk_f9 = 1;
    s->unk_fa = func_ov002_02201a70(s->unk_22dc);
    s32 a = func_ov002_022014a4(s->unk_22dc);
    s32 b = func_ov002_02201498(s->unk_22dc, s->unk_fa);
    func_ov002_02202a40(s->unk_2278, a, b);
    func_0208d538(s->unk_2278, 8);
    func_ov002_02200a58(s, 0x12);
}

void Unk_ov110_02297778::func_ov110_0229553c() {
    unk_fa = 0;
    s32 a = func_ov002_022014a4(&unk_22dc);
    s32 b = func_ov002_02201498(&unk_22dc, unk_fa);
    unk_2278.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_2278)->func_ov002_02202d00(7);
}

void Unk_ov110_02297778::func_ov110_02295508() {
    s32 a = func_ov110_022956d4((S *)this);
    s32 b = func_ov110_022956c4((S *)this);
    unk_2278.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_2278)->func_ov002_02202d00(1);
}

void Unk_ov110_02297778::func_ov110_022954e8() {
    unk_2278.func_ov002_02202a78();
    unk_2278.vfunc_0c();
}

void Unk_ov110_02297778::func_ov110_022954c8() {
    ((Unk_ov002_0220464c *)&unk_2278)->func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov110_02297778::func_ov110_022954a8() {
    unk_2278.func_ov002_02202af0();
    func_ov002_02200a58(0xa);
}

void Unk_ov110_02297778::func_ov110_02295488() {
    ((Unk_ov002_0220464c *)&unk_2278)->func_ov002_02202d00(4);
    func_ov002_02200a58(0xb);
}

void Unk_ov110_02297778::func_ov110_0229544c(u8 v) {
    unk_21a0.func_ov002_022006e4(1);
    unk_f7 = v;
    ((Unk_ov002_0220464c *)&unk_2278)->func_ov002_02202d00(5);
    func_ov002_02200a58(0xd);
}

void Unk_ov110_02297778::func_ov110_02295404(u8 v) {
    unk_21a0.func_ov002_022006e4(1);
    unk_f8 = unk_8d;
    unk_f7 = v;
    ((Unk_ov002_0220464c *)&unk_2278)->func_ov002_02202d00(6);
    func_ov002_02200a58(0xe);
}

s32 Unk_ov110_02297778::func_ov110_022953e0() {
    switch (unk_f9) {
    case 0:
        func_ov110_02295488();
        break;
    case 1:
    default:
        func_ov110_02296300((S *)this);
        break;
    }
}

void Unk_ov110_02297778::func_ov110_022953b4() {
    unk_f9 = 1;
    func_ov110_02295508();
    func_ov002_02202064(&unk_22dc, 0);
    func_ov002_02200a58(0x13);
}

void Unk_ov110_02297778::func_ov110_022952b0(void *pad, s32 mode) {
    s32 r = unk_f5;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    unk_f5 += 4;
                } else {
                    unk_f5 = 0x1e;
                }
                func_ov110_02294d78(0x10);
                return;
            }
            unk_f5--;
            r--;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    unk_f5 -= 4;
                    func_ov110_02294d78(0x20);
                } else {
                    unk_f5 = 0x1e;
                }
                return;
            }
            unk_f5++;
            r++;
        }
    }
    if (func_ov002_0220128c(pad)) {
        if (q > 0) {
            unk_f5 -= 5;
        } else {
            unk_f5 = r + 0x19;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (q < 2) {
            unk_f5 += 5;
        }
    }
}

void Unk_ov110_02297778::func_ov110_022951ac(void *pad, s32 mode) {
    s32 r = unk_f5 - 0xf;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    unk_f5 += 4;
                } else {
                    unk_f5 = 0x1e;
                }
                func_ov110_02294d78(0x10);
                return;
            }
            unk_f5--;
            r--;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    unk_f5 -= 4;
                    func_ov110_02294d78(0x20);
                } else {
                    unk_f5 = 0x1e;
                }
                return;
            }
            unk_f5++;
            r++;
        }
    }
    if (func_ov002_0220128c(pad)) {
        if (q > 0) {
            unk_f5 -= 5;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (q < 2) {
            unk_f5 += 5;
        } else {
            unk_f5 = r;
        }
    }
}

void Unk_ov110_02297778::func_ov110_02295138(void *pad) {
    if (func_ov002_0220125c(pad)) {
        if (func_ov002_0220128c(pad)) {
            unk_f5 = 0x19;
        } else {
            unk_f5 = 0;
        }
        func_ov110_02294d78(0x20);
    } else if (func_ov002_0220126c(pad)) {
        if (func_ov002_0220128c(pad)) {
            unk_f5 = 0x1d;
        } else {
            unk_f5 = 4;
        }
    } else if (func_ov002_0220128c(pad)) {
        unk_f5 = 0x1d;
    }
}

BOOL Unk_ov110_02297778::func_ov110_02295060(void *pad, s32 mode) {
    u8 old = unk_f5;
    func_ov110_02294d68(0x30);
    func_ov110_02294d68(0x100);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov110_022960a4((S *)this, unk_f5)) {
        func_ov110_022952b0(pad, mode);
    } else if (func_ov110_02296094((S *)this, unk_f5)) {
        func_ov110_022951ac(pad, mode);
    } else if (func_ov110_02296088((S *)this, unk_f5)) {
        func_ov110_02295138(pad);
    }
    BOOL a = func_ov110_02296088((S *)this, unk_f5);
    if (a != func_ov110_02296088((S *)this, old)) {
        if (func_ov110_02296088((S *)this, unk_f5)) {
            ((Unk_ov002_0220464c *)&unk_2278)->func_ov002_02202ca0();
        } else {
            ((Unk_ov002_0220464c *)&unk_2278)->func_ov002_02202c40();
        }
        func_ov110_02294d78(0x100);
    }
    if (old != unk_f5) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov110_02297778::func_ov110_02295034() {
    s32 i;
    unk_fb = 0;
    for (i = 0; i < 2; i++) {
        func_0206fc44(&unk_26e4[i]);
    }
}

void *Unk_ov110_02297778::func_ov110_02294ffc() {
    if (unk_fb >= 2) {
        return &unk_26e4[1];
    }
    unk_fb++;
    return &unk_26e4[unk_fb - 1];
}

void Unk_ov110_02297778::func_ov110_02294fb8(s32 flag) {
    u8 v = 1;
    if (flag != 0) {
        v = 0xf;
    }
    void *p = func_ov110_02294ffc();
    ((Unk_020e0488 *)p)->func_0206fb9c(4, 0x1ca, 6, v, 9, 0);
    func_0206f9fc(p, 0x88);
    func_0206fab4(p, 1, 0);
}

void Unk_ov110_02297778::func_ov110_02294e78(s32 flag) {
    func_ov110_02294d68(8);
    s32 r = func_0206ed50();
    if (r == 0x20) {
        Snd_PlaySe(0x28);
    } else {
        Snd_PlaySe(0x27);
    }
    if (flag != 0) {
        unk_fc = 5;
    } else {
        unk_fc = 0;
    }
    func_ov002_02200a58(0x15);
    func_ov110_02294fb8(1);
    s32 n = func_ov110_02294e48(unk_b0);
    switch (r) {
    case 0x1d:
    case 0x1e:
        if (n == 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_0206eba4(unk_b0);
        }
        break;
    case 0x1f: {
        s32 i, j;
        for (i = 0; i < 15; i++) {
            if (unk_b0[i] != 0xfff1) {
                for (j = 0; j < 15; j++) {
                    if (unk_b0[i] == unk_ce[j]) {
                        unk_ce[j] = 0xfff1;
                        j = 15;
                    }
                }
            }
        }
        n = func_ov110_02294e48(unk_ce);
        if (n == 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_0206ed2c((u8)n);
            func_0206eba4(unk_ce);
            MI_CpuCopy8(unk_b0, data_021ed210, 0x1e);
            func_ov110_02294de4(3);
        }
        break;
    }
    case 0x20:
        MI_CpuCopy8(unk_b0, data_021ed22e, 0x1e);
        func_ov110_02294de4(4);
        func_0206ecf8(1);
        break;
    }
}

s32 Unk_ov110_02297778::func_ov110_02294e48(u16 *p) {
    s32 i = 0;
    s32 n = i;
    for (; i < 15; i++) {
        u16 v = p[i];
        if (v != 0xfff1) {
            if (i != n) {
                p[n] = v;
                p[i] = 0xfff1;
            }
            n++;
        }
    }
    return n;
}

void Unk_ov110_02297778::func_ov110_02294de4(u8 v) {
    u8 buf[0x24];
    if (CommManager_isOnline(gCommManager)) {
        func_ov110_02294d78(8);
        buf[0] = v;
        MI_CpuCopy8(unk_b0, &buf[1], 0x1e);
        void *g = gCommManager;
        CommManager_beginRecord(g);
        CommManager_writeRecord(g, buf, 0x1f);
        CommManager_endRecord(g, 0x16, 4);
        unk_ee = CommManager_getSendSeq(g);
    }
}

BOOL Unk_ov110_02297778::func_ov110_02294d9c() {
    if (func_0206ed18() == 0) {
        return TRUE;
    }
    if (func_ov110_02294d88(8) == 0) {
        return TRUE;
    }
    if (CommManager_isOnline(gCommManager)) {
        if (Comm_IsSeqConfirmed(unk_ee) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL Unk_ov110_02297778::func_ov110_02294d88(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov110_02297778::func_ov110_02294d78(u32 mask) { unk_94 |= mask; }

void Unk_ov110_02297778::func_ov110_02294d68(u32 mask) { unk_94 &= ~mask; }

