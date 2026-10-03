#include "types.h"

extern "C" {
void GX_LoadOBJPltt(void *a, u32 b, u32 c);
}

extern const s32 data_020cf63c[];
extern u8 data_020cf650[];
extern u8 data_020d467c[];

struct SpriteAnimSeq;

struct Unk_02089240_Rec {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

// Sub-object (ctor 0x02089270, dtor 0x0208926c)
class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    BOOL isFinished();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    Unk_02089240_Rec *getSeq();
    void *getCell();
    void setFrame(s32 a, s32 b);
    void setSpeed(s32 v);
    void setPlayOnce(s32 v);
    void setSeq(SpriteAnimSeq *v);

    /* 0x00 */ u8 unk_00[0x14];
};

// Sub-object at +0x38 of Unk_020e0ff0 (0x34 bytes, ctor 0x02039b04, dtor 0x02039aec)
class MsgString {
public:
    MsgString();
    ~MsgString();
    void copy(MsgString *p);

    /* 0x00 */ u32 unk_00[13];
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

class Unk_0208d0bc {
public:
    void func_0208d0bc();
    void func_0208d0d4();
};

class Unk_0208d154_Sub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();

    /* 0x04 */ u8 unk_04[0x2c];
    /* 0x30 */ s32 unk_30;
};

class Unk_020e0ff0 : public UiWidget {
public:
    typedef void (Unk_020e0ff0::*Fn)();

    Unk_020e0ff0();
    virtual ~Unk_020e0ff0();
    virtual void draw();
    virtual void vfunc_0c();

    void func_0208d154();
    void func_0208d1bc();
    void func_0208d1ec();
    void func_0208d214();
    void func_0208d220();
    void func_0208d234();
    void func_0208d244();
    void func_0208d278();
    void func_0208d28c();
    void func_0208d2b8();
    static void func_0208d2c4();
    BOOL func_0208d2d8();
    BOOL func_0208d2f0();
    void func_0208d308(void *p);
    void func_0208d314(s32 a, s32 b);
    void func_0208d31c();
    void func_0208d324(s32 a);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ MsgString unk_38;
    /* 0x6c */ Unk_0208d154_Sub *unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ s32 unk_74;
    /* 0x78 */ s32 unk_78;
    /* 0x7c */ u8 unk_7c;
};

void Unk_020e0ff0::func_0208d324(s32 a) {
    unk_0c = a;
    unk_10 = data_020cf63c[a];
    func_0208d1bc();
}

void Unk_020e0ff0::func_0208d31c() {
    ((Unk_0208d0bc *)this)->func_0208d0bc();
}

void Unk_020e0ff0::func_0208d314(s32 a, s32 b) {
    unk_28 = a;
    unk_2c = b;
}

void Unk_020e0ff0::func_0208d308(void *p) {
    unk_38.copy((MsgString *)p);
}

BOOL Unk_020e0ff0::func_0208d2f0() {
    BOOL r;
    if (unk_70 == 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        unk_74 = 2;
    }
    return r;
}

BOOL Unk_020e0ff0::func_0208d2d8() {
    BOOL r;
    if (unk_70 != 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        unk_74 = 0;
    }
    return r;
}

void Unk_020e0ff0::func_0208d2c4() {
    GX_LoadOBJPltt(data_020cf650, 0xbc, 2);
}

void Unk_020e0ff0::func_0208d2b8() {
    unk_70 = 0;
    unk_7c = 0;
}

void Unk_020e0ff0::func_0208d28c() {
    if (unk_74 != 0) {
        if (unk_0c == 4) {
            func_0208d2c4();
        }
        ((Unk_0208d0bc *)this)->func_0208d0d4();
        func_0208d154();
        func_0208d278();
    }
}

void Unk_020e0ff0::func_0208d278() {
    unk_70 = 1;
    unk_7c = 1;
    unk_78 = 3;
    unk_30 = 5;
}

void Unk_020e0ff0::func_0208d244() {
    if (unk_78 > 2) {
        unk_30 -= 6;
    } else {
        unk_30 += 2;
    }
    unk_78 = unk_78 - 1;
    if (unk_78 <= 0) {
        unk_30 = 0;
        func_0208d234();
    }
}

void Unk_020e0ff0::func_0208d234() {
    unk_70 = 2;
    unk_7c = 1;
    unk_78 = 2;
}

void Unk_020e0ff0::func_0208d220() {
    if (unk_74 == 0) {
        func_0208d214();
    }
}

void Unk_020e0ff0::func_0208d214() {
    unk_70 = 3;
    unk_7c = 1;
}

void Unk_020e0ff0::func_0208d1ec() {
    unk_30 += 11;
    unk_78 = unk_78 - 1;
    if (unk_78 <= 0) {
        ((Unk_0208d0bc *)this)->func_0208d0bc();
        func_0208d2b8();
    }
}

void Unk_020e0ff0::func_0208d1bc() {
    unk_14.setSeq((SpriteAnimSeq *)(data_020d467c + unk_10 * 8));
    unk_14.setPlayOnce(1);
    unk_14.setSpeed(0);
}

void Unk_020e0ff0::func_0208d154() {
    if (unk_6c != 0) {
        s32 len = unk_6c->vfunc_0c();
        u32 n = (u32)(len + 7) >> 3;
        s32 idx = unk_14.getSeq()->unk_04 - 1;
        s32 t = n - 1;
        if (t < 0) {
            idx = 0;
        } else if (t <= idx) {
            idx = t;
        }
        unk_14.setFrame(idx, 0);
        unk_6c->unk_30 = (u32)(n * 8 - len) >> 1;
        if (unk_0c == 0) {
            unk_34 = 0;
        } else {
            s32 q = idx << 2;
            q = -q;
            unk_34 = q + 0x24;
        }
    }
}

