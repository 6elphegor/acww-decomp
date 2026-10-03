#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
void func_02002ab8(void);
void Snd_CreateScene(void);
void func_0208e9a8(void);
u32 func_0209c08c(void);
void func_020a4414(u32 a, u32 b, u32 c, u32 d);
u32 func_020a5ec8(void);
void func_020a5ed8(u32 x);
void func_020b5408(void);
void func_020b541c(void);
extern u32 data_021c5388;
}

struct Unk_020cbb18 {
    u8 unk_00[0x64];
    u32 unk_64;
    BOOL func_02072e88(s32 i);
};

extern Unk_020cbb18 *data_020cbb18;

// Intermediate game-state class with an inline constructor that sets flags
class Unk_020e2988 : public GameProc {
public:
    Unk_020e2988() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Unk_020e2988() {}
};

class Unk_020e40cc : public Unk_020e2988 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Unk_020e40cc() {}

    void func_020b4704();
    void func_020b4708();
    void func_020b4728();

    /* 0x50 */ s32 unk_50;
};

extern "C" Unk_020e40cc *func_020b4748(void) { return new Unk_020e40cc; }

void Unk_020e40cc::func_020b4728() {
    if (func_020a5ec8() == 0xb) {
        func_020a5ed8(0xc);
        func_020b4708();
    }
}

void Unk_020e40cc::func_020b4708() {
    func_020a4414(6, 3, func_0209c08c(), 1);
    unk_50 = 2;
}

void Unk_020e40cc::func_020b4704() {}

BOOL Unk_020e40cc::vfunc_00() {
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64)) {
        unk_50 = 0;
    } else {
        unk_50 = 1;
    }
    Snd_CreateScene();
    func_020b541c();
    func_02002ab8();
    func_0208e9a8();
    return TRUE;
}

BOOL Unk_020e40cc::vfunc_0c() {
    data_021c5388 = 0;
    func_020b5408();
    return TRUE;
}

BOOL Unk_020e40cc::onExecute() {
    typedef void (Unk_020e40cc::*Fn)();
    Fn dead = &Unk_020e40cc::func_020b4728;
    static Fn table[3] = {&Unk_020e40cc::func_020b4728, &Unk_020e40cc::func_020b4708, &Unk_020e40cc::func_020b4704};
    (this->*table[unk_50])();
    return TRUE;
}

BOOL Unk_020e40cc::onDraw() { return TRUE; }
