#include "types.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_0203d99c();
s32 _ZN12Unk_0206555413func_02065578Ev();
void func_02065c94(void *p);
}

// Sub-object at +0x14 of Unk_020e1164 (ctor 0x02089270, dtor 0x0208926c)
class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    void *getCell();
    void setPlayOnce(s32 v);
    void setSeq(void *v);

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

// Vtable at 0x020e1164; singleton data_021ceb80
class Unk_020e1164 : public UiWidget {
public:
    Unk_020e1164();
    virtual ~Unk_020e1164();
    virtual void draw();
    virtual void vfunc_0c();

    void func_0208ee40();
    BOOL func_0208ee94();
    void func_0208ee8c();
    void func_0208ee90();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ u8 unk_28;
};

Unk_020e1164 data_021ceb80;

// Player-slot style record (full definition in the next unit)
class Unk_0208f238 {
public:
    u8 getChecksumByte();
    void setChecksumByte(u32 v);

    /* 0x000 */ u8 unk_000[0xf4];
    /* 0x0f4 */ u8 unk_0f4;
};

class Letter {
public:
    Letter();
    ~Letter();
};

class Unk_0208f0a0 : public Letter {
public:
    Unk_0208f0a0();
    ~Unk_0208f0a0();
};

Unk_0208f0a0::Unk_0208f0a0() {}

Unk_0208f0a0::~Unk_0208f0a0() {}

extern "C" void func_0208f088(void *p) { func_02065c94(p); }

extern "C" BOOL func_0208f070() {
    if (_ZN12Unk_0206555413func_02065578Ev()) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0208f238::setChecksumByte(u32 v) { unk_0f4 = v; }

u8 Unk_0208f238::getChecksumByte() { return unk_0f4; }

extern "C" void func_0208f05c() {}

extern "C" void InputMode_Clear() { data_021ceb80.unk_0c = 0; }

extern "C" void InputMode_SetButtons() { data_021ceb80.unk_0c = 1; }

extern "C" void InputMode_SetTouch() { data_021ceb80.unk_0c = 2; }

extern "C" BOOL InputMode_IsButtons() {
    if (data_021ceb80.unk_0c == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL InputMode_IsTouch() {
    if (data_021ceb80.unk_0c == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0208f000() { data_021ceb80.func_0208ee90(); }

extern "C" void func_0208eff0() { data_021ceb80.func_0208ee8c(); }

extern "C" void func_0208efe0() { data_021ceb80.vfunc_0c(); }

extern "C" void func_0208efd0() { data_021ceb80.draw(); }

void Unk_020e1164::draw() {
    if (unk_28 != 0) {
        if (!func_0208ee94()) {
            void *h = unk_14.getCell();
            s32 x = getOriginX() + unk_14.getFrameX(-1);
            s32 y = getOriginY() + unk_14.getFrameY(-1);
            Oam_DrawCell(3, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void Unk_020e1164::vfunc_0c() {
    if (unk_28 != 0) {
        unk_14.update();
    }
    if (unk_0c != unk_10) {
        func_0208ee40();
        unk_10 = unk_0c;
    }
}

Unk_020e1164::Unk_020e1164() : unk_0c(0), unk_10(0) {
    unk_28 = 0;
}

Unk_020e1164::~Unk_020e1164() {
}

