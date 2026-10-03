#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
void Gfx2d_ShowLayer(u32 x);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_LoadCharFile(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Gfx2d_LoadScreenFile(void *a, s32 b, s32 c);
void Gfx2d_LoadPaletteFile(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 Snd_PlaySe(s32 a);
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
void *ProcBase_GetParent(...);
void ProcBase_RequestDelete(void *p);
void MI_CpuCopy8(void *a, void *b, u32 c);
void func_ov094_02292380();
void func_ov094_0229238c();
void func_ov094_02292398(...);
void func_ov094_022937a0(void *p);
void func_ov094_02293764(void *p, void *q);
void func_ov094_02293d2c(void *p);
void func_ov094_0229324c(void *p, s32 a, s32 b);
void func_ov094_022932d0(void *p, s32 a, s32 b);
void func_ov094_0229277c(void *p, s32 a);
BOOL func_ov094_02292414(u32 v);
BOOL func_ov094_022924c4(u32 v);
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
void func_ov094_02292a80(void *a);
void func_ov094_02292aa4(void *a);
void func_ov094_02292acc(void *a);
void func_ov094_02292ae0(void *a);
void func_ov094_02292d1c(void *a, s32 b);
void func_ov094_02292d30(void *a, s32 b);
BOOL func_ov094_0229311c(void *p, u32 v);
void func_ov094_0229313c(void *p, s32 a, s32 b);
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
u32 func_ov094_02293938(void *p, u32 a, u32 b);
u32 func_ov094_02293968(void *p);
void func_ov094_02293998(void *a);
void func_ov094_022939a0(void *a);
void func_ov094_022939c0(void *a, s32 b);
extern void *gCommManager;
extern u8 data_021ed210[];
extern u8 data_021ed22e[];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern s32 gCurrentHeap;
}

class Unk_ov100_02297778;

class BgVramTaskPair {
public:
    BgVramTaskPair();

    u32 unk_00[0x38 / 4];
};

class Unk_ov094_02294a50 {
public:
    Unk_ov094_02294a50();
    ~Unk_ov094_02294a50();

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

class Unk_ov094_02292d6c {
public:
    Unk_ov094_02292d6c();
    ~Unk_ov094_02292d6c();

    u32 unk_00[0x15e0 / 4];
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

class Unk_ov002_02204614 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    u32 unk_04[0x60 / 4];
};

class Unk_ov002_02204558 {
public:
    Unk_ov002_02204558();
    ~Unk_ov002_02204558();
    void func_ov002_02202310(s32, s32, const char *);
    u32 unk_00[0x2f8 / 4];
    u8 unk_2f8;
    u8 unk_2f9[7];
};

class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32);
    u32 unk_00[0x108 / 4];
};

class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    void func_0206fab4(s32, s32);
    void func_0206fb9c(u32, u32, u32, u8, u8, s32);
    void func_0206fc44();
    u32 unk_00[0x40 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
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
    BOOL func_ov002_02200908(s32);
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

class CommManager {
public:
    void endRecord(u32, u32);
    void writeRecord(u8 *, u32);
    void beginRecord();
    s32 getSendSeq();
    BOOL isOnline();
};

class LabelBalloon {
public:
    void setPos(s32, s32);
    void setPopUpward();
    void setPopDownward();
};

class HandCursor {
public:
    s32 isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32);
    s32 enableObjWindow();
};

class BgVramTask {
public:
    void cancel();
};

class Unk_ov002_022013ac {
public:
    s32 func_ov002_02201498(s32);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014c0(s32, s32);
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
};

class Unk_ov002_02202d98 {
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

class Unk_ov002_0220464c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32);
};

class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32, s32);
};

typedef void (Unk_ov100_02297778::*Unk_ov100_02297778_Fn)();

// Vtable 0x02297778
class Unk_ov100_02297778 : public Unk_ov002_022044e4 {
public:
    Unk_ov100_02297778()
        : unk_94(), unk_cc(), unk_b2c(), unk_b54(), unk_2134(), unk_21f4(), unk_220c(), unk_2270(), unk_2570(), unk_2678() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov100_02294d60(u32);
    void func_ov100_02294d70(u32);
    BOOL func_ov100_02294d80(u32);
    BOOL func_ov100_02294d98();
    void func_ov100_02294de4(u8);
    s32 func_ov100_02294e50(u16 *);
    void func_ov100_02294e80();
    void func_ov100_02294fac();
    void func_ov100_02294fe8(s32);
    void func_ov100_0229502c(s32);
    void * func_ov100_02295070();
    void func_ov100_022950a0();
    BOOL func_ov100_022950cc(void *, s32);
    void func_ov100_0229519c(void *);
    void func_ov100_02295218(void *, s32);
    void func_ov100_0229530c(void *, s32);
    void func_ov100_02295400();
    s32 func_ov100_02295430();
    void func_ov100_02295454(u8);
    void func_ov100_022954a0(u8);
    void func_ov100_022954dc();
    void func_ov100_022954fc();
    void func_ov100_0229551c();
    void func_ov100_0229553c();
    void func_ov100_022963e8();
    void func_ov100_02296428();
    void func_ov100_02296460();
    void func_ov100_02296480();
    void func_ov100_022964c4();
    void func_ov100_02296500();
    void func_ov100_0229653c();
    void func_ov100_02296590();
    void func_ov100_022965d8();
    void func_ov100_02296630();
    void func_ov100_02296660();
    void func_ov100_02296690();
    void func_ov100_022966b8();
    void func_ov100_022966f8();
    void func_ov100_02296748();
    void func_ov100_02296798();
    void func_ov100_02296814();
    void func_ov100_022968d8();
    void func_ov100_02296a58();
    void func_ov100_02296b58();
    void func_ov100_02296be4();
    void func_ov100_02296c3c();
    void func_ov100_02296fbc();
    void func_ov100_0229700c();
    void func_ov100_02297078();
    void func_ov100_022970ec();
    void func_ov100_02297128();
    void func_ov100_022971ac();
    void func_ov100_0229723c();
    void func_ov100_0229728c();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ BgVramTaskPair unk_94[1];
    /* 0xcc */ Unk_ov094_02294a50 unk_cc;
    /* 0xb2c */ Unk_ov094_02294bd4 unk_b2c;
    /* 0xb54 */ Unk_ov094_02292d6c unk_b54;
    /* 0x2134 */ Unk_ov002_02204468 unk_2134;
    /* 0x21f4 */ Unk_ov002_02204604 unk_21f4;
    /* 0x220c */ Unk_ov002_02204614 unk_220c;
    /* 0x2270 */ Unk_ov002_02204558 unk_2270;
    /* 0x2570 */ Unk_ov002_022040ec unk_2570;
    /* 0x2678 */ Unk_020e0488 unk_2678[2];
    /* 0x26f8 */ u32 unk_26f8;
    /* 0x26fc */ s32 unk_26fc;
    /* 0x2700 */ s32 unk_2700;
    /* 0x2704 */ s32 unk_2704;
    /* 0x2708 */ s32 unk_2708;
    /* 0x270c */ s32 unk_270c;
    /* 0x2710 */ s32 unk_2710;
    /* 0x2714 */ u16 unk_2714[15];
    /* 0x2732 */ u16 unk_2732[15];
    /* 0x2750 */ u16 unk_2750;
    /* 0x2752 */ s16 unk_2752;
    /* 0x2754 */ u8 unk_2754;
    /* 0x2755 */ u8 unk_2755;
    /* 0x2756 */ u8 unk_2756;
    /* 0x2757 */ u8 unk_2757;
    /* 0x2758 */ u8 unk_2758;
    /* 0x2759 */ u8 unk_2759;
    /* 0x275a */ u8 unk_275a;
    /* 0x275b */ u8 unk_275b;
    /* 0x275c */ u8 unk_275c;
    /* 0x275d */ u8 unk_275d;
    /* 0x275e */ u8 unk_275e;
    /* 0x275f */ u8 unk_275f;
    /* 0x2760 */ u8 unk_2760;
};

typedef Unk_ov100_02297778 S;

struct Unk_ov100_SceneEntry {
    Unk_ov100_02297778 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov100_02297778 *func_ov100_022975ac();

extern "C" void func_ov100_0229555c(S *s);
extern "C" void func_ov100_02295590(S *s);
extern "C" void func_ov100_022955dc(S *s);
extern "C" void func_ov100_02295640(S *s);
extern "C" void func_ov100_02295694(S *s);
extern "C" void func_ov100_022956fc(S *s);
extern "C" s32 func_ov100_02295720(S *s);
extern "C" s32 func_ov100_02295730(S *s);
extern "C" void func_ov100_02295778(S *s);
extern "C" void func_ov100_022957d0(S *s, u32 a);
extern "C" void func_ov100_0229580c(S *s, u32 a);
extern "C" void func_ov100_0229583c(S *s, u32 a);
extern "C" void func_ov100_022958b4(S *s);
extern "C" void func_ov100_022958e4(S *s);
extern "C" void func_ov100_02295918(S *s);
extern "C" void func_ov100_02295950(S *s);
extern "C" void func_ov100_0229598c(S *s);
extern "C" void func_ov100_022959f0(S *s);
extern "C" BOOL func_ov100_02295a90(S *s);
extern "C" void func_ov100_02295ad4(S *s, u32 a);
extern "C" void func_ov100_02295b0c(S *s);
extern "C" void func_ov100_02295b28(S *s, u32 a);
extern "C" void func_ov100_02295b80(S *s);
extern "C" u32 func_ov100_02295b9c(S *s, u32 a);
extern "C" u32 func_ov100_02295bd8(S *s, u32 a);
extern "C" BOOL func_ov100_02295c18(S *s, u32 a);
extern "C" BOOL func_ov100_02295c54(S *s, u32 a);
extern "C" void func_ov100_02295c90(S *s);
extern "C" BOOL func_ov100_02295cc8(S *s, u32 a);
extern "C" u32 func_ov100_02295e98(S *s, u32 a);
extern "C" u32 func_ov100_02295eec(S *s, u32 a);
extern "C" u32 func_ov100_02295f38(S *s, u32 a);
extern "C" u32 func_ov100_02295f4c(S *s, u32 a);
extern "C" void func_ov100_02295f68(S *s, u32 a, u32 b, u32 c);
extern "C" BOOL func_ov100_02295fb4(S *s, u32 a);
extern "C" u32 func_ov100_02296010(S *s, u32 a, u32 b, s32 c);
extern "C" u32 func_ov100_02296084(S *s, u32 a);
extern "C" u32 func_ov100_02296094(S *s, u32 a);
extern "C" BOOL func_ov100_022960cc(S *s, u32 a);
extern "C" BOOL func_ov100_022960e0(S *s, u32 a);
extern "C" BOOL func_ov100_022960f0(S *s, u32 a);
extern "C" void func_ov100_022960fc(S *s);
extern "C" void func_ov100_0229615c(S *s, u32 a, u32 b);
extern "C" void func_ov100_02296198(S *s, u32 a, s32 b);
extern "C" void func_ov100_022961dc(S *s, u32 a, u32 b);
extern "C" void func_ov100_02296248(S *s, u32 a);
extern "C" void func_ov100_02296298(S *s, u32 a);
extern "C" void func_ov100_022962e4(S *s, u32 a);
extern "C" void func_ov100_02296370(S *s);
extern "C" void func_ov100_02296390(S *s);
extern "C" void func_ov100_022963cc(S *s);
extern "C" u32 func_ov100_02296108(S *s);
extern "C" u32 func_ov100_0229613c(S *s);
extern "C" void func_ov100_02296cc8(S *s);
extern "C" void func_ov100_02296cd8(S *s);
extern "C" void func_ov100_02296db4(S *s);
extern "C" void func_ov100_02296dc8(S *s);
extern "C" void func_ov100_02296dfc(S *s);
extern "C" void func_ov100_02296e34(S *s);
extern "C" void func_ov100_02296e68(S *s);
extern "C" void func_ov100_02296e70(S *s);
extern "C" void func_ov100_02296e8c(S *s);
extern "C" void func_ov100_02296ec0(S *s);

extern "C" u32 func_ov100_02295e98(S *s, u32 a);
u32 func_ov100_02295eec(S *s, u32 a);
u32 func_ov100_02295f38(S *s, u32 a);
u32 func_ov100_02295f4c(S *s, u32 a);
void func_ov100_02295f68(S *s, u32 a, u32 b, u32 c);
BOOL func_ov100_02295fb4(S *s, u32 a);
u32 func_ov100_02296010(S *s, u32 a, u32 b, s32 c);
u32 func_ov100_02296084(S *s, u32 a);
u32 func_ov100_02296094(S *s, u32 a);
BOOL func_ov100_022960cc(S *s, u32 a);
BOOL func_ov100_022960e0(S *s, u32 a);
BOOL func_ov100_022960f0(S *s, u32 a);
u32 func_ov100_02296108(S *s);
u32 func_ov100_0229613c(S *s);
void func_ov100_0229615c(S *s, u32 a, u32 b);
void func_ov100_02296198(S *s, u32 a, s32 b);
void func_ov100_022961dc(S *s, u32 a, u32 b);
void func_ov100_02296248(S *s, u32 a);
void func_ov100_02296298(S *s, u32 a);
void func_ov100_022962e4(S *s, u32 a);
void func_ov100_02296370(S *s);
void func_ov100_02296390(S *s);
void func_ov100_022963cc(S *s);

static inline BOOL Unk_ov100_02296b58_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

extern "C" Unk_ov100_02297778 *func_ov100_022975ac() { return new Unk_ov100_02297778(); }

BOOL Unk_ov100_02297778::vfunc_00() {
    func_ov100_02296ec0(this);
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov100_02297778::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent())->func_ov092_02291c5c();
    func_ov100_02296e8c(this);
    return TRUE;
}

BOOL Unk_ov100_02297778::onDraw() {
    if (!func_ov100_02294d80(1)) {
        return TRUE;
    }
    unk_2134.vfunc_08();
    if (MenuCtrl_IsButtons()) {
        ((Unk_ov002_02202d98 *)&unk_220c)->func_ov002_02202844();
    }
    func_ov100_02295950(this);
    if (func_ov100_02294d80(0x80)) {
        func_ov094_0229324c(&unk_cc, 0, unk_2700);
    }
    if (func_ov100_02294d80(2)) {
        func_ov094_022932d0(&unk_cc, 0, unk_26fc);
        ((Unk_ov094_02294bd4 *)&unk_b2c)->func_ov094_022941a0(0, unk_26fc);
        func_ov094_0229277c(&unk_b54, unk_26fc);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov100_SceneEntry data_ov100_02297690;

// Scene registration entry read by main (0x020e2100 etc.): factory, then two ids
extern "C" Unk_ov100_SceneEntry data_ov100_02297690 = {func_ov100_022975ac, 0x93, 0x97};

BOOL Unk_ov100_02297778::vfunc_4c() {
    static Unk_ov100_02297778_Fn tbl[7] = {
        &Unk_ov100_02297778::func_ov100_0229723c, &Unk_ov100_02297778::func_ov100_022971ac,
        &Unk_ov100_02297778::func_ov100_02297128, &Unk_ov100_02297778::func_ov100_022970ec,
        &Unk_ov100_02297778::func_ov100_02297078, &Unk_ov100_02297778::func_ov100_0229700c,
        &Unk_ov100_02297778::func_ov100_02296fbc};
    func_ov100_02296e34(this);
    (this->*tbl[unk_8c])();
    func_ov100_02296dfc(this);
    return TRUE;
}

void Unk_ov100_02297778::func_ov100_0229728c() {
    static Unk_ov100_02297778_Fn tbl[22] = {
        &Unk_ov100_02297778::func_ov100_02296c3c, &Unk_ov100_02297778::func_ov100_02296be4,
        &Unk_ov100_02297778::func_ov100_02296b58, &Unk_ov100_02297778::func_ov100_02296a58,
        &Unk_ov100_02297778::func_ov100_022968d8, &Unk_ov100_02297778::func_ov100_02296814,
        &Unk_ov100_02297778::func_ov100_02296798, &Unk_ov100_02297778::func_ov100_02296748,
        &Unk_ov100_02297778::func_ov100_022966f8, &Unk_ov100_02297778::func_ov100_022966b8,
        &Unk_ov100_02297778::func_ov100_02296690, &Unk_ov100_02297778::func_ov100_02296660,
        &Unk_ov100_02297778::func_ov100_02296630, &Unk_ov100_02297778::func_ov100_022965d8,
        &Unk_ov100_02297778::func_ov100_02296590, &Unk_ov100_02297778::func_ov100_0229653c,
        &Unk_ov100_02297778::func_ov100_02296500, &Unk_ov100_02297778::func_ov100_022964c4,
        &Unk_ov100_02297778::func_ov100_02296480, &Unk_ov100_02297778::func_ov100_02296460,
        &Unk_ov100_02297778::func_ov100_02296428, &Unk_ov100_02297778::func_ov100_022963e8};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov100_02297778::vfunc_50() {
    func_ov100_02296e70(this);
    func_ov100_0229728c();
    func_ov100_02296e68(this);
    return TRUE;
}

BOOL Unk_ov100_02297778::vfunc_54() { return TRUE; }

BOOL Unk_ov100_02297778::vfunc_58() { return TRUE; }

BOOL Unk_ov100_02297778::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov100_02297778::func_ov100_0229723c() {
    func_ov100_02296dc8(this);
    func_ov100_02296db4(this);
    func_ov002_02200a50(1);
}

void Unk_ov100_02297778::func_ov100_022971ac() {
    func_ov100_02296cc8(this);
    func_ov094_022937a0(&unk_cc);
    func_ov094_02293764(&unk_cc, unk_2714);
    func_ov100_02295c90(this);
    func_ov094_02293d2c(&unk_b2c);
    ((Unk_ov094_02294bd4 *)&unk_b2c)->func_ov094_022941f8(0xf);
    func_ov002_022008e0(8, 0, 0, 0x30);
    Gfx2d_ShowLayer(6);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(2);
    func_ov100_02294d70(1);
    func_ov100_02294d70(2);
    unk_26fc = func_ov002_02200920();
}

void Unk_ov100_02297778::func_ov100_02297128() {
    BOOL b = func_ov002_02200908(0);
    func_ov002_02200840(6, 0, 0);
    unk_26fc = func_ov002_02200920();
    if (b) {
        func_ov100_02296cd8(this);
        func_ov002_022008e0(2, 0, 1, 0x30);
        func_ov002_02200850(0x80);
        func_ov100_02294d70(0x80);
        Gfx2d_ShowLayer(4);
        func_ov002_02200840(4, 0, 0);
        unk_2700 = func_ov002_02200920();
        func_ov002_02200a50(3);
    }
}

void Unk_ov100_02297778::func_ov100_022970ec() {
    S *const s = this;
    if (s->func_ov002_02200908(0)) {
        s->func_ov002_02200a60(2);
        func_ov100_02296370(s);
    }
    s->func_ov002_02200840(4, 0, 0);
    s->unk_2700 = s->func_ov002_02200920();
}

void Unk_ov100_02297778::func_ov100_02297078() {
    S *const s = this;
    if (s->func_ov100_02294d98()) {
        ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006e4(1);
        func_ov100_022956fc(s);
        ((Unk_ov092_02291ec8 *)ProcBase_GetParent(s))->func_ov092_02291ce4(0x44, 1);
        s->func_ov002_022008c4(2, 4, 1, 0x30);
        s->func_ov002_02200850(0x80);
        s->func_ov002_02200840(4, 0, 0);
        s->unk_2700 = s->func_ov002_02200920();
        s->func_ov002_02200a50(5);
    }
}

void Unk_ov100_02297778::func_ov100_0229700c() {
    S *const s = this;
    if (s->func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(4);
        s->func_ov100_02294d60(0x80);
        s->func_ov002_022008c4(8, 0, 0, 0x30);
        s->func_ov002_02200840(6, 0, 0);
        s->func_ov002_02200a50(6);
        s->func_ov100_02296fbc();
    } else {
        s->func_ov002_02200840(4, 0, 0);
        s->unk_2700 = s->func_ov002_02200920();
    }
}

void Unk_ov100_02297778::func_ov100_02296fbc() {
    S *const s = this;
    if (s->func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(6);
        s->func_ov002_02200a60(5);
        s->func_ov100_02294d60(1);
        s->func_ov100_02294d60(2);
    } else {
        s->func_ov002_02200840(6, 0, 0);
    }
    s->unk_26fc = s->func_ov002_02200920();
}

extern "C" void func_ov100_02296ec0(S *s) {
    s32 i;
    s->unk_26f8 = 0;
    func_ov094_022939c0(&s->unk_cc, 1);
    ((Unk_ov094_02294bd4 *)&s->unk_b2c)->func_ov094_02294644(2);
    func_ov094_02292d30(&s->unk_b54, 6);
    s->unk_2757 = 0x20;
    ((Unk_ov002_02204604 *)&s->unk_21f4)->func_ov002_022027a4();
    s->unk_2755 = 0;
    s->unk_2759 = 0;
    ((Unk_ov002_02204558 *)&s->unk_2270)->func_ov002_02202310(3, 1, 0);
    s->unk_275f = 0;
    switch (func_0206ed50()) {
    case 0x1d:
    case 0x1e:
        for (i = 0; i < 15; i++) {
            s->unk_2714[i] = 0xfff1;
        }
        s->func_ov100_02294d70(0x200);
        break;
    case 0x1f:
        MI_CpuCopy8(data_021ed210, s->unk_2714, 0x1e);
        break;
    case 0x20:
        MI_CpuCopy8(data_021ed22e, s->unk_2714, 0x1e);
        break;
    }
    MI_CpuCopy8(s->unk_2714, s->unk_2732, 0x1e);
    func_0206ec04();
}

extern "C" void func_ov100_02296e8c(S *s) {
    func_ov100_022960fc(s);
    func_ov094_02292a80(&s->unk_b54);
    func_ov094_02293998(&s->unk_cc);
    func_ov002_02201b04(&s->unk_2270);
    s->func_ov100_022950a0();
}

extern "C" void func_ov100_02296e70(S *s) {
    func_ov100_02296e34(s);
    s->unk_220c.vfunc_0c();
}

extern "C" void func_ov100_02296e68(S *s) {
    func_ov100_02296dfc(s);
}

extern "C" void func_ov100_02296e34(S *s) {
    func_ov100_022960fc(s);
    func_ov094_02292acc(&s->unk_b54);
    func_ov094_022939a0(&s->unk_cc);
    ((Unk_ov094_02294bd4 *)&s->unk_b2c)->func_ov094_0229462c();
    s->func_ov100_022950a0();
}

extern "C" void func_ov100_02296dfc(S *s) {
    func_ov002_02201b58(&s->unk_2270);
    func_ov094_02292aa4(&s->unk_b54);
    if (((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_0220071c()) {
        func_ov100_022959f0(s);
    }
}

extern "C" void func_ov100_02296dc8(S *s) {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

extern "C" void func_ov100_02296db4(S *s) {
    func_ov094_02292d1c(&s->unk_b54, 0);
}

extern "C" void func_ov100_02296cd8(S *s) {
    s32 h = gCurrentHeap;
    Gfx2d_LoadScreenFile((void *)"menu/inventory/b_itm_bg_tra1.bsc", h, 4);
    Gfx2d_LoadCharFile((void *)"menu/inventory/b_itm_sell.bch", h, 4, 0x1b9, 0x1b9, 0x238);
    s32 v = func_0206ed50();
    u8 *a = NULL;
    u8 *b = NULL;
    switch (v) {
    case 0x1d:
        a = (u8 *)"menu/inventory/ten6.bpl";
        b = (u8 *)"menu/inventory/tanu.bch";
        break;
    case 0x1e:
        a = (u8 *)"menu/inventory/ten7.bpl";
        b = (u8 *)"menu/inventory/kinu.bch";
        break;
    case 0x1f:
        a = (u8 *)"menu/inventory/ten8.bpl";
        b = (u8 *)"menu/inventory/lost.bch";
        break;
    case 0x20:
        a = (u8 *)"menu/inventory/ten9.bpl";
        b = (u8 *)"menu/inventory/garb.bch";
        break;
    }
    if (a != NULL) {
        Gfx2d_LoadPaletteFile(a, h, 4, 3, 3, 5);
    }
    if (b != NULL) {
        Gfx2d_LoadCharFile(b, h, 4, 0x208, 0x208, 0x238);
    }
    s->func_ov100_0229502c(0);
    s->func_ov100_02294fe8(0);
}

extern "C" void func_ov100_02296cc8(S *s) {
    func_ov094_02292ae0(&s->unk_b54);
}

void Unk_ov100_02297778::func_ov100_02296c3c() {
    S *const s = this;
    if (s->func_ov002_02200a14(1)) {
        func_ov100_02296390(s);
    } else {
        if (Unk_ov100_02296b58_Both()) {
            s32 x = gTouchCurX;
            s32 y = gTouchCurY;
            s32 r = func_ov100_02296010(s, x, y, 1);
            if (r != 0x20) {
                func_ov100_022962e4(s, r);
            } else if (x >= 0xc8 && x <= 0xf8 && y >= 0x50 && y <= 0x70) {
                if (y >= 0x60) {
                    s->func_ov100_02294fac();
                } else {
                    s->func_ov100_02294e80();
                }
            }
        }
    }
}

void Unk_ov100_02297778::func_ov100_02296be4() {
    S *const s = this;
    if (gTouchHeld == 0) {
        s->func_ov002_02200a58(0);
        ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006a4(0x3c);
    } else if (s->func_ov100_02294d80(4) && func_ov100_02295a90(s)) {
        func_ov100_02296298(s, s->unk_2756);
    } else {
        ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006c0();
    }
}

void Unk_ov100_02297778::func_ov100_02296b58() {
    S *const s = this;
    if (s->func_ov002_02200a14(1)) {
        s->func_ov100_02295400();
    } else {
        if (Unk_ov100_02296b58_Both()) {
            s32 t = ((Unk_ov002_022013ac *)&s->unk_2270)->func_ov002_022014c0(gTouchCurX, gTouchCurY);
            if (t >= 0) {
                func_ov002_02201aa0(&s->unk_2270, t, 1);
                s->unk_275d = s->unk_2270.unk_2f9[t - 0];
                s->func_ov002_02200a58(0x12);
            }
        }
    }
}

void Unk_ov100_02297778::func_ov100_02296a58() {
    S *const s = this;
    func_ov100_02295918(s);
    func_ov100_02295b0c(s);
    s32 x = s->unk_2710 + 8;
    s32 t = func_ov100_02296010(s, s->unk_270c + 8, x, 0);
    if (s->func_ov100_02294d80(0x200)) {
        if ((func_ov100_022960e0(s, t) && func_ov100_022960f0(s, s->unk_2758))
            || (func_ov100_022960f0(s, t) && func_ov100_022960e0(s, s->unk_2758))) {
            if (func_ov100_02295bd8(s, t) != 0xfff1) {
                t = 0x20;
            }
        }
    }
    if (t != 0x20) {
        if (gTouchHeld == 0) {
            if (func_ov100_02295c54(s, t)) {
                func_ov100_02296198(s, s->unk_2758, x);
            } else {
                s32 r = func_ov100_02295fb4(s, t);
                if (r == 0) {
                    func_ov100_02296198(s, s->unk_2758, x);
                } else {
                    func_ov094_02292398(r);
                    func_ov100_02296370(s);
                }
            }
        } else {
            func_ov100_02295ad4(s, t);
        }
    } else if (gTouchHeld == 0) {
        func_ov100_02296198(s, s->unk_2758, x);
    }
}

void Unk_ov100_02297778::func_ov100_022968d8() {
    S *const s = this;
    if (s->func_ov002_022009d4()) {
        func_ov100_022963cc(s);
        ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006e4(1);
    } else {
        s32 v = s->func_ov002_022009c8();
        if (s->func_ov100_022950cc((void *)v, 0)) {
            func_ov100_0229598c(s);
            func_ov100_02295694(s);
            ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006e4(0);
        } else {
            if (func_ov100_02295c54(s, s->unk_2759)) goto tail;
            {
                u32 k = gPad[1];
                if (k & 1) {
                    if (func_ov100_022960f0(s, s->unk_2759) || func_ov100_022960e0(s, s->unk_2759)) {
                        if (!func_ov100_02295c18(s, s->unk_2759)) {
                            s->func_ov100_022954dc();
                        }
                    } else if (func_ov100_022960cc(s, s->unk_2759)) {
                        s->func_ov100_0229551c();
                    }
                } else if (k & 0x800) {
                    if (func_ov100_022960f0(s, s->unk_2759) || func_ov100_022960e0(s, s->unk_2759)) {
                        if (!func_ov100_02295c18(s, s->unk_2759)) {
                            s32 r = func_ov100_022960f0(s, s->unk_2759) ? func_ov100_02296108(s) : func_ov100_0229613c(s);
                            if (r != 0x20) {
                                func_ov100_0229615c(s, s->unk_2759, r);
                                ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006e4(1);
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
                if (k & 2) {
                    func_ov100_022956fc(s);
                    s->func_ov100_02294fac();
                    ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006e4(0);
                } else if (k & 8) {
                    func_ov100_022956fc(s);
                    s->func_ov100_02294e80();
                    ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006e4(0);
                } else {
                    ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006c0();
                }
            }
        }
    }
}

void Unk_ov100_02297778::func_ov100_02296814() {
    S *const s = this;
    s32 v = s->func_ov002_022009c8();
    if (s->func_ov100_022950cc((void *)v, 1)) {
        func_ov100_0229598c(s);
        func_ov100_02295694(s);
        ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006e4(0);
    } else {
        u32 k = gPad[1];
        if (k & 1) {
            if (func_ov100_022960f0(s, s->unk_2759) || func_ov100_022960e0(s, s->unk_2759)) {
                if (!func_ov100_02295c54(s, s->unk_2759)) {
                    if (func_ov100_02295c18(s, s->unk_2759)) {
                        s->func_ov100_022954a0(s->unk_2759);
                    } else {
                        s->func_ov100_02295454(s->unk_2759);
                    }
                }
            }
        } else if (k & 2) {
            s->func_ov100_022954a0(s->unk_2758);
        } else {
            func_ov100_022958e4(s);
            ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006c0();
        }
    }
}

void Unk_ov100_02297778::func_ov100_02296798() {
    S *const s = this;
    if (s->func_ov002_022009d4()) {
        s->func_ov100_02295400();
    } else if (func_ov002_022019d0(&s->unk_2270, s->func_ov002_022009c8(), &s->unk_275e, 0)) {
        func_ov100_02295640(s);
    } else {
        u32 k = gPad[1];
        if ((k & 1) != 0) {
            ((Unk_ov002_0220464c *)&s->unk_220c)->func_ov002_02202b68();
            s->func_ov002_02200a58(7);
        } else if ((k & 2) != 0) {
            func_ov100_022955dc(s);
        }
    }
}

void Unk_ov100_02297778::func_ov100_02296748() {
    S *const s = this;
    if (((HandCursor *)&s->unk_220c)->isAnimDone()) {
        func_ov002_02201aa0(&s->unk_2270, s->unk_275e, 1);
        s->unk_275d = s->unk_2270.unk_2f9[s->unk_275e];
        s->func_ov002_02200a58(0x12);
    }
}

void Unk_ov100_02297778::func_ov100_022966f8() {
    S *const s = this;
    if (!((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_022028f0()) {
        s->func_ov002_02200a58(s->unk_275c);
        if ((u8)(s->unk_275c + 0xfc) <= 1) {
            func_ov100_02295b28(s, s->unk_2759);
        }
        s->func_ov100_0229728c();
    }
    func_ov100_022958e4(s);
}

void Unk_ov100_02297778::func_ov100_022966b8() {
    S *const s = this;
    if (((HandCursor *)&s->unk_220c)->isAnimDone()) {
        u32 t = s->unk_2759;
        if (t == 0x1e) {
            s->func_ov100_02294e80();
        } else if (t == 0x1f) {
            s->func_ov100_02294fac();
        } else {
            s->func_ov100_022954fc();
        }
    }
}

void Unk_ov100_02297778::func_ov100_02296690() {
    S *const s = this;
    if (((HandCursor *)&s->unk_220c)->isAnimDone()) {
        s->func_ov100_0229553c();
        s->func_ov002_02200a58(4);
    }
}

void Unk_ov100_02297778::func_ov100_02296660() {
    S *const s = this;
    if (((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_02202928()) {
        func_ov100_02296248(s, s->unk_2759);
        s->func_ov002_02200a58(0xc);
    }
}

void Unk_ov100_02297778::func_ov100_02296630() {
    S *const s = this;
    if (((HandCursor *)&s->unk_220c)->isAnimDone()) {
        s->func_ov002_02200a58(s->unk_275c);
    }
    func_ov100_022958e4(s);
}

void Unk_ov100_02297778::func_ov100_022965d8() {
    S *const s = this;
    if (!((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_02202928()) {
        u32 a = s->unk_275b;
        if (s->unk_2759 == a) {
            func_ov100_02295fb4(s, a);
            func_ov100_0229598c(s);
            s->func_ov002_02200a58(4);
            func_ov094_02292398();
        } else {
            func_ov100_022961dc(s, a, 4);
        }
    } else {
        func_ov100_022958e4(s);
    }
}

void Unk_ov100_02297778::func_ov100_02296590() {
    S *const s = this;
    if (!((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_022028fc()) {
        func_ov100_022957d0(s, s->unk_275b);
        s->func_ov100_02294d70(0x40);
        s->func_ov002_02200a58(0xf);
        func_ov100_0229598c(s);
    } else {
        s->func_ov002_02200a58(4);
    }
}

void Unk_ov100_02297778::func_ov100_0229653c() {
    S *const s = this;
    if (((HandCursor *)&s->unk_220c)->isAnimDone()) {
        s->func_ov002_02200a58(s->unk_275c);
    }
    if (((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_02202928()) {
        if (s->func_ov100_02294d80(0x40)) {
            s->func_ov100_02294d60(0x40);
            func_ov094_02292380();
        }
        func_ov100_022958e4(s);
    }
}

void Unk_ov100_02297778::func_ov100_02296500() {
    S *const s = this;
    if (((Unk_ov002_02204604 *)&s->unk_21f4)->func_ov002_02202718()) {
        func_ov100_0229580c(s, s->unk_2758);
        func_ov100_02296370(s);
        func_ov094_02292398();
    } else {
        func_ov100_022958b4(s);
    }
}

void Unk_ov100_02297778::func_ov100_022964c4() {
    S *const s = this;
    if (((Unk_ov002_022013ac *)&s->unk_2270)->func_ov002_022017b4()) {
        if (MenuCtrl_IsButtons()) {
            func_ov100_02295590(s);
            s->func_ov002_02200a58(6);
        } else {
            s->func_ov002_02200a58(2);
        }
    }
}

void Unk_ov100_02297778::func_ov100_02296480() {
    S *const s = this;
    if (func_ov002_02201a28(&s->unk_2270)) {
        func_ov002_02202064(&s->unk_2270, 0);
        if (((HandCursor *)&s->unk_220c)->getAnim()) {
            func_ov100_0229555c(s);
        }
        s->func_ov002_02200a58(0x13);
    }
}

void Unk_ov100_02297778::func_ov100_02296460() {
    S *const s = this;
    if (((Unk_ov002_022013ac *)&s->unk_2270)->func_ov002_022017a4()) {
        s->func_ov100_02295430();
    }
}

void Unk_ov100_02297778::func_ov100_02296428() {
    S *const s = this;
    if (((Unk_ov002_022040ec *)&s->unk_2570)->func_ov002_02204234(0)) {
        s->func_ov002_02200a58(s->unk_275c);
        ((HandCursor *)&s->unk_220c)->enableObjWindow();
    }
}

void Unk_ov100_02297778::func_ov100_022963e8() {
    S *const s = this;
    if (s->unk_2760 != 0) {
        s->unk_2760--;
    } else {
        s->unk_8c = 4;
        s->func_ov002_02200a60(1);
        ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006e4(0);
        func_ov100_022956fc(s);
    }
}

extern "C" void func_ov100_022963cc(S *s) {
    func_ov100_022956fc(s);
    func_ov100_02295b80(s);
    s->func_ov002_02200a58(0);
}

extern "C" void func_ov100_02296390(S *s) {
    s->unk_2757 = 0x20;
    func_ov100_02295778(s);
    s->func_ov002_02200980();
    func_ov100_0229598c(s);
    s->func_ov002_02200a58(4);
    func_ov100_02295b28(s, s->unk_2759);
}

extern "C" void func_ov100_02296370(S *s) {
    if (MenuCtrl_IsTouch()) {
        func_ov100_022963cc(s);
    } else {
        func_ov100_02296390(s);
    }
}

extern "C" void func_ov100_022962e4(S *s, u32 a) {
    u32 r6, r7;
    s->unk_2756 = a;
    s->func_ov002_02200a58(1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    s->unk_2704 = func_ov100_02295eec(s, s->unk_2756) - r6;
    s->unk_2708 = func_ov100_02295e98(s, s->unk_2756) - r7;
    s->unk_2757 = a;
    ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006b8();
    if (func_ov100_02295c54(s, a)) {
        s->func_ov100_02294d60(4);
    } else {
        s->func_ov100_02294d70(4);
        func_ov094_0229238c();
    }
}

extern "C" void func_ov100_02296298(S *s, u32 a) {
    s->unk_2758 = a;
    ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006e4(1);
    func_ov100_0229583c(s, a);
    if (s->unk_2755 == 1) {
        s->func_ov002_02200a58(3);
    }
    func_ov100_02295918(s);
    func_ov094_02292380();
}

extern "C" void func_ov100_02296248(S *s, u32 a) {
    s->unk_2758 = a;
    ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006e4(1);
    func_ov100_0229583c(s, a);
    if (s->unk_2755 == 1) {
        s->unk_275c = 5;
    }
    func_ov100_022958e4(s);
    func_ov094_02292380();
}

extern "C" void func_ov100_022961dc(S *s, u32 a, u32 b) {
    s->unk_2758 = a;
    ((Unk_ov002_02204604 *)&s->unk_21f4)->func_ov002_022026f4(s->unk_270c, s->unk_2710);
    u32 x = func_ov100_02295eec(s, a);
    u32 y = func_ov100_02295e98(s, a);
    ((Unk_ov002_02204604 *)&s->unk_21f4)->func_ov002_022026c4(x, y, b);
    ((Unk_ov002_02204604 *)&s->unk_21f4)->func_ov002_02202718();
    func_ov100_022958b4(s);
    s->func_ov002_02200a58(0x10);
}

extern "C" void func_ov100_02296198(S *s, u32 a, s32 b) {
    u32 r = 0x20;
    if (b >= 0x6c) {
        if (func_ov100_022960e0(s, a)) r = func_ov100_0229613c(s);
    } else {
        if (func_ov100_022960f0(s, a)) r = func_ov100_02296108(s);
    }
    if (r != 0x20) a = r;
    func_ov100_022961dc(s, a, 4);
}

extern "C" void func_ov100_0229615c(S *s, u32 a, u32 b) {
    func_ov100_0229583c(s, a);
    s->unk_270c = func_ov100_02295eec(s, a);
    s->unk_2710 = func_ov100_02295e98(s, a);
    func_ov100_022961dc(s, b, 4);
}

extern "C" u32 func_ov100_0229613c(S *s) {
    s32 t = func_02098ffc();
    s32 m = -1;
    if (t == m) return 0x20;
    return (u8)t;
}

extern "C" u32 func_ov100_02296108(S *s) {
    s32 i;
    for (i = 0; i < 0xf; i++) {
        if (s->unk_2714[i] == 0xfff1) return (u8)(i + 0xf);
    }
    return 0x20;
}

extern "C" void func_ov100_022960fc(S *s) {
    ((BgVramTask *)s->unk_94)->cancel();
}

extern "C" BOOL func_ov100_022960f0(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

extern "C" BOOL func_ov100_022960e0(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return TRUE;
    return FALSE;
}

extern "C" BOOL func_ov100_022960cc(S *s, u32 a) {
    if ((u8)(a + 0xe2) <= 1) return TRUE;
    return FALSE;
}

extern "C" u32 func_ov100_02296094(S *s, u32 a) {
    if (func_ov100_022960f0(s, a)) return (u8)a;
    if (func_ov100_022960e0(s, a)) return func_ov100_02295f4c(s, a);
    return 0;
}

extern "C" u32 func_ov100_02296084(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x20;
}

extern "C" u32 func_ov100_02296010(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02293968(&s->unk_cc);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(&s->unk_cc, t)) return 0x20;
        }
        return func_ov100_02296084(s, t);
    }
    t = func_ov094_02293938(&s->unk_cc, a, b);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(&s->unk_cc, t)) return 0x20;
        }
        return func_ov100_02295f38(s, t);
    }
    return 0x20;
}

extern "C" BOOL func_ov100_02295fb4(S *s, u32 a) {
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        u32 t = func_ov100_02295bd8(s, a);
        if (t != 0xfff1) {
            func_ov100_02295f68(s, s->unk_2758, t, func_ov100_02295b9c(s, a));
        }
        func_ov100_0229580c(s, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov100_02295f68(S *s, u32 a, u32 b, u32 c) {
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        u32 t = func_ov100_02296094(s, a);
        func_ov094_02293494(&s->unk_cc, t, b, c);
        func_ov094_02293434(&s->unk_cc, t);
    }
}

extern "C" u32 func_ov100_02295f4c(S *s, u32 a) {
    if (func_ov100_022960e0(s, a)) return (u8)a;
    return 0xf;
}

extern "C" u32 func_ov100_02295f38(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return (u8)a;
    return 0x20;
}

extern "C" u32 func_ov100_02295eec(S *s, u32 a) {
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_02293624(&s->unk_cc, func_ov100_02296094(s, a));
    }
    if (func_ov100_022960cc(s, a)) return 0xc4;
    return 0;
}

extern "C" u32 func_ov100_02295e98(S *s, u32 a) {
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_02293610(&s->unk_cc, func_ov100_02296094(s, a));
    }
    if (func_ov100_022960cc(s, a)) {
        if (a == 0x1e) return 0x58;
        return 0x68;
    }
    return 0;
}

extern "C" BOOL func_ov100_02295cc8(S *s, u32 a)
{
    volatile u16 v;
    if (func_ov100_02295c18(s, a)) {
        return FALSE;
    }
    if (func_ov100_02295b9c(s, a)) {
        return TRUE;
    }
    u32 t = func_ov100_02295bd8(s, a);
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

extern "C" void func_ov100_02295c90(S *s)
{
    u32 i = 0;
    do {
        if (func_ov100_02295cc8(s, i)) {
            func_ov094_02293308(&s->unk_cc, func_ov100_02296094(s, i));
        }
        i = (u8)(i + 1);
    } while (i <= 0xe);
}

extern "C" BOOL func_ov100_02295c54(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_0229333c(&s->unk_cc, func_ov100_02296094(s, a));
    }
    return FALSE;
}

extern "C" BOOL func_ov100_02295c18(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_0229311c(&s->unk_cc, func_ov100_02296094(s, a));
    }
    return TRUE;
}

extern "C" u32 func_ov100_02295bd8(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_0229352c(&s->unk_cc, func_ov100_02296094(s, a));
    }
    return 0xfff1;
}

extern "C" u32 func_ov100_02295b9c(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_02293504(&s->unk_cc, func_ov100_02296094(s, a));
    }
    return 0xf1;
}

extern "C" void func_ov100_02295b80(S *s)
{
    func_ov094_022935dc(&s->unk_cc);
    ((Unk_ov094_02294bd4 *)&s->unk_b2c)->func_ov094_022943f8();
}

extern "C" void func_ov100_02295b28(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        func_ov094_0229359c(&s->unk_cc, func_ov100_02296094(s, a));
        ((Unk_ov094_02294bd4 *)&s->unk_b2c)->func_ov094_022943f8();
    } else if (func_ov100_022960cc(s, a)) {
        func_ov100_02295b80(s);
    }
}

extern "C" void func_ov100_02295b0c(S *s)
{
    func_ov094_0229358c(&s->unk_cc);
    ((Unk_ov094_02294bd4 *)&s->unk_b2c)->func_ov094_022943b0();
}

extern "C" void func_ov100_02295ad4(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        func_ov094_0229357c(&s->unk_cc, func_ov100_02296094(s, a));
    }
}

extern "C" BOOL func_ov100_02295a90(S *s)
{
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = gTouchPressY - gTouchCurY;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

extern "C" void func_ov100_022959f0(S *s)
{
    s32 a = func_ov100_02295eec(s, s->unk_2757) - 0x6d;
    s32 b = func_ov100_02295e98(s, s->unk_2757) - 0x78;
    if (MenuCtrl_IsButtons()) {
        b -= 8;
    }
    if (b < -0x5c) {
        ((LabelBalloon *)&s->unk_2134)->setPopDownward();
        b = func_ov100_02295e98(s, s->unk_2757) - 0x50;
    } else {
        ((LabelBalloon *)&s->unk_2134)->setPopUpward();
    }
    ((LabelBalloon *)&s->unk_2134)->setPos(a, b);
    if (func_ov100_022960f0(s, s->unk_2757) || func_ov100_022960e0(s, s->unk_2757)) {
        u32 t = func_ov100_02296094(s, s->unk_2757);
        func_ov094_02293638(&s->unk_cc, &s->unk_2134, t);
    }
}

extern "C" void func_ov100_0229598c(S *s)
{
    if (func_ov100_022960f0(s, s->unk_2759) || func_ov100_022960e0(s, s->unk_2759)) {
        if (func_ov100_02295c18(s, s->unk_2759)) {
            ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006b0();
        } else {
            s->unk_2757 = s->unk_2759;
            ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006b8();
        }
    } else {
        ((Unk_ov002_02204468 *)&s->unk_2134)->func_ov002_022006b0();
    }
}

extern "C" void func_ov100_02295950(S *s)
{
    if (!s->func_ov100_02294d80(0x40)) {
        u32 t = s->unk_2755;
        if (t != 0) {
            if (t == 1) {
                func_ov094_0229313c(&s->unk_cc, s->unk_270c, s->unk_2710);
            }
        }
    }
}

extern "C" void func_ov100_02295918(S *s)
{
    s->unk_270c = s->unk_2704 + gTouchCurX;
    s->unk_2710 = s->unk_2708 + gTouchCurY;
}

extern "C" void func_ov100_022958e4(S *s)
{
    s->unk_270c = ((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_022028c8() - 2;
    s->unk_2710 = ((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_022028a0() - 4;
}

extern "C" void func_ov100_022958b4(S *s)
{
    s->unk_270c = ((Unk_ov002_02204604 *)&s->unk_21f4)->func_ov002_02202710();
    s->unk_2710 = ((Unk_ov002_02204604 *)&s->unk_21f4)->func_ov002_02202708();
}

extern "C" void func_ov100_0229583c(S *s, u32 a)
{
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        u32 t = func_ov100_02296094(s, a);
        s->unk_2755 = 1;
        s->unk_2750 = func_ov094_0229352c(&s->unk_cc, t);
        s->unk_2754 = func_ov094_02293504(&s->unk_cc, t);
        func_ov094_022934d8(&s->unk_cc, t);
        func_ov094_0229341c(&s->unk_cc, s->unk_2750, s->unk_2754);
    }
}

extern "C" void func_ov100_0229580c(S *s, u32 a)
{
    if (s->unk_2755 == 1) {
        func_ov100_02295f68(s, a, s->unk_2750, s->unk_2754);
    }
    s->unk_2755 = 0;
}

extern "C" void func_ov100_022957d0(S *s, u32 a)
{
    if (s->unk_2755 == 1) {
        u32 h = s->unk_2750;
        u32 b = s->unk_2754;
        func_ov100_0229583c(s, a);
        func_ov100_02295f68(s, a, h, b);
    }
}

extern "C" void func_ov100_02295778(S *s)
{
    s32 a = func_ov100_02295730(s);
    s32 b = func_ov100_02295720(s);
    ((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_02202a40(a, b);
    if (func_ov100_022960cc(s, s->unk_2759)) {
        ((Unk_ov002_0220464c *)&s->unk_220c)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&s->unk_220c)->func_ov002_02202d00(1);
    }
    s->func_ov100_0229553c();
}

extern "C" s32 func_ov100_02295730(S *s)
{
    s32 r = func_ov100_02295eec(s, s->unk_2759);
    if (s->func_ov100_02294d80(0x20)) {
        r += 0x100;
    } else if (s->func_ov100_02294d80(0x10)) {
        r -= 0x100;
    }
    r += 8;
    return r;
}

extern "C" s32 func_ov100_02295720(S *s)
{
    return func_ov100_02295e98(s, s->unk_2759);
}

extern "C" void func_ov100_022956fc(S *s)
{
    ((Unk_ov002_0220464c *)&s->unk_220c)->func_ov002_02202d00(0);
    ((Unk_ov002_02204614 *)&s->unk_220c)->vfunc_0c();
}

extern "C" void func_ov100_02295694(S *s)
{
    s32 a = func_ov100_02295730(s);
    s32 b = func_ov100_02295720(s);
    ((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_022029e8(a, b, 3, 1);
    s->unk_275c = s->unk_8d;
    s->func_ov002_02200a58(8);
    if (s->func_ov100_02294d80(0x100)) {
        ((Unk_ov002_02204614 *)&s->unk_220c)->vfunc_0c();
        s->func_ov100_02294d60(0x100);
    }
}

extern "C" void func_ov100_02295640(S *s)
{
    s32 a = ((Unk_ov002_022013ac *)&s->unk_2270)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&s->unk_2270)->func_ov002_02201498(s->unk_275e);
    ((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_02202a18(a, b, 2);
    s->unk_275c = s->unk_8d;
    s->func_ov002_02200a58(8);
}

extern "C" void func_ov100_022955dc(S *s)
{
    s->unk_275d = 1;
    s->unk_275e = func_ov002_02201a70(&s->unk_2270);
    s32 a = ((Unk_ov002_022013ac *)&s->unk_2270)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&s->unk_2270)->func_ov002_02201498(s->unk_275e);
    ((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_02202a40(a, b);
    ((HandCursor *)&s->unk_220c)->setAnimAtEnd(8);
    s->func_ov002_02200a58(0x12);
}

extern "C" void func_ov100_02295590(S *s)
{
    s->unk_275e = 0;
    s32 a = ((Unk_ov002_022013ac *)&s->unk_2270)->func_ov002_022014a4();
    s32 b = ((Unk_ov002_022013ac *)&s->unk_2270)->func_ov002_02201498(s->unk_275e);
    ((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&s->unk_220c)->func_ov002_02202d00(7);
}

extern "C" void func_ov100_0229555c(S *s)
{
    s32 a = func_ov100_02295730(s);
    s32 b = func_ov100_02295720(s);
    ((Unk_ov002_02202d98 *)&s->unk_220c)->func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&s->unk_220c)->func_ov002_02202d00(1);
}

void Unk_ov100_02297778::func_ov100_0229553c() {
    ((Unk_ov002_02202d98 *)&unk_220c)->func_ov002_02202a78();
    unk_220c.vfunc_0c();
}

void Unk_ov100_02297778::func_ov100_0229551c() {
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov100_02297778::func_ov100_022954fc() {
    ((Unk_ov002_02202d98 *)&unk_220c)->func_ov002_02202af0();
    func_ov002_02200a58(0xa);
}

void Unk_ov100_02297778::func_ov100_022954dc() {
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(4);
    func_ov002_02200a58(0xb);
}

void Unk_ov100_02297778::func_ov100_022954a0(u8 v) {
    ((Unk_ov002_02204468 *)&unk_2134)->func_ov002_022006e4(1);
    unk_275b = v;
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(5);
    func_ov002_02200a58(0xd);
}

void Unk_ov100_02297778::func_ov100_02295454(u8 v) {
    ((Unk_ov002_02204468 *)&unk_2134)->func_ov002_022006e4(1);
    unk_275c = unk_8d;
    unk_275b = v;
    ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202d00(6);
    func_ov002_02200a58(0xe);
}

s32 Unk_ov100_02297778::func_ov100_02295430() {
    switch (unk_275d) {
    case 0:
        func_ov100_022954dc();
        break;
    case 1:
    default:
        func_ov100_02296370(this);
        break;
    }
}

void Unk_ov100_02297778::func_ov100_02295400() {
    unk_275d = 1;
    func_ov100_0229555c(this);
    func_ov002_02202064(&unk_2270, 0);
    func_ov002_02200a58(0x13);
}

void Unk_ov100_02297778::func_ov100_0229530c(void *pad, s32 mode) {
    s32 r = unk_2759;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    unk_2759 += 4;
                } else {
                    unk_2759 = 0x1f;
                }
                func_ov100_02294d70(0x10);
                return;
            }
            unk_2759--;
            r--;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    unk_2759 -= 4;
                    func_ov100_02294d70(0x20);
                } else {
                    unk_2759 = 0x1f;
                }
                return;
            }
            unk_2759++;
            r++;
        }
    }
    if (func_ov002_0220128c(pad)) {
        if (q > 0) {
            unk_2759 -= 5;
        } else {
            unk_2759 = r + 0x19;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (q < 2) {
            unk_2759 += 5;
        }
    }
}

void Unk_ov100_02297778::func_ov100_02295218(void *pad, s32 mode) {
    s32 r = unk_2759 - 0xf;
    s32 q = 0;
    while (r >= 5) {
        r -= 5;
        q++;
    }
    if (func_ov002_0220126c(pad)) {
        if (!func_ov002_0220128c(pad) || q == 0) {
            if (r == 0) {
                if (mode == 1) {
                    unk_2759 += 4;
                } else {
                    unk_2759 = 0x1e;
                }
                func_ov100_02294d70(0x10);
                return;
            }
            unk_2759--;
            r--;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov002_0220127c(pad)) {
            if (r == 4) {
                if (mode == 1) {
                    unk_2759 -= 4;
                    func_ov100_02294d70(0x20);
                } else {
                    unk_2759 = 0x1e;
                }
                return;
            }
            unk_2759++;
            r++;
        }
    }
    if (func_ov002_0220128c(pad)) {
        if (q > 0) {
            unk_2759 -= 5;
        }
    } else if (func_ov002_0220127c(pad)) {
        if (q < 2) {
            unk_2759 += 5;
        } else {
            unk_2759 = r;
        }
    }
}

void Unk_ov100_02297778::func_ov100_0229519c(void *pad) {
    if (func_ov002_0220128c(pad)) {
        unk_2759 = 0x1e;
    } else if (func_ov002_0220127c(pad)) {
        unk_2759 = 0x1f;
    }
    if (func_ov002_0220125c(pad)) {
        if (unk_2759 == 0x1e) {
            unk_2759 = 0x19;
        } else {
            unk_2759 = 0;
        }
        func_ov100_02294d70(0x20);
    } else if (func_ov002_0220126c(pad)) {
        if (unk_2759 == 0x1e) {
            unk_2759 = 0x1d;
        } else {
            unk_2759 = 4;
        }
    }
}

BOOL Unk_ov100_02297778::func_ov100_022950cc(void *pad, s32 mode) {
    u8 old = unk_2759;
    func_ov100_02294d60(0x30);
    func_ov100_02294d60(0x100);
    if (pad == 0) {
        return FALSE;
    }
    if (func_ov100_022960f0(this, unk_2759)) {
        func_ov100_0229530c(pad, mode);
    } else if (func_ov100_022960e0(this, unk_2759)) {
        func_ov100_02295218(pad, mode);
    } else if (func_ov100_022960cc(this, unk_2759)) {
        func_ov100_0229519c(pad);
    }
    BOOL a = func_ov100_022960cc(this, unk_2759);
    if (a != func_ov100_022960cc(this, old)) {
        if (func_ov100_022960cc(this, unk_2759)) {
            ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202ca0();
        } else {
            ((Unk_ov002_0220464c *)&unk_220c)->func_ov002_02202c40();
        }
        func_ov100_02294d70(0x100);
    }
    if (old != unk_2759) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov100_02297778::func_ov100_022950a0() {
    s32 i;
    unk_275f = 0;
    for (i = 0; i < 2; i++) {
        ((Unk_020e0488 *)&unk_2678[i])->func_0206fc44();
    }
}

void *Unk_ov100_02297778::func_ov100_02295070() {
    if (unk_275f >= 2) {
        return &unk_2678[1];
    }
    unk_275f++;
    return &unk_2678[unk_275f - 1];
}

void Unk_ov100_02297778::func_ov100_0229502c(s32 flag) {
    u8 v = 1;
    if (flag != 0) {
        v = 0xf;
    }
    void *p = func_ov100_02295070();
    ((Unk_020e0488 *)p)->func_0206fb9c(4, 0x1ca, 6, v, 9, 0);
    func_0206f9fc(p, 0x21);
    ((Unk_020e0488 *)p)->func_0206fab4(1, 0);
}

void Unk_ov100_02297778::func_ov100_02294fe8(s32 flag) {
    u8 v = 1;
    if (flag != 0) {
        v = 0xf;
    }
    void *p = func_ov100_02295070();
    ((Unk_020e0488 *)p)->func_0206fb9c(4, 0x1d6, 6, v, 9, 0);
    func_0206f9fc(p, 0x65);
    ((Unk_020e0488 *)p)->func_0206fab4(1, 0);
}

void Unk_ov100_02297778::func_ov100_02294fac() {
    func_ov100_02294d60(8);
    Snd_PlaySe(0x28);
    unk_2760 = 5;
    func_ov002_02200a58(0x15);
    func_ov100_02294fe8(1);
    func_0206ecf8(0);
    func_0206ebc0();
}

void Unk_ov100_02297778::func_ov100_02294e80() {
    func_ov100_02294d60(8);
    Snd_PlaySe(0x27);
    unk_2760 = 5;
    func_ov002_02200a58(0x15);
    func_ov100_0229502c(1);
    s32 n = func_ov100_02294e50(unk_2714);
    switch (func_0206ed50()) {
    case 0x1d:
    case 0x1e:
        if (n == 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_0206eba4(unk_2714);
        }
        break;
    case 0x1f: {
        s32 i, j;
        for (i = 0; i < 15; i++) {
            if (unk_2714[i] != 0xfff1) {
                for (j = 0; j < 15; j++) {
                    if (unk_2714[i] == unk_2732[j]) {
                        unk_2732[j] = 0xfff1;
                        j = 15;
                    }
                }
            }
        }
        n = func_ov100_02294e50(unk_2732);
        if (n == 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_0206ed2c((u8)n);
            func_0206eba4(unk_2732);
            MI_CpuCopy8(unk_2714, data_021ed210, 0x1e);
            func_ov100_02294de4(3);
        }
        break;
    }
    case 0x20:
        MI_CpuCopy8(unk_2714, data_021ed22e, 0x1e);
        func_ov100_02294de4(4);
        func_0206ecf8(1);
        break;
    }
}

s32 Unk_ov100_02297778::func_ov100_02294e50(u16 *p) {
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

void Unk_ov100_02297778::func_ov100_02294de4(u8 v) {
    u8 buf[0x24];
    if (((CommManager *)gCommManager)->isOnline()) {
        func_ov100_02294d70(8);
        buf[0] = v;
        MI_CpuCopy8(unk_2714, &buf[1], 0x1e);
        void *g = gCommManager;
        ((CommManager *)g)->beginRecord();
        ((CommManager *)g)->writeRecord(buf, 0x1f);
        ((CommManager *)g)->endRecord(0x16, 4);
        unk_2752 = ((CommManager *)g)->getSendSeq();
    }
}

BOOL Unk_ov100_02297778::func_ov100_02294d98() {
    if (func_0206ed18() == 0) {
        return TRUE;
    }
    if (func_ov100_02294d80(8) == 0) {
        return TRUE;
    }
    if (((CommManager *)gCommManager)->isOnline()) {
        if (Comm_IsSeqConfirmed(unk_2752) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL Unk_ov100_02297778::func_ov100_02294d80(u32 mask) {
    if (unk_26f8 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov100_02297778::func_ov100_02294d70(u32 mask) { unk_26f8 |= mask; }

void Unk_ov100_02297778::func_ov100_02294d60(u32 mask) { unk_26f8 &= ~mask; }
