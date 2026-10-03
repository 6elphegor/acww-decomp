#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#undef postCreate
#undef vfunc_14

extern "C" {
void func_020021b8(s32 a, s32 x0, s32 y0, s32 x1, s32 y1);
void func_020021fc(s32 a, s32 b, s32 c);
void Snd_PlaySe(s32 a);
void func_0206e020();
BOOL func_0206e2f4();
BOOL func_0206e308();
void MenuCtrl_SetButtons();
void MenuCtrl_SetTouch();
void MenuCtrl_RemoveOpenMenu(void *p);
void MenuCtrl_AddOpenMenu(void *p);
void func_02001564(s32 a);
void func_02001750(s32 a);
s32 func_02001580();
void func_020016bc(s32 a);
void func_020016cc(s32 a);
void func_0200152c(s32 a);
void func_02001724(s32 a, s32 b);
void func_020016b0(s32 a);
void func_0200151c(s32 a);
void func_02001554(s32 a);
void *Heap_AllocTail(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
void *func_0212899c(void *p, s32 v, u32 n);
void *ProcBase_GetParent(void *p);
void ProcBase_SetExecutePriority(void *p, u32 v);
void ProcBase_SetDrawPriority(void *p, u32 v);

extern void *data_021c6210;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
}

class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    u8 unk_00[0x14];
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e0d80 : public MsgStringBase {
public:
    Unk_020e0d80();
    virtual ~Unk_020e0d80();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x04 */ u8 unk_04[0x24];
};

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

    s32 getState();
    BOOL requestClose();
    BOOL requestOpen();
    void setClampToScreen(u8 v);
    void enableCenterText();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ SpriteAnim unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54[9];
    /* 0x60 */ Unk_020e0d80 unk_60;
    /* 0x88 */ Unk_020e0d80 unk_88;
    /* 0xb0 */ TextLabel *unk_b0;
    /* 0xb4 */ TextLabel *unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

// Vtable 0x02204468
class Unk_ov002_02204468 : public LabelBalloon {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();

    BOOL func_ov002_02200680();
    void func_ov002_022006a4(u8 v);
    void func_ov002_022006ac(s32 v);
    void func_ov002_022006b0();
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    BOOL func_ov002_022006e4(s32 a);
    s32 func_ov002_0220071c();

    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ volatile u8 unk_be;
};

// Sub-object at +0x70 of Unk_ov002_022044e4 (window / mask helper)
class Unk_ov002_02201194 {
public:
    Unk_ov002_02201194();
    ~Unk_ov002_02201194();

    void func_ov002_02200d04(s32 v);
    void func_ov002_02200d08(s32 a);
    void func_ov002_02200d78(s32 a, s32 b, s32 c);
    void func_ov002_02200dd8(s32 a, s32 mode, s32 dist);
    void func_ov002_02200e18(s32 a, s32 mode, s32 dist);
    void func_ov002_02200e58(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200ea4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200edc(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200f18(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_02200f54(s32 a);
    void func_ov002_022011ec();
    BOOL func_ov002_022011cc();
    void func_ov002_02200fa8(s32 a);
    void func_ov002_02200fe0(s32 a);
    BOOL func_ov002_0220102c(s32 a);
    s32 func_ov002_02201124();
    s32 func_ov002_02201140();

    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
};

// Sub-object at +0x50 of Unk_ov002_022044e4 (pad input)
class Unk_ov002_022013a0 {
public:
    Unk_ov002_022013a0();
    ~Unk_ov002_022013a0();

    void func_ov002_02201240(s32 a, s32 b, s32 c);
    BOOL func_ov002_0220129c();
    BOOL func_ov002_022012b0();
    BOOL func_ov002_022012c4();
    BOOL func_ov002_022012d8();
    u32 func_ov002_022012ec();
    void func_ov002_022012f8();

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_ov002_022044e4;
typedef void (Unk_ov002_022044e4::*Unk_ov002_02200a68_Fn)();

// Vtable 0x022044e4
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
    void func_ov002_02200850(s32 v);
    void func_ov002_0220085c(s32 a, s32 mode);
    void func_ov002_02200874(s32 a, s32 mode);
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200970(s32 a, s32 b, s32 c);
    void func_ov002_02200980();
    BOOL func_ov002_02200998();
    BOOL func_ov002_022009a4();
    BOOL func_ov002_022009b0();
    BOOL func_ov002_022009bc();
    u32 func_ov002_022009c8();

    /* 0x50 */ Unk_ov002_022013a0 unk_50;
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ Unk_ov002_02201194 unk_70;
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// ---------------------------------------------------------------- ov090 declarations
extern "C" {
void func_020015b8(u32 a);
s32 func_020026c4(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f);
void func_020639e8(char *buf, const char *fmt, ...);
BOOL File_LoadToBuffer(const void *a, void *b, s32 c);
BOOL MenuCtrl_RequestOpenNested(u32 v);
void func_0206ed44(u8 v);
u32 func_0206ed50();
void func_0206e070();
void func_0206ec60();
void func_0206e03c();
BOOL Save_WritePlayerFriendList();
void func_0206dfe4();
void Snd_EndMenuDuck();
void func_0206e5fc();
void func_0206e60c();
void func_0206e048();
void Snd_BeginMenuDuck();
void MenuCtrl_SyncFromInputMode();
void ProcBase_RequestDelete();
s32 func_02088730(s32 mode, u32 *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);

extern u32 gCurrentHeap;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 data_020e416c;
}

class Unk_02083b0_dummy;
class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;

    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class Unk_020e4618 : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;

    Unk_020e4618();
    virtual BOOL vfunc_00() = 0;
};

struct Unk_020b8b40 {
    u32 unk_00;
    u8 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
};

class Unk_020e45f8 : public Unk_020e4618 {
public:
    Unk_020b8b40 unk_10;

    Unk_020e45f8();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b8670(u32 a, u8 b, u32 c);
    BOOL func_020b8714(u32 a, u8 b, u32 c, u32 d, u32 e);
    void func_020b87d0(void);
};

class Unk_020e4608 : public Unk_020e45f8 {
public:
    Unk_020b8b40 unk_24;

    Unk_020e4608();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b851c(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g);
};

class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    void func_ov002_02204234(s32 a);
    void func_ov002_02204394(u8 *p, s32 a, u32 b);

    u32 unk_00[0x42];
};

class Unk_02035758 {
public:
    void func_02035bb4();
    void func_02035bbc(s32 i);
    u32 unk_00;
};

class Unk_02034518 {
public:
    u32 unk_00[0x71];
    Unk_02035758 unk_1c4;
};

extern "C" Unk_02034518 *data_021c1b3c;

class Unk_ov090_022921e0;
typedef void (Unk_ov090_022921e0::*Unk_ov090_022921e0_Fn)();

// Vtable 0x022921e0
class Unk_ov090_022921e0 : public Unk_ov002_022044e4 {
public:
    inline Unk_ov090_022921e0() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    BOOL func_ov090_02291934();
    void func_ov090_02291964();
    void func_ov090_0229196c(u32 idx);
    void func_ov090_02291a18();
    void func_ov090_02291a88();
    void func_ov090_02291a90();
    void func_ov090_02291b14();
    void func_ov090_02291b1c();
    void func_ov090_02291b5c();
    void func_ov090_02291b8c();
    void func_ov090_02291ba0();
    void func_ov090_02291c18();
    void func_ov090_02291c2c();
    void func_ov090_02291d08();
    void func_ov090_02291d0c();
    u8 func_ov090_02291d2c();
    void func_ov090_02291d8c(u32 idx);

    /* 0x91 */ u8 unk_91;
    /* 0x92 */ u8 unk_92;
    /* 0x93 */ u8 unk_93;
    /* 0x94 */ u8 unk_94;
    /* 0x95 */ u8 unk_95;
    /* 0x96 */ u8 unk_96;
    /* 0x97 */ u8 unk_97;
    /* 0x98 */ u8 unk_98;
    /* 0x9c */ Unk_020e4608 unk_9c[3];
    /* 0x144 */ u32 unk_144[0x200];
    /* 0x944 */ u32 unk_944[0x200];
    /* 0x1144 */ u32 unk_1144[8];
    /* 0x1164 */ Unk_ov002_022040ec unk_1164;
};

extern "C" {
Unk_ov090_022921e0 *func_ov090_02292134();
s32 func_ov090_02291944(s32 a);
u8 func_ov090_02291a38(u8 a);
u8 func_ov090_02291a58(u8 a);
s32 func_ov090_02291a78(s32 a);
s32 func_ov090_02291aa0();
}

extern "C" u8 data_ov090_02292320;
extern "C" u32 data_ov090_02292240[32];
struct Unk_ov090_SceneEntry {
    void *factory;
    u16 a;
    u16 b;
};

static inline BOOL Unk_ov090_02291aa0_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov090_022921e0 *func_ov090_02292134() { return new Unk_ov090_022921e0(); }

BOOL Unk_ov090_022921e0::vfunc_00() {
    unk_98 = 1;
    func_0206e60c();
    func_ov090_02291b1c();
    func_0206e048();
    unk_96 = 0xff;
    data_ov090_02292320 = 0;
    unk_97 = 0;
    unk_8d = 1;
    unk_8c = 0;
    func_ov002_02200a60(0);
    func_0206ec60();
    Snd_BeginMenuDuck();
    MenuCtrl_SyncFromInputMode();
    return TRUE;
}

BOOL Unk_ov090_022921e0::vfunc_0c() {
    func_0206dfe4();
    func_ov090_02291b14();
    Snd_EndMenuDuck();
    func_0206e5fc();
    return TRUE;
}

BOOL Unk_ov090_022921e0::onDraw() {
    if (unk_91 == 0) {
        return FALSE;
    }
    s32 i;
    s32 j = 0;
    i = j;
    for (; i <= 7; i++, j += 2) {
        func_02088730(1, &data_ov090_02292240[j * 2], 0x80, unk_92 + 0x50, -1, 2, 0);
        func_02088730(1, &data_ov090_02292240[(j + 1) * 2], 0x80, unk_92 + 0x50, -1, 2, 0);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov090_SceneEntry data_ov090_022921a0;
extern "C" u32 data_ov090_02292240[32];

extern "C" Unk_ov090_SceneEntry data_ov090_022921a0 = {(void *)func_ov090_02292134, 0x8f, 0x93};

extern "C" u32 data_ov090_02292240[32] = {
    0x404900a1, 0x0000f092, 0x005980a1, 0x0000f094, 0x41b300a1, 0x0000f080, 0x01c380a1, 0x0000f082, 0x41cc00a1, 0x0000f083, 0x01dc80a1, 0x0000f085, 0x41e500a1, 0x0000f086, 0x01f580a1, 0x0000f088, 0x41fe00a1, 0x0000f089, 0x000e80a1, 0x0000f08b, 0x401700a1, 0x0000f08c, 0x002780a1, 0x0000f08e, 0x403000a1, 0x0000f08f, 0x004080a1, 0x0000f091, 0x406700a1, 0x0000f095, 0x007780a1, 0xfffff097
};

BOOL Unk_ov090_022921e0::vfunc_4c() {
    static Unk_ov090_022921e0_Fn tbl[3] = {&Unk_ov090_022921e0::func_ov090_02291ba0, &Unk_ov090_022921e0::func_ov090_02291b8c,
                                           &Unk_ov090_022921e0::func_ov090_02291b5c};
    func_ov090_02291a18();
    (this->*tbl[unk_8c])();
    return TRUE;
}

BOOL Unk_ov090_022921e0::vfunc_50() {
    static Unk_ov090_022921e0_Fn tbl[3] = {&Unk_ov090_022921e0::func_ov090_02291d08, &Unk_ov090_022921e0::func_ov090_02291c2c,
                                           &Unk_ov090_022921e0::func_ov090_02291c18};
    func_ov090_02291a18();
    if (unk_97 == 2) {
        if (Save_WritePlayerFriendList()) {
            u8 c;
            unk_8d = 2;
            c = 0x1f;
            unk_1164.func_ov002_02204394(&c, 1, 1);
            unk_97 = 3;
        } else {
            unk_97 = 0;
            func_0206e070();
        }
    }
    if (data_ov090_02292320 != 0) {
        data_ov090_02292320 = data_ov090_02292320 - 1;
    }
    (this->*tbl[unk_8d])();
    if (unk_94 != 0) {
        if (unk_92 != 0x10) {
            if (unk_92 >= 0xe) {
                unk_92 = 0x10;
            } else {
                unk_92 = *(volatile u8 *)&unk_92 + 2;
            }
        }
    } else if (unk_92 != 0) {
        if (unk_92 <= 4) {
            unk_91 = 0;
            unk_92 = 0;
        } else {
            unk_92 = *(volatile u8 *)&unk_92 - 4;
        }
    }
    if (unk_95 != 0) {
        if ((gPad[1] & 0x100) != 0) {
            func_ov090_0229196c(func_ov090_02291a38(unk_93));
            Snd_PlaySe(3);
        }
        if ((gPad[1] & 0x200) != 0) {
            func_ov090_0229196c(func_ov090_02291a58(unk_93));
            Snd_PlaySe(3);
        }
    }
    return TRUE;
}

BOOL Unk_ov090_022921e0::vfunc_54() { return TRUE; }

BOOL Unk_ov090_022921e0::vfunc_58() { return TRUE; }

BOOL Unk_ov090_022921e0::vfunc_5c() {
    ProcBase_RequestDelete();
    return TRUE;
}

void Unk_ov090_022921e0::func_ov090_02291d8c(u32 idx) {
    unk_98 = 0;
    u32 old = unk_93;
    func_ov090_0229196c(idx);
    if (idx == 7) {
        unk_94 = 0;
        if (unk_97 == 1) {
            unk_97 = 2;
        }
        if (unk_97 == 0) {
            func_0206e070();
        }
        Snd_PlaySe(2);
        data_021c1b3c->unk_1c4.func_02035bb4();
    } else {
        if (idx <= 6 && old <= 6) {
            Snd_PlaySe(3);
        }
    }
    if (idx == 0) {
        func_0206ec60();
    }
    if (old <= 6 && idx <= 6) {
        unk_95 = 1;
    }
}

u8 Unk_ov090_022921e0::func_ov090_02291d2c() {
    switch (unk_93) {
    case 7:
        if (unk_97 == 0) {
            func_0206e03c();
            func_ov090_02291d0c();
        }
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
        unk_8d = 1;
        break;
    }
    return unk_93;
}

void Unk_ov090_022921e0::func_ov090_02291d0c() {
    unk_8c = 2;
    func_ov002_02200a60(1);
    func_020015b8(1);
}

void Unk_ov090_022921e0::func_ov090_02291d08() {}

void Unk_ov090_022921e0::func_ov090_02291c2c() {
    if (data_ov090_02292320 == 0) {
        unk_95 = 0;
        switch (unk_93) {
        case 0: {
            BOOL r = FALSE;
            if (data_020e416c == 0) {
                r = TRUE;
            }
            if (r) {
                MenuCtrl_RequestOpenNested(2);
            } else {
                MenuCtrl_RequestOpenNested(1);
            }
            break;
        }
        case 1:
            MenuCtrl_RequestOpenNested(3);
            break;
        case 2:
            MenuCtrl_RequestOpenNested(4);
            break;
        case 3:
            MenuCtrl_RequestOpenNested(5);
            break;
        case 4:
            MenuCtrl_RequestOpenNested(6);
            break;
        case 5:
            MenuCtrl_RequestOpenNested(7);
            break;
        case 8:
            MenuCtrl_RequestOpenNested(8);
            break;
        case 6:
            MenuCtrl_RequestOpenNested(0x24);
            break;
        case 9:
        case 10:
        case 11:
        case 12:
            MenuCtrl_RequestOpenNested(0xf);
            func_0206ed44(unk_93 + 0xf);
            break;
        case 13:
        case 14:
            MenuCtrl_RequestOpenNested(0x2b);
            func_0206ed44(unk_93);
            break;
        case 7:
            break;
        }
        unk_8d = 0;
    }
}

void Unk_ov090_022921e0::func_ov090_02291c18() { unk_1164.func_ov002_02204234(0); }

void Unk_ov090_022921e0::func_ov090_02291ba0() {
    func_020026c4((u32)"menu/tag/obj.bpl", gCurrentHeap, 8, 0xf, 0xf, 0xf);
    File_LoadToBuffer("menu/tag/obj1.bch", unk_144, 0x800);
    File_LoadToBuffer("menu/tag/obj2.bch", unk_944, 0x800);
    func_ov090_0229196c(func_0206ed50());
    unk_91 = 1;
    unk_92 = 0;
    unk_8c = 1;
    func_020015b8(0);
}

void Unk_ov090_022921e0::func_ov090_02291b8c() {
    unk_94 = 1;
    func_ov002_02200a60(2);
}

void Unk_ov090_022921e0::func_ov090_02291b5c() {
    if (*(volatile u8 *)&unk_92 <= 4) {
        unk_91 = 0;
        func_ov002_02200a60(0);
    } else {
        unk_92 = unk_92 - 4;
    }
}

void Unk_ov090_022921e0::func_ov090_02291b1c() {
    unk_91 = 0;
    unk_92 = 0;
    unk_94 = 0;
    unk_95 = 0;
    Snd_PlaySe(1);
    data_021c1b3c->unk_1c4.func_02035bbc(0);
}

void Unk_ov090_022921e0::func_ov090_02291b14() { func_ov090_02291a18(); }

extern "C" s32 func_ov090_02291aa0() {
    if (!Unk_ov090_02291aa0_Both()) {
        return -1;
    }
    s32 v = gTouchCurX;
    s32 lim = gTouchCurY;
    if (lim > 0x10) {
        return -1;
    }
    if (v < 0x35) {
        return -1;
    }
    if (v >= 0x100) {
        return -1;
    }
    s32 r = (v - 0x35) / 0x19;
    if (r >= 7) {
        r = 7;
    }
    return r;
}

void Unk_ov090_022921e0::func_ov090_02291a90() {
    unk_94 = 1;
    unk_91 = 1;
}

void Unk_ov090_022921e0::func_ov090_02291a88() { unk_94 = 0; }

extern "C" s32 func_ov090_02291a78(s32 a) {
    if (a == 7) {
        return 0xf3;
    }
    return a * 0x19 + 0x3f;
}

extern "C" u8 func_ov090_02291a58(u8 a) {
    if (a <= 6) {
        data_ov090_02292320 = 10;
        if (a == 0) {
            return 6;
        }
        return a - 1;
    }
    return a;
}

extern "C" u8 func_ov090_02291a38(u8 a) {
    data_ov090_02292320 = 10;
    if (a <= 6) {
        if (a == 6) {
            return 0;
        }
        return a + 1;
    }
    return a;
}

void Unk_ov090_022921e0::func_ov090_02291a18() {
    s32 i;
    for (i = 0; i < 3; i++) {
        unk_9c[i].func_020b87d0();
    }
}

void Unk_ov090_022921e0::func_ov090_0229196c(u32 idx) {
    unk_93 = idx;
    if (idx <= 7) {
        if (idx != unk_96) {
            char buf[0x24];
            unk_9c[0].func_020b8714((u32)unk_144, 8, 0x80, 0x80, 0xbf);
            u32 a = (u32)unk_944 + idx * 0x60;
            u32 t = idx * 3 + 0x80;
            unk_9c[1].func_020b851c(a, a + 0x400, 8, t, t + 2, t + 0x20, t + 0x22);
            func_020639e8(buf, "menu/tag/obj%d.bpl", idx);
            File_LoadToBuffer(buf, unk_1144, 0x20);
            unk_9c[2].func_020b8670((u32)unk_1144, 8, 0xf);
            unk_96 = idx;
        }
    }
}

void Unk_ov090_022921e0::func_ov090_02291964() { unk_97 = 1; }

extern "C" s32 func_ov090_02291944(s32 a) {
    s32 r = (a - 0x33) / 0x19;
    if (r < 0) {
        r = 0;
    }
    if (r > 7) {
        r = 7;
    }
    return r;
}

// ---------------------------------------------------------------- Unk_ov090_022921e0

BOOL Unk_ov090_022921e0::func_ov090_02291934() {
    if (unk_98 != 0) {
        return TRUE;
    }
    return FALSE;
}
u8 data_ov090_02292320;
