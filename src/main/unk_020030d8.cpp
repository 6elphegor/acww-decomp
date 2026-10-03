#include "types.h"

// ---------------------------------------------------------------------------------------------------------------------
// 12-byte record with a base class at 0x020639xx (functions func_020030d8..func_0200315c are still free functions)

struct Unk_020030d8 {
    /* 0x00 */ u8 unk_00[10];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

extern "C" {
void MI_CpuCopy8(void *src, void *dst, u32 size);
void func_020639a0(Unk_020030d8 *p);
void func_020639b8(Unk_020030d8 *p);
void func_020639bc(Unk_020030d8 *p);
void func_02063968(Unk_020030d8 *p, Unk_020030d8 *other);
void func_0206397c(Unk_020030d8 *p, Unk_020030d8 *other);
void func_020118d4(u32 a);
void func_020118e4(u32 v);
BOOL MenuCtrl_IsTransitionActive();
s32 MenuCtrl_GetTransitionProgressOrFull();
s32 Net_GetMode();
s32 Net_GetLinkLevel();
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern const s8 data_020c6158[8];
const s8 data_020c6158[8] = {-18, -12, -2, -1, 0, 0, 0, 0};
extern u8 data_020d47a4[];

struct SpriteAnimSeq;

// Sub-object at +0xc of Unk_020d5e0c (ctor 0x02089270, dtor 0x0208926c)
class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    void pause();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    void *getCell();
    void setFrame(s32 a, s32 b);
    void setPlayOnce(s32 v);
    void setSeq(SpriteAnimSeq *v);

    /* 0x00 */ u8 unk_00[0x14];
};

// Base class with vtable at 0x020e0db4 (ctor 0x02089fa8, D2 0x02089f78)
class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);
    s32 getOriginY();
    s32 getOriginX();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

// Vtable at 0x020d5e0c
class Unk_020d5e0c : public UiWidget {
public:
    Unk_020d5e0c();
    virtual ~Unk_020d5e0c();
    virtual void draw();
    virtual void vfunc_0c();

    void func_02003178();
    void func_020031c4();
    void func_0200326c();
    BOOL func_020032e8();
    void func_0200331c(BOOL flag);
    void func_02003374();
    void func_02003384();
    void func_02003394();
    void func_020033a0();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ u8 unk_30;
    /* 0x31 */ u8 unk_31;
    /* 0x32 */ u8 unk_32;
    /* 0x33 */ u8 unk_33;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
};

// Unk_02003574: state object at data_0213c894
struct Unk_02003574 {
    Unk_02003574();
    ~Unk_02003574();
    void func_02003574();
    void func_02003578();
    void func_020035e8();
    BOOL func_02003648();
    BOOL func_02003670();
    void func_020036a4();
    void func_020036ec();
    void func_02003738();
    void func_0200373c();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
};

struct Unk_020d467c {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 (*unk_08)[3];
};
extern Unk_020d467c data_020d467c;

// Base of the objects created in TvSound_Create (vtable data_0213bac4, in autoload_2)
class TvSound {
public:
    virtual void reset();
    virtual void release();
    virtual void vfunc_08(s32 a, void *b);
    virtual void turnOn(s32 a);
    virtual void turnOff();

    void callTurnOff();
    void callTurnOn(s32 a);
    void callUpdate(s32 a, void *b);
    void callRelease();
    void callReset();
};

struct Unk_02003878_Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};
extern s32 gCamera;
extern Unk_02003878_Vec gCameraEye;

// bss, in the order __sinit constructs them
Unk_02003574 data_0213c894;
Unk_020d5e0c data_0213c8ac;

// ---------------------------------------------------------------------------------------------------------------------

void TvSound::callReset() { reset(); }

void TvSound::callRelease() { release(); }

void TvSound::callUpdate(s32 a, void *b) {
    if (b != 0) {
        Unk_02003878_Vec v = *(Unk_02003878_Vec *)b;
        if (gCamera != 0) {
            v.unk_00 = v.unk_00 - gCameraEye.unk_00;
            v.unk_04 = v.unk_04 - gCameraEye.unk_04;
            v.unk_08 = v.unk_08 - gCameraEye.unk_08;
            vfunc_08(a, &v);
        }
    } else {
        vfunc_08(a, 0);
    }
}

void TvSound::callTurnOn(s32 a) { turnOn(a); }

void TvSound::callTurnOff() { turnOff(); }

extern "C" void func_020037a0() { data_0213c894.func_0200373c(); }

extern "C" void func_02003790() { data_0213c894.func_02003738(); }

extern "C" void func_02003780() { data_0213c894.func_020036ec(); }

extern "C" void func_02003770() { data_0213c894.func_020036a4(); }

Unk_02003574::Unk_02003574() {
    unk_00 = 3;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

Unk_02003574::~Unk_02003574() {}

void Unk_02003574::func_0200373c() {
    unk_00 = 3;
    unk_08 = 0;
    unk_04 = data_020c6158[0];
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

void Unk_02003574::func_02003738() {}

void Unk_02003574::func_020036ec() {
    if (func_02003670()) {
        s32 v = Net_GetLinkLevel();
        if (v == 1) {
            unk_00 = 2;
        } else if (v == 2) {
            unk_00 = 1;
        } else if (v == 3) {
            unk_00 = 0;
        } else {
            unk_00 = 3;
        }
    }
    func_020035e8();
    func_02003578();
    func_02003574();
}

void Unk_02003574::func_020036a4() {
    if (unk_08 != 0) {
        Oam_DrawCell(0, (void *)data_020d467c.unk_08[unk_00][0], unk_04 + 0x80, 0x60, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

BOOL Unk_02003574::func_02003670() {
    BOOL r = FALSE;
    if (Net_GetMode() != 0) {
        s32 v = Net_GetMode();
        if (v != 6) {
            r = TRUE;
        }
    }
    if (r && unk_10 == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02003574::func_02003648() {
    BOOL b;
    switch (Net_GetMode()) {
    case 3:
    case 4:
        b = TRUE;
        break;
    default:
        b = FALSE;
        break;
    }
    if (unk_15 == b) {
        return TRUE;
    }
    return FALSE;
}

void Unk_02003574::func_020035e8() {
    BOOL a = MenuCtrl_IsTransitionActive() ? TRUE : FALSE;
    s32 b = MenuCtrl_GetTransitionProgressOrFull();
    if (unk_10 > 0) {
        unk_10--;
    }
    if (unk_14 != 0) {
        if (unk_0c == 0x1000 && b < 0x1000) {
            unk_10 = 0x17;
        }
    } else if (a) {
        unk_08 = 0;
        unk_04 = data_020c6158[0];
        unk_10 = 0xe;
    }
    unk_14 = a;
    unk_0c = b;
}

void Unk_02003574::func_02003578() {
    BOOL a = func_02003670();
    BOOL b = func_02003648();
    if (a && b) {
        if ((u32)unk_08 < 4) {
            unk_08++;
            unk_04 = data_020c6158[unk_08];
        }
    } else if (unk_08 != 0) {
        unk_08--;
        unk_04 = data_020c6158[unk_08];
    }
    if (a && !b && unk_08 == 0) {
        unk_15 = unk_15 == 0 ? 1 : 0;
        func_020118e4(unk_15);
    }
}

void Unk_02003574::func_02003574() {}

Unk_020d5e0c::Unk_020d5e0c() {
    unk_20 = 0;
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_31 = 0;
    unk_32 = 1;
    unk_33 = 0;
    unk_34 = 0;
    unk_38 = 5;
    unk_3c = 0;
}

Unk_020d5e0c::~Unk_020d5e0c() {
    func_02003394();
}

void Unk_020d5e0c::draw() {
    if (unk_24 != 0) {
        void *h = unk_0c.getCell();
        if (h != 0) {
            s32 x = getOriginX() + unk_0c.getFrameX(-1);
            s32 y = getOriginY() + unk_0c.getFrameY(-1);
            if (unk_32 != 0) {
                x += 0x78;
                y += 0x48;
            } else {
                x += unk_20;
                y += unk_30 != 0 ? 0x8c : 0;
            }
            Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void Unk_020d5e0c::vfunc_0c() {
    func_0200326c();
    func_020031c4();
    func_02003178();
}

extern "C" void func_02003414() { data_0213c8ac.func_020033a0(); }

extern "C" void func_02003404() { data_0213c8ac.func_02003394(); }

extern "C" void func_020033f4() { data_0213c8ac.func_02003384(); }

extern "C" void func_020033e4() { data_0213c8ac.func_02003374(); }

void Unk_020d5e0c::func_020033a0() {
    unk_31 = 0;
    unk_20 = data_020c6158[0];
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_32 = 1;
    func_0200331c(FALSE);
    unk_33 = 0;
    unk_34 = 0;
    unk_38 = 5;
    unk_3c = 0;
}

void Unk_020d5e0c::func_02003394() {
    unk_0c.restart();
}

void Unk_020d5e0c::func_02003384() {
    vfunc_0c();
}

void Unk_020d5e0c::func_02003374() {
    draw();
}

void Unk_020d5e0c::func_0200331c(BOOL flag) {
    unk_0c.setSeq((SpriteAnimSeq *)data_020d47a4);
    if (flag) {
        unk_0c.setPlayOnce(1);
        unk_0c.setFrame(1, 0);
        unk_0c.pause();
    } else {
        unk_0c.setPlayOnce(0);
        unk_0c.restart();
    }
    unk_33 = 0;
}

BOOL Unk_020d5e0c::func_020032e8() {
    BOOL r;
    if (unk_31 != 0 && unk_2c == 0 && unk_3c > 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        if (unk_38 != 5 && unk_38 != unk_34) {
            r = FALSE;
        }
    }
    return r;
}

void Unk_020d5e0c::func_0200326c() {
    BOOL a = MenuCtrl_IsTransitionActive() ? TRUE : FALSE;
    s32 b = MenuCtrl_GetTransitionProgressOrFull();
    if (unk_2c > 0) {
        unk_2c--;
        if (unk_2c == 0) {
            unk_33 = 1;
        }
    }
    if (unk_30 != 0) {
        if (unk_28 == 0x1000 && b < 0x1000) {
            unk_2c = 0x17;
        }
    } else if (a) {
        unk_24 = 0;
        unk_20 = data_020c6158[0];
        func_0200331c(TRUE);
        unk_2c = 0xe;
    }
    unk_30 = a;
    unk_28 = b;
}

void Unk_020d5e0c::func_020031c4() {
    if (unk_33 != 0) {
        func_0200331c(FALSE);
    }
    if (unk_32 != 0) {
        if (func_020032e8()) {
            unk_24 = 4;
            unk_20 = data_020c6158[4];
        } else {
            unk_24 = 0;
            unk_20 = data_020c6158[0];
        }
    } else if (func_020032e8()) {
        if ((u32)unk_24 < 4) {
            unk_24++;
            unk_20 = data_020c6158[unk_24];
            if (unk_24 == 4) {
                func_0200331c(FALSE);
            }
        }
    } else if (unk_24 != 0) {
        if (unk_24 == 4) {
            func_0200331c(TRUE);
        }
        unk_24--;
        unk_20 = data_020c6158[unk_24];
    }
    if (unk_3c > 0) {
        unk_3c--;
    }
    unk_0c.update();
}

void Unk_020d5e0c::func_02003178() {
    if (unk_24 == 0) {
        s32 t = unk_38;
        if (t != 5 && t != unk_34) {
            func_020118d4(t);
            unk_34 = unk_38;
            unk_38 = 5;
            BOOL b = FALSE;
            if ((u32)unk_34 <= 4 && ((1 << unk_34) & 0x19) != 0) {
                b = TRUE;
            }
            unk_32 = b;
            unk_33 = 1;
        }
    }
}

extern "C" void func_0200315c(Unk_020030d8 *p, Unk_020030d8 *other) {
    func_0206397c(p, other);
    p->unk_0b = other->unk_0b;
    p->unk_0a = other->unk_0a;
}

extern "C" void func_02003140(Unk_020030d8 *p, Unk_020030d8 *other) {
    func_02063968(p, other);
    other->unk_0b = p->unk_0b;
    other->unk_0a = p->unk_0a;
}

extern "C" Unk_020030d8 *func_02003130(Unk_020030d8 *p) {
    func_020639bc(p);
    return p;
}

extern "C" Unk_020030d8 *func_02003110(Unk_020030d8 *p, Unk_020030d8 *other) {
    func_020639bc(p);
    func_0200315c(p, other);
    return p;
}

extern "C" Unk_020030d8 *func_02003100(Unk_020030d8 *p) {
    func_020639b8(p);
    return p;
}

extern "C" void func_020030e8(Unk_020030d8 *p) {
    func_020639a0(p);
    p->unk_0b = 0xff;
    p->unk_0a = 6;
}

extern "C" void func_020030d8(Unk_020030d8 *dst, Unk_020030d8 *src) {
    MI_CpuCopy8(src, dst, 0xc);
}

