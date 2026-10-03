// ov126: scene overlay (class Unk_ov126_02299ae8, vtable 0x02299ae8, size 0x40c8).
// Text-entry screen (name/password style) with a cursor, a selection range and an 0x20-byte edit buffer.
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

#define ItemName_setFromItem _ZN8ItemName11setFromItemEPt
#define func_0206260c _ZN8ItemNameD1Ev
#define func_0206267c _ZN8ItemNameC1Ev
#define func_0206fab4 _ZN12Unk_020e048813func_0206fab4Eii
#define func_0206fb9c _ZN12Unk_020e048813func_0206fb9cEjjjhhi
#define func_0206fc44 _ZN12Unk_020e048813func_0206fc44Ev
#define func_0206fca8 _ZN12Unk_020e0488D1Ev
#define func_0206fcc8 _ZN12Unk_020e0488C1Ev
#define func_02071c68 _ZN14PlayerPatterns13func_02071c68Ej
#define func_02071e04 _ZN7Pattern13func_02071e04Ev
#define func_02071ef4 _ZN12Unk_02071ed013func_02071ef4EPh
#define func_02071f48 _ZN12Unk_02071ed013func_02071f48EPh
#define func_02072e88 _ZN12Unk_020cbb1813func_02072e88Ei
#define func_02087298 _ZN12Unk_0208722413func_02087298Ev
#define HandCursor_isAnimDone _ZN10HandCursor10isAnimDoneEv
#define HandCursor_getAnim _ZN10HandCursor7getAnimEv
#define func_02094104 _ZN8PlayerId13func_02094104Ev
#define func_02094108 _ZN8PlayerId13func_02094108EPv
#define PlayerData_getFriendList _ZN10PlayerData13getFriendListEv
#define func_020986d4 _ZN10PlayerData13func_020986d4Ev
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define EncodedString_fromMsgString _ZN13EncodedString13fromMsgStringEP9MsgString
#define MsgString_fromEncoded _ZN9MsgString11fromEncodedEP13EncodedStringii
#define MsgString_copy _ZN9MsgString4copyEPS_
#define MsgString_clear _ZN9MsgString5clearEv
#define func_ov002_02202844 _ZN18Unk_ov002_02202d9819func_ov002_02202844Ev
#define func_ov002_0220288c _ZN18Unk_ov002_02202d9819func_ov002_0220288cEv
#define func_ov002_022028f0 _ZN18Unk_ov002_02202d9819func_ov002_022028f0Ev
#define func_ov002_0220298c _ZN18Unk_ov002_02202d9819func_ov002_0220298cEiiih
#define func_ov002_02202a40 _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii
#define func_ov002_02202a78 _ZN18Unk_ov002_02202d9819func_ov002_02202a78Ev
#define func_ov002_02202af0 _ZN18Unk_ov002_02202d9819func_ov002_02202af0Ev
#define func_ov002_02202b68 _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev
#define func_ov002_02202be0 _ZN18Unk_ov002_0220464c19func_ov002_02202be0Ev
#define func_ov002_02202c40 _ZN18Unk_ov002_0220464c19func_ov002_02202c40Ev
#define func_ov002_02202ca0 _ZN18Unk_ov002_0220464c19func_ov002_02202ca0Ev
#define func_ov002_02202d00 _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei
#define func_ov002_02202fac _ZN18Unk_ov002_02202fac19func_ov002_02202facEi
#define func_ov002_02202fc8 _ZN18Unk_ov002_02202fac19func_ov002_02202fc8Ei
#define func_ov002_02202fe4 _ZN18Unk_ov002_02202fac19func_ov002_02202fe4Ei
#define func_ov002_0220306c _ZN18Unk_ov002_02202fac19func_ov002_0220306cEv
#define func_ov002_0220308c _ZN18Unk_ov002_02202fac19func_ov002_0220308cEv
#define func_ov002_022030ac _ZN18Unk_ov002_02202fac19func_ov002_022030acEh
#define func_ov002_022030b8 _ZN18Unk_ov002_02202fac19func_ov002_022030b8Ei
#define func_ov002_022030f4 _ZN18Unk_ov002_02202fac19func_ov002_022030f4Ei
#define func_ov002_02203110 _ZN18Unk_ov002_02202fac19func_ov002_02203110Ei
#define func_ov002_02203370 _ZN18Unk_ov002_02202fac19func_ov002_02203370Ei
#define func_ov002_022034c4 _ZN18Unk_ov002_022046cc19func_ov002_022034c4Eh
#define func_ov002_02203510 _ZN18Unk_ov002_022046cc19func_ov002_02203510Ei
#define func_ov002_022036a4 _ZN18Unk_ov002_022046cc19func_ov002_022036a4Ei
#define func_ov002_02203900 _ZN18Unk_ov002_022046cc19func_ov002_02203900Ev
#define func_ov002_02204234 _ZN18Unk_ov002_022040ec19func_ov002_02204234Ei
#define func_ov002_02204394 _ZN18Unk_ov002_022040ec19func_ov002_02204394EPhij
#define func_ov090_02291964 _ZN18Unk_ov090_022921e019func_ov090_02291964Ev
#define func_ov090_02291a90 _ZN18Unk_ov090_022921e019func_ov090_02291a90Ev
#define func_ov090_02291d2c _ZN18Unk_ov090_022921e019func_ov090_02291d2cEv
#define func_ov090_02291d8c _ZN18Unk_ov090_022921e019func_ov090_02291d8cEj
#define func_ov092_02291c5c _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv
#define func_ov092_02291ce4 _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii
#define func_ov111_02296840 _ZN18Unk_ov124_0229684019func_ov124_02296840Ev
#define func_ov115_022968ec _ZN18Unk_ov115_0229737819func_ov115_022968ecEii
#define func_ov124_02296858 _ZN18Unk_ov124_0229684019func_ov124_02296858Eii
#define func_ov124_02296c7c _ZN18Unk_ov124_0229684019func_ov124_02296c7cEhhjj
#define func_ov124_02296c90 _ZN18Unk_ov124_0229684019func_ov124_02296c90EPvi
#define func_ov124_02296c98 _ZN18Unk_ov124_0229684019func_ov124_02296c98Ev
#define func_ov124_02296cd4 _ZN18Unk_ov124_0229684019func_ov124_02296cd4Ev
#define func_ov124_02296d2c _ZN18Unk_ov124_0229684019func_ov124_02296d2cEi

extern "C" {
extern u16 gPad[];
extern u8 data_021eca50[];
extern u8 data_021d7352[];
extern u8 data_021d735c[];
extern u8 data_021edb68;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u32 gCurrentHeap;
extern u8 *data_020cbb18;
extern u32 data_ov126_02299ad0[4];

// main
s32 func_0206ed50();
s32 func_0206ed38();
void func_0206ecf8(s32 a);
void *func_0206ecf0();
void func_0206ed2c(u8 a);
void func_0206ecc8(void *p, u32 a);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
s32 func_0206e5cc();
BOOL func_0206e61c();
void func_0206e63c();
void Snd_PlaySe(u32 v);
void func_0200261c(const void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020026c4(const void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_020a78a4(void *a, void *b, s32 c);
void MsgString_fromEncoded(void *a, void *b, s32 c, s32 d);
s32 String_CensorTaboo(void *a);
void EncodedString_fromMsgString(void *a, void *b);
void StrBuf_GetBytes(void *a, void *b, s32 c);
void *func_02076cec(void *a);
void *func_02076ce8(void *a);
void Mem_Copy(void *a, void *b, s32 c);
s32 func_02051218(void *a, void *b, s32 c);
void Mem_Clear(void *p, s32 v);
s32 func_020512e0(void *p, s32 v);
u32 func_02051348(void *p, u32 a);
BOOL func_020512f8(void *p, u32 a);
void *func_02087298(void *a);
void *func_02071e04(void *a);
void func_02071ef4(void *a, void *b);
void func_02071f48(void *a, void *b);
BOOL func_020b0084(void *a, s32 b);
void func_020b0428(void *a, s32 b);
void func_020b03f0(void *a, s32 b);
s32 func_02063904(void *a, void *b);
s32 PlayerData_GetCurrent();
s32 PlayerData_getPlayerId(...);
s32 func_02097740(void *a, s32 b);
BOOL func_020978c8(void *a, s32 b);
s32 PlayerData_GetResident(void *a, s32 b);
s32 func_02094104(s32 a);
void func_02094108(s32 a, void *b);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_0206f9e4(void *p, const char *fmt, s32 a);
BOOL func_0206f88c(void *p, void *q, u32 n);
void func_0206267c(void *p);
void func_0206260c(void *p);
void ItemName_setFromItem(void *p, void *q);
void MsgString_copy(void *p, void *q);
void MsgString_clear(void *p);
void String_SetSlot(s32 a, void *p);
void func_0206f9fc(void *p, s32 a);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206fc44(void *p);
s32 func_020986d4(s32 a);
s32 PlayerData_getFriendList(s32 a);
void *func_02071c68(s32 a, s32 b);
void *func_02076db4(s32 a);
void *func_02076cf0(void *p);
void func_02076cf4(void *p);
void *func_02076e1c(void *p);
BOOL func_020e9c78(u32 a, void *b);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
BOOL func_02072e88(void *g, s32 v);
s32 func_020eaf18();
void Oam_DrawCell(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
BOOL HandCursor_getAnim(void *p);
BOOL HandCursor_isAnimDone(void *p);

// ov002 (non-base objects)
void func_ov002_02202d00(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_022034c4(void *p, s32 a);
void func_ov002_02203510(void *p, s32 a);
BOOL func_ov002_02202fac(void *p, s32 a);
BOOL func_ov002_02203110(void *p, s32 a);
void func_ov002_02202fe4(void *p, s32 a);
void func_ov002_02202fc8(void *p, s32 a);
void func_ov002_022030ac(void *p, s32 a);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
BOOL func_ov002_022028f0(void *p);
s32 func_ov002_0220288c(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202be0(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_02204394(void *p, void *q, u32 a, u32 b);
BOOL func_ov002_02204234(void *p, s32 a);
void func_ov002_02202a78(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_0220298c(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202844(void *p);
void func_ov002_022036a4(void *p, s32 a);
void func_ov002_02203900(void *p);
void func_ov002_02203920(void *p);
void func_ov002_02203370(void *p, s32 a);
s32 func_ov002_0220126c(void *p);
s32 func_ov002_0220125c(void *p);
s32 func_ov002_0220127c(void *p);

// ov124 / ov111 / ov115 / ov090 / ov092
void func_ov124_02296c7c(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov124_02296c90(void *p, void *q, u32 v);
void func_ov124_02296cd4(void *p);
void func_ov124_02296c98(void *p);
s32 func_ov124_02296c30(void *p);
void func_ov124_02296d2c(void *p, s32 a);
void func_ov124_02296858(void *p, s32 a, void *b);
void func_ov111_02296840(void *p);
void func_ov115_022968ec(void *p, s32 a);
void func_ov090_02291964(void *p);
void func_ov090_02291a90(void *p);
s32 func_ov090_02291d2c(void *p);
void func_ov090_02291d8c(void *p, s32 v);
void func_ov092_02291c5c(void *p);
void func_ov092_02291ce4(void *p, s32 a, s32 b);

// ov095 (menu sub-object at +0x144)
BOOL func_ov095_02295440(void *p, s32 a);
void func_ov095_02294d40(void *p, s32 a);
void func_ov095_02293da8(void *p);
void func_ov095_02294318(void *p);
s32 func_ov095_02292404(void *p);
s32 func_ov095_02294864(void *p, s32 a, s32 b);
s32 func_ov095_02292580(void *p);
s32 func_ov095_02292544(void *p);
void func_ov095_02295194(void *p);
void func_ov095_022924f0(void *p);
s32 func_ov095_02293da0(void *p);
void func_ov095_02293dc0(void *p);
s32 func_ov095_02293dc8(void *p, u32 a, s32 b);
s32 func_ov095_022940f0(void *p, void *q, u32 a, void *r, s32 b, s32 c, s32 d, s32 e);
s32 func_ov095_02293f90(void *p, u32 a);
s32 func_ov095_02293f8c(void *p, u32 a);
s32 func_ov095_02293f88(void *p, u32 a);
s32 func_ov095_02293f94(void *p, void *q, u32 a, u32 b, s32 c, s32 d);
s32 func_ov095_0229423c(void *p, u32 a);
s32 func_ov095_02295264(void *p);
s32 func_ov095_02295258(void *p);
s32 func_ov095_02294a44(void *p, s32 a, s32 b);
void func_ov095_02293d94(void *p);
void func_ov095_02293d88(void *p);
void func_ov095_022923ec(void *p);
void func_ov095_022923f8(void *p);
u32 func_ov095_02293fb4(void *p, void *q, u32 a, u32 b, s32 c);
u32 func_ov095_02293f2c(void *p, void *q, u32 a, u32 b, u32 c, void *d);
void func_ov095_022951e4(void *p);
void func_ov095_022953c0(void *p, s32 a);
void func_ov095_02295340(void *p, s32 a);
void func_ov095_022942c0(void *p);
void func_ov095_02294250(void *p, s32 a);
BOOL func_ov095_02294324(void *p);
BOOL func_ov095_022942e8(void *p);
s32 func_ov095_02294a40(void *p);
void func_ov095_02292ab8(void *p, s32 a);
s32 func_ov095_02292458(void *p, s32 a);
void func_ov095_02293cc0(void *p);
BOOL func_ov095_02293990(void *p);
void func_ov095_02294358(void *p, s32 a);
void func_ov095_022943b4(void *p, s32 a);
void func_ov095_022943dc(void *p, const void *q);
void func_ov095_022943f8(void *p, s32 a);
void func_ov095_02294438(void *p);
void func_ov095_02294478(void *p, s32 a);
s32 func_ov095_02294648(void *p, s32 a, s32 b, s32 c);
void func_ov095_0229483c(void *p, s32 a);
void func_ov095_02293b60(void *p, u32 a, void *b, u32 c);
void func_ov095_02293824(void *p, u32 a, void *b);
void func_ov095_022938f8(void *p, s32 a, s32 b, s32 c);
}

// Real class layouts for the objects whose constructors/destructors the compiler emits calls to.
class Unk_020e0488 {  // text window, 0x40 bytes
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    u8 unk_04[0x3c];
};

class Unk_020e0470 {  // 0x38 bytes
public:
    Unk_020e0470();
    ~Unk_020e0470();
    u8 unk_00[0x38];
};

class Unk_020e45f8 {  // screen upload helper, 0x24 bytes
public:
    Unk_020e45f8();
    virtual void vfunc_00();
    virtual void vfunc_04();
    u8 unk_04[0x20];
};

class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

class Unk_ov002_02202d98 : public HandCursor {};

// +0x3e64 sub-object (0x64 bytes)
class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

// +0x3d00 sub-object (0x164 bytes)
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    u32 unk_00[0x164 / 4];
};

// +0x3f80 holder object, 0x108 bytes
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    u32 unk_00[0x108 / 4];
};

// +0xb0 menu sub-object, 0x94 bytes
class Unk_ov124_02296840 {
public:
    Unk_ov124_02296840();
    ~Unk_ov124_02296840();
    u32 unk_00[0x94 / 4];
};

// 0x24-byte record object (ctor/dtor in main)
class ItemName {
public:
    ItemName();
    ~ItemName();
    u32 unk_00[9];
};

// +0x144 ov095 menu sub-object, 0x23bc bytes
class Unk_ov126_ov095_02293b60 {
public:
    Unk_ov126_ov095_02293b60() : unk_22f4(), unk_233c() {}
    ~Unk_ov126_ov095_02293b60() {}
    u32 unk_00[0x22f4 / 4];
    Unk_020e45f8 unk_22f4[2];
    Unk_020e0488 unk_233c[2];
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

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_0220085c(s32 a, s32 b);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

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

// Embedded polymorphic sub-object at +0x3e64 (vfunc_0c is called by func_ov126_02298ea4)
class Unk_ov126_02298ea4_Sub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

static inline BOOL Unk_ov126_02298c4c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

class Unk_ov126_02299ae8;
typedef void (Unk_ov126_02299ae8::*Unk_ov126_02299ae8_Fn)();

class Unk_ov126_02299ae8;
struct Unk_ov126_SceneEntry {
    Unk_ov126_02299ae8 *(*factory)();
    u16 a;
    u16 b;
};

// Vtable 0x02299ae8, size 0x40c8
class Unk_ov126_02299ae8 : public Unk_ov002_022044e4 {
public:
    Unk_ov126_02299ae8()
        : unk_b0(), unk_144(), unk_3d00(), unk_3e64(), unk_3ec8(), unk_3f08(), unk_3f48(), unk_3f80() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov126_02297168(u32 mask);
    void func_ov126_02297178(u32 mask);
    BOOL func_ov126_02297188(u32 mask);
    void func_ov126_0229719c();
    void func_ov126_022971fc();
    void func_ov126_022972a8();
    void func_ov126_022972cc();
    void func_ov126_022972f0();
    void func_ov126_02297328();
    s32 func_ov126_02297360();
    void func_ov126_02297378();
    void func_ov126_022973f8();
    void func_ov126_02297440();
    void func_ov126_022974d0();
    void func_ov126_02297518();
    void func_ov126_0229755c();
    void func_ov126_022975d4();
    void func_ov126_022975f4();
    u8 * func_ov126_02297614();
    void func_ov126_0229763c();
    void func_ov126_02297658();
    BOOL func_ov126_02297698();
    BOOL func_ov126_022976bc();
    BOOL func_ov126_02297720();
    BOOL func_ov126_0229778c();
    BOOL func_ov126_022977e8();
    void func_ov126_02297858();
    void func_ov126_02297878();
    void func_ov126_022978a4();
    void func_ov126_022978c4();
    void func_ov126_02297920();
    void func_ov126_02297994();
    void func_ov126_022979b8();
    void func_ov126_02297a0c();
    BOOL func_ov126_02297a5c();
    void func_ov126_02297ac8();
    void func_ov126_02297ad4();
    void func_ov126_02297b38();
    BOOL func_ov126_02297bac(u32 x);
    BOOL func_ov126_02297bf0(u32 x);
    BOOL func_ov126_02297c4c(s32 x);
    BOOL func_ov126_02297ce4(s32 x);
    s32 func_ov126_02297d94(s32 x);
    s32 func_ov126_02297ed4();
    void func_ov126_02297f38();
    void func_ov126_02297ffc();
    void func_ov126_02298064();
    void func_ov126_02298098();
    void func_ov126_022980bc();
    void func_ov126_0229810c();
    BOOL func_ov126_02298124();
    s32 func_ov126_0229814c(s32 a);
    BOOL func_ov126_022981cc();
    void func_ov126_02298238(s32 v);
    void func_ov126_022982a8();
    u32 func_ov126_022982e8();
    void func_ov126_02298304(u32 v);
    void func_ov126_02298314();
    void func_ov126_02298358();
    BOOL func_ov126_02298430();
    BOOL func_ov126_02298470();
    void func_ov126_022984c0(s32 a);
    void func_ov126_02298570();
    void func_ov126_02298590();
    void func_ov126_022985a8();
    void func_ov126_022985c0(u32 v, u32 w);
    void func_ov126_022985fc();
    void func_ov126_0229861c();
    void func_ov126_02298638();
    void func_ov126_02298650();
    void func_ov126_02298680();
    void func_ov126_022986ec();
    void func_ov126_0229871c();
    void func_ov126_0229874c();
    void func_ov126_022987b0();
    void func_ov126_022987d8();
    void func_ov126_02298834();
    void func_ov126_022988bc();
    void func_ov126_022988e8();
    void func_ov126_02298944();
    void func_ov126_02298964();
    void func_ov126_02298a44();
    void func_ov126_02298a5c();
    void func_ov126_02298b2c();
    void func_ov126_02298ba0();
    void func_ov126_02298bfc();
    void func_ov126_02298c4c();
    void func_ov126_02298cf8();
    void func_ov126_02298db8();
    void func_ov126_02298e20();
    void func_ov126_02298e58();
    void func_ov126_02298e6c();
    void func_ov126_02298e9c();
    void func_ov126_02298ea4();
    void func_ov126_02298ec0();
    void func_ov126_02298ef4();
    void func_ov126_022990d0();
    void func_ov126_022990fc();
    void func_ov126_02299120();
    void func_ov126_02299150();
    void func_ov126_0229916c();
    void func_ov126_02299190();
    void func_ov126_022991e0();
    void func_ov126_022991fc();
    void func_ov126_02299280();
    void func_ov126_022992d0();
    void func_ov126_022993cc();
    void func_ov126_022993fc();
    void func_ov126_0229945c();
    void func_ov126_02299570();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ u16 unk_a4;
    /* 0x0a6 */ u8 unk_a6;
    /* 0x0a7 */ u8 unk_a7;
    /* 0x0a8 */ u8 unk_a8;
    /* 0x0a9 */ u8 unk_a9;
    /* 0x0aa */ u8 unk_aa;
    /* 0x0ab */ u8 unk_ab;
    /* 0x0ac */ u8 unk_ac;
    /* 0x0ad */ u8 unk_ad;
    /* 0x0ae */ u8 unk_ae;
    /* 0x0af */ u8 unk_af;
    /* 0x0b0 */ Unk_ov124_02296840 unk_b0;
    /* 0x144 */ Unk_ov126_ov095_02293b60 unk_144;
    /* 0x2500 */ u32 unk_2500[(0x3d00 - 0x2500) / 4];
    /* 0x3d00 */ Unk_ov002_022046cc unk_3d00;
    /* 0x3e64 */ Unk_ov002_02204614 unk_3e64;
    /* 0x3ec8 */ Unk_020e0488 unk_3ec8;
    /* 0x3f08 */ Unk_020e0488 unk_3f08;
    /* 0x3f48 */ Unk_020e0470 unk_3f48;
    /* 0x3f80 */ Unk_ov002_022040ec unk_3f80;
    /* 0x4088 */ u8 unk_4088[0x20];
    /* 0x40a8 */ u8 unk_40a8[0x20];
};

// Named data: their definition order sets the .data order (compiler-generated constants would not reproduce it).
extern "C" Unk_ov126_02299ae8 *func_ov126_02299914();
extern "C" Unk_ov126_SceneEntry data_ov126_022999e0 = {func_ov126_02299914, 0xab, 0xaf};
extern "C" u32 data_ov126_02299ad0[4] = {0x802040c8, 0x000051c0, 0x404000c8, 0xffff51c4};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022993fcEv();
extern "C" void *data_ov126_02299ac0[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022993fcEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_0229945cEv();
extern "C" void *data_ov126_02299ac8[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_0229945cEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02298a5cEv();
extern "C" void *data_ov126_02299a40[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02298a5cEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022993ccEv();
extern "C" void *data_ov126_02299ab8[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022993ccEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022992d0Ev();
extern "C" void *data_ov126_02299ab0[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022992d0Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02299280Ev();
extern "C" void *data_ov126_02299aa8[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02299280Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022991fcEv();
extern "C" void *data_ov126_02299aa0[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022991fcEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022991e0Ev();
extern "C" void *data_ov126_02299a98[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022991e0Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02299190Ev();
extern "C" void *data_ov126_02299a90[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02299190Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_0229916cEv();
extern "C" void *data_ov126_02299a88[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_0229916cEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02299150Ev();
extern "C" void *data_ov126_02299a80[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02299150Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02299120Ev();
extern "C" void *data_ov126_02299a78[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02299120Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022990fcEv();
extern "C" void *data_ov126_02299a70[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022990fcEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02298834Ev();
extern "C" void *data_ov126_02299a68[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02298834Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02298c4cEv();
extern "C" void *data_ov126_02299a10[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02298c4cEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02298bfcEv();
extern "C" void *data_ov126_02299a58[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02298bfcEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022987b0Ev();
extern "C" void *data_ov126_02299a50[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022987b0Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02298b2cEv();
extern "C" void *data_ov126_02299a60[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02298b2cEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02298ba0Ev();
extern "C" void *data_ov126_02299a48[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02298ba0Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02298a44Ev();
extern "C" void *data_ov126_02299a38[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02298a44Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02298964Ev();
extern "C" void *data_ov126_02299a30[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02298964Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022988e8Ev();
extern "C" void *data_ov126_02299a28[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022988e8Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022988bcEv();
extern "C" void *data_ov126_02299a20[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022988bcEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02298680Ev();
extern "C" void *data_ov126_02299a18[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02298680Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022987d8Ev();
extern "C" void *data_ov126_022999e8[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022987d8Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_02298650Ev();
extern "C" void *data_ov126_02299a00[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_02298650Ev, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_0229874cEv();
extern "C" void *data_ov126_02299a08[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_0229874cEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_0229871cEv();
extern "C" void *data_ov126_022999f8[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_0229871cEv, 0};
extern "C" void _ZN18Unk_ov126_02299ae819func_ov126_022986ecEv();
extern "C" void *data_ov126_022999f0[2] = {(void *)_ZN18Unk_ov126_02299ae819func_ov126_022986ecEv, 0};

extern "C" Unk_ov126_02299ae8 *func_ov126_02299914() { return new Unk_ov126_02299ae8(); }

BOOL Unk_ov126_02299ae8::vfunc_00() {
    func_ov126_02298ef4();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov126_02299ae8::vfunc_0c() {
    s32 t = func_0206ed50();
    if ((u32)t >= 0x18 && (u32)t <= 0x1b) {
        void *h = ProcBase_GetParent(this);
        if (func_ov090_02291d2c(h) == 6) {
            func_ov090_02291a90(h);
        }
    } else {
        func_ov092_02291c5c(ProcBase_GetParent(this));
    }
    func_ov126_02298ec0();
    return TRUE;
}

BOOL Unk_ov126_02299ae8::onDraw() {
    u8 *p = (u8 *)unk_94;
    if (!func_ov126_02297188(1)) {
        return FALSE;
    }
    if (MenuCtrl_IsButtons()) {
        func_ov002_02202844(&unk_3e64);
    }
    func_ov124_02296858(&unk_b0, 0, p);
    func_ov002_022036a4(&unk_3d00, func_ov002_02200920());
    func_ov095_02293b60(&unk_144, 0x80, p + 0x60, 1);
    func_ov095_02293824(&unk_144, 0x80, p + 0x60);
    if (func_ov126_02297188(0x100)) {
        Oam_DrawCell(1, data_ov126_02299ad0, (u32)unk_a0 + 0x80, p + 0x60, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    if (func_ov126_02297188(2)) {
        s32 a = unk_98;
        s32 b = unk_9c;
        unk_a7 = unk_a7 + 1;
        if ((unk_a7 & 0x10) != 0) {
            func_ov095_022938f8(&unk_144, a, b, 2);
        }
    }
    return TRUE;
}

BOOL Unk_ov126_02299ae8::vfunc_4c() {
    static Unk_ov126_02299ae8_Fn tbl[12] = {*(Unk_ov126_02299ae8_Fn *)data_ov126_02299ac8, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299ac0, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299ab8, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299ab0, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299aa8, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299aa0, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a98, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a90, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a88, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a80, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a78, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a70};
    func_ov126_02298e6c();
    (this->*tbl[unk_8c])();
    func_ov126_02298e58();
    return TRUE;
}

void Unk_ov126_02299ae8::func_ov126_02299570() {
    static Unk_ov126_02299ae8_Fn tbl[17] = {*(Unk_ov126_02299ae8_Fn *)data_ov126_02299a10, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a58, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a48, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a60, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a40, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a38, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a30, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a28, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a20, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a68, *(Unk_ov126_02299ae8_Fn *)data_ov126_022999e8, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a50, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a08, *(Unk_ov126_02299ae8_Fn *)data_ov126_022999f8, *(Unk_ov126_02299ae8_Fn *)data_ov126_022999f0, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a18, *(Unk_ov126_02299ae8_Fn *)data_ov126_02299a00};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov126_02299ae8::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        u32 r5 = func_0206ed50();
        switch (r5) {
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
            switch (unk_8d) {
            case 0: case 1: case 2: case 4: case 6: case 7: case 9: case 10: case 11: case 12: case 13: case 14:
                func_ov126_02297168(2);
                func_ov126_02297994();
                func_ov090_02291d8c(ProcBase_GetParent(this), 7);
                func_ov126_02297178(0x40);
                func_ov002_022008c4(0xa, 0, 0, 0x30);
                func_ov126_022990d0();
                func_ov002_02200a50(5);
                func_ov002_02200a60(1);
                if (r5 == 0x19 || r5 == 0x1b) {
                    func_02076cf4(func_ov126_02297614());
                }
                break;
            case 3:
            case 5:
            case 8:
                break;
            }
            break;
        }
    }
    func_ov126_02298ea4();
    func_ov126_02299570();
    func_ov126_02298e9c();
    return TRUE;
}

BOOL Unk_ov126_02299ae8::vfunc_54() {
    return TRUE;
}

BOOL Unk_ov126_02299ae8::vfunc_58() {
    return TRUE;
}

BOOL Unk_ov126_02299ae8::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov126_02299ae8::func_ov126_0229945c() {
    func_ov126_02298e20();
    func_ov126_02298db8();
    func_ov002_02200a50(1);
}

void Unk_ov126_02299ae8::func_ov126_022993fc() {
    func_ov095_0229483c(&unk_144, 6);
    func_ov126_02298cf8();
    func_ov126_02297b38();
    func_ov126_02297a0c();
    func_ov002_022008e0(0xa, 4, 0, 0x30);
    func_020020b8(4);
    func_020020b8(6);
    func_ov126_022990d0();
    func_ov126_02297178(1);
    func_ov002_02200a50(2);
}

void Unk_ov126_02299ae8::func_ov126_022993cc() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov126_022985fc();
        func_ov126_02298314();
    }
    func_ov126_022990d0();
}

void Unk_ov126_02299ae8::func_ov126_022992d0() {
    func_ov126_02297168(2);
    u32 r5 = func_0206ed50();
    if (r5 >= 0x18 && r5 <= 0x1b) {
        void *r6 = ProcBase_GetParent(this);
        switch (r5) {
        case 0x18:
        case 0x1a:
            func_ov090_02291d8c(r6, 6);
            if (!func_ov126_02297188(0x40)) {
                func_0206e5cc();
            }
            break;
        case 0x19:
            if (func_ov126_02297188(0x40)) {
                func_ov090_02291d8c(r6, 0xc);
            } else {
                func_ov090_02291d8c(r6, 6);
                func_0206e5cc();
                if (func_02072e88(data_020cbb18, ((s32 *)data_020cbb18)[0x64 / 4])) {
                    s32 t = func_020eaf18();
                    if (t == 3) goto yes;
                    if (t == 4) {
                    yes:
                        func_ov002_02200a50(4);
                        func_ov126_02299280();
                        return;
                    }
                }
            }
            break;
        case 0x1b:
            if (func_ov126_02297188(0x40)) {
                func_ov090_02291d8c(r6, 0xe);
            } else {
                func_ov090_02291d8c(r6, 0xa);
            }
            break;
        }
    } else {
        func_ov092_02291ce4(ProcBase_GetParent(this), 0x44, 1);
    }
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov126_022990d0();
    func_ov002_02200a50(5);
}

void Unk_ov126_02299ae8::func_ov126_02299280() {
    void *r4 = func_ov126_02297614();
    s32 r6 = func_0206ed38();
    if (func_020e9c78(r6, func_02076e1c(func_02076cf0(r4)))) {
        func_ov002_022008c4(0xa, 0, 0, 0x30);
        func_ov126_022990d0();
        func_ov002_02200a50(5);
    }
}

void Unk_ov126_02299ae8::func_ov126_022991fc() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_020021a0(6);
        func_ov126_02297168(1);
        func_ov002_02200a60(5);
        if (func_ov126_02297188(0x40)) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_ov126_022971fc();
            func_0206ecc8(unk_4088, unk_a6);
            s32 t = func_0206ed50();
            if (t != 0x18 && t != 0x19 && t != 0x1a) {
            } else {
                func_ov090_02291964(ProcBase_GetParent(this));
            }
        }
    } else {
        func_ov126_022990d0();
    }
}

void Unk_ov126_02299ae8::func_ov126_022991e0() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(7);
}

void Unk_ov126_02299ae8::func_ov126_02299190() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200874(0, 0);
        if (func_ov126_02297188(0x40)) {
            func_ov002_02203370(&unk_3d00, 0x87);
        } else {
            func_ov002_02203370(&unk_3d00, 0x22);
        }
        func_ov002_02200a50(8);
    }
}

void Unk_ov126_02299ae8::func_ov126_0229916c() {
    if (func_ov002_02200908(-1)) {
        func_ov002_02200a60(2);
        func_ov126_02298570();
    }
}

void Unk_ov126_02299ae8::func_ov126_02299150() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(0xa);
}

void Unk_ov126_02299ae8::func_ov126_02299120() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200874(0, 0);
        func_ov126_02297a0c();
        func_ov002_02200a50(0xb);
    }
}

void Unk_ov126_02299ae8::func_ov126_022990fc() {
    if (func_ov002_02200908(-1)) {
        func_ov002_02200a60(2);
        func_ov126_022985fc();
    }
}

void Unk_ov126_02299ae8::func_ov126_022990d0() {
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0);
    unk_94 = func_ov002_02200920();
}

void Unk_ov126_02299ae8::func_ov126_02298ef4() {
    unk_a4 = 0;
    unk_a0 = 0;
    u32 r5 = func_0206ed50();
    switch (r5) {
    case 0x0b: case 0x0c: case 0x0d: case 0x0e: case 0x0f: case 0x10: case 0x11: case 0x12:
    case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: case 0x18: case 0x1a:
        unk_ad = 2;
        break;
    case 0x19:
    case 0x1b:
        func_ov126_02297178(0x20);
        unk_ad = 0;
        break;
    }
    switch (unk_ad) {
    case 0:
        func_ov095_02294478(&unk_144, 5);
        break;
    case 1:
    case 2:
        func_ov095_02294478(&unk_144, 4);
        break;
    case 3:
        func_ov095_02294478(&unk_144, 3);
        break;
    }
    switch (func_ov124_02296c30(&unk_b0)) {
    case 0:
        unk_a6 = 0x10;
        unk_ab = 0x50;
        unk_ac = 0xb8;
        unk_af = 0x68;
        break;
    case 1:
        unk_a6 = 0x8;
        unk_ab = 0x60;
        unk_ac = 0xa0;
        unk_af = 0x40;
        break;
    case 2:
        unk_a6 = 0x20;
        unk_ab = 0x30;
        unk_ac = 0xd0;
        unk_af = 0xa0;
        break;
    case 3:
        unk_a6 = 0x4;
        unk_ab = 0x68;
        unk_ac = 0x90;
        unk_af = 0x28;
        break;
    case 4:
        unk_a6 = 0xa;
        unk_ab = 0x58;
        unk_ac = 0xa8;
        unk_af = 0x50;
        break;
    }
    Mem_Clear(unk_4088, 0x20);
    Mem_Clear(unk_40a8, 0x20);
    func_ov126_0229755c();
    if (func_020512f8(unk_4088, unk_a6) == 0) {
        Mem_Clear(unk_4088, 0x20);
    }
    if (r5 == 0x10 || r5 == 0x18 || r5 == 0x19 || r5 == 0x12) {
        func_ov126_02297178(0x100);
    }
}

void Unk_ov126_02299ae8::func_ov126_02298ec0() {
    func_ov111_02296840(&unk_b0);
    func_ov095_02294438(&unk_144);
    func_ov002_02203900(&unk_3d00);
    func_0206fc44(&unk_3ec8);
}

void Unk_ov126_02299ae8::func_ov126_02298ea4() {
    func_ov126_02298e6c();
    ((Unk_ov126_02298ea4_Sub *)&unk_3e64)->vfunc_0c();
}

void Unk_ov126_02299ae8::func_ov126_02298e9c() {
    func_ov126_02298e58();
}

void Unk_ov126_02299ae8::func_ov126_02298e6c() {
    func_ov126_02297168(0x10);
    func_ov111_02296840(&unk_b0);
    func_ov002_02203900(&unk_3d00);
    func_0206fc44(&unk_3ec8);
}

void Unk_ov126_02299ae8::func_ov126_02298e58() {
    func_ov095_02294358(&unk_144, 6);
}

void Unk_ov126_02299ae8::func_ov126_02298e20() {
    func_020015b8(0);
    func_02002398(4, 3);
    func_0200226c(4, 0, 0, 0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov126_02299ae8::func_ov126_02298db8() {
    func_ov124_02296d2c(&unk_b0, 4);
    func_0200261c("menu/chat2/b_cht.bch", (void *)gCurrentHeap, 4, 0x13d, 0x13d, 0x1e9);
    func_ov095_022943dc(&unk_144, "menu/letter/b_key.bsc");
    func_ov126_02298358();
    func_ov095_022943b4(&unk_144, 6);
    func_ov095_022943f8(&unk_144, 6);
}

void Unk_ov126_02299ae8::func_ov126_02298cf8() {
    func_ov095_02293cc0(&unk_144);
    func_ov115_022968ec(&unk_b0, 6);
    func_020026c4("menu/han/obj.bpl", (void *)gCurrentHeap, 8, 5, 5, 5);
    func_ov002_02203920(&unk_3d00);
    if (func_ov126_02297188(0x100)) {
        u32 buf[0x44 / 4];
        func_0206fcc8(buf);
        MsgString_clear(buf);
        String_SetSlot(0, buf);
        if (func_0206ed50() == 0x12) {
            func_0206f9fc(&unk_3ec8, 0x80);
        } else {
            func_0206f9fc(&unk_3ec8, 0x66);
        }
        func_0206fb9c(&unk_3ec8, 8, 0x1c0, 6, 0xf, 0, 0);
        func_0206fab4(&unk_3ec8, 0, 0);
        func_0206fca8(buf);
    }
}

void Unk_ov126_02299ae8::func_ov126_02298c4c() {
    if (func_ov002_02200a14(1)) {
        func_ov126_0229861c();
        return;
    }
    BOOL r4 = func_ov095_02294324(&unk_144);
    if (Unk_ov126_02298c4c_Both()) {
        if (!func_ov126_02297a5c()) {
            if (!func_ov126_022981cc()) {
                if (func_ov095_02293990(&unk_144)) {
                    func_ov095_02294648(&unk_144, 8, 6, 1);
                    func_ov126_02297b38();
                } else if (gTouchCurY >= 0x48) {
                    if (!r4) {
                        s32 r = func_ov126_02297ed4();
                        if (r != 0) {
                            if (r == 1) {
                                func_ov002_02200a58(2);
                            }
                        }
                    }
                }
            }
        }
    }
}

void Unk_ov126_02299ae8::func_ov126_02298bfc() {
    if (gTouchHeld == 0) {
        func_ov002_02200a58(0);
    } else {
        u8 old = unk_a8;
        func_ov126_02298238(gTouchCurX);
        if (old != unk_a8) {
            func_ov126_02298064();
            func_ov126_02297b38();
            Snd_PlaySe(0x15);
        }
    }
}

void Unk_ov126_02299ae8::func_ov126_02298ba0() {
    if (gTouchHeld == 0) {
        func_ov002_02200a58(0);
    } else if (func_ov095_022942e8(&unk_144)) {
        s32 t = func_ov095_02294a40(&unk_144);
        s32 r = func_ov095_02294864(&unk_144, t, 8);
        func_ov126_02297d94(r);
        func_ov095_02294d40(&unk_144, t);
    }
}

void Unk_ov126_02299ae8::func_ov126_02298b2c() {
    if (func_ov002_02200a14(1)) {
        func_ov126_02298590();
    } else if (func_ov002_02203110(&unk_3d00, 3)) {
        func_ov002_022030ac(&unk_3d00, 3);
        unk_8c = 3;
        func_ov002_02200a58(0xf);
    } else if (func_ov002_02203110(&unk_3d00, 4)) {
        func_ov002_022030ac(&unk_3d00, 4);
        unk_8c = 9;
        func_ov002_02200a58(0xf);
    }
}

void Unk_ov126_02299ae8::func_ov126_02298a5c() {
    if (func_ov002_022009d4()) {
        func_ov126_02298638();
    } else {
        switch (func_ov095_02292458(&unk_144, func_ov002_022009c8())) {
        case 1:
            func_ov002_02202c40(&unk_3e64);
            func_ov126_02297920();
            break;
        case 2:
            func_ov002_02202be0(&unk_3e64);
            func_ov126_02297920();
            break;
        case 3:
            func_ov002_02202ca0(&unk_3e64);
            func_ov126_02297920();
            break;
        case 4:
            func_ov002_02202c40(&unk_3e64);
            func_ov126_02297178(0x80);
            func_ov002_02200a58(6);
            func_ov126_02297920();
            break;
        case 0:
        default:
            if (func_ov126_022977e8()) { return; }
            if (func_ov126_0229778c()) { return; }
            if (func_ov126_022976bc()) { return; }
            if (func_ov126_02297720()) { return; }
            if (func_ov126_02297698()) { return; }
        }
    }
}

void Unk_ov126_02299ae8::func_ov126_02298a44() {
    if (func_ov002_022009d4()) {
        func_ov126_022985a8();
    }
}

void Unk_ov126_02299ae8::func_ov126_02298964() {
    if (func_ov002_022009d4()) {
        func_ov126_02298638();
    } else {
        s32 r = func_ov126_0229814c(func_ov002_022009c8());
        switch (r) {
        case 1:
            func_ov095_02293dc0(&unk_144);
            func_ov126_0229810c();
            func_ov126_022982a8();
            func_ov126_02297b38();
            func_ov126_022978c4();
            Snd_PlaySe(0xb);
            break;
        case 2:
            func_ov095_02292ab8(&unk_144, func_ov002_0220288c(&unk_3e64));
            func_ov126_02298944();
            break;
        default: {
            u32 old = unk_a8;
            if (func_ov126_0229778c()) {
                if (old != unk_a8) {
                    func_ov126_022978c4();
                }
            } else if (func_ov126_022976bc()) {
            } else if (func_ov126_02297720()) {
            } else if (func_ov126_02297698()) {
            } else if ((gPad[1] & 1) != 0) {
                func_ov002_02200a58(7);
                func_ov126_02298098();
            }
        }
        }
    }
}

void Unk_ov126_02299ae8::func_ov126_02298944() {
    func_ov126_02297168(0x80);
    func_ov002_02200a58(4);
    func_ov126_02297920();
}

void Unk_ov126_02299ae8::func_ov126_022988e8() {
    if ((gPad[0] & 1) == 0) {
        func_ov002_02200a58(6);
    } else if (func_ov126_0229814c(func_ov002_022009c8()) == 1) {
        func_ov095_02293dc0(&unk_144);
        func_ov126_02298064();
        func_ov126_022982a8();
        func_ov126_02297b38();
        func_ov126_022978c4();
        Snd_PlaySe(0x15);
    }
}

void Unk_ov126_02299ae8::func_ov126_022988bc() {
    if (func_ov002_022028f0(&unk_3e64) == 0) {
        func_ov002_02200a58(unk_ae);
        func_ov126_02299570();
    }
}

void Unk_ov126_02299ae8::func_ov126_02298834() {
    if (HandCursor_isAnimDone(&unk_3e64)) {
        s32 t = func_ov095_02292404(&unk_144);
        s32 r = func_ov126_02297d94(func_ov095_02294864(&unk_144, t, 8));
        if (r == 1 && (gPad[0] & 1) != 0) {
            func_ov095_02294318(&unk_144);
            func_ov002_02200a58(0xa);
            func_ov095_02294d40(&unk_144, t);
        } else if (r == 4) {
            func_ov095_02295194(&unk_144);
        } else if (r != 3) {
            func_ov126_02297878();
        }
    }
}

void Unk_ov126_02299ae8::func_ov126_022987d8() {
    if ((gPad[0] & 1) == 0) {
        func_ov126_02297878();
    } else if (func_ov095_022942e8(&unk_144)) {
        s32 t = func_ov095_02294a40(&unk_144);
        s32 r = func_ov095_02294864(&unk_144, t, 8);
        func_ov126_02297d94(r);
        func_ov095_02294d40(&unk_144, t);
    }
}

void Unk_ov126_02299ae8::func_ov126_022987b0() {
    if (HandCursor_isAnimDone(&unk_3e64)) {
        func_ov126_02297858();
        func_ov002_02200a58(4);
    }
}

void Unk_ov126_02299ae8::func_ov126_0229874c() {
    if ((gPad[0] & 2) == 0) {
        func_ov002_02200a58(unk_ae);
    } else if (func_ov095_022942e8(&unk_144)) {
        func_ov095_02293da8(&unk_144);
        if (func_ov126_02297c4c(0)) {
            if (func_ov126_02297188(0x80)) {
                func_ov126_022978c4();
            }
        } else {
            func_ov126_02298430();
        }
    }
}

void Unk_ov126_02299ae8::func_ov126_0229871c() {
    if ((gPad[0] & 0x200) == 0) {
        func_ov002_02200a58(unk_ae);
        func_ov126_02298358();
    }
}

void Unk_ov126_02299ae8::func_ov126_022986ec() {
    if ((gPad[0] & 0x100) == 0) {
        func_ov002_02200a58(unk_ae);
        func_ov126_02298358();
    }
}

void Unk_ov126_02299ae8::func_ov126_02298680() {
    if (func_ov002_0220308c(&unk_3d00)) {
        if (HandCursor_getAnim(&unk_3e64)) {
            s32 a = func_ov002_0220306c(&unk_3d00);
            s32 b = func_ov002_022030f4(&unk_3d00, -1);
            s32 c = func_ov002_022030b8(&unk_3d00, -1);
            func_ov002_02202a40(&unk_3e64, a + b, a + c);
        }
    } else {
        func_ov126_02297994();
        func_ov002_02200a60(1);
    }
}

void Unk_ov126_02299ae8::func_ov126_02298650() {
    func_ov095_02294324(&unk_144);
    if (func_ov002_02204234(&unk_3f80, 1)) {
        func_ov126_022985fc();
    }
}

void Unk_ov126_02299ae8::func_ov126_02298638() {
    func_ov126_02297994();
    func_ov002_02200a58(0);
}

void Unk_ov126_02299ae8::func_ov126_0229861c() {
    func_ov002_02200980();
    func_ov126_022979b8();
    func_ov002_02200a58(4);
}

void Unk_ov126_02299ae8::func_ov126_022985fc() {
    if (MenuCtrl_IsTouch()) {
        func_ov126_02298638();
    } else {
        func_ov126_0229861c();
    }
}

void Unk_ov126_02299ae8::func_ov126_022985c0(u32 v, u32 w) {
    u8 buf[1];
    buf[0] = data_021edb68;
    buf[0] = v;
    func_ov002_02204394(&unk_3f80, buf, w, 0);
    func_ov002_02200a58(0x10);
    func_ov126_02297994();
}

void Unk_ov126_02299ae8::func_ov126_022985a8() {
    func_ov126_02297994();
    func_ov002_02200a58(3);
}

void Unk_ov126_02299ae8::func_ov126_02298590() {
    func_ov002_02200980();
    func_ov002_02200a58(5);
}

void Unk_ov126_02299ae8::func_ov126_02298570() {
    if (MenuCtrl_IsTouch()) {
        func_ov126_022985a8();
    } else {
        func_ov126_02298590();
    }
}

void Unk_ov126_02299ae8::func_ov126_022984c0(s32 a) {
    if (a == 0) {
        func_ov002_022030ac(&unk_3d00, 6);
        if (unk_ad == 1) {
            func_ov126_02297178(0x40);
        } else {
            func_ov126_02297168(0x40);
        }
    } else {
        func_ov002_022030ac(&unk_3d00, 7);
        func_ov126_02297178(0x40);
    }
    if (func_ov126_02297188(0x20)) {
        if (func_ov126_02297188(0x40)) {
            Snd_PlaySe(0x2a);
        } else if (func_0206ed50() == 0x19) {
            Snd_PlaySe(0x27);
        } else {
            Snd_PlaySe(0x29);
        }
    } else if (func_ov126_02297188(0x40)) {
        Snd_PlaySe(0x28);
    } else {
        Snd_PlaySe(0x27);
    }
    unk_8c = 3;
    func_ov002_02200a58(0xf);
}

BOOL Unk_ov126_02299ae8::func_ov126_02298470() {
    if (func_ov002_02202fac(&unk_3d00, 6)) {
        func_ov126_02297ac8();
        return FALSE;
    }
    if (unk_ad == 0 || unk_ad == 2) {
        func_ov126_02297994();
        func_ov126_022984c0(0);
        return TRUE;
    }
    func_ov126_02297ac8();
    return FALSE;
}

BOOL Unk_ov126_02299ae8::func_ov126_02298430() {
    switch (unk_ad) {
    case 0:
        func_ov126_02297994();
        func_ov126_022984c0(1);
        return TRUE;
    case 1:
        func_ov126_02297994();
        func_ov126_022984c0(0);
        return TRUE;
    default:
        func_ov126_02297ac8();
        return FALSE;
    }
}

void Unk_ov126_02299ae8::func_ov126_02298358() {
    if (unk_ad == 0 || unk_ad == 2) {
        if (func_020512f8(unk_4088, unk_a6) == 0) {
            func_ov002_02202fe4(&unk_3d00, 6);
        } else {
            func_ov002_02202fc8(&unk_3d00, 6);
        }
    }
    func_ov095_022953c0(&unk_144, 0);
    if (func_ov126_02298124()) {
        func_ov095_02295340(&unk_144, 0xb);
    } else {
        func_ov095_022953c0(&unk_144, 0xb);
    }
    if (func_ov126_02297188(8)) {
        func_ov095_02295340(&unk_144, 0xc);
    } else {
        func_ov095_022953c0(&unk_144, 0xc);
    }
    if (func_ov126_02298124()) {
        func_ov095_022942c0(&unk_144);
        func_ov095_02295340(&unk_144, 6);
    } else if (unk_a8 == 0) {
        func_ov095_022942c0(&unk_144);
    } else {
        func_ov095_02294250(&unk_144, func_ov126_022982e8());
    }
}

void Unk_ov126_02299ae8::func_ov126_02298314() {
    func_ov126_02297178(2);
    unk_98 = unk_ab;
    unk_9c = 0x28;
    func_ov126_02298304(0);
    func_ov126_0229810c();
    func_ov095_022951e4(&unk_144);
    func_ov126_02298358();
}

void Unk_ov126_02299ae8::func_ov126_02298304(u32 v) {
    unk_a8 = v;
    unk_a7 = 0x10;
}

u32 Unk_ov126_02299ae8::func_ov126_022982e8() {
    if (unk_a8 == 0) return 0;
    return *((u8 *)this + (unk_a8 - 1) + 0x4088);
}

void Unk_ov126_02299ae8::func_ov126_022982a8() {
    unk_98 = unk_ab;
    unk_9c = 0x28;
    unk_98 = unk_98 + (u8)func_02051348(unk_4088, unk_a8);
}

void Unk_ov126_02299ae8::func_ov126_02298238(s32 v) {
    s32 t = v - unk_ab;
    if (t < 0) t = 0;
    u8 out[8];
    unk_98 = func_ov095_02293f2c(&unk_144, unk_4088, unk_a6, unk_af, (u8)t, out);
    unk_98 = unk_98 + unk_ab;
    func_ov126_02298304(out[0]);
    func_ov126_02298358();
}

BOOL Unk_ov126_02299ae8::func_ov126_022981cc() {
    s32 r1 = gTouchCurX;
    s32 r2 = gTouchCurY;
    if (r2 < 0x28 || r2 > 0x38) return FALSE;
    if (r1 < unk_ab - 0xc) return FALSE;
    if (r1 > unk_ac + 0xc) return FALSE;
    func_ov126_02298238(r1);
    func_ov126_02298098();
    func_ov002_02200a58(1);
    func_ov095_02293dc0(&unk_144);
    func_ov126_02297b38();
    return TRUE;
}

s32 Unk_ov126_02299ae8::func_ov126_0229814c(s32 a) {
    void *p = (void *)a;
    if (p == 0) return 0;
    u32 r4 = unk_a8;
    if (func_ov002_0220126c(p) != 0) {
        if (r4 != 0) {
            func_ov126_02298304((u8)(r4 - 1));
            return 1;
        }
        return 3;
    }
    if (func_ov002_0220125c(p) != 0) {
        s32 n = func_020512e0(unk_4088, unk_a6);
        s32 t = r4 + 1;
        if (t <= n) {
            func_ov126_02298304((u8)t);
            return 1;
        }
        return 4;
    }
    if (func_ov002_0220127c(p) != 0) return 2;
    return 0;
}

BOOL Unk_ov126_02299ae8::func_ov126_02298124() {
    if (func_ov126_02297188(4) == 0) goto no;
    if (unk_a9 != unk_aa) goto yes;
no:
    return FALSE;
yes:
    return TRUE;
}

void Unk_ov126_02299ae8::func_ov126_0229810c() {
    unk_a9 = 0;
    unk_aa = 0;
    func_ov126_02297168(4);
}

void Unk_ov126_02299ae8::func_ov126_022980bc() {
    u32 e = unk_aa;
    u32 s = unk_a9;
    u32 lo, hi;
    if (s > e) {
        lo = e;
        hi = s;
    } else {
        lo = s;
        hi = e;
    }
    u8 r = func_ov095_02293fb4(&unk_144, unk_4088, lo, hi, unk_a6);
    func_ov126_02298304(r);
    func_ov126_0229810c();
}

void Unk_ov126_02299ae8::func_ov126_02298098() {
    unk_a9 = unk_a8;
    unk_aa = unk_a8;
    func_ov126_02297168(4);
}

void Unk_ov126_02299ae8::func_ov126_02298064() {
    unk_aa = unk_a8;
    if (unk_aa != unk_a9) {
        func_ov126_02297178(4);
    } else {
        func_ov126_02297168(4);
    }
}

void Unk_ov126_02299ae8::func_ov126_02297ffc() {
    if (func_ov126_02298124() != 0) {
        u32 e = unk_aa;
        u32 s = unk_a9;
        s32 r6, r4;
        if (s > e) {
            r6 = e;
            r4 = s - e;
        } else {
            r6 = s;
            r4 = e - s;
        }
        Mem_Clear(unk_40a8, 0x20);
        Mem_Copy(unk_4088 + r6, unk_40a8, r4);
        func_ov126_02297178(8);
        func_ov095_022923f8(&unk_144);
        func_ov126_02298358();
    }
}

void Unk_ov126_02299ae8::func_ov126_02297f38() {
    if (func_ov126_02297188(8) != 0) {
        func_ov095_02293d94(&unk_144);
        func_ov095_02293dc0(&unk_144);
        if (func_ov126_02298124() != 0) func_ov126_022980bc();
        s32 n = func_020512e0(unk_40a8, 0x20);
        u8 v;
        v = unk_a8;
        s32 i;
        for (i = 0; i < n; i++) {
            if (func_ov095_022940f0(&unk_144, unk_4088, unk_40a8[i], &v, unk_a6, unk_af, 0, 0) == 0) {
                if (i == 0) func_ov126_02297ac8();
                i = n;
            }
        }
        func_ov095_022923ec(&unk_144);
        func_ov126_02298304(v);
        func_ov126_022982a8();
        func_ov126_02297b38();
        func_ov095_02293d88(&unk_144);
    }
}

s32 Unk_ov126_02299ae8::func_ov126_02297ed4() {
    func_ov095_02295194(&unk_144);
    s32 r4 = func_ov095_02294a44(&unk_144, gTouchCurX, gTouchCurY);
    if (r4 != -1) {
        s32 r1 = func_ov095_02294864(&unk_144, r4, 8);
        s32 r6 = func_ov126_02297d94(r1);
        func_ov095_02294d40(&unk_144, r4);
        func_ov095_02294318(&unk_144);
        return r6;
    }
    return 0;
}

s32 Unk_ov126_02299ae8::func_ov126_02297d94(s32 x) {
    s32 r6 = 1;
    s32 r7 = func_ov095_02293dc8(&unk_144, x, 6);
    if (r7 != 0) {
        func_ov126_02297b38();
        return r7;
    }
    if (func_ov095_0229423c(&unk_144, x) != 0) {
        switch (x) {
        case 0x100:
            func_ov126_02297c4c(r6);
            break;
        case 0x103:
        case 0x104:
        case 0x105:
            if (func_ov126_02297ce4(x) == 0) func_ov126_02297ac8();
            r6 = 2;
            break;
        case 0x118:
            func_ov126_02297ffc();
            r6 = 2;
            break;
        case 0x119:
            func_ov126_02297f38();
            r6 = 2;
            break;
        case 0x116:
            func_ov126_022984c0(0);
            r6 = 3;
            break;
        case 0x117:
            func_ov126_022984c0(r6);
            r6 = 3;
            break;
        default:
            r6 = 2;
            break;
        }
    } else {
        BOOL r4 = func_ov126_02297bac((u8)x);
        if (func_ov095_02295264(&unk_144) != 0) {
            func_ov126_022985c0(0x1c, r6);
            return 4;
        }
        if (func_ov095_02295258(&unk_144) != 0) {
            func_ov126_022985c0(0x1c, r6);
            return 4;
        }
        if (r4 == 0) func_ov126_02297ac8();
    }
    return r6;
}

BOOL Unk_ov126_02299ae8::func_ov126_02297ce4(s32 x) {
    u32 r2 = func_ov126_022982e8();
    if (r2 == 0) return FALSE;
    switch (x) {
    case 0x103:
        r2 = func_ov095_02293f90(&unk_144, r2);
        break;
    case 0x104:
        r2 = func_ov095_02293f8c(&unk_144, r2);
        break;
    case 0x105:
        r2 = func_ov095_02293f88(&unk_144, r2);
        break;
    }
    if (r2 == 0) return FALSE;
    if (func_ov095_02293f94(&unk_144, unk_4088, r2, unk_a8, unk_a6, 0x2710) == 0) return FALSE;
    func_ov126_02297b38();
    func_ov126_022982a8();
    return TRUE;
}

BOOL Unk_ov126_02299ae8::func_ov126_02297c4c(s32 x) {
    if (func_ov126_02298124() != 0) {
        func_ov095_02293dc0(&unk_144);
        Snd_PlaySe(0x35);
        goto done;
    }
    {
        u32 t = unk_a8;
        if (t != 0) {
            unk_a9 = t;
            unk_aa = unk_a8 - 1;
            Snd_PlaySe(0x35);
            goto done;
        }
    }
    if (unk_4088[0] != 0) {
        unk_a9 = 0;
        unk_aa = 1;
        Snd_PlaySe(0x35);
        goto done;
    }
    if (x != 0) func_ov126_02297ac8();
    return FALSE;
done:
    func_ov126_022980bc();
    func_ov126_02297b38();
    func_ov126_022982a8();
    return TRUE;
}

BOOL Unk_ov126_02299ae8::func_ov126_02297bf0(u32 x) {
    u8 v[8];
    v[0] = unk_a8;
    if (func_ov095_022940f0(&unk_144, unk_4088, x, v, unk_a6, unk_af, 0, 1) != 0) {
        func_ov126_02298304(v[0]);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov126_02299ae8::func_ov126_02297bac(u32 x) {
    if (func_ov126_02298124() != 0) {
        func_ov126_022980bc();
        func_ov095_02293dc0(&unk_144);
    }
    BOOL r = func_ov126_02297bf0(x);
    func_ov126_02297b38();
    func_ov126_022982a8();
    return r;
}

void Unk_ov126_02299ae8::func_ov126_02297b38() {
    func_ov124_02296c90(&unk_b0, unk_4088, unk_a6);
    if (func_ov126_02297188(0x100) != 0) {
        s32 t = func_02051348(unk_4088, unk_a6);
        unk_a0 = -(unk_af - t - 2);
    }
    func_ov124_02296cd4(&unk_b0);
    func_ov126_02297ad4();
    func_ov124_02296c98(&unk_b0);
    func_ov126_02297178(0x10);
    func_ov126_02298358();
}

void Unk_ov126_02299ae8::func_ov126_02297ad4() {
    s32 r0, r1, r2, r4;
    if (func_ov126_02298124() != 0) {
        u32 e = unk_aa;
        u32 s = unk_a9;
        if (s > e) {
            r4 = e;
            r0 = s - e;
        } else {
            r4 = s;
            r0 = e - s;
        }
        r1 = 7;
        r2 = 6;
    } else {
        r0 = func_ov095_02293da0(&unk_144);
        if (r0 != 0) {
            r4 = unk_a8 - r0;
        }
        r1 = 5;
        r2 = 1;
    }
    if (r0 != 0) {
        func_ov124_02296c7c(&unk_b0, r1, r2, r4, r0);
    }
}

void Unk_ov126_02299ae8::func_ov126_02297ac8() {
    Snd_PlaySe(0x34);
}

BOOL Unk_ov126_02299ae8::func_ov126_02297a5c() {
    if (unk_ad == 3) return FALSE;
    if (func_ov002_02202fac(&unk_3d00, 6) == 0 && func_ov002_02203110(&unk_3d00, 6) != 0) {
        func_ov126_022984c0(0);
        return TRUE;
    }
    if (unk_ad != 0) return FALSE;
    if (func_ov002_02203110(&unk_3d00, 7) != 0) {
        func_ov126_022984c0(1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov126_02299ae8::func_ov126_02297a0c() {
    switch (unk_ad) {
    case 0:
        func_ov002_022034c4(&unk_3d00, 0xd8);
        break;
    case 2:
        func_ov002_02203510(&unk_3d00, 0x21);
        break;
    case 1:
        func_ov002_02203510(&unk_3d00, 0x65);
        break;
    case 3:
        break;
    }
}

void Unk_ov126_02299ae8::func_ov126_022979b8() {
    func_ov126_02297168(0x80);
    func_ov095_022924f0(&unk_144);
    s32 a = func_ov095_02292580(&unk_144);
    s32 b = func_ov095_02292544(&unk_144);
    func_ov002_02202a40(&unk_3e64, a, b);
    func_ov002_02202d00(&unk_3e64, 1);
    func_ov126_02297858();
}

void Unk_ov126_02299ae8::func_ov126_02297994() {
    func_ov002_02202d00(&unk_3e64, 0);
    unk_3e64.vfunc_0c();
}

void Unk_ov126_02299ae8::func_ov126_02297920() {
    if (func_ov126_02297188(0x80)) {
        func_ov002_0220298c(&unk_3e64, unk_98, 0x28, 3, 2);
        unk_ae = 6;
    } else {
        s32 a = func_ov095_02292580(&unk_144);
        s32 b = func_ov095_02292544(&unk_144);
        func_ov002_0220298c(&unk_3e64, a, b, 3, 2);
        unk_ae = 4;
    }
    func_ov002_02200a58(8);
}

void Unk_ov126_02299ae8::func_ov126_022978c4() {
    if (func_ov126_02297188(0x80)) {
        func_ov002_02202a40(&unk_3e64, unk_98, 0x28);
    } else {
        s32 a = func_ov095_02292580(&unk_144);
        s32 b = func_ov095_02292544(&unk_144);
        func_ov002_02202a40(&unk_3e64, a, b);
    }
    unk_3e64.vfunc_0c();
}

void Unk_ov126_02299ae8::func_ov126_022978a4() {
    func_ov002_02202b68(&unk_3e64);
    func_ov002_02200a58(9);
}

void Unk_ov126_02299ae8::func_ov126_02297878() {
    func_ov095_02295194(&unk_144);
    func_ov002_02202af0(&unk_3e64);
    func_ov002_02200a58(0xb);
}

void Unk_ov126_02299ae8::func_ov126_02297858() {
    func_ov002_02202a78(&unk_3e64);
    unk_3e64.vfunc_0c();
}

BOOL Unk_ov126_02299ae8::func_ov126_022977e8() {
    if ((gPad[1] & 1) == 0) {
        return FALSE;
    }
    s32 t = func_ov095_02292404(&unk_144);
    if (t == -1) {
        return FALSE;
    }
    if (func_ov002_02202fac(&unk_3d00, 6) && t == 0xd9) {
        return FALSE;
    }
    func_ov095_02294864(&unk_144, t, 8);
    func_ov095_02294d40(&unk_144, t);
    func_ov126_022978a4();
    return TRUE;
}

BOOL Unk_ov126_02299ae8::func_ov126_0229778c() {
    if ((gPad[0] & 2) == 0) {
        return FALSE;
    }
    func_ov095_02293da8(&unk_144);
    if (func_ov126_02297c4c(0)) {
        func_ov095_02294318(&unk_144);
        unk_ae = unk_8d;
        func_ov002_02200a58(0xc);
    } else {
        func_ov126_02298430();
    }
    return TRUE;
}

BOOL Unk_ov126_02299ae8::func_ov126_02297720() {
    if ((gPad[1] & 0x100) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(&unk_144, 0xc)) {
        return FALSE;
    }
    func_ov126_02297d94(0x119);
    func_ov095_02294d40(&unk_144, 0xdc);
    func_ov126_022978c4();
    unk_ae = unk_8d;
    func_ov002_02200a58(0xe);
    return FALSE;
}

BOOL Unk_ov126_02299ae8::func_ov126_022976bc() {
    if ((gPad[1] & 0x200) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(&unk_144, 0xb)) {
        return FALSE;
    }
    func_ov126_02297d94(0x118);
    func_ov095_02294d40(&unk_144, 0xdb);
    unk_ae = unk_8d;
    func_ov002_02200a58(0xd);
    return FALSE;
}

BOOL Unk_ov126_02299ae8::func_ov126_02297698() {
    if ((gPad[1] & 8) == 0) {
        return FALSE;
    }
    func_ov126_02298470();
    return TRUE;
}

void Unk_ov126_02299ae8::func_ov126_02297658() {
    u8 buf[0x10];
    s32 a = func_020986d4(PlayerData_GetCurrent());
    func_02071f48(func_02071e04(func_02071c68(a, func_0206ed38())), buf);
    Mem_Copy(buf, unk_4088, 0x10);
}

void Unk_ov126_02299ae8::func_ov126_0229763c() {
    func_020b03f0(unk_4088, func_0206ed38());
}

u8 *Unk_ov126_02299ae8::func_ov126_02297614() {
    s32 t = PlayerData_GetCurrent();
    s32 p = PlayerData_getFriendList(t);
    s32 idx = func_0206ed38();
    u8 *q = (u8 *)func_02076db4(p);
    return q + idx * 0x1c;
}

void Unk_ov126_02299ae8::func_ov126_022975f4() {
    Mem_Copy(func_02076ce8(func_ov126_02297614()), unk_4088, 8);
}

void Unk_ov126_02299ae8::func_ov126_022975d4() {
    Mem_Copy(func_02076cec(func_ov126_02297614()), unk_4088, 8);
}

void Unk_ov126_02299ae8::func_ov126_0229755c() {
    switch (func_0206ed50()) {
    case 0x11:
    case 0x15:
    case 0x16:
    case 0x17:
        Mem_Copy(func_0206ecf0(), unk_4088, unk_a6);
        break;
    case 0xb: func_ov126_02297658(); break;
    case 0x12: func_ov126_0229763c(); break;
    case 0x18:
    case 0x19: func_ov126_022975f4(); break;
    case 0x1a:
    case 0x1b: func_ov126_022975d4(); break;
    }
}

void Unk_ov126_02299ae8::func_ov126_02297518() {
    u8 buf[0x10];
    s32 a = func_020986d4(PlayerData_GetCurrent());
    void *p = func_02071c68(a, func_0206ed38());
    Mem_Copy(unk_4088, buf, 0x10);
    func_02071ef4(func_02071e04(p), buf);
}

void Unk_ov126_02299ae8::func_ov126_022974d0() {
    Unk_020e0488 b;
    func_0206f9e4(&b, "st_general", func_0206ed38());
    if (!func_0206f88c(&b, unk_4088, unk_a6)) {
        func_0206ecf8(0);
    }
}

void Unk_ov126_02299ae8::func_ov126_02297440() {
    u16 id;
    ItemName rec;
    Unk_020e0488 b;
    u16 i;
    for (i = 0x1323; i <= 0x1368; i++) {
        id = i;
        ItemName_setFromItem(&rec, &id);
        MsgString_copy(&b, &rec);
        if (func_0206f88c(&b, unk_4088, unk_a6)) {
            func_0206ed2c((u8)(i - 0x1323));
            func_0206ecf8(1);
            return;
        }
    }
    func_0206ecf8(0);
}

void Unk_ov126_02299ae8::func_ov126_022973f8() {
    Unk_020e0488 b;
    func_0206f9e4(&b, "st_password", func_0206ed38());
    if (!func_0206f88c(&b, unk_4088, unk_a6)) {
        func_0206ecf8(0);
    }
}

void Unk_ov126_02299ae8::func_ov126_02297378() {
    s32 t = PlayerData_GetCurrent();
    PlayerData_getPlayerId();
    s32 u = PlayerData_getPlayerId(t);
    s32 n = func_02097740(data_021d735c, u);
    s32 i;
    for (i = 0; i < 4; i++) {
        if (i != n && func_020978c8(data_021d735c, i)) {
            if (func_02051218((void *)func_02094104(PlayerData_getPlayerId(PlayerData_GetResident(data_021d735c, i))), unk_4088, 8)) {
                func_0206ecf8(2);
                return;
            }
        }
    }
    func_02094108(PlayerData_getPlayerId(t), unk_4088);
}

s32 Unk_ov126_02299ae8::func_ov126_02297360() {
    return func_02063904(data_021d7352, unk_4088);
}

void Unk_ov126_02299ae8::func_ov126_02297328() {
    s32 t = func_0206ed38();
    if (func_020b0084(unk_4088, t)) {
        func_0206ecf8(0);
    }
    func_020b0428(unk_4088, t);
}

void Unk_ov126_02299ae8::func_ov126_022972f0() {
    u8 buf[0x10];
    void *p = func_02087298(data_021eca50);
    Mem_Copy(unk_4088, buf, 0x10);
    func_02071ef4(func_02071e04(p), buf);
}

void Unk_ov126_02299ae8::func_ov126_022972cc() {
    Mem_Copy(unk_4088, func_02076ce8(func_ov126_02297614()), 8);
}

void Unk_ov126_02299ae8::func_ov126_022972a8() {
    Mem_Copy(unk_4088, func_02076cec(func_ov126_02297614()), 8);
}

void Unk_ov126_02299ae8::func_ov126_022971fc() {
    s32 r = func_0206ed50();
    if (r != 0xc && r != 0xd && r != 0xe) {
        func_ov126_0229719c();
    }
    switch (r) {
    case 0xb: func_ov126_02297518(); break;
    case 0xc: func_ov126_022974d0(); break;
    case 0xd: func_ov126_02297440(); break;
    case 0xe: func_ov126_022973f8(); break;
    case 0xf: func_ov126_02297378(); break;
    case 0x10: func_ov126_02297360(); break;
    case 0x11: break;
    case 0x12: func_ov126_02297328(); break;
    case 0x13: break;
    case 0x14: func_ov126_022972f0(); break;
    case 0x15: break;
    case 0x16: break;
    case 0x17: break;
    case 0x18:
    case 0x19: func_ov126_022972cc(); break;
    case 0x1a:
    case 0x1b: func_ov126_022972a8(); break;
    }
}

void Unk_ov126_02299ae8::func_ov126_0229719c() {
    u8 *buf = unk_4088;
    u32 n = unk_a6;
    func_020a78a4(&unk_3f48, buf, n);
    MsgString_fromEncoded(&unk_3f08, &unk_3f48, 0, 0);
    if (String_CensorTaboo(&unk_3f08)) {
        EncodedString_fromMsgString(&unk_3f48, &unk_3f08);
        StrBuf_GetBytes(&unk_3f48, buf, n);
    }
}

BOOL Unk_ov126_02299ae8::func_ov126_02297188(u32 mask) {
    if ((unk_a4 & mask) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov126_02299ae8::func_ov126_02297178(u32 mask) {
    unk_a4 = unk_a4 | mask;
}

void Unk_ov126_02299ae8::func_ov126_02297168(u32 mask) {
    unk_a4 = unk_a4 & ~mask;
}

