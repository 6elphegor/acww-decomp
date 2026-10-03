#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
void AbAllObjGfx_Upload(void);
void Snd_CreateScene(void);
void func_0208e9a8(void);
u32 func_0209c08c(void);
void Scene_Request(u32 a, u32 b, u32 c, u32 d);
u32 NetArea_GetMoveState(void);
void NetArea_SetMoveState(u32 x);
void Scene_ShutdownGraphics(void);
void Scene_SetupGraphics(void);
extern u32 gGfxFrameHooks;
}

struct CommManager {
    u8 unk_00[0x64];
    u32 unk_64;
    BOOL isSlotActive(s32 i);
};

extern CommManager *gCommManager;

// Intermediate game-state class with an inline constructor that sets flags
class SceneBase : public GameProc {
public:
    SceneBase() {
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
    virtual ~SceneBase() {}
};

class Unk_020e40cc : public SceneBase {
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
    if (NetArea_GetMoveState() == 0xb) {
        NetArea_SetMoveState(0xc);
        func_020b4708();
    }
}

void Unk_020e40cc::func_020b4708() {
    Scene_Request(6, 3, func_0209c08c(), 1);
    unk_50 = 2;
}

void Unk_020e40cc::func_020b4704() {}

BOOL Unk_020e40cc::vfunc_00() {
    if (gCommManager->isSlotActive(gCommManager->unk_64)) {
        unk_50 = 0;
    } else {
        unk_50 = 1;
    }
    Snd_CreateScene();
    Scene_SetupGraphics();
    AbAllObjGfx_Upload();
    func_0208e9a8();
    return TRUE;
}

BOOL Unk_020e40cc::vfunc_0c() {
    gGfxFrameHooks = 0;
    Scene_ShutdownGraphics();
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
